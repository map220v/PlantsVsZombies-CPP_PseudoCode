// Class: UniverseScrollingArea


/* UniverseScrollingArea::DrawOverlay(Sexy::Graphics*) */

void __thiscall UniverseScrollingArea::DrawOverlay(UniverseScrollingArea *this,Graphics *param_1)

{
  if (this[0x120] == (UniverseScrollingArea)0x0) {
    if (*(StandaloneEffect **)(this + 0xe0) != (StandaloneEffect *)0x0) {
      StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0xe0),param_1);
    }
    if (*(StandaloneEffect **)(this + 0xe8) != (StandaloneEffect *)0x0) {
      StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0xe8),param_1);
      return;
    }
  }
  return;
}


/* UniverseScrollingArea::TouchesCanceled() */

void UniverseScrollingArea::TouchesCanceled(void)

{
  long in_x0;
  
  nop();
  (**(code **)(**(long **)(in_x0 + 0xd8) + 0x58))(*(long **)(in_x0 + 0xd8));
  return;
}


/* UniverseScrollingArea::Draw(Sexy::Graphics*) */

void UniverseScrollingArea::Draw(Graphics *param_1)

{
  LawnApp *this;
  char cVar1;
  long lVar2;
  
  this = gLawnApp;
  lVar2 = LawnApp::GetPVZ2Dialog(gLawnApp);
  if ((((lVar2 == 0) && (lVar2 = LawnApp::GetWorldPreview(this), lVar2 == 0)) &&
      (cVar1 = LawnApp::IsCoinStoreShowing(this), cVar1 == '\0')) &&
     (cVar1 = LawnApp::IsDailySignRewardShowing(this), cVar1 == '\0')) {
    Sexy::Widget::DeferOverlay((Widget *)param_1,4);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseScrollingArea::StaticClassInit() */

void UniverseScrollingArea::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"UniverseScrollingArea");
    (*pcVar2)(plVar1,asStack_10,FUN_044d6320,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UniverseScrollingArea::StaticGetClass() */

long * UniverseScrollingArea::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"UniverseScrollingArea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UniverseScrollingArea::GetClass() const */

long * UniverseScrollingArea::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"UniverseScrollingArea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UniverseScrollingArea::HideAnims() */

void __thiscall UniverseScrollingArea::HideAnims(UniverseScrollingArea *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (*(StandaloneEffect **)(this + 0xe0) != (StandaloneEffect *)0x0) {
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0xe0),false);
  }
  uVar5 = *(undefined8 *)(this + 0xf8);
  uVar4 = 0;
  uVar1 = FUN_044d5728(uVar5,*(undefined8 *)(this + 0x100));
  while (uVar3 = uVar4, uVar4 < uVar1) {
    while( true ) {
      uVar4 = uVar3 + 1;
      puVar2 = (undefined8 *)FUN_044d5734(uVar5,uVar3);
      if ((StandaloneEffect *)*puVar2 == (StandaloneEffect *)0x0) break;
      StandaloneEffect::SetVisibility((StandaloneEffect *)*puVar2,false);
      uVar5 = *(undefined8 *)(this + 0xf8);
      uVar1 = FUN_044d5728(uVar5,*(undefined8 *)(this + 0x100));
      uVar3 = uVar4;
      if (uVar1 <= uVar4) goto LAB_044d6490;
    }
  }
LAB_044d6490:
  this[0x120] = (UniverseScrollingArea)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseScrollingArea::FindAnimByPosition(Sexy::Point const&) */

void __thiscall
UniverseScrollingArea::FindAnimByPosition(UniverseScrollingArea *this,Point *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  StandaloneEffect *this_00;
  undefined8 uVar5;
  FastCurve aFStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = 0;
  Sexy::FastCurve::SetOutRange(aFStack_18,(float)*(int *)param_1,(float)*(int *)(param_1 + 4));
  uVar5 = *(undefined8 *)(this + 0xf8);
  lVar2 = FUN_044d5728(uVar5,*(undefined8 *)(this + 0x100));
  if (lVar2 != 0) {
    do {
      puVar3 = (undefined8 *)FUN_044d5734(uVar5,lVar4);
      this_00 = (StandaloneEffect *)*puVar3;
      if (this_00 != (StandaloneEffect *)0x0) {
        puVar3 = (undefined8 *)StandaloneEffect::GetScreenSpaceOrigin(this_00);
        local_10 = *puVar3;
        cVar1 = Sexy::SexyVector2::operator==((SexyVector2 *)&local_10,(SexyVector2 *)aFStack_18);
        if (cVar1 != '\0') goto LAB_044d656c;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != lVar2);
  }
  this_00 = (StandaloneEffect *)0x0;
LAB_044d656c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseScrollingArea::TouchEnded(Sexy::Touch const&) */

void __thiscall UniverseScrollingArea::TouchEnded(UniverseScrollingArea *this,Touch *param_1)

{
  char cVar1;
  Touch aTStack_40 [16];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [36];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = UniverseMap::isInState(*(UniverseMap **)(this + 0xd8),0xffffffff);
  if (((cVar1 != '\0') ||
      (cVar1 = UniverseMap::isInState(*(UniverseMap **)(this + 0xd8),6), cVar1 != '\0')) &&
     (this[0x115] == (UniverseScrollingArea)0x0)) {
    Sexy::Widget::TouchEnded((Widget *)this,param_1);
    Sexy::Touch::Touch(aTStack_40,param_1);
    FUN_044d552c(*(undefined8 *)(this + 0xd8),auStack_30,auStack_2c);
    (**(code **)(**(long **)(this + 0xd8) + 0x50))(*(long **)(this + 0xd8),aTStack_40);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseScrollingArea::TouchMoved(Sexy::Touch const&) */

void __thiscall UniverseScrollingArea::TouchMoved(UniverseScrollingArea *this,Touch *param_1)

{
  char cVar1;
  Touch aTStack_40 [16];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [36];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = UniverseMap::isInState(*(UniverseMap **)(this + 0xd8),0xffffffff);
  if (((cVar1 != '\0') ||
      (cVar1 = UniverseMap::isInState(*(UniverseMap **)(this + 0xd8),6), cVar1 != '\0')) &&
     (this[0x115] == (UniverseScrollingArea)0x0)) {
    Sexy::Widget::TouchMoved((Widget *)this,param_1);
    Sexy::Touch::Touch(aTStack_40,param_1);
    FUN_044d552c(*(undefined8 *)(this + 0xd8),auStack_30,auStack_2c);
    (**(code **)(**(long **)(this + 0xd8) + 0x48))(*(long **)(this + 0xd8),aTStack_40);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseScrollingArea::TouchBegan(Sexy::Touch const&) */

void __thiscall UniverseScrollingArea::TouchBegan(UniverseScrollingArea *this,Touch *param_1)

{
  char cVar1;
  Touch aTStack_40 [16];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [36];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = UniverseMap::isInState(*(UniverseMap **)(this + 0xd8),0xffffffff);
  if (((cVar1 != '\0') ||
      (cVar1 = UniverseMap::isInState(*(UniverseMap **)(this + 0xd8),6), cVar1 != '\0')) &&
     (this[0x115] == (UniverseScrollingArea)0x0)) {
    Sexy::Widget::TouchBegan((Widget *)this,param_1);
    Sexy::Touch::Touch(aTStack_40,param_1);
    FUN_044d552c(*(undefined8 *)(this + 0xd8),auStack_30,auStack_2c);
    (**(code **)(**(long **)(this + 0xd8) + 0x40))(*(long **)(this + 0xd8),aTStack_40);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UniverseScrollingArea::Update() */

void __thiscall UniverseScrollingArea::Update(UniverseScrollingArea *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  
  if (*(StandaloneEffect **)(this + 0xe0) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0xe0));
  }
  if (*(StandaloneEffect **)(this + 0xe8) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0xe8));
  }
  uVar5 = *(undefined8 *)(this + 0xf8);
  uVar4 = 0;
  uVar1 = FUN_044d5728(uVar5,*(undefined8 *)(this + 0x100));
  while (uVar3 = uVar4, uVar4 < uVar1) {
    while( true ) {
      uVar4 = uVar3 + 1;
      puVar2 = (undefined8 *)FUN_044d5734(uVar5,uVar3);
      if ((StandaloneEffect *)*puVar2 == (StandaloneEffect *)0x0) break;
      StandaloneEffect::Update((StandaloneEffect *)*puVar2);
      uVar5 = *(undefined8 *)(this + 0xf8);
      uVar1 = FUN_044d5728(uVar5,*(undefined8 *)(this + 0x100));
      uVar3 = uVar4;
      if (uVar1 <= uVar4) goto LAB_044d75dc;
    }
  }
LAB_044d75dc:
  if (this[0x114] == (UniverseScrollingArea)0x0) {
    fVar6 = (float)PVZ_T();
    if (2.5 <= fVar6 - *(float *)(this + 0x110)) {
      this[0x114] = (UniverseScrollingArea)0x1;
      uVar7 = PVZ_T();
      *(undefined4 *)(this + 0x110) = uVar7;
      return;
    }
  }
  else {
    fVar6 = (float)PVZ_T();
    if (2.5 <= fVar6 - *(float *)(this + 0x110)) {
      this[0x114] = (UniverseScrollingArea)0x0;
      uVar7 = PVZ_T();
      *(undefined4 *)(this + 0x110) = uVar7;
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseScrollingArea::DrawFadeAnims(Sexy::Graphics*, Sexy::Image*, float, float) */

void __thiscall
UniverseScrollingArea::DrawFadeAnims
          (UniverseScrollingArea *this,Graphics *param_1,Image *param_2,float param_3,float param_4)

{
  float fVar1;
  undefined4 local_1c;
  undefined4 local_18 [3];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x114] == (UniverseScrollingArea)0x0) {
    PVZ_T();
    local_18[0] = 0x3ecccccd;
    local_1c = 0x3f800000;
    fVar1 = CurveEvaluate<float>(&local_1c,(Color *)local_18,4);
    Sexy::Color::Color((Color *)local_18,1);
    local_c = (int)(fVar1 * 255.0);
    Sexy::Graphics::SetColor(param_1,(Color *)local_18);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Graphics::DrawImage(param_1,param_2,0,0,(int)param_3,(int)param_4);
    Sexy::Graphics::SetColorizeImages(param_1,false);
  }
  else {
    PVZ_T();
    local_1c = 0x3ecccccd;
    local_18[0] = 0x3f800000;
    fVar1 = CurveEvaluate<float>(&local_1c,(Color *)local_18,4);
    Sexy::Color::Color((Color *)local_18,1);
    local_c = (int)(fVar1 * 255.0);
    Sexy::Graphics::SetColor(param_1,(Color *)local_18);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Graphics::DrawImage(param_1,param_2,0,0,(int)param_3,(int)param_4);
    Sexy::Graphics::SetColorizeImages(param_1,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseScrollingArea::DrawFadeAnimsForSpecial(Sexy::Graphics*, Sexy::Image*, int, int) */

void __thiscall
UniverseScrollingArea::DrawFadeAnimsForSpecial
          (UniverseScrollingArea *this,Graphics *param_1,Image *param_2,int param_3,int param_4)

{
  float fVar1;
  undefined4 local_1c;
  undefined4 local_18 [3];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x114] == (UniverseScrollingArea)0x0) {
    PVZ_T();
    local_18[0] = 0x3ecccccd;
    local_1c = 0x3f800000;
    fVar1 = CurveEvaluate<float>(&local_1c,(Color *)local_18,4);
    Sexy::Color::Color((Color *)local_18,1);
    local_c = (int)(fVar1 * 255.0);
    Sexy::Graphics::SetColor(param_1,(Color *)local_18);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Graphics::DrawImage(param_1,param_2,param_3,param_4);
    Sexy::Graphics::SetColorizeImages(param_1,false);
  }
  else {
    PVZ_T();
    local_1c = 0x3ecccccd;
    local_18[0] = 0x3f800000;
    fVar1 = CurveEvaluate<float>(&local_1c,(Color *)local_18,4);
    Sexy::Color::Color((Color *)local_18,1);
    local_c = (int)(fVar1 * 255.0);
    Sexy::Graphics::SetColor(param_1,(Color *)local_18);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Graphics::DrawImage(param_1,param_2,param_3,param_4);
    Sexy::Graphics::SetColorizeImages(param_1,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseScrollingArea::DrawFadeLinkEffect(Sexy::Graphics*, Effect_PopAnim*) */

void __thiscall
UniverseScrollingArea::DrawFadeLinkEffect
          (UniverseScrollingArea *this,Graphics *param_1,Effect_PopAnim *param_2)

{
  PopAnimRig *this_00;
  float fVar1;
  undefined4 local_1c;
  undefined4 local_18 [3];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x114] == (UniverseScrollingArea)0x0) {
    PVZ_T();
    local_18[0] = 0x3ecccccd;
    local_1c = 0x3f800000;
  }
  else {
    PVZ_T();
    local_1c = 0x3ecccccd;
    local_18[0] = 0x3f800000;
  }
  fVar1 = CurveEvaluate<float>(&local_1c,local_18,4);
  Sexy::Color::Color((Color *)local_18,1);
  local_c = (int)(fVar1 * 255.0);
  this_00 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)param_2);
  PopAnimRig::SetPAMColor(this_00,(Color *)local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseScrollingArea::onWinnieAppear(std::string const&) */

void UniverseScrollingArea::onWinnieAppear(string *param_1)

{
  int iVar1;
  UniverseMap *this;
  Effect_PopAnim *pEVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(param_1 + 0xe8),false);
  pEVar2 = *(Effect_PopAnim **)(param_1 + 0xe0);
  std::string::string(asStack_10,"idle");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar2,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  this = *(UniverseMap **)(param_1 + 0xd8);
  iVar1 = FUN_044d5528(*(undefined4 *)(this + 0x290));
  UniverseMap::enterWorld(this,iVar1);
  param_1[0x115] = (string)0x0;
  HideAnims((UniverseScrollingArea *)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseScrollingArea::onWinnieAppearForGate(std::string const&) */

void UniverseScrollingArea::onWinnieAppearForGate(string *param_1)

{
  Effect_PopAnim *pEVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar1 = *(Effect_PopAnim **)(param_1 + 0xe0);
  std::string::string(asStack_10,"idle");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar1,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  UniverseMap::setState(*(UniverseMap **)(param_1 + 0xd8),3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseScrollingArea::SetWinniePosition(std::string) */

void UniverseScrollingArea::SetWinniePosition(ReceivedDataCallback *param_1)

{
  string *psVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  PopAnimRig *pPVar7;
  long lVar8;
  undefined8 uVar9;
  StandaloneEffect *this;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  FastCurve aFStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  psVar1 = (string *)(param_1 + 0xf0);
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(psVar1);
  Effect_PopAnim::GetPopAnimRigPtr();
  pPVar7 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  std::string::string(asStack_58,"disappear");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,onWinnieDisappear);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<UniverseScrollingArea,void(UniverseScrollingArea::*)(std::string_const&)>
            (aDStack_38,aFStack_50);
  PopAnimRig::PlayAndStop(pPVar7,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  param_1[0x115] = (ReceivedDataCallback)0x1;
  lVar8 = UniverseMap::GetButtonForWorld(*(UniverseMap **)(param_1 + 0xd8),psVar1);
  iVar4 = *(int *)(lVar8 + 0x54);
  iVar3 = *(int *)(lVar8 + 0x4c);
  *(int *)(param_1 + 0x118) = *(int *)(lVar8 + 0x48) + *(int *)(lVar8 + 0x50) / 2;
  *(int *)(param_1 + 0x11c) = iVar4 / 3 + iVar3;
  bVar2 = std::operator==(psVar1,"pirate");
  if (bVar2) {
    iVar3 = FUN_044d5aa0(3);
    iVar3 = *(int *)(param_1 + 0x118) - iVar3;
    uVar9 = 0x10;
  }
  else {
    bVar2 = std::operator==(psVar1,"cowboy");
    if (bVar2) {
      iVar3 = FUN_044d5aa0(0xb);
      iVar3 = *(int *)(param_1 + 0x118) - iVar3;
      uVar9 = 0x12;
    }
    else {
      bVar2 = std::operator==(psVar1,"dark");
      if (bVar2) {
        iVar3 = FUN_044d5aa0(0xc);
        iVar3 = *(int *)(param_1 + 0x118) - iVar3;
        uVar9 = 0x32;
      }
      else {
        bVar2 = std::operator==(psVar1,"beach");
        if (bVar2) {
          iVar3 = FUN_044d5aa0(8);
          iVar3 = iVar3 + *(int *)(param_1 + 0x118);
          uVar9 = 0x14;
        }
        else {
          bVar2 = std::operator==(psVar1,"iceage");
          if (!bVar2) {
            iVar4 = *(int *)(param_1 + 0x11c);
            iVar3 = *(int *)(param_1 + 0x118);
            goto LAB_044dbae8;
          }
          iVar3 = FUN_044d5aa0(2);
          iVar3 = iVar3 + *(int *)(param_1 + 0x118);
          uVar9 = 0x20;
        }
      }
    }
  }
  *(int *)(param_1 + 0x118) = iVar3;
  iVar4 = FUN_044d5aa0(uVar9);
  iVar4 = iVar4 + *(int *)(param_1 + 0x11c);
  *(int *)(param_1 + 0x11c) = iVar4;
LAB_044dbae8:
  iVar5 = FUN_044d5aa0(0x1e);
  *(int *)(param_1 + 0x11c) = iVar5 + iVar4;
  this = *(StandaloneEffect **)(param_1 + 0xe8);
  iVar6 = FUN_044d5aa0(5);
  Sexy::FastCurve::SetOutRange(aFStack_50,(float)(iVar3 - iVar6),(float)(iVar5 + iVar4));
  StandaloneEffect::SetScreenSpaceOrigin(this,(SexyVector2 *)aFStack_50,900000);
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(param_1 + 0xe8),true);
  Effect_PopAnim::GetPopAnimRigPtr();
  pPVar7 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
  std::string::string((string *)aFStack_50,"appear1");
  Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)aDStack_38);
  PopAnimRig::PlayAndStop(pPVar7,aFStack_50,0,aDStack_38);
  std::string::~string((string *)aFStack_50);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseScrollingArea::SetWinnieGatePosition() */

void __thiscall UniverseScrollingArea::SetWinnieGatePosition(UniverseScrollingArea *this)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::GetPopAnimRigPtr();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  std::string::string(asStack_58,"disappear");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWinnieDisappearForGate);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<UniverseScrollingArea,void(UniverseScrollingArea::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseScrollingArea::onWinnieDisappear(std::string const&) */

void UniverseScrollingArea::onWinnieDisappear(string *param_1)

{
  int iVar1;
  PopAnimRig *pPVar2;
  StandaloneEffect *this;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  FastCurve aFStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UniverseMap::GetButtonForWorld(*(UniverseMap **)(param_1 + 0xd8),param_1 + 0xf0);
  this = *(StandaloneEffect **)(param_1 + 0xe0);
  iVar1 = FUN_044d5aa0(0x28);
  Sexy::FastCurve::SetOutRange
            (aFStack_50,(float)*(int *)(param_1 + 0x118),(float)(*(int *)(param_1 + 0x11c) - iVar1))
  ;
  StandaloneEffect::SetScreenSpaceOrigin(this,(SexyVector2 *)aFStack_50,900000);
  Effect_PopAnim::GetPopAnimRigPtr();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  std::string::string(asStack_58,"appear");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onWinnieAppear);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<UniverseScrollingArea,void(UniverseScrollingArea::*)(std::string_const&)>
            (aDStack_38,aFStack_50);
  PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseScrollingArea::onWinnieDisappearForGate(std::string const&) */

void UniverseScrollingArea::onWinnieDisappearForGate(string *param_1)

{
  int iVar1;
  long *plVar2;
  PopAnimRig *pPVar3;
  long lVar4;
  StandaloneEffect *this;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  FastCurve aFStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar2 = (long *)FUN_044d5710(*(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x340),
                                (long)*(int *)(*(long *)(param_1 + 0xd8) + 0x35c));
  lVar4 = *plVar2;
  this = *(StandaloneEffect **)(param_1 + 0xe0);
  iVar1 = FUN_044d5aa0(0x1e);
  Sexy::FastCurve::SetOutRange
            (aFStack_50,(float)(*(int *)(lVar4 + 0x48) + *(int *)(lVar4 + 0x50) / 2),
             (float)(*(int *)(lVar4 + 0x4c) - iVar1));
  StandaloneEffect::SetScreenSpaceOrigin(this,(SexyVector2 *)aFStack_50,900000);
  Effect_PopAnim::GetPopAnimRigPtr();
  pPVar3 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  std::string::string(asStack_58,"appear");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onWinnieAppearForGate);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<UniverseScrollingArea,void(UniverseScrollingArea::*)(std::string_const&)>
            (aDStack_38,aFStack_50);
  PopAnimRig::PlayAndStop(pPVar3,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseScrollingArea::DrawMapPorts(Sexy::Graphics*) */

void __thiscall UniverseScrollingArea::DrawMapPorts(UniverseScrollingArea *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  TPoint *pTVar7;
  long *plVar8;
  Image *pIVar9;
  ulong uVar10;
  undefined8 uVar11;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = UniverseMap::isInState(*(UniverseMap **)(this + 0xd8),2);
  if ((cVar3 != '\0') ||
     (cVar3 = UniverseMap::isInState(*(UniverseMap **)(this + 0xd8),0xc), cVar3 != '\0')) {
    uVar10 = 0;
    uVar11 = *(undefined8 *)(*(long *)(this + 0xd8) + 0x328);
    uVar5 = FUN_044d55f4(uVar11,*(undefined8 *)(*(long *)(this + 0xd8) + 0x330));
    if (uVar5 != 0) {
      do {
        puVar6 = (undefined8 *)FUN_044d5600(uVar11,uVar10);
        if ((UniverseWorldButton *)*puVar6 != (UniverseWorldButton *)0x0) {
          pTVar7 = (TPoint *)UniverseWorldButton::GetStartPoint((UniverseWorldButton *)*puVar6);
          Sexy::Point::Point((Point *)&local_10,pTVar7);
          plVar8 = (long *)FUN_044d5600(*(undefined8 *)(*(long *)(this + 0xd8) + 0x328),uVar10);
          iVar1 = *(int *)(*plVar8 + 0x48) + local_10;
          iVar2 = *(int *)(*plVar8 + 0x4c) + local_c;
          iVar4 = FUN_044d5aa0(0x41);
          pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dce8);
          Sexy::Graphics::DrawImage(param_1,pIVar9,iVar1,iVar2 + iVar4);
          uVar11 = *(undefined8 *)(*(long *)(this + 0xd8) + 0x328);
          uVar5 = FUN_044d55f4(uVar11,*(undefined8 *)(*(long *)(this + 0xd8) + 0x330));
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar5);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseScrollingArea::DrawMapLines(Sexy::Graphics*) */

void __thiscall UniverseScrollingArea::DrawMapLines(UniverseScrollingArea *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  long *plVar15;
  ulong uVar16;
  string *psVar17;
  UniverseWorldButton *pUVar18;
  undefined8 *puVar19;
  Graphics3D *pGVar20;
  ProfileMgr *pPVar21;
  PlayerInfo *pPVar22;
  Image *pIVar23;
  Image *pIVar24;
  Effect_PopAnim *pEVar25;
  int iVar26;
  UniverseMap *this_02;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  ulong uVar31;
  float fVar32;
  double dVar33;
  float fVar34;
  undefined4 uVar35;
  undefined8 local_90;
  string asStack_88 [8];
  GraphicsAutoState aGStack_80 [8];
  ulong local_78;
  float local_70;
  float local_6c;
  float local_60;
  float local_5c;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_34;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar4 = UniverseMap::isInState(*(UniverseMap **)(this + 0xd8),2);
  if ((cVar4 != '\0') ||
     (cVar4 = UniverseMap::isInState(*(UniverseMap **)(this + 0xd8),0xc), cVar4 != '\0')) {
    lVar28 = 0;
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dce8);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dbb0);
    iVar7 = SalesProgressBar::GetCurrentLevel(this_01);
    plVar15 = (long *)FUN_044d5710(*(undefined8 *)(*(long *)(this + 0xd8) + 0x340),0);
    iVar1 = *(int *)(*plVar15 + 0x50);
    Sexy::Point::Point((Point *)&local_90);
    this_02 = *(UniverseMap **)(this + 0xd8);
    uVar27 = *(undefined8 *)(this_02 + 0x340);
    do {
      uVar31 = 0;
      while( true ) {
        plVar15 = (long *)FUN_044d5710(uVar27,lVar28);
        lVar29 = *plVar15;
        uVar30 = *(undefined8 *)(lVar29 + 0xd8);
        uVar16 = FUN_044d56dc(uVar30,*(undefined8 *)(lVar29 + 0xe0));
        if (uVar16 <= uVar31) break;
        psVar17 = (string *)FUN_044d56e8(uVar30,uVar31);
        pUVar18 = (UniverseWorldButton *)UniverseMap::GetButtonForWorld(this_02,psVar17);
        if (pUVar18 != (UniverseWorldButton *)0x0) {
          puVar19 = (undefined8 *)UniverseWorldButton::GetStartPoint(pUVar18);
          local_90 = *puVar19;
          plVar15 = (long *)FUN_044d5710(*(undefined8 *)(*(long *)(this + 0xd8) + 0x340),lVar28);
          lVar29 = *plVar15;
          iVar8 = FUN_044d5aa0(0x1a);
          iVar13 = *(int *)(lVar29 + 0x54);
          iVar12 = *(int *)(lVar29 + 0x48);
          iVar2 = *(int *)(lVar29 + 0x4c);
          iVar9 = FUN_044d5aa0(0x3a);
          iVar14 = (int)local_90 + *(int *)(pUVar18 + 0x48);
          iVar10 = FUN_044d5aa0(10);
          iVar26 = local_90._4_4_ + *(int *)(pUVar18 + 0x4c);
          iVar11 = FUN_044d5aa0(0x5a);
          EATextSquish::Vec3::Vec3
                    ((Vec3 *)&local_70,(float)((iVar14 + iVar6) - iVar10),(float)(iVar26 + iVar11),
                     0.0);
          uVar35 = 0;
          fVar34 = (float)(iVar2 + iVar13 / 2 + iVar9);
          EATextSquish::Vec3::Vec3((Vec3 *)&local_60,(float)(iVar8 + iVar12),fVar34,0.0);
          UniverseWorldButton::GetWorldName();
          if (lVar28 == 1) {
            bVar5 = std::operator==(asStack_88,"egypt");
            if (bVar5) goto LAB_044dcce8;
LAB_044dc518:
            Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_80,param_1);
            local_50 = (float)Sexy::SexyVector3::operator-
                                        ((SexyVector3 *)&local_70,(SexyVector3 *)&local_60);
            local_4c = fVar34;
            local_48 = uVar35;
            dVar33 = atan2((double)-fVar34,(double)local_50);
            fVar34 = (float)DVec3::getLength((DVec3 *)&local_50);
            Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
            Sexy::SexyTransform2D::RotateRad(aSStack_30,(float)dVar33);
            FUN_044d54a8(local_60 + *(float *)(param_1 + 0x10),local_5c + *(float *)(param_1 + 0x14)
                         ,auStack_28,auStack_1c);
            *(undefined4 *)(param_1 + 0x10) = 0;
            *(undefined4 *)(param_1 + 0x14) = 0;
            pGVar20 = (Graphics3D *)Sexy::Graphics::Get3D(param_1);
            Sexy::Graphics3D::PushTransform(pGVar20,(SexyMatrix3 *)aSStack_30,true);
            pPVar21 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
            pPVar22 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar21);
            if (pPVar22 == (PlayerInfo *)0x0) {
              pIVar23 = (Image *)0x0;
LAB_044dc624:
              cVar4 = UniverseMap::isInState(*(UniverseMap **)(this + 0xd8),1);
              if (cVar4 != '\0') goto LAB_044dc638;
LAB_044dc6a4:
              cVar4 = UniverseMap::isInState(*(UniverseMap **)(this + 0xd8),2);
              if (((cVar4 != '\0') ||
                  (cVar4 = UniverseMap::isInState(*(UniverseMap **)(this + 0xd8),3), cVar4 != '\0'))
                 || (cVar4 = UniverseMap::isInState(*(UniverseMap **)(this + 0xd8),4), cVar4 != '\0'
                    )) goto LAB_044dc638;
              pIVar24 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dbb0);
              if (pIVar23 == pIVar24) goto LAB_044dcb88;
              Sexy::Graphics::DrawImage(param_1,pIVar23,0,0,(int)fVar34,iVar7);
            }
            else {
              UniverseWorldButton::GetWorldName();
              cVar4 = PlayerInfo::HasTargetWorldPlayedAnim(pPVar22,(string *)&local_40);
              std::string::~string((string *)&local_40);
              if (cVar4 != '\0') {
                pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dd58);
                goto LAB_044dc624;
              }
              pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dbb0);
              cVar4 = UniverseMap::isInState(*(UniverseMap **)(this + 0xd8),1);
              if (cVar4 == '\0') goto LAB_044dc6a4;
LAB_044dc638:
              cVar4 = UniverseWorldButton::NeedPlayUnlockAnim(pUVar18);
              if (cVar4 == '\0') {
                pIVar24 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dbb0);
                if (pIVar23 == pIVar24) {
LAB_044dcb88:
                  DrawFadeAnims(this,param_1,pIVar23,fVar34,(float)iVar7);
                  Sexy::Point::Point((Point *)&local_78);
                  fVar34 = local_5c + local_6c;
                  iVar14 = FUN_044d5aa0(0x14);
                  Sexy::Point::Point((Point *)&local_40,(int)((local_60 + local_70) * 0.5),
                                     (int)(fVar34 * 0.5 - (float)iVar14));
                  local_78 = CONCAT44(uStack_3c,local_40);
                  pEVar25 = (Effect_PopAnim *)FindAnimByPosition(this,(Point *)&local_78);
                  if (pEVar25 != (Effect_PopAnim *)0x0) {
                    DrawFadeLinkEffect(this,param_1,pEVar25);
                  }
                }
                else {
                  Sexy::Graphics::DrawImage(param_1,pIVar23,0,0,(int)fVar34,iVar7);
                }
              }
              else {
                pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dd58);
                fVar32 = (float)PVZ_T();
                local_78 = local_78 & 0xffffffff00000000;
                local_40 = 0x3f800000;
                fVar32 = CurveEvaluate<float>
                                   ((fVar32 - *(float *)(*(long *)(this + 0xd8) + 0x358)) * 0.4,
                                    &local_78,(Color *)&local_40,4);
                Sexy::Color::Color((Color *)&local_40,1);
                local_34 = (int)(fVar32 * 255.0);
                Sexy::Graphics::SetColor(param_1,(Color *)&local_40);
                Sexy::Graphics::SetColorizeImages(param_1,true);
                Sexy::Graphics::DrawImage(param_1,pIVar23,0,0,(int)fVar34,iVar7);
                Sexy::Graphics::SetColorizeImages(param_1,false);
              }
            }
            pGVar20 = (Graphics3D *)Sexy::Graphics::Get3D(param_1);
            Sexy::Graphics3D::PopTransform(pGVar20);
            Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_80);
          }
          else {
            if ((int)lVar28 == 2) {
              bVar5 = std::operator==(asStack_88,"kongfu");
              if (bVar5) goto LAB_044dcce8;
              goto LAB_044dc518;
            }
            if ((int)lVar28 == 3) {
              bVar5 = std::operator==(asStack_88,"future");
              if (bVar5) goto LAB_044dcce8;
              goto LAB_044dc518;
            }
            if ((lVar28 != 4) || (bVar5 = std::operator==(asStack_88,"beach"), !bVar5))
            goto LAB_044dc518;
LAB_044dcce8:
            pPVar21 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
            pPVar22 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar21);
            pIVar23 = (Image *)0x0;
            if (pPVar22 == (PlayerInfo *)0x0) {
LAB_044dcd60:
              bVar5 = std::operator==(asStack_88,"egypt");
              if (bVar5) goto LAB_044dcd78;
LAB_044dcf80:
              bVar5 = std::operator==(asStack_88,"kongfu");
              if (bVar5) {
                pIVar24 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dcb8);
                fVar34 = local_70;
                if (pIVar23 == pIVar24) {
LAB_044dd15c:
                  uVar27 = 4;
LAB_044dd0f8:
                  fVar34 = local_70;
                  iVar14 = FUN_044d5aa0(uVar27);
                  fVar32 = (float)iVar14;
                  uVar27 = 0x1b;
                }
                else {
                  iVar14 = FUN_044d5aa0(0x10);
                  fVar32 = (float)iVar14;
                  uVar27 = 0x1e;
                }
              }
              else {
                bVar5 = std::operator==(asStack_88,"beach");
                if (!bVar5) {
                  pIVar24 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e0c8);
                  if (pIVar23 == pIVar24) {
                    uVar27 = 5;
                  }
                  else {
                    uVar27 = 0xd;
                  }
                  goto LAB_044dd0f8;
                }
                pIVar24 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0db50);
                fVar34 = local_70;
                if (pIVar23 == pIVar24) goto LAB_044dd15c;
                iVar14 = FUN_044d5aa0(10);
                fVar32 = (float)iVar14;
                uVar27 = 0x1e;
              }
            }
            else {
              UniverseWorldButton::GetWorldName();
              cVar4 = PlayerInfo::HasTargetWorldPlayedAnim(pPVar22,(string *)&local_40);
              std::string::~string((string *)&local_40);
              if (cVar4 != '\0') {
                bVar5 = std::operator==(asStack_88,"egypt");
                if (bVar5) {
                  pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e020);
                }
                else {
                  bVar5 = std::operator==(asStack_88,"kongfu");
                  if (bVar5) {
                    pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0db88)
                    ;
                  }
                  else {
                    bVar5 = std::operator==(asStack_88,"beach");
                    if (bVar5) {
                      pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                                   ((CachedUIResourcePtr<Sexy::Image> *)
                                                    &DAT_06b0ddf0);
                    }
                    else {
                      pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                                   ((CachedUIResourcePtr<Sexy::Image> *)
                                                    &DAT_06b0dfd0);
                    }
                  }
                }
                goto LAB_044dcd60;
              }
              bVar5 = std::operator==(asStack_88,"egypt");
              if (!bVar5) {
                bVar5 = std::operator==(asStack_88,"kongfu");
                if (bVar5) {
                  pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dcb8);
                }
                else {
                  bVar5 = std::operator==(asStack_88,"beach");
                  if (bVar5) {
                    pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0db50)
                    ;
                  }
                  else {
                    pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e0c8)
                    ;
                  }
                }
                goto LAB_044dcd60;
              }
              pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dd80);
              bVar5 = std::operator==(asStack_88,"egypt");
              if (!bVar5) goto LAB_044dcf80;
