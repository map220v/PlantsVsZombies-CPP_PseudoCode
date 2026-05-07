// Class: GridItemTurkey


/* GridItemTurkey::onAnimDone(std::string const&) */

void GridItemTurkey::onAnimDone(string *param_1)

{
  return;
}


/* GridItemTurkey::~GridItemTurkey() */

void __thiscall GridItemTurkey::~GridItemTurkey(GridItemTurkey *this)

{
  *(undefined ***)this = &PTR_GetClass_06996f50;
  *(undefined ***)(this + 0x10) = &PTR__GridItemTurkey_06997208;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemTurkey::~GridItemTurkey() */

void __thiscall GridItemTurkey::~GridItemTurkey(GridItemTurkey *this)

{
  ~GridItemTurkey(this + -0x10);
  return;
}


/* GridItemTurkey::~GridItemTurkey() */

void __thiscall GridItemTurkey::~GridItemTurkey(GridItemTurkey *this)

{
  ~GridItemTurkey(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemTurkey::~GridItemTurkey() */

void __thiscall GridItemTurkey::~GridItemTurkey(GridItemTurkey *this)

{
  ~GridItemTurkey(this + -0x10);
  return;
}


/* GridItemTurkey::CalcRenderOrder() const */

void __thiscall GridItemTurkey::CalcRenderOrder(GridItemTurkey *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_04c9db04(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x61e68,uVar1,1);
  return;
}


/* non-virtual thunk to GridItemTurkey::CalcRenderOrder() const */

void __thiscall GridItemTurkey::CalcRenderOrder(GridItemTurkey *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemTurkey::GridItemTurkey() */

void __thiscall GridItemTurkey::GridItemTurkey(GridItemTurkey *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_06996f50;
  *(undefined ***)(this + 0x10) = &PTR__GridItemTurkey_06997208;
  return;
}


/* GridItemTurkey::StaticNew() */

GridItemTurkey * GridItemTurkey::StaticNew(void)

{
  GridItemTurkey *this;
  
  this = ::operator_new(0x1b0);
  GridItemTurkey(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTurkey::StaticClassInit() */

void GridItemTurkey::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemTurkey");
    (*pcVar2)(plVar1,asStack_10,FUN_04c9eba0,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemTurkey::StaticGetClass() */

long * GridItemTurkey::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemTurkey",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemTurkey::GetClass() const */

long * GridItemTurkey::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemTurkey",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTurkey::playAnimalDie(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall GridItemTurkey::playAnimalDie(undefined8 param_1,RtReflectionDelegate *param_2)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  std::string::string(asStack_58,"idle");
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
/* GridItemTurkey::playAnimalIdle() */

void __thiscall GridItemTurkey::playAnimalIdle(GridItemTurkey *this)

{
  PopAnimRig *pPVar1;
  char *__s;
  code *pcVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  lVar3 = *(long *)this;
  pcVar2 = *(code **)(lVar3 + 0x1d8);
  local_8 = ___stack_chk_guard;
  if (pcVar2 == GridItem::GetHitpoints) {
    fVar4 = (float)GridItem::GetHitpoints((GridItem *)this);
    pcVar2 = *(code **)(lVar3 + 0x1e0);
    if (pcVar2 == GridItem::GetMaxHitpoints) goto LAB_04c9e638;
LAB_04c9e708:
    fVar5 = (float)(*pcVar2)();
    if (fVar5 <= fVar4) goto LAB_04c9e714;
  }
  else {
    fVar4 = (float)(*pcVar2)();
    pcVar2 = *(code **)(*(long *)this + 0x1e0);
    if (pcVar2 != GridItem::GetMaxHitpoints) goto LAB_04c9e708;
LAB_04c9e638:
    fVar5 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
    if (fVar5 <= fVar4) {
LAB_04c9e714:
      __s = "idle";
      goto LAB_04c9e64c;
    }
  }
  __s = "under_attack";
LAB_04c9e64c:
  std::string::string(asStack_48,__s);
  nop();
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_48,0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTurkey::playAnimalUnderAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void GridItemTurkey::playAnimalUnderAttack(void)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  std::string::string(asStack_40,"under_attack");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTurkey::setState(TurkeyState) */

void __thiscall GridItemTurkey::setState(GridItemTurkey *this,int param_2)

{
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1a8) == param_2) goto LAB_04c9f3e4;
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
      playAnimalIdle(this);
      goto LAB_04c9f3e4;
    }
    if (param_2 != 2) goto LAB_04c9f3e4;
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    playAnimalDie(this,aRStack_50);
  }
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
LAB_04c9f3e4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemTurkey::onGridItemInitialize() */

void __thiscall GridItemTurkey::onGridItemInitialize(GridItemTurkey *this)

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
  playAnimalIdle(this);
  RealObject::JoinTeam((RealObject *)this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTurkey::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemTurkey::GatherPlantingRestrictions(GridItemTurkey *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  local_c = 0x7b;
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemTurkey::TakeDamage(DamageInfo const&) */

void __thiscall GridItemTurkey::TakeDamage(GridItemTurkey *this,DamageInfo *param_1)

{
  if (*(int *)(this + 0x1a8) == 0) {
    setState(this,1);
  }
  GridItem::TakeDamage((GridItem *)this,param_1);
  return;
}

