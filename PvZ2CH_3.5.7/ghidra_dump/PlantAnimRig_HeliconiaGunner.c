// Class: PlantAnimRig_HeliconiaGunner


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HeliconiaGunner::PlayGrabAnim(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_HeliconiaGunner::PlayGrabAnim
          (PlantAnimRig_HeliconiaGunner *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack02");
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
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HeliconiaGunner::CalcPlantFoodDuration(int) */

void __thiscall
PlantAnimRig_HeliconiaGunner::CalcPlantFoodDuration(PlantAnimRig_HeliconiaGunner *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"plantfood_on");
  fVar1 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"plantfood");
  fVar2 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"plantfood_2222");
  fVar3 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar3 + fVar1 + (float)param_1 * fVar2);
}


/* PlantAnimRig_HeliconiaGunner::~PlantAnimRig_HeliconiaGunner() */

void __thiscall
PlantAnimRig_HeliconiaGunner::~PlantAnimRig_HeliconiaGunner(PlantAnimRig_HeliconiaGunner *this)

{
  *(undefined ***)this = &PTR_GetClass_069ad430;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_HeliconiaGunner_069ad698;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_HeliconiaGunner::~PlantAnimRig_HeliconiaGunner() */

void __thiscall
PlantAnimRig_HeliconiaGunner::~PlantAnimRig_HeliconiaGunner(PlantAnimRig_HeliconiaGunner *this)

{
  ~PlantAnimRig_HeliconiaGunner(this + -0x10);
  return;
}


/* PlantAnimRig_HeliconiaGunner::~PlantAnimRig_HeliconiaGunner() */

void __thiscall
PlantAnimRig_HeliconiaGunner::~PlantAnimRig_HeliconiaGunner(PlantAnimRig_HeliconiaGunner *this)

{
  ~PlantAnimRig_HeliconiaGunner(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_HeliconiaGunner::~PlantAnimRig_HeliconiaGunner() */

void __thiscall
PlantAnimRig_HeliconiaGunner::~PlantAnimRig_HeliconiaGunner(PlantAnimRig_HeliconiaGunner *this)

{
  ~PlantAnimRig_HeliconiaGunner(this + -0x10);
  return;
}


/* PlantAnimRig_HeliconiaGunner::PlantAnimRig_HeliconiaGunner() */

void __thiscall
PlantAnimRig_HeliconiaGunner::PlantAnimRig_HeliconiaGunner(PlantAnimRig_HeliconiaGunner *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069ad430;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_HeliconiaGunner_069ad698;
  return;
}


/* PlantAnimRig_HeliconiaGunner::StaticNew() */

PlantAnimRig_HeliconiaGunner * PlantAnimRig_HeliconiaGunner::StaticNew(void)

{
  PlantAnimRig_HeliconiaGunner *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_HeliconiaGunner(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HeliconiaGunner::StaticClassInit() */

void PlantAnimRig_HeliconiaGunner::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_HeliconiaGunner");
    (*pcVar2)(plVar1,asStack_10,FUN_04d32718,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_HeliconiaGunner::StaticGetClass() */

long * PlantAnimRig_HeliconiaGunner::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_HeliconiaGunner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_HeliconiaGunner::GetClass() const */

long * PlantAnimRig_HeliconiaGunner::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_HeliconiaGunner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HeliconiaGunner::PlayRefileLoopingAnim(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_HeliconiaGunner::PlayRefileLoopingAnim
          (PlantAnimRig_HeliconiaGunner *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"hd03");
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
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HeliconiaGunner::PlayRefillMagazine(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_HeliconiaGunner::PlayRefillMagazine
          (PlantAnimRig_HeliconiaGunner *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"hd");
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
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HeliconiaGunner::onPopAnimInitialized() */

void __thiscall
PlantAnimRig_HeliconiaGunner::onPopAnimInitialized(PlantAnimRig_HeliconiaGunner *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  std::string::string(asStack_10,"yd");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

