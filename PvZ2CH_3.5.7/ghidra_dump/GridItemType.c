// Class: GridItemType


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemType::StaticClassInit() */

void GridItemType::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemType");
    (*pcVar2)(plVar1,asStack_10,FUN_03e07360,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemType::StaticGetClass() */

long * GridItemType::StaticGetClass(void)

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
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemType::GetClass() const */

long * GridItemType::GetClass(void)

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
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemType::GetPacketCoolDown() const */

void __thiscall GridItemType::GetPacketCoolDown(GridItemType *this)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  fVar4 = *(float *)(lVar2 + 0x24);
  iVar1 = MiniGameCollectionUtils::GetMiniGameCollectionType();
  local_10 = (float)BoardHelpers::ApplyMiniGamePerkBuffValue(0.0,iVar1,1,(PlantType *)0x0);
  local_10 = 1.0 - local_10;
  local_c = 0.0;
  pfVar3 = eastl::max_alt<float>(&local_10,&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar4 * *pfVar3);
}


/* GridItemType::GridItemType() */

void __thiscall GridItemType::GridItemType(GridItemType *this)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_06781fd0;
  Set8BytesTo0(this + 0x10);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  return;
}


/* GridItemType::StaticNew() */

GridItemType * GridItemType::StaticNew(void)

{
  GridItemType *this;
  
  this = ::operator_new(0x38);
  GridItemType(this);
  return this;
}


/* GridItemType::~GridItemType() */

void __thiscall GridItemType::~GridItemType(GridItemType *this)

{
  *(undefined ***)this = &PTR_GetClass_06781fd0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* GridItemType::~GridItemType() */

void __thiscall GridItemType::~GridItemType(GridItemType *this)

{
  ~GridItemType(this);
  AK::FreeHook(this);
  return;
}


/* GridItemType::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) const */

void __thiscall GridItemType::AddResourceRequirements(GridItemType *this,set *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_03e0724c(*(undefined8 *)(this + 0x18));
  uVar2 = FUN_03e0729c(*(undefined8 *)(this + 0x20));
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::
  insert<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>>
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,uVar1,
             uVar2);
  return;
}

