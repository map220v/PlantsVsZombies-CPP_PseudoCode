// Class: FlyingObject


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlyingObject::GetAttachPosition() */

void FlyingObject::GetAttachPosition(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,0.0,0.0,0.0);
  local_18 = local_28;
  uVar2 = local_18;
  local_10 = local_20;
  local_18._0_4_ = (undefined4)local_28;
  uVar1 = (undefined4)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar3 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_18 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar3,local_20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlyingObject::GetAdjustEffectPosition() */

void __thiscall FlyingObject::GetAdjustEffectPosition(FlyingObject *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_28,(float)(int)*(float *)(this + 0x18),
             (float)(int)*(float *)(this + 0x1c),0.0);
  local_18 = local_28;
  uVar2 = local_18;
  local_10 = local_20;
  local_18._0_4_ = (undefined4)local_28;
  uVar1 = (undefined4)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar3 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_18 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar3,local_20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlyingObject::StaticClassInit() */

void FlyingObject::StaticClassInit(void)

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
    std::string::string(asStack_10,"FlyingObject");
    (*pcVar2)(plVar1,asStack_10,FUN_04ccd4ec,0xc0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FlyingObject::StaticGetClass() */

long * FlyingObject::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FlyingObject",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FlyingObject::GetClass() const */

long * FlyingObject::GetClass(void)

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
  (*pcVar3)(plVar1,"FlyingObject",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlyingObject::FlyingObject() */

void __thiscall FlyingObject::FlyingObject(FlyingObject *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0699ce40;
  *(undefined ***)(this + 0x10) = &PTR__FlyingObject_0699d048;
  Sexy::Point::Point((Point *)(this + 0xa4));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xb8),(RtWeakPtr *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xb0),(RtWeakPtr *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Sexy::Point::Point((Point *)&local_10);
  *(undefined8 *)(this + 0xa4) = local_10;
  cVar1 = IsHighFPSMode();
  uVar2 = 0x41200000;
  if (cVar1 == '\0') {
    uVar2 = 0x41a00000;
  }
  *(undefined4 *)(this + 0xac) = uVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FlyingObject::StaticNew() */

FlyingObject * FlyingObject::StaticNew(void)

{
  FlyingObject *this;
  
  this = ::operator_new(0xc0);
  FlyingObject(this);
  return this;
}


/* FlyingObject::~FlyingObject() */

void __thiscall FlyingObject::~FlyingObject(FlyingObject *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  long *plVar3;
  
  this_00 = (RtWeakPtr *)(this + 0xb0);
  *(undefined ***)this = &PTR_GetClass_0699ce40;
  *(undefined ***)(this + 0x10) = &PTR__FlyingObject_0699d048;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (!bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    BoardEntity::~BoardEntity((BoardEntity *)this);
    return;
  }
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
  if (cVar2 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar3 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to FlyingObject::~FlyingObject() */

void __thiscall FlyingObject::~FlyingObject(FlyingObject *this)

{
  ~FlyingObject(this + -0x10);
  return;
}


/* FlyingObject::~FlyingObject() */

void __thiscall FlyingObject::~FlyingObject(FlyingObject *this)

{
  ~FlyingObject(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FlyingObject::~FlyingObject() */

void __thiscall FlyingObject::~FlyingObject(FlyingObject *this)

{
  ~FlyingObject(this + -0x10);
  return;
}


/* FlyingObject::PlayAnimation(std::string const&, bool) */

void __thiscall FlyingObject::PlayAnimation(FlyingObject *this,string *param_1,bool param_2)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  Effect_PopAnim *pEVar3;
  
  this_00 = (RtWeakPtr *)(this + 0xb0);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if ((bVar1) && (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar2 != '\0'))
  {
    if (!param_2) {
      pEVar3 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Effect_PopAnim::PlaySingleAnimation(pEVar3,param_1,0);
      return;
    }
    pEVar3 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar3,param_1,0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlyingObject::InitParam(Plant*, std::string const&, RenderLayer) */

void FlyingObject::InitParam
               (undefined1 param_1_00 [16],undefined1 param_2 [16],undefined4 param_3,
               SharkMinion *param_1,undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  BoardTransforms *this_00;
  undefined8 uVar5;
  StandaloneEffect *pSVar6;
  float fVar7;
  string asStack_30 [8];
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xac) = 0x41a00000;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0xb8),(RtWeakPtrBase *)&local_18);
  this_00 = (BoardTransforms *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  fVar7 = *(float *)(param_1 + 0x1c);
  BoardTransforms::BoardSpaceToGrid(this_00,*(float *)(param_1 + 0x18),fVar7);
  *(ulong *)(param_1 + 0xa4) = CONCAT44(fStack_14,local_18);
  uVar3 = SharkMinion::getRow(param_1);
  uVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
  uVar4 = Board::MakeRenderOrder(param_7,uVar3,uVar4);
  local_28 = (**(code **)(*(long *)param_1 + 0x1e8))(param_1);
  local_24 = fVar7;
  local_20 = param_3;
  FUN_05475d88(asStack_30,param_6);
  fVar7 = local_24;
  uVar3 = local_20;
  PopAnimEffectFactory::CreateEffect
            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18,local_28,asStack_30,uVar4,0,1);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this,(RtWeakPtrBase *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_30);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this);
  if ((bVar1) && (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this), cVar2 != '\0')) {
    pSVar6 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    StandaloneEffect::SetKeepAlive(pSVar6,true);
    pSVar6 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    local_18 = (**(code **)(*(long *)param_1 + 0x1f0))(param_1);
    fStack_14 = fVar7;
    local_10 = uVar3;
    StandaloneEffect::SetAttached(pSVar6,(RealObject *)param_1,(SexyVector3 *)&local_18,2);
  }
  else {
    uVar5 = FUN_0547429c(param_6);
    Sexy::OutputDebugStrF((wchar_t *)"FlyingObject::InitParam create effect failed : %s",uVar5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlyingObject::onUpdate() */

void __thiscall FlyingObject::onUpdate(FlyingObject *this)

{
  undefined8 *puVar1;
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_10 = *(undefined4 *)(puVar1 + 1);
  local_18 = (float)*puVar1;
  _local_18 = CONCAT44((int)((ulong)*puVar1 >> 0x20),*(float *)(this + 0xac) + local_18);
  BoardEntity::SetPosition((BoardEntity *)this,(SexyVector3 *)&local_18);
  if (900.0 < local_18) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlyingObject::SetPosition(Sexy::SexyVector3 const&) */

void __thiscall FlyingObject::SetPosition(FlyingObject *this,SexyVector3 *param_1)

{
  long lVar1;
  long lVar2;
  BoardTransforms *this_00;
  undefined8 local_10;
  
  lVar1 = ___stack_chk_guard;
  this_00 = (BoardTransforms *)BoardEntity::SetPosition((BoardEntity *)this,param_1);
  BoardTransforms::BoardSpaceToGrid(this_00,*(float *)param_1,*(float *)(param_1 + 4));
  lVar2 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xa4) = local_10;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

