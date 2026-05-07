// Class: PlantTypeTurkeypult


/* PlantTypeTurkeypult::PlantTypeTurkeypult() */

void __thiscall PlantTypeTurkeypult::PlantTypeTurkeypult(PlantTypeTurkeypult *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_06729b00;
  return;
}


/* PlantTypeTurkeypult::StaticNew() */

PlantTypeTurkeypult * PlantTypeTurkeypult::StaticNew(void)

{
  PlantTypeTurkeypult *this;
  
  this = ::operator_new(0x138);
  PlantTypeTurkeypult(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeTurkeypult::StaticClassInit() */

void PlantTypeTurkeypult::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantTypeTurkeypult");
    (*pcVar2)(plVar1,asStack_10,FUN_03b03ecc,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTypeTurkeypult::StaticGetClass() */

long * PlantTypeTurkeypult::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeTurkeypult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTypeTurkeypult::GetClass() const */

long * PlantTypeTurkeypult::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeTurkeypult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTypeTurkeypult::GetCost(int) const */

ulong __thiscall PlantTypeTurkeypult::GetCost(PlantTypeTurkeypult *this,int param_1)

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
    uVar1 = *(uint *)(extraout_x0 + 0x18) - *(int *)(extraout_x0 + 0x2e4);
    uVar2 = (ulong)uVar1;
    if (param_1 != 2) {
      uVar2 = (ulong)(uVar1 - *(int *)(extraout_x0 + 0x2e8));
    }
  }
  return uVar2;
}


/* PlantTypeTurkeypult::GetCost(PlantAvatarType) const */

int PlantTypeTurkeypult::GetCost(PlantType *param_1)

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
      iVar1 = iVar1 - *(int *)(extraout_x0 + 0x2e4);
      if (iVar2 != 2) {
        iVar1 = iVar1 - *(int *)(extraout_x0 + 0x2e8);
      }
    }
  }
  return iVar1;
}


/* PlantTypeTurkeypult::~PlantTypeTurkeypult() */

void __thiscall PlantTypeTurkeypult::~PlantTypeTurkeypult(PlantTypeTurkeypult *this)

{
  *(undefined ***)this = &PTR_GetClass_06729b00;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeTurkeypult::~PlantTypeTurkeypult() */

void __thiscall PlantTypeTurkeypult::~PlantTypeTurkeypult(PlantTypeTurkeypult *this)

{
  ~PlantTypeTurkeypult(this);
  AK::FreeHook(this);
  return;
}

