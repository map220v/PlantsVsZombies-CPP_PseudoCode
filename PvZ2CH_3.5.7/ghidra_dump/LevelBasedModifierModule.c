// Class: LevelBasedModifierModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifierModule::StaticClassInit() */

void LevelBasedModifierModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelBasedModifierModule");
    (*pcVar2)(plVar1,asStack_10,FUN_033faaa8,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifierModule::StaticGetClass() */

long * LevelBasedModifierModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelBasedModifierModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifierModule::GetModuleClassName(LevelBasedModifierType) */

undefined8 __thiscall
LevelBasedModifierModule::GetModuleClassName(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_033fa28c(DAT_06a9ed48,param_2);
  FUN_05475d88(param_1,uVar1);
  return param_1;
}


/* LevelBasedModifierModule::LevelBasedModifierModule() */

void __thiscall LevelBasedModifierModule::LevelBasedModifierModule(LevelBasedModifierModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined4 *)(this + 0x18) = 1;
  *(undefined4 *)(this + 0x1c) = 3;
  *(undefined ***)this = &PTR_GetModuleClass_0661dca0;
  return;
}


/* LevelBasedModifierModule::StaticNew() */

LevelBasedModifierModule * LevelBasedModifierModule::StaticNew(void)

{
  LevelBasedModifierModule *this;
  
  this = ::operator_new(0x20);
  LevelBasedModifierModule(this);
  return this;
}


/* LevelBasedModifierModule::~LevelBasedModifierModule() */

void __thiscall LevelBasedModifierModule::~LevelBasedModifierModule(LevelBasedModifierModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0661dca0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* LevelBasedModifierModule::~LevelBasedModifierModule() */

void __thiscall LevelBasedModifierModule::~LevelBasedModifierModule(LevelBasedModifierModule *this)

{
  ~LevelBasedModifierModule(this);
  AK::FreeHook(this);
  return;
}


/* LevelBasedModifierModule::initializeModule() */

void __thiscall LevelBasedModifierModule::initializeModule(LevelBasedModifierModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  FUN_033fa270(this + 0x18,*(undefined4 *)(pRVar1 + 0x44));
  return;
}


/* LevelBasedModifierModule::GetValue(int) */

undefined4 __thiscall LevelBasedModifierModule::GetValue(LevelBasedModifierModule *this,int param_1)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar1 = *(int *)(this + 0x18);
  if (0 < iVar1) {
    uVar7 = *(undefined8 *)(pRVar2 + 0x48);
    uVar3 = FUN_033fa294(uVar7,*(undefined8 *)(pRVar2 + 0x50));
    if (1 < uVar3) {
      puVar4 = (undefined8 *)FUN_033fa2c4(uVar7,(long)(iVar1 + -1));
      uVar7 = *puVar4;
      lVar5 = FUN_033fa27c(uVar7,puVar4[1]);
      if (lVar5 != 0) {
        puVar6 = (undefined4 *)FUN_033fa2d0(uVar7,(long)param_1);
        return *puVar6;
      }
    }
  }
  return 0;
}

