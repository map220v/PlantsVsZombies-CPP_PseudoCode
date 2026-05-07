// Class: PlantAnimRig


/* PlantAnimRig::onAvatarUpdate() */

void PlantAnimRig::onAvatarUpdate(void)

{
  return;
}


/* PlantAnimRig::onLevelUpdate() */

void PlantAnimRig::onLevelUpdate(void)

{
  return;
}


/* PlantAnimRig::onSetFollowerLayerVisibility(std::string const&, bool) */

void PlantAnimRig::onSetFollowerLayerVisibility(string *param_1,bool param_2)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::getCyclingAnimName() */

void __thiscall PlantAnimRig::getCyclingAnimName(PlantAnimRig *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"cycling");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::getExhaustedOnAnimName() */

void __thiscall PlantAnimRig::getExhaustedOnAnimName(PlantAnimRig *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"reload");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::getHelpedOffAnimName() */

void __thiscall PlantAnimRig::getHelpedOffAnimName(PlantAnimRig *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"helped_off");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::getHelpedAnimName() */

void __thiscall PlantAnimRig::getHelpedAnimName(PlantAnimRig *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"helped");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::getHelpedOnAnimName() */

void __thiscall PlantAnimRig::getHelpedOnAnimName(PlantAnimRig *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"helped_on");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig::PlayZenGardenIdleAnim() */

void __thiscall PlantAnimRig::PlayZenGardenIdleAnim(PlantAnimRig *this)

{
  (**(code **)(*(long *)this + 0x1a0))(this,0);
  return;
}


/* PlantAnimRig::PlayPlantFoodEnd() */

bool __thiscall PlantAnimRig::PlayPlantFoodEnd(PlantAnimRig *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x198))();
  if (cVar1 != '\0') {
    *(undefined4 *)(this + 0x218) = 5;
  }
  return cVar1 != '\0';
}


/* PlantAnimRig::onDamageStateIndexChanged(int) */

void PlantAnimRig::onDamageStateIndexChanged(int param_1)

{
  if ((int)((long *)(ulong)(uint)param_1)[0x43] != 1) {
    return;
  }
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x118))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::CalcPlantFoodDuration(int) */

void __thiscall PlantAnimRig::CalcPlantFoodDuration(PlantAnimRig *this,int param_1)

{
  float fVar1;
  float fVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x200))(asStack_10);
  fVar1 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,asStack_10);
  std::string::~string(asStack_10);
  (**(code **)(*(long *)this + 0x208))(asStack_10,this);
  fVar2 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar1 + (float)param_1 * fVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::StaticClassInit() */

void PlantAnimRig::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantCustomLayers");
    (*pcVar3)(plVar2,asStack_10,FUN_03f51ca8,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantAnimRig");
    (*pcVar3)(plVar2,asStack_10,FUN_03f53010,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig::StaticGetClass() */

long * PlantAnimRig::StaticGetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig::GetClass() const */

long * PlantAnimRig::GetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig::SetState(PlantAnimRigState) */

void __thiscall PlantAnimRig::SetState(PlantAnimRig *this,int param_2)

{
  if (*(int *)(this + 0x218) != param_2) {
    *(int *)(this + 0x218) = param_2;
    *(undefined4 *)(this + 0x21c) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::IsWaterAnimAlive() */

void __thiscall PlantAnimRig::IsWaterAnimAlive(PlantAnimRig *this)

{
  int iVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x250))(asStack_10);
  iVar1 = PopAnimRig::CalcAnimLength((PopAnimRig *)this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::PlayWatering(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall PlantAnimRig::PlayWatering(PlantAnimRig *this,RtReflectionDelegate *param_2)

{
  long lVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x250))(asStack_58);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xd;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall PlantAnimRig::PlayAttack(PlantAnimRig *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x1f0))(asStack_58);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* PlantAnimRig::PlayPlantFoodStart(int, RtReflectionDelegate<Sexy::Delegate0>,
   RtReflectionDelegate<Sexy::Delegate0>, RtReflectionDelegate<Sexy::Delegate0>) */

bool __thiscall
PlantAnimRig::PlayPlantFoodStart
          (PlantAnimRig *this,undefined8 param_2,RtReflectionDelegate *param_3,
          RtReflectionDelegate *param_4,RtReflectionDelegate *param_5)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x138))();
  if (cVar1 != '\0') {
    RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
              ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x298),param_3);
    RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
              ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x2e0),param_4);
    RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
              ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x328),param_5);
  }
  return cVar1 != '\0';
}


