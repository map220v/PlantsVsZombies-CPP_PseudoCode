// Class: CardGameBoard


/* CardGameBoard::LostFocus() */

void __thiscall CardGameBoard::LostFocus(CardGameBoard *this)

{
  (**(code **)(*(long *)this + 0x268))();
  return;
}


/* CardGameBoard::get() */

undefined8 CardGameBoard::get(void)

{
  return s_pWidgetHandler;
}


/* CardGameBoard::Draw(Sexy::Graphics*) */

void __thiscall CardGameBoard::Draw(CardGameBoard *this,Graphics *param_1)

{
  UICukePackage::Draw((UICukePackage *)this,param_1);
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::SetImageNode(DSpriteNode*, DTransformNode*, int) */

void __thiscall
CardGameBoard::SetImageNode
          (CardGameBoard *this,DSpriteNode *param_1,DTransformNode *param_2,int param_3)

{
  DSpriteNode *pDVar1;
  code *pcVar2;
  DVec2 aDStack_10 [8];
  long local_8;
  
  pDVar1 = *(DSpriteNode **)(this + 0x180);
  local_8 = ___stack_chk_guard;
  if (pDVar1 != param_1) {
    if (param_1 != (DSpriteNode *)0x0) {
      (**(code **)(*(long *)param_2 + 0x28))(param_2,param_1,param_3);
      pcVar2 = *(code **)(*(long *)param_1 + 0x128);
      DVec2::DVec2(aDStack_10,0.0,0.0);
      (*pcVar2)(param_1,aDStack_10);
      pDVar1 = *(DSpriteNode **)(this + 0x180);
    }
    if (pDVar1 != (DSpriteNode *)0x0) {
      (**(code **)(*(long *)param_2 + 0x70))(param_2,pDVar1,1);
    }
    *(DSpriteNode **)(this + 0x180) = param_1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameBoard::ClearImageNode() */

void __thiscall CardGameBoard::ClearImageNode(CardGameBoard *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x180);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,1);
    *(undefined8 *)(this + 0x180) = 0;
  }
  return;
}


/* CardGameBoard::clearCursorArea() */

void __thiscall CardGameBoard::clearCursorArea(CardGameBoard *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x188);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,1);
    *(undefined8 *)(this + 0x188) = 0;
  }
  return;
}


/* CardGameBoard::HasTutorial() */

bool __thiscall CardGameBoard::HasTutorial(CardGameBoard *this)

{
  return *(int *)(this + 0x2b0) != -1;
}


/* CardGameBoard::resetTurnDisplay() */

void __thiscall CardGameBoard::resetTurnDisplay(CardGameBoard *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x200);
  *(undefined4 *)(this + 0x208) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0xd8))(plVar1,1);
  }
  return;
}


/* CardGameBoard::clearTutorialEffect() */

void __thiscall CardGameBoard::clearTutorialEffect(CardGameBoard *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x1d0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,1);
    *(undefined8 *)(this + 0x1d0) = 0;
  }
  return;
}


/* CardGameBoard::ClearTutorialTouch() */

void __thiscall CardGameBoard::ClearTutorialTouch(CardGameBoard *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x2b8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,1);
    *(undefined8 *)(this + 0x2b8) = 0;
  }
  return;
}


/* CardGameBoard::Remove() */

void __thiscall CardGameBoard::Remove(CardGameBoard *this)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = CardDisplay::get();
  if (lVar1 != 0) {
    plVar2 = (long *)CardDisplay::get();
    (**(code **)(*plVar2 + 0x348))();
  }
  (**(code **)(*(long *)this + 0x348))(this);
  return;
}


/* CardGameBoard::isConsumableCard(Card*) */

void __thiscall CardGameBoard::isConsumableCard(CardGameBoard *this,Card *param_1)

{
  Card::IsConsumable(param_1);
  return;
}


/* CardGameBoard::setCursorVisible(Card*, bool) */

void __thiscall CardGameBoard::setCursorVisible(CardGameBoard *this,Card *param_1,bool param_2)

{
  if (param_1 != (Card *)0x0) {
    Card::SetCursorVisible(param_1,param_2);
    return;
  }
  return;
}


/* CardGameBoard::getCardValidRange(Card*, Sexy::TRect<int>&) */

void __thiscall CardGameBoard::getCardValidRange(CardGameBoard *this,Card *param_1,TRect *param_2)

{
  if (param_1 != (Card *)0x0) {
    Card::GetValidRange(param_1,param_2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::displayCursorArea(DTransformNode*, Sexy::TRect<int>) */

void __thiscall
CardGameBoard::displayCursorArea(CardGameBoard *this,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  DFixedLayer *this_00;
  code *pcVar4;
  float fVar5;
  float fVar6;
  DRefPtr<DFixedLayer> aDStack_38 [8];
  int local_30;
  int local_2c;
  Point aPStack_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  Point aPStack_18 [8];
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x188) == 0) {
    DRefPtr<DFixedLayer>::DRefPtr(aDStack_38);
    uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_38);
    *(undefined8 *)(this + 0x188) = uVar2;
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar6 = (float)iVar1;
    iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
    fVar5 = (float)iVar1;
    Sexy::Point::Point((Point *)&local_30,(int)((float)*param_3 * fVar6 + 200.0),
                       (int)((float)param_3[1] * fVar5 + 160.0));
    Sexy::Point::Point(aPStack_28,(int)((float)*param_3 * fVar6 + 200.0),
                       (int)((float)local_2c + (float)param_3[3] * fVar5));
    Sexy::Point::Point((Point *)&local_20,(int)((float)local_30 + (float)param_3[2] * fVar6),
                       (int)((float)param_3[1] * fVar5 + 160.0));
    Sexy::Point::Point(aPStack_18,(int)((float)local_30 + (float)param_3[2] * fVar6),
                       (int)((float)local_1c + (float)param_3[3] * fVar5));
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_38);
    pcVar4 = *(code **)(*plVar3 + 0x210);
    DVec2::DVec2(aDStack_10,(float)*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x50),
                 (float)*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x54));
    plVar3 = (long *)(*pcVar4)(plVar3,aDStack_10);
    (**(code **)(*plVar3 + 0x270))(plVar3,0,0,0,0x80);
    this_00 = (DFixedLayer *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_38);
    DFixedLayer::setFixedRect
              (this_00,(float)local_30,(float)local_2c,(float)(local_20 - local_30),
               (float)(local_24 - local_2c));
    uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_38);
    (**(code **)(*(long *)this + 0x368))(this,uVar2,50000);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameBoard::tryDrawCardFromLibrary(int) */

uint __thiscall CardGameBoard::tryDrawCardFromLibrary(CardGameBoard *this,int param_1)

{
  int iVar1;
  
  iVar1 = DArray<Card*>::size((DArray<Card*> *)(this + 0x168));
  return (uint)~(iVar1 - param_1) >> 0x1f;
}


/* CardGameBoard::setCardVisible(int, bool) */

void __thiscall CardGameBoard::setCardVisible(CardGameBoard *this,int param_1,bool param_2)

{
  long *plVar1;
  
  plVar1 = (long *)DArray<Card*>::at((long)(this + 0x138));
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0xd8))(plVar1,param_2);
  }
  return;
}


/* CardGameBoard::onSingleMoveDone(CardGameBoard::CardArrowEffectType, int) */

void __thiscall CardGameBoard::onSingleMoveDone(CardGameBoard *this,int param_2,int param_3)

{
  if (param_2 != 0) {
    return;
  }
  setCardVisible(this,param_3,true);
  return;
}


/* CardGameBoard::onStartMove(CardGameBoard::CardArrowEffectType, int) */

void __thiscall CardGameBoard::onStartMove(CardGameBoard *this,int param_2,int param_3)

{
  if (param_2 == 1) {
    setCardVisible(this,param_3,false);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::CreateHandCard(Card*, int, DTransformNode*) */

void CardGameBoard::CreateHandCard(Card *param_1,int param_2,DTransformNode *param_3)

{
  long *plVar1;
  Card *this;
  long *in_x3;
  DRefPtr<DTouchLayer> *in_x8;
  code *pcVar2;
  Card *local_d0;
  Card *pCStack_c8;
  Card *local_b0 [2];
  Card *local_a0;
  Card *local_90 [2];
  Card *local_80;
  Card *local_70;
  Card *local_60;
  Card *local_58;
  Card *local_48;
  Card *local_40;
  Card *local_38;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  this = (Card *)(ulong)(uint)param_2;
  local_8 = ___stack_chk_guard;
  if (this == (Card *)0x0) {
    std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)in_x8,(_func_void *)0x0);
  }
  else {
    Card::SetHandPosition(this,(int)param_3);
    (**(code **)(*in_x3 + 0x28))();
    plVar1 = (long *)(**(code **)(*(long *)this + 0x110))
                               (*(float *)(param_1 + 0x238) +
                                *(float *)(param_1 + 0x240) * (float)(int)param_3,
                                *(undefined4 *)(param_1 + 0x23c),this);
    (**(code **)(*plVar1 + 0x130))(0,0);
    pcVar2 = *(code **)(*(long *)this + 0x368);
    local_90[0] = this;
    local_80 = param_1;
    local_70 = this;
    local_60 = param_1;
    FUN_03578ac0(afStack_28,local_90);
    (*pcVar2)(this,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    pcVar2 = *(code **)(*(long *)this + 0x378);
    local_b0[0] = this;
    local_a0 = param_1;
    local_58 = this;
    local_48 = param_1;
    FUN_03578b20(afStack_28,local_b0);
    (*pcVar2)(this,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    pcVar2 = *(code **)(*(long *)this + 0x370);
    local_d0 = param_1;
    pCStack_c8 = this;
    local_40 = param_1;
    local_38 = this;
    FUN_03578b80(afStack_28,&local_d0);
    (*pcVar2)(this,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    pcVar2 = *(code **)(*(long *)this + 0x358);
    FUN_03578be0(afStack_28,this,param_1);
    (*pcVar2)(this,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    DRefPtr<DTouchLayer>::DRefPtr(in_x8,(DTouchLayer *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::createTempArrowEffect(DTransformNode*) */

void CardGameBoard::createTempArrowEffect(DTransformNode *param_1)

{
  long *plVar1;
  long *in_x1;
  DRefPtr<DAnimNode> *in_x8;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DAnimNode>::DRefPtr(in_x8);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)in_x8);
  pcVar2 = *(code **)(*plVar1 + 0x2e8);
  std::string::string(asStack_10,"effects/card_game_draw");
  (*pcVar2)(plVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)in_x8);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x130))(0,0);
  (**(code **)(*plVar1 + 0x110))(0,0);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)in_x8);
  (**(code **)(*plVar1 + 0xd8))(plVar1,0);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)in_x8);
  (**(code **)(*plVar1 + 0x1a0))(plVar1,1);
  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)in_x8);
  (**(code **)(*in_x1 + 0x28))();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::createArrowEffect(DTransformNode*) */

void __thiscall CardGameBoard::createArrowEffect(CardGameBoard *this,DTransformNode *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  DRefPtr<DAnimNode> aDStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DAnimNode>::DRefPtr(aDStack_18);
  uVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
  *(undefined8 *)(this + 0x1b0) = uVar1;
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
  pcVar3 = *(code **)(*plVar2 + 0x2e8);
  std::string::string(asStack_10,"effects/card_game_draw");
  (*pcVar3)(plVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x130))(0,0);
  (**(code **)(*plVar2 + 0x110))(0,0);
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
  (**(code **)(*plVar2 + 0xd8))(plVar2,0);
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
  (**(code **)(*plVar2 + 0x1a0))(plVar2,1);
  uVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
  (**(code **)(*(long *)param_1 + 0x28))(param_1,uVar1,999);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::createTutorialEffect(DTransformNode*) */

void __thiscall CardGameBoard::createTutorialEffect(CardGameBoard *this,DTransformNode *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  DRefPtr<DAnimNode> aDStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DAnimNode>::DRefPtr(aDStack_18);
  uVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
  *(undefined8 *)(this + 0x1d0) = uVar1;
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
  pcVar3 = *(code **)(*plVar2 + 0x2e8);
  std::string::string(asStack_10,"effects/tutorial_finger");
  (*pcVar3)(plVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x130))(0,0);
  (**(code **)(*plVar2 + 0x110))(0,0);
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
  (**(code **)(*plVar2 + 0xd8))(plVar2,0);
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
  (**(code **)(*plVar2 + 0x1a0))(plVar2,1);
  uVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
  (**(code **)(*(long *)param_1 + 0x28))(param_1,uVar1,9999);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::TriggerTutorial(DVec2, DVec2, float, bool, bool) */

void CardGameBoard::TriggerTutorial
               (long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,char param_5)

{
  long lVar1;
  DAction *pDVar2;
  Effect_Barrage *this;
  undefined8 uVar3;
  char *__s;
  long *plVar4;
  code *pcVar5;
  DRefPtr<DMove> aDStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_5 == '\0') {
    (**(code **)(**(long **)(param_1 + 0x1d0) + 0x108))(*(long **)(param_1 + 0x1d0),param_3);
    (**(code **)(**(long **)(param_1 + 0x1d0) + 0xd8))(*(long **)(param_1 + 0x1d0),1);
    plVar4 = *(long **)(param_1 + 0x1d0);
    __s = "idle3";
    pcVar5 = *(code **)(*plVar4 + 0x348);
  }
  else {
    DRefPtr<DMove>::DRefPtr(aDStack_30);
    lVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_30);
    lVar1 = (*(code *)**(undefined8 **)(lVar1 + 0x90))(lVar1 + 0x90,param_2);
    pDVar2 = (DAction *)(**(code **)(*(long *)(lVar1 + 0x90) + 8))(lVar1 + 0x90,param_3);
    this = (Effect_Barrage *)DAction::setDuration(pDVar2,1.5);
    pDVar2 = (DAction *)Effect_Barrage::SetViceBarrage(this,(Effect_Barrage *)0x63);
    FUN_03579150(afStack_28,param_1);
    DAction::onDone(pDVar2,(function *)afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    plVar4 = *(long **)(param_1 + 0x1d0);
    uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_30);
    (**(code **)(*plVar4 + 0x298))(plVar4,uVar3);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_30);
    (**(code **)(**(long **)(param_1 + 0x1d0) + 0xd8))(*(long **)(param_1 + 0x1d0),1);
    plVar4 = *(long **)(param_1 + 0x1d0);
    __s = "idle1";
    pcVar5 = *(code **)(*plVar4 + 0x348);
  }
  std::string::string((string *)aDStack_30,__s);
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)afStack_28);
  (*pcVar5)(plVar4,(string *)aDStack_30,(function<void(Sexy::Graphics*)> *)afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  std::string::~string((string *)aDStack_30);
  nop();
  plVar4 = *(long **)(param_1 + 0x2b8);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0xd8))(plVar4,param_4);
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2b8) + 0x150) + 0x10))
              (*(long *)(param_1 + 0x2b8) + 0x150,param_4,0xffffd8f1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::CreateTutorialTouch() */

void __thiscall CardGameBoard::CreateTutorialTouch(CardGameBoard *this)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  DTouchCloseLayer *pDVar4;
  code *pcVar5;
  DRefPtr<DTouchCloseLayer> aDStack_40 [8];
  CardGameBoard *local_38;
  DRefPtr<DSprite9SliceNode> aDStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DTouchCloseLayer>::DRefPtr(aDStack_40);
  uVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
  *(undefined8 *)(this + 0x2b8) = uVar1;
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x110))(0,0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x130))(0,0);
  pcVar5 = *(code **)(*plVar2 + 0x210);
  (**(code **)(**(long **)(this + 400) + 0x218))(&local_38,*(long **)(this + 400));
  (*pcVar5)(plVar2,&local_38);
  lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
  (**(code **)(*(long *)(lVar3 + 0x150) + 0x10))(lVar3 + 0x150,0,0);
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
  (**(code **)(*plVar2 + 0xd8))(plVar2,0);
  pDVar4 = (DTouchCloseLayer *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
  local_38 = this;
  DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_30,(DRefPtr *)aDStack_40);
  FUN_0357c504(afStack_28,&local_38);
  DTouchCloseLayer::onTouchEndedCallback(pDVar4,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  FUN_03553580(&local_38);
  uVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
  (**(code **)(*(long *)this + 0x368))(this,uVar1,99999);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameBoard::onRefillCallback(std::function<void (int)>) */

void __thiscall CardGameBoard::onRefillCallback(CardGameBoard *this,function *param_2)

{
  std::function<void(int)>::operator=((function<void(int)> *)(this + 0x290),param_2);
  return;
}


/* CardGameBoard::onCreateCardCallback(std::function<void (int)>) */

void __thiscall CardGameBoard::onCreateCardCallback(CardGameBoard *this,function *param_2)

{
  std::function<void(int)>::operator=((function<void(int)> *)(this + 0x270),param_2);
  return;
}


/* CardGameBoard::OnNarrativeTutorialEndCompleted() */

void CardGameBoard::OnNarrativeTutorialEndCompleted(void)

{
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),false);
  MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::NotifyCardTutorial,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::passTouchToBoard(CardGameBoard::TouchState, Sexy::Touch const&) */

void __thiscall CardGameBoard::passTouchToBoard(undefined8 param_1,int param_2,Touch *param_3)

