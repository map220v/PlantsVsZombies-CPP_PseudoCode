// Class: SingleHandedWaveData


/* SingleHandedWaveData::~SingleHandedWaveData() */

void __thiscall SingleHandedWaveData::~SingleHandedWaveData(SingleHandedWaveData *this)

{
  std::_Destroy<SingleHandedWave*>(*(SingleHandedWave **)this,*(SingleHandedWave **)(this + 8));
  std::_Vector_base<SingleHandedWave,std::allocator<SingleHandedWave>>::~_Vector_base
            ((_Vector_base<SingleHandedWave,std::allocator<SingleHandedWave>> *)this);
  return;
}


/* SingleHandedWaveData::SingleHandedWaveData() */

void __thiscall SingleHandedWaveData::SingleHandedWaveData(SingleHandedWaveData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<SingleHandedWave,std::allocator<SingleHandedWave>>::resize
            ((vector<SingleHandedWave,std::allocator<SingleHandedWave>> *)this,10);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x035b2ba0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* SingleHandedWaveData::SingleHandedWaveData(SingleHandedWaveData const&) */

void __thiscall
SingleHandedWaveData::SingleHandedWaveData(SingleHandedWaveData *this,SingleHandedWaveData *param_1)

{
  long lVar1;
  allocator *paVar2;
  allocator *extraout_x0;
  undefined8 uVar3;
  SingleHandedWave *pSVar4;
  
  lVar1 = ___stack_chk_guard;
  paVar2 = (allocator *)FUN_0358f63c(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  nop();
  __gnu_cxx::__alloc_traits<std::allocator<Sexy::PIForce>>::_S_select_on_copy(extraout_x0);
  std::_Vector_base<SingleHandedWave,std::allocator<SingleHandedWave>>::_Vector_base
            ((ulong)this,paVar2);
  FUN_03599e30(*(undefined8 *)param_1);
  uVar3 = FUN_03599e80(*(undefined8 *)(param_1 + 8));
  pSVar4 = std::
           uninitialized_copy<__gnu_cxx::__normal_iterator<SingleHandedWave_const*,std::vector<SingleHandedWave,std::allocator<SingleHandedWave>>>,SingleHandedWave*>
                     (uVar3,uVar3,*(undefined8 *)this);
  *(SingleHandedWave **)(this + 8) = pSVar4;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SingleHandedWaveData::TEMPNAMEPLACEHOLDERVALUE(SingleHandedWaveData const&) */

SingleHandedWaveData * __thiscall
SingleHandedWaveData::operator=(SingleHandedWaveData *this,SingleHandedWaveData *param_1)

{
  std::vector<SingleHandedWave,std::allocator<SingleHandedWave>>::operator=
            ((vector<SingleHandedWave,std::allocator<SingleHandedWave>> *)this,(vector *)param_1);
  return this;
}


/* SingleHandedWaveData::TEMPNAMEPLACEHOLDERVALUE(SingleHandedWaveData&&) */

SingleHandedWaveData * __thiscall
SingleHandedWaveData::operator=(SingleHandedWaveData *this,SingleHandedWaveData *param_1)

{
  std::vector<SingleHandedWave,std::allocator<SingleHandedWave>>::operator=
            ((vector<SingleHandedWave,std::allocator<SingleHandedWave>> *)this,(vector *)param_1);
  return this;
}

