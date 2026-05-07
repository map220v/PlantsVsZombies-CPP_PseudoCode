// Class: ServerZombieID


/* ServerZombieID::ServerZombieID(int) */

void __thiscall ServerZombieID::ServerZombieID(ServerZombieID *this,int param_1)

{
  char cVar1;
  NameMapperBase *this_00;
  
  ServerItemID::ServerItemID((ServerItemID *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_GetWidth_0660b4e0;
  this_00 = (NameMapperBase *)ZombieAlmanac::GetInstance();
  cVar1 = NameMapperBase::ContainsId(this_00,param_1);
  if (cVar1 != '\0') {
    *(int *)(this + 8) = param_1;
  }
  return;
}


/* ServerZombieID::ServerZombieID(std::string const&) */

void __thiscall ServerZombieID::ServerZombieID(ServerZombieID *this,string *param_1)

{
  char cVar1;
  undefined4 uVar2;
  NameMapperBase *pNVar3;
  
  ServerItemID::ServerItemID((ServerItemID *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_GetWidth_0660b4e0;
  pNVar3 = (NameMapperBase *)ZombieAlmanac::GetInstance();
  cVar1 = NameMapperBase::ContainsName(pNVar3,param_1);
  if (cVar1 != '\0') {
    pNVar3 = (NameMapperBase *)ZombieAlmanac::GetInstance();
    uVar2 = NameMapperBase::GetIdForName(pNVar3,param_1);
    *(undefined4 *)(this + 8) = uVar2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ServerZombieID::ToString() */

void ServerZombieID::ToString(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 8) < 1) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    iVar2 = ZombieAlmanac::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

