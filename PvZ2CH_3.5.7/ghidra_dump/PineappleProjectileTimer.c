// Class: PineappleProjectileTimer


/* PineappleProjectileTimer::PineappleProjectileTimer(Sexy::RtWeakPtr<Projectile>, float) */

void __thiscall
PineappleProjectileTimer::PineappleProjectileTimer
          (undefined4 param_1,PineappleProjectileTimer *this,RtWeakPtrBase *param_3)

{
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr((RtWeakPtr<Sexy::SoundResource> *)this,param_3);
  *(undefined4 *)(this + 8) = param_1;
  return;
}

