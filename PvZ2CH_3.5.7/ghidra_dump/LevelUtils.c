// Class: LevelUtils


/* LevelUtils::GetHardLevelName(std::string const&) */

void LevelUtils::GetHardLevelName(string *param_1)

{
  string *in_x1;
  
  std::operator+(in_x1,HARDLEVEL_EXT_NAME);
  return;
}


/* LevelUtils::LevelisEnableAutoHard(Sexy::RtWeakPtr<LevelDefinition>, bool) */

undefined1 __thiscall
LevelUtils::LevelisEnableAutoHard(undefined8 param_1,RtMixedPtrBase *param_2,byte param_3)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if ((bVar1 & param_3) == 0) {
    return 0;
  }
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  return *(undefined1 *)(lVar2 + 0x16e);
}


/* LevelUtils::GetLevelCount() const */

void __thiscall LevelUtils::GetLevelCount(LevelUtils *this)

{
  std::
  map<std::string,LevelInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,LevelInfo>>>
  ::size((map<std::string,LevelInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,LevelInfo>>>
          *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelUtils::UnloadLevelDefinition() */

void LevelUtils::UnloadLevelDefinition(void)

{
  bool bVar1;
  undefined8 uVar2;
  RtObject *this;
  long *extraout_x0;
  PVZDB *pPVar3;
  RtDbTable *pRVar4;
  int extraout_w1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x25);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      bVar1 = Sexy::RtObject::IsA<GameObject>(this);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        nop();
        if (extraout_x0 != (long *)0x0) {
          (**(code **)(*extraout_x0 + 0x48))();
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  pRVar4 = (RtDbTable *)PVZDB::GetTable(pPVar3,0x25);
  Sexy::RtDbTable::Reset(pRVar4,false);
  pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  pRVar4 = (RtDbTable *)PVZDB::GetTable(pPVar3,0x25);
  Sexy::RtDbTable::Reset(pRVar4,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelUtils::loadLevelDefinitionFromResource(Sexy::RtWeakPtr<Sexy::GenericResFile>) */

void LevelUtils::loadLevelDefinitionFromResource
               (RtWeakPtr<Sexy::SoundResource> *param_1,undefined8 param_2,RtWeakPtrBase *param_3)

{
  bool bVar1;
  PVZDB *pPVar2;
  undefined8 uVar3;
  RtObject *this;
  int extraout_w1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UnloadLevelDefinition();
  pPVar2 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,param_3);
  PVZDB::LoadPackageForTable(pPVar2,0x25,aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aRStack_28,uVar3,0x25);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)aRStack_28);
    if (!bVar1) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)param_1);
LAB_03e76ab0:
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)aRStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    Sexy::RtDbTable::Iterator::operator*((Iterator *)aRStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      bVar1 = Sexy::RtObject::IsA<LevelDefinition>(this);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,(RtWeakPtrBase *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        goto LAB_03e76ab0;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++((Iterator *)aRStack_28,extraout_w1);
  } while( true );
}


/* LevelUtils::LevelUtils() */

void __thiscall LevelUtils::LevelUtils(LevelUtils *this)

{
  Sexy::LazySingleton<LevelUtils>::LazySingleton((LazySingleton<LevelUtils> *)this);
  this[8] = (LevelUtils)0x0;
  *(undefined ***)this = &PTR__LevelUtils_0678d850;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelUtils::GetLevelInfoByIndex(int) */

void __thiscall LevelUtils::GetLevelInfoByIndex(LevelUtils *this,int param_1)

{
  long lVar1;
  int iVar2;
  undefined8 local_10;
  long local_8;
  
  iVar2 = 0;
  local_8 = ___stack_chk_guard;
  local_10 = std::
             map<std::string,LevelInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,LevelInfo>>>
             ::begin((map<std::string,LevelInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,LevelInfo>>>
                      *)(this + 0x10));
  if (0 < param_1) {
    do {
      iVar2 = iVar2 + 1;
      FUN_03e75a24(&local_10);
    } while (iVar2 != param_1);
  }
  lVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                    ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar1 + 8);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelUtils::GetLevelInfo(std::string const&) */

void __thiscall LevelUtils::GetLevelInfo(LevelUtils *this,string *param_1)

{
  char cVar1;
  long lVar2;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Lower((Sexy *)param_1,___stack_chk_guard);
  local_18 = std::
             map<std::string,LevelInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,LevelInfo>>>
             ::find((map<std::string,LevelInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,LevelInfo>>>
                     *)(this + 0x10),asStack_20);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x10));
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    lVar2 = lVar2 + 8;
  }
  else {
    lVar2 = 0;
  }
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* LevelUtils::DoesLevelExist(std::string const&) */