{
  CardBoardMgr *this;
  long lVar1;
  Touch aTStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Touch::Touch(aTStack_40,param_3);
  this = (CardBoardMgr *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  CardBoardMgr::ConvertToBoardTouch(this,aTStack_40);
  lVar1 = **(long **)(gLawnApp + 0x9f0);
  if (param_2 == 0) {
    (**(code **)(lVar1 + 0x250))(*(long **)(gLawnApp + 0x9f0),aTStack_40);
  }
  else if (param_2 == 1) {
    (**(code **)(lVar1 + 600))();
  }
  else {
    (**(code **)(lVar1 + 0x260))();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::createCursor(Card*, Sexy::Touch const&) */

void __thiscall CardGameBoard::createCursor(CardGameBoard *this,Card *param_1,Touch *param_2)

{
  CardBoardMgr *this_00;
  Touch aTStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Card *)0x0) {
    Sexy::Touch::Touch(aTStack_40,param_2);
    this_00 = (CardBoardMgr *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    CardBoardMgr::ConvertToBoardTouch(this_00,aTStack_40);
    Card::DisplayCursor(param_1,param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameBoard::GetCardInitialPosition(Card*) */

void CardGameBoard::GetCardInitialPosition(Card *param_1)

{
  int iVar1;
  CardBoardMgr *this;
  long in_x1;
  DVec2 *in_x8;
  float fVar2;
  
  this = (CardBoardMgr *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  iVar1 = FUN_03575234(*(undefined4 *)(in_x1 + 0x2b0));
  fVar2 = (float)CardBoardMgr::CalcOffsetXByCenterPt(this,iVar1,*(float *)(param_1 + 0x240));
  DVec2::DVec2(in_x8,(*(float *)(param_1 + 0x238) + *(float *)(param_1 + 0x230)) - fVar2,
               *(float *)(param_1 + 0x23c));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::GetCardInitialPosition(int) */

void CardGameBoard::GetCardInitialPosition(int param_1)

{
  int iVar1;
  ulong uVar2;
  BaseTaskResource *this;
  CardBoardMgr *this_00;
  int in_w1;
  DVec2 *in_x8;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar2 = (ulong)(uint)param_1;
  fVar4 = 0.0;
  local_8 = ___stack_chk_guard;
  iVar3 = 0;
  PieceConfig::PieceConfig((PieceConfig *)&local_18);
  fVar5 = *(float *)(uVar2 + 0x244);
  while( true ) {
    this = (BaseTaskResource *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    iVar1 = Sexy::BaseTaskResource::GetType(this);
    if (iVar1 <= iVar3) break;
    iVar3 = iVar3 + 1;
    fVar4 = fVar4 + *(float *)(uVar2 + 0x240);
  }
  DVec2::DVec2((DVec2 *)&local_10,fVar4 * 0.5,fVar5 * 0.5);
  local_18 = local_10;
  this_00 = (CardBoardMgr *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  fVar4 = (float)CardBoardMgr::CalcInitialOffsetXByCenterPt(this_00,in_w1,*(float *)(uVar2 + 0x240))
  ;
  DVec2::DVec2(in_x8,(*(float *)(uVar2 + 0x238) + (float)local_18) - fVar4,*(float *)(uVar2 + 0x23c)
              );
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::VerifyCardDestination(Sexy::RtWeakPtr<CardObject>, CardDestination) */

void CardGameBoard::VerifyCardDestination(long param_1,RtWeakPtrBase *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(param_1 + 0x138))
  ;
  local_18 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(param_1 + 0x138));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18),
        cVar1 = '\0', bVar2) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Card::GetCardObject();
    cVar1 = Sexy::RtWeakPtrBase::operator==(aRStack_10,param_2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 != '\0') break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::EnableHandCards(bool) */

void __thiscall CardGameBoard::EnableHandCards(CardGameBoard *this,bool param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x138));
  local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x138));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    (**(code **)(*(long *)*puVar2 + 0x338))((long *)*puVar2,param_1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::EnableHandCardsTouch(bool) */

void __thiscall CardGameBoard::EnableHandCardsTouch(CardGameBoard *this,bool param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x138));
  local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x138));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    (**(code **)(*(long *)*puVar2 + 0x348))((long *)*puVar2,param_1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameBoard::enableAllBtns(bool) */

void __thiscall CardGameBoard::enableAllBtns(CardGameBoard *this,bool param_1)

{
  (**(code **)(**(long **)(this + 0x200) + 0x338))(*(long **)(this + 0x200),param_1);
  (**(code **)(**(long **)(this + 0x1d8) + 0x338))(*(long **)(this + 0x1d8),param_1);
  (**(code **)(**(long **)(this + 0x1e0) + 0x338))(*(long **)(this + 0x1e0),param_1);
  EnableHandCardsTouch(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::setCardsVisible(bool) */

void __thiscall CardGameBoard::setCardsVisible(CardGameBoard *this,bool param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x138));
  local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x138));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    (**(code **)(*(long *)*puVar2 + 0xd8))((long *)*puVar2,param_1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::onSetTutorialStep(TutorialStep) */

void CardGameBoard::onSetTutorialStep(CardGameBoard *param_1)

{
  bool bVar1;
  int iVar2;
  GachaConfig *pGVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  CrazyNPCManager *pCVar8;
  long *plVar9;
  Card *pCVar10;
  undefined8 local_60;
  undefined8 local_58;
  Point aPStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(param_1 + 0x2b0)) {
  case 1:
    enableAllBtns(param_1,false);
    CreateTutorialTouch(param_1);
    Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
    MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::NotifyCardTutorial,true)
    ;
    pCVar8 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string((string *)&local_60,"CARD_GAME_START_INTRO");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,OnNarrativeTutorialStartCompleted);
    Sexy::Delegate0::Delegate0<CardGameBoard,void(CardGameBoard::*)()>(aDStack_38,aPStack_50);
    std::string::string((string *)&local_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar8,(string *)&local_60,aDStack_38,(string *)&local_58);
    std::string::~string((string *)&local_58);
    nop();
    std::string::~string((string *)&local_60);
    nop();
    break;
  case 5:
  case 6:
    EnableHandCardsTouch(param_1,true);
    break;
  case 9:
    (**(code **)(**(long **)(param_1 + 0x200) + 0x338))(*(long **)(param_1 + 0x200),1);
    EnableHandCards(param_1,false);
    break;
  case 10:
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    break;
  case 0xb:
    EnableHandCardsTouch(param_1,true);
    pGVar3 = (GachaConfig *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    puVar4 = (undefined8 *)GachaConfig::GetGachaPlantRewardList(pGVar3);
    local_60 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>
                         ((vector *)(param_1 + 0x138));
    local_58 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(param_1 + 0x138))
    ;
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar1)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60)
      ;
      plVar9 = (long *)*puVar5;
      iVar2 = FUN_03575238(*(undefined4 *)((long)plVar9 + 0x2b4));
      piVar6 = (int *)FUN_03575258(*puVar4,0);
      if (iVar2 == *piVar6) {
        (**(code **)(*plVar9 + 0x338))(plVar9,1);
        pCVar10 = (Card *)*puVar5;
        lVar7 = FUN_03575258(*puVar4,0);
        Sexy::Point::Point(aPStack_50,*(int *)(lVar7 + 4),*(int *)(lVar7 + 8));
        Card::SetTutorialGrid(pCVar10,aPStack_50);
      }
      else {
        (**(code **)(*plVar9 + 0x338))(plVar9,0);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
    }
    break;
  case 0xc:
    EnableHandCardsTouch(param_1,true);
    pGVar3 = (GachaConfig *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    puVar4 = (undefined8 *)GachaConfig::GetGachaPlantRewardList(pGVar3);
    local_60 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>
                         ((vector *)(param_1 + 0x138));
    local_58 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(param_1 + 0x138))
    ;
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar1)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60)
      ;
      plVar9 = (long *)*puVar5;
      iVar2 = FUN_03575238(*(undefined4 *)((long)plVar9 + 0x2b4));
      piVar6 = (int *)FUN_03575258(*puVar4,1);
      if (iVar2 == *piVar6) {
        (**(code **)(*plVar9 + 0x338))(plVar9,1);
        pCVar10 = (Card *)*puVar5;
        lVar7 = FUN_03575258(*puVar4,1);
        Sexy::Point::Point(aPStack_50,*(int *)(lVar7 + 4),*(int *)(lVar7 + 8));
        Card::SetTutorialGrid(pCVar10,aPStack_50);
      }
      else {
        (**(code **)(*plVar9 + 0x338))(plVar9,0);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
    }
    break;
  case 0xd:
    EnableHandCardsTouch(param_1,true);
    pGVar3 = (GachaConfig *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    puVar4 = (undefined8 *)GachaConfig::GetGachaPlantRewardList(pGVar3);
    local_60 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>
                         ((vector *)(param_1 + 0x138));
    local_58 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(param_1 + 0x138))
    ;
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar1)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60)
      ;
      plVar9 = (long *)*puVar5;
      iVar2 = FUN_03575238(*(undefined4 *)((long)plVar9 + 0x2b4));
      piVar6 = (int *)FUN_03575258(*puVar4,2);
      if (iVar2 == *piVar6) {
        (**(code **)(*plVar9 + 0x338))(plVar9,1);
        pCVar10 = (Card *)*puVar5;
        lVar7 = FUN_03575258(*puVar4,2);
        Sexy::Point::Point(aPStack_50,*(int *)(lVar7 + 4),*(int *)(lVar7 + 8));
        Card::SetTutorialGrid(pCVar10,aPStack_50);
      }
      else {
        (**(code **)(*plVar9 + 0x338))(plVar9,0);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::CheckCost() */

void __thiscall CardGameBoard::CheckCost(CardGameBoard *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x138));
  local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x138));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    iVar2 = Card::GetCost((Card *)*puVar4);
    lVar5 = Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    iVar3 = FUN_0357522c(*(undefined4 *)(lVar5 + 0x10));
    if (iVar3 < iVar2) {
      (**(code **)(*(long *)*puVar4 + 0x338))((long *)*puVar4,0);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameBoard::TurnPlayerPlayCards() */

void __thiscall CardGameBoard::TurnPlayerPlayCards(CardGameBoard *this)

{
  EnableHandCardsTouch(this,true);
  CheckCost(this);
  resetTurnDisplay(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::OnDrawCard(Card*) */

void CardGameBoard::OnDrawCard(Card *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uStack_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>
                        ((vector *)(param_1 + 0x138));
  uStack_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(param_1 + 0x138));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&uStack_18,(__normal_iterator *)&uStack_10), bVar1)
  {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_18);
    iVar2 = Card::GetCost((Card *)*puVar4);
    lVar5 = Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    iVar3 = FUN_0357522c(*(undefined4 *)(lVar5 + 0x10));
    if (iVar3 < iVar2) {
      (**(code **)(*(long *)*puVar4 + 0x338))((long *)*puVar4,0);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&uStack_18);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::canHideCards() */

void __thiscall CardGameBoard::canHideCards(CardGameBoard *this)

{
  DArray<Card*> *this_00;
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = HasTutorial(this);
  if (cVar1 == '\0') {
    this_00 = (DArray<Card*> *)(this + 0x138);
    cVar1 = DArray<Card*>::empty(this_00);
    if (cVar1 == '\0') {
      local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)this_00);
      local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)this_00);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar2) {
        puVar3 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        cVar1 = (**(code **)(*(long *)*puVar3 + 0x288))((long *)*puVar3);
        uVar4 = 0;
        if ((cVar1 != '\0') || (*(int *)(this + 0x268) != 1)) goto LAB_0357ed78;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      }
      uVar4 = 1;
      goto LAB_0357ed78;
    }
  }
  uVar4 = 0;
LAB_0357ed78:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::resetArrowEffects() */

void __thiscall CardGameBoard::resetArrowEffects(CardGameBoard *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x1b8));
  local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x1b8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    (**(code **)(*(long *)*puVar2 + 0x178))(0,(long *)*puVar2);
    (**(code **)(*(long *)*puVar2 + 400))((long *)*puVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::createLibraryUI(DTransformNode*) */

void __thiscall CardGameBoard::createLibraryUI(CardGameBoard *this,DTransformNode *param_1)

{
  undefined8 uVar1;
  DTransformNode *pDVar2;
  long *plVar3;
  long *plVar4;
  CardGameBoardConfig *pCVar5;
  code *pcVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  DRefPtr<DButton> aDStack_78 [8];
  DRefPtr<DSpriteNode> aDStack_70 [8];
  DRefPtr<DSpriteNode> aDStack_68 [8];
  DRefPtr<DStringNode> aDStack_60 [8];
  DVec2 aDStack_58 [8];
  string asStack_50 [8];
  DVec2 aDStack_48 [8];
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  string asStack_38 [4];
  float local_34;
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DButton>::DRefPtr(aDStack_78);
  uVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  *(undefined8 *)(this + 0x1d8) = uVar1;
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_70);
  pDVar2 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  std::string::string(asStack_38,"libraryNormalNode");
  plVar3 = (long *)DTransformNode::setName(pDVar2,asStack_38);
  pcVar6 = *(code **)(*plVar3 + 0x2e8);
  std::string::string(asStack_30,"IMAGE_UI_CARD_GAME_LIBRARY_NORMAL");
  plVar3 = (long *)(*pcVar6)(plVar3,asStack_30);
  (**(code **)(*plVar3 + 0x110))(0,0);
  std::string::~string(asStack_30);
  nop();
  std::string::~string(asStack_38);
  nop();
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_68);
  pDVar2 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_68);
  std::string::string(asStack_38,"librarySelectNode");
  plVar3 = (long *)DTransformNode::setName(pDVar2,asStack_38);
  pcVar6 = *(code **)(*plVar3 + 0x2e8);
  std::string::string(asStack_30,"IMAGE_UI_CARD_GAME_LIBRARY_NORMAL");
  plVar3 = (long *)(*pcVar6)(plVar3,asStack_30);
  (**(code **)(*plVar3 + 0x110))(0,0);
  std::string::~string(asStack_30);
  nop();
  std::string::~string(asStack_38);
  nop();
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  uVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  (**(code **)(*plVar3 + 0x388))(plVar3,uVar1);
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  uVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_68);
  (**(code **)(*plVar3 + 0x390))(plVar3,uVar1);
  DRefPtr<DStringNode>::DRefPtr(aDStack_60);
  pDVar2 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  std::string::string(asStack_30,"libraryDisplay");
  DTransformNode::setName(pDVar2,asStack_30);
  std::string::~string(asStack_30);
  nop();
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x338))(plVar3,&DAT_055b55e0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x348))
                             (plVar3,PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x350))(plVar3,1);
  pcVar6 = *(code **)(*plVar3 + 0x108);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  (**(code **)(*plVar4 + 0xd0))(aDStack_58,0x3f000000,0x3f000000);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar5 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_50,"LibraryBtnDisplayOffsetY");
  fVar7 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar5,asStack_50,32.0);
  DVec2::DVec2(aDStack_48,0.0,fVar7);
  DVec2::operator+(aDStack_58,aDStack_48);
  plVar3 = (long *)(*pcVar6)(plVar3,auStack_40);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x130))(0x3f000000,0x3f000000);
  pcVar6 = *(code **)(*plVar3 + 0x138);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar5 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_38,"LibraryBtnDisplayWidth");
  uVar8 = CardGameBoardConfig::GetCommonConfigValue(pCVar5,asStack_38,200.0);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar5 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_30,"LibraryBtnDisplayHeight");
  uVar9 = CardGameBoardConfig::GetCommonConfigValue(pCVar5,asStack_30,60.0);
  plVar3 = (long *)(*pcVar6)(0,0,uVar8,uVar9,plVar3);
  (**(code **)(*plVar3 + 600))(plVar3,1);
  std::string::~string(asStack_30);
  nop();
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_50);
  nop();
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  uVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  (**(code **)(*plVar3 + 0x30))(plVar3,uVar1);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar5 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_30,"LibraryBtnOffsetX");
  uVar8 = CardGameBoardConfig::GetCommonConfigValue(pCVar5,asStack_30,0.0);
  std::string::~string(asStack_30);
  nop();
  (**(code **)(*(long *)param_1 + 0x218))(auStack_40,param_1);
  fVar7 = (float)FUN_035791d0(local_3c);
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  (**(code **)(*plVar3 + 0x218))(asStack_38);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar5 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_30,"LibraryBtnOffsetY");
  fVar10 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar5,asStack_30,55.0);
  std::string::~string(asStack_30);
  nop();
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x110))(uVar8,(fVar7 - local_34) - fVar10);
  (**(code **)(*plVar3 + 0x130))(0,0);
  uVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  (**(code **)(*(long *)param_1 + 0x28))(param_1,uVar1,0x14);
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  pcVar6 = *(code **)(*plVar3 + 0x350);
  FUN_035789ac(afStack_28,this);
  (*pcVar6)(plVar3,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_60);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_68);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_70);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::CreateGraveyard(DTransformNode*) */

void __thiscall CardGameBoard::CreateGraveyard(CardGameBoard *this,DTransformNode *param_1)

{
  undefined8 uVar1;
  DTransformNode *pDVar2;
  long *plVar3;
  long *plVar4;
  CardGameBoardConfig *pCVar5;
  code *pcVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  DRefPtr<DButton> aDStack_78 [8];
  DRefPtr<DSpriteNode> aDStack_70 [8];
  DRefPtr<DSpriteNode> aDStack_68 [8];
  DRefPtr<DStringNode> aDStack_60 [8];
  DVec2 aDStack_58 [8];
  string asStack_50 [8];
  DVec2 aDStack_48 [8];
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  string asStack_38 [4];
  float local_34;
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DButton>::DRefPtr(aDStack_78);
  uVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  *(undefined8 *)(this + 0x1e0) = uVar1;
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_70);
  pDVar2 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  std::string::string(asStack_38,"graveyardNormalNode");
  plVar3 = (long *)DTransformNode::setName(pDVar2,asStack_38);
  pcVar6 = *(code **)(*plVar3 + 0x2e8);
  std::string::string(asStack_30,"IMAGE_UI_CARD_GAME_GRAVEYARD_NORMAL");
  plVar3 = (long *)(*pcVar6)(plVar3,asStack_30);
  (**(code **)(*plVar3 + 0x110))(0,0);
  std::string::~string(asStack_30);
  nop();
  std::string::~string(asStack_38);
  nop();
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_68);
  pDVar2 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_68);
  std::string::string(asStack_38,"graveyardSelectNode");
  plVar3 = (long *)DTransformNode::setName(pDVar2,asStack_38);
  pcVar6 = *(code **)(*plVar3 + 0x2e8);
  std::string::string(asStack_30,"IMAGE_UI_CARD_GAME_GRAVEYARD_NORMAL");
  plVar3 = (long *)(*pcVar6)(plVar3,asStack_30);
  (**(code **)(*plVar3 + 0x110))(0,0);
  std::string::~string(asStack_30);
  nop();
  std::string::~string(asStack_38);
  nop();
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  uVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  (**(code **)(*plVar3 + 0x388))(plVar3,uVar1);
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  uVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_68);
  (**(code **)(*plVar3 + 0x390))(plVar3,uVar1);
  DRefPtr<DStringNode>::DRefPtr(aDStack_60);
  pDVar2 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  std::string::string(asStack_30,"graveyardDisplay");
  DTransformNode::setName(pDVar2,asStack_30);
  std::string::~string(asStack_30);
  nop();
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x338))(plVar3,&DAT_055b55e0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x348))
                             (plVar3,PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x350))(plVar3,1);
  pcVar6 = *(code **)(*plVar3 + 0x108);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  (**(code **)(*plVar4 + 0xd0))(aDStack_58,0x3f000000,0x3f000000);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar5 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_50,"GraveyardBtnDisplayOffsetY");
  fVar7 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar5,asStack_50,32.0);
  DVec2::DVec2(aDStack_48,0.0,fVar7);
  DVec2::operator+(aDStack_58,aDStack_48);
  plVar3 = (long *)(*pcVar6)(plVar3,auStack_40);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x130))(0x3f000000,0x3f000000);
  pcVar6 = *(code **)(*plVar3 + 0x138);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar5 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_38,"GraveyardBtnDisplayWidth");
  uVar8 = CardGameBoardConfig::GetCommonConfigValue(pCVar5,asStack_38,200.0);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar5 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_30,"GraveyardBtnDisplayHeight");
  uVar9 = CardGameBoardConfig::GetCommonConfigValue(pCVar5,asStack_30,60.0);
  plVar3 = (long *)(*pcVar6)(0,0,uVar8,uVar9,plVar3);
  (**(code **)(*plVar3 + 600))(plVar3,1);
  std::string::~string(asStack_30);
  nop();
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_50);
  nop();
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  uVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  (**(code **)(*plVar3 + 0x30))(plVar3,uVar1);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar5 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_30,"GraveyardBtnOffsetX");
  uVar8 = CardGameBoardConfig::GetCommonConfigValue(pCVar5,asStack_30,500.0);
  std::string::~string(asStack_30);
  nop();
  (**(code **)(*(long *)param_1 + 0x218))(auStack_40,param_1);
  fVar7 = (float)FUN_035791d0(local_3c);
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  (**(code **)(*plVar3 + 0x218))(asStack_38);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar5 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_30,"GraveyardBtnOffsetY");
  fVar10 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar5,asStack_30,15.0);
  std::string::~string(asStack_30);
  nop();
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x110))(uVar8,(fVar7 - local_34) - fVar10);
  (**(code **)(*plVar3 + 0x130))(0,0);
  uVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  (**(code **)(*(long *)param_1 + 0x28))(param_1,uVar1,0x14);
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  pcVar6 = *(code **)(*plVar3 + 0x350);
  FUN_03578a08(afStack_28,this);
  (*pcVar6)(plVar3,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_60);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_68);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_70);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::createBounceEffect(DTransformNode*) */

void __thiscall CardGameBoard::createBounceEffect(CardGameBoard *this,DTransformNode *param_1)

