// Class: DRefPtr<UIAccumulatedLoginButton>


/* DRefPtr<UIAccumulatedLoginButton>::~DRefPtr() */

void __thiscall DRefPtr<UIAccumulatedLoginButton>::~DRefPtr(DRefPtr<UIAccumulatedLoginButton> *this)

{
  if (*(DRef **)this != (DRef *)0x0) {
    DRef::unref(*(DRef **)this);
    return;
  }
  return;
}


/* DRefPtr<ICloudRequestCallbackFunctionBase>::TEMPNAMEPLACEHOLDERVALUE(DRefPtr<ICloudRequestCallbackFunctionBase>
   const&) */

DRefPtr<ICloudRequestCallbackFunctionBase> * __thiscall
DRefPtr<ICloudRequestCallbackFunctionBase>::operator=
          (DRefPtr<ICloudRequestCallbackFunctionBase> *this,DRefPtr *param_1)

{
  DRef *this_00;
  DRef *this_01;
  
  this_01 = *(DRef **)param_1;
  this_00 = *(DRef **)this;
  if (this_01 != this_00) {
    if (this_01 != (DRef *)0x0) {
      DRef::ref(this_01);
      this_00 = *(DRef **)this;
    }
    if (this_00 != (DRef *)0x0) {
      DRef::unref(this_00);
    }
    *(undefined8 *)this = *(undefined8 *)param_1;
  }
  return this;
}


/* DRefPtr<DTouchLayer>::DRefPtr(DTouchLayer*) */

void __thiscall DRefPtr<DTouchLayer>::DRefPtr(DRefPtr<DTouchLayer> *this,DTouchLayer *param_1)

{
  *(DTouchLayer **)this = param_1;
  if (param_1 != (DTouchLayer *)0x0) {
    DRef::ref((DRef *)param_1);
    return;
  }
  return;
}


/* DRefPtr<DUpdateNumberAction>::DRefPtr() */

void __thiscall DRefPtr<DUpdateNumberAction>::DRefPtr(DRefPtr<DUpdateNumberAction> *this)

{
  DUpdateNumberAction *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0xc0);
  DUpdateNumberAction::DUpdateNumberAction(this_00);
  *(DUpdateNumberAction **)this = this_00;
  return;
}


/* DRefPtr<DSpriteNode>::DRefPtr() */

void __thiscall DRefPtr<DSpriteNode>::DRefPtr(DRefPtr<DSpriteNode> *this)

{
  DSpriteNode *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0x158);
  DSpriteNode::DSpriteNode(this_00);
  *(DSpriteNode **)this = this_00;
  return;
}


/* DRefPtr<DStringNode>::DRefPtr() */

void __thiscall DRefPtr<DStringNode>::DRefPtr(DRefPtr<DStringNode> *this)

{
  DStringNode *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0x180);
  DStringNode::DStringNode(this_00);
  *(DStringNode **)this = this_00;
  return;
}


/* DRefPtr<DAtlasSpriteNode>::DRefPtr() */

void __thiscall DRefPtr<DAtlasSpriteNode>::DRefPtr(DRefPtr<DAtlasSpriteNode> *this)

{
  DAtlasSpriteNode *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0x170);
  memset(this_00,0,0x170);
  DAtlasSpriteNode::DAtlasSpriteNode(this_00);
  *(DAtlasSpriteNode **)this = this_00;
  return;
}


/* DRefPtr<DAction>::DRefPtr(DRefPtr<DAction>&&) */

void __thiscall DRefPtr<DAction>::DRefPtr(DRefPtr<DAction> *this,DRefPtr *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  return;
}


/* DRefPtr<DLayer>::DRefPtr() */

void __thiscall DRefPtr<DLayer>::DRefPtr(DRefPtr<DLayer> *this)

{
  DLayer *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0x150);
  memset(this_00,0,0x150);
  DLayer::DLayer(this_00);
  *(DLayer **)this = this_00;
  return;
}


/* DRefPtr<DMenu>::DRefPtr() */

void __thiscall DRefPtr<DMenu>::DRefPtr(DRefPtr<DMenu> *this)

