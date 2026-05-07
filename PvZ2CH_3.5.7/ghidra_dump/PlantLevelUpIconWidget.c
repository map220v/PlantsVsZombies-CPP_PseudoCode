// Class: PlantLevelUpIconWidget


/* PlantLevelUpIconWidget::~PlantLevelUpIconWidget() */

void __thiscall PlantLevelUpIconWidget::~PlantLevelUpIconWidget(PlantLevelUpIconWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06912e60;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  *(undefined8 *)(this + 0xd8) = 0;
  if (*(long **)(this + 0x128) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x128) + 0x18))();
    *(undefined8 *)(this + 0x128) = 0;
  }
  if (*(long **)(this + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x148) + 0x18))();
    *(undefined8 *)(this + 0x148) = 0;
  }
  std::string::~string((string *)(this + 0xf0));
  std::string::~string((string *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantLevelUpIconWidget::~PlantLevelUpIconWidget() */

void __thiscall PlantLevelUpIconWidget::~PlantLevelUpIconWidget(PlantLevelUpIconWidget *this)

{
  ~PlantLevelUpIconWidget(this);
  AK::FreeHook(this);
  return;
}


/* PlantLevelUpIconWidget::InitAnim() */

void __thiscall PlantLevelUpIconWidget::InitAnim(PlantLevelUpIconWidget *this)

{
  undefined8 uVar1;
  
  this[0x100] = (PlantLevelUpIconWidget)0x0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  uVar1 = Sexy::SexyTime((Sexy *)this);
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined8 *)(this + 0x110) = uVar1;
  *(undefined4 *)(this + 0x118) = 1;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  return;
}


/* PlantLevelUpIconWidget::PlayZoomAnim(bool) */

void __thiscall PlantLevelUpIconWidget::PlayZoomAnim(PlantLevelUpIconWidget *this,bool param_1)

{
  undefined8 uVar1;
  
  InitAnim(this);
  *(undefined4 *)(this + 0x108) = 0;
  this[0x100] = (PlantLevelUpIconWidget)0x1;
  *(undefined4 *)(this + 0x118) = 5;
  *(undefined4 *)(this + 0x10c) = 0;
  uVar1 = Sexy::SexyTime((Sexy *)0x5);
  *(undefined8 *)(this + 0x110) = uVar1;
  if (!param_1) {
    *(undefined4 *)(this + 0x124) = 1;
    *(undefined4 *)(this + 0x11c) = 0;
    *(undefined4 *)(this + 0x120) = 0x3fa66666;
    return;
  }
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x120) = 0x3f800000;
  *(undefined4 *)(this + 0x11c) = 0x3fa66666;
  return;
}


/* PlantLevelUpIconWidget::CompleteAllAnim() */

void __thiscall PlantLevelUpIconWidget::CompleteAllAnim(PlantLevelUpIconWidget *this)

{
  if (this[0x100] != (PlantLevelUpIconWidget)0x0) {
    *(undefined4 *)(this + 0x108) = *(undefined4 *)(this + 0x118);
  }
  return;
}


/* PlantLevelUpIconWidget::NotifyColorChange() */

void __thiscall PlantLevelUpIconWidget::NotifyColorChange(PlantLevelUpIconWidget *this)

{
  *(undefined4 *)(this + 0x130) = 0;
  this[0x134] = (PlantLevelUpIconWidget)0x1;
  return;
}


/* PlantLevelUpIconWidget::PlayFadeInAnim() */

void __thiscall PlantLevelUpIconWidget::PlayFadeInAnim(PlantLevelUpIconWidget *this)

