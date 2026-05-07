// Class: BossChallengeInfo


/* BossChallengeInfo::ScrollTargetReached(Sexy::ScrollWidget*) */

void BossChallengeInfo::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to BossChallengeInfo::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
BossChallengeInfo::ScrollTargetReached(BossChallengeInfo *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* BossChallengeInfo::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void BossChallengeInfo::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to BossChallengeInfo::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
BossChallengeInfo::ScrollTargetInterrupted(BossChallengeInfo *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallengeInfo::~BossChallengeInfo() */

void __thiscall BossChallengeInfo::~BossChallengeInfo(BossChallengeInfo *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR__BossChallengeInfo_0697fdb0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0697fa80;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_BossChallenge");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to BossChallengeInfo::~BossChallengeInfo() */

void __thiscall BossChallengeInfo::~BossChallengeInfo(BossChallengeInfo *this)

{
  ~BossChallengeInfo(this + -0xd8);
  return;
}


/* BossChallengeInfo::~BossChallengeInfo() */

void __thiscall BossChallengeInfo::~BossChallengeInfo(BossChallengeInfo *this)

{
  ~BossChallengeInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BossChallengeInfo::~BossChallengeInfo() */

void __thiscall BossChallengeInfo::~BossChallengeInfo(BossChallengeInfo *this)

{
  ~BossChallengeInfo(this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallengeInfo::InitRankList(std::vector<BossChallengeRankServerData,
   std::allocator<BossChallengeRankServerData> > const&) */

void __thiscall BossChallengeInfo::InitRankList(BossChallengeInfo *this,vector *param_1)

{
  bool bVar1;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  ulong uVar2;
  BossChallengeRankServerData *pBVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xe0) != 0) {
    (**(code **)(*(long *)this + 0x68))();
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0xe0));
    *(undefined8 *)(this + 0xe0) = 0;
  }
  lVar6 = 0;
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xd8));
  *(PVZ2UIScrollingWidget **)(this + 0xe0) = this_00;
  fVar7 = (float)FUN_04bfecc8(0x43420000);
  fVar8 = (float)FUN_04bfecc8(0x442c8000);
  fVar9 = (float)FUN_04bfecc8(0x437a0000);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,0,(int)fVar7,(int)fVar8,(int)fVar9);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0xe0),2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  uVar2 = FUN_04bfec60(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  fVar7 = (float)FUN_04bfecc8(0x442c8000);
  fVar8 = (float)FUN_04bfecc8((float)uVar2 * 66.0);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,0,0,(int)fVar7,(int)fVar8);
  (**(code **)(**(long **)(this + 0xe0) + 0x60))(*(long **)(this + 0xe0),this_01);
  local_18 = FUN_04bff144(*(undefined8 *)param_1);
  fVar7 = 0.0;
  while( true ) {
    local_10 = FUN_04bff194(*(undefined8 *)(param_1 + 8));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    pBVar3 = (BossChallengeRankServerData *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    lVar4 = FUN_04bfec60(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
    bVar1 = lVar6 == lVar4 + -1;
    lVar6 = lVar6 + 1;
    plVar5 = (long *)BossChallengeInfoRankItem::Create(pBVar3,bVar1);
    fVar8 = (float)FUN_04bfecc8(0x41500000);
    fVar9 = (float)FUN_04bfecc8(fVar7);
    (**(code **)(*plVar5 + 0x1a8))(plVar5,(int)fVar8,(int)fVar9);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,plVar5);
    FUN_04bff1e4((exception_ptr *)&local_18);
    fVar7 = fVar7 + 66.0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallengeInfo::Draw(Sexy::Graphics*) */

void __thiscall BossChallengeInfo::Draw(BossChallengeInfo *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04bfecb4();
  fVar3 = (float)FUN_04bfecc8(0x41880000);
  fVar4 = (float)FUN_04bfecc8(0x442c8000);
  fVar5 = (float)FUN_04bfecc8(0x42e00000);
  Sexy::Insets::Insets(aIStack_18,iVar1,(int)fVar3,(int)fVar4,(int)fVar5);
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d388);
  Draw9SliceImage(param_1,aIStack_18,uVar2);
  iVar1 = FUN_04bfecb4();
  fVar3 = (float)FUN_04bfecc8(0x430a0000);
  fVar4 = (float)FUN_04bfecc8(0x442c8000);
  fVar5 = (float)FUN_04bfecc8(0x43a30000);
  Sexy::Insets::Insets(aIStack_18,iVar1,(int)fVar3,(int)fVar4,(int)fVar5);
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d3e8);
  Draw9SliceImage(param_1,aIStack_18,uVar2);
  TodStringTranslate(L"[BOSS_CHALLENGE_INFO1]");
  fVar3 = (float)FUN_04bfecc8(0x41880000);
  fVar4 = (float)FUN_04bfecc8(0x44284000);
  fVar5 = (float)FUN_04bfecc8(0x423d5555);
  Sexy::Insets::Insets(aIStack_28,(int)fVar3,(int)fVar3,(int)fVar4,(int)fVar5);
  uVar2 = PrimeText_Game::Typeface_FZCuYuan_20;
  Sexy::Color::Color((Color *)aIStack_18,0x49,0x27,0);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar2,aIStack_18,3,1);
  FUN_05476c50(auStack_30);
  TodStringTranslate(L"[BOSS_CHALLENGE_INFO2]");
  fVar3 = (float)FUN_04bfecc8(0x41880000);
  fVar4 = (float)FUN_04bfecc8(0x42595555);
  fVar5 = (float)FUN_04bfecc8(0x44284000);
  fVar6 = (float)FUN_04bfecc8(0x42155555);
  Sexy::Insets::Insets(aIStack_28,(int)fVar3,(int)fVar4,(int)fVar5,(int)fVar6);
  uVar2 = PrimeText_Game::Typeface_FZCuYuan_20;
  Sexy::Color::Color((Color *)aIStack_18,0x49,0x27,0);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar2,aIStack_18,3,1);
  FUN_05476c50(auStack_30);
  TodStringTranslate(L"[BOSS_CHALLENGE_INFO3]");
  fVar3 = (float)FUN_04bfecc8(0x41880000);
  fVar4 = (float)FUN_04bfecc8(0x42b75555);
  fVar5 = (float)FUN_04bfecc8(0x44284000);
  fVar6 = (float)FUN_04bfecc8(0x41daaaaa);
  Sexy::Insets::Insets(aIStack_28,(int)fVar3,(int)fVar4,(int)fVar5,(int)fVar6);
  uVar2 = PrimeText_Game::Typeface_FZCuYuan_20;
  Sexy::Color::Color((Color *)aIStack_18,0x49,0x27,0);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar2,aIStack_18,3,1);
  FUN_05476c50(auStack_30);
  TodStringTranslate(L"[BOSS_CHALLENGE_TITLE]");
  fVar3 = (float)FUN_04bfecc8(0x435c0000);
  fVar4 = (float)FUN_04bfecc8(0x430d0000);
  fVar5 = (float)FUN_04bfecc8(0x437a0000);
  fVar6 = (float)FUN_04bfecc8(0x42440000);
  Sexy::Insets::Insets(aIStack_28,(int)fVar3,(int)fVar4,(int)fVar5,(int)fVar6);
  uVar2 = PrimeText_Game::Typeface_FZShaoEr_34_ThickOutline;
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar2,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallengeInfo::GetRankServerData() const */