/* PlantAnimRig::SetPlantDelegates(Sexy::Delegate1<float>, Sexy::Delegate1<float>) */

void __thiscall
PlantAnimRig::SetPlantDelegates(PlantAnimRig *this,Delegate2 *param_2,Delegate2 *param_3)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x238),param_2);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x268),param_3);
  return;
}


/* PlantAnimRig::SetDamageStateIndex(int) */

void __thiscall PlantAnimRig::SetDamageStateIndex(PlantAnimRig *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x22c);
  if (iVar1 != param_1) {
    *(int *)(this + 0x22c) = param_1;
    (**(code **)(*(long *)this + 0x1d8))(this,iVar1);
  }
  return;
}


/* PlantAnimRig::SetAvatarIndex(int) */

void __thiscall PlantAnimRig::SetAvatarIndex(PlantAnimRig *this,int param_1)

{
  *(int *)(this + 0x230) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::PlayInitialFrame() */

void __thiscall PlantAnimRig::PlayInitialFrame(PlantAnimRig *this)

{
  long lVar1;
  int iVar2;
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x1e8))(asStack_48);
  PopAnimRig::CalcVariationLabelName((string *)this,(int)asStack_48);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::PlayHelpedStart() */

void __thiscall PlantAnimRig::PlayHelpedStart(PlantAnimRig *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x218))(asStack_40);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  SetState(this,6);
  if (iVar1 == -1) {
    (**(code **)(*(long *)this + 0x158))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::PlayHelped() */

void __thiscall PlantAnimRig::PlayHelped(PlantAnimRig *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x220))(asStack_40);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  SetState(this,7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::PlayHelpedEnd() */

void __thiscall PlantAnimRig::PlayHelpedEnd(PlantAnimRig *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x228))(asStack_40);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  SetState(this,8);
  if (iVar1 == -1) {
    (**(code **)(*(long *)this + 0x118))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::PlayCycling() */

void __thiscall PlantAnimRig::PlayCycling(PlantAnimRig *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x248))(asStack_40);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  SetState(this,0xc);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::PlayExhaustedStart() */

void __thiscall PlantAnimRig::PlayExhaustedStart(PlantAnimRig *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x230))(asStack_40);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  SetState(this,9);
  if (iVar1 == -1) {
    (**(code **)(*(long *)this + 0x170))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::PlayExhaustedEnd() */

void __thiscall PlantAnimRig::PlayExhaustedEnd(PlantAnimRig *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x240))(asStack_40);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  SetState(this,0xb);
  if (iVar1 == -1) {
    SetState(this,1);
    (**(code **)(*(long *)this + 0x118))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::playPlantFoodOn() */

void __thiscall PlantAnimRig::playPlantFoodOn(PlantAnimRig *this)

{
  undefined1 uVar1;
  int iVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x200))(asStack_40);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  uVar1 = 1;
  if (iVar2 == -1) {
    uVar1 = (**(code **)(*(long *)this + 400))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::playPlantFoodMain() */

void __thiscall PlantAnimRig::playPlantFoodMain(PlantAnimRig *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x208))(asStack_40);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::playPlantFoodOff() */

