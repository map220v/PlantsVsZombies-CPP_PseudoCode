// Class: FishingEnergyBar


/* FishingEnergyBar::onGamePaused() */

void __thiscall FishingEnergyBar::onGamePaused(FishingEnergyBar *this)

{
  (**(code **)(*(long *)this + 0xe8))(this,5);
  return;
}


/* FishingEnergyBar::onGameUnpaused() */

void __thiscall FishingEnergyBar::onGameUnpaused(FishingEnergyBar *this)

{
  (**(code **)(*(long *)this + 0xe8))(this,2);
  return;
}


/* FishingEnergyBar::onCancelTouch() */

void __thiscall FishingEnergyBar::onCancelTouch(FishingEnergyBar *this)

{
  char cVar1;
  
  *(undefined8 *)(this + 0x168) = 0;
  cVar1 = UIWidget::isInState((UIWidget *)this,4);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0xe8))(this,2);
  }
  return;
}


/* FishingEnergyBar::~FishingEnergyBar() */

void __thiscall FishingEnergyBar::~FishingEnergyBar(FishingEnergyBar *this)

{
  *(undefined ***)this = &PTR_GetClass_068e3ed0;
  *(undefined ***)(this + 0x10) = &PTR__FishingEnergyBar_068e4070;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to FishingEnergyBar::~FishingEnergyBar() */

void __thiscall FishingEnergyBar::~FishingEnergyBar(FishingEnergyBar *this)

{
  ~FishingEnergyBar(this + -0x10);
  return;
}


/* FishingEnergyBar::~FishingEnergyBar() */

void __thiscall FishingEnergyBar::~FishingEnergyBar(FishingEnergyBar *this)

{
  ~FishingEnergyBar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FishingEnergyBar::~FishingEnergyBar() */

void __thiscall FishingEnergyBar::~FishingEnergyBar(FishingEnergyBar *this)

{
  ~FishingEnergyBar(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingEnergyBar::StaticClassInit() */

void FishingEnergyBar::StaticClassInit(void)

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
    std::string::string(asStack_10,"FishingEnergyBar");
    (*pcVar2)(plVar1,asStack_10,FUN_047c1cf8,0x178,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FishingEnergyBar::StaticGetClass() */

long * FishingEnergyBar::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"FishingEnergyBar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FishingEnergyBar::GetClass() const */

long * FishingEnergyBar::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"FishingEnergyBar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FishingEnergyBar::FishingEnergyBar() */

void __thiscall FishingEnergyBar::FishingEnergyBar(FishingEnergyBar *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined ***)this = &PTR_GetClass_068e3ed0;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined ***)(this + 0x10) = &PTR__FishingEnergyBar_068e4070;
  return;
}


/* FishingEnergyBar::StaticNew() */

FishingEnergyBar * FishingEnergyBar::StaticNew(void)

{
  FishingEnergyBar *this;
  
  this = ::operator_new(0x178);
  FishingEnergyBar(this);
  return this;
}


/* FishingEnergyBar::InitEnergy(int, int) */

void __thiscall FishingEnergyBar::InitEnergy(FishingEnergyBar *this,int param_1,int param_2)

{
  *(int *)(this + 0x170) = param_1;
  *(int *)(this + 0x174) = param_2;
  return;
}


/* FishingEnergyBar::SetEnergy(int) */

void __thiscall FishingEnergyBar::SetEnergy(FishingEnergyBar *this,int param_1)

{
  if (*(int *)(this + 0x174) < param_1) {
    param_1 = *(int *)(this + 0x174);
  }
  *(int *)(this + 0x170) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingEnergyBar::registerForEvents() */

void __thiscall FishingEnergyBar::registerForEvents(FishingEnergyBar *this)

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
            ((ReceivedDataCallback *)this,onHandleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<FishingEnergyBar,bool(FishingEnergyBar::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCancelTouch);
  Sexy::Delegate0::Delegate0<FishingEnergyBar,void(FishingEnergyBar::*)()>(aDStack_38,aCStack_80);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,9,a_Stack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingEnergyBar::CalcPlusButtonRect() */

void __thiscall FishingEnergyBar::CalcPlusButtonRect(FishingEnergyBar *this)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  LotteryResultProgressBar *pLVar4;
  SalesProgressBar *pSVar5;
  Insets *in_x8;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  lVar1 = ___stack_chk_guard;
  UIWidget::GetDrawRect();
  Sexy::Insets::Insets(in_x8);
  pLVar4 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b264a0);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
  *(int *)in_x8 = (local_18 + local_10) - iVar2;
  pSVar5 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b264a0);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar5);
  *(int *)(in_x8 + 4) = local_14 + (local_c - iVar2) / 2;
  pLVar4 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b264a0);
  uVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
  *(undefined4 *)(in_x8 + 8) = uVar3;
  pSVar5 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b264a0);
  uVar3 = SalesProgressBar::GetCurrentLevel(pSVar5);
  *(undefined4 *)(in_x8 + 0xc) = uVar3;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingEnergyBar::onHandleTouch(Sexy::Touch const&) */

