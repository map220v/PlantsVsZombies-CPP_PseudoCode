// Class: PVZDB::TableRuntimeInfo


/* PVZDB::TableRuntimeInfo::~TableRuntimeInfo() */

void __thiscall PVZDB::TableRuntimeInfo::~TableRuntimeInfo(TableRuntimeInfo *this)

{
  Sexy::RtName::~RtName((RtName *)(this + 8));
  return;
}


/* PVZDB::TableRuntimeInfo::TableRuntimeInfo() */

void __thiscall PVZDB::TableRuntimeInfo::TableRuntimeInfo(TableRuntimeInfo *this)

{
  Sexy::RtName::RtName((RtName *)(this + 8));
  return;
}


/* PVZDB::TableRuntimeInfo::TEMPNAMEPLACEHOLDERVALUE(PVZDB::TableRuntimeInfo const&) */

TableRuntimeInfo * __thiscall
PVZDB::TableRuntimeInfo::operator=(TableRuntimeInfo *this,TableRuntimeInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_043e1f9c(this + 8,param_1 + 8);
  this[0x18] = param_1[0x18];
  return this;
}


/* PVZDB::TableRuntimeInfo::TableRuntimeInfo(PVZDB::TableRuntimeInfo const&) */

void __thiscall
PVZDB::TableRuntimeInfo::TableRuntimeInfo(TableRuntimeInfo *this,TableRuntimeInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::RtName::RtName((RtName *)(this + 8),(RtName *)(param_1 + 8));
  this[0x18] = param_1[0x18];
  return;
}

