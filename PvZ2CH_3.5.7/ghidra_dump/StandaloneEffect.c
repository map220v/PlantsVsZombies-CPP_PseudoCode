// Class: StandaloneEffect


/* StandaloneEffect::SetAttachedSyncClipRect(bool) */

void __thiscall StandaloneEffect::SetAttachedSyncClipRect(StandaloneEffect *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 0x10,4,param_1);
  if (!param_1) {
    return;
  }
  syncAttachedClipRect(this);
  return;
}


/* StandaloneEffect::GetScreenSpaceOrigin() const */

StandaloneEffect * __thiscall StandaloneEffect::GetScreenSpaceOrigin(StandaloneEffect *this)

{
  return this + 0x14;
}


/* StandaloneEffect::~StandaloneEffect() */

void __thiscall StandaloneEffect::~StandaloneEffect(StandaloneEffect *this)

{
  *(undefined ***)this = &PTR_GetClass_0684d520;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x40));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* StandaloneEffect::~StandaloneEffect() */

void __thiscall StandaloneEffect::~StandaloneEffect(StandaloneEffect *this)

{
  ~StandaloneEffect(this);
  AK::FreeHook(this);
  return;
}


/* Effect_BouncingArrow* StandaloneEffect::CreateEffect<Effect_BouncingArrow>() */

Effect_BouncingArrow * StandaloneEffect::CreateEffect<Effect_BouncingArrow>(void)

{
  undefined8 uVar1;
  Effect_BouncingArrow *extraout_x0;
  
  uVar1 = Effect_BouncingArrow::StaticGetClass();
  GameObject::Create(uVar1,0x31);
  nop();
  nop();
  return extraout_x0;
}


/* Effect_PopAnim* StandaloneEffect::CreateEffect<Effect_PopAnim>() */

Effect_PopAnim * StandaloneEffect::CreateEffect<Effect_PopAnim>(void)

{
  undefined8 uVar1;
  Effect_PopAnim *extraout_x0;
  
  uVar1 = Effect_PopAnim::StaticGetClass();
  GameObject::Create(uVar1,0x31);
  nop();
  nop();
  return extraout_x0;
}


/* Effect_GroundEffectTide* StandaloneEffect::CreateEffect<Effect_GroundEffectTide>() */

Effect_GroundEffectTide * StandaloneEffect::CreateEffect<Effect_GroundEffectTide>(void)

{
  undefined8 uVar1;
  Effect_GroundEffectTide *extraout_x0;
  
  uVar1 = Effect_GroundEffectTide::StaticGetClass();
  GameObject::Create(uVar1,0x31);
  nop();
  nop();
  return extraout_x0;
}


/* Effect_GroundEffectSurf* StandaloneEffect::CreateEffect<Effect_GroundEffectSurf>() */

Effect_GroundEffectSurf * StandaloneEffect::CreateEffect<Effect_GroundEffectSurf>(void)

{
  undefined8 uVar1;
  Effect_GroundEffectSurf *extraout_x0;
  
  uVar1 = Effect_GroundEffectSurf::StaticGetClass();
  GameObject::Create(uVar1,0x31);
  nop();
  nop();
  return extraout_x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandaloneEffect::StaticClassInit() */

void StandaloneEffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"StandaloneEffect");
    (*pcVar2)(plVar1,asStack_10,FUN_0446e268,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StandaloneEffect::StaticGetClass() */

long * StandaloneEffect::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StandaloneEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StandaloneEffect::GetClass() const */

long * StandaloneEffect::GetClass(void)

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
  (*pcVar3)(plVar1,"StandaloneEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StandaloneEffect::SetVisibility(bool) */

void __thiscall StandaloneEffect::SetVisibility(StandaloneEffect *this,bool param_1)

{
  this[0x88] = (StandaloneEffect)param_1;
  return;
}


/* StandaloneEffect::SetCompletionCallback(RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>
   >) */

void __thiscall
StandaloneEffect::SetCompletionCallback(StandaloneEffect *this,RtReflectionDelegate *param_2)

{
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x40),param_2);
  return;
}


/* StandaloneEffect::SetScreenSpaceOrigin(Sexy::SexyVector2 const&, int) */

void __thiscall
StandaloneEffect::SetScreenSpaceOrigin(StandaloneEffect *this,SexyVector2 *param_1,int param_2)

