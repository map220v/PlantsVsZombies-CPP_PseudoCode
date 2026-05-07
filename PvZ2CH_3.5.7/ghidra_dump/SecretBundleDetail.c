// Class: SecretBundleDetail


/* SecretBundleDetail::SecretBundleDetail() */

void __thiscall SecretBundleDetail::SecretBundleDetail(SecretBundleDetail *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0x3c));
  this[0x30] = (SecretBundleDetail)0x0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  return;
}


/* SecretBundleDetail::SecretBundleDetail(SecretBundleDetail&&) */

void __thiscall
SecretBundleDetail::SecretBundleDetail(SecretBundleDetail *this,SecretBundleDetail *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  SecretBundleDetail SVar3;
  
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  SVar3 = param_1[0x30];
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x3c) = *(undefined8 *)(param_1 + 0x3c);
  this[0x30] = SVar3;
  *(undefined4 *)(this + 0x34) = uVar1;
  *(undefined4 *)(this + 0x38) = uVar2;
  return;
}


/* SecretBundleDetail::~SecretBundleDetail() */

void __thiscall SecretBundleDetail::~SecretBundleDetail(SecretBundleDetail *this)

{
  std::vector<SecretStoreContent,std::allocator<SecretStoreContent>>::~vector
            ((vector<SecretStoreContent,std::allocator<SecretStoreContent>> *)(this + 0x18));
  std::vector<SecretAwardInfo,std::allocator<SecretAwardInfo>>::~vector
            ((vector<SecretAwardInfo,std::allocator<SecretAwardInfo>> *)this);
  return;
}


/* SecretBundleDetail::SecretBundleDetail(SecretBundleDetail const&) */

void __thiscall
SecretBundleDetail::SecretBundleDetail(SecretBundleDetail *this,SecretBundleDetail *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  SecretBundleDetail SVar3;
  
  std::vector<SecretAwardInfo,std::allocator<SecretAwardInfo>>::vector
            ((vector<SecretAwardInfo,std::allocator<SecretAwardInfo>> *)this,(vector *)param_1);
  std::vector<SecretStoreContent,std::allocator<SecretStoreContent>>::vector
            ((vector<SecretStoreContent,std::allocator<SecretStoreContent>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  SVar3 = param_1[0x30];
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x3c) = *(undefined8 *)(param_1 + 0x3c);
  this[0x30] = SVar3;
  *(undefined4 *)(this + 0x34) = uVar1;
  *(undefined4 *)(this + 0x38) = uVar2;
  return;
}


/* SecretBundleDetail::TEMPNAMEPLACEHOLDERVALUE(SecretBundleDetail const&) */

SecretBundleDetail * __thiscall
SecretBundleDetail::operator=(SecretBundleDetail *this,SecretBundleDetail *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  SecretBundleDetail SVar3;
  
  std::vector<SecretAwardInfo,std::allocator<SecretAwardInfo>>::operator=
            ((vector<SecretAwardInfo,std::allocator<SecretAwardInfo>> *)this,(vector *)param_1);
  std::vector<SecretStoreContent,std::allocator<SecretStoreContent>>::operator=
            ((vector<SecretStoreContent,std::allocator<SecretStoreContent>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  SVar3 = param_1[0x30];
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x3c) = *(undefined8 *)(param_1 + 0x3c);
  this[0x30] = SVar3;
  *(undefined4 *)(this + 0x34) = uVar1;
  *(undefined4 *)(this + 0x38) = uVar2;
  return this;
}

