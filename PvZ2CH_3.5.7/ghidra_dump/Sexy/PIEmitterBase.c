// Class: Sexy::PIEmitterBase


/* Sexy::PIEmitterBase::PIEmitterBase() */

void __thiscall Sexy::PIEmitterBase::PIEmitterBase(PIEmitterBase *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  PIParticleGroup::PIParticleGroup((PIParticleGroup *)(this + 0x18));
  return;
}


/* Sexy::PIEmitterBase::~PIEmitterBase() */

void __thiscall Sexy::PIEmitterBase::~PIEmitterBase(PIEmitterBase *this)

{
  FUN_053b9fd0(*(undefined8 *)this);
  return;
}


/* Sexy::PIEmitterBase::PIEmitterBase(Sexy::PIEmitterBase const&) */

void __thiscall Sexy::PIEmitterBase::PIEmitterBase(PIEmitterBase *this,PIEmitterBase *param_1)

{
  undefined8 uVar1;
  
  std::vector<Sexy::PIParticleDefInstance,std::allocator<Sexy::PIParticleDefInstance>>::vector
            ((vector<Sexy::PIParticleDefInstance,std::allocator<Sexy::PIParticleDefInstance>> *)this
             ,(vector *)param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x30) = uVar1;
  return;
}

