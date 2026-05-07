// Class: ActivityDropGroup


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityDropGroup::StaticClassInit() */

void ActivityDropGroup::StaticClassInit(void)

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
    std::string::string(asStack_10,"DropGroupNode");
    (*pcVar3)(plVar2,asStack_10,FUN_0451a738,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ActivityDropGroup");
    (*pcVar3)(plVar2,asStack_10,FUN_04520200,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityDropGroup::StaticGetClass() */

long * ActivityDropGroup::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActivityDropGroup",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ActivityDropGroup::GetClass() const */

long * ActivityDropGroup::GetClass(void)

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
  (*pcVar3)(plVar1,"ActivityDropGroup",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityDropGroup::GetYetiDropGroupId(std::string const&, std::string const&) */

void ActivityDropGroup::GetYetiDropGroupId(string *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  string *psVar3;
  string *in_x2;
  string *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x10));
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x10));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
      std::string::string(in_x8,"");
      nop();
LAB_0451ed2c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = std::operator==(psVar3,param_2);
    if ((cVar1 != '\0') && (cVar1 = std::operator==(psVar3 + 8,in_x2), cVar1 != '\0')) {
      FUN_05475d88();
      goto LAB_0451ed2c;
    }
    FUN_0451ec08((exception_ptr *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityDropGroup::GetGargantuarDirectDropGroupId(std::string const&, std::string const&) */

void ActivityDropGroup::GetGargantuarDirectDropGroupId(string *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  string *psVar3;
  string *in_x2;
  string *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x10));
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x10));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
      std::string::string(in_x8,"");
      nop();
LAB_0451ee34:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = std::operator==(psVar3,param_2);
    if ((cVar1 != '\0') && (cVar1 = std::operator==(psVar3 + 8,in_x2), cVar1 != '\0')) {
      FUN_05475d88();
      goto LAB_0451ee34;
    }
    FUN_0451ec08((exception_ptr *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityDropGroup::GetDevilDirectDropGroupId(std::string const&, std::string const&) */

void ActivityDropGroup::GetDevilDirectDropGroupId(string *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  string *psVar3;
  string *in_x2;
  string *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x10));
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x10));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
      std::string::string(in_x8,"");
      nop();
LAB_0451ef3c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = std::operator==(psVar3,param_2);
    if ((cVar1 != '\0') && (cVar1 = std::operator==(psVar3 + 8,in_x2), cVar1 != '\0')) {
      FUN_05475d88();
      goto LAB_0451ef3c;
    }
    FUN_0451ec08((exception_ptr *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityDropGroup::GetYetiDirectDropGroupId(std::string const&, std::string const&) */

void ActivityDropGroup::GetYetiDirectDropGroupId(string *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  string *psVar3;
  string *in_x2;
  string *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x10));
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x10));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
      std::string::string(in_x8,"");
      nop();
LAB_0451f044:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = std::operator==(psVar3,param_2);
    if ((cVar1 != '\0') && (cVar1 = std::operator==(psVar3 + 8,in_x2), cVar1 != '\0')) {
      FUN_05475d88();
      goto LAB_0451f044;
    }
    FUN_0451ec08((exception_ptr *)&local_18);
  } while( true );
}


/* ActivityDropGroup::ActivityDropGroup() */

void __thiscall ActivityDropGroup::ActivityDropGroup(ActivityDropGroup *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06857b30;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}


/* ActivityDropGroup::StaticNew() */

ActivityDropGroup * ActivityDropGroup::StaticNew(void)

{
  ActivityDropGroup *this;
  
  this = ::operator_new(0x28);
  ActivityDropGroup(this);
  return this;
}


/* ActivityDropGroup::~ActivityDropGroup() */

void __thiscall ActivityDropGroup::~ActivityDropGroup(ActivityDropGroup *this)

{
  *(undefined ***)this = &PTR_GetClass_06857b30;
  std::vector<DropGroupNode,std::allocator<DropGroupNode>>::~vector
            ((vector<DropGroupNode,std::allocator<DropGroupNode>> *)(this + 0x10));
  nop();
  return;
}


