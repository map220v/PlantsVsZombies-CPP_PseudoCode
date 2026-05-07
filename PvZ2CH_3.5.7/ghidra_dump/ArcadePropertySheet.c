// Class: ArcadePropertySheet


/* ArcadePropertySheet::GetModeByID(std::string const&) const */

void __thiscall ArcadePropertySheet::GetModeByID(ArcadePropertySheet *this,string *param_1)

{
  GetByID<ArcadePropertySheetHelpers::ArcadeMode>((vector *)(this + 0x10),param_1);
  return;
}


/* ArcadePropertySheet::ArcadePropertySheet() */

void __thiscall ArcadePropertySheet::ArcadePropertySheet(ArcadePropertySheet *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_06918d70;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* ArcadePropertySheet::StaticNew() */

ArcadePropertySheet * ArcadePropertySheet::StaticNew(void)

{
  ArcadePropertySheet *this;
  
  this = ::operator_new(0x40);
  ArcadePropertySheet(this);
  return this;
}


/* ArcadePropertySheet::GetPowerUpCollectionByID(std::string const&) const */

void __thiscall
ArcadePropertySheet::GetPowerUpCollectionByID(ArcadePropertySheet *this,string *param_1)

{
  GetByID<ArcadePropertySheetHelpers::PowerUpCollection>((vector *)(this + 0x28),param_1);
  return;
}


/* ArcadePropertySheet::~ArcadePropertySheet() */

void __thiscall ArcadePropertySheet::~ArcadePropertySheet(ArcadePropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06918d70;
  std::
  vector<ArcadePropertySheetHelpers::PowerUpCollection,std::allocator<ArcadePropertySheetHelpers::PowerUpCollection>>
  ::~vector((vector<ArcadePropertySheetHelpers::PowerUpCollection,std::allocator<ArcadePropertySheetHelpers::PowerUpCollection>>
             *)(this + 0x28));
  std::
  vector<ArcadePropertySheetHelpers::ArcadeMode,std::allocator<ArcadePropertySheetHelpers::ArcadeMode>>
  ::~vector((vector<ArcadePropertySheetHelpers::ArcadeMode,std::allocator<ArcadePropertySheetHelpers::ArcadeMode>>
             *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* ArcadePropertySheet::~ArcadePropertySheet() */

void __thiscall ArcadePropertySheet::~ArcadePropertySheet(ArcadePropertySheet *this)

{
  ~ArcadePropertySheet(this);
  AK::FreeHook(this);
  return;
}


/* ArcadePropertySheet::HasPowerUpCollection(std::string const&) const */

bool __thiscall ArcadePropertySheet::HasPowerUpCollection(ArcadePropertySheet *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = ContainsID<ArcadePropertySheetHelpers::PowerUpCollection>((vector *)(this + 0x28),param_1)
  ;
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePropertySheet::HasPowerUp(std::string const&, std::string const&) const */

void __thiscall
ArcadePropertySheet::HasPowerUp(ArcadePropertySheet *this,string *param_1,string *param_2)

{
  char cVar1;
  undefined1 uVar2;
  PowerUpCollection *pPVar3;
  PowerUpCollection aPStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = HasPowerUpCollection(this,param_2);
  uVar2 = 0;
  if (cVar1 != '\0') {
    pPVar3 = (PowerUpCollection *)GetPowerUpCollectionByID(this,param_2);
    ArcadePropertySheetHelpers::PowerUpCollection::PowerUpCollection(aPStack_28,pPVar3);
    uVar2 = ArcadePropertySheetHelpers::PowerUpCollection::ContainsPowerUpID(aPStack_28,param_1);
    ArcadePropertySheetHelpers::PowerUpCollection::~PowerUpCollection(aPStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePropertySheet::GetPowerUpCollectionByModeID(std::string const&) const */

void __thiscall
ArcadePropertySheet::GetPowerUpCollectionByModeID(ArcadePropertySheet *this,string *param_1)

{
  ArcadeMode *pAVar1;
  undefined8 uVar2;
  ArcadeMode aAStack_68 [16];
  string asStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pAVar1 = (ArcadeMode *)GetModeByID(this,param_1);
  ArcadePropertySheetHelpers::ArcadeMode::ArcadeMode(aAStack_68,pAVar1);
  uVar2 = GetPowerUpCollectionByID(this,asStack_58);
  ArcadePropertySheetHelpers::ArcadeMode::~ArcadeMode(aAStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePropertySheet::GetModeByLevelPackID(std::string const&) const */

void __thiscall ArcadePropertySheet::GetModeByLevelPackID(ArcadePropertySheet *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ArcadeMode *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_04988f28(*(undefined8 *)(this + 0x10));
  local_10 = FUN_04988f78(*(undefined8 *)(this + 0x18));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    this_00 = (ArcadeMode *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = ArcadePropertySheetHelpers::ArcadeMode::ContainsLevelPackID(this_00,param_1);
    if (cVar1 != '\0') goto LAB_0498b398;
    __gnu_cxx::
    __normal_iterator<Sexy::PIValue2D_const*,std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>>
    ::operator++((__normal_iterator<Sexy::PIValue2D_const*,std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>>
                  *)&local_18);
  }
  if (((DAT_06b73410 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b73410), iVar3 != 0)) {
    this_00 = (ArcadeMode *)&DAT_06b73440;
    ArcadePropertySheetHelpers::ArcadeMode::ArcadeMode((ArcadeMode *)&DAT_06b73440);
    __cxa_guard_release(&DAT_06b73410);
    __cxa_atexit(ArcadePropertySheetHelpers::ArcadeMode::~ArcadeMode,&DAT_06b73440,&DAT_06a88000);
  }
  else {
    this_00 = (ArcadeMode *)&DAT_06b73440;
  }
LAB_0498b398:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePropertySheet::GetPowerUpCollectionByLevelPackID(std::string const&) const */

void __thiscall
ArcadePropertySheet::GetPowerUpCollectionByLevelPackID(ArcadePropertySheet *this,string *param_1)

{
  ArcadeMode *pAVar1;
  undefined8 uVar2;
  ArcadeMode aAStack_68 [16];
  string asStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pAVar1 = (ArcadeMode *)GetModeByLevelPackID(this,param_1);
  ArcadePropertySheetHelpers::ArcadeMode::ArcadeMode(aAStack_68,pAVar1);
  uVar2 = GetPowerUpCollectionByID(this,asStack_58);
  ArcadePropertySheetHelpers::ArcadeMode::~ArcadeMode(aAStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePropertySheet::GetLevelPackByID(std::string const&) const */

void __thiscall ArcadePropertySheet::GetLevelPackByID(ArcadePropertySheet *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ArcadeMode *this_00;
  undefined *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_04988f28(*(undefined8 *)(this + 0x10));
  local_10 = FUN_04988f78(*(undefined8 *)(this + 0x18));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
      if (((DAT_06b73408 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b73408), iVar3 != 0)) {
        puVar4 = &DAT_06b73538;
        ArcadePropertySheetHelpers::ArcadeLevelPack::ArcadeLevelPack
                  ((ArcadeLevelPack *)&DAT_06b73538);
        __cxa_guard_release(&DAT_06b73408);
        __cxa_atexit(ArcadePropertySheetHelpers::ArcadeLevelPack::~ArcadeLevelPack,&DAT_06b73538,
                     &DAT_06a88000);
      }
      else {
        puVar4 = &DAT_06b73538;
      }
LAB_0498b4dc:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(puVar4);
    }
    this_00 = (ArcadeMode *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = ArcadePropertySheetHelpers::ArcadeMode::ContainsLevelPackID(this_00,param_1);
    if (cVar1 != '\0') {
      puVar4 = (undefined *)
               ArcadePropertySheetHelpers::ArcadeMode::GetLevelPackByID(this_00,param_1);
      goto LAB_0498b4dc;
    }
    __gnu_cxx::
    __normal_iterator<Sexy::PIValue2D_const*,std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>>
    ::operator++((__normal_iterator<Sexy::PIValue2D_const*,std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>>
                  *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePropertySheet::GetModeByLevelID(std::string const&) const */

void __thiscall ArcadePropertySheet::GetModeByLevelID(ArcadePropertySheet *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ArcadeMode *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_04988f28(*(undefined8 *)(this + 0x10));
  local_10 = FUN_04988f78(*(undefined8 *)(this + 0x18));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    this_00 = (ArcadeMode *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = ArcadePropertySheetHelpers::ArcadeMode::ContainsLevelID(this_00,param_1);
    if (cVar1 != '\0') goto LAB_0498b744;
    __gnu_cxx::
    __normal_iterator<Sexy::PIValue2D_const*,std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>>
    ::operator++((__normal_iterator<Sexy::PIValue2D_const*,std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>>
                  *)&local_18);
  }
  if (((DAT_06b732d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b732d8), iVar3 != 0)) {
    this_00 = (ArcadeMode *)&DAT_06b73278;
    ArcadePropertySheetHelpers::ArcadeMode::ArcadeMode((ArcadeMode *)&DAT_06b73278);
    __cxa_guard_release(&DAT_06b732d8);
    __cxa_atexit(ArcadePropertySheetHelpers::ArcadeMode::~ArcadeMode,&DAT_06b73278,&DAT_06a88000);
  }
  else {
    this_00 = (ArcadeMode *)&DAT_06b73278;
  }
LAB_0498b744:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePropertySheet::GetPowerUpCollectionByLevelID(std::string const&) const */

void __thiscall
ArcadePropertySheet::GetPowerUpCollectionByLevelID(ArcadePropertySheet *this,string *param_1)

{
  ArcadeMode *pAVar1;
  undefined8 uVar2;
  ArcadeMode aAStack_68 [16];
  string asStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pAVar1 = (ArcadeMode *)GetModeByLevelID(this,param_1);
  ArcadePropertySheetHelpers::ArcadeMode::ArcadeMode(aAStack_68,pAVar1);
  uVar2 = GetPowerUpCollectionByID(this,asStack_58);
  ArcadePropertySheetHelpers::ArcadeMode::~ArcadeMode(aAStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePropertySheet::IsLevelEndless(std::string const&) const */

void __thiscall ArcadePropertySheet::IsLevelEndless(ArcadePropertySheet *this,string *param_1)

{
  undefined4 uVar1;
  ArcadeMode *pAVar2;
  ArcadeMode aAStack_68 [40];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pAVar2 = (ArcadeMode *)GetModeByLevelID(this,param_1);
  ArcadePropertySheetHelpers::ArcadeMode::ArcadeMode(aAStack_68,pAVar2);
  uVar1 = std::operator==(param_1,asStack_40);
  ArcadePropertySheetHelpers::ArcadeMode::~ArcadeMode(aAStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePropertySheet::GetLevelPackByLevelID(std::string const&) const */

void __thiscall
ArcadePropertySheet::GetLevelPackByLevelID(ArcadePropertySheet *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ArcadeMode *this_00;
  undefined *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_04988f28(*(undefined8 *)(this + 0x10));
  local_10 = FUN_04988f78(*(undefined8 *)(this + 0x18));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
      if (((DAT_06b733f8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b733f8), iVar3 != 0)) {
        puVar4 = &DAT_06b73358;
        ArcadePropertySheetHelpers::ArcadeLevelPack::ArcadeLevelPack
                  ((ArcadeLevelPack *)&DAT_06b73358);
        __cxa_guard_release(&DAT_06b733f8);
        __cxa_atexit(ArcadePropertySheetHelpers::ArcadeLevelPack::~ArcadeLevelPack,&DAT_06b73358,
                     &DAT_06a88000);
      }
      else {
        puVar4 = &DAT_06b73358;
      }
LAB_0498b900:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(puVar4);
    }
    this_00 = (ArcadeMode *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = ArcadePropertySheetHelpers::ArcadeMode::ContainsLevelID(this_00,param_1);
    if (cVar1 != '\0') {
      puVar4 = (undefined *)
               ArcadePropertySheetHelpers::ArcadeMode::GetLevelPackByLevelID(this_00,param_1);
      goto LAB_0498b900;
    }
    __gnu_cxx::
    __normal_iterator<Sexy::PIValue2D_const*,std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>>
    ::operator++((__normal_iterator<Sexy::PIValue2D_const*,std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>>
                  *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePropertySheet::GetNextLevelInPack(std::string const&) const */

void __thiscall ArcadePropertySheet::GetNextLevelInPack(ArcadePropertySheet *this,string *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = GetLevelPackByLevelID(this,param_1);
  uVar2 = FUN_04989300(*(undefined8 *)(lVar1 + 0x40));
  uVar3 = FUN_049893a4(*(undefined8 *)(lVar1 + 0x48));
  FUN_05475d88((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10,param_1);
  local_18 = FUN_0498ab7c(uVar2,uVar3,(pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
  local_10 = __gnu_cxx::
             __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
             ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)&local_18,1);
  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePropertySheet::HasLevel(std::string const&) const */

void __thiscall ArcadePropertySheet::HasLevel(ArcadePropertySheet *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  ArcadeMode *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_04988f28(*(undefined8 *)(this + 0x10));
  local_10 = FUN_04988f78(*(undefined8 *)(this + 0x18));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    this_00 = (ArcadeMode *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = ArcadePropertySheetHelpers::ArcadeMode::ContainsLevelID(this_00,param_1);
    if (cVar1 != '\0') break;
    __gnu_cxx::
    __normal_iterator<Sexy::PIValue2D_const*,std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>>
    ::operator++((__normal_iterator<Sexy::PIValue2D_const*,std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>>
                  *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePropertySheet::GetLevelByID(std::string const&) const */

void __thiscall ArcadePropertySheet::GetLevelByID(ArcadePropertySheet *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ArcadeMode *this_00;
  undefined *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_04988f28(*(undefined8 *)(this + 0x10));
  local_10 = FUN_04988f78(*(undefined8 *)(this + 0x18));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
      if (((DAT_06b732e0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b732e0), iVar3 != 0)) {
        puVar4 = &DAT_06b733f0;
        PakFileDesc::PakFileDesc((PakFileDesc *)&DAT_06b733f0);
        __cxa_guard_release(&DAT_06b732e0);
        __cxa_atexit(std::pair<std::string_const,Sexy::PILifeValueTable>::~pair,&DAT_06b733f0,
                     &DAT_06a88000);
      }
      else {
        puVar4 = &DAT_06b733f0;
      }
LAB_0498bb88:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(puVar4);
    }
    this_00 = (ArcadeMode *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = ArcadePropertySheetHelpers::ArcadeMode::ContainsLevelID(this_00,param_1);
    if (cVar1 != '\0') {
      puVar4 = (undefined *)ArcadePropertySheetHelpers::ArcadeMode::GetLevelByID(this_00,param_1);
      goto LAB_0498bb88;
    }
    __gnu_cxx::
    __normal_iterator<Sexy::PIValue2D_const*,std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>>
    ::operator++((__normal_iterator<Sexy::PIValue2D_const*,std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>>
                  *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePropertySheet::HasNextLevelInPack(std::string const&) const */

void __thiscall ArcadePropertySheet::HasNextLevelInPack(ArcadePropertySheet *this,string *param_1)

{
  char cVar1;
  byte bVar2;
  ArcadeLevelPack *pAVar3;
  ArcadeLevelPack aAStack_70 [104];
  long local_8;
  
  bVar2 = 0;
  local_8 = ___stack_chk_guard;
  cVar1 = IsLevelEndless(this,param_1);
  if (cVar1 == '\0') {
    pAVar3 = (ArcadeLevelPack *)GetLevelPackByLevelID(this,param_1);
    ArcadePropertySheetHelpers::ArcadeLevelPack::ArcadeLevelPack(aAStack_70,pAVar3);
    bVar2 = ArcadePropertySheetHelpers::ArcadeLevelPack::IsLevelLastInPack(aAStack_70,param_1);
    bVar2 = bVar2 ^ 1;
    ArcadePropertySheetHelpers::ArcadeLevelPack::~ArcadeLevelPack(aAStack_70);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePropertySheet::GetUniqueArcadePowerUpTypeNames() const */

void ArcadePropertySheet::GetUniqueArcadePowerUpTypeNames(void)

{
  bool bVar1;
  long in_x0;
  long lVar2;
  string *psVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  local_38 = FUN_04988fc8(*(undefined8 *)(in_x0 + 0x28));
  local_30 = FUN_04989018(*(undefined8 *)(in_x0 + 0x30));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
  if (bVar1) {
    do {
      lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      local_28 = FUN_04989068(*(undefined8 *)(lVar2 + 8));
      local_20 = FUN_049890b8(*(undefined8 *)(lVar2 + 0x10));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20),
            bVar1) {
        psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)in_x8);
        uVar4 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)in_x8);
        uVar5 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)in_x8);
        local_10 = std::
                   find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                             (uVar4,uVar5,psVar3);
        bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
        if (bVar1) {
          std::vector<std::string,std::allocator<std::string>>::push_back
                    ((vector<std::string,std::allocator<std::string>> *)in_x8,psVar3);
        }
        std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_28);
      }
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_38);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    } while (bVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePropertySheet::StaticClassInit() */

void ArcadePropertySheet::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"None",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"GiftBox",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"PowerUp",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"ArcadeRewardType");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"ArcadeReward");
    (*pcVar3)(plVar2,avStack_20,FUN_0498853c,0x10,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"ArcadeLevel");
    (*pcVar3)(plVar2,avStack_20,FUN_04987fdc,8,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"ArcadeEndlessLevel");
    (*pcVar3)(plVar2,avStack_20,FUN_0498868c,0x18,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"ArcadeLevelPack");
    (*pcVar3)(plVar2,avStack_20,FUN_04988924,0x68,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"ArcadeMode");
    (*pcVar3)(plVar2,avStack_20,FUN_0498a138,0x60,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"PowerUpMetaData");
    (*pcVar3)(plVar2,avStack_20,FUN_04987c6c,0x38,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"PowerUpCollection");
    (*pcVar3)(plVar2,avStack_20,FUN_0498a5d0,0x20,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"ArcadePropertySheet");
    (*pcVar3)(plVar2,avStack_20,FUN_0498c4d8,0x40,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArcadePropertySheet::StaticGetClass() */

long * ArcadePropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArcadePropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArcadePropertySheet::GetClass() const */

long * ArcadePropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"ArcadePropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePropertySheet::Get() */

void ArcadePropertySheet::Get(void)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::FindFirstObjectByClass<ArcadePropertySheet>(aRStack_10,uVar1,0x98);
  uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePropertySheet::GetUnlockSourcesForPowerUp(std::string const&, std::string const&) const */

void ArcadePropertySheet::GetUnlockSourcesForPowerUp(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  string *in_x2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_38 [24];
  PakRecord aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  local_58 = FUN_04988f28(*(undefined8 *)(param_1 + 0x10));
  local_50 = FUN_04988f78(*(undefined8 *)(param_1 + 0x18));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
  if (bVar1) {
    do {
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      cVar2 = std::operator==((string *)(lVar3 + 0x10),in_x2);
      if (cVar2 != '\0') {
        cVar2 = std::operator==((string *)(lVar3 + 0x30),param_2);
        if (cVar2 != '\0') {
          ArcadePropertySheetHelpers::UnlockSource::UnlockSource
                    ((UnlockSource *)aPStack_20,1,lVar3 + 0x28,*(undefined4 *)(lVar3 + 0x38));
          std::
          vector<ArcadePropertySheetHelpers::UnlockSource,std::allocator<ArcadePropertySheetHelpers::UnlockSource>>
          ::push_back((vector<ArcadePropertySheetHelpers::UnlockSource,std::allocator<ArcadePropertySheetHelpers::UnlockSource>>
                       *)in_x8,(UnlockSource *)aPStack_20);
          PakRecord::~PakRecord(aPStack_20);
        }
        ArcadePropertySheetHelpers::ArcadeMode::GetLevelPacks();
        local_48 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(avStack_38);
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(avStack_38);
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40),
              bVar1) {
          lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
          if ((*(int *)(lVar3 + 0x58) == 2) &&
             (cVar2 = std::operator==((string *)(lVar3 + 0x60),param_2), cVar2 != '\0')) {
            uVar4 = FUN_04987b20(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x48));
            ArcadePropertySheetHelpers::UnlockSource::UnlockSource
                      ((UnlockSource *)aPStack_20,0,lVar3,uVar4);
            std::
            vector<ArcadePropertySheetHelpers::UnlockSource,std::allocator<ArcadePropertySheetHelpers::UnlockSource>>
            ::push_back((vector<ArcadePropertySheetHelpers::UnlockSource,std::allocator<ArcadePropertySheetHelpers::UnlockSource>>
                         *)in_x8,(UnlockSource *)aPStack_20);
            PakRecord::~PakRecord(aPStack_20);
          }
          std::move_iterator<PennyGiftBoxGrowData*>::operator++
                    ((move_iterator<PennyGiftBoxGrowData*> *)&local_48);
        }
        std::
        vector<ArcadePropertySheetHelpers::ArcadeLevelPack,std::allocator<ArcadePropertySheetHelpers::ArcadeLevelPack>>
        ::~vector((vector<ArcadePropertySheetHelpers::ArcadeLevelPack,std::allocator<ArcadePropertySheetHelpers::ArcadeLevelPack>>
                   *)avStack_38);
      }
      __gnu_cxx::
      __normal_iterator<Sexy::PIValue2D_const*,std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>>
      ::operator++((__normal_iterator<Sexy::PIValue2D_const*,std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>>
                    *)&local_58);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
    } while (bVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePropertySheet::ForEachLevel(std::function<void (ArcadePropertySheetHelpers::ArcadeLevel
   const&)>) const */

void __thiscall ArcadePropertySheet::ForEachLevel(ArcadePropertySheet *this,function *param_2)

{
  bool bVar1;
  ArcadeMode *pAVar2;
  undefined8 local_38;
  undefined8 local_30;
  function<void(ArcadePropertySheetHelpers::ArcadeLevel_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38 = FUN_04988f28(*(undefined8 *)(this + 0x10));
  local_30 = FUN_04988f78(*(undefined8 *)(this + 0x18));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    pAVar2 = (ArcadeMode *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    std::function<void(ArcadePropertySheetHelpers::ArcadeLevel_const&)>::function
              (afStack_28,param_2);
    ArcadePropertySheetHelpers::ArcadeMode::ForEachLevel(pAVar2,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)afStack_28);
    __gnu_cxx::
    __normal_iterator<Sexy::PIValue2D_const*,std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>>
    ::operator++((__normal_iterator<Sexy::PIValue2D_const*,std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>>
                  *)&local_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

