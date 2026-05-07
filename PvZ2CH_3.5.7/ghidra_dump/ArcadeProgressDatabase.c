// Class: ArcadeProgressDatabase


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeProgressDatabase::Instance() */

void ArcadeProgressDatabase::Instance(void)

{
  hash_node *phVar1;
  hash_node **pphVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  phVar1 = (hash_node *)ProfileUtils::Profile();
  pphVar2 = (hash_node **)ArcadePropertySheet::Get();
  eastl::
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ::hashtable_iterator_base
            ((hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
              *)&local_18,phVar1,pphVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18,uStack_10);
}


/* ArcadeProgressDatabase::IsPowerUpUnlocked(std::string const&, std::string const&) const */

void __thiscall
ArcadeProgressDatabase::IsPowerUpUnlocked
          (ArcadeProgressDatabase *this,string *param_1,string *param_2)

{
  vector *pvVar1;
  
  pvVar1 = (vector *)PlayerInfo::GetPowerUpProgress(*(PlayerInfo **)this);
  ArcadeSaveDataEncoder::IsPowerUpUnlockedInCollection(param_1,param_2,pvVar1);
  return;
}


/* ArcadeProgressDatabase::getSaveDataPackIDForLevelID(std::string const&) const */

void ArcadeProgressDatabase::getSaveDataPackIDForLevelID(string *param_1)

