// Class: RandomJitteredWaveConfig


/* RandomJitteredWaveConfig::RandomJitteredWaveConfig() */

void __thiscall RandomJitteredWaveConfig::RandomJitteredWaveConfig(RandomJitteredWaveConfig *this)

{
  *(undefined4 *)(this + 8) = 10;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* RandomJitteredWaveConfig::~RandomJitteredWaveConfig() */

void __thiscall RandomJitteredWaveConfig::~RandomJitteredWaveConfig(RandomJitteredWaveConfig *this)

{
  std::vector<DrZomibeLevelData,std::allocator<DrZomibeLevelData>>::~vector
            ((vector<DrZomibeLevelData,std::allocator<DrZomibeLevelData>> *)(this + 0x30));
  std::vector<RandomJitteredWaveInstruction,std::allocator<RandomJitteredWaveInstruction>>::~vector
            ((vector<RandomJitteredWaveInstruction,std::allocator<RandomJitteredWaveInstruction>> *)
             (this + 0x18));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RandomJitteredWaveConfig::GetInstructionForWave(int) const */

void __thiscall
RandomJitteredWaveConfig::GetInstructionForWave(RandomJitteredWaveConfig *this,int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_04929040(*(undefined8 *)(this + 0x18));
  local_10 = FUN_04929090(*(undefined8 *)(this + 0x20));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 == param_1) goto LAB_04929164;
    eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
              ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_18);
  }
  piVar2 = (int *)0x0;
LAB_04929164:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(piVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RandomJitteredWaveConfig::EnsureInstructionForWave(int) */

void __thiscall
RandomJitteredWaveConfig::EnsureInstructionForWave(RandomJitteredWaveConfig *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int *piVar2;
  undefined8 local_50;
  undefined8 local_48 [8];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_48[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)local_48)
        , bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    if (*piVar2 == param_1) goto LAB_0492f5b4;
    eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
              ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_50);
  }
  RandomJitteredWaveInstruction::RandomJitteredWaveInstruction
            ((RandomJitteredWaveInstruction *)local_48);
  local_48[0] = CONCAT44(local_48[0]._4_4_,param_1);
  std::vector<RandomJitteredWaveInstruction,std::allocator<RandomJitteredWaveInstruction>>::
  push_back((vector<RandomJitteredWaveInstruction,std::allocator<RandomJitteredWaveInstruction>> *)
            this_00,(RandomJitteredWaveInstruction *)local_48);
  piVar2 = (int *)std::
                  vector<RandomJitteredWaveInstruction,std::allocator<RandomJitteredWaveInstruction>>
                  ::back((vector<RandomJitteredWaveInstruction,std::allocator<RandomJitteredWaveInstruction>>
                          *)this_00);
  RandomJitteredWaveInstruction::~RandomJitteredWaveInstruction
            ((RandomJitteredWaveInstruction *)local_48);
LAB_0492f5b4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(piVar2);
  }
  return;
}

