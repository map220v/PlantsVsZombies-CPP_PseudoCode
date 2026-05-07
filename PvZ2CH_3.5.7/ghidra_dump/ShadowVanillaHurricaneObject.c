// Class: ShadowVanillaHurricaneObject


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowVanillaHurricaneObject::GetAttachPosition() */

void ShadowVanillaHurricaneObject::GetAttachPosition(void)

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
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,0.0,-76.0,0.0);
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
/* ShadowVanillaHurricaneObject::InitParam(Plant*, std::string const&, RenderLayer) */

void ShadowVanillaHurricaneObject::InitParam
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
  undefined4 uStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  float fStack_14;
  undefined4 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this = (RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xac) = 0x41a00000;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0xb8),(RtWeakPtrBase *)&uStack_18);
  this_00 = (BoardTransforms *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_18);
  fVar7 = *(float *)(param_1 + 0x1c);
  BoardTransforms::BoardSpaceToGrid(this_00,*(float *)(param_1 + 0x18),fVar7);
  *(ulong *)(param_1 + 0xa4) = CONCAT44(fStack_14,uStack_18);
  uVar3 = SharkMinion::getRow(param_1);
  uVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
  uVar4 = Board::MakeRenderOrder(param_7,uVar3,uVar4);
  uStack_28 = (**(code **)(*(long *)param_1 + 0x1e8))(param_1);
  fStack_24 = fVar7;
  uStack_20 = param_3;
  FUN_05475d88(asStack_30,param_6);
  fVar7 = fStack_24;
  uVar3 = uStack_20;
  PopAnimEffectFactory::CreateEffect
            ((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_18,uStack_28,asStack_30,uVar4,0,1);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this,(RtWeakPtrBase *)&uStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_18);
  std::string::~string(asStack_30);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this);
  if ((bVar1) && (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this), cVar2 != '\0')) {
    pSVar6 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    StandaloneEffect::SetKeepAlive(pSVar6,true);
    pSVar6 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    uStack_18 = (**(code **)(*(long *)param_1 + 0x1f0))(param_1);
    fStack_14 = fVar7;
    uStack_10 = uVar3;
    StandaloneEffect::SetAttached(pSVar6,(RealObject *)param_1,(SexyVector3 *)&uStack_18,2);
  }
  else {
    uVar5 = FUN_0547429c(param_6);
    Sexy::OutputDebugStrF((wchar_t *)"FlyingObject::InitParam create effect failed : %s",uVar5);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShadowVanillaHurricaneObject::~ShadowVanillaHurricaneObject() */

void __thiscall
ShadowVanillaHurricaneObject::~ShadowVanillaHurricaneObject(ShadowVanillaHurricaneObject *this)

{
  *(undefined ***)this = &PTR_GetClass_069a1d30;
  *(undefined ***)(this + 0x10) = &PTR__ShadowVanillaHurricaneObject_069a1f38;
  FlyingObject::~FlyingObject((FlyingObject *)this);
  return;
}


/* non-virtual thunk to ShadowVanillaHurricaneObject::~ShadowVanillaHurricaneObject() */

void __thiscall
ShadowVanillaHurricaneObject::~ShadowVanillaHurricaneObject(ShadowVanillaHurricaneObject *this)

{
  ~ShadowVanillaHurricaneObject(this + -0x10);
  return;
}


/* ShadowVanillaHurricaneObject::~ShadowVanillaHurricaneObject() */

void __thiscall
ShadowVanillaHurricaneObject::~ShadowVanillaHurricaneObject(ShadowVanillaHurricaneObject *this)

{
  ~ShadowVanillaHurricaneObject(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ShadowVanillaHurricaneObject::~ShadowVanillaHurricaneObject() */

void __thiscall
ShadowVanillaHurricaneObject::~ShadowVanillaHurricaneObject(ShadowVanillaHurricaneObject *this)

{
  ~ShadowVanillaHurricaneObject(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowVanillaHurricaneObject::StaticClassInit() */

void ShadowVanillaHurricaneObject::StaticClassInit(void)

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
    std::string::string(asStack_10,"ShadowVanillaHurricaneObject");
    (*pcVar2)(plVar1,asStack_10,FUN_04ce05c0,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShadowVanillaHurricaneObject::StaticGetClass() */

long * ShadowVanillaHurricaneObject::StaticGetClass(void)

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
  uVar2 = FlyingObject::StaticGetClass();
  (*pcVar3)(plVar1,"ShadowVanillaHurricaneObject",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShadowVanillaHurricaneObject::GetClass() const */

long * ShadowVanillaHurricaneObject::GetClass(void)

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
  uVar2 = FlyingObject::StaticGetClass();
  (*pcVar3)(plVar1,"ShadowVanillaHurricaneObject",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShadowVanillaHurricaneObject::ShadowVanillaHurricaneObject() */

void __thiscall
ShadowVanillaHurricaneObject::ShadowVanillaHurricaneObject(ShadowVanillaHurricaneObject *this)

{
  FlyingObject::FlyingObject((FlyingObject *)this);
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined ***)this = &PTR_GetClass_069a1d30;
  *(undefined ***)(this + 0x10) = &PTR__ShadowVanillaHurricaneObject_069a1f38;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  return;
}


/* ShadowVanillaHurricaneObject::StaticNew() */

ShadowVanillaHurricaneObject * ShadowVanillaHurricaneObject::StaticNew(void)

{
  ShadowVanillaHurricaneObject *this;
  
  this = ::operator_new(0xd8);
  ShadowVanillaHurricaneObject(this);
  return this;
}


/* ShadowVanillaHurricaneObject::SetDamages(int, int, float, float) */

void __thiscall
ShadowVanillaHurricaneObject::SetDamages
          (ShadowVanillaHurricaneObject *this,int param_1,int param_2,float param_3,float param_4)

{
  *(float *)(this + 0xcc) = param_3;
  *(int *)(this + 0xc4) = param_1;
  *(int *)(this + 200) = param_2;
  *(float *)(this + 0xd0) = param_4;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowVanillaHurricaneObject::DoAttack(Sexy::Point) */

void __thiscall
ShadowVanillaHurricaneObject::DoAttack(ShadowVanillaHurricaneObject *this,int *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  Zombie *this_00;
  undefined8 local_a0;
  undefined8 local_98;
  Insets aIStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_90,*param_2,param_2[1] + -1,1,3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  EntityFinder::GetEntitiesInGridSquares(avStack_80,2,aIStack_90);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar2) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
    if ((this_00 != (Zombie *)0x0) && (cVar1 = Zombie::IsControlled(this_00), cVar1 == '\0')) {
                    /* WARNING: Load size is inaccurate */
      Zombie::ApplyCondition(*(Zombie **)(this + 0xcc),0,this_00,0x51,1);
      Zombie::SetConditionTracker(*(undefined4 *)(this + 0xd0),this_00,0x51);
      DamageInfo::DamageInfo(aDStack_68);
      local_60 = (float)(*(int *)(this + 0xc4) + *(int *)(this + 200));
      (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowVanillaHurricaneObject::onUpdate() */

void __thiscall ShadowVanillaHurricaneObject::onUpdate(ShadowVanillaHurricaneObject *this)

{
  char cVar1;
  int local_18;
  undefined4 uStack_14;
  Point aPStack_10 [8];
  BoardTransforms *local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::BoardSpaceToGrid
            (___stack_chk_guard,*(float *)(this + 0x18),*(float *)(this + 0x1c));
  if ((-1 < local_18) &&
     (cVar1 = Sexy::TPoint<int>::operator!=((TPoint<int> *)(this + 0xa4),(TPoint *)&local_18),
     cVar1 != '\0')) {
    *(ulong *)(this + 0xa4) = CONCAT44(uStack_14,local_18);
    Sexy::Point::Point(aPStack_10,(TPoint *)&local_18);
    DoAttack(this,aPStack_10);
  }
  FlyingObject::onUpdate((FlyingObject *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