/* ActivityDropGroup::~ActivityDropGroup() */

void __thiscall ActivityDropGroup::~ActivityDropGroup(ActivityDropGroup *this)

{
  ~ActivityDropGroup(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityDropGroup::GetNameOfRandDropPieceSpecially(E_ActivityType) */

void ActivityDropGroup::GetNameOfRandDropPieceSpecially
               (undefined8 param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ProfileMgr *this;
  PlayerInfo *pPVar7;
  ActivityConfig *pAVar8;
  vector *pvVar9;
  ulong uVar10;
  string *psVar11;
  long extraout_x0;
  long lVar12;
  float *pfVar13;
  undefined8 uVar14;
  long extraout_x0_00;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar15;
  bool extraout_w1;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  byte local_69;
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtWeakPtr aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_68,"");
  nop();
  std::string::string(asStack_60,"coin_spring");
  nop();
  std::string::string(asStack_58,"");
  nop();
  lVar6 = LawnApp::GetActivityConfig();
  if (lVar6 == 0) {
    FUN_05474148(param_1,asStack_60);
    goto LAB_0452320c;
  }
  Sexy::LazySingleton<FestivalManager>::GetInstancePtr();
  EntityComponent_GroundEffect::GetEffect();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_50);
  if (bVar1) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    thunk_FUN_05475e00(asStack_58,lVar6 + 0x80);
  }
  bVar1 = std::operator==(asStack_58,"");
  if (!bVar1) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    local_69 = bVar1;
    lVar6 = Sexy::LazySingleton<FestivalManager>::GetInstance();
    iVar3 = FUN_0451a2fc(*(undefined4 *)(lVar6 + 8));
    pAVar8 = (ActivityConfig *)LawnApp::GetActivityConfig();
    ActivityConfig::IsWeeklyGameModesPlantArrayAvatar(pAVar8,iVar3,&local_69);
    pAVar8 = (ActivityConfig *)LawnApp::GetActivityConfig();
    pvVar9 = (vector *)ActivityConfig::GetPieceDropDataList(pAVar8);
    std::vector<PieceDropData,std::allocator<PieceDropData>>::vector
              ((vector<PieceDropData,std::allocator<PieceDropData>> *)&local_38,pvVar9);
    if ((iVar3 == 1) || (param_3 != 2)) {
      uVar16 = time((time_t *)0x0);
      Sexy::SRand(uVar16);
      for (uVar16 = 0; uVar10 = FUN_0451a63c(local_38,local_30), uVar16 < uVar10;
          uVar16 = uVar16 + 1) {
        psVar11 = (string *)
                  Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
        FUN_0451a65c(local_38,uVar16);
        ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar11);
        Set8BytesTo0(asStack_40);
        if (local_69 == 0) {
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
          bVar1 = std::operator==((string *)(lVar6 + 0x10),"CollectablePlantPiece");
          if (bVar1) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
            nop();
            thunk_FUN_05475e00(asStack_40,extraout_x0 + 0x98);
            cVar2 = std::operator==(asStack_40,asStack_58);
            if (cVar2 != '\0') goto LAB_0452337c;
          }
        }
        else {
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
          bVar1 = std::operator==((string *)(lVar6 + 0x10),"CollectableAvatarPiece");
          if (bVar1) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
            nop();
            thunk_FUN_05475e00(asStack_40,extraout_x0_00 + 0x98);
            cVar2 = std::operator==(asStack_40,asStack_58);
            if (cVar2 != '\0') {
              Magento::GetPlantPieceProductsData((Magento *)(ulong)local_69,extraout_w1);
              uVar10 = 0;
              goto LAB_04523538;
            }
          }
        }
        std::string::~string(asStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
      }
    }
    FUN_05474148(param_1,asStack_60);
    goto LAB_045231fc;
  }
  FUN_05474148(param_1,asStack_60);
  goto LAB_04523204;
  while( true ) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0451a678(*(undefined8 *)(lVar6 + 0x60),uVar17);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
    cVar2 = std::operator==((string *)(lVar6 + 0x80),asStack_40);
    uVar10 = uVar17 + 1;
    if (cVar2 != '\0') break;
