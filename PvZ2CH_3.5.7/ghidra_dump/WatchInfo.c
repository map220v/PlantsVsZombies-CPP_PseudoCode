// Class: WatchInfo


/* WatchInfo::WatchInfo(WatchInfo const&) */

void __thiscall WatchInfo::WatchInfo(WatchInfo *this,WatchInfo *param_1)

{
  undefined4 uVar1;
  WatchInfo WVar2;
  WatchInfo WVar3;
  
  FUN_05475d88();
  uVar1 = *(undefined4 *)(param_1 + 8);
  WVar2 = param_1[0xc];
  WVar3 = param_1[0xd];
  this[0xe] = param_1[0xe];
  *(undefined4 *)(this + 8) = uVar1;
  this[0xc] = WVar2;
  this[0xd] = WVar3;
  return;
}


/* WatchInfo::WatchInfo(WatchInfo&&) */

void __thiscall WatchInfo::WatchInfo(WatchInfo *this,WatchInfo *param_1)

{
  undefined4 uVar1;
  WatchInfo WVar2;
  WatchInfo WVar3;
  
  FUN_05474148();
  uVar1 = *(undefined4 *)(param_1 + 8);
  WVar2 = param_1[0xc];
  WVar3 = param_1[0xd];
  this[0xe] = param_1[0xe];
  *(undefined4 *)(this + 8) = uVar1;
  this[0xc] = WVar2;
  this[0xd] = WVar3;
  return;
}


/* WatchInfo::TEMPNAMEPLACEHOLDERVALUE(WatchInfo const&) */

WatchInfo * __thiscall WatchInfo::operator=(WatchInfo *this,WatchInfo *param_1)

{
  undefined4 uVar1;
  WatchInfo WVar2;
  WatchInfo WVar3;
  
  thunk_FUN_05475e00();
  uVar1 = *(undefined4 *)(param_1 + 8);
  WVar2 = param_1[0xc];
  WVar3 = param_1[0xd];
  this[0xe] = param_1[0xe];
  *(undefined4 *)(this + 8) = uVar1;
  this[0xc] = WVar2;
  this[0xd] = WVar3;
  return this;
}

