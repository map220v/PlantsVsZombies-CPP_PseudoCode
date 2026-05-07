// Class: ZombieZombossMechEgyptProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMechEgyptProps::StaticClassInit() */

void ZombieZombossMechEgyptProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZombossMechEgyptProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0471a988,0x2b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMechEgyptProps::StaticGetClass() */

long * ZombieZombossMechEgyptProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieZombossMechEgyptProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechEgyptProps::GetClass() const */

long * ZombieZombossMechEgyptProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieZombossMechEgyptProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechEgyptProps::ZombieZombossMechEgyptProps() */

void __thiscall
ZombieZombossMechEgyptProps::ZombieZombossMechEgyptProps(ZombieZombossMechEgyptProps *this)

{
  ZombieZombossMechProps::ZombieZombossMechProps((ZombieZombossMechProps *)this);
  *(undefined ***)this = &PTR_GetClass_068bee30;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x2a8));
  *(undefined4 *)(this + 0x2a0) = 2;
  return;
}


/* ZombieZombossMechEgyptProps::StaticNew() */

ZombieZombossMechEgyptProps * ZombieZombossMechEgyptProps::StaticNew(void)

{
  ZombieZombossMechEgyptProps *this;
  
  this = ::operator_new(0x2b0);
  ZombieZombossMechEgyptProps(this);
  return this;
}


/* ZombieZombossMechEgyptProps::~ZombieZombossMechEgyptProps() */

void __thiscall
ZombieZombossMechEgyptProps::~ZombieZombossMechEgyptProps(ZombieZombossMechEgyptProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068bee30;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x2a8));
  ZombieZombossMechProps::~ZombieZombossMechProps((ZombieZombossMechProps *)this);
  return;
}


/* ZombieZombossMechEgyptProps::~ZombieZombossMechEgyptProps() */

void __thiscall
ZombieZombossMechEgyptProps::~ZombieZombossMechEgyptProps(ZombieZombossMechEgyptProps *this)

{
  ~ZombieZombossMechEgyptProps(this);
  AK::FreeHook(this);
  return;
}

