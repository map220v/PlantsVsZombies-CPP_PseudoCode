// Class: PlantStrawBurst


/* PlantStrawBurst::onAnimStoppedCallback(std::string const&) */

void PlantStrawBurst::onAnimStoppedCallback(string *param_1)

{
  Plant::KillPlant(*(Plant **)(param_1 + 0x10),1,0,1);
  return;
}


/* PlantStrawBurst::isReadyToFire() */

bool __thiscall PlantStrawBurst::isReadyToFire(PlantStrawBurst *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) == 1;
}


/* PlantStrawBurst::onCancelEvent() */

void __thiscall PlantStrawBurst::onCancelEvent(PlantStrawBurst *this)

{
  *(undefined8 *)(this + 0x38) = 0;
  return;
}


/* PlantStrawBurst::PlantStrawBurst() */

void __thiscall PlantStrawBurst::PlantStrawBurst(PlantStrawBurst *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x30] = (PlantStrawBurst)0x0;
  this[0x31] = (PlantStrawBurst)0x1;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR_GetClass_0681e740;
  return;
}


/* PlantStrawBurst::StaticNew() */

PlantStrawBurst * PlantStrawBurst::StaticNew(void)

{
  PlantStrawBurst *this;
  
  this = ::operator_new(0x40);
  PlantStrawBurst(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStrawBurst::StaticClassInit() */

void PlantStrawBurst::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantStrawBurst");
    (*pcVar2)(plVar1,asStack_10,FUN_0426833c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantStrawBurst::StaticGetClass() */

long * PlantStrawBurst::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantStrawBurst",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantStrawBurst::GetClass() const */

long * PlantStrawBurst::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantStrawBurst",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantStrawBurst::unregisterTouchesIfNeeded() */

void __thiscall PlantStrawBurst::unregisterTouchesIfNeeded(PlantStrawBurst *this)

{
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) && (this[0x31] != (PlantStrawBurst)0x0)) {
    Board::UnregisterTouchGameplayObject(*(Board **)(gLawnApp + 0x9f0),this);
    this[0x31] = (PlantStrawBurst)0x0;
  }
  return;
}


/* PlantStrawBurst::unregisterForEvents() */

void __thiscall PlantStrawBurst::unregisterForEvents(PlantStrawBurst *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  unregisterTouchesIfNeeded(this);
  return;
}


/* PlantStrawBurst::onGameplayEnded() */

void __thiscall PlantStrawBurst::onGameplayEnded(PlantStrawBurst *this)

{
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) && (this[0x31] != (PlantStrawBurst)0x0)) {
    Board::UnregisterTouchGameplayObject(*(Board **)(gLawnApp + 0x9f0),this);
    this[0x31] = (PlantStrawBurst)0x0;
  }
  return;
}


/* PlantStrawBurst::~PlantStrawBurst() */

void __thiscall PlantStrawBurst::~PlantStrawBurst(PlantStrawBurst *this)

{
  *(undefined ***)this = &PTR_GetClass_0681e740;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantStrawBurst::~PlantStrawBurst() */

void __thiscall PlantStrawBurst::~PlantStrawBurst(PlantStrawBurst *this)

{
  ~PlantStrawBurst(this);
  AK::FreeHook(this);
  return;
}


/* PlantStrawBurst::touchBegin(Sexy::Touch const&) */

undefined8 __thiscall PlantStrawBurst::touchBegin(PlantStrawBurst *this,Touch *param_1)

{
  char cVar1;
  TRect<int> *this_00;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)FUN_04267fb0((float)*(int *)(param_1 + 0x10));
  fVar3 = (float)FUN_04267fb0((float)*(int *)(param_1 + 0x14));
  this_00 = (TRect<int> *)(**(code **)(**(long **)(this + 0x10) + 0x178))(*(long **)(this + 0x10));
  cVar1 = Sexy::TRect<int>::Contains(this_00,(int)fVar2,(int)fVar3);
  if (cVar1 != '\0') {
    *(undefined8 *)(this + 0x38) = *(undefined8 *)param_1;
  }
  return 0;
}


/* PlantStrawBurst::canAttemptToGrow() */

bool __thiscall PlantStrawBurst::canAttemptToGrow(PlantStrawBurst *this)

