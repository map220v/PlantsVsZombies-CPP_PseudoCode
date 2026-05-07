// Class: PlantAnimRig_Flattenedshroom


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Flattenedshroom::getIdleAnimationName() */

void PlantAnimRig_Flattenedshroom::getIdleAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3b8) == '\0') {
    __s = "idle";
  }
  else {
    __s = "idle2";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Flattenedshroom::~PlantAnimRig_Flattenedshroom() */

void __thiscall
PlantAnimRig_Flattenedshroom::~PlantAnimRig_Flattenedshroom(PlantAnimRig_Flattenedshroom *this)

{
  *(undefined ***)this = &PTR_GetClass_06743920;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Flattenedshroom_06743ba0;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Flattenedshroom::~PlantAnimRig_Flattenedshroom() */

void __thiscall
PlantAnimRig_Flattenedshroom::~PlantAnimRig_Flattenedshroom(PlantAnimRig_Flattenedshroom *this)

{
  ~PlantAnimRig_Flattenedshroom(this + -0x10);
  return;
}


/* PlantAnimRig_Flattenedshroom::~PlantAnimRig_Flattenedshroom() */

void __thiscall
PlantAnimRig_Flattenedshroom::~PlantAnimRig_Flattenedshroom(PlantAnimRig_Flattenedshroom *this)

{
  ~PlantAnimRig_Flattenedshroom(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Flattenedshroom::~PlantAnimRig_Flattenedshroom() */

void __thiscall
PlantAnimRig_Flattenedshroom::~PlantAnimRig_Flattenedshroom(PlantAnimRig_Flattenedshroom *this)

{
  ~PlantAnimRig_Flattenedshroom(this + -0x10);
  return;
}


/* PlantAnimRig_Flattenedshroom::PlantAnimRig_Flattenedshroom() */

void __thiscall
PlantAnimRig_Flattenedshroom::PlantAnimRig_Flattenedshroom(PlantAnimRig_Flattenedshroom *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06743920;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Flattenedshroom_06743ba0;
  return;
}


/* PlantAnimRig_Flattenedshroom::StaticNew() */

PlantAnimRig_Flattenedshroom * PlantAnimRig_Flattenedshroom::StaticNew(void)

{
  PlantAnimRig_Flattenedshroom *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Flattenedshroom(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Flattenedshroom::StaticClassInit() */

void PlantAnimRig_Flattenedshroom::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Flattenedshroom");
    (*pcVar2)(plVar1,asStack_10,FUN_03bff31c,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Flattenedshroom::StaticGetClass() */

long * PlantAnimRig_Flattenedshroom::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Flattenedshroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Flattenedshroom::GetClass() const */

long * PlantAnimRig_Flattenedshroom::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Flattenedshroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Flattenedshroom::PlaySubmergeIntoGround(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_Flattenedshroom::PlaySubmergeIntoGround
          (PlantAnimRig_Flattenedshroom *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"idle");
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
    *(undefined4 *)(this + 0x218) = 0xf;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Flattenedshroom::PlaySubmergeIntoGroundFast(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_Flattenedshroom::PlaySubmergeIntoGroundFast
          (PlantAnimRig_Flattenedshroom *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"plantfood2");
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
    *(undefined4 *)(this + 0x218) = 0xf;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}

