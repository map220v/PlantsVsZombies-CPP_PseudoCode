// Class: ArenaEndingUI


/* ArenaEndingUI::InitView() */

void __thiscall ArenaEndingUI::InitView(ArenaEndingUI *this)

{
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  return;
}


/* ArenaEndingUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void ArenaEndingUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ArenaEndingUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall ArenaEndingUI::ScrollTargetReached(ArenaEndingUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* ArenaEndingUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void ArenaEndingUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ArenaEndingUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall ArenaEndingUI::ScrollTargetInterrupted(ArenaEndingUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* ArenaEndingUI::OnLeagueEffectFinished(std::string const&) */

void ArenaEndingUI::OnLeagueEffectFinished(string *param_1)

{
  param_1[0x184] = (string)0x1;
  return;
}


/* ArenaEndingUI::RemoveEffectAnim() */

void __thiscall ArenaEndingUI::RemoveEffectAnim(ArenaEndingUI *this)

{
  long *plVar1;
  
  if (*(long **)(this + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x148) + 0x18))();
    *(undefined8 *)(this + 0x148) = 0;
  }
  if (*(long **)(this + 0x150) == (long *)0x0) {
    plVar1 = *(long **)(this + 0x158);
  }
  else {
    (**(code **)(**(long **)(this + 0x150) + 0x18))();
    *(undefined8 *)(this + 0x150) = 0;
    plVar1 = *(long **)(this + 0x158);
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
    *(undefined8 *)(this + 0x158) = 0;
  }
  if (*(long **)(this + 0x160) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x160) + 0x18))();
    *(undefined8 *)(this + 0x160) = 0;
  }
  if (*(long **)(this + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x168) + 0x18))();
    *(undefined8 *)(this + 0x168) = 0;
  }
  if (*(long **)(this + 0x170) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x170) + 0x18))();
    *(undefined8 *)(this + 0x170) = 0;
  }
  if (*(long **)(this + 0x178) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x178) + 0x18))();
    *(undefined8 *)(this + 0x178) = 0;
  }
  return;
}


/* ArenaEndingUI::DrawEffect(Sexy::Graphics*) */

void __thiscall ArenaEndingUI::DrawEffect(ArenaEndingUI *this,Graphics *param_1)

{
  if (*(PopAnimRig **)(this + 0x148) != (PopAnimRig *)0x0) {
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x148),param_1);
  }
  if (*(PopAnimRig **)(this + 0x150) != (PopAnimRig *)0x0) {
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x150),param_1);
  }
  if (*(PopAnimRig **)(this + 0x158) != (PopAnimRig *)0x0) {
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x158),param_1);
  }
  if (*(PopAnimRig **)(this + 0x160) != (PopAnimRig *)0x0) {
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x160),param_1);
  }
  if (*(PopAnimRig **)(this + 0x168) != (PopAnimRig *)0x0) {
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x168),param_1);
  }
  if (*(PopAnimRig **)(this + 0x170) != (PopAnimRig *)0x0) {
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x170),param_1);
  }
  if (*(PopAnimRig **)(this + 0x178) != (PopAnimRig *)0x0) {
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x178),param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEndingUI::OnMetalEffectFinished(std::string const&) */

