// Class: DangerRoomRewardCard


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomRewardCard::DangerRoomRewardCard() */

void __thiscall DangerRoomRewardCard::DangerRoomRewardCard(DangerRoomRewardCard *this)

{
  long lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__DangerRoomRewardCard_0675bcb0;
  DangerRoomRewardInfo::DangerRoomRewardInfo((DangerRoomRewardInfo *)(this + 8));
  Sexy::Insets::Insets((Insets *)(this + 0x20));
  *(undefined8 *)(this + 0x18) = 0;
  Sexy::Insets::Insets((Insets *)&local_18,0,0,0,0);
  this[0x34] = (DangerRoomRewardCard)0x0;
  lVar1 = ___stack_chk_guard;
  this[0x35] = (DangerRoomRewardCard)0x0;
  this[0x36] = (DangerRoomRewardCard)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x20) = local_18;
  *(undefined8 *)(this + 0x28) = uStack_10;
  *(undefined4 *)(this + 0x30) = 0x3f800000;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomRewardCard::~DangerRoomRewardCard() */

void __thiscall DangerRoomRewardCard::~DangerRoomRewardCard(DangerRoomRewardCard *this)

{
  LawnApp *this_00;
  long lVar1;
  
  *(undefined ***)this = &PTR__DangerRoomRewardCard_0675bcb0;
  this_00 = gLawnApp;
  if ((*(long *)(this + 0x18) != 0) && (*(int *)(this + 8) == 1)) {
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10))
    ;
    LawnApp::DeleteGroup(this_00,(string *)(lVar1 + 0x10));
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 0x18))();
      *(undefined8 *)(this + 0x18) = 0;
      WidgetImg::~WidgetImg((WidgetImg *)(this + 8));
      return;
    }
  }
  WidgetImg::~WidgetImg((WidgetImg *)(this + 8));
  return;
}


/* DangerRoomRewardCard::~DangerRoomRewardCard() */

void __thiscall DangerRoomRewardCard::~DangerRoomRewardCard(DangerRoomRewardCard *this)

{
  ~DangerRoomRewardCard(this);
  AK::FreeHook(this);
  return;
}

