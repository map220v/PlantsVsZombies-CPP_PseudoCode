// Class: GridItemPlacementModuleProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPlacementModuleProps::StaticClassInit() */

void GridItemPlacementModuleProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemPlacementModuleProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0369d190,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPlacementModuleProps::StaticGetClass() */

long * GridItemPlacementModuleProps::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemPlacementModuleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemPlacementModuleProps::GetModuleClass() const */

long * GridItemPlacementModuleProps::GetModuleClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemPlacementModuleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemPlacementModuleProps::GridItemPlacementModuleProps() */

void __thiscall
GridItemPlacementModuleProps::GridItemPlacementModuleProps(GridItemPlacementModuleProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0667edf0;
  Set8BytesTo0(this + 0x40);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  return;
}


/* GridItemPlacementModuleProps::StaticNew() */

GridItemPlacementModuleProps * GridItemPlacementModuleProps::StaticNew(void)

{
  GridItemPlacementModuleProps *this;
  
  this = ::operator_new(0x50);
  GridItemPlacementModuleProps(this);
  return this;
}


/* GridItemPlacementModuleProps::~GridItemPlacementModuleProps() */

void __thiscall
GridItemPlacementModuleProps::~GridItemPlacementModuleProps(GridItemPlacementModuleProps *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0667edf0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  std::string::~string((string *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* GridItemPlacementModuleProps::~GridItemPlacementModuleProps() */

void __thiscall
GridItemPlacementModuleProps::~GridItemPlacementModuleProps(GridItemPlacementModuleProps *this)

{
  ~GridItemPlacementModuleProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPlacementModuleProps::GetGridItemType() const */

void __thiscall GridItemPlacementModuleProps::GetGridItemType(GridItemPlacementModuleProps *this)

{
  string *psVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPlacementModuleProps::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
GridItemPlacementModuleProps::GatherResourceRequirements
          (GridItemPlacementModuleProps *this,set *param_1)

{
  char cVar1;
  GridItemType *this_00;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetGridItemType(this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  if (cVar1 != '\0') {
    this_00 = (GridItemType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    GridItemType::AddResourceRequirements(this_00,param_1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

