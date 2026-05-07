// Class: Sexy::IMEDispatcher


/* Sexy::IMEDispatcher::AttachIME(IMEDelegate*) */

void __thiscall Sexy::IMEDispatcher::AttachIME(IMEDispatcher *this,IMEDelegate *param_1)

{
  IMEDelegate *pIVar1;
  
  pIVar1 = *(IMEDelegate **)this;
  if (pIVar1 != param_1) {
    if ((pIVar1 != (IMEDelegate *)0x0) &&
       (*(code **)(*(long *)pIVar1 + 0x20) != IMEDelegate::returnBackward)) {
      (**(code **)(*(long *)pIVar1 + 0x20))(pIVar1);
    }
    *(IMEDelegate **)this = param_1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::IMEDispatcher::GetText() */

void Sexy::IMEDispatcher::GetText(void)

{
  long lVar1;
  long *in_x0;
  undefined8 *puVar2;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  puVar2 = (undefined8 *)*in_x0;
  if (puVar2 == (undefined8 *)0x0) {
    std::string::string(in_x8,"xxxxxxxxxxxxxxxxxxx");
    nop();
  }
  else {
    (**(code **)*puVar2)(puVar2);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::IMEDispatcher::SetText(std::string) */

void Sexy::IMEDispatcher::SetText(long *param_1)

{
  code *pcVar1;
  
  if ((long *)*param_1 != (long *)0x0) {
    pcVar1 = *(code **)(*(long *)*param_1 + 8);
    if (pcVar1 != IMEDelegate::setText) {
      (*pcVar1)();
    }
  }
  return;
}


/* Sexy::IMEDispatcher::GetInstancePtr() */

exception_ptr * Sexy::IMEDispatcher::GetInstancePtr(void)

{
  exception_ptr *this;
  _func_void *extraout_x1;
  
  if (pSharedIMEDispatcher != (exception_ptr *)0x0) {
    return pSharedIMEDispatcher;
  }
  this = ::operator_new(8);
  std::__exception_ptr::exception_ptr::exception_ptr(this,extraout_x1);
  pSharedIMEDispatcher = this;
  return this;
}


/* Sexy::IMEDispatcher::isNewMode() */

ulong __thiscall Sexy::IMEDispatcher::isNewMode(IMEDispatcher *this)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  
  uVar2 = 0;
  if (*(long **)this != (long *)0x0) {
    pcVar3 = *(code **)(**(long **)this + 0x50);
    if (pcVar3 == IMEDelegate::isNewMode) {
      uVar2 = IMEDelegate::isNewMode();
      return uVar2;
    }
    bVar1 = (*pcVar3)();
    uVar2 = (ulong)bVar1;
  }
  return uVar2;
}


/* Sexy::IMEDispatcher::GetFontInfo(std::string&, float&) */

void Sexy::IMEDispatcher::GetFontInfo(string *param_1,float *param_2)

{
  code *pcVar1;
  
  if (*(long **)param_1 != (long *)0x0) {
    pcVar1 = *(code **)(**(long **)param_1 + 0x28);
    if (pcVar1 != IMEDelegate::getFontInfo) {
      (*pcVar1)();
    }
  }
  return;
}


/* Sexy::IMEDispatcher::GetRect(Sexy::TRect<float>&) */

void Sexy::IMEDispatcher::GetRect(TRect *param_1)

{
  code *pcVar1;
  
  if (*(long **)param_1 != (long *)0x0) {
    pcVar1 = *(code **)(**(long **)param_1 + 0x10);
    if (pcVar1 != IMEDelegate::getFrameRect) {
      (*pcVar1)();
    }
  }
  return;
}


/* Sexy::IMEDispatcher::dispatchReturnBackward() */

void __thiscall Sexy::IMEDispatcher::dispatchReturnBackward(IMEDispatcher *this)

{
  code *pcVar1;
  
  if (*(long **)this != (long *)0x0) {
    pcVar1 = *(code **)(**(long **)this + 0x20);
    if (pcVar1 != IMEDelegate::returnBackward) {
      (*pcVar1)();
    }
  }
  return;
}


/* Sexy::IMEDispatcher::dispatchDeleteBackward() */

void __thiscall Sexy::IMEDispatcher::dispatchDeleteBackward(IMEDispatcher *this)

{
  code *pcVar1;
  
  if (*(long **)this != (long *)0x0) {
    pcVar1 = *(code **)(**(long **)this + 0x18);
    if (pcVar1 != IMEDelegate::deleteBackward) {
      (*pcVar1)();
    }
  }
  return;
}


/* Sexy::IMEDispatcher::dispatchKeyboardWillShow(IMEKeyboardNotificationInfo&) */

void Sexy::IMEDispatcher::dispatchKeyboardWillShow(IMEKeyboardNotificationInfo *param_1)

{
  code *pcVar1;
  
  if (*(long **)param_1 != (long *)0x0) {
    pcVar1 = *(code **)(**(long **)param_1 + 0x30);
    if (pcVar1 != IMEDelegate::keyboardWillShow) {
      (*pcVar1)();
    }
  }
  return;
}


/* Sexy::IMEDispatcher::dispatchKeyboardDidShow(IMEKeyboardNotificationInfo&) */

void Sexy::IMEDispatcher::dispatchKeyboardDidShow(IMEKeyboardNotificationInfo *param_1)

{
  code *pcVar1;
  
  if (*(long **)param_1 != (long *)0x0) {
    pcVar1 = *(code **)(**(long **)param_1 + 0x38);
    if (pcVar1 != IMEDelegate::keyboardDidShow) {
      (*pcVar1)();
    }
  }
  return;
}


/* Sexy::IMEDispatcher::dispatchKeyboardWillHide(IMEKeyboardNotificationInfo&) */

void Sexy::IMEDispatcher::dispatchKeyboardWillHide(IMEKeyboardNotificationInfo *param_1)

{
  code *pcVar1;
  
  if (*(long **)param_1 != (long *)0x0) {
    pcVar1 = *(code **)(**(long **)param_1 + 0x40);
    if (pcVar1 != IMEDelegate::keyboardWillHide) {
      (*pcVar1)();
    }
  }
  return;
}


/* Sexy::IMEDispatcher::dispatchKeyboardDidHide(IMEKeyboardNotificationInfo&) */

void Sexy::IMEDispatcher::dispatchKeyboardDidHide(IMEKeyboardNotificationInfo *param_1)

{
  code *pcVar1;
  
  if (*(long **)param_1 != (long *)0x0) {
    pcVar1 = *(code **)(**(long **)param_1 + 0x48);
    if (pcVar1 != IMEDelegate::keyboardDidHide) {
      (*pcVar1)();
    }
  }
  return;
}

