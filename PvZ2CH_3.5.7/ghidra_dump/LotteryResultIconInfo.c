// Class: LotteryResultIconInfo


/* LotteryResultIconInfo::LotteryResultIconInfo() */

void __thiscall LotteryResultIconInfo::LotteryResultIconInfo(LotteryResultIconInfo *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  DVec3::DVec3((DVec3 *)(this + 8));
  FUN_05476574(this + 0x18);
  std::string::append((string *)this,"",in_x2);
  *(undefined4 *)(this + 0x20) = 0x3f800000;
  return;
}


/* LotteryResultIconInfo::~LotteryResultIconInfo() */

void __thiscall LotteryResultIconInfo::~LotteryResultIconInfo(LotteryResultIconInfo *this)

{
  FUN_05476c50(this + 0x18);
  std::string::~string((string *)this);
  return;
}


/* LotteryResultIconInfo::TEMPNAMEPLACEHOLDERVALUE(LotteryResultIconInfo const&) */

LotteryResultIconInfo * __thiscall
LotteryResultIconInfo::operator=(LotteryResultIconInfo *this,LotteryResultIconInfo *param_1)

{
  thunk_FUN_05475e00();
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 8),(SexyVector3 *)(param_1 + 8));
  thunk_FUN_05477b9c(this + 0x18,param_1 + 0x18);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return this;
}

