// Class: ZombieArchmageProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieArchmageProps::StaticClassInit() */

void ZombieArchmageProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieArchmageProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046721e4,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieArchmageProps::StaticGetClass() */

long * ZombieArchmageProps::StaticGetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieArchmageProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieArchmageProps::GetClass() const */

long * ZombieArchmageProps::GetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieArchmageProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieArchmageProps::ZombieArchmageProps() */

void __thiscall ZombieArchmageProps::ZombieArchmageProps(ZombieArchmageProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06894550;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x210));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x218));
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x220));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x248));
  return;
}


/* ZombieArchmageProps::StaticNew() */

ZombieArchmageProps * ZombieArchmageProps::StaticNew(void)

{
  ZombieArchmageProps *this;
  
  this = ::operator_new(0x250);
  ZombieArchmageProps(this);
  return this;
}


/* ZombieArchmageProps::~ZombieArchmageProps() */

void __thiscall ZombieArchmageProps::~ZombieArchmageProps(ZombieArchmageProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06894550;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x220));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieArchmageProps::~ZombieArchmageProps() */

void __thiscall ZombieArchmageProps::~ZombieArchmageProps(ZombieArchmageProps *this)

{
  ~ZombieArchmageProps(this);
  AK::FreeHook(this);
  return;
}

