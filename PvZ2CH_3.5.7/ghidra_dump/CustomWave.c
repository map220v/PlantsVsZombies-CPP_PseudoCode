// Class: CustomWave


/* CustomWave::~CustomWave() */

void __thiscall CustomWave::~CustomWave(CustomWave *this)

{
  CustomWaveEvent::~CustomWaveEvent((CustomWaveEvent *)(this + 0x28));
  std::vector<CustomWaveZombie,std::allocator<CustomWaveZombie>>::~vector
            ((vector<CustomWaveZombie,std::allocator<CustomWaveZombie>> *)(this + 8));
  return;
}


/* CustomWave::CustomWave() */

void __thiscall CustomWave::CustomWave(CustomWave *this)

{
  *(undefined4 *)this = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *(undefined4 *)(this + 0x20) = 0;
  CustomWaveEvent::CustomWaveEvent((CustomWaveEvent *)(this + 0x28));
  std::vector<CustomWaveZombie,std::allocator<CustomWaveZombie>>::resize
            ((vector<CustomWaveZombie,std::allocator<CustomWaveZombie>> *)(this + 8),0xf);
  return;
}


/* CustomWave::CustomWave(CustomWave const&) */

void __thiscall CustomWave::CustomWave(CustomWave *this,CustomWave *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<CustomWaveZombie,std::allocator<CustomWaveZombie>>::vector
            ((vector<CustomWaveZombie,std::allocator<CustomWaveZombie>> *)(this + 8),
             (vector *)(param_1 + 8));
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  CustomWaveEvent::CustomWaveEvent
            ((CustomWaveEvent *)(this + 0x28),(CustomWaveEvent *)(param_1 + 0x28));
  return;
}


/* CustomWave::TEMPNAMEPLACEHOLDERVALUE(CustomWave const&) */

CustomWave * __thiscall CustomWave::operator=(CustomWave *this,CustomWave *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<CustomWaveZombie,std::allocator<CustomWaveZombie>>::operator=
            ((vector<CustomWaveZombie,std::allocator<CustomWaveZombie>> *)(this + 8),
             (vector *)(param_1 + 8));
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  CustomWaveEvent::operator=((CustomWaveEvent *)(this + 0x28),(CustomWaveEvent *)(param_1 + 0x28));
  return this;
}


/* CustomWave::CustomWave(CustomWave&&) */

void __thiscall CustomWave::CustomWave(CustomWave *this,CustomWave *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  CustomWaveEvent::CustomWaveEvent
            ((CustomWaveEvent *)(this + 0x28),(CustomWaveEvent *)(param_1 + 0x28));
  return;
}

