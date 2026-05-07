// Class: ZombiePVPNurseProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPNurseProps::StaticClassInit() */

void ZombiePVPNurseProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePVPNurseProps");
    (*pcVar2)(plVar1,asStack_10,FUN_049976fc,0x278,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPNurseProps::StaticGetClass() */

long * ZombiePVPNurseProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePVPNurseProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPNurseProps::GetClass() const */

long * ZombiePVPNurseProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePVPNurseProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPNurseProps::ZombiePVPNurseProps() */

void __thiscall ZombiePVPNurseProps::ZombiePVPNurseProps(ZombiePVPNurseProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0691c6e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x210));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x228));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x230));
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x238));
  *(undefined4 *)(this + 0x260) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x268));
  *(undefined4 *)(this + 0x270) = 0x40a00000;
  *(undefined4 *)(this + 0x274) = 0x41700000;
  return;
}


/* ZombiePVPNurseProps::StaticNew() */

ZombiePVPNurseProps * ZombiePVPNurseProps::StaticNew(void)

{
  ZombiePVPNurseProps *this;
  
  this = ::operator_new(0x278);
  ZombiePVPNurseProps(this);
  return this;
}


/* ZombiePVPNurseProps::~ZombiePVPNurseProps() */

void __thiscall ZombiePVPNurseProps::~ZombiePVPNurseProps(ZombiePVPNurseProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0691c6e0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x268));
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x238));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x210));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombiePVPNurseProps::~ZombiePVPNurseProps() */

void __thiscall ZombiePVPNurseProps::~ZombiePVPNurseProps(ZombiePVPNurseProps *this)

{
  ~ZombiePVPNurseProps(this);
  AK::FreeHook(this);
  return;
}

