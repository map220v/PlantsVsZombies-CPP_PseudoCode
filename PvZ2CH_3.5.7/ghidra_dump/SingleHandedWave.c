// Class: SingleHandedWave


/* SingleHandedWave::~SingleHandedWave() */

void __thiscall SingleHandedWave::~SingleHandedWave(SingleHandedWave *this)

{
  std::_Destroy<Sexy::ResStreamsUnpacker::GroupInfo*>(*(GroupInfo **)this,*(GroupInfo **)(this + 8))
  ;
  std::_Vector_base<SingleHandedWaveZombie,std::allocator<SingleHandedWaveZombie>>::~_Vector_base
            ((_Vector_base<SingleHandedWaveZombie,std::allocator<SingleHandedWaveZombie>> *)this);
  return;
}


/* SingleHandedWave::SingleHandedWave() */

void __thiscall SingleHandedWave::SingleHandedWave(SingleHandedWave *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  this[0x18] = (SingleHandedWave)0x0;
  std::vector<SingleHandedWaveZombie,std::allocator<SingleHandedWaveZombie>>::resize
            ((vector<SingleHandedWaveZombie,std::allocator<SingleHandedWaveZombie>> *)this,0xf);
  return;
}


/* SingleHandedWave::SingleHandedWave(SingleHandedWave const&) */

void __thiscall SingleHandedWave::SingleHandedWave(SingleHandedWave *this,SingleHandedWave *param_1)

{
  std::vector<SingleHandedWaveZombie,std::allocator<SingleHandedWaveZombie>>::vector
            ((vector<SingleHandedWaveZombie,std::allocator<SingleHandedWaveZombie>> *)this,
             (vector *)param_1);
  this[0x18] = param_1[0x18];
  return;
}


/* SingleHandedWave::TEMPNAMEPLACEHOLDERVALUE(SingleHandedWave const&) */

SingleHandedWave * __thiscall
SingleHandedWave::operator=(SingleHandedWave *this,SingleHandedWave *param_1)

{
  std::vector<SingleHandedWaveZombie,std::allocator<SingleHandedWaveZombie>>::operator=
            ((vector<SingleHandedWaveZombie,std::allocator<SingleHandedWaveZombie>> *)this,
             (vector *)param_1);
  this[0x18] = param_1[0x18];
  return this;
}

