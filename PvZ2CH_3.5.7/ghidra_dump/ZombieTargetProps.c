// Class: ZombieTargetProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTargetProps::StaticClassInit() */

void ZombieTargetProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieTargetProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046c31bc,0x238,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTargetProps::ZombieTargetProps() */

void __thiscall ZombieTargetProps::ZombieTargetProps(ZombieTargetProps *this)

{
  size_t in_x2;
  
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068b1660;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x210));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x218));
  Set8BytesTo0((string *)(this + 0x220));
  Set8BytesTo0((string *)(this + 0x228));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x230));
  std::string::append((string *)(this + 0x220),"",in_x2);
  std::string::append((string *)(this + 0x228),"",in_x2);
  return;
}


/* ZombieTargetProps::StaticNew() */

ZombieTargetProps * ZombieTargetProps::StaticNew(void)

{
  ZombieTargetProps *this;
  
  this = ::operator_new(0x238);
  ZombieTargetProps(this);
  return this;
}


/* ZombieTargetProps::~ZombieTargetProps() */

void __thiscall ZombieTargetProps::~ZombieTargetProps(ZombieTargetProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b1660;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x230));
  std::string::~string((string *)(this + 0x228));
  std::string::~string((string *)(this + 0x220));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieTargetProps::~ZombieTargetProps() */

void __thiscall ZombieTargetProps::~ZombieTargetProps(ZombieTargetProps *this)

{
  ~ZombieTargetProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieTargetProps::StaticGetClass() */

long * ZombieTargetProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieTargetProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTargetProps::GetClass() const */

long * ZombieTargetProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieTargetProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

