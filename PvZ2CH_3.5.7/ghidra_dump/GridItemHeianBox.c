// Class: GridItemHeianBox


/* GridItemHeianBox::~GridItemHeianBox() */

void __thiscall GridItemHeianBox::~GridItemHeianBox(GridItemHeianBox *this)

{
  *(undefined ***)this = &PTR_GetClass_06766310;
  *(undefined ***)(this + 0x10) = &PTR__GridItemHeianBox_067665e0;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemHeianBox::~GridItemHeianBox() */

void __thiscall GridItemHeianBox::~GridItemHeianBox(GridItemHeianBox *this)

{
  ~GridItemHeianBox(this + -0x10);
  return;
}


/* GridItemHeianBox::~GridItemHeianBox() */

void __thiscall GridItemHeianBox::~GridItemHeianBox(GridItemHeianBox *this)

{
  ~GridItemHeianBox(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemHeianBox::~GridItemHeianBox() */

void __thiscall GridItemHeianBox::~GridItemHeianBox(GridItemHeianBox *this)

{
  ~GridItemHeianBox(this + -0x10);
  return;
}


/* GridItemHeianBox::CalcRenderOrder() const */

void __thiscall GridItemHeianBox::CalcRenderOrder(GridItemHeianBox *this)

{
  int iVar1;
  
  iVar1 = FUN_03d27f10(*(undefined4 *)(this + 0x134));
  Board::MakeGroundRenderOrder(iVar1,1);
  return;
}


/* non-virtual thunk to GridItemHeianBox::CalcRenderOrder() const */

void __thiscall GridItemHeianBox::CalcRenderOrder(GridItemHeianBox *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBox::StaticClassInit() */

void GridItemHeianBox::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemHeianBox");
    (*pcVar2)(plVar1,asStack_10,FUN_03d2a48c,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHeianBox::StaticGetClass() */

long * GridItemHeianBox::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemHeianBox",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHeianBox::GetClass() const */

long * GridItemHeianBox::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemHeianBox",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHeianBox::GridItemHeianBox() */

void __thiscall GridItemHeianBox::GridItemHeianBox(GridItemHeianBox *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_06766310;
  *(undefined ***)(this + 0x10) = &PTR__GridItemHeianBox_067665e0;
  return;
}


/* GridItemHeianBox::StaticNew() */

GridItemHeianBox * GridItemHeianBox::StaticNew(void)

{
  GridItemHeianBox *this;
  
  this = ::operator_new(0x1b0);
  GridItemHeianBox(this);
  return this;
}


/* GridItemHeianBox::GetCantPlantReason() const */

undefined8 GridItemHeianBox::GetCantPlantReason(void)

{
  return 0x67;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBox::onActivated() */

void GridItemHeianBox::onActivated(void)

{
  GridItemHeianBoxAnimRig *this;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  GridItemHeianBoxAnimRig::PlayBoxActivated(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBox::setState(HeianBoxState) */

void __thiscall GridItemHeianBox::setState(GridItemHeianBox *this,int param_2)

{
  GridItemSummerFireworksAnimRig *this_00;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1a8) == param_2) goto switchD_03d2b7b4_default;
  *(int *)(this + 0x1a8) = param_2;
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  switch(param_2) {
  case 1:
    GridItemSummerFireworksAnimRig::PlayIdle(this_00);
    break;
  case 2:
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)aRStack_58,"onAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,aRStack_58);
    GridItemSummerFireworksAnimRig::PlaySmokeStart(this_00,aRStack_50);
    goto LAB_03d2b828;
  case 3:
    (**(code **)(*(long *)this + 0x2b0))(this);
    break;
  case 4:
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)aRStack_58,"onAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,aRStack_58);
    GridItemSummerFireworksAnimRig::PlayActivated(this_00,aRStack_50);
LAB_03d2b828:
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string((string *)aRStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
switchD_03d2b7b4_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemHeianBox::onGridItemInitialize() */

void __thiscall GridItemHeianBox::onGridItemInitialize(GridItemHeianBox *this)

{
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  setState(this,1);
  return;
}


/* GridItemHeianBox::Activate() */

char __thiscall GridItemHeianBox::Activate(GridItemHeianBox *this)

{
  char cVar1;
  
  cVar1 = GridItemWizardCrucible::canActivated((GridItemWizardCrucible *)this);
  if (cVar1 != '\0') {
    setState(this,2);
  }
  return cVar1;
}


/* GridItemHeianBox::onAnimDone(std::string const&) */

void GridItemHeianBox::onAnimDone(string *param_1)

{
  if (*(int *)(param_1 + 0x1a8) == 2) {
    setState((GridItemHeianBox *)param_1,3);
    return;
  }
  if (*(int *)(param_1 + 0x1a8) != 4) {
    return;
  }
  setState((GridItemHeianBox *)param_1,1);
  return;
}


/* GridItemHeianBox::onUpdate() */

void __thiscall GridItemHeianBox::onUpdate(GridItemHeianBox *this)

{
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (*(int *)(this + 0x1a8) != 0) {
    (**(code **)(*(long *)this + 0x2b8))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBox::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemHeianBox::GatherPlantingRestrictions
          (GridItemHeianBox *this,PlantType *param_1,vector *param_2)

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

