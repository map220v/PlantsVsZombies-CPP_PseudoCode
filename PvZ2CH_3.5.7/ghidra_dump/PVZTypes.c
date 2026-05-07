// Class: PVZTypes


/* PVZTypes::~PVZTypes() */

void __thiscall PVZTypes::~PVZTypes(PVZTypes *this)

{
  *(undefined ***)this = &PTR_GetClass_06847c40;
  nop();
  return;
}


/* PVZTypes::~PVZTypes() */

void __thiscall PVZTypes::~PVZTypes(PVZTypes *this)

{
  ~PVZTypes(this);
  AK::FreeHook(this);
  return;
}


/* PVZTypes::PVZTypes() */

void __thiscall PVZTypes::PVZTypes(PVZTypes *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06847c40;
  return;
}


/* PVZTypes::StaticNew() */

PVZTypes * PVZTypes::StaticNew(void)

{
  PVZTypes *this;
  
  this = ::operator_new(8);
  PVZTypes(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZTypes::StaticClassInit() */

void PVZTypes::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZTypes");
    (*pcVar2)(plVar1,asStack_10,FUN_0440967c,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZTypes::StaticGetClass() */

long * PVZTypes::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"PVZTypes",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZTypes::GetClass() const */

long * PVZTypes::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"PVZTypes",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZTypes::VerifyWorldMapAndLevels() */

void PVZTypes::VerifyWorldMapAndLevels(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  WorldDataManager *this;
  ulong uVar5;
  FilesystemSaveGameContext *this_00;
  undefined8 uVar6;
  undefined8 uVar7;
  LevelUtils *this_01;
  string *psVar8;
  ResourceInfo *pRVar9;
  long lVar10;
  ulong uVar11;
  RtId *pRVar12;
  RtObject *this_02;
  LevelModuleProperties *pLVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  bool bVar18;
  code *pcVar19;
  string asStack_28 [8];
  RtMixedPtrBase aRStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar17 = 0;
  Sexy::OutputDebugStrF((wchar_t *)"---------- Verifying WorldMapList...\n");
  bVar18 = false;
  lVar3 = WorldMapUtils::GetWorldMapList();
  lVar4 = FUN_04408db4(*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
  if (lVar4 != 0) {
    do {
      this = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
      lVar4 = WorldDataManager::FindWorldDataByIndexInMapList(this,(int)uVar17);
      if (lVar4 != 0) {
        uVar16 = *(undefined8 *)(lVar4 + 0x20);
        uVar15 = 0;
        uVar5 = FUN_04408dd4(uVar16,*(undefined8 *)(lVar4 + 0x28));
        if (uVar5 != 0) {
          do {
            this_00 = (FilesystemSaveGameContext *)FUN_04408df4(uVar16,uVar15);
            iVar2 = FUN_04408d4c(*(undefined4 *)(this_00 + 0x14));
            if (iVar2 == 1) {
              uVar16 = Sexy::FilesystemSaveGameContext::GetBuffer(this_00);
              FUN_05475d88(asStack_28,uVar16);
              uVar16 = std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_rightmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this_00);
              uVar6 = FUN_0547429c();
              uVar7 = FUN_0547429c(asStack_28);
              Sexy::OutputDebugStrF
                        ((wchar_t *)"Verifying Map Event (name: %s) hook to Level: %s...\n",uVar6,
                         uVar7);
              this_01 = (LevelUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
              cVar1 = LevelUtils::DoesLevelExist(this_01,asStack_28);
              if (cVar1 == '\0') {
                uVar16 = FUN_0547429c(uVar16);
                uVar6 = FUN_0547429c(asStack_28);
                Sexy::OutputDebugStrF
                          ((wchar_t *)
                           "  ERROR: Map Event (name: %s) is of type \'level\' but does not reference a valid level! Level name: %s\n"
                           ,uVar16,uVar6);
LAB_04409318:
                bVar18 = true;
              }
              else {
                psVar8 = (string *)Sexy::LazySingleton<LevelUtils>::GetInstance();
                LevelUtils::LoadLevelDefinition(psVar8,SUB81(asStack_28,0));
                cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
                if (cVar1 == '\0') {
                  uVar16 = FUN_0547429c(uVar16);
                  uVar6 = FUN_0547429c(asStack_28);
                  Sexy::OutputDebugStrF
                            ((wchar_t *)
                             "  ERROR: Map Event (name: %s) failed to properly load level with name \'%s\'!\n"
                             ,uVar16,uVar6);
LAB_04409398:
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
                  goto LAB_04409318;
                }
                pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
                lVar10 = FUN_04408da0(*(undefined8 *)(pRVar9 + 0x178),
                                      *(undefined8 *)(pRVar9 + 0x180));
                if (lVar10 == 0) {
                  Sexy::RtMixedPtrBase::GetId();
                  cVar1 = Sexy::CompiledMap::Initialized((CompiledMap *)asStack_10);
                  Sexy::RtId::~RtId((RtId *)asStack_10);
                  if (cVar1 == '\0') {
                    uVar16 = FUN_0547429c(asStack_28);
                    Sexy::OutputDebugStrF
                              ((wchar_t *)"  ERROR: Level (name: %s) doesn\'t have a StageModule!\n"
                               ,uVar16);
                  }
                  else {
                    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(pRVar9 + 0x68));
                    if (cVar1 == '\0') {
                      uVar16 = FUN_0547429c(asStack_28);
                      Sexy::OutputDebugStrF
                                ((wchar_t *)
                                 "  ERROR: Level (name: %s) has a StageModule specified, but it\'s not valid!\n"
                                 ,uVar16);
                    }
                    else {
                      plVar14 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                  ((RtWeakPtr<Sexy::ResourceInfo> *)(pRVar9 + 0x68))
                      ;
                      pcVar19 = *(code **)(*plVar14 + 0x20);
                      uVar16 = StageModuleProperties::StaticGetClass();
                      cVar1 = (*pcVar19)(plVar14,uVar16);
                      if (cVar1 != '\0') goto LAB_044093c0;
                      uVar16 = FUN_0547429c(asStack_28);
                      lVar10 = (**(code **)*plVar14)(plVar14);
                      uVar6 = FUN_04408d40(*(undefined8 *)(lVar10 + 8));
                      Sexy::OutputDebugStrF
                                ((wchar_t *)
                                 "  ERROR: Level (name: %s) has a StageModule specified, but it\'s not of class StageModuleProperties! Instead, it is a \'%s\'\n"
                                 ,uVar16,uVar6);
                    }
                  }
                  goto LAB_04409398;
                }
LAB_044093c0:
                uVar5 = 0;
                while( true ) {
                  uVar16 = *(undefined8 *)(pRVar9 + 0x88);
                  uVar11 = FUN_04408d7c(uVar16,*(undefined8 *)(pRVar9 + 0x90));
                  if (uVar11 <= uVar5) break;
                  pRVar12 = (RtId *)FUN_04408e00(uVar16,uVar5);
                  Sexy::RtId::RtId(aRStack_18,pRVar12);
                  cVar1 = Sexy::CompiledMap::Initialized((CompiledMap *)aRStack_18);
                  if (cVar1 == '\0') {
                    bVar18 = true;
                    uVar16 = FUN_0547429c(asStack_28);
                    Sexy::OutputDebugStrF
                              ((wchar_t *)
                               "  ERROR: Level (name: %s) has an empty entry in its Modules list (index %d)!\n"
                               ,uVar16,uVar5 & 0xffffffff);
                  }
                  else {
                    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,
                               (RtWeakPtrBase *)aRStack_18);
                    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_10);
                    if (cVar1 == '\0') {
                      bVar18 = true;
                      uVar16 = FUN_0547429c(asStack_28);
                      Sexy::OutputDebugStrF
                                ((wchar_t *)
                                 "  ERROR: Level (name: %s) has an invalid entry in its Modules list (index %d)!\n"
                                 ,uVar16,uVar5 & 0xffffffff);
                    }
                    else {
                      this_02 = (RtObject *)
                                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
                      if ((this_02 == (RtObject *)0x0) ||
                         (pLVar13 = Sexy::RtObject::Cast<LevelModuleProperties>(this_02),
                         pLVar13 == (LevelModuleProperties *)0x0)) {
                        bVar18 = true;
                        uVar16 = FUN_0547429c(asStack_28);
                        lVar10 = (*(code *)**(undefined8 **)this_02)(this_02);
                        uVar6 = FUN_04408d40(*(undefined8 *)(lVar10 + 8));
                        Sexy::OutputDebugStrF
                                  ((wchar_t *)
                                   "  ERROR: Level (name: %s) has an entry in its Modules list (index %d) that does not derive from LevelModuleProperties! Instead, it is a \'%s\'\n"
                                   ,uVar16,uVar5 & 0xffffffff,uVar6);
                      }
                      else {
                        plVar14 = (long *)(**(code **)(*(long *)pLVar13 + 0x80))();
                        if (plVar14 != (long *)0x0) {
                          pcVar19 = *(code **)(*plVar14 + 0x48);
                          uVar16 = LevelModule::StaticGetClass();
                          cVar1 = (*pcVar19)(plVar14,uVar16);
                          if (cVar1 != '\0') goto LAB_04409494;
                        }
                        bVar18 = true;
                        uVar16 = FUN_0547429c(asStack_28);
                        lVar10 = (*(code *)**(undefined8 **)pLVar13)(pLVar13);
                        uVar6 = FUN_04408d40(*(undefined8 *)(lVar10 + 8));
                        Sexy::OutputDebugStrF
                                  ((wchar_t *)
                                   "  ERROR: Level (name: %s) includes a LevelModuleProperties object (index: %d, class: %s) that DOES NOT specify a valid LevelModule class in GetModuleClass(). Tell a programmer!\n"
                                   ,uVar16,uVar5 & 0xffffffff,uVar6);
                      }
                    }
LAB_04409494:
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
                  }
                  uVar5 = uVar5 + 1;
                  Sexy::RtId::~RtId(aRStack_18);
                }
                Sexy::OutputDebugStrF((wchar_t *)"... done\n");
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
              }
              std::string::~string(asStack_28);
              uVar16 = *(undefined8 *)(lVar4 + 0x20);
              uVar5 = FUN_04408dd4(uVar16,*(undefined8 *)(lVar4 + 0x28));
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar5);
        }
      }
      uVar17 = uVar17 + 1;
      uVar5 = FUN_04408db4(*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
    } while (uVar17 < uVar5);
  }
  std::string::string(asStack_10,"WorldMapEvents");
  printVerificationMessage(asStack_10,bVar18);
  std::string::~string(asStack_10);
  nop();
  Sexy::LazySingleton<LevelUtils>::GetInstance();
  LevelUtils::UnloadLevelDefinition();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar18 ^ 1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZTypes::VerifyProjectileTypes() */

void PVZTypes::VerifyProjectileTypes(void)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  int extraout_w1;
  code *pcVar7;
  uint uVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  Iterator aIStack_58 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar8 = 0;
  Sexy::OutputDebugStrF((wchar_t *)"---------- Verifying contents of ProjectileTypes package...\n");
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_58,uVar3,0xc);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_58), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_58);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_70,(RtWeakPtrBase *)aRStack_60);
    Sexy::RtId::~RtId(aRStack_60);
    Set8BytesTo0(asStack_68);
    Sexy::RtMixedPtrBase::GetId();
    Sexy::RtId::ToString(aRStack_60,asStack_68,false);
    Sexy::RtId::~RtId(aRStack_60);
    puVar4 = (undefined8 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    plVar5 = (long *)(**(code **)*puVar4)();
    pcVar7 = *(code **)(*plVar5 + 0x48);
    uVar3 = ProjectilePropertySheet::StaticGetClass();
    cVar2 = (*pcVar7)(plVar5,uVar3);
    if (cVar2 == '\0') {
      uVar8 = 1;
      uVar3 = FUN_04408d40(plVar5[1]);
      uVar6 = FUN_0547429c(asStack_68);
      Sexy::OutputDebugStrF
                ((wchar_t *)
                 "Warning: Non-ProjectilePropertySheet object in table (type: %s, RTID: %s)!\n",
                 uVar3,uVar6);
    }
    std::string::~string(asStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    Sexy::RtDbTable::Iterator::operator++(aIStack_58,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_58);
  std::string::string((string *)aIStack_58,"ProjectileTypes");
  printVerificationMessage((string *)aIStack_58,false);
  std::string::~string((string *)aIStack_58);
  nop();
  std::
  map<std::string,Sexy::RtWeakPtr<ProjectilePropertySheet>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<ProjectilePropertySheet>>>>
  ::~map((map<std::string,Sexy::RtWeakPtr<ProjectilePropertySheet>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<ProjectilePropertySheet>>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8 ^ 1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZTypes::VerifyPlantTypes() */

void PVZTypes::VerifyPlantTypes(void)

{
  Sexy *this;
  ResourceInfo *pRVar1;
  int iVar2;
  LawnApp *pLVar3;
  bool bVar4;
  char cVar5;
  ResourceInfo RVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  ResourceInfo *pRVar12;
  long lVar13;
  undefined8 uVar14;
  RtWeakPtr<PowerPropertySheet> *this_00;
  char *pcVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  string *psVar19;
  RtWeakPtrBase *pRVar20;
  int extraout_w1;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  code *pcVar21;
  ResourceInfo RVar22;
  ResourceInfo RVar23;
  byte bVar24;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b0 [8];
  string asStack_a8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  undefined8 local_98;
  RtWeakPtr<Sexy::SoundResource> aRStack_90 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  RtMixedPtrBase aRStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  string asStack_68 [8];
  undefined8 local_60;
  Iterator aIStack_58 [32];
  string asStack_38 [48];
  long local_8;
  
  RVar23 = (ResourceInfo)0x0;
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"---------- Verifying contents of PlantTypes package...\n");
  pLVar3 = gLawnApp;
  std::string::string(asStack_38,"UI_HeadShot_BigPlant");
  LawnApp::LoadGroup(pLVar3,asStack_38);
  std::string::~string(asStack_38);
  nop();
  pLVar3 = gLawnApp;
  std::string::string(asStack_38,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar3,asStack_38);
  std::string::~string(asStack_38);
  nop();
  pLVar3 = gLawnApp;
  std::string::string(asStack_38,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar3,asStack_38);
  std::string::~string(asStack_38);
  nop();
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)asStack_38);
  uVar9 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_58,uVar9,6);
  do {
    bVar4 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_58);
    if (!bVar4) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_58);
      std::string::string((string *)aIStack_58,"PlantTypes");
      printVerificationMessage((string *)aIStack_58,(bool)RVar23);
      std::string::~string((string *)aIStack_58);
      nop();
      pLVar3 = gLawnApp;
      std::string::string((string *)aIStack_58,"UI_HeadShot_BigPlant");
      LawnApp::DeleteGroup(pLVar3,(string *)aIStack_58);
      std::string::~string((string *)aIStack_58);
      nop();
      pLVar3 = gLawnApp;
      std::string::string((string *)aIStack_58,"UI_Fragment_Pieces");
      LawnApp::DeleteGroup(pLVar3,(string *)aIStack_58);
      std::string::~string((string *)aIStack_58);
      nop();
      pLVar3 = gLawnApp;
      std::string::string((string *)aIStack_58,"UI_Fragment_Avatar");
      LawnApp::DeleteGroup(pLVar3,(string *)aIStack_58);
      std::string::~string((string *)aIStack_58);
      nop();
      std::
      map<std::string,Sexy::RtWeakPtr<PlantType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PlantType_const>>>>
      ::~map((map<std::string,Sexy::RtWeakPtr<PlantType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PlantType_const>>>>
              *)asStack_38);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail((byte)RVar23 ^ 1);
      }
      return;
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_58);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_b0,(RtWeakPtrBase *)&local_60);
    Sexy::RtId::~RtId((RtId *)&local_60);
    puVar10 = (undefined8 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
    plVar11 = (long *)(**(code **)*puVar10)();
    Set8BytesTo0(asStack_a8);
    Sexy::RtMixedPtrBase::GetId();
    Sexy::RtId::ToString((RtId *)&local_60,asStack_a8,false);
    Sexy::RtId::~RtId((RtId *)&local_60);
    pcVar21 = *(code **)(*plVar11 + 0x48);
    uVar9 = PlantType::StaticGetClass();
    cVar5 = (*pcVar21)(plVar11,uVar9);
    if (cVar5 == '\0') {
      RVar23 = (ResourceInfo)0x1;
      uVar9 = FUN_04408d40(plVar11[1]);
      uVar14 = FUN_0547429c(asStack_a8);
      Sexy::OutputDebugStrF
                ((wchar_t *)"Warning: Non-PlantType object in table (type: %s, RTID: %s)!\n",uVar9,
                 uVar14);
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aRStack_b0);
      pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_a0);
      this = (Sexy *)(pRVar12 + 8);
      lVar13 = FUN_05474184();
      if (lVar13 == 0) {
        uVar9 = FUN_0547429c(asStack_a8);
        Sexy::OutputDebugStrF((wchar_t *)"ERROR: Empty TypeName on PlantType object %s!\n",uVar9);
        RVar23 = (ResourceInfo)0x1;
      }
      else {
        local_98 = std::
                   map<std::string,Sexy::RtWeakPtr<PlantType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PlantType_const>>>>
                   ::find((map<std::string,Sexy::RtWeakPtr<PlantType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PlantType_const>>>>
                           *)asStack_38,(string *)this);
        local_60 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)asStack_38);
        bVar4 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_60);
        if (bVar4) {
          lVar13 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                             ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_98);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_70,(RtWeakPtrBase *)(lVar13 + 8));
          Set8BytesTo0(asStack_68);
          Sexy::RtMixedPtrBase::GetId();
          Sexy::RtId::ToString((RtId *)&local_60,asStack_68,false);
          Sexy::RtId::~RtId((RtId *)&local_60);
          uVar9 = FUN_0547429c(asStack_68);
          uVar14 = FUN_0547429c(asStack_a8);
          Sexy::OutputDebugStrF
                    ((wchar_t *)
                     "ERROR: Duplicate TypeName on PlantType object (First RTID: %s, Duplicate RTID: %s)!\n"
                     ,uVar9,uVar14);
          std::string::~string(asStack_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
          RVar23 = (ResourceInfo)0x1;
        }
        else {
          this_00 = (RtWeakPtr<PowerPropertySheet> *)
                    std::
                    map<std::string,Sexy::RtWeakPtr<PlantType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PlantType_const>>>>
                    ::operator[]((map<std::string,Sexy::RtWeakPtr<PlantType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PlantType_const>>>>
                                  *)asStack_38,(string *)this);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_a0);
          uVar9 = FUN_0547429c(this);
          uVar14 = FUN_0547429c(asStack_a8);
          Sexy::OutputDebugStrF((wchar_t *)"Verifying PlantType \'%s\' %s... ",uVar9,uVar14);
          if (pRVar12[0x30] == (ResourceInfo)0x0) {
            uVar9 = FUN_0547429c(this);
            Sexy::OutputDebugStrF((wchar_t *)"\n Plant %s is not enabled in game!\n",uVar9);
          }
          else {
            pRVar1 = pRVar12 + 0x10;
            lVar13 = FUN_05474184(pRVar1);
            if (lVar13 == 0) {
              bVar24 = 1;
              Sexy::OutputDebugStrF((wchar_t *)"\n ERROR: Empty PlantFramework field!\n");
              pcVar15 = (char *)FUN_0547429c(pRVar1);
              plVar11 = (long *)Sexy::RtClass::StaticGetClassNamed(pcVar15);
              if (plVar11 != (long *)0x0) goto LAB_0440a474;
LAB_0440a9b8:
              bVar24 = 1;
              uVar9 = FUN_0547429c(pRVar1);
              Sexy::OutputDebugStrF
                        ((wchar_t *)"\n ERROR: PlantFramework class \'%s\' does not exist!\n",uVar9)
              ;
            }
            else {
              pcVar15 = (char *)FUN_0547429c(pRVar1);
              plVar11 = (long *)Sexy::RtClass::StaticGetClassNamed(pcVar15);
              bVar24 = 0;
              if (plVar11 == (long *)0x0) goto LAB_0440a9b8;
LAB_0440a474:
              pcVar21 = *(code **)(*plVar11 + 0x48);
              uVar9 = PlantFramework::StaticGetClass();
              cVar5 = (*pcVar21)(plVar11,uVar9);
              if (cVar5 == '\0') {
                bVar24 = 1;
                uVar9 = FUN_0547429c(pRVar1);
                Sexy::OutputDebugStrF
                          ((wchar_t *)
                           "\n ERROR: PlantFramework class \'%s\' is valid but does not derive from PlantFramework!\n"
                           ,uVar9);
              }
            }
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      (aRStack_90,(RtWeakPtrBase *)(pRVar12 + 0x28));
            Sexy::RtMixedPtrBase::GetId();
            lVar13 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
            Sexy::RtId::~RtId((RtId *)&local_60);
            if (lVar13 == 0) {
              bVar24 = 1;
              Sexy::OutputDebugStrF((wchar_t *)"\n ERROR: No PlantPropertySheet specified!\n");
            }
            cVar5 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_90);
            if (cVar5 == '\0') {
              Set8BytesTo0(asStack_68);
              Sexy::RtMixedPtrBase::GetId();
              Sexy::RtId::ToString((RtId *)&local_60,asStack_68,false);
              Sexy::RtId::~RtId((RtId *)&local_60);
              uVar9 = FUN_0547429c(asStack_68);
              Sexy::OutputDebugStrF((wchar_t *)"\n ERROR: Properties value %s is invalid!\n",uVar9);
              std::string::~string(asStack_68);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
            }
            else {
              lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
              if ((*(int *)(lVar13 + 0x28) == 0) ||
                 (lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90),
                 *(int *)(lVar13 + 0x2c) == 0)) {
                bVar24 = 1;
                Set8BytesTo0(asStack_68);
                Sexy::RtMixedPtrBase::GetId();
                Sexy::RtId::ToString((RtId *)&local_60,asStack_68,false);
                Sexy::RtId::~RtId((RtId *)&local_60);
                uVar9 = FUN_0547429c(asStack_68);
                Sexy::OutputDebugStrF
                          ((wchar_t *)
                           "\n ERROR: Properties value %s for MinLevel or MaxLevel is invalid!\n",
                           uVar9);
                std::string::~string(asStack_68);
              }
              lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
              uVar16 = FUN_04408d8c(*(undefined8 *)(lVar13 + 0x208),*(undefined8 *)(lVar13 + 0x210))
              ;
              lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
              if (uVar16 < (ulong)(long)*(int *)(lVar13 + 0x2c)) {
                bVar24 = 1;
                Set8BytesTo0(asStack_68);
                Sexy::RtMixedPtrBase::GetId();
                Sexy::RtId::ToString((RtId *)&local_60,asStack_68,false);
                Sexy::RtId::~RtId((RtId *)&local_60);
                uVar9 = FUN_0547429c(asStack_68);
                Sexy::OutputDebugStrF
                          ((wchar_t *)
                           "\n ERROR: Properties value %s for PlantLevelStats has something wrong on config!\n"
                           ,uVar9);
                std::string::~string(asStack_68);
              }
              lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
              lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
              uVar8 = FUN_04408d8c(*(undefined8 *)(lVar17 + 0x208),*(undefined8 *)(lVar17 + 0x210));
              local_60 = CONCAT44(local_60._4_4_,uVar8);
              piVar18 = eastl::min_alt<int>((int *)(lVar13 + 0x2c),(int *)&local_60);
              iVar2 = *piVar18;
              psVar19 = extraout_x1;
              if (0 < iVar2) {
                lVar13 = 0;
                do {
                  lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
                  lVar17 = FUN_04408d98(*(undefined8 *)(lVar17 + 0x208),lVar13);
                  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                            ((RtWeakPtr<Sexy::SoundResource> *)&local_78,
                             (RtWeakPtrBase *)(lVar17 + 8));
                  lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
                  lVar17 = FUN_04408d98(*(undefined8 *)(lVar17 + 0x208),lVar13);
                  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                            ((RtWeakPtr<Sexy::SoundResource> *)&local_70,
                             (RtWeakPtrBase *)(lVar17 + 0x10));
                  Sexy::RtMixedPtrBase::GetId();
                  lVar17 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
                  Sexy::RtId::~RtId((RtId *)&local_60);
                  if ((lVar17 != 0) &&
                     (cVar5 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_78),
                     cVar5 == '\0')) {
                    Set8BytesTo0(asStack_68);
LAB_0440ade4:
                    Sexy::RtMixedPtrBase::GetId();
                    Sexy::RtId::ToString((RtId *)&local_60,asStack_68,false);
                    Sexy::RtId::~RtId((RtId *)&local_60);
                    uVar9 = FUN_0547429c(asStack_68);
                    Sexy::OutputDebugStrF
                              ((wchar_t *)
                               "\n ERROR: Properties value %s is not configured in SkillTypes.json!\n"
                               ,uVar9);
                    std::string::~string(asStack_68);
                    bVar24 = 1;
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
                    psVar19 = extraout_x1_01;
                    break;
                  }
                  Sexy::RtMixedPtrBase::GetId();
                  lVar17 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
                  Sexy::RtId::~RtId((RtId *)&local_60);
                  if ((lVar17 != 0) &&
                     (cVar5 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_70),
                     cVar5 == '\0')) {
                    Set8BytesTo0(asStack_68);
                    goto LAB_0440ade4;
                  }
                  lVar13 = lVar13 + 1;
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
                  psVar19 = extraout_x1_00;
                } while ((int)lVar13 < iVar2);
              }
              if (pRVar12[0x31] != (ResourceInfo)0x0) {
                bVar4 = false;
                Magento::GetPlantLevelUp((Magento *)aRStack_88);
                lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
                local_78 = std::
                           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                    *)(lVar13 + 0x60));
                local_70 = std::
                           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                  *)(lVar13 + 0x60));
                while (bVar7 = __gnu_cxx::operator!=
                                         ((__normal_iterator *)&local_78,
                                          (__normal_iterator *)&local_70), bVar7) {
                  pRVar20 = (RtWeakPtrBase *)
                            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
                  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_80,pRVar20);
                  Set8BytesTo0(asStack_68);
                  Sexy::RtMixedPtrBase::GetId();
                  Sexy::RtId::ToString((RtId *)&local_60,asStack_68,false);
                  Sexy::RtId::~RtId((RtId *)&local_60);
                  lVar13 = FUN_05474368(asStack_68,this,0);
                  if (lVar13 == -1) {
                    std::string::~string(asStack_68);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
                  }
                  else {
                    cVar5 = Sexy::RtMixedPtrBase::IsValid(aRStack_80);
                    if (cVar5 == '\0') {
                      bVar24 = 1;
                      uVar9 = FUN_0547429c(this);
                      Sexy::OutputDebugStrF
                                ((wchar_t *)
                                 "\n ERROR: Plant %s does not have config for DETAILED level up in magento!\n"
                                 ,uVar9);
                      std::string::~string(asStack_68);
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
                      goto LAB_0440ae5c;
                    }
                    bVar4 = true;
                    std::string::~string(asStack_68);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
                  }
                  eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                            ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
                }
                if (!bVar4) {
                  bVar24 = 1;
                  uVar9 = FUN_0547429c(this);
                  Sexy::OutputDebugStrF
                            ((wchar_t *)
                             "\n ERROR: Plant %s does not have config for level up in magento!\n",
                             uVar9);
                }
