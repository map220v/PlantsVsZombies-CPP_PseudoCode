// Class: DTextField


/* DTextField::getCharNum() const */

undefined8 __thiscall DTextField::getCharNum(DTextField *this)

{
  return *(undefined8 *)(this + 0x218);
}


/* DTextField::setTextFieldType(DTextFieldType) */

void __thiscall DTextField::setTextFieldType(DTextField *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x1c8) = param_2;
  return;
}


/* DTextField::getTextFieldType() const */

undefined4 __thiscall DTextField::getTextFieldType(DTextField *this)

{
  return *(undefined4 *)(this + 0x1c8);
}


/* DTextField::setCharNum(unsigned long) */

void __thiscall DTextField::setCharNum(DTextField *this,ulong param_1)

{
  *(ulong *)(this + 0x218) = param_1;
  return;
}


/* DTextField::isNewMode() */

undefined8 DTextField::isNewMode(void)

{
  return 1;
}


/* non-virtual thunk to DTextField::isNewMode() */

void __thiscall DTextField::isNewMode(DTextField *this)

{
  isNewMode();
  return;
}


/* DTextField::getPlaceHolderColor() const */

DTextField * __thiscall DTextField::getPlaceHolderColor(DTextField *this)

{
  return this + 0x1cc;
}


/* DTextField::setPlaceHolderColor(Sexy::Color const&) */

void __thiscall DTextField::setPlaceHolderColor(DTextField *this,Color *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x1cc) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x1d4) = uVar1;
  return;
}


/* DTextField::getInputColor() const */

DTextField * __thiscall DTextField::getInputColor(DTextField *this)

{
  return this + 0x1dc;
}


/* DTextField::setInputColor(Sexy::Color const&) */

void __thiscall DTextField::setInputColor(DTextField *this,Color *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x1dc) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x1e4) = uVar1;
  return;
}


/* DTextField::keyboardWillShow(IMEKeyboardNotificationInfo&) */

void DTextField::keyboardWillShow(IMEKeyboardNotificationInfo *param_1)

{
  return;
}


/* non-virtual thunk to DTextField::keyboardWillShow(IMEKeyboardNotificationInfo&) */

void __thiscall DTextField::keyboardWillShow(DTextField *this,IMEKeyboardNotificationInfo *param_1)

{
  keyboardWillShow((IMEKeyboardNotificationInfo *)(this + -0x180));
  return;
}


/* DTextField::keyboardDidShow(IMEKeyboardNotificationInfo&) */

void DTextField::keyboardDidShow(IMEKeyboardNotificationInfo *param_1)

{
  return;
}


/* non-virtual thunk to DTextField::keyboardDidShow(IMEKeyboardNotificationInfo&) */

void __thiscall DTextField::keyboardDidShow(DTextField *this,IMEKeyboardNotificationInfo *param_1)

{
  keyboardDidShow((IMEKeyboardNotificationInfo *)(this + -0x180));
  return;
}


/* DTextField::keyboardWillHide(IMEKeyboardNotificationInfo&) */

void DTextField::keyboardWillHide(IMEKeyboardNotificationInfo *param_1)

{
  return;
}


/* non-virtual thunk to DTextField::keyboardWillHide(IMEKeyboardNotificationInfo&) */

void __thiscall DTextField::keyboardWillHide(DTextField *this,IMEKeyboardNotificationInfo *param_1)

{
  keyboardWillHide((IMEKeyboardNotificationInfo *)(this + -0x180));
  return;
}


/* DTextField::keyboardDidHide(IMEKeyboardNotificationInfo&) */

void DTextField::keyboardDidHide(IMEKeyboardNotificationInfo *param_1)

{
  (**(code **)(*(long *)param_1 + 0x428))();
  return;
}


/* non-virtual thunk to DTextField::keyboardDidHide(IMEKeyboardNotificationInfo&) */

void __thiscall DTextField::keyboardDidHide(DTextField *this,IMEKeyboardNotificationInfo *param_1)

{
  keyboardDidHide((IMEKeyboardNotificationInfo *)(this + -0x180));
  return;
}


/* DTextField::onTouchMoved(Sexy::Touch const&) */

void DTextField::onTouchMoved(Touch *param_1)

{
  return;
}


/* non-virtual thunk to DTextField::onTouchMoved(Sexy::Touch const&) */

void __thiscall DTextField::onTouchMoved(DTextField *this,Touch *param_1)

{
  onTouchMoved((Touch *)(this + -0x188));
  return;
}