{
  char cVar1;
  string *in_x1;
  
  cVar1 = ArcadePropertySheet::IsLevelEndless(*(ArcadePropertySheet **)(param_1 + 8),in_x1);
  if (cVar1 == '\0') {
    ArcadePropertySheet::GetLevelPackByLevelID(*(ArcadePropertySheet **)(param_1 + 8),in_x1);
    FUN_05475d88();
    return;
  }
  ArcadePropertySheet::GetModeByLevelID(*(ArcadePropertySheet **)(param_1 + 8),in_x1);
  FUN_05475d88();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeProgressDatabase::IsLevelComplete(std::string const&) const */

void __thiscall
ArcadeProgressDatabase::IsLevelComplete(ArcadeProgressDatabase *this,string *param_1)

{
  undefined4 uVar1;
  vector *pvVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar2 = (vector *)PlayerInfo::GetArcadeProgress(*(PlayerInfo **)this);
  getSaveDataPackIDForLevelID((string *)this);
  uVar1 = ArcadeSaveDataEncoder::IsLevelCompletedInPack(param_1,asStack_10,pvVar2);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeProgressDatabase::GetCurrentEndlessWave(std::string const&) const */

void __thiscall
ArcadeProgressDatabase::GetCurrentEndlessWave(ArcadeProgressDatabase *this,string *param_1)

{
  undefined4 uVar1;
  vector *pvVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar2 = (vector *)PlayerInfo::GetArcadeProgress(*(PlayerInfo **)this);
  getSaveDataPackIDForLevelID((string *)this);
  uVar1 = ArcadeSaveDataEncoder::GetCurrentEndlessWaveInPack(param_1,asStack_10,pvVar2);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeProgressDatabase::GetHighestCompletedEndlessWave(std::string const&) const */

void __thiscall
ArcadeProgressDatabase::GetHighestCompletedEndlessWave(ArcadeProgressDatabase *this,string *param_1)

{
  undefined4 uVar1;
  vector *pvVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar2 = (vector *)PlayerInfo::GetArcadeProgress(*(PlayerInfo **)this);
  getSaveDataPackIDForLevelID((string *)this);
  uVar1 = ArcadeSaveDataEncoder::GetHighestCompletedEndlessWaveInPack(param_1,asStack_10,pvVar2);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeProgressDatabase::GetCurrentVaseBreakerEndlessState(std::string const&, int&, int&) const
    */

void __thiscall
ArcadeProgressDatabase::GetCurrentVaseBreakerEndlessState
          (ArcadeProgressDatabase *this,string *param_1,int *param_2,int *param_3)

{
  vector *pvVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar1 = (vector *)PlayerInfo::GetArcadeProgress(*(PlayerInfo **)this);
  getSaveDataPackIDForLevelID((string *)this);
  ArcadeSaveDataEncoder::GetCurrentVaseBreakerEndlessState
            (param_1,asStack_10,param_2,param_3,pvVar1);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeProgressDatabase::AreAllPowerUpsUnlockedInCollection(std::string const&) const */

void __thiscall
ArcadeProgressDatabase::AreAllPowerUpsUnlockedInCollection
          (ArcadeProgressDatabase *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  long lVar4;
  string *psVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = ArcadePropertySheet::GetPowerUpCollectionByID(*(ArcadePropertySheet **)(this + 8),param_1)
  ;
  local_18 = FUN_0365e2d4(*(undefined8 *)(lVar4 + 8));
  local_10 = FUN_0365e324(*(undefined8 *)(lVar4 + 0x10));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = IsPowerUpUnlocked(this,psVar5,param_1);
    uVar3 = 0;
    if (cVar1 == '\0') goto LAB_0365e410;
    std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_18);
  }
  uVar3 = 1;
LAB_0365e410:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeProgressDatabase::IsAnyLevelComplete() const */

void __thiscall ArcadeProgressDatabase::IsAnyLevelComplete(ArcadeProgressDatabase *this)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)PlayerInfo::GetArcadeProgress(*(PlayerInfo **)this);
  local_18 = FUN_0365e234(*puVar3);
  local_10 = FUN_0365e284(puVar3[1]);
  while( true ) {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) break;
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = std::vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>>::empty
                      ((vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>> *)
                       (lVar4 + 0x10));
    if (cVar1 == '\0') break;
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeProgressDatabase::IsPackComplete(std::string const&) const */

void __thiscall ArcadeProgressDatabase::IsPackComplete(ArcadeProgressDatabase *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  ArcadeLevelPack *pAVar3;
  TGABagData *pTVar4;
  TGABagData aTStack_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  ArcadeLevelPack aAStack_70 [64];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(param_1);
  if (cVar1 == '\0') {
    pAVar3 = (ArcadeLevelPack *)
             ArcadePropertySheet::GetLevelPackByID(*(ArcadePropertySheet **)(this + 8),param_1);
    ArcadePropertySheetHelpers::ArcadeLevelPack::ArcadeLevelPack(aAStack_70,pAVar3);
    local_80 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(avStack_30);
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(avStack_30);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78), bVar2)
    {
      pTVar4 = (TGABagData *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80)
      ;
      TGABagData::TGABagData(aTStack_88,pTVar4);
      cVar1 = IsLevelComplete(this,(string *)aTStack_88);
      if (cVar1 == '\0') {
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_88);
        cVar1 = '\0';
        goto LAB_0365eefc;
      }
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_88);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
    }
    cVar1 = '\x01';
LAB_0365eefc:
    ArcadePropertySheetHelpers::ArcadeLevelPack::~ArcadeLevelPack(aAStack_70);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeProgressDatabase::IsLevelUnlocked(std::string const&) const */

void __thiscall
ArcadeProgressDatabase::IsLevelUnlocked(ArcadeProgressDatabase *this,string *param_1)

{
  undefined8 uVar1;
  char cVar2;
  ArcadeLevelPack *pAVar3;
  long lVar4;
  string *psVar5;
  ArcadeMode *pAVar6;
  int iVar7;
  long lVar8;
  ArcadeLevelPack aAStack_70 [56];
  string asStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = ArcadePropertySheet::IsLevelEndless(*(ArcadePropertySheet **)(this + 8),param_1);
  if (cVar2 == '\0') {
    pAVar3 = (ArcadeLevelPack *)
             ArcadePropertySheet::GetLevelPackByLevelID(*(ArcadePropertySheet **)(this + 8),param_1)
    ;
    ArcadePropertySheetHelpers::ArcadeLevelPack::ArcadeLevelPack(aAStack_70,pAVar3);
    uVar1 = local_30;
    lVar4 = FUN_0365dca0(local_30,local_28);
    lVar8 = 0;
    do {
      iVar7 = (int)lVar8;
      cVar2 = '\0';
      if (lVar8 == lVar4) goto LAB_0365efbc;
      psVar5 = (string *)FUN_0365dcac(uVar1,lVar8);
      cVar2 = std::operator==(psVar5,param_1);
      lVar8 = lVar8 + 1;
    } while (cVar2 == '\0');
    cVar2 = IsPackComplete(this,asStack_38);
    iVar7 = iVar7 + -1;
    if ((-1 < iVar7) && (cVar2 != '\0')) {
      lVar8 = (long)iVar7;
      do {
        iVar7 = iVar7 + -1;
        psVar5 = (string *)FUN_0365dcac(local_30,lVar8);
        cVar2 = IsLevelComplete(this,psVar5);
        if (cVar2 == '\0') break;
        lVar8 = lVar8 + -1;
      } while (-1 < iVar7);
    }
LAB_0365efbc:
    ArcadePropertySheetHelpers::ArcadeLevelPack::~ArcadeLevelPack(aAStack_70);
  }
  else {
    pAVar6 = (ArcadeMode *)
             ArcadePropertySheet::GetModeByLevelID(*(ArcadePropertySheet **)(this + 8),param_1);
    ArcadePropertySheetHelpers::ArcadeMode::ArcadeMode((ArcadeMode *)aAStack_70,pAVar6);
    cVar2 = IsPackComplete(this,(string *)&local_30);
    ArcadePropertySheetHelpers::ArcadeMode::~ArcadeMode((ArcadeMode *)aAStack_70);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeProgressDatabase::GetHighestCompletedPackLevel(std::string const&) const */

void __thiscall
ArcadeProgressDatabase::GetHighestCompletedPackLevel(ArcadeProgressDatabase *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  ArcadeLevelPack *pAVar3;
  TGABagData *pTVar4;
  int iVar5;
  TGABagData aTStack_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  ArcadeLevelPack aAStack_70 [64];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(param_1);
  iVar5 = 1;
  if (cVar1 == '\0') {
    pAVar3 = (ArcadeLevelPack *)
             ArcadePropertySheet::GetLevelPackByID(*(ArcadePropertySheet **)(this + 8),param_1);
    ArcadePropertySheetHelpers::ArcadeLevelPack::ArcadeLevelPack(aAStack_70,pAVar3);
    local_80 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(avStack_30);
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(avStack_30);
    iVar5 = 0;
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78), bVar2)
    {
      pTVar4 = (TGABagData *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80)
      ;
      TGABagData::TGABagData(aTStack_88,pTVar4);
      cVar1 = IsLevelComplete(this,(string *)aTStack_88);
      if (cVar1 == '\0') {
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_88);
        ArcadePropertySheetHelpers::ArcadeLevelPack::~ArcadeLevelPack(aAStack_70);
        goto LAB_0365f0cc;
      }
      iVar5 = iVar5 + 1;
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_88);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
    }
    ArcadePropertySheetHelpers::ArcadeLevelPack::~ArcadeLevelPack(aAStack_70);
  }