LAB_044dcd78:
              fVar34 = local_70;
              iVar14 = FUN_044d5aa0(10);
              fVar32 = (float)iVar14;
              uVar27 = 0x1f;
            }
            fVar3 = local_6c;
            iVar26 = (int)(fVar34 - fVar32);
            iVar14 = FUN_044d5aa0(uVar27);
            iVar14 = (int)(fVar3 - (float)iVar14);
            cVar4 = UniverseMap::isInState(*(UniverseMap **)(this + 0xd8),1);
            if (((((cVar4 == '\0') &&
                  (cVar4 = UniverseMap::isInState(*(UniverseMap **)(this + 0xd8),2), cVar4 == '\0'))
                 && (cVar4 = UniverseMap::isInState(*(UniverseMap **)(this + 0xd8),3), cVar4 == '\0'
                    )) && (cVar4 = UniverseMap::isInState(*(UniverseMap **)(this + 0xd8),4),
                          cVar4 == '\0')) ||
               (cVar4 = UniverseWorldButton::NeedPlayUnlockAnim(pUVar18), cVar4 == '\0')) {
              pIVar24 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dd80);
              if (((pIVar23 == pIVar24) ||
                  (pIVar24 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e0c8),
                  pIVar23 == pIVar24)) ||
                 ((pIVar24 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dcb8),
                  pIVar23 == pIVar24 ||
                  (pIVar24 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0db50),
                  pIVar23 == pIVar24)))) {
                DrawFadeAnimsForSpecial(this,param_1,pIVar23,iVar26,iVar14);
              }
              else {
                Sexy::Graphics::DrawImage(param_1,pIVar23,iVar26,iVar14);
              }
            }
            else {
              bVar5 = std::operator==(asStack_88,"egypt");
              if (bVar5) {
                pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e020);
              }
              else {
                bVar5 = std::operator==(asStack_88,"kongfu");
                if (bVar5) {
                  pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0db88);
                }
                else {
                  bVar5 = std::operator==(asStack_88,"beach");
                  if (bVar5) {
                    pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0ddf0)
                    ;
                  }
                  else {
                    pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dfd0)
                    ;
                  }
                }
              }
              fVar34 = (float)PVZ_T();
              local_50 = 0.0;
              local_40 = 0x3f800000;
              fVar34 = CurveEvaluate<float>
                                 ((fVar34 - *(float *)(*(long *)(this + 0xd8) + 0x358)) * 0.4,
                                  &local_50,(Color *)&local_40,4);
              Sexy::Color::Color((Color *)&local_40,1);
              local_34 = (int)(fVar34 * 255.0);
              Sexy::Graphics::SetColor(param_1,(Color *)&local_40);
              Sexy::Graphics::SetColorizeImages(param_1,true);
              Sexy::Graphics::DrawImage(param_1,pIVar23,iVar26,iVar14);
              Sexy::Graphics::SetColorizeImages(param_1,false);
            }
          }
          std::string::~string(asStack_88);
        }
        this_02 = *(UniverseMap **)(this + 0xd8);
        uVar31 = uVar31 + 1;
        uVar27 = *(undefined8 *)(this_02 + 0x340);
      }
      uVar31 = 0;
      while( true ) {
        uVar30 = *(undefined8 *)(lVar29 + 0xf0);
        uVar16 = FUN_044d56dc(uVar30,*(undefined8 *)(lVar29 + 0xf8));
        if (uVar16 <= uVar31) break;
        psVar17 = (string *)FUN_044d56e8(uVar30,uVar31);
        pUVar18 = (UniverseWorldButton *)UniverseMap::GetButtonForWorld(this_02,psVar17);
        if (pUVar18 != (UniverseWorldButton *)0x0) {
          puVar19 = (undefined8 *)UniverseWorldButton::GetStartPoint(pUVar18);
          local_90 = *puVar19;
          plVar15 = (long *)FUN_044d5710(*(undefined8 *)(*(long *)(this + 0xd8) + 0x340),lVar28);
          lVar29 = *plVar15;
          iVar14 = *(int *)(lVar29 + 0x48);
          iVar12 = FUN_044d5aa0(0x19);
          iVar26 = *(int *)(lVar29 + 0x54);
          iVar12 = (iVar1 + iVar14) - iVar12;
          iVar13 = *(int *)(lVar29 + 0x4c);
          iVar14 = FUN_044d5aa0(0x3a);
          iVar14 = iVar13 + iVar26 / 2 + iVar14;
          UniverseWorldButton::GetWorldName();
          bVar5 = std::operator==(asStack_88,"pirate");
          if ((((bVar5) || (bVar5 = std::operator==(asStack_88,"cowboy"), bVar5)) ||
              (bVar5 = std::operator==(asStack_88,"dark"), bVar5)) ||
             (bVar5 = std::operator==(asStack_88,"iceage"), bVar5)) {
            iVar26 = FUN_044d5aa0(10);
            iVar12 = iVar12 - iVar26;
            iVar26 = FUN_044d5aa0(9);
            iVar14 = iVar14 + iVar26;
          }
          EATextSquish::Vec3::Vec3((Vec3 *)&local_70,(float)iVar12,(float)iVar14,0.0);
          iVar14 = (int)local_90 + *(int *)(pUVar18 + 0x48);
          iVar13 = FUN_044d5aa0(10);
          iVar26 = local_90._4_4_ + *(int *)(pUVar18 + 0x4c);
          iVar12 = FUN_044d5aa0(0x5a);
          uVar35 = 0;
          fVar34 = (float)(iVar26 + iVar12);
          EATextSquish::Vec3::Vec3((Vec3 *)&local_60,(float)(iVar14 + iVar13),fVar34,0.0);
          if ((lVar28 == 3) && (bVar5 = std::operator==(asStack_88,"skycity"), bVar5)) {
            cVar4 = FUN_044d6d18(*(undefined4 *)(pUVar18 + 0x1a8));
            if (cVar4 == '\0') {
              pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dbd8);
              pIVar24 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dbd8);
              if (pIVar23 != pIVar24) goto LAB_044dd1d4;
LAB_044dd328:
              uVar27 = 0xf;
            }
            else {
              pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e0a0);
              pIVar24 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dbd8);
              if (pIVar23 == pIVar24) goto LAB_044dd328;
