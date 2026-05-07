// Class: ZombieHeianNinjaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHeianNinjaProps::StaticClassInit() */

void ZombieHeianNinjaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieHeianNinjaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03d352c0,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieHeianNinjaProps::StaticGetClass() */

long * ZombieHeianNinjaProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieHeianNinjaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieHeianNinjaProps::GetClass() const */

long * ZombieHeianNinjaProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieHeianNinjaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieHeianNinjaProps::ZombieHeianNinjaProps() */

void __thiscall ZombieHeianNinjaProps::ZombieHeianNinjaProps(ZombieHeianNinjaProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06768330;
  DVec3::DVec3((DVec3 *)(this + 0x218));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x228));
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x230) = 0;
  *(undefined4 *)(this + 0x234) = 0;
  *(undefined4 *)(this + 0x214) = 0;
  *(undefined4 *)(this + 0x238) = 0;
  return;
}


/* ZombieHeianNinjaProps::StaticNew() */

ZombieHeianNinjaProps * ZombieHeianNinjaProps::StaticNew(void)

{
  ZombieHeianNinjaProps *this;
  
  this = ::operator_new(0x240);
  ZombieHeianNinjaProps(this);
  return this;
}


/* ZombieHeianNinjaProps::~ZombieHeianNinjaProps() */

void __thiscall ZombieHeianNinjaProps::~ZombieHeianNinjaProps(ZombieHeianNinjaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06768330;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x228));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieHeianNinjaProps::~ZombieHeianNinjaProps() */

void __thiscall ZombieHeianNinjaProps::~ZombieHeianNinjaProps(ZombieHeianNinjaProps *this)

{
  ~ZombieHeianNinjaProps(this);
  AK::FreeHook(this);
  return;
}

