// Class: RealObject


/* RealObject::onChangeTeams(TeamFlags, TeamFlags) */

void RealObject::onChangeTeams(void)

{
  return;
}


/* RealObject::GetCollisionFlags() const */

undefined8 RealObject::GetCollisionFlags(void)

{
  return 0;
}


/* RealObject::SetHidden(bool) */

void __thiscall RealObject::SetHidden(RealObject *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x28),4);
  (**(code **)(*(long *)this + 0xe0))(this,param_1,bVar1);
  SetFlag<DebugLogFlags>(this + 0x28,4,param_1);
  return;
}


/* RealObject::SetDisableSnapToGround(bool) */

void __thiscall RealObject::SetDisableSnapToGround(RealObject *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 0x28,2,param_1);
  return;
}


/* RealObject::Draw(Sexy::Graphics*) */

void RealObject::Draw(Graphics *param_1)

{
  (**(code **)(*(long *)param_1 + 0xe8))();
  return;
}


/* non-virtual thunk to RealObject::Draw(Sexy::Graphics*) */

void __thiscall RealObject::Draw(RealObject *this,Graphics *param_1)

{
  Draw((Graphics *)(this + -0x10));
  return;
}


/* RealObject::DrawShadow(Sexy::Graphics*) */

void RealObject::DrawShadow(Graphics *param_1)

{
  (**(code **)(*(long *)param_1 + 0xf0))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RealObject::calcTideDepth(Sexy::SexyVector3 const&, float) */

void __thiscall RealObject::calcTideDepth(RealObject *this,SexyVector3 *param_1,float param_2)

{
  SexyVector3 *pSVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_18 [12];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar1 = (SexyVector3 *)Board::FindRegionWithFlags(*(undefined8 *)(gLawnApp + 0x9f0),param_1,2);
  if (pSVar1 == (SexyVector3 *)0x0) {
    fVar2 = 0.0;
  }
  else {
    if (*(code **)(*(long *)pSVar1 + 0x90) == BoardRegion::GetGroundHeightOffsetFraction) {
      fVar2 = (float)BoardRegion::GetGroundHeightOffsetFraction(pSVar1);
    }
    else {
      fVar2 = (float)(**(code **)(*(long *)pSVar1 + 0x90))(pSVar1,param_1);
    }
    fVar3 = (float)(**(code **)(*(long *)this + 0x100))(this);
    (**(code **)(*(long *)this + 0xb0))(auStack_18,this);
    fVar2 = (fVar3 * (float)local_c - param_2) * fVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar2);
}


/* RealObject::SetPosition(Sexy::SexyVector3 const&) */

void __thiscall RealObject::SetPosition(RealObject *this,SexyVector3 *param_1)

{
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x18),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RealObject::StaticClassInit() */

void RealObject::StaticClassInit(void)

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
    std::string::string(asStack_10,"RealObject");
    (*pcVar2)(plVar1,asStack_10,FUN_03b80a3c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RealObject::StaticGetClass() */

long * RealObject::StaticGetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"RealObject",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RealObject::GetClass() const */

long * RealObject::GetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"RealObject",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RealObject::IsOnWaterTile(Sexy::SexyVector3 const&) const */

void __thiscall RealObject::IsOnWaterTile(RealObject *this,SexyVector3 *param_1)

{
  Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),param_1);
  return;
}


/* RealObject::CalcGroundZHeight(Sexy::SexyVector3 const&) */

undefined1  [16] __thiscall RealObject::CalcGroundZHeight(RealObject *this,SexyVector3 *param_1)

{
  char cVar1;
  undefined1 auVar2 [16];
  
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) == '\0') {
    cVar1 = (**(code **)(*(long *)this + 0xa0))(this);
    auVar2 = ZEXT816(0);
  }
  else {
    auVar2 = Board::calculateRoofOffsetZ(*(float *)param_1);
    cVar1 = (**(code **)(*(long *)this + 0xa0))(this);
  }
  if ((cVar1 != '\0') && (cVar1 = IsOnWaterTile(this,param_1), cVar1 != '\0')) {
    auVar2 = (**(code **)(*(long *)this + 0x108))(0,this,param_1);
    return auVar2;
  }
  return auVar2;
}


/* RealObject::CalcGridPosition() const */

void RealObject::CalcGridPosition(void)

{
  int iVar1;
  int iVar2;
  long in_x0;
  Point *in_x8;
  
  iVar1 = BoardTransforms::BoardSpaceToGridXUnbounded(*(float *)(in_x0 + 0x18));
  iVar2 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(in_x0 + 0x1c));
  Sexy::Point::Point(in_x8,iVar1,iVar2);
  return;
}


/* RealObject::calcCollisionRect() */

void RealObject::calcCollisionRect(void)

