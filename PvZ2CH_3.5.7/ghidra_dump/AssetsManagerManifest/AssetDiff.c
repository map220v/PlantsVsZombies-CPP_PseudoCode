// Class: AssetsManagerManifest::AssetDiff


/* AssetsManagerManifest::AssetDiff::AssetDiff(AssetsManagerManifest::AssetDiff const&) */

void __thiscall AssetsManagerManifest::AssetDiff::AssetDiff(AssetDiff *this,AssetDiff *param_1)

{
  Asset::Asset((Asset *)this,(Asset *)param_1);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}


/* AssetsManagerManifest::AssetDiff::AssetDiff() */

void __thiscall AssetsManagerManifest::AssetDiff::AssetDiff(AssetDiff *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  Set8BytesTo0((string *)(this + 8));
  std::string::append((string *)this,"",in_x2);
  std::string::append((string *)(this + 8),"",in_x2);
  this[0x10] = (AssetDiff)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}

