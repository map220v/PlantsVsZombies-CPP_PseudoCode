// Class: NetworkfthShopContentData


/* NetworkfthShopContentData::NetworkfthShopContentData(NetworkfthShopContentData&&) */

void __thiscall
NetworkfthShopContentData::NetworkfthShopContentData
          (NetworkfthShopContentData *this,NetworkfthShopContentData *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return;
}


/* NetworkfthShopContentData::NetworkfthShopContentData() */

void __thiscall
NetworkfthShopContentData::NetworkfthShopContentData(NetworkfthShopContentData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* NetworkfthShopContentData::~NetworkfthShopContentData() */

void __thiscall
NetworkfthShopContentData::~NetworkfthShopContentData(NetworkfthShopContentData *this)

{
  std::vector<NetworkfthCostData,std::allocator<NetworkfthCostData>>::~vector
            ((vector<NetworkfthCostData,std::allocator<NetworkfthCostData>> *)(this + 8));
  return;
}

