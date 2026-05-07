// Class: DragonFruitLava


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonFruitLava::StaticClassInit() */

void DragonFruitLava::StaticClassInit(void)

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
    std::string::string(asStack_10,"DragonFruitLava");
    (*pcVar2)(plVar1,asStack_10,FUN_040ff118,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DragonFruitLava::StaticGetClass() */

long * DragonFruitLava::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DragonFruitLava",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DragonFruitLava::GetClass() const */

long * DragonFruitLava::GetClass(void)

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
  (*pcVar3)(plVar1,"DragonFruitLava",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonFruitLava::CalcRenderOrder() const */

void DragonFruitLava::CalcRenderOrder(void)

{
  long lVar1;
  undefined4 local_14;
  undefined4 local_10;
  
  lVar1 = ___stack_chk_guard;
  GridItem::GetGridLocation();
  GridItem::GetGridLocation();
  Board::MakeRenderOrder(0x61a8a,local_14,local_10);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to DragonFruitLava::CalcRenderOrder() const */

void __thiscall DragonFruitLava::CalcRenderOrder(DragonFruitLava *this)

{
  CalcRenderOrder();
  return;
}


/* DragonFruitLava::DragonFruitLava() */

void __thiscall DragonFruitLava::DragonFruitLava(DragonFruitLava *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_067e27a0;
  *(undefined ***)(this + 0x10) = &PTR__DragonFruitLava_067e2a58;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b8));
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1b0) = uVar1;
  *(undefined4 *)(this + 0x1b4) = uVar1;
  return;
}


/* DragonFruitLava::StaticNew() */

DragonFruitLava * DragonFruitLava::StaticNew(void)

{
  DragonFruitLava *this;
  
  this = ::operator_new(0x1c0);
  DragonFruitLava(this);
  return this;
}


/* DragonFruitLava::~DragonFruitLava() */

void __thiscall DragonFruitLava::~DragonFruitLava(DragonFruitLava *this)

