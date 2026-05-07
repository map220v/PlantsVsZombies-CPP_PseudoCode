// Class: BundleItem


/* BundleItem::~BundleItem() */

void __thiscall BundleItem::~BundleItem(BundleItem *this)

{
  FUN_03189388(*(undefined8 *)this);
  return;
}


/* BundleItem::BundleItem(BundleItem&&) */

void __thiscall BundleItem::BundleItem(BundleItem *this,BundleItem *param_1)

{
  undefined4 uVar1;
  
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}


/* BundleItem::BundleItem(BundleItem const&) */

void __thiscall BundleItem::BundleItem(BundleItem *this,BundleItem *param_1)

{
  undefined4 uVar1;
  
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)this,(vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}


/* BundleItem::BundleItem() */

void __thiscall BundleItem::BundleItem(BundleItem *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 5;
  return;
}

