// Class: ZombieFairyTaleWitchProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleWitchProps::StaticClassInit() */

void ZombieFairyTaleWitchProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieFairyTaleWitchProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04ed67b0,0x260,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieFairyTaleWitchProps::StaticGetClass() */

long * ZombieFairyTaleWitchProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieFairyTaleWitchProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieFairyTaleWitchProps::GetClass() const */

long * ZombieFairyTaleWitchProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieFairyTaleWitchProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieFairyTaleWitchProps::ZombieFairyTaleWitchProps() */

void __thiscall
ZombieFairyTaleWitchProps::ZombieFairyTaleWitchProps(ZombieFairyTaleWitchProps *this)

{
  size_t in_x2;
  
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069facb0;
  Set8BytesTo0(this + 0x210);
  Sexy::Point::Point((Point *)(this + 0x218));
  Set8BytesTo0((string *)(this + 0x220));
  Set8BytesTo0(this + 0x228);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x230));
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x238));
  std::string::append((string *)(this + 0x220),"Play_RaZombie_WandActivate",in_x2);
  return;
}


/* ZombieFairyTaleWitchProps::StaticNew() */

ZombieFairyTaleWitchProps * ZombieFairyTaleWitchProps::StaticNew(void)

{
  ZombieFairyTaleWitchProps *this;
  
  this = ::operator_new(0x260);
  ZombieFairyTaleWitchProps(this);
  return this;
}


/* ZombieFairyTaleWitchProps::~ZombieFairyTaleWitchProps() */

void __thiscall
ZombieFairyTaleWitchProps::~ZombieFairyTaleWitchProps(ZombieFairyTaleWitchProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069facb0;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x238));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x230));
  std::string::~string((string *)(this + 0x228));
  std::string::~string((string *)(this + 0x220));
  std::string::~string((string *)(this + 0x210));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieFairyTaleWitchProps::~ZombieFairyTaleWitchProps() */

void __thiscall
ZombieFairyTaleWitchProps::~ZombieFairyTaleWitchProps(ZombieFairyTaleWitchProps *this)

{
  ~ZombieFairyTaleWitchProps(this);
  AK::FreeHook(this);
  return;
}

