// Class: AdProviderFactory


/* AdProviderFactory::AdProviderFactory() */

void __thiscall AdProviderFactory::AdProviderFactory(AdProviderFactory *this)

{
  this[8] = (AdProviderFactory)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined **)this = &DAT_0697feb0;
  this[0x10] = (AdProviderFactory)0x0;
  return;
}


/* AdProviderFactory::IsEnabled() */

AdProviderFactory __thiscall AdProviderFactory::IsEnabled(AdProviderFactory *this)

{
  if (*(int *)(this + 0xc) == 1) {
    return (AdProviderFactory)0x0;
  }
  if (*(int *)(this + 0xc) == 2) {
    return (AdProviderFactory)0x1;
  }
  return this[8];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdProviderFactory::InitializeAndGet(bool) */

void __thiscall AdProviderFactory::InitializeAndGet(AdProviderFactory *this,bool param_1)

{
  AdProviderFactory AVar1;
  char cVar2;
  undefined4 uVar3;
  long *plVar4;
  code *pcVar5;
  string asStack_10 [8];
  long local_8;
  
  this[8] = (AdProviderFactory)param_1;
  local_8 = ___stack_chk_guard;
  plVar4 = (long *)UserPrefsWrapper::GetInstance();
  pcVar5 = *(code **)(*plVar4 + 0x38);
  (**(code **)(*(long *)this + 0x18))(asStack_10,this);
  uVar3 = (*pcVar5)(plVar4,asStack_10,0);
  *(undefined4 *)(this + 0xc) = uVar3;
  std::string::~string(asStack_10);
  plVar4 = (long *)UserPrefsWrapper::GetInstance();
  pcVar5 = *(code **)(*plVar4 + 0x30);
  (**(code **)(*(long *)this + 0x20))(asStack_10,this);
  AVar1 = (AdProviderFactory)(*pcVar5)(plVar4,asStack_10);
  this[0x10] = AVar1;
  std::string::~string(asStack_10);
  cVar2 = IsEnabled(this);
  if (cVar2 == '\0') {
    Sexy::LazySingleton<AdProviderNullImpl>::GetInstance();
  }
  else {
    (**(code **)(*(long *)this + 0x10))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

