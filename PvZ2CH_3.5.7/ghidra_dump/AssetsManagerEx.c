// Class: AssetsManagerEx


/* AssetsManagerEx::getStoragePath() const */

AssetsManagerEx * __thiscall AssetsManagerEx::getStoragePath(AssetsManagerEx *this)

{
  return this + 0x80;
}


/* AssetsManagerEx::ContentDownloaderFinished() */

void AssetsManagerEx::ContentDownloaderFinished(void)

{
  return;
}


/* non-virtual thunk to AssetsManagerEx::ContentDownloaderFinished() */

void __thiscall AssetsManagerEx::ContentDownloaderFinished(AssetsManagerEx *this)

{
  ContentDownloaderFinished();
  return;
}


/* AssetsManagerEx::prepareLocalManifest() */

void __thiscall AssetsManagerEx::prepareLocalManifest(AssetsManagerEx *this)

{
  undefined8 uVar1;
  
  uVar1 = AssetsManagerManifest::getAssets(*(AssetsManagerManifest **)(this + 0xa8));
  *(undefined8 *)(this + 0x78) = uVar1;
  nop();
  return;
}


/* AssetsManagerEx::basename(std::string const&) const */

void AssetsManagerEx::basename(string *param_1)

{
  long lVar1;
  
  lVar1 = FUN_0547468c();
  if (lVar1 != -1) {
    FUN_05475ffc();
    return;
  }
  FUN_05475d88();
  return;
}


/* AssetsManagerEx::getLocalManifest() const */

undefined8 __thiscall AssetsManagerEx::getLocalManifest(AssetsManagerEx *this)

{
  return *(undefined8 *)(this + 0xa8);
}


/* AssetsManagerEx::getRemoteManifest() const */

undefined8 __thiscall AssetsManagerEx::getRemoteManifest(AssetsManagerEx *this)

{
  return *(undefined8 *)(this + 0xb8);
}


/* AssetsManagerEx::adjustPath(std::string&) */

void __thiscall AssetsManagerEx::adjustPath(AssetsManagerEx *this,string *param_1)

{
  long lVar1;
  char *pcVar2;
  
  lVar1 = FUN_05474178(param_1);
  if ((lVar1 != 0) && (pcVar2 = (char *)FUN_05474ee8(param_1,lVar1 + -1), *pcVar2 != '/')) {
    FUN_05475aa4(param_1,&DAT_055a4690);
    return;
  }
  return;
}


/* AssetsManagerEx::setStoragePath(std::string const&) */

void AssetsManagerEx::setStoragePath(string *param_1)

{
  string *psVar1;
  
  psVar1 = param_1 + 0x80;
  thunk_FUN_05475e00(psVar1);
  adjustPath((AssetsManagerEx *)param_1,psVar1);
  DFinder::createDirectory(psVar1);
  return;
}


/* AssetsManagerEx::dispatchUpdateEvent(EventCode, std::string const&, std::string const&, int, int)
    */

void __thiscall
AssetsManagerEx::dispatchUpdateEvent
          (AssetsManagerEx *this,undefined4 param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5,undefined4 param_6)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x18);
  if (plVar1 != (long *)0x0) {
    if (*(code **)(*plVar1 + 0x10) != AssetsManagerDelegateProtocol::dispatchEvent) {
      (**(code **)(*plVar1 + 0x10))
                (*(undefined4 *)(this + 0x150),*(undefined4 *)(this + 0x154),plVar1,this,param_2,
                 param_3,param_4,param_5,param_6);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerEx::ContentDownProgress(float) */

void __thiscall AssetsManagerEx::ContentDownProgress(AssetsManagerEx *this,float param_1)

{
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"");
  Sexy::StrFormat("%d",asStack_18,(ulong)(uint)(int)(param_1 * 100.0));
  dispatchUpdateEvent(this,5,asStack_10,asStack_18,0,0);
  std::string::~string(asStack_18);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AssetsManagerEx::ContentDownProgress(float) */

void __thiscall AssetsManagerEx::ContentDownProgress(AssetsManagerEx *this,float param_1)

{
  ContentDownProgress(this + -8,param_1);
  return;
}


/* AssetsManagerEx::setRsbVersion(std::string const&) */

void AssetsManagerEx::setRsbVersion(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x1c0);
  return;
}


/* AssetsManagerEx::isWaitToUpdate() */

AssetsManagerEx __thiscall AssetsManagerEx::isWaitToUpdate(AssetsManagerEx *this)

{
  return this[0xc0];
}


/* AssetsManagerEx::destroyDownloadedVersion() */

void AssetsManagerEx::destroyDownloadedVersion(void)

{
  Sexy::SexyAppBase::EraseFile(Sexy::gSexyAppBase);
  Sexy::SexyAppBase::EraseFile(Sexy::gSexyAppBase);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerEx::decompressDownloadedZip() */

void AssetsManagerEx::decompressDownloadedZip(void)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  byte bVar2;
  wchar16 *in_x0;
  undefined8 uVar3;
  string *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined8 local_28;
  string asStack_20 [8];
  string asStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(in_x0 + 0x9c);
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this);
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    FUN_05475d88(asStack_20,uVar3);
    bVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (in_x0,(wchar16 *)asStack_20,(LineBreakCategory *)in_x2,in_x3,in_x4);
    in_x4 = (LineBreakCategory *)(ulong)bVar2;
    if (bVar2 == 0) {
      std::string::string((string *)&local_10,"");
      FUN_031f5e7c(asStack_18,"Unable to decompress file ",asStack_20);
      in_x2 = (string *)&local_10;
      dispatchUpdateEvent();
      std::string::~string(asStack_18);
      std::string::~string((string *)&local_10);
      nop();
    }
    in_x3 = (LineBreakCategory *)&Sexy::gSexyAppBase;
    Sexy::SexyAppBase::EraseFile(Sexy::gSexyAppBase);
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerEx::get(std::string const&) const */

void AssetsManagerEx::get(string *param_1)

{
  bool bVar1;
  long lVar2;
  string *in_x1;
  string *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
             ::find(*(unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
                      **)(param_1 + 0x78),in_x1);
  local_10 = FUN_043f612c();
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::__detail::
            _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::operator->
                      ((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                        *)&local_18);
    FUN_031dcc6c(param_1 + 0x80,lVar2 + 0x10);
  }
  else {
    std::string::string(in_x8,"");
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerEx::batchDownload() */

void __thiscall AssetsManagerEx::batchDownload(AssetsManagerEx *this)

{
  bool bVar1;
  pair *ppVar2;
  undefined8 uVar3;
  undefined8 local_160;
  undefined8 local_158;
  string asStack_150 [8];
  string asStack_148 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_140 [24];
  pair<std::string_const,DownloadUnit> apStack_128 [8];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  DownloadPath aDStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [240];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_140);
  std::vector<DownloadPath,std::allocator<DownloadPath>>::clear
            ((vector<DownloadPath,std::allocator<DownloadPath>> *)avStack_140);
  ContentDownloader::Reset((ContentDownloader *)(this + 0x28));
  local_160 = std::
              unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
              ::begin((unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
                       *)(this + 200));
  local_158 = FUN_043f6338();
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_160,(rbtree_iterator *)&local_158),
        bVar1) {
    ppVar2 = (pair *)std::__detail::_Node_iterator<std::pair<int_const,DValue>,false,false>::
                     operator*((_Node_iterator<std::pair<int_const,DValue>,false,false> *)&local_160
                              );
    std::pair<std::string_const,DownloadUnit>::pair(apStack_128,ppVar2);
    DownloadPath::DownloadPath(aDStack_108);
    thunk_FUN_05475e00(aDStack_108,auStack_120);
    thunk_FUN_05475e00(auStack_100,auStack_118);
    thunk_FUN_05475e00(auStack_f8,auStack_110);
    std::vector<DownloadPath,std::allocator<DownloadPath>>::push_back
              ((vector<DownloadPath,std::allocator<DownloadPath>> *)avStack_140,aDStack_108);
    uVar3 = FUN_0547429c(aDStack_108);
    Sexy::StrFormat("BatchDownload %s",asStack_150,uVar3);
    Sexy::LazySingleton<DebugLog>::GetInstancePtr();
    operator|(2,4);
    std::string::string(asStack_148,"PvZ2Debug");
    nop();
    std::string::~string(asStack_148);
    nop();
    std::string::~string(asStack_150);
    DownloadPath::~DownloadPath(aDStack_108);
    std::pair<std::string_const,DownloadUnit>::~pair(apStack_128);
    std::__detail::_Node_iterator<std::pair<std::string_const,DownloadUnit>,false,true>::operator++
              ((_Node_iterator<std::pair<std::string_const,DownloadUnit>,false,true> *)&local_160);
  }
  ContentDownloader::StartDownload((ContentDownloader *)(this + 0x28),(vector *)avStack_140);
  std::vector<DownloadPath,std::allocator<DownloadPath>>::~vector
            ((vector<DownloadPath,std::allocator<DownloadPath>> *)avStack_140);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AssetsManagerEx::~AssetsManagerEx() */

