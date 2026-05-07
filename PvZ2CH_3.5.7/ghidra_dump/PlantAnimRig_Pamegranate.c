// Class: PlantAnimRig_Pamegranate


/* PlantAnimRig_Pamegranate::~PlantAnimRig_Pamegranate() */

void __thiscall PlantAnimRig_Pamegranate::~PlantAnimRig_Pamegranate(PlantAnimRig_Pamegranate *this)

{
  *(undefined ***)this = &PTR_GetClass_067a0e10;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Pamegranate_067a1078;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Pamegranate::~PlantAnimRig_Pamegranate() */

void __thiscall PlantAnimRig_Pamegranate::~PlantAnimRig_Pamegranate(PlantAnimRig_Pamegranate *this)

{
  ~PlantAnimRig_Pamegranate(this + -0x10);
  return;
}


/* PlantAnimRig_Pamegranate::~PlantAnimRig_Pamegranate() */

void __thiscall PlantAnimRig_Pamegranate::~PlantAnimRig_Pamegranate(PlantAnimRig_Pamegranate *this)

{
  ~PlantAnimRig_Pamegranate(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Pamegranate::~PlantAnimRig_Pamegranate() */

void __thiscall PlantAnimRig_Pamegranate::~PlantAnimRig_Pamegranate(PlantAnimRig_Pamegranate *this)

{
  ~PlantAnimRig_Pamegranate(this + -0x10);
  return;
}


/* PlantAnimRig_Pamegranate::PlantAnimRig_Pamegranate() */

void __thiscall PlantAnimRig_Pamegranate::PlantAnimRig_Pamegranate(PlantAnimRig_Pamegranate *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067a0e10;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Pamegranate_067a1078;
  return;
}


/* PlantAnimRig_Pamegranate::StaticNew() */

PlantAnimRig_Pamegranate * PlantAnimRig_Pamegranate::StaticNew(void)

{
  PlantAnimRig_Pamegranate *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Pamegranate(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Pamegranate::StaticClassInit() */

void PlantAnimRig_Pamegranate::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Pamegranate");
    (*pcVar2)(plVar1,asStack_10,FUN_03f66a68,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Pamegranate::StaticGetClass() */

long * PlantAnimRig_Pamegranate::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Pamegranate",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Pamegranate::GetClass() const */

long * PlantAnimRig_Pamegranate::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Pamegranate",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Pamegranate::PlayAdvancedAttack(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_Pamegranate::PlayAdvancedAttack
          (PlantAnimRig_Pamegranate *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack1");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}