LAB_044dd1d4:
              uVar27 = 0xd;
            }
            fVar34 = local_70;
            iVar14 = FUN_044d5aa0(uVar27);
            fVar32 = local_6c;
            iVar26 = (int)(fVar34 - (float)iVar14);
            iVar14 = FUN_044d5aa0(0x3c);
            iVar14 = (int)(fVar32 - (float)iVar14);
            cVar4 = UniverseMap::isInState(*(UniverseMap **)(this + 0xd8),5);
            if ((cVar4 == '\0') ||
               (cVar4 = UniverseWorldButton::NeedPlayRevealAnim(pUVar18), cVar4 == '\0')) {
              pIVar24 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dbd8);
              if (pIVar23 == pIVar24) {
                DrawFadeAnimsForSpecial(this,param_1,pIVar23,iVar26,iVar14);
              }
              else {
                Sexy::Graphics::DrawImage(param_1,pIVar23,iVar26,iVar14);
              }
            }
            else {
              pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e0a0);
              fVar34 = (float)PVZ_T();
              local_50 = 0.0;
              local_40 = 0x3f800000;
              fVar34 = CurveEvaluate<float>
                                 ((fVar34 - *(float *)(*(long *)(this + 0xd8) + 0x358)) * 0.4,
                                  &local_50,(Color *)&local_40,4);
              Sexy::Color::Color((Color *)&local_40,1);
              local_34 = (int)(fVar34 * 255.0);
              Sexy::Graphics::SetColor(param_1,(Color *)&local_40);
              Sexy::Graphics::SetColorizeImages(param_1,true);
              Sexy::Graphics::DrawImage(param_1,pIVar23,iVar26,iVar14);
              Sexy::Graphics::SetColorizeImages(param_1,false);
            }
          }
          else {
            Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_80,param_1);
            local_50 = (float)Sexy::SexyVector3::operator-
                                        ((SexyVector3 *)&local_70,(SexyVector3 *)&local_60);
            local_4c = fVar34;
            local_48 = uVar35;
            dVar33 = atan2((double)-fVar34,(double)local_50);
            fVar34 = (float)DVec3::getLength((DVec3 *)&local_50);
            Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
            Sexy::SexyTransform2D::RotateRad(aSStack_30,(float)dVar33);
            FUN_044d54a8(local_60 + *(float *)(param_1 + 0x10),local_5c + *(float *)(param_1 + 0x14)
                         ,auStack_28,auStack_1c);
            *(undefined4 *)(param_1 + 0x10) = 0;
            *(undefined4 *)(param_1 + 0x14) = 0;
            pGVar20 = (Graphics3D *)Sexy::Graphics::Get3D(param_1);
            Sexy::Graphics3D::PushTransform(pGVar20,(SexyMatrix3 *)aSStack_30,true);
            cVar4 = FUN_044d6d18(*(undefined4 *)(pUVar18 + 0x1a8));
            if (cVar4 == '\0') {
              pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dbb0);
              cVar4 = UniverseMap::isInState(*(UniverseMap **)(this + 0xd8),5);
              if (cVar4 != '\0') goto LAB_044dc764;
