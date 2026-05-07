// Class: FloatingIce


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FloatingIce::initializePAM(Sexy::PopAnim*) */

void __thiscall FloatingIce::initializePAM(FloatingIce *this,PopAnim *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  RtClass *pRVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0xa8);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig(param_1,pRVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FloatingIce::~FloatingIce() */

void __thiscall FloatingIce::~FloatingIce(FloatingIce *this)

{
  *(undefined ***)this = &PTR_GetClass_0692eba0;
  *(undefined ***)(this + 0x10) = &PTR__FloatingIce_0692eda8;
  RiverEntity::~RiverEntity((RiverEntity *)this);
  return;
}


/* non-virtual thunk to FloatingIce::~FloatingIce() */

void __thiscall FloatingIce::~FloatingIce(FloatingIce *this)

{
  ~FloatingIce(this + -0x10);
  return;
}


/* FloatingIce::~FloatingIce() */

void __thiscall FloatingIce::~FloatingIce(FloatingIce *this)

{
  ~FloatingIce(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FloatingIce::~FloatingIce() */

void __thiscall FloatingIce::~FloatingIce(FloatingIce *this)

{
  ~FloatingIce(this + -0x10);
  return;
}


/* FloatingIce::CalcRenderOrder() const */

void __thiscall FloatingIce::CalcRenderOrder(FloatingIce *this)

{
  long lVar1;
  
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  Board::MakeRenderOrder(0x61e68,0,(int)*(float *)(lVar1 + 4));
  return;
}


/* non-virtual thunk to FloatingIce::CalcRenderOrder() const */

void __thiscall FloatingIce::CalcRenderOrder(FloatingIce *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FloatingIce::StaticClassInit() */

void FloatingIce::StaticClassInit(void)

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
    std::string::string(asStack_10,"FloatingIce");
    (*pcVar2)(plVar1,asStack_10,FUN_04a17fec,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FloatingIce::StaticGetClass() */

long * FloatingIce::StaticGetClass(void)

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
  uVar2 = RiverEntity::StaticGetClass();
  (*pcVar3)(plVar1,"FloatingIce",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FloatingIce::GetClass() const */

long * FloatingIce::GetClass(void)

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
  uVar2 = RiverEntity::StaticGetClass();
  (*pcVar3)(plVar1,"FloatingIce",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FloatingIce::FloatingIce() */

void __thiscall FloatingIce::FloatingIce(FloatingIce *this)

{
  RiverEntity::RiverEntity((RiverEntity *)this);
  this[0xcc] = (FloatingIce)0x0;
  this[0xcd] = (FloatingIce)0x0;
  *(undefined ***)this = &PTR_GetClass_0692eba0;
  this[0xcf] = (FloatingIce)0x0;
  *(undefined ***)(this + 0x10) = &PTR__FloatingIce_0692eda8;
  this[0xce] = (FloatingIce)0x0;
  return;
}


/* FloatingIce::StaticNew() */

FloatingIce * FloatingIce::StaticNew(void)

{
  FloatingIce *this;
  
  this = ::operator_new(0xd0);
  FloatingIce(this);
  return this;
}


/* FloatingIce::SetCarryingDodoRider(bool) */

void __thiscall FloatingIce::SetCarryingDodoRider(FloatingIce *this,bool param_1)

{
  this[0xce] = (FloatingIce)param_1;
  return;
}


/* FloatingIce::SetPlayCarryingAnim(bool) */

void __thiscall FloatingIce::SetPlayCarryingAnim(FloatingIce *this,bool param_1)

{
  this[0xcf] = (FloatingIce)param_1;
  return;
}


/* FloatingIce::IsCarryingDodoRider() */

FloatingIce __thiscall FloatingIce::IsCarryingDodoRider(FloatingIce *this)

{
  return this[0xce];
}


/* FloatingIce::GetFloatingIceRect() */

void FloatingIce::GetFloatingIceRect(void)

{
  int iVar1;
  int iVar2;
  long in_x0;
  Insets *in_x8;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::Insets::Insets(in_x8);
  fVar3 = (float)FUN_04a17818(*(undefined4 *)(in_x0 + 0x18),*(undefined4 *)(in_x0 + 0x1c),
                              *(undefined4 *)(in_x0 + 0x20));
  fVar5 = *(float *)(in_x0 + 0x1c);
  uVar4 = *(undefined4 *)(in_x0 + 0x18);
  uVar6 = *(undefined4 *)(in_x0 + 0x20);
  *(int *)in_x8 = (int)(fVar3 - (float)(iVar1 / 2));
  FUN_04a17818(uVar4,fVar5,uVar6);
  *(int *)(in_x8 + 8) = iVar1;
  *(int *)(in_x8 + 0xc) = iVar2;
  *(int *)(in_x8 + 4) = (int)(fVar5 - (float)(iVar2 / 2));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FloatingIce::onAnimStopped(std::string const&) */

void __thiscall FloatingIce::onAnimStopped(FloatingIce *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==("active_02",param_1);
  if (bVar1) {
    this[0xcd] = (FloatingIce)0x0;
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    std::string::string(asStack_40,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  else {
    bVar1 = std::operator==("active_01",param_1);
    if (bVar1) {
      this[0xcd] = (FloatingIce)0x0;
      this[0xcc] = (FloatingIce)0x1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FloatingIce::PlaySinkAnim() */

void __thiscall FloatingIce::PlaySinkAnim(FloatingIce *this)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  this[0xcd] = (FloatingIce)0x1;
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xa8));
  if (bVar1) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    std::string::string(asStack_58,"active_01");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAnimStopped);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<FloatingIce,void(FloatingIce::*)(std::string_const&)>(aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FloatingIce::StartToSink() */

void __thiscall FloatingIce::StartToSink(FloatingIce *this)

{
  char cVar1;
  
  PlaySinkAnim(this);
  cVar1 = IsCarryingDodoRider(this);
  if (cVar1 == '\0') {
    return;
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FloatingIce::PlayRiseAnim() */

void __thiscall FloatingIce::PlayRiseAnim(FloatingIce *this)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xa8));
  if (bVar1) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    std::string::string(asStack_58,"active_02");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAnimStopped);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<FloatingIce,void(FloatingIce::*)(std::string_const&)>(aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FloatingIce::PlayCarryingAnim() */

void __thiscall FloatingIce::PlayCarryingAnim(FloatingIce *this)

{
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xcf] != (FloatingIce)0x0) {
    this[0xcf] = (FloatingIce)0x0;
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    std::string::string(asStack_58,"active_end");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAnimStopped);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<FloatingIce,void(FloatingIce::*)(std::string_const&)>(aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FloatingIce::FloatingIceInitialize() */

void __thiscall FloatingIce::FloatingIceInitialize(FloatingIce *this)

{
  ResourceInfo *pRVar1;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"POPANIM_RIVERCROSSING_RIVERCROSSING_FLOATINGICE");
  GetPAMByName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  initializePAM(this,(PopAnim *)pRVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

