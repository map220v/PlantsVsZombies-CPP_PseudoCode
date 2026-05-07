// Class: PowerUpCollectionProgress


/* PowerUpCollectionProgress::PowerUpCollectionProgress() */

void __thiscall
PowerUpCollectionProgress::PowerUpCollectionProgress(PowerUpCollectionProgress *this)

{
  IArcadeProgressData<PowerUpCollectionProgress>::IArcadeProgressData
            ((IArcadeProgressData<PowerUpCollectionProgress> *)this);
  *(undefined ***)this = &PTR__PowerUpCollectionProgress_06611d50;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* PowerUpCollectionProgress::PowerUpCollectionProgress(PowerUpCollectionProgress&&) */

void __thiscall
PowerUpCollectionProgress::PowerUpCollectionProgress
          (PowerUpCollectionProgress *this,PowerUpCollectionProgress *param_1)

{
  IArcadeProgressData<PowerUpCollectionProgress>::IArcadeProgressData
            ((IArcadeProgressData<PowerUpCollectionProgress> *)this,(IArcadeProgressData *)param_1);
  *(undefined ***)this = &PTR__PowerUpCollectionProgress_06611d50;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  return;
}


/* PowerUpCollectionProgress::~PowerUpCollectionProgress() */

void __thiscall
PowerUpCollectionProgress::~PowerUpCollectionProgress(PowerUpCollectionProgress *this)

{
  *(undefined ***)this = &PTR__PowerUpCollectionProgress_06611d50;
  std::vector<PowerUpProgress,std::allocator<PowerUpProgress>>::~vector
            ((vector<PowerUpProgress,std::allocator<PowerUpProgress>> *)(this + 0x10));
  return;
}


/* PowerUpCollectionProgress::~PowerUpCollectionProgress() */

void __thiscall
PowerUpCollectionProgress::~PowerUpCollectionProgress(PowerUpCollectionProgress *this)

{
  ~PowerUpCollectionProgress(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerUpCollectionProgress::IsEqual(PowerUpCollectionProgress const&) const */

void __thiscall
PowerUpCollectionProgress::IsEqual
          (PowerUpCollectionProgress *this,PowerUpCollectionProgress *param_1)

{
  undefined1 uVar1;
  PowerUpCollectionProgress aPStack_30 [16];
  vector<PowerUpProgress,std::allocator<PowerUpProgress>> avStack_20 [24];
  long local_8;
  
  uVar1 = 0;
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) == *(int *)(this + 8)) {
    (**(code **)(*(long *)this + 0x18))(aPStack_30);
    uVar1 = std::vector<PowerUpProgress,std::allocator<PowerUpProgress>>::empty(avStack_20);
    ~PowerUpCollectionProgress(aPStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PowerUpCollectionProgress::PowerUpCollectionProgress(PowerUpCollectionProgress const&) */

void __thiscall
PowerUpCollectionProgress::PowerUpCollectionProgress
          (PowerUpCollectionProgress *this,PowerUpCollectionProgress *param_1)

{
  IArcadeProgressData<PowerUpCollectionProgress>::IArcadeProgressData
            ((IArcadeProgressData<PowerUpCollectionProgress> *)this,(IArcadeProgressData *)param_1);
  *(undefined ***)this = &PTR__PowerUpCollectionProgress_06611d50;
  std::vector<PowerUpProgress,std::allocator<PowerUpProgress>>::vector
            ((vector<PowerUpProgress,std::allocator<PowerUpProgress>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerUpCollectionProgress::MakeDelta(PowerUpCollectionProgress const&) const */

void PowerUpCollectionProgress::MakeDelta(PowerUpCollectionProgress *param_1)

{
  long in_x1;
  PowerUpCollectionProgress *in_x8;
  vector<PowerUpProgress,std::allocator<PowerUpProgress>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PowerUpCollectionProgress(in_x8);
  *(undefined4 *)(in_x8 + 8) = *(undefined4 *)(param_1 + 8);
  createDeltaForVectorOfArcadeData<PowerUpProgress>
            ((vector *)(param_1 + 0x10),(vector *)(in_x1 + 0x10));
  std::vector<PowerUpProgress,std::allocator<PowerUpProgress>>::operator=
            ((vector<PowerUpProgress,std::allocator<PowerUpProgress>> *)(in_x8 + 0x10),
             (vector *)avStack_20);
  std::vector<PowerUpProgress,std::allocator<PowerUpProgress>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerUpCollectionProgress::TEMPNAMEPLACEHOLDERVALUE(PowerUpCollectionProgress const&) */

PowerUpCollectionProgress * __thiscall
PowerUpCollectionProgress::operator=
          (PowerUpCollectionProgress *this,PowerUpCollectionProgress *param_1)

{
  FUN_032fc614(this,*(undefined4 *)(param_1 + 8));
  std::vector<PowerUpProgress,std::allocator<PowerUpProgress>>::operator=
            ((vector<PowerUpProgress,std::allocator<PowerUpProgress>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return this;
}


void __thiscall
PowerUpCollectionProgress::PowerUpCollectionProgress
          (PowerUpCollectionProgress *this,PowerUpCollectionProgress *param_1)

{
  IArcadeProgressData<PowerUpCollectionProgress>::IArcadeProgressData
            ((IArcadeProgressData<PowerUpCollectionProgress> *)this,(IArcadeProgressData *)param_1);
  *(undefined ***)this = &PTR__PowerUpCollectionProgress_06611d50;
  std::vector<PowerUpProgress,std::allocator<PowerUpProgress>>::vector
            ((vector<PowerUpProgress,std::allocator<PowerUpProgress>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return;
}


void __thiscall
PowerUpCollectionProgress::PowerUpCollectionProgress
          (PowerUpCollectionProgress *this,PowerUpCollectionProgress *param_1)

{
  IArcadeProgressData<PowerUpCollectionProgress>::IArcadeProgressData
            ((IArcadeProgressData<PowerUpCollectionProgress> *)this,(IArcadeProgressData *)param_1);
  *(undefined ***)this = &PTR__PowerUpCollectionProgress_06611d50;
  std::vector<PowerUpProgress,std::allocator<PowerUpProgress>>::vector
            ((vector<PowerUpProgress,std::allocator<PowerUpProgress>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return;
}


/* PowerUpCollectionProgress::TEMPNAMEPLACEHOLDERVALUE(PowerUpCollectionProgress&&) */

PowerUpCollectionProgress * __thiscall
PowerUpCollectionProgress::operator=
          (PowerUpCollectionProgress *this,PowerUpCollectionProgress *param_1)

{
  FUN_0365a660(this,*(undefined4 *)(param_1 + 8));
  std::vector<PowerUpProgress,std::allocator<PowerUpProgress>>::operator=
            ((vector<PowerUpProgress,std::allocator<PowerUpProgress>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return this;
}


void __thiscall
PowerUpCollectionProgress::~PowerUpCollectionProgress(PowerUpCollectionProgress *this)

{
  *(undefined ***)this = &PTR__PowerUpCollectionProgress_06611d50;
  std::vector<PowerUpProgress,std::allocator<PowerUpProgress>>::~vector
            ((vector<PowerUpProgress,std::allocator<PowerUpProgress>> *)(this + 0x10));
  return;
}


void __thiscall
PowerUpCollectionProgress::~PowerUpCollectionProgress(PowerUpCollectionProgress *this)

{
  *(undefined ***)this = &PTR__PowerUpCollectionProgress_06611d50;
  std::vector<PowerUpProgress,std::allocator<PowerUpProgress>>::~vector
            ((vector<PowerUpProgress,std::allocator<PowerUpProgress>> *)(this + 0x10));
  return;
}

