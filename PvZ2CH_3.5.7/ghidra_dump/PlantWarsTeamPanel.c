// Class: PlantWarsTeamPanel


/* PlantWarsTeamPanel::ClearSeedCard() */

void __thiscall PlantWarsTeamPanel::ClearSeedCard(PlantWarsTeamPanel *this)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x108);
  uVar4 = 0;
  uVar1 = FUN_04d9e754(uVar5,*(undefined8 *)(this + 0x110));
  if (uVar1 != 0) {
    do {
      plVar2 = (long *)FUN_04d9e760(uVar5,uVar4);
      if (*plVar2 != 0) {
        (**(code **)(*(long *)this + 0x68))(this,*plVar2);
        puVar3 = (undefined8 *)FUN_04d9e760(*(undefined8 *)(this + 0x108),uVar4);
        *puVar3 = 0;
        uVar5 = *(undefined8 *)(this + 0x108);
        uVar1 = FUN_04d9e754(uVar5,*(undefined8 *)(this + 0x110));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return;
}


/* PlantWarsTeamPanel::IsFull() */

undefined8 __thiscall PlantWarsTeamPanel::IsFull(PlantWarsTeamPanel *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x108);
  lVar1 = FUN_04d9e754(uVar4,*(undefined8 *)(this + 0x110));
  lVar3 = 0;
  do {
    if (lVar3 == lVar1) {
      return 1;
    }
    plVar2 = (long *)FUN_04d9e760(uVar4,lVar3);
    lVar3 = lVar3 + 1;
  } while (*plVar2 != 0);
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsTeamPanel::CreateSuggestedTags(std::vector<PlantTag, std::allocator<PlantTag> > const&)
    */

void __thiscall PlantWarsTeamPanel::CreateSuggestedTags(PlantWarsTeamPanel *this,vector *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  UIWidgetText *this_00;
  undefined4 *puVar7;
  UIWidgetImage *this_01;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  code *pcVar12;
  string asStack_20 [8];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar10 = 0;
  TodStringTranslate(L"[SUGGEST_ATTRIBUTES]");
  this_00 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(this_00,(wstring *)local_18);
  FUN_05476c50((wstring *)local_18);
  uVar1 = FUN_04d9f494(0x19);
  uVar2 = FUN_04d9f494(0x34);
  uVar3 = FUN_04d9f494(0x41);
  uVar4 = FUN_04d9f494(0x14);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar4);
  UIWidgetText::SetFontIndex(this_00,0xc);
  pcVar12 = *(code **)(*(long *)this_00 + 0x170);
  Sexy::Color::Color((Color *)local_18,0x66,0x37,0);
  (*pcVar12)(this_00,0,(wstring *)local_18);
  FUN_04d9e724(this_00 + 0xe0,5);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  Set8BytesTo0(asStack_20);
  while( true ) {
    uVar11 = *(undefined8 *)param_1;
    uVar8 = FUN_04d9e7bc(uVar11,*(undefined8 *)(param_1 + 8));
    if (uVar8 <= uVar10) break;
    puVar7 = (undefined4 *)FUN_04d9e7c8(uVar11,uVar10);
    FUN_04d9e8b8((wstring *)local_18,*puVar7);
    this_01 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(this_01,(string *)local_18);
    std::string::~string((string *)local_18);
    iVar5 = FUN_04d9f494(100);
    iVar6 = FUN_04d9f494(0x19);
    uVar1 = FUN_04d9f494(0x34);
    uVar2 = FUN_04d9f494(0x12);
    iVar9 = (int)uVar10;
    uVar10 = uVar10 + 1;
    (**(code **)(*(long *)this_01 + 0x198))(this_01,iVar5 + iVar6 * iVar9,uVar1,uVar2,uVar2);
    local_18[0] = 2;
    UIWidgetImage::SetImageType(this_01,(wstring *)local_18,0.0);
    (**(code **)(*(long *)this + 0x60))(this,this_01);
  }
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsTeamPanel::TouchEnded(Sexy::Touch const&) */

void __thiscall PlantWarsTeamPanel::TouchEnded(PlantWarsTeamPanel *this,Touch *param_1)

{
  if (*(int *)(this + 0xe0) != (int)*(undefined8 *)param_1) {
    return;
  }
  PlantWarsLevelSelectUI::SelectTeamPanel(*(PlantWarsLevelSelectUI **)(this + 0xf0),this);
  return;
}


/* PlantWarsTeamPanel::CalSeedCardRectByIndex(int) */

void PlantWarsTeamPanel::CalSeedCardRectByIndex(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_w1;
  Insets *in_x8;
  
  iVar1 = FUN_04d9f494(0x6e);
  uVar2 = FUN_04d9f494(0xf);
  iVar3 = FUN_04d9f494(2);
  iVar4 = FUN_04d9f494(0x44);
  uVar5 = FUN_04d9f494(0x2d);
  Sexy::Insets::Insets(in_x8);
  *(undefined4 *)(in_x8 + 4) = uVar2;
  *(int *)(in_x8 + 8) = iVar4;
  *(undefined4 *)(in_x8 + 0xc) = uVar5;
  *(int *)in_x8 = iVar1 + (iVar4 + iVar3) * in_w1;
  return;
}


/* PlantWarsTeamPanel::TryRemoveSeedCard(std::string const&) */

char __thiscall PlantWarsTeamPanel::TryRemoveSeedCard(PlantWarsTeamPanel *this,string *param_1)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(this + 0x108);
  uVar6 = 0;
  uVar2 = FUN_04d9e754(uVar7,*(undefined8 *)(this + 0x110));
  if (uVar2 != 0) {
    do {
      plVar3 = (long *)FUN_04d9e760(uVar7,uVar6);
      if (*plVar3 != 0) {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar3 + 0xf0));
        cVar1 = std::operator==((string *)(lVar4 + 8),param_1);
        if (cVar1 != '\0') {
          puVar5 = (undefined8 *)FUN_04d9e760(*(undefined8 *)(this + 0x108),uVar6);
          (**(code **)(*(long *)this + 0x68))(this,*puVar5);
          puVar5 = (undefined8 *)FUN_04d9e760(*(undefined8 *)(this + 0x108),uVar6);
          *puVar5 = 0;
          return cVar1;
        }
        uVar7 = *(undefined8 *)(this + 0x108);
        uVar2 = FUN_04d9e754(uVar7,*(undefined8 *)(this + 0x110));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar2);
  }
  return '\0';
}


