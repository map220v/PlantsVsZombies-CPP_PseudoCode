// Class: TentAnimRig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TentAnimRig::StaticClassInit() */

void TentAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"TentAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_047d0a5c,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TentAnimRig::StaticGetClass() */

long * TentAnimRig::StaticGetClass(void)

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
  uVar2 = GravestoneAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"TentAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TentAnimRig::GetClass() const */

long * TentAnimRig::GetClass(void)

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
  uVar2 = GravestoneAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"TentAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TentAnimRig::~TentAnimRig() */

void __thiscall TentAnimRig::~TentAnimRig(TentAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_068e7730;
  *(undefined ***)(this + 0x10) = &PTR__TentAnimRig_068e7858;
  GravestoneAnimRig::~GravestoneAnimRig((GravestoneAnimRig *)this);
  return;
}


/* non-virtual thunk to TentAnimRig::~TentAnimRig() */

void __thiscall TentAnimRig::~TentAnimRig(TentAnimRig *this)

{
  ~TentAnimRig(this + -0x10);
  return;
}


/* TentAnimRig::~TentAnimRig() */

void __thiscall TentAnimRig::~TentAnimRig(TentAnimRig *this)

{
  ~TentAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TentAnimRig::~TentAnimRig() */

void __thiscall TentAnimRig::~TentAnimRig(TentAnimRig *this)

{
  ~TentAnimRig(this + -0x10);
  return;
}


/* TentAnimRig::TentAnimRig() */

void __thiscall TentAnimRig::TentAnimRig(TentAnimRig *this)

{
  GravestoneAnimRig::GravestoneAnimRig((GravestoneAnimRig *)this);
  this[0x20d] = (TentAnimRig)0x0;
  this[0x20e] = (TentAnimRig)0x0;
  *(undefined ***)this = &PTR_GetClass_068e7730;
  *(undefined ***)(this + 0x10) = &PTR__TentAnimRig_068e7858;
  return;
}


/* TentAnimRig::StaticNew() */

TentAnimRig * TentAnimRig::StaticNew(void)

{
  TentAnimRig *this;
  
  this = ::operator_new(0x210);
  TentAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TentAnimRig::SetDamageState(int, bool) */

void TentAnimRig::SetDamageState(int param_1,bool param_2)

{
  undefined8 uVar1;
  int iVar2;
  PopAnimRig *this;
  string *psVar3;
  ulong uVar4;
  ulong uVar5;
  string asStack_40 [8];
  DummyInit aDStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this = (PopAnimRig *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if ((DAT_06b26f10 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_06b26f10);
    if (iVar2 != 0) {
      std::string::string((string *)aDStack_38,"tent_full");
      std::string::string(asStack_30,"tent_full_damage_1");
      std::string::string(asStack_28,"tent_full_damage_2");
      psVar3 = (string *)&local_8;
      std::string::string(asStack_20,"tent_full_damage_3");
      std::string::string(asStack_18,"tent_full_damage_4");
      std::string::string(asStack_10,"tent_full_damage_5");
      std::vector<std::string,std::allocator<std::string>>::vector
                ((vector<std::string,std::allocator<std::string>> *)&DAT_06b26da8,
                 (string *)aDStack_38,6,asStack_40);
      __cxa_guard_release(&DAT_06b26f10);
      __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b26da8,
                   &DAT_06a88000);
      do {
        psVar3 = psVar3 + -8;
        std::string::~string(psVar3);
      } while (psVar3 != (string *)aDStack_38);
      nop();
      nop();
      nop();
      nop();
      nop();
      nop();
    }
  }
  for (uVar5 = 0; uVar1 = DAT_06b26da8, uVar4 = FUN_047cfaa4(DAT_06b26da8,DAT_06b26db0),
      uVar5 < uVar4; uVar5 = uVar5 + 1) {
    psVar3 = (string *)FUN_047cfab0(uVar1,uVar5);
    PopAnimRig::SetLayerVisibility(this,psVar3,(uint)param_2 == (uint)uVar5);
  }
  if (this[0x20d] == (PopAnimRig)0x0) {
    std::string::string(asStack_40,"idle");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  }
  else {
    std::string::string(asStack_40,"intro");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  }
  PopAnimRig::PlayAndStop(this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

