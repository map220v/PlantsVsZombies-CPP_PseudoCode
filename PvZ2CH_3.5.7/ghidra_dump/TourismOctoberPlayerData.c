// Class: TourismOctoberPlayerData


/* TourismOctoberPlayerData::TourismOctoberPlayerData(TourismOctoberPlayerData const&) */

void __thiscall
TourismOctoberPlayerData::TourismOctoberPlayerData
          (TourismOctoberPlayerData *this,TourismOctoberPlayerData *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05475d88(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = uVar1;
  return;
}


/* TourismOctoberPlayerData::TourismOctoberPlayerData(TourismOctoberPlayerData&&) */

void __thiscall
TourismOctoberPlayerData::TourismOctoberPlayerData
          (TourismOctoberPlayerData *this,TourismOctoberPlayerData *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05474148(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = uVar1;
  return;
}


/* TourismOctoberPlayerData::TEMPNAMEPLACEHOLDERVALUE(TourismOctoberPlayerData&&) */

TourismOctoberPlayerData * __thiscall
TourismOctoberPlayerData::operator=
          (TourismOctoberPlayerData *this,TourismOctoberPlayerData *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05474278(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = uVar1;
  return this;
}


/* TourismOctoberPlayerData::TEMPNAMEPLACEHOLDERVALUE(TourismOctoberPlayerData const&) */

TourismOctoberPlayerData * __thiscall
TourismOctoberPlayerData::operator=
          (TourismOctoberPlayerData *this,TourismOctoberPlayerData *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = uVar1;
  return this;
}

