// Class: ArtifactArcadeSubSystem


/* ArtifactArcadeSubSystem::cancelTouch() */

void ArtifactArcadeSubSystem::cancelTouch(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactArcadeSubSystem::~ArtifactArcadeSubSystem() */

void __thiscall ArtifactArcadeSubSystem::~ArtifactArcadeSubSystem(ArtifactArcadeSubSystem *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06699650;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Artifact");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Num");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactArcadeSubSystem::~ArtifactArcadeSubSystem() */

void __thiscall ArtifactArcadeSubSystem::~ArtifactArcadeSubSystem(ArtifactArcadeSubSystem *this)

{
  ~ArtifactArcadeSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactArcadeSubSystem::StaticClassInit() */

void ArtifactArcadeSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactArcadeSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_037bf010,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactArcadeSubSystem::StaticGetClass() */

long * ArtifactArcadeSubSystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactArcadeSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactArcadeSubSystem::GetClass() const */

long * ArtifactArcadeSubSystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactArcadeSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactArcadeSubSystem::ArtifactArcadeSubSystem() */

void __thiscall ArtifactArcadeSubSystem::ArtifactArcadeSubSystem(ArtifactArcadeSubSystem *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR_GetClass_06699650;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x1c] = (ArtifactArcadeSubSystem)0x0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Artifact");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Num");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactArcadeSubSystem::StaticNew() */

ArtifactArcadeSubSystem * ArtifactArcadeSubSystem::StaticNew(void)

{
  ArtifactArcadeSubSystem *this;
  
  this = ::operator_new(0x28);
  ArtifactArcadeSubSystem(this);
  return this;
}


/* ArtifactArcadeSubSystem::ResetScale() */

void __thiscall ArtifactArcadeSubSystem::ResetScale(ArtifactArcadeSubSystem *this)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  uVar2 = FUN_037bebb4(*(undefined4 *)(lVar1 + 0x38));
  *(undefined4 *)(this + 0x24) = uVar2;
  return;
}


/* ArtifactArcadeSubSystem::handleTouch(Sexy::Touch const&) */

undefined8 __thiscall
ArtifactArcadeSubSystem::handleTouch(ArtifactArcadeSubSystem *this,Touch *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x30) == 3) && (*(int *)(this + 0x18) == 2)) {
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
    ResetScale(this);
    uVar1 = 1;
  }
  return uVar1;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x037bf748 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ArtifactArcadeSubSystem::GetScale() */

void __thiscall ArtifactArcadeSubSystem::GetScale(ArtifactArcadeSubSystem *this)

