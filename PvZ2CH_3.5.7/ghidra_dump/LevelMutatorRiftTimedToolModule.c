// Class: LevelMutatorRiftTimedToolModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorRiftTimedToolModule::StaticClassInit() */

void LevelMutatorRiftTimedToolModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelMutatorRiftTimedToolModule");
    (*pcVar2)(plVar1,asStack_10,FUN_036a128c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelMutatorRiftTimedToolModule::StaticGetClass() */

long * LevelMutatorRiftTimedToolModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorRiftTimedToolModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelMutatorRiftTimedToolModule::LevelMutatorRiftTimedToolModule() */

void __thiscall
LevelMutatorRiftTimedToolModule::LevelMutatorRiftTimedToolModule
          (LevelMutatorRiftTimedToolModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0667f3c0;
  return;
}


/* LevelMutatorRiftTimedToolModule::StaticNew() */

LevelMutatorRiftTimedToolModule * LevelMutatorRiftTimedToolModule::StaticNew(void)

{
  LevelMutatorRiftTimedToolModule *this;
  
  this = ::operator_new(0x18);
  LevelMutatorRiftTimedToolModule(this);
  return this;
}


/* LevelMutatorRiftTimedToolModule::~LevelMutatorRiftTimedToolModule() */

void __thiscall
LevelMutatorRiftTimedToolModule::~LevelMutatorRiftTimedToolModule
          (LevelMutatorRiftTimedToolModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0667f3c0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* LevelMutatorRiftTimedToolModule::~LevelMutatorRiftTimedToolModule() */

void __thiscall
LevelMutatorRiftTimedToolModule::~LevelMutatorRiftTimedToolModule
          (LevelMutatorRiftTimedToolModule *this)

{
  ~LevelMutatorRiftTimedToolModule(this);
  AK::FreeHook(this);
  return;
}


/* LevelMutatorRiftTimedToolModule::GetToolSize() */

void __thiscall LevelMutatorRiftTimedToolModule::GetToolSize(LevelMutatorRiftTimedToolModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  FUN_036a0bdc(*(undefined8 *)(pRVar1 + 0x40),*(undefined8 *)(pRVar1 + 0x48));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorRiftTimedToolModule::GetOverrideToolList(std::vector<std::string,
   std::allocator<std::string > >&) */

void __thiscall
LevelMutatorRiftTimedToolModule::GetOverrideToolList
          (LevelMutatorRiftTimedToolModule *this,vector *param_1)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (pRVar2 != (ResilienceTutorialIntroProperties *)0x0) {
    local_18 = FUN_036a4190(*(undefined8 *)(pRVar2 + 0x40));
    local_10 = FUN_036a41e0(*(undefined8 *)(pRVar2 + 0x48));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      FUN_05475d88(asStack_20,uVar3);
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)param_1,asStack_20);
      std::string::~string(asStack_20);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

