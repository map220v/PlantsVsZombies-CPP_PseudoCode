// Class: FishingModule


/* FishingModule::GetCannonLevel() */

undefined4 __thiscall FishingModule::GetCannonLevel(FishingModule *this)

{
  return *(undefined4 *)(this + 0xd8);
}


/* FishingModule::onCanPreventSave() */

undefined8 FishingModule::onCanPreventSave(void)

{
  return 1;
}


/* FishingModule::onCancelTouch() */

void __thiscall FishingModule::onCancelTouch(FishingModule *this)

{
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* FishingModule::onLevelStarted() */

void FishingModule::onLevelStarted(void)

{
  return;
}


/* FishingModule::onCheckBuySunManually(bool*) */

void __thiscall FishingModule::onCheckBuySunManually(FishingModule *this,bool *param_1)

{
  if (param_1 != (bool *)0x0) {
    *param_1 = true;
  }
  if (*(int *)(this + 0x4c) != 1) {
    LawnApp::ShowReviveUI(gLawnApp,9);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::StaticClassInit() */

void FishingModule::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_047af554,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"FishingModule");
    (*pcVar3)(plVar2,asStack_10,FUN_047b1dac,0xf8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FishingModule::StaticGetClass() */

long * FishingModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"FishingModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FishingModule::InvalidUI() */

void __thiscall FishingModule::InvalidUI(FishingModule *this)

{
  this[0x21] = (FishingModule)0x0;
  return;
}


/* FishingModule::IsCannonReady() */

bool __thiscall FishingModule::IsCannonReady(FishingModule *this)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)PVZ_EOT();
  fVar3 = *(float *)(this + 0x5c);
  bVar1 = false;
  if ((fVar3 == fVar2) && (fVar3 == *(float *)(this + 0x60))) {
    bVar1 = fVar3 == *(float *)(this + 100);
  }
  return bVar1;
}


/* FishingModule::IsInHighScore() */

FishingModule __thiscall FishingModule::IsInHighScore(FishingModule *this)

{
  return this[0x22];
}


/* FishingModule::SetFishingState(FishingState) */

void __thiscall FishingModule::SetFishingState(FishingModule *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x4c) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::GetCannonFirePos(int) */

void __thiscall FishingModule::GetCannonFirePos(FishingModule *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  int local_30 [2];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)local_30,0,0);
  if (param_1 == 2) {
    fVar5 = 540.0;
    iVar4 = 0xa8;
  }
  else if ((param_1 == 3) || (param_1 != 1)) {
    fVar5 = 508.0;
    iVar4 = 0xfa;
  }
  else {
    fVar5 = 560.0;
    iVar4 = 0xab;
  }
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,(float)(iVar4 - local_30[0]),fVar5,0.0);
  local_18 = local_28;
  uVar2 = local_18;
  local_10 = local_20;
  local_18._0_4_ = (undefined4)local_28;
  uVar1 = (undefined4)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar3 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_18 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar3,local_20);
}


/* FishingModule::GetRandomStartPos() */

void FishingModule::GetRandomStartPos(void)

{
  int iVar1;
  int iVar2;
  long in_x0;
  Point *in_x8;
  
  Sexy::Point::Point(in_x8);
  iVar2 = DAT_06b25f34;
  iVar1 = *(int *)(in_x0 + 0x4c);
  *(int *)in_x8 = DAT_06b25f28 + DAT_06b25f30;
  *(int *)(in_x8 + 4) = iVar2 / 2;
  if (iVar1 != 2) {
    iVar1 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    iVar1 = RandRangeInt(-(iVar1 >> 2),iVar1 >> 2);
    *(int *)(in_x8 + 4) = *(int *)(in_x8 + 4) + iVar1;
    iVar2 = Sexy::Rand(2);
    iVar1 = -0x14;
    if (iVar2 != 0) {
      iVar1 = 0x14;
    }
    *(int *)in_x8 = iVar1 + iVar2 * *(int *)in_x8;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::onZombieEndWillPath(Zombie*) */

void __thiscall FishingModule::onZombieEndWillPath(FishingModule *this,Zombie *param_1)

{
  char cVar1;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)param_1 + 0x48))(param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::ArrangeUI() */

void __thiscall FishingModule::ArrangeUI(FishingModule *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  UIWidget *this_00;
  UIWidget *pUVar4;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  this[0x21] = (FishingModule)0x1;
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x68));
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
    nop();
    std::string::string((string *)&local_10,"UITopBar");
    pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_10);
    UIWidget::SetParentWidget(this_00,pUVar4);
    std::string::~string((string *)&local_10);
    nop();
    UIWidget::SetAnchorType(this_00,1);
    UIWidget::SetParentAnchorType(this_00,1);
    iVar2 = FUN_047accac(0xfa);
    iVar3 = FUN_047accac(10);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)iVar2,(float)iVar3);
    UIWidget::SetPositionOffset(local_10,local_c,this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FishingModule::IsInCrazy() */

bool __thiscall FishingModule::IsInCrazy(FishingModule *this)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(this + 0x58);
  fVar2 = (float)PVZ_T();
  bVar1 = false;
  if (fVar2 < fVar3) {
    fVar2 = (float)PVZ_EOT();
    bVar1 = *(float *)(this + 0x58) != fVar2;
  }
  return bVar1;
}


/* FishingModule::onReviveSucceed() */

void __thiscall FishingModule::onReviveSucceed(FishingModule *this)

{
  LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  Board::AddSunMoney(*(Board **)(gLawnApp + 0x9f0),1000);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::onAddToRenderQueue(RenderQueue*) */

void __thiscall FishingModule::onAddToRenderQueue(FishingModule *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRenderBackground);
  Sexy::Delegate1<Sexy::Graphics*>::Delegate1<FishingModule,void(FishingModule::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,0x186a2,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::SetCrazy(bool, bool) */

void __thiscall FishingModule::SetCrazy(FishingModule *this,bool param_1,bool param_2)

{
  RtMixedPtrBase *pRVar1;
  char cVar2;
  bool bVar3;
  RtWeakPtrBase *pRVar4;
  SkyCannonTypeUI *this_00;
  Effect_PopAnim *pEVar5;
  StandaloneEffect *pSVar6;
  Board *pBVar7;
  undefined4 uVar8;
  float fVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2) {
    if (param_1) {
      fVar9 = (float)PVZ_T();
      pRVar1 = (RtMixedPtrBase *)(this + 200);
      *(float *)(this + 0x58) = fVar9 + 10.0;
      cVar2 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
      if (cVar2 != '\0') {
        pSVar6 = (StandaloneEffect *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        StandaloneEffect::SetVisibility(pSVar6,true);
        pEVar5 = (Effect_PopAnim *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        std::string::string((string *)&local_10,"idle");
        PVZ_EOT();
        Effect_PopAnim::PlayLoopingAnimation(pEVar5,(string *)&local_10,0);
        std::string::~string((string *)&local_10);
        nop();
      }
      pRVar1 = (RtMixedPtrBase *)(this + 0xd0);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
      if (cVar2 != '\0') {
        pSVar6 = (StandaloneEffect *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        StandaloneEffect::SetVisibility(pSVar6,true);
        pEVar5 = (Effect_PopAnim *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        std::string::string((string *)&local_10,"crazy");
        PVZ_EOT();
        Effect_PopAnim::PlayLoopingAnimation(pEVar5,(string *)&local_10,0);
        std::string::~string((string *)&local_10);
        nop();
      }
      pBVar7 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05478178((string *)&local_10,L"[FISHING_CRAZY_TIP]",&local_18);
      Board::DisplayAdviceAgain(pBVar7,(string *)&local_10,0x11,0);
      FUN_05476c50((string *)&local_10);
      nop();
    }
    else {
      uVar8 = PVZ_EOT();
      *(undefined4 *)(this + 0x58) = uVar8;
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 200));
      if (cVar2 != '\0') {
        pSVar6 = (StandaloneEffect *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
        StandaloneEffect::SetVisibility(pSVar6,false);
      }
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xd0));
      if (cVar2 != '\0') {
        pSVar6 = (StandaloneEffect *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
        StandaloneEffect::SetVisibility(pSVar6,false);
      }
    }
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x30));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar3)
    {
      pRVar4 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar4);
      this_00 = (SkyCannonTypeUI *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      SkyCannonTypeUI::SetCrazy(this_00,param_1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::GetZombieInfo(Zombie*) */

void __thiscall FishingModule::GetZombieInfo(FishingModule *this,Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *this_01;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xa0);
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar2) break;
      this_01 = (RtWeakPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      ToolPacketData::GetProps();
      cVar1 = Sexy::RtWeakPtrBase::operator==(this_01,(RtWeakPtrBase *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      uVar3 = local_18;
      if (cVar1 != '\0') goto LAB_047adb0c;
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
    }
  }
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
LAB_047adb0c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* FishingModule::GetCannonEnergy(int) */

undefined4 FishingModule::GetCannonEnergy(int param_1)

{
  ResilienceTutorialIntroProperties *pRVar1;
  undefined4 local_14;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>
                     ((LevelModule *)(ulong)(uint)param_1);
  FishingProperties::GetCannonData((int)pRVar1);
  return local_14;
}


/* FishingModule::IsEnergyEnough() */

bool __thiscall FishingModule::IsEnergyEnough(FishingModule *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = Board::GetSunCurrency(*(Board **)(gLawnApp + 0x9f0));
  iVar2 = GetCannonEnergy((int)this);
  return iVar2 <= iVar1;
}


/* FishingModule::GetCannonDamage(int) */

undefined4 FishingModule::GetCannonDamage(int param_1)

{
  ResilienceTutorialIntroProperties *pRVar1;
  undefined4 local_10;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>
                     ((LevelModule *)(ulong)(uint)param_1);
  FishingProperties::GetCannonData((int)pRVar1);
  return local_10;
}


/* FishingModule::GetCannonCoolDown(int) */

undefined4 FishingModule::GetCannonCoolDown(int param_1)

{
  ResilienceTutorialIntroProperties *pRVar1;
  undefined4 local_c;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>
                     ((LevelModule *)(ulong)(uint)param_1);
  FishingProperties::GetCannonData((int)pRVar1);
  return local_c;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::onRenderBackground(Sexy::Graphics*) */

void __thiscall FishingModule::onRenderBackground(FishingModule *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ResourceInfo *pRVar6;
  StandaloneEffect *pSVar7;
  Image *pIVar8;
  int iVar9;
  int local_20 [2];
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsInCrazy(this);
  if (cVar1 != '\0') {
    LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 200));
    if (cVar1 != '\0') {
      Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)&local_18,param_1);
      *(undefined4 *)(param_1 + 0x10) = 0x43160000;
      *(undefined4 *)(param_1 + 0x14) = 0x42a00000;
      pSVar7 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
      StandaloneEffect::Draw(pSVar7,param_1);
      Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)&local_18);
    }
  }
  Sexy::Point::Point((Point *)local_20,0,0);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb8));
  if (bVar2) {
    pIVar8 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                ((CachedResourcePtr<Sexy::Image> *)&DAT_06b260c0);
    iVar4 = FUN_047acc60(0x17);
    iVar3 = FUN_047acc60(0x21c);
    TodDrawImageScaledF(param_1,pIVar8,(float)(-local_20[0] - iVar4),(float)iVar3,0.7,0.7);
    pSVar7 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
    StandaloneEffect::Draw(pSVar7,param_1);
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xc0));
  if (bVar2) {
    pSVar7 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
    StandaloneEffect::Draw(pSVar7,param_1);
  }
  this_00 = (RtWeakPtr *)(this + 0x28);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar2) {
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar4 = *(int *)(lVar5 + 0x38);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar9 = (int)((float)*(int *)(lVar5 + 0x3c) * 0.7);
    iVar3 = FUN_047acc60(0xb4);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)&local_18,(float)(-local_20[0] - iVar3),
               (float)(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x54) - iVar9),0.0);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar6,(int)local_18,(int)local_14,(int)((float)iVar4 * 0.7),iVar9);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::onReviveClose() */