{
  DMenu *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0x198);
  DMenu::DMenu(this_00);
  *(DMenu **)this = this_00;
  return;
}


/* DRefPtr<DAnimNode>::DRefPtr() */

void __thiscall DRefPtr<DAnimNode>::DRefPtr(DRefPtr<DAnimNode> *this)

{
  DAnimNode *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0x1a0);
  DAnimNode::DAnimNode(this_00);
  *(DAnimNode **)this = this_00;
  return;
}


/* DRefPtr<DButton>::DRefPtr() */

void __thiscall DRefPtr<DButton>::DRefPtr(DRefPtr<DButton> *this)

{
  DButton *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0x260);
  DButton::DButton(this_00);
  *(DButton **)this = this_00;
  return;
}


/* DRefPtr<DFade>::DRefPtr() */

void __thiscall DRefPtr<DFade>::DRefPtr(DRefPtr<DFade> *this)

{
  DFade *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0xb0);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  DFade::DFade(this_00);
  *(DFade **)this = this_00;
  return;
}


/* DRefPtr<DMove>::DRefPtr() */

void __thiscall DRefPtr<DMove>::DRefPtr(DRefPtr<DMove> *this)

{
  DMove *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0xc0);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  DMove::DMove(this_00);
  *(DMove **)this = this_00;
  return;
}


/* DRefPtr<DScale>::DRefPtr() */

void __thiscall DRefPtr<DScale>::DRefPtr(DRefPtr<DScale> *this)

{
  DScale *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0xc0);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  DScale::DScale(this_00);
  *(DScale **)this = this_00;
  return;
}


/* DRefPtr<DAction>::DRefPtr() */

void __thiscall DRefPtr<DAction>::DRefPtr(DRefPtr<DAction> *this)

{
  DAction *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0x90);
  DAction::DAction(this_00);
  *(DAction **)this = this_00;
  return;
}


/* DRefPtr<DSprite9SliceNode>::DRefPtr(DRefPtr<DSprite9SliceNode> const&) */

void __thiscall
DRefPtr<DSprite9SliceNode>::DRefPtr(DRefPtr<DSprite9SliceNode> *this,DRefPtr *param_1)

{
  DRef *this_00;
  
  this_00 = *(DRef **)param_1;
  *(DRef **)this = this_00;
  if (this_00 != (DRef *)0x0) {
    DRef::ref(this_00);
    return;
  }
  return;
}


void __thiscall
DRefPtr<DSprite9SliceNode>::DRefPtr(DRefPtr<DSprite9SliceNode> *this,DRefPtr *param_1)

{
  DRef *this_00;
  
  this_00 = *(DRef **)param_1;
  *(DRef **)this = this_00;
  if (this_00 != (DRef *)0x0) {
    DRef::ref(this_00);
    return;
  }
  return;
}


/* DRefPtr<DSpawn>::DRefPtr() */

void __thiscall DRefPtr<DSpawn>::DRefPtr(DRefPtr<DSpawn> *this)

{
  DSpawn *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0xb8);
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  DSpawn::DSpawn(this_00);
  *(DSpawn **)this = this_00;
  return;
}


/* DRefPtr<Card>::DRefPtr() */

void __thiscall DRefPtr<Card>::DRefPtr(DRefPtr<Card> *this)

{
  Card *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0x2c8);
  Card::Card(this_00);
  *(Card **)this = this_00;
  return;
}


void __thiscall DRefPtr<DAction>::DRefPtr(DRefPtr<DAction> *this,DRefPtr *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  return;
}


/* DRefPtr<DFixedLayer>::DRefPtr() */

void __thiscall DRefPtr<DFixedLayer>::DRefPtr(DRefPtr<DFixedLayer> *this)

{
  DFixedLayer *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0x160);
  memset(this_00,0,0x160);
  DFixedLayer::DFixedLayer(this_00);
  *(DFixedLayer **)this = this_00;
  return;
}


/* DRefPtr<DSequence>::DRefPtr() */