void ArenaEndingUI::OnMetalEffectFinished(string *param_1)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  pPVar1 = *(PopAnimRig **)(param_1 + 0x158);
  param_1[0x180] = (string)0x1;
  local_8 = ___stack_chk_guard;
  if (pPVar1 != (PopAnimRig *)0x0) {
    std::string::string(asStack_40,"IDLE2");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEndingUI::OnCoinEffectFinished(std::string const&) */

void ArenaEndingUI::OnCoinEffectFinished(string *param_1)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  pPVar1 = *(PopAnimRig **)(param_1 + 0x168);
  param_1[0x181] = (string)0x1;
  local_8 = ___stack_chk_guard;
  if (pPVar1 != (PopAnimRig *)0x0) {
    std::string::string(asStack_40,"IDLE2");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEndingUI::OnCupEffectFinished(std::string const&) */

void ArenaEndingUI::OnCupEffectFinished(string *param_1)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  pPVar1 = *(PopAnimRig **)(param_1 + 0x160);
  param_1[0x182] = (string)0x1;
  local_8 = ___stack_chk_guard;
  if (pPVar1 != (PopAnimRig *)0x0) {
    std::string::string(asStack_40,"IDLE2");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaEndingUI::ButtonDepress(int) */

void __thiscall ArenaEndingUI::ButtonDepress(ArenaEndingUI *this,int param_1)

{
  int iVar1;
  PVPManager *pPVar2;
  long lVar3;
  
  if (param_1 != 0) {
    return;
  }
  pPVar2 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::EndArenaBattle(pPVar2,false);
  if (this[400] == (ArenaEndingUI)0x0) {
    lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar1 = FUN_04ada5c8(*(undefined4 *)(lVar3 + 0x128));
    if (iVar1 == 1) {
      pPVar2 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      iVar1 = FUN_04ada5cc(*(undefined4 *)(lVar3 + 300));
      PVPManager::SetPVPCoin(pPVar2,iVar1);
      pPVar2 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      iVar1 = FUN_04ada5d4(*(undefined4 *)(lVar3 + 0x134));
      PVPManager::SetPVPCup(pPVar2,iVar1);
    }
    else {
      pPVar2 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      iVar1 = FUN_04ada5cc(*(undefined4 *)(lVar3 + 300));
      PVPManager::SetPVPCoin(pPVar2,iVar1);
      pPVar2 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      iVar1 = FUN_04ada5d0(*(undefined4 *)(lVar3 + 0x130));
      PVPManager::SetPVPMedal(pPVar2,iVar1);
    }
  }
  pPVar2 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::ResetPlayerData(pPVar2);
  return;
}


/* non-virtual thunk to ArenaEndingUI::ButtonDepress(int) */

void __thiscall ArenaEndingUI::ButtonDepress(ArenaEndingUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* ArenaEndingUI::UpdateEffect() */

void __thiscall ArenaEndingUI::UpdateEffect(ArenaEndingUI *this)

{
  PopAnimRig *pPVar1;
  float fVar2;
  float fVar3;
  
  pPVar1 = *(PopAnimRig **)(this + 0x148);
  if (pPVar1 != (PopAnimRig *)0x0) {
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar1,fVar2,fVar3);
  }
  pPVar1 = *(PopAnimRig **)(this + 0x150);
  if (pPVar1 != (PopAnimRig *)0x0) {
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar1,fVar2,fVar3);
  }
  pPVar1 = *(PopAnimRig **)(this + 0x158);
  if (pPVar1 != (PopAnimRig *)0x0) {
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar1,fVar2,fVar3);
  }
  pPVar1 = *(PopAnimRig **)(this + 0x160);
  if (pPVar1 != (PopAnimRig *)0x0) {
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar1,fVar2,fVar3);
  }
  pPVar1 = *(PopAnimRig **)(this + 0x168);
  if (pPVar1 != (PopAnimRig *)0x0) {
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar1,fVar2,fVar3);
  }
  pPVar1 = *(PopAnimRig **)(this + 0x170);
  if (pPVar1 != (PopAnimRig *)0x0) {
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar1,fVar2,fVar3);
  }
  pPVar1 = *(PopAnimRig **)(this + 0x178);
  if (pPVar1 != (PopAnimRig *)0x0) {
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar1,fVar2,fVar3);
    return;
  }
  return;
}


/* ArenaEndingUI::Update() */

void __thiscall ArenaEndingUI::Update(ArenaEndingUI *this)

{
  PopAnimRig *pPVar1;
  float fVar2;
  float fVar3;
  
  pPVar1 = *(PopAnimRig **)(this + 0x148);
  if (pPVar1 != (PopAnimRig *)0x0) {
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar1,fVar2,fVar3);
  }
  pPVar1 = *(PopAnimRig **)(this + 0x150);
  if (pPVar1 != (PopAnimRig *)0x0) {
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar1,fVar2,fVar3);
  }
  pPVar1 = *(PopAnimRig **)(this + 0x158);
  if (pPVar1 != (PopAnimRig *)0x0) {
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar1,fVar2,fVar3);
  }
  pPVar1 = *(PopAnimRig **)(this + 0x160);
  if (pPVar1 != (PopAnimRig *)0x0) {
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar1,fVar2,fVar3);
  }
  pPVar1 = *(PopAnimRig **)(this + 0x168);
  if (pPVar1 != (PopAnimRig *)0x0) {
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar1,fVar2,fVar3);
  }
  pPVar1 = *(PopAnimRig **)(this + 0x170);
  if (pPVar1 != (PopAnimRig *)0x0) {
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar1,fVar2,fVar3);
  }
  pPVar1 = *(PopAnimRig **)(this + 0x178);
  if (pPVar1 != (PopAnimRig *)0x0) {
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar1,fVar2,fVar3);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEndingUI::CreateZombieWidgets(Sexy::TRect<int>) */