void __thiscall FishingModule::onReviveClose(FishingModule *this)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xd8) == 1) {
    cVar1 = IsEnergyEnough(this);
    if (cVar1 == '\0') {
      cVar1 = Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0));
      if (cVar1 != '\0') {
        plVar2 = (long *)FUN_047aeb14(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
        pcVar3 = *(code **)(*plVar2 + 0xa0);
        FUN_05478178(auStack_10,L"[FISHING_FAILED_TIP]",auStack_18);
        (*pcVar3)(plVar2,auStack_10);
        FUN_05476c50(auStack_10);
        nop();
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::ChangeCannon() */

void __thiscall FishingModule::ChangeCannon(FishingModule *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  Effect_PlayFrame *this_01;
  ResourceInfo *pRVar2;
  long *plVar3;
  int iVar4;
  float fVar5;
  int local_78 [2];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtWeakPtr aRStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0xc0);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar3 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
    Sexy::Point::Point((Point *)local_78,0,0);
    iVar4 = *(int *)(this + 0xd8);
    if (iVar4 == 2) goto LAB_047af0f0;
LAB_047aeed4:
    if (iVar4 != 3) {
      if (iVar4 != 1) goto LAB_047aeee4;
      this_01 = Board::AddEffect<Effect_PlayFrame>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_68,"POPANIM_CANNON_ANIM_SKYCITY_FISHING_CANNON1");
      GetPAMByName(asStack_68);
      pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_60);
      Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_01,(PopAnim *)pRVar2,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
      std::string::~string(asStack_68);
      nop();
      fVar5 = 560.0;
      local_78[0] = 0xb9 - local_78[0];
      goto LAB_047aef9c;
    }
    this_01 = Board::AddEffect<Effect_PlayFrame>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_68,"POPANIM_CANNON_ANIM_SKYCITY_FIRE3");
    GetPAMByName(asStack_68);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_60);
    Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_01,(PopAnim *)pRVar2,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    std::string::~string(asStack_68);
    nop();
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_60,(float)(0x9e - local_78[0]),514.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)aRStack_60,-1);
  }
  else {
    Sexy::Point::Point((Point *)local_78,0,0);
    iVar4 = *(int *)(this + 0xd8);
    if (iVar4 != 2) goto LAB_047aeed4;
LAB_047af0f0:
    this_01 = Board::AddEffect<Effect_PlayFrame>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_68,"POPANIM_CANNON_ANIM_SKYCITY_FISHING_CANNON2");
    GetPAMByName(asStack_68);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_60);
    Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_01,(PopAnim *)pRVar2,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    std::string::~string(asStack_68);
    nop();
    local_78[0] = 0xb4 - local_78[0];
    fVar5 = 538.0;
LAB_047aef9c:
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_60,(float)local_78[0],fVar5,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)aRStack_60,-1);
    FUN_047ac7e0((StandaloneEffect *)(this_01 + 0x174));
  }
  if (this_01 != (Effect_PlayFrame *)0x0) {
    Effect_PopAnim::SetCentered((Effect_PopAnim *)this_01,true);
    FUN_047abf48((Effect_PopAnim *)(this_01 + 0x1c),0x186a1);
    (**(code **)(*(long *)this_01 + 0x80))(0x3f333333,this_01);
    StandaloneEffect::SetManuallyDrawn((StandaloneEffect *)this_01,true);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string((string *)aRStack_60,"onCannonFireAnimCommand");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
               (RtId *)asStack_68,(string *)aRStack_60);
    Effect_PlayFrame::SetFrameStopDelegate(this_01,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)aRStack_60);
    nop();
    Sexy::RtId::~RtId((RtId *)asStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    bVar1 = (bool)IsInCrazy(this);
    SetCrazy(this,bVar1,false);
  }
LAB_047aeee4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FishingModule::UpdateCannon() */

void __thiscall FishingModule::UpdateCannon(FishingModule *this)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xc0));
  if (cVar1 != '\0') {
    fVar2 = (float)PVZ_EOT();
    fVar4 = *(float *)(this + 0x5c);
    if (fVar4 == fVar2) {
      fVar2 = *(float *)(this + 0x60);
      if ((fVar4 != fVar2) && (fVar3 = (float)PVZ_T(), fVar2 < fVar3)) {
        *(float *)(this + 0x60) = fVar4;
      }
    }
    else {
      fVar3 = (float)PVZ_T();
      if (fVar4 < fVar3) {
        *(float *)(this + 0x5c) = fVar2;
        fVar2 = (float)PVZ_T();
        *(float *)(this + 0x60) = fVar2 + 0.5;
        ChangeCannon(this);
      }
    }
    fVar4 = *(float *)(this + 0x58);
    fVar2 = (float)PVZ_T();
    if (fVar4 < fVar2) {
      SetCrazy(this,false,true);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::SetCannonLevel(int) */

void __thiscall FishingModule::SetCannonLevel(FishingModule *this,int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  RtWeakPtrBase *pRVar4;
  SkyCannonTypeUI *this_00;
  long lVar5;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar6;
  float fVar7;
  int local_28 [2];
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  *(int *)(this + 0xd8) = param_1;
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
  local_18[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x30));
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
    if (!bVar1) break;
    pRVar4 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_28,pRVar4);
    this_00 = (SkyCannonTypeUI *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
    iVar3 = FUN_047abf74(*(undefined4 *)(lVar5 + 0x168));
    SkyCannonTypeUI::SetSelect(this_00,iVar3 == *(int *)(this + 0xd8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xc0));
  if (cVar2 == '\0') {
    ChangeCannon(this);
  }
  else {
    fVar7 = (float)PVZ_T();
    *(float *)(this + 0x5c) = fVar7 + 0.5;
    this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string((string *)&local_20,"POPANIM_CANNON_ANIM_SKYCITY_SWITCH_CANNON");
    GetPAMByName((string *)&local_20);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_18);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar6,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    std::string::~string((string *)&local_20);
    nop();
    Sexy::Point::Point((Point *)local_28,0,(uint)bVar1);
    EATextSquish::Vec3::Vec3((Vec3 *)local_18,(float)(0x32 - local_28[0]),418.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)local_18,-1);
    std::string::string((string *)&local_20,"animation");
    Effect_PopAnim::PlaySingleAnimation(this_01,(exception_ptr *)&local_20,bVar1);
    std::string::~string((string *)&local_20);
    nop();
    FUN_047abf48(this_01 + 0x1c,0x186a3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FishingModule::onSkyCannonTypeSelected(int) */

void __thiscall FishingModule::onSkyCannonTypeSelected(FishingModule *this,int param_1)

{
  char cVar1;
  
  cVar1 = FUN_047abf80(this[0x20]);
  if (cVar1 != '\0') {
    return;
  }
  SetCannonLevel(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::FishingModule() */

void __thiscall FishingModule::FishingModule(FishingModule *this)

{
  undefined4 uVar1;
  int local_20;
  Insets local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined8 *)(this + 0x18) = 0;
  this[0x20] = (FishingModule)0x0;
  *(undefined ***)this = &PTR_GetModuleClass_068e32c0;
  this[0x21] = (FishingModule)0x0;
  this[0x22] = (FishingModule)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x50) = uVar1;
  *(undefined4 *)(this + 0x54) = uVar1;
  *(undefined4 *)(this + 0x58) = uVar1;
  *(undefined4 *)(this + 0x5c) = uVar1;
  *(undefined4 *)(this + 0x60) = uVar1;
  *(undefined4 *)(this + 100) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x68));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x70));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xc0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 200));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd0));
  DVec3::DVec3((DVec3 *)(this + 0xdc));
  DVec3::DVec3((DVec3 *)(this + 0xe8));
  LawnApp::AddModuleInfo(gLawnApp,2);
  Board::GetBoardBaseOffset();
  Sexy::Insets::Insets(local_18,0,0,800,0x226);
  DAT_06b25f30 = (int)local_18._8_8_;
  _DAT_06b25f28 = CONCAT44(SUB84(local_18._0_8_,4),(int)local_18._0_8_ - local_20);
  _DAT_06b25f30 = CONCAT44(SUB84(local_18._8_8_,4),local_20 + DAT_06b25f30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FishingModule::StaticNew() */

FishingModule * FishingModule::StaticNew(void)

{
  FishingModule *this;
  
  this = ::operator_new(0xf8);
  FishingModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::onGameplayStarted() */

void __thiscall FishingModule::onGameplayStarted(FishingModule *this)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  UIWidget *this_00;
  long lVar4;
  RtObject *this_01;
  SunBank *this_02;
  ulong uVar5;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SetFishingState(this,0);
  uVar5 = DAT_06b26048 & 1;
  if (((DAT_06b26048 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b26048), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b26138,"UIShovel");
    nop();
    std::string::string((string *)&DAT_06b26140,"UIPowerupHolder");
    nop();
    std::string::string((string *)&DAT_06b26148,"UISkyCannon");
    nop();
    std::string::string((string *)&DAT_06b26150,"UIPlantfood");
    nop();
    std::string::string((string *)&DAT_06b26158,"UIAirshipProgress");
    nop();
    std::string::string((string *)&DAT_06b26160,"UICoinBank");
    nop();
    __cxa_guard_release(&DAT_06b26048);
    __cxa_atexit(FUN_047abdf4,uVar5,&DAT_06a88000);
  }
  if (((DAT_06b25f80 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b25f80), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b26050,(string *)&DAT_06b26138,(allocator *)&DAT_06b26168);
    __cxa_guard_release(&DAT_06b25f80);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b26050,
                 &DAT_06a88000);
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&DAT_06b26050);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&DAT_06b26050);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_05475d88(asStack_20,uVar3);
    this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
    if (this_00 != (UIWidget *)0x0) {
      UIWidget::SetVisible(this_00,false);
    }
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::string::string((string *)&local_18,"UISunBank");
  lVar4 = UIWidget::GetWidgetBySheetName((string *)&local_18);
  if (lVar4 == 0) {
    std::string::~string((string *)&local_18);
    nop();
  }
  else {
    std::string::string((string *)&local_10,"UISunBank");
    this_01 = (RtObject *)UIWidget::GetWidgetBySheetName((string *)&local_10);
    this_02 = Sexy::RtObject::Cast<SunBank>(this_01);
    std::string::~string((string *)&local_10);
    nop();
    std::string::~string((string *)&local_18);
    nop();
    if (this_02 != (SunBank *)0x0) {
      UIWidget::SetVisible((UIWidget *)this_02,true);
    }
  }
  InvalidUI(this);
  *(undefined4 *)(this + 0x50) = 0;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::FireAt(Sexy::Point const&) */

