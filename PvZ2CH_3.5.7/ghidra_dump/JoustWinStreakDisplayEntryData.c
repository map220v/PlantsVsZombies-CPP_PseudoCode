// Class: JoustWinStreakDisplayEntryData


/* JoustWinStreakDisplayEntryData::JoustWinStreakDisplayEntryData() */

void __thiscall
JoustWinStreakDisplayEntryData::JoustWinStreakDisplayEntryData(JoustWinStreakDisplayEntryData *this)

{
  LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType
            ((LevelOfTheDay_RewardItemType *)(this + 0x10));
  *this = (JoustWinStreakDisplayEntryData)0x0;
  *(undefined4 *)(this + 8) = 0;
  this[1] = (JoustWinStreakDisplayEntryData)0x0;
  *(undefined4 *)(this + 4) = 0xffffffff;
  return;
}


/* JoustWinStreakDisplayEntryData::~JoustWinStreakDisplayEntryData() */

void __thiscall
JoustWinStreakDisplayEntryData::~JoustWinStreakDisplayEntryData
          (JoustWinStreakDisplayEntryData *this)

{
  LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType
            ((LevelOfTheDay_RewardItemType *)(this + 0x10));
  return;
}


/* JoustWinStreakDisplayEntryData::TEMPNAMEPLACEHOLDERVALUE(JoustWinStreakDisplayEntryData const&)
    */

JoustWinStreakDisplayEntryData * __thiscall
JoustWinStreakDisplayEntryData::operator=
          (JoustWinStreakDisplayEntryData *this,JoustWinStreakDisplayEntryData *param_1)

{
  undefined4 uVar1;
  JoustWinStreakDisplayEntryData JVar2;
  JoustWinStreakDisplayEntryData JVar3;
  
  JVar2 = *param_1;
  JVar3 = param_1[1];
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *this = JVar2;
  this[1] = JVar3;
  *(undefined4 *)(this + 4) = uVar1;
  LevelOfTheDay_RewardItemType::operator=
            ((LevelOfTheDay_RewardItemType *)(this + 0x10),
             (LevelOfTheDay_RewardItemType *)(param_1 + 0x10));
  return this;
}