{
  undefined8 uVar1;
  
  InitAnim(this);
  *(undefined4 *)(this + 0x108) = 0;
  this[0x100] = (PlantLevelUpIconWidget)0x1;
  *(undefined4 *)(this + 0x118) = 5;
  *(undefined4 *)(this + 0x10c) = 0;
  uVar1 = Sexy::SexyTime((Sexy *)0x5);
  *(undefined8 *)(this + 0x110) = uVar1;
  *(undefined4 *)(this + 0x124) = 2;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0x3f800000;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpIconWidget::InitSkillData(Sexy::RtWeakPtr<SkillPropertySheet>) */

void __thiscall
PlantLevelUpIconWidget::InitSkillData
          (PlantLevelUpIconWidget *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  LawnApp *this_00;
  long lVar1;
  ResourceInfo *pRVar2;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  lVar1 = LawnApp::GetUIImageInfoFromStringId(this_00,(string *)(lVar1 + 0x20));
  if (lVar1 != 0) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    *(ResourceInfo **)(this + 0xd8) = pRVar2;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  thunk_FUN_05475e00(this + 0xf0,lVar1 + 0x10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpIconWidget::Draw(Sexy::Graphics*) */

void __thiscall PlantLevelUpIconWidget::Draw(PlantLevelUpIconWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Image *pIVar6;
  long lVar7;
  Image *pIVar8;
  Image *local_68;
  string asStack_50 [8];
  wstring awStack_48 [8];
  undefined1 auStack_40 [8];
  Insets aIStack_38 [16];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x100] != (PlantLevelUpIconWidget)0x0) && (*(int *)(this + 0x124) == 2)) {
    Sexy::Insets::Insets((Insets *)&local_18,0xff,0xff,0xff,(int)(*(float *)(this + 0x138) * 255.0))
    ;
    Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
    Sexy::Graphics::SetColorizeImages(param_1,true);
  }
  if (this[0xe5] == (PlantLevelUpIconWidget)0x0) {
    pIVar8 = *(Image **)(this + 0xd8);
    if (pIVar8 == (Image *)0x0) {
      iVar1 = *(int *)(this + 0x50);
      lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70840);
      iVar2 = *(int *)(lVar7 + 0x38);
      pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70840);
      Sexy::Graphics::DrawImage(param_1,pIVar8,(iVar1 - iVar2) / 2,0);
      goto LAB_04948ef0;
    }
    iVar1 = *(int *)(this + 0xe0);
    if (iVar1 == 2) {
      iVar1 = *(int *)(this + 0x50);
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b709a8;
LAB_049492a0:
      lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
      pIVar8 = *(Image **)(this + 0xd8);
      iVar3 = (iVar1 - *(int *)(lVar7 + 0x38)) / 2;
      iVar2 = (*(int *)(this + 0x50) - *(int *)(pIVar8 + 0x38)) / 2;
      if (this[0x100] == (PlantLevelUpIconWidget)0x0) {
        iVar1 = *(int *)(this + 0xe0);
LAB_049492e4:
        if (iVar1 != 2) goto LAB_049490ec;
        local_68 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b709a8);
LAB_04949300:
        iVar1 = FUN_04948ad0(3);
        Sexy::Graphics::DrawImage(param_1,local_68,iVar3,iVar1);
        pIVar8 = *(Image **)(this + 0xd8);
        goto LAB_04948dc8;
      }
      iVar1 = *(int *)(this + 0xe0);
      if (1 < *(uint *)(this + 0x124)) goto LAB_049492e4;
      if (iVar1 == 2) {
        local_68 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b709a8);
      }
      else {
        if (iVar1 != 3) goto LAB_04949370;
        local_68 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b708f8);
      }
      iVar1 = FUN_04948ad0(3);
      TodDrawImageCenterScaledF
                (param_1,local_68,(float)iVar3,(float)iVar1,*(float *)(this + 0x104),
                 *(float *)(this + 0x104));
      pIVar8 = *(Image **)(this + 0xd8);
LAB_04949370:
      iVar1 = FUN_04948ad0(4);
      TodDrawImageCenterScaledF
                (param_1,pIVar8,(float)iVar2,(float)iVar1,*(float *)(this + 0x104),
                 *(float *)(this + 0x104));
    }
    else {
      if (iVar1 == 3) {
        iVar1 = *(int *)(this + 0x50);
        this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b708f8;
        goto LAB_049492a0;
      }
      iVar2 = (*(int *)(this + 0x50) - *(int *)(pIVar8 + 0x38)) / 2;
      if (this[0x100] != (PlantLevelUpIconWidget)0x0) {
        if (*(uint *)(this + 0x124) < 2) goto LAB_04949370;
        iVar3 = 0;
LAB_049490ec:
        if (iVar1 == 3) {
          local_68 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b708f8);
          goto LAB_04949300;
        }
      }
