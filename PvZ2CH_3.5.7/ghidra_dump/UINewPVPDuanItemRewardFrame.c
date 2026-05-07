// Class: UINewPVPDuanItemRewardFrame


/* UINewPVPDuanItemRewardFrame::~UINewPVPDuanItemRewardFrame() */

void __thiscall
UINewPVPDuanItemRewardFrame::~UINewPVPDuanItemRewardFrame(UINewPVPDuanItemRewardFrame *this)

{
  *(undefined ***)this = &PTR_GetClass_06651190;
  if (*(long **)(this + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x168) + 0x48))();
    *(undefined8 *)(this + 0x168) = 0;
  }
  FUN_05476c50(this + 0x150);
  UIRewardFrame::~UIRewardFrame((UIRewardFrame *)this);
  return;
}


/* UINewPVPDuanItemRewardFrame::~UINewPVPDuanItemRewardFrame() */

void __thiscall
UINewPVPDuanItemRewardFrame::~UINewPVPDuanItemRewardFrame(UINewPVPDuanItemRewardFrame *this)

{
  ~UINewPVPDuanItemRewardFrame(this);
  AK::FreeHook(this);
  return;
}


/* UINewPVPDuanItemRewardFrame::Update() */

void __thiscall UINewPVPDuanItemRewardFrame::Update(UINewPVPDuanItemRewardFrame *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (*(StandaloneEffect **)(this + 0x168) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x168));
    return;
  }
  return;
}


/* UINewPVPDuanItemRewardFrame::UINewPVPDuanItemRewardFrame(UIRewardFrame::RewardType, std::string
   const&, int, bool) */

void __thiscall
UINewPVPDuanItemRewardFrame::UINewPVPDuanItemRewardFrame(UINewPVPDuanItemRewardFrame *this)

{
  UIRewardFrame::UIRewardFrame();
  *(undefined ***)this = &PTR_GetClass_06651190;
  FUN_05476574(this + 0x150);
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  this[0x174] = (UINewPVPDuanItemRewardFrame)0x0;
  *(undefined4 *)(this + 0x170) = 0xffffffff;
  *(undefined8 *)(this + 0x158) = 0;
  return;
}


/* UINewPVPDuanItemRewardFrame::DrawObtainedImage(Sexy::Graphics*) */

void __thiscall
UINewPVPDuanItemRewardFrame::DrawObtainedImage(UINewPVPDuanItemRewardFrame *this,Graphics *param_1)

{
  if (*(Image **)(this + 0x160) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x160),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    return;
  }
  return;
}


/* UINewPVPDuanItemRewardFrame::SetObtainedString(std::string) */

void __thiscall
UINewPVPDuanItemRewardFrame::SetObtainedString(UINewPVPDuanItemRewardFrame *this,string *param_2)

{
  undefined8 uVar1;
  
  uVar1 = StringHelper::ToImage(param_2,false);
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x160) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPDuanItemRewardFrame::CreateUIRewardFrame(UINewPVPDuanItemRewardFrame*) */

void UINewPVPDuanItemRewardFrame::CreateUIRewardFrame(UINewPVPDuanItemRewardFrame *param_1)

