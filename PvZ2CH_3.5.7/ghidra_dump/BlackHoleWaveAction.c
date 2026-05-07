// Class: BlackHoleWaveAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlackHoleWaveAction::StaticClassInit() */

void BlackHoleWaveAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"BlackHoleWaveAction");
    (*pcVar2)(plVar1,asStack_10,FUN_033b2aa4,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BlackHoleWaveAction::StaticGetClass() */

long * BlackHoleWaveAction::StaticGetClass(void)

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
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"BlackHoleWaveAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BlackHoleWaveAction::~BlackHoleWaveAction() */

void __thiscall BlackHoleWaveAction::~BlackHoleWaveAction(BlackHoleWaveAction *this)

{
  *(undefined ***)this = &PTR_GetActionClass_066153c0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  WaveAction::~WaveAction((WaveAction *)this);
  return;
}


/* BlackHoleWaveAction::~BlackHoleWaveAction() */

void __thiscall BlackHoleWaveAction::~BlackHoleWaveAction(BlackHoleWaveAction *this)

{
  ~BlackHoleWaveAction(this);
  AK::FreeHook(this);
  return;
}


/* BlackHoleWaveAction::BlackHoleWaveAction() */

void __thiscall BlackHoleWaveAction::BlackHoleWaveAction(BlackHoleWaveAction *this)

{
  WaveAction::WaveAction((WaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_066153c0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  return;
}


/* BlackHoleWaveAction::StaticNew() */

BlackHoleWaveAction * BlackHoleWaveAction::StaticNew(void)

{
  BlackHoleWaveAction *this;
  
  this = ::operator_new(0x28);
  BlackHoleWaveAction(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlackHoleWaveAction::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void BlackHoleWaveAction::WaveStart(long param_1)

{
  Board *pBVar1;
  float fVar2;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  *(float *)(param_1 + 0x18) = fVar2 + 3.0;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(auStack_10,L"[WARNING_BLACK_HOLE_TIP]",auStack_18);
  Board::DisplayAdviceAgain(pBVar1,auStack_10,0x11,0);
  FUN_05476c50(auStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlackHoleWaveAction::triggerBlackHole() */

void __thiscall BlackHoleWaveAction::triggerBlackHole(BlackHoleWaveAction *this)

{
  RtMixedPtr<Sexy::Image> *this_00;
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FairyTaleWindWaveActionProps *pFVar7;
  undefined8 uVar8;
  BlackHole *pBVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  pFVar7 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if (cVar2 != '\0') {
    uVar8 = BlackHole::StaticGetClass();
    GameObject::Create(uVar8,0x27);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    pBVar9 = (BlackHole *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    std::string::string((string *)aRStack_10,"POPANIM_EFFECTS_BLACK_HOLE");
    BlackHole::InitBlackHoleEffectPam(pBVar9,aRStack_10);
    std::string::~string((string *)aRStack_10);
    nop();
  }
  pBVar9 = (BlackHole *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  iVar1 = *(int *)(pFVar7 + 0x40);
  iVar3 = BoardTransforms::GridToBoardSpaceX(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -1);
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar5 = BoardTransforms::GridToBoardSpaceY(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) / 2);
  iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)aRStack_10,(float)(iVar3 + iVar4 / 2),(float)(iVar5 - iVar6 / 2));
  BlackHole::dragPlantsToblackHoleDirection(pBVar9,iVar1,(SexyVector2 *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BlackHoleWaveAction::WaveUpdate(int, Sexy::MTRand&) */

void BlackHoleWaveAction::WaveUpdate(int param_1,MTRand *param_2)

{
  BlackHoleWaveAction *this;
  float fVar1;
  undefined4 uVar2;
  
  this = (BlackHoleWaveAction *)(ulong)(uint)param_1;
  fVar1 = (float)PVZ_T();
  if (fVar1 < *(float *)(this + 0x18)) {
    return;
  }
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x18) = uVar2;
  triggerBlackHole(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlackHoleWaveAction::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall BlackHoleWaveAction::AddResourceRequirements(BlackHoleWaveAction *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"BlackHole");
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