/* DTextField::onTouchLongPress(Sexy::Touch const&) */

void DTextField::onTouchLongPress(Touch *param_1)

{
  return;
}


/* non-virtual thunk to DTextField::onTouchLongPress(Sexy::Touch const&) */

void __thiscall DTextField::onTouchLongPress(DTextField *this,Touch *param_1)

{
  onTouchLongPress((Touch *)(this + -0x188));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTextField::getFontInfo(std::string&, float&) */

void __thiscall DTextField::getFontInfo(DTextField *this,string *param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x368))(asStack_10);
  FUN_05474278(param_1,asStack_10);
  std::string::~string(asStack_10);
  fVar2 = (float)(**(code **)(*(long *)this + 0x380))(this);
  bVar1 = local_8 == ___stack_chk_guard;
  *param_2 = fVar2;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to DTextField::getFontInfo(std::string&, float&) */

void __thiscall DTextField::getFontInfo(DTextField *this,string *param_1,float *param_2)

{
  getFontInfo(this + -0x180,param_1,param_2);
  return;
}


/* DTextField::getText() */

void DTextField::getText(void)

{
  long in_x0;
  
  DString::operator_cast_to_string((DString *)(in_x0 + 0x208));
  return;
}


/* non-virtual thunk to DTextField::getText() */

void __thiscall DTextField::getText(DTextField *this)

