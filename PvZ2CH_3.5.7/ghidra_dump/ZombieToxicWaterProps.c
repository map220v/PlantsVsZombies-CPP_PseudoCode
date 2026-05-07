// Class: ZombieToxicWaterProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieToxicWaterProps::StaticClassInit() */

void ZombieToxicWaterProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieToxicWaterProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04ee0670,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieToxicWaterProps::StaticGetClass() */

long * ZombieToxicWaterProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieToxicWaterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieToxicWaterProps::GetClass() const */

long * ZombieToxicWaterProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieToxicWaterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieToxicWaterProps::ZombieToxicWaterProps() */

void __thiscall ZombieToxicWaterProps::ZombieToxicWaterProps(ZombieToxicWaterProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069fd7b0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x210));
  return;
}


/* ZombieToxicWaterProps::StaticNew() */

ZombieToxicWaterProps * ZombieToxicWaterProps::StaticNew(void)

{
  ZombieToxicWaterProps *this;
  
  this = ::operator_new(0x220);
  ZombieToxicWaterProps(this);
  return this;
}


/* ZombieToxicWaterProps::~ZombieToxicWaterProps() */

void __thiscall ZombieToxicWaterProps::~ZombieToxicWaterProps(ZombieToxicWaterProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069fd7b0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x210));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieToxicWaterProps::~ZombieToxicWaterProps() */

void __thiscall ZombieToxicWaterProps::~ZombieToxicWaterProps(ZombieToxicWaterProps *this)

{
  ~ZombieToxicWaterProps(this);
  AK::FreeHook(this);
  return;
}