LAB_04948dc8:
      iVar1 = FUN_04948ad0(4);
      Sexy::Graphics::DrawImage(param_1,pIVar8,iVar2,iVar1);
    }
    if (*(StandaloneEffect **)(this + 0x148) != (StandaloneEffect *)0x0) {
      StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x148),param_1);
    }
    iVar2 = FUN_04948ad0(0x23);
    iVar1 = *(int *)(this + 0x54);
    iVar3 = FUN_04948ad0(100);
    iVar4 = FUN_04948ad0(0x2d);
    Sexy::Insets::Insets(aIStack_38,0,iVar1 - iVar2,iVar3,iVar4);
    Sexy::Color::Color((Color *)&local_28);
    if (this[0x135] == (PlantLevelUpIconWidget)0x0) {
      Sexy::Color::Color((Color *)&local_18,1);
      local_28 = local_18;
      uStack_20 = uStack_10;
    }
    else {
      Sexy::Color::Color((Color *)&local_18,5);
      local_28 = local_18;
      uStack_20 = uStack_10;
    }
    if ((this[0x100] != (PlantLevelUpIconWidget)0x0) && (*(int *)(this + 0x124) == 2)) {
      uStack_20 = CONCAT44((int)((float)uStack_20._4_4_ * *(float *)(this + 0x138)),
                           (undefined4)uStack_20);
    }
    Sexy::ToWString((string *)(this + 0xf0));
    TodStringTranslate(awStack_48);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_28);
    WriteWordInRect(param_1,auStack_40,aIStack_38,uVar5,(Insets *)&local_18,2,1);
    FUN_05476c50(auStack_40);
    FUN_05476c50(awStack_48);
    goto LAB_04948ef0;
  }
  switch(*(undefined4 *)(this + 0xe0)) {
  case 1:
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70868);
    break;
  case 2:
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b708c0);
    break;
  case 3:
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70930);
    break;
  case 4:
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70898);
    break;
  case 5:
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70958);
    break;
  default:
    iVar1 = *(int *)(this + 0x50);
    lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70840);
    iVar2 = *(int *)(lVar7 + 0x38);
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70840);
    Sexy::Graphics::DrawImage(param_1,pIVar8,(iVar1 - iVar2) / 2,0);
    goto LAB_04948f84;
  }
  iVar1 = *(int *)(this + 0x50);
  lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70840);
  iVar1 = (iVar1 - *(int *)(lVar7 + 0x38)) / 2;
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70840);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,0);
  if (pIVar8 != (Image *)0x0) {
    lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70840);
    iVar1 = iVar1 + (*(int *)(lVar7 + 0x38) - *(int *)(pIVar8 + 0x38)) / 2;
    lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70840);
    iVar2 = (*(int *)(lVar7 + 0x3c) - *(int *)(pIVar8 + 0x3c)) / 2;
    if ((this[0x100] == (PlantLevelUpIconWidget)0x0) || (1 < *(uint *)(this + 0x124))) {
      Sexy::Graphics::DrawImage(param_1,pIVar8,iVar1,iVar2);
    }
    else {
      TodDrawImageCenterScaledF
                (param_1,pIVar8,(float)iVar1,(float)iVar2,*(float *)(this + 0x104),
                 *(float *)(this + 0x104));
    }
  }
