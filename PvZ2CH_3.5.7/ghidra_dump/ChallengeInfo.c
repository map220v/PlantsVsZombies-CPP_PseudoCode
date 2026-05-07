// Class: ChallengeInfo


/* ChallengeInfo::ChallengeInfo() */

void __thiscall ChallengeInfo::ChallengeInfo(ChallengeInfo *this)

{
  FUN_05476574(this + 0x10);
  FUN_05476574(this + 0x18);
  return;
}


/* ChallengeInfo::TEMPNAMEPLACEHOLDERVALUE(ChallengeInfo const&) */

ChallengeInfo * __thiscall ChallengeInfo::operator=(ChallengeInfo *this,ChallengeInfo *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  thunk_FUN_05477b9c(this + 0x10,param_1 + 0x10);
  thunk_FUN_05477b9c(this + 0x18,param_1 + 0x18);
  return this;
}

