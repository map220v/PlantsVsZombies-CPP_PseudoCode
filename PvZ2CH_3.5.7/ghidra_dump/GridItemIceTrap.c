// Class: GridItemIceTrap


/* GridItemIceTrap::CalcRenderOrder() const */

void __thiscall GridItemIceTrap::CalcRenderOrder(GridItemIceTrap *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61a8a,0,uVar1);
  return;
}


/* non-virtual thunk to GridItemIceTrap::CalcRenderOrder() const */

void __thiscall GridItemIceTrap::CalcRenderOrder(GridItemIceTrap *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemIceTrap::GetCantPlantReason() const */

undefined8 GridItemIceTrap::GetCantPlantReason(void)

{
  return 0x7f;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIceTrap::StaticClassInit() */

void GridItemIceTrap::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemIceTrap");
    (*pcVar2)(plVar1,asStack_10,FUN_03fc9788,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemIceTrap::StaticGetClass() */

long * GridItemIceTrap::StaticGetClass(void)

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
  uVar2 = GridItemBreakableTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemIceTrap",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemIceTrap::GetClass() const */

long * GridItemIceTrap::GetClass(void)

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
  uVar2 = GridItemBreakableTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemIceTrap",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemIceTrap::~GridItemIceTrap() */

void __thiscall GridItemIceTrap::~GridItemIceTrap(GridItemIceTrap *this)

{
  *(undefined ***)this = &PTR_GetClass_067aca80;
  *(undefined ***)(this + 0x10) = &PTR__GridItemIceTrap_067acd60;
  GridItemBreakableTarget::~GridItemBreakableTarget((GridItemBreakableTarget *)this);
  return;
}


/* non-virtual thunk to GridItemIceTrap::~GridItemIceTrap() */

void __thiscall GridItemIceTrap::~GridItemIceTrap(GridItemIceTrap *this)

{
  ~GridItemIceTrap(this + -0x10);
  return;
}


/* GridItemIceTrap::~GridItemIceTrap() */

void __thiscall GridItemIceTrap::~GridItemIceTrap(GridItemIceTrap *this)

{
  ~GridItemIceTrap(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemIceTrap::~GridItemIceTrap() */

void __thiscall GridItemIceTrap::~GridItemIceTrap(GridItemIceTrap *this)

{
  ~GridItemIceTrap(this + -0x10);
  return;
}


/* GridItemIceTrap::GridItemIceTrap() */

void __thiscall GridItemIceTrap::GridItemIceTrap(GridItemIceTrap *this)

{
  undefined4 uVar1;
  
  GridItemBreakableTarget::GridItemBreakableTarget((GridItemBreakableTarget *)this);
  *(undefined ***)this = &PTR_GetClass_067aca80;
  *(undefined ***)(this + 0x10) = &PTR__GridItemIceTrap_067acd60;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1c4) = uVar1;
  *(undefined4 *)(this + 0x1cc) = 0;
  return;
}


/* GridItemIceTrap::StaticNew() */

GridItemIceTrap * GridItemIceTrap::StaticNew(void)

{
  GridItemIceTrap *this;
  
  this = ::operator_new(0x1d0);
  GridItemIceTrap(this);
  return this;
}


/* GridItemIceTrap::onGridItemInitialize() */

void __thiscall GridItemIceTrap::onGridItemInitialize(GridItemIceTrap *this)

{
  undefined4 uVar1;
  
  GridItemBreakableTarget::onGridItemInitialize((GridItemBreakableTarget *)this);
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1c4) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIceTrap::setState(GridItemIceTrapState) */

void __thiscall GridItemIceTrap::setState(GridItemIceTrap *this,int param_2)

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
    std::string::string(asStack_58,"b0302");
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
      __s = "b0303";
    }
    else {
      if (param_2 != 1) goto LAB_03fca504;
      GridItemAnimation::GetAnimRig();
      local_a0 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      __s = "b03";
    }
    std::string::string(asStack_68,__s);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"OnPopAnimDone");
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
LAB_03fca504:
  *(int *)(this + 0x1c8) = param_2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemIceTrap::SetResetting() */

void __thiscall GridItemIceTrap::SetResetting(GridItemIceTrap *this)

{
  setState(this,1);
  return;
}


/* GridItemIceTrap::ResetTimer() */

void __thiscall GridItemIceTrap::ResetTimer(GridItemIceTrap *this)

{
  undefined4 uVar1;
  
  (**(code **)(*(long *)this + 0x2a8))();
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1c4) = uVar1;
  setState(this,1);
  return;
}


/* GridItemIceTrap::OnPopAnimDone(std::string const&) */

ulong __thiscall GridItemIceTrap::OnPopAnimDone(GridItemIceTrap *this,string *param_1)

{
  bool bVar1;
  ulong uVar2;
  
  bVar1 = std::operator==(param_1,"b03");
  if (!bVar1) {
    bVar1 = std::operator==(param_1,"b0303");
    return (ulong)bVar1;
  }
  uVar2 = setState(this,2);
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIceTrap::applyIceTrap() */

void __thiscall GridItemIceTrap::applyIceTrap(GridItemIceTrap *this)

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
  GridItemIceTrapProps *pGVar10;
  undefined8 *puVar11;
  Plant *this_00;
  RealObject *this_01;
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar8 = FUN_03fc622c(*(undefined4 *)(this + 0x130));
  pGVar10 = GridItem::GetProps<GridItemIceTrapProps>();
  iVar1 = *(int *)(pGVar10 + 0x13c);
  iVar9 = FUN_03fc6230(*(undefined4 *)(this + 0x134));
  pGVar10 = GridItem::GetProps<GridItemIceTrapProps>();
  iVar2 = *(int *)(pGVar10 + 0x140);
  pGVar10 = GridItem::GetProps<GridItemIceTrapProps>();
  iVar3 = *(int *)(pGVar10 + 0x138);
  pGVar10 = GridItem::GetProps<GridItemIceTrapProps>();
  iVar4 = *(int *)(pGVar10 + 0x13c);
  pGVar10 = GridItem::GetProps<GridItemIceTrapProps>();
  iVar5 = *(int *)(pGVar10 + 0x140);
  pGVar10 = GridItem::GetProps<GridItemIceTrapProps>();
  Sexy::Insets::Insets
            ((Insets *)local_30,iVar8 - iVar1,iVar9 - iVar2,iVar3 + 1 + iVar4,
             iVar5 + 1 + *(int *)(pGVar10 + 0x144));
  EntityFinder::GetEntitiesInGridSquares(avStack_20,1,(Insets *)local_30);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
  while (bVar6 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_30)
        , bVar6) {
    puVar11 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    this_01 = (RealObject *)*puVar11;
    cVar7 = RealObject::IsOnOpposingTeam(this_01,(RealObject *)this);
    if ((cVar7 != '\0') &&
       (this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)this_01), this_00 != (Plant *)0x0)) {
      Plant::AddFrost(this_00,100);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemIceTrap::onUpdate() */

void __thiscall GridItemIceTrap::onUpdate(GridItemIceTrap *this)

{
  GridItemIceTrapProps *pGVar1;
  float fVar2;
  
  GridItemBreakableTarget::onUpdate((GridItemBreakableTarget *)this);
  if ((*(int *)(this + 0x1c8) == 2) && (fVar2 = (float)PVZ_T(), *(float *)(this + 0x1cc) <= fVar2))
  {
    applyIceTrap(this);
    fVar2 = (float)PVZ_T();
    pGVar1 = GridItem::GetProps<GridItemIceTrapProps>();
    *(float *)(this + 0x1cc) = fVar2 + *(float *)(pGVar1 + 0x14c);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIceTrap::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemIceTrap::GatherPlantingRestrictions
          (GridItemIceTrap *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  local_c = GetCantPlantReason();
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

