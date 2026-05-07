// Class: PVZ2UILotteryResult


/* PVZ2UILotteryResult::onNotifyFinishMotion() */

void __thiscall PVZ2UILotteryResult::onNotifyFinishMotion(PVZ2UILotteryResult *this)

{
  this[0x158] = (PVZ2UILotteryResult)0x1;
  return;
}


/* PVZ2UILotteryResult::TouchEnded(Sexy::Touch const&) */

void PVZ2UILotteryResult::TouchEnded(Touch *param_1)

{
  LawnApp::KillLotteryResultUI(gLawnApp);
  return;
}


/* PVZ2UILotteryResult::GetNumIcons() */

void __thiscall PVZ2UILotteryResult::GetNumIcons(PVZ2UILotteryResult *this)

{
  FUN_0438e538(*(undefined8 *)(this + 0xe8),*(undefined8 *)(this + 0xf0));
  return;
}


/* PVZ2UILotteryResult::SetRewardPlantType(std::string const&) */

void PVZ2UILotteryResult::SetRewardPlantType(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x100);
  return;
}


/* PVZ2UILotteryResult::SetLotteryInfo(LotteryInfoIndex, LotteryResultIconInfo const&) */

void __thiscall
PVZ2UILotteryResult::SetLotteryInfo
          (PVZ2UILotteryResult *this,int param_2,LotteryResultIconInfo *param_3)

{
  LotteryResultIconInfo::operator=
            ((LotteryResultIconInfo *)(this + (long)param_2 * 0x28 + 0x108),param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UILotteryResult::MoveIcons() */

void __thiscall PVZ2UILotteryResult::MoveIcons(PVZ2UILotteryResult *this)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  UIWidget *this_00;
  UIWidget *this_01;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  RtWeakPtr *this_02;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var7;
  float fVar8;
  float fVar9;
  float fVar10;
  LotteryResultIconWidget *pLVar11;
  LotteryResultIconWidget *pLVar12;
  RtWeakPtr aRStack_40 [8];
  RtWeakPtr aRStack_38 [16];
  Vec3 aVStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  uVar6 = *(undefined8 *)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_0438e538(uVar6,*(undefined8 *)(this + 0xf0));
  if (lVar3 == 1) {
    this_02 = aRStack_38;
    FUN_0438e54c(uVar6,0);
    PVPSeedBankModule::GetPVPSkillEnergyUI();
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_02);
    if (bVar2) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
      nop();
      lVar3 = UIWidget::GetAtlasImage(this_00);
      lVar3 = FUN_0438e520(*(undefined8 *)(lVar3 + 0x20));
      Sexy::Insets::Insets(aIStack_18,(Insets *)(lVar3 + 0x34));
      UIWidget::GetAtlasImage(this_00);
      UIWidget::GetAtlasImage(this_00);
      fVar8 = (float)FUN_0438e6ac((float)*(int *)(this + 0x50) * 0.5);
      fVar9 = (float)FUN_0438e6ac((float)*(int *)(this + 0x54) * 0.5);
      fVar10 = (float)FUN_0438e6ac(0);
      EATextSquish::Vec3::Vec3(aVStack_28,fVar8,fVar9,fVar10);
      puVar4 = (undefined8 *)FUN_0438e54c(*(undefined8 *)(this + 0xe8),0);
      p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)*puVar4;
      pLVar11 = (LotteryResultIconWidget *)FUN_0438e534(*(undefined4 *)(p_Var7 + 0x7c));
      uVar6 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(p_Var7);
      LotteryResultIconWidget::SetMotionInterpolateAndScale
                (pLVar11,0x3fa66666,0x3f000000,p_Var7,uVar6,aVStack_28,5);
    }
  }
  else {
    if (lVar3 != 2) goto LAB_0438f2f0;
    this_02 = aRStack_40;
    FUN_0438e54c(uVar6,0);
    PVPSeedBankModule::GetPVPSkillEnergyUI();
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_02);
    if (bVar2) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
      nop();
      lVar3 = UIWidget::GetAtlasImage(this_01);
      lVar3 = FUN_0438e520(*(undefined8 *)(lVar3 + 0x20));
      Sexy::Insets::Insets(aIStack_18,(Insets *)(lVar3 + 0x34));
      UIWidget::GetAtlasImage(this_01);
      UIWidget::GetAtlasImage(this_01);
      iVar1 = *(int *)(this + 0x54);
      fVar8 = (float)FUN_0438e6ac((float)*(int *)(this + 0x50) * 0.33333334);
      fVar9 = (float)FUN_0438e6ac((float)iVar1 * 0.5);
      fVar10 = (float)FUN_0438e6ac(0);
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_38,fVar8,fVar9,fVar10);
      fVar8 = (float)FUN_0438e6ac((float)*(int *)(this + 0x50) * 0.6666667);
      fVar9 = (float)FUN_0438e6ac((float)iVar1 * 0.5);
      fVar10 = (float)FUN_0438e6ac(0);
      EATextSquish::Vec3::Vec3(aVStack_28,fVar8,fVar9,fVar10);
      uVar6 = *(undefined8 *)(this + 0xe8);
      puVar4 = (undefined8 *)FUN_0438e54c(uVar6,0);
      p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)*puVar4;
      pLVar11._0_4_ = (LotteryResultIconWidget *)FUN_0438e534(*(undefined4 *)(p_Var7 + 0x7c));
      plVar5 = (long *)FUN_0438e54c(uVar6,1);
      pLVar12._0_4_ = (LotteryResultIconWidget *)FUN_0438e534(*(undefined4 *)(*plVar5 + 0x7c));
      uVar6 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(p_Var7);
      LotteryResultIconWidget::SetMotionInterpolateAndScale
                (pLVar11._0_4_,0x3fa66666,0x3f000000,p_Var7,uVar6,(Vec3 *)aRStack_38,5);
      puVar4 = (undefined8 *)FUN_0438e54c(*(undefined8 *)(this + 0xe8),1);
      p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)*puVar4;
      uVar6 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(p_Var7);
      LotteryResultIconWidget::SetMotionInterpolateAndScale
                (pLVar12._0_4_,0x3fa66666,0x3f000000,p_Var7,uVar6,aVStack_28,5);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
