// Class: WalkingOutZombie


/* WalkingOutZombie::~WalkingOutZombie() */

void __thiscall WalkingOutZombie::~WalkingOutZombie(WalkingOutZombie *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  return;
}


void __thiscall WalkingOutZombie::~WalkingOutZombie(WalkingOutZombie *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  return;
}


void __thiscall WalkingOutZombie::~WalkingOutZombie(WalkingOutZombie *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  return;
}


void __thiscall WalkingOutZombie::~WalkingOutZombie(WalkingOutZombie *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  return;
}


/* WalkingOutZombie::WalkingOutZombie() */

void __thiscall WalkingOutZombie::WalkingOutZombie(WalkingOutZombie *this)

{
  DVec3::DVec3((DVec3 *)this);
  Sexy::Color::Color((Color *)(this + 0x18));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  return;
}


/* WalkingOutZombie::WalkingOutZombie(WalkingOutZombie&&) */

void __thiscall WalkingOutZombie::WalkingOutZombie(WalkingOutZombie *this,WalkingOutZombie *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar3;
  Sexy::Insets::Insets((Insets *)(this + 0x18),(Insets *)(param_1 + 0x18));
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x30),(RtWeakPtrBase *)(param_1 + 0x30));
  return;
}


/* WalkingOutZombie::TEMPNAMEPLACEHOLDERVALUE(WalkingOutZombie const&) */

WalkingOutZombie * __thiscall
WalkingOutZombie::operator=(WalkingOutZombie *this,WalkingOutZombie *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  Sexy::SexyVector3::operator=((SexyVector3 *)this,(SexyVector3 *)param_1);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = uVar3;
  *(undefined4 *)(this + 0x14) = uVar4;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined8 *)(this + 0x20) = uVar2;
  *(undefined4 *)(this + 0x28) = uVar5;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x30),(RtWeakPtr *)(param_1 + 0x30));
  return this;
}

