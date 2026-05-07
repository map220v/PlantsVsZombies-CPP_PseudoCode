// Class: CardTargetCursorAnim


/* CardTargetCursorAnim::~CardTargetCursorAnim() */

void __thiscall CardTargetCursorAnim::~CardTargetCursorAnim(CardTargetCursorAnim *this)

{
  std::string::~string((string *)(this + 0x30));
  std::vector<ValueRange,std::allocator<ValueRange>>::~vector
            ((vector<ValueRange,std::allocator<ValueRange>> *)(this + 0x18));
  std::string::~string((string *)(this + 8));
  return;
}


/* CardTargetCursorAnim::CardTargetCursorAnim(CardTargetCursorAnim const&) */

void __thiscall
CardTargetCursorAnim::CardTargetCursorAnim(CardTargetCursorAnim *this,CardTargetCursorAnim *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05475d88(this + 8,param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  std::vector<ValueRange,std::allocator<ValueRange>>::vector
            ((vector<ValueRange,std::allocator<ValueRange>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  FUN_05475d88(this + 0x30,param_1 + 0x30);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardTargetCursorAnim::CardTargetCursorAnim() */

void __thiscall CardTargetCursorAnim::CardTargetCursorAnim(CardTargetCursorAnim *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)this = 0;
  std::string::string((string *)(this + 8),"");
  nop();
  *(undefined4 *)(this + 0x10) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  Set8BytesTo0(this + 0x30);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

