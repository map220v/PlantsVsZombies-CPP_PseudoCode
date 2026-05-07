// Class: ZombieCamelTouch


/* ZombieCamelTouch::SetCardType(CardType) */

void __thiscall ZombieCamelTouch::SetCardType(ZombieCamelTouch *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x810) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelTouch::getSegmentTypeName(ZombieCamelSegmentType) */

void ZombieCamelTouch::getSegmentTypeName(string *param_1)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(param_1,"camel_segment_touch");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* ZombieCamelTouch::updateState_WaitingToRise() */

void __thiscall ZombieCamelTouch::updateState_WaitingToRise(ZombieCamelTouch *this)

{
  float fVar1;
  
  fVar1 = (float)Zombie::getTimeInState((Zombie *)this);
  if (fVar1 <= *(float *)(this + 0x818)) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x22,0);
  return;
}


/* ZombieCamelTouch::ShouldDrawShadow() const */

undefined8 __thiscall ZombieCamelTouch::ShouldDrawShadow(ZombieCamelTouch *this)

{
  char cVar1;
  undefined8 uVar2;
  float fVar3;
  
  cVar1 = Zombie::isInState((Zombie *)this,0x21);
  if (((cVar1 == '\0') && (cVar1 = Zombie::isInState((Zombie *)this,0x22), cVar1 == '\0')) &&
     ((fVar3 = (float)PVZ_EOT(), *(float *)(this + 0x81c) != fVar3 ||
      (this[0x831] != (ZombieCamelTouch)0x0)))) {
    uVar2 = Zombie::ShouldDrawShadow((Zombie *)this);
    return uVar2;
  }
  return 0;
}


/* ZombieCamelTouch::SetIsTutorialCamel(bool) */

void __thiscall ZombieCamelTouch::SetIsTutorialCamel(ZombieCamelTouch *this,bool param_1)

{
  this[0x820] = (ZombieCamelTouch)param_1;
  return;
}


/* ZombieCamelTouch::RiseFromGround(Sexy::SexyVector3 const&, float) */

void ZombieCamelTouch::RiseFromGround(SexyVector3 *param_1,float param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)param_1 + 0x78);
  *(float *)(param_1 + 0x818) = param_2;
  (*pcVar1)();
  Zombie::setZombieState((Zombie *)param_1,0x21,0);
  return;
}


/* ZombieCamelTouch::HasBeenMatched() */

ZombieCamelTouch __thiscall ZombieCamelTouch::HasBeenMatched(ZombieCamelTouch *this)

{
  return this[0x830];
}


/* ZombieCamelTouch::GetCardType() */

undefined4 __thiscall ZombieCamelTouch::GetCardType(ZombieCamelTouch *this)

{
  return *(undefined4 *)(this + 0x810);
}


/* ZombieCamelTouch::onExitState_WaitingToRise(ZombieState) */

void ZombieCamelTouch::onExitState_WaitingToRise(RealObject *param_1)

{
  RealObject::SetUseGroundClipRect(param_1,false);
  RealObject::SetDisableSnapToGround(param_1,false);
  return;
}


/* ZombieCamelTouch::ZombieCamelTouch() */

void __thiscall ZombieCamelTouch::ZombieCamelTouch(ZombieCamelTouch *this)

{
  ZombieCamel::ZombieCamel((ZombieCamel *)this);
  *(undefined ***)this = &PTR_GetClass_0689c8c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCamelTouch_0689d3a0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x828));
  return;
}


/* ZombieCamelTouch::StaticNew() */

ZombieCamelTouch * ZombieCamelTouch::StaticNew(void)

{
  ZombieCamelTouch *this;
  
  this = ::operator_new(0x838);
  ZombieCamelTouch(this);
  return this;
}


/* ZombieCamelTouch::~ZombieCamelTouch() */

void __thiscall ZombieCamelTouch::~ZombieCamelTouch(ZombieCamelTouch *this)

{
  *(undefined ***)this = &PTR_GetClass_0689c8c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCamelTouch_0689d3a0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x828));
  ZombieCamel::~ZombieCamel((ZombieCamel *)this);
  return;
}


