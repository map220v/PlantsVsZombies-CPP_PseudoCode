// Class: ZombiePVPSeagullProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSeagullProps::StaticClassInit() */

void ZombiePVPSeagullProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePVPSeagullProps");
    (*pcVar2)(plVar1,asStack_10,FUN_049a1384,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPSeagullProps::StaticGetClass() */

long * ZombiePVPSeagullProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePVPSeagullProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPSeagullProps::GetClass() const */

long * ZombiePVPSeagullProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePVPSeagullProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPSeagullProps::ZombiePVPSeagullProps() */

void __thiscall ZombiePVPSeagullProps::ZombiePVPSeagullProps(ZombiePVPSeagullProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069202b0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x210));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x218));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x220));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x228));
  return;
}


/* ZombiePVPSeagullProps::StaticNew() */

ZombiePVPSeagullProps * ZombiePVPSeagullProps::StaticNew(void)

{
  ZombiePVPSeagullProps *this;
  
  this = ::operator_new(0x230);
  ZombiePVPSeagullProps(this);
  return this;
}


/* ZombiePVPSeagullProps::~ZombiePVPSeagullProps() */

void __thiscall ZombiePVPSeagullProps::~ZombiePVPSeagullProps(ZombiePVPSeagullProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069202b0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x228));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombiePVPSeagullProps::~ZombiePVPSeagullProps() */

void __thiscall ZombiePVPSeagullProps::~ZombiePVPSeagullProps(ZombiePVPSeagullProps *this)

{
  ~ZombiePVPSeagullProps(this);
  AK::FreeHook(this);
  return;
}

