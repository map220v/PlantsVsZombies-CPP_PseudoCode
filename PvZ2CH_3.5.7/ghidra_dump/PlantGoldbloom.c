// Class: PlantGoldbloom


/* PlantGoldbloom::PlantGoldbloom() */

void __thiscall PlantGoldbloom::PlantGoldbloom(PlantGoldbloom *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067429e0;
  return;
}


/* PlantGoldbloom::StaticNew() */

PlantGoldbloom * PlantGoldbloom::StaticNew(void)

{
  PlantGoldbloom *this;
  
  this = ::operator_new(0x30);
  PlantGoldbloom(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGoldbloom::StaticClassInit() */

void PlantGoldbloom::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantGoldbloom");
    (*pcVar2)(plVar1,asStack_10,FUN_03bfdd54,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGoldbloom::StaticGetClass() */

long * PlantGoldbloom::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantGoldbloom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGoldbloom::GetClass() const */

long * PlantGoldbloom::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantGoldbloom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGoldbloom::onAnimStoppedCallback(std::string const&) */

void PlantGoldbloom::onAnimStoppedCallback(string *param_1)

{
  int iVar1;
  
  iVar1 = EA::Thread::Mutex::GetLockCount((Mutex *)param_1);
  if (iVar1 != 0xb) {
    return;
  }
  PlantStrawBurst::onAnimStoppedCallback(param_1);
  return;
}


/* PlantGoldbloom::~PlantGoldbloom() */

void __thiscall PlantGoldbloom::~PlantGoldbloom(PlantGoldbloom *this)

{
  *(undefined ***)this = &PTR_GetClass_067429e0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantGoldbloom::~PlantGoldbloom() */

void __thiscall PlantGoldbloom::~PlantGoldbloom(PlantGoldbloom *this)

{
  ~PlantGoldbloom(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGoldbloom::setState(int) */

void __thiscall PlantGoldbloom::setState(PlantGoldbloom *this,int param_1)

{
  PlantAnimRig_BoomFlower *pPVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  *(int *)(this + 0x28) = param_1;
  local_8 = ___stack_chk_guard;
  if (param_1 == 0xb) {
    pPVar1 = (PlantAnimRig_BoomFlower *)FUN_03bfe578(*(undefined8 *)(this + 0x10));
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_BoomFlower::PlayAttack(pPVar1,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGoldbloom::Initialize() */

void __thiscall PlantGoldbloom::Initialize(PlantGoldbloom *this)

{
  long lVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  lVar1 = *(long *)(this + 0x10);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)(lVar1 + 0xb4),*(float *)(lVar1 + 0xbc),*(float *)(lVar1 + 0xc0));
  setState(this,10);
  return;
}


/* PlantGoldbloom::UpdateActions() */

void __thiscall PlantGoldbloom::UpdateActions(PlantGoldbloom *this)

{
  char cVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = EA::Thread::Mutex::GetLockCount((Mutex *)this);
  if ((iVar2 == 10) && (fVar3 = (float)PVZ_T(), *(float *)(*(long *)(this + 0x10) + 300) < fVar3)) {
    cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
    if (cVar1 != '\0') {
      Plant::ResetLaunchTimer(*(Plant **)(this + 0x10),false);
      return;
    }
    setState(this,0xb);
    Plant::ResetLaunchTimer(*(Plant **)(this + 0x10),false);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGoldbloom::ProduceSun(PlantAction const&) */

void __thiscall PlantGoldbloom::ProduceSun(PlantGoldbloom *this,PlantAction *param_1)

{
  long lVar1;
  RtObject *this_00;
  PowerPropsSunProducer *pPVar2;
  PowerSet aPStack_40 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_03bfdb9c(aRStack_28,*(undefined8 *)(this + 0x10));
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  PowerSet::PowerSet(aPStack_40,(PowerSet *)(lVar1 + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  PowerSet::Find(aRStack_28,aPStack_40,1);
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  pPVar2 = Sexy::RtObject::Cast<PowerPropsSunProducer>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
                    /* WARNING: Load size is inaccurate */
  SunProducer::SunProducer
            (*(SunProducer **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),aRStack_28,
             *(undefined8 *)(this + 0x10),pPVar2);
  SunProducer::Execute((SunProducer *)aRStack_28);
  PowerSet::~PowerSet(aPStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

