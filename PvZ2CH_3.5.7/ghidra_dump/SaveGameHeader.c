// Class: SaveGameHeader


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SaveGameHeader::StaticClassInit() */

void SaveGameHeader::StaticClassInit(void)

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
    std::string::string(asStack_10,"SaveGameHeader");
    (*pcVar2)(plVar1,asStack_10,FUN_0441232c,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SaveGameHeader::StaticGetClass() */

long * SaveGameHeader::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SaveGameHeader",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SaveGameHeader::GetClass() const */

long * SaveGameHeader::GetClass(void)

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
  (*pcVar3)(plVar1,"SaveGameHeader",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SaveGameHeader::VersionCheck(SaveGameHeader const&) */

bool __thiscall SaveGameHeader::VersionCheck(SaveGameHeader *this,SaveGameHeader *param_1)

{
  char cVar1;
  
  cVar1 = PVZVersion::operator==((PVZVersion *)(param_1 + 0x40),(PVZVersion *)(this + 0x40));
  if (((cVar1 != '\0') &&
      (cVar1 = PVZVersion::operator==((PVZVersion *)(param_1 + 0x128),(PVZVersion *)(this + 0x128)),
      cVar1 != '\0')) && (*(int *)(param_1 + 0x3c) == *(int *)(this + 0x3c))) {
    return param_1[0x210] == this[0x210];
  }
  return false;
}


/* SaveGameHeader::SaveGameHeader() */

void __thiscall SaveGameHeader::SaveGameHeader(SaveGameHeader *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06847ff0;
  Set8BytesTo0(this + 8);
  this[0x10] = (SaveGameHeader)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  Set8BytesTo0(this + 0x30);
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  *(undefined4 *)(this + 0x3c) = 0xffffffff;
  PVZVersion::PVZVersion((PVZVersion *)(this + 0x40));
  PVZVersion::PVZVersion((PVZVersion *)(this + 0x128));
  return;
}


/* SaveGameHeader::StaticNew() */

SaveGameHeader * SaveGameHeader::StaticNew(void)

{
  SaveGameHeader *this;
  
  this = ::operator_new(0x218);
  SaveGameHeader(this);
  return this;
}


/* SaveGameHeader::TEMPNAMEPLACEHOLDERVALUE(SaveGameHeader const&) */

SaveGameHeader * __thiscall SaveGameHeader::operator=(SaveGameHeader *this,SaveGameHeader *param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  this[0x10] = param_1[0x10];
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  thunk_FUN_05475e00(this + 0x30,param_1 + 0x30);
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = uVar1;
  PVZVersion::operator=((PVZVersion *)(this + 0x40),(PVZVersion *)(param_1 + 0x40));
  PVZVersion::operator=((PVZVersion *)(this + 0x128),(PVZVersion *)(param_1 + 0x128));
  this[0x210] = param_1[0x210];
  return this;
}


/* SaveGameHeader::~SaveGameHeader() */

void __thiscall SaveGameHeader::~SaveGameHeader(SaveGameHeader *this)

{
  *(undefined ***)this = &PTR_GetClass_06847ff0;
  PVZVersion::~PVZVersion((PVZVersion *)(this + 0x128));
  PVZVersion::~PVZVersion((PVZVersion *)(this + 0x40));
  std::string::~string((string *)(this + 0x30));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18));
  std::string::~string((string *)(this + 8));
  nop();
  return;
}


/* SaveGameHeader::~SaveGameHeader() */

void __thiscall SaveGameHeader::~SaveGameHeader(SaveGameHeader *this)

{
  ~SaveGameHeader(this);
  AK::FreeHook(this);
  return;
}

