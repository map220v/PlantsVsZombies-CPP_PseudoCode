// Class: StarLevelConditionEntry


/* StarLevelConditionEntry::StarLevelConditionEntry() */

void __thiscall StarLevelConditionEntry::StarLevelConditionEntry(StarLevelConditionEntry *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


/* StarLevelConditionEntry::StarLevelConditionEntry(StarLevelConditionEntry&&) */

void __thiscall
StarLevelConditionEntry::StarLevelConditionEntry
          (StarLevelConditionEntry *this,StarLevelConditionEntry *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  return;
}

