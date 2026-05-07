// Class: Sexy::PIEmitterInstance


/* Sexy::PIEmitterInstance::PIEmitterInstance() */

void __thiscall Sexy::PIEmitterInstance::PIEmitterInstance(PIEmitterInstance *this)

{
  PIEmitterBase::PIEmitterBase((PIEmitterBase *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  PIParticleGroup::PIParticleGroup((PIParticleGroup *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  PIParticleGroup::PIParticleGroup((PIParticleGroup *)(this + 0x98));
  MemoryImage::TriRep::Tri::Tri((Tri *)(this + 0xc0),1.0,0.0,0.0,1.0,0.0,0.0);
  Color::Color((Color *)(this + 0xd8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe8));
  SexyTransform2D::SexyTransform2D((SexyTransform2D *)(this + 0xf0));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x114));
  this[0x40] = (PIEmitterInstance)0x0;
  this[0x41] = (PIEmitterInstance)0x1;
  this[0x74] = (PIEmitterInstance)0x1;
  SexyMatrix3::LoadIdentity((SexyMatrix3 *)(this + 0xf0));
  this[0x120] = (PIEmitterInstance)0x1;
  *(undefined4 *)(this + 0x11c) = 0x3f800000;
  return;
}


/* Sexy::PIEmitterInstance::~PIEmitterInstance() */

void __thiscall Sexy::PIEmitterInstance::~PIEmitterInstance(PIEmitterInstance *this)

{
  RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  std::vector<Sexy::PIParticleDefInstance,std::allocator<Sexy::PIParticleDefInstance>>::~vector
            ((vector<Sexy::PIParticleDefInstance,std::allocator<Sexy::PIParticleDefInstance>> *)
             (this + 0x80));
  std::vector<Sexy::PIParticleDefInstance,std::allocator<Sexy::PIParticleDefInstance>>::~vector
            ((vector<Sexy::PIParticleDefInstance,std::allocator<Sexy::PIParticleDefInstance>> *)
             (this + 0x48));
  PIEmitterBase::~PIEmitterBase((PIEmitterBase *)this);
  return;
}


/* Sexy::PIEmitterInstance::PIEmitterInstance(Sexy::PIEmitterInstance const&) */

void __thiscall
Sexy::PIEmitterInstance::PIEmitterInstance(PIEmitterInstance *this,PIEmitterInstance *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  PIEmitterInstance PVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  PIEmitterBase::PIEmitterBase((PIEmitterBase *)this,(PIEmitterBase *)param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  PVar4 = param_1[0x40];
  this[0x41] = param_1[0x41];
  *(undefined8 *)(this + 0x38) = uVar5;
  this[0x40] = PVar4;
  std::vector<Sexy::PIParticleDefInstance,std::allocator<Sexy::PIParticleDefInstance>>::vector
            ((vector<Sexy::PIParticleDefInstance,std::allocator<Sexy::PIParticleDefInstance>> *)
             (this + 0x48),(vector *)(param_1 + 0x48));
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(this + 0x68) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(this + 0x78) = uVar5;
  std::vector<Sexy::PIParticleDefInstance,std::allocator<Sexy::PIParticleDefInstance>>::vector
            ((vector<Sexy::PIParticleDefInstance,std::allocator<Sexy::PIParticleDefInstance>> *)
             (this + 0x80),(vector *)(param_1 + 0x80));
  uVar5 = *(undefined8 *)(param_1 + 0xc0);
  uVar1 = *(undefined8 *)(param_1 + 200);
  uVar6 = *(undefined8 *)(param_1 + 0xb8);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(this + 0xa0) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(this + 0xb0) = uVar2;
  *(undefined8 *)(this + 0xc0) = uVar5;
  *(undefined8 *)(this + 200) = uVar1;
  *(undefined8 *)(this + 0xd0) = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(this + 0xb8) = uVar6;
  Insets::Insets((Insets *)(this + 0xd8),(Insets *)(param_1 + 0xd8));
  RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0xe8),(RtWeakPtrBase *)(param_1 + 0xe8));
  uVar5 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(this + 0xf0) = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(this + 0xf8) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(this + 0x100) = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(this + 0x108) = uVar5;
  *(undefined4 *)(this + 0x110) = *(undefined4 *)(param_1 + 0x110);
  FPoint::FPoint((FPoint *)(this + 0x114),(TPoint *)(param_1 + 0x114));
  uVar3 = *(undefined4 *)(param_1 + 0x11c);
  this[0x120] = param_1[0x120];
  *(undefined4 *)(this + 0x11c) = uVar3;
  return;
}