LAB_0365f0cc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeProgressDatabase::CompleteLevel(std::string const&) */

void __thiscall ArcadeProgressDatabase::CompleteLevel(ArcadeProgressDatabase *this,string *param_1)

{
  vector *pvVar1;
  string asStack_28 [8];
  vector<ArcadePackProgress,std::allocator<ArcadePackProgress>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar1 = (vector *)PlayerInfo::GetArcadeProgress(*(PlayerInfo **)this);
  std::vector<ArcadePackProgress,std::allocator<ArcadePackProgress>>::vector(avStack_20,pvVar1);
  getSaveDataPackIDForLevelID((string *)this);
  ArcadeSaveDataEncoder::CompleteLevelInPack(param_1,asStack_28,(vector *)avStack_20);
  PlayerInfo::SetArcadeProgress(*(PlayerInfo **)this,(vector *)avStack_20);
  std::string::~string(asStack_28);
  std::vector<ArcadePackProgress,std::allocator<ArcadePackProgress>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeProgressDatabase::CheatUncompleteLevel(std::string const&) */

void __thiscall
ArcadeProgressDatabase::CheatUncompleteLevel(ArcadeProgressDatabase *this,string *param_1)

{
  vector *pvVar1;
  string asStack_28 [8];
  vector<ArcadePackProgress,std::allocator<ArcadePackProgress>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar1 = (vector *)PlayerInfo::GetArcadeProgress(*(PlayerInfo **)this);
  std::vector<ArcadePackProgress,std::allocator<ArcadePackProgress>>::vector(avStack_20,pvVar1);
  getSaveDataPackIDForLevelID((string *)this);
  ArcadeSaveDataEncoder::CheatUncompleteLevelInPack(param_1,asStack_28,(vector *)avStack_20);
  PlayerInfo::SetArcadeProgress(*(PlayerInfo **)this,(vector *)avStack_20);
  std::string::~string(asStack_28);
  std::vector<ArcadePackProgress,std::allocator<ArcadePackProgress>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeProgressDatabase::CompleteCurrentEndlessWave(std::string const&) */

void __thiscall
ArcadeProgressDatabase::CompleteCurrentEndlessWave(ArcadeProgressDatabase *this,string *param_1)

{
  int iVar1;
  int iVar2;
  vector *pvVar3;
  int *piVar4;
  int local_30;
  int local_2c;
  string asStack_28 [8];
  vector<ArcadePackProgress,std::allocator<ArcadePackProgress>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar3 = (vector *)PlayerInfo::GetArcadeProgress(*(PlayerInfo **)this);
  std::vector<ArcadePackProgress,std::allocator<ArcadePackProgress>>::vector(avStack_20,pvVar3);
  getSaveDataPackIDForLevelID((string *)this);
  iVar2 = GetCurrentEndlessWave(this,param_1);
  local_30 = iVar2;
  local_2c = GetHighestCompletedEndlessWave(this,param_1);
  piVar4 = eastl::max_alt<int>(&local_30,&local_2c);
  iVar1 = *piVar4;
  ArcadeSaveDataEncoder::SetCurrentEndlessWaveInPack
            (param_1,asStack_28,iVar2 + 1,(vector *)avStack_20);
  ArcadeSaveDataEncoder::SetHighestCompletedEndlessWaveInPack
            (param_1,asStack_28,iVar1,(vector *)avStack_20);
  PlayerInfo::SetArcadeProgress(*(PlayerInfo **)this,(vector *)avStack_20);
  std::string::~string(asStack_28);
  std::vector<ArcadePackProgress,std::allocator<ArcadePackProgress>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeProgressDatabase::ResetCurrentEndlessWave(std::string const&) */

void __thiscall
ArcadeProgressDatabase::ResetCurrentEndlessWave(ArcadeProgressDatabase *this,string *param_1)

{
  vector *pvVar1;
  string asStack_28 [8];
  vector<ArcadePackProgress,std::allocator<ArcadePackProgress>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar1 = (vector *)PlayerInfo::GetArcadeProgress(*(PlayerInfo **)this);
  std::vector<ArcadePackProgress,std::allocator<ArcadePackProgress>>::vector(avStack_20,pvVar1);
  getSaveDataPackIDForLevelID((string *)this);
  ArcadeSaveDataEncoder::SetCurrentEndlessWaveInPack(param_1,asStack_28,0,(vector *)avStack_20);
  PlayerInfo::SetArcadeProgress(*(PlayerInfo **)this,(vector *)avStack_20);
  std::string::~string(asStack_28);
  std::vector<ArcadePackProgress,std::allocator<ArcadePackProgress>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeProgressDatabase::SetCurrentVaseBreakerEndlessState(std::string const&, int, int) */

void __thiscall
ArcadeProgressDatabase::SetCurrentVaseBreakerEndlessState
          (ArcadeProgressDatabase *this,string *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  vector *pvVar3;
  string asStack_28 [8];
  vector<ArcadePackProgress,std::allocator<ArcadePackProgress>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = ClampInt(param_2,0,9999);
  iVar2 = ClampInt(param_3,0,0xf);
  pvVar3 = (vector *)PlayerInfo::GetArcadeProgress(*(PlayerInfo **)this);
  std::vector<ArcadePackProgress,std::allocator<ArcadePackProgress>>::vector(avStack_20,pvVar3);
  getSaveDataPackIDForLevelID((string *)this);
  ArcadeSaveDataEncoder::SetCurrentVaseBreakerEndlessState
            (param_1,asStack_28,iVar1,iVar2,(vector *)avStack_20);
  PlayerInfo::SetArcadeProgress(*(PlayerInfo **)this,(vector *)avStack_20);
  std::string::~string(asStack_28);
  std::vector<ArcadePackProgress,std::allocator<ArcadePackProgress>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeProgressDatabase::UnlockPowerUp(std::string const&, std::string const&) */

void __thiscall
ArcadeProgressDatabase::UnlockPowerUp(ArcadeProgressDatabase *this,string *param_1,string *param_2)

{
  vector *pvVar1;
  PowerUpCollection *this_00;
  long lVar2;
  PlayerInfo *pPVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  vector<PowerUpCollectionProgress,std::allocator<PowerUpCollectionProgress>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar1 = (vector *)PlayerInfo::GetPowerUpProgress(*(PlayerInfo **)this);
  std::vector<PowerUpCollectionProgress,std::allocator<PowerUpCollectionProgress>>::vector
            (avStack_20,pvVar1);
  ArcadeSaveDataEncoder::UnlockPowerUpInCollection(param_1,param_2,(vector *)avStack_20);
  PlayerInfo::SetPowerUpProgress(*(PlayerInfo **)this,(vector *)avStack_20);
  this_00 = (PowerUpCollection *)
            ArcadePropertySheet::GetPowerUpCollectionByID
                      (*(ArcadePropertySheet **)(this + 8),param_2);
  lVar2 = ArcadePropertySheetHelpers::PowerUpCollection::GetPowerUpByID(this_00,param_1);
  FUN_05475d88(asStack_28,lVar2 + 0x18);
  GameFeatureType::GetGameFeatureTypeFromUnlockString((GameFeatureType *)aRStack_30,asStack_28);
  std::string::~string(asStack_28);
  pPVar3 = *(PlayerInfo **)this;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
  PlayerInfo::UnlockGameFeature(pPVar3,*(undefined4 *)(lVar2 + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  std::vector<PowerUpCollectionProgress,std::allocator<PowerUpCollectionProgress>>::~vector
            (avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeProgressDatabase::CheatLockPowerUp(std::string const&, std::string const&) */

void __thiscall
ArcadeProgressDatabase::CheatLockPowerUp
          (ArcadeProgressDatabase *this,string *param_1,string *param_2)

{
  vector *pvVar1;
  PowerUpCollection *this_00;
  long lVar2;
  PlayerInfo *pPVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  vector<PowerUpCollectionProgress,std::allocator<PowerUpCollectionProgress>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar1 = (vector *)PlayerInfo::GetPowerUpProgress(*(PlayerInfo **)this);
  std::vector<PowerUpCollectionProgress,std::allocator<PowerUpCollectionProgress>>::vector
            (avStack_20,pvVar1);
  ArcadeSaveDataEncoder::CheatLockPowerUpInCollection(param_1,param_2,(vector *)avStack_20);
  PlayerInfo::SetPowerUpProgress(*(PlayerInfo **)this,(vector *)avStack_20);
  this_00 = (PowerUpCollection *)
            ArcadePropertySheet::GetPowerUpCollectionByID
                      (*(ArcadePropertySheet **)(this + 8),param_2);
  lVar2 = ArcadePropertySheetHelpers::PowerUpCollection::GetPowerUpByID(this_00,param_1);
  FUN_05475d88(asStack_28,lVar2 + 0x18);
  GameFeatureType::GetGameFeatureTypeFromUnlockString((GameFeatureType *)aRStack_30,asStack_28);
  std::string::~string(asStack_28);
  pPVar3 = *(PlayerInfo **)this;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
  PlayerInfo::SetGameFeatureUnlockState(pPVar3,*(undefined4 *)(lVar2 + 0x30),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  std::vector<PowerUpCollectionProgress,std::allocator<PowerUpCollectionProgress>>::~vector
            (avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

