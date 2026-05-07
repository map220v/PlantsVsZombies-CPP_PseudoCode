// Class: MapNarrativeInfo


/* MapNarrativeInfo::MapNarrativeInfo() */

void __thiscall MapNarrativeInfo::MapNarrativeInfo(MapNarrativeInfo *this)

{
  *this = (MapNarrativeInfo)0x0;
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  return;
}


/* MapNarrativeInfo::TEMPNAMEPLACEHOLDERVALUE(MapNarrativeInfo const&) */

MapNarrativeInfo * __thiscall
MapNarrativeInfo::operator=(MapNarrativeInfo *this,MapNarrativeInfo *param_1)

{
  *this = *param_1;
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  return this;
}


/* MapNarrativeInfo::MapNarrativeInfo(MapNarrativeInfo&&) */

void __thiscall MapNarrativeInfo::MapNarrativeInfo(MapNarrativeInfo *this,MapNarrativeInfo *param_1)

{
  *this = *param_1;
  FUN_05474148(this + 8,param_1 + 8);
  FUN_05474148(this + 0x10,param_1 + 0x10);
  return;
}

