// Class: ArtifactMiniBoard


/* ArtifactMiniBoard::ArtifactMiniBoard() */

void __thiscall ArtifactMiniBoard::ArtifactMiniBoard(ArtifactMiniBoard *this)

{
  Board::Board((Board *)this);
  *(undefined ***)this = &PTR_GetClass_06698bd0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06698f78;
  Sexy::WidgetContainer::SetIgnoreMouseInput((WidgetContainer *)this,true);
  *(undefined4 *)(this + 0xf8) = 5;
  *(undefined4 *)(this + 0xfc) = 3;
  return;
}


/* ArtifactMiniBoard::Update() */

void __thiscall ArtifactMiniBoard::Update(ArtifactMiniBoard *this)

{
  char cVar1;
  AnimationMgr *this_00;
  
  cVar1 = FUN_037ba564(this[0x9dc]);
  if (cVar1 != '\0') {
    return;
  }
  Board::UpdateGameObjects((Board *)this);
  MessageRouter::Post((_func_void *)gMessageRouter);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x898));
  if (cVar1 == '\0') {
    Board::ProcessDeleteQueue((Board *)this);
    return;
  }
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x898));
  AnimationMgr::Update(this_00);
  Board::ProcessDeleteQueue((Board *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMiniBoard::InitBoard() */

void __thiscall ArtifactMiniBoard::InitBoard(ArtifactMiniBoard *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x898);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 == '\0') {
    AnimationMgr::Create();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    FUN_037ba558(lVar3 + 0x10);
  }
  iVar2 = *(int *)(this + 0xfc);
  *(undefined8 *)(this + 0x1c8) = 0x100000001;
  *(undefined8 *)(this + 0x1c0) = 0x100000001;
  *(undefined8 *)(this + 0x1d8) = 0x100000001;
  *(undefined8 *)(this + 0x1d0) = 0x100000001;
  *(undefined4 *)(this + 0x1e0) = 1;
  *(undefined4 *)(this + 0x1e4) = 1;
  if (iVar2 != 6) {
    *(undefined4 *)(this + 0x1d4) = 0;
  }
  iVar4 = *(int *)(this + 0xf8);
  if (0 < iVar4) {
    iVar6 = 0;
    do {
      iVar5 = 0;
      if (0 < iVar2) {
        do {
          iVar4 = iVar5 + 1;
          Board::SetGridSquareType((Board *)this,iVar6,iVar5);
          iVar2 = *(int *)(this + 0xfc);
          iVar5 = iVar4;
        } while (iVar4 < iVar2);
        iVar4 = *(int *)(this + 0xf8);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  *(undefined4 *)(this + 0x104) = 5;
  Board::EnableGridItems((Board *)this);
  Board::InitPlantGroupSystem((Board *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMiniBoard::ResetBoard() */

void __thiscall ArtifactMiniBoard::ResetBoard(ArtifactMiniBoard *this)

{
  bool bVar1;
  undefined8 uVar2;
  long *extraout_x0;
  long *extraout_x0_00;
  long *extraout_x0_01;
  long *extraout_x0_02;
  long *extraout_x0_03;
  long *extraout_x0_04;
  long *extraout_x0_05;
  long *extraout_x0_06;
  long *extraout_x0_07;
  PVZDB *pPVar3;
  RtDbTable *pRVar4;
  long *extraout_x0_08;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  int iVar5;
  int extraout_w1_03;
  int extraout_w1_04;
  int extraout_w1_05;
  int extraout_w1_06;
  int extraout_w1_07;
  int extraout_w1_08;
  int extraout_w1_09;
  int extraout_w1_10;
  int extraout_w1_11;
  int extraout_w1_12;
  int extraout_w1_13;
  int extraout_w1_14;
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x2c);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    pRVar4 = (RtDbTable *)PVZDB::GetTable(pPVar3,0x2c);
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtDbTable::GetObjectForId(pRVar4,aRStack_30);
    nop();
    Sexy::RtId::~RtId(aRStack_30);
    (**(code **)(*extraout_x0 + 0x48))(extraout_x0);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x29);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    pRVar4 = (RtDbTable *)PVZDB::GetTable(pPVar3,0x29);
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtDbTable::GetObjectForId(pRVar4,aRStack_30);
    nop();
    Sexy::RtId::~RtId(aRStack_30);
    (**(code **)(*extraout_x0_00 + 0x48))(extraout_x0_00);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1_00);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x2f);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    pRVar4 = (RtDbTable *)PVZDB::GetTable(pPVar3,0x2f);
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtDbTable::GetObjectForId(pRVar4,aRStack_30);
    nop();
    Sexy::RtId::~RtId(aRStack_30);
    iVar5 = extraout_w1_01;
    if (extraout_x0_01 != (long *)0x0) {
      (**(code **)(*extraout_x0_01 + 0x48))(extraout_x0_01);
      iVar5 = extraout_w1_02;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar5);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x2b);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    pRVar4 = (RtDbTable *)PVZDB::GetTable(pPVar3,0x2b);
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtDbTable::GetObjectForId(pRVar4,aRStack_30);
    nop();
    Sexy::RtId::~RtId(aRStack_30);
    (**(code **)(*extraout_x0_02 + 0x48))(extraout_x0_02);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1_03);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x2e);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    pRVar4 = (RtDbTable *)PVZDB::GetTable(pPVar3,0x2e);
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtDbTable::GetObjectForId(pRVar4,aRStack_30);
    nop();
    Sexy::RtId::~RtId(aRStack_30);
    (**(code **)(*extraout_x0_03 + 0x48))(extraout_x0_03);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1_04);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x28);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    pRVar4 = (RtDbTable *)PVZDB::GetTable(pPVar3,0x28);
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtDbTable::GetObjectForId(pRVar4,aRStack_30);
    nop();
    Sexy::RtId::~RtId(aRStack_30);
    iVar5 = extraout_w1_05;
    if (extraout_x0_04 != (long *)0x0) {
      (**(code **)(*extraout_x0_04 + 0x48))(extraout_x0_04);
      iVar5 = extraout_w1_06;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar5);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x30);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    pRVar4 = (RtDbTable *)PVZDB::GetTable(pPVar3,0x30);
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtDbTable::GetObjectForId(pRVar4,aRStack_30);
    nop();
    Sexy::RtId::~RtId(aRStack_30);
    iVar5 = extraout_w1_07;
    if (extraout_x0_05 != (long *)0x0) {
      (**(code **)(*extraout_x0_05 + 0x48))(extraout_x0_05);
      iVar5 = extraout_w1_08;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar5);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x2a);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    pRVar4 = (RtDbTable *)PVZDB::GetTable(pPVar3,0x2a);
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtDbTable::GetObjectForId(pRVar4,aRStack_30);
    nop();
    Sexy::RtId::~RtId(aRStack_30);
    iVar5 = extraout_w1_09;
    if (extraout_x0_06 != (long *)0x0) {
      (**(code **)(*extraout_x0_06 + 0x48))(extraout_x0_06);
      iVar5 = extraout_w1_10;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar5);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x31);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    pRVar4 = (RtDbTable *)PVZDB::GetTable(pPVar3,0x31);
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtDbTable::GetObjectForId(pRVar4,aRStack_30);
    nop();
    Sexy::RtId::~RtId(aRStack_30);
    iVar5 = extraout_w1_11;
    if (extraout_x0_07 != (long *)0x0) {
      (**(code **)(*extraout_x0_07 + 0x48))(extraout_x0_07);
      iVar5 = extraout_w1_12;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar5);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x87);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    pRVar4 = (RtDbTable *)PVZDB::GetTable(pPVar3,0x87);
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtDbTable::GetObjectForId(pRVar4,aRStack_30);
    nop();
    Sexy::RtId::~RtId(aRStack_30);
    iVar5 = extraout_w1_13;
    if (extraout_x0_08 != (long *)0x0) {
      (**(code **)(*extraout_x0_08 + 0x48))(extraout_x0_08);
      iVar5 = extraout_w1_14;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar5);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  Board::ClearZombie((Board *)this);
  FUN_037ba810(this + 0xc98);
  MessageRouter::Post((_func_void *)gMessageRouter);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactMiniBoard::~ArtifactMiniBoard() */

