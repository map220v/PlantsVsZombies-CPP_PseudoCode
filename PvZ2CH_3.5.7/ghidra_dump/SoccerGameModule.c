// Class: SoccerGameModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameModule::StaticClassInit() */

void SoccerGameModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"SoccerGameModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03938444,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SoccerGameModule::StaticGetClass() */

long * SoccerGameModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SoccerGameModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SoccerGameModule::SoccerGameModule() */

void __thiscall SoccerGameModule::SoccerGameModule(SoccerGameModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_066caf40;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  return;
}


/* SoccerGameModule::StaticNew() */

SoccerGameModule * SoccerGameModule::StaticNew(void)

{
  SoccerGameModule *this;
  
  this = ::operator_new(0x58);
  SoccerGameModule(this);
  return this;
}


/* SoccerGameModule::~SoccerGameModule() */

void __thiscall SoccerGameModule::~SoccerGameModule(SoccerGameModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066caf40;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* SoccerGameModule::~SoccerGameModule() */

void __thiscall SoccerGameModule::~SoccerGameModule(SoccerGameModule *this)

{
  ~SoccerGameModule(this);
  AK::FreeHook(this);
  return;
}


/* SoccerGameModule::GameplayEnded() */

void __thiscall SoccerGameModule::GameplayEnded(SoccerGameModule *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x48);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* SoccerGameModule::onDraw(Sexy::Graphics*) */

void __thiscall SoccerGameModule::onDraw(SoccerGameModule *this,Graphics *param_1)

{
  char cVar1;
  StandaloneEffect *this_00;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x48));
  if (cVar1 == '\0') {
    return;
  }
  this_00 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48))
  ;
  StandaloneEffect::Draw(this_00,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameModule::CheckPlantGoal() */

void __thiscall SoccerGameModule::CheckPlantGoal(SoccerGameModule *this)

{
  bool bVar1;
  RtObject *this_00;
  float *pfVar2;
  long lVar3;
  UIWorldCupScore *this_01;
  undefined1 uVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x30) != 0) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x18));
    if (bVar1) {
      this_00 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
      bVar1 = Sexy::RtObject::IsA<Plant>(this_00);
      if ((bVar1) &&
         (pfVar2 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                            **)(this + 0x30)), 800.0 < *pfVar2)) {
        std::string::string(asStack_10,"WorldCupScoreUI");
        lVar3 = UIWidget::GetWidgetBySheetName(asStack_10);
        std::string::~string(asStack_10);
        nop();
        uVar4 = 1;
        if (lVar3 != 0) {
          nop();
          if (this_01 == (UIWorldCupScore *)0x0) {
            *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
          }
          else {
            UIWorldCupScore::setOldPlantScore(this_01,*(uint *)(this + 0x24));
            *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
            UIWorldCupScore::checkAnimationState(this_01);
          }
        }
        goto LAB_03935068;
      }
    }
  }
  uVar4 = 0;
LAB_03935068:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* SoccerGameModule::initializeModule() */

void __thiscall SoccerGameModule::initializeModule(SoccerGameModule *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x20) = uVar1;
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  this[0x44] = (SoccerGameModule)0x0;
  this[0x45] = (SoccerGameModule)0x0;
  this[0x50] = (SoccerGameModule)0x0;
  *(undefined4 *)(this + 0x40) = uVar1;
  *(undefined4 *)(this + 0x2c) = uVar2;
  *(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x97d) = 0;
  return;
}


/* SoccerGameModule::checkWinCondition() */

undefined8 __thiscall SoccerGameModule::checkWinCondition(SoccerGameModule *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(this + 0x20);
  fVar1 = (float)PVZ_T();
  if (fVar2 < fVar1) {
    if (*(uint *)(this + 0x28) < *(uint *)(this + 0x24)) {
      FUN_039331a8(*(long *)(gLawnApp + 0x9f0) + 0xb40);
      return 1;
    }
    Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),6);
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameModule::onNotifyGameBegin() */

void __thiscall SoccerGameModule::onNotifyGameBegin(SoccerGameModule *this)

