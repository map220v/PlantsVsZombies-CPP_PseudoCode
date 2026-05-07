// Class: PredefinedLoadoutEntry


/* PredefinedLoadoutEntry::PredefinedLoadoutEntry() */

void __thiscall PredefinedLoadoutEntry::PredefinedLoadoutEntry(PredefinedLoadoutEntry *this)

{
  Set8BytesTo0();
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (PredefinedLoadoutEntry)0x0;
  return;
}


/* PredefinedLoadoutEntry::PredefinedLoadoutEntry(PredefinedLoadoutEntry&&) */

void __thiscall
PredefinedLoadoutEntry::PredefinedLoadoutEntry
          (PredefinedLoadoutEntry *this,PredefinedLoadoutEntry *param_1)

{
  undefined4 uVar1;
  
  FUN_05474148();
  uVar1 = *(undefined4 *)(param_1 + 8);
  this[0xc] = param_1[0xc];
  *(undefined4 *)(this + 8) = uVar1;
  return;
}


/* PredefinedLoadoutEntry::PredefinedLoadoutEntry(PredefinedLoadoutEntry const&) */

void __thiscall
PredefinedLoadoutEntry::PredefinedLoadoutEntry
          (PredefinedLoadoutEntry *this,PredefinedLoadoutEntry *param_1)

{
  undefined4 uVar1;
  
  FUN_05475d88();
  uVar1 = *(undefined4 *)(param_1 + 8);
  this[0xc] = param_1[0xc];
  *(undefined4 *)(this + 8) = uVar1;
  return;
}

