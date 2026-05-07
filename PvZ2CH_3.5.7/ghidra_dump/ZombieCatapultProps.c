// Class: ZombieCatapultProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCatapultProps::StaticClassInit() */

void ZombieCatapultProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieCatapultProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03fc0408,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCatapultProps::StaticGetClass() */

long * ZombieCatapultProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieCatapultProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCatapultProps::GetClass() const */

long * ZombieCatapultProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieCatapultProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCatapultProps::ZombieCatapultProps() */

void __thiscall ZombieCatapultProps::ZombieCatapultProps(ZombieCatapultProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a8ea0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x210));
  *(undefined4 *)(this + 0x21c) = 0x3f800000;
  *(undefined4 *)(this + 0x224) = 0x40400000;
  *(undefined4 *)(this + 0x218) = 0x443b8000;
  *(undefined4 *)(this + 0x228) = 0x41000000;
  return;
}


/* ZombieCatapultProps::StaticNew() */

ZombieCatapultProps * ZombieCatapultProps::StaticNew(void)

{
  ZombieCatapultProps *this;
  
  this = ::operator_new(0x230);
  ZombieCatapultProps(this);
  return this;
}


/* ZombieCatapultProps::~ZombieCatapultProps() */

void __thiscall ZombieCatapultProps::~ZombieCatapultProps(ZombieCatapultProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a8ea0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x210));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieCatapultProps::~ZombieCatapultProps() */

void __thiscall ZombieCatapultProps::~ZombieCatapultProps(ZombieCatapultProps *this)

{
  ~ZombieCatapultProps(this);
  AK::FreeHook(this);
  return;
}

