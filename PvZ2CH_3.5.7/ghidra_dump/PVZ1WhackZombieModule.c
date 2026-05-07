// Class: PVZ1WhackZombieModule


/* PVZ1WhackZombieModule::initializeModule() */

void __thiscall PVZ1WhackZombieModule::initializeModule(PVZ1WhackZombieModule *this)

{
  *(undefined8 *)(this + 0x20) = 0;
  this[0x18] = (PVZ1WhackZombieModule)0x1;
  this[0x19] = (PVZ1WhackZombieModule)0x1;
  return;
}


/* PVZ1WhackZombieModule::onCancelEvent() */

void PVZ1WhackZombieModule::onCancelEvent(void)

{
  return;
}


/* PVZ1WhackZombieModule::GameplayEnded() */

void __thiscall PVZ1WhackZombieModule::GameplayEnded(PVZ1WhackZombieModule *this)

{
  if (*(StandaloneEffect **)(this + 0x20) != (StandaloneEffect *)0x0) {
    StandaloneEffect::SetKeepAlive(*(StandaloneEffect **)(this + 0x20),false);
    (**(code **)(**(long **)(this + 0x20) + 0x48))(*(long **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this[0x18] = (PVZ1WhackZombieModule)0x0;
  this[0x19] = (PVZ1WhackZombieModule)0x0;
  return;
}


/* PVZ1WhackZombieModule::onAnimStopped(std::string const&) */

void PVZ1WhackZombieModule::onAnimStopped(string *param_1)

{
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(param_1 + 0x20),false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1WhackZombieModule::StaticClassInit() */

void PVZ1WhackZombieModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1WhackZombieModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03fcf780,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1WhackZombieModule::StaticGetClass() */

long * PVZ1WhackZombieModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1WhackZombieModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1WhackZombieModule::onUpdate() */

void __thiscall PVZ1WhackZombieModule::onUpdate(PVZ1WhackZombieModule *this)

{
  if (*(StandaloneEffect **)(this + 0x20) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x20));
    return;
  }
  return;
}


/* PVZ1WhackZombieModule::PVZ1WhackZombieModule() */

void __thiscall PVZ1WhackZombieModule::PVZ1WhackZombieModule(PVZ1WhackZombieModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  this[0x18] = (PVZ1WhackZombieModule)0x1;
  this[0x19] = (PVZ1WhackZombieModule)0x1;
  *(undefined ***)this = &PTR_GetModuleClass_067ace20;
  return;
}


/* PVZ1WhackZombieModule::StaticNew() */

PVZ1WhackZombieModule * PVZ1WhackZombieModule::StaticNew(void)

{
  PVZ1WhackZombieModule *this;
  
  this = ::operator_new(0x28);
  PVZ1WhackZombieModule(this);
  return this;
}


/* PVZ1WhackZombieModule::~PVZ1WhackZombieModule() */

void __thiscall PVZ1WhackZombieModule::~PVZ1WhackZombieModule(PVZ1WhackZombieModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_067ace20;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* PVZ1WhackZombieModule::~PVZ1WhackZombieModule() */

void __thiscall PVZ1WhackZombieModule::~PVZ1WhackZombieModule(PVZ1WhackZombieModule *this)

{
  ~PVZ1WhackZombieModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1WhackZombieModule::DoThrowSkiTools(int, int) */

void __thiscall
PVZ1WhackZombieModule::DoThrowSkiTools(PVZ1WhackZombieModule *this,int param_1,int param_2)

{
  PopAnimRig *pPVar1;
  string *psVar2;
  StandaloneEffect *this_00;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  RtMixedPtr aRStack_90 [8];
  RtId aRStack_88 [8];
  Vec3 aVStack_80 [16];
  Vec3 aVStack_70 [16];
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(StandaloneEffect **)(this + 0x20) != (StandaloneEffect *)0x0) {
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x20),true);
    EATextSquish::Vec3::Vec3(aVStack_80,0.0,0.0,0.0);
    fVar3 = (float)FUN_03fcdba0((float)param_1);
    fVar4 = (float)FUN_03fcdba0((float)param_2);
    uVar5 = 0;
    this_00 = *(StandaloneEffect **)(this + 0x20);
    EATextSquish::Vec3::Vec3(aVStack_70,fVar3,fVar4,0.0);
    local_60 = Sexy::SexyVector3::operator+((SexyVector3 *)aVStack_70,(SexyVector3 *)aVStack_80);
    local_5c = fVar4;
    local_58 = uVar5;
    StandaloneEffect::SetBoardSpaceOrigin(this_00,(SexyVector3 *)&local_60,-1);
    Effect_PopAnim::GetPopAnimRigPtr();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
    std::string::string((string *)&local_60,"01");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_90);
    std::string::string((string *)aVStack_70,"onAnimStopped");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_88,
               aVStack_70);
    PopAnimRig::PlayAndStop(pPVar1,(string *)&local_60,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)aVStack_70);
    nop();
    Sexy::RtId::~RtId(aRStack_88);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
    std::string::~string((string *)&local_60);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
    psVar2 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    std::string::string((string *)&local_60,"swing");
    AudioMgr::SendEventThrottled(psVar2,_FUN_03fd1044,(string *)&local_60);
    std::string::~string((string *)&local_60);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1WhackZombieModule::GameplayStarted() */