LAB_0440ae5c:
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
                psVar19 = extraout_x1_02;
              }
              if (pRVar12[0x32] != (ResourceInfo)0x0) {
                bVar4 = false;
                Magento::GetPlantPieceProductsData((Magento *)0x1,SUB81(psVar19,0));
                lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
                local_78 = std::
                           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                    *)(lVar13 + 0x60));
                local_70 = std::
                           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                  *)(lVar13 + 0x60));
                while (bVar7 = __gnu_cxx::operator!=
                                         ((__normal_iterator *)&local_78,
                                          (__normal_iterator *)&local_70), bVar7) {
                  pRVar20 = (RtWeakPtrBase *)
                            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
                  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_80,pRVar20);
                  Set8BytesTo0(asStack_68);
                  Sexy::RtMixedPtrBase::GetId();
                  Sexy::RtId::ToString((RtId *)&local_60,asStack_68,false);
                  Sexy::RtId::~RtId((RtId *)&local_60);
                  lVar13 = FUN_05474368(asStack_68,this,0);
                  if (lVar13 == -1) {
                    std::string::~string(asStack_68);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
                  }
                  else {
                    cVar5 = Sexy::RtMixedPtrBase::IsValid(aRStack_80);
                    if (cVar5 == '\0') {
                      bVar24 = 1;
                      uVar9 = FUN_0547429c(this);
                      Sexy::OutputDebugStrF
                                ((wchar_t *)
                                 "\n ERROR: Plant %s does not have config for DETAILED avatar in magento!\n"
                                 ,uVar9);
                      std::string::~string(asStack_68);
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
                      goto LAB_0440ae70;
                    }
                    bVar4 = true;
                    std::string::~string(asStack_68);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
                  }
                  eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                            ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
                }
                if (!bVar4) {
                  bVar24 = 1;
                  uVar9 = FUN_0547429c(this);
                  Sexy::OutputDebugStrF
                            ((wchar_t *)
                             "\n ERROR: Plant %s does not have config for avatar in magento!\n",
                             uVar9);
                }
