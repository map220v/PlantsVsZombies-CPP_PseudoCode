// Class: EffectObject_GardenerGrass::SawDes


/* EffectObject_GardenerGrass::SawDes::SawDes() */

void __thiscall EffectObject_GardenerGrass::SawDes::SawDes(SawDes *this)

{
  DamageInfo::DamageInfo((DamageInfo *)this);
  Sexy::Insets::Insets((Insets *)(this + 0x60));
  Set8BytesTo0(this + 0x88);
  Set8BytesTo0(this + 0x90);
  Set8BytesTo0(this + 0x98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa0));
  return;
}


/* EffectObject_GardenerGrass::SawDes::~SawDes() */

void __thiscall EffectObject_GardenerGrass::SawDes::~SawDes(SawDes *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0));
  std::string::~string((string *)(this + 0x98));
  std::string::~string((string *)(this + 0x90));
  std::string::~string((string *)(this + 0x88));
  DamageInfo::~DamageInfo((DamageInfo *)this);
  return;
}


/* EffectObject_GardenerGrass::SawDes::SawDes(EffectObject_GardenerGrass::SawDes const&) */

void __thiscall EffectObject_GardenerGrass::SawDes::SawDes(SawDes *this,SawDes *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  SawDes SVar4;
  SawDes SVar5;
  
  DamageInfo::DamageInfo((DamageInfo *)this,(DamageInfo *)param_1);
  Sexy::Insets::Insets((Insets *)(this + 0x60),(Insets *)(param_1 + 0x60));
  uVar1 = *(undefined4 *)(param_1 + 0x74);
  SVar4 = param_1[0x70];
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  SVar5 = param_1[0x71];
  uVar3 = *(undefined4 *)(param_1 + 0x80);
  this[0x7c] = param_1[0x7c];
  this[0x70] = SVar4;
  this[0x71] = SVar5;
  *(undefined4 *)(this + 0x74) = uVar1;
  *(undefined4 *)(this + 0x78) = uVar2;
  *(undefined4 *)(this + 0x80) = uVar3;
  FUN_05475d88(this + 0x88,param_1 + 0x88);
  FUN_05475d88(this + 0x90,param_1 + 0x90);
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0xa0),(RtWeakPtrBase *)(param_1 + 0xa0));
  return;
}


/* EffectObject_GardenerGrass::SawDes::TEMPNAMEPLACEHOLDERVALUE(EffectObject_GardenerGrass::SawDes
   const&) */

SawDes * __thiscall EffectObject_GardenerGrass::SawDes::operator=(SawDes *this,SawDes *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  SawDes SVar6;
  SawDes SVar7;
  
  DamageInfo::operator=((DamageInfo *)this,(DamageInfo *)param_1);
  uVar3 = *(undefined4 *)(param_1 + 0x74);
  uVar4 = *(undefined4 *)(param_1 + 0x78);
  SVar6 = param_1[0x71];
  uVar5 = *(undefined4 *)(param_1 + 0x80);
  SVar7 = param_1[0x7c];
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  this[0x70] = param_1[0x70];
  this[0x71] = SVar6;
  this[0x7c] = SVar7;
  *(undefined8 *)(this + 0x60) = uVar1;
  *(undefined8 *)(this + 0x68) = uVar2;
  *(undefined4 *)(this + 0x74) = uVar3;
  *(undefined4 *)(this + 0x78) = uVar4;
  *(undefined4 *)(this + 0x80) = uVar5;
  thunk_FUN_05475e00(this + 0x88,param_1 + 0x88);
  thunk_FUN_05475e00(this + 0x90,param_1 + 0x90);
  thunk_FUN_05475e00(this + 0x98,param_1 + 0x98);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xa0),(RtWeakPtr *)(param_1 + 0xa0));
  return this;
}

