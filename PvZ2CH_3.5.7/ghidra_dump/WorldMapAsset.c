// Class: WorldMapAsset


/* WorldMapAsset::WorldMapAsset(WorldMapAsset&&) */

void __thiscall WorldMapAsset::WorldMapAsset(WorldMapAsset *this,WorldMapAsset *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  this[0x14] = param_1[0x14];
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar1;
  return;
}


/* WorldMapAsset::TEMPNAMEPLACEHOLDERVALUE(WorldMapAsset&&) */

WorldMapAsset * __thiscall WorldMapAsset::operator=(WorldMapAsset *this,WorldMapAsset *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  this[0x14] = param_1[0x14];
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar1;
  return this;
}

