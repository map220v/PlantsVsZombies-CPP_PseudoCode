// Class: AutumnHarvestLotteryPanel


/* AutumnHarvestLotteryPanel::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
AutumnHarvestLotteryPanel::DrawAll
          (AutumnHarvestLotteryPanel *this,ModalFlags *param_1,Graphics *param_2)

{
  char cVar1;
  
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x150));
  if (cVar1 == '\0') {
    return;
  }
  EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x150),param_2);
  return;
}


/* AutumnHarvestLotteryPanel::ModifyBonus(int, int, int) */

void __thiscall
AutumnHarvestLotteryPanel::ModifyBonus
          (AutumnHarvestLotteryPanel *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_04ebc1e0(*(undefined8 *)(this + 0xf0),(long)param_1);
  *piVar1 = param_2;
  piVar1[1] = param_3;
  return;
}


/* AutumnHarvestLotteryPanel::SetSingleGachaBonus(S2C_BonusInfo) */

void AutumnHarvestLotteryPanel::SetSingleGachaBonus
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x120) = param_2;
  *(undefined4 *)(param_1 + 0x128) = param_3;
  return;
}


/* AutumnHarvestLotteryPanel::InitSteps() */

void __thiscall AutumnHarvestLotteryPanel::InitSteps(AutumnHarvestLotteryPanel *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(this + 0x138) = 0;
  iVar3 = FUN_04ebc1cc(*(undefined8 *)(this + 0xf0),*(undefined8 *)(this + 0xf8));
  *(undefined4 *)(this + 0x13c) = 4;
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = 0xc / iVar3;
  }
  iVar1 = ((iVar3 * -100 + -0x12) - (0xc - iVar1 * iVar3)) + *(int *)(this + 300);
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = iVar1 / iVar3;
  }
  iVar1 = iVar1 - iVar2 * iVar3;
  *(int *)(this + 0x144) = iVar1 + 0x10;
  *(int *)(this + 0x140) = iVar1 + 0x1e;
  return;
}


/* AutumnHarvestLotteryPanel::AlmostThere() */

bool __thiscall AutumnHarvestLotteryPanel::AlmostThere(AutumnHarvestLotteryPanel *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_04ebc1cc(*(undefined8 *)(this + 0xf0),*(undefined8 *)(this + 0xf8));
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  return *(int *)(this + 0x140) - *(int *)(this + 0x138) <= iVar1 >> 2;
}


/* AutumnHarvestLotteryPanel::CloseBonusUI() */

void __thiscall AutumnHarvestLotteryPanel::CloseBonusUI(AutumnHarvestLotteryPanel *this)

{
  if (*(long *)(this + 0xe8) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0xe8));
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0xe8));
    *(undefined8 *)(this + 0xe8) = 0;
  }
  return;
}


/* AutumnHarvestLotteryPanel::CanSelectNext() */

bool __thiscall AutumnHarvestLotteryPanel::CanSelectNext(AutumnHarvestLotteryPanel *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  return *(float *)(this + 0x148) <= fVar1;
}


/* AutumnHarvestLotteryPanel::StartLottery(int) */

void __thiscall AutumnHarvestLotteryPanel::StartLottery(AutumnHarvestLotteryPanel *this,int param_1)

{
  InitSteps(this);
  *(int *)(this + 300) = param_1;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x180) = 1;
  this[0xe0] = (AutumnHarvestLotteryPanel)0x0;
  *(undefined4 *)(this + 0x134) = 0x40400000;
  UISingletonDialog<EmptyDialog>::ShowDialog();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestLotteryPanel::LotteryEffect() */

void __thiscall AutumnHarvestLotteryPanel::LotteryEffect(AutumnHarvestLotteryPanel *this)