{
  *(undefined8 *)(this + 0x14) = *(undefined8 *)param_1;
  *(int *)(this + 0x20) = param_2;
  (**(code **)(*(long *)this + 0x90))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandaloneEffect::SetBoardSpaceOrigin(Sexy::SexyVector3 const&, int) */

void __thiscall
StandaloneEffect::SetBoardSpaceOrigin(StandaloneEffect *this,SexyVector3 *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)FUN_0446d574(*(undefined4 *)param_1);
  fVar2 = (float)FUN_0446d574(*(float *)(param_1 + 4) - *(float *)(param_1 + 8));
  Sexy::FastCurve::SetOutRange(aFStack_10,fVar1,fVar2);
  if (param_2 == -1) {
    param_2 = BoardEntity::CalcRenderOrderFromPosition(param_1);
  }
  SetScreenSpaceOrigin(this,(SexyVector2 *)aFStack_10,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandaloneEffect::GetBoardSpaceOrigin() const */

void __thiscall StandaloneEffect::GetBoardSpaceOrigin(StandaloneEffect *this)

{
  float fVar1;
  float fVar2;
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)FUN_0446d584(*(undefined4 *)(this + 0x14));
  fVar2 = (float)FUN_0446d584(*(undefined4 *)(this + 0x18));
  Sexy::FastCurve::SetOutRange(local_10,fVar1,fVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandaloneEffect::SetAttachmentOffset(Sexy::SexyVector3 const&) */

void __thiscall StandaloneEffect::SetAttachmentOffset(StandaloneEffect *this,SexyVector3 *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)FUN_0446d574(*(undefined4 *)param_1);
  fVar3 = (float)FUN_0446d574(*(float *)(param_1 + 4) - *(float *)(param_1 + 8));
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,fVar2,fVar3);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x30) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StandaloneEffect::SetClipRect(Sexy::TRect<int> const&) */

void __thiscall StandaloneEffect::SetClipRect(StandaloneEffect *this,TRect *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x8c) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x94) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandaloneEffect::GetAttachmentOffset() */

void __thiscall StandaloneEffect::GetAttachmentOffset(StandaloneEffect *this)

{
  float fVar1;
  float fVar2;
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)FUN_0446d584(*(undefined4 *)(this + 0x30));
  fVar2 = (float)FUN_0446d584(*(undefined4 *)(this + 0x34));
  Sexy::FastCurve::SetOutRange(local_10,fVar1,fVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandaloneEffect::ClearClipRect() */

void __thiscall StandaloneEffect::ClearClipRect(StandaloneEffect *this)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_18);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x8c) = local_18;
  *(undefined8 *)(this + 0x94) = uStack_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StandaloneEffect::SetDestroyWhenUnattached(bool) */

void __thiscall StandaloneEffect::SetDestroyWhenUnattached(StandaloneEffect *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 0x10,0x100,param_1);
  return;
}


/* StandaloneEffect::ClearAttachedTo() */

void __thiscall StandaloneEffect::ClearAttachedTo(StandaloneEffect *this)

{
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x28));
  SetFlag<DebugLogFlags>(this + 0x10,2,0);
  return;
}


/* StandaloneEffect::SetIsScreenSpaceEffect(bool) */

void __thiscall StandaloneEffect::SetIsScreenSpaceEffect(StandaloneEffect *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 0x10,0x80,param_1);
  return;
}


/* StandaloneEffect::SetManuallyDrawn(bool) */

void __thiscall StandaloneEffect::SetManuallyDrawn(StandaloneEffect *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 0x10,0x40,param_1);
  return;
}


/* StandaloneEffect::CancelCompletion() */

void __thiscall StandaloneEffect::CancelCompletion(StandaloneEffect *this)

{
  SetFlag<DebugLogFlags>(this + 0x10,0x10,1);
  return;
}


/* StandaloneEffect::SetKeepAlive(bool) */

