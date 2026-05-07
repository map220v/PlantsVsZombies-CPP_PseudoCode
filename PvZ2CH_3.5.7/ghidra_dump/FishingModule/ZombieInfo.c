// Class: FishingModule::ZombieInfo


/* FishingModule::ZombieInfo::ZombieInfo(FishingModule::ZombieInfo const&) */

void __thiscall FishingModule::ZombieInfo::ZombieInfo(ZombieInfo *this,ZombieInfo *param_1)

{
  undefined4 uVar1;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = uVar1;
  return;
}

