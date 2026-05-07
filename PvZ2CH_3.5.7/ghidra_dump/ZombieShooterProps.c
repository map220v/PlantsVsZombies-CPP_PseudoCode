// Class: ZombieShooterProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieShooterProps::StaticClassInit() */

void ZombieShooterProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieShooterProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0480e444,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieShooterProps::StaticGetClass() */

long * ZombieShooterProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieShooterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieShooterProps::GetClass() const */

long * ZombieShooterProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieShooterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieShooterProps::ZombieShooterProps() */

void __thiscall ZombieShooterProps::ZombieShooterProps(ZombieShooterProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06900920;
  DVec3::DVec3((DVec3 *)(this + 0x210));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x220));
  return;
}


/* ZombieShooterProps::StaticNew() */

ZombieShooterProps * ZombieShooterProps::StaticNew(void)

{
  ZombieShooterProps *this;
  
  this = ::operator_new(0x228);
  ZombieShooterProps(this);
  return this;
}


/* ZombieShooterProps::~ZombieShooterProps() */

void __thiscall ZombieShooterProps::~ZombieShooterProps(ZombieShooterProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06900920;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x220));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieShooterProps::~ZombieShooterProps() */

void __thiscall ZombieShooterProps::~ZombieShooterProps(ZombieShooterProps *this)

{
  ~ZombieShooterProps(this);
  AK::FreeHook(this);
  return;
}