{
  long lVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  fVar2 = (float)FUN_037bebb4(*(undefined4 *)(lVar1 + 0x38));
  if (*(float *)(this + 0x24) < fVar2) {
    lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    fVar2 = (float)FUN_037bebb4(*(undefined4 *)(lVar1 + 0x38));
    fVar4 = *(float *)(this + 0x24);
    if (fVar2 < fVar4 + 0.2) {
      lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
      auVar3 = FUN_037bebb4(*(undefined4 *)(lVar1 + 0x38));
      local_10 = 0x3f800000;
      local_c = 0x3fc00000;
      fVar2 = CurveLerp<float>(auVar3,fVar4 + 0.2,auVar3._0_4_,&local_10,&local_c,4);
      goto LAB_037bf6cc;
    }
  }
  lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  fVar2 = (float)FUN_037bebb4(*(undefined4 *)(lVar1 + 0x38));
  if (*(float *)(this + 0x24) + 0.2 <= fVar2) {
    lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    fVar2 = (float)FUN_037bebb4(*(undefined4 *)(lVar1 + 0x38));
    fVar4 = *(float *)(this + 0x24);
    if (fVar2 < fVar4 + 0.4) {
      lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
      auVar3 = FUN_037bebb4(*(undefined4 *)(lVar1 + 0x38));
      local_10 = 0x3fc00000;
      local_c = 0x3f800000;
      fVar2 = CurveLerp<float>(auVar3,fVar4 + 0.4,auVar3._0_4_,&local_10,&local_c,4);
      goto LAB_037bf6cc;
    }
  }
  fVar2 = 1.0;
LAB_037bf6cc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactArcadeSubSystem::AddToRenderQueue(RenderQueue*) */

void __thiscall
ArtifactArcadeSubSystem::AddToRenderQueue(ArtifactArcadeSubSystem *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x18) == 2) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onDrawSelectionOnBoard);
    Sexy::Delegate1<Sexy::Graphics*>::
    Delegate1<ArtifactArcadeSubSystem,void(ArtifactArcadeSubSystem::*)(Sexy::Graphics*)>
              (aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,399999,aDStack_38);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onDrawEffectUIOnBoard);
    Sexy::Delegate1<Sexy::Graphics*>::
    Delegate1<ArtifactArcadeSubSystem,void(ArtifactArcadeSubSystem::*)(Sexy::Graphics*)>
              (aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,0xaae61,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactArcadeSubSystem::onDrawEffectUIOnBoard(Sexy::Graphics*) */

void __thiscall
ArtifactArcadeSubSystem::onDrawEffectUIOnBoard(ArtifactArcadeSubSystem *this,Graphics *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Image *pIVar7;
  long lVar8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  undefined8 local_28;
  undefined8 local_20;
  Insets local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::GetGridBoundingRect();
  this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0dd8;
  iVar2 = FUN_037bedb0(local_28 & 0xffffffff);
  iVar3 = FUN_037bedb0(local_28._4_4_);
  iVar4 = FUN_037bedb0(local_20 & 0xffffffff);
  iVar5 = FUN_037bedb0(local_20._4_4_);
  Sexy::Insets::Insets(local_18,iVar2,iVar3,iVar4,iVar5);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0fc0);
  local_28._0_4_ = (int)local_18._0_8_;
  local_20._0_4_ = (int)local_18._8_8_;
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0fc0);
  iVar2 = *(int *)(lVar8 + 0x38);
  iVar3 = FUN_037bedc4(0x1e);
  local_20._4_4_ = SUB84(local_18._8_8_,4);
  local_28._4_4_ = SUB84(local_18._0_8_,4);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0dd8);
  Sexy::Graphics::DrawImage
            (param_1,pIVar7,(((int)local_28 + (int)local_20 / 2) - iVar2 / 2) - iVar3,
             (local_28._4_4_ + local_20._4_4_ / 2) - *(int *)(lVar8 + 0x3c));
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0ef8);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0fc0);
  iVar2 = *(int *)(lVar8 + 0x38);
  iVar5 = FUN_037bedc4(0x1e);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0ef8);
  iVar3 = *(int *)(lVar8 + 0x38);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0dd8);
  iVar4 = *(int *)(lVar8 + 0x3c);
  iVar6 = FUN_037bedc4(0x28);
  Sexy::Graphics::DrawImage
            (param_1,pIVar7,(((int)local_28 + (int)local_20 / 2 + iVar2 / 2) - iVar5) - iVar3,
             ((local_28._4_4_ + local_20._4_4_ / 2) - iVar4 / 2) - iVar6);
  uVar1 = *(undefined4 *)(this + 0x10);
  iVar3 = FUN_037bedc4(0x35);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0dd8);
  iVar2 = *(int *)(lVar8 + 0x3c);
  iVar4 = FUN_037bedc4(0xe);
  Sexy::Point::Point((Point *)local_18,((int)local_28 + (int)local_20 / 2) - iVar3,
                     ((local_28._4_4_ + local_20._4_4_ / 2) - iVar2 / 2) - iVar4);
  GetScale(this);
  FUN_037bf9f8(param_1,uVar1,local_18);
  if (this[0x1c] != (ArtifactArcadeSubSystem)0x0) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0e28;
  }
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0dd8);
  iVar2 = *(int *)(lVar8 + 0x38);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0dd8);
  iVar3 = *(int *)(lVar8 + 0x3c);
  iVar5 = FUN_037bedc4(10);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0dd8);
  iVar4 = *(int *)(lVar8 + 0x38);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0dd8);
  Sexy::Graphics::DrawImage
            (param_1,pIVar7,((int)local_28 + (int)local_20 / 2) - iVar2 / 2,
             ((local_28._4_4_ + local_20._4_4_) - iVar3) - iVar5,(int)((float)iVar4 * 0.7),
             (int)((float)*(int *)(lVar8 + 0x3c) * 0.7));
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactArcadeSubSystem::registerHandTouchEvents() */

