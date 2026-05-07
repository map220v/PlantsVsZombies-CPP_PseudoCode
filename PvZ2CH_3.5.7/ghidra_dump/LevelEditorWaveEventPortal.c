// Class: LevelEditorWaveEventPortal


/* LevelEditorWaveEventPortal::GetWorldIndex(std::string) */

ulong __thiscall
LevelEditorWaveEventPortal::GetWorldIndex(LevelEditorWaveEventPortal *this,string *param_2)

{
  char cVar1;
  ulong uVar2;
  string *psVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(this + 0x218);
  uVar2 = FUN_04b53500(uVar6,*(undefined8 *)(this + 0x220));
  uVar4 = 0;
  do {
    uVar5 = uVar4 & 0xffffffff;
    if (uVar4 == uVar2) {
      return 0;
    }
    psVar3 = (string *)FUN_04b5350c(uVar6,uVar4);
    cVar1 = std::operator==(param_2,psVar3);
    uVar4 = uVar4 + 1;
  } while (cVar1 == '\0');
  return uVar5;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEventPortal::ButtonDepress(int) */

void __thiscall
LevelEditorWaveEventPortal::ButtonDepress(LevelEditorWaveEventPortal *this,int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  CustomLevelMgr *pCVar4;
  string *psVar5;
  undefined8 uVar6;
  long *plVar7;
  string asStack_10 [8];
  long local_8;
  int iVar3;
  
  local_8 = ___stack_chk_guard;
  switch(param_1) {
  case 0x7e6:
    iVar3 = *(int *)(this + 0x10c) + -1;
    break;
  case 0x7e7:
    iVar3 = *(int *)(this + 0x10c) + 1;
    break;
  case 0x7e8:
    iVar3 = *(int *)(this + 0x110) + -1;
    goto LAB_04b59b08;
  case 0x7e9:
    iVar3 = *(int *)(this + 0x110) + 1;
LAB_04b59b08:
    uVar2 = ClampInt(iVar3,1,5);
    *(undefined4 *)(this + 0x110) = uVar2;
    pCVar4 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::SetPortalRow(pCVar4,*(int *)(this + 0x108),*(int *)(this + 0x110) + -1);
    goto LAB_04b59ab8;
  case 0x7ea:
    plVar7 = *(long **)(this + 0x200);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x158))(plVar7,*(byte *)((long)plVar7 + 0x6c) ^ 1);
    }
    goto LAB_04b59ab8;
  default:
    if (2999 < param_1) {
      *(int *)(this + 0x114) = param_1 + -3000;
      pCVar4 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
      iVar3 = *(int *)(this + 0x108);
      psVar5 = (string *)FUN_04b5350c(*(undefined8 *)(this + 0x218),(long)*(int *)(this + 0x114));
      bVar1 = std::operator==(psVar5,"cowboy");
      if (bVar1) {
        std::string::string(asStack_10,"west");
        CustomLevelMgr::SetPortalType(pCVar4,iVar3,asStack_10);
        std::string::~string(asStack_10);
        nop();
      }
      else {
        uVar6 = FUN_04b5350c(*(undefined8 *)(this + 0x218),(long)*(int *)(this + 0x114));
        FUN_05475d88(asStack_10,uVar6);
        CustomLevelMgr::SetPortalType(pCVar4,iVar3,asStack_10);
        std::string::~string(asStack_10);
      }
      (**(code **)(**(long **)(this + 0x200) + 0x158))(*(long **)(this + 0x200),0);
    }
    goto LAB_04b59ab8;
  }
  uVar2 = ClampInt(iVar3,1,7);
  *(undefined4 *)(this + 0x10c) = uVar2;
  pCVar4 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::SetPortalColumn(pCVar4,*(int *)(this + 0x108),*(int *)(this + 0x10c) + -1);
LAB_04b59ab8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to LevelEditorWaveEventPortal::ButtonDepress(int) */