LAB_04948f84:
  iVar2 = FUN_04948ad0(0x23);
  iVar1 = *(int *)(this + 0x54);
  iVar3 = FUN_04948ad0(100);
  iVar4 = FUN_04948ad0(0x28);
  Sexy::Insets::Insets(aIStack_38,0,iVar1 - iVar2,iVar3,iVar4);
  Sexy::Color::Color((Color *)&local_28);
  if (this[0x135] == (PlantLevelUpIconWidget)0x0) {
    Sexy::Color::Color((Color *)&local_18,1);
    local_28 = local_18;
    uStack_20 = uStack_10;
  }
  else {
    Sexy::Color::Color((Color *)&local_18,5);
    local_28 = local_18;
    uStack_20 = uStack_10;
  }
  if ((this[0x100] != (PlantLevelUpIconWidget)0x0) && (*(int *)(this + 0x124) == 2)) {
    uStack_20 = CONCAT44((int)((float)uStack_20._4_4_ * *(float *)(this + 0x138)),
                         (undefined4)uStack_20);
  }
  std::string::string(asStack_50,"[ADVICE_GOTO_STORE]");
  Sexy::ToWString(asStack_50);
  TodStringTranslate(awStack_48);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_28);
  WriteWordInRect(param_1,auStack_40,aIStack_38,uVar5,(Insets *)&local_18,2,1);
  FUN_05476c50(auStack_40);
  FUN_05476c50(awStack_48);
  std::string::~string(asStack_50);
  nop();
LAB_04948ef0:
  if (*(StandaloneEffect **)(this + 0x128) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x128),param_1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpIconWidget::CreateArrowEffect() */

void __thiscall PlantLevelUpIconWidget::CreateArrowEffect(PlantLevelUpIconWidget *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar5;
  long *plVar6;
  PopAnimRig *pPVar7;
  StandaloneEffect *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  int local_58;
  int local_54;
  RtWeakPtr aRStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0x128) = this_00;
  std::string::string(asStack_60,"POPANIM_EFFECTS_SKILL_ARROW");
  GetPAMByName(asStack_60);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_50);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar5,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::Insets::Insets((Insets *)asStack_60);
  plVar6 = (long *)UIWidget::GetAtlasImage(*(UIWidget **)(this + 0x128));
  (**(code **)(*plVar6 + 0x90))(plVar6,asStack_60);
  iVar3 = FUN_04948ad0(0x1e);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_04948ad0(3);
  iVar2 = *(int *)(this + 0x54);
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x128),true);
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x128),true);
  this_01 = *(StandaloneEffect **)(this + 0x128);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)aRStack_50,(float)(iVar3 + (iVar1 - local_58) / 2),
             (float)(iVar4 + (iVar2 - local_54) / 2));
  StandaloneEffect::SetScreenSpaceOrigin(this_01,(SexyVector2 *)aRStack_50,900000);
  Effect_PopAnim::GetPopAnimRigPtr();
  pPVar7 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
  std::string::string(asStack_68,"anim");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimStopped);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantLevelUpIconWidget,void(PlantLevelUpIconWidget::*)(std::string_const&)>
            (aDStack_38,aRStack_50);
  PopAnimRig::PlayAndStop(pPVar7,asStack_68,0,aDStack_38);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpIconWidget::CreateIconEffect() */

void __thiscall PlantLevelUpIconWidget::CreateIconEffect(PlantLevelUpIconWidget *this)

{
  Effect_PopAnim *pEVar1;
  ResourceInfo *pRVar2;
  long lVar3;
  StandaloneEffect *this_00;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar1 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0x148) = pEVar1;
  std::string::string(asStack_18,"POPANIM_EFFECTS_ICON_EFFECT_FG");
  GetPAMByName(asStack_18);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  nop();
  if ((*(UIWidget **)(this + 0x148) != (UIWidget *)0x0) &&
     (lVar3 = UIWidget::GetAtlasImage(*(UIWidget **)(this + 0x148)), lVar3 != 0)) {
    pEVar1 = *(Effect_PopAnim **)(this + 0x148);
    std::string::string((string *)aRStack_10,"anim");
    Effect_PopAnim::PlaySingleAnimation(pEVar1,aRStack_10,0);
    std::string::~string((string *)aRStack_10);
    nop();
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x148),true);
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x148),true);
    this_00 = *(StandaloneEffect **)(this + 0x148);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)aRStack_10,(float)(*(int *)(*(long *)(this + 0xd8) + 0x38) / 2),
               (float)(*(int *)(*(long *)(this + 0xd8) + 0x3c) / 2));
    StandaloneEffect::SetScreenSpaceOrigin(this_00,(SexyVector2 *)aRStack_10,900000);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLevelUpIconWidget::NotifyAnimEnd(IconAnimType) */

