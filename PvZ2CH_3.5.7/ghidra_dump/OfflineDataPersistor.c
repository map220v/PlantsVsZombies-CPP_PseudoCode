// Class: OfflineDataPersistor


/* OfflineDataPersistor::~OfflineDataPersistor() */

void __thiscall OfflineDataPersistor::~OfflineDataPersistor(OfflineDataPersistor *this)

{
  *(undefined ***)this = &PTR__OfflineDataPersistor_06793570;
  std::string::~string((string *)(this + 8));
  return;
}


/* OfflineDataPersistor::~OfflineDataPersistor() */

void __thiscall OfflineDataPersistor::~OfflineDataPersistor(OfflineDataPersistor *this)

{
  ~OfflineDataPersistor(this);
  AK::FreeHook(this);
  return;
}


/* OfflineDataPersistor::LoadWithNotify() */

void __thiscall OfflineDataPersistor::LoadWithNotify(OfflineDataPersistor *this)

{
  (**(code **)(*(long *)this + 0x10))();
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OfflineDataPersistor::IsFileExist() */

void __thiscall OfflineDataPersistor::IsFileExist(OfflineDataPersistor *this)

{
  char cVar1;
  char cVar2;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(this + 8);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0x30))(asStack_10,this);
    cVar2 = Sexy::SexyAppBase::FileExists(gLawnApp,asStack_10);
    cVar1 = '\0';
    if (cVar2 != '\0') {
      lVar3 = (**(code **)(**(long **)(gLawnApp + 0x28) + 0xd0))
                        (*(long **)(gLawnApp + 0x28),asStack_10);
      cVar1 = '\0';
      if (lVar3 != 0) {
        cVar1 = cVar2;
      }
    }
    std::string::~string(asStack_10);
  }
  else {
    cVar1 = '\0';
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OfflineDataPersistor::OfflineDataPersistor(char const*, PVZDB::TableIndex) */

void __thiscall
OfflineDataPersistor::OfflineDataPersistor
          (OfflineDataPersistor *this,char *param_1,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  IDataPersistor::IDataPersistor((IDataPersistor *)this);
  *(undefined ***)this = &PTR__OfflineDataPersistor_06793570;
  std::string::string((string *)(this + 8),param_1);
  nop();
  *(undefined4 *)(this + 0x10) = param_3;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OfflineDataPersistor::Load() */

void __thiscall OfflineDataPersistor::Load(OfflineDataPersistor *this)

{
  char cVar1;
  long lVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x30))(asStack_18);
  std::operator+(asStack_18,".bak");
  cVar1 = Sexy::SexyAppBase::FileExists(gLawnApp,asStack_18);
  if ((cVar1 == '\0') ||
     (lVar2 = (**(code **)(**(long **)(gLawnApp + 0x28) + 0xd0))
                        (*(long **)(gLawnApp + 0x28),asStack_18), lVar2 == 0)) {
    cVar1 = Sexy::SexyAppBase::FileExists(gLawnApp,asStack_10);
    if ((cVar1 != '\0') &&
       (lVar2 = (**(code **)(**(long **)(gLawnApp + 0x28) + 0xd0))
                          (*(long **)(gLawnApp + 0x28),asStack_10), lVar2 != 0)) {
      (**(code **)(*(long *)this + 0x40))(this,asStack_10);
    }
  }
  else {
    (**(code **)(*(long *)this + 0x40))(this,asStack_18);
  }
  (**(code **)(*(long *)this + 0x48))(this);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OfflineDataPersistor::getOfflineFilename() */

void OfflineDataPersistor::getOfflineFilename(void)

{
  long in_x0;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetFolder(asStack_10,3);
  std::operator+(asStack_10,(string *)(in_x0 + 8));
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OfflineDataPersistor::Save() */

void __thiscall OfflineDataPersistor::Save(OfflineDataPersistor *this)

{
  string *psVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  code *pcVar5;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = Sexy::LazySingleton<AuthMgr>::GetInstance();
  cVar2 = FUN_03f09084(*(undefined1 *)(lVar4 + 0x1d));
  if (cVar2 == '\0') {
    bVar3 = std::operator==((string *)(this + 8),"pp.dat");
    lVar4 = *(long *)this;
    if (bVar3) {
      (**(code **)(lVar4 + 0x30))(this);
      std::operator+(asStack_10,"_.bak");
      std::string::~string(asStack_10);
      (**(code **)(*(long *)this + 0x30))(asStack_10,this);
      std::operator+(asStack_10,".bak");
      std::string::~string(asStack_10);
      cVar2 = (**(code **)(*(long *)this + 0x38))(this,asStack_18);
      if (cVar2 != '\0') {
        Sexy::SexyAppBase::EraseFile(Sexy::gSexyAppBase);
        psVar1 = Sexy::gSexyAppBase;
        (**(code **)(*(long *)this + 0x30))(asStack_10,this);
        Sexy::SexyAppBase::RenameFile(psVar1,asStack_10);
        std::string::~string(asStack_10);
        psVar1 = Sexy::gSexyAppBase;
        (**(code **)(*(long *)this + 0x30))(asStack_10,this);
        Sexy::SexyAppBase::RenameFile(psVar1,asStack_18);
        std::string::~string(asStack_10);
        Sexy::SexyAppBase::RenameFile(Sexy::gSexyAppBase,asStack_20);
      }
      std::string::~string(asStack_18);
      std::string::~string(asStack_20);
    }
    else {
      pcVar5 = *(code **)(lVar4 + 0x38);
      (**(code **)(lVar4 + 0x30))(asStack_10,this);
      cVar2 = (*pcVar5)(this,asStack_10);
      std::string::~string(asStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* OfflineDataPersistor::saveTableToFile(std::string const&) */

void __thiscall OfflineDataPersistor::saveTableToFile(OfflineDataPersistor *this,string *param_1)

{
  PVZDB *pPVar1;
  
  pPVar1 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::SavePackageForTableToFile(pPVar1,*(undefined4 *)(this + 0x10),param_1,0,1);
  return;
}


/* OfflineDataPersistor::loadTableFromFile(std::string const&) */

void __thiscall OfflineDataPersistor::loadTableFromFile(OfflineDataPersistor *this,string *param_1)

{
  PVZDB *pPVar1;
  
  pPVar1 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::LoadPackageForTableFromFile(pPVar1,*(undefined4 *)(this + 0x10),param_1,0,1);
  return;
}

