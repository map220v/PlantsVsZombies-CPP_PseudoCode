// Class: DataArray<LineEntry>


/* DataArray<LineEntry>::DataArrayAlloc() */

undefined8 * __thiscall DataArray<LineEntry>::DataArrayAlloc(DataArray<LineEntry> *this)

{
  uint uVar1;
  TodStringListFormat *this_00;
  int iVar2;
  undefined8 *puVar3;
  
  uVar1 = *(uint *)(this + 0x10);
  if (uVar1 == *(uint *)(this + 8)) {
    iVar2 = uVar1 + 1;
    *(int *)(this + 8) = iVar2;
    puVar3 = (undefined8 *)(*(long *)this + (ulong)uVar1 * 0x28);
  }
  else {
    puVar3 = (undefined8 *)(*(long *)this + (ulong)uVar1 * 0x28);
    iVar2 = *(int *)((long)puVar3 + 0x24);
  }
  *(int *)(this + 0x10) = iVar2;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  iVar2 = *(int *)(this + 0x18) + 1;
  *(uint *)((long)puVar3 + 0x24) = uVar1 | *(int *)(this + 0x18) << 0x10;
  if (iVar2 == 0x10000) {
    *(undefined4 *)(this + 0x18) = 1;
  }
  else {
    *(int *)(this + 0x18) = iVar2;
  }
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  this_00 = (TodStringListFormat *)FUN_03e8e18c(puVar3);
  if (this_00 != (TodStringListFormat *)0x0) {
    TodStringListFormat::TodStringListFormat(this_00);
  }
  return puVar3;
}


/* DataArray<TextEntry>::DataArrayAlloc() */

undefined8 * __thiscall DataArray<TextEntry>::DataArrayAlloc(DataArray<TextEntry> *this)

{
  uint uVar1;
  int iVar2;
  TextEntry *this_00;
  undefined8 *puVar3;
  
  uVar1 = *(uint *)(this + 0x10);
  if (uVar1 == *(uint *)(this + 8)) {
    iVar2 = uVar1 + 1;
    puVar3 = (undefined8 *)(*(long *)this + (ulong)uVar1 * 0x40);
    *(int *)(this + 8) = iVar2;
  }
  else {
    puVar3 = (undefined8 *)(*(long *)this + (ulong)uVar1 * 0x40);
    iVar2 = *(int *)(puVar3 + 7);
  }
  *(int *)(this + 0x10) = iVar2;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  iVar2 = *(int *)(this + 0x18) + 1;
  *(uint *)(puVar3 + 7) = uVar1 | *(int *)(this + 0x18) << 0x10;
  if (iVar2 == 0x10000) {
    *(undefined4 *)(this + 0x18) = 1;
  }
  else {
    *(int *)(this + 0x18) = iVar2;
  }
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  this_00 = (TextEntry *)FUN_03e8e18c(puVar3);
  if (this_00 != (TextEntry *)0x0) {
    TextEntry::TextEntry(this_00);
  }
  return puVar3;
}

