// Class: PlantAnimRig_OrchidMage


/* PlantAnimRig_OrchidMage::~PlantAnimRig_OrchidMage() */

void __thiscall PlantAnimRig_OrchidMage::~PlantAnimRig_OrchidMage(PlantAnimRig_OrchidMage *this)

{
  *(undefined ***)this = &PTR_GetClass_066392c0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_OrchidMage_06639528;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_OrchidMage::~PlantAnimRig_OrchidMage() */

void __thiscall PlantAnimRig_OrchidMage::~PlantAnimRig_OrchidMage(PlantAnimRig_OrchidMage *this)

{
  ~PlantAnimRig_OrchidMage(this + -0x10);
  return;
}


/* PlantAnimRig_OrchidMage::~PlantAnimRig_OrchidMage() */

void __thiscall PlantAnimRig_OrchidMage::~PlantAnimRig_OrchidMage(PlantAnimRig_OrchidMage *this)

{
  ~PlantAnimRig_OrchidMage(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_OrchidMage::~PlantAnimRig_OrchidMage() */

void __thiscall PlantAnimRig_OrchidMage::~PlantAnimRig_OrchidMage(PlantAnimRig_OrchidMage *this)

{
  ~PlantAnimRig_OrchidMage(this + -0x10);
  return;
}


/* PlantAnimRig_OrchidMage::PlantAnimRig_OrchidMage() */

void __thiscall PlantAnimRig_OrchidMage::PlantAnimRig_OrchidMage(PlantAnimRig_OrchidMage *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_066392c0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_OrchidMage_06639528;
  return;
}


/* PlantAnimRig_OrchidMage::StaticNew() */

PlantAnimRig_OrchidMage * PlantAnimRig_OrchidMage::StaticNew(void)

{
  PlantAnimRig_OrchidMage *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_OrchidMage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_OrchidMage::StaticClassInit() */

void PlantAnimRig_OrchidMage::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_OrchidMage");
    (*pcVar2)(plVar1,asStack_10,FUN_03462bb4,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_OrchidMage::StaticGetClass() */

long * PlantAnimRig_OrchidMage::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_OrchidMage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_OrchidMage::GetClass() const */

long * PlantAnimRig_OrchidMage::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_OrchidMage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_OrchidMage::PlayAttackOn() */

void __thiscall PlantAnimRig_OrchidMage::PlayAttackOn(PlantAnimRig_OrchidMage *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack_on");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_OrchidMage::PlayAttackIdle() */

void __thiscall PlantAnimRig_OrchidMage::PlayAttackIdle(PlantAnimRig_OrchidMage *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack_idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_OrchidMage::PlayAttack() */

void __thiscall PlantAnimRig_OrchidMage::PlayAttack(PlantAnimRig_OrchidMage *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_OrchidMage::PlayPassive() */

void __thiscall PlantAnimRig_OrchidMage::PlayPassive(PlantAnimRig_OrchidMage *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"passive");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* PlantAnimRig_OrchidMage::onPopAnimCommand(float, std::string const&, std::string const&) */

void PlantAnimRig_OrchidMage::onPopAnimCommand(float param_1,string *param_2,string *param_3)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_03f51ab8(*(undefined8 *)(param_2 + 0x240),*(undefined8 *)(param_2 + 0x250));
  if ((iVar2 != 0) && (bVar1 = std::operator==(param_3,"use_special"), bVar1)) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(param_2 + 0x238));
    return;
  }
  iVar2 = FUN_03f51ab8(*(undefined8 *)(param_2 + 0x270),*(undefined8 *)(param_2 + 0x280));
  if ((iVar2 != 0) && (bVar1 = std::operator==(param_3,"use_action"), bVar1)) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(param_2 + 0x268));
    return;
  }
  PopAnimRig::onPopAnimCommand(param_1,param_2,param_3);
  return;
}

