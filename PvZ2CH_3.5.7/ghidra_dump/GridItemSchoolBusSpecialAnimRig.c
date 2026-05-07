// Class: GridItemSchoolBusSpecialAnimRig


/* GridItemSchoolBusSpecialAnimRig::~GridItemSchoolBusSpecialAnimRig() */

void __thiscall
GridItemSchoolBusSpecialAnimRig::~GridItemSchoolBusSpecialAnimRig
          (GridItemSchoolBusSpecialAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_0661be90;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSchoolBusSpecialAnimRig_0661bfb0;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x2a0));
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 600));
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x210));
  GridItemSchoolBusAnimRig::~GridItemSchoolBusAnimRig((GridItemSchoolBusAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemSchoolBusSpecialAnimRig::~GridItemSchoolBusSpecialAnimRig() */

void __thiscall
GridItemSchoolBusSpecialAnimRig::~GridItemSchoolBusSpecialAnimRig
          (GridItemSchoolBusSpecialAnimRig *this)

{
  ~GridItemSchoolBusSpecialAnimRig(this + -0x10);
  return;
}


/* GridItemSchoolBusSpecialAnimRig::~GridItemSchoolBusSpecialAnimRig() */

void __thiscall
GridItemSchoolBusSpecialAnimRig::~GridItemSchoolBusSpecialAnimRig
          (GridItemSchoolBusSpecialAnimRig *this)

{
  ~GridItemSchoolBusSpecialAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemSchoolBusSpecialAnimRig::~GridItemSchoolBusSpecialAnimRig() */

void __thiscall
GridItemSchoolBusSpecialAnimRig::~GridItemSchoolBusSpecialAnimRig
          (GridItemSchoolBusSpecialAnimRig *this)

{
  ~GridItemSchoolBusSpecialAnimRig(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBusSpecialAnimRig::StaticClassInit() */

void GridItemSchoolBusSpecialAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemSchoolBusSpecialAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_033e37c4,0x2f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSchoolBusSpecialAnimRig::StaticGetClass() */

long * GridItemSchoolBusSpecialAnimRig::StaticGetClass(void)

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
  uVar2 = GridItemSchoolBusAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSchoolBusSpecialAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSchoolBusSpecialAnimRig::GetClass() const */

long * GridItemSchoolBusSpecialAnimRig::GetClass(void)

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
  uVar2 = GridItemSchoolBusAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSchoolBusSpecialAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBusSpecialAnimRig::PlayPowerAnim(bool, RtReflectionDelegate<Sexy::Delegate0>,
   RtReflectionDelegate<Sexy::Delegate0>, RtReflectionDelegate<Sexy::Delegate0>) */

void __thiscall
GridItemSchoolBusSpecialAnimRig::PlayPowerAnim
          (GridItemSchoolBusSpecialAnimRig *this,char param_1,RtReflectionDelegate *param_3,
          RtReflectionDelegate *param_4,RtReflectionDelegate *param_5)

{
  int iVar1;
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == '\0') {
    __s = "attack";
  }
  else {
    __s = "attack2";
  }
  std::string::string(asStack_40,__s);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x2e8) = 4;
    RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
              ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x210),param_3);
    RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
              ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 600),param_4);
    RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
              ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x2a0),param_5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* GridItemSchoolBusSpecialAnimRig::GridItemSchoolBusSpecialAnimRig() */

void __thiscall
GridItemSchoolBusSpecialAnimRig::GridItemSchoolBusSpecialAnimRig
          (GridItemSchoolBusSpecialAnimRig *this)

{
  GridItemSchoolBusAnimRig::GridItemSchoolBusAnimRig((GridItemSchoolBusAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0661be90;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSchoolBusSpecialAnimRig_0661bfb0;
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x210));
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 600));
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x2a0));
  *(undefined4 *)(this + 0x2e8) = 0;
  return;
}


/* GridItemSchoolBusSpecialAnimRig::StaticNew() */

GridItemSchoolBusSpecialAnimRig * GridItemSchoolBusSpecialAnimRig::StaticNew(void)

{
  GridItemSchoolBusSpecialAnimRig *this;
  
  this = ::operator_new(0x2f0);
  GridItemSchoolBusSpecialAnimRig(this);
  return this;
}


/* GridItemSchoolBusSpecialAnimRig::onAnimStopped() */

void GridItemSchoolBusSpecialAnimRig::onAnimStopped(void)

{
  int iVar1;
  long in_x0;
  RtInvokeVariant *pRVar2;
  
  if (*(int *)(in_x0 + 0x2e8) != 4) {
    nop();
    return;
  }
  iVar1 = ::RtReflectionDelegate::operator_cast_to_int((RtReflectionDelegate *)(in_x0 + 0x210));
  if (iVar1 == 0) {
    return;
  }
  pRVar2 = (RtInvokeVariant *)
           RtReflectionDelegate<Sexy::Delegate0>::GetDelegate
                     ((RtReflectionDelegate<Sexy::Delegate0> *)(in_x0 + 0x210));
  Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar2);
  return;
}


/* GridItemSchoolBusSpecialAnimRig::onPopAnimCommand(float, std::string const&, std::string const&)
    */

void GridItemSchoolBusSpecialAnimRig::onPopAnimCommand
               (float param_1,string *param_2,string *param_3)

{
  bool bVar1;
  RtInvokeVariant *pRVar2;
  
  bVar1 = std::operator==(param_3,"throw");
  if (bVar1) {
    pRVar2 = (RtInvokeVariant *)
             RtReflectionDelegate<Sexy::Delegate0>::GetDelegate
                       ((RtReflectionDelegate<Sexy::Delegate0> *)(param_2 + 600));
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar2);
    return;
  }
  bVar1 = std::operator==(param_3,"launch");
  if (!bVar1) {
    return;
  }
  pRVar2 = (RtInvokeVariant *)
           RtReflectionDelegate<Sexy::Delegate0>::GetDelegate
                     ((RtReflectionDelegate<Sexy::Delegate0> *)(param_2 + 0x2a0));
  Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar2);
  return;
}