{
  long extraout_x0;
  long extraout_x0_00;
  float fVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)PVZ_T();
  LevelModule::GetPropsPtr((LevelModule *)this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  *(float *)(this + 0x20) = fVar1 + *(float *)(extraout_x0 + 0x40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar1 = (float)PVZ_T();
  LevelModule::GetPropsPtr((LevelModule *)this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  *(float *)(this + 0x2c) = fVar1 + *(float *)(extraout_x0_00 + 0x44);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameModule::onUpdate() */

void __thiscall SoccerGameModule::onUpdate(SoccerGameModule *this)

{
  char cVar1;
  StandaloneEffect *this_00;
  Board *pBVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x48));
  if (cVar1 != '\0') {
    this_00 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
    StandaloneEffect::Update(this_00);
  }
  fVar3 = (float)PVZ_EOT();
  if ((*(float *)(this + 0x40) < fVar3) &&
     (fVar4 = (float)PVZ_T(), *(float *)(this + 0x40) <= fVar4)) {
    *(float *)(this + 0x40) = fVar3;
    pBVar2 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(awStack_10,L"[ADVICE_SOCCER_NEAR_END]",auStack_18);
    Board::ClearAdvice(pBVar2,awStack_10);
    FUN_05476c50(awStack_10);
    nop();
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  fVar5 = *(float *)(this + 0x20);
  fVar4 = (float)PVZ_T();
  if (((fVar5 - fVar4 <= 30.0) && (fVar3 <= *(float *)(this + 0x40))) &&
     (this[0x44] == (SoccerGameModule)0x0)) {
    pBVar2 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(awStack_10,L"[ADVICE_SOCCER_NEAR_END]",auStack_18);
    Board::DisplayAdviceAgain(pBVar2,awStack_10,0x11,0);
    FUN_05476c50(awStack_10);
    nop();
    fVar3 = (float)PVZ_T();
    this[0x44] = (SoccerGameModule)0x1;
    *(float *)(this + 0x40) = fVar3 + 3.0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SoccerGameModule::IsCarrier(Plant*) */

bool __thiscall SoccerGameModule::IsCarrier(SoccerGameModule *this,Plant *param_1)

{
  ResourceInfo *pRVar1;
  
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x18));
  return param_1 == (Plant *)pRVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameModule::CreateSoccerCursor() */

void __thiscall SoccerGameModule::CreateSoccerCursor(SoccerGameModule *this)

{
  RtMixedPtr<Sexy::Image> *this_00;
  char cVar1;
  Effect_PopAnim *pEVar2;
  ResourceInfo *pRVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  long lVar4;
  long *plVar5;
  StandaloneEffect *this_02;
  float fVar6;
  string asStack_28 [16];
  RtWeakPtr aRStack_18 [12];
  int local_c;
  long local_8;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if ((cVar1 == '\0') &&
     (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar1 != '\0')) {
    if (*(long **)(this + 0x38) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x38) + 0x48))();
      *(undefined8 *)(this + 0x38) = 0;
    }
    pEVar2 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    *(Effect_PopAnim **)(this + 0x38) = pEVar2;
    std::string::string(asStack_28,"POPANIM_EFFECTS_SOCCER_CURSOR");
    GetPAMByName(asStack_28);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
    Effect_PopAnim::CreatePopAnimRig(pEVar2,(PopAnim *)pRVar3,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    std::string::~string(asStack_28);
    nop();
    pEVar2 = *(Effect_PopAnim **)(this + 0x38);
    std::string::string((string *)aRStack_18,"animation");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar2,aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x38),true);
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    lVar4 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(this_01);
    fVar6 = *(float *)(lVar4 + 8);
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar5 + 0xb0))(aRStack_18);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,0.0,0.0,fVar6 + 10.0 + (float)local_c);
    this_02 = *(StandaloneEffect **)(this + 0x38);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
    StandaloneEffect::SetAttached(this_02,(RealObject *)pRVar3,(SexyVector3 *)asStack_28,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameModule::CreateDefenceEffect(bool) */

void __thiscall SoccerGameModule::CreateDefenceEffect(SoccerGameModule *this,bool param_1)

{
  RtMixedPtrBase *this_00;
  RtWeakPtr *this_01;
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  StandaloneEffect *this_02;
  long *plVar5;
  RtObject *pRVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_03;
  float *pfVar7;
  StandaloneEffect *this_04;
  ResourceInfo *pRVar8;
  int local_20;
  int local_1c;
  string asStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x48);
  local_8 = ___stack_chk_guard;
  cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar2 != '\0') {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar5 + 0x48))();
  }
  this_01 = (RtWeakPtr *)(this + 0x18);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  if (param_1) {
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (!bVar3) goto LAB_03935948;
    pRVar6 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    bVar3 = Sexy::RtObject::IsA<Zombie>(pRVar6);
    if (!bVar3) goto LAB_03935948;
    this_03 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    pfVar7 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_03);
    if (847.0 < *pfVar7) goto LAB_03935948;
    iVar4 = *(int *)(gLawnApp + 0x724);
    iVar1 = *(int *)(gLawnApp + 0x728);
    Board::GetBoardBaseOffset();
    Board::GetBoardBaseOffset();
    Sexy::Point::Point((Point *)&local_20,(int)((float)iVar4 * 0.5 - (float)local_10),
                       (int)((float)iVar1 * 0.5 - (float)local_c));
    Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_20);
    StandaloneEffect::CreateEffect<Effect_PopAnim>();
    nop();
    iVar4 = FUN_039337c0(0x87);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)local_20,(float)(local_1c + iVar4));
    StandaloneEffect::SetScreenSpaceOrigin(this_04,(SexyVector2 *)&local_10,0xdbba1);
    std::string::string(asStack_18,"POPANIM_EFFECTS_WORLDCUP_DEFENCE");
    GetPAMByName(asStack_18);
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_10);
    Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_04,(PopAnim *)pRVar8,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    std::string::~string(asStack_18);
    nop();
    Effect_PopAnim::SetCentered((Effect_PopAnim *)this_04,true);
    std::string::string((string *)&local_10,"animation");
    Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this_04,(FastCurve *)&local_10,0);
    std::string::~string((string *)&local_10);
    nop();
  }
  else {
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (!bVar3) goto LAB_03935948;
    pRVar6 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    bVar3 = Sexy::RtObject::IsA<Plant>(pRVar6);
    if (!bVar3) goto LAB_03935948;
    iVar4 = *(int *)(gLawnApp + 0x724);
    iVar1 = *(int *)(gLawnApp + 0x728);
    Board::GetBoardBaseOffset();
    Board::GetBoardBaseOffset();
    Sexy::Point::Point((Point *)&local_20,(int)((float)iVar4 * 0.5 - (float)local_10),
                       (int)((float)iVar1 * 0.5 - (float)local_c));
    Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_20);
    StandaloneEffect::CreateEffect<Effect_PopAnim>();
    nop();
    iVar4 = FUN_039337c0(0x87);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)local_20,(float)(local_1c + iVar4));
    StandaloneEffect::SetScreenSpaceOrigin(this_02,(SexyVector2 *)&local_10,0xdbba1);
    std::string::string(asStack_18,"POPANIM_EFFECTS_WORLDCUP_DEFENCE_PLANT");
    GetPAMByName(asStack_18);
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_10);
    Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_02,(PopAnim *)pRVar8,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    std::string::~string(asStack_18);
    nop();
    Effect_PopAnim::SetCentered((Effect_PopAnim *)this_02,true);
    std::string::string((string *)&local_10,"animation");
    Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this_02,(FastCurve *)&local_10,0);
    std::string::~string((string *)&local_10);
    nop();
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
LAB_03935948:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameModule::RemoveFootballCheckWin(FootballProjectile*) */

