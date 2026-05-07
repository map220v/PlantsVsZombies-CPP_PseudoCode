// Class: TGASecretStore


/* TGASecretStore::TGASecretStore(TGASecretStore const&) */

void __thiscall TGASecretStore::TGASecretStore(TGASecretStore *this,TGASecretStore *param_1)

{
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  FUN_05475d88(this + 0x20,param_1 + 0x20);
  FUN_05475d88(this + 0x28,param_1 + 0x28);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGASecretStore::TGASecretStore() */

void __thiscall TGASecretStore::TGASecretStore(TGASecretStore *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"");
  nop();
  std::string::string((string *)(this + 8),"");
  nop();
  std::string::string((string *)(this + 0x10),"");
  nop();
  std::string::string((string *)(this + 0x18),"");
  nop();
  std::string::string((string *)(this + 0x20),"");
  nop();
  std::string::string((string *)(this + 0x28),"");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