void FishingModule::FireAt(Point *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Effect_PlayFrame *pEVar4;
  CannonRocket *pCVar5;
  Effect_PopAnim *this;
  char *pcVar6;
  Point *in_x1;
  int iVar7;
  Point *pPVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  string asStack_50 [8];
  undefined4 local_48 [6];
  Point aPStack_30 [8];
  Point aPStack_28 [8];
  Point aPStack_20 [8];
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48[0] = GetCannonFirePos((FishingModule *)param_1,*(int *)(param_1 + 0xd8));
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_1 + 0xdc),(SexyVector3 *)local_48);
  iVar7 = *(int *)(param_1 + 0xd8);
  if (iVar7 == 2) {
    iVar3 = *(int *)(in_x1 + 4);
    fVar11 = *(float *)(param_1 + 0xe0);
    iVar1 = DAT_06b25f28 + -0x14;
    iVar7 = DAT_06b25f28 + DAT_06b25f30;
    fVar14 = (float)iVar3 - fVar11;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    fVar13 = (float)(iVar7 + 100);
    fVar12 = (float)iVar1;
    if (50.0 <= ABS(fVar14)) {
      iVar7 = *(int *)in_x1;
      *(undefined4 *)(param_1 + 0xec) = 0;
      fVar10 = *(float *)(param_1 + 0xdc);
      fVar14 = fVar14 / -fVar11;
      if (fVar14 == 0.0) {
        fVar14 = fVar13;
        if ((float)iVar7 - fVar10 <= 0.0) {
          fVar14 = fVar12;
        }
      }
      else {
        fVar14 = ((float)iVar7 - fVar10) / fVar14 + fVar10;
      }
      *(float *)(param_1 + 0xe8) = fVar14;
      if (fVar13 < fVar14) {
        *(float *)(param_1 + 0xe8) = fVar13;
        fVar14 = (float)iVar7;
        fVar12 = fVar13;
        goto LAB_047b113c;
      }
      if (fVar14 < fVar12) {
        *(float *)(param_1 + 0xe8) = fVar12;
        fVar14 = (float)iVar7;
        goto LAB_047b113c;
      }
    }
    else {
      fVar10 = *(float *)(param_1 + 0xdc);
      fVar14 = (float)*(int *)in_x1;
      if (fVar14 <= fVar10) {
        fVar13 = fVar12;
      }
      *(float *)(param_1 + 0xe8) = fVar13;
      fVar12 = fVar13;
LAB_047b113c:
      fVar12 = (fVar14 - fVar10) / (fVar12 - fVar10);
      if (fVar12 == 0.0) {
        *(undefined4 *)(param_1 + 0xec) = 0;
      }
      else {
        *(float *)(param_1 + 0xec) = ((float)iVar3 - fVar11) / fVar12 + fVar11;
      }
    }
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0xc0));
    if (bVar2) {
      dVar9 = atan2((double)(*(float *)(param_1 + 0xec) - *(float *)(param_1 + 0xe0)),
                    (double)(*(float *)(param_1 + 0xe8) - *(float *)(param_1 + 0xdc)));
      fVar12 = -(float)dVar9;
      fVar13 = fVar12 * 57.295776;
      pEVar4 = (Effect_PlayFrame *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xc0));
      std::string::string((string *)local_48,"attack");
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      Effect_PlayFrame::PlayFrame(pEVar4,(string *)local_48,-1,(int)fVar13);
      std::string::~string((string *)local_48);
      nop();
      fVar13 = cosf(fVar12);
      fVar14 = 80.0;
LAB_047b0d60:
      *(float *)(param_1 + 0xdc) = *(float *)(param_1 + 0xdc) + fVar14 * fVar13;
      fVar12 = sinf(fVar12);
      *(float *)(param_1 + 0xe0) = *(float *)(param_1 + 0xe0) - fVar14 * fVar12;
    }
  }
  else {
    if (iVar7 == 3) {
      iVar3 = *(int *)(in_x1 + 4);
      iVar7 = 0;
      *(float *)(param_1 + 0xe8) = (float)*(int *)in_x1;
      *(float *)(param_1 + 0xec) = (float)iVar3;
      iVar3 = GetCannonDamage((int)param_1);
      Sexy::Point::Point(aPStack_30,0,0);
      Sexy::Point::Point(aPStack_28,-0x3c,0);
      Sexy::Point::Point(aPStack_20,0x3c,0);
      Sexy::Point::Point(aPStack_18,0x1e,-0x1e);
      Sexy::Point::Point(aPStack_10,-0x1e,0x1e);
      pPVar8 = aPStack_30;
      do {
        pCVar5 = GameObject::Create<CannonRocket>();
        Sexy::TPoint<int>::operator+((TPoint<int> *)in_x1,(TPoint *)pPVar8);
        Sexy::Point::Point((Point *)local_48,(TPoint *)asStack_50);
        CannonRocket::InitializeRocketController(pCVar5,(Point *)local_48,(float)iVar3);
        std::string::string(asStack_50,"POPANIM_CANNON_ANIM_SKYCITY_FIRE_EFFECT3");
        std::string::string((string *)local_48,"missile_lock_reticle");
        CannonRocket::StartCrosshairEffect(pCVar5,asStack_50,(string *)local_48);
        std::string::~string((string *)local_48);
        nop();
        std::string::~string(asStack_50);
        nop();
        std::string::string(asStack_50,"POPANIM_CANNON_ANIM_SKYCITY_FIRE_EFFECT3");
        std::string::string((string *)local_48,"missile");
        fVar12 = (float)iVar7;
        iVar7 = iVar7 + 1;
        CannonRocket::StartRocketEffect
                  (pCVar5,asStack_50,(string *)local_48,fVar12 * 0.2 + 1.2,500.0);
        std::string::~string((string *)local_48);
        nop();
        std::string::~string(asStack_50);
        nop();
        pPVar8 = (Point *)(pPVar8 + 8);
      } while (iVar7 != 5);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0xc0));
      if (bVar2) {
        Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)local_48);
        std::string::string(asStack_50,"attack");
        AnimationSequence::AddSingleAnimation((string *)local_48,asStack_50,0);
        std::string::~string(asStack_50);
        nop();
        std::string::string(asStack_50,"idle");
        PVZ_EOT();
        AnimationSequence::AddLoopingAnimation((string *)local_48,asStack_50,0);
        std::string::~string(asStack_50);
        nop();
        this = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xc0));
        Effect_PopAnim::PlayAnimationSequence(this,(AnimationSequence *)local_48);
        pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar6,"Play_CabbagePult_Throw");
        AnimationSequence::~AnimationSequence((AnimationSequence *)local_48);
      }
      goto LAB_047b0c64;
    }
    if (iVar7 != 1) goto LAB_047b0c64;
    iVar7 = *(int *)(in_x1 + 4);
    *(float *)(param_1 + 0xe8) = (float)*(int *)in_x1;
    *(float *)(param_1 + 0xec) = (float)iVar7;
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0xc0));
    if (bVar2) {
      dVar9 = atan2((double)(*(float *)(param_1 + 0xec) - *(float *)(param_1 + 0xe0)),
                    (double)(*(float *)(param_1 + 0xe8) - *(float *)(param_1 + 0xdc)));
      fVar12 = -(float)dVar9;
      fVar13 = fVar12 * 57.295776;
      if (fVar13 < 0.0) {
        fVar13 = fVar13 + 360.0;
      }
      pEVar4 = (Effect_PlayFrame *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xc0));
      std::string::string((string *)local_48,"attack");
      Effect_PlayFrame::PlayFrame(pEVar4,(string *)local_48,-1,(int)fVar13);
      std::string::~string((string *)local_48);
      nop();
      fVar13 = cosf(fVar12);
      fVar14 = 45.0;
      goto LAB_047b0d60;
    }
  }
  pCVar5 = GameObject::Create<CannonRocket>();
  if (pCVar5 != (CannonRocket *)0x0) {
    CannonRocket::InitializeRocketController(pCVar5,in_x1,0.0);
    std::string::string(asStack_50,"POPANIM_CANNON_ANIM_SKYCITY_FIRE_EFFECT1");
    std::string::string((string *)local_48,"missile_lock_reticle");
    CannonRocket::StartCrosshairEffect(pCVar5,asStack_50,(string *)local_48);
    std::string::~string((string *)local_48);
    nop();
    std::string::~string(asStack_50);
    nop();
    std::string::string(asStack_50,"POPANIM_CANNON_ANIM_SKYCITY_FIRE_EFFECT1");
    std::string::string((string *)local_48,"");
    CannonRocket::StartRocketEffect(pCVar5,asStack_50,(string *)local_48,1.2,500.0);
    std::string::~string((string *)local_48);
    nop();
    std::string::~string(asStack_50);
    nop();
  }
