// Class: GeneralAwardSet


/* GeneralAwardSet::TEMPNAMEPLACEHOLDERVALUE(GeneralAwardSet&&) */

GeneralAwardSet * __thiscall
GeneralAwardSet::operator=(GeneralAwardSet *this,GeneralAwardSet *param_1)

{
  std::vector<AwardEntry,std::allocator<AwardEntry>>::operator=
            ((vector<AwardEntry,std::allocator<AwardEntry>> *)(this + 8),(vector *)(param_1 + 8));
  return this;
}


/* GeneralAwardSet::GeneralAwardSet(GeneralAwardSet const&) */

void __thiscall GeneralAwardSet::GeneralAwardSet(GeneralAwardSet *this,GeneralAwardSet *param_1)

{
  AwardSet::AwardSet((AwardSet *)this);
  *(undefined ***)this = &PTR__GeneralAwardSet_066a7390;
  std::vector<AwardEntry,std::allocator<AwardEntry>>::vector
            ((vector<AwardEntry,std::allocator<AwardEntry>> *)(this + 8),(vector *)(param_1 + 8));
  return;
}


/* GeneralAwardSet::~GeneralAwardSet() */

void __thiscall GeneralAwardSet::~GeneralAwardSet(GeneralAwardSet *this)

{
  *(undefined ***)this = &PTR__GeneralAwardSet_066a7390;
  std::vector<AwardEntry,std::allocator<AwardEntry>>::~vector
            ((vector<AwardEntry,std::allocator<AwardEntry>> *)(this + 8));
  return;
}


/* GeneralAwardSet::~GeneralAwardSet() */

void __thiscall GeneralAwardSet::~GeneralAwardSet(GeneralAwardSet *this)

{
  ~GeneralAwardSet(this);
  AK::FreeHook(this);
  return;
}


/* GeneralAwardSet::GeneralAwardSet() */

void __thiscall GeneralAwardSet::GeneralAwardSet(GeneralAwardSet *this)

{
  AwardSet::AwardSet((AwardSet *)this);
  *(undefined ***)this = &PTR__GeneralAwardSet_066a7390;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralAwardSet::Add(AwardType, std::string const&, int, int) */

void GeneralAwardSet::Add(long *param_1)

{
  code *pcVar1;
  PakRecord aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*param_1 + 0x18);
  AwardEntry::AwardEntry((AwardEntry *)aPStack_20);
  (*pcVar1)(param_1,aPStack_20);
  PakRecord::~PakRecord(aPStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralAwardSet::GetNumOfType(AwardType) const */

void __thiscall GeneralAwardSet::GetNumOfType(GeneralAwardSet *this,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = FUN_03845280(*(undefined8 *)(this + 8));
  local_10 = FUN_038452d0(*(undefined8 *)(this + 0x10));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 == param_2) {
      iVar3 = iVar3 + piVar2[4];
    }
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralAwardSet::Award(PlayerInfo*, AWARD_Context, std::string const&, std::string const&) const
    */

void __thiscall
GeneralAwardSet::Award
          (GeneralAwardSet *this,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = FUN_03845280(*(undefined8 *)(this + 8));
  local_28 = FUN_038452d0(*(undefined8 *)(this + 0x10));
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar3) {
    puVar4 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    uVar2 = *puVar4;
    FUN_05475d88(asStack_20,puVar4 + 2);
    uVar1 = puVar4[4];
    FUN_05475d88(asStack_18,param_4);
    FUN_05475d88(asStack_10,param_5);
    AwardsGranter::GiveAward(uVar2,asStack_20,uVar1,param_3,0,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralAwardSet::Add(AwardSet const&) */

void __thiscall GeneralAwardSet::Add(GeneralAwardSet *this,AwardSet *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x38))(avStack_20,param_1);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    (**(code **)(*(long *)this + 0x18))(this,uVar2);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_30);
  }
  std::vector<AwardEntry,std::allocator<AwardEntry>>::~vector
            ((vector<AwardEntry,std::allocator<AwardEntry>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralAwardSet::GetAwards() const */

vector<AwardEntry,std::allocator<AwardEntry>> * GeneralAwardSet::GetAwards(void)

{
  long in_x0;
  vector<AwardEntry,std::allocator<AwardEntry>> *in_x8;
  
  std::vector<AwardEntry,std::allocator<AwardEntry>>::vector(in_x8,(vector *)(in_x0 + 8));
  return in_x8;
}


/* GeneralAwardSet::SortAwardsByEnum() */

void __thiscall GeneralAwardSet::SortAwardsByEnum(GeneralAwardSet *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 8));
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 8));
  FUN_038477e0(uVar1,uVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralAwardSet::Add(AwardEntry const&) */

void __thiscall GeneralAwardSet::Add(GeneralAwardSet *this,AwardEntry *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
  local_8 = ___stack_chk_guard;
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_03845760(uVar3,uVar4,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar2) {
    lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    lVar1 = ___stack_chk_guard;
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + *(int *)(param_1 + 0x10);
    if (local_8 == lVar1) {
      return;
    }
  }
  else if (local_8 == ___stack_chk_guard) {
    std::vector<AwardEntry,std::allocator<AwardEntry>>::push_back
              ((vector<AwardEntry,std::allocator<AwardEntry>> *)this_00,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralAwardSet::GenerateFlattenedAwardSet(AwardSet const&) */

void __thiscall GeneralAwardSet::GenerateFlattenedAwardSet(GeneralAwardSet *this,AwardSet *param_1)

{
  bool bVar1;
  AwardEntry *pAVar2;
  GeneralAwardSet *in_x8;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GeneralAwardSet(in_x8);
  (**(code **)(*(long *)this + 0x38))
            ((vector<AwardEntry,std::allocator<AwardEntry>> *)&local_20,this);
  local_30 = FUN_03845280(local_20);
  local_28 = FUN_038452d0(local_18);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    pAVar2 = (AwardEntry *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    Add(in_x8,pAVar2);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_30);
  }
  std::vector<AwardEntry,std::allocator<AwardEntry>>::~vector
            ((vector<AwardEntry,std::allocator<AwardEntry>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

