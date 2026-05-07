// Class: DropShipModule


/* DropShipModule::OnUpdate() */

void DropShipModule::OnUpdate(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DropShipModule::StaticClassInit() */

void DropShipModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"DropShipModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04108c00,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DropShipModule::StaticGetClass() */

long * DropShipModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DropShipModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DropShipModule::DropShipModule() */

void __thiscall DropShipModule::DropShipModule(DropShipModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_067e46b0;
  return;
}


/* DropShipModule::StaticNew() */

DropShipModule * DropShipModule::StaticNew(void)

{
  DropShipModule *this;
  
  this = ::operator_new(0x18);
  DropShipModule(this);
  return this;
}


/* DropShipModule::~DropShipModule() */

void __thiscall DropShipModule::~DropShipModule(DropShipModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_067e46b0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* DropShipModule::~DropShipModule() */

void __thiscall DropShipModule::~DropShipModule(DropShipModule *this)

{
  ~DropShipModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DropShipModule::WaveContain(int) */

void __thiscall DropShipModule::WaveContain(DropShipModule *this,int param_1)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar3 = FUN_04109a78(*(undefined8 *)(pRVar2 + 0x40));
  uVar4 = FUN_04109ac8(*(undefined8 *)(pRVar2 + 0x48));
  local_18 = FUN_04109df4(uVar3,uVar4,param_1);
  local_10 = FUN_04109ac8(*(undefined8 *)(pRVar2 + 0x48));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DropShipModule::GetDropInfo(int) */

void __thiscall DropShipModule::GetDropInfo(DropShipModule *this,int param_1)

{
  ResilienceTutorialIntroProperties *pRVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar2 = FUN_04109a78(*(undefined8 *)(pRVar1 + 0x40));
  uVar3 = FUN_04109ac8(*(undefined8 *)(pRVar1 + 0x48));
  local_10 = FUN_0410a05c(uVar2,uVar3,param_1);
  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DropShipModule::DropShipBegin(int) */

void __thiscall DropShipModule::DropShipBegin(DropShipModule *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  DropShipEffectAnim *this_00;
  ResourceInfo *pRVar5;
  DropImpInfo *pDVar6;
  string *psVar7;
  RtMixedPtrBase aRStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar7 = *(string **)(gLawnApp + 0x848);
  std::string::string(asStack_20,"POPANIM_EFFECTS_DROPSHIP");
  Sexy::ResourceManager::GetResourceForStringIdT<Sexy::PopAnim>(psVar7,SUB81(asStack_20,0));
  std::string::~string(asStack_20);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
  if (cVar1 != '\0') {
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    this_00 = Board::AddEffect<DropShipEffectAnim>(*(Board **)(gLawnApp + 0x9f0));
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
    Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_00,(PopAnim *)pRVar5,(RtClass *)0x0);
    Effect_PopAnim::SetCentered((Effect_PopAnim *)this_00,true);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_20,(float)((iVar2 * iVar3 + 200) / 2),50.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)asStack_20,-1);
    pDVar6 = (DropImpInfo *)GetDropInfo(this,param_1);
    DropShipEffectAnim::SetDropInfo(this_00,pDVar6);
    Effect_PopAnim::SetPopAnimDelegates((Effect_PopAnim *)this_00);
    StandaloneEffect::SetKeepAlive((StandaloneEffect *)this_00,true);
    uVar4 = BoardConstants::NUMBER_OF_ROWS();
    uVar4 = Board::MakeRenderOrder(0x65130,uVar4,0);
    FUN_041081ec(this_00 + 0x1c,uVar4);
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)asStack_20);
    std::string::string(asStack_28,"up");
    AnimationSequence::AddSingleAnimation(asStack_20,asStack_28,0);
    std::string::~string(asStack_28);
    nop();
    std::string::string(asStack_28,"jump");
    AnimationSequence::AddSingleAnimation(asStack_20,asStack_28,0);
    std::string::~string(asStack_28);
    nop();
    Effect_PopAnim::PlayAnimationSequence((Effect_PopAnim *)this_00,(AnimationSequence *)asStack_20)
    ;
    AnimationSequence::~AnimationSequence((AnimationSequence *)asStack_20);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DropShipModule::OnWaveStarted(int) */

void __thiscall DropShipModule::OnWaveStarted(DropShipModule *this,int param_1)

{
  char cVar1;
  
  cVar1 = WaveContain(this,param_1);
  if (cVar1 == '\0') {
    return;
  }
  DropShipBegin(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DropShipModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall DropShipModule::AddResourceRequirements(DropShipModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  std::string::string(asStack_10,"DropShipModuleGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DropShipModule::registerForEvents() */

void __thiscall DropShipModule::registerForEvents(DropShipModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnUpdate);
  Sexy::Delegate0::Delegate0<DropShipModule,void(DropShipModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnWaveStarted);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<DropShipModule,void(DropShipModule::*)(int)>>
            ((MessageRouter *)puVar1,Message::WavesNotify,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

