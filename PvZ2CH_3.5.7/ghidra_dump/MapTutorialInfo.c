// Class: MapTutorialInfo


/* MapTutorialInfo::MapTutorialInfo() */

void __thiscall MapTutorialInfo::MapTutorialInfo(MapTutorialInfo *this)

{
  *this = (MapTutorialInfo)0x0;
  Set8BytesTo0(this + 8);
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


/* MapTutorialInfo::TEMPNAMEPLACEHOLDERVALUE(MapTutorialInfo const&) */

MapTutorialInfo * __thiscall
MapTutorialInfo::operator=(MapTutorialInfo *this,MapTutorialInfo *param_1)

{
  *this = *param_1;
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return this;
}

