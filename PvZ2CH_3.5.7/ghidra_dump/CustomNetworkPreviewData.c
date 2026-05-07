// Class: CustomNetworkPreviewData


/* CustomNetworkPreviewData::TEMPNAMEPLACEHOLDERVALUE(CustomNetworkPreviewData const&) */

CustomNetworkPreviewData * __thiscall
CustomNetworkPreviewData::operator=
          (CustomNetworkPreviewData *this,CustomNetworkPreviewData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  *(undefined4 *)(this + 0x18) = uVar3;
  *(undefined4 *)(this + 0x1c) = uVar4;
  *(undefined4 *)(this + 0x20) = uVar5;
  thunk_FUN_05475e00(this + 0x28,param_1 + 0x28);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  thunk_FUN_05475e00(this + 0x38,param_1 + 0x38);
  thunk_FUN_05475e00(this + 0x40,param_1 + 0x40);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  return this;
}


/* CustomNetworkPreviewData::CustomNetworkPreviewData() */

void __thiscall CustomNetworkPreviewData::CustomNetworkPreviewData(CustomNetworkPreviewData *this)

{
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x28);
  Set8BytesTo0(this + 0x38);
  Set8BytesTo0(this + 0x40);
  *(undefined4 *)(this + 0x48) = 0;
  return;
}


/* CustomNetworkPreviewData::~CustomNetworkPreviewData() */

void __thiscall CustomNetworkPreviewData::~CustomNetworkPreviewData(CustomNetworkPreviewData *this)

{
  std::string::~string((string *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 8));
  return;
}


/* CustomNetworkPreviewData::CustomNetworkPreviewData(CustomNetworkPreviewData const&) */

void __thiscall
CustomNetworkPreviewData::CustomNetworkPreviewData
          (CustomNetworkPreviewData *this,CustomNetworkPreviewData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05475d88(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  *(undefined4 *)(this + 0x18) = uVar3;
  *(undefined4 *)(this + 0x1c) = uVar4;
  *(undefined4 *)(this + 0x20) = uVar5;
  FUN_05475d88(this + 0x28,param_1 + 0x28);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  FUN_05475d88(this + 0x38,param_1 + 0x38);
  FUN_05475d88(this + 0x40,param_1 + 0x40);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  return;
}


/* CustomNetworkPreviewData::CustomNetworkPreviewData(CustomNetworkPreviewData&&) */

void __thiscall
CustomNetworkPreviewData::CustomNetworkPreviewData
          (CustomNetworkPreviewData *this,CustomNetworkPreviewData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05474148(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  *(undefined4 *)(this + 0x18) = uVar3;
  *(undefined4 *)(this + 0x1c) = uVar4;
  *(undefined4 *)(this + 0x20) = uVar5;
  FUN_05474148(this + 0x28,param_1 + 0x28);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  FUN_05474148(this + 0x38,param_1 + 0x38);
  FUN_05474148(this + 0x40,param_1 + 0x40);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  return;
}

