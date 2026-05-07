// Class: WaveDefinition


/* WaveDefinition::WaveDefinition() */

void __thiscall WaveDefinition::WaveDefinition(WaveDefinition *this)

{
  WaveEventData::WaveEventData((WaveEventData *)(this + 0x24));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  *this = (WaveDefinition)0x0;
  this[1] = (WaveDefinition)0x0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  this[0x1c] = (WaveDefinition)0x0;
  *(undefined4 *)(this + 0x20) = 0x40000000;
  return;
}


/* WaveDefinition::~WaveDefinition() */

void __thiscall WaveDefinition::~WaveDefinition(WaveDefinition *this)

{
  std::vector<PlantPoolData,std::allocator<PlantPoolData>>::~vector
            ((vector<PlantPoolData,std::allocator<PlantPoolData>> *)(this + 0x98));
  std::vector<PlantPoolData,std::allocator<PlantPoolData>>::~vector
            ((vector<PlantPoolData,std::allocator<PlantPoolData>> *)(this + 0x80));
  std::vector<ZombiePoolData,std::allocator<ZombiePoolData>>::~vector
            ((vector<ZombiePoolData,std::allocator<ZombiePoolData>> *)(this + 0x68));
  std::vector<ZombiePoolData,std::allocator<ZombiePoolData>>::~vector
            ((vector<ZombiePoolData,std::allocator<ZombiePoolData>> *)(this + 0x50));
  std::vector<ZombieSpawnData,std::allocator<ZombieSpawnData>>::~vector
            ((vector<ZombieSpawnData,std::allocator<ZombieSpawnData>> *)(this + 0x38));
  return;
}


/* WaveDefinition::WaveDefinition(WaveDefinition const&) */

void __thiscall WaveDefinition::WaveDefinition(WaveDefinition *this,WaveDefinition *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  WaveDefinition WVar10;
  WaveDefinition WVar11;
  
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x24);
  uVar2 = *(undefined8 *)(param_1 + 0x2c);
  WVar10 = *param_1;
  WVar11 = param_1[1];
  uVar4 = *(undefined4 *)(param_1 + 4);
  uVar5 = *(undefined4 *)(param_1 + 8);
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  uVar8 = *(undefined4 *)(param_1 + 0x14);
  uVar9 = *(undefined4 *)(param_1 + 0x18);
  this[0x1c] = param_1[0x1c];
  *this = WVar10;
  this[1] = WVar11;
  *(undefined4 *)(this + 4) = uVar4;
  *(undefined4 *)(this + 8) = uVar5;
  *(undefined4 *)(this + 0xc) = uVar6;
  *(undefined4 *)(this + 0x10) = uVar7;
  *(undefined4 *)(this + 0x14) = uVar8;
  *(undefined4 *)(this + 0x18) = uVar9;
  *(undefined4 *)(this + 0x20) = uVar3;
  *(undefined8 *)(this + 0x24) = uVar1;
  *(undefined8 *)(this + 0x2c) = uVar2;
  std::vector<ZombieSpawnData,std::allocator<ZombieSpawnData>>::vector
            ((vector<ZombieSpawnData,std::allocator<ZombieSpawnData>> *)(this + 0x38),
             (vector *)(param_1 + 0x38));
  std::vector<ZombiePoolData,std::allocator<ZombiePoolData>>::vector
            ((vector<ZombiePoolData,std::allocator<ZombiePoolData>> *)(this + 0x50),
             (vector *)(param_1 + 0x50));
  std::vector<ZombiePoolData,std::allocator<ZombiePoolData>>::vector
            ((vector<ZombiePoolData,std::allocator<ZombiePoolData>> *)(this + 0x68),
             (vector *)(param_1 + 0x68));
  std::vector<PlantPoolData,std::allocator<PlantPoolData>>::vector
            ((vector<PlantPoolData,std::allocator<PlantPoolData>> *)(this + 0x80),
             (vector *)(param_1 + 0x80));
  std::vector<PlantPoolData,std::allocator<PlantPoolData>>::vector
            ((vector<PlantPoolData,std::allocator<PlantPoolData>> *)(this + 0x98),
             (vector *)(param_1 + 0x98));
  return;
}


/* WaveDefinition::WaveDefinition(WaveDefinition&&) */

void __thiscall WaveDefinition::WaveDefinition(WaveDefinition *this,WaveDefinition *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  WaveDefinition WVar10;
  WaveDefinition WVar11;
  
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x24);
  uVar2 = *(undefined8 *)(param_1 + 0x2c);
  WVar10 = *param_1;
  WVar11 = param_1[1];
  uVar4 = *(undefined4 *)(param_1 + 4);
  uVar5 = *(undefined4 *)(param_1 + 8);
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  uVar8 = *(undefined4 *)(param_1 + 0x14);
  uVar9 = *(undefined4 *)(param_1 + 0x18);
  this[0x1c] = param_1[0x1c];
  *this = WVar10;
  this[1] = WVar11;
  *(undefined4 *)(this + 4) = uVar4;
  *(undefined4 *)(this + 8) = uVar5;
  *(undefined4 *)(this + 0xc) = uVar6;
  *(undefined4 *)(this + 0x10) = uVar7;
  *(undefined4 *)(this + 0x14) = uVar8;
  *(undefined4 *)(this + 0x18) = uVar9;
  *(undefined4 *)(this + 0x20) = uVar3;
  *(undefined8 *)(this + 0x24) = uVar1;
  *(undefined8 *)(this + 0x2c) = uVar2;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x38),(vector *)(param_1 + 0x38));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x50),(vector *)(param_1 + 0x50));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x68),(vector *)(param_1 + 0x68));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x80),(vector *)(param_1 + 0x80));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x98),(vector *)(param_1 + 0x98));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveDefinition::FixupData() */

void __thiscall WaveDefinition::FixupData(WaveDefinition *this)

{
  bool bVar1;
  ZombiePoolData *pZVar2;
  PlantPoolData *pPVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x38));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x38));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pZVar2 = (ZombiePoolData *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    ZombiePoolData::FixupData(pZVar2);
    std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_18);
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x50));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x50));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pZVar2 = (ZombiePoolData *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    ZombiePoolData::FixupData(pZVar2);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x68));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x68));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pZVar2 = (ZombiePoolData *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    ZombiePoolData::FixupData(pZVar2);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x80));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x80));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pPVar3 = (PlantPoolData *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    PlantPoolData::FixupData(pPVar3);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x98));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x98));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pPVar3 = (PlantPoolData *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    PlantPoolData::FixupData(pPVar3);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

