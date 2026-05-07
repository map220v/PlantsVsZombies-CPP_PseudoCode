// Class: PlantAnimRig_Riflebamboo


/* PlantAnimRig_Riflebamboo::onInitialized() */

void __thiscall PlantAnimRig_Riflebamboo::onInitialized(PlantAnimRig_Riflebamboo *this)

{
  this[0x3c0] = (PlantAnimRig_Riflebamboo)0x0;
  *(undefined4 *)(this + 0x3bc) = 1;
  *(undefined4 *)(this + 0x3b8) = 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Riflebamboo::getIdleAnimationName() */

void PlantAnimRig_Riflebamboo::getIdleAnimationName(void)

{
  long in_x0;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"idle");
  std::to_string<ActivityTypeID>((ActivityTypeID *)(in_x0 + 0x3bc));
  std::operator+(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Riflebamboo::getAttackAnimationName() */

void PlantAnimRig_Riflebamboo::getAttackAnimationName(void)

{
  long in_x0;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"attack");
  std::to_string<ActivityTypeID>((ActivityTypeID *)(in_x0 + 0x3bc));
  std::operator+(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Riflebamboo::getPuffAnimationName(int) */

void PlantAnimRig_Riflebamboo::getPuffAnimationName(int param_1)

{
  int in_w1;
  int iVar1;
  ActivityTypeID local_24 [12];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = 4;
  if (*(int *)((ulong)(uint)param_1 + 0x3b8) != 5) {
    iVar1 = 3;
  }
  if (iVar1 <= in_w1) {
    *(undefined1 *)((ulong)(uint)param_1 + 0x3c0) = 1;
  }
  std::string::string(asStack_18,"transition");
  std::to_string<ActivityTypeID>(local_24);
  std::operator+(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Riflebamboo::PlayPuff(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >,
   int) */

void __thiscall
PlantAnimRig_Riflebamboo::PlayPuff
          (PlantAnimRig_Riflebamboo *this,RtReflectionDelegate *param_2,undefined4 param_3)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  *(undefined4 *)(this + 0x3bc) = param_3;
  local_8 = ___stack_chk_guard;
  getPuffAnimationName((int)this);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* PlantAnimRig_Riflebamboo::onAnimStopped() */

void __thiscall PlantAnimRig_Riflebamboo::onAnimStopped(PlantAnimRig_Riflebamboo *this)

{
  int iVar1;
  RtInvokeVariant *pRVar2;
  
  if (this[0x220] == (PlantAnimRig_Riflebamboo)0x0) {
    PlantAnimRig::onAnimStopped((PlantAnimRig *)this);
    return;
  }
  iVar1 = *(int *)(this + 0x218);
  if (iVar1 != 3) {
    if (iVar1 == 4) {
      iVar1 = *(int *)(this + 0x228);
      if (0 < iVar1) {
        *(int *)(this + 0x228) = iVar1 + -1;
        PlantAnimRig::onPlantfoodLooped((PlantAnimRig *)this);
        iVar1 = *(int *)(this + 0x228);
      }
      if ((0 < iVar1) || (iVar1 == -1)) {
        (**(code **)(*(long *)this + 400))(this);
        return;
      }
      *(undefined4 *)(this + 0x218) = 0;
      iVar1 = ::RtReflectionDelegate::operator_cast_to_int((RtReflectionDelegate *)(this + 0x328));
      if (iVar1 != 0) {
        pRVar2 = (RtInvokeVariant *)
                 RtReflectionDelegate<Sexy::Delegate0>::GetDelegate
                           ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x328));
        Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar2);
        return;
      }
    }
    else if (iVar1 < 0xe) {
      (**(code **)(*(long *)this + 0x118))();
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Riflebamboo::getPlantFoodAnimName(int) */

void PlantAnimRig_Riflebamboo::getPlantFoodAnimName(int param_1)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"plantfood1");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Riflebamboo::CalcPlantFoodDuration(int) */

void PlantAnimRig_Riflebamboo::CalcPlantFoodDuration(int param_1)

{
  undefined8 uVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_18);
  std::string::string(asStack_10,"plantfood1");
  FUN_05474278(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  uVar1 = PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)(ulong)(uint)param_1,asStack_18);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PlantAnimRig_Riflebamboo::~PlantAnimRig_Riflebamboo() */

void __thiscall PlantAnimRig_Riflebamboo::~PlantAnimRig_Riflebamboo(PlantAnimRig_Riflebamboo *this)

{
  *(undefined ***)this = &PTR_GetClass_0679dd90;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Riflebamboo_0679dff8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Riflebamboo::~PlantAnimRig_Riflebamboo() */

void __thiscall PlantAnimRig_Riflebamboo::~PlantAnimRig_Riflebamboo(PlantAnimRig_Riflebamboo *this)

{
  ~PlantAnimRig_Riflebamboo(this + -0x10);
  return;
}


/* PlantAnimRig_Riflebamboo::~PlantAnimRig_Riflebamboo() */

void __thiscall PlantAnimRig_Riflebamboo::~PlantAnimRig_Riflebamboo(PlantAnimRig_Riflebamboo *this)

{
  ~PlantAnimRig_Riflebamboo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Riflebamboo::~PlantAnimRig_Riflebamboo() */

void __thiscall PlantAnimRig_Riflebamboo::~PlantAnimRig_Riflebamboo(PlantAnimRig_Riflebamboo *this)

{
  ~PlantAnimRig_Riflebamboo(this + -0x10);
  return;
}


/* PlantAnimRig_Riflebamboo::PlantAnimRig_Riflebamboo() */

void __thiscall PlantAnimRig_Riflebamboo::PlantAnimRig_Riflebamboo(PlantAnimRig_Riflebamboo *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0679dd90;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Riflebamboo_0679dff8;
  return;
}


/* PlantAnimRig_Riflebamboo::StaticNew() */

PlantAnimRig_Riflebamboo * PlantAnimRig_Riflebamboo::StaticNew(void)

{
  PlantAnimRig_Riflebamboo *this;
  
  this = ::operator_new(0x3c8);
  PlantAnimRig_Riflebamboo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Riflebamboo::StaticClassInit() */

void PlantAnimRig_Riflebamboo::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Riflebamboo");
    (*pcVar2)(plVar1,asStack_10,FUN_03f5fb20,0x3c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Riflebamboo::StaticGetClass() */

long * PlantAnimRig_Riflebamboo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Riflebamboo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Riflebamboo::GetClass() const */

long * PlantAnimRig_Riflebamboo::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Riflebamboo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Riflebamboo::PlayPlantFood(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >, int) */

void __thiscall
PlantAnimRig_Riflebamboo::PlayPlantFood
          (PlantAnimRig_Riflebamboo *this,RtReflectionDelegate *param_2,undefined4 param_3)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  *(undefined4 *)(this + 0x3bc) = param_3;
  local_8 = ___stack_chk_guard;
  getPlantFoodAnimName((int)this);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Riflebamboo::PlayPlantFoodStart(int) */

void __thiscall
PlantAnimRig_Riflebamboo::PlayPlantFoodStart(PlantAnimRig_Riflebamboo *this,int param_1)

{
  int iVar1;
  string asStack_60 [8];
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_60);
  std::string::string(asStack_58,"plantfood1");
  FUN_05474278(asStack_60,asStack_58);
  std::string::~string(asStack_58);
  nop();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_50);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_60,0,aDStack_50);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 3;
    *(int *)(this + 0x228) = param_1;
    RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate0> *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
              ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)(this + 0x298),
               (RtReflectionDelegate *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate0> *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
              ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)(this + 0x328),
               (RtReflectionDelegate *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
  }
  std::string::~string(asStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}

