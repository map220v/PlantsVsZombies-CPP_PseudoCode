// Class: GravestoneProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GravestoneProperties::StaticClassInit() */

void GravestoneProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"GravestoneForceSpawnData");
    (*pcVar3)(plVar2,asStack_10,FUN_03dd8434,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GravestoneProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_03dd9488,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GravestoneProperties::StaticGetClass() */

long * GravestoneProperties::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"GravestoneProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GravestoneProperties::GetClass() const */

long * GravestoneProperties::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"GravestoneProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GravestoneProperties::GetModuleClass() const */

long * GravestoneProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (GravestoneModule::sClass != (long *)0x0) {
    return GravestoneModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  GravestoneModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"GravestoneModule",uVar2,GravestoneModule::StaticNew);
  GravestoneModule::StaticClassInit();
  return GravestoneModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GravestoneProperties::GetDefaultGravestoneTypeName() const */

void GravestoneProperties::GetDefaultGravestoneTypeName(void)

{
  bool bVar1;
  long in_x0;
  long lVar2;
  string *in_x8;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"gravestone_egypt");
  nop();
  lVar2 = FUN_05474184(in_x0 + 0x40);
  if (lVar2 == 0) {
    Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    StageModule::GetGravestoneDefaultType();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      thunk_FUN_05475e00();
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else {
    thunk_FUN_05475e00();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GravestoneProperties::GetRemainingGravestonesToSpawn(int) const */

void __thiscall
GravestoneProperties::GetRemainingGravestonesToSpawn(GravestoneProperties *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int local_10;
  int local_c;
  long local_8;
  
  iVar2 = *(int *)(this + 0x48);
  local_8 = ___stack_chk_guard;
  if (this[0x4c] != (GravestoneProperties)0x0) {
    local_c = iVar2 - param_1;
    local_10 = 0;
    piVar1 = eastl::max_alt<int>(&local_10,&local_c);
    iVar2 = *piVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


/* GravestoneProperties::GravestoneProperties() */

void __thiscall GravestoneProperties::GravestoneProperties(GravestoneProperties *this)

{
  size_t in_x2;
  
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0677de90;
  Set8BytesTo0((string *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::string::append((string *)(this + 0x40),"",in_x2);
  *(undefined4 *)(this + 0x48) = 0;
  this[0x4c] = (GravestoneProperties)0x0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  return;
}


/* GravestoneProperties::StaticNew() */

GravestoneProperties * GravestoneProperties::StaticNew(void)

{
  GravestoneProperties *this;
  
  this = ::operator_new(0x70);
  GravestoneProperties(this);
  return this;
}


/* GravestoneProperties::~GravestoneProperties() */

void __thiscall GravestoneProperties::~GravestoneProperties(GravestoneProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0677de90;
  std::vector<GravestoneForceSpawnData,std::allocator<GravestoneForceSpawnData>>::~vector
            ((vector<GravestoneForceSpawnData,std::allocator<GravestoneForceSpawnData>> *)
             (this + 0x58));
  std::string::~string((string *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* GravestoneProperties::~GravestoneProperties() */

void __thiscall GravestoneProperties::~GravestoneProperties(GravestoneProperties *this)

{
  ~GravestoneProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GravestoneProperties::GatherResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) const */

void __thiscall
GravestoneProperties::GatherResourceRequirements(GravestoneProperties *this,set *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  string *psVar6;
  GridItemType *pGVar7;
  ulong uVar8;
  undefined8 uVar9;
  string asStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = 0;
  LevelModuleProperties::GatherResourceRequirements((LevelModuleProperties *)this,param_1);
  GetDefaultGravestoneTypeName();
  cVar1 = std::vector<GravestoneForceSpawnData,std::allocator<GravestoneForceSpawnData>>::empty
                    ((vector<GravestoneForceSpawnData,std::allocator<GravestoneForceSpawnData>> *)
                     (this + 0x58));
  if (cVar1 == '\0') {
    uVar8 = 0;
    while( true ) {
      uVar9 = *(undefined8 *)(this + 0x58);
      uVar4 = FUN_03dd8358(uVar9,*(undefined8 *)(this + 0x60));
      if (uVar4 <= uVar8) break;
      uVar9 = FUN_03dd8380(uVar9,uVar8);
      FUN_05475d88(asStack_18,asStack_20);
      lVar5 = FUN_05474184(uVar9);
      if (lVar5 == 0) {
        psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
        ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar6);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
        if (bVar2) goto LAB_03dd99ec;
      }
      else {
        thunk_FUN_05475e00(asStack_18,uVar9);
        psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
        ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar6);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
        if (bVar2) {
LAB_03dd99ec:
          iVar3 = iVar3 + 1;
          pGVar7 = (GridItemType *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          GridItemType::AddResourceRequirements(pGVar7,param_1);
        }
      }
      uVar8 = uVar8 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      std::string::~string(asStack_18);
    }
  }
  if ((0 < *(int *)(this + 0x48)) && (iVar3 = GetRemainingGravestonesToSpawn(this,iVar3), 0 < iVar3)
     ) {
    psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
    ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar6);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
    if (bVar2) {
      pGVar7 = (GridItemType *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
      ;
      GridItemType::AddResourceRequirements(pGVar7,param_1);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

