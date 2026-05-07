// Class: UINewPVPInitialSkill


/* UINewPVPInitialSkill::~UINewPVPInitialSkill() */

void __thiscall UINewPVPInitialSkill::~UINewPVPInitialSkill(UINewPVPInitialSkill *this)

{
  *(undefined ***)this = &PTR_GetClass_0664fbd0;
  *(undefined ***)(this + 0x10) = &PTR__UINewPVPInitialSkill_0664fdb0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to UINewPVPInitialSkill::~UINewPVPInitialSkill() */

void __thiscall UINewPVPInitialSkill::~UINewPVPInitialSkill(UINewPVPInitialSkill *this)

{
  ~UINewPVPInitialSkill(this + -0x10);
  return;
}


/* UINewPVPInitialSkill::~UINewPVPInitialSkill() */

void __thiscall UINewPVPInitialSkill::~UINewPVPInitialSkill(UINewPVPInitialSkill *this)

{
  ~UINewPVPInitialSkill(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UINewPVPInitialSkill::~UINewPVPInitialSkill() */

void __thiscall UINewPVPInitialSkill::~UINewPVPInitialSkill(UINewPVPInitialSkill *this)

{
  ~UINewPVPInitialSkill(this + -0x10);
  return;
}


/* UINewPVPInitialSkill::IsOnCooldownState() */

void __thiscall UINewPVPInitialSkill::IsOnCooldownState(UINewPVPInitialSkill *this)

{
  UIWidget::isInState((UIWidget *)this,7);
  return;
}


/* UINewPVPInitialSkill::startTouch(unsigned long) */

void __thiscall UINewPVPInitialSkill::startTouch(UINewPVPInitialSkill *this,ulong param_1)

{
  *(ulong *)(this + 0x168) = param_1;
  (**(code **)(*(long *)this + 0xe8))(this,4);
  return;
}


/* UINewPVPInitialSkill::cancelTouch() */

void __thiscall UINewPVPInitialSkill::cancelTouch(UINewPVPInitialSkill *this)

{
  if (*(int *)(this + 0x170) != 4) {
    *(undefined8 *)(this + 0x168) = 0;
    (**(code **)(*(long *)this + 0xe8))(this,2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPInitialSkill::GetCenterPointOnScreen() */

void __thiscall UINewPVPInitialSkill::GetCenterPointOnScreen(UINewPVPInitialSkill *this)

{
  long lVar1;
  int iVar2;
  Point *in_x8;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  UIWidget::GetCenterPointOnScreen();
  iVar2 = FUN_0351e4d4(0);
  Sexy::Point::Point(in_x8,local_10 + iVar2,iVar2 + local_c);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPInitialSkill::onGameplayEnded() */

void __thiscall UINewPVPInitialSkill::onGameplayEnded(UINewPVPInitialSkill *this)

{
  UIWidget::SetClickable((UIWidget *)this,false);
  return;
}


/* UINewPVPInitialSkill::onUsed() */

void __thiscall UINewPVPInitialSkill::onUsed(UINewPVPInitialSkill *this)

{
  int iVar1;
  
  if (0 < *(int *)(this + 400)) {
    iVar1 = *(int *)(this + 400) + -1;
    *(int *)(this + 400) = iVar1;
    if (iVar1 == 0) {
      UIWidget::SetClickable((UIWidget *)this,false);
      return;
    }
  }
  return;
}


/* UINewPVPInitialSkill::onUsedCancel() */

void __thiscall UINewPVPInitialSkill::onUsedCancel(UINewPVPInitialSkill *this)

{
  *(int *)(this + 400) = *(int *)(this + 400) + 1;
  UIWidget::SetClickable((UIWidget *)this,true);
  return;
}


/* UINewPVPInitialSkill::onExitState_Cooldown(WidgetState) */

void UINewPVPInitialSkill::onExitState_Cooldown(UIWidget *param_1)

{
  UIWidget::SetClickable(param_1,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPInitialSkill::OnTouch(Sexy::Touch const&) */

void __thiscall UINewPVPInitialSkill::OnTouch(UINewPVPInitialSkill *this,Touch *param_1)

{
  char cVar1;
  NewPVPMgr *this_00;
  BaseCursor *pBVar2;
  Board *this_01;
  Touch aTStack_40 [16];
  Point aPStack_30 [8];
  Point aPStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03520584(*(undefined4 *)(this + 0x68));
  if (cVar1 != '\0') {
    Sexy::Touch::Touch(aTStack_40,param_1);
    Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),aPStack_30);
    Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),aPStack_28);
    if ((*(int *)(param_1 + 0x30) == 0) && (*(int *)(this + 0x170) == 4)) {
      this_01 = *(Board **)(gLawnApp + 0x9f0);
      this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      pBVar2 = (BaseCursor *)NewPVPMgr::TryAddPlantfoodCursor(this_00,aTStack_40);
      Board::TryToAddCursor(this_01,pBVar2,true);
      (**(code **)(*(long *)this + 0xe8))(this,4);
      onUsed(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* UINewPVPInitialSkill::onTouchEnd() */

void __thiscall UINewPVPInitialSkill::onTouchEnd(UINewPVPInitialSkill *this)

{
  NewPVPMgr *this_00;
  
  if (*(int *)(this + 0x170) != 3) {
    return;
  }
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  NewPVPMgr::TryTriggerZombieSkill(this_00,*(int *)(this + 0x170));
  onUsed(this);
  *(undefined8 *)(this + 0x168) = 0;
  (**(code **)(*(long *)this + 0xe8))(this,6);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPInitialSkill::handleTouch(Sexy::Touch const&) */

void __thiscall UINewPVPInitialSkill::handleTouch(UINewPVPInitialSkill *this,Touch *param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  Touch aTStack_40 [16];
  int local_30;
  int local_2c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03520584(*(undefined4 *)(this + 0x68));
  if ((cVar1 == '\0') || (cVar1 = UIWidget::IsVisible((UIWidget *)this), cVar1 == '\0')) {
switchD_03520a30_caseD_2:
    bVar3 = 0;
    goto LAB_0352097c;
  }
  Sexy::Touch::Touch(aTStack_40,param_1);
  Board::TranslateBoardPositionToScreenPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
  bVar2 = (**(code **)(*(long *)this + 0xa8))
                    (this,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48) + local_30,
                     *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c) + local_2c);
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 0:
    bVar3 = bVar2 & *(long *)(this + 0x168) == 0;
    if (bVar3 != 0) {
      startTouch(this,*(ulong *)param_1);
    }
    goto LAB_0352097c;
  case 1:
    if ((bVar2 & *(long *)(this + 0x168) == 0) != 0) {
      bVar3 = 0;
      startTouch(this,*(ulong *)param_1);
      goto LAB_0352097c;
    }
    bVar3 = 0;
    if ((bVar2 != 0) || (*(long *)(this + 0x168) != *(long *)param_1)) goto LAB_0352097c;
    break;
  default:
    goto switchD_03520a30_caseD_2;
  case 3:
    bVar3 = bVar2 & *(long *)param_1 == *(long *)(this + 0x168);
    if (bVar3 != 0) {
      onTouchEnd(this);
    }
    goto LAB_0352097c;
  case 4:
    if (*(long *)param_1 != *(long *)(this + 0x168)) goto switchD_03520a30_caseD_2;
  }
  bVar3 = 0;
  cancelTouch(this);
LAB_0352097c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar3);
  }
  return;
}


/* UINewPVPInitialSkill::onCursorDestroyed(BaseCursor*) */

void __thiscall
UINewPVPInitialSkill::onCursorDestroyed(UINewPVPInitialSkill *this,BaseCursor *param_1)

{
  bool bVar1;
  
  if (((param_1 != (BaseCursor *)0x0) && (*(int *)(this + 0x170) == 4)) &&
     (bVar1 = Sexy::RtObject::IsA<PlantfoodCursor>((RtObject *)param_1), bVar1)) {
    (**(code **)(*(long *)this + 0xe8))(this,2);
    onUsedCancel(this);
    return;
  }
  return;
}


/* UINewPVPInitialSkill::UINewPVPInitialSkill() */

void __thiscall UINewPVPInitialSkill::UINewPVPInitialSkill(UINewPVPInitialSkill *this)

{
  undefined4 uVar1;
  
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined ***)this = &PTR_GetClass_0664fbd0;
  *(undefined ***)(this + 0x10) = &PTR__UINewPVPInitialSkill_0664fdb0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x170) = 0xffffffff;
  *(undefined8 *)(this + 0x180) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x188) = uVar1;
  this[0x194] = (UINewPVPInitialSkill)0x0;
  *(undefined4 *)(this + 0x18c) = 0x3f800000;
  *(undefined4 *)(this + 0x198) = 0;
  uVar1 = PVZ_T();
  this[0x1a0] = (UINewPVPInitialSkill)0x0;
  *(undefined4 *)(this + 0x19c) = uVar1;
  return;
}


/* UINewPVPInitialSkill::StaticNew() */

UINewPVPInitialSkill * UINewPVPInitialSkill::StaticNew(void)

{
  UINewPVPInitialSkill *this;
  
  this = ::operator_new(0x1a8);
  UINewPVPInitialSkill(this);
  return this;
}


/* UINewPVPInitialSkill::onEnterState_Cooldown(WidgetState) */

void UINewPVPInitialSkill::onEnterState_Cooldown(long param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(param_1 + 0x188) = fVar1 + *(float *)(param_1 + 0x18c);
  return;
}


/* UINewPVPInitialSkill::updateState_NotReady() */

void __thiscall UINewPVPInitialSkill::updateState_NotReady(UINewPVPInitialSkill *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x188) <= fVar1) {
    (**(code **)(*(long *)this + 0xe8))(this,2);
  }
  return;
}