void __thiscall StandaloneEffect::SetKeepAlive(StandaloneEffect *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 0x10,0x20,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandaloneEffect::SetAttached(RealObject*, Sexy::SexyVector2 const&, int) */

void __thiscall
StandaloneEffect::SetAttached
          (StandaloneEffect *this,RealObject *param_1,SexyVector2 *param_2,int param_3)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)param_2;
  *(int *)(this + 0x38) = param_3;
  SetFlag<DebugLogFlags>(this + 0x10,2,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandaloneEffect::SetAttached(RealObject*, Sexy::SexyVector3 const&, int) */

void __thiscall
StandaloneEffect::SetAttached
          (StandaloneEffect *this,RealObject *param_1,SexyVector3 *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)FUN_0446d574(*(undefined4 *)param_2);
  fVar2 = (float)FUN_0446d574(*(float *)(param_2 + 4) - *(float *)(param_2 + 8));
  Sexy::FastCurve::SetOutRange(aFStack_10,fVar1,fVar2);
  SetAttached(this,param_1,(SexyVector2 *)aFStack_10,param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StandaloneEffect::IsScreenSpaceEffect() const */

bool __thiscall StandaloneEffect::IsScreenSpaceEffect(StandaloneEffect *this)

{
  bool bVar1;
  
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x10),0x80);
  return bVar1;
}


/* StandaloneEffect::IsManuallyDrawn() const */

bool __thiscall StandaloneEffect::IsManuallyDrawn(StandaloneEffect *this)

{
  bool bVar1;
  
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x10),0x40);
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandaloneEffect::syncAttachedClipRect() */

void __thiscall StandaloneEffect::syncAttachedClipRect(StandaloneEffect *this)

{
  char cVar1;
  bool *pbVar2;
  char local_19;
  TRect aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28));
  if (cVar1 != '\0') {
    pbVar2 = (bool *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    RealObject::GetDrawClipRect(pbVar2);
    if (local_19 != '\0') {
      SetClipRect(this,aTStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StandaloneEffect::getDt() */

void StandaloneEffect::getDt(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  FUN_03188134(*(undefined4 *)(lVar1 + 0x28));
  return;
}


/* StandaloneEffect::StandaloneEffect() */

void __thiscall StandaloneEffect::StandaloneEffect(StandaloneEffect *this)

{
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_0684d520;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x14));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x30));
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)(this + 0x40));
  Sexy::Insets::Insets((Insets *)(this + 0x8c));
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x1c) = 0xffffffff;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x88] = (StandaloneEffect)0x1;
  this[0x9c] = (StandaloneEffect)0x0;
  this[0x9d] = (StandaloneEffect)0x0;
  return;
}


/* StandaloneEffect::StaticNew() */

StandaloneEffect * StandaloneEffect::StaticNew(void)

{
  StandaloneEffect *this;
  
  this = ::operator_new(0xa0);
  StandaloneEffect(this);
  return this;
}


/* StandaloneEffect::GetAttachedTo() const */

ResourceInfo * __thiscall StandaloneEffect::GetAttachedTo(StandaloneEffect *this)

{
  bool bVar1;
  ResourceInfo *pRVar2;
  
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x10),2);
  if (bVar1) {
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x28));
    return pRVar2;
  }
  return (ResourceInfo *)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandaloneEffect::FollowAttachment() */

void __thiscall StandaloneEffect::FollowAttachment(StandaloneEffect *this)

{
  StandaloneEffect SVar1;
  int iVar2;
  ResourceInfo *this_00;
  float *pfVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined8 local_18;
  undefined4 local_10;
  float fStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x28));
  if (this_00 == (ResourceInfo *)0x0) {
    SetFlag<DebugLogFlags>(this + 0x10,2,0);
  }
  else {
    fVar6 = *(float *)(this_00 + 0x1c);
    uVar4 = FUN_0446d4a8(*(undefined4 *)(this_00 + 0x18),fVar6,*(undefined4 *)(this_00 + 0x20));
    local_18 = CONCAT44(fVar6,uVar4);
    if (this[0x9c] == (StandaloneEffect)0x0) {
      SVar1 = this[0x9d];
    }
    else {
      pfVar3 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this_00);
      fVar6 = pfVar3[1];
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,*pfVar3,fVar6);
      local_18 = CONCAT44(fStack_c,local_10);
      SVar1 = this[0x9d];
    }
    if (SVar1 == (StandaloneEffect)0x0) {
      fVar5 = (float)FUN_0446d574(0x3f800000);
      uVar4 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_18,fVar5);
      local_18 = CONCAT44(fVar6,uVar4);
    }
    local_10 = Sexy::SexyVector2::operator+((SexyVector2 *)&local_18,(SexyVector2 *)(this + 0x30));
    fStack_c = fVar6;
    iVar2 = (**(code **)(*(long *)this_00 + 200))(this_00);
    SetScreenSpaceOrigin(this,(SexyVector2 *)&local_10,iVar2 + *(int *)(this + 0x38));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StandaloneEffect::Update() */

