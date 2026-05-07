// Class: ZombieProjectileActionDefinition


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieProjectileActionDefinition::StaticClassInit() */

void ZombieProjectileActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieProjectileActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_04631e38,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieProjectileActionDefinition::ZombieProjectileActionDefinition() */

void __thiscall
ZombieProjectileActionDefinition::ZombieProjectileActionDefinition
          (ZombieProjectileActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_0687edf0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  Set8BytesTo0(this + 0x40);
  DVec3::DVec3((DVec3 *)(this + 0x48));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x54));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x5c));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 100));
  Set8BytesTo0(this + 0x70);
  return;
}


/* ZombieProjectileActionDefinition::StaticNew() */

ZombieProjectileActionDefinition * ZombieProjectileActionDefinition::StaticNew(void)

{
  ZombieProjectileActionDefinition *this;
  
  this = ::operator_new(0x78);
  ZombieProjectileActionDefinition(this);
  return this;
}


/* ZombieProjectileActionDefinition::~ZombieProjectileActionDefinition() */

void __thiscall
ZombieProjectileActionDefinition::~ZombieProjectileActionDefinition
          (ZombieProjectileActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_0687edf0;
  std::string::~string((string *)(this + 0x70));
  std::string::~string((string *)(this + 0x40));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombieProjectileActionDefinition::~ZombieProjectileActionDefinition() */

void __thiscall
ZombieProjectileActionDefinition::~ZombieProjectileActionDefinition
          (ZombieProjectileActionDefinition *this)

{
  ~ZombieProjectileActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04630ecc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieProjectileActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void __thiscall
ZombieProjectileActionDefinition::TryStartAction
          (ZombieProjectileActionDefinition *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieWithActions::QueueAction<ZombieProjectileActionHandler>
            ((ZombieWithActions *)this,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* ZombieProjectileActionDefinition::StaticGetClass() */

long * ZombieProjectileActionDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieProjectileActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieProjectileActionDefinition::GetClass() const */

long * ZombieProjectileActionDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieProjectileActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

