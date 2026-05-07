// Class: GridItemRunningSubwayObstacle


/* GridItemRunningSubwayObstacle::onBreakAnimDone(std::string const&) */

void GridItemRunningSubwayObstacle::onBreakAnimDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x80))(param_1,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRunningSubwayObstacle::StaticClassInit() */

void GridItemRunningSubwayObstacle::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemRunningSubwayObstacle");
    (*pcVar2)(plVar1,asStack_10,FUN_033efd28,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRunningSubwayObstacle::StaticGetClass() */

long * GridItemRunningSubwayObstacle::StaticGetClass(void)

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
  uVar2 = GridItemRunningSubwayObject::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRunningSubwayObstacle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRunningSubwayObstacle::GetClass() const */

long * GridItemRunningSubwayObstacle::GetClass(void)

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
  uVar2 = GridItemRunningSubwayObject::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRunningSubwayObstacle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRunningSubwayObstacle::GridItemRunningSubwayObstacle() */

void __thiscall
GridItemRunningSubwayObstacle::GridItemRunningSubwayObstacle(GridItemRunningSubwayObstacle *this)

{
  GridItemRunningSubwayObject::GridItemRunningSubwayObject((GridItemRunningSubwayObject *)this);
  this[500] = (GridItemRunningSubwayObstacle)0x0;
  *(undefined ***)this = &PTR_GetClass_0661ce10;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRunningSubwayObstacle_0661d120;
  return;
}


/* GridItemRunningSubwayObstacle::StaticNew() */

GridItemRunningSubwayObstacle * GridItemRunningSubwayObstacle::StaticNew(void)

{
  GridItemRunningSubwayObstacle *this;
  
  this = ::operator_new(0x1f8);
  GridItemRunningSubwayObstacle(this);
  return this;
}


/* GridItemRunningSubwayObstacle::~GridItemRunningSubwayObstacle() */

void __thiscall
GridItemRunningSubwayObstacle::~GridItemRunningSubwayObstacle(GridItemRunningSubwayObstacle *this)

{
  *(undefined ***)this = &PTR_GetClass_0661ce10;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRunningSubwayObstacle_0661d120;
  GridItemRunningSubwayObject::~GridItemRunningSubwayObject((GridItemRunningSubwayObject *)this);
  return;
}


/* non-virtual thunk to GridItemRunningSubwayObstacle::~GridItemRunningSubwayObstacle() */

void __thiscall
GridItemRunningSubwayObstacle::~GridItemRunningSubwayObstacle(GridItemRunningSubwayObstacle *this)

{
  ~GridItemRunningSubwayObstacle(this + -0x10);
  return;
}


/* GridItemRunningSubwayObstacle::~GridItemRunningSubwayObstacle() */

void __thiscall
GridItemRunningSubwayObstacle::~GridItemRunningSubwayObstacle(GridItemRunningSubwayObstacle *this)

{
  ~GridItemRunningSubwayObstacle(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemRunningSubwayObstacle::~GridItemRunningSubwayObstacle() */

void __thiscall
GridItemRunningSubwayObstacle::~GridItemRunningSubwayObstacle(GridItemRunningSubwayObstacle *this)

{
  ~GridItemRunningSubwayObstacle(this + -0x10);
  return;
}


/* GridItemRunningSubwayObstacle::calcCollisionRect() */

void GridItemRunningSubwayObstacle::calcCollisionRect(void)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  GridItemRunningSubwayObstacleProps *pGVar1;
  float *pfVar2;
  Insets *in_x8;
  
  pGVar1 = GridItem::GetProps<GridItemRunningSubwayObstacleProps>();
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x0);
  Sexy::Insets::Insets
            (in_x8,(int)*pfVar2 - *(int *)(pGVar1 + 0x138) / 2,
             ((int)pfVar2[1] + -0x19) - *(int *)(pGVar1 + 0x13c) / 2,*(int *)(pGVar1 + 0x138),
             *(int *)(pGVar1 + 0x13c));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRunningSubwayObstacle::OnCollide(BoardEntity*) */

void __thiscall
GridItemRunningSubwayObstacle::OnCollide(GridItemRunningSubwayObstacle *this,BoardEntity *param_1)

{
  char cVar1;
  RunningPlayer *pRVar2;
  GridItemRunningSubwayObstacleAnimRig *extraout_x0;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[500] == (GridItemRunningSubwayObstacle)0x0) {
    this[500] = (GridItemRunningSubwayObstacle)0x1;
    if (((param_1 != (BoardEntity *)0x0) &&
        (pRVar2 = Sexy::RtObject::Cast<RunningPlayer>((RtObject *)param_1),
        pRVar2 != (RunningPlayer *)0x0)) && (cVar1 = FUN_033e94e8(pRVar2[0x168]), cVar1 != '\0')) {
      GridItemAnimation::GetAnimRig();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
      if (extraout_x0 != (GridItemRunningSubwayObstacleAnimRig *)0x0) {
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string((string *)aRStack_58,"onBreakAnimDone");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_60,aRStack_58);
        GridItemRunningSubwayObstacleAnimRig::PlayBreak(extraout_x0,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string((string *)aRStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
      }
    }
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

