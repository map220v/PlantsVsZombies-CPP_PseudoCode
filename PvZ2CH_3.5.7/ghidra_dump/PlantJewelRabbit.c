// Class: PlantJewelRabbit


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJewelRabbit::StaticClassInit() */

void PlantJewelRabbit::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantJewelRabbit");
    (*pcVar2)(plVar1,asStack_10,FUN_03630eb0,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantJewelRabbit::StaticGetClass() */

long * PlantJewelRabbit::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantJewelRabbit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantJewelRabbit::GetClass() const */

long * PlantJewelRabbit::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantJewelRabbit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantJewelRabbit::CanApplyPlantfood() */

byte __thiscall PlantJewelRabbit::CanApplyPlantfood(PlantJewelRabbit *this)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  
  cVar1 = PlantFireGourd::isReadyToFire((PlantFireGourd *)this);
  if (cVar1 != '\0') {
    return 0;
  }
  pcVar3 = *(code **)(*(long *)*(Plant **)(this + 0x10) + 0x1f8);
  if (pcVar3 == Plant::IsInPlantFoodState) {
    bVar2 = Plant::IsInPlantFoodState(*(Plant **)(this + 0x10));
  }
  else {
    bVar2 = (*pcVar3)();
  }
  return bVar2 ^ 1;
}


/* PlantJewelRabbit::CanBeShoveled() */

byte __thiscall PlantJewelRabbit::CanBeShoveled(PlantJewelRabbit *this)

{
  byte bVar1;
  
  bVar1 = PlantFireGourd::isReadyToFire((PlantFireGourd *)this);
  return bVar1 ^ 1;
}


/* PlantJewelRabbit::PlantJewelRabbit() */

void __thiscall PlantJewelRabbit::PlantJewelRabbit(PlantJewelRabbit *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0666cc00;
  uVar1 = PVZ_EOT();
  this[0x2c] = (PlantJewelRabbit)0x0;
  this[0x2d] = (PlantJewelRabbit)0x0;
  this[0x2e] = (PlantJewelRabbit)0x0;
  *(undefined4 *)(this + 0x28) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  Sexy::Point::Point((Point *)(this + 0x38),0,0);
  *(undefined4 *)(this + 0x40) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  return;
}


/* PlantJewelRabbit::StaticNew() */

PlantJewelRabbit * PlantJewelRabbit::StaticNew(void)

{
  PlantJewelRabbit *this;
  
  this = ::operator_new(0x50);
  PlantJewelRabbit(this);
  return this;
}


/* PlantJewelRabbit::~PlantJewelRabbit() */

void __thiscall PlantJewelRabbit::~PlantJewelRabbit(PlantJewelRabbit *this)

{
  *(undefined ***)this = &PTR_GetClass_0666cc00;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantJewelRabbit::~PlantJewelRabbit() */

void __thiscall PlantJewelRabbit::~PlantJewelRabbit(PlantJewelRabbit *this)

{
  ~PlantJewelRabbit(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJewelRabbit::unlockZombie() */

void __thiscall PlantJewelRabbit::unlockZombie(PlantJewelRabbit *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long lVar2;
  long *plVar3;
  Zombie *pZVar4;
  float fVar5;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    fVar5 = (float)FUN_0362bf44(*(undefined4 *)(lVar2 + 0x280));
    if (0.0 < fVar5) {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar3 + 0x260))();
    }
    pZVar4 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Zombie::SetIgnoresAllDamage(pZVar4,false);
    pZVar4 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Zombie::SetIsTargetable(pZVar4,true);
    pZVar4 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Zombie::SetIgnoresCollisions(pZVar4,false);
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJewelRabbit::goBack(bool) */

void __thiscall PlantJewelRabbit::goBack(PlantJewelRabbit *this,bool param_1)

{
  int iVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  unlockZombie(this);
  this[0x2c] = (PlantJewelRabbit)0x1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x48),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  iVar1 = FUN_0362bf34(*(undefined8 *)(this + 0x10));
  if ((4 < iVar1) && (!param_1)) {
    this[0x2d] = (PlantJewelRabbit)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantJewelRabbit::onDestroy() */

void __thiscall PlantJewelRabbit::onDestroy(PlantJewelRabbit *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  Zombie *pZVar3;
  
  PlantFramework::onDestroy((PlantFramework *)this);
  this_00 = (RtMixedPtrBase *)(this + 0x30);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x260))();
    pZVar3 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Zombie::SetIgnoresAllDamage(pZVar3,false);
    pZVar3 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Zombie::SetIsTargetable(pZVar3,true);
    pZVar3 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Zombie::SetIgnoresCollisions(pZVar3,false);
    pZVar3 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Zombie::EndCondition(pZVar3,0x18);
  }
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x48));
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
    (**(code **)(*plVar2 + 0x48))();
  }
  return;
}


