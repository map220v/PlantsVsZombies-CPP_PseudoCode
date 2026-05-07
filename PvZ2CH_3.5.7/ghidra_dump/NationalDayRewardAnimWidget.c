// Class: NationalDayRewardAnimWidget


/* NationalDayRewardAnimWidget::~NationalDayRewardAnimWidget() */

void __thiscall
NationalDayRewardAnimWidget::~NationalDayRewardAnimWidget(NationalDayRewardAnimWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06927440;
  if (*(long **)(this + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xd8) + 0x18))();
    *(undefined8 *)(this + 0xd8) = 0;
  }
  if (*(long **)(this + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x108) + 0x18))();
    *(undefined8 *)(this + 0x108) = 0;
  }
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* NationalDayRewardAnimWidget::~NationalDayRewardAnimWidget() */

void __thiscall
NationalDayRewardAnimWidget::~NationalDayRewardAnimWidget(NationalDayRewardAnimWidget *this)

{
  ~NationalDayRewardAnimWidget(this);
  AK::FreeHook(this);
  return;
}


/* NationalDayRewardAnimWidget::AnimUpdate() */

void __thiscall NationalDayRewardAnimWidget::AnimUpdate(NationalDayRewardAnimWidget *this)

{
  if (*(StandaloneEffect **)(this + 0xd8) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0xd8));
    return;
  }
  return;
}


/* NationalDayRewardAnimWidget::AnimDraw(Sexy::Graphics*) */

void __thiscall
NationalDayRewardAnimWidget::AnimDraw(NationalDayRewardAnimWidget *this,Graphics *param_1)

{
  if (*(StandaloneEffect **)(this + 0xd8) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0xd8),param_1);
    return;
  }
  return;
}


/* NationalDayRewardAnimWidget::IsPause() */

bool __thiscall NationalDayRewardAnimWidget::IsPause(NationalDayRewardAnimWidget *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(this + 0xfc);
  fVar3 = *(float *)(this + 0xf8);
  fVar2 = (float)PVZ_T();
  return fVar2 <= fVar1 + fVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NationalDayRewardAnimWidget::CreateAnim() */

void __thiscall NationalDayRewardAnimWidget::CreateAnim(NationalDayRewardAnimWidget *this)

{
  Effect_PopAnim *pEVar1;
  ResourceInfo *pRVar2;
  StandaloneEffect *this_00;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar1 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0xd8) = pEVar1;
  std::string::string(asStack_10,"POPANIM_EFFECTS_GACHA_BACK_LIGHT");
  GetPAMByName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig
            (*(Effect_PopAnim **)(this + 0xd8),(PopAnim *)pRVar2,(RtClass *)0x0);
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0xd8),true);
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0xd8),true);
  pEVar1 = *(Effect_PopAnim **)(this + 0xd8);
  std::string::string(asStack_10,"anim");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar1,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  this_00 = *(StandaloneEffect **)(this + 0xd8);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)asStack_10,(float)(*(int *)(this + 0x50) / 2),
             (float)(*(int *)(this + 0x54) / 2));
  StandaloneEffect::SetScreenSpaceOrigin(this_00,(SexyVector2 *)asStack_10,900000);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NationalDayRewardAnimWidget::NationalDayRewardAnimWidget(NationalDayRewardItem&, float) */

