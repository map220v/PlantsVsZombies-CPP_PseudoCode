// Class: GridItemDumpling


/* GridItemDumpling::~GridItemDumpling() */

void __thiscall GridItemDumpling::~GridItemDumpling(GridItemDumpling *this)

{
  *(undefined ***)this = &PTR_GetClass_06996c60;
  *(undefined ***)(this + 0x10) = &PTR__GridItemDumpling_06996f18;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemDumpling::~GridItemDumpling() */

void __thiscall GridItemDumpling::~GridItemDumpling(GridItemDumpling *this)

{
  ~GridItemDumpling(this + -0x10);
  return;
}


/* GridItemDumpling::~GridItemDumpling() */

void __thiscall GridItemDumpling::~GridItemDumpling(GridItemDumpling *this)

{
  ~GridItemDumpling(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemDumpling::~GridItemDumpling() */

void __thiscall GridItemDumpling::~GridItemDumpling(GridItemDumpling *this)

{
  ~GridItemDumpling(this + -0x10);
  return;
}


/* GridItemDumpling::CalcRenderOrder() const */

void __thiscall GridItemDumpling::CalcRenderOrder(GridItemDumpling *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_04c9db04(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x61e68,uVar1,1);
  return;
}


/* non-virtual thunk to GridItemDumpling::CalcRenderOrder() const */

void __thiscall GridItemDumpling::CalcRenderOrder(GridItemDumpling *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemDumpling::GridItemDumpling() */

void __thiscall GridItemDumpling::GridItemDumpling(GridItemDumpling *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_06996c60;
  *(undefined ***)(this + 0x10) = &PTR__GridItemDumpling_06996f18;
  return;
}


/* GridItemDumpling::StaticNew() */

GridItemDumpling * GridItemDumpling::StaticNew(void)

{
  GridItemDumpling *this;
  
  this = ::operator_new(0x1b0);
  GridItemDumpling(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemDumpling::StaticClassInit() */

void GridItemDumpling::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemDumpling");
    (*pcVar2)(plVar1,asStack_10,FUN_04c9e93c,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemDumpling::StaticGetClass() */

long * GridItemDumpling::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemDumpling",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemDumpling::GetClass() const */

long * GridItemDumpling::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemDumpling",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemDumpling::playAnimalUnderAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
GridItemDumpling::playAnimalUnderAttack(undefined8 param_1,RtReflectionDelegate *param_2)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  std::string::string(asStack_58,"under_attack");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemDumpling::setState(DumplingState) */

void __thiscall GridItemDumpling::setState(GridItemDumpling *this,int param_2)

{
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1a8) == param_2) goto LAB_04c9f16c;
  *(int *)(this + 0x1a8) = param_2;
  if (param_2 == 1) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    playAnimalUnderAttack(this,aRStack_50);
  }
  else {
    if (param_2 == 0) {
      GridItemTurkey::playAnimalIdle((GridItemTurkey *)this);
      goto LAB_04c9f16c;
    }
    if (param_2 != 2) goto LAB_04c9f16c;
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    GridItemTurkey::playAnimalDie((GridItemTurkey *)this,aRStack_50);
  }
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
LAB_04c9f16c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemDumpling::onGridItemInitialize() */

void __thiscall GridItemDumpling::onGridItemInitialize(GridItemDumpling *this)

{
  GridItemAnimationProps *pGVar1;
  
  pGVar1 = GridItem::GetProps<GridItemAnimationProps>();
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  FUN_04c9daf4(*(undefined4 *)(pGVar1 + 0x10),this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_04c9dafc(this + 0x128);
  setState(this,0);
  GridItemTurkey::playAnimalIdle((GridItemTurkey *)this);
  RealObject::JoinTeam((RealObject *)this,1);
  return;
}


/* GridItemDumpling::onAnimDone(std::string const&) */

void __thiscall GridItemDumpling::onAnimDone(GridItemDumpling *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"die");
  if (bVar1) {
    (**(code **)(*(long *)this + 0x48))(this);
    return;
  }
  bVar1 = std::operator==(param_1,"under_attack");
  if (!bVar1) {
    return;
  }
  setState(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemDumpling::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemDumpling::GatherPlantingRestrictions
          (GridItemDumpling *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  local_c = 0x2b;
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemDumpling::TakeDamage(DamageInfo const&) */

void __thiscall GridItemDumpling::TakeDamage(GridItemDumpling *this,DamageInfo *param_1)

{
  if (*(int *)(this + 0x1a8) == 0) {
    setState(this,1);
  }
  GridItem::TakeDamage((GridItem *)this,param_1);
  return;
}

