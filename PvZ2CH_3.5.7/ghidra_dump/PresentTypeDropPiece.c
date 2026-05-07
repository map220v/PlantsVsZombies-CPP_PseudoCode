// Class: PresentTypeDropPiece


/* PresentTypeDropPiece::~PresentTypeDropPiece() */

void __thiscall PresentTypeDropPiece::~PresentTypeDropPiece(PresentTypeDropPiece *this)

{
  *(undefined ***)this = &PTR_GetClass_06833780;
  std::string::~string((string *)(this + 0x30));
  PresentType::~PresentType((PresentType *)this);
  return;
}


/* PresentTypeDropPiece::~PresentTypeDropPiece() */

void __thiscall PresentTypeDropPiece::~PresentTypeDropPiece(PresentTypeDropPiece *this)

{
  ~PresentTypeDropPiece(this);
  AK::FreeHook(this);
  return;
}


/* PresentTypeDropPiece::PresentTypeDropPiece() */

void __thiscall PresentTypeDropPiece::PresentTypeDropPiece(PresentTypeDropPiece *this)

{
  PresentType::PresentType((PresentType *)this);
  *(undefined ***)this = &PTR_GetClass_06833780;
  Set8BytesTo0(this + 0x30);
  *(undefined4 *)(this + 0x38) = 1;
  return;
}


/* PresentTypeDropPiece::StaticNew() */

PresentTypeDropPiece * PresentTypeDropPiece::StaticNew(void)

{
  PresentTypeDropPiece *this;
  
  this = ::operator_new(0x40);
  PresentTypeDropPiece(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PresentTypeDropPiece::StaticClassInit() */

void PresentTypeDropPiece::StaticClassInit(void)

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
    std::string::string(asStack_10,"PresentTypeDropPiece");
    (*pcVar2)(plVar1,asStack_10,FUN_0431e658,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PresentTypeDropPiece::StaticGetClass() */

long * PresentTypeDropPiece::StaticGetClass(void)

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
  uVar2 = PresentType::StaticGetClass();
  (*pcVar3)(plVar1,"PresentTypeDropPiece",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PresentTypeDropPiece::GetClass() const */

long * PresentTypeDropPiece::GetClass(void)

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
  uVar2 = PresentType::StaticGetClass();
  (*pcVar3)(plVar1,"PresentTypeDropPiece",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PresentTypeDropPiece::AwardPresent() const */

void __thiscall PresentTypeDropPiece::AwardPresent(PresentTypeDropPiece *this)

{
  ProfileMgr *this_00;
  string *psVar1;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  psVar1 = (string *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::AddPlantPieceCount(psVar1,(int)this + 0x30,SUB41(*(undefined4 *)(this + 0x38),0));
  return;
}

