// Class: BundleUIDetail


/* BundleUIDetail::~BundleUIDetail() */

void __thiscall BundleUIDetail::~BundleUIDetail(BundleUIDetail *this)

{
  std::string::~string((string *)(this + 0x58));
  BundleDetail::~BundleDetail((BundleDetail *)this);
  return;
}


/* BundleUIDetail::BundleUIDetail(BundleDetail const&, int const&, int const&, long const&,
   std::string const&) */

void __thiscall
BundleUIDetail::BundleUIDetail
          (BundleUIDetail *this,BundleDetail *param_1,int *param_2,int *param_3,long *param_4,
          string *param_5)

{
  long lVar1;
  
  BundleDetail::BundleDetail((BundleDetail *)this);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  Set8BytesTo0(this + 0x58);
  BundleDetail::operator=((BundleDetail *)this,param_1);
  lVar1 = *param_4;
  *(int *)(this + 0x50) = *param_3;
  *(long *)(this + 0x48) = lVar1;
  *(int *)(this + 0x40) = *param_2;
  thunk_FUN_05475e00(this + 0x58,param_5);
  return;
}


/* BundleUIDetail::BundleUIDetail(BundleUIDetail&&) */

void __thiscall BundleUIDetail::BundleUIDetail(BundleUIDetail *this,BundleUIDetail *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  BundleDetail::BundleDetail((BundleDetail *)this,(BundleDetail *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x40) = uVar1;
  *(undefined8 *)(this + 0x48) = uVar2;
  FUN_05474148(this + 0x58,param_1 + 0x58);
  return;
}


/* BundleUIDetail::TEMPNAMEPLACEHOLDERVALUE(BundleUIDetail&&) */

BundleUIDetail * __thiscall BundleUIDetail::operator=(BundleUIDetail *this,BundleUIDetail *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  BundleDetail::operator=((BundleDetail *)this,(BundleDetail *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x40) = uVar1;
  *(undefined8 *)(this + 0x48) = uVar2;
  FUN_05474278(this + 0x58,param_1 + 0x58);
  return this;
}