void __thiscall
NationalDayRewardAnimWidget::NationalDayRewardAnimWidget
          (NationalDayRewardAnimWidget *this,NationalDayRewardItem *param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_06927440;
  PennyGiftBoxRankItemData::PennyGiftBoxRankItemData
            ((PennyGiftBoxRankItemData *)(this + 0xe0),(PennyGiftBoxRankItemData *)param_1);
  uVar2 = PVZ_T();
  *(undefined8 *)(this + 0x108) = 0;
  this[0x100] = (NationalDayRewardAnimWidget)0x1;
  *(undefined4 *)(this + 0xf8) = uVar2;
  *(float *)(this + 0xfc) = param_2;
  iVar1 = FUN_049cb200(0x96);
  Sexy::Widget::Resize((Widget *)this,0,0,iVar1,iVar1);
  CreateAnim(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NationalDayRewardAnimWidget::DrawReward(Sexy::Graphics*) */

void __thiscall
NationalDayRewardAnimWidget::DrawReward(NationalDayRewardAnimWidget *this,Graphics *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  PrimeText_PotentialText *pPVar8;
  string *psVar9;
  long lVar10;
  LotteryResultProgressBar *this_00;
  long extraout_x0;
  PrimeTextWidget *pPVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  RtMixedPtrBase aRStack_28 [8];
  undefined4 local_20 [2];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar15 = 1.0;
  if (this[0x100] == (NationalDayRewardAnimWidget)0x0) {
LAB_049cc20c:
    FUN_05476574(auStack_50);
    iVar3 = *(int *)(this + 0xe8);
  }
  else {
    fVar12 = *(float *)(this + 0xfc);
    fVar17 = *(float *)(this + 0xf8);
    fVar16 = fVar12 + fVar17 + 1.5;
    fVar13 = (float)PVZ_T();
    if (fVar13 <= fVar16) {
      uVar14 = PVZ_T();
      local_18[0] = 0x3f800000;
      local_20[0] = 0;
      fVar15 = CurveLerp<float>(fVar12 + fVar17,fVar16,uVar14,local_20,local_18,3);
      goto LAB_049cc20c;
    }
    this[0x100] = (NationalDayRewardAnimWidget)0x0;
    FUN_05476574(auStack_50);
    iVar3 = *(int *)(this + 0xe8);
  }
  if (iVar3 == 1) {
    FUN_05475d88(asStack_48,this + 0xe0);
    bVar1 = std::operator!=(asStack_48,"");
    if (bVar1) {
      std::string::string(asStack_40,"plant_piece_");
      nop();
      FUN_05475d88(asStack_38,asStack_48);
      FUN_031dcc6c(asStack_30,asStack_40,asStack_38);
      psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr()
      ;
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar9);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
      if (cVar2 != '\0') {
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
        this_00 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)(lVar10 + 0x60),false)
        ;
        uVar7 = FUN_0547429c(asStack_48);
        Sexy::StrFormat("plantpiece_%s",(ItemButton *)local_20,uVar7);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
        nop();
        ItemButton::GetRewardName
                  ((ItemButton *)local_20,(string *)(extraout_x0 + 0x98),(string *)local_20);
        FUN_054766c8(auStack_50,local_18);
        FUN_05476c50(local_18);
        std::string::~string((string *)local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
        ;
        std::string::~string(asStack_30);
        std::string::~string(asStack_38);
        std::string::~string(asStack_40);
        std::string::~string(asStack_48);
        if (this_00 != (LotteryResultProgressBar *)0x0) {
          iVar3 = *(int *)(this + 0x50);
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_00);
          iVar4 = *(int *)(this + 0x54);
          iVar6 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
          TodDrawImageCenterScaledF
                    (param_1,(Image *)this_00,(float)((iVar3 - iVar5) / 2),
                     (float)((iVar4 - iVar6) / 2),fVar15,fVar15);
        }
        goto LAB_049cc224;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      std::string::~string(asStack_30);
      std::string::~string(asStack_38);
      std::string::~string(asStack_40);
    }
    std::string::~string(asStack_48);
  }
LAB_049cc224:
  pPVar11 = *(PrimeTextWidget **)(this + 0x108);
  if (pPVar11 == (PrimeTextWidget *)0x0) {
    uVar7 = FUN_054766ec(auStack_50);
    Sexy::StrFormat(L"%ls x %d",aRStack_28,uVar7,(ulong)*(uint *)(this + 0xec));
    uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    iVar5 = FUN_049cb200(0x32);
    iVar3 = *(int *)(this + 0x50);
    iVar4 = *(int *)(this + 0x54);
    FUN_05477b24(local_20,aRStack_28);
    Sexy::Color::Color((Color *)local_18,0);
    pPVar8 = (PrimeText_PotentialText *)
             Sexy::BuildPotentialText_Paragraph
                       ((float)iVar5,(float)iVar5,(float)iVar3,(float)iVar4,uVar7,local_20,0,1,
                        (Color *)local_18);
    pPVar11 = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(pPVar11,pPVar8);
    *(PrimeTextWidget **)(this + 0x108) = pPVar11;
    FUN_05476c50(local_20);
    FUN_05476c50(aRStack_28);
    pPVar11 = *(PrimeTextWidget **)(this + 0x108);
    if (pPVar11 == (PrimeTextWidget *)0x0) goto LAB_049cc294;
  }
  iVar3 = FUN_049cb200(0x3c);
  iVar4 = FUN_049cb200(0x32);
  iVar5 = FUN_049cb200(100);
  Sexy::PrimeTextWidget::SetPosition
            (pPVar11,(int)((float)iVar3 * fVar15 - (float)iVar4),
             (int)((float)iVar5 - fVar15 * (float)iVar4));
  Sexy::PrimeTextWidget::SetScale(*(PrimeTextWidget **)(this + 0x108),fVar15,fVar15);
  (**(code **)(**(long **)(this + 0x108) + 0x128))(*(long **)(this + 0x108),param_1);
LAB_049cc294:
  FUN_05476c50(auStack_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* NationalDayRewardAnimWidget::Update() */

void __thiscall NationalDayRewardAnimWidget::Update(NationalDayRewardAnimWidget *this)

{
  char cVar1;
  
  cVar1 = IsPause(this);
  if (cVar1 == '\0') {
    UIFutureGiftShop::Update((UIFutureGiftShop *)this);
    AnimUpdate(this);
    return;
  }
  (**(code **)(**(long **)(this + 0x20) + 0x68))(*(long **)(this + 0x20),this);
  return;
}


/* NationalDayRewardAnimWidget::Draw(Sexy::Graphics*) */

void __thiscall
NationalDayRewardAnimWidget::Draw(NationalDayRewardAnimWidget *this,Graphics *param_1)

{
  char cVar1;
  
  cVar1 = IsPause(this);
  if (cVar1 != '\0') {
    return;
  }
  nop();
  AnimDraw(this,param_1);
  DrawReward(this,param_1);
  return;
}

