// Class: WorldMap_RechargeBundleButtonExtra


/* WorldMap_RechargeBundleButtonExtra::~WorldMap_RechargeBundleButtonExtra() */

void __thiscall
WorldMap_RechargeBundleButtonExtra::~WorldMap_RechargeBundleButtonExtra
          (WorldMap_RechargeBundleButtonExtra *this)

{
  *(undefined ***)this = &PTR_GetClass_068676d0;
  *(undefined ***)(this + 0x198) = &PTR__WorldMap_RechargeBundleButtonExtra_06867a28;
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to WorldMap_RechargeBundleButtonExtra::~WorldMap_RechargeBundleButtonExtra() */

void __thiscall
WorldMap_RechargeBundleButtonExtra::~WorldMap_RechargeBundleButtonExtra
          (WorldMap_RechargeBundleButtonExtra *this)

{
  ~WorldMap_RechargeBundleButtonExtra(this + -0x198);
  return;
}


/* WorldMap_RechargeBundleButtonExtra::~WorldMap_RechargeBundleButtonExtra() */

void __thiscall
WorldMap_RechargeBundleButtonExtra::~WorldMap_RechargeBundleButtonExtra
          (WorldMap_RechargeBundleButtonExtra *this)

{
  ~WorldMap_RechargeBundleButtonExtra(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_RechargeBundleButtonExtra::~WorldMap_RechargeBundleButtonExtra() */

void __thiscall
WorldMap_RechargeBundleButtonExtra::~WorldMap_RechargeBundleButtonExtra
          (WorldMap_RechargeBundleButtonExtra *this)

{
  ~WorldMap_RechargeBundleButtonExtra(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_RechargeBundleButtonExtra::WorldMap_RechargeBundleButtonExtra(int,
   Sexy::ButtonListener*) */

void __thiscall
WorldMap_RechargeBundleButtonExtra::WorldMap_RechargeBundleButtonExtra
          (WorldMap_RechargeBundleButtonExtra *this,int param_1,ButtonListener *param_2)

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
  *(undefined ***)this = &PTR_GetClass_068676d0;
  *(undefined ***)(this + 0x198) = &PTR__WorldMap_RechargeBundleButtonExtra_06867a28;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_RechargeBundleButtonExtra::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_RechargeBundleButtonExtra::Draw(WorldMap_RechargeBundleButtonExtra *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar4;
  vector *pvVar5;
  long lVar6;
  PrimeTypeface *pPVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [12];
  GraphicsAutoState aGStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  Insets aIStack_40 [16];
  Color aCStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::Draw((PVZ2UIButton *)this,param_1);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_58,param_1);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  lVar4 = LawnApp::GetRealServerTime(gLawnApp);
  pvVar5 = (vector *)PlayerInfo::GetDisplayingBundleList(this_01);
  std::vector<BundleDisplay,std::allocator<BundleDisplay>>::vector
            ((vector<BundleDisplay,std::allocator<BundleDisplay>> *)&local_20,pvVar5);
  FUN_05476574(auStack_50);
  lVar6 = FUN_045a9280(local_20,local_18);
  if (lVar6 != 0) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      while ((auVar11 = FUN_045a9294(local_20,lVar9), 0 < *(int *)(auVar11._0_8_ + 0x10) &&
             ((lVar8 = *(long *)(auVar11._0_8_ + 8), lVar8 < lVar10 || (lVar10 == 0))))) {
        lVar9 = lVar9 + 1;
        lVar10 = lVar8;
        if (lVar9 == lVar6) goto LAB_045a9fb0;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != lVar6);
LAB_045a9fb0:
    if (0 < lVar10 - lVar4) {
      StringHelper::ToTimeString((StringHelper *)0x3,(float)(lVar10 - lVar4),auVar11._8_4_);
      goto LAB_045a9fd4;
    }
  }
  TodStringTranslate(L"[RECHARGEBUNDLE_REFRESH_BUNDLE]");
LAB_045a9fd4:
  FUN_054766c8(auStack_50,aCStack_30);
  FUN_05476c50(aCStack_30);
  iVar2 = FUN_045a950c(0x19);
  iVar1 = *(int *)(this + 0x54);
  pPVar7 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  iVar3 = FUN_045a950c(0x1e);
  Sexy::Insets::Insets(aIStack_40,0,iVar1 - iVar2,*(int *)(this + 0x50),iVar3);
  FUN_05477b24(auStack_48,auStack_50);
  Sexy::Color::Color(aCStack_30,1);
  Sexy::PrimeTypeface::DrawString_Paragraph(pPVar7,param_1,aIStack_40,auStack_48,1,1,aCStack_30,0);
  FUN_05476c50(auStack_48);
  FUN_05476c50(auStack_50);
  std::vector<BundleDisplay,std::allocator<BundleDisplay>>::~vector
            ((vector<BundleDisplay,std::allocator<BundleDisplay>> *)&local_20);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

