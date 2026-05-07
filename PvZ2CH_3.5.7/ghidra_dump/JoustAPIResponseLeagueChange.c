// Class: JoustAPIResponseLeagueChange


/* JoustAPIResponseLeagueChange::~JoustAPIResponseLeagueChange() */

void __thiscall
JoustAPIResponseLeagueChange::~JoustAPIResponseLeagueChange(JoustAPIResponseLeagueChange *this)

{
  std::vector<JoustBonusInfo,std::allocator<JoustBonusInfo>>::~vector
            ((vector<JoustBonusInfo,std::allocator<JoustBonusInfo>> *)(this + 0x10));
  return;
}


/* JoustAPIResponseLeagueChange::JoustAPIResponseLeagueChange(JoustAPIResponseLeagueChange const&)
    */

void __thiscall
JoustAPIResponseLeagueChange::JoustAPIResponseLeagueChange
          (JoustAPIResponseLeagueChange *this,JoustAPIResponseLeagueChange *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  JoustAPIResponseLeagueChange JVar3;
  
  JVar3 = *param_1;
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *this = JVar3;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  std::vector<JoustBonusInfo,std::allocator<JoustBonusInfo>>::vector
            ((vector<JoustBonusInfo,std::allocator<JoustBonusInfo>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustAPIResponseLeagueChange::ToString() const */

void JoustAPIResponseLeagueChange::ToString(void)

{
  char *in_x0;
  undefined *puVar1;
  string *extraout_x1;
  Sexy aSStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*in_x0 == '\0') {
    puVar1 = &DAT_055d0490;
  }
  else {
    puVar1 = &DAT_055d0488;
  }
  Sexy::StrFormat("LeagueChange [hasChanged %s] [newleague %d] [prevleague %d]\n",aSStack_10,puVar1,
                  (ulong)*(uint *)(in_x0 + 4),(ulong)*(uint *)(in_x0 + 8));
  Sexy::UTF8StringToWString(aSStack_10,extraout_x1);
  std::string::~string((string *)aSStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustAPIResponseLeagueChange::JoustAPIResponseLeagueChange() */

void __thiscall
JoustAPIResponseLeagueChange::JoustAPIResponseLeagueChange(JoustAPIResponseLeagueChange *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  *this = (JoustAPIResponseLeagueChange)0x0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}


/* JoustAPIResponseLeagueChange::TEMPNAMEPLACEHOLDERVALUE(JoustAPIResponseLeagueChange const&) */

JoustAPIResponseLeagueChange * __thiscall
JoustAPIResponseLeagueChange::operator=
          (JoustAPIResponseLeagueChange *this,JoustAPIResponseLeagueChange *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  JoustAPIResponseLeagueChange JVar3;
  
  JVar3 = *param_1;
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *this = JVar3;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  std::vector<JoustBonusInfo,std::allocator<JoustBonusInfo>>::operator=
            ((vector<JoustBonusInfo,std::allocator<JoustBonusInfo>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return this;
}