{
  float fVar1;
  char cVar2;
  long *plVar3;
  CardGameBoardConfig *pCVar4;
  DAction *pDVar5;
  undefined8 uVar6;
  code *pcVar7;
  float fVar8;
  DRefPtr<DSequence> aDStack_28 [8];
  DRefPtr<DScale> aDStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)param_1 + 0x288))(param_1);
  if (cVar2 != '\0') {
    (**(code **)(*(long *)param_1 + 0x2a8))(param_1);
    (**(code **)(*(long *)param_1 + 0x140))(0x3f800000,param_1);
  }
  DRefPtr<DSequence>::DRefPtr(aDStack_28);
  DRefPtr<DScale>::DRefPtr(aDStack_20);
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_20);
  pcVar7 = *(code **)(*plVar3 + 0x68);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar4 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_18,"CostBounceScale");
  CardGameBoardConfig::GetCommonConfigValue(pCVar4,asStack_18,1.5);
  pDVar5 = (DAction *)(*pcVar7)(plVar3);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar4 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_10,"CostBounceDuration");
  fVar1 = _FUN_035809dc;
  fVar8 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar4,asStack_10,_FUN_035809dc);
  DAction::setDuration(pDVar5,fVar8);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  DRefPtr<DScale>::DRefPtr((DRefPtr<DScale> *)asStack_10);
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_10);
  pDVar5 = (DAction *)(**(code **)(*plVar3 + 0x68))(0x3f800000);
  DAction::setDuration(pDVar5,fVar1);
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_28);
  uVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_20);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))(plVar3,uVar6);
  uVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_10);
  (**(code **)(*plVar3 + 0x40))(plVar3,uVar6);
  uVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_28);
  (**(code **)(*(long *)param_1 + 0x298))(param_1,uVar6);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)asStack_10);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_20);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::SlideCards(bool, Card*) */

void __thiscall CardGameBoard::SlideCards(CardGameBoard *this,bool param_1,Card *param_2)

{
  vector *pvVar1;
  bool bVar2;
  Card *pCVar3;
  long *plVar4;
  long lVar5;
  DAction *this_00;
  CardGameBoardConfig *this_01;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 auStack_20 [8];
  DRefPtr<DMove> aDStack_18 [8];
  string asStack_10 [4];
  float local_c;
  long local_8;
  
  pvVar1 = (vector *)(this + 0x138);
  local_8 = ___stack_chk_guard;
  pCVar3 = (Card *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  DArray<Card*>::at((long)pvVar1);
  CardBoardMgr::GetSlideOffset(pCVar3);
  fVar8 = *(float *)(this + 0x23c);
  local_30 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>(pvVar1);
  local_28 = std::end<std::vector<DButton*,std::allocator<DButton*>>>(pvVar1);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    if ((param_2 == (Card *)0x0) || ((Card *)*plVar4 != param_2)) {
      (**(code **)(*(long *)*plVar4 + 0x2a8))();
      pCVar3 = (Card *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
      fVar7 = fVar8 + local_c;
      if (param_1) {
        fVar7 = *(float *)(this + 0x23c);
      }
      CardBoardMgr::CalcSlideOffset(pCVar3,SUB81(*plVar4,0),fVar7);
      DRefPtr<DMove>::DRefPtr(aDStack_18);
      lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
      this_00 = (DAction *)(**(code **)(*(long *)(lVar5 + 0x90) + 0x10))(lVar5 + 0x90,auStack_20);
      Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
      this_01 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
      std::string::string(asStack_10,"SlideCardsMoveDuration");
      fVar7 = (float)CardGameBoardConfig::GetCommonConfigValue(this_01,asStack_10,0.2);
      DAction::setDuration(this_00,fVar7);
      std::string::~string(asStack_10);
      nop();
      plVar4 = (long *)*plVar4;
      uVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
      (**(code **)(*plVar4 + 0x298))(plVar4,uVar6);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_18);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::HideCards(Sexy::Touch const&) */

void __thiscall CardGameBoard::HideCards(CardGameBoard *this,Touch *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  DAction *this_00;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 local_58;
  undefined8 local_50;
  function<bool(Sexy::Touch_const&)> afStack_48 [32];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x264) == 0) {
    cVar1 = canHideCards(this);
    if (cVar1 != '\0') {
      EnableHandCardsTouch(this,false);
      SlideCards(this,true,(Card *)0x0);
      *(undefined4 *)(this + 0x264) = 1;
    }
  }
  else {
    local_58 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x138));
    local_50 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x138));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar2)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58)
      ;
      cVar1 = Card::InsideTouch((Card *)*puVar3,param_1);
      if (cVar1 != '\0') {
        SlideCards(this,false,(Card *)0x0);
        DRefPtr<DUpdateAction>::DRefPtr((DRefPtr<DUpdateAction> *)&local_50);
        plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
        pcVar6 = *(code **)(*plVar4 + 0x40);
        FUN_03578728(afStack_48,this);
        this_00 = (DAction *)(*pcVar6)(plVar4,0,afStack_48);
        FUN_03578dac(afStack_28,this);
        DAction::onDone(this_00,(function *)afStack_28);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_48);
        plVar4 = *(long **)(this + 400);
        uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
        (**(code **)(*plVar4 + 0x298))(plVar4,uVar5);
        DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_50);
        break;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::CancelCard(Card*) */

void __thiscall CardGameBoard::CancelCard(CardGameBoard *this,Card *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  GetCardInitialPosition((Card *)this);
  (**(code **)(*(long *)param_1 + 0x110))(local_10,local_c,param_1);
  uVar2 = FUN_03575234(*(undefined4 *)(param_1 + 0x2b0));
  (**(code **)(*(long *)param_1 + 0x100))(param_1,uVar2);
  SlideCards(this,false,param_1);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::CardGameBoard() */

void __thiscall CardGameBoard::CardGameBoard(CardGameBoard *this)

{
  long lVar1;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0665c940;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x138));
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x150));
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x168));
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x198));
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x1b8));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x20c));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x218));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x230));
  Sexy::SexyVector4::SexyVector4((SexyVector4 *)(this + 0x238));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x248));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x270));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x290));
  std::string::string(asStack_10,"UI_CardGame");
  DNodeWidget::loadGroup((DNodeWidget *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"EndLevelAward");
  DNodeWidget::loadGroup((DNodeWidget *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"NewTutorial_Effect");
  DNodeWidget::loadGroup((DNodeWidget *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x264) = 0;
  *(undefined4 *)(this + 0x208) = uVar2;
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x268) = 0;
  *(undefined4 *)(this + 0x260) = 0xffffffff;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined4 *)(this + 0x2b0) = 0xffffffff;
  this[0x2b4] = (CardGameBoard)0x0;
  this[0x2b5] = (CardGameBoard)0x0;
  *(undefined4 *)(this + 0x2c0) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameBoard::create() */

CardGameBoard * CardGameBoard::create(void)

{
  CardGameBoard *this;
  
  if (s_pWidgetHandler != (CardGameBoard *)0x0) {
    return s_pWidgetHandler;
  }
  this = ::operator_new(0x2c8);
  CardGameBoard(this);
  s_pWidgetHandler = this;
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x338))(this,1);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::~CardGameBoard() */

void __thiscall CardGameBoard::~CardGameBoard(CardGameBoard *this)

{
  DTimerManager *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0665c940;
  this_00 = (DTimerManager *)DTimerManager::getInstane();
  std::string::string(asStack_10,"ClearPlayedImageNodes");
  DTimerManager::removeTimer(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  s_pWidgetHandler = 0;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x290));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x270));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x248));
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::~vector
            ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)(this + 0x218));
  DArray<DAnimNode*>::~DArray((DArray<DAnimNode*> *)(this + 0x1b8));
  DArray<DSpriteNode*>::~DArray((DArray<DSpriteNode*> *)(this + 0x198));
  DArray<Card*>::~DArray((DArray<Card*> *)(this + 0x168));
  DArray<Card*>::~DArray((DArray<Card*> *)(this + 0x150));
  DArray<Card*>::~DArray((DArray<Card*> *)(this + 0x138));
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameBoard::~CardGameBoard() */

void __thiscall CardGameBoard::~CardGameBoard(CardGameBoard *this)

{
  ~CardGameBoard(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* CardGameBoard::moveArrowEffect(CardGameBoard::CardArrowEffectType, DVec2) */

void __thiscall
CardGameBoard::moveArrowEffect(CardGameBoard *this,undefined4 param_2,TPoint *param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float *pfVar5;
  DAction *pDVar6;
  TPoint *pTVar7;
  CardGameBoardConfig *pCVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  DVec2 *pDVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  code *pcVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  ulong uVar22;
  ulong local_1a0;
  ulong local_190;
  CardGameBoard *local_180;
  FPoint *pFStack_178;
  undefined8 local_170;
  CardGameBoard *local_160;
  undefined8 uStack_158;
  long *local_150;
  undefined8 local_140;
  long lStack_138;
  CardGameBoard *local_130;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8 [2];
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  float local_c8;
  float local_c4;
  DVec2 aDStack_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined8 local_90;
  undefined4 local_88;
  uint local_84;
  CardGameBoard *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long *local_68;
  CardGameBoard *local_60;
  FPoint *local_58;
  undefined8 local_50;
  function<bool(Sexy::Touch_const&)> afStack_48 [32];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_2) {
  case 0:
    fVar17 = 0.0;
    pTVar7 = (TPoint *)(**(code **)(**(long **)(this + 0x1d8) + 0x1b8))(*(long **)(this + 0x1d8));
    Sexy::FPoint::FPoint((FPoint *)&local_c8,pTVar7);
    local_c4 = local_c4 - 35.0;
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_78,"LibraryToHandsEndXOffset");
    fVar19 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_78,500.0);
    fVar21 = *(float *)(this + 0x23c);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_60,"LibraryToHandsEndYOffset");
    fVar18 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_60,70.0);
    DVec2::DVec2(aDStack_c0,fVar19,fVar18 + fVar21);
    std::string::~string((string *)&local_60);
    nop();
    std::string::~string((string *)&local_78);
    nop();
    local_b8 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x1b8));
    local_b0 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x1b8));
    uVar15 = 0;
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_b8,(__normal_iterator *)&local_b0), bVar1)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8)
      ;
      GetCardInitialPosition((int)this);
      DVec2::DVec2((DVec2 *)&local_a0,local_c8,local_a4);
      DVec2::DVec2((DVec2 *)&local_98,local_a8,local_a4);
      DRefPtr<DMove>::DRefPtr((DRefPtr<DMove> *)&local_78);
      lVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
      lVar9 = (*(code *)**(undefined8 **)(lVar9 + 0x90))(lVar9 + 0x90,(DVec2 *)&local_a0);
      pDVar6 = (DAction *)
               (**(code **)(*(long *)(lVar9 + 0x90) + 8))(lVar9 + 0x90,(DVec2 *)&local_98);
      pDVar6 = (DAction *)DAction::setDuration(pDVar6,0.4);
      pDVar6 = (DAction *)DAction::setDelayTime(pDVar6,fVar17);
      local_140 = *puVar3;
      local_88 = 0;
      lStack_138 = (ulong)uVar15 << 0x20;
      local_130 = this;
      local_90 = local_140;
      local_84 = uVar15;
      local_80 = this;
      FUN_03578e08(afStack_28,&local_140);
      DAction::onDone(pDVar6,(function *)afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      (**(code **)(*(long *)*puVar3 + 0xd8))((long *)*puVar3,1);
      plVar10 = (long *)*puVar3;
      pcVar16 = *(code **)(*plVar10 + 0x348);
      std::string::string((string *)&local_60,"idle");
      std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)afStack_28);
      (*pcVar16)(plVar10,(string *)&local_60,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      std::string::~string((string *)&local_60);
      nop();
      plVar10 = (long *)*puVar3;
      uVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
      (**(code **)(*plVar10 + 0x298))(plVar10,uVar11);
      fVar17 = fVar17 + 0.1;
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_78);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b8);
      uVar15 = uVar15 + 1;
    }
    DRefPtr<DUpdateAction>::DRefPtr((DRefPtr<DUpdateAction> *)&local_60);
    plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    pcVar16 = *(code **)(*plVar10 + 0x40);
    FUN_03578784(afStack_48,this);
    pDVar6 = (DAction *)(*pcVar16)(plVar10,0,afStack_48);
    FUN_03578e68(afStack_28,this,0);
    goto LAB_0358282c;
  case 1:
    resetArrowEffects(this);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_78,"HandsToGraveyardStartXOffset");
    fVar21 = 0.0;
    fVar19 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_78,500.0);
    fVar17 = *(float *)(this + 0x23c);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_60,"HandsToGraveyardStartYOffset");
    fVar18 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_60,70.0);
    DVec2::DVec2((DVec2 *)local_f8,fVar19,fVar18 + fVar17);
    std::string::~string((string *)&local_60);
    nop();
    std::string::~string((string *)&local_78);
    nop();
    pTVar7 = (TPoint *)(**(code **)(**(long **)(this + 0x1e0) + 0x1b8))(*(long **)(this + 0x1e0));
    Sexy::FPoint::FPoint((FPoint *)&local_f0,pTVar7);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_60,"HandsToGraveyardEndXOffset");
    fVar19 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_60,80.0);
    local_f0 = local_f0 - fVar19;
    std::string::~string((string *)&local_60);
    nop();
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_60,"HandsToGraveyardEndYOffset");
    fVar19 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_60,80.0);
    local_ec = local_ec - fVar19;
    std::string::~string((string *)&local_60);
    nop();
    DVec2::getMidpoint((DVec2 *)&local_f0);
    fVar19 = (float)local_90;
    DVec2::getMidpoint((DVec2 *)&local_f0);
    fVar18 = local_78._4_4_;
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_60,"HandsToGraveyardMidYOffset");
    fVar17 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_60,270.0);
    DVec2::DVec2((DVec2 *)&local_e8,fVar19,fVar18 - fVar17);
    std::string::~string((string *)&local_60);
    nop();
    local_e0 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x138));
    local_d8 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x138));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_e0,(__normal_iterator *)&local_d8), bVar1)
    {
      plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_e0);
      local_1a0 = local_1a0 & 0xffffffff00000000 | 1;
      iVar2 = FUN_03575234(*(undefined4 *)(*plVar10 + 0x2b0));
      plVar10 = (long *)DArray<DAnimNode*>::at((long)(this + 0x1b8));
      DRefPtr<DSpawn>::DRefPtr((DRefPtr<DSpawn> *)&local_d0);
      GetCardInitialPosition((int)this);
      DVec2::DVec2(aDStack_c0,local_c8,local_c4);
      Sexy::FPoint::FPoint((FPoint *)&local_b8,(TPoint *)&local_e8);
      Sexy::FPoint::FPoint((FPoint *)&local_b0,(TPoint *)&local_f0);
      pcVar16 = *(code **)(*plVar10 + 0x180);
      pDVar12 = (DVec2 *)(**(code **)(*plVar10 + 0x1b8))(plVar10);
      (**(code **)(*plVar10 + 0xd0))((string *)&local_90,0x3f000000,0x3f000000,plVar10);
      DVec2::operator+(pDVar12,(DVec2 *)&local_90);
      (*pcVar16)(plVar10,(string *)&local_60);
      puVar3 = (undefined8 *)FUN_0357526c(*(undefined8 *)(this + 0x218),(long)iVar2);
      pfVar5 = (float *)(**(code **)(*plVar10 + 0x1b8))(plVar10);
      fVar19 = *pfVar5;
      lVar9 = (**(code **)(*plVar10 + 0x1b8))(plVar10);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_60,fVar19,*(float *)(lVar9 + 4));
      *puVar3 = local_60;
      DRefPtr<DBezier>::DRefPtr((DRefPtr<DBezier> *)&local_a8);
      plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
      plVar13 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13,aDStack_c0);
      plVar13 = (long *)(**(code **)(*plVar13 + 0x58))(plVar13,(FPoint *)&local_b0);
      pDVar6 = (DAction *)
               (**(code **)(*plVar13 + 0x48))(plVar13,(FPoint *)&local_b8,(FPoint *)&local_b8);
      Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
      pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
      std::string::string((string *)&local_60,"HandsToGraveyardDuration");
      fVar19 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_60,1.2);
      DAction::setDuration(pDVar6,fVar19);
      std::string::~string((string *)&local_60);
      nop();
      pDVar6 = (DAction *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
      FUN_03578f20(afStack_28,this,local_1a0);
      DAction::onDone(pDVar6,(function *)afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      DRefPtr<DFade>::DRefPtr((DRefPtr<DFade> *)&local_a0);
      lVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
      pcVar16 = (code *)**(undefined8 **)(lVar9 + 0x90);
      Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
      pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
      std::string::string((string *)&local_98,"HandsToGraveyardFadeStart");
      local_100 = CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_98,1.0);
      lVar9 = (*pcVar16)(lVar9 + 0x90);
      pcVar16 = *(code **)(*(long *)(lVar9 + 0x90) + 8);
      Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
      pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
      std::string::string((string *)&local_90,"HandsToGraveyardFadeEnd");
      local_fc = CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_90,0.0);
      pDVar6 = (DAction *)(*pcVar16)(lVar9 + 0x90);
      Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
      pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
      std::string::string((string *)&local_60,"HandsToGraveyardDuration");
      fVar19 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_60,1.2);
      DAction::setDuration(pDVar6,fVar19);
      std::string::~string((string *)&local_60);
      nop();
      std::string::~string((string *)&local_90);
      nop();
      std::string::~string((string *)&local_98);
      nop();
      plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d0);
      uVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
      plVar13 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13,uVar11);
      uVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
      pDVar6 = (DAction *)(**(code **)(*plVar13 + 0x40))(plVar13,uVar11);
      pDVar6 = (DAction *)DAction::setDelayTime(pDVar6,fVar21);
      local_70 = 1;
      uStack_158 = CONCAT44(uStack_6c,1);
      local_160 = this;
      local_150 = plVar10;
      local_78 = this;
      local_68 = plVar10;
      FUN_03578f7c(afStack_28,&local_160);
      DAction::onDone(pDVar6,(function *)afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      (**(code **)(*plVar10 + 0xd8))(plVar10,1);
      pcVar16 = *(code **)(*plVar10 + 0x348);
      std::string::string((string *)&local_60,"idle2");
      std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)afStack_28);
      (*pcVar16)(plVar10,(string *)&local_60,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      std::string::~string((string *)&local_60);
      nop();
      uVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d0);
      (**(code **)(*plVar10 + 0x298))(plVar10,uVar11);
      onStartMove(this,1,iVar2);
      Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
      pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
      std::string::string((string *)&local_60,"HandsToGraveyardDelay");
      fVar19 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_60,0.1);
      fVar21 = fVar21 + fVar19;
      std::string::~string((string *)&local_60);
      nop();
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_a0);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_a8);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_d0);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_e0);
    }
    DRefPtr<DUpdateAction>::DRefPtr((DRefPtr<DUpdateAction> *)&local_60);
    plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    pcVar16 = *(code **)(*plVar10 + 0x40);
    FUN_0357883c(afStack_48,this);
    pDVar6 = (DAction *)(*pcVar16)(plVar10,0,afStack_48);
    FUN_03578fdc(afStack_28,this,1);
