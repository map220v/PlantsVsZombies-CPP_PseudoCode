// Class: PlantTypeBoomFlower


/* PlantTypeBoomFlower::PlantTypeBoomFlower() */

void __thiscall PlantTypeBoomFlower::PlantTypeBoomFlower(PlantTypeBoomFlower *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_067e7660;
  return;
}


/* PlantTypeBoomFlower::StaticNew() */

PlantTypeBoomFlower * PlantTypeBoomFlower::StaticNew(void)

{
  PlantTypeBoomFlower *this;
  
  this = ::operator_new(0x138);
  PlantTypeBoomFlower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeBoomFlower::StaticClassInit() */

void PlantTypeBoomFlower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantTypeBoomFlower");
    (*pcVar2)(plVar1,asStack_10,FUN_041176a0,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTypeBoomFlower::StaticGetClass() */

long * PlantTypeBoomFlower::StaticGetClass(void)

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
  uVar2 = PlantType::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTypeBoomFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTypeBoomFlower::GetClass() const */

long * PlantTypeBoomFlower::GetClass(void)

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
  uVar2 = PlantType::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTypeBoomFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTypeBoomFlower::GetCost(int) const */

ulong __thiscall PlantTypeBoomFlower::GetCost(PlantTypeBoomFlower *this,int param_1)

{
  uint uVar1;
  ulong uVar2;
  long extraout_x0;
  
  uVar2 = PlantType::GetCost((PlantType *)this,0xfffffffe);
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    PlantType::GetProps((PlantType *)this);
    nop();
    if (param_1 < 2) {
      return (ulong)*(uint *)(extraout_x0 + 0x18);
    }
    uVar1 = (uint)((float)(int)*(uint *)(extraout_x0 + 0x18) - *(float *)(extraout_x0 + 0x2ec));
    uVar2 = (ulong)uVar1;
    if (param_1 != 2) {
      uVar2 = (ulong)(uint)(int)((float)(int)uVar1 - *(float *)(extraout_x0 + 0x2f0));
    }
  }
  return uVar2;
}


/* PlantTypeBoomFlower::GetCost(PlantAvatarType) const */

int PlantTypeBoomFlower::GetCost(PlantType *param_1)

{
  int iVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long extraout_x0;
  
  iVar1 = PlantType::GetCost();
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    iVar2 = PlayerInfo::GetPlantStarLevel(this_00,(string *)(param_1 + 8),false);
    PlantType::GetProps(param_1);
    nop();
    if (1 < iVar2) {
      iVar1 = (int)((float)iVar1 - *(float *)(extraout_x0 + 0x2ec));
      if (iVar2 != 2) {
        iVar1 = (int)((float)iVar1 - *(float *)(extraout_x0 + 0x2f0));
      }
    }
  }
  return iVar1;
}


/* PlantTypeBoomFlower::~PlantTypeBoomFlower() */

void __thiscall PlantTypeBoomFlower::~PlantTypeBoomFlower(PlantTypeBoomFlower *this)

{
  *(undefined ***)this = &PTR_GetClass_067e7660;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeBoomFlower::~PlantTypeBoomFlower() */

void __thiscall PlantTypeBoomFlower::~PlantTypeBoomFlower(PlantTypeBoomFlower *this)

{
  ~PlantTypeBoomFlower(this);
  AK::FreeHook(this);
  return;
}