{
  long in_x0;
  Insets *in_x8;
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(in_x0 + 0x1c);
  fVar1 = (float)FUN_03b802c4(*(undefined4 *)(in_x0 + 0x18),fVar2,*(undefined4 *)(in_x0 + 0x20));
  Sexy::Insets::Insets(in_x8,(int)fVar1,(int)fVar2,1,1);
  return;
}


/* RealObject::ShouldDrawShadow() const */

byte __thiscall RealObject::ShouldDrawShadow(RealObject *this)

{
  char cVar1;
  byte bVar2;
  SexyVector3 *pSVar3;
  
  cVar1 = FUN_03b80664(*(undefined4 *)(this + 0x28));
  bVar2 = 0;
  if (cVar1 == '\0') {
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    bVar2 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),pSVar3);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* RealObject::SnapToGround(bool) */

void __thiscall RealObject::SnapToGround(RealObject *this,bool param_1)

{
  bool bVar1;
  SexyVector3 *pSVar2;
  float fVar3;
  
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x28),2);
  if (bVar1) {
    return;
  }
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  fVar3 = (float)CalcGroundZHeight(this,pSVar2);
  if (param_1) {
    if (fVar3 <= *(float *)(pSVar2 + 8)) {
      return;
    }
    *(float *)(this + 0x20) = fVar3;
  }
  else {
    *(float *)(this + 0x20) = fVar3;
  }
  return;
}


/* RealObject::IsOnOpposingTeam(TeamFlags) const */

void RealObject::IsOnOpposingTeam(long param_1)

{
  TeamsAreOpposing(*(undefined4 *)(param_1 + 0x24));
  return;
}


/* RealObject::IsOnOpposingTeam(RealObject const*) const */

void __thiscall RealObject::IsOnOpposingTeam(RealObject *this,RealObject *param_1)

{
  IsOnOpposingTeam(this,*(undefined4 *)(param_1 + 0x24));
  return;
}


/* RealObject::IsOnTeam(TeamFlags) const */

bool RealObject::IsOnTeam(long param_1)

{
  bool bVar1;
  
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(param_1 + 0x24));
  return bVar1;
}


/* RealObject::JoinTeam(TeamFlags) */

void __thiscall RealObject::JoinTeam(RealObject *this,undefined4 param_2)

{
  RealObject *pRVar1;
  undefined4 uVar2;
  bool bVar3;
  
  bVar3 = TestFlag<VaseFlags>(param_2,1);
  uVar2 = *(undefined4 *)(this + 0x24);
  pRVar1 = this + 0x24;
  if (bVar3) {
    SetFlag<DebugLogFlags>(pRVar1,2,0);
  }
  bVar3 = TestFlag<VaseFlags>(param_2,2);
  if (bVar3) {
    SetFlag<DebugLogFlags>(pRVar1,1,0);
  }
  SetFlag<DebugLogFlags>(pRVar1,param_2,1);
  if (*(code **)(*(long *)this + 0xd8) != onChangeTeams) {
    (**(code **)(*(long *)this + 0xd8))(this,uVar2,*(undefined4 *)(this + 0x24));
  }
  return;
}


/* RealObject::LeaveTeam(TeamFlags) */

