// Class: WorldMap_DangerRoomSpecialOfferButton


/* WorldMap_DangerRoomSpecialOfferButton::~WorldMap_DangerRoomSpecialOfferButton() */

void __thiscall
WorldMap_DangerRoomSpecialOfferButton::~WorldMap_DangerRoomSpecialOfferButton
          (WorldMap_DangerRoomSpecialOfferButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0686a540;
  *(undefined ***)(this + 0x198) = &PTR__WorldMap_DangerRoomSpecialOfferButton_0686a898;
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to
   WorldMap_DangerRoomSpecialOfferButton::~WorldMap_DangerRoomSpecialOfferButton() */

void __thiscall
WorldMap_DangerRoomSpecialOfferButton::~WorldMap_DangerRoomSpecialOfferButton
          (WorldMap_DangerRoomSpecialOfferButton *this)

{
  ~WorldMap_DangerRoomSpecialOfferButton(this + -0x198);
  return;
}


/* WorldMap_DangerRoomSpecialOfferButton::~WorldMap_DangerRoomSpecialOfferButton() */

void __thiscall
WorldMap_DangerRoomSpecialOfferButton::~WorldMap_DangerRoomSpecialOfferButton
          (WorldMap_DangerRoomSpecialOfferButton *this)

{
  ~WorldMap_DangerRoomSpecialOfferButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   WorldMap_DangerRoomSpecialOfferButton::~WorldMap_DangerRoomSpecialOfferButton() */

void __thiscall
WorldMap_DangerRoomSpecialOfferButton::~WorldMap_DangerRoomSpecialOfferButton
          (WorldMap_DangerRoomSpecialOfferButton *this)

{
  ~WorldMap_DangerRoomSpecialOfferButton(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_DangerRoomSpecialOfferButton::WorldMap_DangerRoomSpecialOfferButton(int,
   Sexy::ButtonListener*) */

void __thiscall
WorldMap_DangerRoomSpecialOfferButton::WorldMap_DangerRoomSpecialOfferButton
          (WorldMap_DangerRoomSpecialOfferButton *this,int param_1,ButtonListener *param_2)

{
  bool bVar1;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  PVZ2UIButton::PVZ2UIButton((PVZ2UIButton *)this,param_1,param_2,awStack_20,aCStack_18);
  FUN_05476c50(awStack_20);
  nop();
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0686a540;
  *(undefined ***)(this + 0x198) = &PTR__WorldMap_DangerRoomSpecialOfferButton_0686a898;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_DangerRoomSpecialOfferButton::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_DangerRoomSpecialOfferButton::Draw
          (WorldMap_DangerRoomSpecialOfferButton *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  ProfileMgr *this_00;
  long lVar3;
  PrimeTypeface *pPVar4;
  int extraout_w1;
  GraphicsAutoState aGStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  Insets aIStack_40 [16];
  Color aCStack_30 [24];
  long local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::Draw((PVZ2UIButton *)this,param_1);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_58,param_1);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  lVar3 = LawnApp::GetRealServerTime(gLawnApp);
  FUN_05476574(auStack_50);
  PlayerInfo::GetDangerRoomSpecialOfferSaveData();
  if (local_18 - lVar3 < 1) {
    TodStringTranslate(L"[RECHARGEBUNDLE_REFRESH_BUNDLE]");
  }
  else {
    StringHelper::ToTimeString((StringHelper *)0x3,(float)(local_18 - lVar3),extraout_w1);
  }
  FUN_054766c8(auStack_50,aCStack_30);
  FUN_05476c50(aCStack_30);
  pPVar4 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  iVar1 = FUN_045b279c(0x5a);
  iVar2 = FUN_045b279c(0x1e);
  Sexy::Insets::Insets(aIStack_40,0,iVar1,*(int *)(this + 0x50),iVar2);
  FUN_05477b24(auStack_48,auStack_50);
  Sexy::Color::Color(aCStack_30,1);
  Sexy::PrimeTypeface::DrawString_Paragraph(pPVar4,param_1,aIStack_40,auStack_48,1,1,aCStack_30,0);
  FUN_05476c50(auStack_48);
  FUN_05476c50(auStack_50);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

