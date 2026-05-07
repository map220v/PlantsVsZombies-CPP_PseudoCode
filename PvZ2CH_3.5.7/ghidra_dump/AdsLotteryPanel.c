// Class: AdsLotteryPanel


/* AdsLotteryPanel::GetItemW() */

float __thiscall AdsLotteryPanel::GetItemW(AdsLotteryPanel *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_039b9128(0x14);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_039b9128(0x19);
  return (((float)iVar1 - (float)iVar2 * 2.0) - (float)(iVar3 * 3)) * 0.25;
}


/* AdsLotteryPanel::GetItemH() */

float __thiscall AdsLotteryPanel::GetItemH(AdsLotteryPanel *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_039b9128(0x14);
  iVar1 = *(int *)(this + 0x54);
  iVar3 = FUN_039b9128(10);
  return (((float)iVar1 - (float)iVar2 * 2.0) - (float)(iVar3 * 3)) * 0.25;
}


/* AdsLotteryPanel::InitSteps() */

void __thiscall AdsLotteryPanel::InitSteps(AdsLotteryPanel *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(this + 0x104) = 0;
  iVar3 = FUN_039b8cec(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
  *(undefined4 *)(this + 0x108) = 4;
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = 0xc / iVar3;
  }
  iVar1 = ((iVar3 * -100 + -0x12) - (0xc - iVar1 * iVar3)) + *(int *)(this + 0xf8);
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = iVar1 / iVar3;
  }
  iVar1 = iVar1 - iVar2 * iVar3;
  *(int *)(this + 0x110) = iVar1 + 0x10;
  *(int *)(this + 0x10c) = iVar1 + 0x1e;
  return;
}


/* AdsLotteryPanel::AlmostThere() */

bool __thiscall AdsLotteryPanel::AlmostThere(AdsLotteryPanel *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_039b8cec(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  return *(int *)(this + 0x10c) - *(int *)(this + 0x104) <= iVar1 >> 2;
}


/* AdsLotteryPanel::CloseBonusUI() */

void __thiscall AdsLotteryPanel::CloseBonusUI(AdsLotteryPanel *this)

{
  if (*(long *)(this + 0xd8) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0xd8));
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0xd8));
    *(undefined8 *)(this + 0xd8) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdsLotteryPanel::GetLotteryItemPos(int) */

void __thiscall AdsLotteryPanel::GetLotteryItemPos(AdsLotteryPanel *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  TPoint *pTVar4;
  float fVar5;
  float fVar6;
  int local_18;
  int local_14;
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pTVar4 = (TPoint *)FUN_039b8ce4(DAT_06ac00b8,(long)param_1);
  Sexy::Point::Point((Point *)&local_18,pTVar4);
  fVar5 = (float)GetItemW(this);
  fVar6 = (float)GetItemH(this);
  iVar1 = FUN_039b9128(0x14);
  iVar2 = FUN_039b9128(0x19);
  iVar3 = FUN_039b9128(10);
  Sexy::FastCurve::SetOutRange
            (local_10,(float)iVar1 + (float)local_18 * ((float)iVar2 + fVar5),
             (float)iVar1 + (float)local_14 * ((float)iVar3 + fVar6));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* AdsLotteryPanel::CanSelectNext() */

bool __thiscall AdsLotteryPanel::CanSelectNext(AdsLotteryPanel *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  return *(float *)(this + 0x114) <= fVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdsLotteryPanel::StartLottery(LotteryBonus const&) */

void __thiscall AdsLotteryPanel::StartLottery(AdsLotteryPanel *this,LotteryBonus *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  InitSteps(this);
  *(undefined8 *)(this + 0x14c) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x154) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xf8) = 0;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xe0));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xe0));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
LAB_039b9904:
      *(undefined4 *)(this + 0xfc) = 0;
      *(undefined4 *)(this + 0x148) = 1;
      this[0xd1] = (AdsLotteryPanel)0x0;
      *(undefined4 *)(this + 0x100) = 0x40400000;
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar2 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((puVar2[1] == *(int *)param_1) && (puVar2[2] == *(int *)(param_1 + 4))) {
      *(undefined4 *)(this + 0xf8) = *puVar2;
      goto LAB_039b9904;
    }
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdsLotteryPanel::ShowBonusUI() */

void __thiscall AdsLotteryPanel::ShowBonusUI(AdsLotteryPanel *this)

{
  EffectAnim_UIAnim *this_00;
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  string asStack_58 [8];
  undefined4 local_50;
  undefined4 local_4c;
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (EffectAnim_UIAnim *)(this + 0x118);
  this[0xd1] = (AdsLotteryPanel)0x1;
  fVar2 = (float)GetLotteryItemPos(this,*(int *)(this + 0xfc));
  fVar3 = (float)GetItemW(this);
  fVar4 = fVar2 + fVar3 * 0.5;
  GetLotteryItemPos(this,*(int *)(this + 0xfc));
  fVar3 = (float)GetItemH(this);
  std::string::string(asStack_58,"POPANIM_EFFECTS_LOTTERY_RESULT_BG");
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_50,fVar4,fVar2 + fVar3 * 0.5);
  EffectAnim_UIAnim::InitUIAnim(0x3f800000,local_50,local_4c,this_00,asStack_58,1);
  std::string::~string(asStack_58);
  nop();
  cVar1 = EffectAnim_UIAnim::IsValid(this_00);
  if (cVar1 != '\0') {
    std::string::string(asStack_58,"icon_on");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,ShowLotteryEffect);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<AdsLotteryPanel,void(AdsLotteryPanel::*)(std::string_const&)>
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


