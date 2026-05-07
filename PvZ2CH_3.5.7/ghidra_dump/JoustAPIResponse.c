// Class: JoustAPIResponse


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustAPIResponse::ToString() const */

void JoustAPIResponse::ToString(void)

{
  long in_x0;
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  JoustUtils::ConvertContextToString((JoustUtils *)asStack_10,*(undefined4 *)(in_x0 + 8));
  uVar1 = FUN_0547429c(asStack_10);
  Sexy::StrFormat("%s",uVar1);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustAPIResponse::JoustAPIResponse() */

void __thiscall JoustAPIResponse::JoustAPIResponse(JoustAPIResponse *this)

{
  *(undefined ***)this = &PTR_nop_066ade40;
  return;
}

