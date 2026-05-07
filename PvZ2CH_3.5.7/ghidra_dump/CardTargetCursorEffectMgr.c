// Class: CardTargetCursorEffectMgr


/* CardTargetCursorEffectMgr::~CardTargetCursorEffectMgr() */

void __thiscall
CardTargetCursorEffectMgr::~CardTargetCursorEffectMgr(CardTargetCursorEffectMgr *this)

{
  *(undefined ***)this = &PTR__CardTargetCursorEffectMgr_06666ca0;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 0x18))();
    *(undefined8 *)(this + 8) = 0;
  }
  Sexy::LazySingleton<CardTargetCursorEffectMgr>::~LazySingleton
            ((LazySingleton<CardTargetCursorEffectMgr> *)this);
  return;
}


/* CardTargetCursorEffectMgr::~CardTargetCursorEffectMgr() */

void __thiscall
CardTargetCursorEffectMgr::~CardTargetCursorEffectMgr(CardTargetCursorEffectMgr *this)

{
  ~CardTargetCursorEffectMgr(this);
  AK::FreeHook(this);
  return;
}


/* CardTargetCursorEffectMgr::Draw(Sexy::Graphics*) */

void CardTargetCursorEffectMgr::Draw(Graphics *param_1)

{
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x50))();
  }
  return;
}


/* CardTargetCursorEffectMgr::Update() */

void __thiscall CardTargetCursorEffectMgr::Update(CardTargetCursorEffectMgr *this)

{
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 0x48))();
  }
  return;
}


/* CardTargetCursorEffectMgr::SetPositionFromBoardSpace(Sexy::Point const&) */

void __thiscall
CardTargetCursorEffectMgr::SetPositionFromBoardSpace(CardTargetCursorEffectMgr *this,Point *param_1)

{
  if (*(AddEnergyEffect **)(this + 8) != (AddEnergyEffect *)0x0) {
    AddEnergyEffect::SetEndPosition(*(AddEnergyEffect **)(this + 8),(SexyVector2 *)param_1);
    return;
  }
  return;
}


/* CardTargetCursorEffectMgr::SetVisible(bool) */

void __thiscall CardTargetCursorEffectMgr::SetVisible(CardTargetCursorEffectMgr *this,bool param_1)

{
  if (*(long *)(this + 8) != 0) {
    FUN_03603bd4(*(long *)(this + 8) + 0x29,param_1);
    return;
  }
  return;
}


/* CardTargetCursorEffectMgr::GetBoardPosition() */

void CardTargetCursorEffectMgr::GetBoardPosition(void)

{
  long in_x0;
  Point *in_x8;
  
  if (*(long *)(in_x0 + 8) != 0) {
    CardTargetCursorEffect::GetBoardPosition();
    return;
  }
  Sexy::Point::Point(in_x8,0,0);
  return;
}


/* CardTargetCursorEffectMgr::CardTargetCursorEffectMgr() */

void __thiscall
CardTargetCursorEffectMgr::CardTargetCursorEffectMgr(CardTargetCursorEffectMgr *this)

{
  Sexy::LazySingleton<CardTargetCursorEffectMgr>::LazySingleton
            ((LazySingleton<CardTargetCursorEffectMgr> *)this);
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__CardTargetCursorEffectMgr_06666ca0;
  return;
}


/* CardTargetCursorEffectMgr::AddEffect(bool) */

void __thiscall CardTargetCursorEffectMgr::AddEffect(CardTargetCursorEffectMgr *this,bool param_1)

{
  CardTargetCursorEffect *this_00;
  
  MapPiecesAnimRig::Clear((MapPiecesAnimRig *)this);
  this_00 = ::operator_new(0x40);
  CardTargetCursorEffect::CardTargetCursorEffect(this_00);
  FUN_03603bc8(this_00 + 0x28,param_1);
  *(CardTargetCursorEffect **)(this + 8) = this_00;
  return;
}


/* CardTargetCursorEffectMgr::AddAnim(PopAnimRig*, Sexy::SexyVector2, Sexy::SexyVector2) */

void CardTargetCursorEffectMgr::AddAnim
               (undefined4 param_1_00,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    CardTargetCursorEffect::AddAnimRig(param_1_00,param_2,param_3,param_4);
    return;
  }
  return;
}