void __thiscall PVZ1WhackZombieModule::GameplayStarted(PVZ1WhackZombieModule *this)

{
  UIWidget *pUVar1;
  long extraout_x0;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  string asStack_58 [8];
  string asStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_50,"UIPlantfood");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
  std::string::~string(asStack_50);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  std::string::string(asStack_50,"UIPowerupHolder");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
  std::string::~string(asStack_50);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  this[0x18] = (PVZ1WhackZombieModule)0x1;
  this[0x19] = (PVZ1WhackZombieModule)0x1;
  LevelModule::GetPropsPtr((LevelModule *)this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
  WhackZombieWaveAction::WhackZombieWaveAction((WhackZombieWaveAction *)asStack_50);
  WhackZombieWaveAction::Spawngriditem
            ((WhackZombieWaveAction *)asStack_50,*(int *)(extraout_x0 + 0x58),false);
  WhackZombieWaveAction::~WhackZombieWaveAction((WhackZombieWaveAction *)asStack_50);
  std::string::string(asStack_58,"POPANIM_UI_WHACKZOMBIE_PVZ1_WHACKZOMBIE_HAMMER");
  nop();
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  *(Effect_PopAnim **)(this + 0x20) = this_00;
  GetPAMByName(asStack_58);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_50);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x20),true);
  FUN_03fcd938(*(long *)(this + 0x20) + 0x1c,0xc3501);
  StandaloneEffect::SetKeepAlive(*(StandaloneEffect **)(this + 0x20),true);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1WhackZombieModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
PVZ1WhackZombieModule::AddResourceRequirements(PVZ1WhackZombieModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UI_SteamMiniGame");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"ZombieTutorialGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_WHACKZOMBIE");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_WHACKZOMBIEAudio");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1WhackZombieModule::registerForEvents() */

void __thiscall PVZ1WhackZombieModule::registerForEvents(PVZ1WhackZombieModule *this)

