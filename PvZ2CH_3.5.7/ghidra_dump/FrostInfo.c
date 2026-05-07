// Class: FrostInfo


/* FrostInfo::~FrostInfo() */

void __thiscall FrostInfo::~FrostInfo(FrostInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_0675b210;
  nop();
  return;
}


/* FrostInfo::~FrostInfo() */

void __thiscall FrostInfo::~FrostInfo(FrostInfo *this)

{
  ~FrostInfo(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FrostInfo::StaticClassInit() */

void FrostInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"FrostInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_03c8fd20,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FrostInfo::StaticGetClass() */

long * FrostInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FrostInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FrostInfo::GetClass() const */

long * FrostInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"FrostInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FrostInfo::GetCurrentStage() */

int __thiscall FrostInfo::GetCurrentStage(FrostInfo *this)

{
  return (int)(*(float *)(this + 8) * 0.01);
}


/* FrostInfo::AddFrost(int) */

undefined8 __thiscall FrostInfo::AddFrost(FrostInfo *this,int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = GetCurrentStage(this);
  fVar3 = *(float *)(this + 8);
  iVar2 = (int)(fVar3 - (float)(iVar1 * 100));
  if (param_1 < 1) {
    iVar2 = iVar2 + param_1;
    if (iVar2 < 1) {
      iVar1 = iVar1 - (100 - iVar2) / 100;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      *(float *)(this + 8) = (float)(iVar1 * 100 + 0x32);
      return 1;
    }
    fVar3 = (float)param_1 + fVar3;
    if (fVar3 < 50.0) {
      *(undefined4 *)(this + 8) = 0x42480000;
      return 0;
    }
  }
  else {
    iVar2 = iVar2 + param_1;
    if (99 < iVar2) {
      iVar1 = iVar1 + iVar2 / 100;
      if (3 < iVar1) {
        iVar1 = 3;
      }
      *(float *)(this + 8) = (float)(iVar1 * 100 + 0x32);
      return 1;
    }
    fVar3 = (float)param_1 + fVar3;
    if (350.0 < fVar3) {
      *(undefined4 *)(this + 8) = 0x43af0000;
      return 0;
    }
  }
  *(float *)(this + 8) = fVar3;
  return 0;
}


/* FrostInfo::Clear() */

void __thiscall FrostInfo::Clear(FrostInfo *this)

{
  *(undefined4 *)(this + 8) = 0;
  return;
}


/* FrostInfo::FrostInfo() */

void __thiscall FrostInfo::FrostInfo(FrostInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0675b210;
  Clear(this);
  return;
}


/* FrostInfo::StaticNew() */

FrostInfo * FrostInfo::StaticNew(void)

{
  FrostInfo *this;
  
  this = ::operator_new(0x10);
  FrostInfo(this);
  return this;
}

