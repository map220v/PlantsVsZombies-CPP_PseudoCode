// Class: DangerRoomPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomPropertySheet::StaticClassInit() */

void DangerRoomPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantFoodSetupData");
    (*pcVar3)(plVar2,asStack_10,FUN_03c93354,3,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"FlagWaveSetupData");
    (*pcVar3)(plVar2,asStack_10,FUN_03c93518,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DangerRoomLevelData");
    (*pcVar3)(plVar2,asStack_10,FUN_03c95864,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DangerRoomRankData");
    (*pcVar3)(plVar2,asStack_10,FUN_03c93bb4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DangerRoomTitleData");
    (*pcVar3)(plVar2,asStack_10,FUN_03c93914,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DangerRoomPropertySheet");
    (*pcVar3)(plVar2,asStack_10,FUN_03c97bdc,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomPropertySheet::StaticGetClass() */

long * DangerRoomPropertySheet::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomPropertySheet::GetClass() const */

long * DangerRoomPropertySheet::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomPropertySheet::CalcZombieLevel(int, int&, int&, float&) const */

void __thiscall
DangerRoomPropertySheet::CalcZombieLevel
          (DangerRoomPropertySheet *this,int param_1,int *param_2,int *param_3,float *param_4)

{
  bool bVar1;
  float *pfVar2;
  int *piVar3;
  float fVar4;
  float local_1c;
  float local_18;
  int local_14 [3];
  long local_8;
  
  local_1c = 10.0;
  local_8 = ___stack_chk_guard;
  local_18 = (float)StringHelper::GetPrecionF
                              (*(float *)(this + 0x174) + *(float *)(this + 0x178) * (float)param_1,
                               1);
  pfVar2 = eastl::min_alt<float>(&local_18,&local_1c);
  fVar4 = *pfVar2;
  local_14[0] = 1;
  local_14[2] = (int)fVar4;
  local_14[1] = 10;
  piVar3 = eastl::max_alt<int>(local_14 + 2,local_14);
  piVar3 = eastl::min_alt<int>(piVar3,local_14 + 1);
  local_14[2] = (int)fVar4;
  *param_2 = *piVar3;
  piVar3 = eastl::max_alt<int>(local_14 + 2,local_14);
  piVar3 = eastl::min_alt<int>(piVar3,local_14 + 1);
  *param_3 = *piVar3;
  bVar1 = local_8 == ___stack_chk_guard;
  *param_4 = fVar4 - (float)*param_2;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomPropertySheet::DangerRoomPropertySheet() */

void __thiscall DangerRoomPropertySheet::DangerRoomPropertySheet(DangerRoomPropertySheet *this)

{
  size_t __n;
  
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_0675b850;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 200));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x110));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x128));
  Set8BytesTo0((string *)(this + 0x148));
  *(undefined4 *)(this + 0x164) = 5;
  *(undefined4 *)(this + 0x184) = 100;
  *(undefined4 *)(this + 0x198) = 100;
  *(undefined4 *)(this + 0x1b4) = 100;
  *(undefined4 *)(this + 0x1b8) = 0x1e;
  *(undefined4 *)(this + 0x158) = 6;
  __n = 0x3ecccccd;
  *(undefined4 *)(this + 0x15c) = 0xf;
  *(undefined4 *)(this + 0x1a0) = 300;
  *(undefined4 *)(this + 0x174) = 0x3f666666;
  *(undefined4 *)(this + 0x1a4) = 300;
  *(undefined4 *)(this + 0x16c) = 3;
  *(undefined4 *)(this + 0x170) = 10;
  *(undefined4 *)(this + 0x17c) = 4;
  *(undefined4 *)(this + 0x178) = 0x3dcccccd;
  *(undefined4 *)(this + 0x180) = 0x32;
  *(undefined4 *)(this + 0x19c) = 10;
  *(undefined4 *)(this + 0x194) = 10000;
  *(undefined4 *)(this + 0x1a8) = 5;
  *(undefined4 *)(this + 0x1bc) = 5;
  *(undefined4 *)(this + 0x18c) = 0x40000000;
  *(undefined4 *)(this + 0x160) = 1;
  *(undefined4 *)(this + 0x168) = 1;
  *(undefined4 *)(this + 0x188) = 0x3ecccccd;
  *(undefined4 *)(this + 400) = 0x3ecccccd;
  *(undefined4 *)(this + 0x1b0) = 0x3f800000;
  *(undefined4 *)(this + 0x1ac) = 0x3e4ccccd;
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x1c0));
  *(undefined4 *)(this + 0x1e8) = 0x50;
  this[0x41] = (DangerRoomPropertySheet)0x4;
  *(undefined2 *)(this + 0x42) = 3;
  *(undefined4 *)(this + 0x48) = 0x14;
  *(undefined4 *)(this + 0x4c) = 10;
  *(undefined4 *)(this + 0x50) = 5;
  this[0x40] = (DangerRoomPropertySheet)0x1;
  this[0x46] = (DangerRoomPropertySheet)0x1;
  this[0x47] = (DangerRoomPropertySheet)0x1;
  std::vector<unsigned_short,std::allocator<unsigned_short>>::clear
            ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x60));
  *(undefined2 *)(this + 0x78) = 1000;
  *(undefined2 *)(this + 0x44) = 1000;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xe0));
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  std::string::append((string *)(this + 0x148),"",__n);
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  return;
}


