// Class: RisedZombie


/* RisedZombie::RisedZombie(RisedZombie const&) */

void __thiscall RisedZombie::RisedZombie(RisedZombie *this,RisedZombie *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  RisedZombie RVar4;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = uVar1;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)(this + 0x28),
             (RtReflectionDelegate *)(param_1 + 0x28));
  uVar1 = *(undefined4 *)(param_1 + 0x74);
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  RVar4 = param_1[0x71];
  uVar3 = *(undefined4 *)(param_1 + 0x7c);
  this[0x70] = param_1[0x70];
  this[0x71] = RVar4;
  *(undefined4 *)(this + 0x74) = uVar1;
  *(undefined4 *)(this + 0x78) = uVar2;
  *(undefined4 *)(this + 0x7c) = uVar3;
  return;
}


/* RisedZombie::~RisedZombie() */

void __thiscall RisedZombie::~RisedZombie(RisedZombie *this)

{
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x28));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this);
  return;
}


void __thiscall RisedZombie::~RisedZombie(RisedZombie *this)

{
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x28));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this);
  return;
}


void __thiscall RisedZombie::~RisedZombie(RisedZombie *this)

{
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x28));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this);
  return;
}


void __thiscall RisedZombie::~RisedZombie(RisedZombie *this)

{
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x28));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this);
  return;
}


/* RisedZombie::RisedZombie() */

void __thiscall RisedZombie::RisedZombie(RisedZombie *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  DVec3::DVec3((DVec3 *)(this + 8));
  DVec3::DVec3((DVec3 *)(this + 0x14));
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)(this + 0x28));
  return;
}


/* RisedZombie::TEMPNAMEPLACEHOLDERVALUE(RisedZombie&&) */

RisedZombie * __thiscall RisedZombie::operator=(RisedZombie *this,RisedZombie *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  RisedZombie RVar4;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 8),(SexyVector3 *)(param_1 + 8));
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x14),(SexyVector3 *)(param_1 + 0x14));
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = uVar1;
  RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)(this + 0x28),
             (RtReflectionDelegate *)(param_1 + 0x28));
  uVar1 = *(undefined4 *)(param_1 + 0x74);
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  RVar4 = param_1[0x70];
  uVar3 = *(undefined4 *)(param_1 + 0x7c);
  this[0x71] = param_1[0x71];
  this[0x70] = RVar4;
  *(undefined4 *)(this + 0x74) = uVar1;
  *(undefined4 *)(this + 0x78) = uVar2;
  *(undefined4 *)(this + 0x7c) = uVar3;
  return this;
}


/* RisedZombie::TEMPNAMEPLACEHOLDERVALUE(RisedZombie const&) */

RisedZombie * __thiscall RisedZombie::operator=(RisedZombie *this,RisedZombie *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  RisedZombie RVar4;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 8),(SexyVector3 *)(param_1 + 8));
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x14),(SexyVector3 *)(param_1 + 0x14));
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = uVar1;
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x28),
             (RtReflectionDelegate *)(param_1 + 0x28));
  uVar1 = *(undefined4 *)(param_1 + 0x74);
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  RVar4 = param_1[0x70];
  uVar3 = *(undefined4 *)(param_1 + 0x7c);
  this[0x71] = param_1[0x71];
  this[0x70] = RVar4;
  *(undefined4 *)(this + 0x74) = uVar1;
  *(undefined4 *)(this + 0x78) = uVar2;
  *(undefined4 *)(this + 0x7c) = uVar3;
  return this;
}


/* RisedZombie::RisedZombie(RisedZombie&&) */

void __thiscall RisedZombie::RisedZombie(RisedZombie *this,RisedZombie *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  RisedZombie RVar4;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = uVar1;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)(this + 0x28),
             (RtReflectionDelegate *)(param_1 + 0x28));
  uVar1 = *(undefined4 *)(param_1 + 0x74);
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  RVar4 = param_1[0x71];
  uVar3 = *(undefined4 *)(param_1 + 0x7c);
  this[0x70] = param_1[0x70];
  this[0x71] = RVar4;
  *(undefined4 *)(this + 0x74) = uVar1;
  *(undefined4 *)(this + 0x78) = uVar2;
  *(undefined4 *)(this + 0x7c) = uVar3;
  return;
}

