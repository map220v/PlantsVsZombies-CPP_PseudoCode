// Class: NetworkArtifactPresent


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkArtifactPresent::StaticClassInit() */

void NetworkArtifactPresent::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkArtifactPresentContent");
    (*pcVar3)(plVar2,asStack_10,FUN_03dc4ab0,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkArtifactPresent");
    (*pcVar3)(plVar2,asStack_10,FUN_03dc6a4c,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkArtifactPresent::StaticGetClass() */

long * NetworkArtifactPresent::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkArtifactPresent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkArtifactPresent::GetClass() const */

long * NetworkArtifactPresent::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkArtifactPresent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkArtifactPresent::NetworkArtifactPresent() */

void __thiscall NetworkArtifactPresent::NetworkArtifactPresent(NetworkArtifactPresent *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0677ae30;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  return;
}


/* NetworkArtifactPresent::StaticNew() */

NetworkArtifactPresent * NetworkArtifactPresent::StaticNew(void)

{
  NetworkArtifactPresent *this;
  
  this = ::operator_new(0x80);
  NetworkArtifactPresent(this);
  return this;
}


/* NetworkArtifactPresent::~NetworkArtifactPresent() */

void __thiscall NetworkArtifactPresent::~NetworkArtifactPresent(NetworkArtifactPresent *this)

{
  *(undefined ***)this = &PTR_GetClass_0677ae30;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x68));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x50));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x38));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x20));
  std::
  vector<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>,std::allocator<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>>>
  ::~vector((vector<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>,std::allocator<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>>>
             *)(this + 8));
  nop();
  return;
}


/* NetworkArtifactPresent::~NetworkArtifactPresent() */

void __thiscall NetworkArtifactPresent::~NetworkArtifactPresent(NetworkArtifactPresent *this)

{
  ~NetworkArtifactPresent(this);
  AK::FreeHook(this);
  return;
}

