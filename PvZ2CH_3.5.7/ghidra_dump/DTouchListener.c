// Class: DTouchListener


/* DTouchListener::DTouchListener() */

void __thiscall DTouchListener::DTouchListener(DTouchListener *this)

{
  DRef::DRef((DRef *)this);
  *(undefined ***)this = &PTR__DTouchListener_06a23f10;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x10));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x30));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x50));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x70));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x90));
  *(undefined4 *)(this + 0xb0) = 0;
  this[0xb4] = (DTouchListener)0x0;
  this[0xb5] = (DTouchListener)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb8));
  return;
}


/* DTouchListener::~DTouchListener() */

void __thiscall DTouchListener::~DTouchListener(DTouchListener *this)

{
  *(undefined ***)this = &PTR__DTouchListener_06a23f10;
  std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>::~vector
            ((vector<Sexy::Touch,std::allocator<Sexy::Touch>> *)(this + 0xb8));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x90));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x70));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x50));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x30));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x10));
  nop();
  return;
}


/* DTouchListener::~DTouchListener() */

void __thiscall DTouchListener::~DTouchListener(DTouchListener *this)

{
  ~DTouchListener(this);
  AK::FreeHook(this);
  return;
}


/* DTouchListener::checkAvailable() */

byte __thiscall DTouchListener::checkAvailable(DTouchListener *this)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  
  bVar1 = FUN_04f8f76c(this + 0x10);
  if (bVar1 == 0) {
    return 1;
  }
  bVar2 = FUN_04f8f730(this + 0x30);
  if (bVar2 != 0) {
    bVar1 = FUN_04f8f730(this + 0x70);
    if (bVar1 == 0) {
      return bVar2;
    }
    cVar3 = FUN_04f8f730(this + 0x50);
    if (cVar3 != '\0') {
      bVar1 = FUN_04f8f730(this + 0x90);
      bVar1 = bVar1 ^ 1;
    }
  }
  return bVar1;
}

