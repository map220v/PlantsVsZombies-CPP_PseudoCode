// Class: PVZ2UnchartedModeAnniversaryChallengeDesc


/* PVZ2UnchartedModeAnniversaryChallengeDesc::~PVZ2UnchartedModeAnniversaryChallengeDesc() */

void __thiscall
PVZ2UnchartedModeAnniversaryChallengeDesc::~PVZ2UnchartedModeAnniversaryChallengeDesc
          (PVZ2UnchartedModeAnniversaryChallengeDesc *this)

{
  *(undefined ***)this = &PTR_GetClass_069d2010;
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PVZ2UnchartedModeAnniversaryChallengeDesc::~PVZ2UnchartedModeAnniversaryChallengeDesc() */

void __thiscall
PVZ2UnchartedModeAnniversaryChallengeDesc::~PVZ2UnchartedModeAnniversaryChallengeDesc
          (PVZ2UnchartedModeAnniversaryChallengeDesc *this)

{
  ~PVZ2UnchartedModeAnniversaryChallengeDesc(this);
  AK::FreeHook(this);
  return;
}


/* PVZ2UnchartedModeAnniversaryChallengeDesc::PVZ2UnchartedModeAnniversaryChallengeDesc(int, int,
   bool) */

void __thiscall
PVZ2UnchartedModeAnniversaryChallengeDesc::PVZ2UnchartedModeAnniversaryChallengeDesc
          (PVZ2UnchartedModeAnniversaryChallengeDesc *this,int param_1,int param_2,bool param_3)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_069d2010;
  FUN_05476574(this + 0xd8);
  FUN_054772c4(this + 0xd8,&DAT_0574af78);
  *(int *)(this + 0xe8) = param_1;
  this[0xf0] = (PVZ2UnchartedModeAnniversaryChallengeDesc)param_3;
  *(undefined8 *)(this + 0xe0) = 0;
  *(int *)(this + 0xec) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeAnniversaryChallengeDesc::Draw(Sexy::Graphics*) */

void __thiscall
PVZ2UnchartedModeAnniversaryChallengeDesc::Draw
          (PVZ2UnchartedModeAnniversaryChallengeDesc *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  SalesProgressBar *pSVar7;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04df99bc(0x32);
  iVar2 = FUN_04df99bc(0x23);
  if (this[0xf0] == (PVZ2UnchartedModeAnniversaryChallengeDesc)0x0) {
    iVar6 = (int)((float)iVar2 * 0.7);
    iVar2 = (iVar2 - iVar6) / 2;
    Sexy::Insets::Insets(aIStack_28,iVar2,iVar2,iVar6,iVar6);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xe0));
    pSVar7 = *(SalesProgressBar **)(this + 0xe0);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar7);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar3,iVar4);
    Sexy::Graphics::DrawImage(param_1,(Image *)pSVar7,(TRect *)aIStack_28,(TRect *)aIStack_18);
    Sexy::StrFormat(L"x%d",auStack_30,(ulong)*(uint *)(this + 0xec));
    iVar3 = FUN_04df99bc(0x14);
    Sexy::Insets::Insets(aIStack_28,iVar6 + iVar2,0,iVar3,*(int *)(this + 0x54));
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar5,aIStack_18,3,1);
    FUN_05476c50(auStack_30);
  }
  else if (*(long *)(this + 0xe0) != 0) {
    Sexy::Insets::Insets(aIStack_28,0,0,iVar2,iVar2);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xe0));
    pSVar7 = *(SalesProgressBar **)(this + 0xe0);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar7);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar2,iVar3);
    Sexy::Graphics::DrawImage(param_1,(Image *)pSVar7,(TRect *)aIStack_28,(TRect *)aIStack_18);
  }
  Sexy::Insets::Insets(aIStack_28,iVar1,0,*(int *)(this + 0x50) - iVar1,*(int *)(this + 0x54));
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Insets::Insets(aIStack_18,0x57,0x37,0,0xff);
  WriteWordInRect(param_1,this + 0xd8,aIStack_28,uVar5,aIStack_18,3,1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeAnniversaryChallengeDesc::InitView() */

void __thiscall
PVZ2UnchartedModeAnniversaryChallengeDesc::InitView(PVZ2UnchartedModeAnniversaryChallengeDesc *this)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xf0] == (PVZ2UnchartedModeAnniversaryChallengeDesc)0x0) {
    iVar1 = Sexy::LazySingleton<LevelBasedModifierModuleMgr>::GetInstancePtr();
    LevelBasedModifierModuleMgr::GetLevelModifierModuleCollection(iVar1,*(int *)(this + 0xec) + -1);
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9d2d8);
    *(undefined8 *)(this + 0xe0) = uVar2;
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    (**(code **)(*plVar3 + 0x80))(auStack_10);
    FUN_054766c8(this + 0xd8,auStack_10);
    FUN_05476c50(auStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  else {
    iVar1 = Sexy::LazySingleton<LevelBasedModifierModuleMgr>::GetInstancePtr();
    LevelBasedModifierModuleMgr::GetDefaultLevelModifierModuleCollection(iVar1);
    Sexy::StrFormat("IMAGE_UI_UNCHARTED_CHALLENGE_BASE_DESC_%d",(string *)aRStack_18,
                    (ulong)*(uint *)(this + 0xec));
    uVar2 = StringHelper::ToImage((string *)aRStack_18,false);
    *(undefined8 *)(this + 0xe0) = uVar2;
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    (**(code **)(*plVar3 + 0x80))(auStack_10);
    FUN_054766c8(this + 0xd8,auStack_10);
    FUN_05476c50(auStack_10);
    std::string::~string((string *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

