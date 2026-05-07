// Class: TourismOctoberPlayerInfo


/* TourismOctoberPlayerInfo::TourismOctoberPlayerInfo() */

void __thiscall TourismOctoberPlayerInfo::TourismOctoberPlayerInfo(TourismOctoberPlayerInfo *this)

{
  Set8BytesTo0(this + 8);
  return;
}


/* TourismOctoberPlayerInfo::TourismOctoberPlayerInfo(TourismOctoberPlayerInfo const&) */

void __thiscall
TourismOctoberPlayerInfo::TourismOctoberPlayerInfo
          (TourismOctoberPlayerInfo *this,TourismOctoberPlayerInfo *param_1)

{
  undefined4 uVar1;
  
  TourismOctoberPlayerData::TourismOctoberPlayerData
            ((TourismOctoberPlayerData *)this,(TourismOctoberPlayerData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  this[0x1c] = param_1[0x1c];
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}


/* TourismOctoberPlayerInfo::TEMPNAMEPLACEHOLDERVALUE(TourismOctoberPlayerInfo const&) */

TourismOctoberPlayerInfo * __thiscall
TourismOctoberPlayerInfo::operator=
          (TourismOctoberPlayerInfo *this,TourismOctoberPlayerInfo *param_1)

{
  undefined4 uVar1;
  
  TourismOctoberPlayerData::operator=
            ((TourismOctoberPlayerData *)this,(TourismOctoberPlayerData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  this[0x1c] = param_1[0x1c];
  *(undefined4 *)(this + 0x18) = uVar1;
  return this;
}


/* TourismOctoberPlayerInfo::TourismOctoberPlayerInfo(TourismOctoberPlayerInfo&&) */

void __thiscall
TourismOctoberPlayerInfo::TourismOctoberPlayerInfo
          (TourismOctoberPlayerInfo *this,TourismOctoberPlayerInfo *param_1)

{
  undefined4 uVar1;
  
  TourismOctoberPlayerData::TourismOctoberPlayerData
            ((TourismOctoberPlayerData *)this,(TourismOctoberPlayerData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  this[0x1c] = param_1[0x1c];
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}

