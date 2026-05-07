// Class: AnimationSequenceEntry


/* AnimationSequenceEntry::AnimationSequenceEntry(AnimationSequenceEntry const&) */

void __thiscall
AnimationSequenceEntry::AnimationSequenceEntry
          (AnimationSequenceEntry *this,AnimationSequenceEntry *param_1)

{
  undefined4 uVar1;
  
  FUN_05475d88();
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = uVar1;
  return;
}


/* AnimationSequenceEntry::AnimationSequenceEntry(AnimationSequenceEntry&&) */

void __thiscall
AnimationSequenceEntry::AnimationSequenceEntry
          (AnimationSequenceEntry *this,AnimationSequenceEntry *param_1)

{
  undefined4 uVar1;
  
  FUN_05474148();
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = uVar1;
  return;
}


/* AnimationSequenceEntry::AnimationSequenceEntry() */

void __thiscall AnimationSequenceEntry::AnimationSequenceEntry(AnimationSequenceEntry *this)

{
  Set8BytesTo0();
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}


/* AnimationSequenceEntry::AnimationSequenceEntry(std::string const&, AnimSelectionMethod, float) */

void __thiscall
AnimationSequenceEntry::AnimationSequenceEntry
          (undefined4 param_1,AnimationSequenceEntry *this,undefined8 param_3,undefined4 param_4)

{
  FUN_05475d88();
  *(undefined4 *)(this + 8) = param_4;
  *(undefined4 *)(this + 0xc) = param_1;
  return;
}