void __thiscall
LevelEditorWaveEventPortal::ButtonDepress(LevelEditorWaveEventPortal *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEventPortal::Reload() */

void __thiscall LevelEditorWaveEventPortal::Reload(LevelEditorWaveEventPortal *this)

{
  string *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  CustomLevelMgr *pCVar5;
  undefined8 uVar6;
  string *psVar7;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (string *)(this + 0x118);
  local_8 = ___stack_chk_guard;
  pCVar5 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  iVar3 = CustomLevelMgr::GetPortalColumn(pCVar5,*(int *)(this + 0x108));
  uVar4 = ClampInt(iVar3 + 1,1,7);
  *(undefined4 *)(this + 0x10c) = uVar4;
  pCVar5 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::SetPortalColumn(pCVar5,*(int *)(this + 0x108),*(int *)(this + 0x10c) + -1);
  pCVar5 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  iVar3 = CustomLevelMgr::GetPortalRow(pCVar5,*(int *)(this + 0x108));
  uVar4 = ClampInt(iVar3 + 1,1,5);
  *(undefined4 *)(this + 0x110) = uVar4;
  pCVar5 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::SetPortalRow(pCVar5,*(int *)(this + 0x108),*(int *)(this + 0x110) + -1);
  pCVar5 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  uVar6 = CustomLevelMgr::GetPortalType(pCVar5,*(int *)(this + 0x108));
  thunk_FUN_05475e00(this_00,uVar6);
  pCVar5 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  iVar3 = *(int *)(this + 0x108);
  cVar1 = FUN_0547419c(this_00);
  psVar7 = asStack_10;
  if (cVar1 == '\0') {
    FUN_05475d88(asStack_10,this_00);
    CustomLevelMgr::SetPortalType(pCVar5,iVar3,asStack_10);
    std::string::~string(asStack_10);
  }
  else {
    std::string::string(asStack_10,"egypt");
    CustomLevelMgr::SetPortalType(pCVar5,iVar3,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  bVar2 = std::operator==(this_00,"west");
  if (bVar2) {
    std::string::append(this_00,"cowboy",(size_t)psVar7);
  }
  FUN_05475d88(asStack_10,this_00);
  uVar4 = GetWorldIndex(this,asStack_10);
  *(undefined4 *)(this + 0x114) = uVar4;
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEventPortal::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorWaveEventPortal::Draw(LevelEditorWaveEventPortal *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  Image *pIVar4;
  long lVar5;
  undefined8 *puVar6;
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86360);
  Draw9SliceImage(param_1,aIStack_18,uVar3);
  TodStringTranslate(L"[LEVEL_EDITOR_WAVE_EVENT_PORTAL_TITLE]");
  iVar1 = FUN_04b54f08(5);
  iVar2 = FUN_04b54f08(0x32);
  Sexy::Insets::Insets(aIStack_18,0,iVar1,*(int *)(this + 0x50),iVar2);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  Sexy::Insets::Insets(aIStack_28,0x66,0x37,0,0xff);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar3,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86410);
  Sexy::Graphics::DrawImage
            (param_1,pIVar4,*(int *)(this + 0x170),*(int *)(this + 0x174),*(int *)(this + 0x178),
             *(int *)(this + 0x17c));
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86410);
  Sexy::Graphics::DrawImage
            (param_1,pIVar4,*(int *)(this + 0x1a0),*(int *)(this + 0x1a4),*(int *)(this + 0x1a8),
             *(int *)(this + 0x1ac));
  TodStringTranslate(L"[LEVEL_EDITOR_WAVE_EVENT_PORTAL_BTN_LEFT]");
  Sexy::Insets::Insets
            (aIStack_18,*(int *)(this + 0x1b0),*(int *)(this + 0x1b4),*(int *)(this + 0x1b8),
             *(int *)(this + 0x1bc));
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_28,0x66,0x37,0,0xff);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar3,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x10c));
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b54f08(5);
  Sexy::Insets::Insets
            (aIStack_18,*(int *)(this + 0x1b0),*(int *)(this + 0x174) - iVar1,*(int *)(this + 0x1b8)
             ,*(int *)(this + 0x1bc));
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_28,0x66,0x37,0,0xff);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar3,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  TodStringTranslate(L"[LEVEL_EDITOR_WAVE_EVENT_PORTAL_BTN_RIGHT]");
  Sexy::Insets::Insets
            (aIStack_18,*(int *)(this + 0x1c0),*(int *)(this + 0x1c4),*(int *)(this + 0x1c8),
             *(int *)(this + 0x1cc));
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_28,0x66,0x37,0,0xff);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar3,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x110));
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b54f08(5);
  Sexy::Insets::Insets
            (aIStack_18,*(int *)(this + 0x1c0),*(int *)(this + 0x174) - iVar1,*(int *)(this + 0x1c8)
             ,*(int *)(this + 0x1cc));
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_28,0x66,0x37,0,0xff);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar3,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  TodStringTranslate(L"[LEVEL_EDITOR_WAVE_EVENT_PORTAL_BTN_WORLD]");
  Sexy::Insets::Insets
            (aIStack_18,*(int *)(this + 0x1e0),*(int *)(this + 0x1e4),*(int *)(this + 0x1e8),
             *(int *)(this + 0x1ec));
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_28,0x66,0x37,0,0xff);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar3,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  lVar5 = FUN_04b53528(*(undefined8 *)(this + 0x120),*(undefined8 *)(this + 0x128));
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)FUN_04b53534(*(undefined8 *)(this + 0x138),(long)*(int *)(this + 0x114));
    Sexy::Graphics::DrawImage
              (param_1,(Image *)*puVar6,*(int *)(this + 0x1f0),*(int *)(this + 500),
               *(int *)(this + 0x1f8),*(int *)(this + 0x1fc));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorWaveEventPortal::LevelEditorWaveEventPortal() */

