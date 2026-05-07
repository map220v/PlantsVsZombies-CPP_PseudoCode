// Class: PlantTypeBloomerang


/* PlantTypeBloomerang::PlantTypeBloomerang() */

void __thiscall PlantTypeBloomerang::PlantTypeBloomerang(PlantTypeBloomerang *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_067b0720;
  return;
}


/* PlantTypeBloomerang::StaticNew() */

PlantTypeBloomerang * PlantTypeBloomerang::StaticNew(void)

{
  PlantTypeBloomerang *this;
  
  this = ::operator_new(0x138);
  PlantTypeBloomerang(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeBloomerang::StaticClassInit() */

void PlantTypeBloomerang::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantTypeBloomerang");
    (*pcVar2)(plVar1,asStack_10,FUN_03feb50c,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTypeBloomerang::StaticGetClass() */

long * PlantTypeBloomerang::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeBloomerang",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTypeBloomerang::GetClass() const */

long * PlantTypeBloomerang::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeBloomerang",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTypeBloomerang::GetCost(int, PlantAvatarType) const */

int __thiscall
PlantTypeBloomerang::GetCost(PlantTypeBloomerang *this,int param_1,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = PlayerInfo::GetPlantStarLevel(this_01,(string *)(this + 8),false);
  iVar2 = PlantType::GetCost((PlantType *)this,param_3);
  if (iVar1 != 2) {
    if (2 < iVar1) {
      iVar2 = iVar2 + param_1 * -10;
    }
    if (iVar2 < 0x32) {
      iVar2 = 0x32;
    }
    return iVar2;
  }
  iVar2 = iVar2 + param_1 * -5;
  if (iVar2 < 0x32) {
    iVar2 = 0x32;
  }
  return iVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeBloomerang::GetPlantCount() const */

void __thiscall PlantTypeBloomerang::GetPlantCount(PlantTypeBloomerang *this)

{
  long lVar1;
  undefined8 *puVar2;
  Plant *pPVar3;
  ResourceInfo *pRVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  RtWeakPtr aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  iVar8 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1);
  uVar7 = local_20;
  lVar1 = FUN_03feae14(local_20,local_18);
  if (lVar1 != 0) {
    do {
      puVar2 = (undefined8 *)FUN_03feae20(uVar7,uVar6);
      pPVar3 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar2);
      if (pPVar3 != (Plant *)0x0) {
        Plant::GetType();
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
        ;
        if (pRVar4 == (ResourceInfo *)this) {
          iVar8 = iVar8 + 1;
        }
      }
      uVar7 = local_20;
      uVar6 = uVar6 + 1;
      uVar5 = FUN_03feae14(local_20,local_18);
    } while (uVar6 < uVar5);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar8);
  }
  return;
}


/* PlantTypeBloomerang::GetCost(PlantAvatarType) const */

void __thiscall PlantTypeBloomerang::GetCost(PlantTypeBloomerang *this,undefined4 param_2)

{
  undefined4 uVar1;
  
  PlantType::GetCost();
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    uVar1 = GetPlantCount(this);
    GetCost(this,uVar1,param_2);
    return;
  }
  return;
}


/* PlantTypeBloomerang::~PlantTypeBloomerang() */

void __thiscall PlantTypeBloomerang::~PlantTypeBloomerang(PlantTypeBloomerang *this)

{
  *(undefined ***)this = &PTR_GetClass_067b0720;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeBloomerang::~PlantTypeBloomerang() */

void __thiscall PlantTypeBloomerang::~PlantTypeBloomerang(PlantTypeBloomerang *this)

{
  ~PlantTypeBloomerang(this);
  AK::FreeHook(this);
  return;
}

