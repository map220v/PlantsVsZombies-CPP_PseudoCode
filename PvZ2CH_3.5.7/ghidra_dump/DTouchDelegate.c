// Class: DTouchDelegate


/* DTouchDelegate::~DTouchDelegate() */

void __thiscall DTouchDelegate::~DTouchDelegate(DTouchDelegate *this)

{
  long lVar1;
  DTouchEventDispatcher *this_00;
  long *plVar2;
  
  *(undefined **)this = &DAT_06a25720;
  if (((*(long *)(this + 0x10) != 0) && (plVar2 = *(long **)(this + 0x18), plVar2 != (long *)0x0))
     && (lVar1 = (**(code **)(*plVar2 + 0x300))(plVar2), lVar1 != 0)) {
    this_00 = (DTouchEventDispatcher *)
              (**(code **)(**(long **)(this + 0x18) + 0x300))(*(long **)(this + 0x18));
    DTouchEventDispatcher::removeTouchListener(this_00,*(DTouchListener **)(this + 0x10));
    return;
  }
  return;
}


/* DTouchDelegate::~DTouchDelegate() */

void __thiscall DTouchDelegate::~DTouchDelegate(DTouchDelegate *this)

{
  ~DTouchDelegate(this);
  AK::FreeHook(this);
  return;
}


/* DTouchDelegate::DTouchDelegate() */

void __thiscall DTouchDelegate::DTouchDelegate(DTouchDelegate *this)

{
  this[8] = (DTouchDelegate)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined **)this = &DAT_06a25720;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTouchDelegate::setTouchEnable(bool, int) */

void __thiscall DTouchDelegate::setTouchEnable(DTouchDelegate *this,bool param_1,int param_2)

{
  long lVar1;
  DTouchEventDispatcher *pDVar2;
  DTouchListener *pDVar3;
  undefined8 uVar4;
  DRefPtr<DTouchListener> aDStack_40 [8];
  DTouchDelegate *local_38;
  undefined8 local_30;
  undefined8 local_28;
  _Bind a_Stack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xc) = param_2;
  if (this[8] != (DTouchDelegate)param_1) {
    this[8] = (DTouchDelegate)param_1;
    if (param_1) {
      if (*(long *)(this + 0x10) == 0) {
        DRefPtr<DTouchListener>::DRefPtr(aDStack_40);
        lVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
        FUN_04f94798(lVar1 + 0xb5);
        lVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
        FUN_04f94724(lVar1 + 0xb0,param_2);
        lVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
        local_30 = 0x20;
        local_28 = 1;
        local_38 = this;
        std::
        bind<void(DTouchDelegate::*)(Sexy::Touch_const&),DTouchDelegate*,std::_Placeholder<1>const&>
                  ((_func_void_Touch_ptr *)&local_30,&local_38,(_Placeholder *)&DAT_0576d300);
        std::function<bool(Sexy::Touch_const&)>::operator=
                  ((function<bool(Sexy::Touch_const&)> *)(lVar1 + 0x10),a_Stack_20);
        lVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
        local_30 = 0x28;
        local_28 = 1;
        local_38 = this;
        std::
        bind<void(DTouchDelegate::*)(Sexy::Touch_const&),DTouchDelegate*,std::_Placeholder<1>const&>
                  ((_func_void_Touch_ptr *)&local_30,&local_38,(_Placeholder *)&DAT_0576d300);
        std::function<void(Sexy::Touch_const&)>::operator=
                  ((function<void(Sexy::Touch_const&)> *)(lVar1 + 0x30),a_Stack_20);
        lVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
        local_30 = 0x30;
        local_28 = 1;
        local_38 = this;
        std::
        bind<void(DTouchDelegate::*)(Sexy::Touch_const&),DTouchDelegate*,std::_Placeholder<1>const&>
                  ((_func_void_Touch_ptr *)&local_30,&local_38,(_Placeholder *)&DAT_0576d300);
        std::function<void(Sexy::Touch_const&)>::operator=
                  ((function<void(Sexy::Touch_const&)> *)(lVar1 + 0x70),a_Stack_20);
        lVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
        local_30 = 0x38;
        local_28 = 1;
        local_38 = this;
        std::
        bind<void(DTouchDelegate::*)(Sexy::Touch_const&),DTouchDelegate*,std::_Placeholder<1>const&>
                  ((_func_void_Touch_ptr *)&local_30,&local_38,(_Placeholder *)&DAT_0576d300);
        std::function<void(Sexy::Touch_const&)>::operator=
                  ((function<void(Sexy::Touch_const&)> *)(lVar1 + 0x50),a_Stack_20);
        lVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
        local_30 = 0x40;
        local_28 = 1;
        local_38 = this;
        std::
        bind<void(DTouchDelegate::*)(Sexy::Touch_const&),DTouchDelegate*,std::_Placeholder<1>const&>
                  ((_func_void_Touch_ptr *)&local_30,&local_38,(_Placeholder *)&DAT_0576d300);
        std::function<void(Sexy::Touch_const&)>::operator=
                  ((function<void(Sexy::Touch_const&)> *)(lVar1 + 0x90),a_Stack_20);
        if ((*(long **)(this + 0x18) != (long *)0x0) &&
           (lVar1 = (**(code **)(**(long **)(this + 0x18) + 0x300))(), lVar1 != 0)) {
          pDVar2 = (DTouchEventDispatcher *)
                   (**(code **)(**(long **)(this + 0x18) + 0x300))(*(long **)(this + 0x18));
          pDVar3 = (DTouchListener *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
          DTouchEventDispatcher::addTouchListenerWithFixedPriority(pDVar2,pDVar3,param_2);
          uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
          *(undefined8 *)(this + 0x10) = uVar4;
        }
        DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_40)
        ;
      }
    }
    else if (*(long *)(this + 0x10) != 0) {
      if ((*(long **)(this + 0x18) != (long *)0x0) &&
         (lVar1 = (**(code **)(**(long **)(this + 0x18) + 0x300))(), lVar1 != 0)) {
        pDVar2 = (DTouchEventDispatcher *)
                 (**(code **)(**(long **)(this + 0x18) + 0x300))(*(long **)(this + 0x18));
        DTouchEventDispatcher::removeTouchListener(pDVar2,*(DTouchListener **)(this + 0x10));
      }
      *(undefined8 *)(this + 0x10) = 0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

