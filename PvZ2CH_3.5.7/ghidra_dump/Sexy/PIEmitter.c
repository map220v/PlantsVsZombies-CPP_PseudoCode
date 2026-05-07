// Class: Sexy::PIEmitter


/* Sexy::PIEmitter::PIEmitter() */

void __thiscall Sexy::PIEmitter::PIEmitter(PIEmitter *this)

{
  PIEmitter *pPVar1;
  PIEmitter *this_00;
  
  Set8BytesTo0();
  this_00 = this + 8;
  do {
    pPVar1 = this_00 + 0x70;
    PIValue::PIValue((PIValue *)this_00);
    this_00 = pPVar1;
  } while (pPVar1 != this + 0x1268);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1268));
  return;
}


/* Sexy::PIEmitter::~PIEmitter() */

void __thiscall Sexy::PIEmitter::~PIEmitter(PIEmitter *this)

{
  vector<Sexy::PIParticleDef,std::allocator<Sexy::PIParticleDef>> *this_00;
  
  this_00 = (vector<Sexy::PIParticleDef,std::allocator<Sexy::PIParticleDef>> *)(this + 0x1268);
  std::vector<Sexy::PIParticleDef,std::allocator<Sexy::PIParticleDef>>::~vector(this_00);
  if (this != (PIEmitter *)0xfffffffffffffff8) {
    do {
      this_00 = this_00 + -0x70;
      PIValue::~PIValue((PIValue *)this_00);
    } while (this + 8 != (PIEmitter *)this_00);
  }
  std::string::~string((string *)this);
  return;
}

