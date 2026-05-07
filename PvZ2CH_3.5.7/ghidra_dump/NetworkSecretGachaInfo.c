// Class: NetworkSecretGachaInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkSecretGachaInfo::StaticClassInit() */

void NetworkSecretGachaInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkSecretGachaInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_03de860c,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkSecretGachaInfo::StaticGetClass() */

long * NetworkSecretGachaInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkSecretGachaInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkSecretGachaInfo::GetClass() const */

long * NetworkSecretGachaInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkSecretGachaInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkSecretGachaInfo::~NetworkSecretGachaInfo() */

void __thiscall NetworkSecretGachaInfo::~NetworkSecretGachaInfo(NetworkSecretGachaInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_0677f350;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x30));
  std::vector<SecretGachaItem,std::allocator<SecretGachaItem>>::~vector
            ((vector<SecretGachaItem,std::allocator<SecretGachaItem>> *)(this + 0x10));
  nop();
  return;
}


/* NetworkSecretGachaInfo::~NetworkSecretGachaInfo() */

void __thiscall NetworkSecretGachaInfo::~NetworkSecretGachaInfo(NetworkSecretGachaInfo *this)

{
  ~NetworkSecretGachaInfo(this);
  AK::FreeHook(this);
  return;
}


/* NetworkSecretGachaInfo::NetworkSecretGachaInfo() */

void __thiscall NetworkSecretGachaInfo::NetworkSecretGachaInfo(NetworkSecretGachaInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0677f350;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* NetworkSecretGachaInfo::StaticNew() */

NetworkSecretGachaInfo * NetworkSecretGachaInfo::StaticNew(void)

{
  NetworkSecretGachaInfo *this;
  
  this = ::operator_new(0x50);
  NetworkSecretGachaInfo(this);
  return this;
}


/* NetworkSecretGachaInfo::NetworkSecretGachaInfo(NetworkSecretGachaInfo const&) */

void __thiscall
NetworkSecretGachaInfo::NetworkSecretGachaInfo
          (NetworkSecretGachaInfo *this,NetworkSecretGachaInfo *param_1)

{
  undefined4 uVar1;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &PTR_GetClass_0677f350;
  std::vector<SecretGachaItem,std::allocator<SecretGachaItem>>::vector
            ((vector<SecretGachaItem,std::allocator<SecretGachaItem>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x28) = uVar1;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x30),(vector *)(param_1 + 0x30));
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  this[0x4c] = param_1[0x4c];
  *(undefined4 *)(this + 0x48) = uVar1;
  return;
}


/* NetworkSecretGachaInfo::TEMPNAMEPLACEHOLDERVALUE(NetworkSecretGachaInfo const&) */

NetworkSecretGachaInfo * __thiscall
NetworkSecretGachaInfo::operator=(NetworkSecretGachaInfo *this,NetworkSecretGachaInfo *param_1)

{
  undefined4 uVar1;
  NetworkSecretGachaInfo NVar2;
  
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  std::vector<SecretGachaItem,std::allocator<SecretGachaItem>>::operator=
            ((vector<SecretGachaItem,std::allocator<SecretGachaItem>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x28) = uVar1;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x30),(vector *)(param_1 + 0x30));
  NVar2 = param_1[0x4c];
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  this[0x4c] = NVar2;
  return this;
}