LAB_0358282c:
    DAction::onDone(pDVar6,(function *)afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_48);
    plVar10 = *(long **)(this + 400);
    uVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    (**(code **)(*plVar10 + 0x298))(plVar10,uVar11);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_60);
    break;
  case 3:
    DRefPtr<DMove>::DRefPtr((DRefPtr<DMove> *)&local_a0);
    pDVar6 = (DAction *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    FUN_03578ec4(afStack_28,this,3);
    DAction::onDone(pDVar6,(function *)afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    Sexy::FPoint::FPoint((FPoint *)&local_98,param_3);
    pTVar7 = (TPoint *)(**(code **)(**(long **)(this + 0x1e0) + 0x1b8))(*(long **)(this + 0x1e0));
    Sexy::FPoint::FPoint((FPoint *)&local_90,pTVar7);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_60,"DisplayToGraveyardEndXOffset");
    fVar19 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_60,80.0);
    local_90._0_4_ = (float)local_90 - fVar19;
    std::string::~string((string *)&local_60);
    nop();
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_60,"DisplayToGraveyardEndYOffset");
    fVar19 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_60,80.0);
    local_90 = CONCAT44(local_90._4_4_ - fVar19,(float)local_90);
    std::string::~string((string *)&local_60);
    nop();
    local_98 = (float)local_90;
    lVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    lVar9 = (*(code *)**(undefined8 **)(lVar9 + 0x90))(lVar9 + 0x90,(FPoint *)&local_98);
    pDVar6 = (DAction *)(**(code **)(*(long *)(lVar9 + 0x90) + 8))(lVar9 + 0x90,(FPoint *)&local_90)
    ;
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_60,"DisplayToGraveyardDuration");
    fVar19 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_60,1.2);
    DAction::setDuration(pDVar6,fVar19);
    std::string::~string((string *)&local_60);
    nop();
    (**(code **)(**(long **)(this + 0x1b0) + 0xd8))(*(long **)(this + 0x1b0),1);
    plVar10 = *(long **)(this + 0x1b0);
    uVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    (**(code **)(*plVar10 + 0x298))(plVar10,uVar11);
    plVar10 = *(long **)(this + 0x1b0);
    pcVar16 = *(code **)(*plVar10 + 0x348);
    std::string::string((string *)&local_60,"idle2");
    std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)afStack_28);
    (*pcVar16)(plVar10,(string *)&local_60,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    std::string::~string((string *)&local_60);
    nop();
    lVar9 = **(long **)(this + 0x1b0);
    pcVar16 = *(code **)(lVar9 + 0x180);
    pDVar12 = (DVec2 *)(**(code **)(lVar9 + 0x1b8))(*(long **)(this + 0x1b0));
    plVar10 = *(long **)(this + 0x1b0);
    (**(code **)(*plVar10 + 0xd0))((FPoint *)&local_78,0x3f000000,0x3f000000,plVar10);
    DVec2::operator+(pDVar12,(DVec2 *)&local_78);
    (*pcVar16)(plVar10,(string *)&local_60);
    dVar20 = atan2((double)(local_90._4_4_ - local_94),(double)((float)local_90 - local_98));
    (**(code **)(**(long **)(this + 0x1b0) + 0x178))
              ((float)dVar20 * 57.29578 + 90.0,*(long **)(this + 0x1b0));
    pTVar7 = (TPoint *)(**(code **)(**(long **)(this + 0x1b0) + 0x1b8))(*(long **)(this + 0x1b0));
    Sexy::FPoint::FPoint((FPoint *)&local_78,pTVar7);
    DRefPtr<DUpdateAction>::DRefPtr((DRefPtr<DUpdateAction> *)&local_60);
    plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    pcVar16 = *(code **)(*plVar10 + 0x40);
    FUN_035787e0(afStack_28,this,(FPoint *)&local_78);
    (*pcVar16)(plVar10,0,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    plVar10 = *(long **)(this + 400);
    uVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    (**(code **)(*plVar10 + 0x298))(plVar10,uVar11);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_60);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_a0);
    break;
  case 5:
    resetArrowEffects(this);
    uVar22 = 0;
    fVar21 = 0.0;
    pTVar7 = (TPoint *)(**(code **)(**(long **)(this + 0x1e0) + 0x1b8))(*(long **)(this + 0x1e0));
    Sexy::FPoint::FPoint((FPoint *)&local_f0,pTVar7);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_60,"GraveyardToLibraryStartXOffset");
    fVar19 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_60,80.0);
    local_f0 = local_f0 - fVar19;
    std::string::~string((string *)&local_60);
    nop();
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_60,"GraveyardToLibraryStartYOffset");
    fVar19 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_60,80.0);
    local_ec = local_ec - fVar19;
    std::string::~string((string *)&local_60);
    nop();
    pTVar7 = (TPoint *)(**(code **)(**(long **)(this + 0x1d8) + 0x1b8))(*(long **)(this + 0x1d8));
    Sexy::FPoint::FPoint((FPoint *)&local_e8,pTVar7);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_60,"GraveyardToLibraryEndXOffset");
    fVar19 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_60,80.0);
    local_e8 = local_e8 - fVar19;
    std::string::~string((string *)&local_60);
    nop();
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_60,"GraveyardToLibraryEndYOffset");
    fVar19 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_60,80.0);
    local_e4 = local_e4 - fVar19;
    std::string::~string((string *)&local_60);
    nop();
    DVec2::getMidpoint((DVec2 *)&local_e8);
    fVar19 = (float)local_90;
    DVec2::getMidpoint((DVec2 *)&local_e8);
    fVar18 = local_78._4_4_;
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_60,"GraveyardToLibraryMidYOffset");
    fVar17 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_60,270.0);
    DVec2::DVec2((DVec2 *)&local_e0,fVar19,fVar18 - fVar17);
    std::string::~string((string *)&local_60);
    nop();
    local_d8 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x1b8));
    local_d0 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x1b8));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_d8,(__normal_iterator *)&local_d0), bVar1)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d8)
      ;
      DRefPtr<DSpawn>::DRefPtr((DRefPtr<DSpawn> *)&local_c8);
      local_190 = local_190 & 0xffffffff00000000 | 5;
      Sexy::FPoint::FPoint((FPoint *)aDStack_c0,(TPoint *)&local_f0);
      Sexy::FPoint::FPoint((FPoint *)&local_b8,(TPoint *)&local_e0);
      Sexy::FPoint::FPoint((FPoint *)&local_b0,(TPoint *)&local_e8);
      (**(code **)(*(long *)*puVar3 + 0x108))((long *)*puVar3,(FPoint *)aDStack_c0);
      lVar9 = *(long *)*puVar3;
      pcVar16 = *(code **)(lVar9 + 0x180);
      pDVar12 = (DVec2 *)(**(code **)(lVar9 + 0x1b8))((long *)*puVar3);
      plVar10 = (long *)*puVar3;
      (**(code **)(*plVar10 + 0xd0))((string *)&local_90,0x3f000000,0x3f000000,plVar10);
      DVec2::operator+(pDVar12,(DVec2 *)&local_90);
      (*pcVar16)(plVar10,(FastCurve *)&local_78);
      puVar4 = (undefined8 *)FUN_0357526c(*(undefined8 *)(this + 0x218),uVar22);
      pfVar5 = (float *)(**(code **)(*(long *)*puVar3 + 0x1b8))((long *)*puVar3);
      fVar19 = *pfVar5;
      lVar9 = (**(code **)(*(long *)*puVar3 + 0x1b8))((long *)*puVar3);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_78,fVar19,*(float *)(lVar9 + 4));
      *puVar4 = local_78;
      DRefPtr<DBezier>::DRefPtr((DRefPtr<DBezier> *)&local_a8);
      plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
      plVar10 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10,(FPoint *)aDStack_c0);
      plVar10 = (long *)(**(code **)(*plVar10 + 0x58))(plVar10,(FPoint *)&local_b0);
      pDVar6 = (DAction *)
               (**(code **)(*plVar10 + 0x48))(plVar10,(FPoint *)&local_b8,(FPoint *)&local_b8);
      Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
      pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
      std::string::string((string *)&local_78,"GraveyardToLibraryDuration");
      fVar19 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_78,1.2);
      DAction::setDuration(pDVar6,fVar19);
      std::string::~string((string *)&local_78);
      nop();
      pDVar6 = (DAction *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
      FUN_03579038(afStack_28,this,local_190);
      DAction::onDone(pDVar6,(function *)afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      DRefPtr<DFade>::DRefPtr((DRefPtr<DFade> *)&local_a0);
      lVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
      pcVar16 = (code *)**(undefined8 **)(lVar9 + 0x90);
      Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
      pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
      std::string::string((string *)&local_98,"GraveyardToLibraryFadeStart");
      local_fc = CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_98,1.0);
      lVar9 = (*pcVar16)(lVar9 + 0x90);
      pcVar16 = *(code **)(*(long *)(lVar9 + 0x90) + 8);
      Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
      pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
      std::string::string((string *)&local_90,"GraveyardToLibraryFadeEnd");
      local_f8[0] = CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_90,0.0);
      pDVar6 = (DAction *)(*pcVar16)(lVar9 + 0x90);
      Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
      pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
      std::string::string((string *)&local_78,"GraveyardToLibraryDuration");
      fVar19 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_78,1.2);
      DAction::setDuration(pDVar6,fVar19);
      std::string::~string((string *)&local_78);
      nop();
      std::string::~string((string *)&local_90);
      nop();
      std::string::~string((string *)&local_98);
      nop();
      plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c8);
      uVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
      plVar10 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10,uVar11);
      uVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
      pDVar6 = (DAction *)(**(code **)(*plVar10 + 0x40))(plVar10,uVar11);
      pDVar6 = (DAction *)DAction::setDelayTime(pDVar6,fVar21);
      local_170 = *puVar3;
      local_58 = (FPoint *)CONCAT44(local_58._4_4_,5);
      pFStack_178 = local_58;
      local_180 = this;
      local_60 = this;
      local_50 = local_170;
      FUN_03579094(afStack_28,&local_180);
      DAction::onDone(pDVar6,(function *)afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      (**(code **)(*(long *)*puVar3 + 0xd8))((long *)*puVar3,1);
      plVar10 = (long *)*puVar3;
      pcVar16 = *(code **)(*plVar10 + 0x348);
      std::string::string((string *)&local_78,"idle2");
      std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)afStack_28);
      (*pcVar16)(plVar10,(FastCurve *)&local_78,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      std::string::~string((string *)&local_78);
      nop();
      plVar10 = (long *)*puVar3;
      uVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c8);
      (**(code **)(*plVar10 + 0x298))(plVar10,uVar11);
      uVar14 = uVar22 & 0xffffffff;
      uVar22 = uVar22 + 1;
      onStartMove(this,5,uVar14);
      Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
      pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
      std::string::string((string *)&local_78,"GraveyardToLibraryDelay");
      fVar19 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_78,0.1);
      fVar21 = fVar21 + fVar19;
      std::string::~string((string *)&local_78);
      nop();
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_a0);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_a8);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_c8);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_d8);
    }
    DRefPtr<DUpdateAction>::DRefPtr((DRefPtr<DUpdateAction> *)&local_78);
    plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
    pcVar16 = *(code **)(*plVar10 + 0x40);
    FUN_03578898(afStack_48,this);
    pDVar6 = (DAction *)(*pcVar16)(plVar10,0,afStack_48);
    FUN_035790f4(afStack_28,this,5);
    DAction::onDone(pDVar6,(function *)afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_48);
    plVar10 = *(long **)(this + 400);
    uVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
    (**(code **)(*plVar10 + 0x298))(plVar10,uVar11);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_78);
    break;
  case 8:
    createTempArrowEffect((DTransformNode *)this);
    DRefPtr<DMove>::DRefPtr((DRefPtr<DMove> *)&local_a8);
    pDVar6 = (DAction *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
    local_58 = (FPoint *)CONCAT44(local_58._4_4_,8);
    local_60 = this;
    DRefPtr<DSprite9SliceNode>::DRefPtr
              ((DRefPtr<DSprite9SliceNode> *)&local_50,(DRefPtr *)&local_b0);
    FUN_0357bfa8(afStack_28,(string *)&local_60);
    DAction::onDone(pDVar6,(function *)afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    FUN_0357ba04((string *)&local_60);
    Sexy::FPoint::FPoint((FPoint *)&local_a0,param_3);
    pTVar7 = (TPoint *)(**(code **)(**(long **)(this + 0x1d8) + 0x1b8))(*(long **)(this + 0x1d8));
    Sexy::FPoint::FPoint((FPoint *)&local_98,pTVar7);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_60,"EnemyToLibraryEndXOffset");
    fVar19 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_60,80.0);
    local_98 = local_98 - fVar19;
    std::string::~string((string *)&local_60);
    nop();
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_60,"EnemyToLibraryEndYOffset");
    fVar19 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_60,80.0);
    local_94 = local_94 - fVar19;
    std::string::~string((string *)&local_60);
    nop();
    lVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
    lVar9 = (*(code *)**(undefined8 **)(lVar9 + 0x90))(lVar9 + 0x90,(FPoint *)&local_a0);
    pDVar6 = (DAction *)(**(code **)(*(long *)(lVar9 + 0x90) + 8))(lVar9 + 0x90,(FPoint *)&local_98)
    ;
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_60,"EnemyToLibraryDuration");
    fVar19 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_60,1.2);
    DAction::setDuration(pDVar6,fVar19);
    std::string::~string((string *)&local_60);
    nop();
    plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    (**(code **)(*plVar10 + 0xd8))(plVar10,1);
    plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    uVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
    (**(code **)(*plVar10 + 0x298))(plVar10,uVar11);
    plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    pcVar16 = *(code **)(*plVar10 + 0x348);
    std::string::string((string *)&local_60,"idle2");
    std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)afStack_28);
    (*pcVar16)(plVar10,(string *)&local_60,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    std::string::~string((string *)&local_60);
    nop();
    plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    pcVar16 = *(code **)(*plVar10 + 0x180);
    pDVar12 = (DVec2 *)(**(code **)(*plVar10 + 0x1b8))();
    plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    (**(code **)(*plVar13 + 0xd0))((DRefPtr<DUpdateAction> *)&local_78,0x3f000000,0x3f000000);
    DVec2::operator+(pDVar12,(DVec2 *)&local_78);
    (*pcVar16)(plVar10,(string *)&local_60);
    dVar20 = atan2((double)(local_94 - local_9c),(double)(local_98 - local_a0));
    plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    (**(code **)(*plVar10 + 0x178))((float)dVar20 * 57.29578 + 90.0);
    plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    pTVar7 = (TPoint *)(**(code **)(*plVar10 + 0x1b8))();
    Sexy::FPoint::FPoint((FPoint *)&local_90,pTVar7);
    DRefPtr<DUpdateAction>::DRefPtr((DRefPtr<DUpdateAction> *)&local_78);
    plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
    pcVar16 = *(code **)(*plVar10 + 0x40);
    local_60 = this;
    local_58 = (FPoint *)&local_90;
    DRefPtr<DSprite9SliceNode>::DRefPtr
              ((DRefPtr<DSprite9SliceNode> *)&local_50,(DRefPtr *)&local_b0);
    FUN_0357c0a0(afStack_28,(string *)&local_60);
    (*pcVar16)(plVar10,0,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    FUN_0357ba04((string *)&local_60);
    plVar10 = *(long **)(this + 400);
    uVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
    (**(code **)(*plVar10 + 0x298))(plVar10,uVar11);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_78);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_a8);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_b0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::setupTutorialAdvice() */

void __thiscall CardGameBoard::setupTutorialAdvice(CardGameBoard *this)

{
  bool bVar1;
  int iVar2;
  GachaConfig *pGVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar7;
  long lVar8;
  wchar_t *pwVar9;
  undefined8 uVar10;
  long *plVar11;
  Board *pBVar12;
  float fVar13;
  float fVar14;
  DVec2 aDStack_40 [8];
  undefined8 local_38;
  float local_30;
  float local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  float fStack_14;
  long local_8;
  
  uVar10 = 1;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 800))((FPoint *)&local_20);
  fVar13 = (float)local_20 * 0.5;
  (**(code **)(*(long *)this + 800))((DVec2 *)&local_18,this);
  DVec2::DVec2(aDStack_40,fVar13,fStack_14 * 0.5 + -50.0);
  DVec2::DVec2((DVec2 *)&local_38,-1.0,-1.0);
  switch(*(undefined4 *)(this + 0x2b0)) {
  case 2:
    pwVar9 = L"[CARD_GAME_TUTORIAL_STEP_1]";
    goto LAB_035846bc;
  case 3:
    pBVar12 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178((DVec2 *)&local_18,L"[CARD_GAME_TUTORIAL_STEP_2]",(FPoint *)&local_20);
    Board::DisplayAdvice(pBVar12,(DVec2 *)&local_18,0x1d,2);
    FUN_05476c50((DVec2 *)&local_18);
    nop();
    std::string::string((string *)&local_18,"UICardGameHomeProgress");
    lVar8 = UIWidget::GetWidgetBySheetName((string *)&local_18);
    std::string::~string((string *)&local_18);
    nop();
    if (lVar8 != 0) {
      uVar10 = 1;
      DVec2::DVec2((DVec2 *)&local_30,-20.0,-15.0);
      UIWidget::GetDrawRect();
      Sexy::TRect<int>::GetCenter();
      Sexy::Point::Point((Point *)&local_28,(TPoint *)&local_20);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_20,(float)(int)local_28 + local_30,
                 (float)local_28._4_4_ + local_2c);
      DVec2::DVec2((DVec2 *)&local_18,(float)local_20,local_20._4_4_);
      local_38 = CONCAT44(fStack_14,local_18);
      break;
    }
    goto LAB_03584a78;
  case 4:
    pBVar12 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178((DVec2 *)&local_18,L"[CARD_GAME_TUTORIAL_STEP_3]",(FPoint *)&local_20);
    Board::DisplayAdvice(pBVar12,(DVec2 *)&local_18,0x1d,2);
    FUN_05476c50((DVec2 *)&local_18);
    nop();
    if (*(long **)(this + 0x1d8) != (long *)0x0) {
      uVar10 = 1;
      fVar13 = (float)(**(code **)(**(long **)(this + 0x1d8) + 0x1c0))();
      plVar11 = *(long **)(this + 0x1d8);
      goto LAB_03584418;
    }
    goto LAB_03584a78;
  case 5:
    pwVar9 = L"[CARD_GAME_TUTORIAL_STEP_4]";
    uVar10 = 1;
    goto LAB_03584994;
  case 6:
    pwVar9 = L"[CARD_GAME_TUTORIAL_STEP_5]";
    uVar10 = 0;
LAB_03584994:
    pBVar12 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178((DVec2 *)&local_18,pwVar9,(FPoint *)&local_20);
    Board::DisplayAdvice(pBVar12,(DVec2 *)&local_18,0x1d,2);
    FUN_05476c50((DVec2 *)&local_18);
    nop();
    DVec2::DVec2((DVec2 *)&local_18,*(float *)(this + 0x238),*(float *)(this + 0x23c));
    local_38 = CONCAT44(fStack_14,local_18);
    break;
  case 7:
    pBVar12 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178((DVec2 *)&local_18,L"[CARD_GAME_TUTORIAL_STEP_6]",(FPoint *)&local_20);
    Board::DisplayAdvice(pBVar12,(DVec2 *)&local_18,0x1d,2);
    FUN_05476c50((DVec2 *)&local_18);
    nop();
    if (*(long **)(this + 0x1f8) != (long *)0x0) {
      uVar10 = 1;
      fVar13 = (float)(**(code **)(**(long **)(this + 0x1f8) + 0x1c0))();
      plVar11 = *(long **)(this + 0x1f8);
      goto LAB_03584418;
    }
    goto LAB_03584a78;
  case 8:
    pwVar9 = L"[CARD_GAME_TUTORIAL_STEP_7]";
LAB_035846bc:
    pBVar12 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178((DVec2 *)&local_18,pwVar9,(FPoint *)&local_20);
    Board::DisplayAdvice(pBVar12,(DVec2 *)&local_18,0x1d,2);
    FUN_05476c50((DVec2 *)&local_18);
    nop();
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)FUN_03584210();
    if (this_00 !=
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         *)0x0) {
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_00);
      uVar10 = 1;
      DVec2::DVec2((DVec2 *)&local_18,*pfVar7 + 55.0,pfVar7[1] - 85.0);
      local_38 = CONCAT44(fStack_14,local_18);
      break;
    }
LAB_03584a78:
    uVar10 = 1;
    break;
  case 9:
    pBVar12 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178((DVec2 *)&local_18,L"[CARD_GAME_TUTORIAL_STEP_8]",(FPoint *)&local_20);
    Board::DisplayAdvice(pBVar12,(DVec2 *)&local_18,0x1d,2);
    FUN_05476c50((DVec2 *)&local_18);
    nop();
    if (*(long **)(this + 0x200) == (long *)0x0) {
      uVar10 = 0;
      break;
    }
    uVar10 = 0;
    fVar13 = (float)(**(code **)(**(long **)(this + 0x200) + 0x1c0))();
    plVar11 = *(long **)(this + 0x200);
