// Class: PlantAnimRig_WaterRabbit


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_WaterRabbit::PlayPlantFoodAttack(std::string const&,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_WaterRabbit::PlayPlantFoodAttack
          (PlantAnimRig_WaterRabbit *this,undefined8 param_1,RtReflectionDelegate *param_3)

{
  int iVar1;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,param_1,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_WaterRabbit::StaticClassInit() */

void PlantAnimRig_WaterRabbit::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_WaterRabbit");
    (*pcVar2)(plVar1,asStack_10,FUN_04d2d720,1000,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_WaterRabbit::StaticGetClass() */

long * PlantAnimRig_WaterRabbit::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_WaterRabbit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_WaterRabbit::GetClass() const */

long * PlantAnimRig_WaterRabbit::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_WaterRabbit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_WaterRabbit::PlayBasicAttack(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_WaterRabbit::PlayBasicAttack
          (PlantAnimRig_WaterRabbit *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  char *__s;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x224) < 3) {
    __s = "attack";
  }
  else {
    __s = "attack02";
  }
  std::string::string(asStack_58,__s);
  nop();
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,2);
  }
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_WaterRabbit::PlayThunderclapAttack(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_WaterRabbit::PlayThunderclapAttack
          (PlantAnimRig_WaterRabbit *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  char *__s;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x224) == 5) {
    __s = "zj_lv5";
  }
  else {
    __s = "zj";
  }
  std::string::string(asStack_58,__s);
  nop();
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
/* PlantAnimRig_WaterRabbit::PlayLevelUp(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_WaterRabbit::PlayLevelUp(PlantAnimRig_WaterRabbit *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"level_up");
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
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* PlantAnimRig_WaterRabbit::~PlantAnimRig_WaterRabbit() */

void __thiscall PlantAnimRig_WaterRabbit::~PlantAnimRig_WaterRabbit(PlantAnimRig_WaterRabbit *this)

{
  *(undefined ***)this = &PTR_GetClass_069ac4b0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_WaterRabbit_069ac718;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x3b8))
  ;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_WaterRabbit::~PlantAnimRig_WaterRabbit() */

void __thiscall PlantAnimRig_WaterRabbit::~PlantAnimRig_WaterRabbit(PlantAnimRig_WaterRabbit *this)

{
  ~PlantAnimRig_WaterRabbit(this + -0x10);
  return;
}


/* PlantAnimRig_WaterRabbit::~PlantAnimRig_WaterRabbit() */

void __thiscall PlantAnimRig_WaterRabbit::~PlantAnimRig_WaterRabbit(PlantAnimRig_WaterRabbit *this)

{
  ~PlantAnimRig_WaterRabbit(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_WaterRabbit::~PlantAnimRig_WaterRabbit() */

void __thiscall PlantAnimRig_WaterRabbit::~PlantAnimRig_WaterRabbit(PlantAnimRig_WaterRabbit *this)

{
  ~PlantAnimRig_WaterRabbit(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_WaterRabbit::PlantAnimRig_WaterRabbit() */

void __thiscall PlantAnimRig_WaterRabbit::PlantAnimRig_WaterRabbit(PlantAnimRig_WaterRabbit *this)

{
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069ac4b0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_WaterRabbit_069ac718;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x3b8),
             &DAT_057558a0,7,auStack_18,auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_WaterRabbit::StaticNew() */

PlantAnimRig_WaterRabbit * PlantAnimRig_WaterRabbit::StaticNew(void)

{
  PlantAnimRig_WaterRabbit *this;
  
  this = ::operator_new(1000);
  PlantAnimRig_WaterRabbit(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_WaterRabbit::UpdateLayer(int) */

void __thiscall PlantAnimRig_WaterRabbit::UpdateLayer(PlantAnimRig_WaterRabbit *this,int param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  char *pcVar4;
  ulong uVar5;
  uint uVar6;
  int local_24 [3];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  pbVar3 = (byte *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                   operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                               *)(this + 0x3b8),local_24);
  bVar1 = *pbVar3;
  uVar6 = 1;
  do {
    Sexy::StrFormat("glow_lvl%i",asStack_18,(ulong)uVar6);
    pcVar4 = (char *)FUN_0547429c(asStack_18);
    std::string::string(asStack_10,pcVar4);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1 == uVar6);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    Sexy::StrFormat("head_flower_lvl%i",asStack_18,(ulong)uVar6);
    pcVar4 = (char *)FUN_0547429c(asStack_18);
    std::string::string(asStack_10,pcVar4);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1 == uVar6);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    uVar5 = (ulong)uVar6;
    uVar6 = uVar6 + 1;
    bVar2 = local_24[0] == 6;
    Sexy::StrFormat("head_flower_lvl%i_2",asStack_18,uVar5);
    pcVar4 = (char *)FUN_0547429c(asStack_18);
    std::string::string(asStack_10,pcVar4);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar2);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
  } while (uVar6 != 4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_WaterRabbit::PlayPreviewAnim(bool) */

void PlantAnimRig_WaterRabbit::PlayPreviewAnim(bool param_1)

{
  UpdateLayer((PlantAnimRig_WaterRabbit *)(ulong)param_1,0);
  TwinsRedStarProjectile::damageEntity((BoardEntity *)(ulong)param_1);
  return;
}

