// Class: SpawnZombiesFromGroundWaveAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnZombiesFromGroundWaveAction::StaticClassInit() */

void SpawnZombiesFromGroundWaveAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpawnZombiesFromGroundWaveAction");
    (*pcVar2)(plVar1,asStack_10,FUN_04937a20,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpawnZombiesFromGroundWaveAction::StaticGetClass() */

long * SpawnZombiesFromGroundWaveAction::StaticGetClass(void)

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
  uVar2 = SpawnZombiesJitteredWaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnZombiesFromGroundWaveAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnZombiesFromGroundWaveAction::getZombieSpawnXPosition(Zombie*, int, Sexy::MTRand&) */

float __thiscall
SpawnZombiesFromGroundWaveAction::getZombieSpawnXPosition
          (SpawnZombiesFromGroundWaveAction *this,Zombie *param_1,int param_2,MTRand *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FairyTaleWindWaveActionProps *pFVar4;
  ulong uVar5;
  
  pFVar4 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  iVar3 = *(int *)(pFVar4 + 0x94);
  uVar5 = Sexy::MTRand::Next(param_3);
  iVar1 = *(int *)(pFVar4 + 0x98) - *(int *)(pFVar4 + 0x94);
  iVar2 = 0;
  if ((long)iVar1 != 0) {
    iVar2 = (int)(uVar5 / (ulong)(long)iVar1);
  }
  iVar3 = BoardTransforms::GridToBoardSpaceX(iVar3 + ((int)uVar5 - iVar2 * iVar1));
  return (float)iVar3;
}


/* SpawnZombiesFromGroundWaveAction::SpawnZombiesFromGroundWaveAction() */

void __thiscall
SpawnZombiesFromGroundWaveAction::SpawnZombiesFromGroundWaveAction
          (SpawnZombiesFromGroundWaveAction *this)

{
  SpawnZombiesJitteredWaveAction::SpawnZombiesJitteredWaveAction
            ((SpawnZombiesJitteredWaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_06911bc0;
  return;
}


/* SpawnZombiesFromGroundWaveAction::StaticNew() */

SpawnZombiesFromGroundWaveAction * SpawnZombiesFromGroundWaveAction::StaticNew(void)

{
  SpawnZombiesFromGroundWaveAction *this;
  
  this = ::operator_new(0x48);
  SpawnZombiesFromGroundWaveAction(this);
  return this;
}


/* SpawnZombiesFromGroundWaveAction::~SpawnZombiesFromGroundWaveAction() */

void __thiscall
SpawnZombiesFromGroundWaveAction::~SpawnZombiesFromGroundWaveAction
          (SpawnZombiesFromGroundWaveAction *this)

{
  *(undefined ***)this = &PTR_GetActionClass_06911bc0;
  SpawnZombiesJitteredWaveAction::~SpawnZombiesJitteredWaveAction
            ((SpawnZombiesJitteredWaveAction *)this);
  return;
}


/* SpawnZombiesFromGroundWaveAction::~SpawnZombiesFromGroundWaveAction() */

void __thiscall
SpawnZombiesFromGroundWaveAction::~SpawnZombiesFromGroundWaveAction
          (SpawnZombiesFromGroundWaveAction *this)

{
  ~SpawnZombiesFromGroundWaveAction(this);
  AK::FreeHook(this);
  return;
}

