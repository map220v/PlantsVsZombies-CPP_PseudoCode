// Class: ZombieConditionsStruct


/* ZombieConditionsStruct::ZombieConditionsStruct(ZombieConditions, float,
   Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
ZombieConditionsStruct::ZombieConditionsStruct
          (undefined4 param_1,ZombieConditionsStruct *this,undefined4 param_3,RtWeakPtrBase *param_4
          )

{
  *(undefined4 *)(this + 4) = param_1;
  *(undefined4 *)this = param_3;
  *(undefined4 *)(this + 8) = 0;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x10),param_4);
  return;
}


/* ZombieConditionsStruct::ZombieConditionsStruct(ZombieConditionsStruct const&) */

void __thiscall
ZombieConditionsStruct::ZombieConditionsStruct
          (ZombieConditionsStruct *this,ZombieConditionsStruct *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x10),(RtWeakPtrBase *)(param_1 + 0x10));
  return;
}

