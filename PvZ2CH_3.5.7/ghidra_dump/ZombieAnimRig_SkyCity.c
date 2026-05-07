// Class: ZombieAnimRig_SkyCity


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SkyCity::getPrepareEatAirShipAnimationName() */

void __thiscall
ZombieAnimRig_SkyCity::getPrepareEatAirShipAnimationName(ZombieAnimRig_SkyCity *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"attack2");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SkyCity::getEndEatAirShipAnimationName() */

void __thiscall ZombieAnimRig_SkyCity::getEndEatAirShipAnimationName(ZombieAnimRig_SkyCity *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"attack2_end");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieAnimRig_SkyCity::~ZombieAnimRig_SkyCity() */

void __thiscall ZombieAnimRig_SkyCity::~ZombieAnimRig_SkyCity(ZombieAnimRig_SkyCity *this)

{
  *(undefined ***)this = &PTR_GetClass_068df390;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_SkyCity_068df628;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_SkyCity::~ZombieAnimRig_SkyCity() */

void __thiscall ZombieAnimRig_SkyCity::~ZombieAnimRig_SkyCity(ZombieAnimRig_SkyCity *this)

{
  ~ZombieAnimRig_SkyCity(this + -0x10);
  return;
}


/* ZombieAnimRig_SkyCity::~ZombieAnimRig_SkyCity() */

void __thiscall ZombieAnimRig_SkyCity::~ZombieAnimRig_SkyCity(ZombieAnimRig_SkyCity *this)

{
  ~ZombieAnimRig_SkyCity(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_SkyCity::~ZombieAnimRig_SkyCity() */

void __thiscall ZombieAnimRig_SkyCity::~ZombieAnimRig_SkyCity(ZombieAnimRig_SkyCity *this)

{
  ~ZombieAnimRig_SkyCity(this + -0x10);
  return;
}


/* ZombieAnimRig_SkyCity::ZombieAnimRig_SkyCity() */

void __thiscall ZombieAnimRig_SkyCity::ZombieAnimRig_SkyCity(ZombieAnimRig_SkyCity *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068df390;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_SkyCity_068df628;
  return;
}


/* ZombieAnimRig_SkyCity::StaticNew() */

ZombieAnimRig_SkyCity * ZombieAnimRig_SkyCity::StaticNew(void)

{
  ZombieAnimRig_SkyCity *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_SkyCity(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SkyCity::StaticClassInit() */

void ZombieAnimRig_SkyCity::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_SkyCity");
    (*pcVar2)(plVar1,asStack_10,FUN_047a41e8,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_SkyCity::StaticGetClass() */

long * ZombieAnimRig_SkyCity::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_SkyCity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_SkyCity::GetClass() const */

long * ZombieAnimRig_SkyCity::GetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_SkyCity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SkyCity::PlayEatShipWithDelegate(std::string const&, Sexy::Delegate1<std::string
   const&>) */

void __thiscall
ZombieAnimRig_SkyCity::PlayEatShipWithDelegate
          (ZombieAnimRig_SkyCity *this,undefined8 param_1,Delegate1 *param_3)

{
  int iVar1;
  code *pcVar2;
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x168);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_3);
  iVar1 = (*pcVar2)(this,param_1,0,aDStack_38);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 3;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SkyCity::PlaySingleEatAirShip(Sexy::Delegate1<std::string const&>) */

void __thiscall
ZombieAnimRig_SkyCity::PlaySingleEatAirShip(ZombieAnimRig_SkyCity *this,Delegate1 *param_2)

{
  undefined4 uVar1;
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x268))(asStack_40);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
  uVar1 = PlayEatShipWithDelegate(this,asStack_40,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SkyCity::PlayPrepareEatShip(Sexy::Delegate1<std::string const&>) */

void __thiscall
ZombieAnimRig_SkyCity::PlayPrepareEatShip(ZombieAnimRig_SkyCity *this,Delegate1 *param_2)

{
  undefined4 uVar1;
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x278))(asStack_40);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
  uVar1 = PlayEatShipWithDelegate(this,asStack_40,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SkyCity::PlayEndEatShip(Sexy::Delegate1<std::string const&>) */

void __thiscall
ZombieAnimRig_SkyCity::PlayEndEatShip(ZombieAnimRig_SkyCity *this,Delegate1 *param_2)

{
  undefined4 uVar1;
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x280))(asStack_40);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
  uVar1 = PlayEatShipWithDelegate(this,asStack_40,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SkyCity::PlayOnAirShipDie() */

void __thiscall ZombieAnimRig_SkyCity::PlayOnAirShipDie(ZombieAnimRig_SkyCity *this)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  code *pcVar5;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  lVar4 = *(long *)this;
  local_8 = ___stack_chk_guard;
  if (*(code **)(lVar4 + 0x260) == ZombieAnimRig::getDieShouldBlend) {
    cVar1 = ZombieAnimRig::getDieShouldBlend();
    pcVar3 = *(code **)(lVar4 + 0x270);
  }
  else {
    cVar1 = (**(code **)(lVar4 + 0x260))();
    lVar4 = *(long *)this;
    pcVar3 = *(code **)(lVar4 + 0x270);
  }
  if (cVar1 == '\0') {
    pcVar5 = *(code **)(lVar4 + 0x168);
    (*pcVar3)(asStack_40,this);
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    iVar2 = (*pcVar5)(this,asStack_40,3,aDStack_38);
    std::string::~string(asStack_40);
  }
  else {
    (*pcVar3)(this);
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    iVar2 = PopAnimRig::BlendTo((PopAnimRig *)0x3f000000,0,this,asStack_40,0,2,aDStack_38);
    std::string::~string(asStack_40);
  }
  if (iVar2 != -1) {
    *(undefined4 *)(this + 0x210) = 4;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SkyCity::PlayEatAirShip() */

void __thiscall ZombieAnimRig_SkyCity::PlayEatAirShip(ZombieAnimRig_SkyCity *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x268))(asStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,3,aDStack_38);
  std::string::~string(asStack_40);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 3;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}

