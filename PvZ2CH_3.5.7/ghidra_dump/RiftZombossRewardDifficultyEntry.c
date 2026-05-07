// Class: RiftZombossRewardDifficultyEntry


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftZombossRewardDifficultyEntry::Find(AwardType, std::string) const */

void __thiscall
RiftZombossRewardDifficultyEntry::Find
          (RiftZombossRewardDifficultyEntry *this,int param_2,string *param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_036ba624(*(undefined8 *)this);
  local_10 = FUN_036ba674(*(undefined8 *)(this + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((*(int *)(lVar3 + 0x10) == param_2) &&
       (cVar2 = std::operator==((string *)(lVar3 + 0x18),param_3), cVar2 != '\0'))
    goto LAB_036ba76c;
    eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
              ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_18);
  }
  lVar3 = 0;
LAB_036ba76c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftZombossRewardDifficultyEntry::Combine(LevelOfTheDay_RewardItemType const&) */

void __thiscall
RiftZombossRewardDifficultyEntry::Combine
          (RiftZombossRewardDifficultyEntry *this,LevelOfTheDay_RewardItemType *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  bVar1 = false;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x10)) &&
       (cVar3 = std::operator==((string *)(lVar4 + 0x18),(string *)(param_1 + 0x18)), cVar3 != '\0')
       ) {
      bVar1 = true;
      *(int *)(lVar4 + 0x28) = *(int *)(lVar4 + 0x28) + *(int *)(param_1 + 0x28);
    }
    eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
              ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_18);
  }
  if (!bVar1) {
    std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::
    push_back((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *)
              this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftZombossRewardDifficultyEntry::Combine(RiftZombossRewardDifficultyEntry const*) */

void __thiscall
RiftZombossRewardDifficultyEntry::Combine
          (RiftZombossRewardDifficultyEntry *this,RiftZombossRewardDifficultyEntry *param_1)

{
  bool bVar1;
  LevelOfTheDay_RewardItemType *pLVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (RiftZombossRewardDifficultyEntry *)0x0) {
    local_18 = FUN_036ba624(*(undefined8 *)param_1);
    local_10 = FUN_036ba674(*(undefined8 *)(param_1 + 8));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      pLVar2 = (LevelOfTheDay_RewardItemType *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      Combine(this,pLVar2);
      eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
                ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