{
  EffectAnim_UIAnim *this_00;
  char cVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  this_00 = (EffectAnim_UIAnim *)(this + 0x150);
  local_8 = ___stack_chk_guard;
  this[0xe0] = (AutumnHarvestLotteryPanel)0x1;
  plVar2 = (long *)FUN_04ebc24c(*(undefined8 *)(this + 0x108),(long)*(int *)(this + 300));
  lVar3 = *plVar2;
  Sexy::Insets::Insets
            ((Insets *)&local_60,*(int *)(lVar3 + 0x48),*(int *)(lVar3 + 0x4c),
             *(int *)(lVar3 + 0x50),*(int *)(lVar3 + 0x54));
  std::string::string(asStack_50,"POPANIM_EFFECTS_LOTTERY_RESULT_BG");
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_68,(float)(local_60 + local_58 / 2),
             (float)(local_5c + local_54 / 2));
  EffectAnim_UIAnim::InitUIAnim(0x3f800000,local_68,local_64,this_00,asStack_50,1);
  std::string::~string(asStack_50);
  nop();
  cVar1 = EffectAnim_UIAnim::IsValid(this_00);
  if (cVar1 != '\0') {
    std::string::string((string *)&local_68,"icon_on");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,LotteryEffectFinish);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<AutumnHarvestLotteryPanel,void(AutumnHarvestLotteryPanel::*)(std::string_const&)>
              (aDStack_38,asStack_50);
    EffectAnim_UIAnim::PlayOnceThen(this_00,(FastCurve *)&local_68,aDStack_38);
    std::string::~string((string *)&local_68);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AutumnHarvestLotteryPanel::AutumnHarvestLotteryPanel() */

void __thiscall
AutumnHarvestLotteryPanel::AutumnHarvestLotteryPanel(AutumnHarvestLotteryPanel *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_069f60b0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069f63d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x108));
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)(this + 0x120));
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x130) = 0xffffffff;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x150));
  *(undefined4 *)(this + 0x180) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ModifyBonus);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,int,int,Sexy::CBMemberTranslatorX<AutumnHarvestLotteryPanel,void(AutumnHarvestLotteryPanel::*)(int,int,int)>>
            ((MessageRouter *)puVar1,Message::ModifyRewardItem,&local_40);
  return;
}


/* AutumnHarvestLotteryPanel::~AutumnHarvestLotteryPanel() */

void __thiscall
AutumnHarvestLotteryPanel::~AutumnHarvestLotteryPanel(AutumnHarvestLotteryPanel *this)

{
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069f63d0;
  *(undefined ***)this = &PTR_GetClass_069f60b0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x150));
  std::vector<AutumnHarvestRewardFrame*,std::allocator<AutumnHarvestRewardFrame*>>::~vector
            ((vector<AutumnHarvestRewardFrame*,std::allocator<AutumnHarvestRewardFrame*>> *)
             (this + 0x108));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* AutumnHarvestLotteryPanel::~AutumnHarvestLotteryPanel() */

void __thiscall
AutumnHarvestLotteryPanel::~AutumnHarvestLotteryPanel(AutumnHarvestLotteryPanel *this)