LAB_044dca78:
              pIVar24 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dbb0);
              if (pIVar23 == pIVar24) goto LAB_044dcc1c;
              Sexy::Graphics::DrawImage(param_1,pIVar23,0,0,(int)fVar34,iVar7);
            }
            else {
              pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dd58);
              cVar4 = UniverseMap::isInState(*(UniverseMap **)(this + 0xd8),5);
              if (cVar4 == '\0') goto LAB_044dca78;
LAB_044dc764:
              cVar4 = UniverseWorldButton::NeedPlayRevealAnim(pUVar18);
              if (cVar4 == '\0') {
                pIVar24 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dbb0);
                if (pIVar23 == pIVar24) {
LAB_044dcc1c:
                  DrawFadeAnims(this,param_1,pIVar23,fVar34,(float)iVar7);
                  Sexy::Point::Point((Point *)&local_78);
                  fVar34 = local_5c + local_6c;
                  iVar14 = FUN_044d5aa0(0x14);
                  Sexy::Point::Point((Point *)&local_40,(int)((local_60 + local_70) * 0.5),
                                     (int)(fVar34 * 0.5 - (float)iVar14));
                  local_78 = CONCAT44(uStack_3c,local_40);
                  pEVar25 = (Effect_PopAnim *)FindAnimByPosition(this,(Point *)&local_78);
                  if (pEVar25 != (Effect_PopAnim *)0x0) {
                    DrawFadeLinkEffect(this,param_1,pEVar25);
                  }
                }
                else {
                  Sexy::Graphics::DrawImage(param_1,pIVar23,0,0,(int)fVar34,iVar7);
                }
              }
              else {
                pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dd58);
                fVar32 = (float)PVZ_T();
                local_78 = local_78 & 0xffffffff00000000;
                local_40 = 0x3f800000;
                fVar32 = CurveEvaluate<float>
                                   ((fVar32 - *(float *)(*(long *)(this + 0xd8) + 0x358)) * 0.4,
                                    &local_78,(Color *)&local_40,4);
                Sexy::Color::Color((Color *)&local_40,1);
                local_34 = (int)(fVar32 * 255.0);
                Sexy::Graphics::SetColor(param_1,(Color *)&local_40);
                Sexy::Graphics::SetColorizeImages(param_1,true);
                Sexy::Graphics::DrawImage(param_1,pIVar23,0,0,(int)fVar34,iVar7);
                Sexy::Graphics::SetColorizeImages(param_1,false);
              }
            }
            pGVar20 = (Graphics3D *)Sexy::Graphics::Get3D(param_1);
            Sexy::Graphics3D::PopTransform(pGVar20);
            Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_80);
          }
          std::string::~string(asStack_88);
        }
        this_02 = *(UniverseMap **)(this + 0xd8);
        uVar31 = uVar31 + 1;
        uVar27 = *(undefined8 *)(this_02 + 0x340);
        plVar15 = (long *)FUN_044d5710(uVar27,lVar28);
        lVar29 = *plVar15;
      }
      lVar28 = lVar28 + 1;
    } while (lVar28 != 5);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UniverseScrollingArea::UniverseScrollingArea(UniverseMap*) */