bool __thiscall LevelUtils::DoesLevelExist(LevelUtils *this,string *param_1)

{
  long lVar1;
  
  lVar1 = GetLevelInfo(this,param_1);
  return lVar1 != 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelUtils::DoesHardLevelExist(std::string const&) */

void LevelUtils::DoesHardLevelExist(string *param_1)

{
  undefined4 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetHardLevelName(param_1);
  uVar1 = DoesLevelExist((LevelUtils *)param_1,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* LevelUtils::~LevelUtils() */

void __thiscall LevelUtils::~LevelUtils(LevelUtils *this)

{
  *(undefined ***)this = &PTR__LevelUtils_0678d850;
  std::
  map<std::string,LevelInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,LevelInfo>>>
  ::~map((map<std::string,LevelInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,LevelInfo>>>
          *)(this + 0x10));
  Sexy::LazySingleton<LevelUtils>::~LazySingleton((LazySingleton<LevelUtils> *)this);
  return;
}


/* LevelUtils::~LevelUtils() */

void __thiscall LevelUtils::~LevelUtils(LevelUtils *this)

{
  ~LevelUtils(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelUtils::readLevelMetaData(std::string const&) */

void __thiscall LevelUtils::readLevelMetaData(LevelUtils *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  ResourceInfo *pRVar4;
  ulong uVar5;
  RtWeakPtrBase *pRVar6;
  RtObject *pRVar7;
  long extraout_x0;
  ulong uVar8;
  undefined8 *puVar9;
  vector<ChallengeInfo,std::allocator<ChallengeInfo>> *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long *extraout_x0_00;
  undefined8 *puVar10;
  ulong uVar11;
  long extraout_x0_01;
  LevelInfo *this_02;
  string *extraout_x1;
  long lVar12;
  string *extraout_x1_00;
  string *psVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  string asStack_280 [8];
  RtMixedPtrBase aRStack_278 [8];
  RtWeakPtr aRStack_270 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_268 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_260 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_258 [8];
  undefined8 local_250;
  undefined8 local_248;
  string asStack_240 [8];
  undefined1 auStack_238 [8];
  string asStack_230 [8];
  RtWeakPtr<PowerPropertySheet> aRStack_228 [8];
  LevelDefinition aLStack_220 [136];
  vector<Sexy::RtId,std::allocator<Sexy::RtId>> avStack_198 [344];
  undefined1 local_40;
  undefined8 local_38 [3];
  vector<WaveManagerInfo,std::allocator<WaveManagerInfo>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_0547429c(param_1);
  Sexy::OutputDebugStrF((wchar_t *)"LevelUtils::readLevelMetaData start process level %s",uVar3);
  std::string::string(asStack_280,"RESFILE_PACKAGES_LEVELS_");
  nop();
  FUN_054757c0(asStack_280,param_1);
  Sexy::Upper((Sexy *)asStack_280,extraout_x1);
  FUN_05474278(asStack_280,asStack_230);
  std::string::~string(asStack_230);
  Sexy::ResourceManager::GetResourceForStringIdT<Sexy::GenericResFile>
            (*(string **)(gLawnApp + 0x848),SUB81(asStack_280,0));
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_278);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_278);
    std::string::~string(asStack_280);
  }
  else {
    LevelInfo::LevelInfo((LevelInfo *)asStack_230);
    uVar14 = 0;
    Sexy::Lower((Sexy *)param_1,(string *)local_38);
    FUN_05474278(asStack_230,(string *)&local_250);
    std::string::~string((string *)&local_250);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_228,(RtWeakPtr *)aRStack_278);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_250,(RtWeakPtrBase *)aRStack_278);
    loadLevelDefinitionFromResource(aRStack_270,this,(string *)&local_250);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_250);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_270);
    LevelDefinition::operator=(aLStack_220,(LevelDefinition *)pRVar4);
    std::vector<Sexy::RtId,std::allocator<Sexy::RtId>>::clear(avStack_198);
    while( true ) {
      uVar3 = *(undefined8 *)(pRVar4 + 0x88);
      uVar5 = FUN_03e75a18(uVar3,*(undefined8 *)(pRVar4 + 0x90));
      if (uVar5 <= uVar14) break;
      pRVar6 = (RtWeakPtrBase *)FUN_03e75a68(uVar3,uVar14);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_258,pRVar6);
      cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aRStack_258);
      if (cVar1 == '\0') {
        pRVar7 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_258);
        bVar2 = Sexy::RtObject::IsA<StarChallengeModuleProperties>(pRVar7);
        if (bVar2) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_258);
          nop();
          if (extraout_x0 == 0) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_258);
            uVar3 = *(undefined8 *)(pRVar4 + 0x88);
            uVar5 = FUN_03e75a18(uVar3,*(undefined8 *)(pRVar4 + 0x90));
            break;
          }
          uVar5 = 0;
          local_40 = *(undefined1 *)(extraout_x0 + 0x70);
          uVar8 = FUN_03e75a70(*(undefined8 *)(extraout_x0 + 0x40),
                               *(undefined8 *)(extraout_x0 + 0x48));
          std::
          vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
          ::resize((vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
                    *)local_38,uVar8);
          while( true ) {
            uVar3 = *(undefined8 *)(extraout_x0 + 0x40);
            uVar8 = FUN_03e75a70(uVar3,*(undefined8 *)(extraout_x0 + 0x48));
            if (uVar8 <= uVar5) break;
            puVar9 = (undefined8 *)FUN_03e75a84(uVar3,uVar5);
            this_00 = (vector<ChallengeInfo,std::allocator<ChallengeInfo>> *)
                      FUN_03e75a90(local_38[0],uVar5);
            uVar8 = FUN_03e75a9c(*puVar9,puVar9[1]);
            std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>::resize(this_00,uVar8);
            uVar8 = 0;
            while( true ) {
              uVar3 = *puVar9;
              uVar11 = FUN_03e75a9c(uVar3,puVar9[1]);
              if (uVar11 <= uVar8) break;
              this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e75aa8(uVar3,uVar8);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
              nop();
              puVar10 = (undefined8 *)FUN_03e75ab0(*(undefined8 *)this_00,uVar8);
              uVar3 = (**(code **)*extraout_x0_00)(extraout_x0_00);
              lVar12 = *extraout_x0_00;
              *puVar10 = uVar3;
              uVar3 = (**(code **)(lVar12 + 0x80))(extraout_x0_00);
              lVar12 = *extraout_x0_00;
              puVar10[1] = uVar3;
              (**(code **)(lVar12 + 0x88))((string *)&local_250,extraout_x0_00);
              FUN_054766c8(puVar10 + 2,(string *)&local_250);
              FUN_05476c50((string *)&local_250);
              (**(code **)(*extraout_x0_00 + 0x90))((string *)&local_250,extraout_x0_00);
              FUN_054766c8(puVar10 + 3,(string *)&local_250);
              FUN_05476c50((string *)&local_250);
              uVar8 = uVar8 + 1;
            }
            uVar5 = uVar5 + 1;
          }
        }
      }
      uVar14 = uVar14 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_258);
    }
    auVar15._8_8_ = asStack_240;
    auVar15._0_8_ = uVar5;
    for (uVar14 = 0; psVar13 = auVar15._8_8_, uVar14 < auVar15._0_8_; uVar14 = uVar14 + 1) {
      pRVar6 = (RtWeakPtrBase *)FUN_03e75a68(uVar3,uVar14);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_268,pRVar6);
      cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aRStack_268);
      if (cVar1 == '\0') {
        pRVar7 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_268);
        bVar2 = Sexy::RtObject::IsA<WaveManagerModuleProperties>(pRVar7);
        if (bVar2) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_268);
          nop();
          if (extraout_x0_01 == 0) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_268);
            psVar13 = extraout_x1_00;
            break;
          }
          std::vector<WaveManagerInfo,std::allocator<WaveManagerInfo>>::clear(avStack_20);
          uVar5 = 0;
          while( true ) {
            uVar3 = *(undefined8 *)(extraout_x0_01 + 0x68);
            uVar8 = FUN_03e75ab8(uVar3,*(undefined8 *)(extraout_x0_01 + 0x70));
            if (uVar8 <= uVar5) break;
            pRVar6 = (RtWeakPtrBase *)FUN_03e75ac4(uVar3,uVar5);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_260,pRVar6);
            ChallengeInfo::ChallengeInfo((ChallengeInfo *)&local_250);
            puVar9 = (undefined8 *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_260);
            local_250 = (**(code **)*puVar9)();
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_260);
            local_248 = WaveManagerModuleProperties::GetModuleClass();
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_260);
            WaveManagerProperties::GetDescription();
            FUN_054766c8(asStack_240,aRStack_258);
            FUN_05476c50(aRStack_258);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_260);
            WaveManagerProperties::GetDescriptionName();
            FUN_054766c8(auStack_238,aRStack_258);
            FUN_05476c50(aRStack_258);
            std::vector<WaveManagerInfo,std::allocator<WaveManagerInfo>>::push_back
                      (avStack_20,(WaveManagerInfo *)&local_250);
            WaveManagerInfo::~WaveManagerInfo((WaveManagerInfo *)&local_250);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_260);
            uVar5 = uVar5 + 1;
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_268);
      uVar3 = *(undefined8 *)(pRVar4 + 0x88);
      auVar15 = FUN_03e75a18(uVar3,*(undefined8 *)(pRVar4 + 0x90));
    }
    Sexy::Lower((Sexy *)param_1,psVar13);
    this_02 = (LevelInfo *)
              std::
              map<std::string,LevelInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,LevelInfo>>>
              ::operator[]((map<std::string,LevelInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,LevelInfo>>>
                            *)(this + 0x10),(string *)&local_250);
    LevelInfo::operator=(this_02,(LevelInfo *)asStack_230);
    uVar3 = FUN_0547429c(param_1);
    Sexy::OutputDebugStrF((wchar_t *)"LevelUtils::readLevelMetaData end process level %s",uVar3);
    std::string::~string((string *)&local_250);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_270);
    LevelInfo::~LevelInfo((LevelInfo *)asStack_230);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_278);
    std::string::~string(asStack_280);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelUtils::InitializeMetaDataStore() */

