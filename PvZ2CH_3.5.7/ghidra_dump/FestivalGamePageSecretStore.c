// Class: FestivalGamePageSecretStore


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageSecretStore::GetLayoutName() */

void __thiscall FestivalGamePageSecretStore::GetLayoutName(FestivalGamePageSecretStore *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIFestivalGamePageSecretStore");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* FestivalGamePageSecretStore::~FestivalGamePageSecretStore() */

void __thiscall
FestivalGamePageSecretStore::~FestivalGamePageSecretStore(FestivalGamePageSecretStore *this)

{
  *(undefined ***)this = &PTR_GetClass_06720720;
  *(undefined **)(this + 0xd8) = &DAT_06720a88;
  FUN_05476c50(this + 0x140);
  UISingletonDialog<FestivalGamePageSecretStore>::~UISingletonDialog
            ((UISingletonDialog<FestivalGamePageSecretStore> *)this);
  return;
}


/* FestivalGamePageSecretStore::~FestivalGamePageSecretStore() */

void __thiscall
FestivalGamePageSecretStore::~FestivalGamePageSecretStore(FestivalGamePageSecretStore *this)

{
  ~FestivalGamePageSecretStore(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageSecretStore::FestivalGamePageSecretStore() */

void __thiscall
FestivalGamePageSecretStore::FestivalGamePageSecretStore(FestivalGamePageSecretStore *this)

{
  long lVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<FestivalGamePageSecretStore>::UISingletonDialog
            ((UISingletonDialog<FestivalGamePageSecretStore> *)this);
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_06720720;
  *(undefined **)(this + 0xd8) = &DAT_06720a88;
  FUN_05478178(this + 0x140,&DAT_056f11a8,auStack_10);
  nop();
  Sexy::Color::Color((Color *)(this + 0x148),1);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x158) = 0x2a32;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FestivalGamePageSecretStore::showFestivalGameEntrance() */

void FestivalGamePageSecretStore::showFestivalGameEntrance(void)

{
  SecretStoreMgr *this;
  
  this = (SecretStoreMgr *)Sexy::LazySingleton<SecretStoreMgr>::GetInstance();
  SecretStoreMgr::Init(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageSecretStore::ButtonDepress(int) */

void __thiscall
FestivalGamePageSecretStore::ButtonDepress(FestivalGamePageSecretStore *this,int param_1)

{
  char cVar1;
  int iVar2;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x1f8) {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    cVar1 = FUN_03ac12f8(local_80);
    if ((cVar1 == '\0') || (local_70 == '\0')) {
      (**(code **)(*(long *)this + 0x350))(this);
    }
    else {
      (**(code **)(*(long *)this + 0x340))(this);
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to FestivalGamePageSecretStore::ButtonDepress(int) */

void __thiscall
FestivalGamePageSecretStore::ButtonDepress(FestivalGamePageSecretStore *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

