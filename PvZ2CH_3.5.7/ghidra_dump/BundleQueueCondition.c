// Class: BundleQueueCondition


/* BundleQueueCondition::~BundleQueueCondition() */

void __thiscall BundleQueueCondition::~BundleQueueCondition(BundleQueueCondition *this)

{
  std::string::~string((string *)(this + 0x18));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BundleQueueCondition::BundleQueueCondition() */

void __thiscall BundleQueueCondition::BundleQueueCondition(BundleQueueCondition *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::string::string((string *)(this + 0x18),"");
  nop();
  *(undefined4 *)(this + 0x20) = 0;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BundleQueueCondition::BundleQueueCondition(BundleQueueCondition const&) */

void __thiscall
BundleQueueCondition::BundleQueueCondition(BundleQueueCondition *this,BundleQueueCondition *param_1)

{
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)this,(vector *)param_1);
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return;
}


/* BundleQueueCondition::BundleQueueCondition(BundleQueueCondition&&) */

void __thiscall
BundleQueueCondition::BundleQueueCondition(BundleQueueCondition *this,BundleQueueCondition *param_1)

{
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  FUN_05474148(this + 0x18,param_1 + 0x18);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return;
}


/* BundleQueueCondition::TEMPNAMEPLACEHOLDERVALUE(BundleQueueCondition const&) */

BundleQueueCondition * __thiscall
BundleQueueCondition::operator=(BundleQueueCondition *this,BundleQueueCondition *param_1)

{
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)this,(vector *)param_1);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return this;
}

