// Class: GameMaskUI


/* GameMaskUI::TouchesCanceled() */

void __thiscall GameMaskUI::TouchesCanceled(GameMaskUI *this)

{
  if (*(long **)(this + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xd8) + 0x268))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameMaskUI::~GameMaskUI() */

void __thiscall GameMaskUI::~GameMaskUI(GameMaskUI *this)

{
  LawnApp *this_00;
  long *plVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06916640;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_GameIntro");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (*(long **)(this + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x108) + 0x18))();
    *(undefined8 *)(this + 0x108) = 0;
  }
  if (*(long **)(this + 0x128) == (long *)0x0) {
    plVar1 = *(long **)(this + 0x138);
  }
  else {
    (**(code **)(**(long **)(this + 0x128) + 0x18))();
    *(undefined8 *)(this + 0x128) = 0;
    plVar1 = *(long **)(this + 0x138);
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
    *(undefined8 *)(this + 0x138) = 0;
  }
  std::string::~string((string *)(this + 0x120));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GameMaskUI::~GameMaskUI() */

void __thiscall GameMaskUI::~GameMaskUI(GameMaskUI *this)

{
  ~GameMaskUI(this);
  AK::FreeHook(this);
  return;
}


/* GameMaskUI::RefreshDialogText(std::wstring const&) */

void __thiscall GameMaskUI::RefreshDialogText(GameMaskUI *this,wstring *param_1)

{
  if (*(PrimeTextWidget **)(this + 0x128) != (PrimeTextWidget *)0x0) {
    Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x128),param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameMaskUI::GetBasePos() */

void __thiscall GameMaskUI::GetBasePos(GameMaskUI *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  FastCurve local_10 [8];
  long local_8;
  
  lVar3 = gLawnApp;
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_0496b948(600);
  iVar1 = *(int *)(lVar3 + 0xd8);
  iVar2 = *(int *)(lVar3 + 0xd4);
  Sexy::FastCurve::SetOutRange
            (local_10,((float)*(int *)(this + 0xe8) + *(float *)(this + 0xe0) + (float)(iVar2 / 2))
                      - (float)(iVar2 - iVar4) * 0.5,
             (((float)(iVar1 / 2) - (float)*(int *)(this + 0xe8)) + *(float *)(this + 0xe4)) -
             (float)(iVar1 - iVar4) * 0.5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* GameMaskUI::SetInFront(Sexy::Widget*) */

void __thiscall GameMaskUI::SetInFront(GameMaskUI *this,Widget *param_1)

{
  (**(code **)(**(long **)(gLawnApp + 0x360) + 200))(*(long **)(gLawnApp + 0x360),this,param_1);
  return;
}


/* GameMaskUI::SetToFront() */

void __thiscall GameMaskUI::SetToFront(GameMaskUI *this)

{
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))(*(long **)(gLawnApp + 0x360),this);
  return;
}


/* GameMaskUI::DrawArrow(Sexy::Graphics*) */

void __thiscall GameMaskUI::DrawArrow(GameMaskUI *this,Graphics *param_1)

{
  if (*(PopAnimRig **)(this + 0x108) != (PopAnimRig *)0x0) {
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x108),param_1);
    return;
  }
  return;
}


/* GameMaskUI::DrawClose(Sexy::Graphics*) */

void __thiscall GameMaskUI::DrawClose(GameMaskUI *this,Graphics *param_1)

