// Class: PackageContentsProvider


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PackageContentsProvider::cleanPackagePath(std::string const&) const */

void PackageContentsProvider::cleanPackagePath(string *param_1)

{
  Sexy *in_x1;
  string *extraout_x1;
  Sexy aSStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Lower(in_x1,___stack_chk_guard);
  Sexy::Trim(aSStack_10,extraout_x1);
  std::string::~string((string *)aSStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PackageContentsProvider::cleanAbsolutePath(std::string const&) const */

void PackageContentsProvider::cleanAbsolutePath(string *param_1)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *psVar8;
  Sexy *in_x8;
  ulong uVar9;
  long lVar10;
  string asStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar9 = 0;
  cVar3 = '\0';
  (**(code **)(*Sexy::gFileDriver + 0x20))(asStack_18,Sexy::gFileDriver);
  Set8BytesTo0();
  lVar5 = FUN_05474178(asStack_18);
  if (lVar5 != 0) {
    do {
      puVar6 = (undefined1 *)FUN_054741b0(asStack_18,uVar9);
      cVar2 = FUN_043ee6f0(*puVar6);
      if ((cVar3 == '\0') || (cVar3 = '\x01', cVar2 == '\0')) {
        FUN_05475c50();
        cVar3 = cVar2;
      }
      uVar9 = uVar9 + 1;
      uVar7 = FUN_05474178(asStack_18);
    } while (uVar9 < uVar7);
  }
  iVar4 = FUN_05474178();
  uVar1 = iVar4 - 1;
  psVar8 = extraout_x1;
  if (-1 < (int)uVar1) {
    lVar5 = (long)(int)uVar1;
    do {
      puVar6 = (undefined1 *)FUN_05474ee8();
      cVar3 = FUN_043ee6f0(*puVar6);
      psVar8 = extraout_x1_01;
      if (cVar3 == '\0') break;
      local_10 = FUN_05474e7c();
      lVar10 = lVar5 + -1;
      __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
                ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_10,lVar5)
      ;
      FUN_05475070();
      psVar8 = extraout_x1_00;
      lVar5 = lVar10;
    } while (lVar10 != ((long)(int)uVar1 + -1) - (ulong)uVar1);
  }
  Sexy::Trim(in_x8,psVar8);
  FUN_05474278();
  std::string::~string((string *)&local_10);
  std::string::~string(asStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PackageContentsProvider::getDefaultPackagePath(std::string const&) const */

void __thiscall
PackageContentsProvider::getDefaultPackagePath(PackageContentsProvider *this,string *param_1)

{
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cleanPackagePath((string *)this);
  std::operator+((string *)this,'\\');
  std::operator+(asStack_18,asStack_28);
  std::operator+(asStack_10,".rton");
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  cleanAbsolutePath((string *)this);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PackageContentsProvider::findDefaultPackageFor(std::string const&, std::string&) const */

void __thiscall
PackageContentsProvider::findDefaultPackageFor
          (PackageContentsProvider *this,string *param_1,string *param_2)

{
  char cVar1;
  uint uVar2;
  ResStreamsManager *this_00;
  uint auStack_28 [2];
  string asStack_20 [8];
  string asStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cleanPackagePath((string *)this);
  getDefaultPackagePath(this,asStack_20);
  this_00 = *(ResStreamsManager **)(Sexy::gSexyAppBase + 0x908);
  if (this_00 != (ResStreamsManager *)0x0) {
    std::string::string((string *)&local_10,"dynamic.rsb");
    cVar1 = Sexy::ResStreamsManager::IsInitialized(this_00,(string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
    if ((cVar1 != '\0') &&
       (uVar2 = Sexy::ResStreamsManager::GetGroupForFile
                          (*(ResStreamsManager **)(Sexy::gSexyAppBase + 0x908),asStack_18,true,true)
       , uVar2 != 0xffffffff)) {
      local_10 = 0;
      cVar1 = Sexy::ResStreamsManager::GetResidentFileBuffer
                        (*(ResStreamsManager **)(Sexy::gSexyAppBase + 0x908),uVar2,asStack_18,
                         (uchar **)&local_10,auStack_28);
      if (cVar1 != '\0') {
        thunk_FUN_05475e00(param_2,asStack_18);
      }
      goto LAB_043eeb18;
    }
  }
  cVar1 = '\0';
LAB_043eeb18:
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PackageContentsProvider::getOverridePackagePath(std::string const&) const */

void __thiscall
PackageContentsProvider::getOverridePackagePath(PackageContentsProvider *this,string *param_1)

{
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cleanPackagePath((string *)this);
  std::operator+((string *)(this + 8),'\\');
  std::operator+(asStack_18,asStack_28);
  std::operator+(asStack_10,".rton");
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  cleanAbsolutePath((string *)this);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PackageContentsProvider::OverridePackageContentsWithJSON(std::string const&, std::string const&)
   const */

void __thiscall
PackageContentsProvider::OverridePackageContentsWithJSON
          (PackageContentsProvider *this,string *param_1,string *param_2)

{
  undefined *puVar1;
  string *psVar2;
  char cVar3;
  char cVar4;
  char *pcVar5;
  ulong uVar6;
  string asStack_f8 [8];
  string asStack_f0 [8];
  string asStack_e8 [8];
  string asStack_e0 [8];
  RtSerialBuffer aRStack_d8 [48];
  RtSerialRtonWriter aRStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cleanPackagePath((string *)this);
  Sexy::RtSerialBuffer::RtSerialBuffer(aRStack_d8,(uchar *)0x0,0);
  Sexy::RtSerialRtonWriter::RtSerialRtonWriter(aRStack_a8,aRStack_d8);
  Set8BytesTo0(asStack_f0);
  pcVar5 = (char *)FUN_0547429c(param_2);
  cVar3 = Sexy::RtSerial::JsonToRton(pcVar5,aRStack_a8,asStack_f0);
  if (cVar3 != '\0') {
    getOverridePackagePath(this,asStack_f8);
    psVar2 = Sexy::gSexyAppBase;
    uVar6 = Sexy::RtSerialBuffer::GetDataPtr(aRStack_d8);
    Sexy::RtSerialBuffer::GetDataSize(aRStack_d8);
    cVar4 = Sexy::SexyAppBase::WriteBytesToFile(psVar2,asStack_e8,uVar6);
    puVar1 = gMessageRouter;
    if (cVar4 == '\0') {
      cVar3 = '\0';
    }
    else {
      FUN_05475d88(asStack_e0,asStack_f8);
      MessageRouter::Broadcast<std::string_const&,std::string>
                ((MessageRouter *)puVar1,Message::PackageContentsChanged,asStack_e0);
      std::string::~string(asStack_e0);
    }
    std::string::~string(asStack_e8);
  }
  std::string::~string(asStack_f0);
  Sexy::RtSerialRtonWriter::~RtSerialRtonWriter(aRStack_a8);
  Sexy::RtSerialBuffer::~RtSerialBuffer(aRStack_d8);
  std::string::~string(asStack_f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PackageContentsProvider::findOverridePackageFor(std::string const&, std::string&) const */

void __thiscall
PackageContentsProvider::findOverridePackageFor
          (PackageContentsProvider *this,string *param_1,string *param_2)

{
  char cVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cleanPackagePath((string *)this);
  getOverridePackagePath(this,asStack_18);
  cVar1 = Sexy::SexyAppBase::FileExists(Sexy::gSexyAppBase,asStack_10);
  if (cVar1 != '\0') {
    thunk_FUN_05475e00(param_2,asStack_10);
  }
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 != '\0');
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PackageContentsProvider::GetPackageContentsPath(std::string const&, std::string&) const */

void __thiscall
PackageContentsProvider::GetPackageContentsPath
          (PackageContentsProvider *this,string *param_1,string *param_2)

{
  char cVar1;
  undefined1 uVar2;
  string asStack_10 [8];
  long local_8;
  
  uVar2 = 1;
  local_8 = ___stack_chk_guard;
  cleanPackagePath((string *)this);
  cVar1 = findOverridePackageFor(this,asStack_10,param_2);
  if (cVar1 == '\0') {
    uVar2 = findDefaultPackageFor(this,asStack_10,param_2);
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PackageContentsProvider::ClearOverridePackageFor(std::string const&) const */

void PackageContentsProvider::ClearOverridePackageFor(string *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cleanPackagePath(param_1);
  Set8BytesTo0(asStack_18);
  cVar2 = findOverridePackageFor((PackageContentsProvider *)param_1,asStack_20,asStack_18);
  if ((cVar2 == '\0') ||
     (cVar2 = Sexy::SexyAppBase::EraseFile(Sexy::gSexyAppBase), puVar1 = gMessageRouter,
     cVar2 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    FUN_05475d88(asStack_10,asStack_20);
    MessageRouter::Broadcast<std::string_const&,std::string>
              ((MessageRouter *)puVar1,Message::PackageContentsChanged,asStack_10);
    std::string::~string(asStack_10);
  }
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PackageContentsProvider::getPackagePathFromAbsoluteDefaultPath(std::string const&) const */

void __thiscall
PackageContentsProvider::getPackagePathFromAbsoluteDefaultPath
          (PackageContentsProvider *this,string *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  string asStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cleanAbsolutePath((string *)this);
  iVar1 = FUN_05474184();
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      pcVar2 = (char *)FUN_05474ee8();
      if (*pcVar2 == '.') {
        local_10 = FUN_05474e7c();
        __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
                  ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_10,
                   (long)iVar1);
        FUN_05474eb0();
        FUN_054750b4();
        break;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  cleanAbsolutePath((string *)this);
  pcVar2 = (char *)FUN_0547429c();
  pcVar3 = (char *)FUN_0547429c(asStack_18);
  pcVar3 = strstr(pcVar2,pcVar3);
  if (pcVar2 == pcVar3) {
    local_10 = FUN_05474e7c();
    lVar4 = FUN_05474184(asStack_18);
    __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
              ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_10,lVar4);
    FUN_05474eb0();
    FUN_054750b4();
  }
  std::string::~string(asStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PackageContentsProvider::getPackagePathFromAbsoluteOverridePath(std::string const&) const */

void __thiscall
PackageContentsProvider::getPackagePathFromAbsoluteOverridePath
          (PackageContentsProvider *this,string *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cleanAbsolutePath((string *)this);
  iVar1 = FUN_05474184();
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      pcVar2 = (char *)FUN_05474ee8();
      if (*pcVar2 == '.') {
        local_10 = FUN_05474e7c();
        __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
                  ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_10,
                   (long)iVar1);
        FUN_05474eb0();
        FUN_054750b4();
        break;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  cleanAbsolutePath((string *)this);
  pcVar2 = (char *)FUN_0547429c();
  pcVar3 = (char *)FUN_0547429c(asStack_20);
  pcVar3 = strstr(pcVar2,pcVar3);
  if (pcVar2 == pcVar3) {
    FUN_05474e7c();
    local_18 = FUN_05474e7c();
    lVar4 = FUN_05474184(asStack_20);
    local_10 = __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
                         ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                          &local_18,lVar4);
    __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
              ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_10,1);
    FUN_054750b4();
  }
  std::string::~string(asStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PackageContentsProvider::ClearOverridePackageFolder() const */

void __thiscall PackageContentsProvider::ClearOverridePackageFolder(PackageContentsProvider *this)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  string asStack_b0 [8];
  string asStack_a8 [8];
  string asStack_a0 [8];
  string asStack_98 [8];
  PakFileDesc aPStack_90 [8];
  char local_88;
  deque<std::string,std::allocator<std::string>> adStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::deque<std::string,std::allocator<std::string>>::deque();
  std::deque<std::string,std::allocator<std::string>>::push_back(adStack_58,(string *)(this + 8));
  do {
    uVar3 = std::deque<std::string,std::allocator<std::string>>::front();
    FUN_05475d88(asStack_b0,uVar3);
    std::deque<std::string,std::allocator<std::string>>::pop_front(adStack_58);
    plVar5 = *(long **)(Sexy::gSexyAppBase + 0x28);
    PakFileDesc::PakFileDesc(aPStack_90);
    std::operator+(asStack_b0,'/');
    lVar4 = (**(code **)(*plVar5 + 0x160))(plVar5,asStack_a8,aPStack_90);
    if (lVar4 == 0) {
      std::string::~string(asStack_a8);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aPStack_90);
      std::string::~string(asStack_b0);
      break;
    }
    do {
      while ((bVar1 = std::operator==((string *)aPStack_90,"."), !bVar1 &&
             (bVar1 = std::operator==((string *)aPStack_90,".."), !bVar1))) {
        FUN_031dcc6c(asStack_a0,asStack_a8,aPStack_90);
        if (local_88 == '\0') {
          getPackagePathFromAbsoluteOverridePath(this,asStack_a0);
          ClearOverridePackageFor((string *)this);
          std::string::~string(asStack_98);
        }
        else {
          std::deque<std::string,std::allocator<std::string>>::push_back(adStack_58,asStack_a0);
        }
        std::string::~string(asStack_a0);
        cVar2 = (**(code **)(*plVar5 + 0x170))(plVar5,lVar4,aPStack_90);
        if (cVar2 == '\0') goto LAB_043ef68c;
      }
      cVar2 = (**(code **)(*plVar5 + 0x170))(plVar5,lVar4,aPStack_90);
    } while (cVar2 != '\0');
LAB_043ef68c:
    (**(code **)(*plVar5 + 0x178))(plVar5,lVar4);
    std::string::~string(asStack_a8);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aPStack_90);
    std::string::~string(asStack_b0);
    cVar2 = std::deque<std::string,std::allocator<std::string>>::empty(adStack_58);
  } while (cVar2 == '\0');
  std::deque<std::string,std::allocator<std::string>>::~deque(adStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

