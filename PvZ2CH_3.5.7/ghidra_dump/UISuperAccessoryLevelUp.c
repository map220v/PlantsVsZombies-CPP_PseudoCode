// Class: UISuperAccessoryLevelUp


/* UISuperAccessoryLevelUp::~UISuperAccessoryLevelUp() */

void __thiscall UISuperAccessoryLevelUp::~UISuperAccessoryLevelUp(UISuperAccessoryLevelUp *this)

{
  *(undefined ***)this = &PTR_GetClass_06914a10;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06914d38;
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UISuperAccessoryLevelUp::~UISuperAccessoryLevelUp() */

void __thiscall UISuperAccessoryLevelUp::~UISuperAccessoryLevelUp(UISuperAccessoryLevelUp *this)

{
  ~UISuperAccessoryLevelUp(this);
  AK::FreeHook(this);
  return;
}


/* UISuperAccessoryLevelUp::UISuperAccessoryLevelUp() */

void __thiscall UISuperAccessoryLevelUp::UISuperAccessoryLevelUp(UISuperAccessoryLevelUp *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_06914a10;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06914d38;
  FUN_05476574(this + 0xe8);
  *(undefined4 *)(this + 0xf0) = 0;
  return;
}


/* UISuperAccessoryLevelUp::ButtonDepress(int) */

UISuperAccessoryLevelUp * __thiscall
UISuperAccessoryLevelUp::ButtonDepress(UISuperAccessoryLevelUp *this,int param_1)

{
  PlantAccessoryUI *this_00;
  UISuperAccessoryLevelUp *pUVar1;
  
  if ((param_1 == 0x73) &&
     (this_00 = (PlantAccessoryUI *)LawnApp::getPlantAccessoryUI(gLawnApp),
     this = (UISuperAccessoryLevelUp *)0x0, this_00 != (PlantAccessoryUI *)0x0)) {
    pUVar1 = (UISuperAccessoryLevelUp *)PlantAccessoryUI::CloseSteadySuccessSuperPacket(this_00);
    return pUVar1;
  }
  return this;
}


/* non-virtual thunk to UISuperAccessoryLevelUp::ButtonDepress(int) */

void __thiscall UISuperAccessoryLevelUp::ButtonDepress(UISuperAccessoryLevelUp *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISuperAccessoryLevelUp::Draw(Sexy::Graphics*) */

void __thiscall UISuperAccessoryLevelUp::Draw(UISuperAccessoryLevelUp *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  Image *pIVar8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_04950334(200);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_04950334(0x78);
  iVar2 = *(int *)(this + 0x54);
  iVar5 = FUN_04950334(400);
  iVar6 = FUN_04950334(0xf0);
  Sexy::Insets::Insets(aIStack_18,iVar1 / 2 - iVar3,iVar2 / 2 - iVar4,iVar5,iVar6);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71100);
  Draw3SliceImage(param_1,aIStack_18,uVar7);
  if (*(long *)(this + 0xe0) != 0) {
    iVar3 = FUN_04950334(0x32);
    iVar1 = *(int *)(this + 0x50);
    iVar4 = FUN_04950334(0x3c);
    iVar2 = *(int *)(this + 0x54);
    iVar5 = FUN_04950334(100);
    Sexy::Insets::Insets(aIStack_18,iVar1 / 2 - iVar3,iVar2 / 2 - iVar4,iVar5,iVar5);
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xe0));
  }
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  iVar3 = FUN_04950334(0x50);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_04950334(0x6e);
  iVar2 = *(int *)(this + 0x54);
  iVar5 = FUN_04950334(0xa0);
  TodStringTranslate(L"[ACCESSORY_STEADY_SUCCESS_TITLE]");
  Sexy::Color::Color((Color *)aIStack_18,1);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)(iVar1 / 2 - iVar3),(float)(iVar2 / 2 - iVar4),(float)iVar5,
             uVar7,param_1,aIStack_28,1,aIStack_18,0);
  FUN_05476c50(aIStack_28);
  iVar1 = *(int *)(this + 0xf0);
  if (iVar1 == 1) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71658;
  }
  else if (iVar1 == 2) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70fd8;
  }
  else if (iVar1 == 3) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b712e0;
  }
  else if (iVar1 == 4) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71088;
  }
  else {
    if (iVar1 != 5) goto LAB_04951a2c;
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b717d0;
  }
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  iVar3 = FUN_04950334(0x37);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_04950334(0x41);
  iVar2 = *(int *)(this + 0x54);
  iVar5 = FUN_04950334(0x14);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar1 / 2 - iVar3,iVar2 / 2 - iVar4,iVar5,iVar5);
