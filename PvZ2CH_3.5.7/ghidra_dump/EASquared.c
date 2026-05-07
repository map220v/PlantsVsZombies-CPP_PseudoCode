// Class: EASquared


/* EASquared::EASquared() */

void __thiscall EASquared::EASquared(EASquared *this)

{
  *(undefined **)this = &DAT_0697dc70;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquared::Instance() */

void EASquared::Instance(void)

{
  char cVar1;
  Toggles *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Toggles *)Toggles::GetInstance();
  std::string::string(asStack_10,"EASquared");
  cVar1 = Toggles::IsEnabled(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 == '\0') {
    Sexy::LazySingleton<EASquaredNullImpl>::GetInstance();
  }
  else {
    Sexy::LazySingleton<EASquared_Android>::GetInstance();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquared::GetProperties() */

void EASquared::GetProperties(void)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,L"EASquaredConfig");
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar1,0x66,aRStack_18);
  uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

