// Class: NewspaperArmor


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewspaperArmor::StaticClassInit() */

void NewspaperArmor::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewspaperArmor");
    (*pcVar2)(plVar1,asStack_10,FUN_03c51c10,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewspaperArmor::StaticGetClass() */

long * NewspaperArmor::StaticGetClass(void)

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
  uVar2 = Armor::StaticGetClass();
  (*pcVar3)(plVar1,"NewspaperArmor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewspaperArmor::GetClass() const */

long * NewspaperArmor::GetClass(void)

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
  uVar2 = Armor::StaticGetClass();
  (*pcVar3)(plVar1,"NewspaperArmor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewspaperArmor::~NewspaperArmor() */

void __thiscall NewspaperArmor::~NewspaperArmor(NewspaperArmor *this)

{
  *(undefined ***)this = &PTR_GetClass_06753410;
  Armor::~Armor((Armor *)this);
  return;
}


/* NewspaperArmor::~NewspaperArmor() */

void __thiscall NewspaperArmor::~NewspaperArmor(NewspaperArmor *this)

{
  ~NewspaperArmor(this);
  AK::FreeHook(this);
  return;
}


/* NewspaperArmor::NewspaperArmor() */

void __thiscall NewspaperArmor::NewspaperArmor(NewspaperArmor *this)

{
  Armor::Armor((Armor *)this);
  this[0x3c] = (NewspaperArmor)0x0;
  *(undefined ***)this = &PTR_GetClass_06753410;
  return;
}


/* NewspaperArmor::StaticNew() */

NewspaperArmor * NewspaperArmor::StaticNew(void)

{
  NewspaperArmor *this;
  
  this = ::operator_new(0x40);
  NewspaperArmor(this);
  return this;
}


/* NewspaperArmor::onTakeDamage(DamageInfo const&) */

void __thiscall NewspaperArmor::onTakeDamage(NewspaperArmor *this,DamageInfo *param_1)

{
  bool bVar1;
  
  if (((this[0x3c] == (NewspaperArmor)0x0) && (0.0 < *(float *)(param_1 + 8))) &&
     (bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x400), bVar1)) {
    this[0x3c] = (NewspaperArmor)0x1;
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
    return;
  }
  return;
}


/* NewspaperArmor::updateDamageState() */

void __thiscall NewspaperArmor::updateDamageState(NewspaperArmor *this)

{
  Zombie *this_00;
  PopAnimRig *this_01;
  long extraout_x0;
  
  Armor::updateDamageState((Armor *)this);
  this_00 = (Zombie *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20))
  ;
  this_01 = (PopAnimRig *)Zombie::GetAnimRig(this_00);
  Armor::getProps((Armor *)this);
  nop();
  PopAnimRig::SetLayerVisibility(this_01,(string *)(extraout_x0 + 0x98),(bool)this[0x3c]);
  return;
}