LAB_04523538:
    uVar17 = uVar10;
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    uVar10 = FUN_0451a66c(*(undefined8 *)(lVar6 + 0x60),*(undefined8 *)(lVar6 + 0x68));
    if (uVar10 <= uVar17) {
      iVar4 = 0;
      goto LAB_04523560;
    }
  }
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0451a678(*(undefined8 *)(lVar6 + 0x60),uVar17);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
  iVar4 = *(int *)(lVar6 + 0x90);
LAB_04523560:
  iVar5 = PlayerInfo::GetAvatarPiecesCount(pPVar7,asStack_40,0,0);
  if (iVar5 < iVar4) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
LAB_0452337c:
    lVar6 = Sexy::LazySingleton<FestivalManager>::GetInstance();
    iVar4 = FUN_0451a300(*(undefined4 *)(lVar6 + 0xc));
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    std::vector<float,std::allocator<float>>::clear
              ((vector<float,std::allocator<float>> *)&local_20);
    if (iVar4 == 1) {
      lVar6 = FUN_0451a65c(local_38,uVar16);
      std::vector<float,std::allocator<float>>::operator=
                ((vector<float,std::allocator<float>> *)&local_20,(vector *)(lVar6 + 0x20));
    }
    else if ((iVar4 == 0) || (iVar4 != 2)) {
      lVar6 = FUN_0451a65c(local_38,uVar16);
      std::vector<float,std::allocator<float>>::operator=
                ((vector<float,std::allocator<float>> *)&local_20,(vector *)(lVar6 + 8));
    }
    else {
      lVar6 = FUN_0451a65c(local_38,uVar16);
      std::vector<float,std::allocator<float>>::operator=
                ((vector<float,std::allocator<float>> *)&local_20,(vector *)(lVar6 + 0x38));
    }
    cVar2 = std::vector<float,std::allocator<float>>::empty
                      ((vector<float,std::allocator<float>> *)&local_20);
    if (cVar2 == '\0') {
      if (iVar3 != 2) {
        iVar3 = Sexy::Rand();
        pAVar8 = (ActivityConfig *)LawnApp::GetActivityConfig();
        psVar11 = (string *)FUN_0451a65c(local_38,uVar16);
        iVar4 = ActivityConfig::GetCurrentPieceDropActivityCombat(pAVar8,psVar11);
        lVar6 = *(long *)(gLawnApp + 0x9f0);
        fVar18 = (float)iVar3 * (float)iVar4 * _FUN_0452361c;
        iVar3 = FUN_0451a314(*(undefined4 *)(lVar6 + 0xc2c));
        lVar12 = FUN_0451a31c(local_20,local_18);
        if ((iVar3 == lVar12) ||
           (pfVar13 = (float *)FUN_0451a680(local_20,(long)iVar3), *pfVar13 < fVar18))
        goto LAB_045235d4;
        FUN_0451a304(lVar6 + 0xc2c);
      }
      uVar14 = FUN_0451a65c(local_38,uVar16);
      FUN_05475d88(param_1,uVar14);
    }
    else {
LAB_045235d4:
      FUN_05474148(param_1,asStack_60);
    }
    std::vector<float,std::allocator<float>>::~vector
              ((vector<float,std::allocator<float>> *)&local_20);
  }
  else {
    FUN_05474148(param_1,asStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  }
  std::string::~string(asStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
LAB_045231fc:
  std::vector<PieceDropData,std::allocator<PieceDropData>>::~vector
            ((vector<PieceDropData,std::allocator<PieceDropData>> *)&local_38);
LAB_04523204:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
LAB_0452320c:
  std::string::~string(asStack_58);
  std::string::~string(asStack_60);
  std::string::~string(asStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityDropGroup::GetDropItemName(std::string, E_ActivityType, std::string) */

void __thiscall
ActivityDropGroup::GetDropItemName
          (string *param_1,ActivityDropGroup *this,string *param_3,uint param_4)

{
  string *psVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_18);
  std::string::string(param_1,"");
  nop();
  if (param_4 == 0) {
    GetYetiDropGroupId((string *)this,param_3);
    FUN_05474278(asStack_18,asStack_10);
    std::string::~string(asStack_10);
    psVar1 = (string *)LawnApp::GetDropItemsList();
    DropOutItems::GetDropItemByGroupId(psVar1);
  }
  else {
    if (3 < param_4) goto LAB_04523698;
    GetNameOfRandDropPieceSpecially(asStack_10,this,param_4);
  }
  FUN_05474278(param_1,asStack_10);
  std::string::~string(asStack_10);
LAB_04523698:
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityDropGroup::GetNameOfDropPieceSpecially(E_ActivityType) */

void ActivityDropGroup::GetNameOfDropPieceSpecially
               (undefined8 param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ProfileMgr *this;
  PlayerInfo *pPVar7;
  ActivityConfig *pAVar8;
  vector *pvVar9;
  ulong uVar10;
  string *psVar11;
  long extraout_x0;
  undefined8 uVar12;
  long extraout_x0_00;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar13;
  bool extraout_w1;
  ulong uVar14;
  ulong uVar15;
  byte local_69;
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtWeakPtr aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_68,"");
  nop();
  std::string::string(asStack_60,"coin_spring");
  nop();
  std::string::string(asStack_58,"");
  nop();
  lVar6 = LawnApp::GetActivityConfig();
  if (lVar6 == 0) {
    FUN_05474148(param_1,asStack_60);
    goto LAB_04523848;
  }
  Sexy::LazySingleton<FestivalManager>::GetInstancePtr();
  EntityComponent_GroundEffect::GetEffect();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_50);
  if (bVar1) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    thunk_FUN_05475e00(asStack_58,lVar6 + 0x80);
  }
  bVar1 = std::operator==(asStack_58,"");
  if (!bVar1) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    local_69 = bVar1;
    lVar6 = Sexy::LazySingleton<FestivalManager>::GetInstance();
    iVar3 = FUN_0451a2fc(*(undefined4 *)(lVar6 + 8));
    pAVar8 = (ActivityConfig *)LawnApp::GetActivityConfig();
    ActivityConfig::IsWeeklyGameModesPlantArrayAvatar(pAVar8,iVar3,&local_69);
    pAVar8 = (ActivityConfig *)LawnApp::GetActivityConfig();
    pvVar9 = (vector *)ActivityConfig::GetPieceDropDataList(pAVar8);
    std::vector<PieceDropData,std::allocator<PieceDropData>>::vector
              ((vector<PieceDropData,std::allocator<PieceDropData>> *)&local_38,pvVar9);
    if ((iVar3 == 1) || (param_3 != 2)) {
      for (uVar14 = 0; uVar10 = FUN_0451a63c(local_38,local_30), uVar14 < uVar10;
          uVar14 = uVar14 + 1) {
        psVar11 = (string *)
                  Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
        FUN_0451a65c(local_38,uVar14);
        ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar11);
        Set8BytesTo0(asStack_40);
        if (local_69 == 0) {
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
          bVar1 = std::operator==((string *)(lVar6 + 0x10),"CollectablePlantPiece");
          if (bVar1) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
            nop();
            thunk_FUN_05475e00(asStack_40,extraout_x0 + 0x98);
            cVar2 = std::operator==(asStack_40,asStack_58);
            if (cVar2 != '\0') goto LAB_04523a04;
          }
        }
        else {
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
          bVar1 = std::operator==((string *)(lVar6 + 0x10),"CollectableAvatarPiece");
          if (bVar1) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
            nop();
            thunk_FUN_05475e00(asStack_40,extraout_x0_00 + 0x98);
            cVar2 = std::operator==(asStack_40,asStack_58);
            if (cVar2 != '\0') {
              Magento::GetPlantPieceProductsData((Magento *)(ulong)local_69,extraout_w1);
              uVar10 = 0;
              goto LAB_04523b54;
            }
          }
        }
        std::string::~string(asStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
      }
    }
    FUN_05474148(param_1,asStack_60);
    goto LAB_04523ad8;
  }
  FUN_05474148(param_1,asStack_60);
  goto LAB_04523840;
  while( true ) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
    pRVar13 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0451a678(*(undefined8 *)(lVar6 + 0x60),uVar15);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar13);
    cVar2 = std::operator==((string *)(lVar6 + 0x80),asStack_40);
    uVar10 = uVar15 + 1;
    if (cVar2 != '\0') break;
