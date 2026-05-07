// Class: BundleTypeList


/* BundleTypeList::~BundleTypeList() */

void __thiscall BundleTypeList::~BundleTypeList(BundleTypeList *this)

{
  std::string::~string((string *)(this + 0x30));
  Sexy::PACommand::~PACommand((PACommand *)(this + 0x18));
  std::vector<BundleItem,std::allocator<BundleItem>>::~vector
            ((vector<BundleItem,std::allocator<BundleItem>> *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BundleTypeList::BundleTypeList() */

void __thiscall BundleTypeList::BundleTypeList(BundleTypeList *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  BundlePushCondition::BundlePushCondition((BundlePushCondition *)(this + 0x18));
  std::string::string((string *)(this + 0x30),"");
  nop();
  *(undefined4 *)(this + 0x38) = 0;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BundleTypeList::BundleTypeList(BundleTypeList&&) */

void __thiscall BundleTypeList::BundleTypeList(BundleTypeList *this,BundleTypeList *param_1)

{
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  BundlePushCondition::BundlePushCondition
            ((BundlePushCondition *)(this + 0x18),(BundlePushCondition *)(param_1 + 0x18));
  FUN_05474148(this + 0x30,param_1 + 0x30);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return;
}