/* DangerRoomPropertySheet::StaticNew() */

DangerRoomPropertySheet * DangerRoomPropertySheet::StaticNew(void)

{
  DangerRoomPropertySheet *this;
  
  this = ::operator_new(0x1f0);
  DangerRoomPropertySheet(this);
  return this;
}


/* DangerRoomPropertySheet::~DangerRoomPropertySheet() */

void __thiscall DangerRoomPropertySheet::~DangerRoomPropertySheet(DangerRoomPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_0675b850;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x1c0));
  std::string::~string((string *)(this + 0x148));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x128));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x110));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xf8));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xe0));
  std::vector<ZombieLevelStat,std::allocator<ZombieLevelStat>>::~vector
            ((vector<ZombieLevelStat,std::allocator<ZombieLevelStat>> *)(this + 200));
  std::vector<DangerRoomTitleData,std::allocator<DangerRoomTitleData>>::~vector
            ((vector<DangerRoomTitleData,std::allocator<DangerRoomTitleData>> *)(this + 0xb0));
  std::vector<DangerRoomRankData,std::allocator<DangerRoomRankData>>::~vector
            ((vector<DangerRoomRankData,std::allocator<DangerRoomRankData>> *)(this + 0x98));
  std::vector<DangerRoomLevelData,std::allocator<DangerRoomLevelData>>::~vector
            ((vector<DangerRoomLevelData,std::allocator<DangerRoomLevelData>> *)(this + 0x80));
  std::vector<unsigned_short,std::allocator<unsigned_short>>::~vector
            ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x60));
  std::vector<PlantFoodSetupData,std::allocator<PlantFoodSetupData>>::~vector
            ((vector<PlantFoodSetupData,std::allocator<PlantFoodSetupData>> *)(this + 0x28));
  std::vector<FlagWaveSetupData,std::allocator<FlagWaveSetupData>>::~vector
            ((vector<FlagWaveSetupData,std::allocator<FlagWaveSetupData>> *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* DangerRoomPropertySheet::~DangerRoomPropertySheet() */

void __thiscall DangerRoomPropertySheet::~DangerRoomPropertySheet(DangerRoomPropertySheet *this)

{
  ~DangerRoomPropertySheet(this);
  AK::FreeHook(this);
  return;
}


/* DangerRoomPropertySheet::Copy(DangerRoomPropertySheet const&) */

void __thiscall
DangerRoomPropertySheet::Copy(DangerRoomPropertySheet *this,DangerRoomPropertySheet *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  std::vector<DangerRoomLevelData,std::allocator<DangerRoomLevelData>>::operator=
            ((vector<DangerRoomLevelData,std::allocator<DangerRoomLevelData>> *)(this + 0x80),
             (vector *)(param_1 + 0x80));
  std::vector<FlagWaveSetupData,std::allocator<FlagWaveSetupData>>::operator=
            ((vector<FlagWaveSetupData,std::allocator<FlagWaveSetupData>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  std::vector<PlantFoodSetupData,std::allocator<PlantFoodSetupData>>::operator=
            ((vector<PlantFoodSetupData,std::allocator<PlantFoodSetupData>> *)(this + 0x28),
             (vector *)(param_1 + 0x28));
  uVar1 = *(undefined4 *)(param_1 + 0x174);
  uVar2 = *(undefined4 *)(param_1 + 0x158);
  uVar3 = *(undefined4 *)(param_1 + 0x178);
  uVar4 = *(undefined4 *)(param_1 + 0x15c);
  uVar5 = *(undefined4 *)(param_1 + 0x188);
  uVar6 = *(undefined4 *)(param_1 + 0x160);
  uVar7 = *(undefined4 *)(param_1 + 0x18c);
  uVar8 = *(undefined4 *)(param_1 + 0x164);
  uVar9 = *(undefined4 *)(param_1 + 400);
  uVar10 = *(undefined4 *)(param_1 + 0x168);
  uVar11 = *(undefined4 *)(param_1 + 0x16c);
  uVar12 = *(undefined4 *)(param_1 + 0x170);
  uVar13 = *(undefined4 *)(param_1 + 0x17c);
  uVar14 = *(undefined4 *)(param_1 + 0x180);
  uVar15 = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(this + 0x194) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(this + 0x158) = uVar2;
  *(undefined4 *)(this + 0x15c) = uVar4;
  *(undefined4 *)(this + 0x160) = uVar6;
  *(undefined4 *)(this + 0x164) = uVar8;
  *(undefined4 *)(this + 0x168) = uVar10;
  *(undefined4 *)(this + 0x16c) = uVar11;
  *(undefined4 *)(this + 0x170) = uVar12;
  *(undefined4 *)(this + 0x174) = uVar1;
  *(undefined4 *)(this + 0x17c) = uVar13;
  *(undefined4 *)(this + 0x178) = uVar3;
  *(undefined4 *)(this + 0x180) = uVar14;
  *(undefined4 *)(this + 0x184) = uVar15;
  *(undefined4 *)(this + 0x188) = uVar5;
  *(undefined4 *)(this + 0x18c) = uVar7;
  uVar1 = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(this + 400) = uVar9;
  *(undefined4 *)(this + 0x198) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x1ac);
  uVar2 = *(undefined4 *)(param_1 + 0x19c);
  uVar3 = *(undefined4 *)(param_1 + 0x1b0);
  uVar4 = *(undefined4 *)(param_1 + 0x1a0);
  uVar5 = *(undefined4 *)(param_1 + 0x1a4);
  *(undefined4 *)(this + 0x1a8) = *(undefined4 *)(param_1 + 0x1a8);
  *(undefined4 *)(this + 0x19c) = uVar2;
  *(undefined4 *)(this + 0x1a0) = uVar4;
  *(undefined4 *)(this + 0x1a4) = uVar5;
  *(undefined4 *)(this + 0x1ac) = uVar1;
  *(undefined4 *)(this + 0x1b0) = uVar3;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x110),(vector *)(param_1 + 0x110));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0xf8),(vector *)(param_1 + 0xf8));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x128),(vector *)(param_1 + 0x128));
  std::vector<ZombieLevelStat,std::allocator<ZombieLevelStat>>::operator=
            ((vector<ZombieLevelStat,std::allocator<ZombieLevelStat>> *)(this + 200),
             (vector *)(param_1 + 200));
  uVar1 = *(undefined4 *)(param_1 + 0x1b4);
  uVar2 = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined4 *)(this + 0x1bc) = *(undefined4 *)(param_1 + 0x1bc);
  *(undefined4 *)(this + 0x1b4) = uVar1;
  *(undefined4 *)(this + 0x1b8) = uVar2;
  ZombieRestrictionSet::operator=
            ((ZombieRestrictionSet *)(this + 0x1c0),(ZombieRestrictionSet *)(param_1 + 0x1c0));
  *(undefined4 *)(this + 0x1e8) = *(undefined4 *)(param_1 + 0x1e8);
  return;
}