LAB_047b0c64:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::onHandleTouch(Sexy::Touch const&) */

void __thiscall FishingModule::onHandleTouch(FishingModule *this,Touch *param_1)

{
  undefined *puVar1;
  LawnApp *this_00;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  PVZ2UIDialog *pPVar6;
  float fVar7;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  int local_80;
  int local_7c;
  wstring local_78 [8];
  Delegate0 aDStack_70 [48];
  Touch aTStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = '\x01';
  if (*(int *)(this + 0x4c) != 1) {
    cVar2 = FUN_047abf80(this[0x20]);
    puVar1 = gMessageRouter;
    if (cVar2 == '\0') {
      iVar4 = *(int *)(param_1 + 0x30);
    }
    else {
      local_78[0] = (wstring)0x1;
      Sexy::Touch::Touch(aTStack_40,param_1);
      MessageRouter::Post<Sexy::Touch_const&,bool*,Sexy::Touch,bool*>
                ((MessageRouter *)puVar1,Message::FishingTutorial_CheckTouch,aTStack_40,local_78);
      if (local_78[0] == (wstring)0x0) goto LAB_047b133c;
      iVar4 = *(int *)(param_1 + 0x30);
    }
    if (iVar4 == 3) {
      cVar2 = '\0';
      if (*(long *)param_1 == *(long *)(this + 0x18)) {
        onCancelTouch(this);
        iVar4 = FUN_047acc88(*(undefined4 *)(param_1 + 0x10));
        iVar5 = FUN_047acc88(*(undefined4 *)(param_1 + 0x14));
        Sexy::Point::Point((Point *)&local_80,iVar4,iVar5);
        cVar2 = Sexy::TRect<int>::Contains((TRect<int> *)&DAT_06b25f28,local_80,local_7c);
        if ((cVar2 == '\0') || (cVar3 = IsCannonReady(this), cVar3 == '\0')) {
          cVar2 = '\x01';
        }
        else {
          cVar2 = IsEnergyEnough(this);
          if (cVar2 == '\0') {
            fVar7 = (float)PVZ_EOT();
            this_00 = gLawnApp;
            cVar2 = cVar3;
            if (*(float *)(this + 0x54) == fVar7) {
              if (*(int *)(this + 0xd8) == 1) {
                onCheckBuySunManually(this,(bool *)0x0);
              }
              else {
                FUN_05478178(local_78,L"[SUMMARY_NOTICE]",auStack_90);
                FUN_05478178((wstring *)aTStack_40,L"[FISHING_CHANGE_CANNON_TIP]",auStack_88);
                pPVar6 = (PVZ2UIDialog *)
                         LawnApp::ShowPVZ2Dialog(this_00,local_78,(wstring *)aTStack_40);
                FUN_05476c50((wstring *)aTStack_40);
                nop();
                FUN_05476c50(local_78);
                nop();
                FUN_05478178(local_78,L"[DIALOG_STRING_OK]",auStack_88);
                Sexy::
                MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                          ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
                Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                          (aDStack_70,(wstring *)aTStack_40);
                PVZ2UIDialog::AddButton(pPVar6,local_78,aDStack_70,0);
                FUN_05476c50(local_78);
                nop();
              }
            }
          }
          else {
            FireAt((Point *)this);
            cVar3 = IsInCrazy(this);
            if ((cVar3 == '\0') && (cVar3 = FUN_047abf80(this[0x20]), cVar3 == '\0')) {
              iVar4 = GetCannonEnergy((int)this);
              Board::TakeSunMoney(*(Board **)(gLawnApp + 0x9f0),iVar4,false,false);
            }
            fVar7 = (float)PVZ_T();
            *(float *)(this + 0x54) = fVar7 + 3.0;
            fVar7 = (float)PVZ_T();
            iVar4 = GetCannonCoolDown((int)this);
            *(float *)(this + 100) = (float)iVar4 + fVar7;
          }
        }
      }
    }
    else if (iVar4 == 4) {
      onCancelTouch(this);
      cVar2 = '\0';
    }
    else if (iVar4 == 0) {
      cVar2 = '\0';
      if (*(long *)(this + 0x18) == 0) {
        *(undefined8 *)(this + 0x18) = *(undefined8 *)param_1;
        cVar2 = '\x01';
      }
    }
    else {
      cVar2 = '\0';
    }
  }
LAB_047b133c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::onCannonFireAnimCommand(std::string const&) */

void FishingModule::onCannonFireAnimCommand(string *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  Projectile *this;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  CannonLaser *this_01;
  char *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  Board *pBVar11;
  undefined4 uVar10;
  RtMixedPtrBase aRStack_38 [8];
  string asStack_30 [8];
  wstring awStack_28 [16];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0xd8) == 1) {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    std::string::string(asStack_30,"CannonFireDefault");
    Sexy::ToWString(asStack_30);
    Sexy::RtName::RtName(aRStack_18,awStack_28);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_38,uVar3,0xc,aRStack_18);
    Sexy::RtName::~RtName(aRStack_18);
    FUN_05476c50((Vec3 *)awStack_28);
    std::string::~string(asStack_30);
    nop();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
    if ((cVar1 != '\0') &&
       (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0xc0)), cVar1 != '\0')) {
      fVar8 = *(float *)(param_1 + 0xe0);
                    /* WARNING: Load size is inaccurate */
      pBVar11._0_4_ = *(Board **)(param_1 + 0xdc);
      dVar9 = atan2((double)(*(float *)(param_1 + 0xec) - fVar8),
                    (double)(*(float *)(param_1 + 0xe8) - (float)pBVar11._0_4_));
      uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_38);
      this = (Projectile *)Board::AddProjectile(pBVar11._0_4_,fVar8,0,uVar3,aRStack_18,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      RealObject::JoinTeam((RealObject *)this,1);
      FUN_047abf50(this + 0x50,900000);
      FUN_047abf5c(-(float)dVar9,this + 0xc4);
      EATextSquish::Vec3::Vec3((Vec3 *)awStack_28,300.0,300.0,0.0);
      fVar8 = (float)FUN_047abf58(*(undefined4 *)(this + 0xc4));
      fVar6 = cosf(fVar8);
      fVar7 = (float)DVec3::getLength((DVec3 *)awStack_28);
      fVar8 = sinf(fVar8);
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar7 * fVar6,-(fVar8 * fVar7),0.0);
      Projectile::SetVelocity(this,(SexyVector3 *)aRStack_18);
      iVar2 = GetCannonDamage((int)param_1);
      if (0 < iVar2) {
        fVar8 = (float)Projectile::GetDamageAmount(this);
        FUN_047abf64((float)iVar2 / fVar8,this + 0x184);
      }
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_30,"POPANIM_CANNON_ANIM_SKYCITY_FISHING_FIRE");
      GetPAMByName(asStack_30);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      std::string::~string(asStack_30);
      nop();
      Effect_PopAnim::SetCentered(this_00,true);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)(param_1 + 0xdc),-1);
      std::string::string((string *)aRStack_18,"animation");
      Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
      std::string::~string((string *)aRStack_18);
      nop();
      FUN_047abf48(this_00 + 0x1c,0x186a3);
      pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar5,"Play_Coconut_Cannon_Fire");
    }
  }
  else {
    if (*(int *)(param_1 + 0xd8) != 2) goto LAB_047b1704;
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    std::string::string(asStack_30,"CannonLaserDefault");
    Sexy::ToWString(asStack_30);
    Sexy::RtName::RtName(aRStack_18,awStack_28);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_38,uVar3,0xc,aRStack_18);
    Sexy::RtName::~RtName(aRStack_18);
    FUN_05476c50(awStack_28);
    std::string::~string(asStack_30);
    nop();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
    if ((cVar1 != '\0') &&
       (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0xc0)), cVar1 != '\0')) {
                    /* WARNING: Load size is inaccurate */
      pBVar11._0_4_ = *(Board **)(param_1 + 0xdc);
      uVar10 = *(undefined4 *)(param_1 + 0xe0);
      uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_38);
      Board::AddProjectile(pBVar11._0_4_,uVar10,0,uVar3,aRStack_18,0,0);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      CannonLaser::Initialise(this_01);
      DangerRoomManager::SetMaxLevel((DangerRoomManager *)this_01,7);
      RealObject::JoinTeam((RealObject *)this_01,1);
      FUN_047abf50(this_01 + 0x50,500000);
      CannonLaser::SetTarget
                (this_01,(SexyVector3 *)(param_1 + 0xdc),(SexyVector3 *)(param_1 + 0xe8));
      iVar2 = GetCannonDamage((int)param_1);
      if (0 < iVar2) {
        fVar8 = (float)Projectile::GetDamageAmount((Projectile *)this_01);
        FUN_047abf64((float)iVar2 / fVar8,this_01 + 0x184);
      }
      pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar5,"Play_LaserBean_Fire");
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
LAB_047b1704:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FishingModule::~FishingModule() */

