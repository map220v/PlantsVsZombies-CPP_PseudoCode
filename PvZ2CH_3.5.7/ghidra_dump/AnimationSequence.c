// Class: AnimationSequence


/* AnimationSequence::~AnimationSequence() */

void __thiscall AnimationSequence::~AnimationSequence(AnimationSequence *this)

{
  std::_Destroy<Sexy::ResStreamsUnpacker::GroupInfo*>(*(GroupInfo **)this,*(GroupInfo **)(this + 8))
  ;
  std::_Vector_base<AnimationSequenceEntry,std::allocator<AnimationSequenceEntry>>::~_Vector_base
            ((_Vector_base<AnimationSequenceEntry,std::allocator<AnimationSequenceEntry>> *)this);
  return;
}


/* AnimationSequence::GetEntryCount() const */

void __thiscall AnimationSequence::GetEntryCount(AnimationSequence *this)

{
  FUN_03ccec4c(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* AnimationSequence::GetEntry(int) */

void __thiscall AnimationSequence::GetEntry(AnimationSequence *this,int param_1)

{
  FUN_03ccec74(*(undefined8 *)this,(long)param_1);
  return;
}


/* AnimationSequence::Clear() */

void __thiscall AnimationSequence::Clear(AnimationSequence *this)

{
  FUN_03cd0974(this + 8,*(undefined8 *)this);
  return;
}


/* AnimationSequence::TEMPNAMEPLACEHOLDERVALUE(AnimationSequence const&) */

AnimationSequence * __thiscall
AnimationSequence::operator=(AnimationSequence *this,AnimationSequence *param_1)

{
  std::vector<AnimationSequenceEntry,std::allocator<AnimationSequenceEntry>>::operator=
            ((vector<AnimationSequenceEntry,std::allocator<AnimationSequenceEntry>> *)this,
             (vector *)param_1);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationSequence::AddSingleAnimation(std::string const&, AnimSelectionMethod) */

void AnimationSequence::AddSingleAnimation
               (vector<AnimationSequenceEntry,std::allocator<AnimationSequenceEntry>> *param_1)

{
  pair<std::string_const,Sexy::PILifeValueTable> apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AnimationSequenceEntry::AnimationSequenceEntry((AnimationSequenceEntry *)0x0,apStack_18);
  std::vector<AnimationSequenceEntry,std::allocator<AnimationSequenceEntry>>::push_back
            (param_1,(AnimationSequenceEntry *)apStack_18);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationSequence::AddLoopingAnimation(std::string const&, float, AnimSelectionMethod) */

void AnimationSequence::AddLoopingAnimation
               (vector<AnimationSequenceEntry,std::allocator<AnimationSequenceEntry>> *param_1)

{
  pair<std::string_const,Sexy::PILifeValueTable> apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AnimationSequenceEntry::AnimationSequenceEntry((AnimationSequenceEntry *)apStack_18);
  std::vector<AnimationSequenceEntry,std::allocator<AnimationSequenceEntry>>::push_back
            (param_1,(AnimationSequenceEntry *)apStack_18);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationSequence::AddDelay(float) */

void __thiscall AnimationSequence::AddDelay(AnimationSequence *this,float param_1)

{
  undefined4 in_register_00005004;
  string asStack_20 [8];
  pair<std::string_const,Sexy::PILifeValueTable> apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"");
  AnimationSequenceEntry::AnimationSequenceEntry
            ((AnimationSequenceEntry *)CONCAT44(in_register_00005004,param_1),apStack_18,asStack_20,
             0);
  std::string::~string(asStack_20);
  nop();
  std::vector<AnimationSequenceEntry,std::allocator<AnimationSequenceEntry>>::push_back
            ((vector<AnimationSequenceEntry,std::allocator<AnimationSequenceEntry>> *)this,
             (AnimationSequenceEntry *)apStack_18);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