void __thiscall ArtifactMiniBoard::~ArtifactMiniBoard(ArtifactMiniBoard *this)

{
  *(undefined ***)this = &PTR_GetClass_06698bd0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06698f78;
  ResetBoard(this);
  Board::~Board((Board *)this);
  return;
}


/* ArtifactMiniBoard::~ArtifactMiniBoard() */

void __thiscall ArtifactMiniBoard::~ArtifactMiniBoard(ArtifactMiniBoard *this)

{
  ~ArtifactMiniBoard(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMiniBoard::Draw(Sexy::Graphics*) */

void __thiscall ArtifactMiniBoard::Draw(ArtifactMiniBoard *this,Graphics *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long *extraout_x0;
  long *extraout_x0_00;
  long *extraout_x0_01;
  StandaloneEffect *this_00;
  long *extraout_x0_02;
  StandaloneEffect *this_01;
  long *extraout_x0_03;
  long *plVar3;
  vector *pvVar4;
  MatrixPusher *this_02;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  int extraout_w1_03;
  int extraout_w1_04;
  int extraout_w1_05;
  int extraout_w1_06;
  int extraout_w1_07;
  RtWeakPtr<Sexy::SoundResource> aRStack_b0 [8];
  RtId aRStack_a8 [8];
  Insets aIStack_a0 [16];
  RenderQueue aRStack_90 [32];
  RenderQueue aRStack_70 [32];
  Iterator aIStack_50 [32];
  SexyMatrix3 aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x104) != 10) {
    Sexy::Insets::Insets(aIStack_a0,(Insets *)(param_1 + 0x28));
    Sexy::Graphics::ClearClipRect(param_1);
    RenderQueue::RenderQueue(aRStack_90,0x1000);
    RenderQueue::RenderQueue(aRStack_70,0x100);
    uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_50,uVar2,0x2c);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_50), bVar1) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_50);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_b0,(RtWeakPtrBase *)aRStack_a8);
      Sexy::RtId::~RtId(aRStack_a8);
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
      (**(code **)(*plVar3 + 0x88))(plVar3,aRStack_90);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
      Sexy::RtDbTable::Iterator::operator++(aIStack_50,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_50);
    uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_50,uVar2,0x29);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_50), bVar1) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_50);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_b0,(RtWeakPtrBase *)aRStack_a8);
      Sexy::RtId::~RtId(aRStack_a8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
      nop();
      (**(code **)(*extraout_x0 + 0x88))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
      Sexy::RtDbTable::Iterator::operator++(aIStack_50,extraout_w1_00);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_50);
    uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_50,uVar2,0x2b);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_50), bVar1) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_50);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_b0,(RtWeakPtrBase *)aRStack_a8);
      Sexy::RtId::~RtId(aRStack_a8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
      nop();
      (**(code **)(*extraout_x0_00 + 0x88))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
      Sexy::RtDbTable::Iterator::operator++(aIStack_50,extraout_w1_01);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_50);
    uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_50,uVar2,0x28);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_50), bVar1) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_50);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_b0,(RtWeakPtrBase *)aRStack_a8);
      Sexy::RtId::~RtId(aRStack_a8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
      nop();
      (**(code **)(*extraout_x0_01 + 0x88))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
      Sexy::RtDbTable::Iterator::operator++(aIStack_50,extraout_w1_02);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_50);
    uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_50,uVar2,0x30);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_50), bVar1) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_50);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_b0,(RtWeakPtrBase *)aRStack_a8);
      Sexy::RtId::~RtId(aRStack_a8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
      nop();
      StandaloneEffect::AddToRenderQueue(this_00,aRStack_90);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
      Sexy::RtDbTable::Iterator::operator++(aIStack_50,extraout_w1_03);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_50);
    uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_50,uVar2,0x2f);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_50), bVar1) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_50);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_b0,(RtWeakPtrBase *)aRStack_a8);
      Sexy::RtId::~RtId(aRStack_a8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
      nop();
      (**(code **)(*extraout_x0_02 + 0x88))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
      Sexy::RtDbTable::Iterator::operator++(aIStack_50,extraout_w1_04);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_50);
    uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_50,uVar2,0x31);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_50), bVar1) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_50);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_b0,(RtWeakPtrBase *)aRStack_a8);
      Sexy::RtId::~RtId(aRStack_a8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
      nop();
      StandaloneEffect::AddToRenderQueue(this_01,aRStack_90);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
      Sexy::RtDbTable::Iterator::operator++(aIStack_50,extraout_w1_05);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_50);
    uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_50,uVar2,0x2a);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_50), bVar1) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_50);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_b0,(RtWeakPtrBase *)aRStack_a8);
      Sexy::RtId::~RtId(aRStack_a8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
      nop();
      (**(code **)(*extraout_x0_03 + 0x88))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
      Sexy::RtDbTable::Iterator::operator++(aIStack_50,extraout_w1_06);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_50);
    uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_50,uVar2,0x2e);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_50), bVar1) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_50);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_b0,(RtWeakPtrBase *)aRStack_a8);
      Sexy::RtId::~RtId(aRStack_a8);
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
      (**(code **)(*plVar3 + 0x88))(plVar3,aRStack_90);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
      Sexy::RtDbTable::Iterator::operator++(aIStack_50,extraout_w1_07);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_50);
    pvVar4 = (vector *)RenderQueue::GetSortedQueue(aRStack_90);
    this_02 = (MatrixPusher *)RenderQueue::GetSortedQueue(aRStack_70);
    MatrixPusher::CalcTransformMatrix(this_02,1.0,1.0,1.0);
    Board::DrawRenderQueuesInterleaved(pvVar4,(vector *)this_02,aSStack_30,param_1);
    Sexy::OutputDebugStrF((wchar_t *)"end draw");
    Sexy::Graphics::SetClipRect(param_1,(TRect *)aIStack_a0);
    RenderQueue::~RenderQueue(aRStack_70);
    RenderQueue::~RenderQueue(aRStack_90);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