{
  ~AutumnHarvestLotteryPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestLotteryPanel::SelectNext() */

void __thiscall AutumnHarvestLotteryPanel::SelectNext(AutumnHarvestLotteryPanel *this)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  string *psVar4;
  float fVar5;
  float fVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_04ebc1cc(*(undefined8 *)(this + 0xf0),*(undefined8 *)(this + 0xf8));
  iVar1 = 0;
  if (uVar3 != 0) {
    iVar1 = (int)((ulong)(long)(*(int *)(this + 0x130) + 1) / uVar3);
  }
  *(int *)(this + 0x130) = (*(int *)(this + 0x130) + 1) - iVar1 * (int)uVar3;
  psVar4 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  std::string::string(asStack_10,"Play_Coin");
  AudioMgr::SendEventThrottled(psVar4,_FUN_04ec4058,asStack_10);
  std::string::~string(asStack_10);
  nop();
  fVar6 = *(float *)(this + 0x134);
  fVar5 = (float)PVZ_T();
  lVar2 = ___stack_chk_guard;
  *(int *)(this + 0x138) = *(int *)(this + 0x138) + 1;
  *(float *)(this + 0x148) = fVar5 + 1.0 / fVar6;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AutumnHarvestLotteryPanel::TryToSelectNext() */

char __thiscall AutumnHarvestLotteryPanel::TryToSelectNext(AutumnHarvestLotteryPanel *this)

{
  char cVar1;
  
  cVar1 = CanSelectNext(this);
  if (cVar1 != '\0') {
    SelectNext(this);
  }
  return cVar1;
}


/* AutumnHarvestLotteryPanel::UpdateSelectFrame() */

void __thiscall AutumnHarvestLotteryPanel::UpdateSelectFrame(AutumnHarvestLotteryPanel *this)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  
  iVar1 = *(int *)(this + 0x180);
  if (iVar1 == 1) {
    cVar2 = AlmostThere(this);
    if ((cVar2 != '\0') && (*(int *)(this + 0x130) == *(int *)(this + 300))) {
      *(undefined4 *)(this + 0x180) = 2;
      uVar5 = 0;
      while( true ) {
        uVar6 = *(undefined8 *)(this + 0x108);
        uVar4 = FUN_04ebc240(uVar6,*(undefined8 *)(this + 0x110));
        if (uVar4 <= uVar5) break;
        plVar3 = (long *)FUN_04ebc24c(uVar6,uVar5);
        FUN_04ebbcec(*plVar3 + 0x170,0);
        uVar5 = uVar5 + 1;
      }
      return;
    }
    cVar2 = TryToSelectNext(this);
    if (cVar2 != '\0') {
      iVar1 = *(int *)(this + 0x138);
      if (*(int *)(this + 0x13c) < iVar1) {
        if (iVar1 <= *(int *)(this + 0x144)) {
          *(undefined4 *)(this + 0x134) = 0x41f00000;
          return;
        }
        fVar7 = *(float *)(this + 0x134);
        if (iVar1 < *(int *)(this + 0x140)) {
          fVar7 = fVar7 - 2.0;
          *(float *)(this + 0x134) = fVar7;
        }
      }
      else {
        fVar7 = *(float *)(this + 0x134) + 6.0;
        *(float *)(this + 0x134) = fVar7;
      }
      if (fVar7 <= 30.0) {
        if (fVar7 < 1.0) {
          *(undefined4 *)(this + 0x134) = 0x3f800000;
        }
      }
      else {
        *(undefined4 *)(this + 0x134) = 0x41f00000;
      }
    }
  }
  else {
    if (iVar1 == 0) {
      *(undefined4 *)(this + 0x130) = 0xffffffff;
      return;
    }
    if ((iVar1 == 2) &&
       (*(undefined4 *)(this + 0x130) = *(undefined4 *)(this + 300),
       this[0xe0] == (AutumnHarvestLotteryPanel)0x0)) {
      LotteryEffect(this);
      return;
    }
  }
  return;
}


/* AutumnHarvestLotteryPanel::Update() */

void __thiscall AutumnHarvestLotteryPanel::Update(AutumnHarvestLotteryPanel *this)

{
  char cVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  UpdateSelectFrame(this);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x150));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x150));
  }
  if (*(int *)(this + 0x180) != 1) {
    return;
  }
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0x108);
    uVar3 = FUN_04ebc240(uVar5,*(undefined8 *)(this + 0x110));
    if (uVar3 <= uVar4) break;
    plVar2 = (long *)FUN_04ebc24c(uVar5,uVar4);
    FUN_04ebbcec(*plVar2 + 0x170,*(int *)(this + 0x130) == (int)uVar4);
    uVar4 = uVar4 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestLotteryPanel::ShowBonusUI(std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo>
   >) */

void __thiscall
AutumnHarvestLotteryPanel::ShowBonusUI(AutumnHarvestLotteryPanel *this,undefined8 *param_2)

