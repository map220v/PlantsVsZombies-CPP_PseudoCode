// Class: NighttheToyDisplayWidget


/* NighttheToyDisplayWidget::~NighttheToyDisplayWidget() */

void __thiscall NighttheToyDisplayWidget::~NighttheToyDisplayWidget(NighttheToyDisplayWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06990510;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06990860;
  UIScrollDisplayWidgetBase::~UIScrollDisplayWidgetBase((UIScrollDisplayWidgetBase *)this);
  return;
}


/* NighttheToyDisplayWidget::~NighttheToyDisplayWidget() */

void __thiscall NighttheToyDisplayWidget::~NighttheToyDisplayWidget(NighttheToyDisplayWidget *this)

{
  ~NighttheToyDisplayWidget(this);
  AK::FreeHook(this);
  return;
}


/* NighttheToyDisplayWidget::NighttheToyDisplayWidget(int, int) */

void __thiscall
NighttheToyDisplayWidget::NighttheToyDisplayWidget
          (NighttheToyDisplayWidget *this,int param_1,int param_2)

{
  UIScrollDisplayWidgetBase::UIScrollDisplayWidgetBase
            ((UIScrollDisplayWidgetBase *)this,param_1,param_2);
  *(undefined ***)this = &PTR_GetClass_06990510;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06990860;
  return;
}


/* NighttheToyDisplayWidget::InitView() */

void __thiscall NighttheToyDisplayWidget::InitView(NighttheToyDisplayWidget *this)

{
  undefined8 uVar1;
  code *pcVar2;
  
  UIScrollDisplayWidgetBase::InitView((UIScrollDisplayWidgetBase *)this);
  pcVar2 = *(code **)(*(long *)this + 800);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b935e0);
  (*pcVar2)(this,uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NighttheToyDisplayWidget::NotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
NighttheToyDisplayWidget::NotifyRefreshActivityList
          (NighttheToyDisplayWidget *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_9c = 0x2a8e;
    local_98 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_9c);
    local_90 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
    if ((bVar1) && (this[0xec] != (NighttheToyDisplayWidget)0x0)) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_04c615f4(local_80);
      if ((cVar2 != '\0') && ((local_70 != '\0' && (this[0xec] != (NighttheToyDisplayWidget)0x0))))
      {
        this[0xec] = (NighttheToyDisplayWidget)0x0;
      }
      ActiveItem::~ActiveItem(aAStack_88);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NighttheToyDisplayWidget::ButtonClick() */

void __thiscall NighttheToyDisplayWidget::ButtonClick(NighttheToyDisplayWidget *this)

{
  ActivityManager *this_00;
  
  UIScrollDisplayWidgetBase::ButtonClick((UIScrollDisplayWidgetBase *)this);
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a8e,true,0);
  return;
}

