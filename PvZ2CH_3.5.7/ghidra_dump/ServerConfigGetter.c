// Class: ServerConfigGetter


/* ServerConfigGetter::ServerConfigGetter() */

void __thiscall ServerConfigGetter::ServerConfigGetter(ServerConfigGetter *this)

{
  *(undefined ***)this = &PTR_nop_0684aeb0;
  return;
}


/* ServerConfigGetter::IP() */

long __thiscall ServerConfigGetter::IP(ServerConfigGetter *this)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0x10))();
  return lVar1 + 8;
}


/* ServerConfigGetter::AppId() */

long __thiscall ServerConfigGetter::AppId(ServerConfigGetter *this)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0x10))();
  return lVar1 + 0x10;
}


/* ServerConfigGetter::Permissions() */

long __thiscall ServerConfigGetter::Permissions(ServerConfigGetter *this)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0x10))();
  return lVar1 + 0x18;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ServerConfigGetter::getServerConfig() */

void ServerConfigGetter::getServerConfig(void)

{
  PVZDB *pPVar1;
  RtName *this;
  undefined8 extraout_x0;
  RtId aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  this = (RtName *)PVZDB::GetTable(pPVar1,0x3b);
  Sexy::RtName::RtName(aRStack_18,L"ServerConfig");
  Sexy::RtDbTable::GetIdForAlias(this);
  Sexy::RtDbTable::GetObjectForId((RtDbTable *)this,aRStack_20);
  nop();
  Sexy::RtId::~RtId(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(extraout_x0);
}

