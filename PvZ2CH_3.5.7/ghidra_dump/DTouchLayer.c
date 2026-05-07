// Class: DTouchLayer


/* DTouchLayer::~DTouchLayer() */

void __thiscall DTouchLayer::~DTouchLayer(DTouchLayer *this)

{
  *(undefined ***)this = &PTR__DTouchLayer_06a25780;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a25ae8;
  *(undefined ***)(this + 0x150) = &PTR__DTouchLayer_06a25b20;
  DTouchDelegate::~DTouchDelegate((DTouchDelegate *)(this + 0x150));
  DTransformNode::~DTransformNode((DTransformNode *)this);
  return;
}


/* non-virtual thunk to DTouchLayer::~DTouchLayer() */

void __thiscall DTouchLayer::~DTouchLayer(DTouchLayer *this)

{
  ~DTouchLayer(this + -0x150);
  return;
}


/* DTouchLayer::~DTouchLayer() */

void __thiscall DTouchLayer::~DTouchLayer(DTouchLayer *this)

{
  ~DTouchLayer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DTouchLayer::~DTouchLayer() */

void __thiscall DTouchLayer::~DTouchLayer(DTouchLayer *this)

{
  ~DTouchLayer(this + -0x150);
  return;
}


/* DTouchLayer::onTouchBegan(Sexy::Touch const&) */

undefined8 DTouchLayer::onTouchBegan(Touch *param_1)

{
  return 1;
}


/* non-virtual thunk to DTouchLayer::onTouchBegan(Sexy::Touch const&) */

void __thiscall DTouchLayer::onTouchBegan(DTouchLayer *this,Touch *param_1)

{
  onTouchBegan((Touch *)(this + -0x150));
  return;
}


/* DTouchLayer::onTouchMoved(Sexy::Touch const&) */

void DTouchLayer::onTouchMoved(Touch *param_1)

{
  return;
}


/* non-virtual thunk to DTouchLayer::onTouchMoved(Sexy::Touch const&) */

void __thiscall DTouchLayer::onTouchMoved(DTouchLayer *this,Touch *param_1)

{
  onTouchMoved((Touch *)(this + -0x150));
  return;
}


/* DTouchLayer::onTouchEnded(Sexy::Touch const&) */

void DTouchLayer::onTouchEnded(Touch *param_1)

{
  return;
}


/* non-virtual thunk to DTouchLayer::onTouchEnded(Sexy::Touch const&) */

void __thiscall DTouchLayer::onTouchEnded(DTouchLayer *this,Touch *param_1)

{
  onTouchEnded((Touch *)(this + -0x150));
  return;
}


/* DTouchLayer::onTouchCancelled(Sexy::Touch const&) */

void DTouchLayer::onTouchCancelled(Touch *param_1)

{
  return;
}


/* non-virtual thunk to DTouchLayer::onTouchCancelled(Sexy::Touch const&) */

void __thiscall DTouchLayer::onTouchCancelled(DTouchLayer *this,Touch *param_1)

{
  onTouchCancelled((Touch *)(this + -0x150));
  return;
}


/* DTouchLayer::onTouchLongPress(Sexy::Touch const&) */

void DTouchLayer::onTouchLongPress(Touch *param_1)

{
  return;
}


/* non-virtual thunk to DTouchLayer::onTouchLongPress(Sexy::Touch const&) */

void __thiscall DTouchLayer::onTouchLongPress(DTouchLayer *this,Touch *param_1)

{
  onTouchLongPress((Touch *)(this + -0x150));
  return;
}


/* DTouchLayer::DTouchLayer() */

void __thiscall DTouchLayer::DTouchLayer(DTouchLayer *this)

{
  DTransformNode::DTransformNode((DTransformNode *)this);
  DTouchDelegate::DTouchDelegate((DTouchDelegate *)(this + 0x150));
  *(DTouchLayer **)(this + 0x168) = this;
  *(undefined ***)this = &PTR__DTouchLayer_06a25780;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a25ae8;
  *(undefined ***)(this + 0x150) = &PTR__DTouchLayer_06a25b20;
  return;
}


/* DTouchLayer::onActive() */

void DTouchLayer::onActive(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  
  nop();
  lVar1 = in_x0 + 0x150;
  cVar2 = (**(code **)(*(long *)(in_x0 + 0x150) + 0x18))(lVar1);
  if (cVar2 != '\0') {
    (**(code **)(*(long *)(in_x0 + 0x150) + 0x10))(lVar1,0,*(undefined4 *)(in_x0 + 0x15c));
    (**(code **)(*(long *)(in_x0 + 0x150) + 0x10))(lVar1,1,*(undefined4 *)(in_x0 + 0x15c));
  }
  return;
}

