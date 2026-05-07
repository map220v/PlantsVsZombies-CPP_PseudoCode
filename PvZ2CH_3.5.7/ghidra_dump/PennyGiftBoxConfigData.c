// Class: PennyGiftBoxConfigData


/* PennyGiftBoxConfigData::~PennyGiftBoxConfigData() */

void __thiscall PennyGiftBoxConfigData::~PennyGiftBoxConfigData(PennyGiftBoxConfigData *this)

{
  std::_Destroy<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>*>
            (*(vector **)this,*(vector **)(this + 8));
  std::
  _Vector_base<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~_Vector_base((_Vector_base<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
                   *)this);
  return;
}


/* PennyGiftBoxConfigData::PennyGiftBoxConfigData(PennyGiftBoxConfigData const&) */

void __thiscall
PennyGiftBoxConfigData::PennyGiftBoxConfigData
          (PennyGiftBoxConfigData *this,PennyGiftBoxConfigData *param_1)

{
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
            *)this,(vector *)param_1);
  this[0x18] = param_1[0x18];
  return;
}


/* PennyGiftBoxConfigData::TEMPNAMEPLACEHOLDERVALUE(PennyGiftBoxConfigData const&) */

PennyGiftBoxConfigData * __thiscall
PennyGiftBoxConfigData::operator=(PennyGiftBoxConfigData *this,PennyGiftBoxConfigData *param_1)

{
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::operator=((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
               *)this,(vector *)param_1);
  this[0x18] = param_1[0x18];
  return this;
}

