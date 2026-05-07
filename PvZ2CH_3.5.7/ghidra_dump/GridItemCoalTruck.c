// Class: GridItemCoalTruck


/* GridItemCoalTruck::onAnimStoppedCallback(std::string const&) */

void GridItemCoalTruck::onAnimStoppedCallback(string *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)param_1;
  if (*(code **)(lVar1 + 0x280) != GridItem::onKilled) {
    (**(code **)(lVar1 + 0x280))();
    lVar1 = *(long *)param_1;
  }
  (**(code **)(lVar1 + 0x48))(param_1);
  return;
}


/* GridItemCoalTruck::GetCantPlantReason() const */

undefined8 GridItemCoalTruck::GetCantPlantReason(void)

{
  return 0x5b;
}


/* GridItemCoalTruck::GridItemCoalTruck() */

void __thiscall GridItemCoalTruck::GridItemCoalTruck(GridItemCoalTruck *this)

{
  GridItemGravestone::GridItemGravestone((GridItemGravestone *)this);
  *(undefined ***)this = &PTR_GetClass_0674f5b0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCoalTruck_0674f870;
  return;
}


/* GridItemCoalTruck::StaticNew() */

GridItemCoalTruck * GridItemCoalTruck::StaticNew(void)

{
  GridItemCoalTruck *this;
  
  this = ::operator_new(0x1e8);
  GridItemCoalTruck(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCoalTruck::StaticClassInit() */

void GridItemCoalTruck::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCoalTruck");
    (*pcVar2)(plVar1,asStack_10,FUN_03c38c10,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCoalTruck::StaticGetClass() */

long * GridItemCoalTruck::StaticGetClass(void)

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
  uVar2 = GridItemGravestone::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCoalTruck",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCoalTruck::GetClass() const */

long * GridItemCoalTruck::GetClass(void)

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
  uVar2 = GridItemGravestone::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCoalTruck",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCoalTruck::KillGridItem() */

void __thiscall GridItemCoalTruck::KillGridItem(GridItemCoalTruck *this)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1e0] == (GridItemCoalTruck)0x0) {
    this[0x1e0] = (GridItemCoalTruck)0x1;
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_58,"animation2");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_68,asStack_60);
    PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCoalTruck::~GridItemCoalTruck() */

void __thiscall GridItemCoalTruck::~GridItemCoalTruck(GridItemCoalTruck *this)

{
  *(undefined ***)this = &PTR_GetClass_0674f5b0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCoalTruck_0674f870;
  GridItemGravestone::~GridItemGravestone((GridItemGravestone *)this);
  return;
}


/* non-virtual thunk to GridItemCoalTruck::~GridItemCoalTruck() */

void __thiscall GridItemCoalTruck::~GridItemCoalTruck(GridItemCoalTruck *this)

{
  ~GridItemCoalTruck(this + -0x10);
  return;
}


/* GridItemCoalTruck::~GridItemCoalTruck() */

void __thiscall GridItemCoalTruck::~GridItemCoalTruck(GridItemCoalTruck *this)

{
  ~GridItemCoalTruck(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemCoalTruck::~GridItemCoalTruck() */

void __thiscall GridItemCoalTruck::~GridItemCoalTruck(GridItemCoalTruck *this)

{
  ~GridItemCoalTruck(this + -0x10);
  return;
}