/* non-virtual thunk to ZombieCamelTouch::~ZombieCamelTouch() */

void __thiscall ZombieCamelTouch::~ZombieCamelTouch(ZombieCamelTouch *this)

{
  ~ZombieCamelTouch(this + -0x10);
  return;
}


/* ZombieCamelTouch::~ZombieCamelTouch() */

void __thiscall ZombieCamelTouch::~ZombieCamelTouch(ZombieCamelTouch *this)

{
  ~ZombieCamelTouch(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieCamelTouch::~ZombieCamelTouch() */

void __thiscall ZombieCamelTouch::~ZombieCamelTouch(ZombieCamelTouch *this)

{
  ~ZombieCamelTouch(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelTouch::onDraw(Sexy::Graphics*) */

void __thiscall ZombieCamelTouch::onDraw(ZombieCamelTouch *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  PopAnimRig *this_01;
  StandaloneEffect *pSVar2;
  float fVar3;
  float fVar4;
  float local_20;
  float local_1c;
  string asStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x828);
  local_8 = ___stack_chk_guard;
  Zombie::onDraw((Graphics *)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    local_20 = 0.0;
    local_1c = 0.0;
    this_01 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
    std::string::string(asStack_18,"zombie_camel_board_head_etching_norm");
    PopAnimRig::CalcLayerTranslation(this_01,asStack_18,&local_20,&local_1c);
    std::string::~string(asStack_18);
    nop();
    fVar3 = (float)FUN_04686e3c(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                                *(undefined4 *)(this + 0x20));
    fVar4 = *(float *)(this + 0x1c);
    FUN_04686e3c(*(undefined4 *)(this + 0x18),fVar4,*(undefined4 *)(this + 0x20));
    pSVar2 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)asStack_18,fVar3 + local_20 + -150.0,fVar4 + local_1c + -114.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin(pSVar2,(SexyVector3 *)asStack_18,-1);
    Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)asStack_18,param_1);
    (**(code **)(*(long *)this + 0xf8))(this,param_1);
    pSVar2 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    StandaloneEffect::Draw(pSVar2,param_1);
    Sexy::Graphics::ClearClipRect(param_1);
    Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCamelTouch::onExitState_RisingFromGround(ZombieState) */

void ZombieCamelTouch::onExitState_RisingFromGround(Zombie *param_1)

{
  PopAnimRig *this;
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(param_1 + 0x81c) = uVar1;
  this = (PopAnimRig *)Zombie::GetAnimRig(param_1);
  PopAnimRig::SetPaused(this,false);
  RealObject::SetUseGroundClipRect((RealObject *)param_1,false);
  RealObject::SetDisableSnapToGround((RealObject *)param_1,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelTouch::onDrawShadow(Sexy::Graphics*) */

void __thiscall ZombieCamelTouch::onDrawShadow(ZombieCamelTouch *this,Graphics *param_1)

{
  float fVar1;
  undefined4 local_24;
  GraphicsAutoState aGStack_20 [8];
  undefined4 local_18 [3];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  PVZ_T();
  local_24 = 0;
  local_18[0] = 0x3f800000;
  fVar1 = CurveEvaluate<float>(&local_24,(Color *)local_18,4);
  Sexy::Color::Color((Color *)local_18,1);
  local_c = (int)(fVar1 * 255.0);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  Sexy::Graphics::SetColor(param_1,(Color *)local_18);
  Zombie::onDrawShadow((Zombie *)this,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelTouch::updateState_RisingFromGround() */

void __thiscall ZombieCamelTouch::updateState_RisingFromGround(ZombieCamelTouch *this)

{
  float *pfVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float local_1c;
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_1c = (float)Zombie::getTimeInState((Zombie *)this);
  local_18._0_4_ = 1.0;
  pfVar1 = eastl::min_alt<float>(&local_1c,(float *)&local_18);
  fVar4 = *pfVar1;
  local_18 = (ulong)local_18._4_4_ << 0x20;
  local_1c = -120.0;
  fVar3 = CurveLerp<float>(0,0x3f800000,fVar4,&local_1c,&local_18,3);
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_18 = *puVar2;
  local_10 = fVar3;
  (**(code **)(*(long *)this + 0x78))(this,&local_18);
  if (1.0 <= fVar4) {
    if (this[0x820] == (ZombieCamelTouch)0x0) {
      (**(code **)(*(long *)this + 0x260))(this);
    }
    else {
      (**(code **)(*(long *)this + 600))(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelTouch::onEnterState_WaitingToRise(ZombieState) */

void ZombieCamelTouch::onEnterState_WaitingToRise(Zombie *param_1)

{
  long *plVar1;
  PopAnimRig *this;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 local_60;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar3 = *(code **)(*plVar1 + 0x110);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar3)(plVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  this = (PopAnimRig *)Zombie::GetAnimRig(param_1);
  PopAnimRig::SetPaused(this,true);
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_60 = *puVar2;
  local_58 = 0xc2f00000;
  (**(code **)(*(long *)param_1 + 0x78))(param_1,&local_60);
  RealObject::SetUseGroundClipRect((RealObject *)param_1,true);
  RealObject::SetDisableSnapToGround((RealObject *)param_1,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelTouch::onEnterState_RisingFromGround(ZombieState) */

void ZombieCamelTouch::onEnterState_RisingFromGround(Zombie *param_1)

{
  int iVar1;
  long *plVar2;
  PopAnimRig *this;
  float *pfVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  undefined8 local_70;
  undefined4 local_68;
  RtWeakPtr aRStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar2 = (long *)Zombie::GetAnimRig(param_1);
  pcVar5 = *(code **)(*plVar2 + 0x110);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar5)(plVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  this = (PopAnimRig *)Zombie::GetAnimRig(param_1);
  PopAnimRig::SetPaused(this,true);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  local_70 = *(undefined8 *)pfVar3;
  local_68 = 0xc2f00000;
  (**(code **)(*(long *)param_1 + 0x78))(param_1,&local_70);
  RealObject::SetUseGroundClipRect((RealObject *)param_1,true);
  RealObject::SetDisableSnapToGround((RealObject *)param_1,true);
  fVar7 = *pfVar3;
  fVar6 = pfVar3[1];
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  StageModule::GetDirtSpawnEffect();
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_60,fVar7 + (float)DAT_06b1e588,(float)DAT_06b1e58c + -10.0 + fVar6,0.0)
  ;
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_60,-1);
  iVar1 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
  FUN_04686e00(this_00 + 0x1c,iVar1 + 1);
  std::string::string((string *)aRStack_60,"tomb_dirt_anim");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_60,0);
  std::string::~string((string *)aRStack_60);
  nop();
  std::string::string((string *)aRStack_60,"Play_Gravestone_rumble");
  RealObject::PlayPositionalSound((RealObject *)param_1,(string *)aRStack_60,0.0);
  std::string::~string((string *)aRStack_60);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelTouch::registerForEvents() */

void __thiscall ZombieCamelTouch::registerForEvents(ZombieCamelTouch *this)

{
  undefined *puVar1;
  Board *pBVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::registerForEvents((Zombie *)this);
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xac8);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<ZombieCamelTouch,bool(ZombieCamelTouch::*)(Sexy::Touch_const&)>
            (aDStack_68,(CBMemberTranslatorX *)&local_80);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_88,(RtWeakPtrBase *)aRStack_90);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Board::RegisterTouchGameplayObject(pBVar2,aDStack_68,3,aRStack_88,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyXRay);
  local_b0 = local_80;
  uStack_a8 = uStack_78;
  local_a0 = local_70;
  MessageRouter::
  Subscribe<float,Sexy::CBMemberTranslatorX<ZombieCamelTouch,void(ZombieCamelTouch::*)(float)>>
            ((MessageRouter *)puVar1,Message::NotifyXRay,&local_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCamelTouch::updateState_Stunned() */

void __thiscall ZombieCamelTouch::updateState_Stunned(ZombieCamelTouch *this)

{
  ZombieCamelTouchProps *pZVar1;
  float fVar2;
  
  fVar2 = (float)Zombie::getTimeInState((Zombie *)this);
  pZVar1 = Zombie::GetProps<ZombieCamelTouchProps>((Zombie *)this);
  if (fVar2 <= *(float *)(pZVar1 + 0x248)) {
    return;
  }
  Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)0x0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelTouch::onTouchEvent(Sexy::Touch const&) */

void __thiscall ZombieCamelTouch::onTouchEvent(ZombieCamelTouch *this,Touch *param_1)

{
  char cVar1;
  char cVar2;
  TRect<int> *this_00;
  CamelMinigameModule *pCVar3;
  float fVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x30) == 0) {
    cVar1 = FUN_04686e08(this[0x804]);
    if (cVar1 != '\0') {
      fVar4 = (float)FUN_046870c0((float)*(int *)(param_1 + 0x10));
      fVar5 = (float)FUN_046870c0((float)*(int *)(param_1 + 0x14));
      this_00 = (TRect<int> *)(**(code **)(*(long *)this + 0x178))(this);
      cVar1 = Sexy::TRect<int>::Contains(this_00,(int)fVar4,(int)fVar5);
      if ((cVar1 != '\0') && (*(int *)(this + 0x814) != 1)) {
        if (((this[0x831] == (ZombieCamelTouch)0x0) &&
            (((cVar2 = Zombie::isInState((Zombie *)this,0x22), cVar2 == '\0' &&
              (cVar2 = Zombie::isInState((Zombie *)this,0x21), cVar2 == '\0')) &&
             (cVar2 = Zombie::isInState((Zombie *)this,0x23), cVar2 == '\0')))) &&
           (this[0x830] == (ZombieCamelTouch)0x0)) {
          pCVar3 = (CamelMinigameModule *)
                   FUN_04687dfc(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
          if (pCVar3 == (CamelMinigameModule *)0x0) {
            Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)0x0);
          }
          else {
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
            CamelMinigameModule::OnCamelTouch(pCVar3,aRStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
          }
        }
        goto LAB_04687e58;
      }
    }
  }
  cVar1 = '\0';
LAB_04687e58:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelTouch::onNotifyXRay(float) */

void __thiscall ZombieCamelTouch::onNotifyXRay(ZombieCamelTouch *this,float param_1)

{
  RtObject *this_00;
  Effect_PopAnim *this_01;
  float fVar1;
  string asStack_28 [8];
  PIInterpolator aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x814) == 0) {
    Sexy::PIInterpolator::PIInterpolator(aPStack_20);
    std::string::string(asStack_28,"idle_symbol");
    PVZ_EOT();
    AnimationSequence::AddLoopingAnimation(aPStack_20,asStack_28,0);
    std::string::~string(asStack_28);
    nop();
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x828));
    this_01 = Sexy::RtObject::Cast<Effect_PopAnim>(this_00);
    Effect_PopAnim::PlayAnimationSequence(this_01,(AnimationSequence *)aPStack_20);
    fVar1 = (float)PVZ_T();
    *(float *)(this + 0x834) = fVar1 + param_1;
    AnimationSequence::~AnimationSequence((AnimationSequence *)aPStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelTouch::onUpdate() */

void __thiscall ZombieCamelTouch::onUpdate(ZombieCamelTouch *this)

{
  RtObject *this_00;
  Effect_PopAnim *this_01;
  float fVar1;
  undefined4 uVar2;
  string asStack_28 [8];
  PIInterpolator aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onUpdate((Zombie *)this);
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x834) <= fVar1) {
    if (*(int *)(this + 0x814) == 0) {
      Sexy::PIInterpolator::PIInterpolator(aPStack_20);
      std::string::string(asStack_28,"idle");
      uVar2 = PVZ_EOT();
      AnimationSequence::AddLoopingAnimation(aPStack_20,asStack_28,0);
      std::string::~string(asStack_28);
      nop();
      this_00 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x828));
      this_01 = Sexy::RtObject::Cast<Effect_PopAnim>(this_00);
      Effect_PopAnim::PlayAnimationSequence(this_01,(AnimationSequence *)aPStack_20);
      AnimationSequence::~AnimationSequence((AnimationSequence *)aPStack_20);
      *(undefined4 *)(this + 0x834) = uVar2;
    }
    else {
      uVar2 = PVZ_EOT();
      *(undefined4 *)(this + 0x834) = uVar2;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelTouch::onCardMatched() */

void __thiscall ZombieCamelTouch::onCardMatched(ZombieCamelTouch *this)

{
  RtObject *this_00;
  Effect_PopAnim *this_01;
  StandaloneEffect *pSVar1;
  RtMixedPtr aRStack_80 [8];
  RtId aRStack_78 [8];
  string asStack_70 [8];
  PIInterpolator aPStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this[0x830] = (ZombieCamelTouch)0x1;
  local_8 = ___stack_chk_guard;
  Sexy::PIInterpolator::PIInterpolator(aPStack_68);
  std::string::string(asStack_70,"symbol_matched");
  AnimationSequence::AddSingleAnimation(aPStack_68,asStack_70,0);
  std::string::~string(asStack_70);
  nop();
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x828));
  this_01 = Sexy::RtObject::Cast<Effect_PopAnim>(this_00);
  Effect_PopAnim::PlayAnimationSequence(this_01,(AnimationSequence *)aPStack_68);
  pSVar1 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x828))
  ;
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
  std::string::string(asStack_70,"onMatchedAnimationFinished");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,aRStack_78,
             asStack_70);
  StandaloneEffect::SetCompletionCallback(pSVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_70);
  nop();
  Sexy::RtId::~RtId(aRStack_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  AnimationSequence::~AnimationSequence((AnimationSequence *)aPStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelTouch::TriggerMatched() */

void __thiscall ZombieCamelTouch::TriggerMatched(ZombieCamelTouch *this)

{
  RtObject *this_00;
  Effect_PopAnim *this_01;
  StandaloneEffect *pSVar1;
  RtMixedPtr aRStack_80 [8];
  RtId aRStack_78 [8];
  string asStack_70 [8];
  PIInterpolator aPStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long lStack_8;
  
  this[0x830] = (ZombieCamelTouch)0x1;
  lStack_8 = ___stack_chk_guard;
  Sexy::PIInterpolator::PIInterpolator(aPStack_68);
  std::string::string(asStack_70,"symbol_matched");
  AnimationSequence::AddSingleAnimation(aPStack_68,asStack_70,0);
  std::string::~string(asStack_70);
  nop();
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x828));
  this_01 = Sexy::RtObject::Cast<Effect_PopAnim>(this_00);
  Effect_PopAnim::PlayAnimationSequence(this_01,(AnimationSequence *)aPStack_68);
  pSVar1 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x828))
  ;
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
  std::string::string(asStack_70,"onMatchedAnimationFinished");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,aRStack_78,
             asStack_70);
  StandaloneEffect::SetCompletionCallback(pSVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_70);
  nop();
  Sexy::RtId::~RtId(aRStack_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  AnimationSequence::~AnimationSequence((AnimationSequence *)aPStack_68);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelTouch::FlipCard(bool) */

void __thiscall ZombieCamelTouch::FlipCard(ZombieCamelTouch *this,bool param_1)

{
  RtObject *this_00;
  Effect_PopAnim *this_01;
  char *pcVar1;
  string asStack_28 [8];
  PIInterpolator aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    *(undefined4 *)(this + 0x814) = 1;
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_Zomb_Egypt_Match_Flip");
    Sexy::PIInterpolator::PIInterpolator(aPStack_20);
    std::string::string(asStack_28,"show_symbol");
    AnimationSequence::AddSingleAnimation(aPStack_20,asStack_28,0);
    std::string::~string(asStack_28);
    nop();
    std::string::string(asStack_28,"idle_symbol");
    PVZ_EOT();
  }
  else {
    *(undefined4 *)(this + 0x814) = 0;
    Sexy::PIInterpolator::PIInterpolator(aPStack_20);
    std::string::string(asStack_28,"hide_symbol");
    AnimationSequence::AddSingleAnimation(aPStack_20,asStack_28,0);
    std::string::~string(asStack_28);
    nop();
    std::string::string(asStack_28,"idle");
    PVZ_EOT();
  }
  AnimationSequence::AddLoopingAnimation((AnimationSequence *)aPStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x828));
  this_01 = Sexy::RtObject::Cast<Effect_PopAnim>(this_00);
  Effect_PopAnim::PlayAnimationSequence(this_01,(AnimationSequence *)aPStack_20);
  AnimationSequence::~AnimationSequence((AnimationSequence *)aPStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelTouch::hideUnderLayers() */

void __thiscall ZombieCamelTouch::hideUnderLayers(ZombieCamelTouch *this)

{
  undefined8 uVar1;
  PopAnimRig *this_00;
  string *psVar2;
  ulong uVar3;
  ulong uVar4;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  std::string::string(asStack_28,"zombie_camel_board_stone");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"zombie_camel_board_stone_damage_01");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"zombie_camel_board_stone_damage_02");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"zombie_camel_board_head_etching_norm");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"zombie_camel_board_head_etching_damage_01");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"zombie_camel_board_head_etching_damage_02");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"zombie_camel_board_hump_etching_norm");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"zombie_camel_board_hump_etching_damage_01");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"zombie_camel_board_hump_etching_damage_02");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"zombie_camel_board_tail_etching_norm");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"zombie_camel_board_tail_etching_damage_01");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"zombie_camel_board_tail_etching_damage_02");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"_zombie_camel_hand_board");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"zombie_hand1");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"zombie_hand2");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  uVar4 = 0;
  while( true ) {
    uVar1 = local_20;
    uVar3 = FUN_04686e20(local_20,local_18);
    if (uVar3 <= uVar4) break;
    psVar2 = (string *)FUN_04686e2c(uVar1,uVar4);
    PopAnimRig::SetLayerVisibility(this_00,psVar2,false);
    uVar4 = uVar4 + 1;
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelTouch::onZombieInitialize() */

void __thiscall ZombieCamelTouch::onZombieInitialize(ZombieCamelTouch *this)

{
  Effect_PopAnim *this_00;
  float *pfVar1;
  ResourceInfo *pRVar2;
  StandaloneEffect *this_01;
  undefined4 uVar3;
  string asStack_38 [8];
  string asStack_30 [16];
  PIInterpolator aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieCamel::onZombieInitialize((ZombieCamel *)this);
  this[0x820] = (ZombieCamelTouch)0x0;
  *(undefined4 *)(this + 0x818) = 0;
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x814) = 0;
  *(undefined4 *)(this + 0x810) = 0xffffffff;
  *(undefined4 *)(this + 0x81c) = uVar3;
  Sexy::PIInterpolator::PIInterpolator(aPStack_20);
  std::string::string(asStack_30,"idle");
  AnimationSequence::AddLoopingAnimation(uVar3,aPStack_20,asStack_30,0);
  std::string::~string(asStack_30);
  nop();
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_30,*pfVar1,pfVar1[1],pfVar1[2]);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)asStack_30,-1);
  std::string::string(asStack_38,"POPANIM_EFFECTS_ZOMBIE_EGYPT_CAMEL_BOARD_FLIP");
  GetPAMByName(asStack_38);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_30);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
  std::string::~string(asStack_38);
  nop();
  Effect_PopAnim::PlayAnimationSequence(this_00,(AnimationSequence *)aPStack_20);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x828),(RtWeakPtrBase *)asStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
  this_01 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x828));
  StandaloneEffect::SetManuallyDrawn(this_01,true);
  this[0x831] = (ZombieCamelTouch)0x0;
  hideUnderLayers(this);
  this[0x830] = (ZombieCamelTouch)0x0;
  *(undefined4 *)(this + 0x834) = uVar3;
  AnimationSequence::~AnimationSequence((AnimationSequence *)aPStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelTouch::showPanelSymbol(CardType) */

void __thiscall ZombieCamelTouch::showPanelSymbol(ZombieCamelTouch *this,int param_2)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  RtObject *this_00;
  Effect_PopAnim *this_01;
  PopAnimRig *this_02;
  string *psVar4;
  ulong uVar5;
  undefined *__n;
  ulong uVar6;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  __n = &__stack_chk_guard;
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x828));
  this_01 = Sexy::RtObject::Cast<Effect_PopAnim>(this_00);
  this_02 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_01);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  std::vector<std::string,std::allocator<std::string>>::resize
            ((vector<std::string,std::allocator<std::string>> *)&local_20,7);
  psVar4 = (string *)FUN_04686e2c(local_20,0);
  std::string::append(psVar4,"challenge_cone",(size_t)__n);
  psVar4 = (string *)FUN_04686e2c(local_20,1);
  std::string::append(psVar4,"challenge_skull",(size_t)__n);
  psVar4 = (string *)FUN_04686e2c(local_20,2);
  std::string::append(psVar4,"challenge_sun",(size_t)__n);
  psVar4 = (string *)FUN_04686e2c(local_20,3);
  std::string::append(psVar4,"challenge_bucket",(size_t)__n);
  psVar4 = (string *)FUN_04686e2c(local_20,4);
  std::string::append(psVar4,"challenge_clover",(size_t)__n);
  psVar4 = (string *)FUN_04686e2c(local_20,5);
  std::string::append(psVar4,"challenge_torch",(size_t)__n);
  psVar4 = (string *)FUN_04686e2c(local_20,6);
  std::string::append(psVar4,"challenge_bone",(size_t)__n);
  while( true ) {
    uVar1 = local_20;
    uVar5 = FUN_04686e20(local_20,local_18);
    if (uVar5 <= uVar6) break;
    psVar4 = (string *)FUN_04686e2c(uVar1,uVar6);
    bVar2 = (long)param_2 == uVar6;
    __n = (undefined *)(ulong)bVar2;
    uVar6 = uVar6 + 1;
    PopAnimRig::SetLayerVisibility(this_02,psVar4,bVar2);
  }
  uVar6 = 0;
  std::vector<std::string,std::allocator<std::string>>::resize
            ((vector<std::string,std::allocator<std::string>> *)&local_20,4);
  psVar4 = (string *)FUN_04686e2c(local_20,0);
  std::string::append(psVar4,"nope.avi",(size_t)__n);
  psVar4 = (string *)FUN_04686e2c(local_20,1);
  std::string::append(psVar4,"zombie_camel_board_head_etching_norm",(size_t)__n);
  psVar4 = (string *)FUN_04686e2c(local_20,2);
  std::string::append(psVar4,"zombie_camel_board_hump_etching_norm",(size_t)__n);
  psVar4 = (string *)FUN_04686e2c(local_20,3);
  std::string::append(psVar4,"zombie_camel_board_tail_etching_norm",(size_t)__n);
  while( true ) {
    uVar1 = local_20;
    uVar5 = FUN_04686e20(local_20,local_18);
    if (uVar5 <= uVar6) break;
    psVar4 = (string *)FUN_04686e2c(uVar1,uVar6);
    iVar3 = FUN_04686e0c(*(undefined4 *)(this + 0x800));
    bVar2 = uVar6 == (long)iVar3;
    uVar6 = uVar6 + 1;
    PopAnimRig::SetLayerVisibility(this_02,psVar4,bVar2);
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelTouch::onPlaceOnBoard() */

void __thiscall ZombieCamelTouch::onPlaceOnBoard(ZombieCamelTouch *this)

{
  string *psVar1;
  bool bVar2;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar3;
  int iVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  iVar4 = 2;
  local_8 = ___stack_chk_guard;
  MessageRouter::Post<Zombie*,ZombieCamelTouch*>
            ((MessageRouter *)gMessageRouter,Message::ZombieAddedToBoard,this);
  this_00 = (RtWeakPtr *)Zombie::GetType((Zombie *)this);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  psVar1 = (string *)(pRVar3 + 8);
  bVar2 = std::operator==(psVar1,"camel_onehump_touch");
  if (!bVar2) {
    iVar4 = 3;
    bVar2 = std::operator==(psVar1,"camel_twohump_touch");
    if (!bVar2) {
      bVar2 = std::operator==(psVar1,"camel_manyhump_touch");
      if (!bVar2) goto LAB_04688ddc;
      iVar4 = 5;
    }
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  ZombieCamel::initializeCamel((ZombieCamel *)this,1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  ZombieCamel::spawnInitialSegments((ZombieCamel *)this,iVar4,false);
LAB_04688ddc:
  showPanelSymbol(this,*(undefined4 *)(this + 0x810));
  hideUnderLayers(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCamelTouch::onPlaceOnStreet() */

void __thiscall ZombieCamelTouch::onPlaceOnStreet(ZombieCamelTouch *this)

{
  ZombieCamel::onPlaceOnStreet((ZombieCamel *)this);
  showPanelSymbol(this,0xffffffff);
  hideUnderLayers(this);
  this[0x831] = (ZombieCamelTouch)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelTouch::prepDeath() */

void __thiscall ZombieCamelTouch::prepDeath(ZombieCamelTouch *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  ZombieCamelTouchProps *pZVar2;
  RtObject *this_01;
  Effect_PopAnim *pEVar3;
  StandaloneEffect *pSVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04686e34(this + 0x80c);
  pZVar2 = Zombie::GetProps<ZombieCamelTouchProps>((Zombie *)this);
  fVar7 = *(float *)(pZVar2 + 0x244);
  fVar6 = (float)(**(code **)(*(long *)this + 0x308))(0x3f800000,this);
  if (fVar6 < fVar7) {
    (**(code **)(*(long *)this + 0x248))(this);
    Zombie::setZombieState((Zombie *)this,0x23,0);
  }
  else {
    Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)0x0);
  }
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x828);
  showPanelSymbol(this,0xffffffff);
  this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  pEVar3 = Sexy::RtObject::Cast<Effect_PopAnim>(this_01);
  std::string::string(asStack_10,"die");
  Effect_PopAnim::PlaySingleAnimation(pEVar3,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  pSVar4 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  StandaloneEffect::ClearAttachedTo(pSVar4);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar1 = (**(code **)(*(long *)this + 0x170))(this);
  FUN_04686e00(lVar5 + 0x1c,iVar1 + 2);
  pSVar4 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  StandaloneEffect::SetManuallyDrawn(pSVar4,false);
  pSVar4 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  StandaloneEffect::SetKeepAlive(pSVar4,false);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelTouch::onMatchedAnimationFinished(StandaloneEffect*) */

void __thiscall
ZombieCamelTouch::onMatchedAnimationFinished(ZombieCamelTouch *this,StandaloneEffect *param_1)

{
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StandaloneEffect::CancelCompletion(param_1);
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate(aRStack_50);
  StandaloneEffect::SetCompletionCallback(param_1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  prepDeath(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelTouch::StaticClassInit() */

void ZombieCamelTouch::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieCamelTouch");
      (*pcVar4)(plVar1,asStack_150,FUN_04689454,0x838,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa80);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieCamelTouch,void(ZombieCamelTouch::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa88);
  Sexy::Delegate0::Delegate0<ZombieCamelTouch,void(ZombieCamelTouch::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa90);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieCamelTouch,void(ZombieCamelTouch::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_CAMELTOUCH_WaitingToRise");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046890a0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa98);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieCamelTouch,void(ZombieCamelTouch::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xaa0);
  Sexy::Delegate0::Delegate0<ZombieCamelTouch,void(ZombieCamelTouch::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xaa8);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieCamelTouch,void(ZombieCamelTouch::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_CAMELTOUCH_RisingFromGround");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046890a0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xab0);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieCamelTouch,void(ZombieCamelTouch::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xab8);
  Sexy::Delegate0::Delegate0<ZombieCamelTouch,void(ZombieCamelTouch::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xac0);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieCamelTouch,void(ZombieCamelTouch::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_CAMELTOUCH_Stunned");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046890a0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieCamelTouch::StaticGetClass() */

long * ZombieCamelTouch::StaticGetClass(void)

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
  uVar2 = ZombieCamel::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCamelTouch",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCamelTouch::GetClass() const */

long * ZombieCamelTouch::GetClass(void)

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
  uVar2 = ZombieCamel::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCamelTouch",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

