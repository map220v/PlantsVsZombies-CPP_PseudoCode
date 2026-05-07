// Class: ArcadePackProgress


/* ArcadePackProgress::ArcadePackProgress() */

void __thiscall ArcadePackProgress::ArcadePackProgress(ArcadePackProgress *this)

{
  IArcadeProgressData<ArcadePackProgress>::IArcadeProgressData
            ((IArcadeProgressData<ArcadePackProgress> *)this);
  *(undefined ***)this = &PTR__ArcadePackProgress_06611cf0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* ArcadePackProgress::ArcadePackProgress(ArcadePackProgress&&) */

void __thiscall
ArcadePackProgress::ArcadePackProgress(ArcadePackProgress *this,ArcadePackProgress *param_1)

{
  IArcadeProgressData<ArcadePackProgress>::IArcadeProgressData
            ((IArcadeProgressData<ArcadePackProgress> *)this,(IArcadeProgressData *)param_1);
  *(undefined ***)this = &PTR__ArcadePackProgress_06611cf0;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  return;
}


/* ArcadePackProgress::~ArcadePackProgress() */

void __thiscall ArcadePackProgress::~ArcadePackProgress(ArcadePackProgress *this)

{
  *(undefined ***)this = &PTR__ArcadePackProgress_06611cf0;
  std::vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>>::~vector
            ((vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>> *)(this + 0x10));
  return;
}


/* ArcadePackProgress::~ArcadePackProgress() */

void __thiscall ArcadePackProgress::~ArcadePackProgress(ArcadePackProgress *this)

{
  ~ArcadePackProgress(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePackProgress::IsEqual(ArcadePackProgress const&) const */

void __thiscall ArcadePackProgress::IsEqual(ArcadePackProgress *this,ArcadePackProgress *param_1)

{
  undefined1 uVar1;
  ArcadePackProgress aAStack_30 [16];
  vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>> avStack_20 [24];
  long local_8;
  
  uVar1 = 0;
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) == *(int *)(this + 8)) {
    (**(code **)(*(long *)this + 0x18))(aAStack_30);
    uVar1 = std::vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>>::empty(avStack_20);
    ~ArcadePackProgress(aAStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* ArcadePackProgress::ArcadePackProgress(ArcadePackProgress const&) */

void __thiscall
ArcadePackProgress::ArcadePackProgress(ArcadePackProgress *this,ArcadePackProgress *param_1)

{
  IArcadeProgressData<ArcadePackProgress>::IArcadeProgressData
            ((IArcadeProgressData<ArcadePackProgress> *)this,(IArcadeProgressData *)param_1);
  *(undefined ***)this = &PTR__ArcadePackProgress_06611cf0;
  std::vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>>::vector
            ((vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePackProgress::MakeDelta(ArcadePackProgress const&) const */

void ArcadePackProgress::MakeDelta(ArcadePackProgress *param_1)

{
  long in_x1;
  ArcadePackProgress *in_x8;
  vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ArcadePackProgress(in_x8);
  *(undefined4 *)(in_x8 + 8) = *(undefined4 *)(param_1 + 8);
  createDeltaForVectorOfArcadeData<ArcadeLevelProgress>
            ((vector *)(param_1 + 0x10),(vector *)(in_x1 + 0x10));
  std::vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>>::operator=
            ((vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>> *)(in_x8 + 0x10),
             (vector *)avStack_20);
  std::vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArcadePackProgress::TEMPNAMEPLACEHOLDERVALUE(ArcadePackProgress const&) */

ArcadePackProgress * __thiscall
ArcadePackProgress::operator=(ArcadePackProgress *this,ArcadePackProgress *param_1)

{
  FUN_032fc60c(this,*(undefined4 *)(param_1 + 8));
  std::vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>>::operator=
            ((vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return this;
}


void __thiscall
ArcadePackProgress::ArcadePackProgress(ArcadePackProgress *this,ArcadePackProgress *param_1)

{
  IArcadeProgressData<ArcadePackProgress>::IArcadeProgressData
            ((IArcadeProgressData<ArcadePackProgress> *)this,(IArcadeProgressData *)param_1);
  *(undefined ***)this = &PTR__ArcadePackProgress_06611cf0;
  std::vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>>::vector
            ((vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return;
}


void __thiscall
ArcadePackProgress::ArcadePackProgress(ArcadePackProgress *this,ArcadePackProgress *param_1)

{
  IArcadeProgressData<ArcadePackProgress>::IArcadeProgressData
            ((IArcadeProgressData<ArcadePackProgress> *)this,(IArcadeProgressData *)param_1);
  *(undefined ***)this = &PTR__ArcadePackProgress_06611cf0;
  std::vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>>::vector
            ((vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return;
}


/* ArcadePackProgress::TEMPNAMEPLACEHOLDERVALUE(ArcadePackProgress&&) */

ArcadePackProgress * __thiscall
ArcadePackProgress::operator=(ArcadePackProgress *this,ArcadePackProgress *param_1)

{
  FUN_0365a650(this,*(undefined4 *)(param_1 + 8));
  std::vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>>::operator=
            ((vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return this;
}


void __thiscall ArcadePackProgress::~ArcadePackProgress(ArcadePackProgress *this)

{
  *(undefined ***)this = &PTR__ArcadePackProgress_06611cf0;
  std::vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>>::~vector
            ((vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>> *)(this + 0x10));
  return;
}


void __thiscall ArcadePackProgress::~ArcadePackProgress(ArcadePackProgress *this)

{
  *(undefined ***)this = &PTR__ArcadePackProgress_06611cf0;
  std::vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>>::~vector
            ((vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>> *)(this + 0x10));
  return;
}

