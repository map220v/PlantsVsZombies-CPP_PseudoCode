// Class: PinataStyleChooser


/* PinataStyleChooser::PinataStyleChooser() */

void __thiscall PinataStyleChooser::PinataStyleChooser(PinataStyleChooser *this)

{
  *(undefined ***)this = &PTR_nop_069252b0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataStyleChooser::GetEventProperties() const */

void PinataStyleChooser::GetEventProperties(void)

{
  LevelOfTheDaySystem *this;
  undefined8 uVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_18);
  if (*(long *)(gLawnApp + 0x9f0) == 0) {
    Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
    LevelOfTheDaySystem::GetCurrentHoliday();
    thunk_FUN_05475e00(asStack_18,asStack_10);
    std::string::~string(asStack_10);
  }
  this = (LevelOfTheDaySystem *)Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
  uVar1 = LevelOfTheDaySystem::GetHolidayEventProps(this,asStack_18);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PinataStyleChooser::HasHolidayLevelBackground() const */

bool PinataStyleChooser::HasHolidayLevelBackground(void)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  
  lVar3 = GetEventProperties();
  if (lVar3 == 0) {
    return false;
  }
  cVar2 = FUN_0547419c((string *)(lVar3 + 0x90));
  if (cVar2 == '\0') {
    cVar2 = FUN_0547419c(lVar3 + 0x98);
    bVar1 = false;
    if (cVar2 == '\0') {
      lVar3 = Sexy::ResourceManager::GetResourceGroupNamed
                        (*(ResourceManager **)(gLawnApp + 0x848),(string *)(lVar3 + 0x90));
      bVar1 = lVar3 != 0;
    }
    return bVar1;
  }
  return false;
}


/* PinataStyleChooser::HasHolidayMowerSwap() const */

bool PinataStyleChooser::HasHolidayMowerSwap(void)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  
  lVar3 = GetEventProperties();
  if (lVar3 == 0) {
    return false;
  }
  cVar2 = FUN_0547419c((string *)(lVar3 + 0xa0));
  if (cVar2 == '\0') {
    cVar2 = FUN_0547419c(lVar3 + 0xa8);
    bVar1 = false;
    if (cVar2 == '\0') {
      lVar3 = Sexy::ResourceManager::GetResourceGroupNamed
                        (*(ResourceManager **)(gLawnApp + 0x848),(string *)(lVar3 + 0xa0));
      bVar1 = lVar3 != 0;
    }
    return bVar1;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataStyleChooser::GetBigPinataAnimation() */

void PinataStyleChooser::GetBigPinataAnimation(void)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = GetEventProperties();
  std::string::string(asStack_18,"POPANIM_UI_LEVELOFTHEDAY_PRIZE_MEGA_PINATA");
  nop();
  if (lVar2 != 0) {
    cVar1 = FUN_0547419c(lVar2 + 0x30);
    if (cVar1 == '\0') {
      thunk_FUN_05475e00(asStack_18,lVar2 + 0x30);
    }
  }
  GetPAMByName(asStack_18);
  uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* PinataStyleChooser::GetBigPinataOffset() */

undefined4 PinataStyleChooser::GetBigPinataOffset(void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = GetEventProperties();
  if (lVar2 == 0) {
    uVar1 = 0xffffff38;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x38);
  }
  return uVar1;
}


/* PinataStyleChooser::UseHolidayAssetSwaps() */

char PinataStyleChooser::UseHolidayAssetSwaps(void)

{
  long lVar1;
  char cVar2;
  
  lVar1 = GetEventProperties();
  if (lVar1 == 0) {
    return '\0';
  }
  cVar2 = *(char *)(lVar1 + 0x3c);
  if ((cVar2 != '\0') && (*(char *)(lVar1 + 0x3d) != '\0')) {
    if (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) {
      return '\0';
    }
    lVar1 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    cVar2 = *(char *)(lVar1 + 0x16c);
  }
  return cVar2;
}


/* PinataStyleChooser::GetHitsMax() */

