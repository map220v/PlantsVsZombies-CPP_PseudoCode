// Class: HeroPlantIntroWidget


/* HeroPlantIntroWidget::TouchBegan(Sexy::Touch const&) */

void __thiscall HeroPlantIntroWidget::TouchBegan(HeroPlantIntroWidget *this,Touch *param_1)

{
  *(int *)(this + 0xec) = (int)*(undefined8 *)param_1;
  return;
}


/* HeroPlantIntroWidget::~HeroPlantIntroWidget() */

void __thiscall HeroPlantIntroWidget::~HeroPlantIntroWidget(HeroPlantIntroWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0682c1d0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* HeroPlantIntroWidget::~HeroPlantIntroWidget() */

void __thiscall HeroPlantIntroWidget::~HeroPlantIntroWidget(HeroPlantIntroWidget *this)

{
  ~HeroPlantIntroWidget(this);
  AK::FreeHook(this);
  return;
}


/* HeroPlantIntroWidget::HeroPlantIntroWidget() */

void __thiscall HeroPlantIntroWidget::HeroPlantIntroWidget(HeroPlantIntroWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0682c1d0;
  Sexy::Point::Point((Point *)(this + 0xd4));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantIntroWidget::SetState(HeroPlantIntroWidget::HeroPlantIntroState) */

void __thiscall HeroPlantIntroWidget::SetState(HeroPlantIntroWidget *this,int param_2)

{
  int iVar1;
  LawnApp *pLVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  Board *pBVar7;
  float fVar8;
  float fVar9;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe8) = param_2;
  pLVar2 = gLawnApp;
  if (param_2 == 0) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0))
    ;
    uVar3 = *(undefined4 *)(lVar6 + 0x1c);
    fVar8 = (float)FUN_042ba73c(*(undefined4 *)(lVar6 + 0x18),uVar3,*(undefined4 *)(lVar6 + 0x20));
    fVar8 = (float)FUN_042bab90(fVar8 + 36.0);
    fVar9 = (float)FUN_042bab90(uVar3);
    Sexy::Point::Point((Point *)&local_20,(int)fVar8,(int)fVar9);
    Board::TranslateBoardPositionToScreenPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_20);
    Board::GetBoardBaseOffset();
    Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_20,(TPoint *)&local_10);
    Sexy::Point::Point((Point *)&local_10,local_20,local_1c);
    pLVar2 = gLawnApp;
    *(undefined8 *)(this + 0xd4) = local_10;
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_18,(float)(int)local_10,(float)(int)((ulong)local_10 >> 0x20));
    uVar3 = FUN_042bab7c(100);
    std::string::string((string *)&local_10,"");
    LawnApp::ShowGameMaskUI(local_18,local_14,pLVar2,uVar3,this,(Point *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
    lVar6 = LawnApp::GetGameMaskUI(gLawnApp);
    uVar3 = FUN_042bab7c(0x8c);
    uVar4 = FUN_042bab7c(0x5a);
    FUN_042ba798(0xc2b40000,lVar6 + 0xf8,lVar6 + 0x100,uVar3,uVar4);
    pBVar7 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178((Point *)&local_10,L"[HEROPLANT_INTRO_DESCRIPTION_1]",(FastCurve *)&local_18);
    Board::DisplayAdvice(pBVar7,(Point *)&local_10,8,0);
    FUN_05476c50((Point *)&local_10);
    nop();
  }
  else if (param_2 == 1) {
    iVar5 = FUN_042bab7c(100);
    iVar1 = *(int *)(this + 0xd8);
    *(int *)(this + 0xd8) = iVar1 - iVar5;
    pLVar2 = gLawnApp;
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_18,(float)*(int *)(this + 0xd4),(float)(iVar1 - iVar5));
    uVar3 = FUN_042bab7c(0x32);
    std::string::string((string *)&local_10,"");
    LawnApp::ShowGameMaskUI(local_18,local_14,pLVar2,uVar3,this,(string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
    lVar6 = LawnApp::GetGameMaskUI(gLawnApp);
    uVar3 = FUN_042bab7c(0x82);
    uVar4 = FUN_042bab7c(0x87);
    FUN_042ba798(0xc3340000,lVar6 + 0xf8,lVar6 + 0x100,uVar3,uVar4);
    pBVar7 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178((string *)&local_10,L"[HEROPLANT_INTRO_DESCRIPTION_2]",(FastCurve *)&local_18);
    Board::DisplayAdvice(pBVar7,(string *)&local_10,8,0);
    FUN_05476c50((string *)&local_10);
    nop();
  }
  else if (param_2 == 2) {
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_18,(float)*(int *)(this + 0xd4),(float)*(int *)(this + 0xd8));
    uVar3 = FUN_042bab7c(0x32);
    std::string::string((string *)&local_10,"");
    LawnApp::ShowGameMaskUI(local_18,local_14,pLVar2,uVar3,this,(string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
    lVar6 = LawnApp::GetGameMaskUI(gLawnApp);
    uVar3 = FUN_042bab7c(0x82);
    uVar4 = FUN_042bab7c(0x87);
    FUN_042ba798(0xc3340000,lVar6 + 0xf8,lVar6 + 0x100,uVar3,uVar4);
    pBVar7 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178((string *)&local_10,L"[HEROPLANT_INTRO_DESCRIPTION_3]",(FastCurve *)&local_18);
    Board::DisplayAdvice(pBVar7,(string *)&local_10,8,0);
    FUN_05476c50((string *)&local_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeroPlantIntroWidget::Init(Sexy::RtWeakPtr<Plant>) */

void __thiscall HeroPlantIntroWidget::Init(HeroPlantIntroWidget *this,RtWeakPtr *param_2)

{
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xe0),param_2);
  SetState(this,0);
  return;
}


/* HeroPlantIntroWidget::TouchEnded(Sexy::Touch const&) */

void __thiscall HeroPlantIntroWidget::TouchEnded(HeroPlantIntroWidget *this,Touch *param_1)

{
  int iVar1;
  HeroPlantTalentSubsystem *pHVar2;
  HeroPlantTalentButton *pHVar3;
  long lVar4;
  
  if (*(int *)(this + 0xec) == (int)*(undefined8 *)param_1) {
    iVar1 = *(int *)(this + 0xe8);
    if (iVar1 == 0) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
      Sexy::RtObject::Cast<HeroPlantFramework>(*(RtObject **)(lVar4 + 0xa8));
      HeroPlantFramework::DoPressHeroPlant();
      SetState(this,1);
      return;
    }
    if (iVar1 == 1) {
      pHVar2 = Board::GetGameSubSystem<HeroPlantTalentSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      pHVar3 = (HeroPlantTalentButton *)HeroPlantTalentSubsystem::GetHeroPlantTalentButton(pHVar2,1)
      ;
      HeroPlantTalentButton::OnClick(pHVar3);
      SetState(this,2);
      return;
    }
    if (iVar1 == 2) {
      pHVar2 = Board::GetGameSubSystem<HeroPlantTalentSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      pHVar3 = (HeroPlantTalentButton *)HeroPlantTalentSubsystem::GetHeroPlantTalentButton(pHVar2,1)
      ;
      HeroPlantTalentButton::OnClick(pHVar3);
      LawnApp::KillGameMaskUI(gLawnApp);
      Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
      MessageRouter::Post((_func_void *)gMessageRouter);
      return;
    }
  }
  return;
}