void __thiscall PlantAnimRig::playPlantFoodOff(PlantAnimRig *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x210))(asStack_40);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (iVar1 == -1) {
    (**(code **)(*(long *)this + 0x118))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::ClearPlantDelegates() */

void __thiscall PlantAnimRig::ClearPlantDelegates(PlantAnimRig *this)

{
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate1<float>::Delegate1(aDStack_38);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x238),(Delegate2 *)aDStack_38);
  Sexy::Delegate1<float>::Delegate1(aDStack_38);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x268),(Delegate2 *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::PlayPlantFoodStart(int) */

void __thiscall PlantAnimRig::PlayPlantFoodStart(PlantAnimRig *this,int param_1)

{
  char cVar1;
  RtReflectionDelegate<Sexy::Delegate0> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x188))();
  if (cVar1 != '\0') {
    *(undefined4 *)(this + 0x218) = 3;
    *(int *)(this + 0x228) = param_1;
    RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_50);
    RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
              ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)(this + 0x298),
               (RtReflectionDelegate *)aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_50);
    RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
              ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)(this + 0x2e0),
               (RtReflectionDelegate *)aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_50);
    RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
              ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)(this + 0x328),
               (RtReflectionDelegate *)aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 != '\0');
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::PlayWatering() */

void __thiscall PlantAnimRig::PlayWatering(PlantAnimRig *this)

{
  long lVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x250))(asStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xd;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::PlayExhausted() */

void __thiscall PlantAnimRig::PlayExhausted(PlantAnimRig *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x238))(asStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  SetState(this,10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig::hasWeightIdleAnimations() */

bool __thiscall PlantAnimRig::hasWeightIdleAnimations(PlantAnimRig *this)

{
  long lVar1;
  
  lVar1 = ProbabilitySet<std::string>::GetSize((ProbabilitySet<std::string> *)(this + 0x388));
  return lVar1 != 0;
}


/* PlantAnimRig::getWeightedIdleAnimationName() */

void __thiscall PlantAnimRig::getWeightedIdleAnimationName(PlantAnimRig *this)

{
  ProbabilitySet<std::string>::PickItem();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::PlayIdleLooped() */

void __thiscall PlantAnimRig::PlayIdleLooped(PlantAnimRig *this)

{
  char cVar1;
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x22c) == 0) {
    cVar1 = hasWeightIdleAnimations(this);
    if (cVar1 == '\0') {
      (**(code **)(*(long *)this + 0x1e8))(asStack_40,this);
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,3,aDStack_38);
      std::string::~string(asStack_40);
    }
    else {
      getWeightedIdleAnimationName(this);
      Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
      PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
    }
  }
  else {
    (**(code **)(*(long *)this + 0x1f8))(asStack_48);
    PopAnimRig::CalcVariationLabelName((string *)this,(int)asStack_48);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    std::string::~string(asStack_48);
  }
  *(undefined4 *)(this + 0x218) = 1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig::onPlantfoodLooped() */

void __thiscall PlantAnimRig::onPlantfoodLooped(PlantAnimRig *this)

{
  int iVar1;
  RtInvokeVariant *pRVar2;
  
  iVar1 = ::RtReflectionDelegate::operator_cast_to_int((RtReflectionDelegate *)(this + 0x2e0));
  if (iVar1 == 0) {
    return;
  }
  pRVar2 = (RtInvokeVariant *)
           RtReflectionDelegate<Sexy::Delegate0>::GetDelegate
                     ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x2e0));
  Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar2);
  return;
}


/* PlantAnimRig::PlantAnimRig() */

void __thiscall PlantAnimRig::PlantAnimRig(PlantAnimRig *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined4 *)(this + 0x218) = 0;
  *(undefined ***)this = &PTR_GetClass_06799c70;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_06799ed8;
  *(undefined4 *)(this + 0x21c) = 0;
  *(undefined4 *)(this + 0x224) = 1;
  this[0x220] = (PlantAnimRig)0x0;
  *(undefined4 *)(this + 0x228) = 0;
  *(undefined4 *)(this + 0x22c) = 0;
  Sexy::Delegate1<float>::Delegate1((DummyInit *)(this + 0x238));
  Sexy::Delegate1<float>::Delegate1((DummyInit *)(this + 0x268));
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x298));
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x2e0));
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x328));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x370));
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
            ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)(this + 0x388));
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x230) = 0xffffffff;
  return;
}


