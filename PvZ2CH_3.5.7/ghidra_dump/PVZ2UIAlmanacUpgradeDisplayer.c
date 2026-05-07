// Class: PVZ2UIAlmanacUpgradeDisplayer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAlmanacUpgradeDisplayer::~PVZ2UIAlmanacUpgradeDisplayer() */

void __thiscall
PVZ2UIAlmanacUpgradeDisplayer::~PVZ2UIAlmanacUpgradeDisplayer(PVZ2UIAlmanacUpgradeDisplayer *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0683a530;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"PowerUpIcons");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Images_VaseBreaker");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  FUN_05476c50(this + 0xe0);
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIAlmanacUpgradeDisplayer::~PVZ2UIAlmanacUpgradeDisplayer() */

void __thiscall
PVZ2UIAlmanacUpgradeDisplayer::~PVZ2UIAlmanacUpgradeDisplayer(PVZ2UIAlmanacUpgradeDisplayer *this)

{
  ~PVZ2UIAlmanacUpgradeDisplayer(this);
  AK::FreeHook(this);
  return;
}


/* PVZ2UIAlmanacUpgradeDisplayer::OnBought() */

void __thiscall PVZ2UIAlmanacUpgradeDisplayer::OnBought(PVZ2UIAlmanacUpgradeDisplayer *this)

{
  NewYearGoodsSelectItem::SelectItem(*(NewYearGoodsSelectItem **)(this + 0xe8),false);
  PVZ2UIGameObjectCard::SetShowLock(*(PVZ2UIGameObjectCard **)(this + 0xe8),false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAlmanacUpgradeDisplayer::Resize(int, int, int, int) */

void __thiscall
PVZ2UIAlmanacUpgradeDisplayer::Resize
          (PVZ2UIAlmanacUpgradeDisplayer *this,int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  fVar1 = (float)FUN_04377390(0x41880000);
  fVar2 = (float)FUN_04377390(0x428c0000);
  fVar3 = (float)FUN_04377390(0x42080000);
  fVar4 = (float)FUN_04377390(0x435c0000);
  Sexy::Insets::Insets(aIStack_18,(int)fVar1,(int)fVar2,(int)((float)param_3 - fVar3),(int)fVar4);
  (**(code **)(**(long **)(this + 0xe8) + 0x1a0))(*(long **)(this + 0xe8),aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAlmanacUpgradeDisplayer::Draw(Sexy::Graphics*) */

void __thiscall
PVZ2UIAlmanacUpgradeDisplayer::Draw(PVZ2UIAlmanacUpgradeDisplayer *this,Graphics *param_1)

{
  undefined8 uVar1;
  PrimeText_PotentialText *pPVar2;
  PrimeTextWidget *pPVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_50 [8];
  Insets aIStack_48 [16];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)
                     AlmanacSettings::IMAGE_UI_DIALOG_ASSET_CARD_ORANGE);
  Draw9SliceImage(param_1,aIStack_18,uVar1);
  if (this[0x108] != (PVZ2UIAlmanacUpgradeDisplayer)0x0) {
    fVar4 = (float)FUN_04377390(0x41880000);
    fVar5 = (float)FUN_04377390(0x42080000);
    fVar6 = (float)FUN_04377390(0x42540000);
    Sexy::Insets::Insets
              (aIStack_48,(int)fVar4,(int)fVar4,(int)((float)*(int *)(this + 0x50) - fVar5),
               (int)fVar6);
    uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline)
    ;
    Sexy::Insets::Insets(aIStack_28,aIStack_48);
    FUN_05477b24(aIStack_38,this + 0xd8);
    Sexy::Color::Color((Color *)aIStack_18,1);
    pPVar2 = (PrimeText_PotentialText *)
             Sexy::BuildPotentialText_Paragraph(uVar1,aIStack_28,aIStack_38,1,1,aIStack_18);
    pPVar3 = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(pPVar3,pPVar2);
    FUN_05476c50(aIStack_38);
    Sexy::PrimeTextWidget::SetDontDrawWhenOffscreen(pPVar3,true);
    (**(code **)(*(long *)this + 0x60))(this,pPVar3);
    fVar4 = (float)FUN_04377390(0x43960000);
    fVar5 = (float)FUN_04377390(0x41880000);
    fVar6 = (float)FUN_04377390(0x42080000);
    fVar7 = (float)FUN_04377390(0x422c0000);
    Sexy::Insets::Insets
              (aIStack_38,(int)fVar5,(int)fVar4,(int)((float)*(int *)(this + 0x50) - fVar6),
               (int)((float)(*(int *)(this + 0x54) - (int)fVar4) - fVar7));
    uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Insets::Insets(aIStack_28,aIStack_38);
    FUN_05477b24(auStack_50,this + 0xe0);
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    pPVar2 = (PrimeText_PotentialText *)
             Sexy::BuildPotentialText_Paragraph(uVar1,aIStack_28,auStack_50,1,0,aIStack_18);
    pPVar3 = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(pPVar3,pPVar2);
    FUN_05476c50(auStack_50);
    Sexy::PrimeTextWidget::SetDontDrawWhenOffscreen(pPVar3,true);
    (**(code **)(*(long *)this + 0x60))(this,pPVar3);
    this[0x108] = (PVZ2UIAlmanacUpgradeDisplayer)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAlmanacUpgradeDisplayer::PVZ2UIAlmanacUpgradeDisplayer(Sexy::RtWeakPtr<ObjectTypeDescriptor
   const>) */

void __thiscall
PVZ2UIAlmanacUpgradeDisplayer::PVZ2UIAlmanacUpgradeDisplayer
          (PVZ2UIAlmanacUpgradeDisplayer *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  LawnApp *pLVar1;
  char cVar2;
  long extraout_x0;
  PVZ2UIGameObjectCard *pPVar3;
  string *extraout_x1;
  string *extraout_x1_00;
  string *psVar4;
  string *extraout_x1_01;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0683a530;
  FUN_05476574(this + 0xd8);
  FUN_05476574(this + 0xe0);
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"PowerUpIcons");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Images_VaseBreaker");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  nop();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)param_2);
  pPVar3 = ::operator_new(0x160);
  PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(pPVar3,asStack_10,1,0xfffffffe,0,1);
  *(PVZ2UIGameObjectCard **)(this + 0xe8) = pPVar3;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xe8));
  cVar2 = LawnApp::HasPlayerUnlockedFeature(gLawnApp,*(undefined4 *)(extraout_x0 + 0x30));
  psVar4 = extraout_x1;
  if (cVar2 == '\0') {
    NewYearGoodsSelectItem::SelectItem(*(NewYearGoodsSelectItem **)(this + 0xe8),true);
    PVZ2UIGameObjectCard::SetShowLock(*(PVZ2UIGameObjectCard **)(this + 0xe8),true);
    psVar4 = extraout_x1_00;
  }
  Sexy::UTF8StringToWString((Sexy *)(extraout_x0 + 0x10),psVar4);
  TodStringTranslate((wstring *)asStack_10);
  FUN_054766c8(this + 0xd8,auStack_18);
  FUN_05476c50(auStack_18);
  FUN_05476c50(asStack_10);
  Sexy::UTF8StringToWString((Sexy *)(extraout_x0 + 0x18),extraout_x1_01);
  TodStringTranslate((wstring *)asStack_10);
  FUN_054766c8(this + 0xe0,auStack_18);
  FUN_05476c50(auStack_18);
  FUN_05476c50(asStack_10);
  this[0x108] = (PVZ2UIAlmanacUpgradeDisplayer)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

