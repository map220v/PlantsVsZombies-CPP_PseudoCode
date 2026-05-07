// Class: PennyPerkMoreScoreProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkMoreScoreProperties::GetDescriptionForLevel(int) */

void PennyPerkMoreScoreProperties::GetDescriptionForLevel(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  undefined8 uVar3;
  ulong extraout_x0;
  int in_w1;
  float fVar4;
  string asStack_190 [8];
  wstring awStack_188 [8];
  wstring awStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  if (in_w1 < 0) {
    in_w1 = 0;
  }
  local_8 = ___stack_chk_guard;
  pfVar2 = (float *)FUN_036be178(*(undefined8 *)((ulong)(uint)param_1 + 0x60),(long)in_w1);
  fVar4 = *pfVar2;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  uVar3 = FUN_0545f9fc(auStack_168,std::fixed);
  nop();
  FUN_0545feec(uVar3,extraout_x0 & 0xffffffff);
  FUN_05460f98((fVar4 + -1.0) * 100.0);
  FUN_05462824(asStack_190,auStack_178);
  Sexy::ToWString((string *)((ulong)(uint)param_1 + 0x20));
  Sexy::ToWString(asStack_190);
  TodReplaceString(awStack_188,L"{NUMBER}",awStack_180);
  FUN_05476c50(awStack_180);
  FUN_05476c50(awStack_188);
  std::string::~string(asStack_190);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkMoreScoreProperties::StaticClassInit() */

void PennyPerkMoreScoreProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyPerkMoreScoreProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036c19c0,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkMoreScoreProperties::StaticGetClass() */

long * PennyPerkMoreScoreProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PennyPerkMoreScoreProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkMoreScoreProperties::GetClass() const */

long * PennyPerkMoreScoreProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PennyPerkMoreScoreProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkMoreScoreProperties::PennyPerkMoreScoreProperties() */

void __thiscall
PennyPerkMoreScoreProperties::PennyPerkMoreScoreProperties(PennyPerkMoreScoreProperties *this)

{
  PennyPerkProperties::PennyPerkProperties((PennyPerkProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06681220;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  return;
}


/* PennyPerkMoreScoreProperties::StaticNew() */

PennyPerkMoreScoreProperties * PennyPerkMoreScoreProperties::StaticNew(void)

{
  PennyPerkMoreScoreProperties *this;
  
  this = ::operator_new(0x78);
  PennyPerkMoreScoreProperties(this);
  return this;
}


/* PennyPerkMoreScoreProperties::~PennyPerkMoreScoreProperties() */

void __thiscall
PennyPerkMoreScoreProperties::~PennyPerkMoreScoreProperties(PennyPerkMoreScoreProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06681220;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x60));
  PennyPerkProperties::~PennyPerkProperties((PennyPerkProperties *)this);
  return;
}


/* PennyPerkMoreScoreProperties::~PennyPerkMoreScoreProperties() */

void __thiscall
PennyPerkMoreScoreProperties::~PennyPerkMoreScoreProperties(PennyPerkMoreScoreProperties *this)

{
  ~PennyPerkMoreScoreProperties(this);
  AK::FreeHook(this);
  return;
}

