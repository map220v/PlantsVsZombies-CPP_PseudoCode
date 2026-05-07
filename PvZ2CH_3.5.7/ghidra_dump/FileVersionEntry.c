// Class: FileVersionEntry


/* FileVersionEntry::FileVersionEntry(FileVersionEntry&&) */

void __thiscall FileVersionEntry::FileVersionEntry(FileVersionEntry *this,FileVersionEntry *param_1)

{
  undefined4 uVar1;
  
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = uVar1;
  return;
}


/* FileVersionEntry::FileVersionEntry(FileVersionEntry const&) */

void __thiscall FileVersionEntry::FileVersionEntry(FileVersionEntry *this,FileVersionEntry *param_1)

{
  undefined4 uVar1;
  
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = uVar1;
  return;
}


/* FileVersionEntry::FileVersionEntry() */

void __thiscall FileVersionEntry::FileVersionEntry(FileVersionEntry *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  Set8BytesTo0((string *)(this + 8));
  std::string::append((string *)this,"",in_x2);
  std::string::append((string *)(this + 8),"",in_x2);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  return;
}


/* FileVersionEntry::TEMPNAMEPLACEHOLDERVALUE(FileVersionEntry const&) */

FileVersionEntry * __thiscall
FileVersionEntry::operator=(FileVersionEntry *this,FileVersionEntry *param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_05475e00();
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = uVar1;
  return this;
}

