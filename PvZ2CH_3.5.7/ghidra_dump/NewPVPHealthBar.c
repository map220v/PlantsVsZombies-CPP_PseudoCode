// Class: NewPVPHealthBar


/* NewPVPHealthBar::SetPlayerNameSexyStr(std::wstring) */

void NewPVPHealthBar::SetPlayerNameSexyStr(long param_1)

{
  thunk_FUN_05477b9c(param_1 + 0x188);
  return;
}


/* NewPVPHealthBar::onBarSetPercentage(int, float) */

void __thiscall NewPVPHealthBar::onBarSetPercentage(NewPVPHealthBar *this,int param_1,float param_2)

{
  if (*(int *)(this + 0x170) != param_1) {
    return;
  }
  *(float *)(this + 0x164) = param_2;
  return;
}


/* NewPVPHealthBar::~NewPVPHealthBar() */

void __thiscall NewPVPHealthBar::~NewPVPHealthBar(NewPVPHealthBar *this)

{
  *(undefined ***)this = &PTR_GetClass_0664dd50;
  *(undefined ***)(this + 0x10) = &PTR__NewPVPHealthBar_0664def0;
  if (*(long **)(this + 0x178) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x178) + 0x18))();
    *(undefined8 *)(this + 0x178) = 0;
  }
  FUN_05476c50(this + 0x188);
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to NewPVPHealthBar::~NewPVPHealthBar() */

void __thiscall NewPVPHealthBar::~NewPVPHealthBar(NewPVPHealthBar *this)

{
  ~NewPVPHealthBar(this + -0x10);
  return;
}


/* NewPVPHealthBar::~NewPVPHealthBar() */

void __thiscall NewPVPHealthBar::~NewPVPHealthBar(NewPVPHealthBar *this)