void __thiscall
UniverseScrollingArea::UniverseScrollingArea(UniverseScrollingArea *this,UniverseMap *param_1)

{
  undefined **__n;
  undefined4 uVar1;
  
  Sexy::Widget::Widget((Widget *)this);
  __n = &PTR_GetClass_06855560;
  *(undefined ***)this = &PTR_GetClass_06855560;
  Set8BytesTo0((string *)(this + 0xf0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  *(UniverseMap **)(this + 0xd8) = param_1;
  std::string::append((string *)(this + 0xf0),"",(size_t)__n);
  uVar1 = PVZ_EOT();
  this[0x114] = (UniverseScrollingArea)0x0;
  this[0x115] = (UniverseScrollingArea)0x0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  this[0x120] = (UniverseScrollingArea)0x0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0x110) = uVar1;
  return;
}


/* UniverseScrollingArea::UniverseScrollingArea() */

void __thiscall UniverseScrollingArea::UniverseScrollingArea(UniverseScrollingArea *this)

{
  UniverseScrollingArea(this,(UniverseMap *)0x0);
  return;
}


/* UniverseScrollingArea::StaticNew() */

UniverseScrollingArea * UniverseScrollingArea::StaticNew(void)

{
  UniverseScrollingArea *this;
  
  this = ::operator_new(0x128);
  UniverseScrollingArea(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseScrollingArea::InitializeWinnie() */

void __thiscall UniverseScrollingArea::InitializeWinnie(UniverseScrollingArea *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Effect_PopAnim *pEVar6;
  ResourceInfo *pRVar7;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar8;
  long lVar9;
  StandaloneEffect *pSVar10;
  undefined4 uVar11;
  string asStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar6 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0xe0) = pEVar6;
  std::string::string(asStack_18,"POPANIM_EFFECTS_UNIVERSE_WINNIE");
  GetPAMByName(asStack_18);
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Effect_PopAnim::CreatePopAnimRig(pEVar6,(PopAnim *)pRVar7,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  nop();
  pEVar6 = *(Effect_PopAnim **)(this + 0xe0);
  if (pEVar6 == (Effect_PopAnim *)0x0) goto LAB_044ddbd8;
  std::string::string((string *)aRStack_10,"idle");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar6,aRStack_10,0);
  std::string::~string((string *)aRStack_10);
  nop();
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0xe0),true);
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0xe0),true);
  std::string::string(asStack_20,"");
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    uVar8 = PlayerInfo::GetLastWorldName(this_01);
    thunk_FUN_05475e00(asStack_20,uVar8);
  }
  lVar9 = UniverseMap::GetButtonForWorld(*(UniverseMap **)(this + 0xd8),asStack_20);
  iVar2 = *(int *)(lVar9 + 0x54);
  iVar3 = *(int *)(lVar9 + 0x4c);
  *(int *)(this + 0x118) = *(int *)(lVar9 + 0x48) + *(int *)(lVar9 + 0x50) / 2;
  *(int *)(this + 0x11c) = iVar2 / 3 + iVar3;
  bVar1 = std::operator==(asStack_20,"pirate");
  if (bVar1) {
    iVar2 = FUN_044d5aa0(3);
    iVar2 = *(int *)(this + 0x118) - iVar2;
    uVar8 = 0x10;
LAB_044ddac0:
    *(int *)(this + 0x118) = iVar2;
    iVar3 = FUN_044d5aa0(uVar8);
    iVar3 = iVar3 + *(int *)(this + 0x11c);
    *(int *)(this + 0x11c) = iVar3;
  }
  else {
    bVar1 = std::operator==(asStack_20,"cowboy");
    if (bVar1) {
      iVar2 = FUN_044d5aa0(0xb);
      iVar2 = *(int *)(this + 0x118) - iVar2;
      uVar8 = 0x12;
      goto LAB_044ddac0;
    }
    bVar1 = std::operator==(asStack_20,"dark");
    if (bVar1) {
      iVar2 = FUN_044d5aa0(0xc);
      iVar2 = *(int *)(this + 0x118) - iVar2;
      uVar8 = 0x32;
      goto LAB_044ddac0;
    }
    bVar1 = std::operator==(asStack_20,"beach");
    if (bVar1) {
      iVar2 = FUN_044d5aa0(8);
      iVar2 = iVar2 + *(int *)(this + 0x118);
      uVar8 = 0x14;
      goto LAB_044ddac0;
    }
    bVar1 = std::operator==(asStack_20,"iceage");
    if (bVar1) {
      iVar2 = FUN_044d5aa0(2);
      iVar2 = iVar2 + *(int *)(this + 0x118);
      uVar8 = 0x20;
      goto LAB_044ddac0;
    }
    iVar3 = *(int *)(this + 0x11c);
    iVar2 = *(int *)(this + 0x118);
  }
  iVar4 = FUN_044d5aa0(0x1e);
  *(int *)(this + 0x11c) = iVar4 + iVar3;
  pSVar10 = *(StandaloneEffect **)(this + 0xe0);
  iVar5 = FUN_044d5aa0(0x28);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)aRStack_10,(float)iVar2,(float)((iVar4 + iVar3) - iVar5));
  StandaloneEffect::SetScreenSpaceOrigin(pSVar10,(SexyVector2 *)aRStack_10,900000);
  pEVar6 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0xe8) = pEVar6;
  std::string::string(asStack_18,"POPANIM_EFFECTS_UNIVERSE_LIGHT");
  GetPAMByName(asStack_18);
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Effect_PopAnim::CreatePopAnimRig(pEVar6,(PopAnim *)pRVar7,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  nop();
  if (*(Effect_PopAnim **)(this + 0xe8) != (Effect_PopAnim *)0x0) {
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0xe8),true);
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0xe8),false);
    pSVar10 = *(StandaloneEffect **)(this + 0xe8);
    iVar2 = FUN_044d5aa0(5);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)aRStack_10,(float)(*(int *)(this + 0x118) - iVar2),
               (float)*(int *)(this + 0x11c));
    StandaloneEffect::SetScreenSpaceOrigin(pSVar10,(SexyVector2 *)aRStack_10,900000);
  }
  std::string::~string(asStack_20);
