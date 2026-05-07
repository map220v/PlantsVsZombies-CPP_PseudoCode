// Class: CustomChallengeSingleHanded


/* CustomChallengeSingleHanded::~CustomChallengeSingleHanded() */

void __thiscall
CustomChallengeSingleHanded::~CustomChallengeSingleHanded(CustomChallengeSingleHanded *this)

{
  std::string::~string((string *)(this + 0x30));
  SingleHandedWaveData::~SingleHandedWaveData((SingleHandedWaveData *)(this + 0x18));
  std::vector<SingleHandedPlantInfo,std::allocator<SingleHandedPlantInfo>>::~vector
            ((vector<SingleHandedPlantInfo,std::allocator<SingleHandedPlantInfo>> *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomChallengeSingleHanded::CustomChallengeSingleHanded() */

void __thiscall
CustomChallengeSingleHanded::CustomChallengeSingleHanded(CustomChallengeSingleHanded *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  SingleHandedWaveData::SingleHandedWaveData((SingleHandedWaveData *)(this + 0x18));
  std::string::string((string *)(this + 0x30),"");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomChallengeSingleHanded::CustomChallengeSingleHanded(CustomChallengeSingleHanded const&) */

void __thiscall
CustomChallengeSingleHanded::CustomChallengeSingleHanded
          (CustomChallengeSingleHanded *this,CustomChallengeSingleHanded *param_1)

{
  std::vector<SingleHandedPlantInfo,std::allocator<SingleHandedPlantInfo>>::vector
            ((vector<SingleHandedPlantInfo,std::allocator<SingleHandedPlantInfo>> *)this,
             (vector *)param_1);
  SingleHandedWaveData::SingleHandedWaveData
            ((SingleHandedWaveData *)(this + 0x18),(SingleHandedWaveData *)(param_1 + 0x18));
  FUN_05475d88(this + 0x30,param_1 + 0x30);
  return;
}


/* CustomChallengeSingleHanded::TEMPNAMEPLACEHOLDERVALUE(CustomChallengeSingleHanded const&) */

CustomChallengeSingleHanded * __thiscall
CustomChallengeSingleHanded::operator=
          (CustomChallengeSingleHanded *this,CustomChallengeSingleHanded *param_1)

{
  std::vector<SingleHandedPlantInfo,std::allocator<SingleHandedPlantInfo>>::operator=
            ((vector<SingleHandedPlantInfo,std::allocator<SingleHandedPlantInfo>> *)this,
             (vector *)param_1);
  SingleHandedWaveData::operator=
            ((SingleHandedWaveData *)(this + 0x18),(SingleHandedWaveData *)(param_1 + 0x18));
  thunk_FUN_05475e00(this + 0x30,param_1 + 0x30);
  return this;
}


/* CustomChallengeSingleHanded::TEMPNAMEPLACEHOLDERVALUE(CustomChallengeSingleHanded&&) */

CustomChallengeSingleHanded * __thiscall
CustomChallengeSingleHanded::operator=
          (CustomChallengeSingleHanded *this,CustomChallengeSingleHanded *param_1)

{
  std::vector<SingleHandedPlantInfo,std::allocator<SingleHandedPlantInfo>>::operator=
            ((vector<SingleHandedPlantInfo,std::allocator<SingleHandedPlantInfo>> *)this,
             (vector *)param_1);
  SingleHandedWaveData::operator=
            ((SingleHandedWaveData *)(this + 0x18),(SingleHandedWaveData *)(param_1 + 0x18));
  FUN_05474278(this + 0x30,param_1 + 0x30);
  return this;
}


/* CustomChallengeSingleHanded::CustomChallengeSingleHanded(CustomChallengeSingleHanded&&) */

void __thiscall
CustomChallengeSingleHanded::CustomChallengeSingleHanded
          (CustomChallengeSingleHanded *this,CustomChallengeSingleHanded *param_1)

{
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  Sexy::PIInterpolator::PIInterpolator
            ((PIInterpolator *)(this + 0x18),(PIInterpolator *)(param_1 + 0x18));
  FUN_05474148(this + 0x30,param_1 + 0x30);
  return;
}