undefined4 PinataStyleChooser::GetHitsMax(void)

{
  long lVar1;
  
  lVar1 = GetEventProperties();
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x44);
  }
  return 3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataStyleChooser::GetSoundBreak(bool, bool) */

void __thiscall
PinataStyleChooser::GetSoundBreak(PinataStyleChooser *this,bool param_1,bool param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar1 = ___stack_chk_guard;
  if (((DAT_06b744b8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b744b8), iVar3 != 0)) {
    std::string::string((string *)&DAT_06b744b0,"Play_UI_LOD_Zombie_Pinata_Break_Basic");
    __cxa_guard_release(&DAT_06b744b8);
    __cxa_atexit(std::string::~string,&DAT_06b744b0,&DAT_06a88000);
    nop();
  }
  if (((DAT_06b74490 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b74490), iVar3 != 0)) {
    std::string::string((string *)&DAT_06b74588,"Play_UI_LOD_Zombie_Pinata_Break_Special");
    __cxa_guard_release(&DAT_06b74490);
    __cxa_atexit(std::string::~string,&DAT_06b74588,&DAT_06a88000);
    nop();
  }
  if (((DAT_06b74558 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b74558), iVar3 != 0)) {
    std::string::string((string *)&DAT_06b74498,"Play_UI_LOD_Pinata_Break");
    __cxa_guard_release(&DAT_06b74558);
    __cxa_atexit(std::string::~string,&DAT_06b74498,&DAT_06a88000);
    nop();
  }
  lVar4 = GetEventProperties();
  if (param_1) {
    if (param_2) {
      if (lVar4 != 0) {
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(lVar4 + 0x48));
        if (cVar2 != '\0') {
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar4 + 0x48));
          puVar5 = (undefined *)(lVar4 + 0x20);
          goto LAB_049b3ba0;
        }
      }
      puVar5 = &DAT_06b744b0;
    }
    else {
      if (lVar4 != 0) {
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(lVar4 + 0x48));
        if (cVar2 != '\0') {
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar4 + 0x48));
          puVar5 = (undefined *)(lVar4 + 0x30);
          goto LAB_049b3ba0;
        }
      }
      puVar5 = &DAT_06b74588;
    }
  }
  else {
    if (lVar4 != 0) {
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(lVar4 + 0x48));
      if (cVar2 != '\0') {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar4 + 0x48));
        puVar5 = (undefined *)(lVar4 + 0x18);
        goto LAB_049b3ba0;
      }
    }
    puVar5 = &DAT_06b74498;
  }
LAB_049b3ba0:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataStyleChooser::GetSoundDrop(bool) */

void __thiscall PinataStyleChooser::GetSoundDrop(PinataStyleChooser *this,bool param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar1 = ___stack_chk_guard;
  if (((DAT_06b744a8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b744a8), iVar3 != 0)) {
    std::string::string((string *)&DAT_06b745a0,"Play_UI_LOD_Zombie_Pinata_Drop");
    __cxa_guard_release(&DAT_06b744a8);
    __cxa_atexit(std::string::~string,&DAT_06b745a0,&DAT_06a88000);
    nop();
  }
  if (((DAT_06b745c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b745c0), iVar3 != 0)) {
    std::string::string((string *)&DAT_06b74478,"Play_UI_LOD_Pinata_Drop");
    __cxa_guard_release(&DAT_06b745c0);
    __cxa_atexit(std::string::~string,&DAT_06b74478,&DAT_06a88000);
    nop();
  }
  lVar4 = GetEventProperties();
  if (param_1) {
    if (lVar4 != 0) {
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(lVar4 + 0x48));
      if (cVar2 != '\0') {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar4 + 0x48));
        puVar5 = (undefined *)(lVar4 + 0x28);
        goto LAB_049b3da4;
      }
    }
    puVar5 = &DAT_06b745a0;
  }
  else {
    if (lVar4 != 0) {
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(lVar4 + 0x48));
      if (cVar2 != '\0') {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar4 + 0x48));
        puVar5 = (undefined *)(lVar4 + 0x10);
        goto LAB_049b3da4;
      }
    }
    puVar5 = &DAT_06b74478;
  }
