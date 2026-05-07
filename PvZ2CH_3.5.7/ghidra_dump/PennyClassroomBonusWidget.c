// Class: PennyClassroomBonusWidget


/* PennyClassroomBonusWidget::~PennyClassroomBonusWidget() */

void __thiscall
PennyClassroomBonusWidget::~PennyClassroomBonusWidget(PennyClassroomBonusWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069cddd0;
  *(undefined ***)(this + 0x148) = &PTR_ButtonPress_069ce1c0;
  FUN_05476c50(this + 0x158);
  UIRewardFrame::~UIRewardFrame((UIRewardFrame *)this);
  return;
}


/* PennyClassroomBonusWidget::~PennyClassroomBonusWidget() */

void __thiscall
PennyClassroomBonusWidget::~PennyClassroomBonusWidget(PennyClassroomBonusWidget *this)

{
  ~PennyClassroomBonusWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassroomBonusWidget::PennyClassroomBonusWidget(UIRewardFrame::RewardType, std::string
   const&, int, bool) */

void __thiscall
PennyClassroomBonusWidget::PennyClassroomBonusWidget(PennyClassroomBonusWidget *this)

{
  long lVar1;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIRewardFrame::UIRewardFrame();
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x148));
  *(undefined ***)this = &PTR_GetClass_069cddd0;
  *(undefined ***)(this + 0x148) = &PTR_ButtonPress_069ce1c0;
  FUN_05476574(this + 0x158);
  this[0x59] = (PennyClassroomBonusWidget)0x0;
  *(undefined4 *)(this + 0x150) = 0;
  std::string::string(asStack_10,"[PLANT_OBTAINED]");
  StringHelper::ToStringValue(asStack_10);
  FUN_054766c8(this + 0x158,auStack_18);
  FUN_05476c50(auStack_18);
  std::string::~string(asStack_10);
  nop();
  *(undefined4 *)(this + 0x160) = 0;
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassroomBonusWidget::InitView() */

void __thiscall PennyClassroomBonusWidget::InitView(PennyClassroomBonusWidget *this)

