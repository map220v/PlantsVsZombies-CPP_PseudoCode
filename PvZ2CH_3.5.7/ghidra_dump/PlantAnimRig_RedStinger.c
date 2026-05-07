// Class: PlantAnimRig_RedStinger


/* PlantAnimRig_RedStinger::CalcDamageStateCount() */

undefined4 __thiscall PlantAnimRig_RedStinger::CalcDamageStateCount(PlantAnimRig_RedStinger *this)

{
  undefined4 uVar1;
  
  uVar1 = 3;
  if (*(int *)(this + 0x3b8) != 2) {
    uVar1 = 0;
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_RedStinger::getIdleAnimationName() */

void __thiscall PlantAnimRig_RedStinger::getIdleAnimationName(PlantAnimRig_RedStinger *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"idle1_1");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_RedStinger::~PlantAnimRig_RedStinger() */

void __thiscall PlantAnimRig_RedStinger::~PlantAnimRig_RedStinger(PlantAnimRig_RedStinger *this)

{
  *(undefined ***)this = &PTR_GetClass_067e6570;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_RedStinger_067e67d8;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x3d0));
  std::string::~string((string *)(this + 0x3c0));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_RedStinger::~PlantAnimRig_RedStinger() */

void __thiscall PlantAnimRig_RedStinger::~PlantAnimRig_RedStinger(PlantAnimRig_RedStinger *this)

{
  ~PlantAnimRig_RedStinger(this + -0x10);
  return;
}


/* PlantAnimRig_RedStinger::~PlantAnimRig_RedStinger() */

void __thiscall PlantAnimRig_RedStinger::~PlantAnimRig_RedStinger(PlantAnimRig_RedStinger *this)

{
  ~PlantAnimRig_RedStinger(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_RedStinger::~PlantAnimRig_RedStinger() */

void __thiscall PlantAnimRig_RedStinger::~PlantAnimRig_RedStinger(PlantAnimRig_RedStinger *this)

{
  ~PlantAnimRig_RedStinger(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_RedStinger::StaticClassInit() */

void PlantAnimRig_RedStinger::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_RedStinger");
    (*pcVar2)(plVar1,asStack_10,FUN_04113c90,0x418,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_RedStinger::StaticGetClass() */

long * PlantAnimRig_RedStinger::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_RedStinger",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_RedStinger::GetClass() const */

long * PlantAnimRig_RedStinger::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_RedStinger",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_RedStinger::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_RedStinger::PlayAttack(PlantAnimRig_RedStinger *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  undefined1 *__n;
  undefined1 auStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  __n = auStack_60;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"");
  nop();
  if (*(int *)(this + 0x3b8) == 0) {
    std::string::append(asStack_58,"attack1",(size_t)__n);
  }
  else if (*(int *)(this + 0x3b8) == 1) {
    std::string::append(asStack_58,"attack2",(size_t)__n);
  }
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  *(int *)(this + 0x3c8) = iVar1;
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x3d0),param_2);
  PlantAnimRig::SetState((PlantAnimRig *)this,2);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_RedStinger::SetLocState(StingerLocationState) */

void __thiscall
PlantAnimRig_RedStinger::SetLocState(PlantAnimRig_RedStinger *this,undefined4 param_2)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  int local_58 [2];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_58[0] = -1;
  local_58[1] = 0xffffffff;
  *(undefined4 *)(this + 0x3b8) = param_2;
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_04113050(*(undefined8 *)(this + 0x20));
  Sexy::PASpriteDef::GetLabelFrameRange
            (*(PASpriteDef **)(*(long *)(lVar2 + 0x50) + 0x18),(string *)(lVar2 + 0x48),local_58,
             local_58 + 1);
  lVar2 = FUN_04113050(*(undefined8 *)(this + 0x20));
  fVar4 = *(float *)(*(long *)(lVar2 + 0x50) + 0xc);
  fVar5 = (float)local_58[0];
  if (((*(int *)(this + 0x3c8) == -1) ||
      (cVar1 = PopAnimRig::IsAnimActive((PopAnimRig *)this), cVar1 == '\0')) ||
     (1 < *(int *)(this + 0x3b8))) {
    (**(code **)(*(long *)this + 0x118))(this);
  }
  else {
    pcVar3 = *(code **)(*(long *)this + 0x130);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,(RtReflectionDelegate *)(this + 0x3d0));
    (*pcVar3)(this,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  lVar2 = FUN_04113050(*(undefined8 *)(this + 0x20));
  *(float *)(*(long *)(lVar2 + 0x50) + 0xc) =
       (fVar4 + *(float *)(*(long *)(lVar2 + 0x50) + 0xc)) - fVar5;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_RedStinger::PlantAnimRig_RedStinger() */

void __thiscall PlantAnimRig_RedStinger::PlantAnimRig_RedStinger(PlantAnimRig_RedStinger *this)

{
  undefined **__n;
  
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  __n = &PTR_GetClass_067e6570;
  *(undefined ***)this = &PTR_GetClass_067e6570;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_RedStinger_067e67d8;
  Set8BytesTo0((string *)(this + 0x3c0));
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)(this + 0x3d0));
  *(undefined4 *)(this + 0x3b8) = 0xffffffff;
  std::string::append((string *)(this + 0x3c0),"",(size_t)__n);
  return;
}


/* PlantAnimRig_RedStinger::StaticNew() */

PlantAnimRig_RedStinger * PlantAnimRig_RedStinger::StaticNew(void)

{
  PlantAnimRig_RedStinger *this;
  
  this = ::operator_new(0x418);
  PlantAnimRig_RedStinger(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_RedStinger::PlayPreviewAnim(bool) */

void PlantAnimRig_RedStinger::PlayPreviewAnim(bool param_1)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"idle1_1");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_RedStinger::getPlantFoodOnAnimName() */

void PlantAnimRig_RedStinger::getPlantFoodOnAnimName(void)

{
  long in_x0;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_14 = *(int *)(in_x0 + 0x3b8) + 1;
  local_8 = ___stack_chk_guard;
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_14);
  std::operator+("plantfood",asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_RedStinger::getPlantFoodMainAnimName() */

void PlantAnimRig_RedStinger::getPlantFoodMainAnimName(void)

{
  long in_x0;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_14 = *(int *)(in_x0 + 0x3b8) + 1;
  local_8 = ___stack_chk_guard;
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_14);
  std::operator+("loop_plantfood",asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_RedStinger::getPlantFoodOffAnimName() */

void PlantAnimRig_RedStinger::getPlantFoodOffAnimName(void)

{
  long in_x0;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_14 = *(int *)(in_x0 + 0x3b8) + 1;
  local_8 = ___stack_chk_guard;
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_14);
  std::operator+("end_plantfood",asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_RedStinger::PlayIdleLooped() */

void __thiscall PlantAnimRig_RedStinger::PlayIdleLooped(PlantAnimRig_RedStinger *this)

{
  int iVar1;
  undefined8 uVar2;
  string *__n;
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_68 [48];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_68);
  iVar1 = *(int *)(this + 0x3b8);
  if (iVar1 == 1) {
    std::string::string(asStack_70,"idle2_1");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,0x14);
    std::string::~string(asStack_70);
    nop();
    std::string::string(asStack_70,"idle2_2");
    uVar2 = 10;
  }
  else {
    if (iVar1 == 2) {
      std::string::string(asStack_88,"idle3_");
      nop();
      __n = asStack_70;
      std::string::string(asStack_80,"");
      nop();
      iVar1 = FUN_041130a8(*(undefined4 *)(this + 0x22c));
      if (iVar1 == 2) {
        std::string::append(asStack_80,"dmg2_",(size_t)__n);
      }
      else if (iVar1 == 3) {
        std::string::append(asStack_80,"dmg3_",(size_t)__n);
      }
      else if (iVar1 == 1) {
        std::string::append(asStack_80,"dmg1_",(size_t)__n);
      }
      FUN_031dcc6c(asStack_78,asStack_88,asStack_80);
      std::operator+(asStack_78,"1");
      ProbabilitySet<std::string>::AddItem
                ((ProbabilitySet<std::string> *)aPStack_68,asStack_70,0x14);
      std::string::~string(asStack_70);
      std::string::~string(asStack_78);
      std::string::~string(asStack_80);
      std::string::~string(asStack_88);
      goto LAB_04115500;
    }
    if (iVar1 == 0) {
      std::string::string(asStack_70,"idle1_1");
      ProbabilitySet<std::string>::AddItem
                ((ProbabilitySet<std::string> *)aPStack_68,asStack_70,0x14);
      std::string::~string(asStack_70);
      nop();
      std::string::string(asStack_70,"idle1_2");
      uVar2 = 10;
    }
    else {
      std::string::string(asStack_70,"idle1_1");
      uVar2 = 0x14;
    }
  }
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,uVar2);
  std::string::~string(asStack_70);
  nop();
LAB_04115500:
  ProbabilitySet<std::string>::PickItemIgnoring((string *)aPStack_68);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_70,0,aDStack_38);
  if (iVar1 != -1) {
    thunk_FUN_05475e00(this + 0x3c0,asStack_70);
    PlantAnimRig::SetState((PlantAnimRig *)this,1);
  }
  std::string::~string(asStack_70);
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}

