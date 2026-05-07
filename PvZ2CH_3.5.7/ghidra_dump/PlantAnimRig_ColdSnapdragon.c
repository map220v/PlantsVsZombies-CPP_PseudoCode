// Class: PlantAnimRig_ColdSnapdragon


/* PlantAnimRig_ColdSnapdragon::~PlantAnimRig_ColdSnapdragon() */

void __thiscall
PlantAnimRig_ColdSnapdragon::~PlantAnimRig_ColdSnapdragon(PlantAnimRig_ColdSnapdragon *this)

{
  *(undefined ***)this = &PTR_GetClass_068115c0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ColdSnapdragon_06811830;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ColdSnapdragon::~PlantAnimRig_ColdSnapdragon() */

void __thiscall
PlantAnimRig_ColdSnapdragon::~PlantAnimRig_ColdSnapdragon(PlantAnimRig_ColdSnapdragon *this)

{
  ~PlantAnimRig_ColdSnapdragon(this + -0x10);
  return;
}


/* PlantAnimRig_ColdSnapdragon::~PlantAnimRig_ColdSnapdragon() */

void __thiscall
PlantAnimRig_ColdSnapdragon::~PlantAnimRig_ColdSnapdragon(PlantAnimRig_ColdSnapdragon *this)

{
  ~PlantAnimRig_ColdSnapdragon(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ColdSnapdragon::~PlantAnimRig_ColdSnapdragon() */

void __thiscall
PlantAnimRig_ColdSnapdragon::~PlantAnimRig_ColdSnapdragon(PlantAnimRig_ColdSnapdragon *this)

{
  ~PlantAnimRig_ColdSnapdragon(this + -0x10);
  return;
}


/* PlantAnimRig_ColdSnapdragon::PlantAnimRig_ColdSnapdragon() */

void __thiscall
PlantAnimRig_ColdSnapdragon::PlantAnimRig_ColdSnapdragon(PlantAnimRig_ColdSnapdragon *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3bc] = (PlantAnimRig_ColdSnapdragon)0x0;
  *(undefined ***)this = &PTR_GetClass_068115c0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ColdSnapdragon_06811830;
  *(undefined4 *)(this + 0x3b8) = 0x3f000000;
  return;
}


/* PlantAnimRig_ColdSnapdragon::StaticNew() */

PlantAnimRig_ColdSnapdragon * PlantAnimRig_ColdSnapdragon::StaticNew(void)

{
  PlantAnimRig_ColdSnapdragon *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_ColdSnapdragon(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ColdSnapdragon::StaticClassInit() */

void PlantAnimRig_ColdSnapdragon::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_ColdSnapdragon");
    (*pcVar2)(plVar1,asStack_10,FUN_0422f2a8,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_ColdSnapdragon::StaticGetClass() */

long * PlantAnimRig_ColdSnapdragon::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_ColdSnapdragon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_ColdSnapdragon::GetClass() const */

long * PlantAnimRig_ColdSnapdragon::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_ColdSnapdragon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ColdSnapdragon::PlayAttackFireDragon(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_ColdSnapdragon::PlayAttackFireDragon
          (PlantAnimRig_ColdSnapdragon *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"plantfood02");
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
    this[0x3bc] = (PlantAnimRig_ColdSnapdragon)0x1;
    *(undefined4 *)(this + 0x218) = 2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}

