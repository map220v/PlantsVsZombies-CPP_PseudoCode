// Class: TourismOctoberDisplayWidget


/* TourismOctoberDisplayWidget::~TourismOctoberDisplayWidget() */

void __thiscall
TourismOctoberDisplayWidget::~TourismOctoberDisplayWidget(TourismOctoberDisplayWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06990170;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069904c0;
  UIScrollDisplayWidgetBase::~UIScrollDisplayWidgetBase((UIScrollDisplayWidgetBase *)this);
  return;
}


/* TourismOctoberDisplayWidget::~TourismOctoberDisplayWidget() */

void __thiscall
TourismOctoberDisplayWidget::~TourismOctoberDisplayWidget(TourismOctoberDisplayWidget *this)

{
  ~TourismOctoberDisplayWidget(this);
  AK::FreeHook(this);
  return;
}


/* TourismOctoberDisplayWidget::TourismOctoberDisplayWidget(int, int) */

void __thiscall
TourismOctoberDisplayWidget::TourismOctoberDisplayWidget
          (TourismOctoberDisplayWidget *this,int param_1,int param_2)

{
  UIScrollDisplayWidgetBase::UIScrollDisplayWidgetBase
            ((UIScrollDisplayWidgetBase *)this,param_1,param_2);
  *(undefined ***)this = &PTR_GetClass_06990170;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069904c0;
  return;
}


/* TourismOctoberDisplayWidget::InitView() */

void __thiscall TourismOctoberDisplayWidget::InitView(TourismOctoberDisplayWidget *this)

{
  undefined8 uVar1;
  code *pcVar2;
  
  UIScrollDisplayWidgetBase::InitView((UIScrollDisplayWidgetBase *)this);
  pcVar2 = *(code **)(*(long *)this + 800);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b937b0);
  (*pcVar2)(this,uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TourismOctoberDisplayWidget::NotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
TourismOctoberDisplayWidget::NotifyRefreshActivityList
          (TourismOctoberDisplayWidget *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_124;
  undefined8 local_120;
  ActiveItem aAStack_118 [8];
  undefined4 local_110;
  char local_100;
  undefined8 local_98 [18];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_124 = 0x2a8c;
    local_120 = std::set<int,std::less<int>,std::allocator<int>>::find
                          ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_124);
    local_98[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_120,(rbtree_iterator *)local_98);
    if ((bVar1) && (this[0xec] != (TourismOctoberDisplayWidget)0x0)) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_04c615f4(local_110);
      if ((cVar2 != '\0') &&
         ((local_100 != '\0' && (this[0xec] != (TourismOctoberDisplayWidget)0x0)))) {
        TourismOctoberData::TourismOctoberData((TourismOctoberData *)local_98);
        cVar2 = ActiveItem::GetDataSerialized(aAStack_118,(RtObject *)local_98);
        if (cVar2 != '\0') {
          UISingletonDialog<UITourismOctober>::ShowDialog();
        }
        this[0xec] = (TourismOctoberDisplayWidget)0x0;
        TourismOctoberData::~TourismOctoberData((TourismOctoberData *)local_98);
      }
      ActiveItem::~ActiveItem(aAStack_118);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TourismOctoberDisplayWidget::ButtonClick() */

void __thiscall TourismOctoberDisplayWidget::ButtonClick(TourismOctoberDisplayWidget *this)

{
  ActivityManager *this_00;
  
  UIScrollDisplayWidgetBase::ButtonClick((UIScrollDisplayWidgetBase *)this);
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a8c,true,0);
  return;
}

