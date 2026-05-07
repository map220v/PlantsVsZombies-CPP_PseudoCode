// Class: AwardDiffSet


/* AwardDiffSet::~AwardDiffSet() */

void __thiscall AwardDiffSet::~AwardDiffSet(AwardDiffSet *this)

{
  std::_Destroy<TourismOctoberPlayerInfo*>
            (*(TourismOctoberPlayerInfo **)this,*(TourismOctoberPlayerInfo **)(this + 8));
  std::_Vector_base<AwardDiffEntry,std::allocator<AwardDiffEntry>>::~_Vector_base
            ((_Vector_base<AwardDiffEntry,std::allocator<AwardDiffEntry>> *)this);
  return;
}


/* AwardDiffSet::TEMPNAMEPLACEHOLDERVALUE(AwardDiffSet&&) */

AwardDiffSet * __thiscall AwardDiffSet::operator=(AwardDiffSet *this,AwardDiffSet *param_1)

{
  std::vector<AwardDiffEntry,std::allocator<AwardDiffEntry>>::operator=
            ((vector<AwardDiffEntry,std::allocator<AwardDiffEntry>> *)this,(vector *)param_1);
  return this;
}


/* AwardDiffSet::defaultSort(AwardDiffEntry const&, AwardDiffEntry const&) */

bool AwardDiffSet::defaultSort(AwardDiffEntry *param_1,AwardDiffEntry *param_2)

{
  return *(int *)param_1 < *(int *)param_2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwardDiffSet::GetDiffOfType(AwardType) const */

void __thiscall AwardDiffSet::GetDiffOfType(AwardDiffSet *this,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06ab48d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ab48d0), iVar2 != 0)) {
    AwardDiffEntry::AwardDiffEntry((AwardDiffEntry *)&DAT_06ab4808);
    __cxa_guard_release(&DAT_06ab48d0);
    __cxa_atexit(std::_Destroy<CornucopiaRankData>,&DAT_06ab4808,&DAT_06a88000);
  }
  uVar3 = FUN_038572f0(*(undefined8 *)this);
  uVar4 = FUN_03857340(*(undefined8 *)(this + 8));
  local_18 = FUN_03857688(uVar3,uVar4,param_2);
  local_10 = FUN_03857340(*(undefined8 *)(this + 8));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar5 = (undefined *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
  }
  else {
    puVar5 = &DAT_06ab4808;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwardDiffSet::SortAwardsByEnum(std::function<bool (AwardDiffEntry const&, AwardDiffEntry
   const&)>) */

void __thiscall AwardDiffSet::SortAwardsByEnum(AwardDiffSet *this,function *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  function<bool(AwardDiffEntry_const&,AwardDiffEntry_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this);
  std::function<bool(AwardDiffEntry_const&,AwardDiffEntry_const&)>::function(afStack_28,param_2);
  std::
  stable_sort<__gnu_cxx::__normal_iterator<AwardDiffEntry*,std::vector<AwardDiffEntry,std::allocator<AwardDiffEntry>>>,std::function<bool(AwardDiffEntry_const&,AwardDiffEntry_const&)>>
            (uVar1,uVar2,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwardDiffSet::Add(AwardSet const&) */

void __thiscall AwardDiffSet::Add(AwardDiffSet *this,AwardSet *param_1)

{
  bool bVar1;
  AwardEntry *pAVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  CornucopiaRankData aCStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x38))
            ((vector<AwardEntry,std::allocator<AwardEntry>> *)&local_40,param_1);
  local_50 = FUN_03857138(local_40);
  local_48 = FUN_03857188(local_38);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1) {
    pAVar2 = (AwardEntry *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    AwardDiffSetHelpers::GenerateDiff(pAVar2);
    std::vector<AwardDiffEntry,std::allocator<AwardDiffEntry>>::push_back
              ((vector<AwardDiffEntry,std::allocator<AwardDiffEntry>> *)this,
               (AwardDiffEntry *)aCStack_28);
    std::_Destroy<CornucopiaRankData>(aCStack_28);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_50);
  }
  std::vector<AwardEntry,std::allocator<AwardEntry>>::~vector
            ((vector<AwardEntry,std::allocator<AwardEntry>> *)&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AwardDiffSet::AwardDiffSet(AwardSet const&) */

void __thiscall AwardDiffSet::AwardDiffSet(AwardDiffSet *this,AwardSet *param_1)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  Add(this,param_1);
  return;
}

