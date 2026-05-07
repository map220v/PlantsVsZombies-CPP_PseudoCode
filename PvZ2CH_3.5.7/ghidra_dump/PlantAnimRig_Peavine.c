// Class: PlantAnimRig_Peavine


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Peavine::PlaySecondAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_Peavine::PlaySecondAttack(PlantAnimRig_Peavine *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack2");
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


/* PlantAnimRig_Peavine::~PlantAnimRig_Peavine() */

void __thiscall PlantAnimRig_Peavine::~PlantAnimRig_Peavine(PlantAnimRig_Peavine *this)

{
  *(undefined ***)this = &PTR_GetClass_069aa590;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Peavine_069aa7f8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Peavine::~PlantAnimRig_Peavine() */

void __thiscall PlantAnimRig_Peavine::~PlantAnimRig_Peavine(PlantAnimRig_Peavine *this)

{
  ~PlantAnimRig_Peavine(this + -0x10);
  return;
}


/* PlantAnimRig_Peavine::~PlantAnimRig_Peavine() */

void __thiscall PlantAnimRig_Peavine::~PlantAnimRig_Peavine(PlantAnimRig_Peavine *this)

{
  ~PlantAnimRig_Peavine(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Peavine::~PlantAnimRig_Peavine() */

void __thiscall PlantAnimRig_Peavine::~PlantAnimRig_Peavine(PlantAnimRig_Peavine *this)

{
  ~PlantAnimRig_Peavine(this + -0x10);
  return;
}


/* PlantAnimRig_Peavine::PlantAnimRig_Peavine() */

void __thiscall PlantAnimRig_Peavine::PlantAnimRig_Peavine(PlantAnimRig_Peavine *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069aa590;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Peavine_069aa7f8;
  return;
}


/* PlantAnimRig_Peavine::StaticNew() */

PlantAnimRig_Peavine * PlantAnimRig_Peavine::StaticNew(void)

{
  PlantAnimRig_Peavine *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Peavine(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Peavine::StaticClassInit() */

void PlantAnimRig_Peavine::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Peavine");
    (*pcVar2)(plVar1,asStack_10,FUN_04d21464,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Peavine::StaticGetClass() */

long * PlantAnimRig_Peavine::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Peavine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Peavine::GetClass() const */

long * PlantAnimRig_Peavine::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Peavine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