{
  getText();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTextField::setPlaceHolderText(std::string const&, bool) */

void __thiscall DTextField::setPlaceHolderText(DTextField *this,string *param_1,bool param_2)

{
  code *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::operator=((DString *)(this + 0x1f0),param_1);
  this[0x200] = (DTextField)param_2;
  pcVar1 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_10,"");
  (*pcVar1)(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTextField::getPlaceHolderText() const */

void DTextField::getPlaceHolderText(void)

{
  long in_x0;
  wstring *extraout_x1;
  Sexy aSStack_20 [8];
  string asStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x200) == '\0') {
    DString::operator_cast_to_string((DString *)(in_x0 + 0x1f0));
  }
  else {
    DString::operator_cast_to_string((DString *)(in_x0 + 0x1f0));
    Sexy::UTF8StringToSexyString(asStack_18);
    TodStringTranslate(awStack_10);
    FUN_05476c50(awStack_10);
    std::string::~string(asStack_18);
    Sexy::SexyStringToUTF8String(aSStack_20,extraout_x1);
    FUN_05476c50(aSStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTextField::setText(std::string const&) */

void __thiscall DTextField::setText(DTextField *this,string *param_1)

{
  DString *this_00;
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  string *extraout_x1;
  string *extraout_x1_00;
  code *pcVar5;
  undefined4 uVar6;
  float fVar7;
  int local_20;
  int local_1c;
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_0547429c(param_1);
  iVar2 = FUN_04fa4604();
  if ((ulong)(long)iVar2 <= *(ulong *)(this + 0x218)) {
    this_00 = (DString *)(this + 0x208);
    DString::operator=(this_00,param_1);
    cVar1 = FUN_0547419c(param_1);
    lVar4 = *(long *)this;
    if (cVar1 == '\0') {
      pcVar5 = *(code **)(lVar4 + 0x338);
      uVar3 = DString::c_str(this_00);
      (*pcVar5)(this,uVar3);
      (**(code **)(*(long *)this + 0x268))(this,this + 0x1dc);
      uVar3 = *(undefined8 *)(this + 0x168);
      DString::operator_cast_to_string(this_00);
      Sexy::UTF8StringToWString(aSStack_18,extraout_x1);
      Sexy::PrimeTypeface::SizeString_Paragraph(0,uVar3,asStack_10,&local_20,&local_1c);
      FUN_05476c50(asStack_10);
      std::string::~string((string *)aSStack_18);
    }
    else {
      pcVar5 = *(code **)(lVar4 + 0x338);
      (**(code **)(lVar4 + 0x3d0))(asStack_10,this);
      uVar3 = FUN_0547429c(asStack_10);
      (*pcVar5)(this,uVar3);
      std::string::~string(asStack_10);
      (**(code **)(*(long *)this + 0x268))(this,this + 0x1cc);
      uVar3 = *(undefined8 *)(this + 0x168);
      DString::operator_cast_to_string((DString *)(this + 0x1f0));
      Sexy::UTF8StringToWString(aSStack_18,extraout_x1_00);
      Sexy::PrimeTypeface::SizeString_Paragraph(0,uVar3,asStack_10,&local_20,&local_1c);
      FUN_05476c50(asStack_10);
      std::string::~string((string *)aSStack_18);
      local_20 = 0;
      *(undefined8 *)(this + 0x220) = 0;
    }
    pcVar5 = *(code **)(*(long *)this + 0x1f8);
    *(float *)(this + 0x230) = (float)local_1c;
    lVar4 = (*pcVar5)(this);
    iVar2 = *(int *)(this + 0x160);
    if (iVar2 == 1) {
      fVar7 = (float)FUN_04fa487c(*(undefined4 *)(lVar4 + 8));
      *(float *)(this + 0x228) = (fVar7 + (float)local_20) * 0.5;
    }
    else if (iVar2 == 0) {
      *(float *)(this + 0x228) = (float)local_20;
    }
    else if (iVar2 == 2) {
      uVar6 = FUN_04fa487c(*(undefined4 *)(lVar4 + 8));
      *(undefined4 *)(this + 0x228) = uVar6;
    }
    iVar2 = *(int *)(this + 0x164);
    if (iVar2 == 1) {
      fVar7 = (float)FUN_04fa487c(*(undefined4 *)(lVar4 + 0xc));
      *(float *)(this + 0x22c) = (fVar7 - (float)local_1c) * 0.5;
    }
    else if (iVar2 == 0) {
      *(undefined4 *)(this + 0x22c) = 0;
    }
    else if (iVar2 == 2) {
      fVar7 = (float)FUN_04fa487c(*(undefined4 *)(lVar4 + 0xc));
      *(float *)(this + 0x22c) = fVar7 - (float)local_1c;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to DTextField::setText(std::string const&) */

void __thiscall DTextField::setText(DTextField *this,string *param_1)

{
  setText(this + -0x180,param_1);
  return;
}


/* DTextField::attachIME() */

void __thiscall DTextField::attachIME(DTextField *this)

{
  IMEDispatcher *this_00;
  
  if (this[0x239] != (DTextField)0x0) {
    return;
  }
  this_00 = (IMEDispatcher *)Sexy::IMEDispatcher::GetInstancePtr();
  Sexy::IMEDispatcher::AttachIME(this_00,(IMEDelegate *)(this + 0x180));
  if (*(int *)(this + 0x1c8) == 1) {
    (**(code **)(*Sexy::gSexyAppBase + 0x330))(Sexy::gSexyAppBase);
  }
  else if (*(int *)(this + 0x1c8) == 2) {
    (**(code **)(*Sexy::gSexyAppBase + 0x338))(Sexy::gSexyAppBase);
  }
  else {
    (**(code **)(*Sexy::gSexyAppBase + 0x328))();
  }
  this[0x239] = (DTextField)0x1;
  return;
}


/* DTextField::DTextField() */

void __thiscall DTextField::DTextField(DTextField *this)

{
  DStringNode::DStringNode((DStringNode *)this);
  IMEDelegate::IMEDelegate((IMEDelegate *)(this + 0x180));
  DTouchDelegate::DTouchDelegate((DTouchDelegate *)(this + 0x188));
  *(undefined ***)this = &PTR__DTextField_06a26750;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a26bc8;
  *(undefined ***)(this + 0x180) = &PTR_getText_06a26c00;
  *(undefined ***)(this + 0x188) = &PTR__DTextField_06a26c68;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x1a8));
  *(undefined4 *)(this + 0x1c8) = 0;
  Sexy::Color::Color((Color *)(this + 0x1cc));
  Sexy::Color::Color((Color *)(this + 0x1dc));
  DString::DString((DString *)(this + 0x1f0));
  this[0x200] = (DTextField)0x0;
  DString::DString((DString *)(this + 0x208));
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined4 *)(this + 0x234) = 0;
  this[0x238] = (DTextField)0x0;
  this[0x239] = (DTextField)0x0;
  *(undefined8 *)(this + 0x218) = 8;
  *(DTextField **)(this + 0x1a0) = this;
  *(undefined4 *)(this + 0x228) = 0;
  *(undefined4 *)(this + 0x22c) = 0;
  *(undefined4 *)(this + 0x230) = 0;
  DTouchDelegate::setTouchEnable((DTouchDelegate *)(this + 0x188),true,-2000);
  return;
}


/* DTextField::detachIME() */

void __thiscall DTextField::detachIME(DTextField *this)

{
  bool bVar1;
  exception_ptr *this_00;
  
  if (this[0x239] != (DTextField)0x0) {
    (**(code **)(*Sexy::gSexyAppBase + 0x340))(Sexy::gSexyAppBase);
    this_00 = (exception_ptr *)Sexy::IMEDispatcher::GetInstancePtr();
    std::__exception_ptr::exception_ptr::exception_ptr(this_00,(_func_void *)(this + 0x180));
    this[0x239] = (DTextField)0x0;
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x1a8));
    if (bVar1) {
      std::function<void()>::operator()((function<void()> *)(this + 0x1a8));
      return;
    }
  }
  return;
}


/* DTextField::returnBackward() */

void __thiscall DTextField::returnBackward(DTextField *this)

{
  bool bVar1;
  exception_ptr *this_00;
  
  if (this[0x239] != (DTextField)0x0) {
    (**(code **)(*Sexy::gSexyAppBase + 0x340))(Sexy::gSexyAppBase);
    this_00 = (exception_ptr *)Sexy::IMEDispatcher::GetInstancePtr();
    std::__exception_ptr::exception_ptr::exception_ptr(this_00,(_func_void *)(this + 0x180));
    this[0x239] = (DTextField)0x0;
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x1a8));
    if (bVar1) {
      std::function<void()>::operator()((function<void()> *)(this + 0x1a8));
      return;
    }
  }
  return;
}


