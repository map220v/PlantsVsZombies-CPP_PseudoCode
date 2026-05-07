// Class: DTouchCloseLayer


/* DTouchCloseLayer::handleTouchBegan(Sexy::Touch const&) */

undefined8 DTouchCloseLayer::handleTouchBegan(Touch *param_1)

{
  *(undefined4 *)(param_1 + 0x188) = 1;
  return 1;
}


/* DTouchCloseLayer::~DTouchCloseLayer() */

void __thiscall DTouchCloseLayer::~DTouchCloseLayer(DTouchCloseLayer *this)

{
  *(undefined ***)this = &PTR__DTouchCloseLayer_0665d0c0;
  *(undefined ***)(this + 0x10) = &PTR_setColor_0665d470;
  *(undefined ***)(this + 0x150) = &PTR__DTouchCloseLayer_0665d4a8;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x198));
  DMenu::~DMenu((DMenu *)this);
  return;
}


/* non-virtual thunk to DTouchCloseLayer::~DTouchCloseLayer() */

void __thiscall DTouchCloseLayer::~DTouchCloseLayer(DTouchCloseLayer *this)

{
  ~DTouchCloseLayer(this + -0x150);
  return;
}


/* DTouchCloseLayer::~DTouchCloseLayer() */

void __thiscall DTouchCloseLayer::~DTouchCloseLayer(DTouchCloseLayer *this)

{
  ~DTouchCloseLayer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DTouchCloseLayer::~DTouchCloseLayer() */

void __thiscall DTouchCloseLayer::~DTouchCloseLayer(DTouchCloseLayer *this)

{
  ~DTouchCloseLayer(this + -0x150);
  return;
}


/* DTouchCloseLayer::DTouchCloseLayer() */

void __thiscall DTouchCloseLayer::DTouchCloseLayer(DTouchCloseLayer *this)

{
  DMenu::DMenu((DMenu *)this);
  *(undefined ***)this = &PTR__DTouchCloseLayer_0665d0c0;
  *(undefined ***)(this + 0x10) = &PTR_setColor_0665d470;
  *(undefined ***)(this + 0x150) = &PTR__DTouchCloseLayer_0665d4a8;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x198));
  return;
}


/* DTouchCloseLayer::handleTouchEnded(Sexy::Touch const&) */

void __thiscall DTouchCloseLayer::handleTouchEnded(DTouchCloseLayer *this,Touch *param_1)

{
  bool bVar1;
  
  bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x198));
  if (!bVar1) {
    return;
  }
  std::function<void(Sexy::Touch_const&)>::operator()
            ((function<void(Sexy::Touch_const&)> *)(this + 0x198),param_1);
  return;
}


/* DTouchCloseLayer::onTouchEndedCallback(std::function<void (Sexy::Touch const&)>) */

void __thiscall DTouchCloseLayer::onTouchEndedCallback(DTouchCloseLayer *this,function *param_2)

{
  std::function<void(Sexy::Touch_const&)>::operator=
            ((function<void(Sexy::Touch_const&)> *)(this + 0x198),param_2);
  return;
}

