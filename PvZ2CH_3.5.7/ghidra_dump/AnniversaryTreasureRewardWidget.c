// Class: AnniversaryTreasureRewardWidget


/* AnniversaryTreasureRewardWidget::TouchEnded(Sexy::Touch const&) */

void AnniversaryTreasureRewardWidget::TouchEnded(Touch *param_1)

{
  if (*(long *)(param_1 + 0x138) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(param_1 + 0x138));
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  return;
}


/* AnniversaryTreasureRewardWidget::SetObtain(bool) */

void __thiscall
AnniversaryTreasureRewardWidget::SetObtain(AnniversaryTreasureRewardWidget *this,bool param_1)

{
  this[0xdc] = (AnniversaryTreasureRewardWidget)param_1;
  (**(code **)(*(long *)this + 0x158))(this,!param_1);
  return;
}


/* AnniversaryTreasureRewardWidget::~AnniversaryTreasureRewardWidget() */

void __thiscall
AnniversaryTreasureRewardWidget::~AnniversaryTreasureRewardWidget
          (AnniversaryTreasureRewardWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06708980;
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0xf8));
  FUN_05476c50(this + 0xf0);
  FUN_05476c50(this + 0xe8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* AnniversaryTreasureRewardWidget::~AnniversaryTreasureRewardWidget() */

void __thiscall
AnniversaryTreasureRewardWidget::~AnniversaryTreasureRewardWidget
          (AnniversaryTreasureRewardWidget *this)

{
  ~AnniversaryTreasureRewardWidget(this);
  AK::FreeHook(this);
  return;
}


/* AnniversaryTreasureRewardWidget::AnniversaryTreasureRewardWidget() */

void __thiscall
AnniversaryTreasureRewardWidget::AnniversaryTreasureRewardWidget
          (AnniversaryTreasureRewardWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06708980;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe0));
  FUN_05476574(this + 0xe8);
  FUN_05476574(this + 0xf0);
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0xf8));
  *(undefined8 *)(this + 0x138) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnniversaryTreasureRewardWidget::ShowBonus() */

void __thiscall AnniversaryTreasureRewardWidget::ShowBonus(AnniversaryTreasureRewardWidget *this)

{
  EffectAnim_UIAnim *this_00;
  char cVar1;
  string asStack_58 [8];
  undefined4 local_50;
  undefined4 local_4c;
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (EffectAnim_UIAnim *)(this + 0xf8);
  std::string::string(asStack_58,"POPANIM_EFFECTS_LOTTERY_RESULT_BG");
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_50,(float)(*(int *)(this + 0x50) / 2),
             (float)(*(int *)(this + 0x54) / 2));
  EffectAnim_UIAnim::InitUIAnim(0x3f800000,local_50,local_4c,this_00,asStack_58,1);
  std::string::~string(asStack_58);
  nop();
  cVar1 = EffectAnim_UIAnim::IsValid(this_00);
  if (cVar1 != '\0') {
    std::string::string(asStack_58,"icon_on");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,ShowBonusFinish);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<AnniversaryTreasureRewardWidget,void(AnniversaryTreasureRewardWidget::*)(std::string_const&)>
              (aDStack_38,(FastCurve *)&local_50);
    EffectAnim_UIAnim::PlayOnceThen(this_00,asStack_58,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnniversaryTreasureRewardWidget::Init(int, AnniversaryTreasureReward) */

void AnniversaryTreasureRewardWidget::Init
               (long param_1,undefined4 param_2,ulong param_3,undefined4 param_4)

{
  wchar_t *pwVar1;
  long lVar2;
  int local_50;
  string asStack_40 [8];
  int local_38;
  int local_34;
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_50 = (int)param_3;
  *(undefined4 *)(param_1 + 0xd8) = param_2;
  local_8 = ___stack_chk_guard;
  *(ulong *)(param_1 + 0x128) = param_3;
  *(undefined4 *)(param_1 + 0x130) = param_4;
  if (local_50 == 0xbc0) {
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06ac56a0);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(param_1 + 0xe0),(RtWeakPtr *)&local_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    pwVar1 = L"[REWARD_TYPE_GEM]";
  }
  else {
    if (local_50 != 0xfad) {
      GetGameItemInfo(local_50,0x7fffffff,0);
      if (local_38 != 0) {
        *(int *)(param_1 + 0xd4) = local_34;
        if (local_34 != 2) {
          lVar2 = StringHelper::ToImage(asStack_18,false);
          if (lVar2 != 0) {
            Sexy::BaseResource::GetRtId();
            Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                      ((RtWeakPtr<CthulhuPropertySheet> *)(param_1 + 0xe0),(RtId *)asStack_40);
            Sexy::RtId::~RtId((RtId *)asStack_40);
          }
        }
        thunk_FUN_05477b9c(param_1 + 0xf0,auStack_10);
      }
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_38);
      goto LAB_03a4f7dc;
    }
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06ac55f8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(param_1 + 0xe0),(RtWeakPtr *)&local_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    pwVar1 = L"[REWARD_TYPE_COIN]";
  }
  TodStringTranslate(pwVar1);
  FUN_054766c8(param_1 + 0xf0,&local_38);
  FUN_05476c50(&local_38);
