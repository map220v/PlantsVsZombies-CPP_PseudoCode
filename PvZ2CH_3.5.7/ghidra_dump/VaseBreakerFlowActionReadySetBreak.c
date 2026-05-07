// Class: VaseBreakerFlowActionReadySetBreak


/* VaseBreakerFlowActionReadySetBreak::onFinishReadySetBreak() */

void __thiscall
VaseBreakerFlowActionReadySetBreak::onFinishReadySetBreak(VaseBreakerFlowActionReadySetBreak *this)

{
  PrimeText *this_00;
  
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  RunnableAction::End((RunnableAction *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionReadySetBreak::StaticClassInit() */

void VaseBreakerFlowActionReadySetBreak::StaticClassInit(void)

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
    std::string::string(asStack_10,"VaseBreakerFlowActionReadySetBreak");
    (*pcVar2)(plVar1,asStack_10,FUN_049752a0,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerFlowActionReadySetBreak::StaticGetClass() */

long * VaseBreakerFlowActionReadySetBreak::StaticGetClass(void)

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
  uVar2 = VaseBreakerFlowAction::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerFlowActionReadySetBreak",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowActionReadySetBreak::GetClass() const */

long * VaseBreakerFlowActionReadySetBreak::GetClass(void)

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
  uVar2 = VaseBreakerFlowAction::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerFlowActionReadySetBreak",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowActionReadySetBreak::VaseBreakerFlowActionReadySetBreak() */

void __thiscall
VaseBreakerFlowActionReadySetBreak::VaseBreakerFlowActionReadySetBreak
          (VaseBreakerFlowActionReadySetBreak *this)

{
  VaseBreakerFlowAction::VaseBreakerFlowAction((VaseBreakerFlowAction *)this);
  *(undefined ***)this = &PTR_GetClass_069175c0;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionReadySetBreak_06917668;
  return;
}


/* VaseBreakerFlowActionReadySetBreak::StaticNew() */

VaseBreakerFlowActionReadySetBreak * VaseBreakerFlowActionReadySetBreak::StaticNew(void)

{
  VaseBreakerFlowActionReadySetBreak *this;
  
  this = ::operator_new(0x30);
  VaseBreakerFlowActionReadySetBreak(this);
  return this;
}


/* VaseBreakerFlowActionReadySetBreak::~VaseBreakerFlowActionReadySetBreak() */

void __thiscall
VaseBreakerFlowActionReadySetBreak::~VaseBreakerFlowActionReadySetBreak
          (VaseBreakerFlowActionReadySetBreak *this)

{
  *(undefined ***)this = &PTR_GetClass_069175c0;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionReadySetBreak_06917668;
  VaseBreakerFlowAction::~VaseBreakerFlowAction((VaseBreakerFlowAction *)this);
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionReadySetBreak::~VaseBreakerFlowActionReadySetBreak() */

void __thiscall
VaseBreakerFlowActionReadySetBreak::~VaseBreakerFlowActionReadySetBreak
          (VaseBreakerFlowActionReadySetBreak *this)

{
  ~VaseBreakerFlowActionReadySetBreak(this + -0x10);
  return;
}


/* VaseBreakerFlowActionReadySetBreak::~VaseBreakerFlowActionReadySetBreak() */

void __thiscall
VaseBreakerFlowActionReadySetBreak::~VaseBreakerFlowActionReadySetBreak
          (VaseBreakerFlowActionReadySetBreak *this)

{
  ~VaseBreakerFlowActionReadySetBreak(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionReadySetBreak::~VaseBreakerFlowActionReadySetBreak() */

void __thiscall
VaseBreakerFlowActionReadySetBreak::~VaseBreakerFlowActionReadySetBreak
          (VaseBreakerFlowActionReadySetBreak *this)

{
  ~VaseBreakerFlowActionReadySetBreak(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionReadySetBreak::onBegin() */

void VaseBreakerFlowActionReadySetBreak::onBegin(void)

{
  ResourceInfo *this;
  AnimationController *pAVar1;
  float fVar2;
  float fVar3;
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                   ((RtWeakPtr *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
  fVar2 = (float)FUN_04972878(*(undefined4 *)(this + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  fVar3 = fVar2 + 0.5 + 0.5;
  std::string::string(asStack_10,"onShowReady");
  pAVar1 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add((AnimationMgr *)this,pAVar1,fVar2);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"onShowSet");
  pAVar1 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add((AnimationMgr *)this,pAVar1,fVar2 + 0.5);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"onShowBreak");
  pAVar1 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add((AnimationMgr *)this,pAVar1,fVar3);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"onFinishReadySetBreak");
  pAVar1 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add((AnimationMgr *)this,pAVar1,fVar3 + 0.82);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to VaseBreakerFlowActionReadySetBreak::onBegin() */

void __thiscall
VaseBreakerFlowActionReadySetBreak::onBegin(VaseBreakerFlowActionReadySetBreak *this)

{
  onBegin();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionReadySetBreak::onShowReady() */

void VaseBreakerFlowActionReadySetBreak::onShowReady(void)

{
  char *pcVar1;
  Board *pBVar2;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(auStack_10,L"[WARNING_STANDARD_1]",auStack_18);
  Board::DisplayAdviceAgain(pBVar2,auStack_10,0x16,0);
  FUN_05476c50(auStack_10);
  nop();
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Game_Wave_Ready_x1");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionReadySetBreak::onShowSet() */

void VaseBreakerFlowActionReadySetBreak::onShowSet(void)

{
  char *pcVar1;
  Board *pBVar2;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(auStack_10,L"[WARNING_STANDARD_2]",auStack_18);
  Board::DisplayAdviceAgain(pBVar2,auStack_10,0x16,0);
  FUN_05476c50(auStack_10);
  nop();
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Game_Wave_Set");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionReadySetBreak::onShowBreak() */

void VaseBreakerFlowActionReadySetBreak::onShowBreak(void)

{
  char *pcVar1;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(auStack_10,L"[WARNING_BREAK]",auStack_18);
  nop();
  Board::DisplayAdviceAgain(*(Board **)(gLawnApp + 0x9f0),auStack_10,0x17,0);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Game_Wave_Plant");
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

