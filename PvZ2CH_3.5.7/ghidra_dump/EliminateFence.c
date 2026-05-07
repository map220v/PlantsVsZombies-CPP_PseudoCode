// Class: EliminateFence


/* EliminateFence::onDestroy() */

void __thiscall EliminateFence::onDestroy(EliminateFence *this)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb0));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    (**(code **)(*plVar2 + 0x48))();
  }
  return;
}


/* EliminateFence::onUpdate() */

void __thiscall EliminateFence::onUpdate(EliminateFence *this)

{
  bool bVar1;
  PopAnimRig *this_00;
  float fVar2;
  float fVar3;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb0));
  if (!bVar1) {
    return;
  }
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0))
  ;
  fVar2 = (float)PVZ_T();
  fVar3 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(this_00,fVar2,fVar3);
  return;
}


/* EliminateFence::CalcRenderOrder() const */

undefined8 EliminateFence::CalcRenderOrder(void)

{
  return 0x61e68;
}


/* non-virtual thunk to EliminateFence::CalcRenderOrder() const */

void __thiscall EliminateFence::CalcRenderOrder(EliminateFence *this)

{
  CalcRenderOrder();
  return;
}


/* EliminateFence::onPlayDieEnd(std::string const&) */

void EliminateFence::onPlayDieEnd(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateFence::StaticClassInit() */

void EliminateFence::StaticClassInit(void)

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
    std::string::string(asStack_10,"EliminateFence");
    (*pcVar2)(plVar1,asStack_10,FUN_049fcaa8,200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EliminateFence::StaticGetClass() */

long * EliminateFence::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EliminateFence",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EliminateFence::GetClass() const */

long * EliminateFence::GetClass(void)

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
  (*pcVar3)(plVar1,"EliminateFence",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EliminateFence::GetFenceType() */

undefined4 __thiscall EliminateFence::GetFenceType(EliminateFence *this)

{
  return *(undefined4 *)(this + 0xb8);
}


/* EliminateFence::~EliminateFence() */

void __thiscall EliminateFence::~EliminateFence(EliminateFence *this)

{
  *(undefined ***)this = &PTR_GetClass_0692d5f0;
  *(undefined ***)(this + 0x10) = &PTR__EliminateFence_0692d7d8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to EliminateFence::~EliminateFence() */

void __thiscall EliminateFence::~EliminateFence(EliminateFence *this)

{
  ~EliminateFence(this + -0x10);
  return;
}


/* EliminateFence::~EliminateFence() */

void __thiscall EliminateFence::~EliminateFence(EliminateFence *this)

{
  ~EliminateFence(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EliminateFence::~EliminateFence() */

void __thiscall EliminateFence::~EliminateFence(EliminateFence *this)

{
  ~EliminateFence(this + -0x10);
  return;
}


/* EliminateFence::EliminateFence() */

void __thiscall EliminateFence::EliminateFence(EliminateFence *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0692d5f0;
  *(undefined ***)(this + 0x10) = &PTR__EliminateFence_0692d7d8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xbc) = 2;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xc0) = 0xffffffff;
  return;
}


/* EliminateFence::StaticNew() */

EliminateFence * EliminateFence::StaticNew(void)

{
  EliminateFence *this;
  
  this = ::operator_new(200);
  EliminateFence(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateFence::onDraw(Sexy::Graphics*) */

void __thiscall EliminateFence::onDraw(EliminateFence *this,Graphics *param_1)

{
  PopAnimRig *pPVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  GraphicsAutoState aGStack_38 [8];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  uVar3 = *(undefined4 *)(this + 0x1c);
  local_8 = ___stack_chk_guard;
  fVar2 = (float)FUN_049fc348(*(undefined4 *)(this + 0x18),uVar3,*(undefined4 *)(this + 0x20));
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  (**(code **)(*(long *)this + 0xf8))(this,param_1);
  fVar4 = *(float *)(param_1 + 0x20);
  fVar2 = (float)FUN_049fc414(fVar2 + 20.0);
  fVar5 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x10) + fVar4 +
       (float)(int)((fVar2 - fVar4) * *(float *)(param_1 + 0x18));
  fVar2 = (float)FUN_049fc414(uVar3);
  *(float *)(param_1 + 0x14) =
       *(float *)(param_1 + 0x14) + fVar5 +
       (float)(int)((fVar2 - fVar5) * *(float *)(param_1 + 0x1c));
  fVar2 = (float)FUN_049fc414(0xc2700000);
  fVar4 = (float)FUN_049fc414(0xc28c0000);
  if (*(int *)(this + 0xb8) == 0) {
    fVar2 = (float)FUN_049fc414(0xc2a00000);
    fVar4 = (float)FUN_049fc414(0xc1f00000);
  }
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  PopAnimRig::SetRenderTransform(pPVar1,aSStack_30);
  Sexy::Graphics::Translate(param_1,(int)fVar2,(int)fVar4);
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  PopAnimRig::Draw(pPVar1,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateFence::EliminateFenceInitialize(EFenceType) */

void __thiscall EliminateFence::EliminateFenceInitialize(EliminateFence *this,undefined4 param_2)

{
  RtWeakPtr *this_00;
  bool bVar1;
  ResourceInfo *pRVar2;
  RtClass *pRVar3;
  PopAnimRig *pPVar4;
  long *plVar5;
  RtWeakPtr<Sexy::ResourceInfo> *__n;
  string asStack_50 [8];
  RtWeakPtr aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0xb8) = param_2;
  this_00 = (RtWeakPtr *)(this + 0xb0);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar5 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  __n = aRStack_40;
  std::string::string(asStack_50,"");
  nop();
  if (*(int *)(this + 0xb8) == 0) {
    std::string::append(asStack_50,"POPANIM_ELIMINATE_ELIMINATE_FENCE_2",(size_t)__n);
  }
  else {
    std::string::append(asStack_50,"POPANIM_ELIMINATE_ELIMINATE_FENCE_1",(size_t)__n);
  }
  GetPAMByName(asStack_50);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_48);
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig((PopAnim *)pRVar2,pRVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  pPVar4 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)aRStack_40,"idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar4,aRStack_40,0,aDStack_38);
  std::string::~string((string *)aRStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  std::string::~string(asStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateFence::takeFenceDamge() */

void __thiscall EliminateFence::takeFenceDamge(EliminateFence *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  PlantOlivePit *this_01;
  PopAnimRig *pPVar4;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (PlantOlivePit *)FUN_049fca9c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_01 == (PlantOlivePit *)0x0) {
    if (*(int *)(this + 0xbc) < 1) goto LAB_049fce08;
    *(int *)(this + 0xbc) = *(int *)(this + 0xbc) + -1;
  }
  else {
    iVar2 = PlantOlivePit::CalcRenderOrder(this_01);
    if ((iVar2 == *(int *)(this + 0xc0)) || (*(int *)(this + 0xbc) < 1)) goto LAB_049fce08;
    *(int *)(this + 0xbc) = *(int *)(this + 0xbc) + -1;
    uVar3 = PlantOlivePit::CalcRenderOrder(this_01);
    *(undefined4 *)(this + 0xc0) = uVar3;
  }
  this_00 = (RtWeakPtr *)(this + 0xb0);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    if (*(int *)(this + 0xbc) == 1) {
      pPVar4 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_50,"idle02");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aDStack_38)
      ;
      PopAnimRig::PlayAndContinue(pPVar4,asStack_50,0,(DummyInit *)aDStack_38);
      std::string::~string(asStack_50);
      nop();
    }
    else if (*(int *)(this + 0xbc) == 0) {
      MessageRouter::Post<int,int,int,int,int,EFenceType>
                ((MessageRouter *)gMessageRouter,Message::EliminateFenceDestroyed,
                 *(undefined4 *)(this + 0xa4),*(undefined4 *)(this + 0xa8),
                 *(undefined4 *)(this + 0xb8));
      pPVar4 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_58,"idle03");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onPlayDieEnd);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<EliminateFence,void(EliminateFence::*)(std::string_const&)>(aDStack_38,asStack_50);
      PopAnimRig::PlayAndStop(pPVar4,asStack_58,0,aDStack_38);
      std::string::~string(asStack_58);
      nop();
    }
  }
LAB_049fce08:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

