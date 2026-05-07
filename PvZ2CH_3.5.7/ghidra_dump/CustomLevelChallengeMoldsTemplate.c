// Class: CustomLevelChallengeMoldsTemplate


/* CustomLevelChallengeMoldsTemplate::CustomLevelChallengeMoldsTemplate(CustomLevelMgr*) */

void __thiscall
CustomLevelChallengeMoldsTemplate::CustomLevelChallengeMoldsTemplate
          (CustomLevelChallengeMoldsTemplate *this,CustomLevelMgr *param_1)

{
  CustomLevelTemplate::CustomLevelTemplate((CustomLevelTemplate *)this,param_1);
  *(undefined ***)this = &PTR_nop_0665eb70;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelChallengeMoldsTemplate::GenerateTemplate(CustomLevelCreator&, CustomLevelWorldParams
   const&, CustomLevelConfig const*) */

void CustomLevelChallengeMoldsTemplate::GenerateTemplate
               (CustomLevelCreator *param_1,CustomLevelWorldParams *param_2,
               CustomLevelConfig *param_3)

{
  MoldColonyChallengeProps *pMVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pMVar1 = CustomLevelCreator::AddModule<MoldColonyChallengeProps>((CustomLevelCreator *)param_2);
  CustomLevelCreator::AddAliasedObject<BoardGridMapProps>();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  std::
  vector<std::vector<unsigned_int,std::allocator<unsigned_int>>,std::allocator<std::vector<unsigned_int,std::allocator<unsigned_int>>>>
  ::operator=((vector<std::vector<unsigned_int,std::allocator<unsigned_int>>,std::allocator<std::vector<unsigned_int,std::allocator<unsigned_int>>>>
               *)(lVar2 + 0x10),(vector *)(param_3 + 0xc0));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(pMVar1 + 0x40),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

