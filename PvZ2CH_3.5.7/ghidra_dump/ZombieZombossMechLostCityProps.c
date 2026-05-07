// Class: ZombieZombossMechLostCityProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMechLostCityProps::StaticClassInit() */

void ZombieZombossMechLostCityProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZombossMechLostCityProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04732cb0,0x2b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMechLostCityProps::StaticGetClass() */

long * ZombieZombossMechLostCityProps::StaticGetClass(void)

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
  uVar2 = ZombieZombossMechProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMechLostCityProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechLostCityProps::GetClass() const */

long * ZombieZombossMechLostCityProps::GetClass(void)

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
  uVar2 = ZombieZombossMechProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMechLostCityProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechLostCityProps::ZombieZombossMechLostCityProps() */

void __thiscall
ZombieZombossMechLostCityProps::ZombieZombossMechLostCityProps(ZombieZombossMechLostCityProps *this)

{
  ZombieZombossMechProps::ZombieZombossMechProps((ZombieZombossMechProps *)this);
  *(undefined ***)this = &PTR_GetClass_068c4b00;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x2a0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x2a8));
  return;
}


/* ZombieZombossMechLostCityProps::StaticNew() */

ZombieZombossMechLostCityProps * ZombieZombossMechLostCityProps::StaticNew(void)

{
  ZombieZombossMechLostCityProps *this;
  
  this = ::operator_new(0x2b0);
  ZombieZombossMechLostCityProps(this);
  return this;
}


/* ZombieZombossMechLostCityProps::~ZombieZombossMechLostCityProps() */

void __thiscall
ZombieZombossMechLostCityProps::~ZombieZombossMechLostCityProps
          (ZombieZombossMechLostCityProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068c4b00;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x2a8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x2a0));
  ZombieZombossMechProps::~ZombieZombossMechProps((ZombieZombossMechProps *)this);
  return;
}


/* ZombieZombossMechLostCityProps::~ZombieZombossMechLostCityProps() */

void __thiscall
ZombieZombossMechLostCityProps::~ZombieZombossMechLostCityProps
          (ZombieZombossMechLostCityProps *this)

{
  ~ZombieZombossMechLostCityProps(this);
  AK::FreeHook(this);
  return;
}

