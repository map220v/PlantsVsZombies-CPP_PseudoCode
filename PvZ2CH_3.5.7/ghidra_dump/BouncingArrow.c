// Class: BouncingArrow


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BouncingArrow::StaticClassInit() */

void BouncingArrow::StaticClassInit(void)

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
    std::string::string(asStack_10,"BouncingArrow");
    (*pcVar2)(plVar1,asStack_10,FUN_03b4ff90,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BouncingArrow::StaticGetClass() */

long * BouncingArrow::StaticGetClass(void)

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
  uVar2 = AnimationController::StaticGetClass();
  (*pcVar3)(plVar1,"BouncingArrow",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BouncingArrow::GetClass() const */

long * BouncingArrow::GetClass(void)

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
  uVar2 = AnimationController::StaticGetClass();
  (*pcVar3)(plVar1,"BouncingArrow",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BouncingArrow::onDestroy() */

void BouncingArrow::onDestroy(void)

{
  RtMixedPtrBase *this;
  char cVar1;
  long in_x0;
  long *plVar2;
  
  this = (RtMixedPtrBase *)(in_x0 + 0x48);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BouncingArrow::BouncingArrow() */

void __thiscall BouncingArrow::BouncingArrow(BouncingArrow *this)

{
  Renderable *extraout_x1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AnimationController::AnimationController((AnimationController *)this,0.0,true);
  Renderable::Renderable((Renderable *)(this + 0x28),extraout_x1);
  *(undefined ***)this = &PTR_GetClass_06732990;
  *(undefined ***)(this + 0x28) = &PTR__BouncingArrow_06732a40;
  Sexy::Point::Point((Point *)(this + 0x30));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  Sexy::Point::Point((Point *)&local_10,0,0);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x30) = local_10;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x48));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BouncingArrow::StaticNew() */

BouncingArrow * BouncingArrow::StaticNew(void)

{
  BouncingArrow *this;
  
  this = ::operator_new(0x50);
  BouncingArrow(this);
  return this;
}


/* BouncingArrow::~BouncingArrow() */

void __thiscall BouncingArrow::~BouncingArrow(BouncingArrow *this)

{
  *(undefined ***)this = &PTR_GetClass_06732990;
  *(undefined ***)(this + 0x28) = &PTR__BouncingArrow_06732a40;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  AnimationController::~AnimationController((AnimationController *)this);
  return;
}


/* non-virtual thunk to BouncingArrow::~BouncingArrow() */

void __thiscall BouncingArrow::~BouncingArrow(BouncingArrow *this)

{
  ~BouncingArrow(this + -0x28);
  return;
}


/* BouncingArrow::~BouncingArrow() */

void __thiscall BouncingArrow::~BouncingArrow(BouncingArrow *this)

{
  ~BouncingArrow(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BouncingArrow::~BouncingArrow() */

void __thiscall BouncingArrow::~BouncingArrow(BouncingArrow *this)

{
  ~BouncingArrow(this + -0x28);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BouncingArrow::Update(float) */

void __thiscall BouncingArrow::Update(BouncingArrow *this,float param_1)

{
  bool bVar1;
  PopAnimRig *this_00;
  float fVar2;
  double dVar3;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  dVar3 = fmod((double)param_1,0.5);
  local_10 = 0xc1200000;
  local_c = 0x41200000;
  fVar2 = CurveLerp<float>(0,0x3f000000,(float)dVar3,&local_10,&local_c,8);
  *(int *)(this + 0x38) = (int)fVar2;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x48));
  if (bVar1) {
    this_00 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
    fVar2 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,param_1,fVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BouncingArrow::AddToRenderQueue(RenderQueue*) */

void __thiscall BouncingArrow::AddToRenderQueue(BouncingArrow *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x98);
  Sexy::Delegate1<Sexy::Graphics*>::Delegate1<BouncingArrow,void(BouncingArrow::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,800000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BouncingArrow::DrawWithCamera(Sexy::Graphics*, WorldMapCamera*) */

void __thiscall
BouncingArrow::DrawWithCamera(BouncingArrow *this,Graphics *param_1,WorldMapCamera *param_2)

{
  RtWeakPtr *this_00;
  long lVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ResourceInfo *pRVar7;
  Image *pIVar8;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  long lVar9;
  PopAnimRig *pPVar10;
  float fVar11;
  GraphicsAutoState aGStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr *)(this + 0x48);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_80,param_1);
  bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar4) {
    if (param_2 == (WorldMapCamera *)0x0) {
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      lVar1 = (long)&local_40 + 4;
      lVar9 = FUN_03b4cd98(*(undefined8 *)(lVar9 + 0x20));
      local_58 = *(undefined4 *)(lVar9 + 0x8c);
      local_78 = *(undefined8 *)(lVar9 + 0x6c);
      local_70 = *(undefined8 *)(lVar9 + 0x74);
      local_40 = *(undefined8 *)(lVar9 + 0x7c);
      uStack_60 = *(undefined8 *)(lVar9 + 0x84);
      local_68._4_4_ = (float)((ulong)local_40 >> 0x20);
      fVar11 = -local_68._4_4_;
      local_68 = local_40;
      local_50 = local_78;
      uStack_48 = local_70;
      uStack_38 = uStack_60;
      local_30 = local_58;
      FUN_03b4ccac(-(float)local_70,fVar11,&uStack_48,lVar1);
      Sexy::SexyTransform2D::RotateDeg((SexyTransform2D *)&local_50,(float)*(int *)(this + 0x3c));
      FUN_03b4ccac((float)local_70,local_68._4_4_,&uStack_48,lVar1);
      FUN_03b4ccac((float)*(int *)(this + 0x30),(float)*(int *)(this + 0x34),&uStack_48,lVar1);
      pPVar10 = (PopAnimRig *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      PopAnimRig::Draw(pPVar10,param_1,(SexyTransform2D *)&local_50);
      pPVar10 = (PopAnimRig *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      PopAnimRig::SetRenderTransform(pPVar10,(SexyTransform2D *)&local_78);
    }
    else {
      pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      WorldMapCamera::DrawPopAnimRig
                (param_2,(PopAnimRig *)pRVar7,(float)*(int *)(this + 0x30),
                 (float)*(int *)(this + 0x34),0.0,1.0,0.0);
    }
  }
  else if (param_2 == (WorldMapCamera *)0x0) {
    Sexy::Transform::Transform((Transform *)&local_50);
    Sexy::Transform::Translate((Transform *)&local_50,0.0,(float)*(int *)(this + 0x38));
    Sexy::Transform::RotateDeg((Transform *)&local_50,(float)*(int *)(this + 0x3c));
    Sexy::Transform::Translate
              ((Transform *)&local_50,(float)*(int *)(this + 0x30),(float)*(int *)(this + 0x34));
    pIVar8 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                ((CachedResourcePtr<Sexy::Image> *)&DAT_06acb6e0);
    Sexy::Graphics::DrawImageTransform(param_1,pIVar8,(Transform *)&local_50,0.0,0.0);
  }
  else {
    pIVar8 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                ((CachedResourcePtr<Sexy::Image> *)&DAT_06acb6e0);
    iVar2 = *(int *)(this + 0x30);
    this_01 = (LotteryResultProgressBar *)
              CachedResourcePtr<Sexy::Image>::operator->
                        ((CachedResourcePtr<Sexy::Image> *)&DAT_06acb6e0);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    iVar3 = *(int *)(this + 0x34);
    this_02 = (SalesProgressBar *)
              CachedResourcePtr<Sexy::Image>::operator->
                        ((CachedResourcePtr<Sexy::Image> *)&DAT_06acb6e0);
    iVar6 = SalesProgressBar::GetCurrentLevel(this_02);
    WorldMapCamera::DrawImageRotated
              (param_2,pIVar8,(float)(iVar2 - iVar5 / 2),
               (float)((iVar3 - iVar6 / 2) + *(int *)(this + 0x38)),(float)*(int *)(this + 0x3c),
               bVar4,-1.0,-1.0);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BouncingArrow::Draw(Sexy::Graphics*) */

void __thiscall BouncingArrow::Draw(BouncingArrow *this,Graphics *param_1)

{
  DrawWithCamera(this,param_1,(WorldMapCamera *)0x0);
  return;
}


/* non-virtual thunk to BouncingArrow::Draw(Sexy::Graphics*) */

void __thiscall BouncingArrow::Draw(BouncingArrow *this,Graphics *param_1)

{
  Draw(this + -0x28,param_1);
  return;
}


/* BouncingArrow::Create() */

void BouncingArrow::Create(void)

{
  GameObject::Create<BouncingArrow>();
  return;
}