void __thiscall ArenaEndingUI::CreateZombieWidgets(ArenaEndingUI *this,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  SeedPacketUtils *this_00;
  long lVar8;
  ulong uVar9;
  ArenaZombieWidget *this_01;
  RtWeakPtrBase *pRVar10;
  ulong uVar11;
  int iVar12;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  std::string::string(asStack_10,"tutorial");
  lVar8 = SeedPacketUtils::GetZombiePacketRenderData
                    (this_00,asStack_10,(string *)&PVPManager::PacketsZombiePrefix,-1);
  std::string::~string(asStack_10);
  nop();
  iVar1 = *(int *)(lVar8 + 0x34);
  iVar2 = *(int *)(lVar8 + 0x2c);
  iVar12 = (int)((float)(*(int *)(lVar8 + 0x28) + *(int *)(lVar8 + 0x30)) * 0.65);
  uVar9 = FUN_04ada5e0(*(undefined8 *)(this + 0xf8),*(undefined8 *)(this + 0x100));
  iVar4 = FUN_04ada664(5);
  iVar4 = *param_2 + (param_2[2] - (iVar12 * (int)uVar9 + ((int)uVar9 + -1) * iVar4)) / 2;
  if (*(int *)(this + 0xf0) == 0) {
    iVar5 = FUN_04ada664(0x28);
  }
  else {
    iVar5 = FUN_04ada664(0x46);
  }
  iVar6 = FUN_04ada664(0x168);
  iVar3 = param_2[1];
  uVar11 = 0;
  while (uVar11 < uVar9) {
    this_01 = ::operator_new(0xf0);
    ArenaZombieWidget::ArenaZombieWidget(this_01);
    pRVar10 = (RtWeakPtrBase *)FUN_04ada5ec(*(undefined8 *)(this + 0xf8),uVar11);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,pRVar10);
    ArenaZombieWidget::SetZombieSeedType(this_01,asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    lVar8 = FUN_04ada5ec(*(undefined8 *)(this + 0xf8),uVar11);
    FUN_04ada5bc(this_01 + 0xe8,*(undefined4 *)(lVar8 + 8));
    (**(code **)(*(long *)this_01 + 0x198))
              (this_01,iVar4,(iVar6 + iVar3) - iVar5,iVar12,(int)((float)(iVar2 + iVar1) * 0.65));
    (**(code **)(*(long *)this + 0x60))(this,this_01);
    iVar7 = FUN_04ada664(5);
    iVar4 = iVar4 + iVar7 + iVar12;
    uVar9 = FUN_04ada5e0(*(undefined8 *)(this + 0xf8),*(undefined8 *)(this + 0x100));
    uVar11 = uVar11 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEndingUI::CreateVictoryEffect() */

void __thiscall ArenaEndingUI::CreateVictoryEffect(ArenaEndingUI *this)

{
  int iVar1;
  ResourceInfo *pRVar2;
  RtClass *pRVar3;
  PopAnimRig *pPVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  string asStack_58 [8];
  float local_50;
  float local_4c;
  Delegate1<std::string_const&> aDStack_38 [8];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [28];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"POPANIM_UI_PVP_INBATTLEANIM_BATTLE_ACCOUNT_V");
  GetPAMByName(asStack_58);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  std::string::~string(asStack_58);
  nop();
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar4 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar2,pRVar3);
  *(PopAnimRig **)(this + 0x148) = pPVar4;
  Sexy::StrFormat("IDLE%d_1",asStack_58,(ulong)*(uint *)(this + 0x110));
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnVictoryEffectFinished);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ArenaEndingUI,void(ArenaEndingUI::*)(std::string_const&)>
            (aDStack_38,(RtWeakPtr *)&local_50);
  PopAnimRig::PlayAndStop(pPVar4,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  Sexy::SexyTransform2D::SexyTransform2D((SexyTransform2D *)aDStack_38);
  fVar6 = (float)FUN_04ada678();
  lVar5 = FUN_04ada5b8(*(undefined8 *)(*(long *)(this + 0x148) + 0x20));
  if (lVar5 != 0) {
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_50,(float)*(int *)(lVar5 + 0x3c),(float)*(int *)(lVar5 + 0x40));
    local_50 = *(float *)(lVar5 + 0x28) * local_50 * fVar6;
    local_4c = *(float *)(lVar5 + 0x28) * local_4c * fVar6;
    fVar7 = (float)*(int *)(gLawnApp + 0xd8) - local_4c;
    fVar8 = ((float)*(int *)(gLawnApp + 0xd4) - local_50) * 0.5;
    *(float *)(this + 0x188) = fVar8;
    iVar1 = FUN_04ada664(0x28);
    fVar7 = fVar7 * 0.5 - (float)iVar1;
    *(float *)(this + 0x18c) = fVar7;
    FUN_04ada598(fVar8,fVar7,auStack_30,auStack_24);
    PopAnimRig::SetRenderTransform(*(PopAnimRig **)(this + 0x148),(SexyTransform2D *)aDStack_38);
    PopAnimRig::SetDrawScale(*(PopAnimRig **)(this + 0x148),fVar6);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEndingUI::CreateFailedEffect() */

void __thiscall ArenaEndingUI::CreateFailedEffect(ArenaEndingUI *this)

{
  int iVar1;
  ResourceInfo *pRVar2;
  RtClass *pRVar3;
  PopAnimRig *pPVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  string asStack_58 [8];
  float local_50;
  float local_4c;
  Delegate1<std::string_const&> aDStack_38 [8];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [28];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"POPANIM_UI_PVP_INBATTLEANIM_BATTLE_ACCOUNT_F");
  GetPAMByName(asStack_58);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  std::string::~string(asStack_58);
  nop();
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar4 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar2,pRVar3);
  *(PopAnimRig **)(this + 0x150) = pPVar4;
  std::string::string(asStack_58,"IDLE1");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnFailedEffectFinished);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ArenaEndingUI,void(ArenaEndingUI::*)(std::string_const&)>
            (aDStack_38,(RtWeakPtr *)&local_50);
  PopAnimRig::PlayAndStop(pPVar4,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  Sexy::SexyTransform2D::SexyTransform2D((SexyTransform2D *)aDStack_38);
  fVar6 = (float)FUN_04ada678();
  lVar5 = FUN_04ada5b8(*(undefined8 *)(*(long *)(this + 0x150) + 0x20));
  if (lVar5 != 0) {
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_50,(float)*(int *)(lVar5 + 0x3c),(float)*(int *)(lVar5 + 0x40));
    local_50 = *(float *)(lVar5 + 0x28) * local_50 * fVar6;
    local_4c = *(float *)(lVar5 + 0x28) * local_4c * fVar6;
    fVar7 = (float)*(int *)(gLawnApp + 0xd8) - local_4c;
    fVar8 = ((float)*(int *)(gLawnApp + 0xd4) - local_50) * 0.5;
    *(float *)(this + 0x188) = fVar8;
    iVar1 = FUN_04ada664(0x28);
    fVar7 = fVar7 * 0.5 - (float)iVar1;
    *(float *)(this + 0x18c) = fVar7;
    FUN_04ada598(fVar8,fVar7,auStack_30,auStack_24);
    PopAnimRig::SetRenderTransform(*(PopAnimRig **)(this + 0x150),(SexyTransform2D *)aDStack_38);
    PopAnimRig::SetDrawScale(*(PopAnimRig **)(this + 0x150),fVar6);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEndingUI::CreateWordEffect() */

void __thiscall ArenaEndingUI::CreateWordEffect(ArenaEndingUI *this)

{
  int iVar1;
  int iVar2;
  ResourceInfo *pRVar3;
  RtClass *pRVar4;
  PopAnimRig *pPVar5;
  float fVar6;
  string asStack_58 [8];
  RtWeakPtr aRStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [8];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [28];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"POPANIM_UI_PVP_INBATTLEANIM_BATTLE_ACCOUNT_S");
  GetPAMByName(asStack_58);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  pRVar4 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar5 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar3,pRVar4);
  *(PopAnimRig **)(this + 0x178) = pPVar5;
  std::string::string(asStack_58,"IDLE2");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnWordEffectFinished);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ArenaEndingUI,void(ArenaEndingUI::*)(std::string_const&)>(aDStack_38,aRStack_50);
  PopAnimRig::PlayAndStop(pPVar5,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  Sexy::SexyTransform2D::SexyTransform2D((SexyTransform2D *)aDStack_38);
  iVar1 = FUN_04ada664(0);
  fVar6 = *(float *)(this + 0x188);
  iVar2 = FUN_04ada664(100);
  FUN_04ada598((float)iVar1 + fVar6,(float)iVar2 + *(float *)(this + 0x18c),auStack_30,auStack_24);
  PopAnimRig::SetRenderTransform(*(PopAnimRig **)(this + 0x178),(SexyTransform2D *)aDStack_38);
  fVar6 = (float)FUN_04ada678();
  PopAnimRig::SetDrawScale(*(PopAnimRig **)(this + 0x178),fVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEndingUI::CreateMetalEffect() */

void __thiscall ArenaEndingUI::CreateMetalEffect(ArenaEndingUI *this)

{
  ResourceInfo *pRVar1;
  RtClass *pRVar2;
  PopAnimRig *pPVar3;
  string asStack_58 [8];
  RtWeakPtr aRStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"POPANIM_UI_PVP_INBATTLEANIM_BATTLE_ACCOUNT_K");
  GetPAMByName(asStack_58);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar3 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar1,pRVar2);
  *(PopAnimRig **)(this + 0x158) = pPVar3;
  std::string::string(asStack_58,"IDLE1");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnMetalEffectFinished);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ArenaEndingUI,void(ArenaEndingUI::*)(std::string_const&)>(aDStack_38,aRStack_50);
  PopAnimRig::PlayAndStop(pPVar3,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEndingUI::CreateCoinEffect() */

void __thiscall ArenaEndingUI::CreateCoinEffect(ArenaEndingUI *this)

{
  ResourceInfo *pRVar1;
  RtClass *pRVar2;
  PopAnimRig *pPVar3;
  string asStack_58 [8];
  RtWeakPtr aRStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"POPANIM_UI_PVP_INBATTLEANIM_BATTLE_ACCOUNT_Z");
  GetPAMByName(asStack_58);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar3 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar1,pRVar2);
  *(PopAnimRig **)(this + 0x168) = pPVar3;
  std::string::string(asStack_58,"IDLE1");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCoinEffectFinished);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ArenaEndingUI,void(ArenaEndingUI::*)(std::string_const&)>(aDStack_38,aRStack_50);
  PopAnimRig::PlayAndStop(pPVar3,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEndingUI::CreateCupEffect() */

void __thiscall ArenaEndingUI::CreateCupEffect(ArenaEndingUI *this)

{
  ResourceInfo *pRVar1;
  RtClass *pRVar2;
  PopAnimRig *pPVar3;
  string asStack_58 [8];
  RtWeakPtr aRStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"POPANIM_UI_PVP_INBATTLEANIM_BATTLE_ACCOUNT_D");
  GetPAMByName(asStack_58);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar3 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar1,pRVar2);
  *(PopAnimRig **)(this + 0x160) = pPVar3;
  std::string::string(asStack_58,"IDLE1");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCupEffectFinished);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ArenaEndingUI,void(ArenaEndingUI::*)(std::string_const&)>(aDStack_38,aRStack_50);
  PopAnimRig::PlayAndStop(pPVar3,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEndingUI::CreateLeagueEffect() */

void __thiscall ArenaEndingUI::CreateLeagueEffect(ArenaEndingUI *this)

{
  int iVar1;
  int iVar2;
  ResourceInfo *pRVar3;
  RtClass *pRVar4;
  PopAnimRig *pPVar5;
  float fVar6;
  string asStack_58 [8];
  RtWeakPtr aRStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [8];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [28];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"POPANIM_UI_PVP_INBATTLEANIM_BATTLE_ACCOUNT_M");
  GetPAMByName(asStack_58);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  pRVar4 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar5 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar3,pRVar4);
  *(PopAnimRig **)(this + 0x170) = pPVar5;
  std::string::string(asStack_58,"IDLE");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLeagueEffectFinished);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ArenaEndingUI,void(ArenaEndingUI::*)(std::string_const&)>(aDStack_38,aRStack_50);
  PopAnimRig::PlayAndStop(pPVar5,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  Sexy::SexyTransform2D::SexyTransform2D((SexyTransform2D *)aDStack_38);
  iVar1 = FUN_04ada664(0xb4);
  fVar6 = *(float *)(this + 0x188);
  iVar2 = FUN_04ada664(0);
  FUN_04ada598((float)iVar1 + fVar6,(float)iVar2 + *(float *)(this + 0x18c),auStack_30,auStack_24);
  PopAnimRig::SetRenderTransform(*(PopAnimRig **)(this + 0x170),(SexyTransform2D *)aDStack_38);
  fVar6 = (float)FUN_04ada678();
  PopAnimRig::SetDrawScale(*(PopAnimRig **)(this + 0x170),fVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEndingUI::LayoutEffect(std::vector<PopAnimRig*, std::allocator<PopAnimRig*> >&) */

void __thiscall ArenaEndingUI::LayoutEffect(ArenaEndingUI *this,vector *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  PopAnimRig *this_00;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_40;
  undefined8 local_38;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  fVar7 = 0.0;
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04ada664(0xb4);
  fVar5 = (float)FUN_04ada678();
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_1);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    if ((PopAnimRig *)*puVar4 != (PopAnimRig *)0x0) {
      fVar6 = (float)PopAnimRig::GetPAMSize((PopAnimRig *)*puVar4,fVar5);
      fVar7 = fVar7 + fVar6;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  iVar3 = FUN_04ada664(0x28);
  iVar2 = (int)((*(float *)(this + 0x188) - (float)iVar3) + ((float)iVar2 - fVar7) * 0.5);
  FUN_04ada664(10);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_1);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this_00 = (PopAnimRig *)*puVar4;
    if (this_00 != (PopAnimRig *)0x0) {
      fVar7 = (float)PopAnimRig::GetPAMSize(this_00,fVar5);
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
      FUN_04ada598((float)iVar2,auStack_28,auStack_1c);
      PopAnimRig::SetRenderTransform(this_00,aSStack_30);
      PopAnimRig::SetDrawScale(this_00,fVar5);
      iVar2 = (int)((float)iVar2 + fVar7);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEndingUI::CreateLostInfo() */

void __thiscall ArenaEndingUI::CreateLostInfo(ArenaEndingUI *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  LotteryResultProgressBar *pLVar6;
  SalesProgressBar *pSVar7;
  PVZ2UIButton *pPVar8;
  code *pcVar9;
  long *plVar10;
  undefined1 auStack_90 [8];
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  wstring awStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81228);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  iVar5 = *(int *)(this + 0x50);
  pSVar7 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81228);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar7);
  Sexy::Insets::Insets
            ((Insets *)&local_88,(iVar5 - iVar1) / 2,(*(int *)(this + 0x54) - iVar2) / 2,iVar1,iVar2
            );
  FUN_05478178(awStack_78,L"[ARENA_ENDING_BTN]",auStack_90);
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar8 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar8,0,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aIStack_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar8;
  FUN_05476c50(awStack_78);
  nop();
  pPVar8 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b811d0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b80e68,3);
  PVZ2UIButton::SetDialogStates(pPVar8,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b811d0);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  iVar5 = local_84 + local_7c;
  iVar2 = FUN_04ada664(5);
  plVar10 = *(long **)(this + 0xe8);
  pcVar9 = *(code **)(*plVar10 + 0x198);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b811d0);
  uVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  pSVar7 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b811d0);
  uVar4 = SalesProgressBar::GetCurrentLevel(pSVar7);
  (*pcVar9)(plVar10,local_88 + (local_80 - iVar1) / 2,iVar5 - iVar2,uVar3,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  if (*(int *)(this + 0xf0) == 1) {
    iVar5 = FUN_04ada664(0x23);
    local_84 = local_84 + iVar5;
  }
  Sexy::Insets::Insets(aIStack_40,(Insets *)&local_88);
  CreateZombieWidgets(this,aIStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEndingUI::OnWordEffectFinished(std::string const&) */

void ArenaEndingUI::OnWordEffectFinished(string *param_1)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  pPVar1 = *(PopAnimRig **)(param_1 + 0x178);
  local_8 = ___stack_chk_guard;
  param_1[0x183] = (string)0x1;
  if (pPVar1 != (PopAnimRig *)0x0) {
    std::string::string(asStack_40,"IDLE1");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  CreateLostInfo((ArenaEndingUI *)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEndingUI::Draw(Sexy::Graphics*) */

void __thiscall ArenaEndingUI::Draw(ArenaEndingUI *this,Graphics *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LotteryResultProgressBar *pLVar6;
  SalesProgressBar *pSVar7;
  ProfileMgr *this_00;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  PVPManager *pPVar11;
  uint *puVar12;
  Image *pIVar13;
  undefined1 auStack_40 [8];
  Insets aIStack_38 [16];
  int local_28;
  int local_24;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  DrawEffect(this,param_1);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81228);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  iVar5 = *(int *)(this + 0x50);
  pSVar7 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81228);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar7);
  Sexy::Insets::Insets
            (aIStack_38,(iVar5 - iVar3) / 2,(*(int *)(this + 0x54) - iVar4) / 2,iVar3,iVar4);
  if ((this[0x183] != (ArenaEndingUI)0x0) &&
     (cVar2 = std::vector<ZombieRecord,std::allocator<ZombieRecord>>::empty
                        ((vector<ZombieRecord,std::allocator<ZombieRecord>> *)(this + 0xf8)),
     cVar2 != '\0')) {
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81260);
    iVar5 = FUN_04ada664(0xd2);
    Sexy::Graphics::DrawImage
              (param_1,pIVar13,(int)*(float *)(this + 0x188),
               (int)((float)iVar5 + *(float *)(this + 0x18c)));
  }
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81000);
  LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b80fb0);
  LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81318);
  LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  pSVar7 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81318);
  SalesProgressBar::GetCurrentLevel(pSVar7);
  pSVar7 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b80fb0);
  SalesProgressBar::GetCurrentLevel(pSVar7);
  pSVar7 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81000);
  SalesProgressBar::GetCurrentLevel(pSVar7);
  FUN_05476574(auStack_40);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar8 = ProfileMgr::GetCurrentProfile(this_00);
  iVar5 = FUN_04ada664(0x14a);
  iVar3 = FUN_04ada664(0x32);
  iVar4 = FUN_04ada664(0x1e);
  Sexy::Insets::Insets((Insets *)&local_28,iVar5,iVar5,iVar3,iVar4);
  if (this[0x181] != (ArenaEndingUI)0x0) {
    pPVar11 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    puVar12 = (uint *)PVPManager::GetChangedCurrency(pPVar11);
    uVar1 = *puVar12;
    iVar5 = FUN_04ada5c4(*(undefined4 *)(lVar8 + 0x1100));
    if (iVar5 == 7) {
      uVar1 = 1000;
    }
    Sexy::StrFormat(L"%d",aCStack_18,(ulong)uVar1);
    FUN_054766c8(auStack_40,aCStack_18);
    FUN_05476c50(aCStack_18);
    if ((*(long *)(this + 0x168) != 0) &&
       (lVar8 = FUN_04ada5b8(*(undefined8 *)(*(long *)(this + 0x168) + 0x20)), lVar8 != 0)) {
      iVar5 = FUN_04ada664(0x32);
      local_28 = (int)((float)iVar5 + *(float *)(lVar8 + 0x74));
      iVar5 = FUN_04ada664(0x6e);
      local_24 = (int)((float)iVar5 + *(float *)(lVar8 + 0x80));
    }
    uVar10 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_40,(Insets *)&local_28,uVar10,aCStack_18,5,1);
  }
  if (this[0x180] != (ArenaEndingUI)0x0) {
    pPVar11 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar8 = PVPManager::GetChangedCurrency(pPVar11);
    Sexy::StrFormat(L"%d",aCStack_18,(ulong)*(uint *)(lVar8 + 4));
    FUN_054766c8(auStack_40,aCStack_18);
    FUN_05476c50(aCStack_18);
    if ((*(long *)(this + 0x158) != 0) &&
       (lVar8 = FUN_04ada5b8(*(undefined8 *)(*(long *)(this + 0x158) + 0x20)), lVar8 != 0)) {
      iVar5 = FUN_04ada664(0x32);
      local_28 = (int)((float)iVar5 + *(float *)(lVar8 + 0x74));
      iVar5 = FUN_04ada664(0x6e);
      local_24 = (int)((float)iVar5 + *(float *)(lVar8 + 0x80));
    }
    uVar10 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_40,(Insets *)&local_28,uVar10,aCStack_18,5,1);
  }
  if (this[0x182] != (ArenaEndingUI)0x0) {
    pPVar11 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar8 = PVPManager::GetChangedCurrency(pPVar11);
    Sexy::StrFormat(L"%d",aCStack_18,(ulong)*(uint *)(lVar8 + 8));
    FUN_054766c8(auStack_40,aCStack_18);
    FUN_05476c50(aCStack_18);
    if ((*(long *)(this + 0x160) != 0) &&
       (lVar8 = FUN_04ada5b8(*(undefined8 *)(*(long *)(this + 0x160) + 0x20)), lVar8 != 0)) {
      iVar5 = FUN_04ada664(0x32);
      local_28 = (int)((float)iVar5 + *(float *)(lVar8 + 0x74));
      iVar5 = FUN_04ada664(0x6e);
      local_24 = (int)((float)iVar5 + *(float *)(lVar8 + 0x80));
    }
    uVar10 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_40,(Insets *)&local_28,uVar10,aCStack_18,5,1);
  }
  if (this[0x184] != (ArenaEndingUI)0x0) {
    if ((*(long *)(this + 0x170) != 0) &&
       (lVar8 = FUN_04ada5b8(*(undefined8 *)(*(long *)(this + 0x170) + 0x20)), lVar8 != 0)) {
      iVar5 = FUN_04ada664(0x50);
      local_28 = (int)((float)iVar5 + *(float *)(lVar8 + 0x74));
      iVar5 = FUN_04ada664(0x37);
      local_24 = (int)((float)iVar5 + *(float *)(lVar8 + 0x80));
    }
    lVar8 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    uVar9 = FUN_04ada5d8(*(undefined4 *)(lVar8 + 0x138));
    Sexy::StrFormat(L"%d",aCStack_18,uVar9 & 0xffffffff);
    FUN_054766c8(this + 0x140,aCStack_18);
    FUN_05476c50(aCStack_18);
    uVar10 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x140,(Insets *)&local_28,uVar10,aCStack_18,5,1);
    lVar8 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    uVar9 = FUN_04ada5dc(*(undefined4 *)(lVar8 + 0x13c));
    Sexy::StrFormat(L"%d",aCStack_18,uVar9 & 0xffffffff);
    FUN_054766c8(this + 0x138,aCStack_18);
    FUN_05476c50(aCStack_18);
    iVar5 = FUN_04ada664(0x1e);
    local_24 = local_24 + iVar5;
    uVar10 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x138,(Insets *)&local_28,uVar10,aCStack_18,5,1);
  }
  FUN_05476c50(auStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEndingUI::~ArenaEndingUI() */

void __thiscall ArenaEndingUI::~ArenaEndingUI(ArenaEndingUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06949820;
  *(undefined **)(this + 0xd8) = &DAT_06949b60;
  *(undefined ***)(this + 0xe0) = &PTR__ArenaEndingUI_06949ba8;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PVP_INGAME");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"PVP_INBATTLEANIM");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x140);
  FUN_05476c50(this + 0x138);
  FUN_05476c50(this + 0x128);
  FUN_05476c50(this + 0x120);
  FUN_05476c50(this + 0x118);
  std::vector<ZombieRecord,std::allocator<ZombieRecord>>::~vector
            ((vector<ZombieRecord,std::allocator<ZombieRecord>> *)(this + 0xf8));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ArenaEndingUI::~ArenaEndingUI() */

void __thiscall ArenaEndingUI::~ArenaEndingUI(ArenaEndingUI *this)

{
  ~ArenaEndingUI(this + -0xe0);
  return;
}


/* ArenaEndingUI::~ArenaEndingUI() */

void __thiscall ArenaEndingUI::~ArenaEndingUI(ArenaEndingUI *this)

{
  ~ArenaEndingUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArenaEndingUI::~ArenaEndingUI() */

void __thiscall ArenaEndingUI::~ArenaEndingUI(ArenaEndingUI *this)

{
  ~ArenaEndingUI(this + -0xe0);
  return;
}


/* ArenaEndingUI::ButtonPress(int) */

void __thiscall ArenaEndingUI::ButtonPress(ArenaEndingUI *this,int param_1)

{
  char *pcVar1;
  
  if (param_1 != 0) {
    return;
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_X_Close_Press");
  return;
}


/* non-virtual thunk to ArenaEndingUI::ButtonPress(int) */

void __thiscall ArenaEndingUI::ButtonPress(ArenaEndingUI *this,int param_1)

{
  ButtonPress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEndingUI::ArenaEndingUI(ArenaResult, std::vector<ZombieRecord, std::allocator<ZombieRecord>
   > const&, bool, int) */

void __thiscall
ArenaEndingUI::ArenaEndingUI
          (ArenaEndingUI *this,undefined4 param_2,vector *param_3,ArenaEndingUI param_4,int param_5)

{
  LawnApp *pLVar1;
  char *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_06949820;
  *(undefined **)(this + 0xd8) = &DAT_06949b60;
  *(undefined ***)(this + 0xe0) = &PTR__ArenaEndingUI_06949ba8;
  *(undefined4 *)(this + 0xf0) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  *(undefined4 *)(this + 0x110) = 0;
  FUN_05476574(this + 0x118);
  FUN_05476574(this + 0x120);
  FUN_05476574(this + 0x128);
  this[0x130] = (ArenaEndingUI)0x0;
  FUN_05476574(this + 0x138);
  FUN_05476574(this + 0x140);
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  this[0x180] = (ArenaEndingUI)0x0;
  this[0x181] = (ArenaEndingUI)0x0;
  this[0x182] = (ArenaEndingUI)0x0;
  this[0x183] = (ArenaEndingUI)0x0;
  this[0x184] = (ArenaEndingUI)0x0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x188));
  this[400] = (ArenaEndingUI)0x0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PVP_INGAME");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"PVP_INBATTLEANIM");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xf0) = param_2;
  std::vector<ZombieRecord,std::allocator<ZombieRecord>>::operator=
            ((vector<ZombieRecord,std::allocator<ZombieRecord>> *)(this + 0xf8),param_3);
  *(int *)(this + 0x110) = param_5;
  this[0x130] = param_4;
  InitView(this);
  if (*(int *)(this + 0xf0) == 0) {
    CreateVictoryEffect(this);
  }
  else {
    CreateFailedEffect(this);
  }
  if (param_5 == 2) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_PVP_Battle_Win_2_Star");
  }
  else if (param_5 == 3) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_PVP_Battle_Win_3_Star");
  }
  else if (param_5 == 1) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_PVP_Battle_Win_1_Star");
  }
  else {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_PVP_Battle_Lost");
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEndingUI::OnVictoryEffectFinished(std::string const&) */

void ArenaEndingUI::OnVictoryEffectFinished(string *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  PVPManager *this;
  PopAnimRig *pPVar4;
  string asStack_50 [24];
  DummyInit aDStack_38 [48];
  long local_8;
  
  pPVar4 = *(PopAnimRig **)(param_1 + 0x148);
  local_8 = ___stack_chk_guard;
  if (pPVar4 != (PopAnimRig *)0x0) {
    Sexy::StrFormat("IDLE%d_2",asStack_50,(ulong)*(uint *)(param_1 + 0x110));
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar4,asStack_50,0,aDStack_38);
    std::string::~string(asStack_50);
  }
  cVar1 = std::vector<ZombieRecord,std::allocator<ZombieRecord>>::empty
                    ((vector<ZombieRecord,std::allocator<ZombieRecord>> *)(param_1 + 0xf8));
  if (cVar1 == '\0') {
    CreateWordEffect((ArenaEndingUI *)param_1);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_50);
    lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar2 = FUN_04ada5c8(*(undefined4 *)(lVar3 + 0x128));
  }
  else {
    param_1[0x183] = (string)0x1;
    CreateLostInfo((ArenaEndingUI *)param_1);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_50);
    lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar2 = FUN_04ada5c8(*(undefined4 *)(lVar3 + 0x128));
  }
  if (iVar2 == 1) {
    this = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    cVar1 = PVPManager::IsEvilDavidBattle(this);
    if (cVar1 == '\0') {
      CreateCoinEffect((ArenaEndingUI *)param_1);
      std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::push_back
                ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)asStack_50,
                 (PopAnimRig **)(param_1 + 0x168));
      CreateCupEffect((ArenaEndingUI *)param_1);
      std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::push_back
                ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)asStack_50,
                 (PopAnimRig **)(param_1 + 0x160));
      if (param_1[0x130] != (string)0x0) {
        CreateLeagueEffect((ArenaEndingUI *)param_1);
      }
      goto LAB_04adcd40;
    }
  }
  CreateCoinEffect((ArenaEndingUI *)param_1);
  std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::push_back
            ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)asStack_50,
             (PopAnimRig **)(param_1 + 0x168));
  CreateMetalEffect((ArenaEndingUI *)param_1);
  std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::push_back
            ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)asStack_50,
             (PopAnimRig **)(param_1 + 0x158));
