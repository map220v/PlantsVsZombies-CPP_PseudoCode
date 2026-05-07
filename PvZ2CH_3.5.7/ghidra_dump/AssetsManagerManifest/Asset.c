// Class: AssetsManagerManifest::Asset


/* AssetsManagerManifest::Asset::Asset(AssetsManagerManifest::Asset const&) */

void __thiscall AssetsManagerManifest::Asset::Asset(Asset *this,Asset *param_1)

{
  Asset AVar1;
  
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  AVar1 = param_1[0x10];
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  this[0x10] = AVar1;
  return;
}


/* AssetsManagerManifest::Asset::Asset() */

void __thiscall AssetsManagerManifest::Asset::Asset(Asset *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  Set8BytesTo0((string *)(this + 8));
  std::string::append((string *)this,"",in_x2);
  std::string::append((string *)(this + 8),"",in_x2);
  this[0x10] = (Asset)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


/* AssetsManagerManifest::Asset::TEMPNAMEPLACEHOLDERVALUE(AssetsManagerManifest::Asset const&) */

Asset * __thiscall AssetsManagerManifest::Asset::operator=(Asset *this,Asset *param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_05475e00();
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  this[0x10] = param_1[0x10];
  *(undefined4 *)(this + 0x14) = uVar1;
  return this;
}