LAB_03584418:
    fVar14 = (float)(**(code **)(*plVar11 + 0x1c8))(plVar11);
    DVec2::DVec2((DVec2 *)&local_18,fVar13,fVar14);
    local_38 = CONCAT44(fStack_14,local_18);
    break;
  case 10:
    goto switchD_035843ac_caseD_a;
  case 0xb:
    pBVar12 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178((DVec2 *)&local_18,L"[CARD_GAME_TUTORIAL_STEP_9]",(FPoint *)&local_20);
    Board::DisplayAdvice(pBVar12,(DVec2 *)&local_18,0x1d,2);
    FUN_05476c50((DVec2 *)&local_18);
    nop();
    pGVar3 = (GachaConfig *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    puVar4 = (undefined8 *)GachaConfig::GetGachaPlantRewardList(pGVar3);
    local_28 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x138));
    local_20 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x138));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28)
      ;
      plVar11 = (long *)*puVar5;
      iVar2 = FUN_03575238(*(undefined4 *)((long)plVar11 + 0x2b4));
      piVar6 = (int *)FUN_03575258(*puVar4,0);
      if (iVar2 == *piVar6) {
        uVar10 = 0;
        fVar13 = (float)(**(code **)(*plVar11 + 0x1c0))(plVar11);
        fVar14 = (float)(**(code **)(*(long *)*puVar5 + 0x1c8))((long *)*puVar5);
        DVec2::DVec2((DVec2 *)&local_18,fVar13,fVar14);
        local_38 = CONCAT44(fStack_14,local_18);
        goto switchD_035843ac_default;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
    }
    uVar10 = 0;
    break;
  case 0xc:
    pBVar12 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178((DVec2 *)&local_18,L"[CARD_GAME_TUTORIAL_STEP_10]",(FPoint *)&local_20);
    Board::DisplayAdvice(pBVar12,(DVec2 *)&local_18,0x1d,2);
    FUN_05476c50((DVec2 *)&local_18);
    nop();
    pGVar3 = (GachaConfig *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    puVar4 = (undefined8 *)GachaConfig::GetGachaPlantRewardList(pGVar3);
    local_28 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x138));
    local_20 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x138));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28)
      ;
      plVar11 = (long *)*puVar5;
      iVar2 = FUN_03575238(*(undefined4 *)((long)plVar11 + 0x2b4));
      piVar6 = (int *)FUN_03575258(*puVar4,1);
      if (iVar2 == *piVar6) {
        fVar13 = (float)(**(code **)(*plVar11 + 0x1c0))(plVar11);
        fVar14 = (float)(**(code **)(*(long *)*puVar5 + 0x1c8))((long *)*puVar5);
        DVec2::DVec2((DVec2 *)&local_18,fVar13 + 35.0,fVar14 - 50.0);
        local_38 = CONCAT44(fStack_14,local_18);
        break;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
    }
    goto switchD_035843ac_caseD_a;
  case 0xd:
    pBVar12 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178((DVec2 *)&local_18,L"[CARD_GAME_TUTORIAL_STEP_11]",(FPoint *)&local_20);
    Board::DisplayAdvice(pBVar12,(DVec2 *)&local_18,0x1d,2);
    FUN_05476c50((DVec2 *)&local_18);
    nop();
    pGVar3 = (GachaConfig *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    puVar4 = (undefined8 *)GachaConfig::GetGachaPlantRewardList(pGVar3);
    local_28 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x138));
    local_20 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x138));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28)
      ;
      plVar11 = (long *)*puVar5;
      iVar2 = FUN_03575238(*(undefined4 *)((long)plVar11 + 0x2b4));
      piVar6 = (int *)FUN_03575258(*puVar4,2);
      if (iVar2 == *piVar6) {
        uVar10 = 0;
        fVar13 = (float)(**(code **)(*plVar11 + 0x1c0))(plVar11);
        fVar14 = (float)(**(code **)(*(long *)*puVar5 + 0x1c8))((long *)*puVar5);
        DVec2::DVec2((DVec2 *)&local_18,fVar13 - 5.0,fVar14 - 50.0);
        local_38 = CONCAT44(fStack_14,local_18);
        goto switchD_035843ac_default;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
    }
    uVar10 = 0;
  }
switchD_035843ac_default:
  if (((float)local_38 != -1.0) && (local_38._4_4_ != -1.0)) {
    Sexy::FPoint::FPoint((FPoint *)&local_20,(TPoint *)aDStack_40);
    Sexy::FPoint::FPoint((FPoint *)&local_18,(TPoint *)&local_38);
    TriggerTutorial(0x40000000,this,(FPoint *)&local_20,(DVec2 *)&local_18,uVar10,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_035843ac_caseD_a:
  uVar10 = 0;
  goto switchD_035843ac_default;
}


/* CardGameBoard::SetTutorialStep(TutorialStep) */

void __thiscall CardGameBoard::SetTutorialStep(CardGameBoard *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x2b0) = param_2;
  onSetTutorialStep();
  setupTutorialAdvice(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::CheckTutorial() */

void __thiscall CardGameBoard::CheckTutorial(CardGameBoard *this)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  TGALogMgr *pTVar3;
  size_t in_x2;
  undefined4 uVar4;
  TGASecretStore aTStack_68 [48];
  TGASecretStore aTStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (pPVar2 != (PlayerInfo *)0x0) {
    cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar2,0x42);
    if (cVar1 == '\0') {
      PlayerInfo::SetActiveTutorial(pPVar2,0x42);
      SetTutorialStep(this,0);
      TGASecretStore::TGASecretStore(aTStack_68);
      std::string::append((string *)aTStack_68,"7",in_x2);
      pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGASecretStore::TGASecretStore(aTStack_38,aTStack_68);
      TGALogMgr::LogCardGame(pTVar3,aTStack_38);
      DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_38);
      uVar4 = PVZ_T();
      *(undefined4 *)(this + 0x2c0) = uVar4;
      DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::onBoardPreCreated() */

void __thiscall CardGameBoard::onBoardPreCreated(CardGameBoard *this)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  TGALogMgr *pTVar3;
  size_t in_x2;
  undefined4 uVar4;
  TGASecretStore aTStack_68 [48];
  TGASecretStore aTStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (pPVar2 != (PlayerInfo *)0x0) {
    cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar2,0x42);
    if (cVar1 == '\0') {
      PlayerInfo::SetActiveTutorial(pPVar2,0x42);
      SetTutorialStep(this,0);
      TGASecretStore::TGASecretStore(aTStack_68);
      std::string::append((string *)aTStack_68,"7",in_x2);
      pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGASecretStore::TGASecretStore(aTStack_38,aTStack_68);
      TGALogMgr::LogCardGame(pTVar3,aTStack_38);
      DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_38);
      uVar4 = PVZ_T();
      *(undefined4 *)(this + 0x2c0) = uVar4;
      DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_68);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameBoard::OnNarrativeTutorialStartCompleted() */

void __thiscall CardGameBoard::OnNarrativeTutorialStartCompleted(CardGameBoard *this)

{
  if (*(int *)(this + 0x2b0) != 10) {
    SetTutorialStep(this,2);
    return;
  }
  SetTutorialStep(this,0xb);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::RepositionCards() */

void __thiscall CardGameBoard::RepositionCards(CardGameBoard *this)

{
  vector *this_00;
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  CardBoardMgr *this_01;
  long lVar4;
  DAction *this_02;
  CardGameBoardConfig *this_03;
  undefined8 uVar5;
  long *plVar6;
  Card *this_04;
  code *pcVar7;
  float fVar8;
  undefined8 local_30;
  undefined8 local_28;
  DRefPtr<DMove> aDStack_20 [8];
  DVec2 aDStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this_00 = (vector *)(this + 0x138);
  local_8 = ___stack_chk_guard;
  local_30 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>(this_00);
  local_28 = std::end<std::vector<DButton*,std::allocator<DButton*>>>(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    this_04 = (Card *)*puVar3;
    iVar2 = DArray<Card*>::getIndex((DArray<Card*> *)this_00,this_04);
    Card::SetHandPosition(this_04,iVar2);
    this_01 = (CardBoardMgr *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    fVar8 = (float)CardBoardMgr::CalcRepositionDelta
                             (this_01,(FPoint *)(this + 0x230),(Card *)*puVar3,
                              *(float *)(this + 0x240),*(float *)(this + 0x238));
    DRefPtr<DMove>::DRefPtr(aDStack_20);
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_20);
    pcVar7 = *(code **)(*(long *)(lVar4 + 0x90) + 0x10);
    DVec2::DVec2(aDStack_18,fVar8,0.0);
    this_02 = (DAction *)(*pcVar7)(lVar4 + 0x90,aDStack_18);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    this_03 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string(asStack_10,"RepositionCardsDuration");
    fVar8 = (float)CardGameBoardConfig::GetCommonConfigValue(this_03,asStack_10,0.2);
    DAction::setDuration(this_02,fVar8);
    std::string::~string(asStack_10);
    nop();
    plVar6 = (long *)*puVar3;
    uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_20);
    (**(code **)(*plVar6 + 0x298))(plVar6,uVar5);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::SlideRepositionCards(bool) */

void __thiscall CardGameBoard::SlideRepositionCards(CardGameBoard *this,bool param_1)

{
  vector *this_00;
  bool bVar1;
  int iVar2;
  Card *pCVar3;
  undefined8 *puVar4;
  long lVar5;
  DAction *pDVar6;
  CardGameBoardConfig *pCVar7;
  CardBoardMgr *this_01;
  long *plVar8;
  undefined8 uVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 auStack_38 [8];
  DRefPtr<DSequence> aDStack_30 [8];
  DRefPtr<DMove> aDStack_28 [8];
  DRefPtr<DMove> aDStack_20 [8];
  DVec2 aDStack_18 [8];
  string asStack_10 [4];
  float local_c;
  long local_8;
  
  this_00 = (vector *)(this + 0x138);
  local_8 = ___stack_chk_guard;
  pCVar3 = (Card *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  DArray<Card*>::at((long)this_00);
  CardBoardMgr::GetSlideOffset(pCVar3);
  fVar12 = *(float *)(this + 0x23c);
  local_48 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>(this_00);
  local_40 = std::end<std::vector<DButton*,std::allocator<DButton*>>>(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    (**(code **)(*(long *)*puVar4 + 0x2a8))((long *)*puVar4);
    pCVar3 = (Card *)*puVar4;
    iVar2 = DArray<Card*>::getIndex((DArray<Card*> *)this_00,pCVar3);
    Card::SetHandPosition(pCVar3,iVar2);
    pCVar3 = (Card *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    fVar11 = fVar12 + local_c;
    if (param_1) {
      fVar11 = *(float *)(this + 0x23c);
    }
    CardBoardMgr::CalcSlideOffset(pCVar3,SUB81(*puVar4,0),fVar11);
    DRefPtr<DSequence>::DRefPtr(aDStack_30);
    DRefPtr<DMove>::DRefPtr(aDStack_28);
    lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_28);
    pDVar6 = (DAction *)(**(code **)(*(long *)(lVar5 + 0x90) + 0x10))(lVar5 + 0x90,auStack_38);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar7 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string(asStack_10,"SlideCardsMoveDuration");
    fVar11 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar7,asStack_10,0.2);
    DAction::setDuration(pDVar6,fVar11);
    std::string::~string(asStack_10);
    nop();
    this_01 = (CardBoardMgr *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    fVar11 = (float)CardBoardMgr::CalcRepositionDelta
                              (this_01,(FPoint *)(this + 0x230),(Card *)*puVar4,
                               *(float *)(this + 0x240),*(float *)(this + 0x238));
    DRefPtr<DMove>::DRefPtr(aDStack_20);
    lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_20);
    pcVar10 = *(code **)(*(long *)(lVar5 + 0x90) + 0x10);
    DVec2::DVec2(aDStack_18,fVar11,0.0);
    pDVar6 = (DAction *)(*pcVar10)(lVar5 + 0x90,aDStack_18);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar7 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string(asStack_10,"RepositionCardsDuration");
    fVar11 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar7,asStack_10,0.2);
    DAction::setDuration(pDVar6,fVar11);
    std::string::~string(asStack_10);
    nop();
    plVar8 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_30);
    uVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_28);
    plVar8 = (long *)(**(code **)(*plVar8 + 0x40))(plVar8,uVar9);
    uVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_20);
    (**(code **)(*plVar8 + 0x40))(plVar8,uVar9);
    plVar8 = (long *)*puVar4;
    uVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_30);
    (**(code **)(*plVar8 + 0x298))(plVar8,uVar9);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_20);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_28);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::CreateTestDraw(DTransformNode*) */

void __thiscall CardGameBoard::CreateTestDraw(CardGameBoard *this,DTransformNode *param_1)

{
  DTransformNode *pDVar1;
  long *plVar2;
  RenderEffectDefinition *pRVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  DRefPtr<DButton> aDStack_70 [8];
  DRefPtr<DSprite9SliceNode> aDStack_68 [8];
  DRefPtr<DSprite9SliceNode> aDStack_60 [8];
  DRefPtr<DSprite9SliceNode> aDStack_58 [8];
  DRefPtr<DStringNode> aDStack_50 [8];
  DVec2 aDStack_48 [8];
  string asStack_40 [8];
  CardGameBoard *local_38;
  DRefPtr<DSprite9SliceNode> aDStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DButton>::DRefPtr(aDStack_70);
  DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_68);
  pDVar1 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_68);
  std::string::string(asStack_40,"drawBtnNormalNode");
  plVar2 = (long *)DTransformNode::setName(pDVar1,asStack_40);
  pcVar6 = *(code **)(*plVar2 + 0x2e8);
  std::string::string((string *)&local_38,"IMAGE_UI_GENERIC_LIGHT_BUTTON_GREEN");
  plVar2 = (long *)(*pcVar6)(plVar2,(string *)&local_38);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x110))(0,0);
  (**(code **)(*plVar2 + 0x138))(0,0,0x43200000,0x428c0000);
  std::string::~string((string *)&local_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_60);
  pDVar1 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  std::string::string(asStack_40,"drawBtnSelectNode");
  plVar2 = (long *)DTransformNode::setName(pDVar1,asStack_40);
  pcVar6 = *(code **)(*plVar2 + 0x2e8);
  std::string::string((string *)&local_38,"IMAGE_UI_GENERIC_LIGHT_BUTTON_GREEN_DOWN");
  plVar2 = (long *)(*pcVar6)(plVar2,(string *)&local_38);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x110))(0,0);
  (**(code **)(*plVar2 + 0x138))(0,0,0x43200000,0x428c0000);
  std::string::~string((string *)&local_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_58);
  pDVar1 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
  std::string::string(asStack_40,"drawBtnDisabledNode");
  plVar2 = (long *)DTransformNode::setName(pDVar1,asStack_40);
  pcVar6 = *(code **)(*plVar2 + 0x2e8);
  std::string::string((string *)&local_38,"IMAGE_UI_GENERIC_LIGHT_BUTTON_GREEN");
  plVar2 = (long *)(*pcVar6)(plVar2,(string *)&local_38);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x110))(0,0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x138))(0,0,0x43200000,0x428c0000);
  pcVar6 = *(code **)(*plVar2 + 0x2d8);
  pRVar3 = CachedResourcePtr::operator_cast_to_RenderEffectDefinition_
                     ((CachedResourcePtr *)&DAT_06aa6e20);
  (*pcVar6)(plVar2,pRVar3);
  std::string::~string((string *)&local_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_68);
  (**(code **)(*plVar2 + 0x388))(plVar2,uVar4);
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  (**(code **)(*plVar2 + 0x390))(plVar2,uVar4);
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
  (**(code **)(*plVar2 + 0x3a0))(plVar2,uVar4);
  DRefPtr<DStringNode>::DRefPtr(aDStack_50);
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_50);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x338))(plVar2,&DAT_055b5ba8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x348))
                             (plVar2,PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x350))(plVar2,1);
  pcVar6 = *(code **)(*plVar2 + 0x108);
  plVar5 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  (**(code **)(*plVar5 + 0xd0))(aDStack_48,0x3f000000,0x3f000000);
  DVec2::DVec2((DVec2 *)asStack_40,0.0,24.0);
  DVec2::operator+(aDStack_48,(DVec2 *)asStack_40);
  plVar2 = (long *)(*pcVar6)(plVar2,(string *)&local_38);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x130))(0x3f000000,0x3f000000);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x138))(0,0,0x43480000,0x42700000);
  (**(code **)(*plVar2 + 600))(plVar2,1);
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_50);
  (**(code **)(*plVar2 + 0x30))(plVar2,uVar4);
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x110))(0x40a00000,0x43960000);
  (**(code **)(*plVar2 + 0x130))(0,0);
  uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  (**(code **)(*(long *)param_1 + 0x28))(param_1,uVar4,0x28);
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  pcVar6 = *(code **)(*plVar2 + 0x350);
  local_38 = this;
  DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_30,(DRefPtr *)aDStack_70);
  FUN_0357b500(afStack_28,(string *)&local_38);
  (*pcVar6)(plVar2,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  FUN_03553580((string *)&local_38);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_50);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_58);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_60);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_68);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::CreateTurnDisplay(DTransformNode*) */

void __thiscall CardGameBoard::CreateTurnDisplay(CardGameBoard *this,DTransformNode *param_1)

