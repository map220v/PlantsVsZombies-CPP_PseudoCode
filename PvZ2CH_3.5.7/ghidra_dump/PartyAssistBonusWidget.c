// Class: PartyAssistBonusWidget


/* PartyAssistBonusWidget::~PartyAssistBonusWidget() */

void __thiscall PartyAssistBonusWidget::~PartyAssistBonusWidget(PartyAssistBonusWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069f0430;
  FUN_05476c50(this + 0x170);
  UIRewardFrameSelect::~UIRewardFrameSelect((UIRewardFrameSelect *)this);
  return;
}


/* PartyAssistBonusWidget::~PartyAssistBonusWidget() */

void __thiscall PartyAssistBonusWidget::~PartyAssistBonusWidget(PartyAssistBonusWidget *this)

{
  ~PartyAssistBonusWidget(this);
  AK::FreeHook(this);
  return;
}


/* PartyAssistBonusWidget::PartyAssistBonusWidget(UIRewardFrame::RewardType, std::string const&,
   int, bool) */

void __thiscall PartyAssistBonusWidget::PartyAssistBonusWidget(PartyAssistBonusWidget *this)

{
  UIRewardFrameSelect::UIRewardFrameSelect();
  *(undefined ***)this = &PTR_GetClass_069f0430;
  PartyAssistBonusInfo::PartyAssistBonusInfo((PartyAssistBonusInfo *)(this + 0x160));
  FUN_05476574(this + 0x170);
  this[0x59] = (PartyAssistBonusWidget)0x0;
  FUN_054772c4(this + 0x170,&DAT_056f11a8);
  *(undefined8 *)(this + 0x178) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PartyAssistBonusWidget::Init(PartyAssistBonusInfo&) */

void __thiscall
PartyAssistBonusWidget::Init(PartyAssistBonusWidget *this,PartyAssistBonusInfo *param_1)

{
  UIWidgetImage *this_00;
  UIWidgetText *this_01;
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x160) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x168) = uVar1;
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) == 1) {
    std::string::string(asStack_18,"IMAGE_UI_PARTY_ASSIST_MUSTGOT");
    uVar1 = StringHelper::ToImage(asStack_18,false);
    *(undefined8 *)(this + 0x178) = uVar1;
    std::string::~string(asStack_18);
    nop();
  }
  else if (*(int *)(param_1 + 8) == 2) {
    std::string::string(asStack_18,"IMAGE_UI_GENERIC_GRAY_TRANSPARENT_BG");
    this_00 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(this_00,asStack_18);
    std::string::~string(asStack_18);
    nop();
    (**(code **)(*(long *)this_00 + 0x198))
              (this_00,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
    lVar2 = *(long *)this;
    this_00[0x6d] = (UIWidgetImage)0x0;
    (**(code **)(lVar2 + 0x60))(this,this_00);
    TodStringTranslate(L"[PARTY_ASSIST_WISHING_POOL_GOT]");
    this_01 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(this_01,(wstring *)asStack_18);
    FUN_05476c50(asStack_18);
    (**(code **)(*(long *)this_01 + 0x198))
              (this_01,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
    uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
    FUN_04ea1d80(this_01 + 0xe8,uVar1);
    FUN_04ea28e4(this_01 + 0xe0);
    pcVar3 = *(code **)(*(long *)this_01 + 0x170);
    Sexy::Color::Color((Color *)asStack_18,1);
    (*pcVar3)(this_01,0,asStack_18);
    lVar2 = *(long *)this_00;
    this_01[0x6d] = (UIWidgetText)0x0;
    (**(code **)(lVar2 + 0x60))(this_00,this_01);
  }
  else {
    FUN_05478178(awStack_20,L"[PARTY_ASSIST_RATIO]",auStack_28);
    TodReplaceNumberString(awStack_20,L"{NUMS}",(int)*(float *)(param_1 + 0xc));
    FUN_054766c8(this + 0x170,asStack_18);
    FUN_05476c50(asStack_18);
    FUN_05476c50(awStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PartyAssistBonusWidget::Draw(Sexy::Graphics*) */

void __thiscall PartyAssistBonusWidget::Draw(PartyAssistBonusWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  SalesProgressBar *this_00;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIRewardFrame::Draw((UIRewardFrame *)this,param_1);
  if (*(long *)(this + 0x178) != 0) {
    iVar1 = FUN_04ea3948(0x32);
    Sexy::Insets::Insets(aIStack_28,0,0,iVar1,iVar1);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x178));
    this_00 = *(SalesProgressBar **)(this + 0x178);
    iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar1,iVar2);
    Sexy::Graphics::DrawImage(param_1,(Image *)this_00,(TRect *)aIStack_28,(TRect *)aIStack_18);
  }
  iVar1 = FUN_04ea3948(0xffffffec);
  iVar2 = FUN_04ea3948(0x14);
  Sexy::Insets::Insets(aIStack_28,0,iVar1,*(int *)(this + 0x50),iVar2);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,4);
  WriteWordInRect(param_1,this + 0x170,aIStack_28,uVar3,(Color *)aIStack_18,5,1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PartyAssistBonusWidget::CreateUIRewardFrame(int, int, bool) */

void PartyAssistBonusWidget::CreateUIRewardFrame(int param_1,int param_2,bool param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  NameMapperBase *pNVar5;
  wstring *this;
  string *extraout_x0;
  size_t __n;
  undefined1 uVar6;
  PrimeTypeface *pPVar7;
  string asStack_68 [8];
  undefined1 auStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  int local_38 [8];
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  __n = (size_t)param_3;
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_68);
  FUN_05476574(auStack_60);
  pNVar5 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar5,param_1);
  if (cVar1 == '\0') {
    pNVar5 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar5,param_1);
    if (cVar1 == '\0') {
      pNVar5 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
      cVar1 = NameMapperBase::ContainsId(pNVar5,param_1);
      if (cVar1 == '\0') {
        OtherServerNameMapper::GetInstance();
        cVar1 = FUN_04ea1d50(param_1);
        if (cVar1 != '\0') {
          uVar6 = 1;
          std::string::append(asStack_68,"gem",__n);
          goto LAB_04ead148;
        }
        OtherServerNameMapper::GetInstance();
        cVar1 = FUN_04ea1d40(param_1);
        if (cVar1 != '\0') {
          std::string::append(asStack_68,"coin",__n);
          uVar6 = 0;
          goto LAB_04ead148;
        }
        pNVar5 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
        iVar3 = (int)__n;
        cVar1 = NameMapperBase::ContainsId(pNVar5,param_1);
        if (cVar1 == '\0') {
          pNVar5 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
          cVar1 = NameMapperBase::ContainsId(pNVar5,param_1);
          if (cVar1 == '\0') {
            pNVar5 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
            cVar1 = NameMapperBase::ContainsId(pNVar5,param_1);
            if (cVar1 == '\0') {
              pNVar5 = (NameMapperBase *)MaterialItemMapper::GetInstance();
              cVar1 = NameMapperBase::ContainsId(pNVar5,param_1);
              if (cVar1 == '\0') {
                pNVar5 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
                cVar1 = NameMapperBase::ContainsId(pNVar5,param_1);
                if (cVar1 == '\0') {
                  pNVar5 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
                  cVar1 = NameMapperBase::ContainsId(pNVar5,param_1);
                  if (cVar1 == '\0') {
                    pNVar5 = (NameMapperBase *)ArtifactMapper::GetInstance();
                    cVar1 = NameMapperBase::ContainsId(pNVar5,param_1);
                    if (cVar1 == '\0') {
                      if (param_1 - 0x61a9U < 999) {
                        DSingleton<HeadshotConfig>::getInstance();
                        nop();
                        DString::DString((DString *)local_38,param_1);
                        DString::operator_cast_to_string((DString *)local_38);
                        std::string::string(asStack_50,"plant");
                        uVar6 = 0xd;
                        std::string::string(asStack_48,"none");
                        DIniFile::getItem(extraout_x0,asStack_58,asStack_50);
                        thunk_FUN_05475e00(asStack_68,asStack_40);
                        std::string::~string(asStack_40);
                        std::string::~string(asStack_48);
                        nop();
                        std::string::~string(asStack_50);
                        nop();
                        std::string::~string(asStack_58);
                        DString::~DString((DString *)local_38);
                        goto LAB_04ead148;
                      }
                      pNVar5 = (NameMapperBase *)CollectionMapper::GetInstance();
                      cVar1 = NameMapperBase::ContainsId(pNVar5,param_1);
                      if (cVar1 != '\0') {
                        iVar4 = CollectionMapper::GetInstance();
                        uVar6 = 0xe;
                        NameMapperBase::GetNameForId(iVar4);
                        FUN_05474278(asStack_68,(string *)local_38);
                        std::string::~string((string *)local_38);
                        CollectionUtils::GetCollectionName
                                  ((CollectionUtils *)(ulong)(uint)param_1,param_2,iVar3);
                        FUN_054766c8(auStack_60,(string *)local_38);
                        FUN_05476c50((string *)local_38);
                        goto LAB_04ead148;
                      }
                      pNVar5 = (NameMapperBase *)CardMapper::GetInstance();
                      cVar1 = NameMapperBase::ContainsId(pNVar5,param_1);
                      if (cVar1 == '\0') {
                        uVar6 = 3;
                        goto LAB_04ead148;
                      }
                      iVar3 = CardMapper::GetInstance();
                      uVar6 = 0xf;
                    }
                    else {
                      iVar3 = ArtifactMapper::GetInstance();
                      uVar6 = 0xc;
                    }
                  }
                  else {
                    iVar3 = PlantNewAvatarPieceMapper::GetInstance();
                    uVar6 = 0xb;
                  }
                }
                else {
                  iVar3 = PlantNewAvatarMapper::GetInstance();
                  uVar6 = 10;
                }
              }
              else {
                iVar3 = MaterialItemMapper::GetInstance();
                uVar6 = 9;
              }
            }
            else {
              iVar3 = PlantAccessoryPieceMapper::GetInstance();
              uVar6 = 8;
            }
          }
          else {
            iVar3 = PlantAccessoryInfoMapper::GetInstance();
            uVar6 = 7;
          }
        }
        else {
          iVar3 = AvatarNameMapperServerID::GetInstance();
          uVar6 = 6;
        }
      }
      else {
        iVar3 = AvatarChipNameMapperServerID::GetInstance();
        uVar6 = 4;
      }
    }
    else {
      iVar3 = PlantChipNameMapperServerID::GetInstance();
      uVar6 = 3;
    }
  }
  else {
    iVar3 = PlantNameMapperServerID::GetInstance();
    uVar6 = 2;
  }
  NameMapperBase::GetNameForId(iVar3);
  FUN_05474278(asStack_68,(string *)local_38);
  std::string::~string((string *)local_38);