{
  if (*(PopAnimRig **)(this + 0x138) != (PopAnimRig *)0x0) {
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x138),param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameMaskUI::TouchConver(Sexy::Touch const&) */

void GameMaskUI::TouchConver(Touch *param_1)

{
  Touch *in_x1;
  long *plVar1;
  int iVar2;
  code *pcVar3;
  Touch *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Touch::Touch(in_x8,in_x1);
  if (*(long *)(param_1 + 0xd8) != 0) {
    (**(code **)(*(long *)param_1 + 0xd0))(&local_18,param_1);
    plVar1 = *(long **)(param_1 + 0xd8);
    pcVar3 = *(code **)(*plVar1 + 0xd0);
    *(int *)(in_x8 + 0x10) = *(int *)(in_x8 + 0x10) + (int)local_18;
    *(int *)(in_x8 + 0x14) = *(int *)(in_x8 + 0x14) + local_18._4_4_;
    *(int *)(in_x8 + 0x18) = *(int *)(in_x8 + 0x18) + (int)local_18;
    *(int *)(in_x8 + 0x1c) = *(int *)(in_x8 + 0x1c) + local_18._4_4_;
    (*pcVar3)(&local_10,plVar1);
    iVar2 = (int)((ulong)local_10 >> 0x20);
    local_18 = local_10;
    *(int *)(in_x8 + 0x10) = *(int *)(in_x8 + 0x10) - (int)local_10;
    *(int *)(in_x8 + 0x14) = *(int *)(in_x8 + 0x14) - iVar2;
    *(int *)(in_x8 + 0x18) = *(int *)(in_x8 + 0x18) - (int)local_10;
    *(int *)(in_x8 + 0x1c) = *(int *)(in_x8 + 0x1c) - iVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GameMaskUI::OnCloseAnimEnd(std::string const&) */

void __thiscall GameMaskUI::OnCloseAnimEnd(GameMaskUI *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"idle");
  if (bVar1) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c],this);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameMaskUI::IsMouseOnButton(Sexy::Touch const&) */

void __thiscall GameMaskUI::IsMouseOnButton(GameMaskUI *this,Touch *param_1)

{
  GameMaskUI GVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  GVar1 = this[0x140];
  local_8 = ___stack_chk_guard;
  if (GVar1 == (GameMaskUI)0x0) {
    Sexy::Insets::Insets
              (aIStack_18,(int)*(float *)(this + 0xf0),(int)*(float *)(this + 0xf4),
               *(int *)(this + 0xe8),*(int *)(this + 0xe8));
    GVar1 = (GameMaskUI)
            Sexy::TRect<int>::Contains
                      ((TRect<int> *)aIStack_18,*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(GVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameMaskUI::TouchMoved(Sexy::Touch const&) */

void __thiscall GameMaskUI::TouchMoved(GameMaskUI *this,Touch *param_1)

{
  char cVar1;
  code *pcVar2;
  long *plVar3;
  undefined1 auStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)(this + 0xd8) != 0) && (cVar1 = IsMouseOnButton(this,param_1), cVar1 != '\0')) {
    plVar3 = *(long **)(this + 0xd8);
    pcVar2 = *(code **)(*plVar3 + 600);
    TouchConver((Touch *)this);
    (*pcVar2)(plVar3,auStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameMaskUI::TouchEnded(Sexy::Touch const&) */

void __thiscall GameMaskUI::TouchEnded(GameMaskUI *this,Touch *param_1)

{
  char cVar1;
  code *pcVar2;
  long *plVar3;
  undefined1 auStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)(this + 0xd8) != 0) && (cVar1 = IsMouseOnButton(this,param_1), cVar1 != '\0')) {
    plVar3 = *(long **)(this + 0xd8);
    pcVar2 = *(code **)(*plVar3 + 0x260);
    TouchConver((Touch *)this);
    (*pcVar2)(plVar3,auStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameMaskUI::GameMaskUI(Sexy::SexyVector2, int, Sexy::Widget*, std::string) */

void __thiscall
GameMaskUI::GameMaskUI
          (float param_1,float param_2,GameMaskUI *this,undefined4 param_4,undefined8 param_5,
          undefined8 param_6)

{
  int iVar1;
  LawnApp *pLVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06916640;
  uVar4 = PVZ_T();
  *(ulong *)(this + 0xe0) = CONCAT44(param_2,param_1);
  *(undefined8 *)(this + 0xd8) = param_5;
  *(undefined4 *)(this + 0xe8) = param_4;
  this[0xec] = (GameMaskUI)0x1;
  *(undefined4 *)(this + 0xd4) = uVar4;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xf0));
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0xf8),0.0,0.0);
  this[0x110] = (GameMaskUI)0x1;
  this[0x112] = (GameMaskUI)0x1;
  *(undefined8 *)(this + 0x108) = 0;
  this[0x111] = (GameMaskUI)0x0;
  *(undefined4 *)(this + 0x100) = 0;
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x114),0.0,0.0);
  FUN_05475d88(this + 0x120,param_6);
  *(undefined8 *)(this + 0x128) = 0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x130));
  *(undefined8 *)(this + 0x138) = 0;
  this[0x140] = (GameMaskUI)0x0;
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_10,"UI_GameIntro");
  LawnApp::LoadGroup(pLVar2,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  pLVar2 = gLawnApp;
  iVar1 = *(int *)(gLawnApp + 0xd4);
  iVar3 = FUN_0496b948(600);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_10,(param_1 - (float)(iVar1 / 2)) + (float)(iVar1 - iVar3) * 0.5,
             (param_2 - (float)(*(int *)(pLVar2 + 0xd8) / 2)) +
             (float)(*(int *)(pLVar2 + 0xd8) - iVar3) * 0.5);
  *(undefined8 *)(this + 0xe0) = local_10;
  ArenaEndingUI::InitView((ArenaEndingUI *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameMaskUI::UpdateArrow() */

void GameMaskUI::UpdateArrow(void)

{
  int iVar1;
  GameMaskUI *in_x0;
  PopAnimRig *this;
  float fVar2;
  float in_s1;
  float fVar3;
  float fVar4;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(in_x0 + 0x108) != 0) {
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    fVar2 = (float)GetBasePos(in_x0);
    fVar4 = *(float *)(in_x0 + 0xf8);
    iVar1 = FUN_0496b948(0x91);
    fVar3 = *(float *)(in_x0 + 0xfc);
    Sexy::SexyTransform2D::RotateDeg(aSStack_30,*(float *)(in_x0 + 0x100));
    FUN_0496b83c((float)(int)((fVar2 + fVar4) - (float)iVar1),(float)(int)(in_s1 + fVar3),auStack_28
                 ,auStack_1c);
    PopAnimRig::SetRenderTransform(*(PopAnimRig **)(in_x0 + 0x108),aSStack_30);
    this = *(PopAnimRig **)(in_x0 + 0x108);
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this,fVar2,fVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GameMaskUI::UpdateClose() */

void __thiscall GameMaskUI::UpdateClose(GameMaskUI *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  this_00 = *(PopAnimRig **)(this + 0x138);
  if (this_00 != (PopAnimRig *)0x0) {
    fVar1 = (float)PVZ_T();
    fVar2 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
    return;
  }
  return;
}


/* GameMaskUI::Update() */

void __thiscall GameMaskUI::Update(GameMaskUI *this)

{
  UpdateArrow();
  UpdateClose(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameMaskUI::TouchBegan(Sexy::Touch const&) */

void __thiscall GameMaskUI::TouchBegan(GameMaskUI *this,Touch *param_1)

{
  LawnApp *pLVar1;
  char cVar2;
  long *plVar3;
  LevelModuleManager *this_00;
  BesiegeModule *this_01;
  code *pcVar4;
  undefined1 auStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = IsMouseOnButton(this,param_1);
  pLVar1 = gLawnApp;
  if (cVar2 == '\0') goto LAB_0496c278;
  cVar2 = LawnApp::IsInModule(gLawnApp,4);
  if (cVar2 == '\0') {
LAB_0496c238:
    plVar3 = *(long **)(this + 0xd8);
  }
  else {
    this_00 = (LevelModuleManager *)FUN_0496b85c(*(undefined8 *)(*(long *)(pLVar1 + 0x9f0) + 0xad8))
    ;
    this_01 = LevelModuleManager::GetModuleByClass<BesiegeModule>(this_00);
    if (this_01 == (BesiegeModule *)0x0) goto LAB_0496c238;
    BesiegeModule::SolveBesiegeIntro(this_01,param_1);
    plVar3 = *(long **)(this + 0xd8);
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x268))();
    plVar3 = *(long **)(this + 0xd8);
    pcVar4 = *(code **)(*plVar3 + 0x250);
    TouchConver((Touch *)this);
    (*pcVar4)(plVar3,auStack_40);
  }
LAB_0496c278:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameMaskUI::DrawMask(Sexy::Graphics*, int, int, int, int) */

void __thiscall
GameMaskUI::DrawMask
          (GameMaskUI *this,Graphics *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  Image *pIVar2;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange((FastCurve *)local_18,(float)param_2,(float)param_3);
  *(undefined8 *)(this + 0xf0) = local_18[0];
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  Sexy::Insets::Insets((Insets *)local_18,0,0,0,0x96);
  Sexy::Graphics::SetColor(param_1,(Color *)local_18);
  if (0 < param_2) {
    Sexy::Graphics::FillRect(param_1,0,0,param_2,*(int *)(gLawnApp + 0xd8));
  }
  if (0 < param_3) {
    Sexy::Graphics::FillRect(param_1,param_2,0,*(int *)(gLawnApp + 0xd4) - param_2,param_3);
  }
  iVar1 = param_2 + param_4;
  if (iVar1 < *(int *)(gLawnApp + 0xd4)) {
    Sexy::Graphics::FillRect(param_1,iVar1,param_3,*(int *)(gLawnApp + 0xd4) - iVar1,param_5);
  }
  iVar1 = param_3 + param_5;
  if (iVar1 < *(int *)(gLawnApp + 0xd8)) {
    Sexy::Graphics::FillRect
              (param_1,param_2,iVar1,*(int *)(gLawnApp + 0xd4) - param_2,
               *(int *)(gLawnApp + 0xd8) - iVar1);
  }
  Sexy::Graphics::PushState(param_1);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b72688);
  Sexy::Graphics::DrawImage(param_1,pIVar2,param_2,param_3,param_4,param_5);
  Sexy::Graphics::PopState(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameMaskUI::ShowMask(Sexy::Widget*, GameMaskUI::MaskArrowType, std::string const&,
   Sexy::TRect<int>) */

void GameMaskUI::ShowMask(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  LawnApp *pLVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  float fVar5;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_28);
  if ((*(int *)(param_4 + 1) < 1) || (*(int *)((long)param_4 + 0xc) < 1)) {
    if (param_1 != (long *)0x0) {
      (**(code **)(*param_1 + 0xd0))(&local_30,param_1);
      Sexy::Insets::Insets
                ((Insets *)&local_18,local_30,local_2c,(int)param_1[10],
                 *(int *)((long)param_1 + 0x54));
      local_28 = local_18;
      uStack_20 = uStack_10;
    }
  }
  else {
    local_28 = *param_4;
    uStack_20 = param_4[1];
  }
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_38,(TPoint *)&local_18);
  pLVar1 = gLawnApp;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,(float)local_38,(float)local_34);
  fVar5 = (float)FUN_0496b95c();
  FUN_05475d88((string *)&local_18,param_3);
  LawnApp::ShowGameMaskUI(local_30,local_2c,pLVar1,(int)fVar5,param_1,(string *)&local_18);
  std::string::~string((string *)&local_18);
  lVar4 = LawnApp::GetGameMaskUI(gLawnApp);
  if (lVar4 != 0) {
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b72660);
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b72660);
    switch(param_2) {
    case 1:
      uVar2 = FUN_0496b948(0x8c);
      uVar3 = FUN_0496b948(100);
      FUN_0496b868(0x43870000,lVar4 + 0xf8,lVar4 + 0x100,uVar2,uVar3);
      break;
    case 2:
      uVar2 = FUN_0496b948(0xffffffc4);
      uVar3 = FUN_0496b948(100);
      FUN_0496b868(0x42b40000,lVar4 + 0xf8,lVar4 + 0x100,uVar2,uVar3);
      break;
    case 3:
      uVar2 = FUN_0496b948(0);
      FUN_0496b868(0,lVar4 + 0xf8,lVar4 + 0x100,uVar2,uVar2);
      break;
    case 4:
      uVar2 = FUN_0496b948(0x3c);
      uVar3 = FUN_0496b948(0xbe);
      FUN_0496b868(0x43340000,lVar4 + 0xf8,lVar4 + 0x100,uVar2,uVar3);
      break;
    default:
      FUN_0496b860(lVar4 + 0x110);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar4);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x0496c92c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* GameMaskUI::DrawDialog(Sexy::Graphics*) */

void GameMaskUI::DrawDialog(Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  undefined8 uVar7;
  LotteryResultProgressBar *this;
  SalesProgressBar *this_00;
  PrimeText_PotentialText *pPVar8;
  Graphics *in_x1;
  string *extraout_x1;
  PrimeTextWidget *pPVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float in_s1;
  float fVar13;
  float fVar14;
  float fVar15;
  wstring awStack_28 [8];
  undefined4 local_20 [2];
  undefined4 local_18;
  undefined4 uStack_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0xec] == (Graphics)0x0) {
    cVar1 = FUN_0547419c((Sexy *)(param_1 + 0x120));
    if ((cVar1 == '\0') && (param_1[0x112] != (Graphics)0x0)) {
      if (param_1[0x111] == (Graphics)0x0) {
        fVar11 = 1.0;
        fVar15 = in_s1;
      }
      else {
        fVar15 = *(float *)(param_1 + 0xd4) + 0.5;
        fVar11 = (float)PVZ_T();
        if (fVar11 <= fVar15) {
          auVar12 = PVZ_T();
          local_20[0] = 0;
          local_18 = 0x3f800000;
          fVar11 = CurveLerp<float>(auVar12,fVar15,auVar12._0_4_,local_20,&local_18,3);
        }
        else {
          param_1[0x111] = (Graphics)0x0;
          fVar11 = 1.0;
          fVar15 = in_s1;
        }
      }
      fVar10 = (float)GetBasePos((GameMaskUI *)param_1);
      fVar14 = *(float *)(param_1 + 0x114);
      iVar2 = FUN_0496b948(0x1e);
      fVar13 = *(float *)(param_1 + 0x118);
      iVar2 = (int)((fVar10 + fVar14) - (float)iVar2);
      pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b72660);
      fVar10 = (float)(int)(fVar15 + fVar13);
      TodDrawImageCenterScaledF(in_x1,pIVar6,(float)iVar2,fVar10,fVar11,fVar11);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)iVar2,fVar10);
      pPVar9 = *(PrimeTextWidget **)(param_1 + 0x128);
      *(ulong *)(param_1 + 0x130) = CONCAT44(uStack_14,local_18);
      if (pPVar9 == (PrimeTextWidget *)0x0) {
        uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
        iVar3 = FUN_0496b948(0xf);
        this = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b72660);
        iVar4 = LotteryResultProgressBar::GetCurrentLevel(this);
        this_00 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b72660);
        iVar5 = SalesProgressBar::GetCurrentLevel(this_00);
        Sexy::UTF8StringToWString((Sexy *)(param_1 + 0x120),extraout_x1);
        TodStringTranslate(awStack_28);
        Sexy::Insets::Insets((Insets *)&local_18,0x8b,0x45,0x13,0xff);
        pPVar8 = (PrimeText_PotentialText *)
                 Sexy::BuildPotentialText_Paragraph
                           ((float)(iVar3 + iVar2),fVar10,(float)iVar4 * 0.85,(float)iVar5,uVar7,
                            local_20,1,1,(FastCurve *)&local_18);
        pPVar9 = ::operator_new(0xf8);
        Sexy::PrimeTextWidget::PrimeTextWidget(pPVar9,pPVar8);
        *(PrimeTextWidget **)(param_1 + 0x128) = pPVar9;
        FUN_05476c50(local_20);
        FUN_05476c50(awStack_28);
        pPVar9 = *(PrimeTextWidget **)(param_1 + 0x128);
        if (pPVar9 == (PrimeTextWidget *)0x0) goto LAB_0496c770;
      }
      iVar3 = FUN_0496b948(0xf);
      iVar4 = FUN_0496b948(0x14);
      Sexy::PrimeTextWidget::SetPosition
                (pPVar9,(int)((float)(iVar3 + iVar2) + (1.0 - fVar11) * (float)iVar4),
                 (int)(fVar15 + fVar13));
      Sexy::PrimeTextWidget::SetScale(*(PrimeTextWidget **)(param_1 + 0x128),fVar11,fVar11);
      (**(code **)(**(long **)(param_1 + 0x128) + 0x128))(*(long **)(param_1 + 0x128));
    }
  }