{
  CardGameBoardConfig *pCVar1;
  undefined8 uVar2;
  DTransformNode *pDVar3;
  long *plVar4;
  RenderEffectDefinition *pRVar5;
  long *plVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  DRefPtr<DButton> aDStack_90 [8];
  DRefPtr<DSpriteNode> aDStack_88 [8];
  DRefPtr<DSpriteNode> aDStack_80 [8];
  DRefPtr<DSpriteNode> aDStack_78 [8];
  DRefPtr<DStringNode> aDStack_70 [8];
  DVec2 aDStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  DVec2 aDStack_50 [8];
  undefined1 auStack_48 [8];
  string asStack_40 [8];
  CardGameBoard *local_38;
  DRefPtr<DSprite9SliceNode> aDStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar1 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string((string *)&local_38,"TurnBtnWidth");
  CardGameBoardConfig::GetCommonConfigValue(pCVar1,(string *)&local_38,160.0);
  std::string::~string((string *)&local_38);
  nop();
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar1 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string((string *)&local_38,"TurnBtnHeight");
  CardGameBoardConfig::GetCommonConfigValue(pCVar1,(string *)&local_38,70.0);
  std::string::~string((string *)&local_38);
  nop();
  DRefPtr<DButton>::DRefPtr(aDStack_90);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
  *(undefined8 *)(this + 0x200) = uVar2;
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_88);
  pDVar3 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
  std::string::string(asStack_40,"turnBtnNormalNode");
  plVar4 = (long *)DTransformNode::setName(pDVar3,asStack_40);
  pcVar7 = *(code **)(*plVar4 + 0x2e8);
  std::string::string((string *)&local_38,"IMAGE_UI_CARD_GAME_TURN_DISPLAY");
  plVar4 = (long *)(*pcVar7)(plVar4,(string *)&local_38);
  (**(code **)(*plVar4 + 0x110))(0,0);
  std::string::~string((string *)&local_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_80);
  pDVar3 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_80);
  std::string::string(asStack_40,"turnBtnSelectNode");
  plVar4 = (long *)DTransformNode::setName(pDVar3,asStack_40);
  pcVar7 = *(code **)(*plVar4 + 0x2e8);
  std::string::string((string *)&local_38,"IMAGE_UI_CARD_GAME_TURN_DISPLAY");
  plVar4 = (long *)(*pcVar7)(plVar4,(string *)&local_38);
  (**(code **)(*plVar4 + 0x110))(0,0);
  std::string::~string((string *)&local_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_78);
  pDVar3 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  std::string::string(asStack_40,"turnBtnDisabledNode");
  plVar4 = (long *)DTransformNode::setName(pDVar3,asStack_40);
  pcVar7 = *(code **)(*plVar4 + 0x2e8);
  std::string::string((string *)&local_38,"IMAGE_UI_CARD_GAME_TURN_DISPLAY");
  plVar4 = (long *)(*pcVar7)(plVar4,(string *)&local_38);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x110))(0,0);
  pcVar7 = *(code **)(*plVar4 + 0x2d8);
  pRVar5 = CachedResourcePtr::operator_cast_to_RenderEffectDefinition_
                     ((CachedResourcePtr *)&DAT_06aa6e20);
  (*pcVar7)(plVar4,pRVar5);
  std::string::~string((string *)&local_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
  (**(code **)(*plVar4 + 0x388))(plVar4,uVar2);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_80);
  (**(code **)(*plVar4 + 0x390))(plVar4,uVar2);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  (**(code **)(*plVar4 + 0x3a0))(plVar4,uVar2);
  DRefPtr<DStringNode>::DRefPtr(aDStack_70);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  *(undefined8 *)(this + 0x1f0) = uVar2;
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x348))
                             (plVar4,PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x350))(plVar4,1);
  pcVar7 = *(code **)(*plVar4 + 0x108);
  plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
  (**(code **)(*plVar6 + 0xd0))(aDStack_68,0x3f000000,0x3f000000);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar1 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_60,"TurnTextOffsetX");
  fVar8 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar1,asStack_60,0.0);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar1 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_58,"TurnTextOffsetY");
  fVar9 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar1,asStack_58,24.0);
  DVec2::DVec2(aDStack_50,fVar8,fVar9);
  DVec2::operator+(aDStack_68,aDStack_50);
  plVar4 = (long *)(*pcVar7)(plVar4,auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x130))(0x3f000000,0x3f000000);
  pcVar7 = *(code **)(*plVar4 + 0x138);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar1 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_40,"TurnTextWidth");
  uVar10 = CardGameBoardConfig::GetCommonConfigValue(pCVar1,asStack_40,200.0);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar1 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string((string *)&local_38,"TurnTextHeight");
  uVar11 = CardGameBoardConfig::GetCommonConfigValue(pCVar1,(string *)&local_38,60.0);
  plVar4 = (long *)(*pcVar7)(0,0,uVar10,uVar11,plVar4);
  (**(code **)(*plVar4 + 600))(plVar4,1);
  std::string::~string((string *)&local_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  (**(code **)(*plVar4 + 0x30))(plVar4,uVar2);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar1 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string((string *)&local_38,"TurnBtnOffsetX");
  uVar10 = CardGameBoardConfig::GetCommonConfigValue(pCVar1,(string *)&local_38,780.0);
  std::string::~string((string *)&local_38);
  nop();
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar1 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string((string *)&local_38,"TurnBtnOffsetY");
  uVar11 = CardGameBoardConfig::GetCommonConfigValue(pCVar1,(string *)&local_38,300.0);
  std::string::~string((string *)&local_38);
  nop();
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x110))(uVar10,uVar11);
  (**(code **)(*plVar4 + 0x130))(0,0);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
  (**(code **)(*(long *)param_1 + 0x28))(param_1,uVar2,0x28);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
  pcVar7 = *(code **)(*plVar4 + 0x350);
  local_38 = this;
  DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_30,(DRefPtr *)aDStack_90);
  FUN_0357b5d4(afStack_28,(string *)&local_38);
  (*pcVar7)(plVar4,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  FUN_03553580((string *)&local_38);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
  (**(code **)(*plVar4 + 0xd8))(plVar4,0);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_70);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_78);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_80);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_88);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::fillDiscardCards(int) */

void __thiscall CardGameBoard::fillDiscardCards(CardGameBoard *this,int param_1)

{
  vector<int,std::allocator<int>> *this_00;
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  this_00 = (vector<int,std::allocator<int>> *)(this + 0x248);
  local_8 = ___stack_chk_guard;
  std::vector<int,std::allocator<int>>::clear(this_00);
  if (param_1 == 0) {
    local_28 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x138));
    local_20 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x138));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1)
    {
      plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      uVar2 = FUN_03575234(*(undefined4 *)(*plVar4 + 0x2b0));
      local_30 = CONCAT44(local_30._4_4_,uVar2);
      std::vector<int,std::allocator<int>>::push_back(this_00,(int *)&local_30);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
    }
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    local_30 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x138));
    local_28 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x138));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1)
    {
      plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      iVar3 = FUN_03575234(*(undefined4 *)(*plVar4 + 0x2b0));
      if (iVar3 != *(int *)(this + 0x260)) {
        local_34 = iVar3;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)&local_20,&local_34);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
    std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
              (uVar5,uVar6);
    uVar5 = local_20;
    iVar3 = FUN_0357524c(local_20,local_18);
    if ((0 < iVar3) && (0 < param_1)) {
      iVar8 = 0;
      lVar9 = 0;
      do {
        iVar8 = iVar8 + 1;
        piVar7 = (int *)FUN_03575264(uVar5,lVar9);
        std::vector<int,std::allocator<int>>::push_back(this_00,piVar7);
        if (iVar3 <= iVar8) break;
        uVar5 = local_20;
        lVar9 = lVar9 + 1;
      } while (iVar8 < param_1);
    }
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::TryDiscardCards(int) */

void __thiscall CardGameBoard::TryDiscardCards(CardGameBoard *this,int param_1)

{
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fillDiscardCards(this,param_1);
  DVec2::DVec2(aDStack_10,0.0,0.0);
  moveArrowEffect(this,1,aDStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameBoard::TurnPlayerEnd() */

void __thiscall CardGameBoard::TurnPlayerEnd(CardGameBoard *this)

{
  long *plVar1;
  
  clearCursorArea(this);
  Board::ClearCursors(*(Board **)(gLawnApp + 0x9f0));
  plVar1 = *(long **)(this + 0x200);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0xd8))(plVar1,0);
  }
  TryDiscardCards(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::InsertCard(Card*, int, DTransformNode*) */

void CardGameBoard::InsertCard(Card *param_1,int param_2,DTransformNode *param_3)

{
  long lVar1;
  long *plVar2;
  Card *pCVar3;
  undefined4 local_10;
  
  lVar1 = ___stack_chk_guard;
  pCVar3 = (Card *)(ulong)(uint)param_2;
  if (pCVar3 != (Card *)0x0) {
    DArray<Card*>::insert((DArray<Card*> *)(param_1 + 0x138),(long)(int)param_3,pCVar3);
    GetCardInitialPosition(param_1);
    plVar2 = (long *)(**(code **)(*(long *)pCVar3 + 0x118))(local_10,pCVar3);
    (**(code **)(*plVar2 + 0x130))(0,0);
    RepositionCards((CardGameBoard *)param_1);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::createArrowEffects(DTransformNode*) */

void __thiscall CardGameBoard::createArrowEffects(CardGameBoard *this,DTransformNode *param_1)

{
  char cVar1;
  int iVar2;
  DAnimNode *pDVar3;
  long *plVar4;
  undefined8 uVar5;
  BaseTaskResource *this_00;
  int iVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  DRefPtr<DAnimNode> aDStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar6 = 0;
  cVar1 = DArray<DAnimNode*>::empty((DArray<DAnimNode*> *)(this + 0x1b8));
  if (cVar1 != '\0') {
    while( true ) {
      this_00 = (BaseTaskResource *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
      iVar2 = Sexy::BaseTaskResource::GetType(this_00);
      if (iVar2 <= iVar6) break;
      DRefPtr<DAnimNode>::DRefPtr(aDStack_18);
      pDVar3 = (DAnimNode *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18)
      ;
      DArray<DAnimNode*>::pushBack((DArray<DAnimNode*> *)(this + 0x1b8),pDVar3);
      plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
      pcVar7 = *(code **)(*plVar4 + 0x2e8);
      std::string::string(asStack_10,"effects/card_game_draw");
      (*pcVar7)(plVar4,asStack_10);
      std::string::~string(asStack_10);
      nop();
      plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
      plVar4 = (long *)(**(code **)(*plVar4 + 0x130))(0,0);
      (**(code **)(*plVar4 + 0x110))(0,0);
      plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
      (**(code **)(*plVar4 + 0xd8))(plVar4,0);
      plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
      (**(code **)(*plVar4 + 0x1a0))(plVar4,1);
      uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
      iVar2 = iVar6 + 999;
      iVar6 = iVar6 + 1;
      (**(code **)(*(long *)param_1 + 0x28))(param_1,uVar5,iVar2);
      plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
      fVar8 = (float)(**(code **)(*plVar4 + 0x1c0))();
      plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
      fVar9 = (float)(**(code **)(*plVar4 + 0x1c8))();
      Sexy::FastCurve::SetOutRange((FastCurve *)asStack_10,fVar8,fVar9);
      std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
                ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)(this + 0x218),
                 (SexyVector2 *)asStack_10);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::DisplayImageNode(Card*, DTransformNode*) */

void __thiscall
CardGameBoard::DisplayImageNode(CardGameBoard *this,Card *param_1,DTransformNode *param_2)

{
  long *plVar1;
  DSpriteNode *pDVar2;
  CardGameBoardConfig *pCVar3;
  long lVar4;
  DAction *pDVar5;
  long *plVar6;
  undefined8 uVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  exception_ptr aeStack_68 [8];
  DRefPtr<DSpawn> aDStack_60 [8];
  DRefPtr<DMove> aDStack_58 [8];
  undefined1 auStack_50 [4];
  float local_4c;
  string asStack_48 [8];
  DVec2 aDStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Card::CloneImgNode();
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_68);
  (**(code **)(*plVar1 + 0x1a0))(plVar1,1);
  pDVar2 = (DSpriteNode *)std::__exception_ptr::exception_ptr::_M_get(aeStack_68);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar3 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_30,"ImageNodeZOrder");
  fVar9 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar3,asStack_30,90.0);
  SetImageNode(this,pDVar2,param_2,(int)fVar9);
  std::string::~string(asStack_30);
  nop();
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_68);
  (**(code **)(*plVar1 + 0xd8))(plVar1,0);
  DRefPtr<DSpawn>::DRefPtr(aDStack_60);
  DRefPtr<DMove>::DRefPtr(aDStack_58);
  lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
  pcVar8 = *(code **)(*(long *)(lVar4 + 0x90) + 0x10);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_68);
  (**(code **)(*plVar1 + 0x218))(auStack_50);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar3 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_48,"CardInitialScale");
  fVar9 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar3,asStack_48,1.0);
  DVec2::DVec2(aDStack_40,0.0,fVar9 * -local_4c);
  pDVar5 = (DAction *)(*pcVar8)(lVar4 + 0x90,aDStack_40);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar3 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_38,"ImageNodeMoveDuration");
  fVar9 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar3,asStack_38,0.0);
  pDVar5 = (DAction *)DAction::setDuration(pDVar5,fVar9);
  DRefPtr<DSprite9SliceNode>::DRefPtr
            ((DRefPtr<DSprite9SliceNode> *)asStack_30,(DRefPtr *)aeStack_68);
  FUN_0357a048(afStack_28,asStack_30);
  DAction::onDone(pDVar5,(function *)afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  std::_Destroy<DRefPtr<DSpriteNode>>((DRefPtr *)asStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_48);
  nop();
  DRefPtr<DScale>::DRefPtr((DRefPtr<DScale> *)aDStack_40);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
  pcVar8 = *(code **)(*plVar1 + 0x68);
  plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_68);
  fVar9 = (float)(**(code **)(*plVar6 + 0x1e8))();
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar3 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_38,"ImageNodeScaleValue");
  fVar10 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar3,asStack_38,1.8);
  pDVar5 = (DAction *)(*pcVar8)(fVar10 * fVar9,plVar1);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar3 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_30,"ImageNodeScaleDuration");
  fVar9 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar3,asStack_30,0.2);
  DAction::setDuration(pDVar5,fVar9);
  std::string::~string(asStack_30);
  nop();
  std::string::~string(asStack_38);
  nop();
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  uVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x40))(plVar1,uVar7);
  uVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
  (**(code **)(*plVar1 + 0x40))(plVar1,uVar7);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_68);
  uVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  (**(code **)(*plVar1 + 0x298))(plVar1,uVar7);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_40);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_58);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_60);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aeStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::AddToPlayedImageNodes(Card*, DTransformNode*) */

void __thiscall
CardGameBoard::AddToPlayedImageNodes(CardGameBoard *this,Card *param_1,DTransformNode *param_2)

{
  DArray<DSpriteNode*> *this_00;
  char cVar1;
  undefined1 uVar2;
  long *plVar3;
  CardGameBoardConfig *pCVar4;
  long lVar5;
  DAction *this_01;
  DSpriteNode *pDVar6;
  DTimerManager *this_02;
  DTransformNode *this_03;
  code *pcVar7;
  int iVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined4 local_58 [2];
  exception_ptr aeStack_50 [8];
  DRefPtr<DFade> aDStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [4];
  float local_2c;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Card::CloneImgNode();
  this_00 = (DArray<DSpriteNode*> *)(this + 0x198);
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_50);
  (**(code **)(*plVar3 + 0x1a0))(plVar3,1);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar4 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_30,"CardInitialScale");
  fVar9 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar4,asStack_30,1.0);
  std::string::~string(asStack_30);
  nop();
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_50);
  (**(code **)(*plVar3 + 0x218))(asStack_30);
  (**(code **)(**(long **)(this + 400) + 0x218))(asStack_30,*(long **)(this + 400));
  (**(code **)(**(long **)(this + 400) + 0x218))(asStack_30,*(long **)(this + 400));
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar4 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_30,"PlayedImageNodeOffsetX");
  uVar10 = CardGameBoardConfig::GetCommonConfigValue(pCVar4,asStack_30,450.0);
  std::string::~string(asStack_30);
  nop();
  fVar12 = *(float *)(this + 0x23c);
  fVar11 = *(float *)(this + 0x244);
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_50);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x110))
                             (uVar10,((fVar12 - local_2c * (1.0 - fVar9)) - local_2c * (1.0 - fVar9)
                                     ) - fVar11);
  (**(code **)(*plVar3 + 0x130))(0,0);
  cVar1 = DArray<DSpriteNode*>::empty(this_00);
  if (cVar1 == '\0') {
    this_03 = (DTransformNode *)DArray<DSpriteNode*>::back(this_00);
    if (*(code **)(*(long *)this_03 + 0xf8) == DTransformNode::getZOrder) {
      iVar8 = DTransformNode::getZOrder(this_03);
      iVar8 = iVar8 + 1;
    }
    else {
      iVar8 = (**(code **)(*(long *)this_03 + 0xf8))();
      iVar8 = iVar8 + 1;
    }
  }
  else {
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar4 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string(asStack_30,"PlayedImageNodeStartZOrder");
    fVar9 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar4,asStack_30,200.0);
    iVar8 = (int)fVar9;
    std::string::~string(asStack_30);
    nop();
  }
  uVar10 = std::__exception_ptr::exception_ptr::_M_get(aeStack_50);
  (**(code **)(*(long *)param_2 + 0x28))(param_2,uVar10,iVar8);
  DRefPtr<DFade>::DRefPtr(aDStack_48);
  lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_48);
  pcVar7 = (code *)**(undefined8 **)(lVar5 + 0x90);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar4 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_40,"PlayedImageNodeFadeStartValue");
  CardGameBoardConfig::GetCommonConfigValue(pCVar4,asStack_40,0.0);
  lVar5 = (*pcVar7)(lVar5 + 0x90);
  pcVar7 = *(code **)(*(long *)(lVar5 + 0x90) + 8);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar4 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_38,"PlayedImageNodeFadeEndValue");
  local_58[0] = CardGameBoardConfig::GetCommonConfigValue(pCVar4,asStack_38,1.0);
  this_01 = (DAction *)(*pcVar7)(lVar5 + 0x90,local_58);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar4 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_30,"PlayedImageNodeFadeDuration");
  fVar9 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar4,asStack_30,0.2);
  DAction::setDuration(this_01,fVar9);
  std::string::~string(asStack_30);
  nop();
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_50);
  uVar10 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_48);
  (**(code **)(*plVar3 + 0x298))(plVar3,uVar10);
  pDVar6 = (DSpriteNode *)std::__exception_ptr::exception_ptr::_M_get(aeStack_50);
  DArray<DSpriteNode*>::pushBack(this_00,pDVar6);
  uVar2 = isConsumableCard(this,param_1);
  this_02 = (DTimerManager *)DTimerManager::getInstane();
  std::string::string(asStack_30,"ClearPlayedImageNodes");
  FUN_035786cc(afStack_28,this,uVar2);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar4 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_38,"ClearPlayedImageNodeDelay");
  fVar9 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar4,asStack_38,2.0);
  DTimerManager::addTimer(this_02,asStack_30,(function *)afStack_28,fVar9,1);
  std::string::~string(asStack_38);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  std::string::~string(asStack_30);
  nop();
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_48);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aeStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::CreateRawCard(int, bool) */

void CardGameBoard::CreateRawCard(int param_1,bool param_2)

{
  Card *pCVar1;
  CardBoardMgr *pCVar2;
  long *plVar3;
  CardGameBoardConfig *this;
  char in_w2;
  DRefPtr<Card> *in_x8;
  code *pcVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<Card>::DRefPtr(in_x8);
  pCVar1 = (Card *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)in_x8);
  pCVar2 = (CardBoardMgr *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  Card::Init(pCVar1,pCVar2,(uint)param_2,-1);
  pCVar1 = (Card *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)in_x8);
  Card::Generate(pCVar1);
  if (in_w2 != '\0') {
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)in_x8);
    pcVar4 = *(code **)(*plVar3 + 0x140);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    this = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string(asStack_10,"CardInitialScale");
    CardGameBoardConfig::GetCommonConfigValue(this,asStack_10,1.0);
    (*pcVar4)(plVar3);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::continueCreateCards(int, CardDestination) */