{
  undefined4 uVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  PopingBonusUI *pPVar6;
  undefined8 uVar7;
  pair<wchar_t_const,wchar_t> apStack_48 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_40 [24];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xe8) == 0) {
    pPVar6 = ::operator_new(0x1d0);
    PopingBonusUI::PopingBonusUI(pPVar6);
    *(PopingBonusUI **)(this + 0xe8) = pPVar6;
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0xe8));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0xe8));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0xe8));
    if (*(long *)(this + 0xe8) == 0) goto LAB_04ec7844;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_40);
  uVar5 = 0;
  while( true ) {
    uVar7 = *param_2;
    uVar3 = FUN_04ebc1cc(uVar7,param_2[1]);
    if (uVar3 <= uVar5) break;
    pwVar2 = (wchar_t *)FUN_04ebc1e0(uVar7,uVar5);
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,pwVar2,pwVar2 + 1);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    uVar5 = uVar5 + 1;
  }
  PopingBonusUI::InitBonus(*(PopingBonusUI **)(this + 0xe8),(vector *)avStack_40);
  uVar7 = operator|(0x10,0x20);
  uVar7 = operator|(uVar7,0x1000);
  uVar1 = operator|(uVar7,0x2000);
  PopingWidget::NormalInit((PopingWidget *)0x3e99999a,*(undefined8 *)(this + 0xe8),uVar1);
  (**(code **)(**(long **)(this + 0xe8) + 0x310))(*(long **)(this + 0xe8));
  pPVar6 = *(PopingBonusUI **)(this + 0xe8);
  FUN_04ebd85c(afStack_28,this);
  PopingBonusUI::SetCloseFuction(pPVar6,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40);
LAB_04ec7844:
  pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar4,"Play_UI_PlantLevelUp");
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestLotteryPanel::ShowBonusUI() */

void __thiscall AutumnHarvestLotteryPanel::ShowBonusUI(AutumnHarvestLotteryPanel *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  PopingBonusUI *pPVar4;
  pair<wchar_t_const,wchar_t> apStack_48 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_40 [24];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xe8) == 0) {
    pPVar4 = ::operator_new(0x1d0);
    PopingBonusUI::PopingBonusUI(pPVar4);
    *(PopingBonusUI **)(this + 0xe8) = pPVar4;
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0xe8));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0xe8));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0xe8));
    if (*(long *)(this + 0xe8) == 0) goto LAB_04ec79f8;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_40);
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
            (apStack_48,(wchar_t *)(this + 0x120),(wchar_t *)(this + 0x124));
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
             (pair *)apStack_48);
  PopingBonusUI::InitBonus(*(PopingBonusUI **)(this + 0xe8),(vector *)avStack_40);
  uVar2 = operator|(0x10,0x20);
  uVar2 = operator|(uVar2,0x1000);
  uVar1 = operator|(uVar2,0x2000);
  PopingWidget::NormalInit((PopingWidget *)0x3e99999a,*(undefined8 *)(this + 0xe8),uVar1);
  (**(code **)(**(long **)(this + 0xe8) + 0x310))(*(long **)(this + 0xe8));
  pPVar4 = *(PopingBonusUI **)(this + 0xe8);
  FUN_04ebd8b8(afStack_28,this);
  PopingBonusUI::SetCloseFuction(pPVar4,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40);
LAB_04ec79f8:
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_UI_PlantLevelUp");
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* AutumnHarvestLotteryPanel::LotteryEffectFinish(std::string const&) */

void AutumnHarvestLotteryPanel::LotteryEffectFinish(string *param_1)