void __thiscall DRefPtr<DSequence>::DRefPtr(DRefPtr<DSequence> *this)

{
  DSequence *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0xb0);
  DSequence::DSequence(this_00);
  *(DSequence **)this = this_00;
  return;
}


/* DRefPtr<DSprite9SliceNode>::DRefPtr() */

void __thiscall DRefPtr<DSprite9SliceNode>::DRefPtr(DRefPtr<DSprite9SliceNode> *this)

{
  DSprite9SliceNode *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0x158);
  memset(this_00,0,0x158);
  DSprite9SliceNode::DSprite9SliceNode(this_00);
  *(DSprite9SliceNode **)this = this_00;
  return;
}


/* DRefPtr<DUpdateAction>::DRefPtr() */

void __thiscall DRefPtr<DUpdateAction>::DRefPtr(DRefPtr<DUpdateAction> *this)

{
  DUpdateAction *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0xc0);
  DUpdateAction::DUpdateAction(this_00);
  *(DUpdateAction **)this = this_00;
  return;
}


/* DRefPtr<DBezier>::DRefPtr() */

void __thiscall DRefPtr<DBezier>::DRefPtr(DRefPtr<DBezier> *this)

{
  DBezier *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0xd0);
  DBezier::DBezier(this_00);
  *(DBezier **)this = this_00;
  return;
}


/* DRefPtr<DTouchCloseLayer>::DRefPtr() */

void __thiscall DRefPtr<DTouchCloseLayer>::DRefPtr(DRefPtr<DTouchCloseLayer> *this)

{
  DTouchCloseLayer *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0x1b8);
  DTouchCloseLayer::DTouchCloseLayer(this_00);
  *(DTouchCloseLayer **)this = this_00;
  return;
}


/* DRefPtr<DBoard>::DRefPtr() */

void __thiscall DRefPtr<DBoard>::DRefPtr(DRefPtr<DBoard> *this)

{
  DBoard *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0x1a0);
  DBoard::DBoard(this_00);
  *(DBoard **)this = this_00;
  return;
}


/* DRefPtr<DTransformNode>::DRefPtr() */

void __thiscall DRefPtr<DTransformNode>::DRefPtr(DRefPtr<DTransformNode> *this)

{
  DTransformNode *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0x150);
  DTransformNode::DTransformNode(this_00);
  *(DTransformNode **)this = this_00;
  return;
}


/* DRefPtr<DJump>::DRefPtr() */

void __thiscall DRefPtr<DJump>::DRefPtr(DRefPtr<DJump> *this)

{
  DJump *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0xd0);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  DJump::DJump(this_00);
  *(DJump **)this = this_00;
  return;
}


/* DRefPtr<DChestAnimNode>::DRefPtr() */

void __thiscall DRefPtr<DChestAnimNode>::DRefPtr(DRefPtr<DChestAnimNode> *this)

{
  DChestAnimNode *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0x1c0);
  DChestAnimNode::DChestAnimNode(this_00);
  *(DChestAnimNode **)this = this_00;
  return;
}


/* DRefPtr<DSchedule>::DRefPtr() */

void __thiscall DRefPtr<DSchedule>::DRefPtr(DRefPtr<DSchedule> *this)

{
  DSchedule *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0xb0);
  DSchedule::DSchedule(this_00);
  *(DSchedule **)this = this_00;
  return;
}


/* DRefPtr<DTouchLayer>::DRefPtr() */

void __thiscall DRefPtr<DTouchLayer>::DRefPtr(DRefPtr<DTouchLayer> *this)

{
  DTouchLayer *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0x170);
  DTouchLayer::DTouchLayer(this_00);
  *(DTouchLayer **)this = this_00;
  return;
}


/* DRefPtr<DTouchListener>::DRefPtr() */

void __thiscall DRefPtr<DTouchListener>::DRefPtr(DRefPtr<DTouchListener> *this)

{
  DTouchListener *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0xd0);
  DTouchListener::DTouchListener(this_00);
  *(DTouchListener **)this = this_00;
  return;
}


/* DRefPtr<DEditorNode>::DRefPtr() */

