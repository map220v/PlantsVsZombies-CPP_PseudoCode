// Class: ZombieRomanMedusaPetrifyActionDefinition


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanMedusaPetrifyActionDefinition::StaticClassInit() */

void ZombieRomanMedusaPetrifyActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieRomanMedusaPetrifyActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_04efb218,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRomanMedusaPetrifyActionDefinition::StaticGetClass() */

long * ZombieRomanMedusaPetrifyActionDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRomanMedusaPetrifyActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRomanMedusaPetrifyActionDefinition::GetClass() const */

long * ZombieRomanMedusaPetrifyActionDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRomanMedusaPetrifyActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRomanMedusaPetrifyActionDefinition::ZombieRomanMedusaPetrifyActionDefinition() */

void __thiscall
ZombieRomanMedusaPetrifyActionDefinition::ZombieRomanMedusaPetrifyActionDefinition
          (ZombieRomanMedusaPetrifyActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_06a09770;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x38));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x40));
  ClassRestrictionSet::ClassRestrictionSet((ClassRestrictionSet *)(this + 0x48));
  Sexy::Insets::Insets((Insets *)(this + 0x70));
  return;
}


/* ZombieRomanMedusaPetrifyActionDefinition::StaticNew() */

ZombieRomanMedusaPetrifyActionDefinition * ZombieRomanMedusaPetrifyActionDefinition::StaticNew(void)

{
  ZombieRomanMedusaPetrifyActionDefinition *this;
  
  this = ::operator_new(0x80);
  ZombieRomanMedusaPetrifyActionDefinition(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04efcad8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieRomanMedusaPetrifyActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void __thiscall
ZombieRomanMedusaPetrifyActionDefinition::TryStartAction(undefined8 param_1,RtWeakPtrBase *param_2)

{
  bool bVar1;
  ZombieWithActions *pZVar2;
  undefined1 uVar3;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = (ZombieWithActions *)Creature::IsOnBoard();
  if (((ulong)pZVar2 & 0xff) != 0) {
    nop();
    ZombieRomanMedusa::FindPetrifyTarget();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,param_2);
      ZombieWithActions::QueueAction<ZombieRomanMedusaPetrifyActionHandler>(pZVar2,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      uVar3 = 1;
      goto LAB_04efca6c;
    }
  }
  uVar3 = 0;
LAB_04efca6c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* ZombieRomanMedusaPetrifyActionDefinition::~ZombieRomanMedusaPetrifyActionDefinition() */

void __thiscall
ZombieRomanMedusaPetrifyActionDefinition::~ZombieRomanMedusaPetrifyActionDefinition
          (ZombieRomanMedusaPetrifyActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_06a09770;
  ClassRestrictionSet::~ClassRestrictionSet((ClassRestrictionSet *)(this + 0x48));
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombieRomanMedusaPetrifyActionDefinition::~ZombieRomanMedusaPetrifyActionDefinition() */

void __thiscall
ZombieRomanMedusaPetrifyActionDefinition::~ZombieRomanMedusaPetrifyActionDefinition
          (ZombieRomanMedusaPetrifyActionDefinition *this)

{
  ~ZombieRomanMedusaPetrifyActionDefinition(this);
  AK::FreeHook(this);
  return;
}