/* AdsLotteryPanel::DrawSelectFrame(Sexy::Graphics*, Sexy::TRect<int>) */

void __thiscall
AdsLotteryPanel::DrawSelectFrame(undefined8 param_1_00,Graphics *param_1,int *param_3)

{
  int iVar1;
  Image *pIVar2;
  
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac0038);
  iVar1 = FUN_039b9128(10);
  Sexy::Graphics::DrawImage
            (param_1,pIVar2,*param_3 - iVar1,param_3[1] - iVar1,iVar1 * 2 + param_3[2],
             iVar1 * 2 + param_3[3]);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdsLotteryPanel::AdsLotteryPanel() */

void __thiscall AdsLotteryPanel::AdsLotteryPanel(AdsLotteryPanel *this)

{
  LawnApp *pLVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_066e9970;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0xffffffff;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x118));
  *(undefined4 *)(this + 0x148) = 0;
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)(this + 0x14c));
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_Lottery_Result");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"RenderEffects");
  cVar2 = LawnApp::CanLoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"RenderEffects");
    LawnApp::LoadGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Material");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdsLotteryPanel::~AdsLotteryPanel() */

void __thiscall AdsLotteryPanel::~AdsLotteryPanel(AdsLotteryPanel *this)

{
  LawnApp *pLVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066e9970;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_Lottery_Result");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"RenderEffects");
  cVar2 = LawnApp::CanLoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"RenderEffects");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Material");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x118));
  std::vector<AdsLotteryItemInfo,std::allocator<AdsLotteryItemInfo>>::~vector
            ((vector<AdsLotteryItemInfo,std::allocator<AdsLotteryItemInfo>> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdsLotteryPanel::~AdsLotteryPanel() */

void __thiscall AdsLotteryPanel::~AdsLotteryPanel(AdsLotteryPanel *this)

{
  ~AdsLotteryPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdsLotteryPanel::SelectNext() */

void __thiscall AdsLotteryPanel::SelectNext(AdsLotteryPanel *this)

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
  uVar3 = FUN_039b8cec(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
  iVar1 = 0;
  if (uVar3 != 0) {
    iVar1 = (int)((ulong)(long)(*(int *)(this + 0xfc) + 1) / uVar3);
  }
  *(int *)(this + 0xfc) = (*(int *)(this + 0xfc) + 1) - iVar1 * (int)uVar3;
  psVar4 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  std::string::string(asStack_10,"Play_Coin");
  AudioMgr::SendEventThrottled(psVar4,_FUN_039bacb8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  fVar6 = *(float *)(this + 0x100);
  fVar5 = (float)PVZ_T();
  lVar2 = ___stack_chk_guard;
  *(int *)(this + 0x104) = *(int *)(this + 0x104) + 1;
  *(float *)(this + 0x114) = fVar5 + 1.0 / fVar6;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdsLotteryPanel::TryToSelectNext() */

char __thiscall AdsLotteryPanel::TryToSelectNext(AdsLotteryPanel *this)

{
  char cVar1;
  
  cVar1 = CanSelectNext(this);
  if (cVar1 != '\0') {
    SelectNext(this);
  }
  return cVar1;
}


/* AdsLotteryPanel::UpdateSelectFrame() */

void __thiscall AdsLotteryPanel::UpdateSelectFrame(AdsLotteryPanel *this)

{
  int iVar1;
  char cVar2;
  float fVar3;
  
  iVar1 = *(int *)(this + 0x148);
  if (iVar1 == 1) {
    cVar2 = AlmostThere(this);
    if ((cVar2 != '\0') && (*(int *)(this + 0xfc) == *(int *)(this + 0xf8))) {
      *(undefined4 *)(this + 0x148) = 2;
      return;
    }
    cVar2 = TryToSelectNext(this);
    if (cVar2 != '\0') {
      iVar1 = *(int *)(this + 0x104);
      if (*(int *)(this + 0x108) < iVar1) {
        if (iVar1 <= *(int *)(this + 0x110)) {
          *(undefined4 *)(this + 0x100) = 0x41f00000;
          return;
        }
        fVar3 = *(float *)(this + 0x100);
        if (iVar1 < *(int *)(this + 0x10c)) {
          fVar3 = fVar3 - 2.0;
          *(float *)(this + 0x100) = fVar3;
        }
      }
      else {
        fVar3 = *(float *)(this + 0x100) + 6.0;
        *(float *)(this + 0x100) = fVar3;
      }
      if (fVar3 <= 30.0) {
        if (fVar3 < 1.0) {
          *(undefined4 *)(this + 0x100) = 0x3f800000;
        }
      }
      else {
        *(undefined4 *)(this + 0x100) = 0x41f00000;
      }
    }
  }
  else {
    if (iVar1 == 0) {
      *(undefined4 *)(this + 0xfc) = 0xffffffff;
      return;
    }
    if ((iVar1 == 2) &&
       (*(undefined4 *)(this + 0xfc) = *(undefined4 *)(this + 0xf8),
       this[0xd1] == (AdsLotteryPanel)0x0)) {
      ShowBonusUI(this);
      return;
    }
  }
  return;
}


/* AdsLotteryPanel::Update() */

void __thiscall AdsLotteryPanel::Update(AdsLotteryPanel *this)

{
  char cVar1;
  
  UpdateSelectFrame(this);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x118));
  if (cVar1 == '\0') {
    return;
  }
  EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x118));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdsLotteryPanel::ShowLotteryEffect(std::string const&) */

void AdsLotteryPanel::ShowLotteryEffect(string *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  AdsLotteryBonusUI *this;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  *(undefined4 *)(param_1 + 0x148) = 0;
  local_8 = ___stack_chk_guard;
  if (*(long *)(param_1 + 0xd8) == 0) {
    this = ::operator_new(0x200);
    AdsLotteryBonusUI::AdsLotteryBonusUI(this);
    *(AdsLotteryBonusUI **)(param_1 + 0xd8) = this;
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(param_1 + 0xd8));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(param_1 + 0xd8));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(param_1 + 0xd8));
    if (*(long *)(param_1 + 0xd8) == 0) goto LAB_039bb27c;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_20,
             (LotteryBonus *)(param_1 + 0x14c));
  AdsLotteryBonusUI::InitBonus(*(AdsLotteryBonusUI **)(param_1 + 0xd8),(vector *)avStack_20);
  uVar2 = operator|(0x10,0x20);
  uVar2 = operator|(uVar2,0x1000);
  uVar1 = operator|(uVar2,0x2000);
  PopingWidget::NormalInit((PopingWidget *)0x3e99999a,*(undefined8 *)(param_1 + 0xd8),uVar1);
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x310))(*(long **)(param_1 + 0xd8));
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_20);
LAB_039bb27c:
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_UI_PlantLevelUp");
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdsLotteryPanel::InitView(std::vector<LotteryBonus, std::allocator<LotteryBonus> > const&) */