LAB_04adcd40:
  LayoutEffect((ArenaEndingUI *)param_1,(vector *)asStack_50);
  std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::~vector
            ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)asStack_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEndingUI::OnFailedEffectFinished(std::string const&) */

void ArenaEndingUI::OnFailedEffectFinished(string *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  PVPManager *this;
  PopAnimRig *pPVar4;
  string asStack_50 [24];
  DummyInit aDStack_38 [48];
  long local_8;
  
  pPVar4 = *(PopAnimRig **)(param_1 + 0x150);
  local_8 = ___stack_chk_guard;
  if (pPVar4 != (PopAnimRig *)0x0) {
    std::string::string(asStack_50,"IDLE2");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar4,asStack_50,0,aDStack_38);
    std::string::~string(asStack_50);
    nop();
  }
  cVar1 = std::vector<ZombieRecord,std::allocator<ZombieRecord>>::empty
                    ((vector<ZombieRecord,std::allocator<ZombieRecord>> *)(param_1 + 0xf8));
  if (cVar1 == '\0') {
    CreateWordEffect((ArenaEndingUI *)param_1);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_50);
    lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar2 = FUN_04ada5c8(*(undefined4 *)(lVar3 + 0x128));
  }
  else {
    param_1[0x183] = (string)0x1;
    CreateLostInfo((ArenaEndingUI *)param_1);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_50);
    lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar2 = FUN_04ada5c8(*(undefined4 *)(lVar3 + 0x128));
  }
  if (iVar2 == 1) {
    this = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    cVar1 = PVPManager::IsEvilDavidBattle(this);
    if (cVar1 == '\0') {
      CreateCupEffect((ArenaEndingUI *)param_1);
      std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::push_back
                ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)asStack_50,
                 (PopAnimRig **)(param_1 + 0x160));
      goto LAB_04adced8;
    }
  }
  CreateCoinEffect((ArenaEndingUI *)param_1);
  std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::push_back
            ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)asStack_50,
             (PopAnimRig **)(param_1 + 0x168));
  CreateMetalEffect((ArenaEndingUI *)param_1);
  std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::push_back
            ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)asStack_50,
             (PopAnimRig **)(param_1 + 0x158));
LAB_04adced8:
  LayoutEffect((ArenaEndingUI *)param_1,(vector *)asStack_50);
  std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::~vector
            ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)asStack_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

