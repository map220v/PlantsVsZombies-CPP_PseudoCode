// Class: LevelReplayEvent


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelReplayEvent::convertEventTypeToDebugString(LevelReplayEvent::EventType) */

void LevelReplayEvent::convertEventTypeToDebugString
               (string *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  char *__s;
  
  lVar1 = ___stack_chk_guard;
  switch(param_3) {
  case 0:
    __s = "Time +";
    break;
  case 1:
    __s = " score =";
    break;
  case 2:
    __s = " x =";
    break;
  case 3:
    __s = " scoregen =";
    break;
  default:
    __s = " error = ";
  }
  std::string::string(param_1,__s);
  nop();
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelReplayEvent::ToString() */

void LevelReplayEvent::ToString(void)

{
  undefined4 *in_x0;
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  convertEventTypeToDebugString(asStack_10,in_x0,*in_x0);
  uVar1 = FUN_0547429c(asStack_10);
  Sexy::StrFormat("%s %.2f",(double)(float)in_x0[1],uVar1);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

