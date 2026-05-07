// Class: SunBombChallengeModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunBombChallengeModule::initializeModule() */

void __thiscall SunBombChallengeModule::initializeModule(SunBombChallengeModule *this)

{
  long lVar1;
  byte bVar2;
  PlayerInfo *this_00;
  string *psVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = *(string **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"sun_bomb");
  Board::SetCollectableID_SunFromSky(psVar3);
  std::string::~string(asStack_10);
  nop();
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  std::string::string(asStack_10,"nar_sunbomb_tutorial");
  bVar2 = PlayerInfo::GetNarrationEventCompleted(this_00,asStack_10);
  this[0x18] = (SunBombChallengeModule)(bVar2 ^ 1);
  std::string::~string(asStack_10);
  nop();
  *(undefined4 *)(this + 0x20) = 0;
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1c) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunBombChallengeModule::onPlayerWon() */

void __thiscall SunBombChallengeModule::onPlayerWon(SunBombChallengeModule *this)

{
  PlayerInfo *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x18] != (SunBombChallengeModule)0x0) {
    this_00 = (PlayerInfo *)ProfileUtils::Profile();
    std::string::string(asStack_10,"nar_sunbomb_tutorial");
    PlayerInfo::CompleteNarrationEvent(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunBombChallengeModule::StaticClassInit() */

void SunBombChallengeModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"SunBombChallengeModule");
    (*pcVar2)(plVar1,asStack_10,FUN_0449d5a4,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SunBombChallengeModule::StaticGetClass() */

long * SunBombChallengeModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SunBombChallengeModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SunBombChallengeModule::SunBombChallengeModule() */

void __thiscall SunBombChallengeModule::SunBombChallengeModule(SunBombChallengeModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06851d80;
  return;
}


/* SunBombChallengeModule::StaticNew() */

SunBombChallengeModule * SunBombChallengeModule::StaticNew(void)

{
  SunBombChallengeModule *this;
  
  this = ::operator_new(0x28);
  SunBombChallengeModule(this);
  return this;
}


/* SunBombChallengeModule::~SunBombChallengeModule() */

void __thiscall SunBombChallengeModule::~SunBombChallengeModule(SunBombChallengeModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06851d80;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* SunBombChallengeModule::~SunBombChallengeModule() */

void __thiscall SunBombChallengeModule::~SunBombChallengeModule(SunBombChallengeModule *this)

{
  ~SunBombChallengeModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunBombChallengeModule::explosion(Sexy::SexyVector2) */

void SunBombChallengeModule::explosion(undefined4 param_1,undefined4 param_2,LevelModule *param_3)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  ulong uVar6;
  undefined8 uVar7;
  RtObject *this_00;
  DamageInfo *pDVar8;
  undefined8 local_108 [2];
  undefined4 local_f4;
  Point aPStack_f0 [8];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  DamageInfo aDStack_c8 [96];
  undefined4 local_68;
  undefined4 local_64;
  long local_8;
  
  local_108[0] = CONCAT44(param_2,param_1);
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>(param_3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_e0);
  local_f4 = 0;
  if (0.0 < *(float *)(pRVar2 + 0x48)) {
    operator|=(&local_f4,0x10);
  }
  EntityFinder::GetEntitiesTouchingCircle2D
            (*(undefined4 *)(pRVar2 + 0x40),
             (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_e0,local_f4,
             local_108,0xffffffff,0xffffffff);
  uVar6 = 0;
                    /* WARNING: Load size is inaccurate */
  pDVar8._0_4_ = *(DamageInfo **)(pRVar2 + 0x48);
  Sexy::Point::Point((Point *)&local_e8,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_68,1.0,0.0);
  DamageInfo::DamageInfo(pDVar8._0_4_,local_68,local_64,aDStack_c8,(Point *)&local_e8,0);
  uVar7 = local_e0;
  lVar3 = FUN_0449cfa0(local_e0,local_d8);
  if (lVar3 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_0449cfac(uVar7,uVar6);
      bVar1 = Sexy::RtObject::IsA<PlantGroup>((RtObject *)*puVar4);
      if (bVar1) {
        puVar4 = (undefined8 *)FUN_0449cfac(local_e0,uVar6);
        (**(code **)(*(long *)*puVar4 + 0x110))((long *)*puVar4,aDStack_c8);
      }
      uVar7 = local_e0;
      uVar6 = uVar6 + 1;
      uVar5 = FUN_0449cfa0(local_e0,local_d8);
    } while (uVar6 < uVar5);
  }
  local_f4 = 0;
  if (0.0 < *(float *)(pRVar2 + 0x4c)) {
    operator|=(&local_f4,2);
  }
  uVar6 = 0;
  EntityFinder::GetEntitiesTouchingCircle2D
            (*(undefined4 *)(pRVar2 + 0x44),
             (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_e0,local_f4,
             local_108,0xffffffff,0xffffffff);
                    /* WARNING: Load size is inaccurate */
  pDVar8._0_4_ = *(DamageInfo **)(pRVar2 + 0x4c);
  Sexy::Point::Point(aPStack_f0,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_e8,1.0,0.0);
  DamageInfo::DamageInfo(pDVar8._0_4_,local_e8,local_e4,(FastCurve *)&local_68,aPStack_f0,0);
  uVar7 = local_e0;
  lVar3 = FUN_0449cfa0(local_e0,local_d8);
  if (lVar3 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_0449cfac(uVar7,uVar6);
      bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar4);
      if (bVar1) {
        puVar4 = (undefined8 *)FUN_0449cfac(local_e0,uVar6);
        this_00 = (RtObject *)*puVar4;
        bVar1 = Sexy::RtObject::IsA<ZombieMech>(this_00);
        if (bVar1) {
          puVar4 = (undefined8 *)FUN_0449cfac(local_e0,uVar6);
          this = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)*puVar4);
          lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
          std::operator==((string *)(lVar3 + 8),"mech_cone");
        }
        (**(code **)(*(long *)this_00 + 0x110))(this_00,(FastCurve *)&local_68);
      }
      uVar7 = local_e0;
      uVar6 = uVar6 + 1;
      uVar5 = FUN_0449cfa0(local_e0,local_d8);
    } while (uVar6 < uVar5);
  }
  DamageInfo::~DamageInfo((DamageInfo *)&local_68);
  DamageInfo::~DamageInfo(aDStack_c8);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_e0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunBombChallengeModule::onCoinClicked(Collectable*) */

void __thiscall
SunBombChallengeModule::onCoinClicked(SunBombChallengeModule *this,Collectable *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  CollectableSunBomb *this_00;
  float *pfVar4;
  undefined8 uVar5;
  Board *pBVar6;
  undefined1 auStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (Collectable *)0x0) &&
     (this_00 = Sexy::RtObject::Cast<CollectableSunBomb>((RtObject *)param_1),
     this_00 != (CollectableSunBomb *)0x0)) {
    iVar3 = FUN_0449cf90(*(undefined4 *)(this_00 + 500));
    if (iVar3 == 1) {
      cVar2 = CollectableSunBomb::ShouldExplode(this_00);
      if (cVar2 != '\0') {
        pfVar4 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this_00);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,*pfVar4,pfVar4[1] - pfVar4[2]);
        CollectableSunBomb::ExplodeMe(this_00);
        std::string::string(asStack_10,"Play_Zomb_Future_SunBomb_Attack_Explo");
        RealObject::PlayPositionalSound((RealObject *)this_00,asStack_10,0.0);
        std::string::~string(asStack_10);
        nop();
        explosion(local_18,local_14,this);
        iVar3 = *(int *)(this + 0x20);
        iVar1 = *(int *)(this + 0x1c);
        *(int *)(this + 0x20) = iVar3 + 1;
        *(int *)(this + 0x1c) = iVar1 + 1;
        if (this[0x18] != (SunBombChallengeModule)0x0) {
          if (iVar1 + 1 == 1) {
            pBVar6 = *(Board **)(gLawnApp + 0x9f0);
            FUN_05478178(asStack_10,L"[ADVICE_SUNBOMBS_EXPLODE]",auStack_20);
            uVar5 = 6;
          }
          else {
            if (iVar3 + 1 < 3) goto LAB_0449ddd8;
            pBVar6 = *(Board **)(gLawnApp + 0x9f0);
            FUN_05478178(asStack_10,L"[ADVICE_SUNBOMBS_WAIT]",auStack_20);
            uVar5 = 7;
          }
          Board::DisplayAdviceAgain(pBVar6,asStack_10,uVar5,0);
          FUN_05476c50(asStack_10);
          nop();
        }
      }
    }
    else {
      *(undefined4 *)(this + 0x20) = 0;
    }
  }
LAB_0449ddd8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunBombChallengeModule::registerForEvents() */

void __thiscall SunBombChallengeModule::registerForEvents(SunBombChallengeModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCoinClicked);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<Collectable*,Sexy::CBMemberTranslatorX<SunBombChallengeModule,void(SunBombChallengeModule::*)(Collectable*)>>
            ((MessageRouter *)puVar1,Message::CollectableTryToCollect,&local_90);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlayerWon);
  Sexy::Delegate0::Delegate0<SunBombChallengeModule,void(SunBombChallengeModule::*)()>
            (aDStack_38,aCStack_68);
  LevelModuleManager::RegisterOnWinOutroStarted(pLVar2,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

