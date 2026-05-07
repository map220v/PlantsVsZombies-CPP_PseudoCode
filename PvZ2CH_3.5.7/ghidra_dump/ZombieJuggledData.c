// Class: ZombieJuggledData


/* ZombieJuggledData::ZombieJuggledData() */

void __thiscall ZombieJuggledData::ZombieJuggledData(ZombieJuggledData *this)

{
  DVec3::DVec3((DVec3 *)this);
  DVec3::DVec3((DVec3 *)(this + 0xc));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  *(undefined4 *)(this + 0x20) = 0;
  this[0x78] = (ZombieJuggledData)0x0;
  this[0x79] = (ZombieJuggledData)0x0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}


/* ZombieJuggledData::~ZombieJuggledData() */

void __thiscall ZombieJuggledData::~ZombieJuggledData(ZombieJuggledData *this)

{
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x60));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x48));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x30));
  return;
}


/* ZombieJuggledData::ZombieJuggledData(ZombieJuggledData const&) */

void __thiscall
ZombieJuggledData::ZombieJuggledData(ZombieJuggledData *this,ZombieJuggledData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ZombieJuggledData ZVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)this = *(undefined8 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined8 *)(this + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined8 *)(this + 0x18) = uVar6;
  *(undefined4 *)(this + 0x20) = uVar3;
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 0x28) = uVar2;
  *(undefined4 *)(this + 0x2c) = uVar4;
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x60),
             (vector *)(param_1 + 0x60));
  ZVar5 = param_1[0x78];
  this[0x79] = param_1[0x79];
  this[0x78] = ZVar5;
  return;
}


/* ZombieJuggledData::TEMPNAMEPLACEHOLDERVALUE(ZombieJuggledData const&) */

ZombieJuggledData * __thiscall
ZombieJuggledData::operator=(ZombieJuggledData *this,ZombieJuggledData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ZombieJuggledData ZVar5;
  
  Sexy::SexyVector3::operator=((SexyVector3 *)this,(SexyVector3 *)param_1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xc),(SexyVector3 *)(param_1 + 0xc));
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x20) = uVar3;
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 0x28) = uVar2;
  *(undefined4 *)(this + 0x2c) = uVar4;
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x60),
             (vector *)(param_1 + 0x60));
  ZVar5 = param_1[0x79];
  this[0x78] = param_1[0x78];
  this[0x79] = ZVar5;
  return this;
}