/* PlantAnimRig::StaticNew() */

PlantAnimRig * PlantAnimRig::StaticNew(void)

{
  PlantAnimRig *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::HideAllAvatarLayers() */

void __thiscall PlantAnimRig::HideAllAvatarLayers(PlantAnimRig *this)

{
  bool bVar1;
  long lVar2;
  string *psVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar5 = *(undefined8 *)(this + 0x370);
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_03f51b68(uVar5,*(undefined8 *)(this + 0x378));
  if (lVar2 != 0) {
    do {
      lVar2 = FUN_03f51ba4(uVar5,uVar6);
      local_18 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                           ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                            (lVar2 + 8));
      while( true ) {
        lVar2 = FUN_03f51ba4(*(undefined8 *)(this + 0x370),uVar6);
        local_10 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)(lVar2 + 8));
        bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
        if (!bVar1) break;
        psVar3 = (string *)
                 std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                           ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
        if (*(code **)(*(long *)this + 0x1e0) != onSetFollowerLayerVisibility) {
          (**(code **)(*(long *)this + 0x1e0))(this,psVar3,0);
        }
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,false);
        std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
                  ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_18);
      }
      uVar5 = *(undefined8 *)(this + 0x370);
      uVar6 = uVar6 + 1;
      uVar4 = FUN_03f51b68(uVar5,*(undefined8 *)(this + 0x378));
    } while (uVar6 < uVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig::~PlantAnimRig() */

void __thiscall PlantAnimRig::~PlantAnimRig(PlantAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_06799c70;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_06799ed8;
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)(this + 0x388));
  std::vector<PlantCustomLayers,std::allocator<PlantCustomLayers>>::~vector
            ((vector<PlantCustomLayers,std::allocator<PlantCustomLayers>> *)(this + 0x370));
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x328));
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x2e0));
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x298));
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig::~PlantAnimRig() */

void __thiscall PlantAnimRig::~PlantAnimRig(PlantAnimRig *this)

{
  ~PlantAnimRig(this + -0x10);
  return;
}


/* PlantAnimRig::~PlantAnimRig() */

void __thiscall PlantAnimRig::~PlantAnimRig(PlantAnimRig *this)

{
  ~PlantAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig::~PlantAnimRig() */

void __thiscall PlantAnimRig::~PlantAnimRig(PlantAnimRig *this)

{
  ~PlantAnimRig(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::ShowAvatarLayers(Sexy::RtWeakPtr<PlantType const>, PlantAvatarType) */

void __thiscall
PlantAnimRig::ShowAvatarLayers
          (PlantAnimRig *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  string *psVar7;
  string *psVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HideAllAvatarLayers(this);
  if (param_3 == -2) {
    psVar7 = (string *)ProfileUtils::Profile();
    cVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    PlayerInfo::GetPlantAvatar(psVar7,(bool)(cVar2 + '\b'));
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  iVar1 = *(int *)(this + 0x230);
  if (-1 < iVar1) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    uVar5 = FUN_03f51bb4(*(undefined8 *)(lVar4 + 0x50),*(undefined8 *)(lVar4 + 0x58));
    if ((ulong)(long)iVar1 < uVar5) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      lVar4 = FUN_03f51bc8(*(undefined8 *)(lVar4 + 0x50),(long)*(int *)(this + 0x230));
      std::vector<std::string,std::allocator<std::string>>::operator=
                ((vector<std::string,std::allocator<std::string>> *)&local_20,(vector *)(lVar4 + 8))
      ;
    }
  }
  uVar12 = local_20;
  uVar10 = 0;
  uVar5 = FUN_03f51bd4(local_20,local_18);
  if (uVar5 != 0) {
    do {
      uVar11 = *(undefined8 *)(this + 0x370);
      lVar6 = FUN_03f51b68(uVar11,*(undefined8 *)(this + 0x378));
      lVar4 = 0;
      do {
        lVar9 = lVar4;
        if (lVar9 == lVar6) goto LAB_03f53adc;
        psVar7 = (string *)FUN_03f51be0(uVar12,uVar10);
        psVar8 = (string *)FUN_03f51ba4(uVar11,lVar9);
        cVar2 = std::operator==(psVar7,psVar8);
        lVar4 = lVar9 + 1;
      } while (cVar2 == '\0');
      local_30 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                           ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                            (psVar8 + 8));
      while( true ) {
        lVar4 = FUN_03f51ba4(*(undefined8 *)(this + 0x370),lVar9);
        local_28 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)(lVar4 + 8));
        bVar3 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)&local_28);
        uVar12 = local_20;
        if (!bVar3) break;
        psVar7 = (string *)
                 std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                           ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
        if (*(code **)(*(long *)this + 0x1e0) != onSetFollowerLayerVisibility) {
          (**(code **)(*(long *)this + 0x1e0))(this,psVar7,1);
        }
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar7,true);
        std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
                  ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_30);
      }
      uVar5 = FUN_03f51bd4(local_20,local_18);