{
  wstring *this;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = ::operator_new(0x178);
  UINewPVPDuanItemRewardFrame
            ((UINewPVPDuanItemRewardFrame *)this,*(undefined4 *)(param_1 + 0xd4),param_1 + 0xd8,
             *(undefined4 *)(param_1 + 0xe8),param_1[0xd1]);
  FUN_05477b24(auStack_10,param_1 + 0x150);
  LevelEditorStatueMazeSliderWidget::SetDescription4(this);
  FUN_05476c50(auStack_10);
  UIRewardFrame::SetObjectID((UIRewardFrame *)this,*(int *)(param_1 + 300));
  Lua::CUILabel::SetTypeface((CUILabel *)this,*(PrimeTypeface **)(param_1 + 0xe0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPDuanItemRewardFrame::TouchBegan(Sexy::Touch const&) */

void UINewPVPDuanItemRewardFrame::TouchBegan(Touch *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LotteryResultProgressBar *this;
  StoneLotteryItemTipUI *this_00;
  long lVar5;
  int iVar6;
  int local_20;
  int local_1c;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(param_1 + 0x100) != 0) {
    (**(code **)(*(long *)param_1 + 0xd0))(&local_20);
    std::string::string(asStack_18,"IMAGE_UI_DIALOG_ASSET_TIPS_BG");
    this = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_18,true);
    std::string::~string(asStack_18);
    nop();
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(this);
    iVar6 = (int)((float)iVar2 + (float)iVar2);
    iVar3 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this);
    iVar2 = *(int *)(param_1 + 0x50);
    iVar4 = FUN_0352e078(5);
    Sexy::Insets::Insets
              ((Insets *)asStack_18,local_20 + (iVar2 - iVar6) / 2,
               (local_1c - (int)((float)iVar3 * 0.5)) + iVar4,iVar6,(int)((float)iVar3 * 0.5));
    lVar5 = *(long *)(param_1 + 0x158);
    if (lVar5 == 0) {
      this_00 = ::operator_new(0xe8);
      memset(this_00,0,0xe8);
      StoneLotteryItemTipUI::StoneLotteryItemTipUI(this_00);
      uVar1 = *(uint *)(this_00 + 0x60);
      *(StoneLotteryItemTipUI **)(param_1 + 0x158) = this_00;
      *(uint *)(this_00 + 0x60) = uVar1 | 0x10;
      (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),this_00);
      (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
                (*(long **)(gLawnApp + 0x360),*(undefined8 *)(param_1 + 0x158));
      lVar5 = *(long *)(param_1 + 0x158);
    }
    PuzzleTip::SetTip(lVar5,param_1 + 0x150);
    (**(code **)(**(long **)(param_1 + 0x158) + 0x1a0))(*(long **)(param_1 + 0x158),asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPDuanItemRewardFrame::SetCanReward(bool) */

void __thiscall
UINewPVPDuanItemRewardFrame::SetCanReward(UINewPVPDuanItemRewardFrame *this,bool param_1)

{
  Effect_PopAnim *pEVar1;
  ResourceInfo *pRVar2;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x174] != (UINewPVPDuanItemRewardFrame)param_1) {
    this[0x174] = (UINewPVPDuanItemRewardFrame)param_1;
    if (param_1) {
      pEVar1 = GameObject::CreateOutsideTable<Effect_PopAnim>();
      *(Effect_PopAnim **)(this + 0x168) = pEVar1;
      std::string::string(asStack_18,"POPANIM_EFFECTS_NEW_PVP_FRAME_EFFECT");
      GetPAMByName(asStack_18);
      pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
      Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      std::string::~string(asStack_18);
      nop();
      Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x168),true);
      (**(code **)(**(long **)(this + 0x168) + 0x80))(0x3f400000,*(long **)(this + 0x168));
      StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x168),false);
      pEVar1 = *(Effect_PopAnim **)(this + 0x168);
      std::string::string((string *)aRStack_10,"idle");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar1,aRStack_10,0);
      std::string::~string((string *)aRStack_10);
      nop();
      this[0x59] = (UINewPVPDuanItemRewardFrame)0x0;
    }
    else {
      if (*(long **)(this + 0x168) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x168) + 0x48))();
        *(undefined8 *)(this + 0x168) = 0;
      }
      this[0x59] = (UINewPVPDuanItemRewardFrame)0x1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPDuanItemRewardFrame::RequestReward() */

void __thiscall UINewPVPDuanItemRewardFrame::RequestReward(UINewPVPDuanItemRewardFrame *this)

{
  undefined8 uVar1;
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2272];
  string asStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x170) != -1) && (this[0x174] != (UINewPVPDuanItemRewardFrame)0x0)) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    std::string::string(asStack_d40,"index");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x170));
    FUN_05474278(uVar1,asStack_ce8);
    std::string::~string(asStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)asStack_ce8);
    FUN_0352e01c(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_00,asStack_408,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)asStack_ce8);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPDuanItemRewardFrame::TouchEnded(Sexy::Touch const&) */

void UINewPVPDuanItemRewardFrame::TouchEnded(Touch *param_1)