{
  char cVar1;
  Board *this_00;
  float fVar2;
  
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  cVar1 = Board::IsPlaying(this_00);
  if ((cVar1 != '\0') && (cVar1 = Board::IsPlantGrowthAndDecayPaused(this_00), cVar1 == '\0')) {
    fVar2 = (float)PVZ_T();
    return *(float *)(this + 0x28) < fVar2;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStrawBurst::getMaxGrowthStage() const */

void __thiscall PlantStrawBurst::getMaxGrowthStage(PlantStrawBurst *this)

{
  int iVar1;
  RtObject *this_00;
  PlantPropertySheet *pPVar2;
  long extraout_x0;
  int *piVar3;
  int local_18;
  int local_14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04267b8c(aRStack_10,*(undefined8 *)(this + 0x10));
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pPVar2 = Sexy::RtObject::Cast<PlantPropertySheet>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  PowerSet::Find(aRStack_10,pPVar2 + 0x58,8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  local_18 = 0;
  local_14 = FUN_04267c1c(*(undefined8 *)(extraout_x0 + 0x18),*(undefined8 *)(extraout_x0 + 0x20));
  local_14 = local_14 + -1;
  piVar3 = eastl::max_alt<int>(&local_18,&local_14);
  iVar1 = *piVar3;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


/* PlantStrawBurst::isFullyGrown() const */

bool __thiscall PlantStrawBurst::isFullyGrown(PlantStrawBurst *this)

{
  int iVar1;
  
  iVar1 = getMaxGrowthStage(this);
  return iVar1 == *(int *)(this + 0x2c);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStrawBurst::setGrowthTimer(int) */

void __thiscall PlantStrawBurst::setGrowthTimer(PlantStrawBurst *this,int param_1)

{
  bool bVar1;
  char cVar2;
  RtObject *this_00;
  PlantPropertySheet *pPVar3;
  long extraout_x0;
  ulong uVar4;
  float *pfVar5;
  undefined4 uVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04267b8c(aRStack_10,*(undefined8 *)(this + 0x10));
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pPVar3 = Sexy::RtObject::Cast<PlantPropertySheet>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  PowerSet::Find(aRStack_10,pPVar3 + 0x58,8);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    uVar4 = FUN_04267c1c(*(undefined8 *)(extraout_x0 + 0x18),*(undefined8 *)(extraout_x0 + 0x20));
    if (((ulong)(long)param_1 < uVar4) && (cVar2 = isFullyGrown(this), cVar2 == '\0')) {
      fVar7 = (float)PVZ_T();
      pfVar5 = (float *)FUN_04267c34(*(undefined8 *)(extraout_x0 + 0x18),(long)param_1);
      *(float *)(this + 0x28) = *pfVar5 + fVar7;
    }
    else {
      uVar6 = PVZ_EOT();
      *(undefined4 *)(this + 0x28) = uVar6;
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStrawBurst::SetPopAnimDelegates(PlantAnimRig*) */

void __thiscall PlantStrawBurst::SetPopAnimDelegates(PlantStrawBurst *this,PlantAnimRig *param_1)

{
  PlantAnimRig *pPVar1;
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1<float> aDStack_68 [48];
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::SetPopAnimDelegates((PlantFramework *)this,param_1);
  pPVar1 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,fireProjectileCallback);
  Sexy::Delegate1<float>::Delegate1<PlantStrawBurst,void(PlantStrawBurst::*)(float)>
            (aDStack_68,aCStack_98);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,fireProjectileCallback);
  Sexy::Delegate1<float>::Delegate1<PlantStrawBurst,void(PlantStrawBurst::*)(float)>
            (aDStack_38,aCStack_80);
  PlantAnimRig::SetPlantDelegates(pPVar1,aDStack_68,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStrawBurst::fireSelfDestructProjectile(bool) */

void __thiscall PlantStrawBurst::fireSelfDestructProjectile(PlantStrawBurst *this,bool param_1)

{
  int iVar1;
  RtObject *this_00;
  PlantPropertySheet *pPVar2;
  long extraout_x0;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float *pfVar6;
  Effect_PopAnim *this_02;
  char *__s;
  undefined8 uVar7;
  float fVar8;
  Board *pBVar12;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04267b8c(aRStack_18,*(undefined8 *)(this + 0x10));
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  pPVar2 = Sexy::RtObject::Cast<PlantPropertySheet>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  PowerSet::Find(aRStack_30,pPVar2 + 0x58,8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
  nop();
  lVar3 = FUN_04267c1c(*(undefined8 *)(extraout_x0 + 0x18),*(undefined8 *)(extraout_x0 + 0x20));
  iVar1 = *(int *)(this + 0x2c);
  FUN_04267b8c(aRStack_18,*(undefined8 *)(this + 0x10));
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  lVar3 = FUN_04267c3c(*(undefined8 *)(lVar4 + 0x70),lVar3 + iVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)(lVar3 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  FUN_04267b8c(aRStack_18,*(undefined8 *)(this + 0x10));
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  lVar3 = FUN_04267c3c(*(undefined8 *)(lVar3 + 0x70),(long)*(int *)(this + 0x2c));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)(lVar3 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  puVar5 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
                    /* WARNING: Load size is inaccurate */
  pBVar12._0_4_ = *puVar5;
  uVar9 = *(undefined4 *)((long)puVar5 + 4);
  uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_28);
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Board::AddProjectile
                         (pBVar12._0_4_,uVar9,0,uVar7,aRStack_18,*(undefined8 *)(this + 0x10),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  (**(code **)(*(long *)this_01 + 0x118))(this_01);
  if (param_1) {
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_01);
    fVar8 = *pfVar6;
    fVar10 = pfVar6[1];
    fVar11 = pfVar6[2];
    this_02 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    lVar4 = PopAnimRig::StaticGetClass();
    __s = (char *)FUN_04267a78(*(undefined8 *)(lVar4 + 8));
    std::string::string((string *)aRStack_18,__s);
    Effect_PopAnim::CreatePopAnimRig(this_02,(string *)(lVar3 + 0x140),(string *)aRStack_18);
    std::string::~string((string *)aRStack_18);
    nop();
    Effect_PopAnim::SetCentered(this_02,true);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar8,fVar10,fVar11);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_02,(SexyVector3 *)aRStack_18,-1);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    Effect_PopAnim::PlaySingleAnimation(this_02,lVar3 + 0x148,0);
    Plant::KillPlant(*(Plant **)(this + 0x10),1,0,1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantStrawBurst::OnAnimCommand(std::string const&, std::string const&) */

undefined1 PlantStrawBurst::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  if (*(int *)(*(long *)(param_1 + 0x10) + 200) == 0xd) {
    bVar1 = std::operator==(param_2,"use_action");
    if (bVar1) {
      fireSelfDestructProjectile((PlantStrawBurst *)param_1,false);
      return 1;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStrawBurst::createStandardProjectile() */

void __thiscall PlantStrawBurst::createStandardProjectile(PlantStrawBurst *this)

{
  char cVar1;
  float *pfVar2;
  long lVar3;
  RtObject *this_00;
  StrawburstProjectile *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_02 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_02);
  fVar7 = *(float *)(this_02 + 0xc4);
  fVar6 = *pfVar2;
  fVar5 = pfVar2[1];
  FUN_04267b8c(aRStack_10,this_02);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar3 = FUN_04267c3c(*(undefined8 *)(lVar3 + 0x70),(long)*(int *)(this + 0x2c));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(lVar3 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
  this_00 = (RtObject *)
            Board::AddProjectile
                      ((Board *)(fVar6 + fVar7 * 15.0),fVar5,fVar7 * 35.0,uVar4,aRStack_10,
                       *(undefined8 *)(this + 0x10),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  cVar1 = FUN_04267bb8(*(undefined8 *)(this + 0x10));
  if (((this_00 != (RtObject *)0x0) && (cVar1 != '\0')) &&
     (this_01 = Sexy::RtObject::Cast<StrawburstProjectile>(this_00),
     this_01 != (StrawburstProjectile *)0x0)) {
    StrawburstProjectile::SetJamFlag(this_01,true);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStrawBurst::registerForEvents() */

void __thiscall PlantStrawBurst::registerForEvents(PlantStrawBurst *this)

{
  undefined *this_00;
  Board *pBVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<PlantStrawBurst,void(PlantStrawBurst::*)()>(aDStack_38,aCStack_80);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::GameplayEnded,aDStack_38);
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  if ((pBVar1 != (Board *)0x0) && (this[0x31] != (PlantStrawBurst)0x0)) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onTouchEvent);
    Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
    Delegate1wRet<PlantStrawBurst,bool(PlantStrawBurst::*)(Sexy::Touch_const&)>
              (aDStack_68,aCStack_98);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aRStack_a8);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCancelEvent);
    Sexy::Delegate0::Delegate0<PlantStrawBurst,void(PlantStrawBurst::*)()>(aDStack_38,aCStack_80);
    Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,2,aRStack_a0,aDStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStrawBurst::setState(int) */

void __thiscall PlantStrawBurst::setState(PlantStrawBurst *this,int param_1)

{
  PlantAnimRig_Strawburst *pPVar1;
  PlantAnimRig *pPVar2;
  long lVar3;
  long *plVar4;
  PopAnimRig *this_00;
  UIEasyButtonWidget *this_01;
  long lVar5;
  float fVar6;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_01 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(this_01 + 200) != param_1) {
    *(int *)(this_01 + 200) = param_1;
    switch(param_1) {
    case 1:
      plVar4 = (long *)UIEasyButtonWidget::GetImageNormal(this_01);
      (**(code **)(*plVar4 + 0x118))();
      this_00 = (PopAnimRig *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      Sexy::Color::Color((Color *)asStack_60,1);
      PopAnimRig::SetPAMColor(this_00,(Color *)asStack_60);
      break;
    case 0xb:
      pPVar1 = (PlantAnimRig_Strawburst *)FUN_0426bd9c(this_01);
      PlantAnimRig_Strawburst::PlayRecoverLooped(pPVar1);
      Plant::GetProps();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
      lVar3 = FUN_04267c3c(*(undefined8 *)(lVar3 + 0x70),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
      lVar5 = *(long *)(this + 0x10);
      fVar6 = (float)PVZ_T();
      *(float *)(lVar5 + 0x128) = fVar6 + *(float *)(lVar3 + 0x28);
      break;
    case 0xc:
      pPVar1 = (PlantAnimRig_Strawburst *)FUN_0426bd9c(this_01);
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
      PlantAnimRig_Strawburst::PlayRecoverEnd
                (pPVar1,(RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      pPVar2 = (PlantAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PlantAnimRig::SetState(pPVar2,0xe);
      break;
    case 0xd:
      pPVar1 = (PlantAnimRig_Strawburst *)FUN_0426bd9c(this_01);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_60,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
                 asStack_60);
      PlantAnimRig_Strawburst::PlaySelfDestruct(pPVar1,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStrawBurst::ApplyPlantfood() */

void __thiscall PlantStrawBurst::ApplyPlantfood(PlantStrawBurst *this)

{
  char cVar1;
  undefined4 uVar2;
  RtObject *this_00;
  EffectObject_StrawburstPlantfood *pEVar3;
  char *__s;
  Board *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    __s = "strawburst_plantfood";
  }
  else {
    __s = "strawburst_plantfood_avatar";
  }
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,__s);
  this_00 = (RtObject *)Board::AddEffectObject(this_01,asStack_10,1,1);
  pEVar3 = Sexy::RtObject::Cast<EffectObject_StrawburstPlantfood>(this_00);
  std::string::~string(asStack_10);
  nop();
  if (pEVar3 != (EffectObject_StrawburstPlantfood *)0x0) {
    uVar2 = Board::MakeRenderOrder(0x64960,2,0);
    FUN_04267b68(pEVar3 + 0x1c,uVar2);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
    EffectObject_StrawburstPlantfood::SetInstigator(pEVar3,asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  setState(this,5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStrawBurst::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantStrawBurst::TakeSmashAttack(PlantStrawBurst *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::IsInvincible(*(Plant **)(this + 0x10),false);
  if (cVar1 == '\0') {
    if ((*(int *)(*(long *)(this + 0x10) + 200) == 0xd) ||
       (*(int *)(*(long *)(this + 0x10) + 200) == 1)) {
      setState(this,0xd);
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
      PlantTupistraStalker::TakeSmashAttack(this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStrawBurst::setGrowthStage(int, RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantStrawBurst::setGrowthStage(PlantStrawBurst *this,int param_1,RtReflectionDelegate *param_3)

{
  PlantStrawBurst PVar1;
  int *piVar2;
  PlantAnimRig_Strawburst *extraout_x0;
  int local_64 [3];
  int local_58 [2];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_58[1] = 0;
  local_8 = ___stack_chk_guard;
  local_64[0] = param_1;
  local_58[0] = getMaxGrowthStage(this);
  piVar2 = eastl::min_alt<int>(local_58,local_64);
  piVar2 = eastl::max_alt<int>(local_58 + 1,piVar2);
  *(int *)(this + 0x2c) = *piVar2;
  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  nop();
  PVar1 = this[0x2c];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  PlantAnimRig_Strawburst::SetGrowthStage(extraout_x0,PVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStrawBurst::resetGrowth() */

void __thiscall PlantStrawBurst::resetGrowth(PlantStrawBurst *this)

{
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  setGrowthStage(this,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  setGrowthTimer(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantStrawBurst::Initialize() */

void __thiscall PlantStrawBurst::Initialize(PlantStrawBurst *this)

{
  PlantFramework::Initialize((PlantFramework *)this);
  resetGrowth(this);
  setState(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStrawBurst::upgradeGrowthStage() */

void __thiscall PlantStrawBurst::upgradeGrowthStage(PlantStrawBurst *this)

{
  int iVar1;
  long lVar2;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_0426bcbc(*(undefined8 *)(this + 0x10));
  if (lVar2 != 0) {
    iVar1 = *(int *)(this + 0x2c);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
    setGrowthStage(this,iVar1 + 1,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    setGrowthTimer(this,*(int *)(this + 0x2c));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x0426cd64 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantStrawBurst::UpdateActions() */

void __thiscall PlantStrawBurst::UpdateActions(PlantStrawBurst *this)

{
  undefined1 auVar1 [16];
  char cVar2;
  UIEasyButtonWidget *this_00;
  PopAnimRig *pPVar3;
  long lVar4;
  float fVar5;
  undefined1 extraout_var [12];
  float fVar6;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(this_00 + 200)) {
  case 1:
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    Sexy::Color::Color((Color *)&local_18,1);
    PopAnimRig::SetPAMColor(pPVar3,(Color *)&local_18);
    cVar2 = canAttemptToGrow(this);
    if (cVar2 != '\0') {
      upgradeGrowthStage(this);
    }
    break;
  case 10:
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    cVar2 = PopAnimRig::IsPlayingAnything(pPVar3);
    if (cVar2 == '\0') {
      setState(this,0xb);
    }
    break;
  case 0xb:
    fVar5 = (float)PVZ_T();
    if (fVar5 <= *(float *)(*(UIEasyButtonWidget **)(this + 0x10) + 0x128)) {
      Plant::GetProps();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      lVar4 = FUN_04267c3c(*(undefined8 *)(lVar4 + 0x70),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      fVar6 = *(float *)(*(long *)(this + 0x10) + 0x128);
      fVar5 = (float)PVZ_T();
      fVar5 = 1.0 - (fVar6 - fVar5) / *(float *)(lVar4 + 0x28);
      fVar5 = fVar5 * fVar5;
      fVar5 = fVar5 * fVar5 * 125.66371 + 3.1415927;
      cosf(fVar5);
      local_18 = 0x3f800000;
      local_1c = 0x3ecccccd;
      auVar1._4_12_ = extraout_var;
      auVar1._0_4_ = fVar5;
      fVar5 = CurveEvaluate<float>
                        (auVar1,0x3f000000,&local_1c,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,1);
      Sexy::Color::Color((Color *)&local_18);
      local_18 = (int)(fVar5 * 255.0);
      local_14 = local_18;
      local_10 = local_18;
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PopAnimRig::SetPAMColor(pPVar3,(Color *)&local_18);
    }
    else {
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      Sexy::Color::Color((Color *)&local_18,1);
      PopAnimRig::SetPAMColor(pPVar3,(Color *)&local_18);
      setState(this,0xc);
    }
    break;
  case 0xc:
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    cVar2 = PopAnimRig::IsPlayingAnything(pPVar3);
    if (cVar2 == '\0') {
      resetGrowth(this);
      setState(this,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStrawBurst::LobSomething(Projectile*, PlantWeapon) */

void PlantStrawBurst::LobSomething
               (undefined1 param_1_00 [16],undefined4 param_2,undefined4 param_3,
               PlantFramework *param_1,Projectile *param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  float *pfVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  undefined8 uVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  RtMixedPtrBase aRStack_78 [8];
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::FindTargetZombie(aRStack_78,param_1,param_6);
  (**(code **)(*(long *)param_1 + 0xf8))((RtWeakPtr<Sexy::ResourceInfo> *)&local_60,param_1,param_6)
  ;
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  DVec3::DVec3((DVec3 *)&local_70);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_78);
  if (cVar1 == '\0') {
    if (plVar3 == (long *)0x0) {
      this = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               **)(param_1 + 0x10);
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this);
      local_6c = pfVar5[1];
      local_70 = *pfVar5 + 600.0;
      local_68 = 0;
    }
    else {
      pcVar7 = *(code **)(*plVar3 + 0x238);
      lVar4 = FUN_0426bcbc(*(undefined8 *)(param_1 + 0x10));
      local_60 = (*pcVar7)(*(undefined4 *)(lVar4 + 0x2e0),plVar3);
      local_5c = param_2;
      local_58 = param_3;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_70,(SexyVector3 *)&local_60);
      this = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               **)(param_1 + 0x10);
    }
  }
  else {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    pcVar7 = *(code **)(*plVar3 + 0x3b0);
    lVar4 = FUN_0426bcbc(*(undefined8 *)(param_1 + 0x10));
    local_60 = (*pcVar7)(*(undefined4 *)(lVar4 + 0x2e0),plVar3);
    local_5c = param_2;
    local_58 = param_3;
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_70,(SexyVector3 *)&local_60);
    fVar8 = local_70;
    this = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             **)(param_1 + 0x10);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this);
    fVar9 = *pfVar5;
    if (fVar8 < fVar9) {
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      this = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               **)(param_1 + 0x10);
      local_70 = fVar9 + (float)iVar2 * 0.5;
    }
  }
  lVar4 = FUN_0426bcbc(this);
  Projectile::LaunchAtFromProps
            (param_5,(SexyVector3 *)&local_70,(PultProjectileProps *)(lVar4 + 0x2d0));
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  iVar2 = FUN_04267bb0(uVar6);
  if (iVar2 < 3) {
LAB_0426ceb4:
    if (iVar2 < 2) goto LAB_0426cedc;
    lVar4 = FUN_0426bcbc(uVar6);
    fVar9 = *(float *)(lVar4 + 0x2b8);
    fVar8 = (float)PlantFramework::Rand(param_1,1.0);
    if (fVar9 <= fVar8) goto LAB_0426cedc;
    iVar2 = getMaxGrowthStage((PlantStrawBurst *)param_1);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
    iVar2 = iVar2 + -1;
  }
  else {
    lVar4 = FUN_0426bcbc(uVar6);
    fVar9 = *(float *)(lVar4 + 700);
    fVar8 = (float)PlantFramework::Rand(param_1,1.0);
    if (fVar9 <= fVar8) {
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      iVar2 = FUN_04267bb0(uVar6);
      goto LAB_0426ceb4;
    }
    iVar2 = getMaxGrowthStage((PlantStrawBurst *)param_1);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  }
  setGrowthStage((PlantStrawBurst *)param_1,iVar2,
                 (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  setState((PlantStrawBurst *)param_1,1);
LAB_0426cedc:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantStrawBurst::fireProjectileCallback(float) */

void __thiscall PlantStrawBurst::fireProjectileCallback(PlantStrawBurst *this,float param_1)

{
  Projectile *this_00;
  undefined4 uVar1;
  float fVar2;
  
  if (*(int *)(*(long *)(this + 0x10) + 200) != 0xd) {
    this_00 = (Projectile *)createStandardProjectile(this);
    uVar1 = 2;
    if (this[0x30] == (PlantStrawBurst)0x0) {
      uVar1 = 1;
    }
    FUN_04267b74(this_00 + 0xb0,uVar1);
    fVar2 = (float)PVZ_T();
    Projectile::SetUpdateTimeOverride(this_00,fVar2 - param_1);
    LobSomething(this,this_00,0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStrawBurst::CancelPlantfood() */

void __thiscall PlantStrawBurst::CancelPlantfood(PlantStrawBurst *this)

{
  undefined4 uVar1;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  uVar1 = getMaxGrowthStage(this);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  setGrowthStage(this,uVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  setState(this,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStrawBurst::touchEnd(Sexy::Touch const&) */

void PlantStrawBurst::touchEnd(Touch *param_1)

{
  char cVar1;
  char cVar2;
  TRect<int> *this;
  wchar16 *pwVar3;
  PlantAnimRig *pPVar4;
  long in_x1;
  code *pcVar5;
  LineBreakCategory *pLVar6;
  LineBreakCategory *pLVar7;
  LineBreakCategory *in_x4;
  long lVar8;
  float fVar9;
  float fVar10;
  LineBreakCategory aLStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  pcVar5 = *(code **)(*(long *)param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x38) = 0;
  local_8 = ___stack_chk_guard;
  cVar1 = (*pcVar5)();
  if (cVar1 == '\0') {
    fVar9 = (float)FUN_04267fb0((float)*(int *)(in_x1 + 0x10));
    fVar10 = (float)FUN_04267fb0((float)*(int *)(in_x1 + 0x14));
    pLVar7 = *(LineBreakCategory **)(param_1 + 0x10);
    this = (TRect<int> *)(**(code **)(*(long *)pLVar7 + 0x178))(pLVar7);
    cVar1 = Sexy::TRect<int>::Contains(this,(int)fVar9,(int)fVar10);
    if ((cVar1 != '\0') &&
       ((lVar8 = *(long *)(gLawnApp + 0x9f0), lVar8 == 0 ||
        ((cVar2 = FUN_04267bd8(*(undefined1 *)(lVar8 + 0x887)), cVar2 != '\0' &&
         (cVar2 = FUN_04267bdc(*(undefined1 *)(lVar8 + 0x888)), cVar2 != '\0')))))) {
      lVar8 = *(long *)(param_1 + 0x10);
      cVar2 = FUN_04269b2c(*(undefined4 *)(lVar8 + 0x28));
      if ((cVar2 == '\0') && (cVar2 = Plant::HasCondition(lVar8,0x11), cVar2 == '\0')) {
        pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
        pLVar6 = aLStack_60;
        std::string::string(asStack_58,"FreePlanting");
        cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                          (pwVar3,(wchar16 *)asStack_58,pLVar6,pLVar7,in_x4);
        if (cVar2 == '\0') {
          cVar2 = isReadyToFire((PlantStrawBurst *)param_1);
          if (cVar2 == '\0') {
            cVar1 = '\0';
            std::string::~string(asStack_58);
            nop();
            goto LAB_0426df30;
          }
        }
        std::string::~string(asStack_58);
        nop();
        pPVar4 = (PlantAnimRig *)FUN_0426bd9c(*(undefined8 *)(param_1 + 0x10));
        pcVar5 = *(code **)(*(long *)pPVar4 + 0x130);
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
        (*pcVar5)(pPVar4,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
        PlantAnimRig::SetState(pPVar4,0xe);
        setState((PlantStrawBurst *)param_1,10);
        goto LAB_0426df30;
      }
    }
  }
  cVar1 = '\0';
LAB_0426df30:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* PlantStrawBurst::onTouchEvent(Sexy::Touch const&) */

undefined8 __thiscall PlantStrawBurst::onTouchEvent(PlantStrawBurst *this,Touch *param_1)

{
  undefined8 uVar1;
  
  if ((*(long *)(this + 0x38) == 0) && (*(int *)(param_1 + 0x30) == 0)) {
    uVar1 = touchBegin(this,param_1);
    return uVar1;
  }
  if (*(long *)(this + 0x38) == *(long *)param_1) {
    if (*(int *)(param_1 + 0x30) == 4) {
      *(undefined8 *)(this + 0x38) = 0;
    }
    else if (*(int *)(param_1 + 0x30) == 3) {
      uVar1 = touchEnd((Touch *)this);
      return uVar1;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStrawBurst::TakeDamage(DamageInfo const&) */

void PlantStrawBurst::TakeDamage(DamageInfo *param_1)

{
  long lVar1;
  long in_x1;
  Point aPStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(*(long *)(param_1 + 0x10) + 200) == 0xd) ||
     (*(int *)(*(long *)(param_1 + 0x10) + 200) == 1)) {
    lVar1 = operator&(*(undefined8 *)(in_x1 + 0x10),2);
    if (lVar1 == 0) {
      setState((PlantStrawBurst *)param_1,0xd);
    }
    else {
      fireSelfDestructProjectile((PlantStrawBurst *)param_1,true);
    }
    Sexy::Point::Point(aPStack_18,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,1.0,0.0);
    DamageInfo::DamageInfo((DamageInfo *)0x0,local_10,local_c);
  }
  else {
    PlantMagicbeans::TakeDamage(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

