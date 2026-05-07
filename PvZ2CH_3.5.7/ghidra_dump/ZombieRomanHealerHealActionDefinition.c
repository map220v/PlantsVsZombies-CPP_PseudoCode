// Class: ZombieRomanHealerHealActionDefinition


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanHealerHealActionDefinition::StaticClassInit() */

void ZombieRomanHealerHealActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieRomanHealerHealActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_04ee8a40,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRomanHealerHealActionDefinition::StaticGetClass() */

long * ZombieRomanHealerHealActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieRomanHealerHealActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRomanHealerHealActionDefinition::GetClass() const */

long * ZombieRomanHealerHealActionDefinition::GetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieRomanHealerHealActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRomanHealerHealActionDefinition::ZombieRomanHealerHealActionDefinition() */

void __thiscall
ZombieRomanHealerHealActionDefinition::ZombieRomanHealerHealActionDefinition
          (ZombieRomanHealerHealActionDefinition *this)

{
  size_t in_x2;
  
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_06a00c70;
  Set8BytesTo0((string *)(this + 0x38));
  Set8BytesTo0(this + 0x40);
  Sexy::Point::Point((Point *)(this + 0x48));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x50));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x58));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x60));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x68));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x70));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x78));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x80));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x88));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x90));
  Set8BytesTo0(this + 0x98);
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0xa0));
  std::string::append((string *)(this + 0x38),"Play_RaZombie_WandActivate",in_x2);
  return;
}


/* ZombieRomanHealerHealActionDefinition::StaticNew() */

ZombieRomanHealerHealActionDefinition * ZombieRomanHealerHealActionDefinition::StaticNew(void)

{
  ZombieRomanHealerHealActionDefinition *this;
  
  this = ::operator_new(0xd0);
  ZombieRomanHealerHealActionDefinition(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04eeb478 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieRomanHealerHealActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void __thiscall
ZombieRomanHealerHealActionDefinition::TryStartAction
          (undefined8 param_1,RtWeakPtrBase *param_2,RtObject *param_3)

{
  ZombieRomanHealer *this;
  ZombieWithActions *pZVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Sexy::RtObject::Cast<ZombieRomanHealer>(param_3);
  pZVar1 = (ZombieWithActions *)ZombieRomanHealer::TryFindTarget(this);
  if (pZVar1 != (ZombieWithActions *)0x0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    ZombieWithActions::QueueAction<ZombieRomanHealerHealActionHandler>(pZVar1,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pZVar1 != (ZombieWithActions *)0x0);
}


/* ZombieRomanHealerHealActionDefinition::~ZombieRomanHealerHealActionDefinition() */

void __thiscall
ZombieRomanHealerHealActionDefinition::~ZombieRomanHealerHealActionDefinition
          (ZombieRomanHealerHealActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_06a00c70;
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0xa0));
  std::string::~string((string *)(this + 0x98));
  std::string::~string((string *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombieRomanHealerHealActionDefinition::~ZombieRomanHealerHealActionDefinition() */

void __thiscall
ZombieRomanHealerHealActionDefinition::~ZombieRomanHealerHealActionDefinition
          (ZombieRomanHealerHealActionDefinition *this)

{
  ~ZombieRomanHealerHealActionDefinition(this);
  AK::FreeHook(this);
  return;
}

