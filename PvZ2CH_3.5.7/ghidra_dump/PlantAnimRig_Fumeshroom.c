// Class: PlantAnimRig_Fumeshroom


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Fumeshroom::playPlantFoodMain() */

void __thiscall PlantAnimRig_Fumeshroom::playPlantFoodMain(PlantAnimRig_Fumeshroom *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x220] == (PlantAnimRig_Fumeshroom)0x0) {
    std::string::string(asStack_40,"plantfood");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  else {
    std::string::string(asStack_40,"plantfood2");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* PlantAnimRig_Fumeshroom::~PlantAnimRig_Fumeshroom() */

void __thiscall PlantAnimRig_Fumeshroom::~PlantAnimRig_Fumeshroom(PlantAnimRig_Fumeshroom *this)

{
  *(undefined ***)this = &PTR_GetClass_067a0600;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Fumeshroom_067a0868;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x3c0));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Fumeshroom::~PlantAnimRig_Fumeshroom() */

void __thiscall PlantAnimRig_Fumeshroom::~PlantAnimRig_Fumeshroom(PlantAnimRig_Fumeshroom *this)

{
  ~PlantAnimRig_Fumeshroom(this + -0x10);
  return;
}


/* PlantAnimRig_Fumeshroom::~PlantAnimRig_Fumeshroom() */

void __thiscall PlantAnimRig_Fumeshroom::~PlantAnimRig_Fumeshroom(PlantAnimRig_Fumeshroom *this)

{
  ~PlantAnimRig_Fumeshroom(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Fumeshroom::~PlantAnimRig_Fumeshroom() */

void __thiscall PlantAnimRig_Fumeshroom::~PlantAnimRig_Fumeshroom(PlantAnimRig_Fumeshroom *this)

{
  ~PlantAnimRig_Fumeshroom(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Fumeshroom::StaticClassInit() */

void PlantAnimRig_Fumeshroom::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Fumeshroom");
    (*pcVar2)(plVar1,asStack_10,FUN_03f655bc,0x408,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Fumeshroom::StaticGetClass() */

long * PlantAnimRig_Fumeshroom::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Fumeshroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Fumeshroom::GetClass() const */

long * PlantAnimRig_Fumeshroom::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Fumeshroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Fumeshroom::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_Fumeshroom::PlayAttack(PlantAnimRig_Fumeshroom *this,RtReflectionDelegate *param_2)

{
  long lVar1;
  int iVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"special");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  *(int *)(this + 0x3b8) = iVar2;
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x3c0),param_2);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != -1);
}


/* PlantAnimRig_Fumeshroom::PlantAnimRig_Fumeshroom() */

void __thiscall PlantAnimRig_Fumeshroom::PlantAnimRig_Fumeshroom(PlantAnimRig_Fumeshroom *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067a0600;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Fumeshroom_067a0868;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)(this + 0x3c0));
  return;
}


/* PlantAnimRig_Fumeshroom::StaticNew() */

PlantAnimRig_Fumeshroom * PlantAnimRig_Fumeshroom::StaticNew(void)

{
  PlantAnimRig_Fumeshroom *this;
  
  this = ::operator_new(0x408);
  PlantAnimRig_Fumeshroom(this);
  return this;
}