void __thiscall CardGameBoard::continueCreateCards(CardGameBoard *this,bool param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  Card *pCVar5;
  exception_ptr aeStack_18 [8];
  exception_ptr aeStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == 0) {
    lVar2 = Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    lVar3 = Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    iVar1 = FUN_03575228(*(undefined4 *)(lVar3 + 8));
    FUN_03575220(lVar2 + 8,iVar1 + 1);
    uVar4 = DArray<Card*>::size((DArray<Card*> *)(this + 0x138));
    CreateRawCard((int)this,param_2);
    iVar1 = std::__exception_ptr::exception_ptr::_M_get(aeStack_10);
    CreateHandCard((Card *)this,iVar1,(DTransformNode *)(uVar4 & 0xffffffff));
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aeStack_10);
    pCVar5 = (Card *)std::__exception_ptr::exception_ptr::_M_get(aeStack_18);
    Card::SetDisabledNode(pCVar5,true);
    iVar1 = std::__exception_ptr::exception_ptr::_M_get(aeStack_18);
    InsertCard((Card *)this,iVar1,(DTransformNode *)(uVar4 & 0xffffffff));
    std::__exception_ptr::exception_ptr::_M_get(aeStack_18);
    OnDrawCard((Card *)this);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aeStack_18);
  }
  else if (param_3 == 1) {
    CreateRawCard((int)this,param_2);
    pCVar5 = (Card *)std::__exception_ptr::exception_ptr::_M_get(aeStack_10);
    DArray<Card*>::pushBack((DArray<Card*> *)(this + 0x168),pCVar5);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aeStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::TryCreateCard(int, CardDestination, Sexy::SexyVector2) */

void CardGameBoard::TryCreateCard
               (float param_1,float param_2,CardGameBoard *param_3,ulong param_4,uint param_5)

{
  char cVar1;
  float local_38;
  float fStack_34;
  FastCurve aFStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38 = param_1;
  fStack_34 = param_2;
  Sexy::FastCurve::SetOutRange(aFStack_30,0.0,0.0);
  cVar1 = Sexy::SexyVector2::operator==((SexyVector2 *)&local_38,(SexyVector2 *)aFStack_30);
  if (cVar1 == '\0') {
    DVec2::DVec2((DVec2 *)aFStack_30,local_38,fStack_34);
    moveArrowEffect(param_3,8,aFStack_30);
    FUN_03578cf4(afStack_28,param_3,param_4 & 0xffffffff | (ulong)param_5 << 0x20);
    onCreateCardCallback(param_3,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  else {
    continueCreateCards(param_3,param_4 & 0xffffffff,param_5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::changeInitialSunDisplay(int) */

void __thiscall CardGameBoard::changeInitialSunDisplay(CardGameBoard *this,int param_1)

{
  DTouchLayer *pDVar1;
  undefined8 uVar2;
  char *__s;
  string *psVar3;
  code *pcVar4;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  psVar3 = *(string **)(this + 0x1f8);
  local_8 = ___stack_chk_guard;
  if (psVar3 != (string *)0x0) {
    std::string::string(asStack_18,"costNodeR");
    pDVar1 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
    std::string::~string(asStack_18);
    nop();
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    uVar2 = CardBoardMgr::GetConfig();
    std::string::string(asStack_20,"CardCostPrefix");
    std::string::string(asStack_18,"IMAGE_UI_CARD_GAME_CARDS_COST_");
    CardGameBoardConfig::GetCardUIConfigValue(asStack_28,uVar2,asStack_20,asStack_18);
    std::string::~string(asStack_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    DString::DString((DString *)asStack_18);
    uVar2 = FUN_0547429c(asStack_28);
    DString::format((char *)asStack_18,&DAT_055b5ce0,uVar2,(ulong)(uint)param_1);
    pcVar4 = *(code **)(*(long *)pDVar1 + 0x2e8);
    __s = (char *)DString::c_str((DString *)asStack_18);
    std::string::string(asStack_20,__s);
    (*pcVar4)(pDVar1,asStack_20);
    std::string::~string(asStack_20);
    nop();
    DString::~DString((DString *)asStack_18);
    std::string::~string(asStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameBoard::SunMaxChanged() */

void __thiscall CardGameBoard::SunMaxChanged(CardGameBoard *this)

{
  int iVar1;
  long lVar2;
  
  lVar2 = Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  iVar1 = FUN_03575230(*(undefined4 *)(lVar2 + 0x14));
  changeInitialSunDisplay(this,iVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::changeSunDisplay(int) */

void __thiscall CardGameBoard::changeSunDisplay(CardGameBoard *this,int param_1)

{
  DTouchLayer *pDVar1;
  DTouchLayer *pDVar2;
  DTouchLayer *pDVar3;
  undefined8 uVar4;
  char *__s;
  string *psVar5;
  code *pcVar6;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  psVar5 = *(string **)(this + 0x1f8);
  local_8 = ___stack_chk_guard;
  if (psVar5 != (string *)0x0) {
    std::string::string(asStack_18,"costNodeL");
    pDVar1 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
    std::string::~string(asStack_18);
    nop();
    psVar5 = *(string **)(this + 0x1f8);
    std::string::string(asStack_18,"costNodeM");
    pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
    std::string::~string(asStack_18);
    nop();
    psVar5 = *(string **)(this + 0x1f8);
    std::string::string(asStack_18,"costNodeR");
    pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
    std::string::~string(asStack_18);
    nop();
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    uVar4 = CardBoardMgr::GetConfig();
    std::string::string(asStack_20,"CardCostPrefix");
    std::string::string(asStack_18,"IMAGE_UI_CARD_GAME_CARDS_COST_");
    CardGameBoardConfig::GetCardUIConfigValue(asStack_28,uVar4,asStack_20,asStack_18);
    std::string::~string(asStack_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    DString::DString((DString *)asStack_18);
    uVar4 = FUN_0547429c(asStack_28);
    DString::format((char *)asStack_18,&DAT_055b5ce0,uVar4,(ulong)(uint)param_1);
    pcVar6 = *(code **)(*(long *)pDVar1 + 0x2e8);
    __s = (char *)DString::c_str((DString *)asStack_18);
    std::string::string(asStack_20,__s);
    (*pcVar6)(pDVar1,asStack_20);
    std::string::~string(asStack_20);
    nop();
    createBounceEffect(this,(DTransformNode *)pDVar1);
    createBounceEffect(this,(DTransformNode *)pDVar2);
    createBounceEffect(this,(DTransformNode *)pDVar3);
    DString::~DString((DString *)asStack_18);
    std::string::~string(asStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameBoard::SunChanged() */

void __thiscall CardGameBoard::SunChanged(CardGameBoard *this)

{
  int iVar1;
  long lVar2;
  
  lVar2 = Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  iVar1 = FUN_0357522c(*(undefined4 *)(lVar2 + 0x10));
  changeSunDisplay(this,iVar1);
  return;
}


/* CardGameBoard::OnUsedCard(Card*) */

void __thiscall CardGameBoard::OnUsedCard(CardGameBoard *this,Card *param_1)

{
  int iVar1;
  CardBoardMgr *this_00;
  
  AddToPlayedImageNodes(this,param_1,*(DTransformNode **)(this + 400));
  this_00 = (CardBoardMgr *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  iVar1 = Card::GetCost(param_1);
  CardBoardMgr::SpendCost(this_00,iVar1);
  CheckCost(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::changeGraveyardDisplay(int) */

void __thiscall CardGameBoard::changeGraveyardDisplay(CardGameBoard *this,int param_1)

{
  DTouchLayer *pDVar1;
  undefined8 uVar2;
  string *psVar3;
  code *pcVar4;
  string asStack_18 [16];
  long local_8;
  
  psVar3 = *(string **)(this + 0x1e0);
  local_8 = ___stack_chk_guard;
  if (psVar3 != (string *)0x0) {
    std::string::string(asStack_18,"graveyardDisplay");
    pDVar1 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
    std::string::~string(asStack_18);
    nop();
    if (pDVar1 != (DTouchLayer *)0x0) {
      DString::DString((DString *)asStack_18);
      DString::format((char *)asStack_18,&DAT_055aacf0,(ulong)(uint)param_1);
      pcVar4 = *(code **)(*(long *)pDVar1 + 0x338);
      uVar2 = DString::c_str((DString *)asStack_18);
      (*pcVar4)(pDVar1,uVar2);
      DString::~DString((DString *)asStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameBoard::refreshGraveyardDisplay() */

void __thiscall CardGameBoard::refreshGraveyardDisplay(CardGameBoard *this)

{
  int iVar1;
  
  iVar1 = DArray<Card*>::size((DArray<Card*> *)(this + 0x150));
  changeGraveyardDisplay(this,iVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::DiscardCards() */

void __thiscall CardGameBoard::DiscardCards(CardGameBoard *this)

{
  vector *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  undefined8 *puVar7;
  Card *pCVar8;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_0357524c(*(undefined8 *)(this + 0x248),*(undefined8 *)(this + 0x250));
  this_00 = (vector *)(this + 0x138);
  ClearImageNode(this);
  lVar4 = Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  local_18 = (ulong)local_18._4_4_ << 0x20;
  lVar5 = Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  iVar3 = FUN_03575228(*(undefined4 *)(lVar5 + 8));
  local_10 = CONCAT44(local_10._4_4_,iVar3 - iVar2);
  piVar6 = eastl::max_alt<int>((int *)&local_18,(int *)&local_10);
  FUN_03575220(lVar4 + 8,*piVar6);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x248));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x248));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
  if (bVar1) {
    do {
      piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>(this_00);
      local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>(this_00);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar1) {
        puVar7 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        pCVar8 = (Card *)*puVar7;
        iVar2 = FUN_03575234(*(undefined4 *)(pCVar8 + 0x2b0));
        if (*piVar6 == iVar2) {
          DArray<Card*>::pushBack((DArray<Card*> *)(this + 0x150),pCVar8);
          (**(code **)(*(long *)*puVar7 + 0x60))((long *)*puVar7,1);
          DArray<Card*>::eraseObject((DArray<Card*> *)this_00,(Card *)*puVar7,false);
          eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                    ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_28);
          goto LAB_0358c4ac;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      }
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_28);
LAB_0358c4ac:
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
    } while (bVar1);
  }
  RepositionCards(this);
  refreshGraveyardDisplay(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::onMoveDone(CardGameBoard::CardArrowEffectType) */

void __thiscall CardGameBoard::onMoveDone(CardGameBoard *this,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  CrazyNPCManager *pCVar3;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_2) {
  case 0:
    *(undefined4 *)(this + 0x268) = 1;
    MessageRouter::Post((_func_void *)gMessageRouter);
    cVar2 = HasTutorial(this);
    if (cVar2 != '\0') {
      if (*(int *)(this + 0x2b0) == 0) {
        SetTutorialStep(this,1);
      }
      else if (*(int *)(this + 0x2b0) == 10) {
        Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
        MessageRouter::Post<bool,bool>
                  ((MessageRouter *)gMessageRouter,Message::NotifyCardTutorial,true);
        pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
        std::string::string(asStack_60,"CARD_GAME_TURN2_INTRO");
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,OnNarrativeTutorialStartCompleted);
        Sexy::Delegate0::Delegate0<CardGameBoard,void(CardGameBoard::*)()>(aDStack_38,aCStack_50);
        std::string::string(asStack_58,"");
        CrazyNPCManager::StartNarrativeID(pCVar3,asStack_60,aDStack_38,asStack_58);
        std::string::~string(asStack_58);
        nop();
        std::string::~string(asStack_60);
        nop();
      }
    }
    break;
  case 1:
    *(undefined4 *)(this + 0x268) = 2;
    setCardsVisible(this,true);
    DiscardCards(this);
    break;
  case 5:
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x290));
    if (bVar1) {
      std::function<void(int)>::operator()((function<void(int)> *)(this + 0x290),5);
    }
    break;
  case 8:
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x270));
    if (bVar1) {
      std::function<void(int)>::operator()((function<void(int)> *)(this + 0x270),8);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::changeLibraryDisplay(int) */

void __thiscall CardGameBoard::changeLibraryDisplay(CardGameBoard *this,int param_1)

{
  DTouchLayer *pDVar1;
  undefined8 uVar2;
  string *psVar3;
  code *pcVar4;
  string asStack_18 [16];
  long local_8;
  
  psVar3 = *(string **)(this + 0x1d8);
  local_8 = ___stack_chk_guard;
  if (psVar3 != (string *)0x0) {
    std::string::string(asStack_18,"libraryDisplay");
    pDVar1 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
    std::string::~string(asStack_18);
    nop();
    if (pDVar1 != (DTouchLayer *)0x0) {
      DString::DString((DString *)asStack_18);
      DString::format((char *)asStack_18,&DAT_055aacf0,(ulong)(uint)param_1);
      pcVar4 = *(code **)(*(long *)pDVar1 + 0x338);
      uVar2 = DString::c_str((DString *)asStack_18);
      (*pcVar4)(pDVar1,uVar2);
      DString::~DString((DString *)asStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameBoard::refreshLibraryDisplay() */

void __thiscall CardGameBoard::refreshLibraryDisplay(CardGameBoard *this)

{
  int iVar1;
  
  iVar1 = DArray<Card*>::size((DArray<Card*> *)(this + 0x168));
  changeLibraryDisplay(this,iVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::createLibraryCards() */

void __thiscall CardGameBoard::createLibraryCards(CardGameBoard *this)

{
  char cVar1;
  bool bVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  vector *pvVar3;
  Card *pCVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 local_38;
  undefined8 local_30;
  exception_ptr aeStack_28 [8];
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pvVar3 = (vector *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  std::vector<int,std::allocator<int>>::vector(avStack_20,pvVar3);
  cVar1 = std::vector<int,std::allocator<int>>::empty(avStack_20);
  if (cVar1 == '\0') {
    cVar1 = HasTutorial(this);
    if (cVar1 == '\0') {
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_20);
      std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                (uVar6,uVar7);
    }
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar2)
    {
      puVar5 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38)
      ;
      CreateRawCard((int)this,SUB41(*puVar5,0));
      pCVar4 = (Card *)std::__exception_ptr::exception_ptr::_M_get(aeStack_28);
      DArray<Card*>::pushBack((DArray<Card*> *)(this + 0x168),pCVar4);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aeStack_28);
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_38);
    }
  }
  else {
    iVar8 = 0x32;
    do {
      bVar2 = (bool)Sexy::Rand(5);
      CreateRawCard((int)this,bVar2);
      pCVar4 = (Card *)std::__exception_ptr::exception_ptr::_M_get(aeStack_28);
      DArray<Card*>::pushBack((DArray<Card*> *)(this + 0x168),pCVar4);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aeStack_28);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  refreshLibraryDisplay(this);
  std::vector<int,std::allocator<int>>::~vector(avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* CardGameBoard::CreateLibrary(DTransformNode*) */

void __thiscall CardGameBoard::CreateLibrary(CardGameBoard *this,DTransformNode *param_1)

{
  createLibraryCards(this);
  createLibraryUI(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::refillLibrary() */

void __thiscall CardGameBoard::refillLibrary(CardGameBoard *this)

{
  DArray<Card*> *this_00;
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (DArray<Card*> *)(this + 0x150);
  local_8 = ___stack_chk_guard;
  DArray<Card*>::shuffle(this_00);
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)this_00);
  local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    DArray<Card*>::insert((DArray<Card*> *)(this + 0x168),0,(Card *)*puVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  DArray<Card*>::clear(this_00);
  refreshGraveyardDisplay(this);
  refreshLibraryDisplay(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::tryRefillLibrary() */

void __thiscall CardGameBoard::tryRefillLibrary(CardGameBoard *this)

{
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  refillLibrary(this);
  DVec2::DVec2(aDStack_10,0.0,0.0);
  moveArrowEffect(this,5,aDStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::drawCardFromLibrary() */

void CardGameBoard::drawCardFromLibrary(void)

{
  CardGameBoard *in_x0;
  DTouchLayer *pDVar1;
  long *plVar2;
  CardGameBoardConfig *this;
  Card *this_00;
  DRefPtr<DTouchLayer> *in_x8;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar1 = (DTouchLayer *)DArray<Card*>::back((DArray<Card*> *)(in_x0 + 0x168));
  DRefPtr<DTouchLayer>::DRefPtr(in_x8,pDVar1);
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)in_x8);
  pcVar3 = *(code **)(*plVar2 + 0x140);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  this = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_10,"CardInitialScale");
  CardGameBoardConfig::GetCommonConfigValue(this,asStack_10,1.0);
  (*pcVar3)(plVar2);
  std::string::~string(asStack_10);
  nop();
  this_00 = (Card *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)in_x8);
  Card::SetDisabledNode(this_00,true);
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)in_x8);
  (**(code **)(*plVar2 + 0x338))(plVar2,1);
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)in_x8);
  (**(code **)(*plVar2 + 0x60))(plVar2,1);
  DArray<Card*>::popBack((DArray<Card*> *)(in_x0 + 0x168));
  refreshLibraryDisplay(in_x0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::FillCards() */

void __thiscall CardGameBoard::FillCards(CardGameBoard *this)

{
  DArray<Card*> *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  BaseTaskResource *this_01;
  Card *pCVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  exception_ptr aeStack_18 [8];
  undefined4 local_10;
  float fStack_c;
  long local_8;
  
  this_00 = (DArray<Card*> *)(this + 0x138);
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  while( true ) {
    this_01 = (BaseTaskResource *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    iVar2 = Sexy::BaseTaskResource::GetType(this_01);
    if (iVar2 <= iVar3) break;
    drawCardFromLibrary();
    cVar1 = Sexy::CompiledMap::Initialized((CompiledMap *)&local_10);
    if (cVar1 != '\0') {
      pCVar5 = (Card *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
      DArray<Card*>::pushBack(this_00,pCVar5);
    }
    iVar3 = iVar3 + 1;
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_10);
  }
  fVar10 = 0.0;
  uVar8 = 0;
  fVar9 = fVar10;
  while( true ) {
    lVar7 = DArray<Card*>::size(this_00);
    if (lVar7 <= (long)uVar8) break;
    iVar3 = DArray<Card*>::at((long)this_00);
    CreateHandCard((Card *)this,iVar3,(DTransformNode *)(uVar8 & 0xffffffff));
    fVar10 = *(float *)(this + 0x240);
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_18);
    fVar9 = fVar9 + fVar10;
    (**(code **)(*plVar6 + 0x218))((DRefPtr<UIAccumulatedLoginButton> *)&local_10);
    fVar10 = fStack_c;
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aeStack_18);
    uVar8 = uVar8 + 1;
  }
  DVec2::DVec2((DVec2 *)&local_10,fVar9 * 0.5,fVar10 * 0.5);
  *(ulong *)(this + 0x230) = CONCAT44(fStack_c,local_10);
  lVar7 = Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  uVar4 = DArray<Card*>::size(this_00);
  FUN_03575220(lVar7 + 8,uVar4);
  *(undefined4 *)(this + 0x264) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::continueFillCards() */

void __thiscall CardGameBoard::continueFillCards(CardGameBoard *this)

{
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FillCards(this);
  EnableHandCardsTouch(this,false);
  setCardsVisible(this,false);
  DVec2::DVec2(aDStack_10,0.0,0.0);
  moveArrowEffect(this,0,aDStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::TryFillCards() */

void __thiscall CardGameBoard::TryFillCards(CardGameBoard *this)

{
  char cVar1;
  int iVar2;
  BaseTaskResource *this_00;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  createArrowEffects(this,*(DTransformNode **)(this + 400));
  this_00 = (BaseTaskResource *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  iVar2 = Sexy::BaseTaskResource::GetType(this_00);
  cVar1 = tryDrawCardFromLibrary(this,iVar2);
  if (cVar1 == '\0') {
    tryRefillLibrary(this);
    FUN_03578c98(afStack_28,this);
    onRefillCallback(this,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  else {
    continueFillCards(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameBoard::TurnPlayerBegan(int) */

void CardGameBoard::TurnPlayerBegan(int param_1)

{
  CardBoardMgr *this;
  
  TryFillCards((CardGameBoard *)(ulong)(uint)param_1);
  this = (CardBoardMgr *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  CardBoardMgr::FillPlayerSun(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::continueDrawCards(int) */

void __thiscall CardGameBoard::continueDrawCards(CardGameBoard *this,int param_1)

{
  int iVar1;
  exception_ptr aeStack_18 [8];
  exception_ptr aeStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  drawCardFromLibrary();
  iVar1 = std::__exception_ptr::exception_ptr::_M_get(aeStack_10);
  CreateHandCard((Card *)this,iVar1,(DTransformNode *)(ulong)(uint)param_1);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aeStack_10);
  iVar1 = std::__exception_ptr::exception_ptr::_M_get(aeStack_18);
  InsertCard((Card *)this,iVar1,(DTransformNode *)(ulong)(uint)param_1);
  std::__exception_ptr::exception_ptr::_M_get(aeStack_18);
  OnDrawCard((Card *)this);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aeStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::DrawCard(int) */

void __thiscall CardGameBoard::DrawCard(CardGameBoard *this,int param_1)

{
  char cVar1;
  int iVar2;
  CardBoardMgr *this_00;
  long lVar3;
  long lVar4;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (CardBoardMgr *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  cVar1 = CardBoardMgr::ReachMaxHandCards(this_00);
  if (cVar1 == '\0') {
    lVar3 = Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    lVar4 = Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    iVar2 = FUN_03575228(*(undefined4 *)(lVar4 + 8));
    FUN_03575220(lVar3 + 8,iVar2 + 1);
    cVar1 = tryDrawCardFromLibrary(this,1);
    if (cVar1 == '\0') {
      tryRefillLibrary(this);
      FUN_03578d50(afStack_28,this,param_1);
      onRefillCallback(this,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    }
    else {
      continueDrawCards(this,param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameBoard::DrawCard() */

void __thiscall CardGameBoard::DrawCard(CardGameBoard *this)

{
  int iVar1;
  
  iVar1 = DArray<Card*>::size((DArray<Card*> *)(this + 0x138));
  DrawCard(this,iVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall CardGameBoard::continueDrawCards(CardGameBoard *this,int param_1)

{
  int iVar1;
  exception_ptr aeStack_18 [8];
  exception_ptr aeStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  drawCardFromLibrary();
  iVar1 = std::__exception_ptr::exception_ptr::_M_get(aeStack_10);
  CreateHandCard((Card *)this,iVar1,(DTransformNode *)(ulong)(uint)param_1);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aeStack_10);
  iVar1 = std::__exception_ptr::exception_ptr::_M_get(aeStack_18);
  InsertCard((Card *)this,iVar1,(DTransformNode *)(ulong)(uint)param_1);
  std::__exception_ptr::exception_ptr::_M_get(aeStack_18);
  OnDrawCard((Card *)this);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aeStack_18);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::changeTurnDisplay(float) */

void __thiscall CardGameBoard::changeTurnDisplay(CardGameBoard *this,float param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  float fVar5;
  int local_20;
  int local_1c;
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)(this + 0x1f0) != 0) && (fVar5 = (float)PVZ_T(), *(float *)(this + 0x208) < fVar5))
  {
    DString::DString(aDStack_18);
    local_20 = 0;
    local_1c = (int)param_1;
    puVar1 = (uint *)eastl::max_alt<int>(&local_20,&local_1c);
    DString::format((char *)aDStack_18,&DAT_055b63b0,(ulong)*puVar1);
    plVar3 = *(long **)(this + 0x1f0);
    pcVar4 = *(code **)(*plVar3 + 0x338);
    uVar2 = DString::c_str(aDStack_18);
    (*pcVar4)(plVar3,uVar2);
    fVar5 = (float)PVZ_T();
    *(float *)(this + 0x208) = fVar5 + 1.0;
    DString::~DString(aDStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::TurnEndTimeChanged(float) */

void __thiscall CardGameBoard::TurnEndTimeChanged(CardGameBoard *this,float param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  float fVar5;
  int iStack_20;
  int iStack_1c;
  DString aDStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if ((*(long *)(this + 0x1f0) != 0) && (fVar5 = (float)PVZ_T(), *(float *)(this + 0x208) < fVar5))
  {
    DString::DString(aDStack_18);
    iStack_20 = 0;
    iStack_1c = (int)param_1;
    puVar1 = (uint *)eastl::max_alt<int>(&iStack_20,&iStack_1c);
    DString::format((char *)aDStack_18,&DAT_055b63b0,(ulong)*puVar1);
    plVar3 = *(long **)(this + 0x1f0);
    pcVar4 = *(code **)(*plVar3 + 0x338);
    uVar2 = DString::c_str(aDStack_18);
    (*pcVar4)(plVar3,uVar2);
    fVar5 = (float)PVZ_T();
    *(float *)(this + 0x208) = fVar5 + 1.0;
    DString::~DString(aDStack_18);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::CreatePlayerSun(DTransformNode*) */

void __thiscall CardGameBoard::CreatePlayerSun(CardGameBoard *this,DTransformNode *param_1)

{
  undefined8 uVar1;
  DTransformNode *pDVar2;
  CardGameBoardConfig *pCVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  long *plVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  DRefPtr<DSpriteNode> aDStack_60 [8];
  string asStack_58 [8];
  DRefPtr<DSpriteNode> aDStack_50 [8];
  DRefPtr<DSpriteNode> aDStack_48 [8];
  DRefPtr<DSpriteNode> aDStack_40 [8];
  string asStack_38 [8];
  float local_30;
  undefined4 local_2c;
  string asStack_28 [4];
  float local_24;
  string asStack_18 [16];
  long local_8;
  
  plVar8 = *(long **)(this + 0x1e0);
  local_8 = ___stack_chk_guard;
  if (plVar8 == (long *)0x0) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = (float)(**(code **)(*plVar8 + 0x1c8))(plVar8);
  }
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_60);
  uVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  *(undefined8 *)(this + 0x1f8) = uVar1;
  plVar8 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  (**(code **)(*plVar8 + 0x1a0))(plVar8,1);
  pDVar2 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  std::string::string(asStack_28,"sunNode");
  plVar8 = (long *)DTransformNode::setName(pDVar2,asStack_28);
  pcVar9 = *(code **)(*plVar8 + 0x2e8);
  std::string::string(asStack_18,"IMAGE_UI_CARD_GAME_PLAYER_SUN");
  (*pcVar9)(plVar8,asStack_18);
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_28);
  nop();
  plVar8 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  (**(code **)(*plVar8 + 0x218))(asStack_28);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar3 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_18,"PlayerSunOffsetY");
  fVar11 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar3,asStack_18,10.0);
  std::string::~string(asStack_18);
  nop();
  plVar8 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  pcVar9 = *(code **)(*plVar8 + 0x110);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar3 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
  std::string::string(asStack_18,"PlayerSunOffsetX");
  uVar12 = CardGameBoardConfig::GetCommonConfigValue(pCVar3,asStack_18,10.0);
  plVar8 = (long *)(*pcVar9)(uVar12,(fVar10 - local_24) - fVar11,plVar8);
  (**(code **)(*plVar8 + 0x130))(0,0);
  std::string::~string(asStack_18);
  nop();
  lVar4 = Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  uVar5 = FUN_03575230(*(undefined4 *)(lVar4 + 0x14));
  lVar4 = Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  uVar6 = FUN_0357522c(*(undefined4 *)(lVar4 + 0x10));
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  uVar1 = CardBoardMgr::GetConfig();
  std::string::string(asStack_28,"CardCostPrefix");
  std::string::string(asStack_18,"IMAGE_UI_CARD_GAME_CARDS_COST_");
  CardGameBoardConfig::GetCardUIConfigValue(asStack_58,uVar1,asStack_28,asStack_18);
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_28);
  nop();
  DString::DString((DString *)asStack_28);
  uVar1 = FUN_0547429c(asStack_58);
  DString::format((char *)asStack_28,&DAT_055b5ce0,uVar1,uVar5 & 0xffffffff);
  DString::DString((DString *)asStack_18);
  uVar1 = FUN_0547429c(asStack_58);
  DString::format((char *)asStack_18,&DAT_055b5ce0,uVar1,uVar6 & 0xffffffff);
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_50);
  pDVar2 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_50);
  std::string::string(asStack_38,"costNodeL");
  plVar8 = (long *)DTransformNode::setName(pDVar2,asStack_38);
  pcVar9 = *(code **)(*plVar8 + 0x2e8);
  pcVar7 = (char *)DString::c_str((DString *)asStack_18);
  std::string::string((string *)&local_30,pcVar7);
  (*pcVar9)(plVar8,(string *)&local_30);
  std::string::~string((string *)&local_30);
  nop();
  std::string::~string(asStack_38);
  nop();
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_48);
  pDVar2 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_48);
  std::string::string(asStack_38,"costNodeR");
  plVar8 = (long *)DTransformNode::setName(pDVar2,asStack_38);
  pcVar9 = *(code **)(*plVar8 + 0x2e8);
  pcVar7 = (char *)DString::c_str((DString *)asStack_28);
  std::string::string((string *)&local_30,pcVar7);
  (*pcVar9)(plVar8,(string *)&local_30);
  std::string::~string((string *)&local_30);
  nop();
  std::string::~string(asStack_38);
  nop();
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_40);
  pDVar2 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
  std::string::string(asStack_38,"costNodeM");
  plVar8 = (long *)DTransformNode::setName(pDVar2,asStack_38);
  pcVar9 = *(code **)(*plVar8 + 0x2e8);
  std::string::string((string *)&local_30,"IMAGE_UI_CARD_GAME_CARDS_COST_DIVIDE");
  (*pcVar9)(plVar8,(string *)&local_30);
  std::string::~string((string *)&local_30);
  nop();
  std::string::~string(asStack_38);
  nop();
  plVar8 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  (**(code **)(*plVar8 + 0x218))((string *)&local_30);
  fVar10 = local_30;
  plVar8 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_50);
  (**(code **)(*plVar8 + 0x218))((string *)&local_30);
  fVar11 = local_30;
  plVar8 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_48);
  (**(code **)(*plVar8 + 0x218))((string *)&local_30);
  fVar13 = local_30;
  plVar8 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
  (**(code **)(*plVar8 + 0x218))((string *)&local_30);
  fVar13 = (((fVar10 + 10.0) - fVar11) - local_30) - fVar13;
  plVar8 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  (**(code **)(*plVar8 + 0xd0))((string *)&local_30,0,0x3f000000);
  plVar8 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_50);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x110))(fVar13,local_2c);
  (**(code **)(*plVar8 + 0x130))(0,0x3f000000);
  fVar13 = fVar11 + -5.0 + fVar13;
  plVar8 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x110))(fVar13,local_2c);
  (**(code **)(*plVar8 + 0x130))(0,0x3f000000);
  plVar8 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_48);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x110))(local_30 + -5.0 + fVar13,local_2c);
  (**(code **)(*plVar8 + 0x130))(0,0x3f000000);
  plVar8 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  uVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_50);
  (**(code **)(*plVar8 + 0x30))(plVar8,uVar1);
  plVar8 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  uVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
  (**(code **)(*plVar8 + 0x30))(plVar8,uVar1);
  plVar8 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  uVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_48);
  (**(code **)(*plVar8 + 0x30))(plVar8,uVar1);
  uVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  (**(code **)(*(long *)param_1 + 0x28))(param_1,uVar1,0x1e);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_40);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_48);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_50);
  DString::~DString((DString *)asStack_18);
  DString::~DString((DString *)asStack_28);
  std::string::~string(asStack_58);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::CreateBoard() */

void __thiscall CardGameBoard::CreateBoard(CardGameBoard *this)

{
  CardBoardMgr *pCVar1;
  long *plVar2;
  undefined8 uVar3;
  DTransformNode *pDVar4;
  code *pcVar5;
  DRefPtr<DBoard> aDStack_38 [8];
  DVec2 aDStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  onBoardPreCreated(this);
  Sexy::Insets::Insets((Insets *)&local_28);
  pCVar1 = (CardBoardMgr *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  CardBoardMgr::gatherBoardInfo(pCVar1,(TRect *)&local_28);
  (**(code **)(*(long *)this + 0x330))(this,local_28,local_24,local_20,local_1c);
  DRefPtr<DBoard>::DRefPtr(aDStack_38);
  EA::Text::Rectangle::Rectangle
            ((Rectangle *)&local_18,0.0,0.0,(float)*(int *)(this + 0x50),
             (float)*(int *)(this + 0x54));
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_38);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x110))(local_18,local_14);
  (**(code **)(*plVar2 + 0x130))(0,0);
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_38);
  pcVar5 = *(code **)(*plVar2 + 0x210);
  DVec2::DVec2(aDStack_30,local_10,local_c);
  (*pcVar5)(plVar2,aDStack_30);
  uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_38);
  *(undefined8 *)(this + 400) = uVar3;
  pCVar1 = (CardBoardMgr *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  CardBoardMgr::gatherHandCardsInfo(pCVar1,(TRect *)(this + 0x238),(Widget *)this);
  pDVar4 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_38);
  CreateLibrary(this,pDVar4);
  pDVar4 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_38);
  CreateGraveyard(this,pDVar4);
  pDVar4 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_38);
  CreatePlayerSun(this,pDVar4);
  pDVar4 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_38);
  CreateTurnDisplay(this,pDVar4);
  pDVar4 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_38);
  createArrowEffect(this,pDVar4);
  pDVar4 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_38);
  createTutorialEffect(this,pDVar4);
  uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_38);
  (**(code **)(*(long *)this + 0x368))(this,uVar3,2);
  nop();
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::Initialize() */

void __thiscall CardGameBoard::Initialize(CardGameBoard *this)

{
  CardBoardMgr *pCVar1;
  long *plVar2;
  undefined8 uVar3;
  DTransformNode *pDVar4;
  code *pcVar5;
  DRefPtr<DBoard> aDStack_38 [8];
  DVec2 aDStack_30 [8];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float fStack_10;
  float fStack_c;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  onBoardPreCreated(this);
  Sexy::Insets::Insets((Insets *)&uStack_28);
  pCVar1 = (CardBoardMgr *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  CardBoardMgr::gatherBoardInfo(pCVar1,(TRect *)&uStack_28);
  (**(code **)(*(long *)this + 0x330))(this,uStack_28,uStack_24,uStack_20,uStack_1c);
  DRefPtr<DBoard>::DRefPtr(aDStack_38);
  EA::Text::Rectangle::Rectangle
            ((Rectangle *)&uStack_18,0.0,0.0,(float)*(int *)(this + 0x50),
             (float)*(int *)(this + 0x54));
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_38);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x110))(uStack_18,uStack_14);
  (**(code **)(*plVar2 + 0x130))(0,0);
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_38);
  pcVar5 = *(code **)(*plVar2 + 0x210);
  DVec2::DVec2(aDStack_30,fStack_10,fStack_c);
  (*pcVar5)(plVar2,aDStack_30);
  uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_38);
  *(undefined8 *)(this + 400) = uVar3;
  pCVar1 = (CardBoardMgr *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  CardBoardMgr::gatherHandCardsInfo(pCVar1,(TRect *)(this + 0x238),(Widget *)this);
  pDVar4 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_38);
  CreateLibrary(this,pDVar4);
  pDVar4 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_38);
  CreateGraveyard(this,pDVar4);
  pDVar4 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_38);
  CreatePlayerSun(this,pDVar4);
  pDVar4 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_38);
  CreateTurnDisplay(this,pDVar4);
  pDVar4 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_38);
  createArrowEffect(this,pDVar4);
  pDVar4 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_38);
  createTutorialEffect(this,pDVar4);
  uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_38);
  (**(code **)(*(long *)this + 0x368))(this,uVar3,2);
  nop();
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_38);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::UseCard(Card*, Sexy::Touch const&) */