LAB_0438f2f0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UILotteryResult::PVZ2UILotteryResult(int, int) */

void __thiscall
PVZ2UILotteryResult::PVZ2UILotteryResult(PVZ2UILotteryResult *this,int param_1,int param_2)

{
  undefined *this_00;
  LawnApp *pLVar1;
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0683d1a0;
  Sexy::Insets::Insets((Insets *)(this + 0xd4));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  Set8BytesTo0(this + 0x100);
  LotteryResultIconInfo::LotteryResultIconInfo((LotteryResultIconInfo *)(this + 0x108));
  LotteryResultIconInfo::LotteryResultIconInfo((LotteryResultIconInfo *)(this + 0x130));
  pLVar1 = gLawnApp;
  std::string::string(asStack_50,"Effects_Lottery_Result");
  LawnApp::LoadGroup(pLVar1,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_50,"UI_LevelUp");
  LawnApp::LoadGroup(pLVar1,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_50,"UI_Sales");
  LawnApp::LoadGroup(pLVar1,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_50,"Sales_Effect");
  LawnApp::LoadGroup(pLVar1,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_50,"UI_HeadShot_Plant");
  LawnApp::LoadGroup(pLVar1,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_50,"UI_Lottery_Result");
  LawnApp::LoadGroup(pLVar1,asStack_50);
  std::string::~string(asStack_50);
  nop();
  thunk_FUN_05475e00(this + 0x100,&DAT_06aff770);
  std::vector<LotteryResultIconWidget*,std::allocator<LotteryResultIconWidget*>>::clear
            ((vector<LotteryResultIconWidget*,std::allocator<LotteryResultIconWidget*>> *)
             (this + 0xe8));
  this[0x158] = (PVZ2UILotteryResult)0x0;
  Sexy::Widget::Resize((Widget *)this,0,0,param_1,param_2);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyFinishMotion);
  Sexy::Delegate0::Delegate0<PVZ2UILotteryResult,void(PVZ2UILotteryResult::*)()>
            (aDStack_38,asStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::NotifyFinishMotion,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UILotteryResult::~PVZ2UILotteryResult() */

void __thiscall PVZ2UILotteryResult::~PVZ2UILotteryResult(PVZ2UILotteryResult *this)

{
  LawnApp *pLVar1;
  char cVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  PVZ2UILotteryResult *this_00;
  undefined8 uVar6;
  RtWeakPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0683d1a0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(this + 0xe8);
    uVar3 = FUN_0438e538(uVar6,*(undefined8 *)(this + 0xf0));
    pLVar1 = gLawnApp;
    if (uVar3 <= uVar5) break;
    FUN_0438e54c(uVar6,uVar5);
    ToolPacketData::GetProps();
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar2 != '\0') {
      FUN_0438e54c(*(undefined8 *)(this + 0xe8),uVar5);
      ToolPacketData::GetProps();
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      (**(code **)(*plVar4 + 0x48))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    FUN_0438e54c(*(undefined8 *)(this + 0xe8),uVar5);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtrBase::ClearId(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    uVar5 = uVar5 + 1;
  }
  this_00 = this + 0x158;
  std::string::string((string *)aRStack_10,"Effects_Lottery_Result");
  LawnApp::DeleteGroup(pLVar1,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)aRStack_10,"UI_LevelUp");
  LawnApp::DeleteGroup(pLVar1,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)aRStack_10,"UI_Sales");
  LawnApp::DeleteGroup(pLVar1,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)aRStack_10,"Sales_Effect");
  LawnApp::DeleteGroup(pLVar1,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)aRStack_10,"UI_HeadShot_Plant");
  LawnApp::DeleteGroup(pLVar1,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)aRStack_10,"UI_Lottery_Result");
  LawnApp::DeleteGroup(pLVar1,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  do {
    this_00 = this_00 + -0x28;
    LotteryResultIconInfo::~LotteryResultIconInfo((LotteryResultIconInfo *)this_00);
  } while (this + 0x108 != this_00);
  std::string::~string((string *)(this + 0x100));
  std::vector<LotteryResultIconWidget*,std::allocator<LotteryResultIconWidget*>>::~vector
            ((vector<LotteryResultIconWidget*,std::allocator<LotteryResultIconWidget*>> *)
             (this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UILotteryResult::~PVZ2UILotteryResult() */

void __thiscall PVZ2UILotteryResult::~PVZ2UILotteryResult(PVZ2UILotteryResult *this)

{
  ~PVZ2UILotteryResult(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UILotteryResult::CreateIcons() */

void __thiscall PVZ2UILotteryResult::CreateIcons(PVZ2UILotteryResult *this)

{
  char cVar1;
  undefined4 uVar2;
  wstring *local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c((string *)(this + 0x108));
  if (cVar1 == '\0') {
    local_20 = (wstring *)GameObject::Create<LotteryResultIconWidget>();
    FUN_0438e524((LotteryResultIconWidget *)(local_20 + 0x78),0);
    local_18 = *(undefined8 *)(this + 0x110);
    local_10 = *(undefined4 *)(this + 0x118);
    uVar2 = FUN_0438e6ac((undefined4)local_18);
    local_18 = CONCAT44(local_18._4_4_,uVar2);
    uVar2 = FUN_0438e6ac(local_18._4_4_);
    local_18 = CONCAT44(uVar2,(undefined4)local_18);
    local_10 = FUN_0438e6ac(local_10);
    (**(code **)(*(long *)local_20 + 0x78))(local_20,&local_18);
    LotteryResultIconWidget::initializeBackgroundRenderEffect((LotteryResultIconWidget *)local_20);
    LotteryResultIconWidget::initializeRenderEffect
              ((LotteryResultIconWidget *)local_20,(string *)(this + 0x108));
    FUN_0438e52c(*(undefined4 *)(this + 0x128),(LotteryResultIconWidget *)(local_20 + 0x7c));
    LotteryResultIconWidget::SetDescription(local_20);
    std::vector<LotteryResultIconWidget*,std::allocator<LotteryResultIconWidget*>>::push_back
              ((vector<LotteryResultIconWidget*,std::allocator<LotteryResultIconWidget*>> *)
               (this + 0xe8),(LotteryResultIconWidget **)&local_20);
    cVar1 = FUN_0547419c(this + 0x130);
  }
  else {
    cVar1 = FUN_0547419c(this + 0x130);
  }
  if (cVar1 == '\0') {
    local_20 = (wstring *)GameObject::Create<LotteryResultIconWidget>();
    FUN_0438e524((LotteryResultIconWidget *)(local_20 + 0x78),1);
    local_18 = *(undefined8 *)(this + 0x138);
    local_10 = *(undefined4 *)(this + 0x140);
    uVar2 = FUN_0438e6ac((undefined4)local_18);
    local_18 = CONCAT44(local_18._4_4_,uVar2);
    uVar2 = FUN_0438e6ac(local_18._4_4_);
    local_18 = CONCAT44(uVar2,(undefined4)local_18);
    local_10 = FUN_0438e6ac(local_10);
    (**(code **)(*(long *)local_20 + 0x78))(local_20,&local_18);
    LotteryResultIconWidget::initializeBackgroundRenderEffect((LotteryResultIconWidget *)local_20);
    LotteryResultIconWidget::initializeRenderEffect
              ((LotteryResultIconWidget *)local_20,(string *)(this + 0x130));
    FUN_0438e52c(*(undefined4 *)(this + 0x150),(LotteryResultIconWidget *)(local_20 + 0x7c));
    LotteryResultIconWidget::SetDescription(local_20);
    std::vector<LotteryResultIconWidget*,std::allocator<LotteryResultIconWidget*>>::push_back
              ((vector<LotteryResultIconWidget*,std::allocator<LotteryResultIconWidget*>> *)
               (this + 0xe8),(LotteryResultIconWidget **)&local_20);
  }
  MoveIcons(this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UILotteryResult::InitViews(int, int) */

void __thiscall PVZ2UILotteryResult::InitViews(PVZ2UILotteryResult *this,int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SalesProgressBar *this_00;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CreateIcons(this);
  iVar2 = FUN_0438e6bc(0xf);
  iVar3 = FUN_0438e6bc(0x1e0);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aff8a0);
  iVar4 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Insets::Insets((Insets *)&local_18,iVar2 + param_1,iVar3,param_2 + iVar2 * -2,iVar4);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0xd4) = local_18;
  *(undefined8 *)(this + 0xdc) = uStack_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UILotteryResult::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
PVZ2UILotteryResult::DrawAll(PVZ2UILotteryResult *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  LotteryResultProgressBar *this_00;
  Image *pIVar6;
  ulong uVar7;
  undefined8 uVar8;
  GraphicsAutoState aGStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_2);
  uVar7 = 0;
  Sexy::Graphics::ClearClipRect(param_2);
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  Sexy::Insets::Insets(aIStack_18,0,0,0,0x7f);
  Sexy::Graphics::SetColor(param_2,(Color *)aIStack_18);
  Sexy::Graphics::FillRect(param_2,0,0,*(int *)(gLawnApp + 0x724),*(int *)(gLawnApp + 0x728));
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  uVar8 = *(undefined8 *)(this + 0xe8);
  uVar4 = FUN_0438e538(uVar8,*(undefined8 *)(this + 0xf0));
  if (uVar4 != 0) {
    do {
      plVar5 = (long *)FUN_0438e54c(uVar8,uVar7);
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0xe8))(plVar5,param_2);
        uVar8 = *(undefined8 *)(this + 0xe8);
        uVar4 = FUN_0438e538(uVar8,*(undefined8 *)(this + 0xf0));
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  if (this[0x158] != (PVZ2UILotteryResult)0x0) {
    iVar1 = *(int *)(this + 0x50);
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aff808);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar3 = FUN_0438e6bc(0x5a);
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aff808);
    Sexy::Graphics::DrawImage(param_2,pIVar6,(iVar1 - iVar2) / 2,iVar3);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UILotteryResult::Update() */

void __thiscall PVZ2UILotteryResult::Update(PVZ2UILotteryResult *this)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar3 = 0;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  do {
    uVar5 = *(undefined8 *)(this + 0xe8);
    uVar2 = FUN_0438e538(uVar5,*(undefined8 *)(this + 0xf0));
    uVar4 = uVar3;
    do {
      uVar3 = uVar4 + 1;
      if (uVar2 <= uVar4) {
        return;
      }
      plVar1 = (long *)FUN_0438e54c(uVar5,uVar4);
      uVar4 = uVar3;
    } while (*plVar1 == 0);
    LotteryResultIconWidget::onUpdate();
  } while( true );
}

