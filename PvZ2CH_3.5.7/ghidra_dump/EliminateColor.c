// Class: EliminateColor


/* EliminateColor::onDisappearAnimDone(std::string const&) */

void EliminateColor::onDisappearAnimDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* EliminateColor::CalcRenderOrder() const */

undefined8 EliminateColor::CalcRenderOrder(void)

{
  return 0x65130;
}


/* non-virtual thunk to EliminateColor::CalcRenderOrder() const */

void __thiscall EliminateColor::CalcRenderOrder(EliminateColor *this)

{
  CalcRenderOrder();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateColor::StaticClassInit() */

void EliminateColor::StaticClassInit(void)

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
    std::string::string(asStack_10,"EliminateColor");
    (*pcVar2)(plVar1,asStack_10,FUN_049fbef4,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EliminateColor::StaticGetClass() */

long * EliminateColor::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"EliminateColor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EliminateColor::GetClass() const */

long * EliminateColor::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"EliminateColor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EliminateColor::~EliminateColor() */

void __thiscall EliminateColor::~EliminateColor(EliminateColor *this)

{
  *(undefined ***)this = &PTR_GetClass_0692d3d0;
  *(undefined ***)(this + 0x10) = &PTR__EliminateColor_0692d5b8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to EliminateColor::~EliminateColor() */

void __thiscall EliminateColor::~EliminateColor(EliminateColor *this)

{
  ~EliminateColor(this + -0x10);
  return;
}


/* EliminateColor::~EliminateColor() */

void __thiscall EliminateColor::~EliminateColor(EliminateColor *this)

{
  ~EliminateColor(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EliminateColor::~EliminateColor() */

void __thiscall EliminateColor::~EliminateColor(EliminateColor *this)

{
  ~EliminateColor(this + -0x10);
  return;
}


/* EliminateColor::EliminateColor() */

void __thiscall EliminateColor::EliminateColor(EliminateColor *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0692d3d0;
  *(undefined ***)(this + 0x10) = &PTR__EliminateColor_0692d5b8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  return;
}


/* EliminateColor::StaticNew() */

EliminateColor * EliminateColor::StaticNew(void)

{
  EliminateColor *this;
  
  this = ::operator_new(0xb8);
  EliminateColor(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateColor::onDraw(Sexy::Graphics*) */

void __thiscall EliminateColor::onDraw(EliminateColor *this,Graphics *param_1)

{
  PopAnimRig *pPVar1;
  float fVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  GraphicsAutoState aGStack_38 [8];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  uVar3 = (ulong)*(uint *)(this + 0x1c);
  local_8 = ___stack_chk_guard;
  fVar2 = (float)FUN_049fb860(*(undefined4 *)(this + 0x18),uVar3,*(undefined4 *)(this + 0x20));
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  (**(code **)(*(long *)this + 0xf8))(this,param_1);
  fVar4 = *(float *)(param_1 + 0x20);
  fVar2 = (float)FUN_049fb92c(fVar2 + 20.0);
  fVar5 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x10) + fVar4 +
       (float)(int)((fVar2 - fVar4) * *(float *)(param_1 + 0x18));
  fVar2 = (float)FUN_049fb92c(uVar3 & 0xffffffff);
  *(float *)(param_1 + 0x14) =
       *(float *)(param_1 + 0x14) + fVar5 +
       (float)(int)((fVar2 - fVar5) * *(float *)(param_1 + 0x1c));
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  PopAnimRig::SetRenderTransform(pPVar1,aSStack_30);
  fVar2 = (float)FUN_049fb92c(0xc2b40000);
  fVar4 = (float)FUN_049fb92c(0xc28c0000);
  Sexy::Graphics::Translate(param_1,(int)fVar2,(int)fVar4);
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  PopAnimRig::Draw(pPVar1,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateColor::EliminateColorInitialize() */

void __thiscall EliminateColor::EliminateColorInitialize(EliminateColor *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  ResourceInfo *pRVar3;
  RtClass *pRVar4;
  PopAnimRig *pPVar5;
  RtWeakPtr aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0xb0);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  std::string::string(asStack_40,"POPANIM_ELIMINATE_ELIMINATE_COLOR");
  GetPAMByName(asStack_40);
  std::string::~string(asStack_40);
  nop();
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_48);
  pRVar4 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig((PopAnim *)pRVar3,pRVar4);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)asStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
  pPVar5 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string(asStack_40,"idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar5,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateColor::playDisappearAnim() */

void __thiscall EliminateColor::playDisappearAnim(EliminateColor *this)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb0));
  if (bVar1) {
    MessageRouter::Post<int,int,int,int>
              ((MessageRouter *)gMessageRouter,Message::EliminateColorDisappear,
               *(int *)(this + 0xa4),*(int *)(this + 0xa8));
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    std::string::string(asStack_58,"idle02");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onDisappearAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