/* PlantWarsTeamPanel::HasSunProducer() */

char __thiscall PlantWarsTeamPanel::HasSunProducer(PlantWarsTeamPanel *this)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  PlantType *this_00;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar4 = 0;
  do {
    uVar6 = *(undefined8 *)(this + 0x108);
    uVar2 = FUN_04d9e754(uVar6,*(undefined8 *)(this + 0x110));
    uVar5 = uVar4;
    do {
      uVar4 = uVar5 + 1;
      if (uVar2 <= uVar5) {
        return '\0';
      }
      plVar3 = (long *)FUN_04d9e760(uVar6,uVar5);
      uVar5 = uVar4;
    } while (*plVar3 == 0);
    this_00 = (PlantType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar3 + 0xf0));
    cVar1 = PlantType::IsSunProducer(this_00);
  } while (cVar1 == '\0');
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsTeamPanel::ReplaceDisplayZombie(std::string const&) */

void __thiscall PlantWarsTeamPanel::ReplaceDisplayZombie(PlantWarsTeamPanel *this,string *param_1)

{
  SeedPacketUtils *this_00;
  PacketRenderData *pPVar1;
  DeviceImage *pDVar2;
  PVZ2UIButton *this_01;
  PVZ2UIImage aPStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long **)(this + 0x100) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x100) + 0x18))();
    *(undefined8 *)(this + 0x100) = 0;
  }
  this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  std::string::string(asStack_40,"IMAGE_UI_PACKETS_ZOMBIE_NEW_PVP_");
  pPVar1 = (PacketRenderData *)
           SeedPacketUtils::GetZombiePacketRenderData(this_00,param_1,asStack_40,-1);
  std::string::~string(asStack_40);
  nop();
  pDVar2 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_00,pPVar1,0,0);
  *(DeviceImage **)(this + 0x100) = pDVar2;
  SeedPacketUtils::DrawPacketToDeviceImage(this_00,pDVar2,pPVar1,false,-1,false,false);
  this_01 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,*(undefined8 *)(this + 0x100),2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,*(undefined8 *)(this + 0x100),2);
  PVZ2UIButton::SetDialogStates(this_01,aPStack_78,(PVZ2UIImage *)asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsTeamPanel::Draw(Sexy::Graphics*) */

void __thiscall PlantWarsTeamPanel::Draw(PlantWarsTeamPanel *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Image *pIVar6;
  Image *local_40;
  Insets aIStack_18 [16];
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  local_8 = ___stack_chk_guard;
  if (this[0xe4] == (PlantWarsTeamPanel)0x0) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b98dc8;
  }
  else {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99170;
  }
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  Draw3SliceImage(param_1,aIStack_18,uVar5);
  if (*(int *)(this + 0xe8) == 1) {
    local_40 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99580);
    uVar5 = 4;
  }
  else {
    if (*(int *)(this + 0xe8) != 2) goto LAB_04da40f0;
    local_40 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99060);
    uVar5 = 3;
  }
  iVar1 = FUN_04d9f494(uVar5);
  iVar2 = FUN_04d9f494(0x16);
  iVar3 = FUN_04d9f494(0x14);
  iVar4 = FUN_04d9f494(0x1e);
  Sexy::Graphics::DrawImage(param_1,local_40,iVar1,iVar2,iVar3,iVar4);