LAB_0440ae70:
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
                psVar19 = extraout_x1_03;
              }
              Sexy::StringToUpper(this,psVar19);
              std::operator+((string *)&PlantHeadshot::PlantBigPrefix,asStack_68);
              lVar13 = StringHelper::ToImage((string *)&local_60,false);
              std::string::~string((string *)&local_60);
              std::string::~string(asStack_68);
              if (lVar13 == 0) {
                bVar24 = 1;
                uVar9 = FUN_0547429c(this);
                Sexy::OutputDebugStrF
                          ((wchar_t *)
                           "\n ERROR: Plant %s does not have image in UI_HeadShot_BigPlant!\n",uVar9
                          );
              }
              if (pRVar12[0x31] != (ResourceInfo)0x0) {
                cVar5 = FUN_0547419c((string *)(pRVar12 + 0x40));
                if (cVar5 == '\0') {
                  lVar13 = StringHelper::ToImage((string *)(pRVar12 + 0x40),false);
                  if (lVar13 == 0) {
                    bVar24 = 1;
                    uVar9 = FUN_0547429c(this);
                    Sexy::OutputDebugStrF
                              ((wchar_t *)
                               "\n ERROR: Plant %s does not have plant piece image in PlantTypes.json!\n"
                               ,uVar9);
                  }
                }
                else {
                  bVar24 = 1;
                  uVar9 = FUN_0547429c(this);
                  Sexy::OutputDebugStrF
                            ((wchar_t *)
                             "\n ERROR: Plant %s does not have config for plant piece image in PlantTypes.json!\n"
                             ,uVar9);
                }
                FUN_05475d88((string *)&local_70,this);
                FUN_031f5e7c(asStack_68,"plant_piece_",(string *)&local_70);
                psVar19 = (string *)
                          Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr
                                    ();
                ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar19);
                cVar5 = Sexy::RtMixedPtr<Sexy::Image>::operator!
                                  ((RtMixedPtr<Sexy::Image> *)&local_60);
                if (cVar5 == '\0') {
                  lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
                  cVar5 = FUN_0547419c(lVar13 + 0x60);
                  if (cVar5 == '\0') {
                    lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
                    lVar13 = StringHelper::ToImage((string *)(lVar13 + 0x60),false);
                    if (lVar13 == 0) {
                      bVar24 = 1;
                      uVar9 = FUN_0547429c(this);
                      Sexy::OutputDebugStrF
                                ((wchar_t *)
                                 "\n ERROR: Plant %s does not have Piece StandaloneImage in CollectableType.json!\n"
                                 ,uVar9);
                    }
                  }
                  else {
                    bVar24 = 1;
                    uVar9 = FUN_0547429c(this);
                    Sexy::OutputDebugStrF
                              ((wchar_t *)
                               "\n ERROR: Plant %s does not have StandaloneImage in CollectableType.json!\n"
                               ,uVar9);
                  }
                }
                else {
                  bVar24 = 1;
                  uVar9 = FUN_0547429c(this);
                  Sexy::OutputDebugStrF
                            ((wchar_t *)
                             "\n ERROR: Plant %s does not have config for plant piece in CollectableTypes.json!\n"
                             ,uVar9);
                }
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
                std::string::~string(asStack_68);
                std::string::~string((string *)&local_70);
              }
              RVar22 = pRVar12[0x32];
              if (RVar22 == (ResourceInfo)0x0) {
                RVar22 = (ResourceInfo)(bVar24 | (byte)RVar23);
              }
              else {
                cVar5 = FUN_0547419c((string *)(pRVar12 + 0x48));
                if (cVar5 == '\0') {
                  lVar13 = StringHelper::ToImage((string *)(pRVar12 + 0x48),false);
                  if (lVar13 == 0) {
                    bVar24 = 1;
                    uVar9 = FUN_0547429c(this);
                    Sexy::OutputDebugStrF
                              ((wchar_t *)
                               "\n ERROR: Plant %s does not have avatar piece image in PlantTypes.json!\n"
                               ,uVar9);
                  }
                }
                else {
                  bVar24 = 1;
                  uVar9 = FUN_0547429c(this);
                  Sexy::OutputDebugStrF
                            ((wchar_t *)
                             "\n ERROR: Plant %s does not have config for avatar piece image in PlantTypes.json!\n"
                             ,uVar9);
                }
                FUN_05475d88((string *)&local_70,this);
                FUN_031f5e7c(asStack_68,"avatar_piece_",(string *)&local_70);
                psVar19 = (string *)
                          Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr
                                    ();
                ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar19);
                RVar6 = (ResourceInfo)
                        Sexy::RtMixedPtr<Sexy::Image>::operator!
                                  ((RtMixedPtr<Sexy::Image> *)&local_60);
                if (RVar6 == (ResourceInfo)0x0) {
                  lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
                  RVar6 = (ResourceInfo)FUN_0547419c(lVar13 + 0x60);
                  if (RVar6 == (ResourceInfo)0x0) {
                    lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
                    lVar13 = StringHelper::ToImage((string *)(lVar13 + 0x60),false);
                    if (lVar13 == 0) {
                      bVar24 = 1;
                      uVar9 = FUN_0547429c(this);
                      Sexy::OutputDebugStrF
                                ((wchar_t *)
                                 "\n ERROR: Plant %s does not have Avatar StandaloneImage in CollectableType.json!\n"
                                 ,uVar9);
                    }
                    else {
                      RVar22 = (ResourceInfo)(bVar24 | (byte)RVar23);
                    }
                  }
                  else {
                    bVar24 = 1;
                    uVar9 = FUN_0547429c(this);
                    Sexy::OutputDebugStrF
                              ((wchar_t *)
                               "\n ERROR: Plant %s does not have StandaloneImage in CollectableType.json!\n"
                               ,uVar9);
                    RVar22 = RVar6;
                  }
                }
                else {
                  bVar24 = 1;
                  uVar9 = FUN_0547429c(this);
                  Sexy::OutputDebugStrF
                            ((wchar_t *)
                             "\n ERROR: Plant %s does not have config for avatar piece in CollectableTypes.json!\n"
                             ,uVar9);
                  RVar22 = RVar6;
                }
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
                std::string::~string(asStack_68);
                std::string::~string((string *)&local_70);
              }
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
              RVar23 = RVar22;
              if (bVar24 == 0) {
                Sexy::OutputDebugStrF((wchar_t *)"\n OK!\n");
              }
            }
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
    }
    std::string::~string(asStack_a8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
    Sexy::RtDbTable::Iterator::operator++(aIStack_58,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZTypes::VerifyZombieTypes() */

void PVZTypes::VerifyZombieTypes(void)

{
  ResourceInfo *pRVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  ResourceInfo *this;
  long lVar7;
  undefined8 uVar8;
  RtWeakPtr<PowerPropertySheet> *this_00;
  char *pcVar9;
  ulong uVar10;
  string *psVar11;
  int extraout_w1;
  code *pcVar12;
  ulong uVar13;
  bool bVar14;
  undefined8 local_98;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  string asStack_88 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_80 [8];
  undefined8 local_78;
  RtWeakPtr<Sexy::SoundResource> aRStack_70 [8];
  string asStack_68 [8];
  undefined8 local_60;
  Iterator aIStack_58 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar14 = false;
  Sexy::OutputDebugStrF((wchar_t *)"---------- Verifying contents of ZombieTypes package...\n");
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_58,uVar4,9);
  while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_58), bVar2) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_58);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_90,(RtWeakPtrBase *)&local_60);
    Sexy::RtId::~RtId((RtId *)&local_60);
    puVar5 = (undefined8 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
    plVar6 = (long *)(**(code **)*puVar5)();
    Set8BytesTo0(asStack_88);
    Sexy::RtMixedPtrBase::GetId();
    Sexy::RtId::ToString((RtId *)&local_60,asStack_88,false);
    Sexy::RtId::~RtId((RtId *)&local_60);
    pcVar12 = *(code **)(*plVar6 + 0x48);
    uVar4 = ZombieType::StaticGetClass();
    cVar3 = (*pcVar12)(plVar6,uVar4);
    if (cVar3 == '\0') {
      bVar14 = true;
      uVar4 = FUN_04408d40(plVar6[1]);
      uVar8 = FUN_0547429c(asStack_88);
      Sexy::OutputDebugStrF
                ((wchar_t *)"Warning: Non-ZombieType object in table (type: %s, RTID: %s)!\n",uVar4,
                 uVar8);
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_80,(RtWeakPtrBase *)aRStack_90);
      this = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_80);
      psVar11 = (string *)(this + 8);
      lVar7 = FUN_05474184(psVar11);
      if (lVar7 == 0) {
        bVar14 = true;
        uVar4 = FUN_0547429c(asStack_88);
        Sexy::OutputDebugStrF((wchar_t *)"ERROR: Empty TypeName on ZombieType object %s!\n",uVar4);
      }
      else {
        local_78 = std::
                   map<std::string,Sexy::RtWeakPtr<ZombieType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<ZombieType_const>>>>
                   ::find((map<std::string,Sexy::RtWeakPtr<ZombieType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<ZombieType_const>>>>
                           *)amStack_38,psVar11);
        local_60 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)amStack_38);
        bVar2 = eastl::operator!=((rbtree_iterator *)&local_78,(rbtree_iterator *)&local_60);
        if (bVar2) {
          bVar14 = true;
          lVar7 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                            ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_78);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_70,(RtWeakPtrBase *)(lVar7 + 8));
          Set8BytesTo0(asStack_68);
          Sexy::RtMixedPtrBase::GetId();
          Sexy::RtId::ToString((RtId *)&local_60,asStack_68,false);
          Sexy::RtId::~RtId((RtId *)&local_60);
          uVar4 = FUN_0547429c(asStack_68);
          uVar8 = FUN_0547429c(asStack_88);
          Sexy::OutputDebugStrF
                    ((wchar_t *)
                     "ERROR: Duplicate TypeName on ZombieType object (First RTID: %s, Duplicate RTID: %s)!\n"
                     ,uVar4,uVar8);
          std::string::~string(asStack_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
        }
        else {
          this_00 = (RtWeakPtr<PowerPropertySheet> *)
                    std::
                    map<std::string,Sexy::RtWeakPtr<ZombieType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<ZombieType_const>>>>
                    ::operator[]((map<std::string,Sexy::RtWeakPtr<ZombieType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<ZombieType_const>>>>
                                  *)amStack_38,psVar11);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_80);
          uVar4 = FUN_0547429c(psVar11);
          uVar8 = FUN_0547429c(asStack_88);
          Sexy::OutputDebugStrF((wchar_t *)"Verifying ZombieType \'%s\' %s... ",uVar4,uVar8);
          if (this[0x28] == (ResourceInfo)0x0) {
            uVar4 = FUN_0547429c(psVar11);
            Sexy::OutputDebugStrF((wchar_t *)"\n Zombie %s is not enabled in game!\n",uVar4);
          }
          else {
            pRVar1 = this + 0x10;
            lVar7 = FUN_05474184(pRVar1);
            if (lVar7 == 0) {
              bVar2 = false;
              Sexy::OutputDebugStrF((wchar_t *)"\n ERROR: ZombieClass is not set!\n");
            }
            else {
              pcVar9 = (char *)FUN_0547429c(pRVar1);
              plVar6 = (long *)Sexy::RtClass::StaticGetClassNamed(pcVar9);
              if (plVar6 == (long *)0x0) {
                bVar2 = true;
                uVar4 = FUN_0547429c(pRVar1);
                Sexy::OutputDebugStrF
                          ((wchar_t *)"\n ERROR: ZombieClass class \'%s\' does not exist!\n",uVar4);
              }
              else {
                pcVar12 = *(code **)(*plVar6 + 0x48);
                uVar4 = Zombie::StaticGetClass();
                cVar3 = (*pcVar12)(plVar6,uVar4);
                if (cVar3 == '\0') {
                  bVar2 = true;
                  uVar4 = FUN_0547429c(pRVar1);
                  Sexy::OutputDebugStrF
                            ((wchar_t *)
                             "\n ERROR: ZombieClass class \'%s\' is valid but does not derive from Zombie!\n"
                             ,uVar4);
                }
              }
            }
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      (aRStack_70,(RtWeakPtrBase *)(this + 0xa0));
            Sexy::RtMixedPtrBase::GetId();
            lVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
            Sexy::RtId::~RtId((RtId *)&local_60);
            if (lVar7 == 0) {
              bVar2 = true;
              Sexy::OutputDebugStrF((wchar_t *)"\n Error: Empty Properties value!\n");
            }
            else {
              cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_70);
              if (cVar3 == '\0') {
                bVar2 = true;
                Set8BytesTo0();
                Sexy::RtMixedPtrBase::GetId();
                Sexy::RtId::ToString((RtId *)&local_60,asStack_68,false);
                Sexy::RtId::~RtId((RtId *)&local_60);
                uVar4 = FUN_0547429c(asStack_68);
                Sexy::OutputDebugStrF
                          ((wchar_t *)"\n ERROR: Properties value %s is invalid!\n",uVar4);
                std::string::~string(asStack_68);
              }
            }
            puVar5 = (undefined8 *)Reflection::RAttribute::GetValue((RAttribute *)this);
            lVar7 = FUN_04408da0(*puVar5,puVar5[1]);
            if (lVar7 == 0) {
              Sexy::OutputDebugStrF((wchar_t *)"\n WARNING: No ResourceGroups specified!\n");
            }
            else {
              puVar5 = (undefined8 *)Reflection::RAttribute::GetValue((RAttribute *)this);
              local_98 = *puVar5;
              uVar10 = FUN_04408da0(local_98,puVar5[1]);
              if (uVar10 == 0) {
                Sexy::OutputDebugStrF((wchar_t *)"\n WARNING: No ResourceGroups specified!\n");
              }
              else {
                for (uVar13 = 0; uVar13 < uVar10; uVar13 = uVar13 + 1) {
                  psVar11 = (string *)FUN_04408dac(local_98,uVar13);
                  lVar7 = Sexy::ResourceManager::GetResourceGroupNamed
                                    (*(ResourceManager **)(gLawnApp + 0x848),psVar11);
                  if (lVar7 == 0) {
                    bVar2 = true;
                    FUN_04408dac(*puVar5,uVar13);
                    uVar4 = FUN_0547429c();
                    Sexy::OutputDebugStrF
                              ((wchar_t *)
                               "\n ERROR: ResourceGroups entry named \'%s\' doesn\'t exist!\n",uVar4
                              );
                  }
                  local_98 = *puVar5;
                  uVar10 = FUN_04408da0(local_98,puVar5[1]);
                }
              }
              puVar5 = (undefined8 *)ZombieType::GetAudioGroups((ZombieType *)this);
              uVar10 = 0;
              while( true ) {
                uVar4 = *puVar5;
                uVar13 = FUN_04408da0(uVar4,puVar5[1]);
                if (uVar13 <= uVar10) break;
                psVar11 = (string *)FUN_04408dac(uVar4,uVar10);
                lVar7 = Sexy::ResourceManager::GetResourceGroupNamed
                                  (*(ResourceManager **)(gLawnApp + 0x848),psVar11);
                if (lVar7 == 0) {
                  bVar2 = true;
                  FUN_04408dac(*puVar5,uVar10);
                  uVar4 = FUN_0547429c();
                  Sexy::OutputDebugStrF
                            ((wchar_t *)
                             "\n ERROR: Audio ResourceGroup entry named \'%s\' doesn\'t exist!\n",
                             uVar4);
                  uVar10 = uVar10 + 1;
                }
                else {
                  uVar10 = uVar10 + 1;
                }
              }
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
            bVar14 = (bool)(bVar2 | bVar14);
            if (bVar2 == false) {
              Sexy::OutputDebugStrF((wchar_t *)"\n OK!\n");
            }
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    }
    std::string::~string(asStack_88);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
    Sexy::RtDbTable::Iterator::operator++(aIStack_58,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_58);
  std::string::string((string *)aIStack_58,"ZombieTypes");
  printVerificationMessage((string *)aIStack_58,bVar14);
  std::string::~string((string *)aIStack_58);
  nop();
  std::
  map<std::string,Sexy::RtWeakPtr<ZombieType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<ZombieType_const>>>>
  ::~map((map<std::string,Sexy::RtWeakPtr<ZombieType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<ZombieType_const>>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar14 ^ 1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZTypes::VerifyCreatureTypes() */

void PVZTypes::VerifyCreatureTypes(void)

{
  CreatureType *pCVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  CreatureType *this;
  long lVar7;
  undefined8 uVar8;
  RtWeakPtr<PowerPropertySheet> *this_00;
  vector *pvVar9;
  ulong uVar10;
  string *psVar11;
  char *pcVar12;
  int extraout_w1;
  int iVar13;
  int extraout_w1_00;
  ulong uVar14;
  code *pcVar15;
  bool bVar16;
  byte bVar17;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  string asStack_a0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_98 [8];
  undefined8 local_90;
  RtWeakPtr<Sexy::SoundResource> aRStack_88 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_80 [8];
  string asStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  Iterator aIStack_58 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  bVar16 = false;
  PVZDB::GetObjectIteratorForTable(aIStack_58,uVar4,0xb);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_58);
    if (!bVar2) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_58);
      std::string::string((string *)aIStack_58,"ZombieTypes");
      printVerificationMessage((string *)aIStack_58,bVar16);
      std::string::~string((string *)aIStack_58);
      nop();
      std::
      map<std::string,Sexy::RtWeakPtr<CreatureType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<CreatureType_const>>>>
      ::~map((map<std::string,Sexy::RtWeakPtr<CreatureType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<CreatureType_const>>>>
              *)amStack_38);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(bVar16 ^ 1);
      }
      return;
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_58);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_a8,(RtWeakPtrBase *)&local_70);
    Sexy::RtId::~RtId((RtId *)&local_70);
    puVar5 = (undefined8 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a8);
    plVar6 = (long *)(**(code **)*puVar5)();
    Set8BytesTo0(asStack_a0);
    Sexy::RtMixedPtrBase::GetId();
    Sexy::RtId::ToString((RtId *)&local_70,asStack_a0,false);
    Sexy::RtId::~RtId((RtId *)&local_70);
    pcVar15 = *(code **)(*plVar6 + 0x48);
    uVar4 = CreatureType::StaticGetClass();
    cVar3 = (*pcVar15)(plVar6,uVar4);
    if (cVar3 == '\0') {
      uVar4 = FUN_04408d40(plVar6[1]);
      uVar8 = FUN_0547429c(asStack_a0);
      Sexy::OutputDebugStrF
                ((wchar_t *)"Warning: Non-CreatureType object in table (type: %s, RTID: %s)!\n",
                 uVar4,uVar8);
LAB_0440b758:
      bVar16 = true;
      std::string::~string(asStack_a0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
      iVar13 = extraout_w1;
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,(RtWeakPtrBase *)aRStack_a8);
      this = (CreatureType *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
      psVar11 = (string *)(this + 8);
      lVar7 = FUN_05474184(psVar11);
      if (lVar7 == 0) {
        uVar4 = FUN_0547429c(asStack_a0);
        Sexy::OutputDebugStrF((wchar_t *)"ERROR: Empty TypeName on CreatureType object %s!\n",uVar4)
        ;
LAB_0440b854:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98)
        ;
        goto LAB_0440b758;
      }
      local_90 = std::
                 map<std::string,Sexy::RtWeakPtr<CreatureType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<CreatureType_const>>>>
                 ::find((map<std::string,Sexy::RtWeakPtr<CreatureType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<CreatureType_const>>>>
                         *)amStack_38,psVar11);
      local_70 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)amStack_38);
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_90,(rbtree_iterator *)&local_70);
      if (bVar2) {
        lVar7 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_90);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_80,(RtWeakPtrBase *)(lVar7 + 8));
        Set8BytesTo0(asStack_78);
        Sexy::RtMixedPtrBase::GetId();
        Sexy::RtId::ToString((RtId *)&local_70,asStack_78,false);
        Sexy::RtId::~RtId((RtId *)&local_70);
        uVar4 = FUN_0547429c(asStack_78);
        uVar8 = FUN_0547429c(asStack_a0);
        Sexy::OutputDebugStrF
                  ((wchar_t *)
                   "ERROR: Duplicate TypeName on CreatureType object (First RTID: %s, Duplicate RTID: %s)!\n"
                   ,uVar4,uVar8);
        std::string::~string(asStack_78);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80)
        ;
        goto LAB_0440b854;
      }
      pCVar1 = this + 0x10;
      this_00 = (RtWeakPtr<PowerPropertySheet> *)
                std::
                map<std::string,Sexy::RtWeakPtr<CreatureType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<CreatureType_const>>>>
                ::operator[]((map<std::string,Sexy::RtWeakPtr<CreatureType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<CreatureType_const>>>>
                              *)amStack_38,psVar11);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_98);
      lVar7 = FUN_05474184(pCVar1);
      if (lVar7 == 0) {
        bVar17 = 0;
        Sexy::OutputDebugStrF((wchar_t *)"\n ERROR: CreatureClass is not set!\n");
      }
      else {
        pcVar12 = (char *)FUN_0547429c(pCVar1);
        plVar6 = (long *)Sexy::RtClass::StaticGetClassNamed(pcVar12);
        if (plVar6 == (long *)0x0) {
          bVar17 = 1;
          uVar4 = FUN_0547429c(pCVar1);
          Sexy::OutputDebugStrF
                    ((wchar_t *)"\n ERROR: CreatureClass class \'%s\' does not exist!\n",uVar4);
        }
        else {
          bVar17 = 0;
          pcVar15 = *(code **)(*plVar6 + 0x48);
          uVar4 = Creature::StaticGetClass();
          cVar3 = (*pcVar15)(plVar6,uVar4);
          if (cVar3 == '\0') {
            bVar17 = 1;
            uVar4 = FUN_0547429c(pCVar1);
            Sexy::OutputDebugStrF
                      ((wchar_t *)
                       "\n ERROR: CreatureClass class \'%s\' is valid but does not derive from Creature!\n"
                       ,uVar4);
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_88,(RtWeakPtrBase *)(this + 0x70));
      Sexy::RtMixedPtrBase::GetId();
      lVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
      Sexy::RtId::~RtId((RtId *)&local_70);
      if (lVar7 == 0) {
        bVar17 = 1;
        Sexy::OutputDebugStrF((wchar_t *)"\n Error: Empty Properties value!\n");
        cVar3 = CreatureType::IsCreatureEnabled(this);
      }
      else {
        cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_88);
        if (cVar3 == '\0') {
          bVar17 = 1;
          Set8BytesTo0();
          Sexy::RtMixedPtrBase::GetId();
          Sexy::RtId::ToString((RtId *)&local_70,asStack_78,false);
          Sexy::RtId::~RtId((RtId *)&local_70);
          uVar4 = FUN_0547429c(asStack_78);
          Sexy::OutputDebugStrF((wchar_t *)"\n ERROR: Properties value %s is invalid!\n",uVar4);
          std::string::~string(asStack_78);
        }
        cVar3 = CreatureType::IsCreatureEnabled(this);
      }
      if (cVar3 != '\0') {
        puVar5 = (undefined8 *)PlantWarsNetworkMgr::GetPrefixWorld((PlantWarsNetworkMgr *)this);
        uVar4 = *puVar5;
        uVar10 = FUN_04408da0(uVar4,puVar5[1]);
        if (uVar10 == 0) {
          Sexy::OutputDebugStrF((wchar_t *)"\n WARNING: No ResourceGroups specified!\n");
        }
        else {
          for (uVar14 = 0; uVar14 < uVar10; uVar14 = uVar14 + 1) {
            psVar11 = (string *)FUN_04408dac(uVar4,uVar14);
            lVar7 = Sexy::ResourceManager::GetResourceGroupNamed
                              (*(ResourceManager **)(gLawnApp + 0x848),psVar11);
            if (lVar7 == 0) {
              bVar17 = 1;
              FUN_04408dac(*puVar5,uVar14);
              uVar4 = FUN_0547429c();
              Sexy::OutputDebugStrF
                        ((wchar_t *)"\n ERROR: ResourceGroups entry named \'%s\' doesn\'t exist!\n",
                         uVar4);
            }
            uVar4 = *puVar5;
            uVar10 = FUN_04408da0(uVar4,puVar5[1]);
          }
        }
        puVar5 = (undefined8 *)CreatureType::GetAudioGroups(this);
        uVar10 = 0;
        while( true ) {
          uVar4 = *puVar5;
          uVar14 = FUN_04408da0(uVar4,puVar5[1]);
          if (uVar14 <= uVar10) break;
          psVar11 = (string *)FUN_04408dac(uVar4,uVar10);
          lVar7 = Sexy::ResourceManager::GetResourceGroupNamed
                            (*(ResourceManager **)(gLawnApp + 0x848),psVar11);
          if (lVar7 == 0) {
            bVar17 = 1;
            FUN_04408dac(*puVar5,uVar10);
            uVar4 = FUN_0547429c();
            Sexy::OutputDebugStrF
                      ((wchar_t *)
                       "\n ERROR: Audio ResourceGroup entry named \'%s\' doesn\'t exist!\n",uVar4);
            uVar10 = uVar10 + 1;
          }
          else {
            uVar10 = uVar10 + 1;
          }
        }
      }
      pvVar9 = (vector *)CreatureType::GetAudioGroups(this);
      std::vector<std::string,std::allocator<std::string>>::vector
                ((vector<std::string,std::allocator<std::string>> *)&local_70,pvVar9);
      uVar4 = local_70;
      uVar10 = FUN_04408da0(local_70,local_68);
      if (uVar10 != 0) {
        for (uVar14 = 0; uVar14 < uVar10; uVar14 = uVar14 + 1) {
          psVar11 = (string *)FUN_04408dac(uVar4,uVar14);
          lVar7 = Sexy::ResourceManager::GetResourceGroupNamed
                            (*(ResourceManager **)(gLawnApp + 0x848),psVar11);
          if (lVar7 == 0) {
            Set8BytesTo0((string *)aRStack_80);
            Sexy::RtMixedPtrBase::GetId();
            Sexy::RtId::ToString((RtId *)asStack_78,(string *)aRStack_80,false);
            Sexy::RtId::~RtId((RtId *)asStack_78);
            cVar3 = CreatureType::IsCreatureEnabled(this);
            if (cVar3 != '\0') {
              bVar17 = 1;
              FUN_04408dac(local_70,uVar14);
              uVar4 = FUN_0547429c();
              Sexy::OutputDebugStrF
                        ((wchar_t *)"\n ERROR: AudioGroups entry named \'%s\' doesn\'t exist!\n",
                         uVar4);
            }
            std::string::~string((string *)aRStack_80);
          }
          uVar4 = local_70;
          uVar10 = FUN_04408da0(local_70,local_68);
        }
      }
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)&local_70);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
      bVar16 = (bool)(bVar17 | bVar16);
      std::string::~string(asStack_a0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
      iVar13 = extraout_w1_00;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_58,iVar13);
  } while( true );
}

