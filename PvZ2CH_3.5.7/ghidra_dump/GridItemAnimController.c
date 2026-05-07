// Class: GridItemAnimController


/* GridItemAnimController::OnStartAnimDone(std::string const&) */

void GridItemAnimController::OnStartAnimDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x2b0))();
  return;
}


/* GridItemAnimController::OnEndAnimDone(std::string const&) */

void GridItemAnimController::OnEndAnimDone(string *param_1)

{
  *(undefined4 *)(param_1 + 0x1a8) = 4;
  return;
}


/* GridItemAnimController::~GridItemAnimController() */

void __thiscall GridItemAnimController::~GridItemAnimController(GridItemAnimController *this)

{
  *(undefined ***)this = &PTR_GetClass_069995d0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemAnimController_069998b0;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemAnimController::~GridItemAnimController() */

void __thiscall GridItemAnimController::~GridItemAnimController(GridItemAnimController *this)

{
  ~GridItemAnimController(this + -0x10);
  return;
}


/* GridItemAnimController::~GridItemAnimController() */

void __thiscall GridItemAnimController::~GridItemAnimController(GridItemAnimController *this)

{
  ~GridItemAnimController(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemAnimController::~GridItemAnimController() */

void __thiscall GridItemAnimController::~GridItemAnimController(GridItemAnimController *this)

{
  ~GridItemAnimController(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimController::StaticClassInit() */

void GridItemAnimController::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemAnimController");
    (*pcVar2)(plVar1,asStack_10,FUN_04cb8860,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemAnimController::StaticGetClass() */

long * GridItemAnimController::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemAnimController",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemAnimController::GetClass() const */

long * GridItemAnimController::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemAnimController",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemAnimController::GridItemAnimController() */

void __thiscall GridItemAnimController::GridItemAnimController(GridItemAnimController *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_069995d0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemAnimController_069998b0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = uVar1;
  *(undefined4 *)(this + 0x1b0) = 0;
  return;
}


/* GridItemAnimController::StaticNew() */

GridItemAnimController * GridItemAnimController::StaticNew(void)

{
  GridItemAnimController *this;
  
  this = ::operator_new(0x1b8);
  GridItemAnimController(this);
  return this;
}


/* GridItemAnimController::SetDuration(float) */

void __thiscall GridItemAnimController::SetDuration(GridItemAnimController *this,float param_1)

{
  GridItemAnimControllerProps *pGVar1;
  float fVar2;
  
  *(float *)(this + 0x1b0) = param_1;
  pGVar1 = GridItem::GetProps<GridItemAnimControllerProps>();
  if (0.0 < *(float *)(this + 0x1b0)) {
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x1ac) = fVar2 + *(float *)(this + 0x1b0);
    return;
  }
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x1ac) = fVar2 + *(float *)(pGVar1 + 0xe8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimController::PlayLoopAnim() */

void __thiscall GridItemAnimController::PlayLoopAnim(GridItemAnimController *this)

{
  GridItemAnimControllerProps *pGVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x1a8) = 2;
  local_8 = ___stack_chk_guard;
  pGVar1 = GridItem::GetProps<GridItemAnimControllerProps>();
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,pGVar1 + 0xd8,0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimController::PlayStartAnim() */

void __thiscall GridItemAnimController::PlayStartAnim(GridItemAnimController *this)

{
  GridItemAnimControllerProps *pGVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  *(undefined4 *)(this + 0x1a8) = 1;
  local_8 = ___stack_chk_guard;
  pGVar1 = GridItem::GetProps<GridItemAnimControllerProps>();
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"OnStartAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar2,pGVar1 + 0xd0,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimController::PlayEndAnim() */

void __thiscall GridItemAnimController::PlayEndAnim(GridItemAnimController *this)

{
  GridItemAnimControllerProps *pGVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  *(undefined4 *)(this + 0x1a8) = 3;
  local_8 = ___stack_chk_guard;
  pGVar1 = GridItem::GetProps<GridItemAnimControllerProps>();
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"OnEndAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar2,pGVar1 + 0xe0,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemAnimController::onGridItemInitialize() */

void __thiscall GridItemAnimController::onGridItemInitialize(GridItemAnimController *this)

{
  GridItemAnimControllerProps *pGVar1;
  float fVar2;
  
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  pGVar1 = GridItem::GetProps<GridItemAnimControllerProps>();
  if (0.0 < *(float *)(this + 0x1b0)) {
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x1ac) = fVar2 + *(float *)(this + 0x1b0);
    return;
  }
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x1ac) = fVar2 + *(float *)(pGVar1 + 0xe8);
  return;
}


/* GridItemAnimController::onUpdate() */

void __thiscall GridItemAnimController::onUpdate(GridItemAnimController *this)

{
  int iVar1;
  float fVar2;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  iVar1 = *(int *)(this + 0x1a8);
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        fVar2 = (float)PVZ_T();
        if (*(float *)(this + 0x1ac) < fVar2) {
          (**(code **)(*(long *)this + 0x2b8))(this);
        }
      }
      else if (iVar1 == 4) {
        (**(code **)(*(long *)this + 0x230))(this);
      }
    }
    return;
  }
  (**(code **)(*(long *)this + 0x2a8))(this);
  return;
}