LAB_04da40f0:
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99010);
  iVar1 = FUN_04d9f494(0x5c);
  iVar2 = FUN_04d9f494(0x19);
  iVar3 = FUN_04d9f494(0xf);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2,iVar3,iVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsTeamPanel::PlantWarsTeamPanel() */

void __thiscall PlantWarsTeamPanel::PlantWarsTeamPanel(PlantWarsTeamPanel *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_069bc060;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069bc388;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x108));
  *(undefined8 *)(this + 0x100) = 0;
  return;
}


/* PlantWarsTeamPanel::~PlantWarsTeamPanel() */

void __thiscall PlantWarsTeamPanel::~PlantWarsTeamPanel(PlantWarsTeamPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_069bc060;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069bc388;
  if (*(long **)(this + 0x100) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x100) + 0x18))();
    *(undefined8 *)(this + 0x100) = 0;
  }
  std::vector<PlantWarsSeedCard*,std::allocator<PlantWarsSeedCard*>>::~vector
            ((vector<PlantWarsSeedCard*,std::allocator<PlantWarsSeedCard*>> *)(this + 0x108));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantWarsTeamPanel::~PlantWarsTeamPanel() */

void __thiscall PlantWarsTeamPanel::~PlantWarsTeamPanel(PlantWarsTeamPanel *this)