void __thiscall
SoccerGameModule::RemoveFootballCheckWin(SoccerGameModule *this,FootballProjectile *param_1)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  int local_18;
  int local_14;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (FootballProjectile *)0x0) &&
     (pfVar1 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_1), *pfVar1 < 800.0)) {
    local_18 = 0;
    local_14 = 0;
    fVar3 = (float)FUN_039331b4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                                *(undefined4 *)(param_1 + 0x20));
    fVar4 = *(float *)(param_1 + 0x1c);
    FUN_039331b4(*(undefined4 *)(param_1 + 0x18),fVar4,*(undefined4 *)(param_1 + 0x20));
    BoardTransforms::BoardSpaceToGrid(fVar3,fVar4,&local_18,&local_14);
    if (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) goto LAB_03935d3c;
    lVar2 = Board::GetZombieAt(*(Board **)(gLawnApp + 0x9f0),local_18,local_14);
    if (lVar2 != 0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x18),(RtWeakPtrBase *)a_Stack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
      CreateSoccerCursor(this);
      if (this[0x45] != (SoccerGameModule)0x0) {
        CreateDefenceEffect(this,true);
        this[0x45] = (SoccerGameModule)0x0;
      }
      goto LAB_03935d3c;
    }
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x18),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
LAB_03935d3c:
  *(undefined8 *)(this + 0x30) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameModule::CreateScoreText() */

void SoccerGameModule::CreateScoreText(void)

{
  Effect_FloatingText *this;
  WorldCupMgr *pWVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_20)
  ;
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)local_18,(float)*(int *)(gLawnApp + 0xd4) * 0.5,
             (float)*(int *)(gLawnApp + 0xd8) * 0.5);
  local_20 = local_18[0];
  this = Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
  EATextSquish::Vec3::Vec3((Vec3 *)local_18,(float)local_20,local_20._4_4_,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)local_18,0xdbba1);
  Effect_FloatingText::SetStyle(this,10);
  pcVar4 = *(code **)(*(long *)this + 0x78);
  Sexy::Color::Color((Color *)local_18,2);
  (*pcVar4)(this,(FastCurve *)local_18);
  Effect_FloatingText::SetDuration(this,2.0);
  pWVar1 = (WorldCupMgr *)Sexy::LazySingleton<WorldCupMgr>::GetInstance();
  uVar2 = WorldCupMgr::GetCurrentScore(pWVar1,false);
  pWVar1 = (WorldCupMgr *)Sexy::LazySingleton<WorldCupMgr>::GetInstance();
  uVar3 = WorldCupMgr::GetCurrentScore(pWVar1,true);
  Sexy::StrFormat(L"%d : %d",(FastCurve *)local_18,uVar2 & 0xffffffff,uVar3 & 0xffffffff);
  Effect_FloatingText::SetText((wstring *)this);
  FUN_05476c50((FastCurve *)local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameModule::OnEffectDone(StandaloneEffect*) */

void SoccerGameModule::OnEffectDone(StandaloneEffect *param_1)

{
  Effect_FloatingText *this;
  WorldCupMgr *pWVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 uStack_20;
  undefined8 auStack_18 [2];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)&uStack_20);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)auStack_18,(float)*(int *)(gLawnApp + 0xd4) * 0.5,
             (float)*(int *)(gLawnApp + 0xd8) * 0.5);
  uStack_20 = auStack_18[0];
  this = Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
  EATextSquish::Vec3::Vec3((Vec3 *)auStack_18,(float)uStack_20,uStack_20._4_4_,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)auStack_18,0xdbba1);
  Effect_FloatingText::SetStyle(this,10);
  pcVar4 = *(code **)(*(long *)this + 0x78);
  Sexy::Color::Color((Color *)auStack_18,2);
  (*pcVar4)(this,(FastCurve *)auStack_18);
  Effect_FloatingText::SetDuration(this,2.0);
  pWVar1 = (WorldCupMgr *)Sexy::LazySingleton<WorldCupMgr>::GetInstance();
  uVar2 = WorldCupMgr::GetCurrentScore(pWVar1,false);
  pWVar1 = (WorldCupMgr *)Sexy::LazySingleton<WorldCupMgr>::GetInstance();
  uVar3 = WorldCupMgr::GetCurrentScore(pWVar1,true);
  Sexy::StrFormat(L"%d : %d",(FastCurve *)auStack_18,uVar2 & 0xffffffff,uVar3 & 0xffffffff);
  Effect_FloatingText::SetText((wstring *)this);
  FUN_05476c50((FastCurve *)auStack_18);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SoccerGameModule::checkDoesZombieWin(Zombie*) */

