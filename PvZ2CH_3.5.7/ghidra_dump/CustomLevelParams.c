// Class: CustomLevelParams


/* CustomLevelParams::~CustomLevelParams() */

void __thiscall CustomLevelParams::~CustomLevelParams(CustomLevelParams *this)

{
  CustomLevelElements::~CustomLevelElements((CustomLevelElements *)(this + 0x1d0));
  CustomChallenge::~CustomChallenge((CustomChallenge *)(this + 0x98));
  CustomSeedBankData::~CustomSeedBankData((CustomSeedBankData *)(this + 0x40));
  CustomWaveData::~CustomWaveData((CustomWaveData *)(this + 0x18));
  std::string::~string((string *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelParams::CustomLevelParams() */

void __thiscall CustomLevelParams::CustomLevelParams(CustomLevelParams *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"");
  nop();
  std::string::string((string *)(this + 8),"");
  nop();
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 200;
  CustomWaveData::CustomWaveData((CustomWaveData *)(this + 0x18));
  CustomSeedBankData::CustomSeedBankData((CustomSeedBankData *)(this + 0x40));
  CustomChallenge::CustomChallenge((CustomChallenge *)(this + 0x98));
  CustomLevelElements::CustomLevelElements((CustomLevelElements *)(this + 0x1d0));
  CustomLevelEncourage::CustomLevelEncourage((CustomLevelEncourage *)(this + 0x268));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelParams::CustomLevelParams(CustomLevelParams const&) */

void __thiscall
CustomLevelParams::CustomLevelParams(CustomLevelParams *this,CustomLevelParams *param_1)

{
  undefined4 uVar1;
  
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = uVar1;
  CustomWaveData::CustomWaveData((CustomWaveData *)(this + 0x18),(CustomWaveData *)(param_1 + 0x18))
  ;
  CustomSeedBankData::CustomSeedBankData
            ((CustomSeedBankData *)(this + 0x40),(CustomSeedBankData *)(param_1 + 0x40));
  CustomChallenge::CustomChallenge
            ((CustomChallenge *)(this + 0x98),(CustomChallenge *)(param_1 + 0x98));
  CustomLevelElements::CustomLevelElements
            ((CustomLevelElements *)(this + 0x1d0),(CustomLevelElements *)(param_1 + 0x1d0));
  *(undefined4 *)(this + 0x268) = *(undefined4 *)(param_1 + 0x268);
  return;
}


/* CustomLevelParams::TEMPNAMEPLACEHOLDERVALUE(CustomLevelParams const&) */

CustomLevelParams * __thiscall
CustomLevelParams::operator=(CustomLevelParams *this,CustomLevelParams *param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_05475e00();
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = uVar1;
  CustomWaveData::operator=((CustomWaveData *)(this + 0x18),(CustomWaveData *)(param_1 + 0x18));
  CustomSeedBankData::operator=
            ((CustomSeedBankData *)(this + 0x40),(CustomSeedBankData *)(param_1 + 0x40));
  CustomChallenge::operator=((CustomChallenge *)(this + 0x98),(CustomChallenge *)(param_1 + 0x98));
  CustomLevelElements::operator=
            ((CustomLevelElements *)(this + 0x1d0),(CustomLevelElements *)(param_1 + 0x1d0));
  *(undefined4 *)(this + 0x268) = *(undefined4 *)(param_1 + 0x268);
  return this;
}


/* CustomLevelParams::CustomLevelParams(CustomLevelParams&&) */

void __thiscall
CustomLevelParams::CustomLevelParams(CustomLevelParams *this,CustomLevelParams *param_1)

{
  undefined4 uVar1;
  
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = uVar1;
  Sexy::MemoryImage::TriRep::Level::Level((Level *)(this + 0x18),(Level *)(param_1 + 0x18));
  CustomSeedBankData::CustomSeedBankData
            ((CustomSeedBankData *)(this + 0x40),(CustomSeedBankData *)(param_1 + 0x40));
  CustomChallenge::CustomChallenge
            ((CustomChallenge *)(this + 0x98),(CustomChallenge *)(param_1 + 0x98));
  CustomLevelElements::CustomLevelElements
            ((CustomLevelElements *)(this + 0x1d0),(CustomLevelElements *)(param_1 + 0x1d0));
  *(undefined4 *)(this + 0x268) = *(undefined4 *)(param_1 + 0x268);
  return;
}


/* CustomLevelParams::TEMPNAMEPLACEHOLDERVALUE(CustomLevelParams&&) */

CustomLevelParams * __thiscall
CustomLevelParams::operator=(CustomLevelParams *this,CustomLevelParams *param_1)

{
  undefined4 uVar1;
  
  FUN_05474278();
  FUN_05474278(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = uVar1;
  CustomWaveData::operator=((CustomWaveData *)(this + 0x18),(CustomWaveData *)(param_1 + 0x18));
  CustomSeedBankData::operator=
            ((CustomSeedBankData *)(this + 0x40),(CustomSeedBankData *)(param_1 + 0x40));
  CustomChallenge::operator=((CustomChallenge *)(this + 0x98),(CustomChallenge *)(param_1 + 0x98));
  CustomLevelElements::operator=
            ((CustomLevelElements *)(this + 0x1d0),(CustomLevelElements *)(param_1 + 0x1d0));
  *(undefined4 *)(this + 0x268) = *(undefined4 *)(param_1 + 0x268);
  return this;
}