/* non-virtual thunk to DTextField::returnBackward() */

void __thiscall DTextField::returnBackward(DTextField *this)

{
  returnBackward(this + -0x180);
  return;
}


/* DTextField::onTouchEnded(Sexy::Touch const&) */

void DTextField::onTouchEnded(Touch *param_1)

{
  if (param_1[0x239] != (Touch)0x0) {
    detachIME((DTextField *)param_1);
    return;
  }
  attachIME((DTextField *)param_1);
  return;
}


/* non-virtual thunk to DTextField::onTouchEnded(Sexy::Touch const&) */

void __thiscall DTextField::onTouchEnded(DTextField *this,Touch *param_1)

{
  onTouchEnded((Touch *)(this + -0x188));
  return;
}


/* DTextField::onTouchCancelled(Sexy::Touch const&) */

void DTextField::onTouchCancelled(Touch *param_1)

{
  Sexy::OutputDebugStrF((wchar_t *)"DTextField::onTouchCancelled");
  if (param_1[0x239] == (Touch)0x0) {
    return;
  }
  detachIME((DTextField *)param_1);
  return;
}


/* non-virtual thunk to DTextField::onTouchCancelled(Sexy::Touch const&) */

void __thiscall DTextField::onTouchCancelled(DTextField *this,Touch *param_1)

{
  onTouchCancelled((Touch *)(this + -0x188));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTextField::getFrameRect(Sexy::TRect<float>&) */

void __thiscall DTextField::getFrameRect(DTextField *this,TRect *param_1)

{
  float fVar1;
  DTransformNode *this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x218))(&local_28);
  (**(code **)(*(long *)this + 0xc0))(&local_20,this,&DVec2::ZERO);
  fVar2 = (float)(**(code **)(*(long *)this + 0x1d0))(this);
  fVar3 = (float)(**(code **)(*(long *)this + 0x1d8))(this);
  for (this_00 = *(DTransformNode **)(this + 0x98); this_00 != (DTransformNode *)0x0;
      this_00 = (DTransformNode *)(**(code **)(*(long *)this_00 + 0x238))()) {
    while( true ) {
      fVar4 = (float)(**(code **)(*(long *)this_00 + 0x1d0))(this_00);
      fVar2 = fVar2 * fVar4;
      fVar4 = (float)(**(code **)(*(long *)this_00 + 0x1d8))(this_00);
      fVar3 = fVar3 * fVar4;
      if (*(code **)(*(long *)this_00 + 0x238) != DTransformNode::getParent) break;
      this_00 = (DTransformNode *)DTransformNode::getParent(this_00);
      if (this_00 == (DTransformNode *)0x0) goto LAB_04fa4e5c;
    }
  }
