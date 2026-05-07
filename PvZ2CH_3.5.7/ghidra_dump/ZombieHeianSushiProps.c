// Class: ZombieHeianSushiProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHeianSushiProps::StaticClassInit() */

void ZombieHeianSushiProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieHeianSushiProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04651a7c,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieHeianSushiProps::StaticGetClass() */

long * ZombieHeianSushiProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieHeianSushiProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieHeianSushiProps::GetClass() const */

long * ZombieHeianSushiProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieHeianSushiProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieHeianSushiProps::ZombieHeianSushiProps() */

void __thiscall ZombieHeianSushiProps::ZombieHeianSushiProps(ZombieHeianSushiProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06887530;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x218));
  *(undefined4 *)(this + 0x214) = 0x40c00000;
  *(undefined4 *)(this + 0x210) = 0;
  return;
}


/* ZombieHeianSushiProps::StaticNew() */

ZombieHeianSushiProps * ZombieHeianSushiProps::StaticNew(void)

{
  ZombieHeianSushiProps *this;
  
  this = ::operator_new(0x220);
  ZombieHeianSushiProps(this);
  return this;
}


/* ZombieHeianSushiProps::~ZombieHeianSushiProps() */

void __thiscall ZombieHeianSushiProps::~ZombieHeianSushiProps(ZombieHeianSushiProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06887530;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x218));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieHeianSushiProps::~ZombieHeianSushiProps() */

void __thiscall ZombieHeianSushiProps::~ZombieHeianSushiProps(ZombieHeianSushiProps *this)

{
  ~ZombieHeianSushiProps(this);
  AK::FreeHook(this);
  return;
}

