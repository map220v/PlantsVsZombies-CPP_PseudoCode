// Class: JoustAPIResponseMatch


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustAPIResponseMatch::ToString() const */

void JoustAPIResponseMatch::ToString(void)

{
  Buffer *this;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long in_x0;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  Buffer *pBVar9;
  string asStack_60 [8];
  string asStack_58 [8];
  Base64 aBStack_50 [24];
  Buffer aBStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Buffer *)(in_x0 + 0x40);
  Sexy::Buffer::Buffer(aBStack_38);
  Sexy::Base64::Base64(aBStack_50);
  pBVar9 = this;
  Sexy::Base64::Decode(aBStack_50,aBStack_38,this);
  JoustUtils::ConvertContextToString((JoustUtils *)asStack_60,*(undefined4 *)(in_x0 + 8));
  uVar4 = FUN_0547429c(asStack_60);
  uVar5 = FUN_0547429c(in_x0 + 0x10);
  uVar6 = FUN_0547429c(in_x0 + 0x28);
  Sexy::WStringToString((Sexy *)(in_x0 + 0x30),(wstring *)0x0,(bool *)pBVar9);
  uVar7 = FUN_0547429c(asStack_58);
  uVar1 = *(uint *)(in_x0 + 0x38);
  uVar2 = *(uint *)(in_x0 + 0x18);
  uVar8 = FUN_0547429c(in_x0 + 0x20);
  uVar3 = Sexy::Buffer::GetDataLen(this);
  Sexy::StrFormat("%s [matchid %s]\n[opponentid %s (name %d, avatar %d)]\n [league %d] [seed %s] [replaybytes %d] [score %d] [replay valid %s]"
                  ,uVar4,uVar5,uVar6,uVar7,(ulong)uVar1,(ulong)uVar2,uVar8,uVar3,
                  *(undefined4 *)(in_x0 + 0x3c),&DAT_055d0488);
  std::string::~string(asStack_58);
  std::string::~string(asStack_60);
  Sexy::Buffer::~Buffer(aBStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustAPIResponseMatch::~JoustAPIResponseMatch() */

void __thiscall JoustAPIResponseMatch::~JoustAPIResponseMatch(JoustAPIResponseMatch *this)

{
  *(undefined ***)this = &PTR__JoustAPIResponseMatch_066ade70;
  Sexy::Buffer::~Buffer((Buffer *)(this + 0x40));
  FUN_05476c50(this + 0x30);
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x10));
  return;
}


/* JoustAPIResponseMatch::~JoustAPIResponseMatch() */

void __thiscall JoustAPIResponseMatch::~JoustAPIResponseMatch(JoustAPIResponseMatch *this)

{
  ~JoustAPIResponseMatch(this);
  AK::FreeHook(this);
  return;
}


/* JoustAPIResponseMatch::JoustAPIResponseMatch() */

void __thiscall JoustAPIResponseMatch::JoustAPIResponseMatch(JoustAPIResponseMatch *this)

{
  size_t in_x2;
  
  JoustAPIResponse::JoustAPIResponse((JoustAPIResponse *)this);
  *(undefined ***)this = &PTR__JoustAPIResponseMatch_066ade70;
  Set8BytesTo0((string *)(this + 0x10));
  Set8BytesTo0((string *)(this + 0x20));
  Set8BytesTo0((string *)(this + 0x28));
  FUN_05476574(this + 0x30);
  Sexy::Buffer::Buffer((Buffer *)(this + 0x40));
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  std::string::append((string *)(this + 0x10),"",in_x2);
  std::string::append((string *)(this + 0x20),"",in_x2);
  std::string::append((string *)(this + 0x28),"",in_x2);
  return;
}


/* JoustAPIResponseMatch::TEMPNAMEPLACEHOLDERVALUE(JoustAPIResponseMatch const&) */

JoustAPIResponseMatch * __thiscall
JoustAPIResponseMatch::operator=(JoustAPIResponseMatch *this,JoustAPIResponseMatch *param_1)

{
  undefined4 uVar1;
  
  FUN_0388e764(this,*(undefined4 *)(param_1 + 8));
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  thunk_FUN_05475e00(this + 0x20,param_1 + 0x20);
  thunk_FUN_05475e00(this + 0x28,param_1 + 0x28);
  thunk_FUN_05477b9c(this + 0x30,param_1 + 0x30);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x38) = uVar1;
  Sexy::Buffer::operator=((Buffer *)(this + 0x40),(Buffer *)(param_1 + 0x40));
  return this;
}

