// Class: Network_NewPVPShopItemData


/* Network_NewPVPShopItemData::~Network_NewPVPShopItemData() */

void __thiscall
Network_NewPVPShopItemData::~Network_NewPVPShopItemData(Network_NewPVPShopItemData *this)

{
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x30));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  return;
}


/* Network_NewPVPShopItemData::Network_NewPVPShopItemData(Network_NewPVPShopItemData const&) */

void __thiscall
Network_NewPVPShopItemData::Network_NewPVPShopItemData
          (Network_NewPVPShopItemData *this,Network_NewPVPShopItemData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar5;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x30),(vector *)(param_1 + 0x30));
  return;
}


/* Network_NewPVPShopItemData::TEMPNAMEPLACEHOLDERVALUE(Network_NewPVPShopItemData const&) */

Network_NewPVPShopItemData * __thiscall
Network_NewPVPShopItemData::operator=
          (Network_NewPVPShopItemData *this,Network_NewPVPShopItemData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar5;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x30),(vector *)(param_1 + 0x30));
  return this;
}


/* Network_NewPVPShopItemData::Network_NewPVPShopItemData() */

void __thiscall
Network_NewPVPShopItemData::Network_NewPVPShopItemData(Network_NewPVPShopItemData *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* Network_NewPVPShopItemData::Network_NewPVPShopItemData(Network_NewPVPShopItemData&&) */

void __thiscall
Network_NewPVPShopItemData::Network_NewPVPShopItemData
          (Network_NewPVPShopItemData *this,Network_NewPVPShopItemData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar5;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x30),(vector *)(param_1 + 0x30));
  return;
}

