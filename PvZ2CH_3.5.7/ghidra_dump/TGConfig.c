// Class: TGConfig


/* TGConfig::TGConfig() */

void __thiscall TGConfig::TGConfig(TGConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 0xc) = 0x3f000000;
  *(undefined4 *)(this + 8) = 2;
  *(undefined ***)this = &PTR_GetClass_0697a220;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0x14;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x18) = 5000;
  *(undefined4 *)(this + 0x20) = 0x41c80000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* TGConfig::TGConfig(TGConfig const&) */

void __thiscall TGConfig::TGConfig(TGConfig *this,TGConfig *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &PTR_GetClass_0697a220;
  *(undefined4 *)(this + 0x10) = uVar3;
  *(undefined4 *)(this + 0x14) = uVar5;
  *(undefined4 *)(this + 0x18) = uVar6;
  *(undefined4 *)(this + 0xc) = uVar1;
  *(undefined4 *)(this + 0x1c) = uVar2;
  *(undefined4 *)(this + 0x20) = uVar4;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x28),(vector *)(param_1 + 0x28));
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x40),(vector *)(param_1 + 0x40));
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  return;
}


/* TGConfig::~TGConfig() */

void __thiscall TGConfig::~TGConfig(TGConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0697a220;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x40));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x28));
  nop();
  return;
}


/* TGConfig::~TGConfig() */

void __thiscall TGConfig::~TGConfig(TGConfig *this)

{
  ~TGConfig(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGConfig::StaticClassInit() */

void TGConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"TGConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_04bc75e8,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TGConfig::StaticGetClass() */

long * TGConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TGConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TGConfig::GetClass() const */

long * TGConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"TGConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TGConfig::StaticNew() */

TGConfig * TGConfig::StaticNew(void)

{
  TGConfig *this;
  
  this = ::operator_new(0x60);
  TGConfig(this);
  return this;
}


/* TGConfig::TEMPNAMEPLACEHOLDERVALUE(TGConfig const&) */

TGConfig * __thiscall TGConfig::operator=(TGConfig *this,TGConfig *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0x10) = uVar5;
  *(undefined4 *)(this + 0x14) = uVar6;
  *(undefined4 *)(this + 0xc) = uVar1;
  *(undefined4 *)(this + 0x1c) = uVar2;
  *(undefined4 *)(this + 0x20) = uVar4;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x28),(vector *)(param_1 + 0x28));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x40),(vector *)(param_1 + 0x40));
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  return this;
}