LAB_03f53adc:
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar5);
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::GetAvatarLayers() */

void PlantAnimRig::GetAvatarLayers(void)

{
  bool bVar1;
  long in_x0;
  long lVar2;
  char *__s;
  ulong uVar3;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  uVar5 = *(undefined8 *)(in_x0 + 0x370);
  lVar2 = FUN_03f51b68(uVar5,*(undefined8 *)(in_x0 + 0x378));
  if (lVar2 != 0) {
    do {
      lVar2 = FUN_03f51ba4(uVar5,uVar4);
      local_18 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                           ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                            (lVar2 + 8));
      while( true ) {
        lVar2 = FUN_03f51ba4(*(undefined8 *)(in_x0 + 0x370),uVar4);
        local_10 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)(lVar2 + 8));
        bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
        if (!bVar1) break;
        std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                  ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
        __s = (char *)FUN_0547429c();
        std::string::string((string *)&local_10,__s);
        std::vector<std::string,std::allocator<std::string>>::push_back
                  ((vector<std::string,std::allocator<std::string>> *)in_x8,(string *)&local_10);
        std::string::~string((string *)&local_10);
        nop();
        std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
                  ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_18);
      }
      uVar5 = *(undefined8 *)(in_x0 + 0x370);
      uVar4 = uVar4 + 1;
      uVar3 = FUN_03f51b68(uVar5,*(undefined8 *)(in_x0 + 0x378));
    } while (uVar4 < uVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::prepCustomizableLayers(Sexy::PASpriteInst*) */

void __thiscall PlantAnimRig::prepCustomizableLayers(PlantAnimRig *this,PASpriteInst *param_1)

{
  bool bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  string *psVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_50,*(long *)(param_1 + 0x18) + 8);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_05475ffc(asStack_40,asStack_50,0,7);
    bVar1 = std::operator==(asStack_40,"custom_");
    std::string::~string(asStack_40);
    if (bVar1) {
      lVar4 = FUN_05474374(asStack_50,&DAT_055a8370,0);
      lVar4 = FUN_05474374(asStack_50,&DAT_055a8370,lVar4 + 1);
      Set8BytesTo0(asStack_48);
      if (lVar4 == -1) {
        thunk_FUN_05475e00(asStack_48,asStack_50);
      }
      else {
        FUN_05475ffc(asStack_40,asStack_50,0,lVar4);
        FUN_05474278(asStack_48,asStack_40);
        std::string::~string(asStack_40);
      }
      uVar9 = *(undefined8 *)(this + 0x370);
      uVar8 = *(undefined8 *)(this + 0x378);
      param_1[10] = (PASpriteInst)0x0;
      lVar5 = FUN_03f51b68(uVar9,uVar8);
      lVar4 = 0;
      do {
        if (lVar4 == lVar5) {
          PlantCustomLayers::PlantCustomLayers((PlantCustomLayers *)asStack_40,asStack_48);
          std::vector<PlantCustomLayers,std::allocator<PlantCustomLayers>>::push_back
                    ((vector<PlantCustomLayers,std::allocator<PlantCustomLayers>> *)(this + 0x370),
                     (PlantCustomLayers *)asStack_40);
          PlantCustomLayers::~PlantCustomLayers((PlantCustomLayers *)asStack_40);
          lVar4 = std::vector<Sexy::PAFrame,std::allocator<Sexy::PAFrame>>::back
                            ((vector<Sexy::PAFrame,std::allocator<Sexy::PAFrame>> *)(this + 0x370));
          std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
                    ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                     (lVar4 + 8),asStack_50);
          goto LAB_03f55558;
        }
        psVar6 = (string *)FUN_03f51ba4(uVar9,lVar4);
        cVar2 = std::operator==(psVar6,asStack_48);
        lVar4 = lVar4 + 1;
      } while (cVar2 == '\0');
      std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
                ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(psVar6 + 8)
                 ,asStack_50);