LAB_04523b54:
    uVar15 = uVar10;
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
    uVar10 = FUN_0451a66c(*(undefined8 *)(lVar6 + 0x60),*(undefined8 *)(lVar6 + 0x68));
    if (uVar10 <= uVar15) {
      iVar4 = 0;
      goto LAB_04523b7c;
    }
  }
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
  pRVar13 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0451a678(*(undefined8 *)(lVar6 + 0x60),uVar15);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar13);
  iVar4 = *(int *)(lVar6 + 0x90);
LAB_04523b7c:
  iVar5 = PlayerInfo::GetAvatarPiecesCount(pPVar7,asStack_40,0,0);
  if (iVar5 < iVar4) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
LAB_04523a04:
    lVar6 = Sexy::LazySingleton<FestivalManager>::GetInstance();
    iVar4 = FUN_0451a300(*(undefined4 *)(lVar6 + 0xc));
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    std::vector<float,std::allocator<float>>::clear
              ((vector<float,std::allocator<float>> *)avStack_20);
    if (iVar4 == 1) {
      lVar6 = FUN_0451a65c(local_38,uVar14);
      std::vector<float,std::allocator<float>>::operator=
                ((vector<float,std::allocator<float>> *)avStack_20,(vector *)(lVar6 + 0x20));
    }
    else if ((iVar4 == 0) || (iVar4 != 2)) {
      lVar6 = FUN_0451a65c(local_38,uVar14);
      std::vector<float,std::allocator<float>>::operator=
                ((vector<float,std::allocator<float>> *)avStack_20,(vector *)(lVar6 + 8));
    }
    else {
      lVar6 = FUN_0451a65c(local_38,uVar14);
      std::vector<float,std::allocator<float>>::operator=
                ((vector<float,std::allocator<float>> *)avStack_20,(vector *)(lVar6 + 0x38));
    }
    cVar2 = std::vector<float,std::allocator<float>>::empty
                      ((vector<float,std::allocator<float>> *)avStack_20);
    if (cVar2 == '\0') {
      if (iVar3 == 2) {
        uVar12 = FUN_0451a65c(local_38,uVar14);
        FUN_05475d88(param_1,uVar12);
      }
      else {
        pAVar8 = (ActivityConfig *)LawnApp::GetActivityConfig();
        psVar11 = (string *)FUN_0451a65c(local_38,uVar14);
        ActivityConfig::GetCurrentPieceDropActivityCombat(pAVar8,psVar11);
        uVar12 = FUN_0451a65c(local_38,0);
        FUN_05475d88(param_1,uVar12);
      }
    }
    else {
      FUN_05474148(param_1,asStack_60);
    }
    std::vector<float,std::allocator<float>>::~vector
              ((vector<float,std::allocator<float>> *)avStack_20);
  }
  else {
    FUN_05474148(param_1,asStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
  }
  std::string::~string(asStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
LAB_04523ad8:
  std::vector<PieceDropData,std::allocator<PieceDropData>>::~vector
            ((vector<PieceDropData,std::allocator<PieceDropData>> *)&local_38);
LAB_04523840:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
LAB_04523848:
  std::string::~string(asStack_58);
  std::string::~string(asStack_60);
  std::string::~string(asStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityDropGroup::GetDropItemNameNoRand(std::string, E_ActivityType) */

void ActivityDropGroup::GetDropItemNameNoRand
               (string *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_18);
  std::string::string(param_1,"");
  nop();
  if (param_4 - 1U < 3) {
    GetNameOfDropPieceSpecially(asStack_10,param_2,param_4);
    FUN_05474278(param_1,asStack_10);
    std::string::~string(asStack_10);
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}

