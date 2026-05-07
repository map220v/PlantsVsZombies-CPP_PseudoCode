// Class: NewPVPSmallDuan


/* NewPVPSmallDuan::NewPVPSmallDuan() */

void __thiscall NewPVPSmallDuan::NewPVPSmallDuan(NewPVPSmallDuan *this)

{
  *(undefined4 *)this = 1;
  *(undefined4 *)(this + 4) = 1;
  *(undefined4 *)(this + 8) = 3;
  NewPVPDuanRewardsData::NewPVPDuanRewardsData((NewPVPDuanRewardsData *)(this + 0x10));
  return;
}


/* NewPVPSmallDuan::~NewPVPSmallDuan() */

void __thiscall NewPVPSmallDuan::~NewPVPSmallDuan(NewPVPSmallDuan *this)

{
  PennyGiftBoxRankPriviewItemData::~PennyGiftBoxRankPriviewItemData
            ((PennyGiftBoxRankPriviewItemData *)(this + 0x10));
  return;
}


/* NewPVPSmallDuan::NewPVPSmallDuan(NewPVPSmallDuan const&) */

void __thiscall NewPVPSmallDuan::NewPVPSmallDuan(NewPVPSmallDuan *this,NewPVPSmallDuan *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  NewPVPDuanRewardsData::NewPVPDuanRewardsData
            ((NewPVPDuanRewardsData *)(this + 0x10),(NewPVPDuanRewardsData *)(param_1 + 0x10));
  return;
}


/* NewPVPSmallDuan::TEMPNAMEPLACEHOLDERVALUE(NewPVPSmallDuan const&) */

NewPVPSmallDuan * __thiscall
NewPVPSmallDuan::operator=(NewPVPSmallDuan *this,NewPVPSmallDuan *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  NewPVPDuanRewardsData::operator=
            ((NewPVPDuanRewardsData *)(this + 0x10),(NewPVPDuanRewardsData *)(param_1 + 0x10));
  return this;
}


/* NewPVPSmallDuan::NewPVPSmallDuan(int, int, int, NewPVPDuanRewardsData) */

void __thiscall
NewPVPSmallDuan::NewPVPSmallDuan
          (NewPVPSmallDuan *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          NewPVPDuanRewardsData *param_5)

{
  *(undefined4 *)this = 1;
  *(undefined4 *)(this + 4) = 1;
  *(undefined4 *)(this + 8) = 3;
  NewPVPDuanRewardsData::NewPVPDuanRewardsData((NewPVPDuanRewardsData *)(this + 0x10));
  *(undefined4 *)this = param_1;
  *(undefined4 *)(this + 4) = param_2;
  *(undefined4 *)(this + 8) = param_3;
  NewPVPDuanRewardsData::operator=((NewPVPDuanRewardsData *)(this + 0x10),param_5);
  return;
}


/* NewPVPSmallDuan::NewPVPSmallDuan(NewPVPSmallDuan&&) */

void __thiscall NewPVPSmallDuan::NewPVPSmallDuan(NewPVPSmallDuan *this,NewPVPSmallDuan *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  Sexy::MemoryImage::TriRep::Level::Level((Level *)(this + 0x10),(Level *)(param_1 + 0x10));
  return;
}

