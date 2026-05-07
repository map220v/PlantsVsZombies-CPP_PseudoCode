// Class: PVZ2UICreditsScreen


/* PVZ2UICreditsScreen::IsDone() */

bool __thiscall PVZ2UICreditsScreen::IsDone(PVZ2UICreditsScreen *this)

{
  return *(int *)(this + 0x100) == 5;
}


/* PVZ2UICreditsScreen::Update() */

void __thiscall PVZ2UICreditsScreen::Update(PVZ2UICreditsScreen *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  float fVar6;
  
  switch(*(undefined4 *)(this + 0x100)) {
  case 0:
    fVar6 = (float)PVZ_RealT();
    if (2.25 < fVar6 - *(float *)(this + 0x104)) {
      *(undefined4 *)(this + 0x100) = 1;
      uVar5 = PVZ_RealT();
      *(undefined4 *)(this + 0x104) = uVar5;
    }
    break;
  case 1:
    fVar6 = (float)PVZ_RealT();
    if (2.25 < fVar6 - *(float *)(this + 0x104)) {
      *(undefined4 *)(this + 0x100) = 2;
      uVar5 = PVZ_EOT();
      *(undefined4 *)(this + 0x104) = uVar5;
    }
    break;
  case 3:
    fVar6 = (float)PVZ_RealT();
    if (2.25 < fVar6 - *(float *)(this + 0x104)) {
      *(undefined4 *)(this + 0x100) = 4;
      uVar5 = PVZ_RealT();
      *(undefined4 *)(this + 0x104) = uVar5;
    }
    break;
  case 4:
    fVar6 = (float)PVZ_RealT();
    if (2.25 < fVar6 - *(float *)(this + 0x104)) {
      *(undefined4 *)(this + 0x100) = 5;
    }
  }
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0xe8);
    uVar2 = FUN_04370cc0(uVar4,*(undefined8 *)(this + 0xf0));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_04370cb8(uVar4,uVar3);
    SpaceDebrisDrawer::Update((SpaceDebrisDrawer *)*puVar1);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* PVZ2UICreditsScreen::DrawSpaceDebris(Sexy::Graphics*) */

void __thiscall PVZ2UICreditsScreen::DrawSpaceDebris(PVZ2UICreditsScreen *this,Graphics *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  
  fVar5 = (float)PVZ2UICreditsScroller::GetScrollAmountScreen();
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0xe8);
    uVar2 = FUN_04370cc0(uVar4,*(undefined8 *)(this + 0xf0));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_04370cb8(uVar4,uVar3);
    SpaceDebrisDrawer::Draw((SpaceDebrisDrawer *)*puVar1,param_1,fVar5);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x04372010 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PVZ2UICreditsScreen::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
PVZ2UICreditsScreen::DrawAll(PVZ2UICreditsScreen *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined4 local_1c;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(this + 0x100)) {
  case 0:
    auVar2 = PVZ_RealT();
    fVar3 = auVar2._0_4_ - *(float *)(this + 0x104);
    local_1c = 0;
    local_18[0] = 0x3f800000;
    break;
  case 1:
    auVar2 = PVZ_RealT();
    local_18[0] = 0;
    fVar3 = auVar2._0_4_ - *(float *)(this + 0x104);
    local_1c = 0x3f800000;
    goto LAB_0437200c;
  case 2:
    iVar1 = 0;
    goto LAB_04371f94;
  case 3:
    auVar2 = PVZ_RealT();
    fVar3 = auVar2._0_4_ - *(float *)(this + 0x104);
    local_1c = 0;
    local_18[0] = 0x3f800000;
LAB_0437200c:
    fVar3 = CurveLerp<float>(auVar2,0x40100000,fVar3,&local_1c,local_18,4);
    iVar1 = (int)(fVar3 * 255.0);
LAB_04371f94:
    Sexy::Insets::Insets((Insets *)local_18,0,0,0,0);
    DrawSpaceSpiral(param_2,0xff,(Insets *)local_18);
    DrawSpaceDebris(this,param_2);
    Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
    goto LAB_04371f24;
  case 4:
    auVar2 = PVZ_RealT();
    local_18[0] = 0;
    fVar3 = auVar2._0_4_ - *(float *)(this + 0x104);
    local_1c = 0x3f800000;
    break;
  case 5:
    goto switchD_04371f88_caseD_5;
  default:
    iVar1 = 0;
    goto LAB_04371f24;
  }
  fVar3 = CurveLerp<float>(auVar2,0x40100000,fVar3,&local_1c,local_18,4);
  iVar1 = (int)(fVar3 * 255.0);
