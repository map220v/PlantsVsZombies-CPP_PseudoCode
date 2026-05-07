// Class: PVPFinishButton


/* PVPFinishButton::GemToYuan(int) */

undefined4 __thiscall PVPFinishButton::GemToYuan(PVPFinishButton *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((((0xd < param_1 - 1U) && (uVar1 = 3, 0x1d < param_1 - 0xfU)) &&
      (uVar1 = 5, 0x31 < param_1 - 0x2dU)) && (uVar1 = 10, 0x31 < param_1 - 0x5fU)) {
    uVar1 = 0;
    if (0x90 < param_1) {
      uVar1 = 0xf;
    }
    return uVar1;
  }
  return uVar1;
}


/* PVPFinishButton::~PVPFinishButton() */

void __thiscall PVPFinishButton::~PVPFinishButton(PVPFinishButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06953710;
  *(undefined ***)(this + 0x198) = &PTR__PVPFinishButton_06953a68;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x330));
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to PVPFinishButton::~PVPFinishButton() */

void __thiscall PVPFinishButton::~PVPFinishButton(PVPFinishButton *this)

{
  ~PVPFinishButton(this + -0x198);
  return;
}


/* PVPFinishButton::~PVPFinishButton() */

void __thiscall PVPFinishButton::~PVPFinishButton(PVPFinishButton *this)

{
  ~PVPFinishButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVPFinishButton::~PVPFinishButton() */

void __thiscall PVPFinishButton::~PVPFinishButton(PVPFinishButton *this)

{
  ~PVPFinishButton(this + -0x198);
  return;
}


/* PVPFinishButton::ConfirmBuy(UIMessageBox*, int) */

void __thiscall PVPFinishButton::ConfirmBuy(PVPFinishButton *this,UIMessageBox *param_1,int param_2)

{
  int iVar1;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  iVar1 = FUN_04b03a0c(*(undefined8 *)(this + 0x308),*(undefined8 *)(this + 0x318));
  if (iVar1 == 0) {
    return;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x300),(SexyURL *)(ulong)(uint)param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPFinishButton::GetProps(int) */

void PVPFinishButton::GetProps(int param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  RtWeakPtrBase *pRVar4;
  int in_w1;
  string *extraout_x1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  ulong uVar5;
  RtMixedPtrBase aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"pvpFinish");
  Magento::GetStore((Magento *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
  if (cVar1 != '\0') {
    if (in_w1 - 3U < 0xd) {
      if (*(int *)(&DAT_05755030 + (ulong)(in_w1 - 3U) * 4) < 0) goto LAB_04b03c98;
      uVar5 = (ulong)*(int *)(&DAT_05755030 + (ulong)(in_w1 - 3U) * 4);
    }
    else {
      uVar5 = 0;
    }
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    uVar3 = FUN_04b03a28(*(undefined8 *)(lVar2 + 0x60),*(undefined8 *)(lVar2 + 0x68));
    if (uVar5 < uVar3) {
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      pRVar4 = (RtWeakPtrBase *)FUN_04b03a34(*(undefined8 *)(lVar2 + 0x60),uVar5);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)in_x8,pRVar4);
      goto LAB_04b03ca4;
    }
  }
LAB_04b03c98:
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
LAB_04b03ca4:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPFinishButton::PVPFinishButton(int, Sexy::ButtonListener*, std::wstring const&, Sexy::Color
   const&) */

void __thiscall
PVPFinishButton::PVPFinishButton
          (PVPFinishButton *this,int param_1,ButtonListener *param_2,wstring *param_3,Color *param_4
          )

{
  PVZ2UIButton::PVZ2UIButton((PVZ2UIButton *)this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_GetClass_06953710;
  *(undefined ***)(this + 0x198) = &PTR__PVPFinishButton_06953a68;
  Sexy::Delegate1<int>::Delegate1((DummyInit *)(this + 0x300));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x330));
  *(undefined4 *)(this + 0x2fc) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPFinishButton::ShowBuyConfirm(Sexy::Delegate1<int>) */

void __thiscall PVPFinishButton::ShowBuyConfirm(PVPFinishButton *this,Delegate2 *param_2)

{
  int iVar1;
  int iVar2;
  PlayerInfo *this_00;
  UIMessageBox *this_01;
  Image *pIVar3;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)(this + 0x2fc);
  FUN_05478178(awStack_68,L"[PVP_TRAINING_FINISH_TIP]",asStack_50);
  nop();
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  if (this_00 != (PlayerInfo *)0x0) {
    iVar2 = PlayerInfo::GetNumGems(this_00,false);
    if (iVar2 < *(int *)(this + 0x2fc)) {
      LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
    }
    else {
      Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
                ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x300),param_2);
      this_01 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_01 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_01,6);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(awStack_68);
        TodReplaceNumberString(awStack_58,L"{NUMBER}",iVar1);
        FUN_054766c8(awStack_58,asStack_50);
        FUN_05476c50(asStack_50);
        UIMessageBox::SetMessage(this_01,awStack_58,awStack_60);
        std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_PURPLE");
        pIVar3 = (Image *)StringHelper::ToImage(asStack_50,false);
        UIMessageBox::SetBackground(this_01,pIVar3);
        std::string::~string(asStack_50);
        nop();
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,ConfirmBuy);
        Sexy::Delegate2<UIMessageBox*,int>::
        Delegate2<PVPFinishButton,void(PVPFinishButton::*)(UIMessageBox*,int)>
                  (aDStack_38,asStack_50);
        UIMessageBox::SetCallback(this_01,aDStack_38);
        FUN_05476c50(awStack_58);
        FUN_05476c50(awStack_60);
      }
    }
  }
  FUN_05476c50(awStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPFinishButton::onItemPurchasedFromStore(MagentoProductProps*) */

void __thiscall
PVPFinishButton::onItemPurchasedFromStore(PVPFinishButton *this,MagentoProductProps *param_1)

{
  int iVar1;
  ResourceInfo *pRVar2;
  
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x330));
  if ((param_1 == (MagentoProductProps *)pRVar2) &&
     (iVar1 = FUN_04b03a0c(*(undefined8 *)(this + 0x308),*(undefined8 *)(this + 0x318)), iVar1 != 0)
     ) {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x300),(SexyURL *)0x1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPFinishButton::PrivateDraw(Sexy::Graphics*) */

