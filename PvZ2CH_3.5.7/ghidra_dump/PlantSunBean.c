// Class: PlantSunBean


/* PlantSunBean::ApplyPlantfood() */

void __thiscall PlantSunBean::ApplyPlantfood(PlantSunBean *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  this[0x28] = (PlantSunBean)0x1;
  return;
}


/* PlantSunBean::PlantSunBean() */

void __thiscall PlantSunBean::PlantSunBean(PlantSunBean *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantSunBean)0x0;
  *(undefined ***)this = &PTR_GetClass_06808920;
  return;
}


/* PlantSunBean::StaticNew() */

PlantSunBean * PlantSunBean::StaticNew(void)

{
  PlantSunBean *this;
  
  this = ::operator_new(0x30);
  PlantSunBean(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunBean::StaticClassInit() */

void PlantSunBean::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantSunBean");
    (*pcVar2)(plVar1,asStack_10,FUN_041ff908,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSunBean::StaticGetClass() */

long * PlantSunBean::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantSunBean",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSunBean::GetClass() const */

long * PlantSunBean::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantSunBean",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSunBean::~PlantSunBean() */

void __thiscall PlantSunBean::~PlantSunBean(PlantSunBean *this)

{
  *(undefined ***)this = &PTR_GetClass_06808920;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantSunBean::~PlantSunBean() */

void __thiscall PlantSunBean::~PlantSunBean(PlantSunBean *this)

{
  ~PlantSunBean(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunBean::CancelPlantfood() */

void __thiscall PlantSunBean::CancelPlantfood(PlantSunBean *this)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_40,"plantfood");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunBean::Initialize() */

void __thiscall PlantSunBean::Initialize(PlantSunBean *this)

{
  PlantSunBeanSubSystem *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x28] = (PlantSunBean)0x0;
  pPVar1 = Board::GetGameSubSystem<PlantSunBeanSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  FUN_041ff5f0(aRStack_18,*(undefined8 *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  PlantSunBeanSubSystem::SetPropertySheet(pPVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunBean::TakeDamage(DamageInfo const&) */

void PlantSunBean::TakeDamage(DamageInfo *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 extraout_x0;
  PlantSunBeanSubSystem *pPVar4;
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = operator|(0x40000,0x100000);
  bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(in_x1 + 0x10),uVar3);
  if ((((bVar1) && (*(RtObject **)in_x1 != (RtObject *)0x0)) &&
      (bVar1 = Sexy::RtObject::IsA<Zombie>(*(RtObject **)in_x1), bVar1)) &&
     (((cVar2 = Plant::HasCondition(*(undefined8 *)(param_1 + 0x10),0x17), cVar2 == '\0' &&
       (0.0 <= *(float *)(*(long *)(param_1 + 0x10) + 0xd8))) &&
      (*(float *)(*(long *)(param_1 + 0x10) + 0xd8) - *(float *)(in_x1 + 8) < 0.0)))) {
    nop();
    pPVar4 = Board::GetGameSubSystem<PlantSunBeanSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    FUN_041ff5f0(aRStack_18,*(undefined8 *)(param_1 + 0x10));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    PlantSunBeanSubSystem::MakeZombieSpewSun(pPVar4,extraout_x0,aRStack_10,param_1[0x28]);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  DamageInfo::DamageInfo(in_x8,in_x1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

