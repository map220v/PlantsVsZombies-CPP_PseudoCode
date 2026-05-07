// Class: MiniGameRewardLine


/* MiniGameRewardLine::~MiniGameRewardLine() */

void __thiscall MiniGameRewardLine::~MiniGameRewardLine(MiniGameRewardLine *this)

{
  *(undefined ***)this = &PTR_GetClass_066b4a40;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066b4d68;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0xf0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* MiniGameRewardLine::~MiniGameRewardLine() */

void __thiscall MiniGameRewardLine::~MiniGameRewardLine(MiniGameRewardLine *this)

{
  ~MiniGameRewardLine(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameRewardLine::Obtained(int) */

void __thiscall MiniGameRewardLine::Obtained(MiniGameRewardLine *this,int param_1)

{
  PVZ2UIButton *this_00;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xe0) == param_1) {
    this_00 = *(PVZ2UIButton **)(this + 0xe8);
    TodStringTranslate(L"[PLANT_OBTAINED]");
    PVZ2UIButton::SetLabelText(this_00,awStack_10);
    FUN_05476c50(awStack_10);
    (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8),1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameRewardLine::Draw(Sexy::Graphics*) */

void __thiscall MiniGameRewardLine::Draw(MiniGameRewardLine *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab6d78);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  TodStringTranslate(L"[CUMULATIVE_SCORE_OBTAIN]");
  iVar1 = FUN_038b4cfc(0x19);
  iVar2 = FUN_038b4cfc(5);
  iVar3 = FUN_038b4cfc(0x82);
  iVar4 = FUN_038b4cfc(0x28);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  iVar1 = FUN_038b4cfc(0x41);
  iVar2 = FUN_038b4cfc(0x32);
  iVar3 = FUN_038b4cfc(100);
  iVar4 = FUN_038b4cfc(0x1e);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xf0,aIStack_28,uVar5,aIStack_18,3,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameRewardLine::MiniGameRewardLine() */

void __thiscall MiniGameRewardLine::MiniGameRewardLine(MiniGameRewardLine *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066b4a40;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066b4d68;
  FUN_05476574(this + 0xf0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,Obtained);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MiniGameRewardLine,void(MiniGameRewardLine::*)(int)>>
            ((MessageRouter *)puVar1,Message::ObtainedReward,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameRewardLine::InitView(int, MiniGameRewardData const&) */

void __thiscall
MiniGameRewardLine::InitView(MiniGameRewardLine *this,int param_1,MiniGameRewardData *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  ulong uVar9;
  PVZ2UIButton *pPVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  string asStack_78 [56];
  wstring awStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe0) = param_1;
  Sexy::StrFormat("x%d",asStack_78,(ulong)*(uint *)param_2);
  Sexy::ToWString(asStack_78);
  FUN_054766c8(this + 0xf0,awStack_40);
  FUN_05476c50(awStack_40);
  std::string::~string(asStack_78);
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)param_2;
  uVar11 = 0;
  while( true ) {
    uVar13 = *(undefined8 *)(param_2 + 8);
    uVar9 = FUN_038b3ef4(uVar13,*(undefined8 *)(param_2 + 0x10));
    if (uVar9 <= uVar11) break;
    piVar8 = (int *)FUN_038b3f88(uVar13,uVar11);
    plVar12 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar8,piVar8[1],true);
    iVar7 = FUN_038b4cfc(0x163);
    iVar1 = FUN_038b4cfc(0x41);
    iVar2 = FUN_038b4cfc(0xf);
    uVar3 = FUN_038b4cfc(10);
    (**(code **)(*plVar12 + 0x198))(plVar12,iVar7 + (iVar1 + iVar2) * (int)uVar11,uVar3,iVar1,iVar1)
    ;
    (**(code **)(*(long *)this + 0x60))(this,plVar12);
    uVar11 = uVar11 + 1;
  }
  TodStringTranslate(L"[PLANT_OBTAIN]");
  Sexy::Color::Color((Color *)awStack_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar10,0x516,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)awStack_40
            );
  *(PVZ2UIButton **)(this + 0xe8) = pPVar10;
  FUN_05476c50(asStack_78);
  pPVar10 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ab7010,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_40,&DAT_06ab7188,3);
  PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)awStack_40);
  plVar12 = *(long **)(this + 0xe8);
  uVar3 = FUN_038b4cfc(0x208);
  uVar4 = FUN_038b4cfc(0x12);
  uVar5 = FUN_038b4cfc(100);
  uVar6 = FUN_038b4cfc(0x32);
  (**(code **)(*plVar12 + 0x198))(plVar12,uVar3,uVar4,uVar5,uVar6);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  iVar7 = MiniGameCollectionUtils::GetTotalScore();
  plVar12 = *(long **)(this + 0xe8);
  if (iVar7 < *(int *)param_2) {
    (**(code **)(*plVar12 + 0x188))(plVar12,1);
  }
  else {
    (**(code **)(*plVar12 + 0x188))(plVar12,0);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    pPVar10 = *(PVZ2UIButton **)(this + 0xe8);
    TodStringTranslate(L"[PLANT_OBTAINED]");
    PVZ2UIButton::SetLabelText(pPVar10,awStack_40);
    FUN_05476c50(awStack_40);
    (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8),1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameRewardLine::ButtonDepress(int) */

void __thiscall MiniGameRewardLine::ButtonDepress(MiniGameRewardLine *this,int param_1)

{
  MiniGameCollectionNetworkMgr *this_00;
  
  if (param_1 != 0x516) {
    return;
  }
  this_00 = (MiniGameCollectionNetworkMgr *)
            Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
  MiniGameCollectionNetworkMgr::RequestReward(this_00,*(int *)(this + 0xe0));
  return;
}


/* non-virtual thunk to MiniGameRewardLine::ButtonDepress(int) */

void __thiscall MiniGameRewardLine::ButtonDepress(MiniGameRewardLine *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

