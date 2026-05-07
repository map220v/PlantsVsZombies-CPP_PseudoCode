// Class: DEditorNode


/* DEditorNode::getLoader() */

DEditorNode * __thiscall DEditorNode::getLoader(DEditorNode *this)

{
  return this + 0x150;
}


/* DEditorNode::setRootName(std::string const&) */

void DEditorNode::setRootName(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DEditorNode::removeAllLoadedGroups() */

void __thiscall DEditorNode::removeAllLoadedGroups(DEditorNode *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  string *psVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1b0);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    LawnApp::DeleteGroup(gLawnApp,psVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DEditorNode::~DEditorNode() */

void __thiscall DEditorNode::~DEditorNode(DEditorNode *this)

{
  *(undefined ***)this = &PTR__DEditorNode_06a24340;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a24680;
  removeAllLoadedGroups(this);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x1b0));
  std::string::~string((string *)(this + 0x1a0));
  std::string::~string((string *)(this + 0x198));
  DNodeLoaderConfig::~DNodeLoaderConfig((DNodeLoaderConfig *)(this + 0x150));
  DTransformNode::~DTransformNode((DTransformNode *)this);
  return;
}


/* DEditorNode::~DEditorNode() */

void __thiscall DEditorNode::~DEditorNode(DEditorNode *this)

{
  ~DEditorNode(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DEditorNode::DEditorNode() */

void __thiscall DEditorNode::DEditorNode(DEditorNode *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  DTransformNode::DTransformNode((DTransformNode *)this);
  *(undefined ***)this = &PTR__DEditorNode_06a24340;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a24680;
  DNodeLoaderConfig::DNodeLoaderConfig((DNodeLoaderConfig *)(this + 0x150));
  std::string::string((string *)(this + 0x198),"root");
  nop();
  Set8BytesTo0(this + 0x1a0);
  this[0x1a8] = (DEditorNode)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b0));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DEditorNode::loadGroup(std::string const&) */

void __thiscall DEditorNode::loadGroup(DEditorNode *this,string *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  string *psVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1b0);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar2 = std::operator==(psVar3,param_1);
    if (cVar2 != '\0') goto LAB_04f8ef70;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  cVar2 = LawnApp::CanLoadGroup(gLawnApp,param_1);
  if (cVar2 != '\0') {
    LawnApp::LoadGroup(gLawnApp,param_1);
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)this_00,param_1);
  }
LAB_04f8ef70:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DEditorNode::reload() */

void __thiscall DEditorNode::reload(DEditorNode *this)

{
  DNodeLoaderConfig *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  GenericResFile *pGVar4;
  char *pcVar5;
  string *psVar6;
  string *extraout_x1;
  Sexy aSStack_90 [8];
  RtMixedPtrBase aRStack_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  DString aDStack_70 [16];
  string asStack_60 [16];
  string asStack_50 [24];
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  removeAllLoadedGroups(this);
  std::string::string(asStack_38,"Credits");
  loadGroup(this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  Set8BytesTo0(aSStack_90);
  FUN_05475aa4(aSStack_90,"RESFILE_PROPERTIES_CONFIGUI_");
  FUN_054757c0(aSStack_90,this + 0x1a0);
  Sexy::Upper(aSStack_90,extraout_x1);
  FUN_05474278(aSStack_90,asStack_38);
  std::string::~string(asStack_38);
  Sexy::ResourceManager::GetResourceForStringIdT<Sexy::GenericResFile>
            (*(string **)(gLawnApp + 0x848),SUB81(aSStack_90,0));
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_88);
  if (cVar1 != '\0') {
    pGVar4 = (GenericResFile *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
    pcVar5 = (char *)Sexy::GenericResFile::GetFilePath(pGVar4);
    std::string::string((string *)&local_80,pcVar5);
    Sexy::GetFileDir((string *)&local_80,true);
    pGVar4 = (GenericResFile *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
    pcVar5 = (char *)Sexy::GenericResFile::GetFilePath(pGVar4);
    std::string::string(asStack_60,pcVar5);
    Sexy::GetFileName(asStack_60,false);
    std::operator+((string *)&local_78,asStack_50);
    DString::DString(aDStack_70,asStack_38);
    std::string::~string(asStack_38);
    std::string::~string(asStack_50);
    std::string::~string(asStack_60);
    nop();
    std::string::~string((string *)&local_78);
    std::string::~string((string *)&local_80);
    nop();
    DString::replace((char *)aDStack_70,"\\");
    DString::operator=(aDStack_70,(DString *)asStack_38);
    DString::~DString((DString *)asStack_38);
    Sexy::Buffer::Buffer((Buffer *)asStack_38);
    psVar6 = Sexy::gSexyAppBase;
    DString::operator_cast_to_string(aDStack_70);
    cVar1 = Sexy::SexyAppBase::ReadBufferFromFile(psVar6,(Buffer *)asStack_50,SUB81(asStack_38,0));
    std::string::~string(asStack_50);
    if (cVar1 != '\0') {
      this_00 = (DNodeLoaderConfig *)(this + 0x150);
      pcVar5 = (char *)Sexy::Buffer::GetDataPtr((Buffer *)asStack_38);
      iVar3 = Sexy::Buffer::GetDataLen((Buffer *)asStack_38);
      DString::DString((DString *)asStack_60,pcVar5,(long)iVar3);
      DString::operator_cast_to_string((DString *)asStack_60);
      cVar1 = DNodeLoaderConfig::loadFromStringData(this_00,asStack_50);
      std::string::~string(asStack_50);
      if (cVar1 != '\0') {
        std::string::string((string *)&local_78,"groups");
        DNodeLoaderConfig::getGroups((string *)this_00);
        std::string::~string((string *)&local_78);
        nop();
        local_80 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)asStack_50);
        local_78 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)asStack_50);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78),
              bVar2) {
          psVar6 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80)
          ;
          loadGroup(this,psVar6);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
        }
        DNodeLoaderConfig::loadNode((string *)this_00,(DTransformNode *)(this + 0x198));
        DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_78);
        std::vector<std::string,std::allocator<std::string>>::~vector
                  ((vector<std::string,std::allocator<std::string>> *)asStack_50);
      }
      DString::~DString((DString *)asStack_60);
    }
    Sexy::Buffer::~Buffer((Buffer *)asStack_38);
    DString::~DString(aDStack_70);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  std::string::~string((string *)aSStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DEditorNode::load(std::string const&, bool) */

void __thiscall DEditorNode::load(DEditorNode *this,string *param_1,bool param_2)

{
  thunk_FUN_05475e00(this + 0x1a0);
  this[0x1a8] = (DEditorNode)param_2;
  reload(this);
  return;
}


/* DEditorNode::reload(std::string const&) */

void DEditorNode::reload(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x1a0);
  reload((DEditorNode *)param_1);
  return;
}

