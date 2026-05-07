// Class: StreamingMusicList


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StreamingMusicList::StaticClassInit() */

void StreamingMusicList::StaticClassInit(void)

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
    std::string::string(asStack_10,"StreamingMusicGroup");
    (*pcVar3)(plVar2,asStack_10,FUN_044996e8,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"StreamingMusicList");
    (*pcVar3)(plVar2,asStack_10,FUN_044999f0,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StreamingMusicList::StaticGetClass() */

long * StreamingMusicList::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StreamingMusicList",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StreamingMusicList::GetClass() const */

long * StreamingMusicList::GetClass(void)

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
  (*pcVar3)(plVar1,"StreamingMusicList",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StreamingMusicList::StreamingMusicList() */

void __thiscall StreamingMusicList::StreamingMusicList(StreamingMusicList *this)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_068518b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* StreamingMusicList::StaticNew() */

StreamingMusicList * StreamingMusicList::StaticNew(void)

{
  StreamingMusicList *this;
  
  this = ::operator_new(0x28);
  StreamingMusicList(this);
  return this;
}


/* StreamingMusicList::~StreamingMusicList() */

void __thiscall StreamingMusicList::~StreamingMusicList(StreamingMusicList *this)

{
  *(undefined ***)this = &PTR_GetClass_068518b0;
  std::vector<StreamingMusicGroup,std::allocator<StreamingMusicGroup>>::~vector
            ((vector<StreamingMusicGroup,std::allocator<StreamingMusicGroup>> *)(this + 0x10));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* StreamingMusicList::~StreamingMusicList() */

void __thiscall StreamingMusicList::~StreamingMusicList(StreamingMusicList *this)

{
  ~StreamingMusicList(this);
  AK::FreeHook(this);
  return;
}

