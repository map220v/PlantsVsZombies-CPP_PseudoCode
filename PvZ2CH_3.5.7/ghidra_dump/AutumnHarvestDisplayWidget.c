// Class: AutumnHarvestDisplayWidget


/* AutumnHarvestDisplayWidget::~AutumnHarvestDisplayWidget() */

void __thiscall
AutumnHarvestDisplayWidget::~AutumnHarvestDisplayWidget(AutumnHarvestDisplayWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0698fdd0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06990120;
  UIScrollDisplayWidgetBase::~UIScrollDisplayWidgetBase((UIScrollDisplayWidgetBase *)this);
  return;
}


/* AutumnHarvestDisplayWidget::~AutumnHarvestDisplayWidget() */

void __thiscall
AutumnHarvestDisplayWidget::~AutumnHarvestDisplayWidget(AutumnHarvestDisplayWidget *this)

{
  ~AutumnHarvestDisplayWidget(this);
  AK::FreeHook(this);
  return;
}


/* AutumnHarvestDisplayWidget::AutumnHarvestDisplayWidget(int, int) */

void __thiscall
AutumnHarvestDisplayWidget::AutumnHarvestDisplayWidget
          (AutumnHarvestDisplayWidget *this,int param_1,int param_2)

{
  UIScrollDisplayWidgetBase::UIScrollDisplayWidgetBase
            ((UIScrollDisplayWidgetBase *)this,param_1,param_2);
  *(undefined ***)this = &PTR_GetClass_0698fdd0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06990120;
  return;
}


/* AutumnHarvestDisplayWidget::InitView() */

void __thiscall AutumnHarvestDisplayWidget::InitView(AutumnHarvestDisplayWidget *this)

{
  undefined8 uVar1;
  code *pcVar2;
  
  UIScrollDisplayWidgetBase::InitView((UIScrollDisplayWidgetBase *)this);
  pcVar2 = *(code **)(*(long *)this + 800);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b939f0);
  (*pcVar2)(this,uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestDisplayWidget::NotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
AutumnHarvestDisplayWidget::NotifyRefreshActivityList
          (AutumnHarvestDisplayWidget *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  AutumnHarvestMgr *this_00;
  int local_1b4;
  undefined8 local_1b0;
  ActiveItem aAStack_1a8 [8];
  undefined4 local_1a0;
  char local_190;
  undefined8 local_128 [36];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_1b4 = 0x2a8b;
    local_1b0 = std::set<int,std::less<int>,std::allocator<int>>::find
                          ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1b4);
    local_128[0] = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_1b0,(rbtree_iterator *)local_128);
    if ((bVar1) && (this[0xec] != (AutumnHarvestDisplayWidget)0x0)) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_04c615f4(local_1a0);
      if ((cVar2 != '\0') &&
         ((local_190 != '\0' && (this[0xec] != (AutumnHarvestDisplayWidget)0x0)))) {
        AutumnHarvestNetworkData::AutumnHarvestNetworkData((AutumnHarvestNetworkData *)local_128);
        cVar2 = ActiveItem::GetDataSerialized(aAStack_1a8,(RtObject *)local_128);
        if (cVar2 != '\0') {
          this_00 = (AutumnHarvestMgr *)Sexy::LazySingleton<AutumnHarvestMgr>::GetInstancePtr();
          AutumnHarvestMgr::LoadData(this_00,(AutumnHarvestNetworkData *)local_128);
          UISingletonDialog<UIAutumnHarvest>::ShowDialog();
        }
        this[0xec] = (AutumnHarvestDisplayWidget)0x0;
        AutumnHarvestNetworkData::~AutumnHarvestNetworkData((AutumnHarvestNetworkData *)local_128);
      }
      ActiveItem::~ActiveItem(aAStack_1a8);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AutumnHarvestDisplayWidget::ButtonClick() */

void __thiscall AutumnHarvestDisplayWidget::ButtonClick(AutumnHarvestDisplayWidget *this)

{
  ActivityManager *this_00;
  
  UIScrollDisplayWidgetBase::ButtonClick((UIScrollDisplayWidgetBase *)this);
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a8b,true,0);
  return;
}