LAB_0496c770:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameMaskUI::DoClose() */

void __thiscall GameMaskUI::DoClose(GameMaskUI *this)

{
  char cVar1;
  PopAnim *pPVar2;
  RtClass *pRVar3;
  undefined8 uVar4;
  PopAnimRig *pPVar5;
  string asStack_80 [8];
  CBMemberTranslatorX aCStack_78 [24];
  SexyTransform2D aSStack_60 [8];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [20];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SetToFront(this);
  *(undefined8 *)(this + 0xd8) = 0;
  cVar1 = FUN_0547419c(this + 0x120);
  if ((cVar1 == '\0') && (*(long *)(this + 0x128) != 0)) {
    this[0x112] = (GameMaskUI)0x0;
    pPVar2 = CachedUIResourcePtr::operator_cast_to_PopAnim_((CachedUIResourcePtr *)&DAT_06b72720);
    pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
    uVar4 = PopAnimRig::CreateRigOutsideTable(pPVar2,pRVar3);
    *(undefined8 *)(this + 0x138) = uVar4;
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_60);
    FUN_0496b83c(*(undefined4 *)(this + 0x130),*(undefined4 *)(this + 0x134),auStack_58,auStack_4c);
    PopAnimRig::SetRenderTransform(*(PopAnimRig **)(this + 0x138),aSStack_60);
    pPVar5 = *(PopAnimRig **)(this + 0x138);
    std::string::string(asStack_80,"idle");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnCloseAnimEnd);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<GameMaskUI,void(GameMaskUI::*)(std::string_const&)>(aDStack_38,aCStack_78);
    PopAnimRig::PlayAndStop(pPVar5,asStack_80,0,aDStack_38);
    std::string::~string(asStack_80);
    nop();
  }
  else {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c],this);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameMaskUI::AddArrow() */