void __thiscall AssetsManagerEx::~AssetsManagerEx(AssetsManagerEx *this)

{
  AssetsManagerManifest *pAVar1;
  AssetsManagerManifest *this_00;
  
  pAVar1 = *(AssetsManagerManifest **)(this + 0xa8);
  this_00 = *(AssetsManagerManifest **)(this + 0xb0);
  *(undefined ***)this = &PTR_ToString_06847760;
  *(undefined ***)(this + 8) = &PTR__AssetsManagerEx_068477e8;
  if (((this_00 != pAVar1) && (this_00 != *(AssetsManagerManifest **)(this + 0xb8))) &&
     (this_00 != (AssetsManagerManifest *)0x0)) {
    AssetsManagerManifest::~AssetsManagerManifest(this_00);
    AK::FreeHook(this_00);
    pAVar1 = *(AssetsManagerManifest **)(this + 0xa8);
    *(undefined8 *)(this + 0xb0) = 0;
  }
  if (pAVar1 == (AssetsManagerManifest *)0x0) {
    pAVar1 = *(AssetsManagerManifest **)(this + 0xb8);
  }
  else {
    AssetsManagerManifest::~AssetsManagerManifest(pAVar1);
    AK::FreeHook(pAVar1);
    pAVar1 = *(AssetsManagerManifest **)(this + 0xb8);
    *(undefined8 *)(this + 0xa8) = 0;
  }
  if (pAVar1 != (AssetsManagerManifest *)0x0) {
    AssetsManagerManifest::~AssetsManagerManifest(pAVar1);
    AK::FreeHook(pAVar1);
    *(undefined8 *)(this + 0xb8) = 0;
  }
  std::string::~string((string *)(this + 0x1c0));
  std::string::~string((string *)(this + 0x1b8));
  std::string::~string((string *)(this + 0x1b0));
  std::
  unordered_map<std::string,double,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,double>>>
  ::~unordered_map((unordered_map<std::string,double,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,double>>>
                    *)(this + 0x168));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x138));
  std::
  unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
  ::~unordered_map((unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
                    *)(this + 0x100));
  std::
  unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
  ::~unordered_map((unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
                    *)(this + 200));
  std::string::~string((string *)(this + 0xa0));
  std::string::~string((string *)(this + 0x98));
  std::string::~string((string *)(this + 0x90));
  std::string::~string((string *)(this + 0x88));
  std::string::~string((string *)(this + 0x80));
  ContentDownloader::~ContentDownloader((ContentDownloader *)(this + 0x28));
  std::string::~string((string *)(this + 0x10));
  return;
}


/* non-virtual thunk to AssetsManagerEx::~AssetsManagerEx() */

void __thiscall AssetsManagerEx::~AssetsManagerEx(AssetsManagerEx *this)

{
  ~AssetsManagerEx(this + -8);
  return;
}


/* AssetsManagerEx::~AssetsManagerEx() */

void __thiscall AssetsManagerEx::~AssetsManagerEx(AssetsManagerEx *this)