LAB_03a4f7dc:
  Sexy::StrFormat("x%d",asStack_40,param_3 >> 0x20);
  Sexy::ToWString(asStack_40);
  thunk_FUN_05477668(param_1 + 0xf0,&local_38);
  FUN_05476c50(&local_38);
  std::string::~string(asStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnniversaryTreasureRewardWidget::TouchBegan(Sexy::Touch const&) */

void AnniversaryTreasureRewardWidget::TouchBegan(Touch *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LotteryResultProgressBar *this;
  SalesProgressBar *this_00;
  StoneLotteryItemTipUI *this_01;
  long lVar5;
  int iVar6;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0xd0))(&local_20);
  this = (LotteryResultProgressBar *)
         CachedUIResourcePtr<Sexy::Image>::operator->
                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5740);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this);
  iVar6 = (int)((float)iVar2 + (float)iVar2);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5740);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_00);
  iVar2 = *(int *)(param_1 + 0x50);
  iVar4 = FUN_03a4d834(5);
  Sexy::Insets::Insets
            (aIStack_18,local_20 + (iVar2 - iVar6) / 2,
             (local_1c - (int)((float)iVar3 * 0.5)) + iVar4,iVar6,(int)((float)iVar3 * 0.5));
  lVar5 = *(long *)(param_1 + 0x138);
  if (lVar5 == 0) {
    this_01 = ::operator_new(0xe8);
    memset(this_01,0,0xe8);
    StoneLotteryItemTipUI::StoneLotteryItemTipUI(this_01);
    uVar1 = *(uint *)(this_01 + 0x60);
    *(StoneLotteryItemTipUI **)(param_1 + 0x138) = this_01;
    *(uint *)(this_01 + 0x60) = uVar1 | 0x10;
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),this_01);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(param_1 + 0x138));
    lVar5 = *(long *)(param_1 + 0x138);
  }
  PuzzleTip::SetTip(lVar5,param_1 + 0xf0);
  (**(code **)(**(long **)(param_1 + 0x138) + 0x1a0))(*(long **)(param_1 + 0x138),aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnniversaryTreasureRewardWidget::ShowBonusFinish(std::string const&) */

void AnniversaryTreasureRewardWidget::ShowBonusFinish(string *param_1)

{
  UIAnniversaryTreasure *this;
  
  SetObtain((AnniversaryTreasureRewardWidget *)param_1,true);
  this = (UIAnniversaryTreasure *)UISingletonDialog<UIAnniversaryTreasure>::GetSingletonPtr();
  UIAnniversaryTreasure::RewardAnimFinish(this);
  return;
}


/* AnniversaryTreasureRewardWidget::Update() */

void __thiscall AnniversaryTreasureRewardWidget::Update(AnniversaryTreasureRewardWidget *this)

{
  char cVar1;
  
  Sexy::WidgetContainer::Update((WidgetContainer *)this);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0xf8));
  if (cVar1 == '\0') {
    return;
  }
  EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0xf8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnniversaryTreasureRewardWidget::Draw(Sexy::Graphics*) */

