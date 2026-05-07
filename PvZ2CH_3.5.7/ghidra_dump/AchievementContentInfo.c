// Class: AchievementContentInfo


/* AchievementContentInfo::~AchievementContentInfo() */

void __thiscall AchievementContentInfo::~AchievementContentInfo(AchievementContentInfo *this)

{
  std::string::~string((string *)(this + 0x60));
  std::string::~string((string *)(this + 0x48));
  std::string::~string((string *)(this + 0x40));
  AchievementItem::~AchievementItem((AchievementItem *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AchievementContentInfo::AchievementContentInfo() */

void __thiscall AchievementContentInfo::AchievementContentInfo(AchievementContentInfo *this)

{
  size_t in_x2;
  AchievementItem aAStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AchievementItem::AchievementItem((AchievementItem *)this);
  Set8BytesTo0(this + 0x40);
  Set8BytesTo0(this + 0x48);
  Set8BytesTo0((string *)(this + 0x60));
  AchievementItem::AchievementItem(aAStack_48);
  AchievementItem::operator=((AchievementItem *)this,aAStack_48);
  AchievementItem::~AchievementItem(aAStack_48);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  std::string::append((string *)(this + 0x60),"",in_x2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AchievementContentInfo::AchievementContentInfo(AchievementContentInfo const&) */

void __thiscall
AchievementContentInfo::AchievementContentInfo
          (AchievementContentInfo *this,AchievementContentInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  AchievementItem::AchievementItem((AchievementItem *)this,(AchievementItem *)param_1);
  FUN_05475d88(this + 0x40,param_1 + 0x40);
  FUN_05475d88(this + 0x48,param_1 + 0x48);
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  uVar2 = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x50) = uVar1;
  *(undefined4 *)(this + 0x54) = uVar2;
  FUN_05475d88(this + 0x60,param_1 + 0x60);
  return;
}


/* AchievementContentInfo::AchievementContentInfo(AchievementContentInfo&&) */

void __thiscall
AchievementContentInfo::AchievementContentInfo
          (AchievementContentInfo *this,AchievementContentInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  AchievementItem::AchievementItem((AchievementItem *)this,(AchievementItem *)param_1);
  FUN_05474148(this + 0x40,param_1 + 0x40);
  FUN_05474148(this + 0x48,param_1 + 0x48);
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  uVar2 = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x50) = uVar1;
  *(undefined4 *)(this + 0x54) = uVar2;
  FUN_05474148(this + 0x60,param_1 + 0x60);
  return;
}

