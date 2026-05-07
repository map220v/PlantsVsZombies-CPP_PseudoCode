// Class: PlantAnimRig_HeavenDatura


/* PlantAnimRig_HeavenDatura::~PlantAnimRig_HeavenDatura() */

void __thiscall
PlantAnimRig_HeavenDatura::~PlantAnimRig_HeavenDatura(PlantAnimRig_HeavenDatura *this)

{
  *(undefined ***)this = &PTR_GetClass_067a7f20;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_HeavenDatura_067a8188;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_HeavenDatura::~PlantAnimRig_HeavenDatura() */

void __thiscall
PlantAnimRig_HeavenDatura::~PlantAnimRig_HeavenDatura(PlantAnimRig_HeavenDatura *this)

{
  ~PlantAnimRig_HeavenDatura(this + -0x10);
  return;
}


/* PlantAnimRig_HeavenDatura::~PlantAnimRig_HeavenDatura() */

void __thiscall
PlantAnimRig_HeavenDatura::~PlantAnimRig_HeavenDatura(PlantAnimRig_HeavenDatura *this)

{
  ~PlantAnimRig_HeavenDatura(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_HeavenDatura::~PlantAnimRig_HeavenDatura() */

void __thiscall
PlantAnimRig_HeavenDatura::~PlantAnimRig_HeavenDatura(PlantAnimRig_HeavenDatura *this)

{
  ~PlantAnimRig_HeavenDatura(this + -0x10);
  return;
}


/* PlantAnimRig_HeavenDatura::PlantAnimRig_HeavenDatura() */

void __thiscall
PlantAnimRig_HeavenDatura::PlantAnimRig_HeavenDatura(PlantAnimRig_HeavenDatura *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067a7f20;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_HeavenDatura_067a8188;
  return;
}


/* PlantAnimRig_HeavenDatura::StaticNew() */

PlantAnimRig_HeavenDatura * PlantAnimRig_HeavenDatura::StaticNew(void)

{
  PlantAnimRig_HeavenDatura *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_HeavenDatura(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HeavenDatura::StaticClassInit() */

void PlantAnimRig_HeavenDatura::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_HeavenDatura");
    (*pcVar2)(plVar1,asStack_10,FUN_03fb196c,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_HeavenDatura::StaticGetClass() */

long * PlantAnimRig_HeavenDatura::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_HeavenDatura",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_HeavenDatura::GetClass() const */

long * PlantAnimRig_HeavenDatura::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_HeavenDatura",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_HeavenDatura::PlayTapAttack(int, RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

undefined8 PlantAnimRig_HeavenDatura::PlayTapAttack(long param_1)

{
  *(undefined4 *)(param_1 + 0x218) = 2;
  return 1;
}