LAB_04ead148:
  pPVar7 = (PrimeTypeface *)0x0;
  GetGameItemInfo(param_1,0x7fffffff,0);
  if (local_38[0] != 0) {
    cVar1 = FUN_054765e8(auStack_60);
    if ((cVar1 != '\0') && (thunk_FUN_05477b9c(auStack_60,auStack_10), 0 < param_2)) {
      Sexy::StrFormat(L"x%d",asStack_40,(ulong)(uint)param_2);
      thunk_FUN_05477668(auStack_60,asStack_40);
      FUN_05476c50(asStack_40);
    }
    pPVar7 = (PrimeTypeface *)StringHelper::ToImage(asStack_18,false);
  }
  this = ::operator_new(0x180);
  PartyAssistBonusWidget
            ((PartyAssistBonusWidget *)this,uVar6,asStack_68,(ulong)(uint)param_2,param_3);
  FUN_05477b24(asStack_40,auStack_60);
  LevelEditorStatueMazeSliderWidget::SetDescription4(this);
  FUN_05476c50(asStack_40);
  UIRewardFrame::SetObjectID((UIRewardFrame *)this,param_1);
  bVar2 = std::operator==(asStack_68,"cuke");
  if (bVar2) {
    Lua::CUILabel::SetTypeface((CUILabel *)this,pPVar7);
  }
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
  FUN_05476c50(auStack_60);
  std::string::~string(asStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