void __thiscall ArtifactArcadeSubSystem::registerHandTouchEvents(ArtifactArcadeSubSystem *this)

{
  Board *pBVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<ArtifactArcadeSubSystem,bool(ArtifactArcadeSubSystem::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<ArtifactArcadeSubSystem,void(ArtifactArcadeSubSystem::*)()>
            (aDStack_38,aCStack_80);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,0xb,a_Stack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactArcadeSubSystem::onDrawSelectionOnBoard(Sexy::Graphics*) */

void __thiscall
ArtifactArcadeSubSystem::onDrawSelectionOnBoard(ArtifactArcadeSubSystem *this,Graphics *param_1)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  long lVar12;
  TPoint *pTVar13;
  Point *pPVar14;
  LotteryResultProgressBar *pLVar15;
  SalesProgressBar *pSVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  int local_a0;
  int local_9c;
  Point aPStack_98 [8];
  Point aPStack_90 [8];
  Point aPStack_88 [8];
  Point aPStack_80 [8];
  Point aPStack_78 [8];
  Point aPStack_70 [8];
  Point aPStack_68 [8];
  float local_60 [2];
  undefined8 local_58;
  undefined8 local_50;
  Insets aIStack_48 [16];
  float local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  int local_20;
  int iStack_1c;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::GetGridBoundingRect();
  iVar3 = FUN_037bedb0(local_58 & 0xffffffff);
  iVar4 = FUN_037bedb0(local_58._4_4_);
  iVar5 = FUN_037bedb0(local_50 & 0xffffffff);
  iVar6 = FUN_037bedb0(local_50._4_4_);
  Sexy::Insets::Insets((Insets *)&local_20,iVar3,iVar4,iVar5,iVar6);
  local_58._0_4_ = local_20;
  local_58._4_4_ = iStack_1c;
  local_50 = local_18;
  Sexy::Insets::Insets(aIStack_48,0xff,0x91,0xfa,0x7d);
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) == '\0') {
    Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)&local_38,param_1);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_48);
    iVar3 = (int)local_58;
    pLVar15 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0fe8);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
    iVar4 = local_58._4_4_;
    pSVar16 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0f68);
    iVar8 = SalesProgressBar::GetCurrentLevel(pSVar16);
    iVar5 = (int)local_50;
    pLVar15 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0fe8);
    iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
    iVar6 = local_50._4_4_;
    pSVar16 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0f68);
    iVar10 = SalesProgressBar::GetCurrentLevel(pSVar16);
    Sexy::Insets::Insets
              ((Insets *)&local_20,iVar3 - iVar7,iVar4 - iVar8,iVar5 + iVar9 * 2,iVar6 + iVar10 * 2)
    ;
    uVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0e80);
    uVar18 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0f68);
    uVar19 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0ea8);
    uVar20 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0fe8);
    uVar21 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0e50);
    uVar22 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0f30);
    uVar23 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0ed0);
    uVar24 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0e00);
    Draw9Slice(param_1,(Insets *)&local_20,uVar17,uVar18,uVar19,uVar20,0,uVar21,uVar22,uVar23,uVar24
              );
    Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)&local_38);
    local_38 = *(float *)(this + 0x14) * 0.2;
    local_20 = 0;
    pfVar11 = eastl::max_alt<float>(&local_38,(float *)&local_20);
    fVar27 = *pfVar11;
    Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)local_60,param_1);
    Sexy::Graphics::SetClipRect(param_1,(TRect *)&local_58);
    iVar5 = (int)local_50;
    iVar3 = (int)local_50 / 2;
    iVar4 = local_50._4_4_ / 2;
    Sexy::Insets::Insets((Insets *)&local_38,0,0,0,0);
    Sexy::Insets::Insets((Insets *)&local_20,aIStack_48);
    DrawRadialCooldown(fVar27,(float)((int)local_58 + iVar3),(float)(local_58._4_4_ + iVar4),
                       (float)iVar5,param_1,(GraphicsAutoState *)&local_38,(Insets *)&local_20);
    Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)local_60);
  }
  else {
    uVar26 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
    iVar3 = (int)local_58 + (int)local_50;
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    Sexy::Point::Point((Point *)&local_20,iVar3 + iVar4 * -4,local_58._4_4_);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,(Point *)&local_20);
    Sexy::Point::Point((Point *)&local_20,(int)local_58 + (int)local_50,local_58._4_4_);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,(Point *)&local_20);
    Sexy::Point::Point((Point *)&local_20,(int)local_58 + (int)local_50,
                       local_58._4_4_ + local_50._4_4_);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,(Point *)&local_20);
    iVar3 = (int)local_58 + (int)local_50;
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    Sexy::Point::Point((Point *)&local_20,iVar3 + iVar4 * -4,local_58._4_4_ + local_50._4_4_);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,(Point *)&local_20);
    iVar4 = (int)local_58;
    iVar3 = local_58._4_4_ + local_50._4_4_;
    iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
    Sexy::Point::Point((Point *)&local_20,iVar4,iVar3 + iVar5);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,(Point *)&local_20);
    iVar4 = local_58._4_4_;
    iVar3 = (int)local_58;
    iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
    Sexy::Point::Point((Point *)&local_20,iVar3,iVar4 + iVar5);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,(Point *)&local_20);
    iVar3 = (int)local_58 + (int)local_50;
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    Sexy::Point::Point((Point *)&local_20,iVar3 + iVar4 * -4,local_58._4_4_);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,(Point *)&local_20);
    iVar3 = (int)local_58 + (int)local_50;
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    Sexy::Point::Point((Point *)&local_a0,iVar3 + iVar4 * -4,local_58._4_4_ + local_50._4_4_ / 2);
    local_60[0] = *(float *)(this + 0x14) * 0.2;
    local_20 = 0;
    pfVar11 = eastl::max_alt<float>(local_60,(float *)&local_20);
    fVar28 = *pfVar11;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(Point *)&local_a0);
    Sexy::Point::Point((Point *)local_60,local_a0,local_9c - local_50._4_4_ / 2);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(Point *)local_60);
    fVar27 = sinf(fVar28 * 6.2831855);
    fVar28 = cosf(fVar28 * 6.2831855);
    Sexy::Point::Point(aPStack_98,(int)((float)local_a0 + fVar27 * 1000.0),
                       (int)((float)local_9c - fVar28 * 1000.0));
    while( true ) {
      uVar17 = CONCAT44(uStack_34,local_38);
      lVar12 = FUN_037bec54(uVar17,local_30);
      uVar25 = uVar26;
      if (lVar12 - 1U <= uVar26) break;
      while( true ) {
        uVar26 = uVar25 + 1;
        pTVar13 = (TPoint *)FUN_037bec60(uVar17,uVar25);
        Sexy::Point::Point(aPStack_90,pTVar13);
        pTVar13 = (TPoint *)FUN_037bec60(CONCAT44(uStack_34,local_38),uVar26);
        Sexy::Point::Point(aPStack_88,pTVar13);
        Sexy::Point::Point(aPStack_78,(TPoint *)aPStack_90);
        Sexy::Point::Point(aPStack_70,(TPoint *)aPStack_88);
        Sexy::Point::Point(aPStack_68,(TPoint *)&local_a0);
        Sexy::Point::Point((Point *)local_60,(TPoint *)aPStack_98);
        cVar2 = FUN_037beaec(aPStack_78,aPStack_70,aPStack_68,(Point *)local_60);
        if (cVar2 == '\0') break;
        Sexy::Point::Point(aPStack_78,(TPoint *)aPStack_90);
        Sexy::Point::Point(aPStack_70,(TPoint *)aPStack_88);
        Sexy::Point::Point(aPStack_68,(TPoint *)&local_a0);
        Sexy::Point::Point((Point *)local_60,(TPoint *)aPStack_98);
        FUN_037bf2e0(aPStack_80,aPStack_78,aPStack_70,aPStack_68,(Point *)local_60);
        uVar25 = 0;
        do {
          uVar1 = uVar25 + 1;
          pPVar14 = (Point *)FUN_037bec60(CONCAT44(uStack_34,local_38),uVar25);
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,pPVar14);
          uVar25 = uVar1;
        } while (uVar1 != uVar26);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,aPStack_80);
        uVar17 = CONCAT44(uStack_34,local_38);
        lVar12 = FUN_037bec54(uVar17,local_30);
        uVar25 = uVar26;
        if (lVar12 - 1U <= uVar26) goto LAB_037c03ec;
      }
    }
