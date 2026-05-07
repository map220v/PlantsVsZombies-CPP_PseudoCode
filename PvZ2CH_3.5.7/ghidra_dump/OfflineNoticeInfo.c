// Class: OfflineNoticeInfo


/* OfflineNoticeInfo::OfflineNoticeInfo() */

void __thiscall OfflineNoticeInfo::OfflineNoticeInfo(OfflineNoticeInfo *this)

{
  *(undefined4 *)this = 0;
  FUN_05476574(this + 8);
  FUN_05476574(this + 0x10);
  return;
}


/* OfflineNoticeInfo::~OfflineNoticeInfo() */

void __thiscall OfflineNoticeInfo::~OfflineNoticeInfo(OfflineNoticeInfo *this)

{
  FUN_05476c50(this + 0x10);
  FUN_05476c50(this + 8);
  return;
}


/* OfflineNoticeInfo::OfflineNoticeInfo(OfflineNoticeInfo const&) */

void __thiscall
OfflineNoticeInfo::OfflineNoticeInfo(OfflineNoticeInfo *this,OfflineNoticeInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05477b24(this + 8,param_1 + 8);
  FUN_05477b24(this + 0x10,param_1 + 0x10);
  return;
}


/* OfflineNoticeInfo::TEMPNAMEPLACEHOLDERVALUE(OfflineNoticeInfo const&) */

OfflineNoticeInfo * __thiscall
OfflineNoticeInfo::operator=(OfflineNoticeInfo *this,OfflineNoticeInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  thunk_FUN_05477b9c(this + 8,param_1 + 8);
  thunk_FUN_05477b9c(this + 0x10,param_1 + 0x10);
  return this;
}


/* OfflineNoticeInfo::OfflineNoticeInfo(OfflineNoticeInfo&&) */

void __thiscall
OfflineNoticeInfo::OfflineNoticeInfo(OfflineNoticeInfo *this,OfflineNoticeInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05476584(this + 8,param_1 + 8);
  FUN_05476584(this + 0x10,param_1 + 0x10);
  return;
}

