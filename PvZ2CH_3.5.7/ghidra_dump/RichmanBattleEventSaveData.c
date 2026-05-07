// Class: RichmanBattleEventSaveData


/* RichmanBattleEventSaveData::~RichmanBattleEventSaveData() */

void __thiscall
RichmanBattleEventSaveData::~RichmanBattleEventSaveData(RichmanBattleEventSaveData *this)

{
  std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::~vector
            ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)(this + 0x30));
  std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::~vector
            ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)(this + 0x18));
  std::string::~string((string *)(this + 8));
  return;
}


/* RichmanBattleEventSaveData::Reset() */

void __thiscall RichmanBattleEventSaveData::Reset(RichmanBattleEventSaveData *this)

{
  *(undefined4 *)(this + 4) = 0xffffffff;
  *this = (RichmanBattleEventSaveData)0x0;
  this[1] = (RichmanBattleEventSaveData)0x0;
  std::string::append((string *)(this + 8),"",0xffffffff);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::clear
            ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)(this + 0x18));
  std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::clear
            ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)(this + 0x30));
  *(undefined8 *)(this + 0x48) = 0;
  return;
}


/* RichmanBattleEventSaveData::RichmanBattleEventSaveData() */

void __thiscall
RichmanBattleEventSaveData::RichmanBattleEventSaveData(RichmanBattleEventSaveData *this)

{
  Set8BytesTo0(this + 8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  Reset(this);
  return;
}


/* RichmanBattleEventSaveData::RichmanBattleEventSaveData(RichmanBattleEventSaveData const&) */

void __thiscall
RichmanBattleEventSaveData::RichmanBattleEventSaveData
          (RichmanBattleEventSaveData *this,RichmanBattleEventSaveData *param_1)

{
  undefined4 uVar1;
  RichmanBattleEventSaveData RVar2;
  RichmanBattleEventSaveData RVar3;
  
  RVar2 = *param_1;
  RVar3 = param_1[1];
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *this = RVar2;
  this[1] = RVar3;
  FUN_05475d88(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = uVar1;
  std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::vector
            ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::vector
            ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
  return;
}


/* RichmanBattleEventSaveData::TEMPNAMEPLACEHOLDERVALUE(RichmanBattleEventSaveData const&) */

RichmanBattleEventSaveData * __thiscall
RichmanBattleEventSaveData::operator=
          (RichmanBattleEventSaveData *this,RichmanBattleEventSaveData *param_1)

{
  undefined4 uVar1;
  RichmanBattleEventSaveData RVar2;
  RichmanBattleEventSaveData RVar3;
  
  RVar2 = *param_1;
  RVar3 = param_1[1];
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *this = RVar2;
  this[1] = RVar3;
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = uVar1;
  std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::operator=
            ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::operator=
            ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
  return this;
}