LAB_037c03ec:
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_48);
    uVar17 = CONCAT44(iStack_1c,local_20);
    uVar26 = FUN_037bec54(uVar17,local_18);
    if (2 < uVar26) {
      pPVar14 = (Point *)FUN_037bec60(uVar17,0);
      Sexy::Graphics::PolyFill(param_1,pPVar14,(int)uVar26,false);
    }
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactArcadeSubSystem::AddPlants() */

void __thiscall ArtifactArcadeSubSystem::AddPlants(ArtifactArcadeSubSystem *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  PlantBitPeashooter *this_00;
  RtObject *this_01;
  ArtifactArcade *pAVar7;
  char *__s;
  ulong uVar8;
  Board *this_02;
  int iVar9;
  int iVar10;
  float fVar11;
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [8];
  string asStack_48 [8];
  wstring awStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  iVar9 = 0;
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_48,"bitpeashooter");
  Sexy::ToWString(asStack_48);
  Sexy::RtName::RtName((RtName *)local_30,awStack_40);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_38,uVar4,6,(RtName *)local_30);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  Sexy::RtName::~RtName((RtName *)local_30);
  FUN_05476c50(awStack_40);
  std::string::~string(asStack_48);
  nop();
  iVar2 = BoardConstants::NUMBER_OF_ROWS();
  if (0 < iVar2) {
    do {
      iVar2 = 0;
      iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
      iVar10 = 0;
      if (0 < iVar3) {
        do {
          uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
          Sexy::Point::Point((Point *)aRStack_38,iVar2,iVar9);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)aRStack_50);
          iVar3 = Board::GetCanPlantAtReason(uVar4,aRStack_38,(RtName *)local_30,0,0xffffffff);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30)
          ;
          if (iVar3 == 0) {
            uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_50);
LAB_037c0a38:
            iVar10 = iVar10 + 1;
            local_30[0] = Board::AddPlant((Board *)0x0,uVar4,iVar2,iVar9,aRStack_38,1,1,0xffffffff,0
                                          ,1,1,0,0,0,0);
            std::vector<Plant*,std::allocator<Plant*>>::push_back
                      ((vector<Plant*,std::allocator<Plant*>> *)&local_20,(Plant **)local_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
            if (iVar10 == 2) break;
          }
          else {
            __s = "lilypad";
            if ((iVar3 == 0x32) || (__s = "flowerpot", iVar3 == 0x68)) {
              this_02 = *(Board **)(gLawnApp + 0x9f0);
              std::string::string((string *)local_30,__s);
              Board::AddGridItem(this_02,(string *)local_30,iVar2,iVar9,1);
              std::string::~string((string *)local_30);
              nop();
              uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_50);
              goto LAB_037c0a38;
            }
          }
          iVar2 = iVar2 + 1;
          iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
        } while (iVar2 < iVar3);
      }
      iVar9 = iVar9 + 1;
      iVar2 = BoardConstants::NUMBER_OF_ROWS();
    } while (iVar9 < iVar2);
  }
  Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  ArtifactMgr::GetActivatedArtifact();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
  if (bVar1) {
    Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    ArtifactMgr::GetActivatedArtifact();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (!bVar1) {
      fVar11 = 1.0;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      iVar9 = 0;
      goto LAB_037c0898;
    }
    Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    ArtifactMgr::GetActivatedArtifact();
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
    pAVar7 = Sexy::RtObject::Cast<ArtifactArcade>(this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    if (pAVar7 != (ArtifactArcade *)0x0) {
      fVar11 = *(float *)(pAVar7 + 0x40);
      iVar9 = (int)*(float *)(pAVar7 + 0x44);
      iVar2 = FUN_037bec30(*(undefined4 *)(pAVar7 + 0x20));
      bVar1 = 3 < iVar2;
      goto LAB_037c0898;
    }
  }
  bVar1 = false;
  fVar11 = 1.0;
  iVar9 = 0;
LAB_037c0898:
  uVar4 = local_20;
  iVar2 = 10;
  if ((0x14 < *(int *)(this + 0x10)) && (iVar2 = 0x14, 0x32 < *(int *)(this + 0x10))) {
    iVar2 = 0x28;
  }
  uVar8 = 0;
  uVar5 = FUN_037bec40(local_20,local_18);
  if (uVar5 != 0) {
    do {
      plVar6 = (long *)FUN_037bec4c(uVar4,uVar8);
      if (*plVar6 != 0) {
        this_00 = Sexy::RtObject::Cast<PlantBitPeashooter>(*(RtObject **)(*plVar6 + 0xa8));
        PlantBitPeashooter::SetArtifactPraram(this_00,iVar9,fVar11,bVar1,iVar2);
        plVar6 = (long *)FUN_037bec4c(local_20,uVar8);
        (**(code **)(**(long **)(*plVar6 + 0xa8) + 0x220))(*(long **)(*plVar6 + 0xa8));
        uVar4 = local_20;
        uVar5 = FUN_037bec40(local_20,local_18);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar5);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  std::vector<Plant*,std::allocator<Plant*>>::~vector
            ((vector<Plant*,std::allocator<Plant*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ArtifactArcadeSubSystem::setState(ArtifactArcadeSubSystemState) */

void __thiscall ArtifactArcadeSubSystem::setState(ArtifactArcadeSubSystem *this,int param_2)

{
  long lVar1;
  WorldMapCamera *pWVar2;
  undefined4 uVar3;
  
  *(int *)(this + 0x18) = param_2;
  if (param_2 == 3) {
    AddPlants(this);
    *(undefined4 *)(this + 0x18) = 4;
  }
  else if (param_2 != 4) {
    if (param_2 == 2) {
      *(undefined4 *)(this + 0x10) = 0;
      *(undefined4 *)(this + 0x14) = 0;
      lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
      uVar3 = FUN_037bebb4(*(undefined4 *)(lVar1 + 0x38));
      *(undefined4 *)(this + 0x20) = uVar3;
      pWVar2 = (WorldMapCamera *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
      WorldMapCamera::SetUseClipViewport(pWVar2,true);
      return;
    }
    return;
  }
  pWVar2 = (WorldMapCamera *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  WorldMapCamera::SetUseClipViewport(pWVar2,false);
  return;
}


/* ArtifactArcadeSubSystem::onDestroy() */

void __thiscall ArtifactArcadeSubSystem::onDestroy(ArtifactArcadeSubSystem *this)

{
  setState(this,4);
  return;
}


/* ArtifactArcadeSubSystem::Start() */

void __thiscall ArtifactArcadeSubSystem::Start(ArtifactArcadeSubSystem *this)

{
  setState(this,2);
  return;
}


/* ArtifactArcadeSubSystem::Update() */

void __thiscall ArtifactArcadeSubSystem::Update(ArtifactArcadeSubSystem *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)(this + 0x18) == 2) {
    lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    fVar2 = (float)FUN_037bebb4(*(undefined4 *)(lVar1 + 0x38));
    if (*(float *)(this + 0x20) < fVar2) {
      this[0x1c] = (ArtifactArcadeSubSystem)((byte)this[0x1c] ^ 1);
      lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
      fVar2 = (float)FUN_037bebb4(*(undefined4 *)(lVar1 + 0x38));
      *(float *)(this + 0x20) = fVar2 + 0.2;
    }
    lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    fVar2 = (float)FUN_037bebb8(*(undefined4 *)(lVar1 + 0x3c));
    fVar3 = *(float *)(this + 0x14);
    *(float *)(this + 0x14) = fVar2 + fVar3;
    if (5.0 < fVar2 + fVar3) {
      setState(this,3);
      return;
    }
  }
  return;
}

