// Class: Wave


/* Wave::~Wave() */

void __thiscall Wave::~Wave(Wave *this)

{
  std::vector<Sexy::RtWeakPtr<WaveAction>,std::allocator<Sexy::RtWeakPtr<WaveAction>>>::~vector
            ((vector<Sexy::RtWeakPtr<WaveAction>,std::allocator<Sexy::RtWeakPtr<WaveAction>>> *)
             (this + 8));
  return;
}


/* Wave::Wave() */

void __thiscall Wave::Wave(Wave *this)

{
  *(undefined4 *)this = 1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* Wave::Wave(Wave const&) */

void __thiscall Wave::Wave(Wave *this,Wave *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<Sexy::RtWeakPtr<WaveAction>,std::allocator<Sexy::RtWeakPtr<WaveAction>>>::vector
            ((vector<Sexy::RtWeakPtr<WaveAction>,std::allocator<Sexy::RtWeakPtr<WaveAction>>> *)
             (this + 8),(vector *)(param_1 + 8));
  return;
}