void __thiscall
AnniversaryTreasureRewardWidget::Draw(AnniversaryTreasureRewardWidget *this,Graphics *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  undefined8 uVar6;
  ResourceInfo *pRVar7;
  SeedPacketUtils *this_00;
  RtWeakPtr *this_01;
  long lVar8;
  float fVar9;
  float fVar10;
  string asStack_48 [8];
  string asStack_40 [4];
  int iStack_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac54d0);
  iVar3 = FUN_03a4d834(8);
  Sexy::Graphics::DrawImage
            (param_1,pIVar5,4,4,*(int *)(this + 0x50) - iVar3,*(int *)(this + 0x54) - iVar3);
  if (*(int *)(this + 0xd4) == 2) {
    iVar3 = FUN_03a4d834(6);
    iVar4 = FUN_03a4d834(0xc);
    Sexy::Insets::Insets
              ((Insets *)&local_38,iVar3,iVar3,*(int *)(this + 0x50) - iVar4,
               *(int *)(this + 0x54) - iVar4);
    iVar3 = PlantChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    this_01 = (RtWeakPtr *)SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,asStack_48);
    fVar10 = ((float)local_30 * 0.9) / (float)*(int *)(this_01 + 0x28);
    fVar9 = ((float)local_2c * 0.9) / (float)*(int *)(this_01 + 0x2c);
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)(this_01 + 0x170));
    GetImageOffset(asStack_40,(RtId *)aCStack_18);
    Sexy::RtId::~RtId((RtId *)aCStack_18);
    UIWidget::ConvertPSDImageOffsetToUISpace((int *)asStack_40,&iStack_3c,1536.0);
    Sexy::Insets::Insets
              (aIStack_28,(int)((float)local_38 + (float)*(int *)(this_01 + 0x30) * fVar10),
               (int)((float)local_34 + (float)*(int *)(this_01 + 0x34) * fVar9),
               (int)(fVar10 * (float)*(int *)(this_01 + 0x28)),
               (int)(fVar9 * (float)*(int *)(this_01 + 0x2c)));
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar7,(TRect *)aIStack_28,(TRect *)(this_01 + 0x20))
    ;
    Sexy::Insets::Insets
              ((Insets *)aCStack_18,
               (int)((float)local_38 + (float)*(int *)(this_01 + 0x18) * fVar10),
               (int)((float)local_34 + (float)*(int *)(this_01 + 0x1c) * fVar9),
               (int)(fVar10 * (float)*(int *)(this_01 + 0x10)),
               (int)(fVar9 * (float)*(int *)(this_01 + 0x14)));
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar1) {
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar8 + 0x48));
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar7,(TRect *)aCStack_18,(TRect *)(this_01 + 8));
    }
    std::string::~string(asStack_48);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xe0));
  if (bVar1) {
    iVar3 = FUN_03a4d834(6);
    iVar4 = FUN_03a4d834(0xc);
    Sexy::Insets::Insets
              ((Insets *)aCStack_18,iVar3,iVar3,*(int *)(this + 0x50) - iVar4,
               *(int *)(this + 0x54) - iVar4);
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xe0));
    DrawAdaptiveImage(param_1,(Insets *)aCStack_18,pRVar7);
  }
  if (1 < *(int *)(this + 0x128)) {
    Sexy::StrFormat("x%d",asStack_40,(ulong)*(uint *)(this + 300));
    Sexy::ToWString(asStack_40);
    Sexy::Insets::Insets
              (aIStack_28,0,*(int *)(this + 0x54) / 2,*(int *)(this + 0x50),
               *(int *)(this + 0x54) / 2);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,&local_38,aIStack_28,uVar6,aCStack_18,5,1);
    FUN_05476c50(&local_38);
    std::string::~string(asStack_40);
  }
  cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0xf8));
  if (cVar2 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0xf8),param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