void __thiscall StandaloneEffect::Update(StandaloneEffect *this)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x10),2);
  if (bVar1) {
    FollowAttachment(this);
    bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x10),4);
    if (bVar1) {
      syncAttachedClipRect(this);
    }
  }
  (**(code **)(*(long *)this + 0x98))(this);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28));
  if ((cVar2 == '\0') && (bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x10),0x100), bVar1)) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandaloneEffect::AddToRenderQueue(RenderQueue*) */

void __thiscall StandaloneEffect::AddToRenderQueue(StandaloneEffect *this,RenderQueue *param_1)

{
  char cVar1;
  undefined4 uVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsManuallyDrawn(this);
  if (cVar1 == '\0') {
    uVar2 = FUN_0446d490(*(undefined4 *)(this + 0x1c),this + 0x20);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,Draw);
    Sexy::Delegate1<Sexy::Graphics*>::
    Delegate1<StandaloneEffect,void(StandaloneEffect::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,uVar2,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandaloneEffect::Draw(Sexy::Graphics*) */

void __thiscall StandaloneEffect::Draw(StandaloneEffect *this,Graphics *param_1)

{
  StandaloneEffect SVar1;
  char cVar2;
  ResourceInfo *this_00;
  Zombie *this_01;
  long lVar3;
  Graphics3D *pGVar4;
  GraphicsAutoState aGStack_38 [8];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x28));
  if ((this_00 == (ResourceInfo *)0x0) ||
     (this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)this_00), this_01 == (Zombie *)0x0)) {
LAB_0446e01c:
    SVar1 = this[0x88];
  }
  else {
    lVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this_01);
    if (-5.0 <= *(float *)(lVar3 + 8)) goto LAB_0446e01c;
    if (*(float *)(lVar3 + 8) < *(float *)(this + 0x34)) goto LAB_0446e024;
    SVar1 = this[0x88];
  }
  if (SVar1 != (StandaloneEffect)0x0) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
    cVar2 = IsScreenSpaceEffect(this);
    if (cVar2 != '\0') {
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,true);
      pGVar4 = (Graphics3D *)Sexy::Graphics::Get3D(param_1);
      Sexy::Graphics3D::PushTransform(pGVar4,(SexyMatrix3 *)aSStack_30,false);
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    if ((*(int *)(this + 0x94) != 0) && (*(int *)(this + 0x98) != 0)) {
      Sexy::Graphics::SetClipRect(param_1,(TRect *)(this + 0x8c));
    }
    (**(code **)(*(long *)this + 0xa0))(this,param_1);
    cVar2 = IsScreenSpaceEffect(this);
    if (cVar2 != '\0') {
      pGVar4 = (Graphics3D *)Sexy::Graphics::Get3D(param_1);
      Sexy::Graphics3D::PopTransform(pGVar4);
    }
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  }
LAB_0446e024:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* StandaloneEffect::triggerCompletion() */

void __thiscall StandaloneEffect::triggerCompletion(StandaloneEffect *this)

{
  RtReflectionDelegate *this_00;
  bool bVar1;
  int iVar2;
  long lVar3;
  Delegate1wRet<bool,SexyURL_const&> *this_01;
  undefined4 uVar4;
  
  this_00 = (RtReflectionDelegate *)(this + 0x40);
  iVar2 = ::RtReflectionDelegate::operator_cast_to_int(this_00);
  if (iVar2 == 0) {
    uVar4 = *(undefined4 *)(this + 0x10);
    bVar1 = TestFlag<VaseFlags>(uVar4,0x10);
    if (bVar1) {
LAB_0446e24c:
      SetFlag<DebugLogFlags>(this + 0x10,0x10,0);
      return;
    }
  }
  else {
    SetFlag<DebugLogFlags>(this + 0x10,8,1);
    lVar3 = RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::TryGetDelegate
                      ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)this_00);
    if (lVar3 != 0) {
      this_01 = (Delegate1wRet<bool,SexyURL_const&> *)
                RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::GetDelegate
                          ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)this_00);
      Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(this_01,(SexyURL *)this);
    }
    SetFlag<DebugLogFlags>(this + 0x10,8,0);
    uVar4 = *(undefined4 *)(this + 0x10);
    bVar1 = TestFlag<VaseFlags>(uVar4,0x10);
    if (bVar1) goto LAB_0446e24c;
  }
  bVar1 = TestFlag<VaseFlags>(uVar4,0x20);
  if (bVar1) {
    return;
  }
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}