LAB_04951a2c:
  iVar3 = FUN_04950334(200);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_04950334(0x32);
  iVar2 = *(int *)(this + 0x54);
  iVar5 = FUN_04950334(400);
  iVar6 = FUN_04950334(0x2c);
  Sexy::Insets::Insets(aIStack_28,iVar1 / 2 - iVar3,iVar4 + iVar2 / 2,iVar5,iVar6);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20_HardShadow);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xe8,aIStack_28,uVar7,aIStack_18,2,1);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISuperAccessoryLevelUp::init(int) */

void __thiscall UISuperAccessoryLevelUp::init(UISuperAccessoryLevelUp *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector *pvVar7;
  ulong uVar8;
  PVZ2UIButton *this_02;
  PlantAccessoryInfo *pPVar9;
  PlantAccessoryMgr *this_03;
  ResourceInfo *pRVar10;
  string *extraout_x1;
  ulong uVar11;
  wstring awStack_b0 [8];
  wstring awStack_a8 [8];
  wstring awStack_a0 [8];
  RtWeakPtr aRStack_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  wstring awStack_78 [8];
  string asStack_70 [48];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  this[0x59] = (UISuperAccessoryLevelUp)0x0;
  uVar11 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  pvVar7 = (vector *)PlayerInfo::GetPlantAccessoryInfos(this_01);
  std::vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>>::vector
            ((vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>> *)&local_90,pvVar7);
  uVar8 = FUN_0494fc70(local_90,local_88);
  if (uVar11 < uVar8) {
    pPVar9 = (PlantAccessoryInfo *)FUN_0494fc14(local_90,uVar11);
    PlantAccessoryInfo::PlantAccessoryInfo((PlantAccessoryInfo *)awStack_78,pPVar9);
    this_03 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
    PlantAccessoryMgr::GetAccessoryUIInfo(this_03,asStack_70);
    LawnApp::GetUIImageFromStringId(gLawnApp);
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_98);
    *(ResourceInfo **)(this + 0xe0) = pRVar10;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
    uVar5 = PlayerInfo::GetPlantAccessoryLevelById(this_01,uVar11);
    *(undefined4 *)(this + 0xf0) = uVar5;
    TodStringTranslate(L"[ACCESSORY_STEADY_SUCCESS_INFO]");
    TodReplaceNumberString((wstring *)aRStack_98,L"{LEVEL}",*(int *)(this + 0xf0));
    FUN_05476c50(aRStack_98);
    Sexy::ToSexyString((Sexy *)aPStack_40,extraout_x1);
    TodStringTranslate(awStack_a8);
    TodReplaceString(awStack_b0,L"{NAME}",awStack_a0);
    FUN_054766c8(this + 0xe8,aRStack_98);
    FUN_05476c50(aRStack_98);
    FUN_05476c50(awStack_a0);
    FUN_05476c50(awStack_a8);
    FUN_05476c50(awStack_b0);
    TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aPStack_40);
    PakRecord::~PakRecord((PakRecord *)awStack_78);
  }
  FUN_05478178(awStack_78,L"[SALES_REWARD_BOX_CLOSE]",aRStack_98);
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_02 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_02,0x73,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b71ca0,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b70f80,3);
  PVZ2UIButton::SetDialogStates(this_02,(PVZ2UIImage *)awStack_78,aPStack_40);
  iVar3 = FUN_04950334(0x3c);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_04950334(0x5f);
  iVar2 = *(int *)(this + 0x54);
  uVar5 = FUN_04950334(0x78);
  uVar6 = FUN_04950334(0x32);
  (**(code **)(*(long *)this_02 + 0x198))(this_02,iVar1 / 2 - iVar3,iVar4 + iVar2 / 2,uVar5,uVar6);
  (**(code **)(*(long *)this + 0x60))(this,this_02);
  std::vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>>::~vector
            ((vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>> *)&local_90);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

