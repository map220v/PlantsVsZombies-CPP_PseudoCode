// Class: Sexy::CharDataHashTable


/* Sexy::CharDataHashTable::GetBucketIndex(wchar_t) */

uint __thiscall Sexy::CharDataHashTable::GetBucketIndex(CharDataHashTable *this,wchar_t param_1)

{
  uint uVar1;
  
  if (*this == (CharDataHashTable)0x0) {
    uVar1 = (param_1 ^ 0xbeefcafeU) * 0x5bd1e995;
    uVar1 = (uVar1 ^ uVar1 >> 0xd) * 0x5bd1e995;
    return (uVar1 ^ uVar1 >> 0xf) & 0x3ff;
  }
  return param_1 & 0x3ff;
}


/* Sexy::CharDataHashTable::~CharDataHashTable() */

void __thiscall Sexy::CharDataHashTable::~CharDataHashTable(CharDataHashTable *this)

{
  std::vector<Sexy::CharDataHashEntry,std::allocator<Sexy::CharDataHashEntry>>::~vector
            ((vector<Sexy::CharDataHashEntry,std::allocator<Sexy::CharDataHashEntry>> *)
             (this + 0x20));
  std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>::~vector
            ((vector<Sexy::CharData,std::allocator<Sexy::CharData>> *)(this + 8));
  return;
}


/* Sexy::CharDataHashTable::CharDataHashTable(Sexy::CharDataHashTable const&) */

void __thiscall
Sexy::CharDataHashTable::CharDataHashTable(CharDataHashTable *this,CharDataHashTable *param_1)

{
  *this = *param_1;
  std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>::vector
            ((vector<Sexy::CharData,std::allocator<Sexy::CharData>> *)(this + 8),
             (vector *)(param_1 + 8));
  std::vector<Sexy::CharDataHashEntry,std::allocator<Sexy::CharDataHashEntry>>::vector
            ((vector<Sexy::CharDataHashEntry,std::allocator<Sexy::CharDataHashEntry>> *)
             (this + 0x20),(vector *)(param_1 + 0x20));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::CharDataHashTable::GetCharData(wchar_t, bool) */

void __thiscall
Sexy::CharDataHashTable::GetCharData(CharDataHashTable *this,wchar_t param_1,bool param_2)

{
  ulong uVar1;
  ushort uVar2;
  ulong uVar3;
  ushort *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  CharData aCStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = GetBucketIndex(this,param_1);
  uVar9 = *(undefined8 *)(this + 0x20);
  puVar4 = (ushort *)FUN_053a1128(uVar9);
  if ((uint)*puVar4 == param_1) {
    uVar2 = puVar4[1];
    if (uVar2 != 0xffff) {
      lVar5 = ___stack_chk_guard;
      if (local_8 == ___stack_chk_guard) {
LAB_053a8a1c:
        FUN_053a1130(*(undefined8 *)(this + 8),uVar2);
        return;
      }
      goto LAB_053a8a60;
    }
    if (param_1 != L'\0') {
LAB_053a8a08:
      lVar5 = ___stack_chk_guard;
      if (local_8 == ___stack_chk_guard) goto LAB_053a8a1c;
      goto LAB_053a8a60;
    }
LAB_053a894c:
    if (param_2) {
      uVar8 = *(undefined8 *)(this + 0x10);
      uVar9 = *(undefined8 *)(this + 8);
      *puVar4 = (ushort)param_1;
      uVar2 = FUN_053a113c(uVar9,uVar8);
      puVar4[1] = uVar2;
      CharData::CharData(aCStack_30);
      std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>::push_back
                ((vector<Sexy::CharData,std::allocator<Sexy::CharData>> *)(this + 8),aCStack_30);
      lVar5 = FUN_053a1130(*(undefined8 *)(this + 8),puVar4[1]);
      *(int *)(lVar5 + 0x24) = (int)uVar3;
    }
    else {
LAB_053a8b08:
      lVar5 = 0;
    }
  }
  else {
    if ((uint)*puVar4 == L'\0') goto LAB_053a894c;
    uVar6 = *(ulong *)(puVar4 + 4);
    while (uVar1 = uVar6, uVar1 != 0xffffffff) {
      puVar4 = (ushort *)FUN_053a1128(uVar9,uVar1 & 0xffffffff);
      if ((uint)*puVar4 == param_1) {
        uVar2 = puVar4[1];
        goto LAB_053a8a08;
      }
      uVar3 = uVar1;
      uVar6 = *(ulong *)(puVar4 + 4);
    }
    if (!param_2) goto LAB_053a8b08;
    uVar6 = FUN_053a1150(uVar9,*(undefined8 *)(this + 0x28));
    *(ulong *)(puVar4 + 4) = uVar6 & 0xffffffff;
    CharDataHashEntry::CharDataHashEntry((CharDataHashEntry *)aCStack_30);
    std::vector<Sexy::CharDataHashEntry,std::allocator<Sexy::CharDataHashEntry>>::push_back
              ((vector<Sexy::CharDataHashEntry,std::allocator<Sexy::CharDataHashEntry>> *)
               (this + 0x20),(CharDataHashEntry *)aCStack_30);
    uVar9 = *(undefined8 *)(this + 0x20);
    lVar7 = FUN_053a1128(uVar9,uVar3 & 0xffffffff);
    puVar4 = (ushort *)FUN_053a1128(uVar9,*(undefined8 *)(lVar7 + 8));
    uVar8 = *(undefined8 *)(this + 0x10);
    uVar9 = *(undefined8 *)(this + 8);
    *puVar4 = (ushort)param_1;
    uVar2 = FUN_053a113c(uVar9,uVar8);
    puVar4[1] = uVar2;
    CharData::CharData(aCStack_30);
    std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>::push_back
              ((vector<Sexy::CharData,std::allocator<Sexy::CharData>> *)(this + 8),aCStack_30);
    lVar5 = FUN_053a1130(*(undefined8 *)(this + 8),puVar4[1]);
    *(int *)(lVar5 + 0x24) = (int)*(undefined8 *)(lVar7 + 8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_053a8a60:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar5);
}


/* Sexy::CharDataHashTable::CharDataHashTable() */

void __thiscall Sexy::CharDataHashTable::CharDataHashTable(CharDataHashTable *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *this = (CharDataHashTable)0x0;
  std::vector<Sexy::CharDataHashEntry,std::allocator<Sexy::CharDataHashEntry>>::resize
            ((vector<Sexy::CharDataHashEntry,std::allocator<Sexy::CharDataHashEntry>> *)
             (this + 0x20),0x400);
  return;
}

