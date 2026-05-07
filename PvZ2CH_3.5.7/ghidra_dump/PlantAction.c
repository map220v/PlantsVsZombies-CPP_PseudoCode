// Class: PlantAction


/* PlantAction::~PlantAction() */

void __thiscall PlantAction::~PlantAction(PlantAction *this)

{
  std::string::~string((string *)(this + 0x50));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  return;
}


/* PlantAction::PlantAction(PlantAction const&) */

void __thiscall PlantAction::PlantAction(PlantAction *this,PlantAction *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  PlantAction PVar13;
  PlantAction PVar14;
  undefined8 uVar15;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),(RtWeakPtrBase *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  PVar13 = param_1[0x1c];
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  uVar5 = *(undefined4 *)(param_1 + 0x2c);
  uVar6 = *(undefined4 *)(param_1 + 0x28);
  PVar14 = param_1[0x34];
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x38);
  uVar9 = *(undefined4 *)(param_1 + 0x3c);
  uVar10 = *(undefined4 *)(param_1 + 0x40);
  uVar11 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  uVar12 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x18) = uVar2;
  this[0x1c] = PVar13;
  *(undefined4 *)(this + 0x2c) = uVar5;
  this[0x34] = PVar14;
  *(undefined4 *)(this + 0x38) = uVar8;
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x20) = uVar3;
  *(undefined4 *)(this + 0x24) = uVar4;
  *(undefined4 *)(this + 0x28) = uVar6;
  *(undefined4 *)(this + 0x30) = uVar7;
  *(undefined4 *)(this + 0x3c) = uVar9;
  *(undefined4 *)(this + 0x40) = uVar10;
  *(undefined4 *)(this + 0x44) = uVar11;
  *(undefined4 *)(this + 0x48) = uVar12;
  FUN_05475d88(this + 0x50,param_1 + 0x50);
  Sexy::Insets::Insets((Insets *)(this + 0x58),(Insets *)(param_1 + 0x58));
  uVar15 = *(undefined8 *)(param_1 + 0x68);
  this[0x70] = param_1[0x70];
  *(undefined8 *)(this + 0x68) = uVar15;
  return;
}


/* PlantAction::TEMPNAMEPLACEHOLDERVALUE(PlantAction const&) */

PlantAction * __thiscall PlantAction::operator=(PlantAction *this,PlantAction *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  PlantAction PVar13;
  PlantAction PVar14;
  undefined8 uVar15;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 8),(RtWeakPtr *)(param_1 + 8));
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  PVar13 = param_1[0x1c];
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  PVar14 = param_1[0x34];
  uVar6 = *(undefined4 *)(param_1 + 0x24);
  uVar7 = *(undefined4 *)(param_1 + 0x38);
  uVar8 = *(undefined4 *)(param_1 + 0x28);
  uVar9 = *(undefined4 *)(param_1 + 0x30);
  uVar10 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  uVar11 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x18) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  this[0x1c] = PVar13;
  uVar12 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x2c) = uVar4;
  this[0x34] = PVar14;
  *(undefined4 *)(this + 0x38) = uVar7;
  *(undefined4 *)(this + 0x14) = uVar3;
  *(undefined4 *)(this + 0x20) = uVar5;
  *(undefined4 *)(this + 0x24) = uVar6;
  *(undefined4 *)(this + 0x28) = uVar8;
  *(undefined4 *)(this + 0x30) = uVar9;
  *(undefined4 *)(this + 0x3c) = uVar10;
  *(undefined4 *)(this + 0x40) = uVar11;
  *(undefined4 *)(this + 0x44) = uVar2;
  *(undefined4 *)(this + 0x48) = uVar12;
  thunk_FUN_05475e00(this + 0x50,param_1 + 0x50);
  uVar15 = *(undefined8 *)(param_1 + 0x68);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  PVar13 = param_1[0x70];
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x60) = uVar1;
  *(undefined8 *)(this + 0x68) = uVar15;
  this[0x70] = PVar13;
  return this;
}


/* PlantAction::PlantAction() */

void __thiscall PlantAction::PlantAction(PlantAction *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  Set8BytesTo0(this + 0x50);
  Sexy::Insets::Insets((Insets *)(this + 0x58));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x68));
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  this[0x1c] = (PlantAction)0x1;
  this[0x34] = (PlantAction)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x70] = (PlantAction)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0x3f59999a;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  return;
}

