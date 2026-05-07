// Class: GridItemElectricField


/* GridItemElectricField::onGridItemInitialize() */

void __thiscall GridItemElectricField::onGridItemInitialize(GridItemElectricField *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  *(undefined4 *)(this + 0x1b0) = 0;
  return;
}


/* GridItemElectricField::onDeadFinished(std::string const&) */

void GridItemElectricField::onDeadFinished(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* GridItemElectricField::CalcRenderOrder() const */

void __thiscall GridItemElectricField::CalcRenderOrder(GridItemElectricField *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61a8a,0,uVar1);
  return;
}


/* non-virtual thunk to GridItemElectricField::CalcRenderOrder() const */

void __thiscall GridItemElectricField::CalcRenderOrder(GridItemElectricField *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemElectricField::~GridItemElectricField() */

void __thiscall GridItemElectricField::~GridItemElectricField(GridItemElectricField *this)

{
  *(undefined ***)this = &PTR_GetClass_068289a0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemElectricField_06828c58;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemElectricField::~GridItemElectricField() */

void __thiscall GridItemElectricField::~GridItemElectricField(GridItemElectricField *this)

{
  ~GridItemElectricField(this + -0x10);
  return;
}


/* GridItemElectricField::~GridItemElectricField() */

void __thiscall GridItemElectricField::~GridItemElectricField(GridItemElectricField *this)

{
  ~GridItemElectricField(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemElectricField::~GridItemElectricField() */

void __thiscall GridItemElectricField::~GridItemElectricField(GridItemElectricField *this)

{
  ~GridItemElectricField(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemElectricField::StaticClassInit() */

void GridItemElectricField::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemElectricField");
    (*pcVar2)(plVar1,asStack_10,FUN_0429add0,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemElectricField::StaticGetClass() */

long * GridItemElectricField::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemElectricField",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemElectricField::GetClass() const */

long * GridItemElectricField::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemElectricField",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemElectricField::GridItemElectricField() */

void __thiscall GridItemElectricField::GridItemElectricField(GridItemElectricField *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_068289a0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemElectricField_06828c58;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  *(undefined4 *)(this + 0x1b0) = uVar1;
  *(undefined4 *)(this + 0x1b8) = 0x3f800000;
  *(undefined4 *)(this + 0x1bc) = 0x3f800000;
  return;
}


/* GridItemElectricField::StaticNew() */

GridItemElectricField * GridItemElectricField::StaticNew(void)

{
  GridItemElectricField *this;
  
  this = ::operator_new(0x1c0);
  GridItemElectricField(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemElectricField::isZombieTypeBlacklisted(std::string const&) */

void __thiscall
GridItemElectricField::isZombieTypeBlacklisted(GridItemElectricField *this,string *param_1)

{
  char cVar1;
  GridItemElectricFieldProps *pGVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemElectricFieldProps>();
  local_18 = FUN_0429b940(*(undefined8 *)(pGVar2 + 0xe8));
  local_10 = FUN_0429b990(*(undefined8 *)(pGVar2 + 0xf0));
  do {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)cVar1) {
LAB_0429bbfc:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1);
    }
    uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_05475d88(asStack_20,uVar3);
    cVar1 = std::operator==(asStack_20,param_1);
    if (cVar1 != '\0') {
      std::string::~string(asStack_20);
      goto LAB_0429bbfc;
    }
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemElectricField::setState(GridItemElectricFieldState) */

void __thiscall GridItemElectricField::setState(GridItemElectricField *this,int param_2)

{
  PopAnimRig *pPVar1;
  char *__s;
  PopAnimRig *local_a0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 2) {
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    std::string::string(asStack_58,"stay");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_58,0,(DummyInit *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  }
  else {
    if (param_2 == 3) {
      GridItemAnimation::GetAnimRig();
      local_a0 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      std::string::string(asStack_68,"death");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      __s = "onDeadFinished";
    }
    else {
      if (param_2 != 1) goto LAB_0429bc80;
      GridItemAnimation::GetAnimRig();
      local_a0 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      std::string::string(asStack_68,"birth");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      __s = "onResetFinished";
    }
    std::string::string(asStack_58,__s);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(local_a0,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  }
LAB_0429bc80:
  *(int *)(this + 0x1ac) = param_2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemElectricField::SetIdle() */

void __thiscall GridItemElectricField::SetIdle(GridItemElectricField *this)

{
  setState(this,2);
  return;
}


/* GridItemElectricField::ResetTimer() */

void __thiscall GridItemElectricField::ResetTimer(GridItemElectricField *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  setState(this,1);
  return;
}


/* GridItemElectricField::onResetFinished(std::string const&) */

void GridItemElectricField::onResetFinished(string *param_1)

{
  setState((GridItemElectricField *)param_1,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemElectricField::tryAffectZombies() */

void __thiscall GridItemElectricField::tryAffectZombies(GridItemElectricField *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  GridItemElectricFieldProps *pGVar10;
  undefined8 *puVar11;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar12;
  undefined8 local_98;
  undefined8 local_90 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [8];
  float local_60;
  undefined1 auStack_58 [68];
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68);
  if (this[0x1b4] == (GridItemElectricField)0x0) {
    pGVar10 = GridItem::GetProps<GridItemElectricFieldProps>();
    local_60 = *(float *)(pGVar10 + 0x100);
  }
  else {
    pGVar10 = GridItem::GetProps<GridItemElectricFieldProps>();
    local_60 = *(float *)(pGVar10 + 0x104);
  }
  local_60 = local_60 * *(float *)(this + 0x1b8);
  operator|=(auStack_58);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  iVar8 = FUN_042991e8(*(undefined4 *)(this + 0x130));
  pGVar10 = GridItem::GetProps<GridItemElectricFieldProps>();
  iVar1 = *(int *)(pGVar10 + 0xd4);
  iVar9 = FUN_042991ec(*(undefined4 *)(this + 0x134));
  pGVar10 = GridItem::GetProps<GridItemElectricFieldProps>();
  iVar2 = *(int *)(pGVar10 + 0xd8);
  pGVar10 = GridItem::GetProps<GridItemElectricFieldProps>();
  iVar3 = *(int *)(pGVar10 + 0xd0);
  pGVar10 = GridItem::GetProps<GridItemElectricFieldProps>();
  iVar4 = *(int *)(pGVar10 + 0xd4);
  pGVar10 = GridItem::GetProps<GridItemElectricFieldProps>();
  iVar5 = *(int *)(pGVar10 + 0xd8);
  pGVar10 = GridItem::GetProps<GridItemElectricFieldProps>();
  Sexy::Insets::Insets
            ((Insets *)local_90,iVar8 - iVar1,iVar9 - iVar2,iVar3 + 1 + iVar4,
             iVar5 + 1 + *(int *)(pGVar10 + 0xdc));
  EntityFinder::GetEntitiesInGridSquares(avStack_80,2,(Insets *)local_90);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_90[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_80);
  while (bVar6 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)local_90)
        , bVar6) {
    puVar11 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
    cVar7 = RealObject::IsOnOpposingTeam((RealObject *)*puVar11,(RealObject *)this);
    if (cVar7 != '\0') {
      nop();
      cVar7 = (**(code **)(*(long *)this_00 + 0x328))();
      if (((cVar7 == '\0') &&
          (cVar7 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar7 == '\0')) &&
         (cVar7 = Zombie::HasCondition(this_00,0x65), cVar7 == '\0')) {
        local_14 = 0x41200000;
        (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_68);
      }
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_00);
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      cVar7 = isZombieTypeBlacklisted(this,(string *)(lVar12 + 8));
      if (((((cVar7 == '\0') && (bVar6 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00), !bVar6))
           && ((cVar7 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar7 == '\0' &&
               ((cVar7 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar7 == '\0' &&
                (bVar6 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00), !bVar6))))))
          && (cVar7 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar7 == '\0')) &&
         (cVar7 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar7 == '\0')) {
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(this + 0x1bc),0,this_00,0x18,1);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemElectricField::onUpdate() */

void __thiscall GridItemElectricField::onUpdate(GridItemElectricField *this)

{
  GridItemElectricFieldProps *pGVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (*(int *)(this + 0x1ac) == 2) {
    fVar2 = (float)PVZ_T();
    fVar4 = *(float *)(this + 0x1a8);
    pGVar1 = GridItem::GetProps<GridItemElectricFieldProps>();
    if (*(float *)(pGVar1 + 0xe0) < fVar2 - fVar4) {
      setState(this,3);
      return;
    }
    fVar2 = (float)PVZ_T();
    fVar4 = *(float *)(this + 0x1b0);
    pGVar1 = GridItem::GetProps<GridItemElectricFieldProps>();
    if (*(float *)(pGVar1 + 0x108) < fVar2 - fVar4) {
      uVar3 = PVZ_T();
      *(undefined4 *)(this + 0x1b0) = uVar3;
      tryAffectZombies(this);
      return;
    }
  }
  return;
}

