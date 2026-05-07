// Class: BundleDetail


/* BundleDetail::~BundleDetail() */

void __thiscall BundleDetail::~BundleDetail(BundleDetail *this)

{
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BundleDetail::BundleDetail() */

void __thiscall BundleDetail::BundleDetail(BundleDetail *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::string::string((string *)(this + 0x18),"");
  nop();
  std::string::string((string *)(this + 0x20),"");
  nop();
  std::string::string((string *)(this + 0x28),"");
  nop();
  *(undefined4 *)(this + 0x30) = 0;
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 1;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BundleDetail::BundleDetail(BundleDetail&&) */

void __thiscall BundleDetail::BundleDetail(BundleDetail *this,BundleDetail *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  FUN_05474148(this + 0x18,param_1 + 0x18);
  FUN_05474148(this + 0x20,param_1 + 0x20);
  FUN_05474148(this + 0x28,param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x34) = uVar2;
  return;
}


/* BundleDetail::TEMPNAMEPLACEHOLDERVALUE(BundleDetail const&) */

BundleDetail * __thiscall BundleDetail::operator=(BundleDetail *this,BundleDetail *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this,(vector *)param_1);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  thunk_FUN_05475e00(this + 0x20,param_1 + 0x20);
  thunk_FUN_05475e00(this + 0x28,param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x34) = uVar2;
  return this;
}


/* BundleDetail::TEMPNAMEPLACEHOLDERVALUE(BundleDetail&&) */

BundleDetail * __thiscall BundleDetail::operator=(BundleDetail *this,BundleDetail *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this,(vector *)param_1);
  FUN_05474278(this + 0x18,param_1 + 0x18);
  FUN_05474278(this + 0x20,param_1 + 0x20);
  FUN_05474278(this + 0x28,param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x34) = uVar2;
  return this;
}