void __thiscall DRefPtr<DEditorNode>::DRefPtr(DRefPtr<DEditorNode> *this)

{
  DEditorNode *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0x1c8);
  memset(this_00,0,0x1c8);
  DEditorNode::DEditorNode(this_00);
  *(DEditorNode **)this = this_00;
  return;
}


/* DRefPtr<DRotate>::DRefPtr() */

void __thiscall DRefPtr<DRotate>::DRefPtr(DRefPtr<DRotate> *this)

{
  DRotate *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0xb0);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  DRotate::DRotate(this_00);
  *(DRotate **)this = this_00;
  return;
}


/* DRefPtr<DRemoveSelf>::DRefPtr() */

void __thiscall DRefPtr<DRemoveSelf>::DRefPtr(DRefPtr<DRemoveSelf> *this)

{
  DRemoveSelf *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0x98);
  DRemoveSelf::DRemoveSelf(this_00);
  *(DRemoveSelf **)this = this_00;
  return;
}


/* DRefPtr<DWake>::DRefPtr() */

void __thiscall DRefPtr<DWake>::DRefPtr(DRefPtr<DWake> *this)

{
  DWake *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0xa8);
  DWake::DWake(this_00);
  *(DWake **)this = this_00;
  return;
}


/* DRefPtr<DSleep>::DRefPtr() */

void __thiscall DRefPtr<DSleep>::DRefPtr(DRefPtr<DSleep> *this)

{
  DSleep *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0xa8);
  DSleep::DSleep(this_00);
  *(DSleep **)this = this_00;
  return;
}


/* DRefPtr<DButtonGroup>::DRefPtr() */

void __thiscall DRefPtr<DButtonGroup>::DRefPtr(DRefPtr<DButtonGroup> *this)

{
  DButtonGroup *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0x288);
  DButtonGroup::DButtonGroup(this_00);
  *(DButtonGroup **)this = this_00;
  return;
}


/* DRefPtr<DScrollView>::DRefPtr() */

void __thiscall DRefPtr<DScrollView>::DRefPtr(DRefPtr<DScrollView> *this)

{
  DScrollView *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0x210);
  DScrollView::DScrollView(this_00);
  *(DScrollView **)this = this_00;
  return;
}


/* DRefPtr<DTextField>::DRefPtr() */

void __thiscall DRefPtr<DTextField>::DRefPtr(DRefPtr<DTextField> *this)

{
  DTextField *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0x240);
  DTextField::DTextField(this_00);
  *(DTextField **)this = this_00;
  return;
}


/* DRefPtr<UIAccumulatedLoginButton>::DRefPtr() */

void __thiscall DRefPtr<UIAccumulatedLoginButton>::DRefPtr(DRefPtr<UIAccumulatedLoginButton> *this)

{
  UIAccumulatedLoginButton *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0x260);
  UIAccumulatedLoginButton::UIAccumulatedLoginButton(this_00);
  *(UIAccumulatedLoginButton **)this = this_00;
  return;
}


/* DRefPtr<DChangeColor>::DRefPtr() */

void __thiscall DRefPtr<DChangeColor>::DRefPtr(DRefPtr<DChangeColor> *this)

{
  DChangeColor *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0xc0);
  DChangeColor::DChangeColor(this_00);
  *(DChangeColor **)this = this_00;
  return;
}


/* DRefPtr<DVisible>::DRefPtr() */

void __thiscall DRefPtr<DVisible>::DRefPtr(DRefPtr<DVisible> *this)

{
  DVisible *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(0x98);
  DVisible::DVisible(this_00);
  *(DVisible **)this = this_00;
  return;
}


/* DRefPtr<DSpriteStringNode>::DRefPtr() */

void __thiscall DRefPtr<DSpriteStringNode>::DRefPtr(DRefPtr<DSpriteStringNode> *this)

{
  DSpriteStringNode *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = ::operator_new(400);
  memset(this_00,0,400);
  DSpriteStringNode::DSpriteStringNode(this_00);
  *(DSpriteStringNode **)this = this_00;
  return;
}