LAB_04fa4e5c:
  if (fVar2 < 0.0) {
    local_20 = local_20 + local_28 * fVar2;
    fVar2 = -fVar2;
  }
  fVar4 = local_20;
  if (fVar3 < 0.0) {
    local_1c = local_1c + local_24 * fVar3;
    fVar3 = -fVar3;
  }
  fVar1 = local_1c;
  fVar2 = (float)FUN_04fa487c(local_28 * fVar2);
  fVar3 = (float)FUN_04fa487c(local_24 * fVar3);
  EA::Text::Rectangle::Rectangle((Rectangle *)&local_18,fVar4,fVar1,fVar2,fVar3);
  *(undefined8 *)param_1 = local_18;
  *(undefined8 *)(param_1 + 8) = uStack_10;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to DTextField::getFrameRect(Sexy::TRect<float>&) */

void __thiscall DTextField::getFrameRect(DTextField *this,TRect *param_1)

{
  getFrameRect(this + -0x180,param_1);
  return;
}


/* DTextField::getRect() */

Rectangle * DTextField::getRect(void)

{
  long in_x0;
  Rectangle *in_x8;
  
  EA::Text::Rectangle::Rectangle
            (in_x8,*(float *)(in_x0 + 0xe8) -
                   *(float *)(in_x0 + 0xf0) * *(float *)(in_x0 + 0xe0) * *(float *)(in_x0 + 0xc0),
             *(float *)(in_x0 + 0xec) -
             *(float *)(in_x0 + 0xf4) * *(float *)(in_x0 + 0xe4) * *(float *)(in_x0 + 0xc4),
             *(float *)(in_x0 + 0xf0) * *(float *)(in_x0 + 0xe0),
             *(float *)(in_x0 + 0xf4) * *(float *)(in_x0 + 0xe4));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTextField::onTouchBegan(Sexy::Touch const&) */

void __thiscall DTextField::onTouchBegan(DTextField *this,Touch *param_1)

{
  char cVar1;
  DTextField DVar2;
  DTextField *this_00;
  long *plVar3;
  float local_20;
  float local_1c;
  TRect<float> aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  for (this_00 = this; this_00 != (DTextField *)0x0;
      this_00 = (DTextField *)(**(code **)(*(long *)this_00 + 0x238))()) {
    while( true ) {
      cVar1 = (**(code **)(*(long *)this_00 + 0xe0))(this_00);
      DVar2 = (DTextField)0x0;
      if (cVar1 == '\0') goto LAB_04fa5030;
      if (*(code **)(*(long *)this_00 + 0x238) != DTransformNode::getParent) break;
      this_00 = (DTextField *)DTransformNode::getParent((DTransformNode *)this_00);
      if (this_00 == (DTextField *)0x0) goto LAB_04fa4ff8;
    }
  }
LAB_04fa4ff8:
  if (*(code **)(*(long *)this + 0x238) == DTransformNode::getParent) {
    plVar3 = (long *)DTransformNode::getParent((DTransformNode *)this);
    (**(code **)(*plVar3 + 0xb0))(&local_20,plVar3,param_1);
    DVar2 = this[0x239];
  }
  else {
    plVar3 = (long *)(**(code **)(*(long *)this + 0x238))(this);
    (**(code **)(*plVar3 + 0xb0))(&local_20,plVar3,param_1);
    DVar2 = this[0x239];
  }
  if (DVar2 == (DTextField)0x0) {
    (**(code **)(*(long *)this + 0x430))(aTStack_18,this);
    DVar2 = (DTextField)Sexy::TRect<float>::Contains(aTStack_18,local_20,local_1c);
  }
LAB_04fa5030:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(DVar2);
  }
  return;
}


/* non-virtual thunk to DTextField::onTouchBegan(Sexy::Touch const&) */

void __thiscall DTextField::onTouchBegan(DTextField *this,Touch *param_1)

{
  onTouchBegan(this + -0x188,param_1);
  return;
}


/* DTextField::setEditFinish(std::function<void ()> const&) */

DTextField * __thiscall DTextField::setEditFinish(DTextField *this,function *param_1)

{
  std::function<void()>::operator=((function<void()> *)(this + 0x1a8),param_1);
  return this;
}


/* DTextField::~DTextField() */

void __thiscall DTextField::~DTextField(DTextField *this)

{
  *(undefined ***)this = &PTR__DTextField_06a26750;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a26bc8;
  *(undefined ***)(this + 0x180) = &PTR_getText_06a26c00;
  *(undefined ***)(this + 0x188) = &PTR__DTextField_06a26c68;
  detachIME(this);
  DString::~DString((DString *)(this + 0x208));
  DString::~DString((DString *)(this + 0x1f0));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x1a8));
  DTouchDelegate::~DTouchDelegate((DTouchDelegate *)(this + 0x188));
  DStringNode::~DStringNode((DStringNode *)this);
  return;
}