void __thiscall PlantLevelUpIconWidget::NotifyAnimEnd(PlantLevelUpIconWidget *this,int param_2)

{
  if (param_2 == 1) {
    PlayZoomAnim(this,true);
    return;
  }
  if (param_2 != 0) {
    return;
  }
  PVZ2UIStarLevelUp::NotifyFadeInComplete
            (*(PVZ2UIStarLevelUp **)(this + 0xf8),(bool)((byte)this[0xe6] ^ 1));
  CreateIconEffect(this);
  return;
}


/* PlantLevelUpIconWidget::Update() */

void __thiscall PlantLevelUpIconWidget::Update(PlantLevelUpIconWidget *this)

{
  int iVar1;
  Sexy *this_00;
  long lVar2;
  long lVar3;
  float fVar4;
  
  if (*(StandaloneEffect **)(this + 0x128) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x128));
  }
  if (*(StandaloneEffect **)(this + 0x148) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x148));
  }
  if (this[0x100] != (PlantLevelUpIconWidget)0x0) {
    this_00 = (Sexy *)(ulong)*(uint *)(this + 0x118);
    if ((int)*(uint *)(this + 0x118) <= *(int *)(this + 0x108)) {
      this[0x100] = (PlantLevelUpIconWidget)0x0;
      this_00 = (Sexy *)NotifyAnimEnd(this,*(undefined4 *)(this + 0x124));
    }
    lVar2 = Sexy::SexyTime(this_00);
    lVar3 = *(long *)(this + 0x110);
    *(long *)(this + 0x110) = lVar2;
    iVar1 = *(int *)(this + 0x108);
    fVar4 = *(float *)(this + 0x10c) + (float)(ulong)(lVar2 - lVar3) * 0.001;
    *(float *)(this + 0x10c) = fVar4;
    if (0.01 < fVar4) {
      iVar1 = iVar1 + 1;
      *(int *)(this + 0x108) = iVar1;
    }
    if (*(uint *)(this + 0x124) < 2) {
      *(float *)(this + 0x104) =
           *(float *)(this + 0x11c) +
           (*(float *)(this + 0x120) - *(float *)(this + 0x11c)) *
           ((float)iVar1 / (float)*(int *)(this + 0x118));
    }
    else if (*(uint *)(this + 0x124) == 2) {
      *(float *)(this + 0x138) =
           *(float *)(this + 0x13c) +
           (*(float *)(this + 0x140) - *(float *)(this + 0x13c)) *
           ((float)iVar1 / (float)*(int *)(this + 0x118));
    }
  }
  if (this[0x134] != (PlantLevelUpIconWidget)0x0) {
    iVar1 = *(int *)(this + 0x130);
    if (iVar1 == (iVar1 / 0xf) * 0xf) {
      this[0x135] = (PlantLevelUpIconWidget)((byte)this[0x135] ^ 1);
    }
    *(int *)(this + 0x130) = iVar1 + 1;
    if (99 < iVar1 + 1) {
      this[0x134] = (PlantLevelUpIconWidget)0x0;
      this[0x135] = (PlantLevelUpIconWidget)0x0;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpIconWidget::GetSkillSheet() */

void PlantLevelUpIconWidget::GetSkillSheet(void)

{
  int iVar1;
  long in_x0;
  string *psVar2;
  undefined1 uVar3;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  if (*(char *)(in_x0 + 0xe6) == '\0') {
    iVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    uVar3 = (undefined1)*(undefined4 *)(in_x0 + 0xe0);
  }
  else {
    iVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    uVar3 = (undefined1)*(undefined4 *)(in_x0 + 0xe0);
  }
  PlantType::GetCurrentLevelSkillType(iVar1,(bool)uVar3);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)in_x8,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpIconWidget::InitView() */

void __thiscall PlantLevelUpIconWidget::InitView(PlantLevelUpIconWidget *this)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xe5] == (PlantLevelUpIconWidget)0x0) {
    GetSkillSheet();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      InitSkillData(this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      lVar5 = *(long *)this;
    }
    else {
      lVar5 = *(long *)this;
    }
    pcVar6 = *(code **)(lVar5 + 0x198);
    uVar2 = FUN_04948ad0(0);
    uVar3 = FUN_04948ad0(100);
    lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70840);
    iVar4 = FUN_04948ad0(0x2d);
    (*pcVar6)(this,uVar2,uVar2,uVar3,iVar4 + *(int *)(lVar5 + 0x3c));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  else {
    pcVar6 = *(code **)(*(long *)this + 0x198);
    uVar2 = FUN_04948ad0(0);
    uVar3 = FUN_04948ad0(100);
    lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70840);
    iVar4 = FUN_04948ad0(0x2d);
    (*pcVar6)(this,uVar2,uVar2,uVar3,iVar4 + *(int *)(lVar5 + 0x3c));
  }
  PlayZoomAnim(this,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLevelUpIconWidget::PlantLevelUpIconWidget(IconData, PVZ2UIStarLevelUp*) */

void __thiscall
PlantLevelUpIconWidget::PlantLevelUpIconWidget
          (PlantLevelUpIconWidget *this,long param_2,size_t param_3)

{
  PlantLevelUpIconWidget PVar1;
  size_t __n;
  
  __n = param_3;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06912e60;
  Set8BytesTo0(this + 0xe8);
  Set8BytesTo0((string *)(this + 0xf0));
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_2 + 8);
  thunk_FUN_05475e00(this + 0xe8,param_2);
  PVar1 = *(PlantLevelUpIconWidget *)(param_2 + 0xd);
  this[0xe6] = *(PlantLevelUpIconWidget *)(param_2 + 0xc);
  this[0xe5] = PVar1;
  *(undefined8 *)(this + 0xd8) = 0;
  this[0xe4] = (PlantLevelUpIconWidget)0x0;
  std::string::append((string *)(this + 0xf0),"",__n);
  *(undefined4 *)(this + 0x130) = 0;
  *(size_t *)(this + 0xf8) = param_3;
  this[0x134] = (PlantLevelUpIconWidget)0x0;
  this[0x135] = (PlantLevelUpIconWidget)0x0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  InitAnim(this);
  InitView(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpIconWidget::UpdateComplete(bool) */

void __thiscall PlantLevelUpIconWidget::UpdateComplete(PlantLevelUpIconWidget *this,bool param_1)

{
  bool bVar1;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((byte)this[0xe5] <= param_1) {
    *(int *)(this + 0xe0) = *(int *)(this + 0xe0) + 1;
  }
  PVZ2UIStarLevelUp::IncrementUpdateCount(*(PVZ2UIStarLevelUp **)(this + 0xf8));
  GetSkillSheet();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    InitSkillData(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  PVZ2UIStarLevelUp::NotifyUpdateComplete(*(PVZ2UIStarLevelUp **)(this + 0xf8),param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLevelUpIconWidget::RequestForUpdate(bool) */

void __thiscall PlantLevelUpIconWidget::RequestForUpdate(PlantLevelUpIconWidget *this,bool param_1)

{
  if (param_1) {
    UpdateComplete(this,true);
    return;
  }
  if (this[0xe5] == (PlantLevelUpIconWidget)0x0) {
    CreateArrowEffect(this);
    NotifyColorChange(this);
    return;
  }
  PlayZoomAnim(this,true);
  NotifyColorChange(this);
  return;
}


/* PlantLevelUpIconWidget::onAnimStopped(std::string const&) */

void PlantLevelUpIconWidget::onAnimStopped(string *param_1)

{
  UpdateComplete((PlantLevelUpIconWidget *)param_1,false);
  return;
}

