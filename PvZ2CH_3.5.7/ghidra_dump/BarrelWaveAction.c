// Class: BarrelWaveAction


/* BarrelWaveAction::WaveEnd(int, Sexy::MTRand&) */

void BarrelWaveAction::WaveEnd(int param_1,MTRand *param_2)

{
  if (*(char *)((ulong)(uint)param_1 + 0x25) == '\0') {
    *(undefined1 *)((ulong)(uint)param_1 + 0x25) = 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BarrelWaveAction::StaticClassInit() */

void BarrelWaveAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"BarrelWaveAction");
    (*pcVar2)(plVar1,asStack_10,FUN_04c7ba90,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BarrelWaveAction::StaticGetClass() */

long * BarrelWaveAction::StaticGetClass(void)

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
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"BarrelWaveAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BarrelWaveAction::BarrelWaveAction() */

void __thiscall BarrelWaveAction::BarrelWaveAction(BarrelWaveAction *this)

{
  WaveAction::WaveAction((WaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_069925a0;
  return;
}


/* BarrelWaveAction::StaticNew() */

BarrelWaveAction * BarrelWaveAction::StaticNew(void)

{
  BarrelWaveAction *this;
  
  this = ::operator_new(0x28);
  BarrelWaveAction(this);
  return this;
}


/* BarrelWaveAction::~BarrelWaveAction() */

void __thiscall BarrelWaveAction::~BarrelWaveAction(BarrelWaveAction *this)

{
  *(undefined ***)this = &PTR_GetActionClass_069925a0;
  WaveAction::~WaveAction((WaveAction *)this);
  return;
}


/* BarrelWaveAction::~BarrelWaveAction() */

void __thiscall BarrelWaveAction::~BarrelWaveAction(BarrelWaveAction *this)

{
  ~BarrelWaveAction(this);
  AK::FreeHook(this);
  return;
}


/* BarrelWaveAction::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void BarrelWaveAction::WaveStart(WaveAction *param_1)

{
  FairyTaleWindWaveActionProps *pFVar1;
  long lVar2;
  float fVar3;
  
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(param_1);
  lVar2 = FUN_04c7b644(*(undefined8 *)(pFVar1 + 0x48),*(undefined8 *)(pFVar1 + 0x50));
  if (lVar2 != 0) {
    fVar3 = (float)PVZ_T();
    *(undefined4 *)(param_1 + 0x18) = 0;
    param_1[0x24] = (WaveAction)0x0;
    param_1[0x25] = (WaveAction)0x0;
    *(float *)(param_1 + 0x20) = fVar3 + 3.0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BarrelWaveAction::SpawnBarrelStatic(BarrelDescription) */

void BarrelWaveAction::SpawnBarrelStatic(int *param_1)

{
  int iVar1;
  RtObject *this;
  Board *pBVar2;
  string asStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_30,"ZombiePirateBarrelPusherGroup");
  Board::LoadResourceGroupForGameplay(pBVar2,asStack_30);
  std::string::~string(asStack_30);
  nop();
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_30,"ZombiePirateImpGroup");
  Board::LoadResourceGroupForGameplay(pBVar2,asStack_30);
  std::string::~string(asStack_30);
  nop();
  iVar1 = *param_1;
  GriditemBarrelParams::GriditemBarrelParams
            ((GriditemBarrelParams *)asStack_30,(GriditemBarrelParams *)(param_1 + 4));
  this = (RtObject *)GridItemBarrel::AddGriditemWithParams(param_1 + 2,9,iVar1 + -1,asStack_30,1);
  Sexy::RtObject::Cast<GridItemBarrel>(this);
  GriditemBarrelParams::~GriditemBarrelParams((GriditemBarrelParams *)asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BarrelWaveAction::SpawnBarrel(BarrelDescription) */

void __thiscall BarrelWaveAction::SpawnBarrel(BarrelWaveAction *this,BarrelDescription *param_2)

{
  long lVar1;
  FairyTaleWindWaveActionProps *pFVar2;
  float fVar3;
  BarrelDescription aBStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_T();
  pFVar2 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  *(float *)(this + 0x1c) = fVar3 + *(float *)(pFVar2 + 0x40);
  BarrelDescription::BarrelDescription(aBStack_40,param_2);
  SpawnBarrelStatic(aBStack_40);
  BarrelDescription::~BarrelDescription(aBStack_40);
  lVar1 = ___stack_chk_guard;
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BarrelWaveAction::WaveUpdate(int, Sexy::MTRand&) */

void BarrelWaveAction::WaveUpdate(int param_1,MTRand *param_2)

{
  int iVar1;
  LawnApp *pLVar2;
  char cVar3;
  WaveAction *this;
  FairyTaleWindWaveActionProps *pFVar4;
  ulong uVar5;
  BarrelDescription *pBVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  BarrelDescription aBStack_40 [56];
  long local_8;
  
  this = (WaveAction *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  pFVar4 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(this);
  fVar8 = (float)PVZ_T();
  if (*(float *)(this + 0x20) <= fVar8) {
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    uVar9 = PVZ_EOT();
    pLVar2 = gLawnApp;
    this[0x24] = (WaveAction)0x1;
    *(undefined4 *)(this + 0x20) = uVar9;
    cVar3 = LawnApp::IsInModule(pLVar2,1);
    if (cVar3 == '\0') {
      pBVar6 = (BarrelDescription *)
               FUN_04c7b680(*(undefined8 *)(pFVar4 + 0x48),(long)*(int *)(this + 0x18));
      BarrelDescription::BarrelDescription(aBStack_40,pBVar6);
      SpawnBarrel((BarrelWaveAction *)this,aBStack_40);
      BarrelDescription::~BarrelDescription(aBStack_40);
      goto LAB_04c7c748;
    }
  }
  else {
LAB_04c7c748:
    if (this[0x24] == (WaveAction)0x0) goto LAB_04c7c750;
  }
  fVar10 = *(float *)(this + 0x1c);
  fVar8 = (float)PVZ_T();
  if (fVar10 <= fVar8) {
    uVar7 = *(undefined8 *)(pFVar4 + 0x48);
    iVar1 = *(int *)(this + 0x18);
    uVar5 = FUN_04c7b644(uVar7,*(undefined8 *)(pFVar4 + 0x50));
    if ((ulong)(long)iVar1 < uVar5) {
      cVar3 = LawnApp::IsInModule(gLawnApp,1);
      if (cVar3 == '\0') {
        pBVar6 = (BarrelDescription *)FUN_04c7b680(uVar7,(long)iVar1);
        BarrelDescription::BarrelDescription(aBStack_40,pBVar6);
        SpawnBarrel((BarrelWaveAction *)this,aBStack_40);
        BarrelDescription::~BarrelDescription(aBStack_40);
      }
    }
    else {
      uVar9 = PVZ_EOT();
      *(undefined4 *)(this + 0x1c) = uVar9;
      if (this[0x25] == (WaveAction)0x0) {
        this[0x25] = (WaveAction)0x1;
      }
    }
  }
LAB_04c7c750:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BarrelWaveAction::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall BarrelWaveAction::AddResourceRequirements(BarrelWaveAction *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"ZombiePirateBarrelPusherGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

