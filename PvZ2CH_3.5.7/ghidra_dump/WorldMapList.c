// Class: WorldMapList


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapList::StaticClassInit() */

void WorldMapList::StaticClassInit(void)

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
    std::string::string(asStack_10,"MapListNode");
    (*pcVar3)(plVar2,asStack_10,FUN_0451e184,0xb0,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WorldMapList");
    (*pcVar3)(plVar2,asStack_10,FUN_0451fe24,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapList::StaticGetClass() */

long * WorldMapList::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMapList",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMapList::GetClass() const */

long * WorldMapList::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMapList",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMapList::IsWorldEnabled(std::string const&) const */

bool __thiscall WorldMapList::IsWorldEnabled(WorldMapList *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"coming_soon");
  return !bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapList::GetMapListNodeByName(std::string const&) const */

void __thiscall WorldMapList::GetMapListNodeByName(WorldMapList *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  string *psVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_0451d7cc(*(undefined8 *)(this + 8));
  local_10 = FUN_0451d81c(*(undefined8 *)(this + 0x10));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = std::operator==(psVar3,param_1);
    if (cVar1 != '\0') goto LAB_0451d8f8;
    eastl::generic_iterator<EA::Text::FeatureLookup*,void>::operator++
              ((generic_iterator<EA::Text::FeatureLookup*,void> *)&local_18);
  }
  psVar3 = (string *)0x0;
LAB_0451d8f8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(psVar3);
  }
  return;
}


/* WorldMapList::IsWorldComingSoon(std::string const&) const */

undefined8 __thiscall WorldMapList::IsWorldComingSoon(WorldMapList *this,string *param_1)

{
  long lVar1;
  Throttles *this_00;
  undefined8 uVar2;
  
  lVar1 = GetMapListNodeByName(this,param_1);
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0x48) == '\0')) && (*(char *)(lVar1 + 0x30) != '\0')) {
    this_00 = (Throttles *)Throttles::GetInstance();
    uVar2 = Throttles::WorldIsDisabled(this_00,param_1);
    return uVar2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapList::GetMapListNodeById(int const&) const */

void __thiscall WorldMapList::GetMapListNodeById(WorldMapList *this,int *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_0451d7cc(*(undefined8 *)(this + 8));
  local_10 = FUN_0451d81c(*(undefined8 *)(this + 0x10));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*(int *)(lVar2 + 0x3c) == *param_1) goto LAB_0451dac0;
    eastl::generic_iterator<EA::Text::FeatureLookup*,void>::operator++
              ((generic_iterator<EA::Text::FeatureLookup*,void> *)&local_18);
  }
  lVar2 = 0;
LAB_0451dac0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* WorldMapList::WorldMapList() */

void __thiscall WorldMapList::WorldMapList(WorldMapList *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06857ad0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  Sexy::Insets::Insets((Insets *)(this + 0x48));
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  return;
}


/* WorldMapList::StaticNew() */

WorldMapList * WorldMapList::StaticNew(void)

{
  WorldMapList *this;
  
  this = ::operator_new(0x58);
  WorldMapList(this);
  return this;
}


/* WorldMapList::~WorldMapList() */

void __thiscall WorldMapList::~WorldMapList(WorldMapList *this)

{
  *(undefined ***)this = &PTR_GetClass_06857ad0;
  std::
  vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>>
  ::~vector((vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>>
             *)(this + 0x20));
  std::vector<MapListNode,std::allocator<MapListNode>>::~vector
            ((vector<MapListNode,std::allocator<MapListNode>> *)(this + 8));
  nop();
  return;
}


/* WorldMapList::~WorldMapList() */

void __thiscall WorldMapList::~WorldMapList(WorldMapList *this)

{
  ~WorldMapList(this);
  AK::FreeHook(this);
  return;
}

