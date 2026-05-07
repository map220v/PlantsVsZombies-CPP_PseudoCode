// Class: PlantAnimRig_SnowPea


/* PlantAnimRig_SnowPea::~PlantAnimRig_SnowPea() */

void __thiscall PlantAnimRig_SnowPea::~PlantAnimRig_SnowPea(PlantAnimRig_SnowPea *this)

{
  *(undefined ***)this = &PTR_GetClass_0679f080;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_SnowPea_0679f2e8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_SnowPea::~PlantAnimRig_SnowPea() */

void __thiscall PlantAnimRig_SnowPea::~PlantAnimRig_SnowPea(PlantAnimRig_SnowPea *this)

{
  ~PlantAnimRig_SnowPea(this + -0x10);
  return;
}


/* PlantAnimRig_SnowPea::~PlantAnimRig_SnowPea() */

void __thiscall PlantAnimRig_SnowPea::~PlantAnimRig_SnowPea(PlantAnimRig_SnowPea *this)

{
  ~PlantAnimRig_SnowPea(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_SnowPea::~PlantAnimRig_SnowPea() */

void __thiscall PlantAnimRig_SnowPea::~PlantAnimRig_SnowPea(PlantAnimRig_SnowPea *this)

{
  ~PlantAnimRig_SnowPea(this + -0x10);
  return;
}


/* PlantAnimRig_SnowPea::PlantAnimRig_SnowPea() */

void __thiscall PlantAnimRig_SnowPea::PlantAnimRig_SnowPea(PlantAnimRig_SnowPea *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0679f080;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_SnowPea_0679f2e8;
  return;
}


/* PlantAnimRig_SnowPea::StaticNew() */

PlantAnimRig_SnowPea * PlantAnimRig_SnowPea::StaticNew(void)

{
  PlantAnimRig_SnowPea *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_SnowPea(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SnowPea::StaticClassInit() */

void PlantAnimRig_SnowPea::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_SnowPea");
    (*pcVar2)(plVar1,asStack_10,FUN_03f62648,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_SnowPea::StaticGetClass() */

long * PlantAnimRig_SnowPea::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_SnowPea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_SnowPea::GetClass() const */

long * PlantAnimRig_SnowPea::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_SnowPea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SnowPea::onAnimStopped() */

void __thiscall PlantAnimRig_SnowPea::onAnimStopped(PlantAnimRig_SnowPea *this)

{
  int iVar1;
  RtInvokeVariant *pRVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x220] == (PlantAnimRig_SnowPea)0x0) {
    PlantAnimRig::onAnimStopped((PlantAnimRig *)this);
  }
  else {
    iVar1 = *(int *)(this + 0x218);
    if (iVar1 == 3) {
      std::string::string(asStack_40,"plantfood2");
      Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
      iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
      if (iVar1 != -1) {
        iVar1 = ::RtReflectionDelegate::operator_cast_to_int((RtReflectionDelegate *)(this + 0x298))
        ;
        if (iVar1 != 0) {
          pRVar2 = (RtInvokeVariant *)
                   RtReflectionDelegate<Sexy::Delegate0>::GetDelegate
                             ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x298));
          Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar2);
        }
        *(undefined4 *)(this + 0x218) = 4;
      }
    }
    else if (iVar1 == 4) {
      *(undefined4 *)(this + 0x218) = 0;
      iVar1 = ::RtReflectionDelegate::operator_cast_to_int((RtReflectionDelegate *)(this + 0x328));
      if (iVar1 != 0) {
        pRVar2 = (RtInvokeVariant *)
                 RtReflectionDelegate<Sexy::Delegate0>::GetDelegate
                           ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x328));
        Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar2);
      }
    }
    else if (iVar1 < 0xe) {
      (**(code **)(*(long *)this + 0x118))();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

