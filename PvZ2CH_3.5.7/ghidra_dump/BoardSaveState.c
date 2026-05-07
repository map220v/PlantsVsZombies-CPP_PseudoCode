// Class: BoardSaveState


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardSaveState::StaticClassInit() */

void BoardSaveState::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SunGet");
    (*pcVar3)(plVar2,asStack_10,FUN_03296240,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantfoodGet");
    (*pcVar3)(plVar2,asStack_10,FUN_032960ec,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TodSmoothArray");
    (*pcVar3)(plVar2,asStack_10,FUN_032970c0,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GameplayMetrics");
    (*pcVar3)(plVar2,asStack_10,FUN_03296398,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ArtifactData");
    (*pcVar3)(plVar2,asStack_10,FUN_03299358,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"BoardSaveState");
    (*pcVar3)(plVar2,asStack_10,FUN_0329819c,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardSaveState::StaticGetClass() */

long * BoardSaveState::StaticGetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"BoardSaveState",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardSaveState::GetClass() const */

long * BoardSaveState::GetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"BoardSaveState",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardSaveState::BoardSaveState() */

void __thiscall BoardSaveState::BoardSaveState(BoardSaveState *this)

{
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_06610c40;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x90));
  Sexy::Point::Point((Point *)(this + 0xa8));
  GameplayMetrics::GameplayMetrics((GameplayMetrics *)(this + 0xb0));
  Set8BytesTo0(this + 0x140);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x180));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x198));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c8));
  Set8BytesTo0(this + 0x1f8);
  ArtifactData::ArtifactData((ArtifactData *)(this + 0x210));
  return;
}


/* BoardSaveState::StaticNew() */

BoardSaveState * BoardSaveState::StaticNew(void)

{
  BoardSaveState *this;
  
  this = ::operator_new(0x220);
  BoardSaveState(this);
  return this;
}


/* BoardSaveState::~BoardSaveState() */

void __thiscall BoardSaveState::~BoardSaveState(BoardSaveState *this)

{
  *(undefined ***)this = &PTR_GetClass_06610c40;
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)(this + 0x210));
  std::string::~string((string *)(this + 0x1f8));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x1c8));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x1b0));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x198));
  std::vector<PlantfoodGet,std::allocator<PlantfoodGet>>::~vector
            ((vector<PlantfoodGet,std::allocator<PlantfoodGet>> *)(this + 0x180));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x168));
  std::vector<SunGet,std::allocator<SunGet>>::~vector
            ((vector<SunGet,std::allocator<SunGet>> *)(this + 0x150));
  std::string::~string((string *)(this + 0x140));
  std::vector<signed_char,std::allocator<signed_char>>::~vector
            ((vector<signed_char,std::allocator<signed_char>> *)(this + 0x90));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x78));
  std::vector<signed_char,std::allocator<signed_char>>::~vector
            ((vector<signed_char,std::allocator<signed_char>> *)(this + 0x60));
  std::vector<TodSmoothArray,std::allocator<TodSmoothArray>>::~vector
            ((vector<TodSmoothArray,std::allocator<TodSmoothArray>> *)(this + 0x48));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x30));
  std::vector<signed_char,std::allocator<signed_char>>::~vector
            ((vector<signed_char,std::allocator<signed_char>> *)(this + 0x18));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* BoardSaveState::~BoardSaveState() */

void __thiscall BoardSaveState::~BoardSaveState(BoardSaveState *this)

{
  ~BoardSaveState(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardSaveState::Serialize(Sexy::RtSerializeContext const&) */

void __thiscall BoardSaveState::Serialize(BoardSaveState *this,RtSerializeContext *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  RtSerialRtonKey aRStack_40 [8];
  RtSerializeContext aRStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameObject::Serialize((GameObject *)this,param_1);
  plVar2 = *(long **)(gLawnApp + 0x9f0);
  pcVar3 = *(code **)(*plVar2 + 0x30);
  uVar1 = FUN_03295ff8(*(undefined8 *)(param_1 + 8));
  Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_40,"boarddata");
  Sexy::RtSerializeContext::RtSerializeContext(aRStack_38,uVar1,aRStack_40,0);
  (*pcVar3)(plVar2,aRStack_38);
  Sexy::RtSerializeContext::~RtSerializeContext(aRStack_38);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_40);
  plVar2 = (long *)FUN_032960b8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  pcVar3 = *(code **)(*plVar2 + 0x30);
  uVar1 = FUN_03295ff8(*(undefined8 *)(param_1 + 8));
  Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_40,"levelmodulemanagerdata");
  Sexy::RtSerializeContext::RtSerializeContext(aRStack_38,uVar1,aRStack_40,0);
  (*pcVar3)(plVar2,aRStack_38);
  Sexy::RtSerializeContext::~RtSerializeContext(aRStack_38);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