{
  LevelModuleManager *pLVar1;
  Board *pBVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GameplayStarted);
  Sexy::Delegate0::Delegate0<PVZ1WhackZombieModule,void(PVZ1WhackZombieModule::*)()>
            (aDStack_38,aCStack_80);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GameplayEnded);
  Sexy::Delegate0::Delegate0<PVZ1WhackZombieModule,void(PVZ1WhackZombieModule::*)()>
            (aDStack_38,aCStack_80);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar1,aDStack_38);
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTouchEvent);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<PVZ1WhackZombieModule,bool(PVZ1WhackZombieModule::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCancelEvent);
  Sexy::Delegate0::Delegate0<PVZ1WhackZombieModule,void(PVZ1WhackZombieModule::*)()>
            (aDStack_38,aCStack_80);
  Board::RegisterTouchGameplayObject(pBVar2,aDStack_68,4,a_Stack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1WhackZombieModule::handleTouchDown(int, int) */

void __thiscall
PVZ1WhackZombieModule::handleTouchDown(PVZ1WhackZombieModule *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  PVZDB *pPVar7;
  RtDbTable *this_00;
  long extraout_x0;
  long extraout_x0_00;
  Zombie *this_01;
  Effect_PopAnim *this_02;
  ResourceInfo *pRVar8;
  ActivityConfig *this_03;
  long lVar9;
  string *psVar10;
  uint extraout_w1;
  uint extraout_w1_00;
  uint extraout_w1_01;
  uint extraout_w1_02;
  uint extraout_w1_03;
  uint uVar11;
  uint extraout_w1_04;
  SexyVector3 *pSVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_90;
  float local_8c;
  RtWeakPtr aRStack_88 [8];
  undefined8 local_80;
  float local_78;
  float local_74;
  Iterator aIStack_68 [32];
  PowerPropsSunProducer aPStack_48 [24];
  undefined4 local_30;
  RtId aRStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_68,uVar6,0x29);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_68);
    if (!bVar1) {
LAB_03fd2228:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_68);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pPVar7 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    this_00 = (RtDbTable *)PVZDB::GetTable(pPVar7,0x29);
    Sexy::RtDbTable::Iterator::operator*(aIStack_68);
    Sexy::RtDbTable::GetObjectForId(this_00,aRStack_28);
    nop();
    Sexy::RtId::~RtId(aRStack_28);
    uVar11 = extraout_w1;
    if (extraout_x0 != 0) {
      LevelModule::GetPropsPtr((LevelModule *)this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      nop();
      uVar11 = extraout_w1_00;
      if ((((this_01 != (Zombie *)0x0) &&
           (cVar2 = RealObject::IsOnTeam(), uVar11 = extraout_w1_01, cVar2 == '\0')) &&
          (cVar2 = FUN_03fcf050(*(undefined4 *)(this_01 + 0xcc)), uVar11 = extraout_w1_02,
          cVar2 == '\0')) &&
         (iVar4 = Zombie::GetInvisibleState(this_01), uVar11 = extraout_w1_03, iVar4 != 2)) {
        bVar3 = (**(code **)(*(long *)this_01 + 0x328))(this_01);
        uVar11 = (uint)bVar3;
        if (bVar3 == 0) {
          fVar13 = (float)FUN_03fcdba0((float)param_1);
          fVar14 = (float)FUN_03fcdba0((float)param_2);
          fVar15 = (float)Sexy::Rand(1.0);
          fVar18 = *(float *)(extraout_x0_00 + 0x40);
          fVar16 = (float)Sexy::Rand(1.0);
          fVar19 = *(float *)(extraout_x0_00 + 0x44);
          fVar17 = (float)Sexy::Rand(1.0);
          fVar20 = *(float *)(extraout_x0_00 + 0x48);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_90,0.0,-52.0);
          PowerPropsSunProducer::PowerPropsSunProducer(aPStack_48,0,50.0);
          DVec3::DVec3((DVec3 *)&local_78);
          WhackZombie_Basic::calcTouchRect();
          cVar2 = Sexy::TRect<int>::Contains((TRect<int> *)aRStack_28,(int)fVar13,(int)fVar14);
          if (cVar2 != '\0') {
            iVar4 = WhackZombie_Basic::WhackTakeDamage
                              ((WhackZombie_Basic *)this_01,(SexyVector3 *)&local_78);
            if (iVar4 == 2) {
              local_30 = *(undefined4 *)(extraout_x0_00 + 0x50);
LAB_03fd1f7c:
              std::string::string((string *)aRStack_28,
                                  "POPANIM_UI_WHACKZOMBIE_PVZ1_WHACKZOMBIE_HAMMER");
              GetPAMByName((string *)aRStack_28);
              std::string::~string((string *)aRStack_28);
              nop();
              this_02 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
              pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_88);
              Effect_PopAnim::CreatePopAnimRig(this_02,(PopAnim *)pRVar8,(RtClass *)0x0);
              Effect_PopAnim::SetCentered(this_02,true);
              EATextSquish::Vec3::Vec3((Vec3 *)aRStack_28,fVar13,fVar14,0.0);
              StandaloneEffect::SetBoardSpaceOrigin
                        ((StandaloneEffect *)this_02,(SexyVector3 *)aRStack_28,-1);
              FUN_03fcd938(this_02 + 0x1c,0xaae61);
              std::string::string((string *)aRStack_28,"02");
              Effect_PopAnim::PlaySingleAnimation(this_02,aRStack_28,0);
              std::string::~string((string *)aRStack_28);
              nop();
              if (0 < iVar4) {
                local_78 = local_90 + local_78;
                local_74 = local_8c + local_74;
                if (fVar17 < fVar20) {
                  Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,0.0,-52.0);
                  SunProducer::SunProducer
                            ((SunProducer *)local_80,local_80._4_4_,aRStack_28,this_01,aPStack_48);
                  SunProducer::Execute((SunProducer *)aRStack_28);
                }
                if (fVar16 < fVar19) {
                  this_03 = (ActivityConfig *)LawnApp::GetActivityConfig();
                  iVar5 = ActivityConfig::GetMaxCoinSpecialCollected(this_03);
                  iVar4 = UIBattleOrder::GetCurrentExp(*(UIBattleOrder **)(gLawnApp + 0x9f0));
                  if (iVar4 < iVar5) {
                    pSVar12 = *(SexyVector3 **)(gLawnApp + 0x9f0);
                    std::string::string((string *)aRStack_28,"coin_gold");
                    lVar9 = Board::AddCoin(pSVar12,(string *)&local_78);
                    std::string::~string((string *)aRStack_28);
                    nop();
                    if (lVar9 != 0) {
                      iVar5 = CollectableCure::GetCureValue();
                      iVar4 = iVar4 + iVar5;
                      UIGiftFoReturn::SetIntegral(*(UIGiftFoReturn **)(gLawnApp + 0x9f0),iVar4);
                    }
                    if (fVar15 < fVar18) {
                      pSVar12 = *(SexyVector3 **)(gLawnApp + 0x9f0);
                      std::string::string((string *)aRStack_28,"coin_silver");
                      lVar9 = Board::AddCoin(pSVar12,(string *)&local_78);
                      std::string::~string((string *)aRStack_28);
                      nop();
                      if (lVar9 != 0) {
                        iVar5 = CollectableCure::GetCureValue();
                        UIGiftFoReturn::SetIntegral
                                  (*(UIGiftFoReturn **)(gLawnApp + 0x9f0),iVar5 + iVar4);
                      }
                    }
                  }
                }
              }
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
            }
            else {
              if (iVar4 == 3) {
                local_30 = *(undefined4 *)(extraout_x0_00 + 0x54);
                goto LAB_03fd1f7c;
              }
              if (iVar4 == 1) {
                local_30 = *(undefined4 *)(extraout_x0_00 + 0x4c);
                goto LAB_03fd1f7c;
              }
              if (iVar4 != 0) goto LAB_03fd1f7c;
            }
            psVar10 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
            std::string::string((string *)aRStack_28,"bonk");
            AudioMgr::SendEventThrottled(psVar10,0.1,aRStack_28);
            std::string::~string((string *)aRStack_28);
            nop();
            PowerPropsSunProducer::~PowerPropsSunProducer(aPStack_48);
            goto LAB_03fd2228;
          }
          PowerPropsSunProducer::~PowerPropsSunProducer(aPStack_48);
          uVar11 = extraout_w1_04;
        }
      }
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_68,uVar11);
  } while( true );
}