{
  ~PlantWarsTeamPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsTeamPanel::TryAddSeedCard(std::string const&) */

void __thiscall PlantWarsTeamPanel::TryAddSeedCard(PlantWarsTeamPanel *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  PlantWarsSeedCard *this_00;
  undefined8 *puVar4;
  UIMessageBox *this_01;
  Image *pIVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  wstring awStack_30 [8];
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  uVar8 = *(undefined8 *)(this + 0x108);
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_04d9e754(uVar8,*(undefined8 *)(this + 0x110));
  lVar6 = 0;
  do {
    lVar7 = lVar6;
    if (lVar7 == lVar2) goto LAB_04da8cf0;
    plVar3 = (long *)FUN_04d9e760(uVar8,lVar7);
    lVar6 = lVar7 + 1;
  } while (*plVar3 != 0);
  if (((int)lVar7 == 0) && (bVar1 = std::operator==(param_1,"imitater"), bVar1)) {
    this_01 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_01 == (UIMessageBox *)0x0) {
LAB_04da8cf0:
      uVar8 = 0;
    }
    else {
      UIMessageBox::SetShowType(this_01,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[BUTTON_OK]");
      TodStringTranslate(L"[PLANT_WARS_FIRST_CARD_NOT_IMITATER]");
      UIMessageBox::SetMessage(this_01,awStack_20,awStack_30);
      std::string::string(asStack_18,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar5 = (Image *)StringHelper::ToImage(asStack_18,false);
      UIMessageBox::SetBackground(this_01,pIVar5);
      std::string::~string(asStack_18);
      nop();
      lVar6 = UIMessageBox::GetButtonCancel(this_01);
      thunk_FUN_05477b9c(lVar6 + 0xd8,auStack_28);
      FUN_05476c50(awStack_20);
      FUN_05476c50(auStack_28);
      FUN_05476c50(awStack_30);
      uVar8 = 0;
    }
  }
  else {
    CalSeedCardRectByIndex((int)this);
    this_00 = ::operator_new(0x108);
    PlantWarsSeedCard::PlantWarsSeedCard(this_00);
    uVar8 = 1;
    (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_18);
    PlantWarsSeedCard::InitPlant(this_00,param_1,2);
    (**(code **)(*(long *)this + 0x60))(this,this_00);
    puVar4 = (undefined8 *)FUN_04d9e760(*(undefined8 *)(this + 0x108),lVar7);
    *puVar4 = this_00;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsTeamPanel::Init(PlantWarsLevelSelectUI*, int) */

void __thiscall
PlantWarsTeamPanel::Init(PlantWarsTeamPanel *this,PlantWarsLevelSelectUI *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  SeedPacketUtils *this_00;
  PacketRenderData *pPVar7;
  DeviceImage *pDVar8;
  PVZ2UIButton *this_01;
  UIWidgetImage *this_02;
  long lVar9;
  int iVar10;
  undefined1 auStack_80 [8];
  undefined8 local_78 [7];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(PlantWarsLevelSelectUI **)(this + 0xf0) = param_1;
  *(int *)(this + 0xe8) = param_2;
  iVar10 = 0;
  this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  std::string::string((string *)local_78,"future");
  std::string::string((string *)&local_40,"IMAGE_UI_PACKETS_ZOMBIE_NEW_PVP_");
  pPVar7 = (PacketRenderData *)
           SeedPacketUtils::GetZombiePacketRenderData
                     (this_00,(string *)local_78,(string *)&local_40,-1);
  std::string::~string((string *)&local_40);
  nop();
  std::string::~string((string *)local_78);
  nop();
  pDVar8 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_00,pPVar7,0,0);
  *(DeviceImage **)(this + 0x100) = pDVar8;
  SeedPacketUtils::DrawPacketToDeviceImage(this_00,pDVar8,pPVar7,false,-1,false,false);
  FUN_05478178((string *)local_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  this_01 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_01,4,(ButtonListener *)(this + 0xd8),(wstring *)local_78,(Color *)&local_40);
  FUN_05476c50((string *)local_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,*(undefined8 *)(this + 0x100),2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,*(undefined8 *)(this + 0x100),2);
  PVZ2UIButton::SetDialogStates(this_01,(PVZ2UIImage *)local_78,(PVZ2UIImage *)&local_40);
  uVar2 = FUN_04d9f494(0x19);
  uVar3 = FUN_04d9f494(0xf);
  uVar4 = FUN_04d9f494(0x41);
  uVar5 = FUN_04d9f494(0x2d);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,uVar2,uVar3,uVar4,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,this_01);
  *(PVZ2UIButton **)(this + 0xf8) = this_01;
  do {
    iVar10 = iVar10 + 1;
    CalSeedCardRectByIndex((int)this);
    std::string::string((string *)local_78,"IMAGE_UI_PACKETS_READY_DYNAMIC");
    this_02 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(this_02,(string *)local_78);
    std::string::~string((string *)local_78);
    nop();
    iVar1 = local_40;
    iVar6 = FUN_04d9f494(5);
    (**(code **)(*(long *)this_02 + 0x198))
              (this_02,iVar1 + iVar6,iVar6 + local_3c,local_38 - iVar6,local_34 - iVar6);
    local_78[0] = CONCAT44(local_78[0]._4_4_,2);
    UIWidgetImage::SetImageType(this_02,(string *)local_78,0.0);
    lVar9 = *(long *)this;
    this_02[0x6d] = (UIWidgetImage)0x0;
    (**(code **)(lVar9 + 0x60))(this,this_02);
    local_78[0] = 0;
    std::vector<PlantWarsSeedCard*,std::allocator<PlantWarsSeedCard*>>::push_back
              ((vector<PlantWarsSeedCard*,std::allocator<PlantWarsSeedCard*>> *)(this + 0x108),
               (PlantWarsSeedCard **)local_78);
  } while (iVar10 != 8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsTeamPanel::ButtonDepress(int) */

void __thiscall PlantWarsTeamPanel::ButtonDepress(PlantWarsTeamPanel *this,int param_1)

{
  AndroidHttpTransaction *pAVar1;
  long lVar2;
  ulong uVar3;
  PlantWarsLevelSelectManager *pPVar4;
  ShowZombieTitles *pSVar5;
  int iVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 4) {
    iVar6 = *(int *)(this + 0xe8);
    if (iVar6 == 1) {
      pAVar1 = (AndroidHttpTransaction *)
               Sexy::LazySingleton<PlantWarsLevelSelectManager>::GetInstancePtr();
      Sexy::AndroidHttpTransaction::GetUserData(pAVar1);
      PlantWarsLevelSelectUI::GetLevelDefinitionPtr();
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      lVar2 = FUN_04d9e79c(*(undefined8 *)(lVar2 + 0x50),*(undefined8 *)(lVar2 + 0x58));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if (lVar2 != 0) {
        pPVar4 = (PlantWarsLevelSelectManager *)
                 Sexy::LazySingleton<PlantWarsLevelSelectManager>::GetInstancePtr();
        pAVar1 = (AndroidHttpTransaction *)
                 Sexy::LazySingleton<PlantWarsLevelSelectManager>::GetInstancePtr();
        Sexy::AndroidHttpTransaction::GetUserData(pAVar1);
        PlantWarsLevelSelectUI::GetLevelDefinitionPtr();
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        pSVar5 = (ShowZombieTitles *)FUN_04d9e7b0(*(undefined8 *)(lVar2 + 0x50),0);
        PlantWarsLevelSelectManager::ShowZombieDetails(pPVar4,pSVar5);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        goto LAB_04dab89c;
      }
      iVar6 = *(int *)(this + 0xe8);
    }
    if (iVar6 == 2) {
      pAVar1 = (AndroidHttpTransaction *)
               Sexy::LazySingleton<PlantWarsLevelSelectManager>::GetInstancePtr();
      Sexy::AndroidHttpTransaction::GetUserData(pAVar1);
      PlantWarsLevelSelectUI::GetLevelDefinitionPtr();
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      uVar3 = FUN_04d9e79c(*(undefined8 *)(lVar2 + 0x50),*(undefined8 *)(lVar2 + 0x58));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if (1 < uVar3) {
        pPVar4 = (PlantWarsLevelSelectManager *)
                 Sexy::LazySingleton<PlantWarsLevelSelectManager>::GetInstancePtr();
        pAVar1 = (AndroidHttpTransaction *)
                 Sexy::LazySingleton<PlantWarsLevelSelectManager>::GetInstancePtr();
        Sexy::AndroidHttpTransaction::GetUserData(pAVar1);
        PlantWarsLevelSelectUI::GetLevelDefinitionPtr();
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        pSVar5 = (ShowZombieTitles *)FUN_04d9e7b0(*(undefined8 *)(lVar2 + 0x50),1);
        PlantWarsLevelSelectManager::ShowZombieDetails(pPVar4,pSVar5);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
    }
  }
LAB_04dab89c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PlantWarsTeamPanel::ButtonDepress(int) */

void __thiscall PlantWarsTeamPanel::ButtonDepress(PlantWarsTeamPanel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