void __thiscall FishingModule::~FishingModule(FishingModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_068e32c0;
  LawnApp::RemoveModuleInfo(gLawnApp,2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  std::vector<FishingModule::ZombieInfo,std::allocator<FishingModule::ZombieInfo>>::~vector
            ((vector<FishingModule::ZombieInfo,std::allocator<FishingModule::ZombieInfo>> *)
             (this + 0xa0));
  std::
  map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
  ::~map((map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
          *)(this + 0x70));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  std::vector<Sexy::RtWeakPtr<SkyCannonTypeUI>,std::allocator<Sexy::RtWeakPtr<SkyCannonTypeUI>>>::
  ~vector((vector<Sexy::RtWeakPtr<SkyCannonTypeUI>,std::allocator<Sexy::RtWeakPtr<SkyCannonTypeUI>>>
           *)(this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* FishingModule::~FishingModule() */

void __thiscall FishingModule::~FishingModule(FishingModule *this)

{
  ~FishingModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::RemoveZombieInfo(Zombie*) */

void __thiscall FishingModule::RemoveZombieInfo(FishingModule *this,Zombie *param_1)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = GetZombieInfo(this,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xa0));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<FishingModule::ZombieInfo,std::allocator<FishingModule::ZombieInfo>>::erase
              ((vector<FishingModule::ZombieInfo,std::allocator<FishingModule::ZombieInfo>> *)
               (this + 0xa0),local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall FishingModule::AddResourceRequirements(FishingModule *this,set *param_1)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  FishingZombieGroup *pFVar3;
  FishingZombieInfo *pFVar4;
  ResourceInfo *this_00;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  FishingZombieInfo aFStack_70 [32];
  FishingZombieGroup aFStack_50 [16];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_90 = FUN_047ad4cc(*(undefined8 *)(pRVar2 + 0x70));
  local_88 = FUN_047ad51c(*(undefined8 *)(pRVar2 + 0x78));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_90,(__normal_iterator *)&local_88);
  if (bVar1) {
    do {
      pFVar3 = (FishingZombieGroup *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
      FishingZombieGroup::FishingZombieGroup(aFStack_50,pFVar3);
      local_80 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(avStack_40);
      local_78 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(avStack_40);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78),
            bVar1) {
        pFVar4 = (FishingZombieInfo *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
        FishingZombieInfo::FishingZombieInfo(aFStack_70,pFVar4);
        this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aFStack_70);
        if (this_00 != (ResourceInfo *)0x0) {
          ZombieType::AddInGameResourceRequirements((ZombieType *)this_00,param_1);
        }
        std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aFStack_70);
        std::move_iterator<SexyURL::KeyedValue*>::operator++
                  ((move_iterator<SexyURL::KeyedValue*> *)&local_80);
      }
      FishingZombieGroup::~FishingZombieGroup(aFStack_50);
      __gnu_cxx::
      __normal_iterator<PlantFamilyDisplayValue_const*,std::vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>>>
      ::operator++((__normal_iterator<PlantFamilyDisplayValue_const*,std::vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>>>
                    *)&local_90);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_90,(__normal_iterator *)&local_88);
    } while (bVar1);
  }
  std::string::string((string *)aFStack_50,"skycity_cannon");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             (string *)aFStack_50);
  std::string::~string((string *)aFStack_50);
  nop();
  std::string::string((string *)aFStack_50,"UI_Fishing");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             (string *)aFStack_50);
  std::string::~string((string *)aFStack_50);
  nop();
  std::string::string((string *)aFStack_50,"PlantLaserBeanAudio");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             (string *)aFStack_50);
  std::string::~string((string *)aFStack_50);
  nop();
  std::string::string((string *)aFStack_50,"PlantCabbagepultAudio");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             (string *)aFStack_50);
  std::string::~string((string *)aFStack_50);
  nop();
  std::string::string((string *)aFStack_50,"PlantCherryBombAudio");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             (string *)aFStack_50);
  std::string::~string((string *)aFStack_50);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::AddZombieInfo(FishingModule::ZombieInfo const&) */

void __thiscall FishingModule::AddZombieInfo(FishingModule *this,ZombieInfo *param_1)

{
  char cVar1;
  bool bVar2;
  ResourceInfo *pRVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_1);
  if (cVar1 != '\0') {
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)param_1);
    local_18 = GetZombieInfo(this,(Zombie *)pRVar3);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xa0));
    bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (bVar2) {
      if (local_8 == ___stack_chk_guard) {
        std::vector<FishingModule::ZombieInfo,std::allocator<FishingModule::ZombieInfo>>::push_back
                  ((vector<FishingModule::ZombieInfo,std::allocator<FishingModule::ZombieInfo>> *)
                   (this + 0xa0),param_1);
        return;
      }
      goto LAB_047b395c;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_047b395c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::RemoveAllZombie() */

void __thiscall FishingModule::RemoveAllZombie(FishingModule *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtMixedPtrBase *this_01;
  RtWeakPtr *pRVar3;
  RtWeakPtrBase *pRVar4;
  long *plVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xa0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  while( true ) {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar1) break;
    this_01 = (RtMixedPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_01);
    if (cVar2 != '\0') {
      pRVar3 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                 avStack_20,pRVar3);
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_30);
  }
  std::vector<FishingModule::ZombieInfo,std::allocator<FishingModule::ZombieInfo>>::clear
            ((vector<FishingModule::ZombieInfo,std::allocator<FishingModule::ZombieInfo>> *)this_00)
  ;
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    pRVar4 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,pRVar4);
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    (**(code **)(*plVar5 + 0x48))();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FishingModule::onCheckWin() */

bool __thiscall FishingModule::onCheckWin(FishingModule *this)

{
  int iVar1;
  int iVar2;
  long extraout_x0;
  
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  nop();
  iVar1 = FUN_047abf84(*(undefined4 *)(extraout_x0 + 0x1a8));
  iVar2 = FUN_047abf88(*(undefined4 *)(extraout_x0 + 0x1ac));
  if (iVar2 <= iVar1) {
    RemoveAllZombie(this);
    *(undefined4 *)(this + 0x4c) = 1;
  }
  return iVar2 <= iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::onGameplayEnded() */

void __thiscall FishingModule::onGameplayEnded(FishingModule *this)

{
  bool bVar1;
  RtWeakPtrBase *pRVar2;
  UIWidget *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  *(undefined4 *)(this + 0x4c) = 1;
  local_8 = ___stack_chk_guard;
  RemoveAllZombie(this);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x30));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar2 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar2);
    this_00 = (UIWidget *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    UIWidget::SetVisible(this_00,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::onZombieDied(Zombie*, DamageInfo const*) */

void FishingModule::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  Insets *pIVar6;
  ScoreEffect *this;
  SexyVector3 *pSVar7;
  ToxicWaterPerfumeBottleProjectile *this_00;
  int *piVar8;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar9;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  float fVar10;
  int local_54;
  int local_50 [2];
  undefined8 local_48;
  FastCurve aFStack_40 [8];
  int local_38;
  int local_34;
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = GetZombieInfo((FishingModule *)param_1,(Zombie *)param_2);
  local_18[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(param_1 + 0xa0));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)local_18);
  if (bVar1) {
    lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    if (0 < *(int *)(lVar5 + 8)) {
      pIVar6 = (Insets *)(**(code **)(*(long *)param_2 + 0x178))(param_2);
      Sexy::Insets::Insets((Insets *)&local_38,pIVar6);
      Sexy::FastCurve::SetOutRange(aFStack_40,(float)local_38,(float)local_34);
      fVar10 = (float)FUN_047acc74();
      Sexy::SexyVector2::operator*=((SexyVector2 *)aFStack_40,fVar10);
      this = GameObject::Create<ScoreEffect>();
      lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      Sexy::StrFormat("+%d",(string *)local_28,(ulong)*(uint *)(lVar5 + 8));
      std::string::string((string *)local_18,"IMAGE_UI_FISHING_NUM_");
      ScoreEffect::InitialiseEffect
                (this,(string *)local_28,(string *)local_18,(SexyVector2 *)aFStack_40);
      std::string::~string((string *)local_18);
      nop();
      std::string::~string((string *)local_28);
      FUN_047ac7ec(this + 0xc4);
      pSVar7 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)param_2);
      lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      Board::FanOutSun(*(Board **)(gLawnApp + 0x9f0),pSVar7,*(int *)(lVar5 + 8),false,true,true,
                       false,false);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x68));
      nop();
      iVar2 = FUN_047abf88(*(undefined4 *)(this_00 + 0x1ac));
      local_54 = iVar2;
      iVar3 = FUN_047abf84(*(undefined4 *)(this_00 + 0x1a8));
      lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      iVar3 = iVar3 + *(int *)(lVar5 + 8);
      local_50[0] = iVar3;
      piVar8 = eastl::min_alt<int>(local_50,&local_54);
      ToxicWaterPerfumeBottleProjectile::SetType(this_00,*piVar8);
      uVar4 = 5;
      if (iVar3 < iVar2) {
        uVar4 = 2;
      }
      Sexy::Color::Color((Color *)local_28,uVar4);
      Sexy::Color::Color((Color *)local_18,1);
      ChallengeSunCounterUI::SetColor
                ((ChallengeSunCounterUI *)this_00,(string *)local_28,(string *)local_18);
      lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    }
    if (*(int *)(lVar5 + 0xc) == 2) {
      SetCrazy((FishingModule *)param_1,true,true);
    }
    local_18[0] = CONCAT44(local_18[0]._4_4_,3);
    pvVar9 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)std::
                map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
                ::operator[]((map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
                              *)(param_1 + 0x70),(FishingActiveCondition *)local_18);
    local_28[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(pvVar9);
    while( true ) {
      local_38 = 3;
      pvVar9 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)std::
                  map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
                  ::operator[]((map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
                                *)(param_1 + 0x70),(FishingActiveCondition *)&local_38);
      local_18[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(pvVar9);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)local_28,(__normal_iterator *)local_18);
      if (!bVar1) break;
      lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_28);
      *(int *)(lVar5 + 0x44) = *(int *)(lVar5 + 0x44) + 1;
      __gnu_cxx::
      __normal_iterator<PlantFamilyDisplayValue_const*,std::vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>>>
      ::operator++((__normal_iterator<PlantFamilyDisplayValue_const*,std::vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>>>
                    *)local_28);
    }
  }
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  PlayerInfo::SetDelaySave(this_02,1.0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::SetHighScore(bool) */

void __thiscall FishingModule::SetHighScore(FishingModule *this,bool param_1)

{
  char cVar1;
  bool bVar2;
  ZombieInfo *pZVar3;
  Zombie *this_00;
  ZombieAnimRig *this_01;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar4;
  long lVar5;
  long lVar6;
  Board *pBVar7;
  float fVar8;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x22] = (FishingModule)param_1;
  if (param_1) {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0xa0));
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xa0));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar2)
    {
      pZVar3 = (ZombieInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28)
      ;
      ZombieInfo::ZombieInfo((ZombieInfo *)&local_18,pZVar3);
      if ((local_c != 1) &&
         (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_18), cVar1 != '\0')) {
        this_00 = (Zombie *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        this_01 = (ZombieAnimRig *)Zombie::GetAnimRig(this_00);
        ZombieAnimRig::SetDesiredWalkVelocity(this_01,5.0);
      }
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_18);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_28);
    }
    pBVar7 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178((ZombieInfo *)&local_18,L"[FISHING_HIGHSCORE_TIP]",(__normal_iterator *)&local_20);
    Board::DisplayAdviceAgain(pBVar7,(ZombieInfo *)&local_18,0x11,0);
    FUN_05476c50((ZombieInfo *)&local_18);
    nop();
  }
  else {
    local_18 = CONCAT44(local_18._4_4_,1);
    pvVar4 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)std::
                map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
                ::operator[]((map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
                              *)(this + 0x70),(FishingActiveCondition *)&local_18);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(pvVar4);
    while( true ) {
      local_28 = CONCAT44(local_28._4_4_,1);
      pvVar4 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)std::
                  map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
                  ::operator[]((map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
                                *)(this + 0x70),(FishingActiveCondition *)&local_28);
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(pvVar4);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
      if (!bVar2) break;
      lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      fVar8 = (float)PVZ_T();
      lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      *(float *)(lVar5 + 0x40) = fVar8 + *(float *)(lVar6 + 0xc);
      __gnu_cxx::
      __normal_iterator<PlantFamilyDisplayValue_const*,std::vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>>>
      ::operator++((__normal_iterator<PlantFamilyDisplayValue_const*,std::vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>>>
                    *)&local_20);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::onZombieDestroyed(Zombie*) */