LAB_044ddbd8:
  uVar11 = PVZ_T();
  *(undefined4 *)(this + 0x110) = uVar11;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UniverseScrollingArea::~UniverseScrollingArea() */

void __thiscall UniverseScrollingArea::~UniverseScrollingArea(UniverseScrollingArea *this)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  *(undefined ***)this = &PTR_GetClass_06855560;
  if (*(long **)(this + 0xe0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe0) + 0x18))();
    *(undefined8 *)(this + 0xe0) = 0;
  }
  if (*(long **)(this + 0xe8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe8) + 0x18))();
    *(undefined8 *)(this + 0xe8) = 0;
  }
  uVar5 = *(undefined8 *)(this + 0xf8);
  uVar4 = 0;
  uVar1 = FUN_044d5728(uVar5,*(undefined8 *)(this + 0x100));
  if (uVar1 != 0) {
    do {
      plVar2 = (long *)FUN_044d5734(uVar5,uVar4);
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
        puVar3 = (undefined8 *)FUN_044d5734(*(undefined8 *)(this + 0xf8),uVar4);
        *puVar3 = 0;
        uVar5 = *(undefined8 *)(this + 0xf8);
        uVar1 = FUN_044d5728(uVar5,*(undefined8 *)(this + 0x100));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::~vector
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0xf8));
  std::string::~string((string *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UniverseScrollingArea::~UniverseScrollingArea() */

void __thiscall UniverseScrollingArea::~UniverseScrollingArea(UniverseScrollingArea *this)

{
  ~UniverseScrollingArea(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseScrollingArea::InitializeLinkEffect() */

void __thiscall UniverseScrollingArea::InitializeLinkEffect(UniverseScrollingArea *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  long *plVar13;
  ulong uVar14;
  string *psVar15;
  UniverseWorldButton *pUVar16;
  undefined8 *puVar17;
  Effect_PopAnim *pEVar18;
  ResourceInfo *pRVar19;
  bool bVar20;
  long lVar21;
  UniverseMap *this_02;
  long lVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 local_60;
  undefined8 local_58;
  string asStack_50 [8];
  string asStack_48 [8];
  Effect_PopAnim *local_40;
  string asStack_38 [8];
  undefined8 local_30;
  float local_28;
  float local_24;
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dce8);
  lVar22 = 0;
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dbb0);
  SalesProgressBar::GetCurrentLevel(this_01);
  plVar13 = (long *)FUN_044d5710(*(undefined8 *)(*(long *)(this + 0xd8) + 0x340),0);
  iVar2 = *(int *)(*plVar13 + 0x50);
  Sexy::Point::Point((Point *)&local_60);
  Sexy::Point::Point((Point *)&local_58);
  this_02 = *(UniverseMap **)(this + 0xd8);
  uVar25 = *(undefined8 *)(this_02 + 0x340);
  do {
    uVar23 = 0;
    while( true ) {
      plVar13 = (long *)FUN_044d5710(uVar25,lVar22);
      lVar21 = *plVar13;
      uVar24 = *(undefined8 *)(lVar21 + 0xd8);
      uVar14 = FUN_044d56dc(uVar24,*(undefined8 *)(lVar21 + 0xe0));
      if (uVar14 <= uVar23) break;
      psVar15 = (string *)FUN_044d56e8(uVar24,uVar23);
      pUVar16 = (UniverseWorldButton *)UniverseMap::GetButtonForWorld(this_02,psVar15);
      if (pUVar16 != (UniverseWorldButton *)0x0) {
        if (lVar22 == 1) {
          UniverseWorldButton::GetWorldName();
          bVar3 = std::operator==(asStack_50,"egypt");
          bVar20 = bVar3;
          if (!bVar3) {
            bVar20 = true;
            bVar3 = false;
          }
LAB_044e3840:
          if (bVar20 != false) {
            std::string::~string(asStack_50);
          }
        }
        else if ((int)lVar22 == 2) {
          UniverseWorldButton::GetWorldName();
          bVar3 = std::operator==(asStack_48,"kongfu");
          std::string::~string(asStack_48);
        }
        else if ((int)lVar22 == 3) {
          UniverseWorldButton::GetWorldName();
          bVar3 = std::operator==((string *)&local_18,"future");
          std::string::~string((string *)&local_18);
        }
        else {
          if (lVar22 != 4) {
            bVar3 = false;
            bVar20 = false;
            goto LAB_044e3840;
          }
          UniverseWorldButton::GetWorldName();
          bVar3 = std::operator==((string *)&local_18,"skycity");
          std::string::~string((string *)&local_18);
        }
        if (bVar3 == false) {
          puVar17 = (undefined8 *)UniverseWorldButton::GetStartPoint(pUVar16);
          local_60 = *puVar17;
          plVar13 = (long *)FUN_044d5710(*(undefined8 *)(*(long *)(this + 0xd8) + 0x340),lVar22);
          lVar21 = *plVar13;
          iVar5 = FUN_044d5aa0(0x1a);
          iVar12 = *(int *)(lVar21 + 0x54);
          iVar10 = *(int *)(lVar21 + 0x48);
          iVar11 = *(int *)(lVar21 + 0x4c);
          iVar6 = FUN_044d5aa0(0x3a);
          iVar1 = (int)local_60 + *(int *)(pUVar16 + 0x48);
          iVar7 = FUN_044d5aa0(10);
          iVar9 = local_60._4_4_ + *(int *)(pUVar16 + 0x4c);
          iVar8 = FUN_044d5aa0(0x5a);
          EATextSquish::Vec3::Vec3
                    ((Vec3 *)&local_28,(float)((iVar1 + iVar4) - iVar7),(float)(iVar9 + iVar8),0.0);
          EATextSquish::Vec3::Vec3
                    ((Vec3 *)&local_18,(float)(iVar5 + iVar10),(float)(iVar11 + iVar12 / 2 + iVar6),
                     0.0);
          Sexy::Point::Point((Point *)&local_30,(int)((local_18 + local_28) * 0.5),
                             (int)((local_14 + local_24) * 0.5));
          local_58 = local_30;
          pEVar18 = GameObject::CreateOutsideTable<Effect_PopAnim>();
          local_40 = pEVar18;
          std::string::string(asStack_38,"POPANIM_EFFECTS_UNIVERSE_LINK_EFFECT");
          GetPAMByName(asStack_38);
          pRVar19 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_30);
          Effect_PopAnim::CreatePopAnimRig(pEVar18,(PopAnim *)pRVar19,(RtClass *)0x0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
          std::string::~string(asStack_38);
          nop();
          pEVar18 = local_40;
          if (local_40 != (Effect_PopAnim *)0x0) {
            std::string::string((string *)&local_30,"idle");
            PVZ_EOT();
            Effect_PopAnim::PlayLoopingAnimation(pEVar18,(Point *)&local_30,0);
            std::string::~string((string *)&local_30);
            nop();
            Effect_PopAnim::SetCentered(local_40,true);
            StandaloneEffect::SetVisibility((StandaloneEffect *)local_40,true);
            iVar1 = local_58._4_4_;
            iVar9 = FUN_044d5aa0(0x14);
            pEVar18 = local_40;
            Sexy::FastCurve::SetOutRange
                      ((FastCurve *)&local_30,(float)(int)local_58,(float)(iVar1 - iVar9));
            StandaloneEffect::SetScreenSpaceOrigin
                      ((StandaloneEffect *)pEVar18,(SexyVector2 *)&local_30,900000);
            std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::push_back
                      ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0xf8),
                       &local_40);
          }
        }
      }
      this_02 = *(UniverseMap **)(this + 0xd8);
      uVar23 = uVar23 + 1;
      uVar25 = *(undefined8 *)(this_02 + 0x340);
    }
    uVar23 = 0;
    while( true ) {
      uVar24 = *(undefined8 *)(lVar21 + 0xf0);
      uVar14 = FUN_044d56dc(uVar24,*(undefined8 *)(lVar21 + 0xf8));
      if (uVar14 <= uVar23) break;
      psVar15 = (string *)FUN_044d56e8(uVar24,uVar23);
      pUVar16 = (UniverseWorldButton *)UniverseMap::GetButtonForWorld(this_02,psVar15);
      if (pUVar16 != (UniverseWorldButton *)0x0) {
        puVar17 = (undefined8 *)UniverseWorldButton::GetStartPoint(pUVar16);
        local_60 = *puVar17;
        plVar13 = (long *)FUN_044d5710(*(undefined8 *)(*(long *)(this + 0xd8) + 0x340),lVar22);
        lVar21 = *plVar13;
        iVar1 = *(int *)(lVar21 + 0x48);
        iVar10 = FUN_044d5aa0(0x19);
        iVar9 = *(int *)(lVar21 + 0x54);
        iVar12 = *(int *)(lVar21 + 0x4c);
        iVar11 = FUN_044d5aa0(0x3a);
        EATextSquish::Vec3::Vec3
                  ((Vec3 *)&local_28,(float)((iVar2 + iVar1) - iVar10),
                   (float)(iVar12 + iVar9 / 2 + iVar11),0.0);
        iVar1 = (int)local_60 + *(int *)(pUVar16 + 0x48);
        iVar12 = FUN_044d5aa0(10);
        iVar9 = local_60._4_4_ + *(int *)(pUVar16 + 0x4c);
        iVar10 = FUN_044d5aa0(0x5a);
        EATextSquish::Vec3::Vec3
                  ((Vec3 *)&local_18,(float)(iVar1 + iVar12),(float)(iVar9 + iVar10),0.0);
        Sexy::Point::Point((Point *)&local_30,(int)((local_18 + local_28) * 0.5),
                           (int)((local_14 + local_24) * 0.5));
        local_58 = local_30;
        pEVar18 = GameObject::CreateOutsideTable<Effect_PopAnim>();
        local_40 = pEVar18;
        std::string::string(asStack_38,"POPANIM_EFFECTS_UNIVERSE_LINK_EFFECT");
        GetPAMByName(asStack_38);
        pRVar19 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_30);
        Effect_PopAnim::CreatePopAnimRig(pEVar18,(PopAnim *)pRVar19,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        std::string::~string(asStack_38);
        nop();
        pEVar18 = local_40;
        if (local_40 != (Effect_PopAnim *)0x0) {
          std::string::string((string *)&local_30,"idle");
          PVZ_EOT();
          Effect_PopAnim::PlayLoopingAnimation(pEVar18,(Point *)&local_30,0);
          std::string::~string((string *)&local_30);
          nop();
          Effect_PopAnim::SetCentered(local_40,true);
          StandaloneEffect::SetVisibility((StandaloneEffect *)local_40,true);
          iVar1 = local_58._4_4_;
          iVar9 = FUN_044d5aa0(0x14);
          pEVar18 = local_40;
          Sexy::FastCurve::SetOutRange
                    ((FastCurve *)&local_30,(float)(int)local_58,(float)(iVar1 - iVar9));
          StandaloneEffect::SetScreenSpaceOrigin
                    ((StandaloneEffect *)pEVar18,(SexyVector2 *)&local_30,900000);
          std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::push_back
                    ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0xf8),
                     &local_40);
        }
      }
      this_02 = *(UniverseMap **)(this + 0xd8);
      uVar23 = uVar23 + 1;
      uVar25 = *(undefined8 *)(this_02 + 0x340);
      plVar13 = (long *)FUN_044d5710(uVar25,lVar22);
      lVar21 = *plVar13;
    }
    lVar22 = lVar22 + 1;
    if (lVar22 == 5) {
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}