void __thiscall RealObject::LeaveTeam(RealObject *this,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(this + 0x24);
  SetFlag<DebugLogFlags>(this + 0x24,param_2,0);
  if (*(code **)(*(long *)this + 0xd8) != onChangeTeams) {
    (**(code **)(*(long *)this + 0xd8))(this,uVar1,*(undefined4 *)(this + 0x24));
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RealObject::GetDrawClipRect(bool&) */

void RealObject::GetDrawClipRect(bool *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  float *pfVar3;
  undefined1 *in_x1;
  Insets *in_x8;
  float fVar4;
  Insets aIStack_18 [16];
  long local_8;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  local_8 = ___stack_chk_guard;
  *in_x1 = 0;
  bVar2 = TestFlag<VaseFlags>(uVar1,1);
  if (bVar2) {
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    if (param_1[0x2c] == false) {
      fVar4 = 395.0;
    }
    else {
      fVar4 = 60.0;
    }
    Sexy::Insets::Insets(aIStack_18,(int)(*pfVar3 - 400.0),(int)(pfVar3[1] - fVar4),800,400);
    fVar4 = (float)FUN_03b80398();
    Sexy::TRect<int>::Scale((TRect<int> *)aIStack_18,(double)fVar4,(double)fVar4);
    *in_x1 = 1;
    Sexy::Insets::Insets(in_x8,aIStack_18);
  }
  else {
    Sexy::Insets::Insets(in_x8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RealObject::onApplyDrawClipRect(Sexy::Graphics*) */

void __thiscall RealObject::onApplyDrawClipRect(RealObject *this,Graphics *param_1)

{
  char local_19;
  TRect aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetDrawClipRect((bool *)this);
  if (local_19 != '\0') {
    Sexy::Graphics::SetClipRect(param_1,aTStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RealObject::AddToRenderQueue(RenderQueue*) */

void __thiscall RealObject::AddToRenderQueue(RealObject *this,RenderQueue *param_1)

{
  char cVar1;
  undefined4 uVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03b80664(*(undefined4 *)(this + 0x28));
  if (cVar1 == '\0') {
    uVar2 = (**(code **)(*(long *)(this + 0x10) + 0x18))(this + 0x10);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x90);
    Sexy::Delegate1<Sexy::Graphics*>::Delegate1<RealObject,void(RealObject::*)(Sexy::Graphics*)>
              (aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,uVar2,aDStack_38);
  }
  cVar1 = (**(code **)(*(long *)this + 0x98))(this);
  if (cVar1 != '\0') {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,DrawShadow);
    Sexy::Delegate1<Sexy::Graphics*>::Delegate1<RealObject,void(RealObject::*)(Sexy::Graphics*)>
              (aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,0x493e2,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RealObject::RealObject() */

void __thiscall RealObject::RealObject(RealObject *this)

{
  void *pvVar1;
  Renderable *extraout_x1;
  
  GameObject::GameObject((GameObject *)this);
  Renderable::Renderable((Renderable *)(this + 0x10),extraout_x1);
  *(undefined ***)this = &PTR_GetClass_06734b90;
  *(undefined ***)(this + 0x10) = &PTR__RealObject_06734cb0;
  DVec3::DVec3((DVec3 *)(this + 0x18));
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x2c] = (RealObject)0x0;
  pvVar1 = (void *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::RegisterForAudio(pvVar1);
  return;
}


/* RealObject::StaticNew() */

RealObject * RealObject::StaticNew(void)

{
  RealObject *this;
  
  this = ::operator_new(0x30);
  RealObject(this);
  return this;
}


/* RealObject::~RealObject() */

void __thiscall RealObject::~RealObject(RealObject *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR_GetClass_06734b90;
  *(undefined ***)(this + 0x10) = &PTR__RealObject_06734cb0;
  pvVar1 = (void *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::UnregisterForAudio(pvVar1);
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* non-virtual thunk to RealObject::~RealObject() */

void __thiscall RealObject::~RealObject(RealObject *this)

{
  ~RealObject(this + -0x10);
  return;
}


/* RealObject::~RealObject() */

void __thiscall RealObject::~RealObject(RealObject *this)

{
  ~RealObject(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RealObject::~RealObject() */

void __thiscall RealObject::~RealObject(RealObject *this)

{
  ~RealObject(this + -0x10);
  return;
}


/* RealObject::SendPositionalAudioValue() */

void __thiscall RealObject::SendPositionalAudioValue(RealObject *this)

{
  AudioMgr *this_00;
  SexyVector3 *pSVar1;
  
  this_00 = (AudioMgr *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  AudioMgr::SendPositionalAudioValue(this_00,this,pSVar1);
  return;
}


/* RealObject::PlayPositionalSound(std::string const&, float) */

void __thiscall RealObject::PlayPositionalSound(RealObject *this,string *param_1,float param_2)

{
  string *psVar1;
  double dVar2;
  
  dVar2 = (double)(**(code **)(*gLawnApp + 0x1e0))(gLawnApp);
  if (dVar2 <= 0.0) {
    return;
  }
  SendPositionalAudioValue(this);
  if (0.0 < param_2) {
    psVar1 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEventThrottled(psVar1,param_2,param_1);
    return;
  }
  psVar1 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(psVar1,param_1);
  return;
}


/* RealObject::SetUseGroundClipRect(bool) */

void __thiscall RealObject::SetUseGroundClipRect(RealObject *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 0x28,1,param_1);
  return;
}


/* RealObject::RealObject(RealObject const&) */

void __thiscall RealObject::RealObject(RealObject *this,RealObject *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  RealObject RVar4;
  
  GameObject::GameObject((GameObject *)this,(GameObject *)param_1);
  Renderable::Renderable((Renderable *)(this + 0x10),(Renderable *)(param_1 + 0x10));
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  RVar4 = param_1[0x2c];
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  *(undefined ***)this = &PTR_GetClass_06734b90;
  *(undefined ***)(this + 0x10) = &PTR__RealObject_06734cb0;
  *(undefined4 *)(this + 0x20) = uVar3;
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 0x28) = uVar2;
  this[0x2c] = RVar4;
  return;
}


/* RealObject::TEMPNAMEPLACEHOLDERVALUE(RealObject const&) */

RealObject * __thiscall RealObject::operator=(RealObject *this,RealObject *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  GameObject::operator=((GameObject *)this,(GameObject *)param_1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x18),(SexyVector3 *)(param_1 + 0x18));
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  this[0x2c] = param_1[0x2c];
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 0x28) = uVar2;
  return this;
}

