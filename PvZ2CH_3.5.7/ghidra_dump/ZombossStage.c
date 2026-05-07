// Class: ZombossStage


/* ZombossStage::~ZombossStage() */

void __thiscall ZombossStage::~ZombossStage(ZombossStage *this)

{
  std::
  vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
  ::~vector((vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
             *)(this + 0x50));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  return;
}


/* ZombossStage::ZombossStage() */

void __thiscall ZombossStage::ZombossStage(ZombossStage *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  Sexy::Color::Color((Color *)(this + 0x30));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 1;
  *(undefined4 *)(this + 0xc) = 1;
  *(undefined4 *)(this + 0x18) = 6;
  *(undefined4 *)this = 1000;
  *(undefined4 *)(this + 0x1c) = 7;
  *(undefined4 *)(this + 0x10) = 0x3f800000;
  *(undefined4 *)(this + 0x14) = 0x41200000;
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x48),1.0,1.0);
  *(undefined4 *)(this + 0x28) = 0x40400000;
  *(undefined4 *)(this + 0x2c) = 0x40000000;
  *(undefined4 *)(this + 0x44) = 0x3ecccccd;
  *(undefined4 *)(this + 0x40) = 0x41f00000;
  return;
}


/* ZombossStage::ZombossStage(ZombossStage const&) */

void __thiscall ZombossStage::ZombossStage(ZombossStage *this,ZombossStage *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)param_1;
  uVar4 = *(undefined4 *)(param_1 + 4);
  uVar5 = *(undefined4 *)(param_1 + 8);
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  uVar7 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)this = uVar3;
  *(undefined4 *)(this + 4) = uVar4;
  *(undefined4 *)(this + 8) = uVar5;
  *(undefined4 *)(this + 0xc) = uVar6;
  *(undefined4 *)(this + 0x18) = uVar7;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x20),(RtWeakPtrBase *)(param_1 + 0x20));
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = uVar1;
  Sexy::Insets::Insets((Insets *)(this + 0x30),(Insets *)(param_1 + 0x30));
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x40) = uVar1;
  *(undefined4 *)(this + 0x44) = uVar2;
  std::
  vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
  ::vector((vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
            *)(this + 0x50),(vector *)(param_1 + 0x50));
  return;
}

