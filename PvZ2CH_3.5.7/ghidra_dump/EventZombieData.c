// Class: EventZombieData


/* EventZombieData::EventZombieData(EventZombieData const&) */

void __thiscall EventZombieData::EventZombieData(EventZombieData *this,EventZombieData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  EventZombieData EVar3;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  EVar3 = param_1[0x10];
  this[0x11] = param_1[0x11];
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  this[0x10] = EVar3;
  return;
}