void CardGameBoard::UseCard(Card *param_1,Touch *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  Touch *pTVar4;
  undefined8 uVar5;
  char *__s;
  TGALogMgr *pTVar6;
  long lVar7;
  long lVar8;
  CardBoardMgr *this;
  size_t __n;
  code *pcVar9;
  TPoint aTStack_70 [8];
  TGASecretStore aTStack_68 [8];
  undefined1 auStack_60 [16];
  string asStack_50 [24];
  FPoint aFStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long **)(param_1 + 0x200) == (long *)0x0) ||
     (cVar1 = (**(code **)(**(long **)(param_1 + 0x200) + 0xe0))(), cVar1 != '\0')) {
    pTVar4 = (Touch *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    CardBoardMgr::ConvertTouchPositionIntoBoardPosition(pTVar4);
    uVar2 = FUN_03575234(*(undefined4 *)(param_2 + 0x2b0));
    __n = *(size_t *)param_2;
    *(undefined4 *)(param_1 + 0x260) = uVar2;
    pcVar9 = *(code **)(__n + 0x418);
    Sexy::FPoint::FPoint(aFStack_38,aTStack_70);
    cVar1 = (*pcVar9)(param_2,aFStack_38);
    if (cVar1 == '\0') {
      CancelCard((CardGameBoard *)param_1,(Card *)param_2);
    }
    else {
      TGASecretStore::TGASecretStore(aTStack_68);
      std::string::append((string *)aTStack_68,"5",__n);
      uVar5 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
      thunk_FUN_05475e00(auStack_60,uVar5);
      iVar3 = FUN_03575238(*(undefined4 *)(param_2 + 0x2b4));
      DString::DString((DString *)aFStack_38,iVar3);
      __s = (char *)DString::c_str((DString *)aFStack_38);
      std::string::append(asStack_50,__s,__n);
      DString::~DString((DString *)aFStack_38);
      pTVar6 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGASecretStore::TGASecretStore((TGASecretStore *)aFStack_38,aTStack_68);
      TGALogMgr::LogCardGame(pTVar6,aFStack_38);
      DropGroupNode::~DropGroupNode((DropGroupNode *)aFStack_38);
      lVar7 = Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
      lVar8 = Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
      iVar3 = FUN_03575228(*(undefined4 *)(lVar8 + 8));
      FUN_03575220(lVar7 + 8,iVar3 + -1);
      OnUsedCard((CardGameBoard *)param_1,(Card *)param_2);
      *(undefined4 *)(param_1 + 0x260) = 0xffffffff;
      cVar1 = isConsumableCard((CardGameBoard *)param_1,(Card *)param_2);
      if (cVar1 == '\0') {
        DArray<Card*>::pushBack((DArray<Card*> *)(param_1 + 0x150),(Card *)param_2);
      }
      (**(code **)(*(long *)param_2 + 0x60))(param_2,1);
      DArray<Card*>::eraseObject((DArray<Card*> *)(param_1 + 0x138),(Card *)param_2,false);
      this = (CardBoardMgr *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
      cVar1 = CardBoardMgr::HasEmptySun(this);
      if (cVar1 == '\0') {
        SlideRepositionCards((CardGameBoard *)param_1,false);
      }
      else {
        MessageRouter::Post((_func_void *)gMessageRouter);
      }
      if ((*(int *)(param_1 + 0x2b0) - 0xbU < 3) || (*(int *)(param_1 + 0x2b0) == 6)) {
        param_1[0x2b5] = (Card)0x0;
        Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),false);
      }
      DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_68);
    }
    refreshGraveyardDisplay((CardGameBoard *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoard::EndTutorial() */

void __thiscall CardGameBoard::EndTutorial(CardGameBoard *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  char *__s;
  TGALogMgr *pTVar3;
  size_t __n;
  float fVar4;
  float fVar5;
  TGASecretStore aTStack_68 [40];
  string asStack_40 [8];
  DString aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_0357521c(*(undefined4 *)(pPVar2 + 0x40));
  if (iVar1 == 0x42) {
    PlayerInfo::CompleteTutorial(pPVar2,0x42);
    ClearTutorialTouch(this);
    clearTutorialEffect(this);
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),false);
    __n = 0;
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::NotifyCardTutorial,false);
    fVar4 = (float)PVZ_T();
    fVar5 = *(float *)(this + 0x2c0);
    TGASecretStore::TGASecretStore(aTStack_68);
    std::string::append((string *)aTStack_68,"8",__n);
    DString::DString(aDStack_38,(int)(fVar4 - fVar5));
    __s = (char *)DString::c_str(aDStack_38);
    std::string::append(asStack_40,__s,__n);
    DString::~DString(aDStack_38);
    pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGASecretStore::TGASecretStore((TGASecretStore *)aDStack_38,aTStack_68);
    TGALogMgr::LogCardGame(pTVar3,aDStack_38);
    DropGroupNode::~DropGroupNode((DropGroupNode *)aDStack_38);
    DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameBoard::ContinueTutorial() */

void __thiscall CardGameBoard::ContinueTutorial(CardGameBoard *this)

{
  if (0xc < *(int *)(this + 0x2b0)) {
    EndTutorial(this);
    return;
  }
  enableAllBtns(this,false);
  SetTutorialStep(this,*(int *)(this + 0x2b0) + 1);
  return;
}


/* CardGameBoard::updateTutorials() */

void __thiscall CardGameBoard::updateTutorials(CardGameBoard *this)

{
  Board *this_00;
  
  if ((((*(int *)(this + 0x2b0) - 0xbU < 3) || (*(int *)(this + 0x2b0) == 6)) &&
      (this_00 = *(Board **)(gLawnApp + 0x9f0), this_00[0x889] == (Board)0x0)) &&
     (this[0x2b5] == (CardGameBoard)0x0)) {
    this[0x2b5] = (CardGameBoard)0x1;
    Board::SetGameplayObjectPause(this_00,true);
    ContinueTutorial(this);
    return;
  }
  return;
}


/* CardGameBoard::Update() */

void __thiscall CardGameBoard::Update(CardGameBoard *this)

{
  Board *this_00;
  
  if ((((*(int *)(this + 0x2b0) - 0xbU < 3) || (*(int *)(this + 0x2b0) == 6)) &&
      (this_00 = *(Board **)(gLawnApp + 0x9f0), this_00[0x889] == (Board)0x0)) &&
     (this[0x2b5] == (CardGameBoard)0x0)) {
    this[0x2b5] = (CardGameBoard)0x1;
    Board::SetGameplayObjectPause(this_00,true);
    ContinueTutorial(this);
    return;
  }
  return;
}

