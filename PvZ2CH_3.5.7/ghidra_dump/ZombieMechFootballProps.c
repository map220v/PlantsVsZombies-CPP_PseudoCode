// Class: ZombieMechFootballProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMechFootballProps::StaticClassInit() */

void ZombieMechFootballProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieMechFootballProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046bbe40,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMechFootballProps::ZombieMechFootballProps() */

void __thiscall ZombieMechFootballProps::ZombieMechFootballProps(ZombieMechFootballProps *this)

{
  ZombieMechProps::ZombieMechProps((ZombieMechProps *)this);
  *(undefined ***)this = &PTR_GetClass_068b0190;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x228));
  Set8BytesTo0(this + 0x230);
  Set8BytesTo0(this + 0x238);
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined4 *)(this + 0x244) = 0;
  *(undefined4 *)(this + 0x248) = 0;
  return;
}


/* ZombieMechFootballProps::StaticNew() */

ZombieMechFootballProps * ZombieMechFootballProps::StaticNew(void)

{
  ZombieMechFootballProps *this;
  
  this = ::operator_new(0x250);
  ZombieMechFootballProps(this);
  return this;
}


/* ZombieMechFootballProps::~ZombieMechFootballProps() */

void __thiscall ZombieMechFootballProps::~ZombieMechFootballProps(ZombieMechFootballProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b0190;
  std::string::~string((string *)(this + 0x238));
  std::string::~string((string *)(this + 0x230));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x228));
  ZombieMechProps::~ZombieMechProps((ZombieMechProps *)this);
  return;
}


/* ZombieMechFootballProps::~ZombieMechFootballProps() */

void __thiscall ZombieMechFootballProps::~ZombieMechFootballProps(ZombieMechFootballProps *this)

{
  ~ZombieMechFootballProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieMechFootballProps::StaticGetClass() */

long * ZombieMechFootballProps::StaticGetClass(void)

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
  uVar2 = ZombieMechProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieMechFootballProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMechFootballProps::GetClass() const */

long * ZombieMechFootballProps::GetClass(void)

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
  uVar2 = ZombieMechProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieMechFootballProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