void __thiscall
LevelEditorWaveEventPortal::LevelEditorWaveEventPortal(LevelEditorWaveEventPortal *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06969df0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0696a118;
  Set8BytesTo0(this + 0x118);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x120));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  Sexy::Insets::Insets((Insets *)(this + 0x150));
  Sexy::Insets::Insets((Insets *)(this + 0x160));
  Sexy::Insets::Insets((Insets *)(this + 0x170));
  Sexy::Insets::Insets((Insets *)(this + 0x180));
  Sexy::Insets::Insets((Insets *)(this + 400));
  Sexy::Insets::Insets((Insets *)(this + 0x1a0));
  Sexy::Insets::Insets((Insets *)(this + 0x1b0));
  Sexy::Insets::Insets((Insets *)(this + 0x1c0));
  Sexy::Insets::Insets((Insets *)(this + 0x1d0));
  Sexy::Insets::Insets((Insets *)(this + 0x1e0));
  Sexy::Insets::Insets((Insets *)(this + 0x1f0));
  Sexy::Insets::Insets((Insets *)(this + 0x208));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x218));
  return;
}


/* LevelEditorWaveEventPortal::~LevelEditorWaveEventPortal() */

void __thiscall
LevelEditorWaveEventPortal::~LevelEditorWaveEventPortal(LevelEditorWaveEventPortal *this)

{
  *(undefined ***)this = &PTR_GetClass_06969df0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0696a118;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x218));
  std::vector<Sexy::Image*,std::allocator<Sexy::Image*>>::~vector
            ((vector<Sexy::Image*,std::allocator<Sexy::Image*>> *)(this + 0x138));
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x120));
  std::string::~string((string *)(this + 0x118));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorWaveEventPortal::~LevelEditorWaveEventPortal() */

void __thiscall
LevelEditorWaveEventPortal::~LevelEditorWaveEventPortal(LevelEditorWaveEventPortal *this)

