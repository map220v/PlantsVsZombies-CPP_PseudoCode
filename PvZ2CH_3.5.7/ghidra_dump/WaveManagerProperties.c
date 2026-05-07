// Class: WaveManagerProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveManagerProperties::StaticClassInit() */

void WaveManagerProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"WaveManagerProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0492e168,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveManagerProperties::StaticGetClass() */

long * WaveManagerProperties::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"WaveManagerProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveManagerProperties::GetClass() const */

long * WaveManagerProperties::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"WaveManagerProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveManagerProperties::GetDescription() */

void WaveManagerProperties::GetDescription(void)

{
  long in_x0;
  
  StringHelper::ToStringValue((string *)(in_x0 + 0x70));
  return;
}


/* WaveManagerProperties::GetDescriptionName() */

void WaveManagerProperties::GetDescriptionName(void)

{
  long in_x0;
  
  StringHelper::ToStringValue((string *)(in_x0 + 0x78));
  return;
}


/* WaveManagerProperties::~WaveManagerProperties() */

void __thiscall WaveManagerProperties::~WaveManagerProperties(WaveManagerProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06911020;
  std::string::~string((string *)(this + 0x78));
  std::string::~string((string *)(this + 0x70));
  std::string::~string((string *)(this + 0x68));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x38));
  std::
  vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
  ::~vector((vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
             *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* WaveManagerProperties::~WaveManagerProperties() */

void __thiscall WaveManagerProperties::~WaveManagerProperties(WaveManagerProperties *this)

{
  ~WaveManagerProperties(this);
  AK::FreeHook(this);
  return;
}


/* WaveManagerProperties::ShallowCopyInto(WaveManagerProperties*) const */

void __thiscall
WaveManagerProperties::ShallowCopyInto(WaveManagerProperties *this,WaveManagerProperties *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  WaveManagerProperties WVar7;
  
  std::
  vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
  ::operator=((vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
               *)(param_1 + 0x10),(vector *)(this + 0x10));
  uVar1 = *(undefined4 *)(this + 0x50);
  uVar2 = *(undefined4 *)(this + 0x2c);
  uVar3 = *(undefined4 *)(this + 0x54);
  WVar7 = this[0x30];
  uVar4 = *(undefined4 *)(this + 0x5c);
  uVar5 = *(undefined4 *)(this + 0x58);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(this + 0x28);
  uVar6 = *(undefined4 *)(this + 0x60);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  param_1[0x30] = WVar7;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  *(undefined4 *)(param_1 + 0x60) = uVar6;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(param_1 + 0x38),(vector *)(this + 0x38));
  thunk_FUN_05475e00(param_1 + 0x70,this + 0x70);
  thunk_FUN_05475e00(param_1 + 0x78,this + 0x78);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveManagerProperties::WaveManagerProperties() */

void __thiscall WaveManagerProperties::WaveManagerProperties(WaveManagerProperties *this)

{
  undefined8 uVar1;
  ResourceInfo *this_00;
  RtWeakPtr aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_06911020;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = 10;
  this[0x30] = (WaveManagerProperties)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  *(undefined4 *)(this + 0x5c) = 0x40a00000;
  *(undefined4 *)(this + 0x50) = 0x3f333333;
  *(undefined4 *)(this + 0x58) = 0x41400000;
  *(undefined4 *)(this + 0x60) = 0x40a00000;
  *(undefined4 *)(this + 0x54) = 0x3f59999a;
  std::string::string((string *)(this + 0x68),"");
  nop();
  std::string::string((string *)(this + 0x70),"");
  nop();
  std::string::string((string *)(this + 0x78),"");
  nop();
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,L"DefaultWaveManagerProperties");
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar1,5,aRStack_18);
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  if (this_00 != (ResourceInfo *)0x0) {
    ShallowCopyInto((WaveManagerProperties *)this_00,this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveManagerProperties::StaticNew() */

WaveManagerProperties * WaveManagerProperties::StaticNew(void)

{
  WaveManagerProperties *this;
  
  this = ::operator_new(0x80);
  WaveManagerProperties(this);
  return this;
}