void __thiscall FishingModule::onZombieDestroyed(FishingModule *this,Zombie *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = GetZombieInfo(this,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xa0));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if ((bVar1) &&
     (lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18),
     *(int *)(lVar2 + 0xc) == 1)) {
    SetHighScore(this,false);
  }
  if (local_8 == ___stack_chk_guard) {
    RemoveZombieInfo(this,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::SpawnZombieGroup(Sexy::Point, FishingZombieGroup const*, FishingPath const*) */

void __thiscall
FishingModule::SpawnZombieGroup
          (FishingModule *this,TPoint<int> *param_2,FishingZombieGroup *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  ulong uVar6;
  RtWeakPtrBase *pRVar7;
  Zombie *this_00;
  long lVar8;
  ZombieAnimRig *this_01;
  undefined4 *puVar9;
  int *piVar10;
  long *plVar11;
  int iVar12;
  code *pcVar13;
  float fVar14;
  float fVar15;
  Zombie *pZVar17;
  ulong uVar16;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38 [2];
  int local_30 [2];
  undefined4 local_28;
  undefined4 local_24;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((param_3 == (FishingZombieGroup *)0x0) || (param_4 == 0)) ||
      (cVar1 = IsInHighScore(this), cVar1 != '\0')) ||
     ((cVar1 = IsInCrazy(this), cVar1 != '\0' &&
      (cVar1 = FishingZombieGroup::HasSpecialZombie(param_3,1), cVar1 != '\0')))) {
    uVar4 = 0;
  }
  else {
    uVar16 = 0;
    pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    iVar12 = -1;
    if (0 < *(int *)param_2) {
      iVar12 = 1;
    }
    while( true ) {
      uVar4 = *(undefined8 *)(param_3 + 0x10);
      uVar6 = FUN_047ac248(uVar4,*(undefined8 *)(param_3 + 0x18));
      if (uVar6 <= uVar16) break;
      plVar11 = *(long **)(gLawnApp + 0x9f0);
      pcVar13 = *(code **)(*plVar11 + 0x318);
      pRVar7 = (RtWeakPtrBase *)FUN_047ac270(uVar4,uVar16);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_30,pRVar7);
      this_00 = (Zombie *)(*pcVar13)(plVar11,(RtWeakPtr<Sexy::SoundResource> *)local_30,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
      lVar8 = FUN_047ac270(*(undefined8 *)(param_3 + 0x10),uVar16);
      Zombie::SetZombieScale(this_00,*(float *)(lVar8 + 0x10));
      this_01 = (ZombieAnimRig *)Zombie::GetAnimRig(this_00);
      lVar8 = FUN_047ac270(*(undefined8 *)(param_3 + 0x10),uVar16);
      ZombieAnimRig::SetDesiredWalkVelocity(this_01,*(float *)(lVar8 + 0x18));
      Board::PlaceZombieInRow(*(Board **)(gLawnApp + 0x9f0),this_00,2,true,true);
      (**(code **)(*(long *)this_00 + 0x260))(this_00);
      Zombie::SetIgnoreFindTarget(this_00,true);
      pRVar7 = (RtWeakPtrBase *)FUN_047ac270(*(undefined8 *)(param_3 + 0x10),uVar16);
      if (*(int *)(pRVar7 + 0x1c) == 1) {
        Zombie::SetEliminateColor(this_00,0);
        pZVar17._0_4_ = (Zombie *)PVZ_EOT();
LAB_047b48fc:
        Zombie::ApplyCondition(pZVar17._0_4_,0,this_00,0x3a,1);
        pRVar7 = (RtWeakPtrBase *)FUN_047ac270(*(undefined8 *)(param_3 + 0x10),uVar16);
      }
      else if (*(int *)(pRVar7 + 0x1c) == 2) {
        Zombie::SetEliminateColor(this_00,2);
        pZVar17._0_4_ = (Zombie *)PVZ_EOT();
        goto LAB_047b48fc;
      }
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_30,pRVar7);
      iVar3 = FishingProperties::GetHitpoints
                        ((FishingProperties *)pRVar5,(RtWeakPtr<Sexy::SoundResource> *)local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
      if (0 < iVar3) {
        FUN_047abf6c((float)iVar3,this_00 + 0x284);
        Zombie::SetHitpoints(this_00,(float)iVar3);
      }
      lVar8 = FUN_047ac270(*(undefined8 *)(param_3 + 0x10),uVar16);
      fVar14 = (float)FUN_047acc9c(*(undefined4 *)(lVar8 + 8));
      fVar15 = (float)FUN_047acc9c(*(undefined4 *)(lVar8 + 0xc));
      Sexy::Point::Point((Point *)local_38,(int)fVar14,(int)fVar15);
      Sexy::TPoint<int>::operator+(param_2,(TPoint *)local_38);
      Sexy::Point::Point((Point *)&local_60,(TPoint *)local_30);
      pcVar13 = *(code **)(*(long *)this_00 + 0x78);
      EATextSquish::Vec3::Vec3((Vec3 *)local_30,(float)local_60,(float)local_5c,0.0);
      (*pcVar13)(this_00,(RtWeakPtr<Sexy::SoundResource> *)local_30);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20);
      Sexy::Point::Point((Point *)&local_58,0,0);
      local_50 = FUN_047adb64(*(undefined8 *)(param_4 + 8));
      local_48 = FUN_047adbb4(*(undefined8 *)(param_4 + 0x10));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48),
            bVar2) {
        puVar9 = (undefined4 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
        fVar14 = (float)FUN_047acc9c(*puVar9);
        fVar15 = (float)FUN_047acc9c(puVar9[1]);
        Sexy::Point::Point((Point *)local_38,iVar12 * (int)fVar14,iVar12 * (int)fVar15);
        Sexy::TPoint<int>::operator+((TPoint<int> *)&local_60,(TPoint *)local_38);
        Sexy::Point::Point((Point *)&local_40,(TPoint *)local_30);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20,(Point *)&local_40)
        ;
        local_58 = local_40;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
      }
      if (iVar12 == -1) {
        local_38[0] = (int)local_58 + 5;
        local_30[0] = DAT_06b25f28 + DAT_06b25f30 + 0x14;
        piVar10 = eastl::max_alt<int>(local_38,local_30);
        local_58 = CONCAT44(local_58._4_4_,*piVar10);
      }
      else {
        local_38[0] = (int)local_58 + -5;
        local_30[0] = DAT_06b25f28 + -0x14;
        piVar10 = eastl::min_alt<int>(local_38,local_30);
        local_58 = CONCAT44(local_58._4_4_,*piVar10);
      }
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20,(Point *)&local_58);
      Zombie::PutZombieWillPath(this_00,(vector *)avStack_20,false);
      if (*(int *)(this + 0x4c) == 0) {
        ZombieRecord::ZombieRecord((ZombieRecord *)local_30);
        lVar8 = FUN_047ac270(*(undefined8 *)(param_3 + 0x10),uVar16);
        local_28 = *(undefined4 *)(lVar8 + 0x14);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)local_30,(RtWeakPtrBase *)local_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
        lVar8 = FUN_047ac270(*(undefined8 *)(param_3 + 0x10),uVar16);
        local_24 = *(undefined4 *)(lVar8 + 0x1c);
        AddZombieInfo(this,(ZombieInfo *)local_30);
        std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)local_30);
      }
      uVar16 = uVar16 + 1;
    }
    cVar1 = FishingZombieGroup::HasSpecialZombie(param_3,1);
    if (cVar1 != '\0') {
      SetHighScore(this,true);
    }
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20);
    uVar4 = 1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::onLoadComplete() */

void __thiscall FishingModule::onLoadComplete(FishingModule *this)

