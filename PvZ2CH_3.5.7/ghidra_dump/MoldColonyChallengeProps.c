// Class: MoldColonyChallengeProps


/* MoldColonyChallengeProps::GetDescriptiveName() const */

void __thiscall MoldColonyChallengeProps::GetDescriptiveName(MoldColonyChallengeProps *this)

{
  TodStringTranslate(L"[STARCHALLENGE_PLANT_BEFORE_LINE_NAME]");
  return;
}


/* MoldColonyChallengeProps::GetDescription() const */

void __thiscall MoldColonyChallengeProps::GetDescription(MoldColonyChallengeProps *this)

{
  TodStringTranslate(L"[STARCHALLENGE_PLANT_BEFORE_LINE]");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoldColonyChallengeProps::StaticClassInit() */

void MoldColonyChallengeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"MoldColonyChallengeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_044921d8,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MoldColonyChallengeProps::StaticGetClass() */

long * MoldColonyChallengeProps::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"MoldColonyChallengeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MoldColonyChallengeProps::GetClass() const */

long * MoldColonyChallengeProps::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"MoldColonyChallengeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MoldColonyChallengeProps::GetModuleClass() const */

long * MoldColonyChallengeProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (MoldColonyChallenge::sClass != (long *)0x0) {
    return MoldColonyChallenge::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  MoldColonyChallenge::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"MoldColonyChallenge",uVar2,MoldColonyChallenge::StaticNew);
  MoldColonyChallenge::StaticClassInit();
  return MoldColonyChallenge::sClass;
}


/* MoldColonyChallengeProps::MoldColonyChallengeProps() */

void __thiscall MoldColonyChallengeProps::MoldColonyChallengeProps(MoldColonyChallengeProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06850d30;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  return;
}


/* MoldColonyChallengeProps::StaticNew() */

MoldColonyChallengeProps * MoldColonyChallengeProps::StaticNew(void)

{
  MoldColonyChallengeProps *this;
  
  this = ::operator_new(0x48);
  MoldColonyChallengeProps(this);
  return this;
}


/* MoldColonyChallengeProps::~MoldColonyChallengeProps() */

void __thiscall MoldColonyChallengeProps::~MoldColonyChallengeProps(MoldColonyChallengeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06850d30;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* MoldColonyChallengeProps::~MoldColonyChallengeProps() */

void __thiscall MoldColonyChallengeProps::~MoldColonyChallengeProps(MoldColonyChallengeProps *this)

{
  ~MoldColonyChallengeProps(this);
  AK::FreeHook(this);
  return;
}