void __thiscall BossChallengeInfo::GetRankServerData(BossChallengeInfo *this)

{
  int iVar1;
  vector<BossChallengeRankServerData,std::allocator<BossChallengeRankServerData>> *in_x8;
  BossChallengeServerData aBStack_d8 [32];
  vector avStack_b8 [48];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar1);
  BossChallengeServerData::BossChallengeServerData(aBStack_d8);
  ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aBStack_d8);
  std::vector<BossChallengeRankServerData,std::allocator<BossChallengeRankServerData>>::vector
            (in_x8,avStack_b8);
  BossChallengeServerData::~BossChallengeServerData(aBStack_d8);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallengeInfo::BossChallengeInfo() */

void __thiscall BossChallengeInfo::BossChallengeInfo(BossChallengeInfo *this)

{
  LawnApp *this_00;
  float fVar1;
  float fVar2;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  *(undefined ***)(this + 0xd8) = &PTR__BossChallengeInfo_0697fdb0;
  *(undefined ***)this = &PTR_GetClass_0697fa80;
  this_00 = gLawnApp;
  std::string::string(asStack_20,"UI_BossChallenge");
  LawnApp::LoadGroup(this_00,asStack_20);
  std::string::~string(asStack_20);
  nop();
  *(undefined8 *)(this + 0xe0) = 0;
  fVar1 = (float)FUN_04bfecc8(0x442c8000);
  fVar2 = (float)FUN_04bfecc8(0x43ed0000);
  Sexy::Widget::Resize((Widget *)this,0,0,(int)fVar1,(int)fVar2);
  GetRankServerData(this);
  InitRankList(this,(vector *)asStack_20);
  std::vector<BossChallengeRankServerData,std::allocator<BossChallengeRankServerData>>::~vector
            ((vector<BossChallengeRankServerData,std::allocator<BossChallengeRankServerData>> *)
             asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

