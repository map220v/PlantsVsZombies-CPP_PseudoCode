// Class: CarnivalDisplayWidget


/* CarnivalDisplayWidget::~CarnivalDisplayWidget() */

void __thiscall CarnivalDisplayWidget::~CarnivalDisplayWidget(CarnivalDisplayWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0698e470;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698e7c0;
  UIScrollDisplayWidgetBase::~UIScrollDisplayWidgetBase((UIScrollDisplayWidgetBase *)this);
  return;
}


/* CarnivalDisplayWidget::~CarnivalDisplayWidget() */

void __thiscall CarnivalDisplayWidget::~CarnivalDisplayWidget(CarnivalDisplayWidget *this)

{
  ~CarnivalDisplayWidget(this);
  AK::FreeHook(this);
  return;
}


/* CarnivalDisplayWidget::CarnivalDisplayWidget(int, int) */

void __thiscall
CarnivalDisplayWidget::CarnivalDisplayWidget(CarnivalDisplayWidget *this,int param_1,int param_2)

{
  UIScrollDisplayWidgetBase::UIScrollDisplayWidgetBase
            ((UIScrollDisplayWidgetBase *)this,param_1,param_2);
  *(undefined ***)this = &PTR_GetClass_0698e470;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698e7c0;
  return;
}


/* CarnivalDisplayWidget::InitView() */

void __thiscall CarnivalDisplayWidget::InitView(CarnivalDisplayWidget *this)

{
  undefined8 uVar1;
  code *pcVar2;
  
  UIScrollDisplayWidgetBase::InitView((UIScrollDisplayWidgetBase *)this);
  pcVar2 = *(code **)(*(long *)this + 800);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b935b8);
  (*pcVar2)(this,uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarnivalDisplayWidget::NotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
CarnivalDisplayWidget::NotifyRefreshActivityList
          (CarnivalDisplayWidget *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_9c = 0x2a6a;
    local_98 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_9c);
    local_90 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
    if (bVar1) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_04c615f4(local_80);
      if (((cVar2 != '\0') && (local_70 != '\0')) && (this[0xec] != (CarnivalDisplayWidget)0x0)) {
        lVar4 = UISingletonDialog<UICarnival>::GetSingletonPtr();
        if (lVar4 == 0) {
          UISingletonDialog<UICarnival>::ShowDialog();
          this[0xec] = (CarnivalDisplayWidget)0x0;
        }
        else {
          this[0xec] = (CarnivalDisplayWidget)0x0;
        }
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


/* CarnivalDisplayWidget::ButtonClick() */

void __thiscall CarnivalDisplayWidget::ButtonClick(CarnivalDisplayWidget *this)

{
  ActivityManager *this_00;
  
  UIScrollDisplayWidgetBase::ButtonClick((UIScrollDisplayWidgetBase *)this);
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a6a,true,0);
  return;
}

