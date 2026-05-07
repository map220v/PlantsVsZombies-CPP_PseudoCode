// Class: EASquaredCore


/* EASquaredCore::inSelectedMonetizationGroup(int, std::string const&) */

bool EASquaredCore::inSelectedMonetizationGroup(int param_1,string *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_0547490c(param_2,"monetizers");
  if (iVar1 == 0) {
    bVar2 = 0 < param_1;
  }
  else {
    iVar1 = FUN_0547490c(param_2,"nonmonetizers");
    bVar2 = true;
    if (iVar1 == 0) {
      return param_1 == 0;
    }
  }
  return bVar2;
}


/* EASquaredCore::playerHasTooManyCoins(int, int) */

bool EASquaredCore::playerHasTooManyCoins(int param_1,int param_2)

{
  return param_2 < param_1;
}


/* EASquaredCore::playerInstalledRecently(int, int) */

bool EASquaredCore::playerInstalledRecently(int param_1,int param_2)

{
  return param_1 < param_2;
}