LAB_03f55558:
      std::string::~string(asStack_48);
      goto LAB_03f55434;
    }
  }
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uVar7 = 0;
  uVar3 = FUN_03f51be8(uVar8,*(undefined8 *)(param_1 + 0x50));
  if (uVar3 != 0) {
    do {
      lVar4 = FUN_03f51bf4(uVar8,uVar7);
      if (*(PASpriteInst **)(lVar4 + 8) != (PASpriteInst *)0x0) {
        prepCustomizableLayers(this,*(PASpriteInst **)(lVar4 + 8));
        uVar8 = *(undefined8 *)(param_1 + 0x48);
        uVar3 = FUN_03f51be8(uVar8,*(undefined8 *)(param_1 + 0x50));
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
LAB_03f55434:
  std::string::~string(asStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig::prepForCustomizableLayers() */

void __thiscall PlantAnimRig::prepForCustomizableLayers(PlantAnimRig *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_03f51b58(*(undefined8 *)(this + 0x20));
  prepCustomizableLayers(this,*(PASpriteInst **)(lVar1 + 0x50));
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x370));
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x370));
  std::
  sort<__gnu_cxx::__normal_iterator<PlantCustomLayers*,std::vector<PlantCustomLayers,std::allocator<PlantCustomLayers>>>>
            (uVar2,uVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig::SetIdleAnimationWeights(std::map<std::string, int, std::less<std::string >,
   std::allocator<std::pair<std::string const, int> > >) */

void __thiscall
PlantAnimRig::SetIdleAnimationWeights
          (PlantAnimRig *this,
          map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<std::string>::Clear((ProbabilitySet<std::string> *)(this + 0x388));
  local_18 = std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::begin(param_2);
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    uVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    FUN_05475d88((string *)&local_10,uVar2);
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    ProbabilitySet<std::string>::AddItem
              ((ProbabilitySet<std::string> *)(this + 0x388),(string *)&local_10,
               *(undefined4 *)(lVar3 + 8));
    std::string::~string((string *)&local_10);
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig::onPopAnimCommand(float, std::string const&, std::string const&) */

void PlantAnimRig::onPopAnimCommand(float param_1,string *param_2,string *param_3)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_03f51ab8(*(undefined8 *)(param_2 + 0x240),*(undefined8 *)(param_2 + 0x250));
  if ((iVar2 != 0) && (bVar1 = std::operator==(param_3,"use_special"), bVar1)) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(param_2 + 0x238));
    return;
  }
  iVar2 = FUN_03f51ab8(*(undefined8 *)(param_2 + 0x270),*(undefined8 *)(param_2 + 0x280));
  if ((iVar2 != 0) && (bVar1 = std::operator==(param_3,"use_action"), bVar1)) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(param_2 + 0x268));
    return;
  }
  PopAnimRig::onPopAnimCommand(param_1,param_2,param_3);
  return;
}


/* PlantAnimRig::onPopAnimInitialized() */

void __thiscall PlantAnimRig::onPopAnimInitialized(PlantAnimRig *this)