bool __thiscall SoccerGameModule::checkDoesZombieWin(SoccerGameModule *this,Zombie *param_1)

{
  char cVar1;
  float *pfVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  float fVar4;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
  if ((((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')
       ) && (cVar1 = Zombie::IsControlled(param_1), cVar1 == '\0')) &&
     ((cVar1 = Zombie::IsFriendZombie(param_1), cVar1 == '\0' &&
      (cVar1 = RealObject::IsOnOpposingTeam(param_1,2), cVar1 == '\0')))) {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    fVar4 = *pfVar2;
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    return fVar4 - 200.0 <= *(float *)(pRVar3 + 0x4c);
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameModule::CheckZombieGoal() */

void __thiscall SoccerGameModule::CheckZombieGoal(SoccerGameModule *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  bool bVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float *pfVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  RtObject *this_02;
  long lVar4;
  UIWorldCupScore *this_03;
  undefined1 uVar5;
  float fVar6;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_01);
  fVar6 = *pfVar2;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if ((fVar6 - 200.0 <= *(float *)(pRVar3 + 0x4c)) &&
     (bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00), bVar1)) {
    this_02 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    bVar1 = Sexy::RtObject::IsA<Zombie>(this_02);
    if (bVar1) {
      std::string::string(asStack_10,"WorldCupScoreUI");
      lVar4 = UIWidget::GetWidgetBySheetName(asStack_10);
      std::string::~string(asStack_10);
      nop();
      uVar5 = 1;
      if (lVar4 != 0) {
        nop();
        if (this_03 == (UIWorldCupScore *)0x0) {
          *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
        }
        else {
          UIWorldCupScore::setOldEnemyScore(this_03,*(uint *)(this + 0x28));
          *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
          UIWorldCupScore::checkAnimationState(this_03);
        }
      }
      goto LAB_03936190;
    }
  }
  uVar5 = 0;
LAB_03936190:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameModule::addToRenderQueue(RenderQueue*) */

void __thiscall SoccerGameModule::addToRenderQueue(SoccerGameModule *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDraw);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<SoccerGameModule,void(SoccerGameModule::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,1000000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameModule::GameplayStarted() */

void __thiscall SoccerGameModule::GameplayStarted(SoccerGameModule *this)

{
  undefined *puVar1;
  long lVar2;
  UIWidget *this_00;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  string asStack_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDied);
  local_60 = local_28;
  local_70 = local_38;
  uStack_68 = uStack_30;
  MessageRouter::
  Subscribe<Plant*,bool,Sexy::CBMemberTranslatorX<SoccerGameModule,void(SoccerGameModule::*)(Plant*,bool)>>
            ((MessageRouter *)puVar1,Message::PlantDiedBy,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_90 = local_20;
  uStack_88 = uStack_18;
  local_80 = local_10;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<SoccerGameModule,void(SoccerGameModule::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_90);
  std::string::string(asStack_48,"WorldCupScoreUI");
  lVar2 = UIWidget::GetWidgetBySheetName(asStack_48);
  std::string::~string(asStack_48);
  nop();
  if (lVar2 == 0) {
    Sexy::RtName::RtName((RtName *)asStack_48,L"WorldCupScoreUI");
    UIWidget::CreateWidget(asStack_48,1);
    Sexy::RtName::~RtName((RtName *)asStack_48);
  }
  nop();
  if (this_00 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_00,true);
    UIWorldCupScore::setScores
              ((UIWorldCupScore *)this_00,(uint *)(this + 0x24),(uint *)(this + 0x28));
  }
  this[0x45] = (SoccerGameModule)0x1;
  this[0x50] = (SoccerGameModule)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameModule::PassAndShoot(Plant*) */

void __thiscall SoccerGameModule::PassAndShoot(SoccerGameModule *this,Plant *param_1)

{
  BoardEntity_Football *this_00;
  ResourceInfo *pRVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::SetPlantfoodCount(*(Board **)(gLawnApp + 0x9f0),0);
  this_00 = GameObject::Create<BoardEntity_Football>();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  BoardEntity_Football::SetShooter(this_00,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x18));
  BoardEntity_Football::Pass(this_00,(BoardEntity *)pRVar1,(BoardEntity *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x18),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 0x48))();
    *(undefined8 *)(this + 0x38) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameModule::onPlantDied(Plant*, bool) */

void __thiscall SoccerGameModule::onPlantDied(SoccerGameModule *this,Plant *param_1,bool param_2)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ResourceInfo *this_01;
  long lVar5;
  long extraout_x0;
  undefined8 uVar6;
  float *pfVar7;
  float *pfVar8;
  Zombie *this_02;
  long extraout_x0_00;
  int extraout_w1;
  int extraout_w1_00;
  Board *this_03;
  Zombie *pZVar9;
  float fVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (!param_2) {
    this_00 = (RtWeakPtr *)(this + 0x18);
    this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    if (this_01 == (ResourceInfo *)param_1) {
      this_03 = *(Board **)(gLawnApp + 0x9f0);
      iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this_01);
      iVar4 = SharkMinion::getRow((SharkMinion *)this_01);
      lVar5 = Board::GetZombieAt(this_03,iVar3,iVar4);
      if (lVar5 == 0) {
        uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
        PVZDB::GetObjectIteratorForTable((Iterator *)aRStack_28,uVar6,0x29);
        pZVar9 = (Zombie *)0x0;
        while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)aRStack_28),
              bVar1) {
          Sexy::RtDbTable::Iterator::operator*((Iterator *)aRStack_28);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
          Sexy::RtId::~RtId(aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          nop();
          cVar2 = Zombie::IsTargetable(this_02);
          if ((cVar2 == '\0') &&
             ((((cVar2 = Zombie::IsFriendZombie(this_02), cVar2 != '\0' ||
                (cVar2 = (**(code **)(*(long *)this_02 + 0x328))(this_02), cVar2 != '\0')) ||
               (cVar2 = (**(code **)(*(long *)this_02 + 0x330))(this_02), cVar2 != '\0')) ||
              ((cVar2 = Zombie::IsFlickedOff(this_02), cVar2 != '\0' ||
               (cVar2 = RealObject::IsOnOpposingTeam(this_02,2), cVar2 != '\0')))))) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
            iVar3 = extraout_w1_00;
          }
          else {
            pfVar7 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)this_02);
            pfVar8 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)this_01);
            if (*pfVar8 < *pfVar7) {
              pZVar9 = this_02;
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
            iVar3 = extraout_w1;
          }
          Sexy::RtDbTable::Iterator::operator++((Iterator *)aRStack_28,iVar3);
        }
        Sexy::RtDbTable::Iterator::~Iterator((Iterator *)aRStack_28);
        if (pZVar9 != (Zombie *)0x0) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_28);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
          CreateSoccerCursor(this);
          fVar10 = (float)PVZ_T();
          LevelModule::GetPropsPtr((LevelModule *)this);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          nop();
          *(float *)(this + 0x2c) = fVar10 + *(float *)(extraout_x0_00 + 0x44);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        }
      }
      else {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        CreateSoccerCursor(this);
        fVar10 = (float)PVZ_T();
        LevelModule::GetPropsPtr((LevelModule *)this);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        nop();
        *(float *)(this + 0x2c) = fVar10 + *(float *)(extraout_x0 + 0x44);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
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
/* SoccerGameModule::DoShot(Sexy::SexyVector3 const&, BoardEntity*) */

void __thiscall
SoccerGameModule::DoShot(SoccerGameModule *this,SexyVector3 *param_1,BoardEntity *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  WorldCupMgr *pWVar4;
  Board *pBVar7;
  undefined4 uVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  wstring awStack_20 [8];
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_28,"SoccerGameFootballDefault");
  Sexy::ToWString(asStack_28);
  Sexy::RtName::RtName((RtName *)&local_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_30,uVar3,0xc,(RtName *)&local_18);
  Sexy::RtName::~RtName((RtName *)&local_18);
  FUN_05476c50(awStack_20);
  std::string::~string(asStack_28);
  nop();
  fVar6 = *(float *)(param_1 + 8);
                    /* WARNING: Load size is inaccurate */
  pBVar7._0_4_ = *(Board **)param_1;
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_30);
  Board::AddProjectile(pBVar7._0_4_,uVar5,-(fVar6 * 0.5),uVar3,(RtName *)&local_18,param_2,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  pWVar4 = (WorldCupMgr *)Sexy::LazySingleton<WorldCupMgr>::GetInstance();
  WorldCupMgr::NotifyTutorialState(pWVar4,2);
  iVar1 = *(int *)(gLawnApp + 0x724);
  iVar2 = *(int *)(gLawnApp + 0x728);
  Board::GetBoardBaseOffset();
  Board::GetBoardBaseOffset();
  Sexy::Point::Point((Point *)&local_18,(int)((float)iVar1 * 0.5 - (float)local_18),
                     (int)((float)iVar2 * 0.5 - (float)local_14));
  Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_18);
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 0x48))();
    *(undefined8 *)(this + 0x38) = 0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameModule::onZombieDied(Zombie*, DamageInfo const*) */