/* UINewPVPInitialSkill::onEnterState_Activated(WidgetState) */

void UINewPVPInitialSkill::onEnterState_Activated(UIWidget *param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(param_1 + 0x19c) = fVar1 + *(float *)(param_1 + 0x198);
  UIWidget::SetClickable(param_1,false);
  return;
}


/* UINewPVPInitialSkill::updateState_Activated() */

void __thiscall UINewPVPInitialSkill::updateState_Activated(UINewPVPInitialSkill *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x19c) < fVar1) {
    (**(code **)(*(long *)this + 0xe8))(this,7);
  }
  return;
}


/* UINewPVPInitialSkill::updateState_Cooldown() */

void __thiscall UINewPVPInitialSkill::updateState_Cooldown(UINewPVPInitialSkill *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x188) < fVar1) {
    (**(code **)(*(long *)this + 0xe8))(this,2);
  }
  return;
}


/* UINewPVPInitialSkill::SetSkillType(UINewPVPInitialSkill::SkillType) */

void __thiscall UINewPVPInitialSkill::SetSkillType(UINewPVPInitialSkill *this,int param_2)

{
  undefined8 uVar1;
  
  *(int *)(this + 0x170) = param_2;
  if (param_2 != 3) {
    if (param_2 == 4) {
      uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4d60);
      *(undefined8 *)(this + 0x178) = uVar1;
      uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4e38);
      *(undefined8 *)(this + 0x180) = uVar1;
    }
    return;
  }
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4e88);
  *(undefined8 *)(this + 0x178) = uVar1;
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4dd8);
  *(undefined8 *)(this + 0x180) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPInitialSkill::registerForEvents() */

