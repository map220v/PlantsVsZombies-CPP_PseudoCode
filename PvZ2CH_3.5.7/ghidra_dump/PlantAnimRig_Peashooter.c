// Class: PlantAnimRig_Peashooter


/* PlantAnimRig_Peashooter::~PlantAnimRig_Peashooter() */

void __thiscall PlantAnimRig_Peashooter::~PlantAnimRig_Peashooter(PlantAnimRig_Peashooter *this)

{
  *(undefined ***)this = &PTR_GetClass_0679f330;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Peashooter_0679f598;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Peashooter::~PlantAnimRig_Peashooter() */

void __thiscall PlantAnimRig_Peashooter::~PlantAnimRig_Peashooter(PlantAnimRig_Peashooter *this)

{
  ~PlantAnimRig_Peashooter(this + -0x10);
  return;
}


/* PlantAnimRig_Peashooter::~PlantAnimRig_Peashooter() */

void __thiscall PlantAnimRig_Peashooter::~PlantAnimRig_Peashooter(PlantAnimRig_Peashooter *this)

{
  ~PlantAnimRig_Peashooter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Peashooter::~PlantAnimRig_Peashooter() */

void __thiscall PlantAnimRig_Peashooter::~PlantAnimRig_Peashooter(PlantAnimRig_Peashooter *this)

{
  ~PlantAnimRig_Peashooter(this + -0x10);
  return;
}


/* PlantAnimRig_Peashooter::PlantAnimRig_Peashooter() */

void __thiscall PlantAnimRig_Peashooter::PlantAnimRig_Peashooter(PlantAnimRig_Peashooter *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0679f330;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Peashooter_0679f598;
  return;
}


/* PlantAnimRig_Peashooter::StaticNew() */

PlantAnimRig_Peashooter * PlantAnimRig_Peashooter::StaticNew(void)

{
  PlantAnimRig_Peashooter *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Peashooter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Peashooter::StaticClassInit() */

void PlantAnimRig_Peashooter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Peashooter");
    (*pcVar2)(plVar1,asStack_10,FUN_03f62ae0,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Peashooter::StaticGetClass() */

long * PlantAnimRig_Peashooter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Peashooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Peashooter::GetClass() const */

long * PlantAnimRig_Peashooter::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Peashooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Peashooter::PlayPlantFoodStart(int) */

void __thiscall
PlantAnimRig_Peashooter::PlayPlantFoodStart(PlantAnimRig_Peashooter *this,int param_1)

{
  int iVar1;
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"plantfood_2");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_50);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aDStack_50);
  std::string::~string(asStack_58);
  nop();
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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* PlantAnimRig_Peashooter::onAnimStopped() */

void __thiscall PlantAnimRig_Peashooter::onAnimStopped(PlantAnimRig_Peashooter *this)

{
  int iVar1;
  RtInvokeVariant *pRVar2;
  
  if (this[0x220] == (PlantAnimRig_Peashooter)0x0) {
    PlantAnimRig::onAnimStopped((PlantAnimRig *)this);
    return;
  }
  iVar1 = *(int *)(this + 0x218);
  if (iVar1 != 3) {
    if (iVar1 == 4) {
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