{
  int iVar1;
  undefined4 uVar2;
  Effect_PopAnim *pEVar3;
  ResourceInfo *pRVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  long lVar6;
  RtObject *pRVar7;
  SunBank *this_00;
  ChallengeSunCounterUI *this_01;
  SkyCannonTypeUI *this_02;
  int iVar8;
  int local_50 [2];
  float local_48;
  undefined4 local_44;
  Vec3 aVStack_40 [16];
  string asStack_30 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [16];
  char local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06b26090);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x28),(RtWeakPtr *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::Point::Point((Point *)local_50,0,0);
  pEVar3 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_30,"POPANIM_CANNON_ANIM_SKYCITY_1");
  GetPAMByName(asStack_30);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_30);
  nop();
  Effect_PopAnim::SetCentered(pEVar3,true);
  EATextSquish::Vec3::Vec3(aVStack_40,(float)(300 - local_50[0]),618.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar3,(SexyVector3 *)aVStack_40,-1);
  FUN_047abf48(pEVar3 + 0x1c,99999);
  std::string::string((string *)aRStack_20,"idle");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar3,aRStack_20,0);
  std::string::~string((string *)aRStack_20);
  nop();
  (**(code **)(*(long *)pEVar3 + 0x80))(0x3f333333,pEVar3);
  StandaloneEffect::SetManuallyDrawn((StandaloneEffect *)pEVar3,true);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xb8),(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  pEVar3 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_30,"POPANIM_CANNON_ANIM_SKYCITY_CRAZY");
  GetPAMByName(asStack_30);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_30);
  nop();
  Effect_PopAnim::SetCentered(pEVar3,false);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_20,0.0,0.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar3,(SexyVector3 *)aRStack_20,-1);
  FUN_047abf48(pEVar3 + 0x1c,99999);
  StandaloneEffect::SetManuallyDrawn((StandaloneEffect *)pEVar3,true);
  StandaloneEffect::SetVisibility((StandaloneEffect *)pEVar3,false);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 200),(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  pEVar3 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_30,"POPANIM_CANNON_ANIM_SKYCITY_CRAZY_CANNON");
  GetPAMByName(asStack_30);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_30);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_20,(float)(0x23 - local_50[0]),435.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar3,(SexyVector3 *)aRStack_20,-1);
  FUN_047abf48(pEVar3 + 0x1c,0x186a3);
  StandaloneEffect::SetManuallyDrawn((StandaloneEffect *)pEVar3,false);
  StandaloneEffect::SetVisibility((StandaloneEffect *)pEVar3,false);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xd0),(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  std::string::string(asStack_30,"UISunBank");
  lVar6 = UIWidget::GetWidgetBySheetName(asStack_30);
  if (lVar6 == 0) {
    std::string::~string(asStack_30);
    nop();
LAB_047b5260:
    Sexy::RtName::RtName((RtName *)aRStack_20,L"UISunBank");
    pRVar7 = (RtObject *)UIWidget::CreateWidget(aRStack_20,1);
    this_00 = Sexy::RtObject::Cast<SunBank>(pRVar7);
    Sexy::RtName::~RtName((RtName *)aRStack_20);
  }
  else {
    std::string::string((string *)aRStack_20,"UISunBank");
    pRVar7 = (RtObject *)UIWidget::GetWidgetBySheetName((string *)aRStack_20);
    this_00 = Sexy::RtObject::Cast<SunBank>(pRVar7);
    std::string::~string((string *)aRStack_20);
    nop();
    std::string::~string(asStack_30);
    nop();
    if (this_00 == (SunBank *)0x0) goto LAB_047b5260;
  }
  UIWidget::SetVisible((UIWidget *)this_00,true);
  Board::SetSunMoney(*(Board **)(gLawnApp + 0x9f0),*(int *)(pRVar5 + 0x40));
  std::string::string(asStack_30,"UIChallengeSunCounter");
  lVar6 = UIWidget::GetWidgetBySheetName(asStack_30);
  if (lVar6 == 0) {
    std::string::~string(asStack_30);
    nop();
  }
  else {
    std::string::string((string *)aRStack_20,"UIChallengeSunCounter");
    pRVar7 = (RtObject *)UIWidget::GetWidgetBySheetName((string *)aRStack_20);
    this_01 = Sexy::RtObject::Cast<ChallengeSunCounterUI>(pRVar7);
    std::string::~string((string *)aRStack_20);
    nop();
    std::string::~string(asStack_30);
    nop();
    if (this_01 != (ChallengeSunCounterUI *)0x0) goto LAB_047b5000;
  }
  Sexy::RtName::RtName((RtName *)aRStack_20,L"UIChallengeSunCounter");
  pRVar7 = (RtObject *)UIWidget::CreateWidget(aRStack_20,1);
  this_01 = Sexy::RtObject::Cast<ChallengeSunCounterUI>(pRVar7);
  Sexy::RtName::~RtName((RtName *)aRStack_20);
LAB_047b5000:
  iVar8 = 0;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x68),(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  ToxicWaterPerfumeBottleProjectile::SetType((ToxicWaterPerfumeBottleProjectile *)this_01,0);
  GridItemWaterMist::SetType((GridItemWaterMist *)this_01,*(int *)(pRVar5 + 0x44));
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b26018);
  Effect_Protrusion::SetInstigator((Effect_Protrusion *)this_01,aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::Point::Point((Point *)aRStack_20,-0xf,-5);
  ChallengeUI::SetIconOffset((ChallengeUI *)this_01,(Point *)aRStack_20);
  iVar1 = FUN_047abe80(*(undefined4 *)(this_01 + 0x38));
  FUN_047abe84((ToxicWaterPerfumeBottleProjectile *)(this_01 + 0x38),iVar1 + 0x28);
  Sexy::Color::Color((Color *)asStack_30,2);
  Sexy::Color::Color((Color *)aRStack_20,1);
  ChallengeSunCounterUI::SetColor(this_01,asStack_30,aRStack_20);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_48)
  ;
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b25ff0);
  iVar1 = *(int *)(lVar6 + 0x38);
  local_44 = 0;
  local_48 = 150.0;
  do {
    iVar8 = iVar8 + 1;
    Sexy::RtName::RtName((RtName *)aRStack_20,L"UISkyCannonType");
    UIWidget::CreateWidget(aRStack_20,1);
    nop();
    Sexy::RtName::~RtName((RtName *)aRStack_20);
    SkyCannonTypeUI::SetTypeID(this_02,iVar8);
    UIWidget::SetPositionOffset(local_48,local_44,this_02);
    uVar2 = GetCannonEnergy((int)this);
    FUN_047abf78(this_02 + 0x170,uVar2);
    FUN_047ac7fc(this_02 + 0x164);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,(RtWeakPtrBase *)asStack_30);
    std::vector<Sexy::RtWeakPtr<SkyCannonTypeUI>,std::allocator<Sexy::RtWeakPtr<SkyCannonTypeUI>>>::
    push_back((vector<Sexy::RtWeakPtr<SkyCannonTypeUI>,std::allocator<Sexy::RtWeakPtr<SkyCannonTypeUI>>>
               *)(this + 0x30),(RtWeakPtr *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
    FishingProperties::GetCannonData((int)pRVar5);
    if (local_10 == '\0') {
      UIWidget::SetVisible((UIWidget *)this_02,false);
    }
    else {
      local_48 = local_48 + (float)iVar1;
      UIWidget::SetVisible((UIWidget *)this_02,true);
    }
  } while (iVar8 != 3);
  SetCannonLevel(this,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::GetRandomPath(std::vector<std::string, std::allocator<std::string > >*) */

void __thiscall FishingModule::GetRandomPath(FishingModule *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  ulong uVar5;
  string *psVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 uVar9;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  if (param_1 != (vector *)0x0) {
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)param_1);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1)
    {
      uVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      FUN_05475d88((string *)&local_60,uVar9);
      std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
                ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)amStack_38,
                 (string *)&local_60);
      std::string::~string((string *)&local_60);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
    }
  }
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  local_64 = 0;
  while( true ) {
    uVar9 = *(undefined8 *)(pRVar4 + 0x88);
    uVar8 = (ulong)local_64;
    uVar5 = FUN_047ac278(uVar9,*(undefined8 *)(pRVar4 + 0x90));
    if (uVar5 <= uVar8) break;
    psVar6 = (string *)FUN_047ac2a0(uVar9,uVar8);
    local_60 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::find
                         ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                          amStack_38,psVar6);
    local_58 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)amStack_38);
    cVar2 = std::__exception_ptr::operator==((exception_ptr *)&local_60,(exception_ptr *)&local_58);
    if (cVar2 != '\0') {
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)&local_50,&local_64);
    }
    local_64 = local_64 + 1;
  }
  cVar2 = std::vector<int,std::allocator<int>>::empty((vector<int,std::allocator<int>> *)&local_50);
  if (cVar2 == '\0') {
    iVar3 = FUN_047abf90(local_50,local_48);
    iVar3 = Sexy::Rand(iVar3);
    piVar7 = (int *)FUN_047ac2a8(local_50,(long)iVar3);
    uVar9 = FUN_047ac2a0(*(undefined8 *)(pRVar4 + 0x88),(long)*piVar7);
  }
  else {
    uVar9 = 0;
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_50);
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::registerForEvents() */

