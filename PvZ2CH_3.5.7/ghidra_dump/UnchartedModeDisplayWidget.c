// Class: UnchartedModeDisplayWidget


/* UnchartedModeDisplayWidget::~UnchartedModeDisplayWidget() */

void __thiscall
UnchartedModeDisplayWidget::~UnchartedModeDisplayWidget(UnchartedModeDisplayWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0698dd30;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698e080;
  FUN_05476c50(this + 0x108);
  UIScrollDisplayWidgetBase::~UIScrollDisplayWidgetBase((UIScrollDisplayWidgetBase *)this);
  return;
}


/* UnchartedModeDisplayWidget::~UnchartedModeDisplayWidget() */

void __thiscall
UnchartedModeDisplayWidget::~UnchartedModeDisplayWidget(UnchartedModeDisplayWidget *this)

{
  ~UnchartedModeDisplayWidget(this);
  AK::FreeHook(this);
  return;
}


/* UnchartedModeDisplayWidget::UnchartedModeDisplayWidget(int, int) */

void __thiscall
UnchartedModeDisplayWidget::UnchartedModeDisplayWidget
          (UnchartedModeDisplayWidget *this,int param_1,int param_2)

{
  UIScrollDisplayWidgetBase::UIScrollDisplayWidgetBase
            ((UIScrollDisplayWidgetBase *)this,param_1,param_2);
  *(undefined ***)this = &PTR_GetClass_0698dd30;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698e080;
  FUN_05476574(this + 0x108);
  Sexy::Insets::Insets((Insets *)(this + 0x110));
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  FUN_054772c4(this + 0x108,&DAT_056f11a8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeDisplayWidget::InitView() */

void __thiscall UnchartedModeDisplayWidget::InitView(UnchartedModeDisplayWidget *this)

{
  string *psVar1;
  bool bVar2;
  undefined8 uVar3;
  UnchartedModeNetworkMgr *this_00;
  long lVar4;
  code *pcVar5;
  undefined1 auVar6 [12];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIScrollDisplayWidgetBase::InitView((UIScrollDisplayWidgetBase *)this);
  pcVar5 = *(code **)(*(long *)this + 800);
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b93758);
  (*pcVar5)(this,uVar3);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(*(int *)(this + 0x50) / 3) * 2,(*(int *)(this + 0x54) / 5) * 4,
             *(int *)(this + 0x50) / 3,*(int *)(this + 0x54) / 5);
  *(undefined8 *)(this + 0x110) = local_18;
  *(undefined8 *)(this + 0x118) = uStack_10;
  Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::GetTimeLimitWorld();
  Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::GetScrollBannerWorldName();
  bVar2 = std::operator==(asStack_30,"");
  if ((!bVar2) || (bVar2 = std::operator==(asStack_28,""), !bVar2)) {
    bVar2 = std::operator==(asStack_30,"");
    psVar1 = asStack_28;
    if (!bVar2) {
      psVar1 = asStack_30;
    }
    FUN_05475d88(asStack_20,psVar1);
    this_00 = (UnchartedModeNetworkMgr *)
              Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
    lVar4 = UnchartedModeNetworkMgr::GetWorldEndTime(this_00,asStack_20);
    auVar6 = LawnApp::GetRealServerTime(gLawnApp);
    StringHelper::ToTimeString
              ((StringHelper *)&DAT_00000004,(float)(lVar4 - auVar6._0_8_),auVar6._8_4_);
    FUN_054766c8(this + 0x108,(Insets *)&local_18);
    FUN_05476c50((Insets *)&local_18);
    std::string::~string(asStack_20);
  }
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeDisplayWidget::NotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
UnchartedModeDisplayWidget::NotifyRefreshActivityList
          (UnchartedModeDisplayWidget *this,bool param_1,set *param_2)

{
  string *psVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  UnchartedModeNetworkMgr *pUVar6;
  undefined8 uVar7;
  undefined1 auVar8 [12];
  string asStack_a8 [8];
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined8 local_90;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_a0[0] = 0x2a61;
    local_98 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)local_a0);
    local_90 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
    if (bVar2) {
      iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar4);
      cVar3 = FUN_04c615f4(local_80);
      if ((cVar3 != '\0') && (local_70 != '\0')) {
        Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
        UnchartedModeNetworkMgr::GetTimeLimitWorld();
        Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
        UnchartedModeNetworkMgr::GetScrollBannerWorldName();
        bVar2 = std::operator==(asStack_a8,"");
        psVar1 = (string *)local_a0;
        if (!bVar2) {
          psVar1 = asStack_a8;
        }
        FUN_05475d88((rbtree_iterator *)&local_98,psVar1);
        bVar2 = std::operator!=((string *)&local_98,"");
        if (bVar2) {
          pUVar6 = (UnchartedModeNetworkMgr *)
                   Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
          cVar3 = UnchartedModeNetworkMgr::IsWorldOpen(pUVar6,(string *)&local_98);
          if (cVar3 != '\0') {
            pUVar6 = (UnchartedModeNetworkMgr *)
                     Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
            lVar5 = UnchartedModeNetworkMgr::GetWorldEndTime(pUVar6,(string *)&local_98);
            auVar8 = LawnApp::GetRealServerTime(gLawnApp);
            StringHelper::ToTimeString
                      ((StringHelper *)&DAT_00000004,(float)(lVar5 - auVar8._0_8_),auVar8._8_4_);
            FUN_054766c8(this + 0x108,(rbtree_iterator *)&local_90);
            FUN_05476c50((rbtree_iterator *)&local_90);
            uVar7 = FUN_054766ec(this + 0x108);
            Sexy::OutputDebugStrF(L"UnchartedModeDisplayWidget left string = %s",uVar7);
          }
        }
        if (this[0xec] != (UnchartedModeDisplayWidget)0x0) {
          lVar5 = UISingletonDialog<UIUnchartedEntry>::GetSingletonPtr();
          if (lVar5 == 0) {
            UISingletonDialog<UIUnchartedEntry>::ShowDialog();
          }
          this[0xec] = (UnchartedModeDisplayWidget)0x0;
        }
        std::string::~string((string *)&local_98);
        std::string::~string((string *)local_a0);
        std::string::~string(asStack_a8);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeDisplayWidget::Draw(Sexy::Graphics*) */

void __thiscall UnchartedModeDisplayWidget::Draw(UnchartedModeDisplayWidget *this,Graphics *param_1)

{
  undefined8 uVar1;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIScrollDisplayWidgetBase::Draw((UIScrollDisplayWidgetBase *)this,param_1);
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,this + 0x108,this + 0x110,uVar1,aCStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UnchartedModeDisplayWidget::ButtonClick() */

void __thiscall UnchartedModeDisplayWidget::ButtonClick(UnchartedModeDisplayWidget *this)

{
  ActivityManager *this_00;
  
  UIScrollDisplayWidgetBase::ButtonClick((UIScrollDisplayWidgetBase *)this);
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a61,true,0);
  return;
}

