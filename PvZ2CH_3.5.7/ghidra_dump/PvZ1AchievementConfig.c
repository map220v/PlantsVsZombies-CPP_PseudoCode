// Class: PvZ1AchievementConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvZ1AchievementConfig::StaticClassInit() */

void PvZ1AchievementConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"PvZ1AchievementConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_03a76ab8,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PvZ1AchievementConfig::StaticGetClass() */

long * PvZ1AchievementConfig::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"PvZ1AchievementConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PvZ1AchievementConfig::GetClass() const */

long * PvZ1AchievementConfig::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"PvZ1AchievementConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PvZ1AchievementConfig::PvZ1AchievementConfig() */

void __thiscall PvZ1AchievementConfig::PvZ1AchievementConfig(PvZ1AchievementConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0670cb40;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* PvZ1AchievementConfig::StaticNew() */

PvZ1AchievementConfig * PvZ1AchievementConfig::StaticNew(void)

{
  PvZ1AchievementConfig *this;
  
  this = ::operator_new(0x20);
  PvZ1AchievementConfig(this);
  return this;
}


/* PvZ1AchievementConfig::~PvZ1AchievementConfig() */

void __thiscall PvZ1AchievementConfig::~PvZ1AchievementConfig(PvZ1AchievementConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0670cb40;
  std::
  vector<Sexy::RtEmbeddedPtr<GeneralTaskData,158>,std::allocator<Sexy::RtEmbeddedPtr<GeneralTaskData,158>>>
  ::~vector((vector<Sexy::RtEmbeddedPtr<GeneralTaskData,158>,std::allocator<Sexy::RtEmbeddedPtr<GeneralTaskData,158>>>
             *)(this + 8));
  nop();
  return;
}


/* PvZ1AchievementConfig::~PvZ1AchievementConfig() */

void __thiscall PvZ1AchievementConfig::~PvZ1AchievementConfig(PvZ1AchievementConfig *this)

{
  ~PvZ1AchievementConfig(this);
  AK::FreeHook(this);
  return;
}

