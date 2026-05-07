// Class: Sexy::PIParticleInstance


/* Sexy::PIParticleInstance::~PIParticleInstance() */

void __thiscall Sexy::PIParticleInstance::~PIParticleInstance(PIParticleInstance *this)

{
  mCount = mCount + -1;
  return;
}


/* Sexy::PIParticleInstance::PIParticleInstance() */

void __thiscall Sexy::PIParticleInstance::PIParticleInstance(PIParticleInstance *this)

{
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x18));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x20));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x98));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0xa0));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0xa8));
  MemoryImage::TriRep::Tri::Tri((Tri *)(this + 200),1.0,0.0,0.0,1.0,0.0,0.0);
  Insets::Insets((Insets *)(this + 0x108));
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0xf8) = 0xffffffff;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  this[0xf0] = (PIParticleInstance)0x0;
  *(undefined4 *)(this + 0xe8) = 0x3f800000;
  *(undefined4 *)(this + 0xb4) = 0x3f800000;
  *(undefined4 *)(this + 0xb8) = 0x3f800000;
  mCount = mCount + 1;
  return;
}

