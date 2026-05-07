// Class: S2C_NoticeInfo


/* S2C_NoticeInfo::~S2C_NoticeInfo() */

void __thiscall S2C_NoticeInfo::~S2C_NoticeInfo(S2C_NoticeInfo *this)

{
  S2C_CurrencyInfo::~S2C_CurrencyInfo((S2C_CurrencyInfo *)(this + 0x28));
  std::string::~string((string *)(this + 0x18));
  FUN_05476c50(this + 0x10);
  FUN_05476c50(this + 8);
  return;
}


/* S2C_NoticeInfo::S2C_NoticeInfo() */

void __thiscall S2C_NoticeInfo::S2C_NoticeInfo(S2C_NoticeInfo *this)

{
  *(undefined4 *)this = 0;
  FUN_05476574(this + 8);
  FUN_05476574(this + 0x10);
  Set8BytesTo0(this + 0x18);
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  S2C_CurrencyInfo::S2C_CurrencyInfo((S2C_CurrencyInfo *)(this + 0x28));
  return;
}


/* S2C_NoticeInfo::S2C_NoticeInfo(S2C_NoticeInfo&&) */

void __thiscall S2C_NoticeInfo::S2C_NoticeInfo(S2C_NoticeInfo *this,S2C_NoticeInfo *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05476584(this + 8,param_1 + 8);
  FUN_05476584(this + 0x10,param_1 + 0x10);
  FUN_05474148(this + 0x18,param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x20) = uVar1;
  S2C_CurrencyInfo::S2C_CurrencyInfo
            ((S2C_CurrencyInfo *)(this + 0x28),(S2C_CurrencyInfo *)(param_1 + 0x28));
  return;
}


/* S2C_NoticeInfo::S2C_NoticeInfo(S2C_NoticeInfo const&) */

void __thiscall S2C_NoticeInfo::S2C_NoticeInfo(S2C_NoticeInfo *this,S2C_NoticeInfo *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05477b24(this + 8,param_1 + 8);
  FUN_05477b24(this + 0x10,param_1 + 0x10);
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x20) = uVar1;
  S2C_CurrencyInfo::S2C_CurrencyInfo
            ((S2C_CurrencyInfo *)(this + 0x28),(S2C_CurrencyInfo *)(param_1 + 0x28));
  return;
}


/* S2C_NoticeInfo::TEMPNAMEPLACEHOLDERVALUE(S2C_NoticeInfo const&) */

S2C_NoticeInfo * __thiscall S2C_NoticeInfo::operator=(S2C_NoticeInfo *this,S2C_NoticeInfo *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  thunk_FUN_05477b9c(this + 8,param_1 + 8);
  thunk_FUN_05477b9c(this + 0x10,param_1 + 0x10);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x20) = uVar1;
  S2C_CurrencyInfo::operator=
            ((S2C_CurrencyInfo *)(this + 0x28),(S2C_CurrencyInfo *)(param_1 + 0x28));
  return this;
}

