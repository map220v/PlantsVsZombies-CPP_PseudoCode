// Class: RvsChecker


/* RvsChecker::ServiceRequestFailed(Sexy::StructuredData const*, void const*) */

void RvsChecker::ServiceRequestFailed(StructuredData *param_1,void *param_2)

{
  *(undefined4 *)(param_1 + 8) = 3;
  return;
}


/* RvsChecker::ServiceRequestCompleted(Sexy::StructuredData const*, void const*) */

void RvsChecker::ServiceRequestCompleted(StructuredData *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  Sexy::StructuredData::IntegerForPath(param_2,"$.status",-1);
  iVar1 = FUN_04411c7c();
  uVar2 = 2;
  if (iVar1 != 0) {
    uVar2 = 3;
  }
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}


/* RvsChecker::RvsChecker() */

void __thiscall RvsChecker::RvsChecker(RvsChecker *this)

{
  Sexy::NetworkServiceListener::NetworkServiceListener((NetworkServiceListener *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_ToString_06847f80;
  return;
}


/* RvsChecker::StartCheckRvsStat() */

void __thiscall RvsChecker::StartCheckRvsStat(RvsChecker *this)

{
  *(undefined4 *)(this + 8) = 2;
  return;
}

