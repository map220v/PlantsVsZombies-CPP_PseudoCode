// Class: Sexy::PIFreeEmitterInstance


/* Sexy::PIFreeEmitterInstance::PIFreeEmitterInstance() */

void __thiscall Sexy::PIFreeEmitterInstance::PIFreeEmitterInstance(PIFreeEmitterInstance *this)

{
  PIParticleInstance::PIParticleInstance((PIParticleInstance *)this);
  PIEmitterBase::PIEmitterBase((PIEmitterBase *)(this + 0x120));
  this[0x14d] = (PIFreeEmitterInstance)0x1;
  return;
}


/* Sexy::PIFreeEmitterInstance::~PIFreeEmitterInstance() */

void __thiscall Sexy::PIFreeEmitterInstance::~PIFreeEmitterInstance(PIFreeEmitterInstance *this)

{
  PIEmitterBase::~PIEmitterBase((PIEmitterBase *)(this + 0x120));
  PIParticleInstance::~PIParticleInstance((PIParticleInstance *)this);
  return;
}