{
  ~LevelEditorWaveEventPortal(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEventPortal::Init(int) */

void __thiscall LevelEditorWaveEventPortal::Init(LevelEditorWaveEventPortal *this,int param_1)

{
  ButtonListener *pBVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  PVZ2UIButton *pPVar12;
  LevelEditorWaveEventPortalPanel *this_00;
  ulong uVar13;
  string *extraout_x1;
  long *plVar14;
  code *pcVar15;
  string *this_01;
  ulong uVar16;
  Sexy aSStack_100 [8];
  string asStack_f8 [8];
  wstring awStack_f0 [8];
  string asStack_e8 [8];
  vector<std::string,std::allocator<std::string>> avStack_e0 [24];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_90;
  undefined8 local_88;
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x108) = param_1;
  this[0x59] = (LevelEditorWaveEventPortal)0x0;
  std::string::string(asStack_58,"egypt");
  std::string::string(asStack_50,"pirate");
  std::string::string(asStack_48,"cowboy");
  std::string::string(asStack_40,"future");
  this_01 = (string *)&local_8;
  std::string::string(asStack_38,"eighties");
  std::string::string(asStack_30,"dark");
  std::string::string(asStack_28,"beach");
  std::string::string(asStack_20,"dino");
  std::string::string(asStack_18,"iceage");
  std::string::string(asStack_10,"lostcity");
  std::vector<std::string,std::allocator<std::string>>::vector
            (avStack_e0,asStack_58,10,(Insets *)&local_90);
  do {
    this_01 = this_01 + -8;
    std::string::~string(this_01);
  } while (this_01 != asStack_58);
  pBVar1 = (ButtonListener *)(this + 0xd8);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x218));
  uVar10 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_e0);
  uVar11 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)avStack_e0);
  std::vector<std::string,std::allocator<std::string>>::
  assign<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,void>
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x218),uVar10,uVar11);
  iVar8 = *(int *)(this + 0x50) / 2;
  iVar2 = FUN_04b54f08(100);
  iVar3 = FUN_04b54f08(0x28);
  iVar4 = FUN_04b54f08(10);
  iVar9 = (iVar3 * -3 + iVar4 * -2 + iVar8) / 2;
  iVar5 = FUN_04b54f08(5);
  *(int *)(this + 0x158) = iVar3;
  iVar5 = iVar5 + iVar2;
  iVar2 = iVar3 + iVar9 + iVar4;
  iVar7 = iVar3 + iVar8 + iVar9 + iVar4;
  *(int *)(this + 0x150) = iVar9;
  *(int *)(this + 0x180) = iVar8 + iVar9;
  *(int *)(this + 0x170) = iVar2;
  *(int *)(this + 0x160) = iVar3 + iVar2 + iVar4;
  *(int *)(this + 0x1a0) = iVar7;
  *(int *)(this + 0x154) = iVar5;
  *(int *)(this + 0x174) = iVar5;
  *(int *)(this + 0x164) = iVar5;
  *(int *)(this + 0x184) = iVar5;
  *(int *)(this + 0x1a4) = iVar5;
  *(int *)(this + 400) = iVar3 + iVar7 + iVar4;
  *(int *)(this + 0x194) = iVar5;
  *(int *)(this + 0x15c) = iVar3;
  *(int *)(this + 0x178) = iVar3;
  *(int *)(this + 0x17c) = iVar3;
  *(int *)(this + 0x168) = iVar3;
  *(int *)(this + 0x16c) = iVar3;
  *(int *)(this + 0x188) = iVar3;
  *(int *)(this + 0x18c) = iVar3;
  *(int *)(this + 0x1a8) = iVar3;
  *(int *)(this + 0x1ac) = iVar3;
  *(int *)(this + 0x198) = iVar3;
  *(int *)(this + 0x19c) = iVar3;
  *(undefined4 *)(this + 0x1b0) = 0;
  uVar6 = FUN_04b54f08(0x32);
  *(int *)(this + 0x1b8) = iVar8;
  *(undefined4 *)(this + 0x1b4) = uVar6;
  uVar6 = FUN_04b54f08(0x32);
  *(int *)(this + 0x1c0) = iVar8;
  *(undefined4 *)(this + 0x1bc) = uVar6;
  uVar6 = FUN_04b54f08(0x32);
  *(int *)(this + 0x1c8) = iVar8;
  *(undefined4 *)(this + 0x1c4) = uVar6;
  uVar6 = FUN_04b54f08(0x32);
  *(undefined4 *)(this + 0x1cc) = uVar6;
  FUN_05478178((Insets *)&local_c8,&DAT_056f11a8,asStack_e8);
  Sexy::Color::Color((Color *)&local_90,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,0x7e6,pBVar1,(wstring *)&local_c8,(Color *)&local_90);
  *(PVZ2UIButton **)(this + 0xe0) = pPVar12;
  FUN_05476c50((Insets *)&local_c8);
  nop();
  pPVar12 = *(PVZ2UIButton **)(this + 0xe0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_c8,&DAT_06b861f0,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_90,&DAT_06b861f0,2);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)&local_c8,(PVZ2UIImage *)&local_90);
  (**(code **)(**(long **)(this + 0xe0) + 0x198))
            (*(long **)(this + 0xe0),*(undefined4 *)(this + 0x150),*(undefined4 *)(this + 0x154),
             *(undefined4 *)(this + 0x158),*(undefined4 *)(this + 0x15c));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  FUN_05478178((Insets *)&local_c8,&DAT_056f11a8,asStack_e8);
  Sexy::Color::Color((Color *)&local_90,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,0x7e7,pBVar1,(wstring *)&local_c8,(Color *)&local_90);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar12;
  FUN_05476c50((Insets *)&local_c8);
  nop();
  pPVar12 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_c8,&DAT_06b86688,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_90,&DAT_06b86688,2);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)&local_c8,(PVZ2UIImage *)&local_90);
  (**(code **)(**(long **)(this + 0xe8) + 0x198))
            (*(long **)(this + 0xe8),*(undefined4 *)(this + 0x160),*(undefined4 *)(this + 0x164),
             *(undefined4 *)(this + 0x168),*(undefined4 *)(this + 0x16c));
  plVar14 = *(long **)(this + 0xe8);
  pcVar15 = *(code **)(*plVar14 + 800);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar15)(plVar14,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  FUN_05478178((Insets *)&local_c8,&DAT_056f11a8,asStack_e8);
  Sexy::Color::Color((Color *)&local_90,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,0x7e8,pBVar1,(wstring *)&local_c8,(Color *)&local_90);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar12;
  FUN_05476c50((Insets *)&local_c8);
  nop();
  pPVar12 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_c8,&DAT_06b861f0,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_90,&DAT_06b861f0,2);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)&local_c8,(PVZ2UIImage *)&local_90);
  (**(code **)(**(long **)(this + 0xf0) + 0x198))
            (*(long **)(this + 0xf0),*(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184),
             *(undefined4 *)(this + 0x188),*(undefined4 *)(this + 0x18c));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  FUN_05478178((Insets *)&local_c8,&DAT_056f11a8,asStack_e8);
  Sexy::Color::Color((Color *)&local_90,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,0x7e9,pBVar1,(wstring *)&local_c8,(Color *)&local_90);
  *(PVZ2UIButton **)(this + 0xf8) = pPVar12;
  FUN_05476c50((Insets *)&local_c8);
  nop();
  pPVar12 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_c8,&DAT_06b86688,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_90,&DAT_06b86688,2);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)&local_c8,(PVZ2UIImage *)&local_90);
  (**(code **)(**(long **)(this + 0xf8) + 0x198))
            (*(long **)(this + 0xf8),*(undefined4 *)(this + 400),*(undefined4 *)(this + 0x194),
             *(undefined4 *)(this + 0x198),*(undefined4 *)(this + 0x19c));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
  iVar7 = FUN_04b54f08(0xb4);
  iVar8 = FUN_04b54f08(0x28);
  iVar2 = (*(int *)(this + 0x50) - iVar7) / 2;
  iVar5 = *(int *)(this + 0x194) + *(int *)(this + 0x19c) + iVar8;
  Sexy::Insets::Insets
            ((Insets *)&local_90,iVar2,*(int *)(this + 0x194) + *(int *)(this + 0x19c),iVar7,iVar8);
  *(undefined8 *)(this + 0x1e0) = local_90;
  *(undefined8 *)(this + 0x1e8) = local_88;
  iVar9 = FUN_04b54f08(0x28);
  iVar3 = FUN_04b54f08(0x50);
  Sexy::Insets::Insets((Insets *)&local_90,iVar9 + iVar2,iVar5,iVar7 - iVar3,iVar8);
  *(undefined8 *)(this + 0x1f8) = local_88;
  *(undefined8 *)(this + 0x1f0) = local_90;
  iVar2 = *(int *)(this + 0x1f8);
  iVar9 = (int)local_90;
  iVar7 = FUN_04b54f08(10);
  iVar8 = FUN_04b54f08(0x1e);
  Sexy::Insets::Insets((Insets *)&local_90,iVar2 + iVar9 + iVar7,iVar5,iVar8,iVar8);
  *(undefined8 *)(this + 0x1d0) = local_90;
  *(undefined8 *)(this + 0x1d8) = local_88;
  Sexy::Insets::Insets((Insets *)&local_90,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  *(undefined8 *)(this + 0x208) = local_90;
  *(undefined8 *)(this + 0x210) = local_88;
  FUN_05478178((Insets *)&local_c8,&DAT_056f11a8,asStack_e8);
  Sexy::Color::Color((Color *)&local_90,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,0x7ea,pBVar1,(wstring *)&local_c8,(Color *)&local_90);
  *(PVZ2UIButton **)(this + 0x100) = pPVar12;
  FUN_05476c50((Insets *)&local_c8);
  nop();
  pPVar12 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_c8,&DAT_06b86020,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_90,&DAT_06b86020,2);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)&local_c8,(PVZ2UIImage *)&local_90);
  (**(code **)(**(long **)(this + 0x100) + 0x198))
            (*(long **)(this + 0x100),*(undefined4 *)(this + 0x1d0),*(undefined4 *)(this + 0x1d4),
             *(undefined4 *)(this + 0x1d8),*(undefined4 *)(this + 0x1dc));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  this_00 = ::operator_new(0xe0);
  LevelEditorWaveEventPortalPanel::LevelEditorWaveEventPortalPanel(this_00);
  *(LevelEditorWaveEventPortalPanel **)(this + 0x200) = this_00;
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,*(undefined4 *)(this + 0x208),*(undefined4 *)(this + 0x20c),
             *(undefined4 *)(this + 0x210),*(undefined4 *)(this + 0x214));
  iVar7 = FUN_04b54f08(0xf);
  iVar8 = FUN_04b54f08(7);
  iVar5 = iVar7 * -2 + *(int *)(this + 0x214) + iVar8 * -7;
  iVar2 = iVar5 + 7;
  if (-1 < iVar5) {
    iVar2 = iVar5;
  }
  iVar5 = ((iVar7 * -2 + *(int *)(this + 0x210)) - iVar8) / 2;
  std::vector<Sexy::Image*,std::allocator<Sexy::Image*>>::clear
            ((vector<Sexy::Image*,std::allocator<Sexy::Image*>> *)(this + 0x138));
  std::vector<std::wstring,std::allocator<std::wstring>>::clear
            ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x120));
  uVar16 = 0;
  while( true ) {
    uVar13 = FUN_04b53500(*(undefined8 *)(this + 0x218),*(undefined8 *)(this + 0x220));
    if (uVar13 <= uVar16) break;
    Sexy::Insets::Insets
              ((Insets *)&local_c8,iVar7 + ((uint)uVar16 & 1) * (iVar5 + iVar8),
               iVar7 + ((int)(uint)uVar16 >> 1) * ((iVar2 >> 3) + iVar8),iVar5,iVar2 >> 3);
    uVar10 = FUN_04b5350c(*(undefined8 *)(this + 0x218),uVar16);
    FUN_05475d88(aSStack_100,uVar10);
    Sexy::StringToUpper(aSStack_100,extraout_x1);
    FUN_05474278(aSStack_100,(Insets *)&local_90);
    std::string::~string((string *)&local_90);
    FUN_031f5e7c((Insets *)&local_90,&DAT_05593308,aSStack_100);
    std::operator+((string *)&local_90,"]");
    std::string::~string((string *)&local_90);
    StringHelper::ToStringValue(asStack_f8);
    Sexy::Insets::Insets((Insets *)&local_90,0x66,0x37,0,0xff);
    pPVar12 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar12,(int)(uVar16 + 1) + 2999,pBVar1,awStack_f0,(Color *)&local_90);
    pcVar15 = *(code **)(*(long *)pPVar12 + 800);
    uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
    (*pcVar15)(pPVar12,uVar10);
    (**(code **)(*(long *)pPVar12 + 0x198))(pPVar12,local_c8,local_c4,local_c0,local_bc);
    (**(code **)(**(long **)(this + 0x200) + 0x60))(*(long **)(this + 0x200),pPVar12);
    std::vector<std::wstring,std::allocator<std::wstring>>::push_back
              ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x120),awStack_f0);
    uVar10 = FUN_0547429c(aSStack_100);
    Sexy::StrFormat("IMAGE_UI_LEVELEDITOR_WORLD_%s",asStack_e8,uVar10);
    local_90 = StringHelper::ToImage(asStack_e8,false);
    std::vector<Sexy::Image*,std::allocator<Sexy::Image*>>::push_back
              ((vector<Sexy::Image*,std::allocator<Sexy::Image*>> *)(this + 0x138),
               (Image **)&local_90);
    std::string::~string(asStack_e8);
    FUN_05476c50(awStack_f0);
    std::string::~string(asStack_f8);
    std::string::~string((string *)aSStack_100);
    uVar16 = uVar16 + 1;
  }
  (**(code **)(**(long **)(this + 0x200) + 0x158))(*(long **)(this + 0x200),0);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x200));
  Reload(this);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_e0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