void SoccerGameModule::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  RtWeakPtr *this;
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  ResourceInfo *this_00;
  WorldCupMgr *pWVar4;
  long lVar5;
  Board *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  this = (RtWeakPtr *)(param_1 + 0x18);
  local_8 = ___stack_chk_guard;
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
  if (this_00 == (ResourceInfo *)param_2) {
    Board::SetPlantfoodCount(*(Board **)(gLawnApp + 0x9f0),1);
    pWVar4 = (WorldCupMgr *)Sexy::LazySingleton<WorldCupMgr>::GetInstance();
    WorldCupMgr::NotifyTutorialState(pWVar4,1);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_20);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
    if (-1 < iVar2) {
      do {
        this_01 = *(Board **)(gLawnApp + 0x9f0);
        iVar3 = SharkMinion::getRow((SharkMinion *)this_00);
        std::string::string((string *)&local_20,"");
        lVar5 = Board::GetPlantAt(this_01,iVar2,iVar3,(string *)&local_20);
        std::string::~string((string *)&local_20);
        nop();
        if (lVar5 != 0) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)&local_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
          CreateSoccerCursor((SoccerGameModule *)param_1);
          CreateDefenceEffect((SoccerGameModule *)param_1,false);
          param_1[0x45] = (Zombie)0x1;
          param_1[0x50] = (Zombie)0x1;
          goto LAB_03937d58;
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != -1);
    }
    iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
    if (-1 < iVar2) {
      do {
        iVar3 = BoardConstants::NUMBER_OF_ROWS();
        Sexy::Insets::Insets(aIStack_30,iVar2,0,1,iVar3);
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
        EntityFinder::GetEntitiesInGridSquares
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_20,1,
                   aIStack_30);
        uVar1 = local_20;
        lVar5 = FUN_0393314c(local_20,local_18);
        if (lVar5 != 0) {
          FUN_039331a4(uVar1);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          CreateSoccerCursor((SoccerGameModule *)param_1);
          CreateDefenceEffect((SoccerGameModule *)param_1,false);
          param_1[0x45] = (Zombie)0x1;
          param_1[0x50] = (Zombie)0x1;
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
          break;
        }
        iVar2 = iVar2 + -1;
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      } while (iVar2 != -1);
    }
  }
