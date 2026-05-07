// Class: ZombieAnimRig_Electric


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Electric::getEatAirShipAnimationName() */

void __thiscall ZombieAnimRig_Electric::getEatAirShipAnimationName(ZombieAnimRig_Electric *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"attack2_keep");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieAnimRig_Electric::~ZombieAnimRig_Electric() */

void __thiscall ZombieAnimRig_Electric::~ZombieAnimRig_Electric(ZombieAnimRig_Electric *this)

{
  *(undefined ***)this = &PTR_GetClass_068e0310;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Electric_068e05a8;
  ZombieAnimRig_SkyCity::~ZombieAnimRig_SkyCity((ZombieAnimRig_SkyCity *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Electric::~ZombieAnimRig_Electric() */

void __thiscall ZombieAnimRig_Electric::~ZombieAnimRig_Electric(ZombieAnimRig_Electric *this)

{
  ~ZombieAnimRig_Electric(this + -0x10);
  return;
}


/* ZombieAnimRig_Electric::~ZombieAnimRig_Electric() */

void __thiscall ZombieAnimRig_Electric::~ZombieAnimRig_Electric(ZombieAnimRig_Electric *this)

{
  ~ZombieAnimRig_Electric(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Electric::~ZombieAnimRig_Electric() */

void __thiscall ZombieAnimRig_Electric::~ZombieAnimRig_Electric(ZombieAnimRig_Electric *this)

{
  ~ZombieAnimRig_Electric(this + -0x10);
  return;
}


/* ZombieAnimRig_Electric::ZombieAnimRig_Electric() */

void __thiscall ZombieAnimRig_Electric::ZombieAnimRig_Electric(ZombieAnimRig_Electric *this)

{
  ZombieAnimRig_SkyCity::ZombieAnimRig_SkyCity((ZombieAnimRig_SkyCity *)this);
  *(undefined ***)this = &PTR_GetClass_068e0310;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Electric_068e05a8;
  return;
}


/* ZombieAnimRig_Electric::StaticNew() */

ZombieAnimRig_Electric * ZombieAnimRig_Electric::StaticNew(void)

{
  ZombieAnimRig_Electric *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_Electric(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Electric::StaticClassInit() */

void ZombieAnimRig_Electric::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Electric");
    (*pcVar2)(plVar1,asStack_10,FUN_047a660c,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Electric::StaticGetClass() */

long * ZombieAnimRig_Electric::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_SkyCity::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Electric",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Electric::GetClass() const */

long * ZombieAnimRig_Electric::GetClass(void)

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
  uVar2 = ZombieAnimRig_SkyCity::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Electric",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Electric::PlayRangedAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_Electric::PlayRangedAttack(ZombieAnimRig_Electric *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  (**(code **)(*(long *)this + 0x238))(asStack_58);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 7;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}

