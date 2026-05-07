// Class: PlantAnimRig_Impatiensshooter


/* PlantAnimRig_Impatiensshooter::~PlantAnimRig_Impatiensshooter() */

void __thiscall
PlantAnimRig_Impatiensshooter::~PlantAnimRig_Impatiensshooter(PlantAnimRig_Impatiensshooter *this)

{
  *(undefined ***)this = &PTR_GetClass_0679dae0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Impatiensshooter_0679dd48;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Impatiensshooter::~PlantAnimRig_Impatiensshooter() */

void __thiscall
PlantAnimRig_Impatiensshooter::~PlantAnimRig_Impatiensshooter(PlantAnimRig_Impatiensshooter *this)

{
  ~PlantAnimRig_Impatiensshooter(this + -0x10);
  return;
}


/* PlantAnimRig_Impatiensshooter::~PlantAnimRig_Impatiensshooter() */

void __thiscall
PlantAnimRig_Impatiensshooter::~PlantAnimRig_Impatiensshooter(PlantAnimRig_Impatiensshooter *this)

{
  ~PlantAnimRig_Impatiensshooter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Impatiensshooter::~PlantAnimRig_Impatiensshooter() */

void __thiscall
PlantAnimRig_Impatiensshooter::~PlantAnimRig_Impatiensshooter(PlantAnimRig_Impatiensshooter *this)

{
  ~PlantAnimRig_Impatiensshooter(this + -0x10);
  return;
}


/* PlantAnimRig_Impatiensshooter::PlantAnimRig_Impatiensshooter() */

void __thiscall
PlantAnimRig_Impatiensshooter::PlantAnimRig_Impatiensshooter(PlantAnimRig_Impatiensshooter *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0679dae0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Impatiensshooter_0679dd48;
  return;
}


/* PlantAnimRig_Impatiensshooter::StaticNew() */

PlantAnimRig_Impatiensshooter * PlantAnimRig_Impatiensshooter::StaticNew(void)

{
  PlantAnimRig_Impatiensshooter *this;
  
  this = ::operator_new(0x3c8);
  PlantAnimRig_Impatiensshooter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Impatiensshooter::StaticClassInit() */

void PlantAnimRig_Impatiensshooter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Impatiensshooter");
    (*pcVar2)(plVar1,asStack_10,FUN_03f5ed90,0x3c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Impatiensshooter::StaticGetClass() */

long * PlantAnimRig_Impatiensshooter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Impatiensshooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Impatiensshooter::GetClass() const */

long * PlantAnimRig_Impatiensshooter::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Impatiensshooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Impatiensshooter::getPlantFoodMainAnimName() */

void PlantAnimRig_Impatiensshooter::getPlantFoodMainAnimName(void)

{
  long in_x0;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"plantfood_");
  std::to_string<ActivityTypeID>((ActivityTypeID *)(in_x0 + 0x3bc));
  std::operator+(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Impatiensshooter::CalcPlantFoodDuration(int) */

void PlantAnimRig_Impatiensshooter::CalcPlantFoodDuration(int param_1)

{
  PopAnimRig *this;
  int iVar1;
  char *__s;
  undefined8 uVar2;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this = (PopAnimRig *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x3bc) < 2) {
    std::string::string(asStack_10,"up2");
    uVar2 = PopAnimRig::CalcAnimLengthSeconds(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    iVar1 = 4;
    if (*(int *)(this + 0x3b8) != 5) {
      iVar1 = 3;
    }
    Set8BytesTo0(asStack_28);
    if ((iVar1 == *(int *)(this + 0x3bc)) && (this[0x3c0] != (PopAnimRig)0x0)) {
      if (this[0x220] == (PopAnimRig)0x0) {
        __s = "plantfood_";
      }
      else {
        __s = "plantfood";
      }
    }
    else {
      __s = "up";
    }
    std::string::string(asStack_20,__s);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x3bc));
    std::operator+(asStack_20,asStack_18);
    FUN_05474278(asStack_28,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    nop();
    uVar2 = PopAnimRig::CalcAnimLengthSeconds(this,asStack_28);
    std::string::~string(asStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Impatiensshooter::getPlantFoodAnimName(int) */

void PlantAnimRig_Impatiensshooter::getPlantFoodAnimName(int param_1)

{
  ActivityTypeID local_24 [12];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"plantfood_");
  std::to_string<ActivityTypeID>(local_24);
  std::operator+(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Impatiensshooter::PlayPlantFood(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >, int) */

void __thiscall
PlantAnimRig_Impatiensshooter::PlayPlantFood
          (PlantAnimRig_Impatiensshooter *this,RtReflectionDelegate *param_2,undefined4 param_3)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  *(undefined4 *)(this + 0x3bc) = param_3;
  local_8 = ___stack_chk_guard;
  getPlantFoodAnimName((int)this);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Impatiensshooter::PlayPlantFoodStart(int) */

void __thiscall
PlantAnimRig_Impatiensshooter::PlayPlantFoodStart(PlantAnimRig_Impatiensshooter *this,int param_1)

{
  int iVar1;
  char *__s;
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = 4;
  if (*(int *)(this + 0x3b8) != 5) {
    iVar1 = 3;
  }
  Set8BytesTo0(asStack_70);
  if (iVar1 == *(int *)(this + 0x3bc)) {
    if (this[0x3c0] == (PlantAnimRig_Impatiensshooter)0x0) {
      std::string::string(asStack_68,"up");
      std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x3bc));
      std::operator+(asStack_68,asStack_60);
      FUN_05474278(asStack_70,asStack_58);
      std::string::~string(asStack_58);
      std::string::~string(asStack_60);
      std::string::~string(asStack_68);
      nop();
      this[0x3c0] = (PlantAnimRig_Impatiensshooter)0x1;
      goto LAB_03f5f5ec;
    }
    __s = "plantfood_";
  }
  else {
    __s = "up";
  }
  std::string::string(asStack_68,__s);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x3bc));
  std::operator+(asStack_68,asStack_60);
  FUN_05474278(asStack_70,asStack_58);
  std::string::~string(asStack_58);
  std::string::~string(asStack_60);
  std::string::~string(asStack_68);
  nop();
LAB_03f5f5ec:
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_50);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_70,0,aDStack_50);
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
  std::string::~string(asStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}