{
  ~AssetsManagerEx(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AssetsManagerEx::~AssetsManagerEx() */

void __thiscall AssetsManagerEx::~AssetsManagerEx(AssetsManagerEx *this)

{
  ~AssetsManagerEx(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerEx::loadLocalManifest(std::string const&) */

void AssetsManagerEx::loadLocalManifest(string *param_1)

{
  char cVar1;
  int iVar2;
  AssetsManagerManifest *this;
  char *__s1;
  char *__s2;
  AssetsManagerManifest *this_00;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::SexyAppBase::FileExists(Sexy::gSexyAppBase,param_1 + 0x90);
  if (cVar1 == '\0') {
LAB_043f87ac:
    AssetsManagerManifest::parse(*(AssetsManagerManifest **)(param_1 + 0xa8),param_1 + 0xa0);
    cVar1 = AssetsManagerManifest::isLoaded(*(AssetsManagerManifest **)(param_1 + 0xa8));
    if (cVar1 == '\0') goto LAB_043f87c8;
  }
  else {
    std::string::string(asStack_10,"");
    this = ::operator_new(0x158,(nothrow_t *)&std::nothrow);
    if (this == (AssetsManagerManifest *)0x0) {
      std::string::~string(asStack_10);
      nop();
      goto LAB_043f87ac;
    }
    AssetsManagerManifest::AssetsManagerManifest(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    AssetsManagerManifest::parse(this,param_1 + 0x90);
    cVar1 = AssetsManagerManifest::isLoaded(this);
    if (cVar1 == '\0') {
      Sexy::SexyAppBase::EraseFile((string *)Sexy::gSexyAppBase);
      AssetsManagerManifest::~AssetsManagerManifest(this);
      AK::FreeHook(this);
      goto LAB_043f87ac;
    }
    AssetsManagerManifest::parse(*(AssetsManagerManifest **)(param_1 + 0xa8),param_1 + 0xa0);
    cVar1 = AssetsManagerManifest::isLoaded(*(AssetsManagerManifest **)(param_1 + 0xa8));
    if (cVar1 == '\0') goto LAB_043f87c8;
    Sexy::FilesystemSaveGameContext::GetBuffer(*(FilesystemSaveGameContext **)(param_1 + 0xa8));
    __s1 = (char *)FUN_0547429c();
    Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
    __s2 = (char *)FUN_0547429c();
    iVar2 = strcmp(__s1,__s2);
    if (iVar2 < 1) {
      this_00 = *(AssetsManagerManifest **)(param_1 + 0xa8);
      if (this_00 != (AssetsManagerManifest *)0x0) {
        AssetsManagerManifest::~AssetsManagerManifest(this_00);
        AK::FreeHook(this_00);
      }
      *(AssetsManagerManifest **)(param_1 + 0xa8) = this;
      prepareLocalManifest((AssetsManagerEx *)param_1);
      goto LAB_043f87c8;
    }
    Sexy::Deltree(param_1 + 0x80);
    DFinder::createDirectory(param_1 + 0x80);
    AssetsManagerManifest::~AssetsManagerManifest(this);
    AK::FreeHook(this);
  }
  prepareLocalManifest((AssetsManagerEx *)param_1);
LAB_043f87c8:
  cVar1 = AssetsManagerManifest::isLoaded(*(AssetsManagerManifest **)(param_1 + 0xa8));
  if (cVar1 == '\0') {
    Sexy::OutputDebugStrF((wchar_t *)"AssetsManagerEx : No local manifest file found error.\n");
    std::string::string(asStack_18,"");
    std::string::string(asStack_10,"");
    dispatchUpdateEvent((AssetsManagerEx *)param_1,0,asStack_18,asStack_10,0,0);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerEx::initManifests(std::string const&) */

void AssetsManagerEx::initManifests(string *param_1)

{
  char cVar1;
  AssetsManagerManifest *pAVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  param_1[0x1a8] = (string)0x1;
  std::string::string(asStack_10,"");
  pAVar2 = ::operator_new(0x158,(nothrow_t *)&std::nothrow);
  if (pAVar2 != (AssetsManagerManifest *)0x0) {
    AssetsManagerManifest::AssetsManagerManifest(pAVar2,asStack_10);
  }
  *(AssetsManagerManifest **)(param_1 + 0xa8) = pAVar2;
  std::string::~string(asStack_10);
  nop();
  if (*(long *)(param_1 + 0xa8) == 0) {
    param_1[0x1a8] = (string)0x0;
  }
  else {
    loadLocalManifest(param_1);
    std::string::string(asStack_10,"");
    pAVar2 = ::operator_new(0x158,(nothrow_t *)&std::nothrow);
    if (pAVar2 != (AssetsManagerManifest *)0x0) {
      AssetsManagerManifest::AssetsManagerManifest(pAVar2,asStack_10);
    }
    *(AssetsManagerManifest **)(param_1 + 0xb0) = pAVar2;
    std::string::~string(asStack_10);
    nop();
    if (*(AssetsManagerManifest **)(param_1 + 0xb0) == (AssetsManagerManifest *)0x0) {
      param_1[0x1a8] = (string)0x0;
    }
    else {
      AssetsManagerManifest::parse(*(AssetsManagerManifest **)(param_1 + 0xb0),param_1 + 0x98);
      cVar1 = AssetsManagerManifest::isLoaded(*(AssetsManagerManifest **)(param_1 + 0xb0));
      if ((cVar1 == '\0') &&
         (cVar1 = Sexy::SexyAppBase::FileExists(Sexy::gSexyAppBase,param_1 + 0x98), cVar1 != '\0'))
      {
        Sexy::SexyAppBase::EraseFile((string *)Sexy::gSexyAppBase);
      }
    }
    std::string::string(asStack_10,"");
    pAVar2 = ::operator_new(0x158,(nothrow_t *)&std::nothrow);
    if (pAVar2 != (AssetsManagerManifest *)0x0) {
      AssetsManagerManifest::AssetsManagerManifest(pAVar2,asStack_10);
    }
    *(AssetsManagerManifest **)(param_1 + 0xb8) = pAVar2;
    std::string::~string(asStack_10);
    nop();
    if (*(long *)(param_1 + 0xb8) == 0) {
      param_1[0x1a8] = (string)0x0;
      pAVar2 = *(AssetsManagerManifest **)(param_1 + 0xa8);
    }
    else {
      if (param_1[0x1a8] != (string)0x0) goto LAB_043f8b18;
      pAVar2 = *(AssetsManagerManifest **)(param_1 + 0xa8);
    }
    if (pAVar2 != (AssetsManagerManifest *)0x0) {
      AssetsManagerManifest::~AssetsManagerManifest(pAVar2);
      AK::FreeHook(pAVar2);
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
  }
  pAVar2 = *(AssetsManagerManifest **)(param_1 + 0xb0);
  if (pAVar2 == (AssetsManagerManifest *)0x0) {
    pAVar2 = *(AssetsManagerManifest **)(param_1 + 0xb8);
  }
  else {
    AssetsManagerManifest::~AssetsManagerManifest(pAVar2);
    AK::FreeHook(pAVar2);
    pAVar2 = *(AssetsManagerManifest **)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  if (pAVar2 != (AssetsManagerManifest *)0x0) {
    AssetsManagerManifest::~AssetsManagerManifest(pAVar2);
    AK::FreeHook(pAVar2);
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
LAB_043f8b18:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerEx::AssetsManagerEx(std::string const&, std::string const&) */

void __thiscall
AssetsManagerEx::AssetsManagerEx(AssetsManagerEx *this,string *param_1,string *param_2)

{
  string *this_00;
  string *this_01;
  string *this_02;
  ulong uVar1;
  string *__n;
  equal_to aeStack_20 [8];
  allocator aaStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (string *)(this + 0x80);
  Sexy::NetworkServiceListener::NetworkServiceListener((NetworkServiceListener *)this);
  this_01 = (string *)(this + 0x1b0);
  this_02 = (string *)(this + 0x1b8);
  ContentDownloaderDelegateProtocol::ContentDownloaderDelegateProtocol
            ((ContentDownloaderDelegateProtocol *)(this + 8));
  *(undefined ***)this = &PTR_ToString_06847760;
  *(undefined ***)(this + 8) = &PTR__AssetsManagerEx_068477e8;
  Set8BytesTo0(this + 0x10);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  ContentDownloader::ContentDownloader((ContentDownloader *)(this + 0x28));
  *(undefined8 *)(this + 0x78) = 0;
  std::string::string(this_00,"");
  nop();
  std::string::string((string *)(this + 0x88),"");
  nop();
  std::string::string((string *)(this + 0x90),"");
  nop();
  std::string::string((string *)(this + 0x98),"");
  nop();
  FUN_05475d88(this + 0xa0,param_1);
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  this[0xc0] = (AssetsManagerEx)0x0;
  std::
  unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
  ::unordered_map((ulong)(this + 200),(hash *)0xa,aeStack_20,aaStack_18);
  std::
  unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
  ::unordered_map((ulong)(this + 0x100),(hash *)0xa,aeStack_20,aaStack_18);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  std::
  unordered_map<std::string,double,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,double>>>
  ::unordered_map((ulong)(this + 0x168),(hash *)0xa,aeStack_20,aaStack_18);
  *(undefined4 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 0x1a4) = 0;
  this[0x1a8] = (AssetsManagerEx)0x0;
  Set8BytesTo0(this_01);
  Set8BytesTo0(this_02);
  __n = asStack_10;
  std::string::string((string *)(this + 0x1c0),"0");
  nop();
  std::string::append(this_01,"http://profile.pvz2ios.popcap.com.cn/new_pvz2_ios/",(size_t)__n);
  std::string::append(this_02,"http://download.pvz2ios.popcap.com.cn/",(size_t)__n);
  std::string::string((string *)aaStack_18,"default");
  nop();
  uVar1 = Android::Info::SysGetProductVersionCode();
  Sexy::StrFormat("%d",asStack_10,uVar1 & 0xffffffff);
  FUN_05474278(aaStack_18,asStack_10);
  std::string::~string(asStack_10);
  FUN_05475ad8(aaStack_18,&DAT_056361d8);
  thunk_FUN_054757c0(this_01,aaStack_18);
  thunk_FUN_054757c0(this_02,aaStack_18);
  FUN_05475ad8(this_01,&DAT_055a4690);
  FUN_05475ad8(this_02,&DAT_055a4690);
  *(undefined4 *)(this + 0x20) = 0;
  eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
            ((fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> *)(this + 0x28),
             (ContentDownloaderDelegateProtocol *)(this + 8));
  setStoragePath((string *)this);
  std::operator+(this_00,"version.manifest");
  FUN_05474278((string *)(this + 0x88),asStack_10);
  std::string::~string(asStack_10);
  std::operator+(this_00,"project.manifest");
  FUN_05474278((string *)(this + 0x90),asStack_10);
  std::string::~string(asStack_10);
  std::operator+(this_00,"project.manifest.temp");
  FUN_05474278((string *)(this + 0x98),asStack_10);
  std::string::~string(asStack_10);
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  initManifests((string *)this);
  std::string::~string((string *)aaStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerEx::updateSucceed() */

void __thiscall AssetsManagerEx::updateSucceed(AssetsManagerEx *this)

{
  string *psVar1;
  AssetsManagerManifest *this_00;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  psVar1 = Sexy::gSexyAppBase;
  local_8 = ___stack_chk_guard;
  std::operator+((string *)(this + 0x80),"project.manifest.temp");
  std::operator+((string *)(this + 0x80),"project.manifest");
  Sexy::SexyAppBase::RenameFile(psVar1,asStack_18);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  this_00 = *(AssetsManagerManifest **)(this + 0xa8);
  if (this_00 != (AssetsManagerManifest *)0x0) {
    AssetsManagerManifest::~AssetsManagerManifest(this_00);
    AK::FreeHook(this_00);
  }
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(this + 0xb8);
  *(undefined8 *)(this + 0xb8) = 0;
  prepareLocalManifest(this);
  *(undefined4 *)(this + 0x20) = 0xc;
  std::string::string(asStack_18,"");
  std::string::string(asStack_10,"");
  dispatchUpdateEvent(this,8,asStack_18,asStack_10,0,0);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerEx::updateAssets(std::unordered_map<std::string, DownloadUnit, std::hash<std::string
   >, std::equal_to<std::string >, std::allocator<std::pair<std::string const, DownloadUnit> > >
   const&) */

void __thiscall AssetsManagerEx::updateAssets(AssetsManagerEx *this,unordered_map *param_1)

{
  unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
  *this_00;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1a8] == (AssetsManagerEx)0x0) {
    Sexy::OutputDebugStrF((wchar_t *)"AssetsManagerEx : Manifests uninited.\n");
    std::string::string(asStack_18,"");
    std::string::string(asStack_10,"");
    dispatchUpdateEvent(this,0,asStack_18,asStack_10,0,0);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
  }
  else if (((*(int *)(this + 0x20) != 10) &&
           (cVar1 = AssetsManagerManifest::isLoaded(*(AssetsManagerManifest **)(this + 0xa8)),
           cVar1 != '\0')) &&
          (cVar1 = AssetsManagerManifest::isLoaded(*(AssetsManagerManifest **)(this + 0xb8)),
          cVar1 != '\0')) {
    iVar2 = std::
            unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
            ::size((unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
                    *)param_1);
    if (iVar2 < 1) {
      if ((iVar2 == 0) && (*(int *)(this + 0x1a4) == 0)) {
        updateSucceed(this);
      }
    }
    else {
      this_00 = (unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
                 *)(this + 200);
      *(undefined4 *)(this + 0x20) = 10;
      std::
      unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
      ::clear(this_00);
      std::
      unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
      ::operator=(this_00,param_1);
      uVar3 = std::
              unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
              ::size(this_00);
      *(undefined4 *)(this + 0x1a0) = uVar3;
      *(undefined4 *)(this + 0x1a4) = uVar3;
      batchDownload(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AssetsManagerEx::downloadFailedAssets() */

void __thiscall AssetsManagerEx::downloadFailedAssets(AssetsManagerEx *this)

{
  updateAssets(this,(unordered_map *)(this + 0x100));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerEx::onDownloadUnitsFinished() */

void __thiscall AssetsManagerEx::onDownloadUnitsFinished(AssetsManagerEx *this)

{
  long lVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = std::
          unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
          ::size((unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
                  *)(this + 0x100));
  if (lVar1 == 0) {
    updateSucceed(this);
  }
  else {
    AssetsManagerManifest::saveToFile
              (*(AssetsManagerManifest **)(this + 0xb0),(string *)(this + 0x98));
    decompressDownloadedZip();
    *(undefined4 *)(this + 0x20) = 0xd;
    std::string::string(asStack_18,"");
    std::string::string(asStack_10,"");
    dispatchUpdateEvent(this,9,asStack_18,asStack_10,0,0);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerEx::ContentDownloaderFailed(DownloadPath const&, std::string const&, int) */

void __thiscall
AssetsManagerEx::ContentDownloaderFailed
          (AssetsManagerEx *this,DownloadPath *param_1,string *param_2,int param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = std::
             unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
             ::find((unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
                     *)(this + 200),(string *)(param_1 + 0x10));
  local_20[0] = FUN_043f6338();
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)local_20);
  if (bVar1) {
    *(int *)(this + 0x1a4) = *(int *)(this + 0x1a4) + -1;
    lVar2 = std::__detail::
            _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::operator->
                      ((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                        *)&local_28);
    DownloadUnit::DownloadUnit((DownloadUnit *)local_20,(DownloadUnit *)(lVar2 + 8));
    std::
    unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
    ::emplace<std::string&,DownloadUnit&>
              ((unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
                *)(this + 0x100),asStack_10,(DownloadUnit *)local_20);
    Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)local_20);
  }
  dispatchUpdateEvent(this,7,(string *)(param_1 + 0x10),param_2,param_3,0);
  if (*(int *)(this + 0x1a4) < 1) {
    onDownloadUnitsFinished(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AssetsManagerEx::ContentDownloaderFailed(DownloadPath const&, std::string
   const&, int) */

void __thiscall
AssetsManagerEx::ContentDownloaderFailed
          (AssetsManagerEx *this,DownloadPath *param_1,string *param_2,int param_3)

{
  ContentDownloaderFailed(this + -8,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerEx::startUpdate() */

void __thiscall AssetsManagerEx::startUpdate(AssetsManagerEx *this)

{
  unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
  *this_00;
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
  *this_01;
  string *psVar6;
  AssetsManagerManifest *this_02;
  string asStack_b0 [8];
  undefined8 local_a8;
  string asStack_a0 [8];
  string asStack_98 [8];
  string asStack_90 [8];
  string asStack_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined1 auStack_70 [8];
  string asStack_68 [8];
  undefined8 local_60;
  undefined1 auStack_58 [16];
  int local_48;
  unordered_map<std::string,AssetsManagerManifest::AssetDiff,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::AssetDiff>>>
  auStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x20) == 9) {
    *(undefined4 *)(this + 0x20) = 10;
    this_00 = (unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
               *)(this + 200);
    std::
    unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
    ::clear((unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
             *)(this + 0x100));
    std::
    unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
    ::clear(this_00);
    std::vector<std::string,std::allocator<std::string>>::clear
              ((vector<std::string,std::allocator<std::string>> *)(this + 0x138));
    *(undefined4 *)(this + 0x1a0) = 0;
    *(undefined4 *)(this + 0x1a4) = 0;
    *(undefined4 *)(this + 0x15c) = 0;
    *(undefined4 *)(this + 0x154) = 0;
    *(undefined8 *)(this + 0x160) = 0;
    *(undefined4 *)(this + 0x150) = 0;
    std::
    unordered_map<std::string,double,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,double>>>
    ::clear((unordered_map<std::string,double,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,double>>>
             *)(this + 0x168));
    *(undefined4 *)(this + 0x158) = 0;
    cVar1 = AssetsManagerManifest::isLoaded(*(AssetsManagerManifest **)(this + 0xb0));
    if ((cVar1 == '\0') ||
       (cVar1 = AssetsManagerManifest::versionEquals
                          (*(AssetsManagerManifest **)(this + 0xb0),
                           *(AssetsManagerManifest **)(this + 0xb8)), cVar1 == '\0')) {
      this_02 = *(AssetsManagerManifest **)(this + 0xb0);
      if (this_02 != (AssetsManagerManifest *)0x0) {
        AssetsManagerManifest::~AssetsManagerManifest(this_02);
        AK::FreeHook(this_02);
      }
      *(undefined8 *)(this + 0xb0) = *(undefined8 *)(this + 0xb8);
      AssetsManagerManifest::genDiff(*(AssetsManagerManifest **)(this + 0xa8));
      lVar4 = std::
              unordered_map<std::string,AssetsManagerManifest::AssetDiff,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::AssetDiff>>>
              ::size(auStack_40);
      if (lVar4 == 0) {
        updateSucceed(this);
      }
      else {
        uVar5 = std::
                _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                ::_M_root(*(_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                            **)(this + 0xb8));
        FUN_05475d88(asStack_b0,uVar5);
        local_a8 = std::
                   unordered_map<std::string,AssetsManagerManifest::AssetDiff,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::AssetDiff>>>
                   ::begin(auStack_40);
        while( true ) {
          local_60 = FUN_043f6270();
          bVar2 = eastl::operator!=((rbtree_iterator *)&local_a8,(rbtree_iterator *)&local_60);
          if (!bVar2) break;
          lVar4 = std::__detail::
                  _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
                  operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                              *)&local_a8);
          AssetsManagerManifest::AssetDiff::AssetDiff
                    ((AssetDiff *)&local_60,(AssetDiff *)(lVar4 + 8));
          psVar6 = Sexy::gSexyAppBase;
          if (local_48 == 1) {
            FUN_031dcc6c((string *)&local_78,this + 0x80,auStack_58);
            Sexy::SexyAppBase::EraseFile(psVar6);
            std::string::~string((string *)&local_78);
          }
          else {
            FUN_05475d88(asStack_a0,auStack_58);
            FUN_031dcc6c((string *)&local_80,this + 0x80,asStack_a0);
            basename((string *)this);
            DFinder::createDirectory((string *)&local_78);
            std::string::~string((string *)&local_78);
            std::string::~string((string *)&local_80);
            Lua::DownloadInfo::DownloadInfo((DownloadInfo *)&local_78);
            uVar5 = std::__detail::
                    _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
                    operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                                *)&local_a8);
            thunk_FUN_05475e00(asStack_68,uVar5);
            FUN_031dcc6c(asStack_98,this + 0x1b8,this + 0x1c0);
            std::operator+(asStack_98,"/");
            std::operator+(asStack_90,asStack_b0);
            std::operator+(asStack_88,asStack_a0);
            FUN_05474278((string *)&local_78,(string *)&local_80);
            std::string::~string((string *)&local_80);
            std::string::~string(asStack_88);
            std::string::~string(asStack_90);
            std::string::~string(asStack_98);
            FUN_031dcc6c((string *)&local_80,this + 0x80,asStack_a0);
            FUN_05474278(auStack_70,(string *)&local_80);
            std::string::~string((string *)&local_80);
            std::
            unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
            ::emplace<std::string&,DownloadUnit&>(this_00,asStack_68,(DownloadUnit *)&local_78);
            Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)&local_78);
            std::string::~string(asStack_a0);
          }
          std::_Destroy<Sexy::PACommand>((PACommand *)&local_60);
          std::__detail::
          _Node_iterator<std::pair<std::string_const,AssetsManagerManifest::AssetDiff>,false,true>::
          operator++((_Node_iterator<std::pair<std::string_const,AssetsManagerManifest::AssetDiff>,false,true>
                      *)&local_a8);
        }
        this_01 = (unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
                   *)AssetsManagerManifest::getAssets(*(AssetsManagerManifest **)(this + 0xb8));
        local_80 = std::
                   unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
                   ::begin(this_01);
        while( true ) {
          local_60 = FUN_043f612c();
          bVar2 = eastl::operator!=((rbtree_iterator *)&local_80,(rbtree_iterator *)&local_60);
          if (!bVar2) break;
          psVar6 = (string *)
                   std::__detail::
                   _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
                   operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                               *)&local_80);
          local_78 = std::
                     unordered_map<std::string,AssetsManagerManifest::AssetDiff,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::AssetDiff>>>
                     ::find(auStack_40,psVar6);
          local_60 = FUN_043f6270();
          cVar1 = std::__exception_ptr::operator==
                            ((exception_ptr *)&local_78,(exception_ptr *)&local_60);
          if (cVar1 != '\0') {
            local_60 = CONCAT44(local_60._4_4_,2);
            AssetsManagerManifest::setAssetDownloadState
                      (*(AssetsManagerManifest **)(this + 0xb0),psVar6,(DownloadState *)&local_60);
          }
          std::__detail::
          _Node_const_iterator<std::pair<std::string_const,AssetsManagerManifest::Asset>,false,true>
          ::operator++((_Node_const_iterator<std::pair<std::string_const,AssetsManagerManifest::Asset>,false,true>
                        *)&local_80);
        }
        uVar3 = std::
                unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
                ::size(this_00);
        *(undefined4 *)(this + 0x1a0) = uVar3;
        *(undefined4 *)(this + 0x1a4) = uVar3;
        batchDownload(this);
        std::string::~string(asStack_b0);
      }
      std::
      unordered_map<std::string,AssetsManagerManifest::AssetDiff,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::AssetDiff>>>
      ::~unordered_map(auStack_40);
      this[0xc0] = (AssetsManagerEx)0x0;
    }
    else {
      AssetsManagerManifest::genResumeAssetsList
                (*(AssetsManagerManifest **)(this + 0xb0),(unordered_map *)this_00,
                 (string *)(this + 0x1b8),(string *)(this + 0x1c0));
      uVar3 = std::
              unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
              ::size(this_00);
      *(undefined4 *)(this + 0x1a0) = uVar3;
      *(undefined4 *)(this + 0x1a4) = uVar3;
      batchDownload(this);
      this[0xc0] = (AssetsManagerEx)0x0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerEx::parseManifest() */

void __thiscall AssetsManagerEx::parseManifest(AssetsManagerEx *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x20) == 8) {
    AssetsManagerManifest::parse(*(AssetsManagerManifest **)(this + 0xb8),(string *)(this + 0x98));
    cVar1 = AssetsManagerManifest::isLoaded(*(AssetsManagerManifest **)(this + 0xb8));
    if (cVar1 == '\0') {
      Sexy::OutputDebugStrF((wchar_t *)"AssetsManagerEx : Error parsing manifest file\n");
      std::string::string(asStack_18,"");
      std::string::string(asStack_10,"");
      dispatchUpdateEvent(this,2,asStack_18,asStack_10,0,0);
      std::string::~string(asStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      *(undefined4 *)(this + 0x20) = 0;
    }
    else {
      uVar4 = Sexy::FilesystemSaveGameContext::GetBuffer
                        (*(FilesystemSaveGameContext **)(this + 0xa8));
      FUN_05475d88(asStack_10,uVar4);
      iVar2 = AssetsManagerManifest::getVersionToInt(asStack_10);
      std::string::~string(asStack_10);
      uVar4 = Sexy::FilesystemSaveGameContext::GetBuffer
                        (*(FilesystemSaveGameContext **)(this + 0xb8));
      FUN_05475d88(asStack_10,uVar4);
      iVar3 = AssetsManagerManifest::getVersionToInt(asStack_10);
      std::string::~string(asStack_10);
      if (iVar2 < iVar3) {
        *(undefined4 *)(this + 0x20) = 9;
        std::string::string(asStack_18,"");
        std::string::string(asStack_10,"");
        dispatchUpdateEvent(this,3,asStack_18,asStack_10,0,0);
        std::string::~string(asStack_10);
        nop();
        std::string::~string(asStack_18);
        nop();
        if (this[0xc0] != (AssetsManagerEx)0x0) {
          startUpdate(this);
        }
      }
      else {
        *(undefined4 *)(this + 0x20) = 0xc;
        std::string::string(asStack_18,"");
        std::string::string(asStack_10,"");
        dispatchUpdateEvent(this,4,asStack_18,asStack_10,0,0);
        std::string::~string(asStack_10);
        nop();
        std::string::~string(asStack_18);
        nop();
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerEx::downloadManifest() */

void __thiscall AssetsManagerEx::downloadManifest(AssetsManagerEx *this)

{
  string *psVar1;
  long lVar2;
  NetworkServiceManager *this_00;
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x20) == 6) {
    FUN_031dcc6c(asStack_88,this + 0x1b0,this + 0x1c0);
    std::operator+(asStack_88,"/");
    psVar1 = (string *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this + 0xa8));
    std::operator+(asStack_80,psVar1);
    std::string::~string(asStack_80);
    std::string::~string(asStack_88);
    lVar2 = FUN_05474178(asStack_90);
    if (lVar2 == 0) {
      Sexy::OutputDebugStrF
                ((wchar_t *)"AssetsManagerEx : No manifest file found, check update failed\n");
      std::string::string(asStack_88,"");
      std::string::string(asStack_80,"");
      dispatchUpdateEvent(this,1,asStack_88,asStack_80,0,0);
      std::string::~string(asStack_80);
      nop();
      std::string::~string(asStack_88);
      nop();
      *(undefined4 *)(this + 0x20) = 0;
    }
    else {
      *(undefined4 *)(this + 0x20) = 7;
      Sexy::StructuredData::StructuredData((StructuredData *)asStack_80);
      Sexy::StructuredData::BeginObject((StructuredData *)asStack_80);
      Sexy::StructuredData::AddString((StructuredData *)asStack_80,"url",asStack_90);
      Sexy::StructuredData::AddInteger((StructuredData *)asStack_80,"timeout",0x14);
      Sexy::StructuredData::EndObject((StructuredData *)asStack_80);
      this_00 = (NetworkServiceManager *)Sexy::NetworkServiceManager::DefaultNetworkServiceManager()
      ;
      Sexy::NetworkServiceManager::MakeRequest
                (this_00,(StructuredData *)asStack_80,(NetworkServiceListener *)this,this);
      Sexy::StructuredData::~StructuredData((StructuredData *)asStack_80);
    }
    std::string::~string(asStack_90);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerEx::versionCheck() */

void __thiscall AssetsManagerEx::versionCheck(AssetsManagerEx *this)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x20) < 5) {
    *(undefined4 *)(this + 0x20) = 5;
    uVar3 = Sexy::FilesystemSaveGameContext::GetBuffer(*(FilesystemSaveGameContext **)(this + 0xa8))
    ;
    FUN_05475d88(asStack_10,uVar3);
    iVar1 = AssetsManagerManifest::getVersionToInt(asStack_10);
    std::string::~string(asStack_10);
    FUN_05475d88(asStack_10,this + 0x1c0);
    iVar2 = AssetsManagerManifest::getVersionToInt(asStack_10);
    std::string::~string(asStack_10);
    if (iVar1 < iVar2) {
      *(undefined4 *)(this + 0x20) = 9;
      std::string::string(asStack_18,"");
      std::string::string(asStack_10,"");
      dispatchUpdateEvent(this,3,asStack_18,asStack_10,0,0);
      std::string::~string(asStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      if (this[0xc0] != (AssetsManagerEx)0x0) {
        *(undefined4 *)(this + 0x20) = 6;
        downloadManifest(this);
      }
    }
    else {
      *(undefined4 *)(this + 0x20) = 0xc;
      std::string::string(asStack_18,"");
      std::string::string(asStack_10,"");
      dispatchUpdateEvent(this,4,asStack_18,asStack_10,0,0);
      std::string::~string(asStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerEx::parseVersion() */

void __thiscall AssetsManagerEx::parseVersion(AssetsManagerEx *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x20) == 3) {
    AssetsManagerManifest::parseVersion
              (*(AssetsManagerManifest **)(this + 0xb8),(string *)(this + 0x88),
               (string *)(this + 0x1c0));
    cVar1 = AssetsManagerManifest::isVersionLoaded(*(AssetsManagerManifest **)(this + 0xb8));
    if (cVar1 == '\0') {
      Sexy::OutputDebugStrF
                ((wchar_t *)"AssetsManagerEx : Fail to parse version file, step skipped\n");
      *(undefined4 *)(this + 0x20) = 6;
      downloadManifest(this);
    }
    else {
      uVar4 = Sexy::FilesystemSaveGameContext::GetBuffer
                        (*(FilesystemSaveGameContext **)(this + 0xa8));
      FUN_05475d88(asStack_10,uVar4);
      iVar2 = AssetsManagerManifest::getVersionToInt(asStack_10);
      std::string::~string(asStack_10);
      uVar4 = Sexy::FilesystemSaveGameContext::GetBuffer
                        (*(FilesystemSaveGameContext **)(this + 0xb8));
      FUN_05475d88(asStack_10,uVar4);
      iVar3 = AssetsManagerManifest::getVersionToInt(asStack_10);
      std::string::~string(asStack_10);
      if (iVar2 < iVar3) {
        *(undefined4 *)(this + 0x20) = 9;
        std::string::string(asStack_18,"");
        std::string::string(asStack_10,"");
        dispatchUpdateEvent(this,3,asStack_18,asStack_10,0,0);
        std::string::~string(asStack_10);
        nop();
        std::string::~string(asStack_18);
        nop();
        MessageRouter::Post((_func_void *)gMessageRouter);
        if (this[0xc0] != (AssetsManagerEx)0x0) {
          *(undefined4 *)(this + 0x20) = 6;
          downloadManifest(this);
        }
      }
      else {
        *(undefined4 *)(this + 0x20) = 0xc;
        std::string::string(asStack_18,"");
        std::string::string(asStack_10,"");
        dispatchUpdateEvent(this,4,asStack_18,asStack_10,0,0);
        std::string::~string(asStack_10);
        nop();
        std::string::~string(asStack_18);
        nop();
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerEx::ServiceRequestFailed(Sexy::StructuredData const*, void const*) */

void __thiscall
AssetsManagerEx::ServiceRequestFailed(AssetsManagerEx *this,StructuredData *param_1,void *param_2)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == this) {
    if (*(int *)((long)param_2 + 0x20) == 2) {
      Sexy::OutputDebugStrF
                ((wchar_t *)"AssetsManagerEx : Fail to download version file, step skipped\n");
      *(undefined4 *)((long)param_2 + 0x20) = 6;
      downloadManifest(param_2);
    }
    else if (*(int *)((long)param_2 + 0x20) == 7) {
      std::string::string(asStack_10,"");
      dispatchUpdateEvent(param_2,1,&MANIFEST_ID,asStack_10,0,0);
      std::string::~string(asStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerEx::downloadVersion() */

void __thiscall AssetsManagerEx::downloadVersion(AssetsManagerEx *this)

{
  undefined8 uVar1;
  long lVar2;
  NetworkServiceManager *this_00;
  string asStack_88 [8];
  StructuredData aSStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x20) < 2) {
    uVar1 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this + 0xa8));
    FUN_031dcc6c(asStack_88,this + 0x1b0,uVar1);
    lVar2 = FUN_05474178(asStack_88);
    if (lVar2 == 0) {
      Sexy::OutputDebugStrF((wchar_t *)"AssetsManagerEx : No version file found, step skipped\n");
      *(undefined4 *)(this + 0x20) = 6;
      downloadManifest(this);
    }
    else {
      *(undefined4 *)(this + 0x20) = 2;
      Sexy::StructuredData::StructuredData(aSStack_80);
      Sexy::StructuredData::BeginObject(aSStack_80);
      Sexy::StructuredData::AddString(aSStack_80,"url",asStack_88);
      Sexy::StructuredData::AddInteger(aSStack_80,"timeout",0x14);
      Sexy::StructuredData::EndObject(aSStack_80);
      this_00 = (NetworkServiceManager *)Sexy::NetworkServiceManager::DefaultNetworkServiceManager()
      ;
      Sexy::NetworkServiceManager::MakeRequest
                (this_00,aSStack_80,(NetworkServiceListener *)this,this);
      Sexy::StructuredData::~StructuredData(aSStack_80);
    }
    std::string::~string(asStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerEx::checkUpdate() */

void __thiscall AssetsManagerEx::checkUpdate(AssetsManagerEx *this)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1a8] == (AssetsManagerEx)0x0) {
    pcVar2 = "AssetsManagerEx : Manifests uninited.\n";
LAB_043fa3d4:
    Sexy::OutputDebugStrF((wchar_t *)pcVar2);
    std::string::string(asStack_18,"");
    std::string::string(asStack_10,"");
    dispatchUpdateEvent(this,0,asStack_18,asStack_10,0,0);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    goto switchD_043fa324_caseD_2;
  }
  cVar1 = AssetsManagerManifest::isLoaded(*(AssetsManagerManifest **)(this + 0xa8));
  if (cVar1 == '\0') {
    pcVar2 = "AssetsManagerEx : No local manifest file found error.\n";
    goto LAB_043fa3d4;
  }
  switch(*(undefined4 *)(this + 0x20)) {
  case 0:
  case 4:
    versionCheck(this);
    break;
  case 1:
    downloadVersion(this);
    break;
  case 9:
  case 0xd:
    std::string::string(asStack_18,"");
    std::string::string(asStack_10,"");
    uVar3 = 3;
    goto LAB_043fa36c;
  case 0xc:
    std::string::string(asStack_18,"");
    std::string::string(asStack_10,"");
    uVar3 = 4;
LAB_043fa36c:
    dispatchUpdateEvent(this,uVar3,asStack_18,asStack_10,0,0);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
  }
switchD_043fa324_caseD_2:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerEx::update() */

void __thiscall AssetsManagerEx::update(AssetsManagerEx *this)

{
  char cVar1;
  char *pcVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1a8] == (AssetsManagerEx)0x0) {
    pcVar2 = "AssetsManagerEx : Manifests uninited.\n";
  }
  else {
    cVar1 = AssetsManagerManifest::isLoaded(*(AssetsManagerManifest **)(this + 0xa8));
    if (cVar1 != '\0') {
      this[0xc0] = (AssetsManagerEx)0x1;
      switch(*(undefined4 *)(this + 0x20)) {
      case 0:
        *(undefined4 *)(this + 0x20) = 4;
      case 4:
        versionCheck(this);
      case 1:
        downloadVersion(this);
        break;
      case 3:
        parseVersion(this);
        break;
      case 6:
        downloadManifest(this);
        break;
      case 8:
        parseManifest(this);
        break;
      case 9:
      case 0xd:
        cVar1 = AssetsManagerManifest::isLoaded(*(AssetsManagerManifest **)(this + 0xb8));
        if (cVar1 == '\0') {
          this[0xc0] = (AssetsManagerEx)0x1;
          *(undefined4 *)(this + 0x20) = 6;
          downloadManifest(this);
        }
        else {
          startUpdate(this);
        }
        break;
      case 10:
      case 0xb:
      case 0xc:
        this[0xc0] = (AssetsManagerEx)0x0;
      }
      goto switchD_043fa52c_caseD_2;
    }
    pcVar2 = "AssetsManagerEx : No local manifest file found error.\n";
  }
  Sexy::OutputDebugStrF((wchar_t *)pcVar2);
  std::string::string(asStack_18,"");
  std::string::string(asStack_10,"");
  dispatchUpdateEvent(this,0,asStack_18,asStack_10,0,0);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
switchD_043fa52c_caseD_2:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerEx::ServiceRequestCompleted(Sexy::StructuredData const*, void const*) */

void __thiscall
AssetsManagerEx::ServiceRequestCompleted
          (AssetsManagerEx *this,StructuredData *param_1,void *param_2)

{
  char cVar1;
  long lVar2;
  Buffer aBStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == this) {
    lVar2 = Sexy::StructuredData::IntegerForPath(param_1,"$.statusCode",-1);
    if ((lVar2 == 200) || (lVar2 == -1)) {
      if (*(int *)((long)param_2 + 0x20) == 2) {
        cVar1 = Sexy::SexyAppBase::FileExists(Sexy::gSexyAppBase,(string *)((long)param_2 + 0x88));
        if (cVar1 != '\0') {
          Sexy::SexyAppBase::EraseFile((string *)Sexy::gSexyAppBase);
        }
        Sexy::Buffer::Buffer(aBStack_38);
        Sexy::StructuredData::WriteToBuffer(param_1,aBStack_38);
        Sexy::SexyAppBase::WriteBufferToFile
                  (Sexy::gSexyAppBase,(string *)((long)param_2 + 0x88),aBStack_38);
        *(undefined4 *)((long)param_2 + 0x20) = 3;
        parseVersion(param_2);
        Sexy::Buffer::~Buffer(aBStack_38);
      }
      else if (*(int *)((long)param_2 + 0x20) == 7) {
        cVar1 = Sexy::SexyAppBase::FileExists(Sexy::gSexyAppBase,(string *)((long)param_2 + 0x98));
        if (cVar1 != '\0') {
          Sexy::SexyAppBase::EraseFile((string *)Sexy::gSexyAppBase);
        }
        Sexy::Buffer::Buffer(aBStack_38);
        Sexy::StructuredData::WriteToBuffer(param_1,aBStack_38);
        Sexy::SexyAppBase::WriteBufferToFile
                  (Sexy::gSexyAppBase,(string *)((long)param_2 + 0x98),aBStack_38);
        *(undefined4 *)((long)param_2 + 0x20) = 8;
        parseManifest(param_2);
        Sexy::Buffer::~Buffer(aBStack_38);
      }
    }
    else {
      (**(code **)(*(long *)param_2 + 0x38))(param_2,param_1,param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerEx::FileDownloadSuccess(DownloadPath const&) */

void __thiscall AssetsManagerEx::FileDownloadSuccess(AssetsManagerEx *this,DownloadPath *param_1)

{
  string *psVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
  *this_00;
  long lVar5;
  void *pvVar6;
  undefined8 local_c8;
  string asStack_c0 [8];
  string asStack_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8 [6];
  MD5 aMStack_78 [112];
  long local_8;
  
  psVar1 = (string *)(param_1 + 0x10);
  local_8 = ___stack_chk_guard;
  this_00 = (unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
             *)AssetsManagerManifest::getAssets(*(AssetsManagerManifest **)(this + 0xb8));
  local_c8 = std::
             unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
             ::find(this_00,psVar1);
  local_a8[0] = FUN_043f6140();
  bVar2 = eastl::operator!=((rbtree_iterator *)&local_c8,(rbtree_iterator *)local_a8);
  if (bVar2) {
    std::string::string(asStack_c0,"");
    nop();
    Sexy::Buffer::Buffer((Buffer *)local_a8);
    cVar3 = Sexy::SexyAppBase::ReadBufferFromFile
                      (Sexy::gSexyAppBase,(Buffer *)(param_1 + 8),SUB81((string *)local_a8,0));
    if (cVar3 == '\0') {
      lVar5 = std::__detail::
              _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
              operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                          *)&local_c8);
      bVar2 = std::operator!=((string *)(lVar5 + 8),asStack_c0);
      if (bVar2) {
LAB_043faad4:
        Sexy::SexyAppBase::EraseFile(Sexy::gSexyAppBase);
        std::string::string(asStack_b8,"");
        std::string::string((string *)&local_b0,"");
        dispatchUpdateEvent(this,10,asStack_b8,(string *)&local_b0,0,0);
        std::string::~string((string *)&local_b0);
        nop();
        std::string::~string(asStack_b8);
        nop();
        Sexy::Buffer::~Buffer((Buffer *)local_a8);
        std::string::~string(asStack_c0);
        goto LAB_043fa930;
      }
    }
    else {
      pvVar6 = (void *)Sexy::Buffer::GetDataPtr((Buffer *)local_a8);
      iVar4 = Sexy::Buffer::GetDataLen((Buffer *)local_a8);
      MD5::MD5(aMStack_78,pvVar6,(long)iVar4);
      MD5::toString();
      FUN_05474278(asStack_c0,(string *)&local_b0);
      std::string::~string((string *)&local_b0);
      lVar5 = std::__detail::
              _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
              operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                          *)&local_c8);
      bVar2 = std::operator!=((string *)(lVar5 + 8),asStack_c0);
      if (bVar2) goto LAB_043faad4;
    }
    local_b0 = CONCAT44(local_b0._4_4_,2);
    AssetsManagerManifest::setAssetDownloadState
              (*(AssetsManagerManifest **)(this + 0xb0),psVar1,(DownloadState *)&local_b0);
    lVar5 = std::__detail::
            _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::operator->
                      ((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                        *)&local_c8);
    if (*(char *)(lVar5 + 0x18) != '\0') {
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)(this + 0x138),
                 (string *)(param_1 + 8));
    }
    Sexy::Buffer::~Buffer((Buffer *)local_a8);
    std::string::~string(asStack_c0);
  }
  local_b0 = std::
             unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
             ::find((unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
                     *)(this + 200),psVar1);
  local_a8[0] = FUN_043f6338();
  bVar2 = eastl::operator!=((rbtree_iterator *)&local_b0,(rbtree_iterator *)local_a8);
  if (bVar2) {
    iVar4 = *(int *)(this + 0x1a4);
    *(int *)(this + 0x1a4) = iVar4 + -1;
    *(float *)(this + 0x154) =
         ((float)(*(int *)(this + 0x1a0) - (iVar4 + -1)) * 100.0) / (float)*(int *)(this + 0x1a0);
  }
  std::string::string((string *)local_a8,"");
  dispatchUpdateEvent(this,6,psVar1,(string *)local_a8,0,0);
  std::string::~string((string *)local_a8);
  nop();
  local_b0 = std::
             unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
             ::find((unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
                     *)(this + 0x100),psVar1);
  local_a8[0] = FUN_043f6338();
  bVar2 = eastl::operator!=((rbtree_iterator *)&local_b0,(rbtree_iterator *)local_a8);
  if (bVar2) {
    std::
    unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
    ::erase((unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
             *)(this + 0x100),local_b0);
    iVar4 = *(int *)(this + 0x1a4);
  }
  else {
    iVar4 = *(int *)(this + 0x1a4);
  }
  if (iVar4 < 1) {
    onDownloadUnitsFinished(this);
  }
LAB_043fa930:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AssetsManagerEx::FileDownloadSuccess(DownloadPath const&) */

void __thiscall AssetsManagerEx::FileDownloadSuccess(AssetsManagerEx *this,DownloadPath *param_1)

{
  FileDownloadSuccess(this + -8,param_1);
  return;
}

