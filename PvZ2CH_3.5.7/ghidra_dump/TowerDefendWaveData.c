// Class: TowerDefendWaveData


/* TowerDefendWaveData::~TowerDefendWaveData() */

void __thiscall TowerDefendWaveData::~TowerDefendWaveData(TowerDefendWaveData *this)

{
  std::_Destroy<TowerDefendWave*>(*(TowerDefendWave **)this,*(TowerDefendWave **)(this + 8));
  std::_Vector_base<TowerDefendWave,std::allocator<TowerDefendWave>>::~_Vector_base
            ((_Vector_base<TowerDefendWave,std::allocator<TowerDefendWave>> *)this);
  return;
}


/* TowerDefendWaveData::TowerDefendWaveData() */

void __thiscall TowerDefendWaveData::TowerDefendWaveData(TowerDefendWaveData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<TowerDefendWave,std::allocator<TowerDefendWave>>::resize
            ((vector<TowerDefendWave,std::allocator<TowerDefendWave>> *)this,10);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x035b2824 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* TowerDefendWaveData::TowerDefendWaveData(TowerDefendWaveData const&) */

void __thiscall
TowerDefendWaveData::TowerDefendWaveData(TowerDefendWaveData *this,TowerDefendWaveData *param_1)

{
  long lVar1;
  allocator *paVar2;
  allocator *extraout_x0;
  undefined8 uVar3;
  TowerDefendWave *pTVar4;
  
  lVar1 = ___stack_chk_guard;
  paVar2 = (allocator *)FUN_0358f628(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  nop();
  __gnu_cxx::__alloc_traits<std::allocator<Sexy::PIForce>>::_S_select_on_copy(extraout_x0);
  std::_Vector_base<TowerDefendWave,std::allocator<TowerDefendWave>>::_Vector_base
            ((ulong)this,paVar2);
  FUN_03599a54(*(undefined8 *)param_1);
  uVar3 = FUN_03599aa4(*(undefined8 *)(param_1 + 8));
  pTVar4 = std::
           uninitialized_copy<__gnu_cxx::__normal_iterator<TowerDefendWave_const*,std::vector<TowerDefendWave,std::allocator<TowerDefendWave>>>,TowerDefendWave*>
                     (uVar3,uVar3,*(undefined8 *)this);
  *(TowerDefendWave **)(this + 8) = pTVar4;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TowerDefendWaveData::TEMPNAMEPLACEHOLDERVALUE(TowerDefendWaveData const&) */

TowerDefendWaveData * __thiscall
TowerDefendWaveData::operator=(TowerDefendWaveData *this,TowerDefendWaveData *param_1)

{
  std::vector<TowerDefendWave,std::allocator<TowerDefendWave>>::operator=
            ((vector<TowerDefendWave,std::allocator<TowerDefendWave>> *)this,(vector *)param_1);
  return this;
}


/* TowerDefendWaveData::TEMPNAMEPLACEHOLDERVALUE(TowerDefendWaveData&&) */

TowerDefendWaveData * __thiscall
TowerDefendWaveData::operator=(TowerDefendWaveData *this,TowerDefendWaveData *param_1)

{
  std::vector<TowerDefendWave,std::allocator<TowerDefendWave>>::operator=
            ((vector<TowerDefendWave,std::allocator<TowerDefendWave>> *)this,(vector *)param_1);
  return this;
}

