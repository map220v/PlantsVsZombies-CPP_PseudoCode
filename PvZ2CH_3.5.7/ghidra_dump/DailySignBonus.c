// Class: DailySignBonus


/* DailySignBonus::~DailySignBonus() */

void __thiscall DailySignBonus::~DailySignBonus(DailySignBonus *this)

{
  std::
  vector<std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>,std::allocator<std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>>>
  ::~vector((vector<std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>,std::allocator<std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>>>
             *)(this + 0x18));
  std::string::~string((string *)(this + 8));
  return;
}


/* DailySignBonus::DailySignBonus() */

void __thiscall DailySignBonus::DailySignBonus(DailySignBonus *this)

{
  *(undefined4 *)this = 0;
  this[4] = (DailySignBonus)0x0;
  Set8BytesTo0(this + 8);
  *(undefined4 *)(this + 0x10) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


/* DailySignBonus::TEMPNAMEPLACEHOLDERVALUE(DailySignBonus const&) */

DailySignBonus * __thiscall DailySignBonus::operator=(DailySignBonus *this,DailySignBonus *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  this[4] = param_1[4];
  *(undefined4 *)this = uVar1;
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  std::
  vector<std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>,std::allocator<std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>>>
  ::operator=((vector<std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>,std::allocator<std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>>>
               *)(this + 0x18),(vector *)(param_1 + 0x18));
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  return this;
}