void __thiscall FishingModule::registerForEvents(FishingModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  Board *pBVar3;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  CBMemberTranslatorX aCStack_f8 [24];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate1<RenderQueue*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAddToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::Delegate1<FishingModule,void(FishingModule::*)(RenderQueue*)>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCheckWin);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<FishingModule,bool(FishingModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterWinCondition(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<FishingModule,void(FishingModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelStarted);
  Sexy::Delegate0::Delegate0<FishingModule,void(FishingModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnIntroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<FishingModule,void(FishingModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<FishingModule,void(FishingModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCanPreventSave);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<FishingModule,bool(FishingModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterCanPreventSave(pLVar2,aDStack_38);
  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onHandleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<FishingModule,bool(FishingModule::*)(Sexy::Touch_const&)>
            (aDStack_68,(CBMemberTranslatorX *)&local_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_b0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCancelTouch);
  Sexy::Delegate0::Delegate0<FishingModule,void(FishingModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  Board::RegisterTouchGameplayObject
            (pBVar3,aDStack_68,4,
             (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_b0,aDStack_38)
  ;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSkyCannonTypeSelected);
  local_120 = local_e0;
  uStack_118 = uStack_d8;
  local_110 = local_d0;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<FishingModule,void(FishingModule::*)(int)>>
            ((MessageRouter *)puVar1,Message::SkyCannonTypeSelected,&local_120);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieEndWillPath);
  local_130 = local_b8;
  local_140 = local_c8;
  uStack_138 = uStack_c0;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<FishingModule,void(FishingModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieEndWillPath,&local_140);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDestroyed);
  local_140 = local_b0;
  uStack_138 = uStack_a8;
  local_130 = local_a0;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<FishingModule,void(FishingModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_140);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_150 = local_88;
  local_160 = local_98;
  uStack_158 = uStack_90;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<FishingModule,void(FishingModule::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_160);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCheckBuySunManually);
  local_180 = local_80;
  uStack_178 = uStack_78;
  local_170 = local_70;
  MessageRouter::
  Subscribe<bool*,Sexy::CBMemberTranslatorX<FishingModule,void(FishingModule::*)(bool*)>>
            ((MessageRouter *)puVar1,Message::CheckBuySunManually,&local_180);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReviveSucceed);
  Sexy::Delegate0::Delegate0<FishingModule,void(FishingModule::*)()>
            ((Delegate0 *)aDStack_38,aCStack_f8);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ReviveSucceed,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReviveClose);
  Sexy::Delegate0::Delegate0<FishingModule,void(FishingModule::*)()>
            ((Delegate0 *)aDStack_38,aCStack_f8);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ReviveClose,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<FishingModule,void(FishingModule::*)()>
            ((Delegate0 *)aDStack_38,aCStack_f8);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayEnded,(Delegate0 *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::RefreshZGroupTypes() */

void __thiscall FishingModule::RefreshZGroupTypes(FishingModule *this)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  vector<FishingZombieGroup,std::allocator<FishingZombieGroup>> *this_00;
  FishingZombieGroup *pFVar3;
  undefined8 local_60;
  undefined8 local_58;
  FishingZombieGroup aFStack_50 [8];
  int local_48;
  float local_44;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (pRVar2 != (ResilienceTutorialIntroProperties *)0x0) {
    std::
    map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
    ::clear((map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
             *)(this + 0x70));
    local_60 = FUN_047ad4cc(*(undefined8 *)(pRVar2 + 0x70));
    local_58 = FUN_047ad51c(*(undefined8 *)(pRVar2 + 0x78));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar1)
    {
      pFVar3 = (FishingZombieGroup *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
      FishingZombieGroup::FishingZombieGroup(aFStack_50,pFVar3);
      if (local_48 == 1) {
        local_10 = (float)PVZ_T();
        local_10 = local_10 + local_44;
      }
      this_00 = (vector<FishingZombieGroup,std::allocator<FishingZombieGroup>> *)
                std::
                map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
                ::operator[]((map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
                              *)(this + 0x70),(FishingActiveCondition *)&local_48);
      std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>::push_back
                (this_00,aFStack_50);
      FishingZombieGroup::~FishingZombieGroup(aFStack_50);
      __gnu_cxx::
      __normal_iterator<PlantFamilyDisplayValue_const*,std::vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>>>
      ::operator++((__normal_iterator<PlantFamilyDisplayValue_const*,std::vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>>>
                    *)&local_60);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::SpawnNextZombies() */

void __thiscall FishingModule::SpawnNextZombies(FishingModule *this)

{
  map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ResilienceTutorialIntroProperties *pRVar6;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar7;
  FishingZombieGroup *pFVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  uint local_50 [3];
  float local_44;
  vector avStack_28 [32];
  long local_8;
  
  this_00 = (map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
             *)(this + 0x70);
  *(int *)(this + 0x48) = *(int *)(this + 0x48) + 1;
  local_8 = ___stack_chk_guard;
  cVar1 = std::
          map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
          ::empty(this_00);
  if (cVar1 != '\0') {
    RefreshZGroupTypes(this);
  }
  uVar5 = FUN_047ac2b0(*(undefined8 *)(this + 0xa0),*(undefined8 *)(this + 0xa8));
  if (uVar5 < 200) {
    pRVar6 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    cVar1 = std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>::empty
                      ((vector<FishingZombieGroup,std::allocator<FishingZombieGroup>> *)
                       (pRVar6 + 0x70));
    if (cVar1 == '\0') {
      iVar3 = RandRangeInt(*(int *)(pRVar6 + 0x48),*(int *)(pRVar6 + 0x4c));
      local_50[0] = 2;
      pvVar7 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)std::
                  map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
                  ::operator[](this_00,(FishingActiveCondition *)local_50);
      local_68 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(pvVar7);
      local_60 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(pvVar7);
      iVar12 = 0;
      while( true ) {
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)&local_60)
        ;
        uVar10 = (uint)bVar2;
        if (bVar2 == 0) break;
        pFVar8 = (FishingZombieGroup *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
        FishingZombieGroup::FishingZombieGroup((FishingZombieGroup *)local_50,pFVar8);
        iVar11 = (int)local_44;
        if (0 < iVar11) {
          iVar4 = 0;
          if (iVar11 != 0) {
            iVar4 = *(int *)(this + 0x48) / iVar11;
          }
          if (*(int *)(this + 0x48) == iVar4 * iVar11) {
            iVar12 = iVar12 + 1;
            GetRandomStartPos();
            uVar9 = GetRandomPath(this,avStack_28);
            SpawnZombieGroup(this,(__normal_iterator *)&local_58,(FishingZombieGroup *)local_50,
                             uVar9);
            if (iVar3 <= iVar12) goto LAB_047b6b90;
          }
        }
        FishingZombieGroup::~FishingZombieGroup((FishingZombieGroup *)local_50);
        __gnu_cxx::
        __normal_iterator<PlantFamilyDisplayValue_const*,std::vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>>>
        ::operator++((__normal_iterator<PlantFamilyDisplayValue_const*,std::vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>>>
                      *)&local_68);
      }
      local_50[0] = (uint)bVar2;
      pvVar7 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)std::
                  map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
                  ::operator[](this_00,(FishingActiveCondition *)local_50);
      local_60 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(pvVar7);
      local_58 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(pvVar7);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58),
            bVar2) {
        pFVar8 = (FishingZombieGroup *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
        FishingZombieGroup::FishingZombieGroup((FishingZombieGroup *)local_50,pFVar8);
        uVar10 = (uint)((float)(int)uVar10 + local_44);
        FishingZombieGroup::~FishingZombieGroup((FishingZombieGroup *)local_50);
        __gnu_cxx::
        __normal_iterator<PlantFamilyDisplayValue_const*,std::vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>>>
        ::operator++((__normal_iterator<PlantFamilyDisplayValue_const*,std::vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>>>
                      *)&local_60);
      }
      iVar4 = Sexy::Rand(uVar10);
      local_50[0] = 0;
      pvVar7 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)std::
                  map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
                  ::operator[](this_00,(FishingActiveCondition *)local_50);
      local_68 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(pvVar7);
      local_60 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(pvVar7);
      iVar11 = 0;
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60),
            bVar2) {
        pFVar8 = (FishingZombieGroup *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
        FishingZombieGroup::FishingZombieGroup((FishingZombieGroup *)local_50,pFVar8);
        iVar11 = (int)((float)iVar11 + local_44);
        if (iVar4 < iVar11) {
          iVar12 = iVar12 + 1;
          GetRandomStartPos();
          uVar9 = GetRandomPath(this,avStack_28);
          SpawnZombieGroup(this,(__normal_iterator *)&local_58,(FishingZombieGroup *)local_50,uVar9)
          ;
          if (iVar3 <= iVar12) goto LAB_047b6b90;
        }
        FishingZombieGroup::~FishingZombieGroup((FishingZombieGroup *)local_50);
        __gnu_cxx::
        __normal_iterator<PlantFamilyDisplayValue_const*,std::vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>>>
        ::operator++((__normal_iterator<PlantFamilyDisplayValue_const*,std::vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>>>
                      *)&local_68);
      }
    }
  }
LAB_047b6a58:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_047b6b90:
  FishingZombieGroup::~FishingZombieGroup((FishingZombieGroup *)local_50);
  goto LAB_047b6a58;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModule::onUpdate() */

void __thiscall FishingModule::onUpdate(FishingModule *this)

{
  char cVar1;
  bool bVar2;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ResilienceTutorialIntroProperties *pRVar8;
  map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
  *this_00;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x21] == (FishingModule)0x0) {
    ArrangeUI(this);
  }
  if (*(int *)(this + 0x4c) == 0) {
    fVar11 = *(float *)(this + 0x54);
    fVar9 = (float)PVZ_T();
    if (fVar11 < fVar9) {
      uVar10 = PVZ_EOT();
      *(undefined4 *)(this + 0x54) = uVar10;
    }
    fVar11 = *(float *)(this + 100);
    fVar9 = (float)PVZ_T();
    if (fVar11 < fVar9) {
      uVar10 = PVZ_EOT();
      *(undefined4 *)(this + 100) = uVar10;
      cVar1 = std::
              map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
              ::empty((map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
                       *)(this + 0x70));
    }
    else {
      cVar1 = std::
              map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
              ::empty((map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
                       *)(this + 0x70));
    }
    if (cVar1 != '\0') {
      RefreshZGroupTypes(this);
    }
    this_00 = (map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
               *)(this + 0x70);
    local_10 = CONCAT44(local_10._4_4_,3);
    pvVar3 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)std::
                map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
                ::operator[](this_00,(FishingActiveCondition *)&local_10);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(pvVar3);
    while( true ) {
      local_1c = 3;
      pvVar3 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)std::
                  map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
                  ::operator[](this_00,(FishingActiveCondition *)&local_1c);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(pvVar3);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar2) break;
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if ((0 < (int)*(float *)(lVar4 + 0xc)) &&
         ((int)*(float *)(lVar4 + 0xc) <= *(int *)(lVar4 + 0x44))) {
        GetRandomStartPos();
        uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        uVar6 = GetRandomPath(this,(vector *)(lVar4 + 0x28));
        cVar1 = SpawnZombieGroup(this,(FishingActiveCondition *)&local_10,uVar5,uVar6);
        if (cVar1 != '\0') {
          lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          *(undefined4 *)(lVar4 + 0x44) = 0;
        }
      }
      __gnu_cxx::
      __normal_iterator<PlantFamilyDisplayValue_const*,std::vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>>>
      ::operator++((__normal_iterator<PlantFamilyDisplayValue_const*,std::vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>>>
                    *)&local_18);
    }
    local_10 = CONCAT44(local_10._4_4_,1);
    pvVar3 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)std::
                map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
                ::operator[](this_00,(FishingActiveCondition *)&local_10);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(pvVar3);
    while( true ) {
      local_1c = 1;
      pvVar3 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)std::
                  map<FishingActiveCondition,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>,std::less<FishingActiveCondition>,std::allocator<std::pair<FishingActiveCondition_const,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>>>
                  ::operator[](this_00,(FishingActiveCondition *)&local_1c);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(pvVar3);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar2) break;
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      fVar11 = *(float *)(lVar4 + 0x40);
      fVar9 = (float)PVZ_T();
      if (fVar11 < fVar9) {
        GetRandomStartPos();
        uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        uVar6 = GetRandomPath(this,(vector *)(lVar4 + 0x28));
        cVar1 = SpawnZombieGroup(this,(FishingActiveCondition *)&local_10,uVar5,uVar6);
        if (cVar1 != '\0') {
          lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          fVar9 = (float)PVZ_T();
          lVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          *(float *)(lVar4 + 0x40) = fVar9 + *(float *)(lVar7 + 0xc);
        }
      }
      __gnu_cxx::
      __normal_iterator<PlantFamilyDisplayValue_const*,std::vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>>>
      ::operator++((__normal_iterator<PlantFamilyDisplayValue_const*,std::vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>>>
                    *)&local_18);
    }
    fVar11 = *(float *)(this + 0x50);
    fVar9 = (float)PVZ_T();
    if ((fVar11 <= fVar9) && (cVar1 = IsInHighScore(this), cVar1 == '\0')) {
      pRVar8 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      fVar9 = (float)PVZ_T();
      *(float *)(this + 0x50) = fVar9 + *(float *)(pRVar8 + 0x50);
      SpawnNextZombies(this);
    }
    UpdateCannon(this);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

