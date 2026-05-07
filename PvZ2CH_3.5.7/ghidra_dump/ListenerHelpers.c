// Class: ListenerHelpers


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ListenerHelpers::setThrottlesFromResponse(Sexy::StructuredData const*, Throttles&) */

void ListenerHelpers::setThrottlesFromResponse(StructuredData *param_1,Throttles *param_2)

{
  char cVar1;
  int iVar2;
  char *__s;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StructuredData::IntegerForPath(param_1,"$.deltaInterval",-1);
  iVar2 = FUN_03f096b4();
  if (iVar2 != -1) {
    Throttles::SetDeltaIntervalInMS(param_2,iVar2);
  }
  __s = (char *)Sexy::StructuredData::StringForPath(param_1,"$.minVersion","");
  std::string::string(asStack_18,__s);
  nop();
  cVar1 = FUN_0547419c(asStack_18);
  if (cVar1 == '\0') {
    FUN_05475d88(asStack_10,asStack_18);
    CustomLevelSettingManager::SetLinkPhoneNumber((string *)param_2);
    std::string::~string(asStack_10);
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

