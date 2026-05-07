// Class: ZombieMoneyTreeProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMoneyTreeProps::StaticClassInit() */

void ZombieMoneyTreeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieMoneyTreeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03470c60,0x238,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMoneyTreeProps::StaticGetClass() */

long * ZombieMoneyTreeProps::StaticGetClass(void)

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
  uVar2 = ZombieWithActionsProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieMoneyTreeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMoneyTreeProps::GetClass() const */

long * ZombieMoneyTreeProps::GetClass(void)

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
  uVar2 = ZombieWithActionsProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieMoneyTreeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMoneyTreeProps::ZombieMoneyTreeProps() */

void __thiscall ZombieMoneyTreeProps::ZombieMoneyTreeProps(ZombieMoneyTreeProps *this)

{
  ZombieWithActionsProps::ZombieWithActionsProps((ZombieWithActionsProps *)this);
  *(undefined ***)this = &PTR_GetClass_0663a720;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x228));
  *(undefined4 *)(this + 0x230) = 0x41700000;
  return;
}


/* ZombieMoneyTreeProps::StaticNew() */

ZombieMoneyTreeProps * ZombieMoneyTreeProps::StaticNew(void)

{
  ZombieMoneyTreeProps *this;
  
  this = ::operator_new(0x238);
  ZombieMoneyTreeProps(this);
  return this;
}


/* ZombieMoneyTreeProps::~ZombieMoneyTreeProps() */

void __thiscall ZombieMoneyTreeProps::~ZombieMoneyTreeProps(ZombieMoneyTreeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0663a720;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x228));
  ZombieWithActionsProps::~ZombieWithActionsProps((ZombieWithActionsProps *)this);
  return;
}


/* ZombieMoneyTreeProps::~ZombieMoneyTreeProps() */

void __thiscall ZombieMoneyTreeProps::~ZombieMoneyTreeProps(ZombieMoneyTreeProps *this)

{
  ~ZombieMoneyTreeProps(this);
  AK::FreeHook(this);
  return;
}