LAB_04371f24:
  Sexy::Insets::Insets((Insets *)local_18,0,0,0,0);
  DrawSpaceSpiral(param_2,iVar1,(Insets *)local_18);
switchD_04371f88_caseD_5:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PVZ2UICreditsScreen::ButtonPress(int) */

void PVZ2UICreditsScreen::ButtonPress(int param_1)

{
  char *pcVar1;
  
  if (*(int *)((ulong)(uint)param_1 + 0x100) != 2) {
    return;
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Settings_Tab_Back_Press");
  return;
}


/* non-virtual thunk to PVZ2UICreditsScreen::ButtonPress(int) */

void __thiscall PVZ2UICreditsScreen::ButtonPress(PVZ2UICreditsScreen *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* PVZ2UICreditsScreen::ButtonDepress(int) */

void PVZ2UICreditsScreen::ButtonDepress(int param_1)

{
  ulong uVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  uVar1 = (ulong)(uint)param_1;
  if (*(int *)(uVar1 + 0x100) != 2) {
    return;
  }
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Settings_Tab_Back_Release");
  *(undefined4 *)(uVar1 + 0x100) = 3;
  uVar3 = PVZ_RealT();
  *(undefined4 *)(uVar1 + 0x104) = uVar3;
  return;
}


/* non-virtual thunk to PVZ2UICreditsScreen::ButtonDepress(int) */

void __thiscall PVZ2UICreditsScreen::ButtonDepress(PVZ2UICreditsScreen *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UICreditsScreen::~PVZ2UICreditsScreen() */

void __thiscall PVZ2UICreditsScreen::~PVZ2UICreditsScreen(PVZ2UICreditsScreen *this)

{
  LawnApp *pLVar1;
  ulong uVar2;
  undefined8 *puVar3;
  string *psVar4;
  long lVar5;
  PrimeText *this_00;
  ulong uVar6;
  SpaceDebrisDrawer *this_01;
  undefined8 uVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar6 = 0;
  uVar7 = *(undefined8 *)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06836cb0;
  *(undefined **)(this + 0xd8) = &DAT_06836fe0;
  uVar2 = FUN_04370cc0(uVar7,*(undefined8 *)(this + 0xf0));
  if (uVar2 != 0) {
    do {
      puVar3 = (undefined8 *)FUN_04370cb8(uVar7,uVar6);
      this_01 = (SpaceDebrisDrawer *)*puVar3;
      if (this_01 != (SpaceDebrisDrawer *)0x0) {
        SpaceDebrisDrawer::~SpaceDebrisDrawer(this_01);
        AK::FreeHook(this_01);
        puVar3 = (undefined8 *)FUN_04370cb8(*(undefined8 *)(this + 0xe8),uVar6);
        *puVar3 = 0;
        uVar7 = *(undefined8 *)(this + 0xe8);
        uVar2 = FUN_04370cc0(uVar7,*(undefined8 *)(this + 0xf0));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar2);
  }
  std::vector<SpaceDebrisDrawer*,std::allocator<SpaceDebrisDrawer*>>::clear
            ((vector<SpaceDebrisDrawer*,std::allocator<SpaceDebrisDrawer*>> *)(this + 0xe8));
  uVar6 = 0;
  while( true ) {
    uVar2 = FUN_04370ca4(DAT_06afd4d8,DAT_06afd4e0);
    if (uVar2 <= uVar6) break;
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    FUN_04370cb0(DAT_06afd4d8,uVar6);
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
    pLVar1 = gLawnApp;
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    LawnApp::DeleteGroup(pLVar1,(string *)(lVar5 + 0x10));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar6 = uVar6 + 1;
  }
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string((string *)aRStack_10,"UI_GameOver");
  LawnApp::DeleteGroup(pLVar1,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)aRStack_10,"Credits");
  LawnApp::DeleteGroup(pLVar1,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  std::vector<SpaceDebrisDrawer*,std::allocator<SpaceDebrisDrawer*>>::~vector
            ((vector<SpaceDebrisDrawer*,std::allocator<SpaceDebrisDrawer*>> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UICreditsScreen::~PVZ2UICreditsScreen() */

void __thiscall PVZ2UICreditsScreen::~PVZ2UICreditsScreen(PVZ2UICreditsScreen *this)

{
  ~PVZ2UICreditsScreen(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UICreditsScreen::SpawnRandomDebris(int) */

void __thiscall PVZ2UICreditsScreen::SpawnRandomDebris(PVZ2UICreditsScreen *this,int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  string *psVar6;
  PopAnimRig *pPVar7;
  CachedResourcePtr<Sexy::Image> *this_00;
  Image *pIVar8;
  SpaceDebrisDrawer *pSVar9;
  float fVar10;
  float fVar11;
  DVec2 aDStack_30 [8];
  DVec2 aDStack_28 [8];
  SpaceDebrisDrawer *local_20;
  FastCurve aFStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  iVar3 = *(int *)(this + 0x54);
  local_8 = ___stack_chk_guard;
  fVar10 = (float)PVZ2UICreditsScroller::GetMaxScrollAmountScreen();
  DVec2::DVec2(aDStack_30,(float)iVar3 * 1.618034,-fVar10);
  DVec2::DVec2(aDStack_28,(float)(*(int *)(this + 0x50) / 2) * 1.381966,(float)*(int *)(this + 0x50)
              );
  iVar3 = Sexy::Rand(2);
  bVar2 = iVar3 == 0;
  if (0 < param_1) {
    iVar3 = 0;
    do {
      while( true ) {
        fVar10 = (float)ValueRange::GetInterpValue
                                  ((float)iVar3 * (1.0 / ((float)param_1 - 1.0)),aDStack_30,1);
        iVar4 = Sexy::Rand(10);
        bVar1 = (bool)(bVar2 ^ 1);
        if (iVar4 < 2) {
          bVar1 = bVar2;
        }
        bVar2 = bVar1;
        fVar11 = (float)ValueRange::GetRandomValue((ValueRange *)aDStack_28);
        iVar4 = (int)fVar11;
        fVar11 = (float)Sexy::Rand(1.0);
        if (fVar11 < 0.5) break;
        iVar5 = FUN_04370ccc(DAT_06afd4a0,DAT_06afd4a8);
        iVar5 = Sexy::Rand(iVar5);
        this_00 = (CachedResourcePtr<Sexy::Image> *)FUN_04370ce0(DAT_06afd4a0,(long)iVar5);
        pIVar8 = (Image *)CachedResourcePtr<Sexy::Image>::operator->(this_00);
        if (bVar2) {
          iVar4 = *(int *)(this + 0x50) - iVar4;
        }
        iVar3 = iVar3 + 1;
        Sexy::FastCurve::SetOutRange((FastCurve *)aRStack_10,(float)iVar4,fVar10);
        pSVar9 = ::operator_new(0x40);
        SpaceDebrisDrawer::SpaceDebrisDrawer(pSVar9,pIVar8,(SexyVector2 *)aRStack_10);
        local_20 = pSVar9;
        std::vector<SpaceDebrisDrawer*,std::allocator<SpaceDebrisDrawer*>>::push_back
                  ((vector<SpaceDebrisDrawer*,std::allocator<SpaceDebrisDrawer*>> *)(this + 0xe8),
                   &local_20);
        if (iVar3 == param_1) goto LAB_04372c2c;
      }
      psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      iVar5 = FUN_04370ca4(DAT_06afd4d8,DAT_06afd4e0);
      iVar5 = Sexy::Rand(iVar5);
      FUN_04370cb0(DAT_06afd4d8,(long)iVar5);
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
      pPVar7 = (PopAnimRig *)CreateStandalonePlantAnimRig(aRStack_10,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if (bVar2) {
        iVar4 = *(int *)(this + 0x50) - iVar4;
      }
      iVar3 = iVar3 + 1;
      Sexy::FastCurve::SetOutRange(aFStack_18,(float)iVar4,fVar10);
      std::string::string((string *)aRStack_10,"");
      pSVar9 = ::operator_new(0x40);
      SpaceDebrisDrawer::SpaceDebrisDrawer
                (pSVar9,pPVar7,(SexyVector2 *)aFStack_18,(string *)aRStack_10);
      local_20 = pSVar9;
      std::string::~string((string *)aRStack_10);
      nop();
      std::vector<SpaceDebrisDrawer*,std::allocator<SpaceDebrisDrawer*>>::push_back
                ((vector<SpaceDebrisDrawer*,std::allocator<SpaceDebrisDrawer*>> *)(this + 0xe8),
                 &local_20);
    } while (iVar3 != param_1);
  }
LAB_04372c2c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UICreditsScreen::PVZ2UICreditsScreen() */

void __thiscall PVZ2UICreditsScreen::PVZ2UICreditsScreen(PVZ2UICreditsScreen *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  LawnApp *pLVar5;
  char cVar6;
  PrimeText *this_00;
  string *psVar7;
  ulong uVar8;
  PVZ2UIButton *this_01;
  long lVar9;
  PVZ2UICreditsScroller *this_02;
  GenericResFile *this_03;
  char *__s;
  void *__base;
  size_t __nmemb;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  wstring awStack_a0 [8];
  undefined1 auStack_98 [8];
  wstring awStack_90 [8];
  int local_88 [2];
  int local_80;
  string asStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06836cb0;
  *(undefined **)(this + 0xd8) = &DAT_06836fe0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  pLVar5 = gLawnApp;
  std::string::string(asStack_40,"Credits");
  LawnApp::LoadGroup(pLVar5,asStack_40);
  std::string::~string(asStack_40);
  nop();
  pLVar5 = gLawnApp;
  std::string::string(asStack_40,"UI_GameOver");
  LawnApp::LoadGroup(pLVar5,asStack_40);
  std::string::~string(asStack_40);
  nop();
  uVar11 = 0;
  while( true ) {
    uVar8 = FUN_04370ca4(DAT_06afd4d8,DAT_06afd4e0);
    if (uVar8 <= uVar11) break;
    psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    FUN_04370cb0(DAT_06afd4d8,uVar11);
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
    pLVar5 = gLawnApp;
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
    LawnApp::LoadGroup(pLVar5,(string *)(lVar9 + 0x10));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
    uVar11 = uVar11 + 1;
  }
  bVar4 = false;
  Sexy::Widget::Resize
            ((Widget *)this,*(int *)(gLawnApp + 0x71c),*(int *)(gLawnApp + 0x720),
             *(int *)(gLawnApp + 0x724),*(int *)(gLawnApp + 0x728));
  FUN_05478178(asStack_78,&DAT_056f11a8,(Insets *)local_88);
  Sexy::Color::Color((Color *)asStack_40,1);
  this_01 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_01,0,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)asStack_40);
  FUN_05476c50(asStack_78);
  nop();
  fVar13 = (float)FUN_04370e00(0x41200000);
  iVar1 = *(int *)(this + 0x54);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd550);
  fVar14 = (float)FUN_04370e00(0x41200000);
  iVar2 = *(int *)(lVar9 + 0x3c);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd550);
  iVar3 = *(int *)(lVar9 + 0x38);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd550);
  Sexy::Insets::Insets
            ((Insets *)local_88,(int)fVar13,(int)((float)(iVar1 - iVar2) - fVar14),iVar3,
             *(int *)(lVar9 + 0x3c));
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,(Insets *)local_88);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06afd550,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06afd368,1);
  PVZ2UIButton::SetDialogStates(this_01,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)asStack_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)this_01);
  iVar1 = local_88[0] + local_80;
  this_02 = ::operator_new(0x110);
  PVZ2UICreditsScroller::PVZ2UICreditsScroller(this_02);
  *(PVZ2UICreditsScroller **)(this + 0xe0) = this_02;
  (**(code **)(*(long *)this_02 + 0x198))
            (this_02,iVar1,0,iVar1 * -2 + *(int *)(this + 0x50),*(undefined4 *)(this + 0x54));
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xe0));
  Sexy::Buffer::Buffer((Buffer *)asStack_40);
  psVar7 = Sexy::gSexyAppBase;
  this_03 = (GenericResFile *)
            CachedResourcePtr<Sexy::GenericResFile>::operator->
                      ((CachedResourcePtr<Sexy::GenericResFile> *)&DAT_06afd508);
  __s = (char *)Sexy::GenericResFile::GetFilePath(this_03);
  std::string::string(asStack_78,__s);
  Sexy::SexyAppBase::ReadBufferFromFile(psVar7,(Buffer *)asStack_78,SUB81(asStack_40,0));
  std::string::~string(asStack_78);
  nop();
  do {
    while( true ) {
      cVar6 = Sexy::Buffer::AtEnd((Buffer *)asStack_40);
      if (cVar6 != '\0') {
        nop();
        PVZ2UICreditsScroller::DoWidgetLayout(*(PVZ2UICreditsScroller **)(this + 0xe0));
        (**(code **)(**(long **)(this + 0xe0) + 0x198))
                  (*(long **)(this + 0xe0),iVar1,0,iVar1 * -2 + *(int *)(this + 0x50),
                   *(undefined4 *)(this + 0x54));
        SpawnRandomDebris(this,10);
        uVar12 = *(undefined8 *)(this + 0xe8);
        __base = (void *)FUN_04370cb8(uVar12,0);
        __nmemb = FUN_04370cc0(uVar12,*(undefined8 *)(this + 0xf0));
        qsort(__base,__nmemb,8,FUN_04370e44);
        *(undefined4 *)(this + 0x100) = 0;
        uVar15 = PVZ_RealT();
        *(undefined4 *)(this + 0x104) = uVar15;
        Sexy::Buffer::~Buffer((Buffer *)asStack_40);
        if (local_8 == ___stack_chk_guard) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if (bVar4) {
        DAT_06afd2f8 = PrimeText_PotentialTypeface::Typeface
                                 (PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
        DAT_06afd338 = PrimeText_PotentialTypeface::Typeface
                                 (PrimeText_Game::Typeface_FZShaoEr_28_Outline);
      }
      else {
        DAT_06afd2f8 = PrimeText_PotentialTypeface::Typeface
                                 (PrimeText_Game::Typeface_CafeteriaBlack_22_ThickOutline);
        DAT_06afd338 = PrimeText_PotentialTypeface::Typeface
                                 (PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
      }
      Sexy::Buffer::ReadUTF8Line();
      TodStringTranslateAll((wstring *)asStack_78);
      FUN_05476c50(asStack_78);
      lVar9 = FUN_054767dc(awStack_a0,L"{TOPHEADER}",0);
      if (lVar9 == -1) break;
      FUN_05477da4(awStack_90,awStack_a0,0,lVar9);
      FUN_05477da4(asStack_78,awStack_a0,lVar9 + 0xb,0xffffffffffffffff);
      std::operator+(awStack_90,(wstring *)asStack_78);
      FUN_054766c8(awStack_a0,auStack_98);
      FUN_05476c50(auStack_98);
      FUN_05476c50(asStack_78);
      FUN_05476c50(awStack_90);
      PVZ2UICreditsScroller::AddGameTitle(*(PVZ2UICreditsScroller **)(this + 0xe0),awStack_a0);
LAB_043734e4:
      FUN_05476c50(awStack_a0);
    }
    lVar9 = FUN_054767dc(awStack_a0,L"{HEADER}",0);
    if (lVar9 != -1) {
      FUN_05477da4(awStack_90,awStack_a0,0,lVar9);
      FUN_05477da4(asStack_78,awStack_a0,lVar9 + 8,0xffffffffffffffff);
      std::operator+(awStack_90,(wstring *)asStack_78);
      FUN_054766c8(awStack_a0,auStack_98);
      FUN_05476c50(auStack_98);
      FUN_05476c50(asStack_78);
      FUN_05476c50(awStack_90);
      PVZ2UICreditsScroller::AddTitle(*(PVZ2UICreditsScroller **)(this + 0xe0),awStack_a0);
      goto LAB_043734e4;
    }
    lVar9 = FUN_054767dc(awStack_a0,&DAT_05722c88,0);
    if (lVar9 != -1) {
      bVar4 = false;
      FUN_05477da4(awStack_90,awStack_a0,0,lVar9);
      FUN_05477da4(asStack_78,awStack_a0,lVar9 + 7,0xffffffffffffffff);
      std::operator+(awStack_90,(wstring *)asStack_78);
      FUN_054766c8(awStack_a0,auStack_98);
      FUN_05476c50(auStack_98);
      FUN_05476c50(asStack_78);
      FUN_05476c50(awStack_90);
      DAT_06afd2f8 = PrimeText_PotentialTypeface::Typeface
                               (PrimeText_Game::Typeface_CafeteriaBlack_22_ThickOutline);
      puVar10 = &PrimeText_Game::Typeface_CafeteriaBlack_28_Outline;
LAB_04373740:
      DAT_06afd338 = PrimeText_PotentialTypeface::Typeface((PrimeText_PotentialTypeface *)*puVar10);
      PVZ2UICreditsScroller::AddDisciplineTitle(*(PVZ2UICreditsScroller **)(this + 0xe0),awStack_a0)
      ;
      goto LAB_043734e4;
    }
    lVar9 = FUN_054767dc(awStack_a0,L"{TITLE_CH}",0);
    if (lVar9 != -1) {
      bVar4 = true;
      FUN_05477da4(awStack_90,awStack_a0,0,lVar9);
      FUN_05477da4(asStack_78,awStack_a0,lVar9 + 10,0xffffffffffffffff);
      std::operator+(awStack_90,(wstring *)asStack_78);
      FUN_054766c8(awStack_a0,auStack_98);
      FUN_05476c50(auStack_98);
      FUN_05476c50(asStack_78);
      FUN_05476c50(awStack_90);
      DAT_06afd2f8 = PrimeText_PotentialTypeface::Typeface
                               (PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
      puVar10 = &PrimeText_Game::Typeface_FZShaoEr_28_Outline;
      goto LAB_04373740;
    }
    lVar9 = FUN_054767dc(awStack_a0,L"{NOTENAME}",0);
    if (lVar9 != -1) {
      FUN_05477da4(awStack_90,awStack_a0,0,lVar9);
      FUN_05477da4(asStack_78,awStack_a0,lVar9 + 10,0xffffffffffffffff);
      std::operator+(awStack_90,(wstring *)asStack_78);
      FUN_054766c8(awStack_a0,auStack_98);
      FUN_05476c50(auStack_98);
      FUN_05476c50(asStack_78);
      FUN_05476c50(awStack_90);
      PVZ2UICreditsScroller::AddThankYouNoteName
                (*(PVZ2UICreditsScroller **)(this + 0xe0),awStack_a0);
      goto LAB_043734e4;
    }
    lVar9 = FUN_054767dc(awStack_a0,L"{NOTETEXT}",0);
    if (lVar9 != -1) {
      FUN_05477da4(awStack_90,awStack_a0,0,lVar9);
      FUN_05477da4(asStack_78,awStack_a0,lVar9 + 10,0xffffffffffffffff);
      std::operator+(awStack_90,(wstring *)asStack_78);
      FUN_054766c8(awStack_a0,auStack_98);
      FUN_05476c50(auStack_98);
      FUN_05476c50(asStack_78);
      FUN_05476c50(awStack_90);
      PVZ2UICreditsScroller::AddThankYouNoteMessage
                (*(PVZ2UICreditsScroller **)(this + 0xe0),awStack_a0);
      goto LAB_043734e4;
    }
    uVar11 = FUN_054765d0(awStack_a0);
    if (uVar11 < 2) {
      PVZ2UICreditsScroller::AddSpacerSmall(*(PVZ2UICreditsScroller **)(this + 0xe0));
      goto LAB_043734e4;
    }
    PVZ2UICreditsScroller::AddNameText((wstring *)*(PVZ2UICreditsScroller **)(this + 0xe0));
    FUN_05476c50(awStack_a0);
  } while( true );
}

