// Class: PlantAnimRig_BowlingBulb


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_BowlingBulb::getPlantFoodMainAnimName() */

void __thiscall PlantAnimRig_BowlingBulb::getPlantFoodMainAnimName(PlantAnimRig_BowlingBulb *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"plantfood_idle");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_BowlingBulb::~PlantAnimRig_BowlingBulb() */

void __thiscall PlantAnimRig_BowlingBulb::~PlantAnimRig_BowlingBulb(PlantAnimRig_BowlingBulb *this)

{
  *(undefined ***)this = &PTR_GetClass_06807420;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_BowlingBulb_06807688;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_BowlingBulb::~PlantAnimRig_BowlingBulb() */

void __thiscall PlantAnimRig_BowlingBulb::~PlantAnimRig_BowlingBulb(PlantAnimRig_BowlingBulb *this)

{
  ~PlantAnimRig_BowlingBulb(this + -0x10);
  return;
}


/* PlantAnimRig_BowlingBulb::~PlantAnimRig_BowlingBulb() */

void __thiscall PlantAnimRig_BowlingBulb::~PlantAnimRig_BowlingBulb(PlantAnimRig_BowlingBulb *this)

{
  ~PlantAnimRig_BowlingBulb(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_BowlingBulb::~PlantAnimRig_BowlingBulb() */

void __thiscall PlantAnimRig_BowlingBulb::~PlantAnimRig_BowlingBulb(PlantAnimRig_BowlingBulb *this)

{
  ~PlantAnimRig_BowlingBulb(this + -0x10);
  return;
}


/* PlantAnimRig_BowlingBulb::PlantAnimRig_BowlingBulb() */

void __thiscall PlantAnimRig_BowlingBulb::PlantAnimRig_BowlingBulb(PlantAnimRig_BowlingBulb *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_BowlingBulb)0x0;
  *(undefined ***)this = &PTR_GetClass_06807420;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_BowlingBulb_06807688;
  return;
}


/* PlantAnimRig_BowlingBulb::StaticNew() */

PlantAnimRig_BowlingBulb * PlantAnimRig_BowlingBulb::StaticNew(void)

{
  PlantAnimRig_BowlingBulb *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_BowlingBulb(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_BowlingBulb::StaticClassInit() */

void PlantAnimRig_BowlingBulb::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_BowlingBulb");
    (*pcVar2)(plVar1,asStack_10,FUN_041f70b0,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_BowlingBulb::StaticGetClass() */

long * PlantAnimRig_BowlingBulb::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_BowlingBulb",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_BowlingBulb::GetClass() const */

long * PlantAnimRig_BowlingBulb::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_BowlingBulb",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_BowlingBulb::PlayBulbAttack(int, RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_BowlingBulb::PlayBulbAttack
          (PlantAnimRig_BowlingBulb *this,int param_1,RtReflectionDelegate *param_3)

{
  int iVar1;
  RtReflectionDelegate *__n;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = param_3;
  Set8BytesTo0(asStack_58);
  if (this[0x3b8] == (PlantAnimRig_BowlingBulb)0x0) {
    if (param_1 == 1) {
      std::string::append(asStack_58,"special2",(size_t)__n);
    }
    else if (param_1 == 2) {
      std::string::append(asStack_58,"special3",(size_t)__n);
    }
    else if (param_1 == 0) {
      std::string::append(asStack_58,"special",(size_t)__n);
    }
  }
  else if (param_1 == 1) {
    std::string::append(asStack_58,"plantfood2",(size_t)__n);
  }
  else if (param_1 == 2) {
    std::string::append(asStack_58,"plantfood3",(size_t)__n);
  }
  else if (param_1 == 0) {
    std::string::append(asStack_58,"plantfood1",(size_t)__n);
  }
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  *(undefined4 *)(this + 0x218) = 2;
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_BowlingBulb::PlayBulbRecharge(int, RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_BowlingBulb::PlayBulbRecharge
          (PlantAnimRig_BowlingBulb *this,int param_1,RtReflectionDelegate *param_3)

{
  int iVar1;
  RtReflectionDelegate *__n;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = param_3;
  Set8BytesTo0(asStack_58);
  if (param_1 == 1) {
    std::string::append(asStack_58,"reload2",(size_t)__n);
  }
  else if (param_1 == 2) {
    std::string::append(asStack_58,"reload3",(size_t)__n);
  }
  else if (param_1 == 0) {
    std::string::append(asStack_58,"reload",(size_t)__n);
  }
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  *(undefined4 *)(this + 0x218) = 0xe;
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_BowlingBulb::PlayBulbSuperSkill(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_BowlingBulb::PlayBulbSuperSkill
          (PlantAnimRig_BowlingBulb *this,RtReflectionDelegate *param_2)

{
  long lVar1;
  int iVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"super_skill");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_BowlingBulb::PlayIdleLooped() */

void __thiscall PlantAnimRig_BowlingBulb::PlayIdleLooped(PlantAnimRig_BowlingBulb *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x3b8] == (PlantAnimRig_BowlingBulb)0x0) {
    std::string::string(asStack_40,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  else {
    std::string::string(asStack_40,"plantfood_idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  *(undefined4 *)(this + 0x218) = 1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