void __thiscall PVPFinishButton::PrivateDraw(PVPFinishButton *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  undefined8 uVar7;
  Image *pIVar8;
  LotteryResultProgressBar *pLVar9;
  SalesProgressBar *pSVar10;
  float fVar11;
  float local_48;
  float local_44;
  undefined1 auStack_40 [8];
  int local_38;
  int local_34;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04b03ab4(0xe6);
  iVar2 = FUN_04b03ab4(0x42);
  iVar3 = *(int *)(this + 0x50);
  iVar4 = *(int *)(this + 0x54);
  local_44 = (float)iVar4 / (float)iVar2;
  local_48 = (float)iVar3 / (float)iVar1;
  pfVar6 = eastl::min_alt<float>(&local_48,&local_44);
  fVar11 = *pfVar6;
  Sexy::Insets::Insets((Insets *)&local_38,0,0,iVar3,iVar4);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_38);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83350);
  Draw9SliceImage(param_1,aIStack_18,uVar7);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83230);
  iVar3 = FUN_04b03ab4(10);
  iVar4 = FUN_04b03ab4(0xf);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83230);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83230);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar10);
  Sexy::Graphics::DrawImage
            (param_1,pIVar8,(int)((float)iVar3 * fVar11),(int)((float)iVar4 * fVar11),
             (int)((float)iVar1 * fVar11),(int)((float)iVar2 * fVar11));
  iVar3 = FUN_04b03ab4(10);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83230);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  Sexy::StrFormat(L"%d",auStack_40,(ulong)*(uint *)(this + 0x2fc));
  iVar1 = FUN_04b03ab4(0xd);
  iVar2 = FUN_04b03ab4(0x32);
  iVar5 = FUN_04b03ab4(0x23);
  Sexy::Insets::Insets
            (aIStack_28,(int)((float)(iVar3 + iVar4) * fVar11),(int)((float)iVar1 * fVar11),
             (int)((float)iVar2 * fVar11),(int)((float)iVar5 * fVar11));
  uVar7 = PrimeText_Game::Typeface_CafeteriaBlack_28_Outline;
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar7,aIStack_18,0,1);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83290);
  iVar3 = FUN_04b03ab4(0x57);
  iVar4 = FUN_04b03ab4(4);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83290);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83290);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar10);
  Sexy::Graphics::DrawImage
            (param_1,pIVar8,(int)((float)iVar3 * fVar11),(int)((float)iVar4 * fVar11),
             (int)((float)iVar1 * fVar11),(int)((float)iVar2 * 0.85 * fVar11));
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b832b8);
  iVar3 = FUN_04b03ab4(0x5a);
  iVar4 = FUN_04b03ab4(0xf);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b832b8);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b832b8);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar10);
  Sexy::Graphics::DrawImage
            (param_1,pIVar8,(int)((float)local_38 + fVar11 * (float)iVar3),
             (int)((float)local_34 + fVar11 * (float)iVar4),(int)(fVar11 * (float)iVar1 * 0.9),
             (int)(fVar11 * (float)iVar2 * 0.9));
  FUN_05476c50(auStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPFinishButton::Draw(Sexy::Graphics*) */

void __thiscall PVPFinishButton::Draw(PVPFinishButton *this,Graphics *param_1)

{
  RenderEffectDefinition *pRVar1;
  RenderEffect *pRVar2;
  code *pcVar3;
  GraphicsAutoState aGStack_50 [8];
  string asStack_48 [24];
  CachedResourcePtr<Sexy::RenderEffectDefinition> aCStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_50,param_1);
  if (this[0x6e] == (PVPFinishButton)0x0) {
    PrivateDraw(this,param_1);
  }
  else {
    CachedResourcePtr<Sexy::RenderEffectDefinition>::CachedResourcePtr
              (aCStack_30,"EFFECT_GRAYSCALE");
    pRVar1 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(param_1);
    CachedResourcePtr::operator_cast_to_RenderEffectDefinition_((CachedResourcePtr *)aCStack_30);
    pRVar2 = (RenderEffect *)Sexy::Graphics3D::GetEffect(pRVar1);
    pcVar3 = *(code **)(*(long *)pRVar2 + 0x38);
    std::string::string(asStack_48,"Default");
    (*pcVar3)(pRVar2,asStack_48,1);
    std::string::~string(asStack_48);
    nop();
    Sexy::RenderEffectAutoState::RenderEffectAutoState
              ((RenderEffectAutoState *)asStack_48,param_1,pRVar2,1);
    PrivateDraw(this,param_1);
    Sexy::RenderEffectAutoState::~RenderEffectAutoState((RenderEffectAutoState *)asStack_48);
    CachedResourcePtr<Sexy::RenderEffectDefinition>::~CachedResourcePtr(aCStack_30);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