void AdsLotteryPanel::InitView(vector *param_1)

{
  bool bVar1;
  int *piVar2;
  long *plVar3;
  undefined8 *in_x1;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_s1;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  int local_24;
  int local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<AdsLotteryItemInfo,std::allocator<AdsLotteryItemInfo>>::clear
            ((vector<AdsLotteryItemInfo,std::allocator<AdsLotteryItemInfo>> *)(param_1 + 0xe0));
  local_38 = FUN_039b97b0(*in_x1);
  local_30 = FUN_039b9800(in_x1[1]);
  iVar5 = 0;
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    fVar6 = (float)GetLotteryItemPos((AdsLotteryPanel *)param_1,iVar5);
    GetLotteryItemPos((AdsLotteryPanel *)param_1,iVar5);
    iVar4 = (int)in_s1;
    fVar7 = (float)GetItemW((AdsLotteryPanel *)param_1);
    fVar8 = (float)GetItemH((AdsLotteryPanel *)param_1);
    Sexy::Insets::Insets(aIStack_18,(int)fVar6,iVar4,(int)fVar7,(int)fVar8);
    plVar3 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar2,piVar2[1],true);
    (**(code **)(*plVar3 + 0x1a0))(plVar3,aIStack_18);
    (**(code **)(*(long *)param_1 + 0x60))(param_1,plVar3);
    local_24 = *piVar2;
    local_20 = piVar2[1];
    local_28 = iVar5;
    std::vector<AdsLotteryItemInfo,std::allocator<AdsLotteryItemInfo>>::push_back
              ((vector<AdsLotteryItemInfo,std::allocator<AdsLotteryItemInfo>> *)(param_1 + 0xe0),
               (AdsLotteryItemInfo *)&local_28);
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_38);
    iVar5 = iVar5 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdsLotteryPanel::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void AdsLotteryPanel::DrawAll(ModalFlags *param_1,Graphics *param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  Graphics *in_x2;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_s1;
  undefined8 local_38;
  undefined8 local_30;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)param_1,(ModalFlags *)param_2,in_x2);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0xe0));
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_1 + 0xe0));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    if (*piVar3 == *(int *)(param_1 + 0xfc)) {
      fVar5 = (float)GetLotteryItemPos((AdsLotteryPanel *)param_1,*piVar3);
      iVar4 = (int)in_s1;
      fVar6 = (float)GetItemW((AdsLotteryPanel *)param_1);
      fVar7 = (float)GetItemH((AdsLotteryPanel *)param_1);
      Sexy::Insets::Insets(aIStack_28,(int)fVar5,iVar4,(int)fVar6,(int)fVar7);
      Sexy::Insets::Insets(aIStack_18,aIStack_28);
      DrawSelectFrame((AdsLotteryPanel *)param_1);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_38);
  }
  cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x118));
  if (cVar2 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(param_1 + 0x118),in_x2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

