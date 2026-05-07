// Class: PennyPerkQuickDeliveryProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkQuickDeliveryProperties::GetDescriptionForLevel(int) */

void PennyPerkQuickDeliveryProperties::GetDescriptionForLevel(int param_1)

{
  float *pfVar1;
  int in_w1;
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ToWString((string *)((ulong)(uint)param_1 + 0x20));
  if (in_w1 < 0) {
    in_w1 = 0;
  }
  pfVar1 = (float *)FUN_036be178(*(undefined8 *)((ulong)(uint)param_1 + 0x60),(long)in_w1);
  Sexy::StrFormat(L"%.2g",awStack_10,(double)*pfVar1);
  TodReplaceString(awStack_18,L"{NUMBER}",awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkQuickDeliveryProperties::StaticClassInit() */

void PennyPerkQuickDeliveryProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyPerkQuickDeliveryProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036c1b24,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkQuickDeliveryProperties::StaticGetClass() */

long * PennyPerkQuickDeliveryProperties::StaticGetClass(void)

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
  uVar2 = PennyPerkProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkQuickDeliveryProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkQuickDeliveryProperties::GetClass() const */

long * PennyPerkQuickDeliveryProperties::GetClass(void)

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
  uVar2 = PennyPerkProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkQuickDeliveryProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkQuickDeliveryProperties::PennyPerkQuickDeliveryProperties() */

void __thiscall
PennyPerkQuickDeliveryProperties::PennyPerkQuickDeliveryProperties
          (PennyPerkQuickDeliveryProperties *this)

{
  PennyPerkProperties::PennyPerkProperties((PennyPerkProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06681890;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  return;
}


/* PennyPerkQuickDeliveryProperties::StaticNew() */

PennyPerkQuickDeliveryProperties * PennyPerkQuickDeliveryProperties::StaticNew(void)

{
  PennyPerkQuickDeliveryProperties *this;
  
  this = ::operator_new(0x78);
  PennyPerkQuickDeliveryProperties(this);
  return this;
}


/* PennyPerkQuickDeliveryProperties::~PennyPerkQuickDeliveryProperties() */

void __thiscall
PennyPerkQuickDeliveryProperties::~PennyPerkQuickDeliveryProperties
          (PennyPerkQuickDeliveryProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06681890;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x60));
  PennyPerkProperties::~PennyPerkProperties((PennyPerkProperties *)this);
  return;
}


/* PennyPerkQuickDeliveryProperties::~PennyPerkQuickDeliveryProperties() */

void __thiscall
PennyPerkQuickDeliveryProperties::~PennyPerkQuickDeliveryProperties
          (PennyPerkQuickDeliveryProperties *this)

{
  ~PennyPerkQuickDeliveryProperties(this);
  AK::FreeHook(this);
  return;
}