/* non-virtual thunk to DTextField::~DTextField() */

void __thiscall DTextField::~DTextField(DTextField *this)

{
  ~DTextField(this + -0x188);
  return;
}


/* DTextField::~DTextField() */

void __thiscall DTextField::~DTextField(DTextField *this)

{
  ~DTextField(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DTextField::~DTextField() */

void __thiscall DTextField::~DTextField(DTextField *this)

{
  ~DTextField(this + -0x188);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTextField::deleteBackward() */

void __thiscall DTextField::deleteBackward(DTextField *this)

{
  char cVar1;
  long lVar2;
  char *__s;
  string *extraout_x1;
  wstring *extraout_x1_00;
  code *pcVar3;
  Sexy aSStack_30 [8];
  Sexy aSStack_28 [8];
  string asStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = DString::empty((DString *)(this + 0x208));
  if (cVar1 == '\0') {
    DString::operator_cast_to_string((DString *)(this + 0x208));
    Sexy::UTF8StringToWString(aSStack_30,extraout_x1);
    lVar2 = FUN_054765d0(aSStack_28);
    FUN_05477da4(aDStack_18,aSStack_28,0,lVar2 + -1);
    FUN_054766c8(aSStack_28,aDStack_18);
    FUN_05476c50(aDStack_18);
    Sexy::WStringToUTF8String(aSStack_28,extraout_x1_00);
    DString::DString(aDStack_18,asStack_20);
    std::string::~string(asStack_20);
    pcVar3 = *(code **)(*(long *)this + 0x398);
    __s = (char *)DString::c_str(aDStack_18);
    std::string::string(asStack_20,__s);
    (*pcVar3)(this,asStack_20);
    std::string::~string(asStack_20);
    nop();
    DString::~DString(aDStack_18);
    FUN_05476c50(aSStack_28);
    std::string::~string((string *)aSStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to DTextField::deleteBackward() */

void __thiscall DTextField::deleteBackward(DTextField *this)

{
  deleteBackward(this + -0x180);
  return;
}


/* DTextField::onActive() */

void DTextField::onActive(void)

{
  long in_x0;
  
  nop();
  if (*(char *)(in_x0 + 400) != '\0') {
    (**(code **)(*(long *)(in_x0 + 0x188) + 0x10))(in_x0 + 0x188,0,*(undefined4 *)(in_x0 + 0x194));
    (**(code **)(*(long *)(in_x0 + 0x188) + 0x10))(in_x0 + 0x188,1,*(undefined4 *)(in_x0 + 0x194));
  }
  return;
}


/* DTextField::cleanup() */

void __thiscall DTextField::cleanup(DTextField *this)

{
  DTransformNode::cleanup((DTransformNode *)this);
  detachIME(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTextField::draw(DMatrix const&, Sexy::Graphics*) */

void __thiscall DTextField::draw(DTextField *this,DMatrix *param_1,Graphics *param_2)

{
  Graphics3D *pGVar1;
  Insets aIStack_40 [16];
  SexyMatrix3 aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DStringNode::draw((DStringNode *)this,param_1,param_2);
  if (*(int *)(this + 0x234) + 1U < 7) {
    *(uint *)(this + 0x234) = *(int *)(this + 0x234) + 1U;
  }
  else {
    *(undefined4 *)(this + 0x234) = 0;
    this[0x238] = (DTextField)((byte)this[0x238] ^ 1);
  }
  if ((this[0x239] != (DTextField)0x0) && (this[0x238] != (DTextField)0x0)) {
    Sexy::Graphics::PushState(param_2);
    pGVar1 = (Graphics3D *)Sexy::Graphics::Get3D(param_2);
    Sexy::SexyMatrix3::SexyMatrix3(aSStack_30,(SimpleMatrix *)param_1);
    Sexy::Graphics3D::PushTransform(pGVar1,aSStack_30,true);
    Sexy::Insets::Insets(aIStack_40,0,0,0xff,0xff);
    Sexy::Graphics::SetColor(param_2,(Color *)aIStack_40);
    Sexy::Graphics::DrawRect
              (param_2,(int)*(float *)(this + 0x228),(int)*(float *)(this + 0x22c),0,
               (int)*(float *)(this + 0x230));
    pGVar1 = (Graphics3D *)Sexy::Graphics::Get3D(param_2);
    Sexy::Graphics3D::PopTransform(pGVar1);
    Sexy::Graphics::PopState(param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

