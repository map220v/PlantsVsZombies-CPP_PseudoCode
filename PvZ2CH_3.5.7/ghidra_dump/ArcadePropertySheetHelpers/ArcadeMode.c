// Class: ArcadePropertySheetHelpers::ArcadeMode


/* ArcadePropertySheetHelpers::ArcadeMode::~ArcadeMode() */

void __thiscall ArcadePropertySheetHelpers::ArcadeMode::~ArcadeMode(ArcadeMode *this)

{
  std::
  vector<ArcadePropertySheetHelpers::ArcadeLevelPack,std::allocator<ArcadePropertySheetHelpers::ArcadeLevelPack>>
  ::~vector((vector<ArcadePropertySheetHelpers::ArcadeLevelPack,std::allocator<ArcadePropertySheetHelpers::ArcadeLevelPack>>
             *)(this + 0x48));
  std::string::~string((string *)(this + 0x40));
  ArcadeEndlessLevel::~ArcadeEndlessLevel((ArcadeEndlessLevel *)(this + 0x28));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* ArcadePropertySheetHelpers::ArcadeMode::ArcadeMode(ArcadePropertySheetHelpers::ArcadeMode const&)
    */

void __thiscall
ArcadePropertySheetHelpers::ArcadeMode::ArcadeMode(ArcadeMode *this,ArcadeMode *param_1)

{
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  this[0x20] = param_1[0x20];
  ArcadeEndlessLevel::ArcadeEndlessLevel
            ((ArcadeEndlessLevel *)(this + 0x28),(ArcadeEndlessLevel *)(param_1 + 0x28));
  FUN_05475d88(this + 0x40,param_1 + 0x40);
  std::
  vector<ArcadePropertySheetHelpers::ArcadeLevelPack,std::allocator<ArcadePropertySheetHelpers::ArcadeLevelPack>>
  ::vector((vector<ArcadePropertySheetHelpers::ArcadeLevelPack,std::allocator<ArcadePropertySheetHelpers::ArcadeLevelPack>>
            *)(this + 0x48),(vector *)(param_1 + 0x48));
  return;
}


/* ArcadePropertySheetHelpers::ArcadeMode::ArcadeMode() */

void __thiscall ArcadePropertySheetHelpers::ArcadeMode::ArcadeMode(ArcadeMode *this)

{
  Set8BytesTo0();
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  this[0x20] = (ArcadeMode)0x0;
  ArcadeEndlessLevel::ArcadeEndlessLevel((ArcadeEndlessLevel *)(this + 0x28));
  Set8BytesTo0(this + 0x40);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  return;
}


/* ArcadePropertySheetHelpers::ArcadeMode::TEMPNAMEPLACEHOLDERVALUE(ArcadePropertySheetHelpers::ArcadeMode
   const&) */

ArcadeMode * __thiscall
ArcadePropertySheetHelpers::ArcadeMode::operator=(ArcadeMode *this,ArcadeMode *param_1)

{
  thunk_FUN_05475e00();
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  this[0x20] = param_1[0x20];
  ArcadeEndlessLevel::operator=
            ((ArcadeEndlessLevel *)(this + 0x28),(ArcadeEndlessLevel *)(param_1 + 0x28));
  thunk_FUN_05475e00(this + 0x40,param_1 + 0x40);
  std::
  vector<ArcadePropertySheetHelpers::ArcadeLevelPack,std::allocator<ArcadePropertySheetHelpers::ArcadeLevelPack>>
  ::operator=((vector<ArcadePropertySheetHelpers::ArcadeLevelPack,std::allocator<ArcadePropertySheetHelpers::ArcadeLevelPack>>
               *)(this + 0x48),(vector *)(param_1 + 0x48));
  return this;
}


/* ArcadePropertySheetHelpers::ArcadeMode::HasPowerUpCollection() const */

byte __thiscall ArcadePropertySheetHelpers::ArcadeMode::HasPowerUpCollection(ArcadeMode *this)

{
  byte bVar1;
  
  bVar1 = FUN_0547419c(this + 0x10);
  return bVar1 ^ 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePropertySheetHelpers::ArcadeMode::GetLevelByID(std::string const&) const */

void __thiscall
ArcadePropertySheetHelpers::ArcadeMode::GetLevelByID(ArcadeMode *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  TextureInfo *this_00;
  string *psVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  psVar4 = (string *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  cVar1 = std::operator==(psVar4,param_1);
  if (cVar1 == '\0') {
    local_18 = FUN_0498946c(*(undefined8 *)(this + 0x48));
    local_10 = FUN_049894bc(*(undefined8 *)(this + 0x50));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2)
    {
      this_00 = (TextureInfo *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar1 = EA::Text::GlyphCache_Memory::EndUpdate(this_00);
      if ((cVar1 != '\0') &&
         (cVar1 = ArcadeLevelPack::ContainsLevelID((ArcadeLevelPack *)this_00,param_1),
         cVar1 != '\0')) {
        psVar4 = (string *)ArcadeLevelPack::GetLevelByID((ArcadeLevelPack *)this_00,param_1);
        goto LAB_04989814;
      }
      std::move_iterator<PennyGiftBoxGrowData*>::operator++
                ((move_iterator<PennyGiftBoxGrowData*> *)&local_18);
    }
    if (((DAT_06b733e8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b733e8), iVar3 != 0)) {
      psVar4 = (string *)&DAT_06b734a0;
      PakFileDesc::PakFileDesc((PakFileDesc *)&DAT_06b734a0);
      __cxa_guard_release(&DAT_06b733e8);
      __cxa_atexit(std::pair<std::string_const,Sexy::PILifeValueTable>::~pair,&DAT_06b734a0,
                   &DAT_06a88000);
    }
    else {
      psVar4 = (string *)&DAT_06b734a0;
    }
  }
LAB_04989814:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(psVar4);
}


/* ArcadePropertySheetHelpers::ArcadeMode::GetLevelPackByID(std::string const&) const */

ArcadeLevelPack * __thiscall
ArcadePropertySheetHelpers::ArcadeMode::GetLevelPackByID(ArcadeMode *this,string *param_1)

{
  char cVar1;
  int iVar2;
  ArcadeLevelPack *pAVar3;
  
  pAVar3 = GetByID<ArcadePropertySheetHelpers::ArcadeLevelPack>((vector *)(this + 0x48),param_1);
  cVar1 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)pAVar3);
  if (cVar1 == '\0') {
    if (((DAT_06b733c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b733c0), iVar2 != 0)) {
      pAVar3 = (ArcadeLevelPack *)&DAT_06b732e8;
      ArcadeLevelPack::ArcadeLevelPack((ArcadeLevelPack *)&DAT_06b732e8);
      __cxa_guard_release(&DAT_06b733c0);
      __cxa_atexit(ArcadeLevelPack::~ArcadeLevelPack,&DAT_06b732e8,&DAT_06a88000);
    }
    else {
      pAVar3 = (ArcadeLevelPack *)&DAT_06b732e8;
    }
  }
  return pAVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePropertySheetHelpers::ArcadeMode::GetLevelPackByLevelID(std::string const&) const */

void __thiscall
ArcadePropertySheetHelpers::ArcadeMode::GetLevelPackByLevelID(ArcadeMode *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  TextureInfo *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_0498946c(*(undefined8 *)(this + 0x48));
  local_10 = FUN_049894bc(*(undefined8 *)(this + 0x50));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (TextureInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
    ;
    cVar2 = EA::Text::GlyphCache_Memory::EndUpdate(this_00);
    if ((cVar2 != '\0') &&
       (cVar2 = ArcadeLevelPack::ContainsLevelID((ArcadeLevelPack *)this_00,param_1), cVar2 != '\0')
       ) goto LAB_04989ea8;
    std::move_iterator<PennyGiftBoxGrowData*>::operator++
              ((move_iterator<PennyGiftBoxGrowData*> *)&local_18);
  }
  if (((DAT_06b73530 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b73530), iVar3 != 0)) {
    this_00 = (TextureInfo *)&DAT_06b734c8;
    ArcadeLevelPack::ArcadeLevelPack((ArcadeLevelPack *)&DAT_06b734c8);
    __cxa_guard_release(&DAT_06b73530);
    __cxa_atexit(ArcadeLevelPack::~ArcadeLevelPack,&DAT_06b734c8,&DAT_06a88000);
  }
  else {
    this_00 = (TextureInfo *)&DAT_06b734c8;
  }
LAB_04989ea8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* ArcadePropertySheetHelpers::ArcadeMode::ContainsLevelPackID(std::string const&) const */

void __thiscall
ArcadePropertySheetHelpers::ArcadeMode::ContainsLevelPackID(ArcadeMode *this,string *param_1)

{
  bool bVar1;
  ArcadeLevelPack *pAVar2;
  
  bVar1 = ContainsID<ArcadePropertySheetHelpers::ArcadeLevelPack>((vector *)(this + 0x48),param_1);
  if (!bVar1) {
    return;
  }
  pAVar2 = GetByID<ArcadePropertySheetHelpers::ArcadeLevelPack>((vector *)(this + 0x48),param_1);
  EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)pAVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePropertySheetHelpers::ArcadeMode::ContainsLevelID(std::string const&) const */

void __thiscall
ArcadePropertySheetHelpers::ArcadeMode::ContainsLevelID(ArcadeMode *this,string *param_1)

{
  char cVar1;
  ArcadeLevelPack *pAVar2;
  undefined8 local_80;
  undefined8 local_78;
  ArcadeLevelPack aAStack_70 [104];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::operator==((string *)(this + 0x28),param_1);
  if (cVar1 == '\0') {
    local_80 = FUN_0498946c(*(undefined8 *)(this + 0x48));
    local_78 = FUN_049894bc(*(undefined8 *)(this + 0x50));
    while( true ) {
      cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)&local_78);
      if (!(bool)cVar1) break;
      pAVar2 = (ArcadeLevelPack *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
      ArcadeLevelPack::ArcadeLevelPack(aAStack_70,pAVar2);
      cVar1 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)aAStack_70);
      if (cVar1 != '\0') {
        cVar1 = ArcadeLevelPack::ContainsLevelID(aAStack_70,param_1);
        if (cVar1 != '\0') {
          ArcadeLevelPack::~ArcadeLevelPack(aAStack_70);
          break;
        }
      }
      ArcadeLevelPack::~ArcadeLevelPack(aAStack_70);
      std::move_iterator<PennyGiftBoxGrowData*>::operator++
                ((move_iterator<PennyGiftBoxGrowData*> *)&local_80);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePropertySheetHelpers::ArcadeMode::GetLevelPacks() const */

void ArcadePropertySheetHelpers::ArcadeMode::GetLevelPacks(void)

{
  bool bVar1;
  char cVar2;
  long in_x0;
  TextureInfo *pTVar3;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  local_18 = FUN_0498946c(*(undefined8 *)(in_x0 + 0x48));
  local_10 = FUN_049894bc(*(undefined8 *)(in_x0 + 0x50));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pTVar3 = (TextureInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar2 = EA::Text::GlyphCache_Memory::EndUpdate(pTVar3);
    if (cVar2 != '\0') {
      std::
      vector<ArcadePropertySheetHelpers::ArcadeLevelPack,std::allocator<ArcadePropertySheetHelpers::ArcadeLevelPack>>
      ::push_back((vector<ArcadePropertySheetHelpers::ArcadeLevelPack,std::allocator<ArcadePropertySheetHelpers::ArcadeLevelPack>>
                   *)in_x8,(ArcadeLevelPack *)pTVar3);
    }
    std::move_iterator<PennyGiftBoxGrowData*>::operator++
              ((move_iterator<PennyGiftBoxGrowData*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePropertySheetHelpers::ArcadeMode::ForEachLevel(std::function<void
   (ArcadePropertySheetHelpers::ArcadeLevel const&)>) const */

void __thiscall
ArcadePropertySheetHelpers::ArcadeMode::ForEachLevel
          (ArcadeMode *this,function<void(ArcadePropertySheetHelpers::ArcadeLevel_const&)> *param_2)

{
  bool bVar1;
  long lVar2;
  ArcadeLevel *pAVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetLevelPacks();
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
  if (bVar1) {
    do {
      lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      local_30 = FUN_04989300(*(undefined8 *)(lVar2 + 0x40));
      local_28 = FUN_049893a4(*(undefined8 *)(lVar2 + 0x48));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar1) {
        pAVar3 = (ArcadeLevel *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        std::function<void(ArcadePropertySheetHelpers::ArcadeLevel_const&)>::operator()
                  (param_2,pAVar3);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      }
      std::move_iterator<PennyGiftBoxGrowData*>::operator++
                ((move_iterator<PennyGiftBoxGrowData*> *)&local_40);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    } while (bVar1);
  }
  std::
  vector<ArcadePropertySheetHelpers::ArcadeLevelPack,std::allocator<ArcadePropertySheetHelpers::ArcadeLevelPack>>
  ::~vector((vector<ArcadePropertySheetHelpers::ArcadeLevelPack,std::allocator<ArcadePropertySheetHelpers::ArcadeLevelPack>>
             *)avStack_20);
  std::function<void(ArcadePropertySheetHelpers::ArcadeLevel_const&)>::operator()
            (param_2,(ArcadeLevel *)(this + 0x28));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArcadePropertySheetHelpers::ArcadeMode::ArcadeMode(ArcadePropertySheetHelpers::ArcadeMode&&) */

void __thiscall
ArcadePropertySheetHelpers::ArcadeMode::ArcadeMode(ArcadeMode *this,ArcadeMode *param_1)

{
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  FUN_05474148(this + 0x10,param_1 + 0x10);
  FUN_05474148(this + 0x18,param_1 + 0x18);
  this[0x20] = param_1[0x20];
  ArcadeEndlessLevel::ArcadeEndlessLevel
            ((ArcadeEndlessLevel *)(this + 0x28),(ArcadeEndlessLevel *)(param_1 + 0x28));
  FUN_05474148(this + 0x40,param_1 + 0x40);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x48),(vector *)(param_1 + 0x48));
  return;
}

