// Class: NewPVPDuanRewardsData


/* NewPVPDuanRewardsData::NewPVPDuanRewardsData(NewPVPDuanRewardsData const&) */

void __thiscall
NewPVPDuanRewardsData::NewPVPDuanRewardsData
          (NewPVPDuanRewardsData *this,NewPVPDuanRewardsData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return;
}


/* NewPVPDuanRewardsData::NewPVPDuanRewardsData() */

void __thiscall NewPVPDuanRewardsData::NewPVPDuanRewardsData(NewPVPDuanRewardsData *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* NewPVPDuanRewardsData::TEMPNAMEPLACEHOLDERVALUE(NewPVPDuanRewardsData const&) */

NewPVPDuanRewardsData * __thiscall
NewPVPDuanRewardsData::operator=(NewPVPDuanRewardsData *this,NewPVPDuanRewardsData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return this;
}


/* NewPVPDuanRewardsData::NewPVPDuanRewardsData(int, std::vector<S2C_BonusInfo,
   std::allocator<S2C_BonusInfo> >, int, int, int) */

void __thiscall
NewPVPDuanRewardsData::NewPVPDuanRewardsData
          (NewPVPDuanRewardsData *this,undefined4 param_1,vector *param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  *(undefined4 *)(this + 0xc) = param_1;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x10),param_3);
  *(undefined4 *)(this + 8) = param_4;
  *(undefined4 *)this = param_5;
  *(undefined4 *)(this + 4) = param_6;
  return;
}

