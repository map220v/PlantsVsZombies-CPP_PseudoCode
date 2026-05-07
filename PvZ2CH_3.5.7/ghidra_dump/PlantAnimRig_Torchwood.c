// Class: PlantAnimRig_Torchwood


/* PlantAnimRig_Torchwood::~PlantAnimRig_Torchwood() */

void __thiscall PlantAnimRig_Torchwood::~PlantAnimRig_Torchwood(PlantAnimRig_Torchwood *this)

{
  *(undefined ***)this = &PTR_GetClass_0679e300;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Torchwood_0679e568;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Torchwood::~PlantAnimRig_Torchwood() */

void __thiscall PlantAnimRig_Torchwood::~PlantAnimRig_Torchwood(PlantAnimRig_Torchwood *this)

{
  ~PlantAnimRig_Torchwood(this + -0x10);
  return;
}


/* PlantAnimRig_Torchwood::~PlantAnimRig_Torchwood() */

void __thiscall PlantAnimRig_Torchwood::~PlantAnimRig_Torchwood(PlantAnimRig_Torchwood *this)

{
  ~PlantAnimRig_Torchwood(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Torchwood::~PlantAnimRig_Torchwood() */

void __thiscall PlantAnimRig_Torchwood::~PlantAnimRig_Torchwood(PlantAnimRig_Torchwood *this)

{
  ~PlantAnimRig_Torchwood(this + -0x10);
  return;
}


/* PlantAnimRig_Torchwood::StaticGetClass() */

long * PlantAnimRig_Torchwood::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Torchwood",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_Torchwood::GetClass() const */

long * PlantAnimRig_Torchwood::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Torchwood",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_Torchwood::PlantAnimRig_Torchwood() */

void __thiscall PlantAnimRig_Torchwood::PlantAnimRig_Torchwood(PlantAnimRig_Torchwood *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0679e300;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Torchwood_0679e568;
  return;
}


/* PlantAnimRig_Torchwood::StaticNew() */

PlantAnimRig_Torchwood * PlantAnimRig_Torchwood::StaticNew(void)

{
  PlantAnimRig_Torchwood *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Torchwood(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Torchwood::playPlantFoodOn() */

void __thiscall PlantAnimRig_Torchwood::playPlantFoodOn(PlantAnimRig_Torchwood *this)

{
  undefined1 uVar1;
  int iVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x220] == (PlantAnimRig_Torchwood)0x0) {
    std::string::string(asStack_40,"plantfood_on");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  else {
    std::string::string(asStack_40,"avatar_plantfood_on");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  uVar1 = 1;
  if (iVar2 == -1) {
    uVar1 = (**(code **)(*(long *)this + 400))(this);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Torchwood::playPlantFoodMain() */

void __thiscall PlantAnimRig_Torchwood::playPlantFoodMain(PlantAnimRig_Torchwood *this)

{
  int iVar1;
  PlayerInfo *this_00;
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  if (this_00 != (PlayerInfo *)0x0) {
    std::string::string(asStack_40,"torchwood");
    iVar1 = PlayerInfo::GetEquipAvatarID(this_00,asStack_40);
    std::string::~string(asStack_40);
    nop();
    if (iVar1 != -1) {
      __s = "avatar_plantfood";
      goto LAB_03f607f0;
    }
  }
  __s = "plantfood";
LAB_03f607f0:
  std::string::string(asStack_40,__s);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Torchwood::PlayPlantFoodEnd() */

void __thiscall PlantAnimRig_Torchwood::PlayPlantFoodEnd(PlantAnimRig_Torchwood *this)

{
  int iVar1;
  PlayerInfo *this_00;
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  if (this_00 != (PlayerInfo *)0x0) {
    std::string::string(asStack_40,"torchwood");
    iVar1 = PlayerInfo::GetEquipAvatarID(this_00,asStack_40);
    std::string::~string(asStack_40);
    nop();
    if (iVar1 != -1) {
      __s = "avatar_plantfood";
      goto LAB_03f60900;
    }
  }
  __s = "plantfood";
LAB_03f60900:
  std::string::string(asStack_40,__s);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}

