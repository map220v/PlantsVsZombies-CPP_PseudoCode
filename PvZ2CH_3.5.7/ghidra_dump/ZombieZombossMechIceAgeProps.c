// Class: ZombieZombossMechIceAgeProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMechIceAgeProps::StaticClassInit() */

void ZombieZombossMechIceAgeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZombossMechIceAgeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0476ed50,0x2b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMechIceAgeProps::StaticGetClass() */

long * ZombieZombossMechIceAgeProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieZombossMechIceAgeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechIceAgeProps::GetClass() const */

long * ZombieZombossMechIceAgeProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieZombossMechIceAgeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechIceAgeProps::ZombieZombossMechIceAgeProps() */

void __thiscall
ZombieZombossMechIceAgeProps::ZombieZombossMechIceAgeProps(ZombieZombossMechIceAgeProps *this)

{
  ZombieZombossMechProps::ZombieZombossMechProps((ZombieZombossMechProps *)this);
  *(undefined ***)this = &PTR_GetClass_068d2b20;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x2a0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x2a8));
  *(undefined4 *)(this + 0x2b0) = 1;
  return;
}


/* ZombieZombossMechIceAgeProps::StaticNew() */

ZombieZombossMechIceAgeProps * ZombieZombossMechIceAgeProps::StaticNew(void)

{
  ZombieZombossMechIceAgeProps *this;
  
  this = ::operator_new(0x2b8);
  ZombieZombossMechIceAgeProps(this);
  return this;
}


/* ZombieZombossMechIceAgeProps::~ZombieZombossMechIceAgeProps() */

void __thiscall
ZombieZombossMechIceAgeProps::~ZombieZombossMechIceAgeProps(ZombieZombossMechIceAgeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068d2b20;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x2a8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x2a0));
  ZombieZombossMechProps::~ZombieZombossMechProps((ZombieZombossMechProps *)this);
  return;
}


/* ZombieZombossMechIceAgeProps::~ZombieZombossMechIceAgeProps() */

void __thiscall
ZombieZombossMechIceAgeProps::~ZombieZombossMechIceAgeProps(ZombieZombossMechIceAgeProps *this)

{
  ~ZombieZombossMechIceAgeProps(this);
  AK::FreeHook(this);
  return;
}