LAB_03937d58:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameModule::GameplayUpdate() */

void __thiscall SoccerGameModule::GameplayUpdate(SoccerGameModule *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Zombie *this_01;
  long extraout_x0;
  Zombie *extraout_x0_00;
  undefined8 *puVar6;
  Zombie *pZVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  float *pfVar8;
  RtObject *pRVar9;
  Plant *pPVar10;
  long lVar11;
  Zombie *this_03;
  BoardEntity_Football *this_04;
  long extraout_x0_01;
  WorldCupMgr *pWVar12;
  float *pfVar13;
  Effect_PopAnim *pEVar14;
  ResourceInfo *pRVar15;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  float fVar16;
  float fVar17;
  int local_a0;
  int local_9c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  undefined8 local_90 [2];
  undefined8 local_80 [2];
  undefined8 local_70;
  undefined8 local_68;
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr *)(this + 0x18);
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)local_90);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      pRVar9 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pZVar7 = Sexy::RtObject::Cast<Zombie>(pRVar9);
      if (pZVar7 != (Zombie *)0x0) {
        this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        pfVar8 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(this_02);
        if (*pfVar8 <= 747.0) {
          pRVar9 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          Sexy::RtObject::Cast<Zombie>(pRVar9);
          pWVar12 = (WorldCupMgr *)Sexy::LazySingleton<WorldCupMgr>::GetInstance();
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_70,(RtWeakPtrBase *)local_80);
          WorldCupMgr::SetCarrierForTutorial(pWVar12,(RtWeakPtr<Sexy::SoundResource> *)&local_70);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_80)
          ;
          pWVar12 = (WorldCupMgr *)Sexy::LazySingleton<WorldCupMgr>::GetInstance();
          WorldCupMgr::NotifyTutorialState(pWVar12,0);
        }
        fVar17 = *(float *)(this + 0x2c);
        fVar16 = (float)PVZ_T();
        if (fVar17 < fVar16) {
          pRVar9 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          pZVar7 = Sexy::RtObject::Cast<Zombie>(pRVar9);
          uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
          PVZDB::GetObjectIteratorForTable((FastCurve *)&local_70,uVar5,0x29);
          while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_70),
                bVar1) {
            Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_70);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_a0,(RtWeakPtrBase *)local_80);
            Sexy::RtId::~RtId((RtId *)local_80);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
            nop();
            ToolPacketData::GetProps();
            cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aRStack_98);
            if (cVar2 == '\0') {
              ToolPacketData::GetProps();
              cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_80);
              if ((cVar2 == '\0') || (cVar2 = Zombie::IsFriendZombie(this_03), cVar2 != '\0')) {
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)local_80);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
                goto LAB_039398e4;
              }
              cVar2 = RealObject::IsOnOpposingTeam(this_03,2);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)local_80);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
              if ((cVar2 != '\0') ||
                 ((cVar2 = Zombie::IsTargetable(this_03), cVar2 == '\0' &&
                  ((((cVar2 = Zombie::IsFriendZombie(this_03), cVar2 != '\0' ||
                     (cVar2 = (**(code **)(*(long *)this_03 + 0x328))(this_03), cVar2 != '\0')) ||
                    (cVar2 = (**(code **)(*(long *)this_03 + 0x330))(this_03), cVar2 != '\0')) ||
                   (cVar2 = Zombie::IsFlickedOff(this_03), cVar2 != '\0')))))) goto LAB_039398e4;
              pfVar8 = (float *)std::
                                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                               *)this_03);
              pfVar13 = (float *)std::
                                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                *)pZVar7);
              if (*pfVar8 < *pfVar13) {
                pZVar7 = this_03;
              }
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
              iVar4 = extraout_w1_02;
            }
            else {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
LAB_039398e4:
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
              iVar4 = extraout_w1_01;
            }
            Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_70,iVar4);
          }
          Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_70);
          pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
          if (pZVar7 != (Zombie *)pRVar15) {
            this_04 = GameObject::Create<BoardEntity_Football>();
            pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
            BoardEntity_Football::Pass(this_04,(BoardEntity *)pRVar15,(BoardEntity *)pZVar7);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)&local_70);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
            if (*(long **)(this + 0x38) != (long *)0x0) {
              (**(code **)(**(long **)(this + 0x38) + 0x48))();
              *(undefined8 *)(this + 0x38) = 0;
            }
          }
          fVar16 = (float)PVZ_T();
          LevelModule::GetPropsPtr((LevelModule *)this);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
          nop();
          *(float *)(this + 0x2c) = fVar16 + *(float *)(extraout_x0_01 + 0x44);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
        }
        cVar2 = CheckZombieGoal(this);
        if (cVar2 != '\0') {
          iVar4 = *(int *)(gLawnApp + 0x724);
          iVar3 = *(int *)(gLawnApp + 0x728);
          Board::GetBoardBaseOffset();
          fVar16 = (float)(int)local_70;
          Board::GetBoardBaseOffset();
          Sexy::Point::Point((Point *)&local_a0,(int)((float)iVar4 * 0.5 - fVar16),
                             (int)((float)iVar3 * 0.5 - (float)local_70._4_4_));
          Board::TranslateScreenPositionToBoardPosition
                    (*(Board **)(gLawnApp + 0x9f0),(Point *)&local_a0);
          pEVar14 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
          iVar4 = FUN_039337c0(0x1e);
          iVar3 = FUN_039337c0(0x14);
          Sexy::FastCurve::SetOutRange
                    ((FastCurve *)&local_70,(float)(local_a0 + iVar4),(float)(local_9c - iVar3));
          StandaloneEffect::SetScreenSpaceOrigin
                    ((StandaloneEffect *)pEVar14,(SexyVector2 *)&local_70,0xdbba1);
          std::string::string((string *)local_80,"POPANIM_EFFECTS_WORLDCUP_GOAL");
          GetPAMByName((string *)local_80);
          pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_70);
          Effect_PopAnim::CreatePopAnimRig(pEVar14,(PopAnim *)pRVar15,(RtClass *)0x0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
          std::string::~string((string *)local_80);
          nop();
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aRStack_98);
          std::string::string((string *)&local_70,"OnEffectDone");
          RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                    (aRStack_50,(string *)local_80,(FastCurve *)&local_70);
          StandaloneEffect::SetCompletionCallback((StandaloneEffect *)pEVar14,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
          std::string::~string((string *)&local_70);
          nop();
          Sexy::RtId::~RtId((RtId *)local_80);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
          Effect_PopAnim::SetCentered(pEVar14,true);
          std::string::string((string *)&local_70,"animation");
          Effect_PopAnim::PlaySingleAnimation(pEVar14,(FastCurve *)&local_70,0);
          std::string::~string((string *)&local_70);
          nop();
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_70);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)&local_70);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
          iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
          iVar4 = iVar4 + -1;
          if (-1 < iVar4) {
            do {
              Board::SetPlantfoodCount(*(Board **)(gLawnApp + 0x9f0),1);
              iVar3 = BoardConstants::NUMBER_OF_ROWS();
              Sexy::Insets::Insets((Insets *)local_80,iVar4,0,1,iVar3);
              std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                        ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_70)
              ;
              EntityFinder::GetEntitiesInGridSquares((FastCurve *)&local_70,1,(string *)local_80);
              uVar5 = local_70;
              lVar11 = FUN_0393314c(local_70,local_68);
              if (lVar11 != 0) {
                FUN_039331a4(uVar5);
                ToolPacketData::GetProps();
                Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                          ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,
                           (RtWeakPtrBase *)aRStack_98);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
                CreateSoccerCursor(this);
                CreateDefenceEffect(this,false);
                this[0x45] = (SoccerGameModule)0x1;
                this[0x50] = (SoccerGameModule)0x1;
                std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                          ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_70);
                break;
              }
              iVar4 = iVar4 + -1;
              std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                        ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_70);
            } while (iVar4 != -1);
          }
        }
        goto LAB_039392ec;
      }
    }
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      pRVar9 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pPVar10 = Sexy::RtObject::Cast<Plant>(pRVar9);
      if ((pPVar10 != (Plant *)0x0) && (cVar2 = CheckPlantGoal(this), cVar2 != '\0')) {
        if (this[0x50] != (SoccerGameModule)0x0) {
          this[0x50] = (SoccerGameModule)0x0;
          iVar4 = *(int *)(gLawnApp + 0x724);
          iVar3 = *(int *)(gLawnApp + 0x728);
          Board::GetBoardBaseOffset();
          fVar16 = (float)(int)local_70;
          Board::GetBoardBaseOffset();
          Sexy::Point::Point((Point *)&local_a0,(int)((float)iVar4 * 0.5 - fVar16),
                             (int)((float)iVar3 * 0.5 - (float)local_70._4_4_));
          Board::TranslateScreenPositionToBoardPosition
                    (*(Board **)(gLawnApp + 0x9f0),(Point *)&local_a0);
          pEVar14 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
          iVar4 = FUN_039337c0(0x1e);
          iVar3 = FUN_039337c0(0x14);
          Sexy::FastCurve::SetOutRange
                    ((FastCurve *)&local_70,(float)(local_a0 + iVar4),(float)(local_9c - iVar3));
          StandaloneEffect::SetScreenSpaceOrigin
                    ((StandaloneEffect *)pEVar14,(SexyVector2 *)&local_70,0xdbba1);
          std::string::string((string *)local_80,"POPANIM_EFFECTS_WORLDCUP_GOAL");
          GetPAMByName((string *)local_80);
          pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_70);
          Effect_PopAnim::CreatePopAnimRig(pEVar14,(PopAnim *)pRVar15,(RtClass *)0x0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
          std::string::~string((string *)local_80);
          nop();
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aRStack_98);
          std::string::string((string *)&local_70,"OnEffectDone");
          RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                    (aRStack_50,(string *)local_80,(FastCurve *)&local_70);
          StandaloneEffect::SetCompletionCallback
                    ((StandaloneEffect *)pEVar14,
                     (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
          std::string::~string((string *)&local_70);
          nop();
          Sexy::RtId::~RtId((RtId *)local_80);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
          Effect_PopAnim::SetCentered(pEVar14,true);
          std::string::string((string *)&local_70,"animation");
          Effect_PopAnim::PlaySingleAnimation(pEVar14,(FastCurve *)&local_70,0);
          std::string::~string((string *)&local_70);
          nop();
        }
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_70);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)&local_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
        for (iVar4 = 0; iVar3 = BoardConstants::NUMBER_OF_COLUMNS(), iVar4 < iVar3;
            iVar4 = iVar4 + 1) {
          iVar3 = BoardConstants::NUMBER_OF_ROWS();
          Sexy::Insets::Insets((Insets *)local_80,iVar4,0,1,iVar3);
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_70);
          EntityFinder::GetEntitiesInGridSquares
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_70,2,
                     (Insets *)local_80);
          uVar5 = local_70;
          lVar11 = FUN_0393314c(local_70,local_68);
          if (lVar11 != 0) {
            FUN_039331a4(uVar5);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_98);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
            CreateSoccerCursor(this);
            if (this[0x45] != (SoccerGameModule)0x0) {
              CreateDefenceEffect(this,true);
              this[0x45] = (SoccerGameModule)0x0;
            }
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_70);
            break;
          }
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_70);
        }
      }
    }
  }
  else {
    uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable((Iterator *)&local_70,uVar5,0x29);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_70), bVar1) {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_70);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_a0,(RtWeakPtrBase *)local_80);
      Sexy::RtId::~RtId((RtId *)local_80);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
      nop();
      ToolPacketData::GetProps();
      cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aRStack_98);
      if (cVar2 == '\0') {
        ToolPacketData::GetProps();
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_80);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_80);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
        if ((cVar2 != '\0') &&
           ((cVar2 = Zombie::IsTargetable(this_01), cVar2 != '\0' ||
            (((cVar2 = Zombie::IsFriendZombie(this_01), cVar2 == '\0' &&
              (cVar2 = (**(code **)(*(long *)this_01 + 0x328))(this_01), cVar2 == '\0')) &&
             ((cVar2 = (**(code **)(*(long *)this_01 + 0x330))(this_01), cVar2 == '\0' &&
              ((cVar2 = Zombie::IsFlickedOff(this_01), cVar2 == '\0' &&
               (cVar2 = RealObject::IsOnOpposingTeam(this_01,2), cVar2 == '\0')))))))))) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)local_80);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_80)
          ;
          CreateSoccerCursor(this);
          if (this[0x45] != (SoccerGameModule)0x0) {
            CreateDefenceEffect(this,true);
            this[0x45] = (SoccerGameModule)0x0;
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
          break;
        }
      }
      else {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
      Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_70,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_70);
    fVar16 = (float)PVZ_T();
    LevelModule::GetPropsPtr((LevelModule *)this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
    nop();
    *(float *)(this + 0x2c) = fVar16 + *(float *)(extraout_x0 + 0x44);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
  }
