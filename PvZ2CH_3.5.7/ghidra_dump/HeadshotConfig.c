// Class: HeadshotConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeadshotConfig::~HeadshotConfig() */

void __thiscall HeadshotConfig::~HeadshotConfig(HeadshotConfig *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Credits");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  DIniFile::~DIniFile((DIniFile *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeadshotConfig::getHeadshotName(int) */

void HeadshotConfig::getHeadshotName(int param_1)

{
  char cVar1;
  int in_w1;
  wstring *extraout_x1;
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  DString aDStack_38 [16];
  string asStack_28 [16];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_18,in_w1);
  DString::operator_cast_to_string(aDStack_18);
  std::string::string(asStack_48,"name");
  std::string::string(asStack_40,"");
  DIniFile::getItem((string *)(ulong)(uint)param_1,asStack_50,asStack_48);
  DString::DString(aDStack_38,asStack_28);
  std::string::~string(asStack_28);
  std::string::~string(asStack_40);
  nop();
  std::string::~string(asStack_48);
  nop();
  std::string::~string(asStack_50);
  DString::~DString(aDStack_18);
  cVar1 = DString::empty(aDStack_38);
  if (cVar1 == '\0') {
    DString::replace((char *)aDStack_38,"\t");
    DString::operator=(aDStack_38,aDStack_18);
    DString::~DString(aDStack_18);
    ::operator+("[",aDStack_38);
    ::operator+((DString *)asStack_28,"]");
    DString::operator_cast_to_string(aDStack_18);
    Sexy::UTF8StringToSexyString(asStack_48);
    TodStringTranslate((wstring *)asStack_40);
    FUN_05476c50(asStack_40);
    std::string::~string(asStack_48);
    DString::~DString(aDStack_18);
    DString::~DString((DString *)asStack_28);
    Sexy::SexyStringToUTF8String((Sexy *)asStack_50,extraout_x1);
    FUN_05474148();
    std::string::~string((string *)aDStack_18);
    FUN_05476c50(asStack_50);
  }
  else {
    DString::operator_cast_to_string(aDStack_38);
  }
  DString::~DString(aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeadshotConfig::getHeadshotSrc(int) */

void HeadshotConfig::getHeadshotSrc(int param_1)

{
  char cVar1;
  int in_w1;
  wstring *extraout_x1;
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  DString aDStack_38 [16];
  string asStack_28 [16];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_18,in_w1);
  DString::operator_cast_to_string(aDStack_18);
  std::string::string(asStack_48,"src");
  std::string::string(asStack_40,"");
  DIniFile::getItem((string *)(ulong)(uint)param_1,asStack_50,asStack_48);
  DString::DString(aDStack_38,asStack_28);
  std::string::~string(asStack_28);
  std::string::~string(asStack_40);
  nop();
  std::string::~string(asStack_48);
  nop();
  std::string::~string(asStack_50);
  DString::~DString(aDStack_18);
  cVar1 = DString::empty(aDStack_38);
  if (cVar1 == '\0') {
    DString::replace((char *)aDStack_38,"\t");
    DString::operator=(aDStack_38,aDStack_18);
    DString::~DString(aDStack_18);
    ::operator+("[",aDStack_38);
    ::operator+((DString *)asStack_28,"]");
    DString::operator_cast_to_string(aDStack_18);
    Sexy::UTF8StringToSexyString(asStack_48);
    TodStringTranslate((wstring *)asStack_40);
    FUN_05476c50(asStack_40);
    std::string::~string(asStack_48);
    DString::~DString(aDStack_18);
    DString::~DString((DString *)asStack_28);
    Sexy::SexyStringToUTF8String((Sexy *)asStack_50,extraout_x1);
    FUN_05474148();
    std::string::~string((string *)aDStack_18);
    FUN_05476c50(asStack_50);
  }
  else {
    DString::operator_cast_to_string(aDStack_38);
  }
  DString::~DString(aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeadshotConfig::loadConfig() */

void __thiscall HeadshotConfig::loadConfig(HeadshotConfig *this)

{
  string *psVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  GenericResFile *pGVar5;
  char *pcVar6;
  undefined8 uVar7;
  string *extraout_x1;
  Sexy aSStack_80 [8];
  RtMixedPtrBase aRStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  DString aDStack_58 [16];
  string asStack_48 [16];
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(aSStack_80);
  FUN_05475aa4(aSStack_80,"RESFILE_PROPERTIES_CONFIGUI_");
  FUN_05475aa4(aSStack_80,"HeadshotData");
  Sexy::Upper(aSStack_80,extraout_x1);
  FUN_05474278(aSStack_80,asStack_38);
  std::string::~string(asStack_38);
  Sexy::ResourceManager::GetResourceForStringIdT<Sexy::GenericResFile>
            (*(string **)(gLawnApp + 0x848),SUB81(aSStack_80,0));
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_78);
  cVar3 = '\0';
  if (cVar2 != '\0') {
    pGVar5 = (GenericResFile *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    pcVar6 = (char *)Sexy::GenericResFile::GetFilePath(pGVar5);
    std::string::string(asStack_70,pcVar6);
    Sexy::GetFileDir(asStack_70,true);
    pGVar5 = (GenericResFile *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    pcVar6 = (char *)Sexy::GenericResFile::GetFilePath(pGVar5);
    std::string::string(asStack_60,pcVar6);
    Sexy::GetFileName(asStack_60,false);
    std::operator+(asStack_68,asStack_48);
    DString::DString(aDStack_58,asStack_38);
    std::string::~string(asStack_38);
    std::string::~string(asStack_48);
    std::string::~string(asStack_60);
    nop();
    std::string::~string(asStack_68);
    std::string::~string(asStack_70);
    nop();
    DString::replace((char *)aDStack_58,"\\");
    DString::operator=(aDStack_58,(DString *)asStack_38);
    DString::~DString((DString *)asStack_38);
    Sexy::Buffer::Buffer((Buffer *)asStack_38);
    psVar1 = Sexy::gSexyAppBase;
    DString::operator_cast_to_string(aDStack_58);
    cVar3 = Sexy::SexyAppBase::ReadBufferFromFile(psVar1,(Buffer *)asStack_48,SUB81(asStack_38,0));
    std::string::~string(asStack_48);
    if (cVar3 != '\0') {
      pcVar6 = (char *)Sexy::Buffer::GetDataPtr((Buffer *)asStack_38);
      iVar4 = Sexy::Buffer::GetDataLen((Buffer *)asStack_38);
      DString::DString((DString *)asStack_48,pcVar6,(long)iVar4);
      DString::operator_cast_to_string((DString *)asStack_48);
      cVar3 = DFileHandler::initWithString((DFileHandler *)this,asStack_60,false);
      std::string::~string(asStack_60);
      if (cVar3 != '\0') {
        uVar7 = FUN_0547429c(aSStack_80);
        Sexy::OutputDebugStrF((wchar_t *)"%s is error",uVar7);
        DString::~DString((DString *)asStack_48);
        Sexy::Buffer::~Buffer((Buffer *)asStack_38);
        DString::~DString(aDStack_58);
        goto LAB_03d740c8;
      }
      DString::~DString((DString *)asStack_48);
    }
    cVar3 = '\0';
    Sexy::Buffer::~Buffer((Buffer *)asStack_38);
    DString::~DString(aDStack_58);
  }
LAB_03d740c8:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  std::string::~string((string *)aSStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeadshotConfig::HeadshotConfig() */

void __thiscall HeadshotConfig::HeadshotConfig(HeadshotConfig *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DIniFile::DIniFile((DIniFile *)this);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"Credits");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  loadConfig(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

