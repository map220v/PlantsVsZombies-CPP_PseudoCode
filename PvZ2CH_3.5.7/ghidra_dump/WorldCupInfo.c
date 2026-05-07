// Class: WorldCupInfo


/* WorldCupInfo::WorldCupInfo() */

void __thiscall WorldCupInfo::WorldCupInfo(WorldCupInfo *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  std::string::append((string *)this,"",in_x2);
  this[8] = (WorldCupInfo)0x0;
  this[9] = (WorldCupInfo)0x0;
  this[10] = (WorldCupInfo)0x0;
  return;
}


/* WorldCupInfo::WorldCupInfo(WorldCupInfo const&) */

void __thiscall WorldCupInfo::WorldCupInfo(WorldCupInfo *this,WorldCupInfo *param_1)

{
  WorldCupInfo WVar1;
  WorldCupInfo WVar2;
  
  FUN_05475d88();
  WVar1 = param_1[8];
  WVar2 = param_1[9];
  this[10] = param_1[10];
  this[8] = WVar1;
  this[9] = WVar2;
  return;
}


/* WorldCupInfo::WorldCupInfo(WorldCupInfo&&) */

void __thiscall WorldCupInfo::WorldCupInfo(WorldCupInfo *this,WorldCupInfo *param_1)

{
  WorldCupInfo WVar1;
  WorldCupInfo WVar2;
  
  FUN_05474148();
  WVar1 = param_1[8];
  WVar2 = param_1[9];
  this[10] = param_1[10];
  this[8] = WVar1;
  this[9] = WVar2;
  return;
}


/* WorldCupInfo::TEMPNAMEPLACEHOLDERVALUE(WorldCupInfo const&) */

WorldCupInfo * __thiscall WorldCupInfo::operator=(WorldCupInfo *this,WorldCupInfo *param_1)

{
  WorldCupInfo WVar1;
  WorldCupInfo WVar2;
  
  thunk_FUN_05475e00();
  WVar1 = param_1[8];
  WVar2 = param_1[9];
  this[10] = param_1[10];
  this[8] = WVar1;
  this[9] = WVar2;
  return this;
}

