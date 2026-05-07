// Class: DailyAwardBonus


/* DailyAwardBonus::DailyAwardBonus() */

void __thiscall DailyAwardBonus::DailyAwardBonus(DailyAwardBonus *this)

{
  *(undefined4 *)this = 0;
  this[4] = (DailyAwardBonus)0x0;
  Set8BytesTo0(this + 8);
  *(undefined4 *)(this + 0x10) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* DailyAwardBonus::TEMPNAMEPLACEHOLDERVALUE(DailyAwardBonus const&) */

DailyAwardBonus * __thiscall
DailyAwardBonus::operator=(DailyAwardBonus *this,DailyAwardBonus *param_1)

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
  return this;
}