{
  if (*(long *)(param_1 + 0x158) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(param_1 + 0x158));
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  if ((*(long *)(param_1 + 0x100) == 0) && (*(long *)(param_1 + 0x160) == 0)) {
    RequestReward((UINewPVPDuanItemRewardFrame *)param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPDuanItemRewardFrame::CreateUIRewardFrame(int, int, bool) */

void UINewPVPDuanItemRewardFrame::CreateUIRewardFrame(int param_1,int param_2,bool param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  NameMapperBase *pNVar4;
  wstring *this;
  string *extraout_x0;
  int iVar5;
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
  pNVar4 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
  if (cVar1 == '\0') {
    pNVar4 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
    if (cVar1 == '\0') {
      pNVar4 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
      cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
      if (cVar1 == '\0') {
        OtherServerNameMapper::GetInstance();
        cVar1 = FUN_0352d7a4(param_1);
        if (cVar1 != '\0') {
          uVar6 = 1;
          std::string::append(asStack_68,"gem",__n);
          goto LAB_03538230;
        }
        OtherServerNameMapper::GetInstance();
        cVar1 = FUN_0352d794(param_1);
        if (cVar1 != '\0') {
          std::string::append(asStack_68,"coin",__n);
          uVar6 = 0;
          goto LAB_03538230;
        }
        pNVar4 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
        cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
        if (cVar1 == '\0') {
          pNVar4 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
          cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
          if (cVar1 == '\0') {
            pNVar4 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
            cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
            if (cVar1 == '\0') {
              pNVar4 = (NameMapperBase *)MaterialItemMapper::GetInstance();
              cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
              if (cVar1 == '\0') {
                pNVar4 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
                cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                if (cVar1 == '\0') {
                  pNVar4 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
                  cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                  if (cVar1 == '\0') {
                    OtherServerNameMapper::GetInstance();
                    cVar1 = FUN_02fd3c18(param_1);
                    if (cVar1 != '\0') {
                      uVar6 = 5;
                      std::string::append(asStack_68,"cuke",__n);
                      goto LAB_03538230;
                    }
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
                      goto LAB_03538230;
                    }
                    pNVar4 = (NameMapperBase *)CollectionMapper::GetInstance();
                    cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                    if (cVar1 != '\0') {
                      iVar3 = CollectionMapper::GetInstance();
                      iVar5 = (int)__n;
                      uVar6 = 0xe;
                      NameMapperBase::GetNameForId(iVar3);
                      FUN_05474278(asStack_68,(string *)local_38);
                      std::string::~string((string *)local_38);
                      CollectionUtils::GetCollectionName
                                ((CollectionUtils *)(ulong)(uint)param_1,param_2,iVar5);
                      FUN_054766c8(auStack_60,(string *)local_38);
                      FUN_05476c50((string *)local_38);
                      goto LAB_03538230;
                    }
                    pNVar4 = (NameMapperBase *)CardMapper::GetInstance();
                    cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                    if (cVar1 == '\0') {
                      pNVar4 = (NameMapperBase *)RankAvatarMapper::GetInstance();
                      cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                      if (cVar1 == '\0') {
                        uVar6 = 5;
                        std::string::append(asStack_68,"",__n);
                        goto LAB_03538230;
                      }
                      iVar3 = RankAvatarMapper::GetInstance();
                      uVar6 = 0x12;
                    }
                    else {
                      iVar3 = CardMapper::GetInstance();
                      uVar6 = 0xf;
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
LAB_03538230:
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
  this = ::operator_new(0x178);
  UINewPVPDuanItemRewardFrame
            ((UINewPVPDuanItemRewardFrame *)this,uVar6,asStack_68,(ulong)(uint)param_2,param_3);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPDuanItemRewardFrame::CreateUIRewardsFrame(NewPVPDuanRewardsData) */

void UINewPVPDuanItemRewardFrame::CreateUIRewardsFrame(long param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  wstring *this;
  PrimeTypeface *pPVar4;
  string *extraout_x1;
  undefined1 auStack_20 [8];
  Sexy aSStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  piVar2 = (int *)std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::
                  front((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                         *)(param_1 + 0x10));
  iVar1 = *piVar2;
  lVar3 = std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::front
                    ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
                     (param_1 + 0x10));
  this = (wstring *)CreateUIRewardFrame(iVar1,*(int *)(lVar3 + 4),true);
  if (0 < *(int *)(param_1 + 8)) {
    Sexy::StrFormat("[NEW_PVP_DUAN_RANDOM_%d]",aSStack_18);
    Sexy::ToSexyString(aSStack_18,extraout_x1);
    TodStringTranslate(awStack_10);
    FUN_05476c50(awStack_10);
    std::string::~string((string *)aSStack_18);
    *(undefined4 *)(this + 0xd4) = 5;
    FUN_05477b24(awStack_10,auStack_20);
    LevelEditorStatueMazeSliderWidget::SetDescription4(this);
    FUN_05476c50(awStack_10);
    Sexy::StrFormat("IMAGE_UI_NEW_PVP_DUAN_REWARDS_%d",awStack_10,(ulong)*(uint *)(param_1 + 8));
    pPVar4 = (PrimeTypeface *)StringHelper::ToImage((string *)awStack_10,true);
    std::string::~string((string *)awStack_10);
    Lua::CUILabel::SetTypeface((CUILabel *)this,pPVar4);
    FUN_05476c50(auStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPDuanItemRewardFrame::Draw(Sexy::Graphics*) */

void __thiscall
UINewPVPDuanItemRewardFrame::Draw(UINewPVPDuanItemRewardFrame *this,Graphics *param_1)

{
  StandaloneEffect *this_00;
  float fVar1;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x168) != 0) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
    fVar1 = (float)FUN_0352e08c(0x42200000);
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar1;
    fVar1 = (float)FUN_0352e08c(0x42100000);
    this_00 = *(StandaloneEffect **)(this + 0x168);
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + fVar1;
    StandaloneEffect::SetVisibility(this_00,true);
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x168),param_1);
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x168),false);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  }
  UIRewardFrame::Draw((UIRewardFrame *)this,param_1);
  DrawObtainedImage(this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

