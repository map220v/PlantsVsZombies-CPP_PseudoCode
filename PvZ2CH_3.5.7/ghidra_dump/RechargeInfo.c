// Class: RechargeInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeInfo::RechargeInfo() */

void __thiscall RechargeInfo::RechargeInfo(RechargeInfo *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  *this = (RechargeInfo)0x1;
  std::string::string((string *)(this + 8),"unknown");
  nop();
  std::string::string((string *)(this + 0x10),"unknown");
  nop();
  std::string::string((string *)(this + 0x18),"unknown");
  nop();
  std::string::string((string *)(this + 0x20),"unknown");
  nop();
  std::string::string((string *)(this + 0x28),"unknown");
  nop();
  std::string::string((string *)(this + 0x30),"unknown");
  nop();
  *(undefined4 *)(this + 0x38) = 0;
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RechargeInfo::~RechargeInfo() */

void __thiscall RechargeInfo::~RechargeInfo(RechargeInfo *this)

{
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  return;
}

