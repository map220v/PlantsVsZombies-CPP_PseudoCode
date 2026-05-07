// Class: CustomNetworkUploadData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomNetworkUploadData::StaticClassInit() */

void CustomNetworkUploadData::StaticClassInit(void)

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
    std::string::string(asStack_10,"CustomNetworkUploadData");
    (*pcVar2)(plVar1,asStack_10,FUN_035978a0,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomNetworkUploadData::StaticGetClass() */

long * CustomNetworkUploadData::StaticGetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"CustomNetworkUploadData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomNetworkUploadData::GetClass() const */

long * CustomNetworkUploadData::GetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"CustomNetworkUploadData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomNetworkUploadData::CustomNetworkUploadData() */

void __thiscall CustomNetworkUploadData::CustomNetworkUploadData(CustomNetworkUploadData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0665d970;
  *(undefined ***)(this + 8) = &PTR__CustomNetworkUploadData_0665d9d8;
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x40);
  Set8BytesTo0(this + 0x50);
  Set8BytesTo0(this + 0x58);
  Set8BytesTo0(this + 0x60);
  Set8BytesTo0(this + 0x68);
  Set8BytesTo0(this + 0x70);
  Set8BytesTo0(this + 0x78);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x90));
  *(undefined4 *)(this + 0xc0) = 0;
  Set8BytesTo0(this + 200);
  return;
}


/* CustomNetworkUploadData::StaticNew() */

CustomNetworkUploadData * CustomNetworkUploadData::StaticNew(void)

{
  CustomNetworkUploadData *this;
  
  this = ::operator_new(0xd0);
  CustomNetworkUploadData(this);
  return this;
}


/* CustomNetworkUploadData::~CustomNetworkUploadData() */

void __thiscall CustomNetworkUploadData::~CustomNetworkUploadData(CustomNetworkUploadData *this)

{
  *(undefined ***)this = &PTR_GetClass_0665d970;
  *(undefined ***)(this + 8) = &PTR__CustomNetworkUploadData_0665d9d8;
  std::string::~string((string *)(this + 200));
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)(this + 0x90));
  std::string::~string((string *)(this + 0x78));
  std::string::~string((string *)(this + 0x70));
  std::string::~string((string *)(this + 0x68));
  std::string::~string((string *)(this + 0x60));
  std::string::~string((string *)(this + 0x58));
  std::string::~string((string *)(this + 0x50));
  std::string::~string((string *)(this + 0x40));
  std::string::~string((string *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to CustomNetworkUploadData::~CustomNetworkUploadData() */

void __thiscall CustomNetworkUploadData::~CustomNetworkUploadData(CustomNetworkUploadData *this)

{
  ~CustomNetworkUploadData(this + -8);
  return;
}


/* CustomNetworkUploadData::~CustomNetworkUploadData() */

void __thiscall CustomNetworkUploadData::~CustomNetworkUploadData(CustomNetworkUploadData *this)

{
  ~CustomNetworkUploadData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CustomNetworkUploadData::~CustomNetworkUploadData() */

void __thiscall CustomNetworkUploadData::~CustomNetworkUploadData(CustomNetworkUploadData *this)

{
  ~CustomNetworkUploadData(this + -8);
  return;
}


/* CustomNetworkUploadData::TEMPNAMEPLACEHOLDERVALUE(CustomNetworkUploadData const&) */

CustomNetworkUploadData * __thiscall
CustomNetworkUploadData::operator=(CustomNetworkUploadData *this,CustomNetworkUploadData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CustomNetworkUploadData CVar6;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  CVar6 = param_1[0x28];
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  this[0x28] = CVar6;
  *(undefined4 *)(this + 0x2c) = uVar3;
  *(undefined4 *)(this + 0x30) = uVar4;
  *(undefined4 *)(this + 0x34) = uVar5;
  thunk_FUN_05475e00(this + 0x40,param_1 + 0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = uVar1;
  thunk_FUN_05475e00(this + 0x50,param_1 + 0x50);
  thunk_FUN_05475e00(this + 0x58,param_1 + 0x58);
  thunk_FUN_05475e00(this + 0x60,param_1 + 0x60);
  thunk_FUN_05475e00(this + 0x68,param_1 + 0x68);
  thunk_FUN_05475e00(this + 0x70,param_1 + 0x70);
  thunk_FUN_05475e00(this + 0x78,param_1 + 0x78);
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  CVar6 = param_1[0x84];
  uVar2 = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(this + 0x80) = uVar1;
  this[0x84] = CVar6;
  *(undefined4 *)(this + 0x88) = uVar2;
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::operator=((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               *)(this + 0x90),(map *)(param_1 + 0x90));
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  thunk_FUN_05475e00(this + 200,param_1 + 200);
  return this;
}


/* CustomNetworkUploadData::CustomNetworkUploadData(CustomNetworkUploadData const&) */

void __thiscall
CustomNetworkUploadData::CustomNetworkUploadData
          (CustomNetworkUploadData *this,CustomNetworkUploadData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CustomNetworkUploadData CVar6;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined ***)this = &PTR_GetClass_0665d970;
  *(undefined ***)(this + 8) = &PTR__CustomNetworkUploadData_0665d9d8;
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  CVar6 = param_1[0x28];
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  this[0x28] = CVar6;
  *(undefined4 *)(this + 0x2c) = uVar3;
  *(undefined4 *)(this + 0x30) = uVar4;
  *(undefined4 *)(this + 0x34) = uVar5;
  FUN_05475d88(this + 0x40,param_1 + 0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = uVar1;
  FUN_05475d88(this + 0x50,param_1 + 0x50);
  FUN_05475d88(this + 0x58,param_1 + 0x58);
  FUN_05475d88(this + 0x60,param_1 + 0x60);
  FUN_05475d88(this + 0x68,param_1 + 0x68);
  FUN_05475d88(this + 0x70,param_1 + 0x70);
  FUN_05475d88(this + 0x78,param_1 + 0x78);
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  CVar6 = param_1[0x84];
  uVar2 = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(this + 0x80) = uVar1;
  this[0x84] = CVar6;
  *(undefined4 *)(this + 0x88) = uVar2;
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
         *)(this + 0x90),(map *)(param_1 + 0x90));
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  FUN_05475d88(this + 200,param_1 + 200);
  return;
}