{
  *(undefined4 *)(this + 0x218) = 0;
  *(undefined4 *)(this + 0x228) = 0;
  *(undefined4 *)(this + 0x22c) = 0;
  ClearPlantDelegates(this);
  PopAnimRig::onPopAnimInitialized((PopAnimRig *)this);
  prepForCustomizableLayers(this);
  return;
}


/* PlantAnimRig::onAnimStopped() */

void __thiscall PlantAnimRig::onAnimStopped(PlantAnimRig *this)

{
  char cVar1;
  int iVar2;
  RtInvokeVariant *pRVar3;
  
  *(int *)(this + 0x21c) = *(int *)(this + 0x21c) + 1;
  switch(*(int *)(this + 0x218)) {
  case 3:
    onPlantfoodLooped(this);
    cVar1 = (**(code **)(*(long *)this + 400))(this);
    if (cVar1 != '\0') {
      iVar2 = ::RtReflectionDelegate::operator_cast_to_int((RtReflectionDelegate *)(this + 0x298));
      if (iVar2 != 0) {
        pRVar3 = (RtInvokeVariant *)
                 RtReflectionDelegate<Sexy::Delegate0>::GetDelegate
                           ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x298));
        Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar3);
      }
      *(undefined4 *)(this + 0x218) = 4;
    }
    break;
  case 4:
    iVar2 = *(int *)(this + 0x228);
    if (0 < iVar2) {
      *(int *)(this + 0x228) = iVar2 + -1;
      onPlantfoodLooped(this);
      iVar2 = *(int *)(this + 0x228);
    }
    if ((iVar2 < 1) && (iVar2 != -1)) {
      *(undefined4 *)(this + 0x218) = 0;
      iVar2 = ::RtReflectionDelegate::operator_cast_to_int((RtReflectionDelegate *)(this + 0x328));
      if (iVar2 != 0) {
        pRVar3 = (RtInvokeVariant *)
                 RtReflectionDelegate<Sexy::Delegate0>::GetDelegate
                           ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x328));
        Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar3);
      }
    }
    else {
      (**(code **)(*(long *)this + 400))(this);
    }
    break;
  default:
    if (*(int *)(this + 0x218) < 0xe) {
      (**(code **)(*(long *)this + 0x118))(this);
    }
    break;
  case 9:
    (**(code **)(*(long *)this + 0x170))(this);
    nop();
    return;
  case 10:
    break;
  case 0xc:
    (**(code **)(*(long *)this + 0x180))(this);
    nop();
    return;
  }
  nop();
  return;
}


/* PlantAnimRig::SetAvatarEnable(bool) */

void __thiscall PlantAnimRig::SetAvatarEnable(PlantAnimRig *this,bool param_1)

{
  this[0x220] = (PlantAnimRig)param_1;
  if (*(code **)(*(long *)this + 0x1c8) != onAvatarUpdate) {
    (**(code **)(*(long *)this + 0x1c8))();
  }
  return;
}


/* PlantAnimRig::SetPlantLevel(int) */

void __thiscall PlantAnimRig::SetPlantLevel(PlantAnimRig *this,int param_1)

{
  *(int *)(this + 0x224) = param_1;
  if (*(code **)(*(long *)this + 0x1d0) != onLevelUpdate) {
    (**(code **)(*(long *)this + 0x1d0))();
  }
  return;
}


/* PlantAnimRig::GetCustomizableLayers() */

vector<PlantCustomLayers,std::allocator<PlantCustomLayers>> *
PlantAnimRig::GetCustomizableLayers(void)

{
  long in_x0;
  vector<PlantCustomLayers,std::allocator<PlantCustomLayers>> *in_x8;
  
  std::vector<PlantCustomLayers,std::allocator<PlantCustomLayers>>::vector
            (in_x8,(vector *)(in_x0 + 0x370));
  return in_x8;
}


/* PlantAnimRig::GetIdleAnimName() */

void PlantAnimRig::GetIdleAnimName(void)

{
  long *in_x0;
  
  (**(code **)(*in_x0 + 0x1e8))();
  return;
}