void __thiscall GameMaskUI::AddArrow(GameMaskUI *this)

{
  PopAnim *pPVar1;
  RtClass *pRVar2;
  long *plVar3;
  code *pcVar4;
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = CachedUIResourcePtr::operator_cast_to_PopAnim_((CachedUIResourcePtr *)&DAT_06b72798);
  pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
  plVar3 = (long *)PopAnimRig::CreateRigOutsideTable(pPVar1,pRVar2);
  *(long **)(this + 0x108) = plVar3;
  pcVar4 = *(code **)(*plVar3 + 0x78);
  std::string::string(asStack_28,"idle");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (*pcVar4)(plVar3,asStack_28,1,0,avStack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  std::string::~string(asStack_28);
  nop();
  UpdateArrow();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameMaskUI::DrawRaduius(Sexy::Graphics*) */

void __thiscall GameMaskUI::DrawRaduius(GameMaskUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float local_1c;
  GraphicsAutoState aGStack_18 [8];
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_18,param_1);
  iVar2 = *(int *)(this + 0xe8);
  iVar1 = FUN_0496b948(600);
  fVar4 = (float)((iVar1 - iVar2) / 2);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_10,fVar4 + *(float *)(this + 0xe0),fVar4 + *(float *)(this + 0xe4))
  ;
  if (this[0xec] != (GameMaskUI)0x0) {
    fVar5 = *(float *)(this + 0xd4) + 1.0;
    fVar4 = (float)PVZ_T();
    if (fVar4 <= fVar5) {
      uVar6 = *(undefined4 *)(this + 0xd4);
      uVar3 = PVZ_T();
      local_1c = (float)FUN_0496b948(600);
      iVar2 = CurveLerp<int>(uVar6,fVar5,uVar3,&local_1c,this + 0xe8,3);
      uVar6 = *(undefined4 *)(this + 0xd4);
      uVar3 = PVZ_T();
      iVar1 = FUN_0496b948(600);
      local_1c = (float)(*(int *)(gLawnApp + 0xd4) - iVar1) * 0.5;
      fVar4 = CurveLerp<float>(uVar6,fVar5,uVar3,&local_1c,this + 0xe0,3);
      iVar1 = FUN_0496b948(600);
      uVar6 = *(undefined4 *)(this + 0xd4);
      local_10 = (float)((iVar1 - iVar2) / 2) + fVar4;
      uVar3 = PVZ_T();
      iVar1 = FUN_0496b948(600);
      local_1c = (float)(*(int *)(gLawnApp + 0xd8) - iVar1) * 0.5;
      fVar4 = CurveLerp<float>(uVar6,fVar5,uVar3,&local_1c,this + 0xe4,3);
      iVar1 = FUN_0496b948(600);
      local_c = (float)((iVar1 - iVar2) / 2) + fVar4;
    }
    else {
      this[0xec] = (GameMaskUI)0x0;
      uVar3 = PVZ_T();
      this[0x111] = (GameMaskUI)0x1;
      *(undefined4 *)(this + 0xd4) = uVar3;
      if (this[0x110] != (GameMaskUI)0x0) {
        AddArrow(this);
      }
    }
  }
  DrawMask(this,param_1,
           (int)((float)(int)*(float *)(param_1 + 0x10) + local_10 * *(float *)(param_1 + 0x18)),
           (int)((float)(int)*(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x1c) * local_c),
           (int)((float)iVar2 * *(float *)(param_1 + 0x18)),
           (int)((float)iVar2 * *(float *)(param_1 + 0x1c)));
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GameMaskUI::Draw(Sexy::Graphics*) */

void __thiscall GameMaskUI::Draw(GameMaskUI *this,Graphics *param_1)

{
  DrawRaduius(this,param_1);
  DrawDialog((Graphics *)this);
  DrawArrow(this,param_1);
  DrawClose(this,param_1);
  return;
}


/* GameMaskUI::EnableScale(bool) */

void __thiscall GameMaskUI::EnableScale(GameMaskUI *this,bool param_1)

{
  this[0xec] = (GameMaskUI)param_1;
  if (this[0x110] == (GameMaskUI)0x0) {
    return;
  }
  AddArrow(this);
  return;
}

