// Class: PlantPowerPlant


/* PlantPowerPlant::PlantPowerPlant() */

void __thiscall PlantPowerPlant::PlantPowerPlant(PlantPowerPlant *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantPowerPlant)0x0;
  *(undefined ***)this = &PTR_GetClass_067cc510;
  return;
}


/* PlantPowerPlant::StaticNew() */

PlantPowerPlant * PlantPowerPlant::StaticNew(void)

{
  PlantPowerPlant *this;
  
  this = ::operator_new(0x30);
  PlantPowerPlant(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPowerPlant::StaticClassInit() */

void PlantPowerPlant::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPowerPlant");
    (*pcVar2)(plVar1,asStack_10,FUN_0408af00,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPowerPlant::StaticGetClass() */

long * PlantPowerPlant::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPowerPlant",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPowerPlant::GetClass() const */

long * PlantPowerPlant::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPowerPlant",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPowerPlant::~PlantPowerPlant() */

void __thiscall PlantPowerPlant::~PlantPowerPlant(PlantPowerPlant *this)

{
  *(undefined ***)this = &PTR_GetClass_067cc510;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantPowerPlant::~PlantPowerPlant() */

void __thiscall PlantPowerPlant::~PlantPowerPlant(PlantPowerPlant *this)

{
  ~PlantPowerPlant(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPowerPlant::createTile() */

void __thiscall PlantPowerPlant::createTile(PlantPowerPlant *this)

{
  long lVar1;
  undefined1 uVar2;
  PowerTileSubsystem *pPVar3;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = Board::GetGameSubSystem<PowerTileSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::Point::Point(aPStack_10,*(int *)(*(long *)(this + 0x10) + 0x114),
                     *(int *)(*(long *)(this + 0x10) + 0x110));
  uVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  PowerTileSubsystem::TryAddPowerTileAt(pPVar3,4,aPStack_10,uVar2);
  lVar1 = ___stack_chk_guard;
  this[0x28] = (PlantPowerPlant)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPowerPlant::OnAnimCommand(std::string const&, std::string const&) */

bool PlantPowerPlant::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"use_special");
  if (bVar1) {
    createTile((PlantPowerPlant *)param_1);
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPowerPlant::onKilled(bool) */

void PlantPowerPlant::onKilled(bool param_1)

{
  char cVar1;
  PowerTileSubsystem *pPVar2;
  long lVar3;
  code *pcVar4;
  Plant *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = *(Plant **)((ulong)param_1 + 0x10);
  std::string::string(asStack_10,"NoMsgDied");
  cVar1 = Plant::HasTag(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 != '\0') {
    pPVar2 = Board::GetGameSubSystem<PowerTileSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    lVar3 = *(long *)((ulong)param_1 + 0x10);
    pcVar4 = *(code **)(*(long *)pPVar2 + 0x88);
    Sexy::Point::Point((Point *)asStack_10,*(int *)(lVar3 + 0x114),*(int *)(lVar3 + 0x110));
    (*pcVar4)(pPVar2,asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPowerPlant::Initialize() */

void __thiscall PlantPowerPlant::Initialize(PlantPowerPlant *this)

{
  char cVar1;
  long *plVar2;
  RealObject *this_00;
  code *pcVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x28] = (PlantPowerPlant)0x0;
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pcVar3 = *(code **)(*plVar2 + 0x130);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    (*pcVar3)(plVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    this_00 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_58,"Play_Plant_Power_Plant_Spawn");
    RealObject::PlayPositionalSound(this_00,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