{
  ~NewPVPHealthBar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewPVPHealthBar::~NewPVPHealthBar() */

void __thiscall NewPVPHealthBar::~NewPVPHealthBar(NewPVPHealthBar *this)

{
  ~NewPVPHealthBar(this + -0x10);
  return;
}


/* NewPVPHealthBar::onGameplayStarted() */

void __thiscall NewPVPHealthBar::onGameplayStarted(NewPVPHealthBar *this)

{
  UIWidget::SetVisible((UIWidget *)this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPHealthBar::StaticClassInit() */

void NewPVPHealthBar::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPHealthBar");
    (*pcVar2)(plVar1,asStack_10,FUN_0351b1e0,400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPHealthBar::StaticGetClass() */

long * NewPVPHealthBar::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPHealthBar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPHealthBar::GetClass() const */

long * NewPVPHealthBar::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPHealthBar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPHealthBar::SetHeadShotID(int) */

void __thiscall NewPVPHealthBar::SetHeadShotID(NewPVPHealthBar *this,int param_1)

{
  if (*(int *)(this + 0x174) != param_1) {
    *(int *)(this + 0x174) = param_1;
    UIHeadshotIcon::changeHeadshot(*(UIHeadshotIcon **)(this + 0x178),param_1);
    return;
  }
  return;
}


/* NewPVPHealthBar::FlashDamage() */

void __thiscall NewPVPHealthBar::FlashDamage(NewPVPHealthBar *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x16c) = uVar1;
  return;
}


/* NewPVPHealthBar::onBarTakeDamage(int, float) */

void NewPVPHealthBar::onBarTakeDamage(int param_1,float param_2)

{
  int in_w1;
  
  if (*(int *)((NewPVPHealthBar *)(ulong)(uint)param_1 + 0x170) != in_w1) {
    return;
  }
  FlashDamage((NewPVPHealthBar *)(ulong)(uint)param_1);
  return;
}


/* NewPVPHealthBar::onUpdate() */

void __thiscall NewPVPHealthBar::onUpdate(NewPVPHealthBar *this)

{
  char cVar1;
  NewPVPHealthBar NVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if ((pPVar3 == (PlayerInfo *)0x0) ||
     (cVar1 = PlayerInfo::IsMonthlyCardActivated(pPVar3,1), cVar1 == '\0')) {
    NVar2 = (NewPVPHealthBar)0x0;
  }
  else {
    NVar2 = (NewPVPHealthBar)0x1;
  }
  if (this[0x180] != NVar2) {
    this[0x180] = NVar2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPHealthBar::NewPVPHealthBar() */

void __thiscall NewPVPHealthBar::NewPVPHealthBar(NewPVPHealthBar *this)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ProfileMgr *this_00;
  undefined4 uVar5;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined ***)this = &PTR_GetClass_0664dd50;
  *(undefined ***)(this + 0x10) = &PTR__NewPVPHealthBar_0664def0;
  FUN_05476574(this + 0x188);
  uVar5 = PVZ_EOT();
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x16c) = uVar5;
  *(undefined4 *)(this + 0x164) = 0x42c80000;
  lVar3 = DSingleton<UserInfo>::getInstance();
  iVar2 = FUN_03517f94(*(undefined4 *)(lVar3 + 0x24));
  *(int *)(this + 0x174) = iVar2;
  uVar4 = UIHeadshotIcon::create(iVar2);
  *(undefined8 *)(this + 0x178) = uVar4;
  bVar1 = (bool)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  uVar5 = NewPVPMgr::GetMaxHealthAmount(bVar1);
  *(undefined4 *)(this + 0x168) = uVar5;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar3 == 0) {
    FUN_05478178(auStack_10,L"-invalid-",auStack_18);
    nop();
  }
  else {
    PlayerInfo::AM_GetName();
  }
  thunk_FUN_05477b9c(this + 0x188,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPHealthBar::StaticNew() */

NewPVPHealthBar * NewPVPHealthBar::StaticNew(void)

{
  NewPVPHealthBar *this;
  
  this = ::operator_new(400);
  NewPVPHealthBar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPHealthBar::AddToRenderQueue(RenderQueue*) */

void __thiscall NewPVPHealthBar::AddToRenderQueue(NewPVPHealthBar *this,RenderQueue *param_1)

{
  short sVar1;
  RtObject *this_00;
  UIWidgetSheet *pUVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantImitater::GetImitatedPlant();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
  pUVar2 = Sexy::RtObject::Cast<UIWidgetSheet>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  sVar1 = *(short *)(pUVar2 + 0x5c);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x78);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<NewPVPHealthBar,void(NewPVPHealthBar::*)(Sexy::Graphics*)>(aDStack_38,aRStack_50);
  RenderQueue::Add(param_1,sVar1 + 700000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPHealthBar::registerForEvents() */

void __thiscall NewPVPHealthBar::registerForEvents(NewPVPHealthBar *this)

{
  undefined *puVar1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  CBMemberTranslatorX aCStack_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBarTakeDamage);
  local_90 = local_58;
  local_a0 = local_68;
  uStack_98 = uStack_60;
  MessageRouter::
  Subscribe<int,float,Sexy::CBMemberTranslatorX<NewPVPHealthBar,void(NewPVPHealthBar::*)(int,float)>>
            ((MessageRouter *)puVar1,Message::BarTakeDamage,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBarSetPercentage);
  local_a0 = local_50;
  uStack_98 = uStack_48;
  local_90 = local_40;
  MessageRouter::
  Subscribe<int,float,Sexy::CBMemberTranslatorX<NewPVPHealthBar,void(NewPVPHealthBar::*)(int,float)>>
            ((MessageRouter *)puVar1,Message::BarSetPercentage,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<NewPVPHealthBar,void(NewPVPHealthBar::*)()>(aDStack_38,aCStack_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelStarting,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x0351c22c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* NewPVPHealthBar::Draw(Sexy::Graphics*) */

void __thiscall NewPVPHealthBar::Draw(NewPVPHealthBar *this,Graphics *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  Image *pIVar9;
  LotteryResultProgressBar *pLVar10;
  SalesProgressBar *pSVar11;
  int *piVar12;
  NewPVPGameSubsystem *pNVar13;
  float *pfVar14;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  string *extraout_x1;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float local_d4;
  GraphicsAutoState aGStack_d0 [8];
  string asStack_c8 [8];
  GraphicsAutoState aGStack_c0 [8];
  int local_b8 [2];
  undefined8 local_b0;
  int local_a8 [2];
  undefined8 uStack_a0;
  int local_98 [2];
  undefined8 uStack_90;
  Insets aIStack_88 [16];
  Insets aIStack_78 [8];
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  Insets aIStack_58 [16];
  int local_48 [3];
  undefined4 local_3c;
  float local_38 [4];
  float local_28 [4];
  float local_18 [2];
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_d0,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  Sexy::Insets::Insets((Insets *)local_b8);
  Sexy::Insets::Insets((Insets *)local_a8);
  Sexy::Insets::Insets((Insets *)local_98);
  fVar15 = (float)FUN_03518490(0x40400000);
  fVar16 = (float)FUN_03518490(0xc0400000);
  fVar17 = (float)FUN_03518490(0x42640000);
  fVar18 = (float)FUN_03518490(0x42040000);
  fVar19 = (float)FUN_03518490(0x42f40000);
  fVar20 = (float)FUN_03518490(0x41200000);
  Sexy::Insets::Insets((Insets *)local_18,(int)fVar17,(int)fVar18,(int)fVar19,(int)fVar20);
  local_b8[0] = (int)local_18[0];
  local_b0 = uStack_10;
  fVar17 = (float)FUN_03518490(0x42640000);
  fVar18 = (float)FUN_03518490(0x41f00000);
  fVar19 = (float)FUN_03518490(0x42f40000);
  fVar20 = (float)FUN_03518490(0x41800000);
  Sexy::Insets::Insets((Insets *)local_18,(int)fVar17,(int)fVar18,(int)fVar19,(int)fVar20);
  local_a8[0] = (int)local_18[0];
  uStack_a0 = uStack_10;
  iVar4 = FUN_0351847c(0x3c);
  iVar5 = FUN_0351847c(0xe);
  iVar6 = FUN_0351847c(0x6d);
  iVar7 = FUN_0351847c(0x12);
  Sexy::Insets::Insets((Insets *)local_18,iVar4,iVar5,iVar6,iVar7);
  local_98[0] = (int)local_18[0];
  uStack_90 = uStack_10;
  if (*(int *)(this + 0x170) == 1) {
    fVar17 = (float)FUN_03518490(0xc1000000);
    iVar4 = (int)fVar17;
    fVar15 = (float)FUN_03518490(0x42f60000);
    fVar17 = (float)FUN_03518490(0xc0400000);
    local_b8[0] = (int)fVar17;
    fVar17 = (float)FUN_03518490(0xc0a00000);
    local_a8[0] = (int)fVar17;
    fVar17 = (float)FUN_03518490(0x41200000);
    local_98[0] = (int)fVar17;
    pcVar1 = "_OPPOENT";
  }
  else {
    iVar4 = 0;
    pcVar1 = "";
  }
  Sexy::StrFormat("IMAGE_UI_NEW_PVP_HEALTH_BAR%s",asStack_c8,pcVar1);
  pIVar9 = (Image *)StringHelper::ToImage(asStack_c8,true);
  Sexy::Graphics::DrawImage(param_1,pIVar9,iVar4,0);
  fVar18 = *(float *)(this + 0x16c);
  fVar17 = (float)PVZ_EOT();
  if (fVar18 < fVar17) {
    auVar21 = PVZ_T();
    local_18[0] = 0.0;
    local_28[0] = 1.0;
    fVar17 = CurveLerp<float>(auVar21,fVar18 + 0.25,auVar21._0_4_,local_28,(Insets *)local_18,3);
  }
  else {
    fVar17 = 0.0;
  }
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4658);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4658);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar11);
  local_28[0] = (float)FUN_03517f64(*(undefined4 *)(this + 0x38));
  local_18[0] = (float)((int)((float)iVar5 * 0.33333334) << 1);
  piVar12 = eastl::max_alt<int>((int *)local_28,(int *)local_18);
  iVar4 = *piVar12;
  Sexy::Insets::Insets(aIStack_88,0,0,(int)((float)iVar5 * 0.33333334),iVar6);
  fVar20 = (float)iVar4;
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4710);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4710);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar11);
  iVar7 = FUN_0351847c(3);
  Sexy::Insets::Insets(aIStack_78,aIStack_88);
  local_70 = (int)(float)iVar4;
  local_6c = iVar5 + iVar7;
  fVar18 = (float)FUN_03518490(0);
  fVar19 = (float)FUN_03518490(0x40a00000);
  fVar22 = *(float *)(this + 0x164);
  local_d4 = fVar19;
  cVar3 = Sexy::IsNearZero(fVar22,0.001);
  if (cVar3 == '\0') {
    fVar23 = fVar22 * 0.01;
    local_18[0] = 0.0;
    local_38[0] = (float)(int)((fVar20 - fVar18) - fVar19);
    local_28[0] = local_38[0] * fVar23;
    pfVar14 = eastl::min_alt<float>(local_38,local_28);
    pfVar14 = eastl::max_alt<float>(local_18,pfVar14);
    local_18[0] = *pfVar14 + fVar19;
    pfVar14 = eastl::max_alt<float>(local_18,&local_d4);
    local_d4 = *pfVar14;
    Sexy::Insets::Insets((Insets *)&local_68,(Insets *)local_b8);
    local_60 = (int)((float)local_60 * fVar23);
    if (*(int *)(this + 0x170) == 1) {
      local_68 = (int)((float)local_68 + (float)(int)local_b0 * (1.0 - fVar23));
    }
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_c0,param_1);
    if (fVar22 <= 25.0) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4928;
    }
    else if (fVar22 <= 50.0) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4888;
    }
    else if (85.0 < fVar22) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa47e8;
    }
    else {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4c78;
    }
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
    Sexy::Graphics::DrawImage(param_1,pIVar9,local_68,local_64,local_60,local_5c);
    Sexy::Insets::Insets(aIStack_58,0xff,0xff,0xff,0x96);
    Sexy::Insets::Insets((Insets *)local_48,aIStack_58);
    local_3c = 0;
    Sexy::Insets::Insets((Insets *)local_38,(Insets *)local_48);
    Sexy::Insets::Insets((Insets *)local_28,aIStack_58);
    Sexy::ColorLerp((Sexy *)local_18,fVar17,(Insets *)local_38,(Insets *)local_28);
    Sexy::Graphics::SetColor(param_1,(Color *)local_18);
    Sexy::Graphics::FillRect(param_1,local_68,local_64,local_60,local_5c);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_c0);
  }
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4658);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4a30);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  fVar17 = (fVar20 / (float)iVar4) * (float)iVar5;
  Sexy::Insets::Insets((Insets *)local_28,(int)(fVar20 - fVar17),0,(int)fVar17,iVar6);
  pNVar13 = Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  fVar18 = (float)FUN_03517f7c(*(undefined4 *)(pNVar13 + 0xb0));
  pNVar13 = Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  fVar17 = (float)FUN_03517f80(*(undefined4 *)(pNVar13 + 0xbc));
  if (*(int *)(this + 0x170) == 0) {
    fVar17 = fVar18;
  }
  local_48[0] = (int)fVar17;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_48);
  Sexy::ToSexyString((Sexy *)local_18,extraout_x1);
  std::string::~string((string *)local_18);
  uVar2 = PrimeText_Game::Typeface_FZCuYuan_12_Outline;
  Sexy::Color::Color((Color *)local_18,1);
  WriteWordInRect(param_1,local_38,(Insets *)local_a8,uVar2,(Insets *)local_18,5,1);
  uVar2 = PrimeText_Game::Typeface_FZCuYuan_12_Outline;
  Sexy::Color::Color((Color *)local_18,1);
  uVar8 = 4;
  if (*(int *)(this + 0x170) != 1) {
    uVar8 = 3;
  }
  WriteWordInRect(param_1,this + 0x188,(Insets *)local_98,uVar2,(Insets *)local_18,uVar8,1);
  Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)local_18,param_1);
  Sexy::Graphics::Translate(param_1,(int)fVar15,(int)fVar16);
  UIHeadshotIcon::setScale(*(UIHeadshotIcon **)(this + 0x178),0.4,0.4);
  (**(code **)(**(long **)(this + 0x178) + 0x128))(*(long **)(this + 0x178),param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)local_18);
  FUN_05476c50(local_38);
  std::string::~string(asStack_c8);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_d0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to NewPVPHealthBar::Draw(Sexy::Graphics*) */

void __thiscall NewPVPHealthBar::Draw(NewPVPHealthBar *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