LAB_049b3da4:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar5);
}


/* PinataStyleChooser::GetPianoZombiePlayEventName(bool) */

char * __thiscall
PinataStyleChooser::GetPianoZombiePlayEventName(PinataStyleChooser *this,bool param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  
  if ((param_1) && (lVar2 = GetEventProperties(), lVar2 != 0)) {
    cVar1 = FUN_0547419c(lVar2 + 0xb0);
    if (cVar1 == '\0') {
      pcVar3 = (char *)FUN_0547429c(lVar2 + 0xb0);
      return pcVar3;
    }
  }
  return "Play_MainTheme";
}


/* PinataStyleChooser::GetPianoZombieStopEventName(bool) */

char * __thiscall
PinataStyleChooser::GetPianoZombieStopEventName(PinataStyleChooser *this,bool param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  
  if ((param_1) && (lVar2 = GetEventProperties(), lVar2 != 0)) {
    cVar1 = FUN_0547419c(lVar2 + 0xb8);
    if (cVar1 == '\0') {
      pcVar3 = (char *)FUN_0547429c(lVar2 + 0xb8);
      return pcVar3;
    }
  }
  return "Stop_MainTheme";
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataStyleChooser::GetProgressImage(bool) */

void __thiscall PinataStyleChooser::GetProgressImage(PinataStyleChooser *this,bool param_1)

{
  string *psVar1;
  long lVar2;
  undefined8 uVar3;
  char *__s;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = GetEventProperties();
  psVar1 = gLawnApp;
  if (lVar2 == 0) {
    if (param_1) {
      __s = "IMAGE_UI_LEVELOFTHEDAY_PROGRESS_MEGAPINATA";
    }
    else {
      __s = "IMAGE_UI_LEVELOFTHEDAY_PROGRESS_PINATA";
    }
    std::string::string(asStack_18,__s);
    LawnApp::GetUIImageFromStringId(psVar1);
    uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
  }
  else {
    LawnApp::GetUIImageFromStringId(gLawnApp);
    uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* PinataStyleChooser::GetPartyProgressiveAwardHeaderInfo(bool, std::string&, std::string&,
   std::string&) */

void __thiscall
PinataStyleChooser::GetPartyProgressiveAwardHeaderInfo
          (PinataStyleChooser *this,bool param_1,string *param_2,string *param_3,string *param_4)

{
  long lVar1;
  
  lVar1 = GetEventProperties();
  if (lVar1 == 0) {
    if (!param_1) {
      std::string::append(param_2,"IMAGE_UI_LEVELOFTHEDAY_INSTRUCTIONAL_BANNER_3SLICE",
                          (size_t)param_2);
      std::string::append(param_3,"[LOD_NEXT_TIME_HEADER]",(size_t)param_2);
      std::string::append(param_4,"[LOD_NEXT_TIME_SUBHEADER]",(size_t)param_2);
      return;
    }
    std::string::append(param_2,"IMAGE_UI_LEVELOFTHEDAY_INSTRUCTIONAL_BANNER_3SLICE",(size_t)param_2
                       );
    std::string::append(param_3,"[LOD_OPEN_BIG_REWARD_HEADER]",(size_t)param_2);
    std::string::append(param_4,"[LOD_OPEN_BIG_REWARD_SUBHEADER]",(size_t)param_2);
    return;
  }
  if (param_1) {
    thunk_FUN_05475e00(param_2,lVar1 + 200);
    thunk_FUN_05475e00(param_3,lVar1 + 0xd0);
    thunk_FUN_05475e00(param_4,lVar1 + 0xd8);
    return;
  }
  thunk_FUN_05475e00(param_2,lVar1 + 0xe8);
  thunk_FUN_05475e00(param_3,lVar1 + 0xf0);
  thunk_FUN_05475e00(param_4,lVar1 + 0xf8);
  return;
}


/* PinataStyleChooser::GetPartyProgressiveAwardFooterInfo(bool, std::string&, std::string&,
   std::string&) */

void __thiscall
PinataStyleChooser::GetPartyProgressiveAwardFooterInfo
          (PinataStyleChooser *this,bool param_1,string *param_2,string *param_3,string *param_4)

{
  long lVar1;
  
  lVar1 = GetEventProperties();
  if (lVar1 == 0) {
    std::string::append(param_2,"",(size_t)param_2);
    std::string::append(param_3,"",(size_t)param_2);
    std::string::append(param_4,"",(size_t)param_2);
    return;
  }
  if (param_1) {
    thunk_FUN_05475e00(param_2,lVar1 + 0x108);
    thunk_FUN_05475e00(param_3,lVar1 + 0x110);
    thunk_FUN_05475e00(param_4,lVar1 + 0x118);
    return;
  }
  thunk_FUN_05475e00(param_2,lVar1 + 0x128);
  thunk_FUN_05475e00(param_3,lVar1 + 0x130);
  thunk_FUN_05475e00(param_4,lVar1 + 0x138);
  return;
}


/* PinataStyleChooser::GetPartyOpenAwardsHeaderInfo(std::string&, std::string&, std::string&) */

void __thiscall
PinataStyleChooser::GetPartyOpenAwardsHeaderInfo
          (PinataStyleChooser *this,string *param_1,string *param_2,string *param_3)

{
  long lVar1;
  string *__n;
  
  __n = param_2;
  lVar1 = GetEventProperties();
  if (lVar1 != 0) {
    thunk_FUN_05475e00(param_1,lVar1 + 0x158);
    thunk_FUN_05475e00(param_2,lVar1 + 0x160);
    thunk_FUN_05475e00(param_3,lVar1 + 0x168);
    return;
  }
  std::string::append(param_1,"IMAGE_UI_LEVELOFTHEDAY_INSTRUCTIONAL_BANNER_3SLICE",(size_t)__n);
  std::string::append(param_2,"[LOD_OPEN_REWARDS_HEADER]",(size_t)__n);
  std::string::append(param_3,"[LOD_OPEN_REWARDS_SUBHEADER]",(size_t)__n);
  return;
}


/* PinataStyleChooser::GetPartyOpenAwardsFooterInfo(std::string&, std::string&, std::string&) */

void __thiscall
PinataStyleChooser::GetPartyOpenAwardsFooterInfo
          (PinataStyleChooser *this,string *param_1,string *param_2,string *param_3)

{
  long lVar1;
  string *__n;
  
  __n = param_2;
  lVar1 = GetEventProperties();
  if (lVar1 != 0) {
    thunk_FUN_05475e00(param_1,lVar1 + 0x178);
    thunk_FUN_05475e00(param_2,lVar1 + 0x180);
    thunk_FUN_05475e00(param_3,lVar1 + 0x188);
    return;
  }
  std::string::append(param_1,"",(size_t)__n);
  std::string::append(param_2,"",(size_t)__n);
  std::string::append(param_3,"",(size_t)__n);
  return;
}


/* PinataStyleChooser::isScaledBigPinata() */

bool PinataStyleChooser::isScaledBigPinata(void)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = GetEventProperties();
  bVar1 = false;
  if (lVar2 != 0) {
    bVar1 = *(float *)(lVar2 + 0x40) != 0.0;
  }
  return bVar1;
}


/* PinataStyleChooser::calculateScaledBigPinataRect(Sexy::Widget*, Sexy::PopAnim*) */

void PinataStyleChooser::calculateScaledBigPinataRect(Widget *param_1,PopAnim *param_2)

{
  long lVar1;
  long in_x2;
  int iVar2;
  int iVar3;
  Insets *in_x8;
  float fVar4;
  
  lVar1 = GetEventProperties();
  fVar4 = *(float *)(in_x2 + 0x28) * *(float *)(lVar1 + 0x40);
  iVar2 = (int)((float)*(int *)(in_x2 + 0x3c) * fVar4);
  iVar3 = (int)((float)*(int *)(in_x2 + 0x40) * fVar4);
  Sexy::Insets::Insets
            (in_x8,(*(int *)(param_2 + 0x50) - iVar2) / 2,(*(int *)(param_2 + 0x54) - iVar3) / 2,
             iVar2,iVar3);
  return;
}


/* PinataStyleChooser::CalculateBigPinataRect(Sexy::Widget*, Sexy::Widget*, Sexy::PopAnim*) */

void __thiscall
PinataStyleChooser::CalculateBigPinataRect
          (PinataStyleChooser *this,Widget *param_1,Widget *param_2,PopAnim *param_3)

{
  char cVar1;
  Insets *in_x8;
  
  cVar1 = isScaledBigPinata();
  if (cVar1 == '\0') {
    Sexy::Insets::Insets
              (in_x8,*(int *)(param_1 + 0x48),*(int *)(param_1 + 0x4c),*(int *)(param_2 + 0x50),
               *(int *)(param_2 + 0x54));
    return;
  }
  calculateScaledBigPinataRect((Widget *)this,(PopAnim *)param_2);
  return;
}


/* PinataStyleChooser::GetPinataPartyWorldBannerTextColor() */

void __thiscall PinataStyleChooser::GetPinataPartyWorldBannerTextColor(PinataStyleChooser *this)

{
  long lVar1;
  Insets *in_x8;
  
  lVar1 = GetEventProperties();
  if (lVar1 != 0) {
    Sexy::Insets::Insets(in_x8,(Insets *)(lVar1 + 0x68));
    return;
  }
  Sexy::Insets::Insets(in_x8,(Insets *)&DAT_06b745a8);
  return;
}


/* PinataStyleChooser::GetProgressiveAwardHeaderTextColor() */

void __thiscall PinataStyleChooser::GetProgressiveAwardHeaderTextColor(PinataStyleChooser *this)

{
  Insets *in_x8;
  
  GetEventProperties();
  Sexy::Insets::Insets(in_x8,(Insets *)&DAT_06b745a8);
  return;
}


/* PinataStyleChooser::GetProgressiveAwardFooterTextColor() */

void __thiscall PinataStyleChooser::GetProgressiveAwardFooterTextColor(PinataStyleChooser *this)

{
  Insets *in_x8;
  
  GetEventProperties();
  Sexy::Insets::Insets(in_x8,(Insets *)&DAT_06b74480);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataStyleChooser::GetBannerProgressPinataImage() */

void PinataStyleChooser::GetBannerProgressPinataImage(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = ___stack_chk_guard;
  if (((DAT_06b745b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b745b8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b744a0,"IMAGE_UI_HUD_WORLDMAP_PROGRESS_PINATA_SM");
    __cxa_guard_release(&DAT_06b745b8);
    __cxa_atexit(std::string::~string,&DAT_06b744a0,&DAT_06a88000);
    nop();
  }
  lVar3 = GetEventProperties();
  if (lVar3 == 0) {
    puVar4 = &DAT_06b744a0;
  }
  else {
    puVar4 = (undefined *)(lVar3 + 0x80);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataStyleChooser::GetBannerProgressMegaPinataImage() */

void PinataStyleChooser::GetBannerProgressMegaPinataImage(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = ___stack_chk_guard;
  if (((DAT_06b74470 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b74470), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b74578,"IMAGE_UI_HUD_WORLDMAP_PROGRESS_MEGAPINATA_SM");
    __cxa_guard_release(&DAT_06b74470);
    __cxa_atexit(std::string::~string,&DAT_06b74578,&DAT_06a88000);
    nop();
  }
  lVar3 = GetEventProperties();
  if (lVar3 == 0) {
    puVar4 = &DAT_06b74578;
  }
  else {
    puVar4 = (undefined *)(lVar3 + 0x88);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataStyleChooser::GetHolidayName() const */

void __thiscall PinataStyleChooser::GetHolidayName(PinataStyleChooser *this)

{
  long lVar1;
  long lVar2;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  lVar2 = GetEventProperties();
  if (lVar2 == 0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    FUN_05475d88();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PinataStyleChooser::UpdateLevelImagePrefix(std::string) const */

undefined8
PinataStyleChooser::UpdateLevelImagePrefix(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  
  cVar1 = HasHolidayLevelBackground();
  if (cVar1 != '\0') {
    lVar2 = GetEventProperties();
    FUN_05475d88(param_1,lVar2 + 0x98);
    return param_1;
  }
  FUN_05474148(param_1,param_3);
  return param_1;
}


/* PinataStyleChooser::UpdateLevelMowerPopanim(std::string) const */

undefined8
PinataStyleChooser::UpdateLevelMowerPopanim
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  
  cVar1 = HasHolidayMowerSwap();
  if (cVar1 != '\0') {
    lVar2 = GetEventProperties();
    FUN_05475d88(param_1,lVar2 + 0xa8);
    return param_1;
  }
  FUN_05474148(param_1,param_3);
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataStyleChooser::GetZombieHolidaySwapForType(std::string const&) */

void __thiscall
PinataStyleChooser::GetZombieHolidaySwapForType(PinataStyleChooser *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  string *psVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06b74550 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b74550), iVar3 != 0)) {
    std::string::string((string *)&DAT_06b74590,"");
    __cxa_guard_release(&DAT_06b74550);
    __cxa_atexit(std::string::~string,&DAT_06b74590,&DAT_06a88000);
    nop();
  }
  lVar4 = GetEventProperties();
  if (lVar4 != 0) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(lVar4 + 0x198));
    if (cVar1 != '\0') {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar4 + 0x198));
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(lVar4 + 0x10));
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar4 + 0x10));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar2) {
        psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        cVar1 = std::operator==(param_1,psVar5);
        if (cVar1 != '\0') {
          psVar5 = psVar5 + 8;
          goto LAB_049b4a4c;
        }
        std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                  ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
      }
    }
  }
  psVar5 = (string *)&DAT_06b74590;
