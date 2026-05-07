// Class: Sexy::GenericResFile


/* Sexy::GenericResFile::GetFilePath() const */

void __thiscall Sexy::GenericResFile::GetFilePath(GenericResFile *this)

{
  FUN_0547429c(this + 0x18);
  return;
}


/* Sexy::GenericResFile::~GenericResFile() */

void __thiscall Sexy::GenericResFile::~GenericResFile(GenericResFile *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2fb50;
  std::string::~string((string *)(this + 0x18));
  BaseResource::~BaseResource((BaseResource *)this);
  return;
}


/* Sexy::GenericResFile::~GenericResFile() */

void __thiscall Sexy::GenericResFile::~GenericResFile(GenericResFile *this)

{
  ~GenericResFile(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::GenericResFile::GenericResFile() */

void __thiscall Sexy::GenericResFile::GenericResFile(GenericResFile *this)

{
  BaseResource::BaseResource((BaseResource *)this);
  *(undefined ***)this = &PTR_GetClass_06a2fb50;
  Set8BytesTo0(this + 0x18);
  return;
}


/* Sexy::GenericResFile::StaticNew() */

GenericResFile * Sexy::GenericResFile::StaticNew(void)

{
  GenericResFile *this;
  
  this = ::operator_new(0x20);
  GenericResFile(this);
  return this;
}


/* Sexy::GenericResFile::StaticClassInit() */

void Sexy::GenericResFile::StaticClassInit(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = StaticGetClass();
  uVar2 = ResourceInfoTypes::GenericResFileRes::StaticGetClass();
  FUN_051948fc(lVar1 + 0x48,uVar2);
  return;
}


/* Sexy::GenericResFile::StaticGetClass() */

long * Sexy::GenericResFile::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = BaseResource::StaticGetClass();
  (*pcVar3)(plVar1,"GenericResFile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::GenericResFile::GetClass() const */

long * Sexy::GenericResFile::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = BaseResource::StaticGetClass();
  (*pcVar3)(plVar1,"GenericResFile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

