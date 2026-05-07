// Class: RichManSquash


/* RichManSquash::SetTurnRightPoint(Sexy::SexyVector3 const&) */

void __thiscall RichManSquash::SetTurnRightPoint(RichManSquash *this,SexyVector3 *param_1)

{
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x58),param_1);
  return;
}


/* RichManSquash::SetTurnLeftPoint(Sexy::SexyVector3 const&) */

void __thiscall RichManSquash::SetTurnLeftPoint(RichManSquash *this,SexyVector3 *param_1)

{
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 100),param_1);
  return;
}


/* RichManSquash::onDraw(Sexy::Graphics*) */

void __thiscall RichManSquash::onDraw(RichManSquash *this,Graphics *param_1)

{
  if (*(StandaloneEffect **)(this + 0x30) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x30),param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManSquash::StaticClassInit() */

void RichManSquash::StaticClassInit(void)

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
    std::string::string(asStack_10,"RichManSquash");
    (*pcVar2)(plVar1,asStack_10,FUN_038e32f0,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RichManSquash::StaticGetClass() */

long * RichManSquash::StaticGetClass(void)

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
  uVar2 = RealObject::StaticGetClass();
  (*pcVar3)(plVar1,"RichManSquash",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RichManSquash::GetClass() const */

long * RichManSquash::GetClass(void)

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
  uVar2 = RealObject::StaticGetClass();
  (*pcVar3)(plVar1,"RichManSquash",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RichManSquash::SetIsHidden(bool) */

void __thiscall RichManSquash::SetIsHidden(RichManSquash *this,bool param_1)

{
  (**(code **)(*(long *)this + 0x80))(this,param_1);
  if (*(StandaloneEffect **)(this + 0x30) != (StandaloneEffect *)0x0) {
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x30),!param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManSquash::PlayIdle() */

void __thiscall RichManSquash::PlayIdle(RichManSquash *this)

{
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x88] == (RichManSquash)0x0) {
    __s = "idle";
  }
  else {
    __s = "idle_left";
  }
  std::string::string(asStack_10,__s);
  nop();
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(*(Effect_PopAnim **)(this + 0x30),asStack_10,0);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManSquash::LandingRight() */

void __thiscall RichManSquash::LandingRight(RichManSquash *this)

{
  bool bVar1;
  Effect_PopAnim *pEVar2;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar2 = *(Effect_PopAnim **)(this + 0x30);
  std::string::string(asStack_10,"jump_down_right");
  Effect_PopAnim::PlaySingleAnimation(pEVar2,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  fVar3 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x3c) = fVar3 + 0.15;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManSquash::JumpLeft() */

void __thiscall RichManSquash::JumpLeft(RichManSquash *this)

{
  bool bVar1;
  Effect_PopAnim *pEVar2;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar2 = *(Effect_PopAnim **)(this + 0x30);
  std::string::string(asStack_10,"jump_up_left");
  Effect_PopAnim::PlaySingleAnimation(pEVar2,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  fVar3 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x3c) = fVar3 + 0.5;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManSquash::LandingLeft() */

void __thiscall RichManSquash::LandingLeft(RichManSquash *this)

{
  bool bVar1;
  Effect_PopAnim *pEVar2;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar2 = *(Effect_PopAnim **)(this + 0x30);
  std::string::string(asStack_10,"jump_down_left");
  Effect_PopAnim::PlaySingleAnimation(pEVar2,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  fVar3 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x3c) = fVar3 + 0.15;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManSquash::JumpRight() */

void __thiscall RichManSquash::JumpRight(RichManSquash *this)

{
  bool bVar1;
  Effect_PopAnim *pEVar2;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar2 = *(Effect_PopAnim **)(this + 0x30);
  std::string::string(asStack_10,"jump_up_right");
  Effect_PopAnim::PlaySingleAnimation(pEVar2,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  fVar3 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x3c) = fVar3 + 0.5;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RichManSquash::DealAirLeft() */

void __thiscall RichManSquash::DealAirLeft(RichManSquash *this)

{
  PopAnimRig *this_00;
  float fVar1;
  
  this_00 = (PopAnimRig *)UIWidget::GetAtlasImage(*(UIWidget **)(this + 0x30));
  PopAnimRig::SetPaused(this_00,false);
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x3c) = fVar1 + 0.5;
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x038e37e0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* RichManSquash::travelToJumpUpDestination() */

void __thiscall RichManSquash::travelToJumpUpDestination(RichManSquash *this)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  float local_1c;
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_18);
  uVar2 = *(undefined4 *)(this + 0x3c);
  auVar1 = PVZ_T();
  local_18 = CurveLerp<float>(auVar1,uVar2,auVar1._0_4_,this + 0x40,this + 0x4c,4);
  uVar2 = *(undefined4 *)(this + 0x3c);
  auVar1 = PVZ_T();
  local_1c = *(float *)(this + 0x50) - 120.0;
  local_14 = CurveLerp<float>(auVar1,uVar2,auVar1._0_4_,this + 0x44,&local_1c,4);
  (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x038e38cc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* RichManSquash::travelToLandingDestination() */

void __thiscall RichManSquash::travelToLandingDestination(RichManSquash *this)

{
  undefined8 *puVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  float local_1c;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_18 = *puVar1;
  uVar4 = *(undefined4 *)(this + 0x3c);
  local_10 = *(undefined4 *)(puVar1 + 1);
  auVar3 = PVZ_T();
  local_1c = *(float *)(this + 0x50) - 120.0;
  fVar2 = CurveLerp<float>(auVar3,uVar4,auVar3._0_4_,&local_1c,this + 0x50,1);
  local_18 = CONCAT44(fVar2,(undefined4)local_18);
  (**(code **)(*(long *)this + 0x78))(this,&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManSquash::Look(bool) */

void __thiscall RichManSquash::Look(RichManSquash *this,bool param_1)

{
  PopAnimRig *pPVar1;
  char *__s;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  this[0x88] = (RichManSquash)param_1;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    __s = "turn";
  }
  else {
    __s = "turn_right";
  }
  std::string::string(asStack_58,__s);
  nop();
  pPVar1 = (PopAnimRig *)UIWidget::GetAtlasImage(*(UIWidget **)(this + 0x30));
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnEffectDone);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<RichManSquash,void(RichManSquash::*)(std::string_const&)>(aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RichManSquash::setState(SquashState) */

void __thiscall RichManSquash::setState(RichManSquash *this,int param_2)

{
  if (*(int *)(this + 0x38) != param_2) {
    *(int *)(this + 0x38) = param_2;
    switch(param_2) {
    case 0:
      PlayIdle(this);
      return;
    case 1:
      Look(this,true);
      return;
    case 2:
      Look(this,false);
      return;
    case 3:
      JumpLeft(this);
      return;
    case 4:
      JumpRight(this);
      return;
    case 5:
    case 6:
      DealAirLeft(this);
      return;
    case 7:
      LandingLeft(this);
      return;
    case 8:
      LandingRight(this);
      return;
    }
  }
  return;
}


/* RichManSquash::RichManSquash() */

void __thiscall RichManSquash::RichManSquash(RichManSquash *this)

{
  undefined4 uVar1;
  
  RealObject::RealObject((RealObject *)this);
  *(undefined ***)this = &PTR_GetClass_066bcff0;
  *(undefined ***)(this + 0x10) = &PTR__RichManSquash_066bd110;
  DVec3::DVec3((DVec3 *)(this + 0x40));
  DVec3::DVec3((DVec3 *)(this + 0x4c));
  DVec3::DVec3((DVec3 *)(this + 0x58));
  DVec3::DVec3((DVec3 *)(this + 100));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  uVar1 = PVZ_EOT();
  this[0x88] = (RichManSquash)0x0;
  *(undefined4 *)(this + 0x3c) = uVar1;
  nop();
  return;
}


/* RichManSquash::StaticNew() */

RichManSquash * RichManSquash::StaticNew(void)

{
  RichManSquash *this;
  
  this = ::operator_new(0x90);
  RichManSquash(this);
  return this;
}


/* RichManSquash::~RichManSquash() */

void __thiscall RichManSquash::~RichManSquash(RichManSquash *this)

{
  *(undefined ***)this = &PTR_GetClass_066bcff0;
  *(undefined ***)(this + 0x10) = &PTR__RichManSquash_066bd110;
  if (*(long **)(this + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x30) + 0x18))();
    *(undefined8 *)(this + 0x30) = 0;
  }
  std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::~vector
            ((vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)(this + 0x70));
  RealObject::~RealObject((RealObject *)this);
  return;
}


/* non-virtual thunk to RichManSquash::~RichManSquash() */

void __thiscall RichManSquash::~RichManSquash(RichManSquash *this)

{
  ~RichManSquash(this + -0x10);
  return;
}


/* RichManSquash::~RichManSquash() */

void __thiscall RichManSquash::~RichManSquash(RichManSquash *this)

{
  ~RichManSquash(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RichManSquash::~RichManSquash() */

void __thiscall RichManSquash::~RichManSquash(RichManSquash *this)

{
  ~RichManSquash(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManSquash::CreateSelfRenderEffect() */

void RichManSquash::CreateSelfRenderEffect(void)

{
  Effect_PopAnim *this;
  ResourceInfo *pRVar1;
  PopAnimRig *pPVar2;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = GameObject::CreateOutsideTable<Effect_PopAnim>();
  if (this != (Effect_PopAnim *)0x0) {
    std::string::string(asStack_18,"POPANIM_EFFECTS_RICHMAN_SQUASH");
    GetPAMByName(asStack_18);
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar1,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    std::string::~string(asStack_18);
    nop();
    Effect_PopAnim::SetCentered(this,true);
    StandaloneEffect::SetKeepAlive((StandaloneEffect *)this,true);
    FUN_038e30e0(this + 0x1c);
    FUN_038e30d4(this + 0x9d);
    pPVar2 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
    std::string::string((string *)aRStack_10,"custom_01");
    PopAnimRig::SetLayerVisibility(pPVar2,(string *)aRStack_10,false);
    std::string::~string((string *)aRStack_10);
    nop();
    pPVar2 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
    std::string::string((string *)aRStack_10,"custom_02");
    PopAnimRig::SetLayerVisibility(pPVar2,(string *)aRStack_10,false);
    std::string::~string((string *)aRStack_10);
    nop();
    pPVar2 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
    std::string::string((string *)aRStack_10,"custom_03");
    PopAnimRig::SetLayerVisibility(pPVar2,(string *)aRStack_10,false);
    std::string::~string((string *)aRStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManSquash::initializeRenderEffect() */

void __thiscall RichManSquash::initializeRenderEffect(RichManSquash *this)

{
  StandaloneEffect *this_00;
  RichManUIMgr *this_01;
  DVec3 aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StandaloneEffect *)CreateSelfRenderEffect();
  if (this_00 != (StandaloneEffect *)0x0) {
    *(StandaloneEffect **)(this + 0x30) = this_00;
    this_01 = (RichManUIMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
    RichManUIMgr::GetPieceConfig(this_01);
    DVec3::DVec3(aDStack_18);
    StandaloneEffect::SetAttached(this_00,(RealObject *)this,(SexyVector3 *)aDStack_18,2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RichManSquash::SetPiecePosition(Sexy::SexyVector3 const&) */

void RichManSquash::SetPiecePosition(SexyVector3 *param_1)

{
  (**(code **)(*(long *)param_1 + 0x78))();
  MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::NotifyMovingFinish,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManSquash::DoJump() */

void __thiscall RichManSquash::DoJump(RichManSquash *this)

{
  vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *this_00;
  char cVar1;
  undefined8 *puVar2;
  SexyVector3 *pSVar3;
  undefined4 uVar4;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)(this + 0x70);
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::empty(this_00);
  if (cVar1 == '\0') {
    puVar2 = (undefined8 *)FUN_038e30d0(*(undefined8 *)(this + 0x70));
    local_18 = *puVar2;
    local_10 = *(undefined4 *)(puVar2 + 1);
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x40),pSVar3);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x4c),(SexyVector3 *)&local_18);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_20,(__normal_iterator *)&local_28);
    std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::erase(this_00,local_20);
    uVar4 = 3;
    if (this[0x88] == (RichManSquash)0x0) {
      uVar4 = 4;
    }
    setState(this,uVar4);
  }
  else {
    setState(this,0);
    MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::NotifyMovingFinish,true)
    ;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RichManSquash::TryJump(std::vector<Sexy::SexyVector3, std::allocator<Sexy::SexyVector3> > const&)
    */

void __thiscall RichManSquash::TryJump(RichManSquash *this,vector *param_1)

{
  std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::operator=
            ((vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)(this + 0x70),param_1);
  DoJump(this);
  return;
}


/* RichManSquash::OnEffectDone(std::string const&) */

void RichManSquash::OnEffectDone(string *param_1)

{
  undefined4 uVar1;
  char cVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  cVar2 = FUN_038e3030(uVar1,1);
  if ((cVar2 == '\0') && (cVar2 = FUN_038e3030(uVar1,2), cVar2 == '\0')) {
    return;
  }
  DoJump((RichManSquash *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManSquash::CheckTurnLeftOrRight() */

void __thiscall RichManSquash::CheckTurnLeftOrRight(RichManSquash *this)

{
  char cVar1;
  undefined4 uVar2;
  FastCurve aFStack_20 [8];
  FastCurve aFStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange(aFStack_20,*(float *)(this + 0x58),*(float *)(this + 0x5c));
  Sexy::FastCurve::SetOutRange(aFStack_18,*(float *)(this + 100),*(float *)(this + 0x68));
  uVar2 = *(undefined4 *)(this + 0x1c);
  local_10 = FUN_038e30f0(*(undefined4 *)(this + 0x18),uVar2,*(undefined4 *)(this + 0x20));
  local_c = uVar2;
  cVar1 = Sexy::SexyVector2::operator==((SexyVector2 *)&local_10,(SexyVector2 *)aFStack_20);
  if (cVar1 == '\0') {
    uVar2 = *(undefined4 *)(this + 0x1c);
    local_10 = FUN_038e30f0(*(undefined4 *)(this + 0x18),uVar2,*(undefined4 *)(this + 0x20));
    local_c = uVar2;
    cVar1 = Sexy::SexyVector2::operator==((SexyVector2 *)&local_10,(SexyVector2 *)aFStack_18);
    if (cVar1 == '\0') {
      DoJump(this);
    }
    else {
      setState(this,1);
    }
  }
  else {
    setState(this,2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RichManSquash::UpdateMotion() */

void __thiscall RichManSquash::UpdateMotion(RichManSquash *this)

{
  float fVar1;
  
  switch(*(undefined4 *)(this + 0x38)) {
  case 3:
    fVar1 = (float)PVZ_T();
    if (*(float *)(this + 0x3c) <= fVar1) {
      setState(this,5);
      return;
    }
    break;
  case 4:
    fVar1 = (float)PVZ_T();
    if (*(float *)(this + 0x3c) <= fVar1) {
      setState(this,6);
      return;
    }
    break;
  case 5:
    travelToJumpUpDestination(this);
    fVar1 = (float)PVZ_T();
    if (*(float *)(this + 0x3c) <= fVar1) {
      setState(this,7);
      return;
    }
    break;
  case 6:
    travelToJumpUpDestination(this);
    fVar1 = (float)PVZ_T();
    if (*(float *)(this + 0x3c) <= fVar1) {
      setState(this,8);
      return;
    }
    break;
  case 7:
  case 8:
    travelToLandingDestination(this);
    fVar1 = (float)PVZ_T();
    if (*(float *)(this + 0x3c) <= fVar1) {
      CheckTurnLeftOrRight(this);
      return;
    }
  }
  return;
}


/* RichManSquash::onUpdate() */

void __thiscall RichManSquash::onUpdate(RichManSquash *this)

{
  UpdateMotion(this);
  if (*(StandaloneEffect **)(this + 0x30) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x30));
    return;
  }
  return;
}