LAB_049b4a4c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(psVar5);
}


/* PinataStyleChooser::UpdateLevelBackgroundResources(std::vector<std::string,
   std::allocator<std::string > >&, std::string) const */

void __thiscall
PinataStyleChooser::UpdateLevelBackgroundResources
          (undefined8 param_1_00,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_1,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar1 = HasHolidayLevelBackground();
  if (cVar1 != '\0') {
    lVar2 = GetEventProperties();
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(param_1);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(param_1);
    std::
    replace<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
              (uVar3,uVar4,param_3,lVar2 + 0x90);
  }
  return;
}


/* PinataStyleChooser::UpdateLevelMowerResources(std::vector<std::string, std::allocator<std::string
   > >&, std::string) const */

void __thiscall
PinataStyleChooser::UpdateLevelMowerResources
          (undefined8 param_1_00,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_1,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar1 = HasHolidayMowerSwap();
  if (cVar1 != '\0') {
    lVar2 = GetEventProperties();
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(param_1);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(param_1);
    std::
    replace<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
              (uVar3,uVar4,param_3,lVar2 + 0xa0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataStyleChooser::GetRegularPinataArt() */

void PinataStyleChooser::GetRegularPinataArt(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = GetEventProperties();
  std::string::string(asStack_18,"POPANIM_UI_LEVELOFTHEDAY_PRIZE_PINATA");
  nop();
  if ((lVar3 != 0) &&
     (cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                        ((vector<std::string,std::allocator<std::string>> *)(lVar3 + 0x18)),
     cVar1 == '\0')) {
    iVar2 = FUN_049b3718(*(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x20));
    iVar2 = Sexy::Rand(iVar2);
    uVar4 = FUN_049b3724(*(undefined8 *)(lVar3 + 0x18),(long)iVar2);
    thunk_FUN_05475e00(asStack_18,uVar4);
  }
  GetPAMByName(asStack_18);
  uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataStyleChooser::GetCurrentBannerData() */

void PinataStyleChooser::GetCurrentBannerData(void)

{
  bool bVar1;
  long lVar2;
  LevelOfTheDaySystem *this;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = GetEventProperties();
  this = (LevelOfTheDaySystem *)Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
  local_20 = LevelOfTheDaySystem::GetCurrentSchedule(this);
  if ((local_20 != 0) && (lVar2 != 0)) {
    uVar3 = FUN_049b4864(*(undefined8 *)(lVar2 + 0x50));
    uVar4 = FUN_049b48b4(*(undefined8 *)(lVar2 + 0x58));
    local_18 = FUN_049b4eb8(uVar3,uVar4,&local_20);
    local_10 = FUN_049b48b4(*(undefined8 *)(lVar2 + 0x58));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (bVar1) {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      goto LAB_049b4f80;
    }
  }
  puVar5 = &DAT_06b744d8;
LAB_049b4f80:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataStyleChooser::PrepareLODDisplayCommon(Sexy::RtWeakPtr<Sexy::Image>&,
   Sexy::RtWeakPtr<Sexy::Image>&, PinataStyleChooser::EventBackgroundDraw&,
   Sexy::RtWeakPtr<Sexy::Image>&, Sexy::RtWeakPtr<Sexy::Image>&, std::string&, std::string&) */

void __thiscall
PinataStyleChooser::PrepareLODDisplayCommon
          (PinataStyleChooser *this,RtWeakPtr *param_1,RtWeakPtr *param_2,
          EventBackgroundDraw *param_3,RtWeakPtr *param_4,RtWeakPtr *param_5,string *param_6,
          string *param_7)

{
  string *psVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = GetCurrentBannerData();
  LawnApp::GetUIImageFromStringId(gLawnApp);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)param_1,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  LawnApp::GetUIImageFromStringId(gLawnApp);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)param_2,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  psVar1 = gLawnApp;
  *(undefined4 *)param_3 = *(undefined4 *)(lVar2 + 0x18);
  LawnApp::GetUIImageFromStringId(psVar1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)param_4,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  LawnApp::GetUIImageFromStringId(gLawnApp);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)param_5,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  thunk_FUN_05475e00(param_6,lVar2 + 0x30);
  thunk_FUN_05475e00(param_7,lVar2 + 0x38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataStyleChooser::PrepareLODDisplayUpcoming(Sexy::RtWeakPtr<Sexy::Image>&,
   Sexy::RtWeakPtr<Sexy::Image>&, PinataStyleChooser::EventBackgroundDraw&,
   Sexy::RtWeakPtr<Sexy::Image>&, Sexy::RtWeakPtr<Sexy::Image>&, std::string&, std::string&) */

void __thiscall
PinataStyleChooser::PrepareLODDisplayUpcoming
          (PinataStyleChooser *this,RtWeakPtr *param_1,RtWeakPtr *param_2,
          EventBackgroundDraw *param_3,RtWeakPtr *param_4,RtWeakPtr *param_5,string *param_6,
          string *param_7)

{
  string *psVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = GetCurrentBannerData();
  LawnApp::GetUIImageFromStringId(gLawnApp);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)param_1,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  LawnApp::GetUIImageFromStringId(gLawnApp);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)param_2,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  psVar1 = gLawnApp;
  *(undefined4 *)param_3 = *(undefined4 *)(lVar2 + 0x50);
  LawnApp::GetUIImageFromStringId(psVar1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)param_4,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  LawnApp::GetUIImageFromStringId(gLawnApp);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)param_5,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  thunk_FUN_05475e00(param_6,lVar2 + 0x68);
  thunk_FUN_05475e00(param_7,lVar2 + 0x70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataStyleChooser::SpawnEffectFromTop(Sexy::Widget*, int, int) */

void __thiscall
PinataStyleChooser::SpawnEffectFromTop
          (PinataStyleChooser *this,Widget *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  PopAnimRigWidget *this_00;
  PopAnim *pPVar6;
  RtClass *pRVar7;
  PopAnimRig *this_01;
  char *pcVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  Insets aIStack_60 [16];
  char *local_50 [3];
  DummyInit aDStack_38 [8];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [28];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = GetEventProperties();
  if (lVar5 != 0) {
    cVar1 = FUN_0547419c((string *)(lVar5 + 0x78));
    if (cVar1 == '\0') {
      local_50[0] = "short";
      local_50[1] = "medium";
      local_50[2] = "long";
      Sexy::Insets::Insets(aIStack_60,0,0,*(int *)(param_1 + 0x50),*(int *)(param_1 + 0x54));
      this_00 = ::operator_new(0xf0);
      PopAnimRigWidget::PopAnimRigWidget(this_00,(TRect *)aIStack_60,(PopAnimRig *)0x0);
      (**(code **)(*(long *)param_1 + 0x60))(param_1,this_00);
      iVar2 = FUN_049b373c(param_2);
      if (iVar2 < *(int *)(param_1 + 0x50)) {
        iVar4 = -1;
        do {
          do {
            iVar3 = Sexy::Rand(3);
          } while (iVar4 == iVar3);
          GetUIResource<Sexy::PopAnim>((string *)(lVar5 + 0x78));
          pPVar6 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
          pRVar7 = (RtClass *)PopAnimRig::StaticGetClass();
          this_01 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable(pPVar6,pRVar7);
          std::string::string((string *)aIStack_60,local_50[iVar3]);
          Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
          PopAnimRig::PlayAndStop(this_01,aIStack_60,0,aDStack_38);
          std::string::~string((string *)aIStack_60);
          nop();
          Sexy::SexyTransform2D::SexyTransform2D((SexyTransform2D *)aDStack_38);
          FUN_049b372c((float)iVar2,auStack_30,auStack_24);
          PopAnimRig::SetRenderTransform(this_01,(SexyTransform2D *)aDStack_38);
          PopAnimRigWidget::AddRig(this_00,this_01);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
          iVar4 = FUN_049b373c(param_3);
          iVar2 = iVar2 + iVar4;
          iVar4 = iVar3;
        } while (iVar2 < *(int *)(param_1 + 0x50));
      }
      pcVar8 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar8,"Play_UI_LOD_Confetti");
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PinataStyleChooser::PlaySwitchAudio() */

void PinataStyleChooser::PlaySwitchAudio(void)

{
  char cVar1;
  long lVar2;
  string *psVar3;
  
  lVar2 = GetEventProperties();
  if (lVar2 != 0) {
    cVar1 = FUN_0547419c((void *)(lVar2 + 0xc0));
    if (cVar1 == '\0') {
      psVar3 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(psVar3,(void *)(lVar2 + 0xc0));
      return;
    }
  }
  return;
}


/* PinataStyleChooser::UpdateLevelBackgroundResources(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&, std::string) const */

void PinataStyleChooser::UpdateLevelBackgroundResources(undefined8 param_1,string *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  cVar1 = HasHolidayLevelBackground();
  if (cVar1 != '\0') {
    lVar2 = GetEventProperties();
    lVar3 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::erase(param_2)
    ;
    if (lVar3 != 0) {
      std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
                ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_2,
                 (string *)(lVar2 + 0x90));
      return;
    }
  }
  return;
}


/* PinataStyleChooser::UpdateLevelMowerResources(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&, std::string) const */

void PinataStyleChooser::UpdateLevelMowerResources(undefined8 param_1,string *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  cVar1 = HasHolidayMowerSwap();
  if (cVar1 != '\0') {
    lVar2 = GetEventProperties();
    lVar3 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::erase(param_2)
    ;
    if (lVar3 != 0) {
      std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
                ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_2,
                 (string *)(lVar2 + 0xa0));
      return;
    }
  }
  return;
}