{
  PVZ2UIButton *this_00;
  code *pcVar1;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color((Color *)aIStack_18,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,*(int *)(this + 0x160),(ButtonListener *)(this + 0x148),awStack_20,
             (Color *)aIStack_18);
  FUN_05476c50(awStack_20);
  nop();
  pcVar1 = *(code **)(*(long *)this_00 + 0x1a0);
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  (*pcVar1)(this_00,aIStack_18);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassroomBonusWidget::ButtonDepress(int) */

void PennyClassroomBonusWidget::ButtonDepress(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  ulong uVar4;
  wchar16 *pwVar5;
  UIPennyClassroomStartLevel *pUVar6;
  UIPennyClassroomSurvey *pUVar7;
  int in_w1;
  LineBreakCategory *pLVar8;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_d8 [8];
  string asStack_d0 [200];
  long local_8;
  
  uVar4 = (ulong)(uint)param_1;
  pLVar8 = aLStack_d8;
  local_8 = ___stack_chk_guard;
  pwVar5 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_d0,"PennyClassroomCheat");
  cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar5,(wchar16 *)asStack_d0,pLVar8,in_x3,in_x4);
  std::string::~string(asStack_d0);
  nop();
  if ((cVar3 != '\0') && (*(int *)(uVar4 + 0x160) == in_w1)) {
    if (*(int *)(uVar4 + 0x164) == 0) {
      pUVar7 = (UIPennyClassroomSurvey *)UISingletonDialog<UIPennyClassroomSurvey>::ShowDialog();
      uVar1 = *(undefined4 *)(uVar4 + 0x168);
      Sexy::LazySingleton<PennyClassroomManager>::GetInstancePtr();
      PennyClassroomManager::GetData();
      UIPennyClassroomSurvey::InitView(pUVar7,uVar1,asStack_d0);
      NetworkPennyClassroomData::~NetworkPennyClassroomData((NetworkPennyClassroomData *)asStack_d0)
      ;
    }
    else {
      pUVar6 = (UIPennyClassroomStartLevel *)
               UISingletonDialog<UIPennyClassroomStartLevel>::ShowDialog();
      uVar1 = *(undefined4 *)(uVar4 + 0x164);
      uVar2 = *(undefined4 *)(uVar4 + 0x168);
      Sexy::LazySingleton<PennyClassroomManager>::GetInstancePtr();
      PennyClassroomManager::GetData();
      UIPennyClassroomStartLevel::InitView(pUVar6,uVar1,uVar2,asStack_d0);
      NetworkPennyClassroomData::~NetworkPennyClassroomData((NetworkPennyClassroomData *)asStack_d0)
      ;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PennyClassroomBonusWidget::ButtonDepress(int) */

void __thiscall
PennyClassroomBonusWidget::ButtonDepress(PennyClassroomBonusWidget *this,int param_1)

{
  ButtonDepress((int)this + -0x148);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassroomBonusWidget::CreateUIRewardFrame(int, int, bool) */

void PennyClassroomBonusWidget::CreateUIRewardFrame(int param_1,int param_2,bool param_3)

{
  char cVar1;
  int iVar2;
  NameMapperBase *pNVar3;
  PennyClassroomBonusWidget *pPVar4;
  string *extraout_x0;
  size_t __n;
  undefined1 uVar5;
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  __n = (size_t)param_3;
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_40,param_2);
  pNVar3 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
  if (cVar1 == '\0') {
    pNVar3 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
    if (cVar1 == '\0') {
      pNVar3 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
      cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
      if (cVar1 == '\0') {
        OtherServerNameMapper::GetInstance();
        cVar1 = FUN_04de78d8(param_1);
        if (cVar1 != '\0') {
          uVar5 = 1;
          std::string::append(asStack_40,"gem",__n);
          goto LAB_04df2fec;
        }
        OtherServerNameMapper::GetInstance();
        cVar1 = FUN_04de78c8(param_1);
        if (cVar1 != '\0') {
          std::string::append(asStack_40,"coin",__n);
          uVar5 = 0;
          goto LAB_04df2fec;
        }
        pNVar3 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
        cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
        if (cVar1 == '\0') {
          pNVar3 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
          cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
          if (cVar1 == '\0') {
            pNVar3 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
            cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
            if (cVar1 == '\0') {
              pNVar3 = (NameMapperBase *)MaterialItemMapper::GetInstance();
              cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
              if (cVar1 == '\0') {
                pNVar3 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
                cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
                if (cVar1 == '\0') {
                  pNVar3 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
                  cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
                  if (cVar1 == '\0') {
                    pNVar3 = (NameMapperBase *)ArtifactMapper::GetInstance();
                    cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
                    if (cVar1 == '\0') {
                      if (param_1 - 0x61a9U < 999) {
                        DSingleton<HeadshotConfig>::getInstance();
                        nop();
                        DString::DString((DString *)asStack_18,param_1);
                        DString::operator_cast_to_string((DString *)asStack_18);
                        uVar5 = 0xd;
                        std::string::string(asStack_30,"plant");
                        std::string::string(asStack_28,"none");
                        DIniFile::getItem(extraout_x0,asStack_38,asStack_30);
                        thunk_FUN_05475e00(asStack_40,asStack_20);
                        std::string::~string(asStack_20);
                        std::string::~string(asStack_28);
                        nop();
                        std::string::~string(asStack_30);
                        nop();
                        std::string::~string(asStack_38);
                        DString::~DString((DString *)asStack_18);
                        goto LAB_04df2fec;
                      }
                      pNVar3 = (NameMapperBase *)CardMapper::GetInstance();
                      uVar5 = 3;
                      cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
                      if (cVar1 == '\0') goto LAB_04df2fec;
                      iVar2 = CardMapper::GetInstance();
                      uVar5 = 0xf;
                    }
                    else {
                      iVar2 = ArtifactMapper::GetInstance();
                      uVar5 = 0xc;
                    }
                  }
                  else {
                    iVar2 = PlantNewAvatarPieceMapper::GetInstance();
                    uVar5 = 0xb;
                  }
                }
                else {
                  iVar2 = PlantNewAvatarMapper::GetInstance();
                  uVar5 = 10;
                }
              }
              else {
                iVar2 = MaterialItemMapper::GetInstance();
                uVar5 = 9;
              }
            }
            else {
              iVar2 = PlantAccessoryPieceMapper::GetInstance();
              uVar5 = 8;
            }
          }
          else {
            iVar2 = PlantAccessoryInfoMapper::GetInstance();
            uVar5 = 7;
          }
        }
        else {
          iVar2 = AvatarNameMapperServerID::GetInstance();
          uVar5 = 6;
        }
      }
      else {
        iVar2 = AvatarChipNameMapperServerID::GetInstance();
        uVar5 = 4;
      }
    }
    else {
      iVar2 = PlantChipNameMapperServerID::GetInstance();
      uVar5 = 3;
    }
  }
  else {
    iVar2 = PlantNameMapperServerID::GetInstance();
    uVar5 = 2;
  }
  NameMapperBase::GetNameForId(iVar2);
  FUN_05474278(asStack_40,asStack_18);
  std::string::~string(asStack_18);
LAB_04df2fec:
  pPVar4 = ::operator_new(0x170);
  PennyClassroomBonusWidget(pPVar4,uVar5,asStack_40,param_2,param_3);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassroomBonusWidget::Draw(Sexy::Graphics*) */

void __thiscall PennyClassroomBonusWidget::Draw(PennyClassroomBonusWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  undefined8 uVar4;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIRewardFrame::Draw((UIRewardFrame *)this,param_1);
  if (*(int *)(this + 0x150) == 0) {
    pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9c6b8);
    Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9c6b8);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9c6b8);
    iVar2 = SalesProgressBar::GetCurrentLevel(this_01);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar1,iVar2);
    Sexy::Graphics::DrawImage(param_1,pIVar3,(TRect *)aIStack_28,(TRect *)aIStack_18);
  }
  else if (*(int *)(this + 0x150) == 2) {
    Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    Sexy::Color::Color((Color *)aIStack_18,5);
    WriteWordInRect(param_1,this + 0x158,aIStack_28,uVar4,(Color *)aIStack_18,5,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