{
  *(undefined ***)this = &PTR_GetClass_067e27a0;
  *(undefined ***)(this + 0x10) = &PTR__DragonFruitLava_067e2a58;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to DragonFruitLava::~DragonFruitLava() */

void __thiscall DragonFruitLava::~DragonFruitLava(DragonFruitLava *this)

{
  ~DragonFruitLava(this + -0x10);
  return;
}


/* DragonFruitLava::~DragonFruitLava() */

void __thiscall DragonFruitLava::~DragonFruitLava(DragonFruitLava *this)

{
  ~DragonFruitLava(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DragonFruitLava::~DragonFruitLava() */

void __thiscall DragonFruitLava::~DragonFruitLava(DragonFruitLava *this)

{
  ~DragonFruitLava(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonFruitLava::UpdateStyleAnimation() */

void __thiscall DragonFruitLava::UpdateStyleAnimation(DragonFruitLava *this)

{
  int iVar1;
  PopAnimRig *pPVar2;
  size_t in_x2;
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_48);
  iVar1 = *(int *)(this + 0x1a8);
  if (iVar1 == 1) {
    std::string::append(asStack_48,"re06",in_x2);
  }
  else if (iVar1 == 2) {
    std::string::append(asStack_48,"re07",in_x2);
  }
  else if (iVar1 == 0) {
    std::string::append(asStack_48,"re05",in_x2);
  }
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,asStack_48,0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DragonFruitLava::OnWashedOut() */

void __thiscall DragonFruitLava::OnWashedOut(DragonFruitLava *this)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)PVZ_EOT();
  if (*(float *)(this + 0x1b4) == fVar1) {
    uVar2 = PVZ_T();
    *(undefined4 *)(this + 0x1b4) = uVar2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonFruitLava::onGridItemInitialize() */

void __thiscall DragonFruitLava::onGridItemInitialize(DragonFruitLava *this)

{
  long lVar1;
  ComponentWarmingRadius *this_00;
  DragonFruitLavaProps *pDVar2;
  undefined4 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GameObject::Create<ComponentWarmingRadius>();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1b8),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_00 = (ComponentWarmingRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
  pDVar2 = GridItem::GetProps<DragonFruitLavaProps>();
  ComponentWarmingRadius::SetRadiusProps(this_00,(ComponentWarmingRadiusProps *)(pDVar2 + 0xd8));
  uVar3 = PVZ_T();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1b0) = uVar3;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonFruitLava::causeDamage() */

void __thiscall DragonFruitLava::causeDamage(DragonFruitLava *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  DragonFruitLavaProps *pDVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  long *extraout_x0;
  RealObject *this_01;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  fVar9 = *(float *)(this + 0x1ac);
  local_8 = ___stack_chk_guard;
  pDVar4 = GridItem::GetProps<DragonFruitLavaProps>();
  fVar7 = *(float *)(pDVar4 + 0xd4);
  fVar8 = (float)PVZ_Dt();
  uVar5 = operator|(0x2000,0x400);
  uVar5 = operator|(uVar5,0x1000);
  uVar5 = operator|(uVar5,0x10000);
  Sexy::Point::Point((Point *)&local_88,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)(fVar9 * fVar7 * fVar8),local_80,local_7c,aDStack_68,uVar5,this,
             (Point *)&local_88,0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  GridItem::GetGridLocation();
  GridItem::GetGridLocation();
  EntityFinder::GetEntitiesAtGridSquare
            ((FastCurve *)&local_80,2,local_90 & 0xffffffff,local_88._4_4_);
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_80);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    this_01 = (RealObject *)*puVar6;
    cVar2 = RealObject::IsOnOpposingTeam(this_01,(RealObject *)this);
    if (cVar2 != '\0') {
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)this_01);
      if (this_00 == (Zombie *)0x0) {
        nop();
        if (((extraout_x0 != (long *)0x0) &&
            (cVar2 = (**(code **)(*extraout_x0 + 0xb8))(), cVar2 != '\0')) &&
           (cVar2 = (**(code **)(*extraout_x0 + 0x200))(extraout_x0), cVar2 != '\0')) {
          (**(code **)(*extraout_x0 + 0x110))(extraout_x0,aDStack_68);
        }
      }
      else {
        uVar3 = operator|(1,8);
        cVar2 = Zombie::MatchesAny(this_00,uVar3);
        if (((cVar2 == '\0') &&
            (cVar2 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,7), cVar2 != '\0')) &&
           (cVar2 = Zombie::IsFlying(this_00), cVar2 == '\0')) {
          (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_68);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonFruitLava::onUpdate() */

void __thiscall DragonFruitLava::onUpdate(DragonFruitLava *this)

{
  int iVar1;
  DragonFruitLavaProps *pDVar2;
  PopAnimRig *this_00;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 local_20 [2];
  undefined4 local_18 [3];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  fVar3 = (float)PVZ_EOT();
  if (*(float *)(this + 0x1b4) == fVar3) {
    causeDamage(this);
    fVar3 = (float)PVZ_T();
    fVar5 = *(float *)(this + 0x1b0);
    pDVar2 = GridItem::GetProps<DragonFruitLavaProps>();
    if (*(float *)(pDVar2 + 0xd0) < fVar3 - fVar5) {
      uVar4 = PVZ_T();
      *(undefined4 *)(this + 0x1b4) = uVar4;
    }
  }
  else {
    fVar3 = (float)PVZ_T();
    fVar5 = *(float *)(this + 0x1b4);
    local_20[0] = 0xff;
    local_18[0] = 0;
    iVar1 = CurveLerp<int>(0,0x3f000000,fVar3 - fVar5,(RtWeakPtr<Sexy::ResourceInfo> *)local_20,
                           (Color *)local_18,1);
    Sexy::Color::Color((Color *)local_18,1);
    local_c = iVar1;
    GridItemAnimation::GetAnimRig();
    this_00 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
    PopAnimRig::SetPAMColor(this_00,(Color *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
    if (0.5 < fVar3 - fVar5) {
      (**(code **)(*(long *)this + 0x48))(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

