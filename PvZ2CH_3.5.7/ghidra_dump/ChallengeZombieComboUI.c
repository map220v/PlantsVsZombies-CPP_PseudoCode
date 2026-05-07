// Class: ChallengeZombieComboUI


/* ChallengeZombieComboUI::~ChallengeZombieComboUI() */

void __thiscall ChallengeZombieComboUI::~ChallengeZombieComboUI(ChallengeZombieComboUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06738fb0;
  *(undefined ***)(this + 0x10) = &PTR__ChallengeZombieComboUI_06739160;
  ChallengeUI::~ChallengeUI((ChallengeUI *)this);
  return;
}


/* non-virtual thunk to ChallengeZombieComboUI::~ChallengeZombieComboUI() */

void __thiscall ChallengeZombieComboUI::~ChallengeZombieComboUI(ChallengeZombieComboUI *this)

{
  ~ChallengeZombieComboUI(this + -0x10);
  return;
}


/* ChallengeZombieComboUI::~ChallengeZombieComboUI() */

void __thiscall ChallengeZombieComboUI::~ChallengeZombieComboUI(ChallengeZombieComboUI *this)

{
  ~ChallengeZombieComboUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ChallengeZombieComboUI::~ChallengeZombieComboUI() */

void __thiscall ChallengeZombieComboUI::~ChallengeZombieComboUI(ChallengeZombieComboUI *this)

{
  ~ChallengeZombieComboUI(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeZombieComboUI::StaticClassInit() */

void ChallengeZombieComboUI::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"ChallengeZombieComboUI");
    (*pcVar2)(plVar1,asStack_10,FUN_03bc0070,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengeZombieComboUI::StaticGetClass() */

long * ChallengeZombieComboUI::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ChallengeUI::StaticGetClass();
  (*pcVar3)(plVar1,"ChallengeZombieComboUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChallengeZombieComboUI::GetClass() const */

long * ChallengeZombieComboUI::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ChallengeUI::StaticGetClass();
  (*pcVar3)(plVar1,"ChallengeZombieComboUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeZombieComboUI::ChallengeZombieComboUI() */

void __thiscall ChallengeZombieComboUI::ChallengeZombieComboUI(ChallengeZombieComboUI *this)

{
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ChallengeUI::ChallengeUI((ChallengeUI *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined ***)this = &PTR_GetClass_06738fb0;
  *(undefined ***)(this + 0x10) = &PTR__ChallengeZombieComboUI_06739160;
  Sexy::Point::Point((Point *)&local_10,0,0);
  *(undefined8 *)(this + 0x164) = local_10;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x16c) = 5;
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06ace028);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengeZombieComboUI::StaticNew() */

ChallengeZombieComboUI * ChallengeZombieComboUI::StaticNew(void)

{
  ChallengeZombieComboUI *this;
  
  this = ::operator_new(0x1b0);
  ChallengeZombieComboUI(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeZombieComboUI::postDraw(Sexy::Graphics*) */

void __thiscall ChallengeZombieComboUI::postDraw(ChallengeZombieComboUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *pSVar8;
  Insets *pIVar9;
  Image *pIVar10;
  GraphicsAutoState aGStack_40 [8];
  Insets aIStack_38 [8];
  int local_30;
  Insets local_28 [16];
  Insets local_18 [4];
  int iStack_14;
  int local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ace028);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar2 = FUN_03bbfef4(*(undefined4 *)(this + 0x3c));
  pSVar8 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ace078);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar8);
  pSVar8 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ace078);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar8);
  iVar5 = FUN_03bbff28();
  iVar6 = FUN_03bbfef4(*(undefined4 *)(this + 0x3c));
  iVar7 = FUN_03bbfef0(*(undefined4 *)(this + 0x38));
  Sexy::Insets::Insets
            (aIStack_38,iVar1,(iVar6 - (iVar4 + iVar5)) / 2,(iVar7 - iVar1) + -0xf,iVar4 + iVar5);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  pIVar9 = (Insets *)PVPManager::GetSkillDatas((PVPManager *)param_1);
  Sexy::Insets::Insets(local_28,pIVar9);
  iVar1 = Sexy::BaseTaskResource::GetType((BaseTaskResource *)local_28);
  Sexy::Insets::Insets(local_18,0,0,0,iVar1);
  Sexy::Graphics::SetColor(param_1,(Color *)local_28);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ace078);
  Sexy::Graphics::DrawImageBox(param_1,(TRect *)aIStack_38,pIVar10);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  iVar1 = *(int *)(this + 0x1ac);
  iVar4 = *(int *)(this + 0x1a8);
  Sexy::Insets::Insets(local_18,aIStack_38);
  iStack_14 = (iVar2 - iVar3) / 2;
  local_10 = (int)(((float)iVar4 / (float)iVar1) * (float)local_30);
  pSVar8 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ace078);
  local_c = SalesProgressBar::GetCurrentLevel(pSVar8);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ace078);
  Sexy::Graphics::DrawImageBox(param_1,(TRect *)local_18,pIVar10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

