// Class: WorldLevelPackageItem


/* WorldLevelPackageItem::~WorldLevelPackageItem() */

void __thiscall WorldLevelPackageItem::~WorldLevelPackageItem(WorldLevelPackageItem *this)

{
  FUN_03189414(*(undefined8 *)this);
  return;
}


/* WorldLevelPackageItem::WorldLevelPackageItem() */

void __thiscall WorldLevelPackageItem::WorldLevelPackageItem(WorldLevelPackageItem *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::clear
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


/* WorldLevelPackageItem::WorldLevelPackageItem(WorldLevelPackageItem const&) */

void __thiscall
WorldLevelPackageItem::WorldLevelPackageItem
          (WorldLevelPackageItem *this,WorldLevelPackageItem *param_1)

{
  undefined4 uVar1;
  
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this,(vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}


/* WorldLevelPackageItem::TEMPNAMEPLACEHOLDERVALUE(WorldLevelPackageItem const&) */

WorldLevelPackageItem * __thiscall
WorldLevelPackageItem::operator=(WorldLevelPackageItem *this,WorldLevelPackageItem *param_1)

{
  undefined4 uVar1;
  
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this,(vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x18) = uVar1;
  return this;
}