void __thiscall UINewPVPInitialSkill::registerForEvents(UINewPVPInitialSkill *this)

{
  undefined *puVar1;
  Board *pBVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate0 aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1c0);
  local_c0 = local_80;
  uStack_b8 = uStack_78;
  local_b0 = local_70;
  MessageRouter::
  Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<UINewPVPInitialSkill,void(UINewPVPInitialSkill::*)(BaseCursor*)>>
            ((MessageRouter *)puVar1,Message::CursorDestroyed,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<UINewPVPInitialSkill,void(UINewPVPInitialSkill::*)()>
            (aDStack_38,aCStack_98);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayEnded,aDStack_38);
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<UINewPVPInitialSkill,bool(UINewPVPInitialSkill::*)(Sexy::Touch_const&)>
            ((Delegate1wRet<bool,Sexy::Touch_const&> *)aDStack_38,aCStack_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  Sexy::Delegate0::Delegate0(aDStack_68,(DummyInit *)0x0);
  Board::RegisterTouchGameplayObject(pBVar2,aDStack_38,9,a_Stack_a0,aDStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPInitialSkill::StaticClassInit() */

void UINewPVPInitialSkill::StaticClassInit(void)

{
  StateMachineTableBuilder *this;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  CRefSymbolDb *this_00;
  long *plVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<WidgetState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<WidgetState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance();
  pRVar1 = (RtClass *)StaticGetClass();
  pSVar2 = StateMachineTableBuilder::RegisterClass<WidgetState>(this,pRVar1);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x190);
  Sexy::Delegate1<WidgetState>::
  Delegate1<UINewPVPInitialSkill,void(UINewPVPInitialSkill::*)(WidgetState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x198);
  Sexy::Delegate0::Delegate0<UINewPVPInitialSkill,void(UINewPVPInitialSkill::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1a0);
  Sexy::Delegate1<WidgetState>::
  Delegate1<UINewPVPInitialSkill,void(UINewPVPInitialSkill::*)(WidgetState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"WS_Activated");
  StateDefinition<WidgetState>::StateDefinition
            (aSStack_a8,6,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_035284d0(pSVar2,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1a8);
  Sexy::Delegate1<WidgetState>::
  Delegate1<UINewPVPInitialSkill,void(UINewPVPInitialSkill::*)(WidgetState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1b0);
  Sexy::Delegate0::Delegate0<UINewPVPInitialSkill,void(UINewPVPInitialSkill::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1b8);
  Sexy::Delegate1<WidgetState>::
  Delegate1<UINewPVPInitialSkill,void(UINewPVPInitialSkill::*)(WidgetState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"WS_Cooldown");
  StateDefinition<WidgetState>::StateDefinition
            (aSStack_a8,7,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_035284d0(pSVar2,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  this_00 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this_00 != (CRefSymbolDb *)0x0) &&
     (plVar3 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this_00),
     plVar3 != (long *)0x0)) {
    pcVar4 = *(code **)(*plVar3 + 0x18);
    std::string::string(asStack_150,"UINewPVPInitialSkill");
    (*pcVar4)(plVar3,asStack_150,FUN_03528d68,0x1a8,0);
    std::string::~string(asStack_150);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPInitialSkill::StaticGetClass() */

long * UINewPVPInitialSkill::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UINewPVPInitialSkill",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UINewPVPInitialSkill::GetClass() const */

long * UINewPVPInitialSkill::GetClass(void)

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
  (*pcVar3)(plVar1,"UINewPVPInitialSkill",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPInitialSkill::Draw(Sexy::Graphics*) */

void __thiscall UINewPVPInitialSkill::Draw(UINewPVPInitialSkill *this,Graphics *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  string *extraout_x1;
  GraphicsAutoState aGStack_40 [8];
  Sexy aSStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  cVar2 = IsOnCooldownState(this);
  if ((cVar2 == '\0') && (cVar2 = FUN_03520584(*(undefined4 *)(this + 0x68)), cVar2 != '\0')) {
    iVar3 = *(int *)(this + 0x170);
  }
  else {
    Sexy::Color::Color(aCStack_18,0x80,0x80,0x80);
    Sexy::Graphics::SetColor(param_1,aCStack_18);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    iVar3 = *(int *)(this + 0x170);
  }
  if (iVar3 == 4) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4ec0);
    Sexy::Graphics::DrawImage(param_1,pIVar5,0,0);
    iVar3 = UIWidget::getWidgetStateSerialization((UIWidget *)this);
  }
  else {
    iVar3 = UIWidget::getWidgetStateSerialization((UIWidget *)this);
  }
  if (iVar3 == 4) {
    pIVar5 = *(Image **)(this + 0x180);
  }
  else {
    pIVar5 = *(Image **)(this + 0x178);
  }
  if (pIVar5 != (Image *)0x0) {
    iVar3 = FUN_0351e4e8(0);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar3,iVar3);
  }
  if (this[0x194] != (UINewPVPInitialSkill)0x0) {
    iVar3 = FUN_0351d4b4(*(undefined4 *)(this + 0x3c));
    iVar4 = FUN_0351d4a8(*(undefined4 *)(this + 0x38));
    Sexy::Insets::Insets(aIStack_28,0,iVar3 / 2,iVar4,iVar3 / 2);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 400));
    Sexy::ToSexyString(aSStack_38,extraout_x1);
    uVar1 = PrimeText_Game::Typeface_FZCuYuan_26_Outline;
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar1,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
    std::string::~string((string *)aSStack_38);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINewPVPInitialSkill::Draw(Sexy::Graphics*) */

void __thiscall UINewPVPInitialSkill::Draw(UINewPVPInitialSkill *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

