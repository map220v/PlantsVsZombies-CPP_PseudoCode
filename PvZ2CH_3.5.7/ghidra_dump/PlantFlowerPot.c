// Class: PlantFlowerPot


/* PlantFlowerPot::PlantFlowerPot() */

void __thiscall PlantFlowerPot::PlantFlowerPot(PlantFlowerPot *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR_GetClass_0676eee0;
  return;
}


/* PlantFlowerPot::StaticNew() */

PlantFlowerPot * PlantFlowerPot::StaticNew(void)

{
  PlantFlowerPot *this;
  
  this = ::operator_new(0x30);
  PlantFlowerPot(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlowerPot::StaticClassInit() */

void PlantFlowerPot::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantFlowerPot");
    (*pcVar2)(plVar1,asStack_10,FUN_03d705d8,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFlowerPot::StaticGetClass() */

long * PlantFlowerPot::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantFlowerPot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantFlowerPot::GetClass() const */

long * PlantFlowerPot::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantFlowerPot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantFlowerPot::~PlantFlowerPot() */

void __thiscall PlantFlowerPot::~PlantFlowerPot(PlantFlowerPot *this)

{
  *(undefined ***)this = &PTR_GetClass_0676eee0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantFlowerPot::~PlantFlowerPot() */

void __thiscall PlantFlowerPot::~PlantFlowerPot(PlantFlowerPot *this)

{
  ~PlantFlowerPot(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlowerPot::Initialize() */

void __thiscall PlantFlowerPot::Initialize(PlantFlowerPot *this)

{
  char cVar1;
  string *psVar2;
  undefined8 uVar3;
  Board *pBVar4;
  undefined4 local_20;
  undefined4 local_1c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    Sexy::Point::Point((Point *)&local_20,*(int *)(*(long *)(this + 0x10) + 0x114),
                       *(int *)(*(long *)(this + 0x10) + 0x110));
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
    std::string::string(asStack_10,"flowerpot");
    ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar2);
    std::string::~string(asStack_10);
    nop();
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
    uVar3 = Board::AddGridItem(pBVar4,asStack_10,local_20,local_1c,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    (**(code **)(**(long **)(this + 0x10) + 0x48))(*(long **)(this + 0x10));
    *(undefined8 *)(this + 0x28) = uVar3;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFlowerPot::ApplyPlantfood() */

void __thiscall PlantFlowerPot::ApplyPlantfood(PlantFlowerPot *this)

{
  GridItemFlowerPot *this_00;
  
  if ((*(RtObject **)(this + 0x28) != (RtObject *)0x0) &&
     (this_00 = Sexy::RtObject::Cast<GridItemFlowerPot>(*(RtObject **)(this + 0x28)),
     this_00 != (GridItemFlowerPot *)0x0)) {
    GridItemFlowerPot::ApplyPlantfood(this_00);
    return;
  }
  return;
}

