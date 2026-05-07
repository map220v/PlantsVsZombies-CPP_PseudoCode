// Class: TowerDefendWave


/* TowerDefendWave::~TowerDefendWave() */

void __thiscall TowerDefendWave::~TowerDefendWave(TowerDefendWave *this)

{
  std::_Destroy<Sexy::ResStreamsUnpacker::GroupInfo*>(*(GroupInfo **)this,*(GroupInfo **)(this + 8))
  ;
  std::_Vector_base<TowerDefendWaveZombie,std::allocator<TowerDefendWaveZombie>>::~_Vector_base
            ((_Vector_base<TowerDefendWaveZombie,std::allocator<TowerDefendWaveZombie>> *)this);
  return;
}


/* TowerDefendWave::TowerDefendWave() */

void __thiscall TowerDefendWave::TowerDefendWave(TowerDefendWave *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<TowerDefendWaveZombie,std::allocator<TowerDefendWaveZombie>>::resize
            ((vector<TowerDefendWaveZombie,std::allocator<TowerDefendWaveZombie>> *)this,0xf);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x035b26b0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* TowerDefendWave::TowerDefendWave(TowerDefendWave const&) */

void __thiscall TowerDefendWave::TowerDefendWave(TowerDefendWave *this,TowerDefendWave *param_1)

{
  long lVar1;
  allocator *paVar2;
  allocator *extraout_x0;
  undefined8 uVar3;
  SingleHandedWaveZombie *pSVar4;
  
  lVar1 = ___stack_chk_guard;
  paVar2 = (allocator *)FUN_0358f5d4(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  nop();
  __gnu_cxx::__alloc_traits<std::allocator<Sexy::PIForce>>::_S_select_on_copy(extraout_x0);
  std::_Vector_base<TowerDefendWaveZombie,std::allocator<TowerDefendWaveZombie>>::_Vector_base
            ((ulong)this,paVar2);
  FUN_035a9040(*(undefined8 *)param_1);
  uVar3 = FUN_035a9090(*(undefined8 *)(param_1 + 8));
  pSVar4 = std::
           uninitialized_copy<__gnu_cxx::__normal_iterator<SingleHandedWaveZombie_const*,std::vector<SingleHandedWaveZombie,std::allocator<SingleHandedWaveZombie>>>,SingleHandedWaveZombie*>
                     (uVar3,uVar3,*(undefined8 *)this);
  *(SingleHandedWaveZombie **)(this + 8) = pSVar4;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TowerDefendWave::TEMPNAMEPLACEHOLDERVALUE(TowerDefendWave const&) */

TowerDefendWave * __thiscall
TowerDefendWave::operator=(TowerDefendWave *this,TowerDefendWave *param_1)

{
  std::vector<TowerDefendWaveZombie,std::allocator<TowerDefendWaveZombie>>::operator=
            ((vector<TowerDefendWaveZombie,std::allocator<TowerDefendWaveZombie>> *)this,
             (vector *)param_1);
  return this;
}