void __thiscall LevelUtils::InitializeMetaDataStore(LevelUtils *this)

{
  ResourceGroup *this_00;
  ulong uVar1;
  long *plVar2;
  char *pcVar3;
  ulong uVar4;
  ResourceManager *this_01;
  char *__haystack;
  undefined8 uVar5;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  std::
  map<std::string,LevelInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,LevelInfo>>>
  ::clear((map<std::string,LevelInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,LevelInfo>>>
           *)(this + 0x10));
  this_01 = *(ResourceManager **)(gLawnApp + 0x848);
  std::string::string((string *)&local_20,"Packages");
  this_00 = (ResourceGroup *)
            Sexy::ResourceManager::GetResourceGroupNamed(this_01,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  Sexy::ResourceGroup::GetResources(this_00,(vector *)&local_20,(ResourceInfoClass *)0x0,true,true);
  uVar5 = local_20;
  uVar1 = FUN_03e75a54(local_20,local_18);
  if (uVar1 != 0) {
    do {
      plVar2 = (long *)FUN_03e75a60(uVar5,uVar4);
      __haystack = *(char **)(*plVar2 + 0x38);
      pcVar3 = strstr(__haystack,"RESFILE_PACKAGES_LEVELS_");
      if (__haystack == pcVar3) {
        Sexy::StrFormat("%s",asStack_28,__haystack + 0x18);
        readLevelMetaData(this,asStack_28);
        std::string::~string(asStack_28);
        uVar5 = local_20;
        uVar1 = FUN_03e75a54(local_20,local_18);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  this[8] = (LevelUtils)0x1;
  std::vector<Sexy::ResourceInfo*,std::allocator<Sexy::ResourceInfo*>>::~vector
            ((vector<Sexy::ResourceInfo*,std::allocator<Sexy::ResourceInfo*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelUtils::LoadLevelDefinition(std::string const&, bool) */

void LevelUtils::LoadLevelDefinition(string *param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  string *psVar4;
  undefined8 uVar5;
  long lVar6;
  ColourFit *this;
  void *__src;
  PVZDB *pPVar7;
  RtObject *this_00;
  int extraout_w1;
  string *psVar8;
  char in_w2;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr aRStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [32];
  string asStack_38 [48];
  long local_8;
  
  psVar8 = (string *)(ulong)param_2;
  local_8 = ___stack_chk_guard;
  psVar4 = (string *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::TryLoadLevelDef(psVar4);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_80);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_80);
    goto LAB_03e7b088;
  }
  uVar5 = Sexy::LazySingleton<PVZLevelNetworkManager>::GetInstance();
  FUN_05475d88(asStack_38,psVar8);
  PVZLevelNetworkManager::GetLevelLocalPath(asStack_78,uVar5,asStack_38);
  std::string::~string(asStack_38);
  cVar2 = Sexy::SexyAppBase::FileExists(Sexy::gSexyAppBase,asStack_78);
  if (cVar2 == '\0') {
    if (in_w2 != '\0') goto LAB_03e7b038;
LAB_03e7b138:
    cVar2 = DoesLevelExist((LevelUtils *)param_1,psVar8);
    if (cVar2 != '\0') goto LAB_03e7b038;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  else {
    Sexy::Buffer::Buffer((Buffer *)asStack_38);
    cVar2 = Sexy::SexyAppBase::ReadBufferFromFile
                      ((string *)Sexy::gSexyAppBase,(Buffer *)asStack_78,SUB81(asStack_38,0));
    Sexy::SexyAppBase::EraseFile((string *)Sexy::gSexyAppBase);
    if (cVar2 == '\0') {
      uVar5 = FUN_0547429c(asStack_78);
      Sexy::OutputDebugStrF
                ((wchar_t *)"PVZDB::LoadPackageForTableFromFile failed to open file for reading %s."
                 ,uVar5);
    }
    else {
      UnloadLevelDefinition();
      iVar3 = Sexy::Buffer::GetDataLen((Buffer *)asStack_38);
      this = operator_new__((long)(iVar3 + 1));
      iVar3 = Sexy::Buffer::GetDataLen((Buffer *)asStack_38);
      memset(this,0,(long)(iVar3 + 1));
      __src = (void *)Sexy::Buffer::GetDataPtr((Buffer *)asStack_38);
      iVar3 = Sexy::Buffer::GetDataLen((Buffer *)asStack_38);
      memcpy(this,__src,(long)iVar3);
      std::string::string(asStack_70,(char *)this);
      nop();
      pPVar7 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::LoadPackageForTableFromJson(pPVar7,0x25,asStack_70,0);
      EATextSquish::ColourFit::~ColourFit(this);
      uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable((Iterator *)aRStack_58,uVar5,0x25);
      while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)aRStack_58), bVar1
            ) {
        Sexy::RtDbTable::Iterator::operator*((Iterator *)aRStack_58);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,(RtWeakPtrBase *)aRStack_60);
        Sexy::RtId::~RtId(aRStack_60);
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_68);
        if (bVar1) {
          this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
          bVar1 = Sexy::RtObject::IsA<LevelDefinition>(this_00);
          if (bVar1) {
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_60,(RtWeakPtrBase *)aRStack_68);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_60);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
            Sexy::RtDbTable::Iterator::~Iterator((Iterator *)aRStack_58);
            std::string::~string(asStack_70);
            Sexy::Buffer::~Buffer((Buffer *)asStack_38);
            goto LAB_03e7b080;
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
        Sexy::RtDbTable::Iterator::operator++((Iterator *)aRStack_58,extraout_w1);
      }
      uVar5 = FUN_0547429c(psVar8);
      Sexy::StrFormat("No LevelDefinition object was found in level file: \'%s\'!",aRStack_60,uVar5)
      ;
      std::string::~string((string *)aRStack_60);
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)aRStack_58);
      std::string::~string(asStack_70);
    }
    Sexy::Buffer::~Buffer((Buffer *)asStack_38);
    if (in_w2 == '\0') goto LAB_03e7b138;
LAB_03e7b038:
    lVar6 = GetLevelInfo((LevelUtils *)param_1,psVar8);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_38,(RtWeakPtrBase *)(lVar6 + 8));
    loadLevelDefinitionFromResource(aRStack_58,param_1,asStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  }
LAB_03e7b080:
  std::string::~string(asStack_78);
LAB_03e7b088:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelUtils::SimpleLoadLevelDefinition(std::string const&, bool) */

void LevelUtils::SimpleLoadLevelDefinition(string *param_1,bool param_2)

{
  char cVar1;
  char in_w2;
  RtMixedPtrBase *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_w2 == '\0') {
    FUN_05475d88(asStack_10);
  }
  else {
    GetHardLevelName(param_1);
  }
  LoadLevelDefinition(param_1,SUB81(asStack_10,0));
  std::string::~string(asStack_10);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(in_x8);
  if (cVar1 == '\0') {
    LoadLevelDefinition(param_1,param_2);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)in_x8,(RtWeakPtr *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