{
  *(undefined4 *)(param_1 + 0x180) = 0;
  UISingletonDialog<EmptyDialog>::CloseDialog();
  ShowBonusUI((AutumnHarvestLotteryPanel *)param_1);
  Sexy::LazySingleton<AutumnHarvestMgr>::GetInstancePtr();
  AutumnHarvestMgr::RequestNetwork();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestLotteryPanel::InitView(std::vector<AutumnHarvestLotteryItemData,
   std::allocator<AutumnHarvestLotteryItemData> > const&) */

void __thiscall AutumnHarvestLotteryPanel::InitView(AutumnHarvestLotteryPanel *this,vector *param_1)

{
  int iVar1;
  AutumnHarvestRewardFrame *pAVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  ulong uVar6;
  float *pfVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  AutumnHarvestRewardFrame *local_58;
  undefined1 auStack_50 [8];
  Insets aIStack_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::clear
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0xf0));
  iVar3 = FUN_04ebda84(5);
  iVar4 = FUN_04ebda84(2);
  iVar1 = (*(int *)(this + 0x50) + iVar3 * -2 + iVar4 * -4) / 5;
  for (uVar10 = 0; uVar6 = FUN_04ebc254(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8)),
      uVar10 < uVar6; uVar10 = uVar10 + 1) {
    pfVar7 = (float *)FUN_04ebc27c(k_limitLotteryIndex,uVar10);
    Sexy::Insets::Insets
              (aIStack_48,iVar3 + (int)*pfVar7 * (iVar1 + iVar4),
               iVar3 + (iVar1 + iVar4) * (int)pfVar7[1],iVar1,iVar1);
    piVar8 = (int *)FUN_04ebc284(*(undefined8 *)param_1,uVar10);
    local_58 = (AutumnHarvestRewardFrame *)
               AutumnHarvestRewardFrame::CreateUIRewardFrame(*piVar8,piVar8[1],true);
    (**(code **)(*(long *)local_58 + 0x1a0))(local_58,aIStack_48);
    FUN_04ebbce4(local_58 + 0x164,(int)uVar10 == 0);
    FUN_04ebbcf4(local_58 + 0x160,uVar10 & 0xffffffff);
    pAVar2 = local_58;
    lVar9 = FUN_04ebc254(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
    FUN_04ebbcfc(pAVar2 + 0x171,uVar10 == lVar9 - 1U);
    pAVar2 = local_58;
    lVar9 = FUN_04ebc284(*(undefined8 *)param_1,uVar10);
    AutumnHarvestRewardFrame::SetRatio(pAVar2,*(int *)(lVar9 + 0xc));
    if (uVar10 != 0) {
      piVar8 = (int *)FUN_04ebc284(*(undefined8 *)param_1,uVar10);
      GetGameItemInfo(*piVar8,0x7fffffff,0);
      pAVar2 = local_58;
      FUN_05477b24(auStack_50,auStack_10);
      AutumnHarvestRewardFrame::SetItemName(pAVar2,auStack_50);
      FUN_05476c50(auStack_50);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_38);
    }
    (**(code **)(*(long *)this + 0x60))(this,local_58);
    std::vector<AutumnHarvestRewardFrame*,std::allocator<AutumnHarvestRewardFrame*>>::push_back
              ((vector<AutumnHarvestRewardFrame*,std::allocator<AutumnHarvestRewardFrame*>> *)
               (this + 0x108),&local_58);
    Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_38);
    puVar5 = (undefined4 *)FUN_04ebc284(*(undefined8 *)param_1,uVar10);
    local_38 = *puVar5;
    local_34 = puVar5[1];
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0xf0),
               (S2C_BonusInfo *)&local_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AutumnHarvestLotteryPanel::UpdatePanel(AutumnHarvestNetworkData const&) */

void __thiscall
AutumnHarvestLotteryPanel::UpdatePanel
          (AutumnHarvestLotteryPanel *this,AutumnHarvestNetworkData *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if (param_1[0x119] == (AutumnHarvestNetworkData)0x0) {
    uVar7 = *(undefined8 *)(this + 0xf0);
    lVar2 = FUN_04ebc1cc(uVar7,*(undefined8 *)(this + 0xf8));
    if (lVar2 != 0) {
      puVar3 = (undefined4 *)FUN_04ebc1e0(uVar7,0);
      puVar4 = (undefined4 *)FUN_04ebc284(*(undefined8 *)(param_1 + 0xa8),0);
      uVar1 = *puVar4;
      puVar3[1] = puVar4[1];
      *puVar3 = uVar1;
    }
    uVar7 = *(undefined8 *)(this + 0x108);
    lVar2 = FUN_04ebc240(uVar7,*(undefined8 *)(this + 0x110));
    if (lVar2 != 0) {
      puVar6 = (undefined8 *)FUN_04ebc24c(uVar7,0);
      piVar5 = (int *)FUN_04ebc284(*(undefined8 *)(param_1 + 0xa8),0);
      AutumnHarvestRewardFrame::ModifyRewardItem
                ((AutumnHarvestRewardFrame *)*puVar6,*piVar5,piVar5[1]);
      return;
    }
  }
  else {
    uVar7 = *(undefined8 *)(this + 0x108);
    lVar2 = FUN_04ebc240(uVar7,*(undefined8 *)(this + 0x110));
    if (lVar2 != 0) {
      puVar6 = (undefined8 *)FUN_04ebc24c(uVar7,0);
      AutumnHarvestRewardFrame::ModifyRewardItem((AutumnHarvestRewardFrame *)*puVar6,0,0);
      return;
    }
  }
  return;
}

