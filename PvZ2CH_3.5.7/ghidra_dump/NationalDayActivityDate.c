// Class: NationalDayActivityDate


/* NationalDayActivityDate::~NationalDayActivityDate() */

void __thiscall NationalDayActivityDate::~NationalDayActivityDate(NationalDayActivityDate *this)

{
  std::vector<NationalDayRewardItem,std::allocator<NationalDayRewardItem>>::~vector
            ((vector<NationalDayRewardItem,std::allocator<NationalDayRewardItem>> *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NationalDayActivityDate::NationalDayActivityDate() */

void __thiscall NationalDayActivityDate::NationalDayActivityDate(NationalDayActivityDate *this)

{
  long lVar1;
  
  *(undefined4 *)(this + 8) = 0x23;
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)(this + 0x10),"[NATIONALDAY_ACTIVE_TIME_1]");
  nop();
  std::string::string((string *)(this + 0x18),"[NATIONALDAY_ACTIVE_CONTENT]");
  nop();
  Set8BytesTo0(this + 0x20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NationalDayActivityDate::NationalDayActivityDate(NationalDayActivityDate const&) */

void __thiscall
NationalDayActivityDate::NationalDayActivityDate
          (NationalDayActivityDate *this,NationalDayActivityDate *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  FUN_05475d88(this + 0x20,param_1 + 0x20);
  std::vector<NationalDayRewardItem,std::allocator<NationalDayRewardItem>>::vector
            ((vector<NationalDayRewardItem,std::allocator<NationalDayRewardItem>> *)(this + 0x28),
             (vector *)(param_1 + 0x28));
  return;
}


/* NationalDayActivityDate::TEMPNAMEPLACEHOLDERVALUE(NationalDayActivityDate const&) */

NationalDayActivityDate * __thiscall
NationalDayActivityDate::operator=(NationalDayActivityDate *this,NationalDayActivityDate *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  thunk_FUN_05475e00(this + 0x20,param_1 + 0x20);
  std::vector<NationalDayRewardItem,std::allocator<NationalDayRewardItem>>::operator=
            ((vector<NationalDayRewardItem,std::allocator<NationalDayRewardItem>> *)(this + 0x28),
             (vector *)(param_1 + 0x28));
  return this;
}


/* NationalDayActivityDate::NationalDayActivityDate(NationalDayActivityDate&&) */

void __thiscall
NationalDayActivityDate::NationalDayActivityDate
          (NationalDayActivityDate *this,NationalDayActivityDate *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  FUN_05474148(this + 0x10,param_1 + 0x10);
  FUN_05474148(this + 0x18,param_1 + 0x18);
  FUN_05474148(this + 0x20,param_1 + 0x20);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x28),(vector *)(param_1 + 0x28));
  return;
}

