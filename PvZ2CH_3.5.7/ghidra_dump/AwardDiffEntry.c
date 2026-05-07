// Class: AwardDiffEntry


/* AwardDiffEntry::AwardDiffEntry() */

void __thiscall AwardDiffEntry::AwardDiffEntry(AwardDiffEntry *this)

{
  AwardEntry::AwardEntry((AwardEntry *)this);
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined4 *)(this + 0x1c) = 0xffffffff;
  return;
}


/* AwardDiffEntry::AwardDiffEntry(AwardType, std::string const&, int, int, int, int) */

void __thiscall AwardDiffEntry::AwardDiffEntry(AwardDiffEntry *this)

{
  undefined4 in_w5;
  undefined4 in_w6;
  
  AwardEntry::AwardEntry();
  *(undefined4 *)(this + 0x18) = in_w5;
  *(undefined4 *)(this + 0x1c) = in_w6;
  return;
}


/* AwardDiffEntry::AwardDiffEntry(AwardDiffEntry&&) */

void __thiscall AwardDiffEntry::AwardDiffEntry(AwardDiffEntry *this,AwardDiffEntry *param_1)

{
  undefined4 uVar1;
  
  TourismOctoberPlayerData::TourismOctoberPlayerData
            ((TourismOctoberPlayerData *)this,(TourismOctoberPlayerData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}


/* AwardDiffEntry::TEMPNAMEPLACEHOLDERVALUE(AwardDiffEntry&&) */

AwardDiffEntry * __thiscall AwardDiffEntry::operator=(AwardDiffEntry *this,AwardDiffEntry *param_1)

{
  undefined4 uVar1;
  
  TourismOctoberPlayerData::operator=
            ((TourismOctoberPlayerData *)this,(TourismOctoberPlayerData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x18) = uVar1;
  return this;
}

