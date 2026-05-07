// Class: RandomJitteredWaveInstruction


/* RandomJitteredWaveInstruction::~RandomJitteredWaveInstruction() */

void __thiscall
RandomJitteredWaveInstruction::~RandomJitteredWaveInstruction(RandomJitteredWaveInstruction *this)

{
  std::vector<ZombieType_const*,std::allocator<ZombieType_const*>>::~vector
            ((vector<ZombieType_const*,std::allocator<ZombieType_const*>> *)(this + 0x20));
  std::vector<ZombieType_const*,std::allocator<ZombieType_const*>>::~vector
            ((vector<ZombieType_const*,std::allocator<ZombieType_const*>> *)(this + 8));
  return;
}


/* RandomJitteredWaveInstruction::RandomJitteredWaveInstruction() */

void __thiscall
RandomJitteredWaveInstruction::RandomJitteredWaveInstruction(RandomJitteredWaveInstruction *this)

{
  *(undefined4 *)this = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *(undefined4 *)(this + 0x38) = 0;
  this[0x3c] = (RandomJitteredWaveInstruction)0x0;
  return;
}


/* RandomJitteredWaveInstruction::RandomJitteredWaveInstruction(RandomJitteredWaveInstruction&&) */

void __thiscall
RandomJitteredWaveInstruction::RandomJitteredWaveInstruction
          (RandomJitteredWaveInstruction *this,RandomJitteredWaveInstruction *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x20),(vector *)(param_1 + 0x20));
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  this[0x3c] = param_1[0x3c];
  *(undefined4 *)(this + 0x38) = uVar1;
  return;
}


/* RandomJitteredWaveInstruction::RandomJitteredWaveInstruction(RandomJitteredWaveInstruction
   const&) */

void __thiscall
RandomJitteredWaveInstruction::RandomJitteredWaveInstruction
          (RandomJitteredWaveInstruction *this,RandomJitteredWaveInstruction *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<ZombieType_const*,std::allocator<ZombieType_const*>>::vector
            ((vector<ZombieType_const*,std::allocator<ZombieType_const*>> *)(this + 8),
             (vector *)(param_1 + 8));
  std::vector<ZombieType_const*,std::allocator<ZombieType_const*>>::vector
            ((vector<ZombieType_const*,std::allocator<ZombieType_const*>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  this[0x3c] = param_1[0x3c];
  *(undefined4 *)(this + 0x38) = uVar1;
  return;
}

