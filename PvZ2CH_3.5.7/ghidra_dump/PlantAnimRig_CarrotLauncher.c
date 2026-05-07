// Class: PlantAnimRig_CarrotLauncher


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_CarrotLauncher::PlayRecoverEnd(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_CarrotLauncher::PlayRecoverEnd
          (PlantAnimRig_CarrotLauncher *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"recover2");
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


/* PlantAnimRig_CarrotLauncher::~PlantAnimRig_CarrotLauncher() */

void __thiscall
PlantAnimRig_CarrotLauncher::~PlantAnimRig_CarrotLauncher(PlantAnimRig_CarrotLauncher *this)

{
  *(undefined ***)this = &PTR_GetClass_067a00a0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_CarrotLauncher_067a0308;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_CarrotLauncher::~PlantAnimRig_CarrotLauncher() */

void __thiscall
PlantAnimRig_CarrotLauncher::~PlantAnimRig_CarrotLauncher(PlantAnimRig_CarrotLauncher *this)

{
  ~PlantAnimRig_CarrotLauncher(this + -0x10);
  return;
}


/* PlantAnimRig_CarrotLauncher::~PlantAnimRig_CarrotLauncher() */

void __thiscall
PlantAnimRig_CarrotLauncher::~PlantAnimRig_CarrotLauncher(PlantAnimRig_CarrotLauncher *this)

{
  ~PlantAnimRig_CarrotLauncher(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_CarrotLauncher::~PlantAnimRig_CarrotLauncher() */

void __thiscall
PlantAnimRig_CarrotLauncher::~PlantAnimRig_CarrotLauncher(PlantAnimRig_CarrotLauncher *this)

{
  ~PlantAnimRig_CarrotLauncher(this + -0x10);
  return;
}


/* PlantAnimRig_CarrotLauncher::PlantAnimRig_CarrotLauncher() */

void __thiscall
PlantAnimRig_CarrotLauncher::PlantAnimRig_CarrotLauncher(PlantAnimRig_CarrotLauncher *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067a00a0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_CarrotLauncher_067a0308;
  return;
}


/* PlantAnimRig_CarrotLauncher::StaticNew() */

PlantAnimRig_CarrotLauncher * PlantAnimRig_CarrotLauncher::StaticNew(void)

{
  PlantAnimRig_CarrotLauncher *this;
  
  this = ::operator_new(0x3c8);
  PlantAnimRig_CarrotLauncher(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_CarrotLauncher::StaticClassInit() */

void PlantAnimRig_CarrotLauncher::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_CarrotLauncher");
    (*pcVar2)(plVar1,asStack_10,FUN_03f64168,0x3c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_CarrotLauncher::StaticGetClass() */

long * PlantAnimRig_CarrotLauncher::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_CarrotLauncher",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_CarrotLauncher::GetClass() const */

long * PlantAnimRig_CarrotLauncher::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_CarrotLauncher",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_CarrotLauncher::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_CarrotLauncher::PlayAttack
          (PlantAnimRig_CarrotLauncher *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  ulong __n;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_58);
  __n = (ulong)(*(int *)(this + 0x3b8) - 1);
  switch(__n) {
  case 0:
    std::string::append(asStack_58,"attack",__n);
    break;
  case 1:
    std::string::append(asStack_58,"attack2",__n);
    break;
  case 2:
    std::string::append(asStack_58,"attack3",__n);
    break;
  case 3:
    std::string::append(asStack_58,"attack4",__n);
    break;
  case 4:
    std::string::append(asStack_58,"attack_lv2",__n);
    break;
  case 5:
    std::string::append(asStack_58,"attack2_lv2",__n);
    break;
  case 6:
    std::string::append(asStack_58,"attack_lv3",__n);
  }
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  std::string::~string(asStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_CarrotLauncher::PlayPlantFoodAttack() */

void __thiscall PlantAnimRig_CarrotLauncher::PlayPlantFoodAttack(PlantAnimRig_CarrotLauncher *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"rocket_attack");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    this[0x3bc] = (PlantAnimRig_CarrotLauncher)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_CarrotLauncher::PlayIdleLooped() */

void __thiscall PlantAnimRig_CarrotLauncher::PlayIdleLooped(PlantAnimRig_CarrotLauncher *this)

{
  size_t in_x2;
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x22c) == 0) {
    Set8BytesTo0(asStack_40);
    switch(*(undefined4 *)(this + 0x3b8)) {
    case 0:
      std::string::append(asStack_40,"idle",in_x2);
      break;
    case 1:
      std::string::append(asStack_40,"idle2",in_x2);
      break;
    case 2:
    case 5:
      std::string::append(asStack_40,"idle3",in_x2);
      break;
    case 3:
      std::string::append(asStack_40,"idle4",in_x2);
    }
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
  }
  else {
    std::string::string(asStack_48,"damage");
    PopAnimRig::CalcVariationLabelName((string *)this,(int)asStack_48);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    std::string::~string(asStack_48);
    nop();
  }
  *(undefined4 *)(this + 0x218) = 1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_CarrotLauncher::PlayPlantFoodStart(int) */

void __thiscall
PlantAnimRig_CarrotLauncher::PlayPlantFoodStart(PlantAnimRig_CarrotLauncher *this,int param_1)

{
  int iVar1;
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x3c4] == (PlantAnimRig_CarrotLauncher)0x0) {
    std::string::string(asStack_58,"plantfood");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_50);
  }
  else {
    std::string::string(asStack_58,"plantfood2");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_50);
  }
  iVar1 = PopAnimRig::PlayAndStop
                    ((PopAnimRig *)this,asStack_58,0,
                     (RtReflectionDelegate<Sexy::Delegate0> *)aDStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 4;
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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* PlantAnimRig_CarrotLauncher::onPopAnimInitialized() */

void __thiscall PlantAnimRig_CarrotLauncher::onPopAnimInitialized(PlantAnimRig_CarrotLauncher *this)

{
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3b8) = 0;
  this[0x3bc] = (PlantAnimRig_CarrotLauncher)0x0;
  *(undefined4 *)(this + 0x3c0) = 0;
  this[0x3c4] = (PlantAnimRig_CarrotLauncher)0x0;
  return;
}


/* PlantAnimRig_CarrotLauncher::onAnimStopped() */

void __thiscall PlantAnimRig_CarrotLauncher::onAnimStopped(PlantAnimRig_CarrotLauncher *this)

{
  if (*(int *)(this + 0x218) != 4) {
    PlantAnimRig::onAnimStopped((PlantAnimRig *)this);
    return;
  }
  *(undefined4 *)(this + 0x3c0) = 1;
  PlantAnimRig::onAnimStopped((PlantAnimRig *)this);
  return;
}