LAB_039392ec:
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable((Iterator *)&local_70,uVar5,0x29);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_70), bVar1) {
    Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_70);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_98,(RtWeakPtrBase *)local_80);
    Sexy::RtId::~RtId((RtId *)local_80);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
    nop();
    cVar2 = checkDoesZombieWin(this,extraout_x0_00);
    if (cVar2 != '\0') {
      std::list<Zombie*,std::allocator<Zombie*>>::push_back
                ((list<Zombie*,std::allocator<Zombie*>> *)local_90,(Zombie **)local_80);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
    Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_70,extraout_w1_00);
  }
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_70);
  local_80[0] = FUN_03935ed4(local_90[0]);
  while( true ) {
    local_70 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)local_90);
    bVar1 = eastl::operator!=((rbtree_iterator *)local_80,(rbtree_iterator *)&local_70);
    if (!bVar1) break;
    puVar6 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)local_80);
    (**(code **)(*(long *)*puVar6 + 0x48))((long *)*puVar6);
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)local_80);
  }
  std::list<Zombie*,std::allocator<Zombie*>>::~list
            ((list<Zombie*,std::allocator<Zombie*>> *)local_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall SoccerGameModule::AddResourceRequirements(SoccerGameModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UI_SoccerGame");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Effects_SoccerGame");
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
/* SoccerGameModule::registerForEvents() */

void __thiscall SoccerGameModule::registerForEvents(SoccerGameModule *this)

{
  undefined *this_00;
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GameplayStarted);
  Sexy::Delegate0::Delegate0<SoccerGameModule,void(SoccerGameModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GameplayEnded);
  Sexy::Delegate0::Delegate0<SoccerGameModule,void(SoccerGameModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GameplayUpdate);
  Sexy::Delegate0::Delegate0<SoccerGameModule,void(SoccerGameModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayUpdate(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,checkWinCondition);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<SoccerGameModule,bool(SoccerGameModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,aCStack_50);
  LevelModuleManager::RegisterWinCondition(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<SoccerGameModule,void(SoccerGameModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::Delegate1<SoccerGameModule,void(SoccerGameModule::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,aCStack_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar1,aDStack_38);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyGameBegin);
  Sexy::Delegate0::Delegate0<SoccerGameModule,void(SoccerGameModule::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::NotifyGameBegin,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