void __thiscall FishingEnergyBar::onHandleTouch(FishingEnergyBar *this,Touch *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  TRect<int> aTStack_50 [16];
  Touch aTStack_40 [16];
  int local_30;
  int local_2c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = FUN_047c1f60(*(undefined4 *)(this + 0x68));
  if (cVar3 != '\0') {
    bVar4 = UIWidget::IsVisible((UIWidget *)this);
    if (bVar4 != 0) {
      Sexy::Touch::Touch(aTStack_40,param_1);
      Board::TranslateBoardPositionToScreenPosition
                (*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
      iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48);
      iVar2 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c);
      CalcPlusButtonRect(this);
      bVar5 = Sexy::TRect<int>::Contains(aTStack_50,iVar1 + local_30,iVar2 + local_2c);
      iVar1 = *(int *)(param_1 + 0x30);
      if (iVar1 == 3) {
        if (*(long *)param_1 == *(long *)(this + 0x168)) {
          if (bVar5 != 0) {
            MessageRouter::Post((_func_void *)gMessageRouter);
          }
          goto LAB_047c22f0;
        }
      }
      else {
        if (iVar1 == 4) {
          bVar4 = 0;
          if (*(long *)param_1 != *(long *)(this + 0x168)) goto LAB_047c21e0;
LAB_047c22f0:
          onCancelTouch(this);
          goto LAB_047c21e0;
        }
        if (iVar1 == 0) {
          bVar4 = bVar5 & *(long *)(this + 0x168) == 0;
          if (bVar4 != 0) {
            *(undefined8 *)(this + 0x168) = *(undefined8 *)param_1;
            (**(code **)(*(long *)this + 0xe8))(this,4);
          }
          goto LAB_047c21e0;
        }
      }
    }
  }
  bVar4 = 0;
LAB_047c21e0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingEnergyBar::Draw(Sexy::Graphics*) */

void __thiscall FishingEnergyBar::Draw(FishingEnergyBar *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LotteryResultProgressBar *pLVar5;
  SalesProgressBar *pSVar6;
  undefined8 uVar7;
  Image *pIVar8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  float fVar9;
  GraphicsAutoState aGStack_40 [8];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  Sexy::Insets::Insets((Insets *)&local_38);
  Sexy::Insets::Insets((Insets *)&local_28);
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b26478);
  local_38 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  iVar2 = FUN_047c1aa4(*(undefined4 *)(this + 0x3c));
  pSVar6 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b26450);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar6);
  local_34 = (iVar2 - iVar3) / 2;
  iVar2 = FUN_047c1aa0(*(undefined4 *)(this + 0x38));
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b26478);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b264a0);
  local_30 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  local_30 = (iVar2 - iVar3) - local_30;
  pSVar6 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b26450);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar6);
  iVar2 = local_38;
  local_2c = iVar4;
  local_28 = FUN_047c1bb0(5);
  iVar3 = local_34;
  local_28 = iVar2 + local_28;
  local_24 = FUN_047c1bb0(7);
  iVar2 = local_30;
  local_24 = iVar3 + local_24;
  iVar3 = FUN_047c1bb0(10);
  local_20 = iVar2 - iVar3;
  local_1c = FUN_047c1bb0(0xe);
  local_1c = iVar4 - local_1c;
  if (*(int *)(this + 0x174) < 1) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = ((float)*(int *)(this + 0x170) / (float)*(int *)(this + 0x174)) * 100.0;
  }
  cVar1 = Sexy::IsNearZero(fVar9,0.001);
  if (cVar1 == '\0') {
    Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)aIStack_18,param_1);
    Sexy::Graphics::ClipRect
              (param_1,local_28,local_24,(int)((float)(iVar2 - iVar3) * 0.01 * fVar9),local_1c);
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b26620);
    Sexy::Graphics::DrawImage(param_1,pIVar8,local_28,local_24,local_20,local_1c);
    Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)aIStack_18);
  }
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_38);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b26450);
  Draw3SliceImage(param_1,aIStack_18,uVar7);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b26478);
  Sexy::Graphics::DrawImageF(param_1,pIVar8,0.0,0.0);
  cVar1 = UIWidget::isInState((UIWidget *)this,4);
  if (cVar1 == '\0') {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b264a0;
  }
  else {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b26400;
  }
  pSVar6 = (SalesProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  iVar2 = local_38 + local_30;
  iVar3 = FUN_047c1aa4(*(undefined4 *)(this + 0x3c));
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar6);
  Sexy::Graphics::DrawImageF(param_1,(Image *)pSVar6,(float)iVar2,(float)((iVar3 - iVar4) / 2));
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to FishingEnergyBar::Draw(Sexy::Graphics*) */

void __thiscall FishingEnergyBar::Draw(FishingEnergyBar *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

