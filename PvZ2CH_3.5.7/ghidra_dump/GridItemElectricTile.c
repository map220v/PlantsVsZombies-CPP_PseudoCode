// Class: GridItemElectricTile


/* GridItemElectricTile::CalcRenderOrder() const */

void __thiscall GridItemElectricTile::CalcRenderOrder(GridItemElectricTile *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61a8a,uVar1,uVar2);
  return;
}


/* non-virtual thunk to GridItemElectricTile::CalcRenderOrder() const */

void __thiscall GridItemElectricTile::CalcRenderOrder(GridItemElectricTile *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemElectricTile::~GridItemElectricTile() */

void __thiscall GridItemElectricTile::~GridItemElectricTile(GridItemElectricTile *this)

{
  *(undefined ***)this = &PTR_GetClass_069ae260;
  *(undefined ***)(this + 0x10) = &PTR__GridItemElectricTile_069ae518;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemElectricTile::~GridItemElectricTile() */

void __thiscall GridItemElectricTile::~GridItemElectricTile(GridItemElectricTile *this)

{
  ~GridItemElectricTile(this + -0x10);
  return;
}


/* GridItemElectricTile::~GridItemElectricTile() */

void __thiscall GridItemElectricTile::~GridItemElectricTile(GridItemElectricTile *this)

{
  ~GridItemElectricTile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemElectricTile::~GridItemElectricTile() */

void __thiscall GridItemElectricTile::~GridItemElectricTile(GridItemElectricTile *this)

{
  ~GridItemElectricTile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemElectricTile::StaticClassInit() */

void GridItemElectricTile::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemElectricTile");
    (*pcVar2)(plVar1,asStack_10,FUN_04d38748,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemElectricTile::StaticGetClass() */

long * GridItemElectricTile::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemElectricTile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemElectricTile::GetClass() const */

long * GridItemElectricTile::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemElectricTile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemElectricTile::GridItemElectricTile() */

void __thiscall GridItemElectricTile::GridItemElectricTile(GridItemElectricTile *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_069ae260;
  *(undefined ***)(this + 0x10) = &PTR__GridItemElectricTile_069ae518;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  *(undefined4 *)(this + 0x1bc) = uVar1;
  *(undefined4 *)(this + 0x1b4) = 0;
  *(undefined4 *)(this + 0x1b8) = 0;
  return;
}


/* GridItemElectricTile::StaticNew() */

GridItemElectricTile * GridItemElectricTile::StaticNew(void)

{
  GridItemElectricTile *this;
  
  this = ::operator_new(0x1c0);
  GridItemElectricTile(this);
  return this;
}


/* GridItemElectricTile::InitializeProperties(float, float, float) */

void __thiscall
GridItemElectricTile::InitializeProperties
          (GridItemElectricTile *this,float param_1,float param_2,float param_3)

{
  *(float *)(this + 0x1b4) = param_2;
  *(float *)(this + 0x1ac) = param_1;
  *(float *)(this + 0x1b0) = param_1;
  *(float *)(this + 0x1b8) = param_3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemElectricTile::onAnimationComplete(std::string const&) */

void __thiscall
GridItemElectricTile::onAnimationComplete(GridItemElectricTile *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  PopAnimRig *pPVar3;
  RtMixedPtr<Sexy::Image> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_48);
  if (cVar1 == '\0') {
    bVar2 = std::operator==(param_1,"spawn");
    if (bVar2) {
      pPVar3 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48)
      ;
      std::string::string(asStack_40,"animation_loop");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
    }
    else {
      bVar2 = std::operator==(param_1,"end");
      if (bVar2) {
        (**(code **)(*(long *)this + 0x48))(this);
      }
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemElectricTile::ResetTimer(float) */

void __thiscall GridItemElectricTile::ResetTimer(GridItemElectricTile *this,float param_1)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(float *)(this + 0x1ac) = param_1;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemElectricTile::onGridItemInitialize() */

void __thiscall GridItemElectricTile::onGridItemInitialize(GridItemElectricTile *this)

{
  char cVar1;
  PopAnimRig *pPVar2;
  undefined4 uVar3;
  RtMixedPtrBase aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar3;
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x1bc) = uVar3;
  RealObject::JoinTeam((RealObject *)this,1);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_78);
  if (cVar1 != '\0') {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    std::string::string(asStack_68,"spawn");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onAnimationComplete");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar2,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemElectricTile::damageZombie(Zombie*) */

void __thiscall GridItemElectricTile::damageZombie(GridItemElectricTile *this,Zombie *param_1)

{
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    DamageInfo::DamageInfo(aDStack_68);
    local_60 = *(undefined4 *)(this + 0x1b4);
    (**(code **)(*(long *)param_1 + 0x110))(param_1,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemElectricTile::onUpdate() */

void __thiscall GridItemElectricTile::onUpdate(GridItemElectricTile *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  Zombie *extraout_x0;
  PopAnimRig *pPVar5;
  float fVar6;
  undefined4 uVar7;
  RtMixedPtrBase aRStack_88 [8];
  RtMixedPtr aRStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  fVar6 = (float)PVZ_T();
  if ((*(float *)(this + 0x1b8) + *(float *)(this + 0x1bc) < fVar6) &&
     (fVar6 = (float)PVZ_T(), fVar6 - *(float *)(this + 0x1a8) < *(float *)(this + 0x1b0))) {
    uVar7 = PVZ_T();
    *(undefined4 *)(this + 0x1bc) = uVar7;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
    uVar7 = FUN_04d361f0(*(undefined4 *)(this + 0x130));
    uVar3 = FUN_04d361f4(*(undefined4 *)(this + 0x134));
    EntityFinder::GetEntitiesAtGridSquare(avStack_68,2,uVar7,uVar3);
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_68);
    local_70 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_68);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70), bVar2)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78)
      ;
      if (((RealObject *)*puVar4 != (RealObject *)0x0) &&
         (cVar1 = RealObject::IsOnOpposingTeam((RealObject *)*puVar4,(RealObject *)this),
         cVar1 != '\0')) {
        nop();
        damageZombie(this,extraout_x0);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
  }
  fVar6 = (float)PVZ_T();
  if (*(float *)(this + 0x1b0) < fVar6 - *(float *)(this + 0x1a8)) {
    uVar7 = PVZ_EOT();
    *(undefined4 *)(this + 0x1ac) = uVar7;
    GridItemAnimation::GetAnimRig();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_88);
    if (cVar1 != '\0') {
      pPVar5 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88)
      ;
      std::string::string((string *)&local_78,"end");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
      std::string::string((string *)avStack_68,"onAnimationComplete");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                 (RtId *)&local_70,(string *)avStack_68);
      PopAnimRig::PlayAndStop(pPVar5,(string *)&local_78,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)avStack_68);
      nop();
      Sexy::RtId::~RtId((RtId *)&local_70);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
      std::string::~string((string *)&local_78);
      nop();
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

