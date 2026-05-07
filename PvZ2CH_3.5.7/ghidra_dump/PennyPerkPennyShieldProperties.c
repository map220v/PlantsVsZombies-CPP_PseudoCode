// Class: PennyPerkPennyShieldProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkPennyShieldProperties::GetDescriptionForLevel(int) */

void PennyPerkPennyShieldProperties::GetDescriptionForLevel(int param_1)

{
  ulong uVar1;
  float *pfVar2;
  uint *puVar3;
  int in_w1;
  long lVar4;
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  uVar1 = (ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  Sexy::ToWString((string *)(uVar1 + 0x20));
  if (in_w1 < 0) {
    in_w1 = 0;
  }
  lVar4 = (long)in_w1;
  pfVar2 = (float *)FUN_036c6f60(*(undefined8 *)(uVar1 + 0x60),lVar4);
  Sexy::StrFormat(L"%d",awStack_10,(ulong)(uint)(int)*pfVar2);
  TodReplaceString(awStack_18,L"{TIME}",awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  puVar3 = (uint *)FUN_036c6f68(*(undefined8 *)(uVar1 + 0x78),lVar4);
  Sexy::StrFormat(L"%d",awStack_10,(ulong)*puVar3);
  TodReplaceString(awStack_20,L"{HEALTH}",awStack_10);
  FUN_05476c50(awStack_10);
  puVar3 = (uint *)FUN_036c6f68(*(undefined8 *)(uVar1 + 0xa8),lVar4);
  Sexy::StrFormat(L"%d",awStack_10,(ulong)*puVar3);
  TodReplaceString(awStack_18,L"{NUMBER}",awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkPennyShieldProperties::StaticClassInit() */

void PennyPerkPennyShieldProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyPerkPennyShieldProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036c7568,0xc0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkPennyShieldProperties::StaticGetClass() */

long * PennyPerkPennyShieldProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PennyPerkPennyShieldProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkPennyShieldProperties::GetClass() const */

long * PennyPerkPennyShieldProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PennyPerkPennyShieldProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkPennyShieldProperties::PennyPerkPennyShieldProperties() */

void __thiscall
PennyPerkPennyShieldProperties::PennyPerkPennyShieldProperties(PennyPerkPennyShieldProperties *this)

{
  PennyPerkProperties::PennyPerkProperties((PennyPerkProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06681d10;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x90));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa8));
  return;
}


/* PennyPerkPennyShieldProperties::StaticNew() */

PennyPerkPennyShieldProperties * PennyPerkPennyShieldProperties::StaticNew(void)

{
  PennyPerkPennyShieldProperties *this;
  
  this = ::operator_new(0xc0);
  PennyPerkPennyShieldProperties(this);
  return this;
}


/* PennyPerkPennyShieldProperties::~PennyPerkPennyShieldProperties() */

void __thiscall
PennyPerkPennyShieldProperties::~PennyPerkPennyShieldProperties
          (PennyPerkPennyShieldProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06681d10;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xa8));
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::~vector((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
             *)(this + 0x90));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x78));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x60));
  PennyPerkProperties::~PennyPerkProperties((PennyPerkProperties *)this);
  return;
}


/* PennyPerkPennyShieldProperties::~PennyPerkPennyShieldProperties() */

void __thiscall
PennyPerkPennyShieldProperties::~PennyPerkPennyShieldProperties
          (PennyPerkPennyShieldProperties *this)

{
  ~PennyPerkPennyShieldProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkPennyShieldProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
PennyPerkPennyShieldProperties::GatherResourceRequirements
          (PennyPerkPennyShieldProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"PlantHolonut");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