/* PlantJewelRabbit::isValidTargetPoint(Sexy::Point) */

undefined8 __thiscall PlantJewelRabbit::isValidTargetPoint(undefined8 param_1,Point *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  RtObject *this;
  PirateStage *this_00;
  Board *this_01;
  
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  cVar1 = Board::IsSky(this_01,param_2);
  if ((((cVar1 == '\0') && (cVar1 = Board::IsShallowWater(this_01,param_2), cVar1 == '\0')) &&
      (iVar2 = Board::GetGridSquareType(this_01,*(int *)param_2,*(int *)(param_2 + 4)), iVar2 != 3))
     && (iVar2 != 0)) {
    lVar5 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    if (lVar5 != 0) {
      this = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
      this_00 = Sexy::RtObject::Cast<PirateStage>(this);
      if ((this_00 != (PirateStage *)0x0) &&
         (iVar2 = *(int *)param_2, iVar3 = BeghouledSeedBankProperties::GetBankType(),
         iVar3 <= iVar2)) {
        cVar1 = PirateStage::IsPlankOnRow(this_00,*(int *)(param_2 + 4));
        if (cVar1 == '\0') {
          return 1;
        }
        goto LAB_0362de3c;
      }
    }
    uVar4 = 1;
  }
  else {
LAB_0362de3c:
    uVar4 = 0;
  }
  return uVar4;
}


/* PlantJewelRabbit::Initialize() */

void __thiscall PlantJewelRabbit::Initialize(PlantJewelRabbit *this)