/* PVZ1WhackZombieModule::onTouchEvent(Sexy::Touch const&) */

PVZ1WhackZombieModule __thiscall
PVZ1WhackZombieModule::onTouchEvent(PVZ1WhackZombieModule *this,Touch *param_1)

{
  int iVar1;
  PVZ1WhackZombieModule PVar2;
  int iVar3;
  int iVar4;
  
  if (((*(int *)(param_1 + 0x30) == 0) && (this[0x19] != (PVZ1WhackZombieModule)0x0)) &&
     (PVar2 = this[0x18], PVar2 != (PVZ1WhackZombieModule)0x0)) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar3 = FUN_03fcdb8c(200);
    if (iVar3 <= iVar1) {
      iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
      iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar3 = FUN_03fcdb8c(iVar3 * iVar4 + 200);
      if (iVar1 <= iVar3) {
        iVar1 = *(int *)(param_1 + 0x14);
        iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
        iVar4 = BoardConstants::NUMBER_OF_ROWS();
        iVar3 = FUN_03fcdb8c(iVar3 * iVar4 + 0xa0);
        if (iVar1 <= iVar3) {
          DoThrowSkiTools(this,*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14));
          handleTouchDown(this,*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14));
          return PVar2;
        }
      }
    }
  }
  return (PVZ1WhackZombieModule)0x0;
}