{
  long lVar1;
  JewelRabbitTossSubSystem *pJVar2;
  
  PlantFramework::Initialize((PlantFramework *)this);
  lVar1 = FUN_0362eb74(*(undefined8 *)(this + 0x10));
  pJVar2 = Board::GetGameSubSystem<JewelRabbitTossSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  FUN_0362bf3c(*(undefined4 *)(lVar1 + 0x2c8),pJVar2 + 0x70);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJewelRabbit::ApplyPlantfood() */

void __thiscall PlantJewelRabbit::ApplyPlantfood(PlantJewelRabbit *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  this_00 = (PopAnimRig *)FUN_0362ec9c(*(undefined8 *)(this + 0x10));
  fVar1 = (float)PVZ_T();
  (**(code **)(*(long *)this_00 + 0x200))(asStack_10,this_00);
  fVar2 = (float)PopAnimRig::CalcAnimLengthSeconds(this_00,asStack_10);
  *(float *)(this + 0x40) = fVar2 + fVar1;
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJewelRabbit::onIdleAnimationDone() */

void __thiscall PlantJewelRabbit::onIdleAnimationDone(PlantJewelRabbit *this)

{
  PlantAnimRig_WizardThorns *pPVar1;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PlantAnimRig_WizardThorns *)FUN_0362ec9c(*(undefined8 *)(this + 0x10));
  (**(code **)(*(long *)pPVar1 + 0x1e8))(asStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PlantAnimRig_WizardThorns::PlayTapAnimation(pPVar1,asStack_70,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJewelRabbit::createPioneer() */

void __thiscall PlantJewelRabbit::createPioneer(PlantJewelRabbit *this)

{
  int iVar1;
  Effect_JewelRabbit_pioneer *pEVar2;
  RealObject *this_00;
  PlantJewelRabbit *local_58;
  code *local_50;
  undefined8 local_48;
  string asStack_40 [24];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_40,"Play_Plant_StarFruit_Attack");
  RealObject::PlayPositionalSound(this_00,asStack_40,0.0);
  std::string::~string(asStack_40);
  nop();
  pEVar2 = Board::AddEffect<Effect_JewelRabbit_pioneer>(*(Board **)(gLawnApp + 0x9f0));
  iVar1 = FUN_0362bf34(*(undefined8 *)(this + 0x10));
  if (iVar1 < 5) {
    std::string::string((string *)&local_50,"POPANIM_EFFECTS_JEWELRABBIT_BULLET");
    std::string::string(asStack_40,"attack_hit");
    Effect_JewelRabbit_pioneer::setAnimation(pEVar2,(string *)&local_50,asStack_40);
    std::string::~string(asStack_40);
    nop();
    std::string::~string((string *)&local_50);
    nop();
  }
  else {
    std::string::string((string *)&local_50,"POPANIM_EFFECTS_JEWELRABBIT_BULLET");
    std::string::string(asStack_40,"attack_hit_lv5");
    Effect_JewelRabbit_pioneer::setAnimation(pEVar2,(string *)&local_50,asStack_40);
    std::string::~string(asStack_40);
    nop();
    std::string::~string((string *)&local_50);
    nop();
    local_48 = 0;
    local_50 = damageFunction2;
    local_58 = this;
    std::
    bind<void(DTouchDelegate::*)(Sexy::Touch_const&),DTouchDelegate*,std::_Placeholder<1>const&>
              ((_func_void_Touch_ptr *)&local_50,(DTouchDelegate **)&local_58,
               (_Placeholder *)&DAT_0576d300);
    std::function<void(std::vector<Zombie*,std::allocator<Zombie*>>)>::
    function<std::_Bind<std::_Mem_fn<void(PlantJewelRabbit::*)(std::vector<Zombie*,std::allocator<Zombie*>>)>(PlantJewelRabbit*,std::_Placeholder<1>)>,void>
              ((function<void(std::vector<Zombie*,std::allocator<Zombie*>>)> *)afStack_28,asStack_40
              );
    Effect_JewelRabbit_pioneer::setDamageFunc2(pEVar2,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  local_50 = damageFunction;
  local_48 = 0;
  local_58 = this;
  std::bind<void(DTouchDelegate::*)(Sexy::Touch_const&),DTouchDelegate*,std::_Placeholder<1>const&>
            ((_func_void_Touch_ptr *)&local_50,(DTouchDelegate **)&local_58,
             (_Placeholder *)&DAT_0576d300);
  std::function<void(std::vector<Zombie*,std::allocator<Zombie*>>)>::
  function<std::_Bind<std::_Mem_fn<void(PlantJewelRabbit::*)(std::vector<Zombie*,std::allocator<Zombie*>>)>(PlantJewelRabbit*,std::_Placeholder<1>)>,void>
            ((function<void(std::vector<Zombie*,std::allocator<Zombie*>>)> *)afStack_28,asStack_40);
  Effect_JewelRabbit_pioneer::setDamageFunc(pEVar2,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  local_48 = 0;
  local_50 = goBack;
  local_58 = this;
  std::bind<void(DTouchDelegate::*)(Sexy::Touch_const&),DTouchDelegate*,std::_Placeholder<1>const&>
            ((_func_void_Touch_ptr *)&local_50,(DTouchDelegate **)&local_58,
             (_Placeholder *)&DAT_0576d300);
  std::function<void(bool)>::
  function<std::_Bind<std::_Mem_fn<void(PlantJewelRabbit::*)(bool)>(PlantJewelRabbit*,std::_Placeholder<1>)>,void>
            ((function<void(bool)> *)afStack_28,asStack_40);
  Effect_JewelRabbit_pioneer::setRetreatFunc(pEVar2,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  Sexy::Point::Point((Point *)asStack_40,(TPoint *)(this + 0x38));
  Effect_JewelRabbit_pioneer::setGridPosition(pEVar2,asStack_40);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x48),(RtWeakPtrBase *)asStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJewelRabbit::setState(JewelRabbitState) */

void __thiscall PlantJewelRabbit::setState(PlantJewelRabbit *this,int param_2)

{
  int iVar1;
  long lVar2;
  PlantAnimRig_WizardThorns *pPVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(*(long *)(this + 0x10) + 200) == param_2) goto switchD_0362fdb0_caseD_5;
  *(int *)(*(long *)(this + 0x10) + 200) = param_2;
  lVar2 = FUN_0362eb74();
  pPVar3 = (PlantAnimRig_WizardThorns *)FUN_0362ec9c(*(undefined8 *)(this + 0x10));
  lVar4 = *(long *)(this + 0x10);
  switch(*(undefined4 *)(lVar4 + 200)) {
  case 4:
    (**(code **)(*(long *)pPVar3 + 0x1e8))(asStack_70,pPVar3);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_WizardThorns::PlayTapAnimation(pPVar3,asStack_70,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    std::string::~string(asStack_70);
  default:
    goto switchD_0362fdb0_caseD_5;
  case 0xb:
    iVar1 = FUN_0362bf34(lVar4);
    if (iVar1 < 5) {
      FUN_0362c00c(asStack_70);
    }
    else {
      FUN_0362bfa4();
    }
    break;
  case 0xc:
    createPioneer(this);
    iVar1 = FUN_0362bf34(*(undefined8 *)(this + 0x10));
    if (iVar1 < 5) {
      FUN_0362c0dc(asStack_70);
    }
    else {
      FUN_0362c074();
    }
    break;
  case 0xd:
    this[0x2c] = (PlantJewelRabbit)0x0;
    iVar1 = FUN_0362bf34(lVar4);
    if (iVar1 < 5) {
      setState(this,0xe);
      goto switchD_0362fdb0_caseD_5;
    }
    FUN_0362c144(asStack_70);
    break;
  case 0xe:
    iVar1 = FUN_0362bf34(lVar4);
    if (iVar1 < 3) {
      fVar6 = *(float *)(lVar2 + 0x2b8);
    }
    else {
      fVar6 = *(float *)(lVar2 + 700);
    }
    fVar5 = (float)FUN_0362bf2c(*(undefined4 *)(lVar4 + 0x420));
    fVar5 = fVar5 * fVar6;
    if (this[0x2d] != (PlantJewelRabbit)0x0) {
      this[0x2d] = (PlantJewelRabbit)0x0;
      fVar5 = fVar5 * 0.5;
    }
    fVar6 = (float)PVZ_T();
    *(float *)(this + 0x28) = fVar6 + fVar5;
    iVar1 = FUN_0362bf34(*(undefined8 *)(this + 0x10));
    if (iVar1 < 5) {
      FUN_0362c214(asStack_70);
    }
    else {
      FUN_0362c1ac();
    }
    break;
  case 0xf:
    iVar1 = FUN_0362bf34(lVar4);
    if (iVar1 < 5) {
      FUN_0362c2e4();
    }
    else {
      FUN_0362c27c(asStack_70);
    }
  }
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PlantAnimRig_WizardThorns::PlayTapAnimation(pPVar3,asStack_70,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
switchD_0362fdb0_caseD_5:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantJewelRabbit::CancelPlantfood() */

void __thiscall PlantJewelRabbit::CancelPlantfood(PlantJewelRabbit *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,4);
  return;
}


/* PlantJewelRabbit::onAttackDownAnimationDone() */

void __thiscall PlantJewelRabbit::onAttackDownAnimationDone(PlantJewelRabbit *this)

{
  setState(this,0xc);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJewelRabbit::onAttackDownLoopAnimationDone() */

void __thiscall PlantJewelRabbit::onAttackDownLoopAnimationDone(PlantJewelRabbit *this)

{
  int iVar1;
  PlantAnimRig_WizardThorns *pPVar2;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x2c] == (PlantJewelRabbit)0x0) {
    pPVar2 = (PlantAnimRig_WizardThorns *)FUN_0362ec9c(*(undefined8 *)(this + 0x10));
    iVar1 = FUN_0362bf34(*(undefined8 *)(this + 0x10));
    if (iVar1 < 5) {
      FUN_0362c0dc();
    }
    else {
      FUN_0362c074(asStack_70);
    }
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_WizardThorns::PlayTapAnimation(pPVar2,asStack_70,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    std::string::~string(asStack_70);
  }
  else {
    setState(this,0xd);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantJewelRabbit::onAttackBackAnimationDone() */

void __thiscall PlantJewelRabbit::onAttackBackAnimationDone(PlantJewelRabbit *this)

{
  setState(this,0xe);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJewelRabbit::onAttackCooldownAnimationDone() */

void __thiscall PlantJewelRabbit::onAttackCooldownAnimationDone(PlantJewelRabbit *this)

{
  int iVar1;
  PlantAnimRig_WizardThorns *pPVar2;
  float fVar3;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(*(long *)(this + 0x10) + 200) == 0xe) {
    fVar3 = (float)PVZ_T();
    if (*(float *)(this + 0x28) < fVar3) {
      setState(this,0xf);
    }
    else {
      pPVar2 = (PlantAnimRig_WizardThorns *)FUN_0362ec9c(*(undefined8 *)(this + 0x10));
      iVar1 = FUN_0362bf34(*(undefined8 *)(this + 0x10));
      if (iVar1 < 5) {
        FUN_0362c214();
      }
      else {
        FUN_0362c1ac(asStack_70);
      }
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_WizardThorns::PlayTapAnimation(pPVar2,asStack_70,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      std::string::~string(asStack_70);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantJewelRabbit::onAttackUpAnimationDone() */

void __thiscall PlantJewelRabbit::onAttackUpAnimationDone(PlantJewelRabbit *this)

{
  setState(this,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJewelRabbit::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantJewelRabbit::onAnimStoppedCallback(PlantJewelRabbit *this,string *param_1)

{
  char cVar1;
  long *plVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar2 = (long *)FUN_0362ec9c(*(undefined8 *)(this + 0x10));
  switch(*(undefined4 *)(*(long *)(this + 0x10) + 200)) {
  case 4:
    (**(code **)(*plVar2 + 0x1e8))(asStack_10);
    cVar1 = std::operator==(param_1,asStack_10);
    std::string::~string(asStack_10);
    if (cVar1 != '\0') {
      onIdleAnimationDone(this);
    }
    break;
  case 0xb:
    FUN_0362c00c(asStack_18);
    cVar1 = std::operator==(param_1,asStack_18);
    if (cVar1 == '\0') {
      FUN_0362bfa4(asStack_10);
      cVar1 = std::operator==(param_1,asStack_10);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      if (cVar1 == '\0') break;
    }
    else {
      std::string::~string(asStack_18);
    }
    onAttackDownAnimationDone(this);
    break;
  case 0xc:
    FUN_0362c0dc(asStack_18);
    cVar1 = std::operator==(param_1,asStack_18);
    if (cVar1 == '\0') {
      FUN_0362c074(asStack_10);
      cVar1 = std::operator==(param_1,asStack_10);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      if (cVar1 == '\0') break;
    }
    else {
      std::string::~string(asStack_18);
    }
    onAttackDownLoopAnimationDone(this);
    break;
  case 0xd:
    FUN_0362c144(asStack_10);
    cVar1 = std::operator==(param_1,asStack_10);
    std::string::~string(asStack_10);
    if (cVar1 != '\0') {
      onAttackBackAnimationDone(this);
    }
    break;
  case 0xe:
    FUN_0362c214(asStack_18);
    cVar1 = std::operator==(param_1,asStack_18);
    if (cVar1 == '\0') {
      FUN_0362c1ac(asStack_10);
      cVar1 = std::operator==(param_1,asStack_10);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      if (cVar1 == '\0') break;
    }
    else {
      std::string::~string(asStack_18);
    }
    onAttackCooldownAnimationDone(this);
    break;
  case 0xf:
    FUN_0362c2e4(asStack_18);
    cVar1 = std::operator==(param_1,asStack_18);
    if (cVar1 == '\0') {
      FUN_0362c27c(asStack_10);
      cVar1 = std::operator==(param_1,asStack_10);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      if (cVar1 == '\0') break;
    }
    else {
      std::string::~string(asStack_18);
    }
    onAttackUpAnimationDone(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJewelRabbit::createPlantfoodPioneer(Sexy::Point, std::string) */

void PlantJewelRabbit::createPlantfoodPioneer(long param_1,TPoint *param_2)

{
  char cVar1;
  Effect_JewelRabbit_pioneer *pEVar2;
  RealObject *this;
  undefined4 local_5c;
  long local_58;
  code *local_50;
  undefined8 local_48;
  string asStack_40 [24];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = *(RealObject **)(param_1 + 0x10);
  std::string::string(asStack_40,"Play_Plant_StarFruit_Attack");
  RealObject::PlayPositionalSound(this,asStack_40,0.0);
  std::string::~string(asStack_40);
  nop();
  pEVar2 = Board::AddEffect<Effect_JewelRabbit_pioneer>(*(Board **)(gLawnApp + 0x9f0));
  *(undefined1 *)(param_1 + 0x2e) = 1;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
  local_5c = 2;
  if (cVar1 == '\0') {
    local_5c = 1;
  }
  std::string::string(asStack_40,"POPANIM_EFFECTS_JEWELRABBIT_BULLET_PLANTFOOD");
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_5c);
  std::operator+("plantfood_hit_",(string *)&local_58);
  Effect_JewelRabbit_pioneer::setAnimation(pEVar2,asStack_40,(string *)&local_50);
  std::string::~string((string *)&local_50);
  std::string::~string((string *)&local_58);
  std::string::~string(asStack_40);
  nop();
  local_48 = 0;
  local_50 = damageFunction;
  local_58 = param_1;
  std::bind<void(DTouchDelegate::*)(Sexy::Touch_const&),DTouchDelegate*,std::_Placeholder<1>const&>
            ((_func_void_Touch_ptr *)&local_50,(DTouchDelegate **)&local_58,
             (_Placeholder *)&DAT_0576d300);
  std::function<void(std::vector<Zombie*,std::allocator<Zombie*>>)>::
  function<std::_Bind<std::_Mem_fn<void(PlantJewelRabbit::*)(std::vector<Zombie*,std::allocator<Zombie*>>)>(PlantJewelRabbit*,std::_Placeholder<1>)>,void>
            ((function<void(std::vector<Zombie*,std::allocator<Zombie*>>)> *)afStack_28,asStack_40);
  Effect_JewelRabbit_pioneer::setDamageFunc(pEVar2,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  Sexy::Point::Point((Point *)asStack_40,param_2);
  Effect_JewelRabbit_pioneer::setGridPosition(pEVar2,asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJewelRabbit::isZombieInTossBlackList(Zombie*) */

void __thiscall PlantJewelRabbit::isZombieInTossBlackList(PlantJewelRabbit *this,Zombie *param_1)

{
  bool bVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (Zombie *)0x0) {
    bVar1 = true;
  }
  else {
    lVar2 = FUN_0362eb74(*(undefined8 *)(this + 0x10));
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    FUN_05475d88(asStack_20,lVar3 + 8);
    uVar4 = FUN_0362dd3c(*(undefined8 *)(lVar2 + 0x2d0));
    uVar5 = FUN_0362dd8c(*(undefined8 *)(lVar2 + 0x2d8));
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                         (uVar4,uVar5,asStack_20);
    local_10 = FUN_0362dd8c(*(undefined8 *)(lVar2 + 0x2d8));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    std::string::~string(asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJewelRabbit::isValidZombie(Zombie*) */

void __thiscall PlantJewelRabbit::isValidZombie(PlantJewelRabbit *this,Zombie *param_1)

{
  char cVar1;
  undefined1 uVar2;
  string *psVar3;
  code *pcVar4;
  float fVar5;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((((param_1 != (Zombie *)0x0) && (cVar1 = Zombie::IsControlled(param_1), cVar1 == '\0')) &&
       (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')) &&
      ((cVar1 = FUN_0362d254(*(undefined4 *)(param_1 + 0xcc)), cVar1 == '\0' &&
       (cVar1 = Zombie::IsFlying(param_1), cVar1 == '\0')))) &&
     ((cVar1 = Zombie::IsBerserk(param_1), cVar1 == '\0' &&
      ((cVar1 = Zombie::CanTakeFatalDamage(param_1), cVar1 != '\0' &&
       (cVar1 = Zombie::IsTargetable(param_1), cVar1 != '\0')))))) {
    pcVar4 = *(code **)(*(long *)param_1 + 0x3d0);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_20,"jewelrabbit");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    cVar1 = (*pcVar4)(param_1,aRStack_10,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    std::string::~string(asStack_20);
    nop();
    if ((cVar1 != '\0') &&
       (fVar5 = (float)FUN_0362bf44(*(undefined4 *)(param_1 + 0x280)), 1.0 <= fVar5)) {
      BoardEntity::CalcGridPosition();
      uVar2 = isValidTargetPoint(this,aRStack_10);
      goto LAB_03632a10;
    }
  }
  uVar2 = 0;
LAB_03632a10:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PlantJewelRabbit::canTossOffZombie(Zombie*) */

bool __thiscall PlantJewelRabbit::canTossOffZombie(PlantJewelRabbit *this,Zombie *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  cVar1 = isValidZombie(this,param_1);
  if (((cVar1 != '\0') && (cVar1 = Zombie::CanBeLaunchedByPlants(param_1), cVar1 != '\0')) &&
     (cVar2 = isZombieInTossBlackList(this,param_1), cVar2 == '\0')) {
    iVar3 = FUN_0362bf34(*(undefined8 *)(this + 0x10));
    if (1 < iVar3) {
      iVar3 = Zombie::GetSizeType(param_1);
      return iVar3 != 2;
    }
    iVar3 = Zombie::GetSizeType(param_1);
    if ((iVar3 != 1) && (iVar3 = Zombie::GetSizeType(param_1), iVar3 != 2)) {
      return (bool)cVar1;
    }
  }
  return false;
}


/* PlantJewelRabbit::canTossOutZombie(Zombie*) */

bool __thiscall PlantJewelRabbit::canTossOutZombie(PlantJewelRabbit *this,Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = isValidZombie(this,param_1);
  if (((cVar2 == '\0') || (cVar2 = Zombie::CanBeLaunchedByPlants(param_1), cVar2 == '\0')) ||
     (cVar2 = isZombieInTossBlackList(this,param_1), cVar2 != '\0')) {
    bVar1 = false;
  }
  else {
    iVar3 = Zombie::GetSizeType(param_1);
    bVar1 = iVar3 != 2;
  }
  return bVar1;
}


/* PlantJewelRabbit::canIdleZombie(Zombie*) */

bool __thiscall PlantJewelRabbit::canIdleZombie(PlantJewelRabbit *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = isValidZombie(this,param_1);
  if ((((cVar1 == '\0') || (cVar1 = Zombie::IsControlled(param_1), cVar1 != '\0')) ||
      (cVar1 = Zombie::CanBeLaunchedByPlants(param_1), cVar1 == '\0')) ||
     (((cVar1 = Zombie::IsBoss(param_1), cVar1 != '\0' ||
       (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 != '\0')) ||
      (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 != '\0')))) {
    bVar2 = false;
  }
  else {
    bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1);
    bVar2 = !bVar2;
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJewelRabbit::lockZombie(Zombie*) */

void __thiscall PlantJewelRabbit::lockZombie(PlantJewelRabbit *this,Zombie *param_1)

{
  char cVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = canTossOffZombie(this,param_1);
  if (cVar1 == '\0') {
    cVar1 = canIdleZombie(this,param_1);
    if (cVar1 == '\0') goto LAB_03632d60;
    (**(code **)(*(long *)param_1 + 600))(param_1);
  }
  else {
    (**(code **)(*(long *)param_1 + 600))(param_1);
    Zombie::SetIgnoresAllDamage(param_1,true);
    Zombie::SetMarkedForDeath(param_1);
    Zombie::SetIsTargetable(param_1,false);
    Zombie::SetIgnoresCollisions(param_1,true);
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x30),(RtWeakPtrBase *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
LAB_03632d60:
  BoardEntity::CalcGridPosition();
  *(undefined8 *)(this + 0x38) = local_10;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJewelRabbit::damageFunction2(std::vector<Zombie*, std::allocator<Zombie*> >) */

void __thiscall
PlantJewelRabbit::damageFunction2
          (PlantJewelRabbit *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  JewelRabbitTossSubSystem *this_00;
  Zombie *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_2);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_01 = (Zombie *)*puVar4;
    cVar2 = isValidZombie(this,this_01);
    if (((cVar2 != '\0') && (cVar2 = canTossOffZombie(this,this_01), cVar2 != '\0')) &&
       (iVar3 = Zombie::getZombieStateSerialization(this_01), iVar3 != 0x20)) {
      this_00 = Board::GetGameSubSystem<JewelRabbitTossSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      JewelRabbitTossSubSystem::tossZombieParabolic(this_00,this_01);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJewelRabbit::findTargetAndToss() */

void __thiscall PlantJewelRabbit::findTargetAndToss(PlantJewelRabbit *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  float *pfVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_30);
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  local_30 = (int)*pfVar5;
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  local_2c = iVar3 * iVar4 + 0xa0;
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  local_28 = (iVar3 * iVar4 + 0xa0) - local_30;
  local_24 = BoardConstants::GRIDSQUARE_HEIGHT();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInRectangle(avStack_20,2,(Insets *)&local_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)0x0;
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
    cVar1 = isValidZombie(this,this_00);
    p_Var8 = this_01;
    if ((cVar1 != '\0') &&
       (p_Var8 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)this_00,
       this_01 !=
       (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        *)0x0)) {
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_01);
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this_00);
      p_Var8 = this_01;
      if (*pfVar7 < *pfVar5) {
        p_Var8 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)this_00;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    this_01 = p_Var8;
  }
  if (this_01 !=
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    lockZombie(this,(Zombie *)this_01);
    setState(this,0xb);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantJewelRabbit::UpdateActions() */

void __thiscall PlantJewelRabbit::UpdateActions(PlantJewelRabbit *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if ((cVar1 == '\0') && (*(int *)(*(long *)(this + 0x10) + 200) == 4)) {
    findTargetAndToss(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJewelRabbit::damageFunction(std::vector<Zombie*, std::allocator<Zombie*> >) */

void __thiscall
PlantJewelRabbit::damageFunction
          (PlantJewelRabbit *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ResourceInfo *pRVar6;
  JewelRabbitTossSubSystem *this_00;
  long *plVar7;
  Zombie *this_01;
  float fVar8;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_0362bf58(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
  if (lVar4 != 0) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x30));
    if (cVar1 == '\0') {
      plVar7 = (long *)std::
                       vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::
                       front((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                              *)param_2);
      this_01 = (Zombie *)*plVar7;
      if (this_01 != (Zombie *)0x0) {
LAB_0363439c:
        lVar4 = FUN_0362eb74(*(undefined8 *)(this + 0x10));
        DamageInfo::DamageInfo((DamageInfo *)&local_68);
        fVar8 = *(float *)(lVar4 + 0x2c0);
        local_60 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
        local_60 = local_60 * fVar8;
        iVar3 = Zombie::GetSizeType(this_01);
        if ((iVar3 == 2) && (this[0x2e] != (PlantJewelRabbit)0x0)) {
          local_60 = local_60 * 3.0;
        }
        local_68 = *(undefined8 *)(this + 0x10);
        (**(code **)(*(long *)this_01 + 0x110))(this_01,(DamageInfo *)&local_68);
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      }
    }
    else {
      local_78 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(param_2);
      local_70 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(param_2);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70),
            bVar2) {
        puVar5 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
        this_01 = (Zombie *)*puVar5;
        pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x30));
        if (this_01 == (Zombie *)pRVar6) {
          cVar1 = FUN_0362d254(*(undefined4 *)(this_01 + 0xcc));
          if (cVar1 == '\0') goto LAB_0363439c;
          iVar3 = Zombie::getZombieStateSerialization(this_01);
          if (iVar3 != 0x20) {
            this_00 = Board::GetGameSubSystem<JewelRabbitTossSubSystem>
                                (*(Board **)(gLawnApp + 0x9f0));
            JewelRabbitTossSubSystem::tossZombieOff(this_00,this_01);
            break;
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
      }
    }
  }
  this[0x2e] = (PlantJewelRabbit)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJewelRabbit::findPlantfoodTargetAndToss() */

void __thiscall PlantJewelRabbit::findPlantfoodTargetAndToss(PlantJewelRabbit *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_70;
  undefined8 local_68;
  Zombie *local_60;
  undefined8 local_58;
  undefined8 local_50;
  Insets aIStack_48 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20;
  undefined8 uStack_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  Sexy::Insets::Insets((Insets *)&local_58,iVar3 + 1,iVar4 + -1,3,3);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
    iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
    Sexy::Insets::Insets((Insets *)&local_20,iVar3 + 1,iVar4 + -2,5,5);
  }
  Sexy::Insets::Insets
            (aIStack_48,0,0,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8),
             *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
  Sexy::TRect<int>::Intersection((TRect *)&local_58);
  local_58 = local_20;
  local_50 = uStack_18;
  uVar8 = local_50;
  local_50._0_4_ = (int)uStack_18;
  bVar2 = (int)local_50 == 0;
  local_50 = uVar8;
  if ((bVar2) ||
     (local_50._4_4_ = (int)((ulong)uStack_18 >> 0x20), bVar2 = local_50._4_4_ == 0, bVar2))
  goto LAB_03634974;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  EntityFinder::GetEntitiesInGridSquares(avStack_38,2,(Insets *)&local_58);
  iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  Sexy::Insets::Insets((Insets *)&local_20,iVar3,iVar4,1,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_38,2,(Insets *)&local_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_38);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar2) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    local_60 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
    cVar1 = isValidZombie(this,local_60);
    if (cVar1 != '\0') {
      std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                ((vector<Zombie*,std::allocator<Zombie*>> *)&local_20,&local_60);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_70);
  }
  local_68 = FUN_05473038();
  local_60 = (Zombie *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
  uVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
  uVar9 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_20);
  std::linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul>::
  linear_congruential_engine
            ((linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul> *)&local_60,
             uVar7 & 0xffffffff);
  std::
  shuffle<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,std::linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul>>
            (uVar8,uVar9,(exception_ptr *)&local_60);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
  uVar9 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_20);
  std::sort<__gnu_cxx::__normal_iterator<Zombie**,std::vector<Zombie*,std::allocator<Zombie*>>>>
            (uVar8,uVar9);
  cVar1 = std::vector<Zombie*,std::allocator<Zombie*>>::empty
                    ((vector<Zombie*,std::allocator<Zombie*>> *)&local_20);
  if (cVar1 == '\0') {
    puVar6 = (undefined8 *)
             std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::front
                       ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                         *)&local_20);
    lockZombie(this,(Zombie *)*puVar6);
    BoardEntity::CalcGridPosition();
LAB_03634b6c:
    std::string::string((string *)&local_60,"");
    createPlantfoodPioneer(this,(exception_ptr *)&local_68,(exception_ptr *)&local_60);
    std::string::~string((string *)&local_60);
    nop();
  }
  else {
    Sexy::Point::Point((Point *)&local_70);
    iVar3 = (int)local_58;
    iVar5 = PlantFramework::Rand((PlantFramework *)this,(int)local_50);
    iVar4 = local_58._4_4_;
    local_70 = CONCAT44(local_70._4_4_,iVar3 + iVar5);
    iVar3 = PlantFramework::Rand((PlantFramework *)this,local_50._4_4_);
    local_70 = CONCAT44(iVar4 + iVar3,(undefined4)local_70);
    Sexy::Point::Point((Point *)&local_60,(TPoint *)&local_70);
    cVar1 = isValidTargetPoint(this,(exception_ptr *)&local_60);
    if (cVar1 != '\0') {
      Sexy::Point::Point((Point *)&local_68,(TPoint *)&local_70);
      goto LAB_03634b6c;
    }
  }
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)&local_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
LAB_03634974:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantJewelRabbit::UpdatePlantfood() */

void __thiscall PlantJewelRabbit::UpdatePlantfood(PlantJewelRabbit *this)

{
  long lVar1;
  float fVar2;
  
  lVar1 = FUN_0362eb74(*(undefined8 *)(this + 0x10));
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x40) < fVar2) {
    findPlantfoodTargetAndToss(this);
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x40) = fVar2 + *(float *)(lVar1 + 0x2c4);
  }
  return;
}

