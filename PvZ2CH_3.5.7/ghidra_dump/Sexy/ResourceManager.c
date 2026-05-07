// Class: Sexy::ResourceManager


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::GetResourceGroupNamed(std::string const&) */

void __thiscall Sexy::ResourceManager::GetResourceGroupNamed(ResourceManager *this,string *param_1)

{
  undefined8 uVar1;
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  StringToWString((Sexy *)param_1,___stack_chk_guard);
  RtName::RtName(aRStack_18,awStack_20);
  uVar1 = GetResourceGroupNamed((RtName *)this);
  RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* Sexy::ResourceManager::GetErrorText() */

undefined8 Sexy::ResourceManager::GetErrorText(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* Sexy::Image::InfoClass* Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>(std::string
   const&) */

InfoClass * __thiscall
Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>(ResourceManager *this,string *param_1)

{
  ResourceInfoClass *pRVar1;
  InfoClass *pIVar2;
  
  pRVar1 = (ResourceInfoClass *)ResourceInfoTypes::ImageRes::StaticGetClass();
  pIVar2 = (InfoClass *)GetResInfoForStringId(this,pRVar1,param_1);
  return pIVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<Sexy::GenericResFile>
   Sexy::ResourceManager::GetResourceForStringIdT<Sexy::GenericResFile>(std::string const&, bool) */

void Sexy::ResourceManager::GetResourceForStringIdT<Sexy::GenericResFile>
               (string *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined1 in_w2;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  code *pcVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)param_1 + 0x10);
  uVar1 = ResourceInfoTypes::GenericResFileRes::StaticGetClass();
  (*pcVar2)(aRStack_10,param_1,uVar1,param_2,in_w2);
  RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<Sexy::Image>
   Sexy::ResourceManager::GetResourceForStringIdT<Sexy::Image>(std::string const&, bool) */

void Sexy::ResourceManager::GetResourceForStringIdT<Sexy::Image>(string *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined1 in_w2;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  code *pcVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)param_1 + 0x10);
  uVar1 = ResourceInfoTypes::ImageRes::StaticGetClass();
  (*pcVar2)(aRStack_10,param_1,uVar1,param_2,in_w2);
  RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::RenderEffectDefinition::InfoClass*
   Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::RenderEffectDefinition>(std::string const&)
    */

InfoClass * __thiscall
Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::RenderEffectDefinition>
          (ResourceManager *this,string *param_1)

{
  ResourceInfoClass *pRVar1;
  InfoClass *pIVar2;
  
  pRVar1 = (ResourceInfoClass *)ResourceInfoTypes::RenderEffectRes::StaticGetClass();
  pIVar2 = (InfoClass *)GetResInfoForStringId(this,pRVar1,param_1);
  return pIVar2;
}


/* Sexy::PopAnim::InfoClass*
   Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::PopAnim>(std::string const&) */

InfoClass * __thiscall
Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::PopAnim>(ResourceManager *this,string *param_1)

{
  ResourceInfoClass *pRVar1;
  InfoClass *pIVar2;
  
  pRVar1 = (ResourceInfoClass *)ResourceInfoTypes::PopAnimRes::StaticGetClass();
  pIVar2 = (InfoClass *)GetResInfoForStringId(this,pRVar1,param_1);
  return pIVar2;
}


/* Sexy::GenericResFile::InfoClass*
   Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::GenericResFile>(std::string const&) */

InfoClass * __thiscall
Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::GenericResFile>
          (ResourceManager *this,string *param_1)

{
  ResourceInfoClass *pRVar1;
  InfoClass *pIVar2;
  
  pRVar1 = (ResourceInfoClass *)ResourceInfoTypes::GenericResFileRes::StaticGetClass();
  pIVar2 = (InfoClass *)GetResInfoForStringId(this,pRVar1,param_1);
  return pIVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<Sexy::PopAnim>
   Sexy::ResourceManager::GetResourceForStringIdT<Sexy::PopAnim>(std::string const&, bool) */

void Sexy::ResourceManager::GetResourceForStringIdT<Sexy::PopAnim>(string *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined1 in_w2;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  code *pcVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)param_1 + 0x10);
  uVar1 = ResourceInfoTypes::PopAnimRes::StaticGetClass();
  (*pcVar2)(aRStack_10,param_1,uVar1,param_2,in_w2);
  RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ResourceManager::GetDelayLoadedRSBSlotCount() */

undefined4 __thiscall Sexy::ResourceManager::GetDelayLoadedRSBSlotCount(ResourceManager *this)

{
  return *(undefined4 *)(this + 0x158);
}


/* Sexy::Image::InfoClass* Sexy::ResourceManager::GetResInfoForPathT<Sexy::Image>(std::string
   const&) */

InfoClass * __thiscall
Sexy::ResourceManager::GetResInfoForPathT<Sexy::Image>(ResourceManager *this,string *param_1)

{
  ResourceInfoClass *pRVar1;
  InfoClass *pIVar2;
  
  pRVar1 = (ResourceInfoClass *)ResourceInfoTypes::ImageRes::StaticGetClass();
  pIVar2 = (InfoClass *)GetResInfoForPath(this,pRVar1,param_1);
  return pIVar2;
}


/* Sexy::PopAnim::InfoClass* Sexy::ResourceManager::GetResInfoForPathT<Sexy::PopAnim>(std::string
   const&) */

InfoClass * __thiscall
Sexy::ResourceManager::GetResInfoForPathT<Sexy::PopAnim>(ResourceManager *this,string *param_1)

{
  ResourceInfoClass *pRVar1;
  InfoClass *pIVar2;
  
  pRVar1 = (ResourceInfoClass *)ResourceInfoTypes::PopAnimRes::StaticGetClass();
  pIVar2 = (InfoClass *)GetResInfoForPath(this,pRVar1,param_1);
  return pIVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<Sexy::RenderEffectDefinition>
   Sexy::ResourceManager::GetResourceForStringIdT<Sexy::RenderEffectDefinition>(std::string const&,
   bool) */

void Sexy::ResourceManager::GetResourceForStringIdT<Sexy::RenderEffectDefinition>
               (string *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined1 in_w2;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  code *pcVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)param_1 + 0x10);
  uVar1 = ResourceInfoTypes::RenderEffectRes::StaticGetClass();
  (*pcVar2)(aRStack_10,param_1,uVar1,param_2,in_w2);
  RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ResourceManager::GetInfoClassCount() */

void __thiscall Sexy::ResourceManager::GetInfoClassCount(ResourceManager *this)

{
  FUN_05194940(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  return;
}


/* Sexy::ResourceManager::GetInfoClassIndexed(unsigned int) */

undefined8 __thiscall Sexy::ResourceManager::GetInfoClassIndexed(ResourceManager *this,uint param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0519494c(*(undefined8 *)(this + 8),param_1);
  return *puVar1;
}


/* Sexy::ResourceManager::HadError() */

byte __thiscall Sexy::ResourceManager::HadError(ResourceManager *this)

{
  byte bVar1;
  
  bVar1 = FUN_0547419c(this + 0x148);
  return bVar1 ^ 1;
}


/* Sexy::ResourceManager::ClearError() */

void __thiscall Sexy::ResourceManager::ClearError(ResourceManager *this)

{
  FUN_05474ff8(this + 0x148);
  return;
}


/* Sexy::ResourceManager::Fail(std::string const&) */

undefined8 __thiscall Sexy::ResourceManager::Fail(ResourceManager *this,string *param_1)

{
  string *this_00;
  char cVar1;
  wchar_t *pwVar2;
  size_t in_x2;
  
  this_00 = (string *)(this + 0x148);
  pwVar2 = (wchar_t *)FUN_0547429c(param_1);
  OutputDebugStrF(pwVar2);
  cVar1 = FUN_0547419c(this_00);
  if (cVar1 != '\0') {
    thunk_FUN_05475e00(this_00,param_1);
    cVar1 = FUN_0547419c(this_00);
    if (cVar1 != '\0') {
      std::string::append(this_00,"Unknown error",in_x2);
      return 0;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::ShowResourceError(bool) */

void __thiscall Sexy::ResourceManager::ShowResourceError(ResourceManager *this,bool param_1)

{
  wchar_t *pwVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetErrorText();
  pwVar1 = (wchar_t *)FUN_0547429c(asStack_10);
  OutputDebugStrF(pwVar1);
  std::string::~string(asStack_10);
  plVar2 = gSexyAppBase;
  pcVar3 = *(code **)(*gSexyAppBase + 0x140);
  GetErrorText();
  (*pcVar3)(plVar2,asStack_10);
  std::string::~string(asStack_10);
  if ((param_1) && (plVar2 = (long *)gSexyAppBase[2], plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x40))(plVar2,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::InitForDecompressRsbFile(int, int, std::string const&, std::string const&,
   bool) */

void __thiscall
Sexy::ResourceManager::InitForDecompressRsbFile
          (ResourceManager *this,int param_1,int param_2,string *param_3,string *param_4,
          bool param_5)

{
  char cVar1;
  char cVar2;
  long *plVar3;
  ResStreamsManager *pRVar4;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(param_4);
  cVar2 = '\0';
  if (cVar1 == '\0') {
    *(int *)(this + 0x204) = param_1;
    *(int *)(this + 0x208) = param_2;
    cVar1 = FUN_0547419c(param_3);
    cVar2 = cVar1;
    if ((cVar1 == '\0') && (*(long *)(*(long *)(this + 0x1a0) + 0x908) != 0)) {
      plVar3 = *(long **)(*(long *)(this + 0x1a0) + 0x28);
      (**(code **)(*plVar3 + 0x38))(asStack_20,plVar3);
      std::string::string(asStack_18,"");
      nop();
      pRVar4 = *(ResStreamsManager **)(*(long *)(this + 0x1a0) + 0x908);
      FUN_05475d88(asStack_10,asStack_20);
      cVar2 = ResStreamsManager::DecompressRsbFile
                        (pRVar4,asStack_10,param_3,this + 0x170,this + 0x178,param_5,asStack_18);
      std::string::~string(asStack_10);
      if (cVar2 == '\0') {
        std::string::~string(asStack_18);
        std::string::~string(asStack_20);
        cVar2 = cVar1;
      }
      else {
        std::string::~string(asStack_18);
        std::string::~string(asStack_20);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* Sexy::ResourceManager::GetLastNonDelayLoadRSBManifestName() */

undefined * Sexy::ResourceManager::GetLastNonDelayLoadRSBManifestName(void)

{
  return &DAT_06bbd940;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::GetLocaleFolder(bool) */

void Sexy::ResourceManager::GetLocaleFolder(bool param_1)

{
  uint uVar1;
  char in_w1;
  string *in_x8;
  string asStack_10 [8];
  long local_8;
  
  uVar1 = *(uint *)((ulong)param_1 + 0x20c);
  local_8 = ___stack_chk_guard;
  if (uVar1 == 0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    StrFormat("locales/%c%c-%c%c",asStack_10,(ulong)(uVar1 >> 0x18),(ulong)(uVar1 >> 0x10) & 0xff,
              (ulong)(uVar1 >> 8) & 0xff,(ulong)(byte)uVar1);
    if (in_w1 != '\0') {
      FUN_05475ce8(asStack_10,0x2f);
    }
    FUN_05474148();
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::GetLoadResourcesListProgress(std::vector<std::string,
   std::allocator<std::string > > const&) */

void __thiscall
Sexy::ResourceManager::GetLoadResourcesListProgress(ResourceManager *this,vector *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  string *psVar5;
  ulong uVar6;
  ulong uVar7;
  ResStreamsManager *this_00;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  string asStack_10 [8];
  long local_8;
  
  this_00 = *(ResStreamsManager **)(*(long *)(this + 0x1a0) + 0x908);
  local_8 = ___stack_chk_guard;
  if (this_00 != (ResStreamsManager *)0x0) {
    std::string::string(asStack_10,"dynamic.rsb");
    cVar1 = ResStreamsManager::IsInitialized(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (cVar1 != '\0') {
      uVar8 = *(undefined8 *)param_1;
      uVar7 = 0;
      uVar9 = 0;
      uVar10 = 0;
      lVar4 = FUN_05194984(uVar8,*(undefined8 *)(param_1 + 8));
      if (lVar4 != 0) {
        do {
          psVar5 = (string *)FUN_05194990(uVar8,uVar7);
          uVar2 = ResStreamsManager::LookupGroup
                            (*(ResStreamsManager **)(*(long *)(this + 0x1a0) + 0x908),psVar5);
          if (uVar2 != 0xffffffff) {
            iVar3 = ResStreamsManager::GetBytesLoadedForGroup
                              (*(ResStreamsManager **)(*(long *)(this + 0x1a0) + 0x908),uVar2);
            uVar9 = uVar9 + iVar3;
            iVar3 = ResStreamsManager::GetTotalBytesForGroup
                              (*(ResStreamsManager **)(*(long *)(this + 0x1a0) + 0x908),uVar2);
            uVar10 = uVar10 + iVar3;
          }
          uVar8 = *(undefined8 *)param_1;
          uVar7 = uVar7 + 1;
          uVar6 = FUN_05194984(uVar8,*(undefined8 *)(param_1 + 8));
        } while (uVar7 < uVar6);
      }
      fVar11 = (float)((double)uVar9 / (double)uVar10);
      goto LAB_051962e4;
    }
  }
  fVar11 = 0.0;
LAB_051962e4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar11);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::PrepareLoadResourcesList(char const**) */

void __thiscall
Sexy::ResourceManager::PrepareLoadResourcesList(ResourceManager *this,char **param_1)

{
  char cVar1;
  uint uVar2;
  char *__s;
  ResStreamsManager *pRVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = *(ResStreamsManager **)(*(long *)(this + 0x1a0) + 0x908);
  if (pRVar3 != (ResStreamsManager *)0x0) {
    std::string::string(asStack_10,"dynamic.rsb");
    cVar1 = ResStreamsManager::IsInitialized(pRVar3,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (cVar1 != '\0') {
      __s = *param_1;
      while (__s != (char *)0x0) {
        param_1 = param_1 + 1;
        pRVar3 = *(ResStreamsManager **)(*(long *)(this + 0x1a0) + 0x908);
        std::string::string(asStack_10,__s);
        uVar2 = ResStreamsManager::LookupGroup(pRVar3,asStack_10);
        std::string::~string(asStack_10);
        nop();
        if (uVar2 != 0xffffffff) {
          ResStreamsManager::LoadGroup
                    (*(ResStreamsManager **)(*(long *)(this + 0x1a0) + 0x908),uVar2);
        }
        __s = *param_1;
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
/* Sexy::ResourceManager::RegisterResourceInternal(Sexy::RtMixedPtrBase*, Sexy::BaseResource*,
   Sexy::RtId const&, Sexy::BaseResource::EResourceRegistrationType) */

void Sexy::ResourceManager::RegisterResourceInternal
               (exception_ptr *param_1,undefined8 param_2_00,RtMixedPtrBase *param_2,
               RtObject *param_3,RtId *param_5,int param_6)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  RtDb *pRVar5;
  _func_void *extraout_x1;
  _func_void *extraout_x1_00;
  _func_void *p_Var6;
  _func_void *extraout_x1_01;
  RtId aRStack_18 [8];
  exception_ptr aeStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  p_Var6 = (_func_void *)0x0;
  if (param_2 != (RtMixedPtrBase *)0x0) {
    std::__exception_ptr::exception_ptr::exception_ptr(aeStack_10,(_func_void *)param_2);
    RtMixedPtrBase::SetId(param_2,(RtId *)aeStack_10,false);
    RtId::~RtId((RtId *)aeStack_10);
    p_Var6 = extraout_x1;
  }
  if (param_3 != (RtObject *)0x0) {
    BaseResource::GetRtId();
    cVar1 = CompiledMap::Initialized((CompiledMap *)aeStack_10);
    RtId::~RtId((RtId *)aeStack_10);
    p_Var6 = extraout_x1_00;
    if (cVar1 == '\0') {
      if (param_6 == 1) {
        uVar2 = RtId::GetSlotIndex(param_5);
        uVar3 = RtId::GetRevision(param_5);
        RtId::RtId((RtId *)aeStack_10,0x2006,uVar2,uVar3);
        pRVar5 = (RtDb *)RtDb::GetDb();
        RtDb::ReplaceObjectForId(pRVar5,(RtId *)aeStack_10,param_3);
        pRVar5 = (RtDb *)RtDb::GetDb();
        RtDb::SetObjectDeletionMode(pRVar5,(CompiledMap *)aeStack_10,0);
      }
      else {
        if (param_6 != 2) {
          if (param_6 == 3) {
            uVar4 = RtDb::GetDb();
            RtDb::AllocId(aRStack_18,uVar4,0x2008,param_3,0,1,0);
            RtId::operator=((RtId *)(param_3 + 8),aRStack_18);
            std::__exception_ptr::exception_ptr::exception_ptr(aeStack_10,extraout_x1_01);
            RtId::operator=((RtId *)(param_3 + 0x10),(RtId *)aeStack_10);
            RtId::~RtId((RtId *)aeStack_10);
            if (param_2 != (RtMixedPtrBase *)0x0) {
              RtMixedPtrBase::SetId(param_2,aRStack_18,true);
              RtMixedPtrBase::Possess(param_2);
            }
            RtId::RtId((RtId *)param_1,aRStack_18);
            RtId::~RtId(aRStack_18);
            goto LAB_051964d0;
          }
          goto LAB_051964c8;
        }
        uVar4 = RtDb::GetDb();
        RtDb::AllocId((CompiledMap *)aeStack_10,uVar4,0x2007,param_3,0,1,0);
      }
      RtId::operator=((RtId *)(param_3 + 8),(RtId *)aeStack_10);
      RtId::operator=((RtId *)(param_3 + 0x10),param_5);
      if (param_2 != (RtMixedPtrBase *)0x0) {
        RtMixedPtrBase::SetId(param_2,(RtId *)aeStack_10,false);
      }
      RtId::RtId((RtId *)param_1,(RtId *)aeStack_10);
      RtId::~RtId((RtId *)aeStack_10);
      goto LAB_051964d0;
    }
  }
LAB_051964c8:
  std::__exception_ptr::exception_ptr::exception_ptr(param_1,p_Var6);
LAB_051964d0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::RegisterResource(Sexy::RtMixedPtrBase&, Sexy::BaseResource*) */

void __thiscall
Sexy::ResourceManager::RegisterResource
          (ResourceManager *this,RtMixedPtrBase *param_1,BaseResource *param_2)

{
  exception_ptr aeStack_18 [8];
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__exception_ptr::exception_ptr::exception_ptr(aeStack_18,(_func_void *)param_1);
  RegisterResourceInternal(aRStack_10,this,param_1,param_2,aeStack_18,3);
  RtId::~RtId(aRStack_10);
  RtId::~RtId((RtId *)aeStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::GetLocaleSetForLocaleName(std::string const&) */

void __thiscall
Sexy::ResourceManager::GetLocaleSetForLocaleName(ResourceManager *this,string *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475ffc(asStack_10,param_1,0,2);
  bVar1 = std::operator==(asStack_10,"en");
  if (!bVar1) {
    bVar1 = std::operator==(asStack_10,"fr");
    if (bVar1) {
      uVar2 = 0x46524652;
      goto LAB_05196c6c;
    }
    bVar1 = std::operator==(asStack_10,"es");
    if (bVar1) {
      uVar2 = 0x45534553;
      goto LAB_05196c6c;
    }
    bVar1 = std::operator==(asStack_10,"it");
    if (bVar1) {
      uVar2 = 0x49544954;
      goto LAB_05196c6c;
    }
    bVar1 = std::operator==(asStack_10,"de");
    if (bVar1) {
      uVar2 = 0x44454445;
      goto LAB_05196c6c;
    }
    bVar1 = std::operator==(asStack_10,"pt");
    if (bVar1) {
      uVar2 = 0x50544252;
      goto LAB_05196c6c;
    }
    bVar1 = std::operator==(asStack_10,"zh");
    if (bVar1) {
      uVar2 = 0x5a48434e;
      goto LAB_05196c6c;
    }
  }
  uVar2 = 0x454e5553;
LAB_05196c6c:
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::BuildImage(std::string const&, bool, bool) */

void __thiscall
Sexy::ResourceManager::BuildImage(ResourceManager *this,string *param_1,bool param_2,bool param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  DeviceImage *this_00;
  JSONCodeTableWriter *this_01;
  undefined8 uVar5;
  ResStreamsManager *this_02;
  code *pcVar6;
  string asStack_18 [8];
  DeviceImage *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_02 = *(ResStreamsManager **)(gSexyAppBase + 0x908);
  if (this_02 != (ResStreamsManager *)0x0) {
    std::string::string((string *)&local_10,"dynamic.rsb");
    cVar1 = ResStreamsManager::IsInitialized(this_02,(string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
    if (cVar1 != '\0') {
      std::operator+(param_1,".ptx");
      uVar2 = ResStreamsManager::GetGroupForFile(this_02,asStack_18,false,true);
      if (uVar2 != 0xffffffff) {
        local_10 = (DeviceImage *)0x0;
        cVar1 = ResStreamsManager::GetImage(this_02,uVar2,asStack_18,(Image **)&local_10);
        this_00 = local_10;
        if (cVar1 != '\0') {
          std::string::~string(asStack_18);
          goto LAB_051974bc;
        }
      }
      std::string::~string(asStack_18);
    }
  }
  this_00 = (DeviceImage *)
            (**(code **)(**(long **)(gSexyAppBase + 0x10) + 0x298))
                      (*(long **)(gSexyAppBase + 0x10),param_1,param_2,param_3);
  if ((this_00 == (DeviceImage *)0x0) &&
     (this_00 = (DeviceImage *)
                (**(code **)(**(long **)(gSexyAppBase + 0x10) + 0x298))
                          (*(long **)(gSexyAppBase + 0x10),param_1,param_2,param_3),
     this_00 == (DeviceImage *)0x0)) {
    AutoCrit::AutoCrit((AutoCrit *)&local_10,(CritSect *)(gSexyAppBase + 0x134));
    this_01 = (JSONCodeTableWriter *)ImageLib::GetImage(param_1,true,-1);
    if (this_01 != (JSONCodeTableWriter *)0x0) {
      this_00 = ::operator_new(0x160);
      DeviceImage::DeviceImage(this_00,gSexyAppBase);
      if (!param_3) {
        FUN_05194904(this_00 + 0x18,0x80);
      }
      pcVar6 = *(code **)(*(long *)this_00 + 0xc0);
      uVar5 = open_vcdiff::JSONCodeTableWriter::target_length(this_01);
      uVar3 = ImageLib::Image::GetWidth((Image *)this_01);
      uVar4 = BaseTaskResource::GetType((BaseTaskResource *)this_01);
      (*pcVar6)(this_00,uVar5,uVar3,uVar4,param_2);
      thunk_FUN_05475e00(this_00 + 0x30,param_1);
      (**(code **)(*(long *)this_01 + 8))(this_01);
    }
    AutoCrit::~AutoCrit((AutoCrit *)&local_10);
  }
LAB_051974bc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::GetResourceGroupNamed(Sexy::RtName const&) */

void Sexy::ResourceManager::GetResourceGroupNamed(RtName *param_1)

{
  ResourceInfo *pRVar1;
  RtId aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtDbTable::GetIdForAlias(*(RtName **)(param_1 + 0x80));
  RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  pRVar1 = RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
  RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  RtId::~RtId(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::CreateResourceGroup(Sexy::RtName const&, bool, bool&) */

void __thiscall
Sexy::ResourceManager::CreateResourceGroup
          (ResourceManager *this,RtName *param_1,bool param_2,bool *param_3)

{
  ResourceGroup *this_00;
  undefined8 uVar1;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ResourceGroup *)GetResourceGroupNamed((RtName *)this);
  if (this_00 == (ResourceGroup *)0x0) {
    *param_3 = false;
    this_00 = ::operator_new(0xb0);
    ResourceGroup::ResourceGroup(this_00);
    *(ResourceManager **)(this_00 + 8) = this;
    FUN_05194864(this_00 + 0x20,param_1);
    this_00[0x10] = (ResourceGroup)param_2;
    uVar1 = RtDb::GetDb();
    RtDb::AllocId(aRStack_10,uVar1,0x2003,this_00,0,1);
    RtId::operator=((RtId *)(this_00 + 0x70),aRStack_10);
    RtId::~RtId(aRStack_10);
    RtDbTable::SetIdForAlias(*(RtDbTable **)(this + 0x80),param_1,(RtId *)(this_00 + 0x70));
  }
  else {
    *param_3 = true;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::LoadAllRsb() */

void __thiscall Sexy::ResourceManager::LoadAllRsb(ResourceManager *this)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  while (lVar2 = std::
                 list<Sexy::ResourceManager::PreLoadTask*,std::allocator<Sexy::ResourceManager::PreLoadTask*>>
                 ::size((list<Sexy::ResourceManager::PreLoadTask*,std::allocator<Sexy::ResourceManager::PreLoadTask*>>
                         *)(this + 0x160)), lVar2 != 0) {
    local_10 = FUN_05197b74(*(undefined8 *)(this + 0x160));
    puVar1 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_10);
    ResStreamsManager::CreateRSBinLocalPath
              (*(ResStreamsManager **)(*(long *)(this + 0x1a0) + 0x908),(string *)(this + 0x170),
               (string *)(this + 0x178),(string *)*puVar1,*(Buffer **)((string *)*puVar1 + 8),
               *(long *)(this + 0x180),*(long *)(this + 0x188),*(long *)(this + 400),
               *(long *)(this + 0x198));
    std::
    list<Sexy::ResourceManager::PreLoadTask*,std::allocator<Sexy::ResourceManager::PreLoadTask*>>::
    pop_front((list<Sexy::ResourceManager::PreLoadTask*,std::allocator<Sexy::ResourceManager::PreLoadTask*>>
               *)(this + 0x160));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::GetResourceCount(Sexy::ResourceInfoClass*, bool, bool) */

void __thiscall
Sexy::ResourceManager::GetResourceCount
          (ResourceManager *this,ResourceInfoClass *param_1,bool param_2,bool param_3)

{
  map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
  *this_00;
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar6 = (ulong)param_2;
  local_8 = ___stack_chk_guard;
  if (param_1 == (ResourceInfoClass *)0x0) {
    uVar6 = 0;
    lVar3 = 0;
    while( true ) {
      uVar7 = *(undefined8 *)(this + 8);
      iVar2 = FUN_05194940(uVar7,*(undefined8 *)(this + 0x10));
      if (iVar2 <= (int)lVar3) break;
      puVar4 = (undefined8 *)FUN_0519494c(uVar7,lVar3);
      iVar2 = GetResourceCount(this,(ResourceInfoClass *)*puVar4,param_2,param_3);
      uVar6 = (ulong)(uint)((int)uVar6 + iVar2);
      lVar3 = lVar3 + 1;
    }
  }
  else {
    this_00 = (map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
               *)(param_1 + 0x68);
    if (param_2 < !param_3) {
      uVar6 = std::
              map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
              ::size(this_00);
    }
    else {
      local_18 = std::
                 map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
                 ::begin(this_00);
      if (param_3) {
        if (param_2) {
          uVar6 = 0;
          while( true ) {
            local_10 = std::
                       map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this_00);
            bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
            if (!bVar1) break;
            lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
            lVar3 = *(long *)(lVar3 + 8);
            if (((*(int *)(lVar3 + 0x58) == 0) || (*(int *)(lVar3 + 0x58) == *(int *)(this + 0x208))
                ) && ((*(int *)(lVar3 + 0x5c) == 0 ||
                      (*(int *)(lVar3 + 0x5c) == *(int *)(this + 0x20c))))) {
              uVar5 = (uint)uVar6;
              if (*(char *)(lVar3 + 0x60) == '\0') {
                uVar5 = uVar5 + 1;
              }
              uVar6 = (ulong)uVar5;
            }
            std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
          }
        }
        else {
          while( true ) {
            local_10 = std::
                       map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this_00);
            bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
            if (!bVar1) break;
            lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
            iVar2 = *(int *)(*(long *)(lVar3 + 8) + 0x5c);
            if ((iVar2 == 0) || (iVar2 == *(int *)(this + 0x20c))) {
              uVar5 = (uint)uVar6;
              if (*(char *)(*(long *)(lVar3 + 8) + 0x60) == '\0') {
                uVar5 = uVar5 + 1;
              }
              uVar6 = (ulong)uVar5;
            }
            std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
          }
        }
      }
      else if (param_2) {
        uVar6 = (ulong)param_3;
        while( true ) {
          local_10 = std::
                     map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this_00);
          bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
          if (!bVar1) break;
          lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                            ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
          iVar2 = *(int *)(*(long *)(lVar3 + 8) + 0x58);
          if ((iVar2 == 0) || (iVar2 == *(int *)(this + 0x208))) {
            uVar5 = (uint)uVar6;
            if (*(char *)(*(long *)(lVar3 + 8) + 0x60) == '\0') {
              uVar5 = uVar5 + 1;
            }
            uVar6 = (ulong)uVar5;
          }
          std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                    ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
        }
      }
      else {
        while( true ) {
          local_10 = std::
                     map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this_00);
          bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
          if (!bVar1) break;
          lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                            ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
          uVar5 = (uint)uVar6;
          if (*(char *)(*(long *)(lVar3 + 8) + 0x60) == '\0') {
            uVar5 = uVar5 + 1;
          }
          uVar6 = (ulong)uVar5;
          std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                    ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::IsDelayLoadRSB(std::string const&) */

void __thiscall Sexy::ResourceManager::IsDelayLoadRSB(ResourceManager *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  _func_void *local_8;
  
  local_8 = ___stack_chk_guard;
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_18,___stack_chk_guard);
  local_18 = std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::begin((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                      *)&DAT_06bbd8d8);
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)&DAT_06bbd8d8);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar2) break;
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    cVar1 = std::operator==((string *)(lVar3 + 8),param_1);
    if (cVar1 != '\0') break;
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::ResizeTables(unsigned int, std::string const&) */

void __thiscall
Sexy::ResourceManager::ResizeTables(ResourceManager *this,uint param_1,string *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  string *psVar5;
  uint uVar6;
  CUIColorLayer *this_00;
  RtId aRStack_18 [8];
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = GetDelayLoadedRSBSlotCount(this);
  if ((iVar3 == 0) || (cVar2 = IsDelayLoadRSB(this,param_2), cVar2 == '\0')) {
    this_00 = *(CUIColorLayer **)(this + 0x88);
    puVar4 = (uint *)Lua::CUIColorLayer::GetLayerColor(this_00);
    uVar6 = *puVar4;
    RtDbTable::ResizeTable((RtDbTable *)this_00,param_1,param_2);
    RtDbTable::ResizeTable(*(RtDbTable **)(this + 0x90),param_1,param_2);
    RtDbTable::ResizeTable(*(RtDbTable **)(this + 0x98),param_1,param_2);
    iVar3 = GetDelayLoadedRSBSlotCount(this);
    if (iVar3 != 0) {
      psVar5 = (string *)GetLastNonDelayLoadRSBManifestName();
      cVar2 = std::operator==(param_2,psVar5);
      if (cVar2 != '\0') {
        param_1 = param_1 + *(int *)(this + 0x158);
      }
    }
    uVar1 = param_1 + uVar6;
    if (uVar6 < uVar1) {
      do {
        uVar6 = uVar6 + 1;
        RtDbTable::AllocId(aRStack_18,*(undefined8 *)(this + 0x88),0,0,1,0);
        RtDbTable::AllocId(aRStack_10,*(undefined8 *)(this + 0x98),0,0,1,0);
        RtId::operator=(aRStack_18,aRStack_10);
        RtId::~RtId(aRStack_10);
        RtDbTable::SetObjectIsWatched(*(RtDbTable **)(this + 0x98),aRStack_18,true);
        RtId::~RtId(aRStack_18);
      } while (uVar6 < uVar1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::RemoveAllDelayLoadedRSBConfigFiles() */

void Sexy::ResourceManager::RemoveAllDelayLoadedRSBConfigFiles(void)

{
  string *psVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 local_18;
  undefined8 local_10;
  _func_void *local_8;
  
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_18,___stack_chk_guard);
  local_18 = std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::begin((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                      *)&DAT_06bbd8d8);
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)&DAT_06bbd8d8);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar2) break;
    lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    cVar3 = SexyAppBase::FileExists(gSexyAppBase,(string *)(lVar5 + 8));
    psVar1 = (string *)gSexyAppBase;
    if (cVar3 != '\0') {
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      uVar4 = SexyAppBase::EraseFile(psVar1);
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::PreLoadRsb(std::string const&) */

void __thiscall Sexy::ResourceManager::PreLoadRsb(ResourceManager *this,string *param_1)

{
  int iVar1;
  PreLoadTask *pPVar2;
  Buffer *this_00;
  long *plVar3;
  PreLoadTask *local_20;
  string asStack_18 [8];
  Buffer aBStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = ::operator_new(0x10);
  PreLoadTask::PreLoadTask(pPVar2);
  local_20 = pPVar2;
  thunk_FUN_05475e00(pPVar2,param_1);
  this_00 = ::operator_new(0x30);
  Buffer::Buffer(this_00);
  plVar3 = *(long **)(*(long *)(this + 0x1a0) + 0x28);
  *(Buffer **)(local_20 + 8) = this_00;
  (**(code **)(*plVar3 + 0x38))(asStack_18,plVar3);
  FUN_031dcc6c(aBStack_10,asStack_18,param_1);
  SexyAppBase::ReadBufferFromFile(gSexyAppBase,aBStack_10,SUB81(*(undefined8 *)(local_20 + 8),0));
  iVar1 = Buffer::GetDataLen(*(Buffer **)(local_20 + 8));
  if (iVar1 < 1) {
    if (*(long **)(local_20 + 8) != (long *)0x0) {
      (**(code **)(**(long **)(local_20 + 8) + 8))();
    }
    pPVar2 = local_20;
    *(undefined8 *)(local_20 + 8) = 0;
    PreLoadTask::~PreLoadTask(local_20);
    AK::FreeHook(pPVar2);
    local_20 = (PreLoadTask *)0x0;
    std::string::~string((string *)aBStack_10);
    std::string::~string(asStack_18);
  }
  else {
    if (*(long *)(local_20 + 8) != 0) {
      std::
      list<Sexy::ResourceManager::PreLoadTask*,std::allocator<Sexy::ResourceManager::PreLoadTask*>>
      ::push_back((list<Sexy::ResourceManager::PreLoadTask*,std::allocator<Sexy::ResourceManager::PreLoadTask*>>
                   *)(this + 0x160),&local_20);
    }
    std::string::~string((string *)aBStack_10);
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ResourceManager::InitResourceGen(Sexy::ResGenInfo const&) */

void __thiscall Sexy::ResourceManager::InitResourceGen(ResourceManager *this,ResGenInfo *param_1)

{
  ResGenInfo::operator=((ResGenInfo *)(this + 0x100),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::GetLocSetForLocaleName(std::string const&) */

void __thiscall Sexy::ResourceManager::GetLocSetForLocaleName(ResourceManager *this,string *param_1)

{
  map<std::string,Sexy::ResGenInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::ResGenInfo>>>
  *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *puVar8;
  string *extraout_x1;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  int local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  char local_10 [8];
  long local_8;
  
  this_00 = ResourceManagerInfo::sInstance;
  local_8 = ___stack_chk_guard;
  if (ResourceManagerInfo::sInstance !=
      (map<std::string,Sexy::ResGenInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::ResGenInfo>>>
       *)0x0) {
    std::string::string((string *)&local_18,"properties/resources.rton");
    local_20 = std::
               map<std::string,Sexy::ResGenInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::ResGenInfo>>>
               ::find(this_00,(string *)&local_18);
    std::string::~string((string *)&local_18);
    nop();
    local_18 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)ResourceManagerInfo::sInstance);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18);
    if (bVar1) {
LAB_0519bf70:
      lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
      if ((lVar4 != -8) &&
         (cVar2 = std::vector<unsigned_int,std::allocator<unsigned_int>>::empty
                            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(lVar4 + 0x30)),
         cVar2 == '\0')) {
        Upper((Sexy *)param_1,extraout_x1);
        Set8BytesTo0((string *)&local_18);
        pcVar5 = (char *)FUN_0547429c((rbtree_iterator *)&local_20);
        cVar2 = *pcVar5;
        while (cVar2 != '\0') {
          if (cVar2 != '-') {
            FUN_05475ce8((string *)&local_18);
          }
          pcVar5 = pcVar5 + 1;
          cVar2 = *pcVar5;
        }
        thunk_FUN_05475e00((rbtree_iterator *)&local_20,(string *)&local_18);
        std::string::~string((string *)&local_18);
        uVar6 = FUN_05474184((rbtree_iterator *)&local_20);
        if (1 < uVar6) {
          local_28[0] = (int)uVar6;
          local_18 = CONCAT44(local_18._4_4_,4);
          piVar7 = eastl::min_alt<int>(local_28,(int *)&local_18);
          iVar11 = *piVar7;
          if (1 < iVar11) {
            uVar9 = *(undefined8 *)(lVar4 + 0x30);
            iVar3 = FUN_05194934(uVar9,*(undefined8 *)(lVar4 + 0x38));
            do {
              lVar13 = 0;
              if (0 < iVar3) {
                do {
                  lVar10 = 0;
                  puVar8 = (undefined4 *)FUN_0519497c(uVar9,lVar13);
                  uVar12 = *puVar8;
                  local_10[3] = (char)uVar12;
                  local_10[0] = (char)((uint)uVar12 >> 0x18);
                  local_10[1] = (char)((uint)uVar12 >> 0x10);
                  local_10[2] = (char)((uint)uVar12 >> 8);
                  do {
                    iVar3 = (int)lVar10;
                    pcVar5 = (char *)FUN_05474ee8((rbtree_iterator *)&local_20,lVar10);
                    if (*pcVar5 != local_10[lVar10]) break;
                    iVar3 = iVar3 + 1;
                    lVar10 = lVar10 + 1;
                  } while ((int)lVar10 < iVar11);
                  lVar13 = lVar13 + 1;
                  if (iVar3 == iVar11) goto LAB_0519c0d4;
                  uVar9 = *(undefined8 *)(lVar4 + 0x30);
                  iVar3 = FUN_05194934(uVar9,*(undefined8 *)(lVar4 + 0x38));
                } while ((int)lVar13 < iVar3);
              }
              iVar11 = iVar11 + -1;
            } while (iVar11 != 1);
          }
        }
        uVar12 = 0x454e5553;
LAB_0519c0d4:
        std::string::~string((string *)&local_20);
        goto LAB_0519c13c;
      }
    }
    else {
      local_20 = std::
                 map<std::string,Sexy::ResGenInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::ResGenInfo>>>
                 ::begin(ResourceManagerInfo::sInstance);
      while( true ) {
        local_18 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)ResourceManagerInfo::sInstance);
        bVar1 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18);
        if (!bVar1) break;
        lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
        cVar2 = std::vector<unsigned_int,std::allocator<unsigned_int>>::empty
                          ((vector<unsigned_int,std::allocator<unsigned_int>> *)(lVar4 + 0x30));
        if (cVar2 == '\0') goto LAB_0519bf70;
        std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
      }
    }
  }
  uVar12 = 0x454e5553;
LAB_0519c13c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar12);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::GetResInfoForStringId(Sexy::ResourceInfoClass*, std::string const&) */

void __thiscall
Sexy::ResourceManager::GetResInfoForStringId
          (ResourceManager *this,ResourceInfoClass *param_1,string *param_2)

{
  ResourceManager *pRVar1;
  map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
  *this_00;
  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>> *pmVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  string asStack_28 [8];
  ulong local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  pRVar1 = this + 0xb8;
  local_8 = ___stack_chk_guard;
  cVar3 = FUN_0547419c(pRVar1);
  if ((cVar3 != '\0') || (*(int *)(this + 0x208) != *(int *)(this + 0xb0))) {
    *(int *)(this + 0xb0) = *(int *)(this + 0x208);
    StrFormat("|%d",(string *)&local_10);
    FUN_05474278(pRVar1,(string *)&local_10);
    std::string::~string((string *)&local_10);
    StrFormat("||%8x",(string *)&local_10,(ulong)*(uint *)(this + 0x20c));
    FUN_05474278(this + 0xc0,(string *)&local_10);
    std::string::~string((string *)&local_10);
    StrFormat("|%d||%8x",(string *)&local_10,(ulong)*(uint *)(this + 0x208),
              (ulong)*(uint *)(this + 0x20c));
    FUN_05474278(this + 200,(string *)&local_10);
    std::string::~string((string *)&local_10);
  }
  FUN_031f5e7c(asStack_28,"CFDLC_",param_2);
  if (param_1 == (ResourceInfoClass *)0x0) {
    lVar8 = 0;
    do {
      uVar6 = *(undefined8 *)(this + 8);
      iVar5 = FUN_05194940(uVar6,*(undefined8 *)(this + 0x10));
      if (iVar5 <= (int)lVar8) goto LAB_0519d0b4;
      plVar7 = (long *)FUN_0519494c(uVar6,lVar8);
      pmVar2 = (map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)(*plVar7 + 0x68);
      FUN_031dcc6c((string *)&local_10,asStack_28,this + 200);
      uVar6 = FUN_0547429c((string *)&local_10);
      local_20 = EA::StdC::FNV64_String8(uVar6,0xcbf29ce484222325,0);
      std::string::~string((string *)&local_10);
      local_18 = std::
                 map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
                 ::find((map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
                         *)pmVar2,&local_20);
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end(pmVar2);
      cVar3 = std::__exception_ptr::operator==
                        ((exception_ptr *)&local_18,(exception_ptr *)&local_10);
      if (cVar3 == '\0') {
        local_10 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end(pmVar2);
        cVar3 = std::__exception_ptr::operator==
                          ((exception_ptr *)&local_18,(exception_ptr *)&local_10);
        if (cVar3 != '\0') goto LAB_0519cff0;
LAB_0519cea8:
        local_10 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end(pmVar2);
        cVar3 = std::__exception_ptr::operator==
                          ((exception_ptr *)&local_18,(exception_ptr *)&local_10);
      }
      else {
        FUN_031dcc6c((string *)&local_10,asStack_28,pRVar1);
        uVar6 = FUN_0547429c((string *)&local_10);
        local_20 = EA::StdC::FNV64_String8(uVar6,0xcbf29ce484222325,0);
        std::string::~string((string *)&local_10);
        local_18 = std::
                   map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
                   ::find((map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
                           *)pmVar2,&local_20);
        local_10 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end(pmVar2);
        cVar3 = std::__exception_ptr::operator==
                          ((exception_ptr *)&local_18,(exception_ptr *)&local_10);
        if (cVar3 == '\0') goto LAB_0519cea8;
LAB_0519cff0:
        FUN_031dcc6c((string *)&local_10,asStack_28,this + 0xc0);
        uVar6 = FUN_0547429c((string *)&local_10);
        local_20 = EA::StdC::FNV64_String8(uVar6,0xcbf29ce484222325,0);
        std::string::~string((string *)&local_10);
        local_18 = std::
                   map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
                   ::find((map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
                           *)pmVar2,&local_20);
        local_10 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end(pmVar2);
        cVar3 = std::__exception_ptr::operator==
                          ((exception_ptr *)&local_18,(exception_ptr *)&local_10);
      }
      if (cVar3 != '\0') {
        uVar6 = FUN_0547429c(asStack_28);
        local_20 = EA::StdC::FNV64_String8(uVar6,0xcbf29ce484222325,0);
        local_18 = std::
                   map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
                   ::find((map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
                           *)pmVar2,&local_20);
      }
      lVar8 = lVar8 + 1;
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end(pmVar2);
      bVar4 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    } while (!bVar4);
    lVar8 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    lVar8 = *(long *)(lVar8 + 8);
    if (lVar8 == 0) {
      uVar6 = *(undefined8 *)(this + 8);
      iVar5 = FUN_05194940(uVar6,*(undefined8 *)(this + 0x10));
LAB_0519d0b4:
      lVar8 = 0;
      while ((int)lVar8 < iVar5) {
        plVar7 = (long *)FUN_0519494c(uVar6,lVar8);
        pmVar2 = (map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)(*plVar7 + 0x68);
        FUN_031dcc6c((string *)&local_10,param_2,this + 200);
        uVar6 = FUN_0547429c((string *)&local_10);
        local_20 = EA::StdC::FNV64_String8(uVar6,0xcbf29ce484222325,0);
        std::string::~string((string *)&local_10);
        local_18 = std::
                   map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
                   ::find((map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
                           *)pmVar2,&local_20);
        local_10 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end(pmVar2);
        cVar3 = std::__exception_ptr::operator==
                          ((exception_ptr *)&local_18,(exception_ptr *)&local_10);
        if (cVar3 == '\0') {
          local_10 = std::
                     map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::end(pmVar2);
          cVar3 = std::__exception_ptr::operator==
                            ((exception_ptr *)&local_18,(exception_ptr *)&local_10);
          if (cVar3 != '\0') goto LAB_0519d240;
LAB_0519d0f8:
          local_10 = std::
                     map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::end(pmVar2);
          cVar3 = std::__exception_ptr::operator==
                            ((exception_ptr *)&local_18,(exception_ptr *)&local_10);
        }
        else {
          FUN_031dcc6c((string *)&local_10,param_2,pRVar1);
          uVar6 = FUN_0547429c((string *)&local_10);
          local_20 = EA::StdC::FNV64_String8(uVar6,0xcbf29ce484222325,0);
          std::string::~string((string *)&local_10);
          local_18 = std::
                     map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
                     ::find((map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
                             *)pmVar2,&local_20);
          local_10 = std::
                     map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::end(pmVar2);
          cVar3 = std::__exception_ptr::operator==
                            ((exception_ptr *)&local_18,(exception_ptr *)&local_10);
          if (cVar3 == '\0') goto LAB_0519d0f8;
LAB_0519d240:
          FUN_031dcc6c((string *)&local_10,param_2,this + 0xc0);
          uVar6 = FUN_0547429c((string *)&local_10);
          local_20 = EA::StdC::FNV64_String8(uVar6,0xcbf29ce484222325,0);
          std::string::~string((string *)&local_10);
          local_18 = std::
                     map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
                     ::find((map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
                             *)pmVar2,&local_20);
          local_10 = std::
                     map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::end(pmVar2);
          cVar3 = std::__exception_ptr::operator==
                            ((exception_ptr *)&local_18,(exception_ptr *)&local_10);
        }
        if (cVar3 != '\0') {
          uVar6 = FUN_0547429c(param_2);
          local_20 = EA::StdC::FNV64_String8(uVar6,0xcbf29ce484222325,0);
          local_18 = std::
                     map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
                     ::find((map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
                             *)pmVar2,&local_20);
        }
        lVar8 = lVar8 + 1;
        local_10 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end(pmVar2);
        bVar4 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
        if (bVar4) {
          lVar8 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                            ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
          lVar8 = *(long *)(lVar8 + 8);
          goto LAB_0519ccf0;
        }
        uVar6 = *(undefined8 *)(this + 8);
        iVar5 = FUN_05194940(uVar6,*(undefined8 *)(this + 0x10));
      }
      lVar8 = 0;
    }
    goto LAB_0519ccf0;
  }
  this_00 = (map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
             *)(param_1 + 0x68);
  FUN_031dcc6c((string *)&local_10,asStack_28,this + 200);
  uVar6 = FUN_0547429c((string *)&local_10);
  local_20 = EA::StdC::FNV64_String8(uVar6,0xcbf29ce484222325,0);
  std::string::~string((string *)&local_10);
  local_18 = std::
             map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
             ::find(this_00,&local_20);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  cVar3 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar3 == '\0') {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    cVar3 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
    if (cVar3 != '\0') goto LAB_0519cd8c;
LAB_0519cbc0:
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    cVar3 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
    if (cVar3 != '\0') goto LAB_0519cd34;
LAB_0519cbe0:
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    cVar3 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  }
  else {
    FUN_031dcc6c((string *)&local_10,asStack_28,pRVar1);
    uVar6 = FUN_0547429c((string *)&local_10);
    local_20 = EA::StdC::FNV64_String8(uVar6,0xcbf29ce484222325,0);
    std::string::~string((string *)&local_10);
    local_18 = std::
               map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
               ::find(this_00,&local_20);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    cVar3 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
    if (cVar3 == '\0') goto LAB_0519cbc0;
LAB_0519cd8c:
    FUN_031dcc6c((string *)&local_10,asStack_28,this + 0xc0);
    uVar6 = FUN_0547429c((string *)&local_10);
    local_20 = EA::StdC::FNV64_String8(uVar6,0xcbf29ce484222325,0);
    std::string::~string((string *)&local_10);
    local_18 = std::
               map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
               ::find(this_00,&local_20);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    cVar3 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
    if (cVar3 == '\0') goto LAB_0519cbe0;
LAB_0519cd34:
    uVar6 = FUN_0547429c(asStack_28);
    local_20 = EA::StdC::FNV64_String8(uVar6,0xcbf29ce484222325,0);
    local_18 = std::
               map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
               ::find(this_00,&local_20);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    cVar3 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  }
  if (cVar3 == '\0') {
    lVar8 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    lVar8 = *(long *)(lVar8 + 8);
    if (lVar8 != 0) goto LAB_0519ccf0;
  }
  FUN_031dcc6c((string *)&local_10,param_2,this + 200);
  uVar6 = FUN_0547429c((string *)&local_10);
  local_20 = EA::StdC::FNV64_String8(uVar6,0xcbf29ce484222325,0);
  std::string::~string((string *)&local_10);
  local_18 = std::
             map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
             ::find(this_00,&local_20);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  cVar3 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar3 != '\0') {
    FUN_031dcc6c((string *)&local_10,param_2,pRVar1);
    uVar6 = FUN_0547429c((string *)&local_10);
    local_20 = EA::StdC::FNV64_String8(uVar6,0xcbf29ce484222325,0);
    std::string::~string((string *)&local_10);
    local_18 = std::
               map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
               ::find(this_00,&local_20);
  }
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  cVar3 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar3 != '\0') {
    FUN_031dcc6c((string *)&local_10,param_2,this + 0xc0);
    uVar6 = FUN_0547429c((string *)&local_10);
    local_20 = EA::StdC::FNV64_String8(uVar6,0xcbf29ce484222325,0);
    std::string::~string((string *)&local_10);
    local_18 = std::
               map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
               ::find(this_00,&local_20);
  }
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  cVar3 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar3 != '\0') {
    uVar6 = FUN_0547429c(param_2);
    local_20 = EA::StdC::FNV64_String8(uVar6,0xcbf29ce484222325,0);
    local_18 = std::
               map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
               ::find(this_00,&local_20);
  }
  lVar8 = 0;
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  cVar3 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar3 == '\0') {
    lVar8 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    lVar8 = *(long *)(lVar8 + 8);
  }
LAB_0519ccf0:
  std::string::~string(asStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar8);
  }
  return;
}


/* Sexy::Font::InfoClass* Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Font>(std::string
   const&) */

InfoClass * __thiscall
Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Font>(ResourceManager *this,string *param_1)

{
  ResourceInfoClass *pRVar1;
  InfoClass *pIVar2;
  
  pRVar1 = (ResourceInfoClass *)ResourceInfoTypes::FontRes::StaticGetClass();
  pIVar2 = (InfoClass *)GetResInfoForStringId(this,pRVar1,param_1);
  return pIVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::GetResourceForStringId(Sexy::ResourceInfoClass*, std::string const&, bool)
    */

void Sexy::ResourceManager::GetResourceForStringId
               (ResourceInfoClass *param_1,string *param_2,bool param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  _func_void *extraout_x1;
  _func_void *extraout_x1_00;
  _func_void *extraout_x1_01;
  _func_void *p_Var8;
  string *psVar9;
  char in_w3;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  long lVar10;
  undefined1 auVar11 [16];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtId aRStack_10 [8];
  _func_void *local_8;
  
  psVar9 = (string *)(ulong)param_3;
  local_8 = ___stack_chk_guard;
  p_Var8 = ___stack_chk_guard;
  if ((*(char *)(gSexyAppBase + 0x3ad) == '\0') &&
     (cVar1 = FUN_0547419c(psVar9), p_Var8 = extraout_x1, cVar1 == '\0')) {
    if (param_2 == (string *)0x0) {
      lVar10 = 0;
      do {
        uVar5 = *(undefined8 *)(param_1 + 8);
        iVar3 = FUN_05194940(uVar5,*(undefined8 *)(param_1 + 0x10));
        if (iVar3 <= (int)lVar10) {
          p_Var8 = extraout_x1_01;
          if (in_w3 != '\0') goto LAB_0519d944;
          pcVar4 = "Unknown-type";
          goto LAB_0519d8bc;
        }
        puVar6 = (undefined8 *)FUN_0519494c(uVar5,lVar10);
        lVar7 = GetResInfoForStringId
                          ((ResourceManager *)param_1,(ResourceInfoClass *)*puVar6,psVar9);
        lVar10 = lVar10 + 1;
      } while (lVar7 == 0);
      if (in_w3 == '\0') {
LAB_0519d870:
        ResourceInfo::GetInstanceRtId();
        RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
        RtId::~RtId(aRStack_10);
        bVar2 = RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
        if (bVar2) {
          RtMixedPtrBase::GetId();
          RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
          RtId::~RtId(aRStack_10);
          RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          goto LAB_0519d838;
        }
        RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        if (param_2 != (string *)0x0) goto LAB_0519d8b0;
        pcVar4 = "Unknown-type";
        goto LAB_0519d8bc;
      }
    }
    else {
      auVar11 = GetResInfoForStringId
                          ((ResourceManager *)param_1,(ResourceInfoClass *)param_2,psVar9);
      p_Var8 = auVar11._8_8_;
      if (in_w3 == '\0') {
        if (auVar11._0_8_ != 0) goto LAB_0519d870;
LAB_0519d8b0:
        pcVar4 = (char *)FUN_051948e0(*(undefined8 *)(param_2 + 8));
LAB_0519d8bc:
        uVar5 = FUN_0547429c(psVar9);
        StrFormat("%s resource not found: %s",(string *)aRStack_10,pcVar4,uVar5);
        Fail((ResourceManager *)param_1,(string *)aRStack_10);
        std::string::~string((string *)aRStack_10);
        p_Var8 = extraout_x1_00;
        goto LAB_0519d944;
      }
      if (auVar11._0_8_ == 0) goto LAB_0519d944;
    }
    ResourceInfo::GetInstanceRtId();
  }
  else {
LAB_0519d944:
    std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)aRStack_10,p_Var8);
  }
  RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  RtId::~RtId(aRStack_10);
LAB_0519d838:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::ReplaceResource(Sexy::ResourceInfoClass*, std::string const&,
   Sexy::BaseResource*) */

void __thiscall
Sexy::ResourceManager::ReplaceResource
          (ResourceManager *this,ResourceInfoClass *param_1,string *param_2,BaseResource *param_3)

{
  ResourceInfo *this_00;
  RtDb *pRVar1;
  undefined8 uVar2;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ResourceInfo *)GetResInfoForStringId(this,param_1,param_2);
  if (this_00 == (ResourceInfo *)0x0) {
    uVar2 = 0;
  }
  else {
    RtId::RtId(aRStack_10,(RtId *)(this_00 + 0x20));
    ResourceInfo::DeleteResource(this_00);
    if (param_3 != (BaseResource *)0x0) {
      RtId::operator=((RtId *)(this_00 + 0x20),aRStack_10);
      pRVar1 = (RtDb *)RtDb::GetDb();
      RtDb::ReplaceObjectForId(pRVar1,aRStack_10,(RtObject *)param_3);
      pRVar1 = (RtDb *)RtDb::GetDb();
      RtDb::SetObjectDeletionMode(pRVar1,aRStack_10,0);
    }
    RtId::~RtId(aRStack_10);
    uVar2 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::GetResInfoForPath(Sexy::ResourceInfoClass*, std::string const&) */

void __thiscall
Sexy::ResourceManager::GetResInfoForPath
          (ResourceManager *this,ResourceInfoClass *param_1,string *param_2)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  string asStack_28 [8];
  ulong local_20;
  undefined8 local_18;
  undefined8 local_10;
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Upper((Sexy *)param_2,___stack_chk_guard);
  iVar4 = FUN_05474184(asStack_28);
  lVar8 = 0;
  if (0 < iVar4) {
    do {
      while (pcVar5 = (char *)FUN_05474ee8(asStack_28,lVar8), *pcVar5 == '/') {
        lVar1 = lVar8 + 1;
        puVar6 = (undefined1 *)FUN_05474ee8(asStack_28,lVar8);
        *puVar6 = 0x5c;
        lVar8 = lVar1;
        if (iVar4 <= (int)lVar1) goto LAB_0519db00;
      }
      lVar8 = lVar8 + 1;
    } while ((int)lVar8 < iVar4);
  }
LAB_0519db00:
  uVar7 = FUN_0547429c(asStack_28);
  local_20 = EA::StdC::FNV64_String8(uVar7,0xcbf29ce484222325,0);
  local_18 = std::
             map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
             ::find((map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
                     *)(this + 0x50),&local_20);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x50));
  bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar2) {
    lVar8 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    plVar9 = *(long **)(lVar8 + 8);
    if ((param_1 == (ResourceInfoClass *)0x0) ||
       (cVar3 = (**(code **)(*plVar9 + 0x20))(plVar9,param_1), cVar3 != '\0')) goto LAB_0519db88;
  }
  plVar9 = (long *)0x0;
LAB_0519db88:
  std::string::~string(asStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar9);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::GetResourceForPath(Sexy::ResourceInfoClass*, std::string const&, bool) */

void Sexy::ResourceManager::GetResourceForPath
               (ResourceInfoClass *param_1,string *param_2,bool param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  string *extraout_x1;
  string *psVar7;
  string *extraout_x1_00;
  string *psVar8;
  char in_w3;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  long lVar9;
  undefined1 auVar10 [16];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtId aRStack_10 [8];
  long local_8;
  
  psVar8 = (string *)(ulong)param_3;
  local_8 = ___stack_chk_guard;
  psVar7 = param_2;
  if (*(char *)(gSexyAppBase + 0x3ad) == '\0') {
    if (param_2 == (string *)0x0) {
      lVar9 = 0;
      do {
        uVar4 = *(undefined8 *)(param_1 + 8);
        iVar2 = FUN_05194940(uVar4,*(undefined8 *)(param_1 + 0x10));
        if (iVar2 <= (int)lVar9) {
          psVar7 = extraout_x1_00;
          if (in_w3 != '\0') goto LAB_0519dd08;
          pcVar3 = "Unknown-type";
          goto LAB_0519dcd0;
        }
        puVar5 = (undefined8 *)FUN_0519494c(uVar4,lVar9);
        lVar6 = GetResInfoForPath((ResourceManager *)param_1,(ResourceInfoClass *)*puVar5,psVar8);
        lVar9 = lVar9 + 1;
      } while (lVar6 == 0);
      if (in_w3 == '\0') {
LAB_0519dc84:
        ResourceInfo::GetInstanceRtId();
        RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
        RtId::~RtId(aRStack_10);
        bVar1 = RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
        if (bVar1) {
          RtMixedPtrBase::GetId();
          RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
          RtId::~RtId(aRStack_10);
          RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          goto LAB_0519dc4c;
        }
        RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        if (param_2 != (string *)0x0) goto LAB_0519dcc4;
        pcVar3 = "Unknown-type";
        goto LAB_0519dcd0;
      }
    }
    else {
      auVar10 = GetResInfoForPath((ResourceManager *)param_1,(ResourceInfoClass *)param_2,psVar8);
      psVar7 = auVar10._8_8_;
      if (in_w3 == '\0') {
        if (auVar10._0_8_ != 0) goto LAB_0519dc84;
LAB_0519dcc4:
        pcVar3 = (char *)FUN_051948e0(*(undefined8 *)(param_2 + 8));
LAB_0519dcd0:
        uVar4 = FUN_0547429c(psVar8);
        StrFormat("%s resource not found for path: %s",(string *)aRStack_10,pcVar3,uVar4);
        Fail((ResourceManager *)param_1,(string *)aRStack_10);
        std::string::~string((string *)aRStack_10);
        psVar7 = extraout_x1;
        goto LAB_0519dd08;
      }
      if (auVar10._0_8_ == 0) goto LAB_0519dd08;
    }
    ResourceInfo::GetInstanceRtId();
  }
  else {
LAB_0519dd08:
    std::__exception_ptr::exception_ptr::exception_ptr
              ((exception_ptr *)aRStack_10,(_func_void *)psVar7);
  }
  RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  RtId::~RtId(aRStack_10);
LAB_0519dc4c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::SetSoundBankInvaild() */

void Sexy::ResourceManager::SetSoundBankInvaild(void)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long *extraout_x0;
  long *plVar4;
  undefined8 local_48;
  undefined8 local_40;
  map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = ResourceInfoTypes::SoundBankRes::StaticGetClass();
  std::
  map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
  ::map(amStack_38,(map *)(lVar3 + 0x68));
  local_48 = std::
             map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
             ::begin(amStack_38);
  while( true ) {
    local_40 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)amStack_38);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40);
    if (!bVar1) break;
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
    if (((*(long *)(lVar3 + 8) != 0) && (nop(), extraout_x0 != (long *)0x0)) &&
       (cVar2 = (**(code **)(*extraout_x0 + 0x50))(), cVar2 != '\0')) {
      ResourceInfoTypes::FontRes::GetFont();
      plVar4 = (long *)RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      (**(code **)(*plVar4 + 0x70))();
      RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    }
    FUN_05194998((rbtree_iterator *)&local_48);
  }
  std::
  map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
  ::~map(amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::RemoveUngroupedSharedImage(Sexy::Image*) */

void __thiscall
Sexy::ResourceManager::RemoveUngroupedSharedImage(ResourceManager *this,Image *param_1)

{
  map<std::pair<std::string,std::string>,Sexy::RtId,std::less<std::pair<std::string,std::string>>,std::allocator<std::pair<std::pair<std::string,std::string>const,Sexy::RtId>>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  string *extraout_x1;
  AutoCrit aAStack_38 [8];
  string asStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  pair<std::string,std::string> apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (map<std::pair<std::string,std::string>,Sexy::RtId,std::less<std::pair<std::string,std::string>>,std::allocator<std::pair<std::pair<std::string,std::string>const,Sexy::RtId>>>
             *)(this + 0xd0);
  AutoCrit::AutoCrit(aAStack_38,(CritSect *)(gSexyAppBase + 0x10c));
  StringToUpper((Sexy *)(param_1 + 0x30),extraout_x1);
  std::pair<std::string,std::string>::pair<std::string&,char_const(&)[1],void>
            (apStack_18,asStack_30,"");
  local_28 = std::
             map<std::pair<std::string,std::string>,Sexy::RtId,std::less<std::pair<std::string,std::string>>,std::allocator<std::pair<std::pair<std::string,std::string>const,Sexy::RtId>>>
             ::find(this_00,(pair *)apStack_18);
  local_20 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_20);
  if (bVar1) {
    std::
    map<std::pair<std::string,std::string>,Sexy::RtId,std::less<std::pair<std::string,std::string>>,std::allocator<std::pair<std::pair<std::string,std::string>const,Sexy::RtId>>>
    ::erase_abi_cxx11_(this_00,local_28);
  }
  else {
    uVar2 = FUN_0547429c(asStack_30);
    OutputDebugStrF((wchar_t *)
                    "ResourceManager::RemoveUngroupedSharedImage: Image not found in ungrouped image map: %s\n"
                    ,uVar2);
  }
  PACommand::~PACommand((PACommand *)apStack_18);
  std::string::~string(asStack_30);
  AutoCrit::~AutoCrit(aAStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::GetImage(Sexy::RtMixedPtr<Sexy::Image>&, std::string const&,
   Sexy::ResourceManager::GetImageOptions const*, bool*) */

void __thiscall
Sexy::ResourceManager::GetImage
          (ResourceManager *this,RtMixedPtr *param_1,string *param_2,GetImageOptions *param_3,
          bool *param_4)

{
  CompiledMap *this_00;
  map<std::pair<std::string,std::string>,Sexy::RtId,std::less<std::pair<std::string,std::string>>,std::allocator<std::pair<std::pair<std::string,std::string>const,Sexy::RtId>>>
  *this_01;
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  InfoClass *pIVar5;
  long lVar6;
  DeviceImage *this_02;
  RtId *this_03;
  char *pcVar7;
  _func_void *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  exception_ptr eVar8;
  string asStack_78 [8];
  AutoCrit aAStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  undefined8 local_58;
  pair<std::string,std::string> apStack_50 [16];
  undefined8 local_40 [2];
  exception_ptr local_30 [40];
  _func_void *local_8;
  
  local_8 = ___stack_chk_guard;
  std::__exception_ptr::exception_ptr::exception_ptr(local_30,___stack_chk_guard);
  RtMixedPtrBase::SetId((RtMixedPtrBase *)param_1,(RtId *)local_30,false);
  RtId::~RtId((RtId *)local_30);
  GetImageOptions::GetImageOptions((GetImageOptions *)local_30);
  if (param_3 == (GetImageOptions *)0x0) {
    param_3 = (GetImageOptions *)local_30;
  }
  this_01 = (map<std::pair<std::string,std::string>,Sexy::RtId,std::less<std::pair<std::string,std::string>>,std::allocator<std::pair<std::pair<std::string,std::string>const,Sexy::RtId>>>
             *)(this + 0xd0);
  if (*(long *)(param_3 + 0x10) != 0) {
    this_01 = (map<std::pair<std::string,std::string>,Sexy::RtId,std::less<std::pair<std::string,std::string>>,std::allocator<std::pair<std::pair<std::string,std::string>const,Sexy::RtId>>>
               *)(*(long *)(param_3 + 0x10) + 0x78);
  }
  Set8BytesTo0(asStack_78);
  iVar4 = FUN_054743b0(param_2,0x7c,0);
  if (iVar4 == -1) {
    thunk_FUN_05475e00(asStack_78,param_2);
    eVar8 = *(exception_ptr *)(param_3 + 3);
    std::pair<std::string,std::string>::pair(apStack_50);
    if (eVar8 != (exception_ptr)0x0) goto LAB_0519fe00;
LAB_0519ff04:
    AutoCrit::AutoCrit(aAStack_70,(CritSect *)(gSexyAppBase + 0x10c));
    StringToUpper((Sexy *)asStack_78,extraout_x1_00);
    StringToUpper((Sexy *)(param_3 + 0x20),extraout_x1_01);
    std::pair<std::string_const,std::string>::pair<std::string&,std::string&,void>
              ((pair<std::string_const,std::string> *)local_40,asStack_68,asStack_60);
    std::pair<std::string,std::string>::operator=(apStack_50,(pair *)local_40);
    PACommand::~PACommand((PACommand *)local_40);
    local_58 = std::
               map<std::pair<std::string,std::string>,Sexy::RtId,std::less<std::pair<std::string,std::string>>,std::allocator<std::pair<std::pair<std::string,std::string>const,Sexy::RtId>>>
               ::find(this_01,(pair *)apStack_50);
    local_40[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this_01);
    bVar3 = eastl::operator!=((rbtree_iterator *)&local_58,(rbtree_iterator *)local_40);
    if (bVar3) {
      if (param_4 != (bool *)0x0) {
        *param_4 = (bool)eVar8;
      }
      lVar6 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_58);
      RtMixedPtrBase::SetId
                ((RtMixedPtrBase *)param_1,(RtId *)(lVar6 + 0x10),
                 this_01 ==
                 (map<std::pair<std::string,std::string>,Sexy::RtId,std::less<std::pair<std::string,std::string>>,std::allocator<std::pair<std::pair<std::string,std::string>const,Sexy::RtId>>>
                  *)(this + 0xd0));
LAB_0519ffd8:
      std::string::~string(asStack_60);
      std::string::~string(asStack_68);
      AutoCrit::~AutoCrit(aAStack_70);
      PACommand::~PACommand((PACommand *)apStack_50);
      goto LAB_0519fd7c;
    }
    if (param_4 != (bool *)0x0) {
      *param_4 = true;
    }
    if (*(exception_ptr *)param_3 != (exception_ptr)0x0) goto LAB_0519ffd8;
    std::string::~string(asStack_60);
    std::string::~string(asStack_68);
    AutoCrit::~AutoCrit(aAStack_70);
LAB_0519fe18:
    lVar6 = FUN_05474184(asStack_78);
    if ((lVar6 == 0) || (pcVar7 = (char *)FUN_05474ee8(asStack_78,0), *pcVar7 != '!')) {
      if (*(exception_ptr *)(param_3 + 2) == (exception_ptr)0x0) {
        this_02 = (DeviceImage *)
                  BuildImage(this,asStack_78,false,(bool)*(exception_ptr *)(param_3 + 1));
        if (this_02 == (DeviceImage *)0x0) goto LAB_0519fed8;
      }
      else {
        this_02 = ::operator_new(0x160);
        DeviceImage::DeviceImage(this_02,gSexyAppBase);
        FUN_05194904(this_02 + 0x18,0x80);
        uVar1 = *(undefined4 *)(param_3 + 0x18);
        *(undefined4 *)(this_02 + 0x3c) = *(undefined4 *)(param_3 + 0x1c);
        *(undefined4 *)(this_02 + 0x38) = uVar1;
        thunk_FUN_05475e00(this_02 + 0x30,asStack_78);
      }
    }
    else {
      this_02 = ::operator_new(0x160);
      DeviceImage::DeviceImage(this_02,gSexyAppBase);
      FUN_05194904(this_02 + 0x18,0x80);
      if (eVar8 == (exception_ptr)0x0) {
        thunk_FUN_05475e00(this_02 + 0x30,asStack_78);
      }
    }
    this_00 = (CompiledMap *)(param_3 + 8);
    cVar2 = CompiledMap::Initialized(this_00);
    if (cVar2 == '\0') {
      std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_58,extraout_x1);
      RegisterResourceInternal((RtId *)local_40,this,param_1,this_02,(exception_ptr *)&local_58,3);
      RtId::~RtId((RtId *)local_40);
      RtId::~RtId((RtId *)&local_58);
    }
    else {
      iVar4 = RtId::GetTableIndex((RtId *)this_00);
      if (iVar4 == 0x2004) {
        RegisterResourceInternal((RtId *)local_40,this,param_1,this_02,this_00,1);
        RtId::~RtId((RtId *)local_40);
      }
      else {
        RegisterResourceInternal((RtId *)local_40,this,param_1,this_02,this_00,2);
        RtId::~RtId((RtId *)local_40);
      }
    }
    if (eVar8 == (exception_ptr)0x0) {
      this_03 = (RtId *)std::
                        map<std::pair<std::string,std::string>,Sexy::RtId,std::less<std::pair<std::string,std::string>>,std::allocator<std::pair<std::pair<std::string,std::string>const,Sexy::RtId>>>
                        ::operator[](this_01,(pair *)apStack_50);
      RtMixedPtrBase::GetId();
      RtId::operator=(this_03,(RtId *)local_40);
      RtId::~RtId((RtId *)local_40);
      if (this_01 ==
          (map<std::pair<std::string,std::string>,Sexy::RtId,std::less<std::pair<std::string,std::string>>,std::allocator<std::pair<std::pair<std::string,std::string>const,Sexy::RtId>>>
           *)(this + 0xd0)) {
        FUN_05194904(this_02 + 0x18,0x400);
      }
    }
  }
  else {
    FUN_05475ffc((string *)local_40,param_2,(long)(iVar4 + 1),0xffffffffffffffff);
    pIVar5 = GetResInfoForStringIdT<Sexy::Image>(this,(string *)local_40);
    std::string::~string((string *)local_40);
    if ((pIVar5 != (InfoClass *)0x0) && (lVar6 = ResourceInfo::GetInstancePtr(), lVar6 != 0)) {
      ResourceInfo::GetInstanceRtId();
      RtMixedPtrBase::SetId((RtMixedPtrBase *)param_1,(RtId *)local_40,false);
      RtId::~RtId((RtId *)local_40);
      goto LAB_0519fd7c;
    }
    FUN_05475ffc((string *)local_40,param_2,0,(long)iVar4);
    FUN_05474278(asStack_78,(string *)local_40);
    std::string::~string((string *)local_40);
    eVar8 = *(exception_ptr *)(param_3 + 3);
    std::pair<std::string,std::string>::pair(apStack_50);
    if (eVar8 == (exception_ptr)0x0) goto LAB_0519ff04;
LAB_0519fe00:
    if (param_4 != (bool *)0x0) {
      *param_4 = true;
    }
    if (*(exception_ptr *)param_3 == (exception_ptr)0x0) goto LAB_0519fe18;
  }
LAB_0519fed8:
  PACommand::~PACommand((PACommand *)apStack_50);
LAB_0519fd7c:
  std::string::~string(asStack_78);
  GetImageOptions::~GetImageOptions((GetImageOptions *)local_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::~ResourceManager() */

void __thiscall Sexy::ResourceManager::~ResourceManager(ResourceManager *this)

{
  bool bVar1;
  int iVar2;
  IteratorStorage *pIVar3;
  ResourceInfo *this_00;
  long *plVar4;
  int extraout_w1;
  int extraout_w1_00;
  RtDbTable *pRVar5;
  undefined8 uVar6;
  long lVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  pRVar5 = *(RtDbTable **)(this + 0x80);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__ResourceManager_06a30180;
  pIVar3 = (IteratorStorage *)RtDbTable::GetSharedIteratorStorage(pRVar5);
  RtDbTable::Iterator::Iterator(aIStack_28,pRVar5,pIVar3);
  while (bVar1 = RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    RtDbTable::Iterator::operator*(aIStack_28);
    RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    this_00 = RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_38);
    RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    RtId::~RtId(aRStack_30);
    ResourceGroup::Unload((ResourceGroup *)this_00);
    RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar6 = *(undefined8 *)(this + 8);
  iVar2 = FUN_05194940(uVar6,*(undefined8 *)(this + 0x10));
  if (0 < iVar2) {
    lVar7 = 0;
    while( true ) {
      plVar4 = (long *)FUN_0519494c(uVar6,lVar7);
      std::
      map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
      ::clear((map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
               *)(*plVar4 + 0x68));
      if (iVar2 <= (int)(lVar7 + 1)) break;
      uVar6 = *(undefined8 *)(this + 8);
      lVar7 = lVar7 + 1;
    }
  }
  std::
  map<std::pair<std::string,std::string>,Sexy::RtId,std::less<std::pair<std::string,std::string>>,std::allocator<std::pair<std::pair<std::string,std::string>const,Sexy::RtId>>>
  ::clear((map<std::pair<std::string,std::string>,Sexy::RtId,std::less<std::pair<std::string,std::string>>,std::allocator<std::pair<std::pair<std::string,std::string>const,Sexy::RtId>>>
           *)(this + 0xd0));
  pRVar5 = *(RtDbTable **)(this + 0x98);
  if (pRVar5 != (RtDbTable *)0x0) {
    RtDbTable::~RtDbTable(pRVar5);
    AK::FreeHook(pRVar5);
  }
  pRVar5 = *(RtDbTable **)(this + 0xa0);
  if (pRVar5 != (RtDbTable *)0x0) {
    RtDbTable::~RtDbTable(pRVar5);
    AK::FreeHook(pRVar5);
  }
  pRVar5 = *(RtDbTable **)(this + 0x88);
  if (pRVar5 != (RtDbTable *)0x0) {
    RtDbTable::~RtDbTable(pRVar5);
    AK::FreeHook(pRVar5);
  }
  pRVar5 = *(RtDbTable **)(this + 0x90);
  if (pRVar5 != (RtDbTable *)0x0) {
    RtDbTable::~RtDbTable(pRVar5);
    AK::FreeHook(pRVar5);
  }
  pRVar5 = *(RtDbTable **)(this + 0x80);
  if (pRVar5 != (RtDbTable *)0x0) {
    RtDbTable::~RtDbTable(pRVar5);
    AK::FreeHook(pRVar5);
  }
  pRVar5 = *(RtDbTable **)(this + 0xa8);
  pIVar3 = (IteratorStorage *)RtDbTable::GetSharedIteratorStorage(pRVar5);
  RtDbTable::Iterator::Iterator(aIStack_28,pRVar5,pIVar3);
  while (bVar1 = RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    RtDbTable::Iterator::operator*(aIStack_28);
    RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_30);
    RtId::~RtId(aRStack_30);
    RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_40);
    Set8BytesTo0((string *)aRStack_38);
    RtMixedPtrBase::GetId();
    RtId::ToString(aRStack_30,(string *)aRStack_38,true);
    RtId::~RtId(aRStack_30);
    std::string::~string((string *)aRStack_38);
    RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    RtDbTable::Iterator::operator++(aIStack_28,extraout_w1_00);
  }
  RtDbTable::Iterator::~Iterator(aIStack_28);
  pRVar5 = *(RtDbTable **)(this + 0xa8);
  if (pRVar5 != (RtDbTable *)0x0) {
    RtDbTable::~RtDbTable(pRVar5);
    AK::FreeHook(pRVar5);
  }
  EA::Thread::Mutex::~Mutex((Mutex *)(this + 0x1d0));
  EA::Thread::Mutex::~Mutex((Mutex *)(this + 0x1a8));
  std::string::~string((string *)(this + 0x178));
  std::string::~string((string *)(this + 0x170));
  std::list<Sexy::ResourceManager::PreLoadTask*,std::allocator<Sexy::ResourceManager::PreLoadTask*>>
  ::~list((list<Sexy::ResourceManager::PreLoadTask*,std::allocator<Sexy::ResourceManager::PreLoadTask*>>
           *)(this + 0x160));
  std::string::~string((string *)(this + 0x148));
  ResGenInfo::~ResGenInfo((ResGenInfo *)(this + 0x100));
  std::
  map<std::pair<std::string,std::string>,Sexy::RtId,std::less<std::pair<std::string,std::string>>,std::allocator<std::pair<std::pair<std::string,std::string>const,Sexy::RtId>>>
  ::~map((map<std::pair<std::string,std::string>,Sexy::RtId,std::less<std::pair<std::string,std::string>>,std::allocator<std::pair<std::pair<std::string,std::string>const,Sexy::RtId>>>
          *)(this + 0xd0));
  std::string::~string((string *)(this + 200));
  std::string::~string((string *)(this + 0xc0));
  std::string::~string((string *)(this + 0xb8));
  std::
  map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
  ::~map((map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
          *)(this + 0x50));
  std::
  map<Sexy::RtName,Sexy::ResourceInfoClass*,std::less<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::ResourceInfoClass*>>>
  ::~map((map<Sexy::RtName,Sexy::ResourceInfoClass*,std::less<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::ResourceInfoClass*>>>
          *)(this + 0x20));
  std::vector<Sexy::ResourceInfoClass*,std::allocator<Sexy::ResourceInfoClass*>>::~vector
            ((vector<Sexy::ResourceInfoClass*,std::allocator<Sexy::ResourceInfoClass*>> *)(this + 8)
            );
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ResourceManager::~ResourceManager() */

void __thiscall Sexy::ResourceManager::~ResourceManager(ResourceManager *this)

{
  ~ResourceManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::Clear() */

void __thiscall Sexy::ResourceManager::Clear(ResourceManager *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ResourceInfo *this_00;
  long *plVar4;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  int extraout_w1_03;
  undefined8 uVar5;
  long lVar6;
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtDbTable::Iterator::Iterator(aIStack_28,*(RtDbTable **)(this + 0x80),(IteratorStorage *)0x0);
  while (bVar1 = RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    RtDbTable::Iterator::operator*(aIStack_28);
    RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
    this_00 = RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
    RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    RtId::~RtId(aRStack_38);
    iVar3 = extraout_w1_00;
    if ((this_00 != (ResourceInfo *)0x0) &&
       (cVar2 = FUN_05194920(*(undefined8 *)(this_00 + 0x30)), iVar3 = extraout_w1_01, cVar2 != '\0'
       )) {
      cVar2 = FUN_05194930(this_00[0xa8]);
      if (cVar2 == '\0') {
        cVar2 = FUN_0519492c(this_00[0x11]);
        iVar3 = extraout_w1;
      }
      else {
        ResourceGroup::UnloadFileIndex((ResourceGroup *)this_00);
        cVar2 = FUN_0519492c(this_00[0x11]);
        iVar3 = extraout_w1_02;
      }
      if (cVar2 != '\0') {
        ResourceGroup::Unload((ResourceGroup *)this_00);
        iVar3 = extraout_w1_03;
      }
    }
    RtDbTable::Iterator::operator++(aIStack_28,iVar3);
  }
  RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar5 = *(undefined8 *)(this + 8);
  iVar3 = FUN_05194940(uVar5,*(undefined8 *)(this + 0x10));
  if (0 < iVar3) {
    lVar6 = 0;
    while( true ) {
      plVar4 = (long *)FUN_0519494c(uVar5,lVar6);
      std::
      map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
      ::clear((map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
               *)(*plVar4 + 0x68));
      if (iVar3 <= (int)(lVar6 + 1)) break;
      uVar5 = *(undefined8 *)(this + 8);
      lVar6 = lVar6 + 1;
    }
  }
  if (*(ResStreamsManager **)(*(long *)(this + 0x1a0) + 0x908) != (ResStreamsManager *)0x0) {
    ResStreamsManager::Clear(*(ResStreamsManager **)(*(long *)(this + 0x1a0) + 0x908));
  }
  std::
  map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
  ::clear((map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
           *)(this + 0x50));
  std::
  map<std::pair<std::string,std::string>,Sexy::RtId,std::less<std::pair<std::string,std::string>>,std::allocator<std::pair<std::pair<std::string,std::string>const,Sexy::RtId>>>
  ::clear((map<std::pair<std::string,std::string>,Sexy::RtId,std::less<std::pair<std::string,std::string>>,std::allocator<std::pair<std::pair<std::string,std::string>const,Sexy::RtId>>>
           *)(this + 0xd0));
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::OnInstanceTableObjectFault(Sexy::RtId const&) */

void __thiscall
Sexy::ResourceManager::OnInstanceTableObjectFault(ResourceManager *this,RtId *param_1)

{
  uint uVar1;
  uint uVar2;
  ResourceInfo *pRVar3;
  ResourceGroup *pRVar4;
  RtId aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = RtId::GetSlotIndex(param_1);
  uVar2 = RtId::GetRevision(param_1);
  RtId::RtId(aRStack_18,0x2004,uVar1,uVar2);
  RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  pRVar3 = RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
  RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  RtId::~RtId(aRStack_18);
  if (((pRVar3 != (ResourceInfo *)0x0) &&
      (pRVar4 = *(ResourceGroup **)(pRVar3 + 0x30), pRVar4 != (ResourceGroup *)0x0)) &&
     (pRVar4[0x11] == (ResourceGroup)0x0)) {
    FUN_051949f4(aRStack_10,*(undefined8 *)(pRVar3 + 0x38));
    pRVar4 = (ResourceGroup *)ResourceGroup::GetLoadableGroup(pRVar4);
    ResourceGroup::Load(pRVar4);
    std::string::~string((string *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::LoadResourceForStringId(Sexy::ResourceInfoClass*, std::string const&) */

void Sexy::ResourceManager::LoadResourceForStringId(ResourceInfoClass *param_1,string *param_2)

{
  char cVar1;
  long *plVar2;
  _func_void *p_Var3;
  _func_void *extraout_x1;
  string *in_x2;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  ResourceGroup *pRVar4;
  undefined1 auVar5 [16];
  AutoCrit aAStack_18 [8];
  exception_ptr aeStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_18,(CritSect *)(param_1 + 0x1a8));
  auVar5 = GetResInfoForStringId((ResourceManager *)param_1,(ResourceInfoClass *)param_2,in_x2);
  p_Var3 = auVar5._8_8_;
  plVar2 = auVar5._0_8_;
  if ((plVar2 == (long *)0x0) ||
     (p_Var3 = (_func_void *)(ulong)*(byte *)(plVar2 + 0xc), *(byte *)(plVar2 + 0xc) != 0)) {
    std::__exception_ptr::exception_ptr::exception_ptr(aeStack_10,p_Var3);
  }
  else {
    cVar1 = (**(code **)(*plVar2 + 0x50))();
    if (cVar1 == '\0') {
      pRVar4 = (ResourceGroup *)plVar2[6];
      if ((pRVar4 != (ResourceGroup *)0x0) && (pRVar4[0x11] == (ResourceGroup)0x0)) {
        FUN_051949f4((string *)aeStack_10,plVar2[7]);
        pRVar4 = (ResourceGroup *)ResourceGroup::GetLoadableGroup(pRVar4);
        ResourceGroup::Load(pRVar4);
        std::string::~string((string *)aeStack_10);
      }
      cVar1 = (**(code **)(*plVar2 + 0x50))(plVar2);
      if (cVar1 == '\0') {
        std::__exception_ptr::exception_ptr::exception_ptr(aeStack_10,extraout_x1);
      }
      else {
        ResourceInfo::GetInstanceRtId();
      }
      RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aeStack_10);
      RtId::~RtId((RtId *)aeStack_10);
      goto LAB_051a17d0;
    }
    ResourceInfo::GetInstanceRtId();
  }
  RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aeStack_10);
  RtId::~RtId((RtId *)aeStack_10);
LAB_051a17d0:
  AutoCrit::~AutoCrit(aAStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::ParseCommonResource(Sexy::ResourceInfo*&, Sexy::ResourceInfoClass*,
   Sexy::ResourceGroup*) */

void __thiscall
Sexy::ResourceManager::ParseCommonResource
          (ResourceManager *this,ResourceInfo **param_1,ResourceInfoClass *param_2,
          ResourceGroup *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  bool bVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong extraout_x1;
  RtSerialRtonReader *this_00;
  uint uVar8;
  ResourceInfo *pRVar9;
  RtSerialRtonKey *pRVar10;
  undefined1 auVar11 [16];
  uint local_3c;
  string asStack_38 [8];
  string asStack_30 [8];
  RtSerialRtonKey aRStack_28 [8];
  undefined8 local_20;
  RtSerialRtonKey aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(ResourceManager **)(*param_1 + 8) = this;
  Set8BytesTo0(asStack_38);
  this_00 = *(RtSerialRtonReader **)(this + 0x1f8);
  local_3c = 0;
  RtSerialRtonKey::RtSerialRtonKey(aRStack_18,"path");
  cVar2 = RtSerialRtonReader::BeginArray(this_00,aRStack_18,&local_3c);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_18);
  if (cVar2 != '\0') {
    if (local_3c != 0) {
      uVar8 = 0;
      do {
        cVar2 = FUN_0547419c(asStack_38);
        if (cVar2 == '\0') {
          FUN_05475ad8(asStack_38,&DAT_055fe318);
        }
        pRVar10 = *(RtSerialRtonKey **)(this + 0x1f8);
        uVar8 = uVar8 + 1;
        RtSerialRtonKey::RtSerialRtonKey(aRStack_28,(char *)0x0);
        std::string::string((string *)&local_20,"");
        RtSerialRtonReader::ReadString(pRVar10,(string *)aRStack_28);
        thunk_FUN_054757c0(asStack_38,aRStack_18);
        std::string::~string((string *)aRStack_18);
        std::string::~string((string *)&local_20);
        nop();
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_28);
      } while (uVar8 < local_3c);
    }
    RtSerialRtonReader::EndArray(*(RtSerialRtonReader **)(this + 0x1f8));
  }
  cVar2 = FUN_0547419c(asStack_38);
  if (cVar2 != '\0') {
    std::string::string((string *)aRStack_18,"No path specified.");
    uVar3 = Fail(this,(string *)aRStack_18);
    std::string::~string((string *)aRStack_18);
    nop();
    goto LAB_051a2068;
  }
  (*param_1)[0x60] = (ResourceInfo)0x0;
  pcVar5 = (char *)FUN_05474ee8(asStack_38,0);
  if (*pcVar5 == '!') {
    thunk_FUN_05475e00(*param_1 + 0x50,asStack_38);
    pRVar9 = *param_1;
    uVar6 = FUN_0547429c(pRVar9 + 0x50);
    *(undefined8 *)(pRVar9 + 0x40) = uVar6;
    bVar4 = std::operator==(asStack_38,"!program");
    if (bVar4) {
      (*param_1)[0x60] = (ResourceInfo)0x1;
    }
  }
  else {
    thunk_FUN_05475e00(*param_1 + 0x50,asStack_38);
    pRVar9 = *param_1;
    auVar11 = FUN_0547429c(pRVar9 + 0x50);
    *(long *)(pRVar9 + 0x40) = auVar11._0_8_;
    Upper((Sexy *)(*param_1 + 0x50),auVar11._8_8_);
    uVar6 = FUN_0547429c(aRStack_18);
    local_20 = EA::StdC::FNV64_String8(uVar6,0xcbf29ce484222325,0);
    std::string::~string((string *)aRStack_18);
    puVar7 = (undefined8 *)
             std::
             map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
             ::operator[]((map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
                           *)(this + 0x50),(ulong *)&local_20);
    *puVar7 = *param_1;
  }
  pRVar10 = *(RtSerialRtonKey **)(this + 0x1f8);
  RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_20,"id");
  std::string::string((string *)aRStack_18,"");
  RtSerialRtonReader::ReadString(pRVar10,(string *)&local_20);
  std::string::~string((string *)aRStack_18);
  nop();
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_20);
  FUN_05475d88((string *)aRStack_28,asStack_30);
  cVar2 = FUN_0547419c((string *)aRStack_28);
  if (cVar2 == '\0') {
    uVar8 = *(uint *)(param_3 + 0x14);
    if (uVar8 == 0) goto LAB_051a1f78;
LAB_051a218c:
    uVar6 = FUN_0547429c((string *)aRStack_28);
    StrFormat("%s|%d",aRStack_18,uVar6,(ulong)uVar8);
    FUN_05474278((string *)aRStack_28,aRStack_18);
    std::string::~string((string *)aRStack_18);
    uVar8 = *(uint *)(param_3 + 0x18);
  }
  else {
    std::string::string((string *)&local_20,*(char **)(*param_1 + 0x40));
    GetFileName((string *)&local_20,true);
    FUN_05474278((string *)aRStack_28,aRStack_18);
    std::string::~string((string *)aRStack_18);
    std::string::~string((string *)&local_20);
    nop();
    uVar8 = *(uint *)(param_3 + 0x14);
    if (uVar8 != 0) goto LAB_051a218c;
LAB_051a1f78:
    uVar8 = *(uint *)(param_3 + 0x18);
  }
  if (uVar8 != 0) {
    uVar6 = FUN_0547429c((string *)aRStack_28);
    StrFormat("%s||%8x",aRStack_18,uVar6,(ulong)uVar8);
    FUN_05474278((string *)aRStack_28,aRStack_18);
    std::string::~string((string *)aRStack_18);
  }
  *(ResourceGroup **)(*param_1 + 0x30) = param_3;
  thunk_FUN_05475e00(*param_1 + 0x48,(string *)aRStack_28);
  pRVar9 = *param_1;
  uVar6 = FUN_0547429c(pRVar9 + 0x48);
  *(undefined8 *)(pRVar9 + 0x38) = uVar6;
  uVar1 = *(undefined4 *)(param_3 + 0x14);
  pRVar9 = *param_1;
  *(undefined4 *)(pRVar9 + 0x5c) = *(undefined4 *)(param_3 + 0x18);
  *(undefined4 *)(pRVar9 + 0x58) = uVar1;
  uVar6 = FUN_0547429c((string *)aRStack_28);
  local_20 = EA::StdC::FNV64_String8(uVar6,0xcbf29ce484222325,0);
  std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
  pair<std::_Rb_tree_node<std::pair<int_const,std::wstring>>*&,std::_Rb_tree_node<std::pair<int_const,std::wstring>>*&,void>
            ((pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> *)aRStack_18,
             (_Rb_tree_node **)&local_20,(_Rb_tree_node **)param_1);
  std::
  map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
  ::insert<std::pair<unsigned_long_const,Sexy::ResourceInfo*>,void>
            ((map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
              *)(param_2 + 0x68),(pair *)aRStack_18);
  uVar3 = (undefined1)extraout_x1;
  if ((extraout_x1 & 0xff) == 0) {
    uVar6 = FUN_0547429c(asStack_38);
    StrFormat("Resource already defined: %s",aRStack_18,uVar6);
    if (*param_1 != (ResourceInfo *)0x0) {
      (**(code **)(*(long *)*param_1 + 0x18))();
    }
    uVar3 = Fail(this,(string *)aRStack_18);
    std::string::~string((string *)aRStack_18);
  }
  else {
    std::vector<Sexy::ResourceInfo*,std::allocator<Sexy::ResourceInfo*>>::push_back
              ((vector<Sexy::ResourceInfo*,std::allocator<Sexy::ResourceInfo*>> *)(param_3 + 0x50),
               param_1);
  }
  std::string::~string((string *)aRStack_28);
  std::string::~string(asStack_30);
LAB_051a2068:
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::ParseGroupResources(Sexy::ResourceGroup*, unsigned int) */

void __thiscall
Sexy::ResourceManager::ParseGroupResources
          (ResourceManager *this,ResourceGroup *param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  char *__s;
  long lVar5;
  code *pcVar6;
  RtObject *this_00;
  string *extraout_x1;
  RtSerialRtonReader *pRVar7;
  RtSerialRtonKey *pRVar8;
  uint uVar9;
  uint local_34;
  undefined8 local_30;
  RtObject *local_28;
  undefined8 local_20;
  RtSerialRtonKey aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar7 = *(RtSerialRtonReader **)(this + 0x1f8);
  local_34 = 0;
  RtSerialRtonKey::RtSerialRtonKey(aRStack_18,"resources");
  cVar1 = RtSerialRtonReader::BeginArray(pRVar7,aRStack_18,&local_34);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_18);
  if (cVar1 == '\0') {
    std::string::string((string *)aRStack_18,"Missing resources array");
    Fail(this,(string *)aRStack_18);
    std::string::~string((string *)aRStack_18);
    nop();
  }
  else {
    if (local_34 != 0) {
      uVar9 = 0;
      do {
        pRVar8 = *(RtSerialRtonKey **)(this + 0x1f8);
        RtSerialRtonKey::RtSerialRtonKey(aRStack_18,(char *)0x0);
        RtSerialRtonReader::BeginObject(pRVar8);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_18);
        pRVar8 = *(RtSerialRtonKey **)(this + 0x1f8);
        RtSerialRtonKey::RtSerialRtonKey(aRStack_18,"type");
        __s = (char *)RtSerialRtonReader::ReadStringDirect(pRVar8);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_18);
        if (__s == (char *)0x0) {
          std::string::string((string *)aRStack_18,"No resource \"type\" found");
          Fail(this,(string *)aRStack_18);
          std::string::~string((string *)aRStack_18);
          nop();
LAB_051a276c:
          cVar1 = '\0';
          goto LAB_051a2770;
        }
        std::string::string((string *)&local_28,__s);
        StringToWString((Sexy *)&local_28,extraout_x1);
        RtName::RtName((RtName *)aRStack_18,(wstring *)&local_20);
        FUN_05476c50((RtId *)&local_20);
        std::string::~string((string *)&local_28);
        nop();
        local_30 = std::
                   map<Sexy::RtName,Sexy::ResourceInfoClass*,std::less<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::ResourceInfoClass*>>>
                   ::find((map<Sexy::RtName,Sexy::ResourceInfoClass*,std::less<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::ResourceInfoClass*>>>
                           *)(this + 0x20),(RtName *)aRStack_18);
        local_20 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)(this + 0x20));
        bVar2 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)&local_20);
        if (!bVar2) {
          StrFormat("Unsupported resource type \"%s\"",(RtId *)&local_20,__s);
          Fail(this,(string *)&local_20);
          std::string::~string((string *)&local_20);
LAB_051a2764:
          RtName::~RtName((RtName *)aRStack_18);
          goto LAB_051a276c;
        }
        lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
        lVar5 = *(long *)(lVar5 + 0x10);
        pcVar6 = (code *)FUN_0519491c(*(undefined8 *)(lVar5 + 0x50));
        if (pcVar6 == (code *)0x0) {
LAB_051a26dc:
          this_00 = (RtObject *)FUN_051948e4(*(undefined8 *)(lVar5 + 0x18));
          local_28 = (RtObject *)RtObject::Cast<Sexy::ResourceInfo>(this_00);
          pRVar7 = *(RtSerialRtonReader **)(this + 0x1f8);
          RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_20,"slot");
          iVar4 = RtSerialRtonReader::ReadInt32(pRVar7,(RtSerialRtonKey *)&local_20,-1);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_20);
          if (iVar4 < 0) {
            RtDbTable::AllocId((RtId *)&local_20,*(undefined8 *)(this + 0x90),local_28,0,1,0);
          }
          else {
            RtId::RtId((RtId *)&local_20,0x2004,iVar4 + param_2,1);
            RtDbTable::ReplaceObjectForId(*(RtDbTable **)(this + 0x88),(RtId *)&local_20,local_28);
          }
          ResourceInfo::SetRtId((ResourceInfo *)local_28,(RtId *)&local_20);
          RtId::~RtId((RtId *)&local_20);
          lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                            ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
          cVar3 = ParseCommonResource(this,(ResourceInfo **)&local_28,
                                      *(ResourceInfoClass **)(lVar5 + 0x10),param_1);
          if ((cVar3 == '\0') ||
             (cVar3 = (**(code **)(*(long *)local_28 + 0x60))(local_28), cVar3 == '\0'))
          goto LAB_051a2764;
          (**(code **)(*(long *)local_28 + 0x48))(local_28);
          *(undefined4 *)(local_28 + 0x10) = *(undefined4 *)(this + 0x200);
        }
        else {
          cVar3 = (*pcVar6)(this);
          if (cVar3 != '\0') {
            lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
            lVar5 = *(long *)(lVar5 + 0x10);
            goto LAB_051a26dc;
          }
        }
        uVar9 = uVar9 + 1;
        RtName::~RtName((RtName *)aRStack_18);
        RtSerialRtonReader::EndObject(*(RtSerialRtonReader **)(this + 0x1f8));
      } while (uVar9 < local_34);
    }
    RtSerialRtonReader::EndArray(*(RtSerialRtonReader **)(this + 0x1f8));
  }
LAB_051a2770:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::ReadResourceFileSlotCount(std::string const&) */

void __thiscall
Sexy::ResourceManager::ReadResourceFileSlotCount(ResourceManager *this,string *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  RtSerialBuffer *this_00;
  uchar *puVar4;
  RtSerialRtonReader *pRVar5;
  undefined8 uVar6;
  RtSerialRtonKey aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtSerialBuffer *)SexyAppBase::CreateReadBufferFromFile(gSexyAppBase,param_1,true);
  if (this_00 == (RtSerialBuffer *)0x0) {
    uVar6 = FUN_0547429c(param_1);
    OutputDebugStrF((wchar_t *)"ResourceManager::ParseResourcesFile: Failed ReadBuffer from [%s]",
                    uVar6);
    FUN_031f5e7c((string *)aRStack_10,"Unable to read resource file: ",param_1);
    Fail(this,(string *)aRStack_10);
    std::string::~string((string *)aRStack_10);
    uVar3 = 0;
  }
  else {
    puVar4 = (uchar *)RtSerialBuffer::GetDataPtr(this_00);
    uVar2 = RtSerialBuffer::GetDataSize(this_00);
    pRVar5 = ::operator_new(0x28);
    RtSerialRtonReader::RtSerialRtonReader(pRVar5,puVar4,uVar2);
    *(RtSerialRtonReader **)(this + 0x1f8) = pRVar5;
    cVar1 = RtSerialRtonReader::BeginDocumentObject(pRVar5);
    if (cVar1 == '\0') {
      FUN_031f5e7c((string *)aRStack_10,"Invalid document object in resource file: ",param_1);
      Fail(this,(string *)aRStack_10);
      std::string::~string((string *)aRStack_10);
      pRVar5 = *(RtSerialRtonReader **)(this + 0x1f8);
      if (pRVar5 != (RtSerialRtonReader *)0x0) {
        RtSerialRtonReader::~RtSerialRtonReader(pRVar5);
        AK::FreeHook(pRVar5);
      }
      *(undefined8 *)(this + 0x1f8) = 0;
      RtSerialBuffer::~RtSerialBuffer(this_00);
      AK::FreeHook(this_00);
      uVar3 = 0;
    }
    else {
      pRVar5 = *(RtSerialRtonReader **)(this + 0x1f8);
      RtSerialRtonKey::RtSerialRtonKey(aRStack_10,"slot_count");
      uVar3 = RtSerialRtonReader::ReadInt32(pRVar5,aRStack_10,0);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
      RtSerialBuffer::~RtSerialBuffer(this_00);
      AK::FreeHook(this_00);
      RtSerialRtonReader::EndDocumentObject(*(RtSerialRtonReader **)(this + 0x1f8));
      pRVar5 = *(RtSerialRtonReader **)(this + 0x1f8);
      if (pRVar5 != (RtSerialRtonReader *)0x0) {
        RtSerialRtonReader::~RtSerialRtonReader(pRVar5);
        AK::FreeHook(pRVar5);
      }
      *(undefined8 *)(this + 0x1f8) = 0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::GetAllDelayLoadedRSBSlotCount() */

void __thiscall Sexy::ResourceManager::GetAllDelayLoadedRSBSlotCount(ResourceManager *this)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined8 local_18;
  undefined8 local_10;
  _func_void *local_8;
  
  iVar4 = 0;
  local_8 = ___stack_chk_guard;
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_18,___stack_chk_guard);
  local_18 = std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::begin((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                      *)&DAT_06bbd8d8);
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)&DAT_06bbd8d8);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    iVar2 = ReadResourceFileSlotCount(this,(string *)(lVar3 + 8));
    iVar4 = iVar4 + iVar2;
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


/* Sexy::ResourceManager::InitDelayLoadedRSBSlotCount() */

void __thiscall Sexy::ResourceManager::InitDelayLoadedRSBSlotCount(ResourceManager *this)

{
  undefined4 uVar1;
  
  uVar1 = GetAllDelayLoadedRSBSlotCount(this);
  *(undefined4 *)(this + 0x158) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::ResetTables(unsigned int) */

void __thiscall Sexy::ResourceManager::ResetTables(ResourceManager *this,uint param_1)

{
  RtDb *pRVar1;
  undefined8 uVar2;
  long lVar3;
  size_t in_x2;
  TableOptions *pTVar4;
  code *__n;
  RtDbTable *pRVar5;
  uint uVar6;
  RtId aRStack_60 [8];
  uint local_58 [2];
  RtName aRStack_50 [16];
  string asStack_40 [16];
  TableOptions aTStack_30 [40];
  long local_8;
  
  pRVar5 = *(RtDbTable **)(this + 0x98);
  local_8 = ___stack_chk_guard;
  if (pRVar5 != (RtDbTable *)0x0) {
    RtDbTable::~RtDbTable(pRVar5);
    AK::FreeHook(pRVar5);
  }
  pRVar5 = *(RtDbTable **)(this + 0xa0);
  if (pRVar5 != (RtDbTable *)0x0) {
    RtDbTable::~RtDbTable(pRVar5);
    AK::FreeHook(pRVar5);
  }
  pRVar5 = *(RtDbTable **)(this + 0x88);
  if (pRVar5 != (RtDbTable *)0x0) {
    RtDbTable::~RtDbTable(pRVar5);
    AK::FreeHook(pRVar5);
  }
  pRVar5 = *(RtDbTable **)(this + 0x90);
  if (pRVar5 != (RtDbTable *)0x0) {
    RtDbTable::~RtDbTable(pRVar5);
    AK::FreeHook(pRVar5);
  }
  pRVar5 = *(RtDbTable **)(this + 0x80);
  if (pRVar5 != (RtDbTable *)0x0) {
    RtDbTable::~RtDbTable(pRVar5);
    AK::FreeHook(pRVar5);
  }
  RtDbTable::TableOptions::TableOptions((TableOptions *)local_58);
  std::string::append(asStack_40,"Resource Groups",in_x2);
  RtName::operator=(aRStack_50,L"ResourceManager.ResourceGroups");
  pRVar1 = (RtDb *)RtDb::GetDb();
  pTVar4 = (TableOptions *)local_58;
  uVar2 = RtDb::CreateTable(pRVar1,0x2003,(TableOptions *)local_58);
  *(undefined8 *)(this + 0x80) = uVar2;
  RtDbTable::TableOptions::TableOptions(aTStack_30);
  RtDbTable::TableOptions::operator=((TableOptions *)local_58,aTStack_30);
  RtDbTable::TableOptions::~TableOptions(aTStack_30);
  std::string::append(asStack_40,"Resource Info",(size_t)pTVar4);
  RtName::operator=(aRStack_50,L"ResourceManager.ResourceInfo");
  local_58[0] = param_1;
  pRVar1 = (RtDb *)RtDb::GetDb();
  pTVar4 = (TableOptions *)local_58;
  uVar2 = RtDb::CreateTable(pRVar1,0x2004,(TableOptions *)local_58);
  *(undefined8 *)(this + 0x88) = uVar2;
  RtDbTable::TableOptions::TableOptions(aTStack_30);
  RtDbTable::TableOptions::operator=((TableOptions *)local_58,aTStack_30);
  RtDbTable::TableOptions::~TableOptions(aTStack_30);
  std::string::append(asStack_40,"Resource Info (Hidden)",(size_t)pTVar4);
  RtName::operator=(aRStack_50,L"ResourceManager.ResourceInfoHidden");
  local_58[0] = param_1;
  pRVar1 = (RtDb *)RtDb::GetDb();
  pTVar4 = (TableOptions *)local_58;
  uVar2 = RtDb::CreateTable(pRVar1,0x2005,(TableOptions *)local_58);
  *(undefined8 *)(this + 0x90) = uVar2;
  RtDbTable::TableOptions::TableOptions(aTStack_30);
  RtDbTable::TableOptions::operator=((TableOptions *)local_58,aTStack_30);
  RtDbTable::TableOptions::~TableOptions(aTStack_30);
  std::string::append(asStack_40,"Resource Instances",(size_t)pTVar4);
  RtName::operator=(aRStack_50,L"ResourceManager.ResourceInstances");
  local_58[0] = param_1;
  pRVar1 = (RtDb *)RtDb::GetDb();
  lVar3 = RtDb::CreateTable(pRVar1,0x2006,(TableOptions *)local_58);
  *(long *)(this + 0x98) = lVar3;
  __n = OnInstanceTableObjectFault;
  Event1<Sexy::RtId_const&>::
  Connect<Sexy::ResourceManager,void(Sexy::ResourceManager::*)(Sexy::RtId_const&)>
            ((ResourceManager *)(lVar3 + 0x218),(_func_void_RtId_ptr *)this,true);
  RtDbTable::TableOptions::TableOptions(aTStack_30);
  RtDbTable::TableOptions::operator=((TableOptions *)local_58,aTStack_30);
  RtDbTable::TableOptions::~TableOptions(aTStack_30);
  uVar6 = 0;
  std::string::append(asStack_40,"Resource Instances (Hidden)",(size_t)__n);
  RtName::operator=(aRStack_50,L"ResourceManager.ResourceInstancesHidden");
  pRVar1 = (RtDb *)RtDb::GetDb();
  uVar2 = RtDb::CreateTable(pRVar1,0x2007,(TableOptions *)local_58);
  *(undefined8 *)(this + 0xa0) = uVar2;
  if (param_1 != 0) {
    do {
      uVar6 = uVar6 + 1;
      RtDbTable::AllocId(aRStack_60,*(undefined8 *)(this + 0x88),0,0,1,0);
      RtDbTable::AllocId(aTStack_30,*(undefined8 *)(this + 0x98),0,0,1,0);
      RtId::operator=(aRStack_60,(RtId *)aTStack_30);
      RtId::~RtId((RtId *)aTStack_30);
      RtDbTable::SetObjectIsWatched(*(RtDbTable **)(this + 0x98),aRStack_60,true);
      RtId::~RtId(aRStack_60);
    } while (uVar6 != param_1);
  }
  RtDbTable::TableOptions::~TableOptions((TableOptions *)local_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::ResourceManager(Sexy::SexyAppBase*) */

void __thiscall Sexy::ResourceManager::ResourceManager(ResourceManager *this,SexyAppBase *param_1)

{
  string *psVar1;
  string *psVar2;
  char cVar3;
  ulong uVar4;
  RtObject *this_00;
  undefined8 *puVar5;
  RtDb *this_01;
  undefined8 uVar6;
  undefined **__n;
  ulong uVar7;
  ResourceInfoClass *local_38;
  undefined4 local_30 [2];
  RtName aRStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  __n = &PTR__ResourceManager_06a30180;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__ResourceManager_06a30180;
  psVar1 = (string *)(this + 0x170);
  psVar2 = (string *)(this + 0x178);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x20));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x50));
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  Set8BytesTo0(this + 0xb8);
  Set8BytesTo0(this + 0xc0);
  Set8BytesTo0(this + 200);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0xd0));
  ResGenInfo::ResGenInfo((ResGenInfo *)(this + 0x100));
  Set8BytesTo0(this + 0x148);
  this[0x154] = (ResourceManager)0x0;
  *(undefined4 *)(this + 0x158) = 0;
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)(this + 0x160));
  Set8BytesTo0(psVar1);
  Set8BytesTo0(psVar2);
  CritSect::CritSect((CritSect *)(this + 0x1a8));
  CritSect::CritSect((CritSect *)(this + 0x1d0));
  *(undefined4 *)(this + 0x204) = 0;
  *(undefined4 *)(this + 0x208) = 0;
  *(undefined4 *)(this + 0x20c) = 0x454e5553;
  *(SexyAppBase **)(this + 0x1a0) = param_1;
  *(undefined4 *)(this + 0xb0) = 0xffffffff;
  *(undefined4 *)(this + 0x200) = 0;
  uVar4 = RtClass::StaticGetClassCount();
  if (uVar4 != 0) {
    uVar7 = 0;
    do {
      this_00 = (RtObject *)RtClass::StaticGetClassIndexed(uVar7);
      local_38 = RtObject::Cast<Sexy::ResourceInfoClass>(this_00);
      if (local_38 != (ResourceInfoClass *)0x0) {
        std::vector<Sexy::ResourceInfoClass*,std::allocator<Sexy::ResourceInfoClass*>>::push_back
                  ((vector<Sexy::ResourceInfoClass*,std::allocator<Sexy::ResourceInfoClass*>> *)
                   (this + 8),&local_38);
        ResourceInfoClass::GetManifestTypeName();
        cVar3 = FUN_051948c8(local_30[0]);
        if (cVar3 != '\0') {
          puVar5 = (undefined8 *)
                   std::
                   map<Sexy::RtName,Sexy::ResourceInfoClass*,std::less<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::ResourceInfoClass*>>>
                   ::operator[]((map<Sexy::RtName,Sexy::ResourceInfoClass*,std::less<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::ResourceInfoClass*>>>
                                 *)(this + 0x20),(RtName *)local_30);
          *puVar5 = local_38;
        }
        RtName::~RtName((RtName *)local_30);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar4);
  }
  RtDbTable::TableOptions::TableOptions((TableOptions *)local_30);
  std::string::append(asStack_18,"Ungrouped Resource Table",(size_t)__n);
  RtName::operator=(aRStack_28,L"ResourceManager.UngroupedResources");
  this_01 = (RtDb *)RtDb::GetDb();
  uVar6 = RtDb::CreateTable(this_01,0x2008,(TableOptions *)local_30);
  *(undefined8 *)(this + 0xa8) = uVar6;
  ResetTables(this,0);
  Android::Resources::GetUserDataFolder(*(AndroidAppDriver **)(this + 0x1a0));
  FUN_05474278(psVar1,(string *)&local_38);
  std::string::~string((string *)&local_38);
  Android::Resources::GetExternalFilesDirectory(*(AndroidAppDriver **)(this + 0x1a0));
  FUN_05474278(psVar2,(string *)&local_38);
  std::string::~string((string *)&local_38);
  uVar6 = Android::Resources::GetFileSystemBlocksFree(psVar1);
  *(undefined8 *)(this + 0x180) = uVar6;
  uVar6 = Android::Resources::GetFileSystemBlockSize(psVar1);
  *(undefined8 *)(this + 0x188) = uVar6;
  uVar6 = Android::Resources::GetFileSystemBlocksFree(psVar2);
  *(undefined8 *)(this + 400) = uVar6;
  uVar6 = Android::Resources::GetFileSystemBlockSize(psVar2);
  *(undefined8 *)(this + 0x198) = uVar6;
  RtDbTable::TableOptions::~TableOptions((TableOptions *)local_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::ParseResourcesFile(std::string const&) */

void __thiscall Sexy::ResourceManager::ParseResourcesFile(ResourceManager *this,string *param_1)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  RtSerialBuffer *this_00;
  uchar *puVar14;
  RtSerialRtonReader *pRVar15;
  uint *puVar16;
  char *pcVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  ResourceGroup *pRVar21;
  byte *pbVar22;
  string *extraout_x1;
  string *extraout_x1_00;
  RtSerialRtonKey *pRVar23;
  uint uVar24;
  bool local_72;
  bool local_71;
  uint local_70;
  uint local_6c;
  string asStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  ResourceGroup *local_50;
  string local_48 [8];
  string asStack_40 [8];
  RtSerialRtonKey aRStack_38 [8];
  string asStack_30 [8];
  ulong local_28 [2];
  ulong local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (ResourceManagerInfo::sInstance !=
      (map<std::string,Sexy::ResGenInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::ResGenInfo>>>
       *)0x0) {
    FUN_05475d88(asStack_30);
    iVar7 = FUN_05474184(asStack_30);
    lVar18 = 0;
    if (0 < iVar7) {
      do {
        while (pcVar17 = (char *)FUN_05474ee8(asStack_30,lVar18), *pcVar17 == '\\') {
          lVar1 = lVar18 + 1;
          puVar13 = (undefined1 *)FUN_05474ee8(asStack_30,lVar18);
          *puVar13 = 0x2f;
          lVar18 = lVar1;
          if (iVar7 <= (int)lVar1) goto LAB_051a3748;
        }
        lVar18 = lVar18 + 1;
      } while ((int)lVar18 < iVar7);
    }
LAB_051a3748:
    local_28[0] = std::
                  map<std::string,Sexy::ResGenInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::ResGenInfo>>>
                  ::find(ResourceManagerInfo::sInstance,asStack_30);
    local_18[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)ResourceManagerInfo::sInstance);
    bVar4 = eastl::operator!=((rbtree_iterator *)local_28,(rbtree_iterator *)local_18);
    if (bVar4) {
      lVar18 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)local_28);
      InitResourceGen(this,(ResGenInfo *)(lVar18 + 8));
      std::string::~string(asStack_30);
    }
    else {
      std::string::~string(asStack_30);
    }
  }
  this_00 = (RtSerialBuffer *)SexyAppBase::CreateReadBufferFromFile(gSexyAppBase,param_1,true);
  if (this_00 == (RtSerialBuffer *)0x0) {
    uVar19 = FUN_0547429c(param_1);
    OutputDebugStrF((wchar_t *)"ResourceManager::ParseResourcesFile: Failed ReadBuffer from [%s]",
                    uVar19);
    FUN_031f5e7c((RtSerialRtonKey *)local_18,"Unable to read resource file: ",param_1);
    Fail(this,(string *)local_18);
    std::string::~string((string *)local_18);
    bVar6 = 0;
    goto LAB_051a3894;
  }
  puVar14 = (uchar *)RtSerialBuffer::GetDataPtr(this_00);
  uVar8 = RtSerialBuffer::GetDataSize(this_00);
  pRVar15 = ::operator_new(0x28);
  RtSerialRtonReader::RtSerialRtonReader(pRVar15,puVar14,uVar8);
  *(RtSerialRtonReader **)(this + 0x1f8) = pRVar15;
  cVar5 = RtSerialRtonReader::BeginDocumentObject(pRVar15);
  if (cVar5 == '\0') {
    FUN_031f5e7c((RtSerialRtonKey *)local_18,"Invalid document object in resource file: ",param_1);
    Fail(this,(string *)local_18);
    std::string::~string((string *)local_18);
    pRVar15 = *(RtSerialRtonReader **)(this + 0x1f8);
    if (pRVar15 != (RtSerialRtonReader *)0x0) {
      RtSerialRtonReader::~RtSerialRtonReader(pRVar15);
      AK::FreeHook(pRVar15);
    }
    *(undefined8 *)(this + 0x1f8) = 0;
    RtSerialBuffer::~RtSerialBuffer(this_00);
    AK::FreeHook(this_00);
    bVar6 = 0;
    goto LAB_051a3894;
  }
  pRVar15 = *(RtSerialRtonReader **)(this + 0x1f8);
  RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_18,"version");
  iVar7 = RtSerialRtonReader::ReadInt32(pRVar15,(RtSerialRtonKey *)local_18,0);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)local_18);
  if (iVar7 == 1) {
    pRVar15 = *(RtSerialRtonReader **)(this + 0x1f8);
    RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_18,"content_version");
    uVar9 = RtSerialRtonReader::ReadInt32(pRVar15,(RtSerialRtonKey *)local_18,0);
    *(undefined4 *)(this + 0x150) = uVar9;
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)local_18);
    pRVar15 = *(RtSerialRtonReader **)(this + 0x1f8);
    RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_18,"slot_count");
    uVar10 = RtSerialRtonReader::ReadInt32(pRVar15,(RtSerialRtonKey *)local_18,0);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)local_18);
    puVar16 = (uint *)Lua::CUIColorLayer::GetLayerColor(*(CUIColorLayer **)(this + 0x88));
    uVar8 = *puVar16;
    if (this[0x154] == (ResourceManager)0x0) {
      ResetTables(this,uVar10);
      this[0x154] = (ResourceManager)0x1;
    }
    else {
      ResizeTables(this,uVar10,param_1);
    }
    RtSerialBuffer::~RtSerialBuffer(this_00);
    AK::FreeHook(this_00);
    pRVar15 = *(RtSerialRtonReader **)(this + 0x1f8);
    local_70 = 0;
    RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_18,"groups");
    cVar5 = RtSerialRtonReader::BeginArray(pRVar15,(RtSerialRtonKey *)local_18,&local_70);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)local_18);
    if (cVar5 == '\0') {
      pcVar17 = "No \"groups\" array found in resource file: ";
      goto LAB_051a3844;
    }
    if (local_70 != 0) {
      uVar10 = 0;
      uVar24 = 0;
      iVar7 = 0;
      do {
        pRVar23 = *(RtSerialRtonKey **)(this + 0x1f8);
        RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_18,(char *)0x0);
        cVar5 = RtSerialRtonReader::BeginObject(pRVar23);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)local_18);
        if (cVar5 == '\0') {
          StrFormat("Unable to read object for group index %d",(RtSerialRtonKey *)local_18,
                    (ulong)uVar10);
          Fail(this,(string *)local_18);
          std::string::~string((string *)local_18);
          break;
        }
        pRVar23 = *(RtSerialRtonKey **)(this + 0x1f8);
        RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_28,"id");
        std::string::string((string *)local_18,"");
        RtSerialRtonReader::ReadString(pRVar23,(string *)local_28);
        std::string::~string((string *)local_18);
        nop();
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)local_28);
        StringToWString((Sexy *)asStack_68,extraout_x1);
        RtName::RtName((RtName *)local_28,awStack_60);
        cVar5 = FUN_051948d4(local_28[0] & 0xffffffff);
        if (cVar5 != '\0') {
          StrFormat("No id specified on group index %d",(RtSerialRtonKey *)local_18,(ulong)uVar10);
LAB_051a3f68:
          Fail(this,(string *)local_18);
          std::string::~string((string *)local_18);
          RtSerialRtonReader::EndObject(*(RtSerialRtonReader **)(this + 0x1f8));
LAB_051a3f84:
          RtName::~RtName((RtName *)local_28);
          FUN_05476c50(awStack_60);
          std::string::~string(asStack_68);
          break;
        }
        pRVar23 = *(RtSerialRtonKey **)(this + 0x1f8);
        RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_18,"type");
        pcVar17 = (char *)RtSerialRtonReader::ReadStringDirect(pRVar23);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)local_18);
        iVar11 = strcmp(pcVar17,"simple");
        if (iVar11 != 0) {
          uVar12 = strcmp(pcVar17,"composite");
          if (uVar12 == 0) {
            local_72 = false;
            lVar18 = CreateResourceGroup(this,(RtName *)local_28,true,&local_72);
            pRVar15 = *(RtSerialRtonReader **)(this + 0x1f8);
            local_6c = uVar12;
            RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_18,"subgroups");
            cVar5 = RtSerialRtonReader::BeginArray(pRVar15,(RtSerialRtonKey *)local_18,&local_6c);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)local_18);
            if (cVar5 != '\0') {
              if ((int)uVar24 < 1) {
                uVar12 = local_6c;
                if ((local_72 == false) && (uVar12 = uVar24, local_6c != 0)) {
                  uVar24 = 0;
                  do {
                    pRVar23 = *(RtSerialRtonKey **)(this + 0x1f8);
                    RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_18,(char *)0x0);
                    RtSerialRtonReader::BeginObject(pRVar23);
                    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                              ((pair<std::string_const,Sexy::PILifeValueTable> *)local_18);
                    pRVar23 = *(RtSerialRtonKey **)(this + 0x1f8);
                    RtSerialRtonKey::RtSerialRtonKey(aRStack_38,"id");
                    std::string::string(asStack_30,"");
                    RtSerialRtonReader::ReadString(pRVar23,(string *)aRStack_38);
                    StringToWString((Sexy *)local_18,extraout_x1_00);
                    std::string::~string((string *)local_18);
                    std::string::~string(asStack_30);
                    nop();
                    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                              ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_38);
                    RtName::RtName((RtName *)local_18,awStack_58);
                    cVar5 = FUN_051948c8(local_18[0] & 0xffffffff);
                    if (cVar5 == '\0') {
                      uVar19 = FUN_054766ec(awStack_60);
                      StrFormat("No id specified on subgroup %d within composite group \"%ls\"",
                                asStack_30,(ulong)uVar24,uVar19);
                      Fail(this,asStack_30);
                      std::string::~string(asStack_30);
                    }
                    else {
                      local_71 = false;
                      local_50 = (ResourceGroup *)
                                 CreateResourceGroup(this,(RtName *)local_18,false,&local_71);
                      if (local_71 == false) {
                        pRVar23 = *(RtSerialRtonKey **)(this + 0x1f8);
                        RtSerialRtonKey::RtSerialRtonKey(aRStack_38,"res");
                        std::string::string(asStack_30,"");
                        RtSerialRtonReader::ReadString(pRVar23,(string *)aRStack_38);
                        std::string::~string(asStack_30);
                        nop();
                        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_38);
                        cVar5 = FUN_0547419c(local_48);
                        if (cVar5 == '\0') {
                          pcVar17 = (char *)FUN_0547429c(local_48);
                          iVar11 = atoi(pcVar17);
                          *(int *)(local_50 + 0x14) = iVar11;
                        }
                        pRVar23 = *(RtSerialRtonKey **)(this + 0x1f8);
                        RtSerialRtonKey::RtSerialRtonKey(aRStack_38,"loc");
                        std::string::string(asStack_30,"");
                        RtSerialRtonReader::ReadString(pRVar23,(string *)aRStack_38);
                        std::string::~string(asStack_30);
                        nop();
                        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_38);
                        uVar20 = FUN_05474184(asStack_40);
                        if (3 < uVar20) {
                          pbVar22 = (byte *)FUN_05474ee8(asStack_40,0);
                          bVar6 = *pbVar22;
                          pbVar22 = (byte *)FUN_05474ee8(asStack_40,1);
                          bVar2 = *pbVar22;
                          pbVar22 = (byte *)FUN_05474ee8(asStack_40,2);
                          bVar3 = *pbVar22;
                          pbVar22 = (byte *)FUN_05474ee8(asStack_40,3);
                          *(uint *)(local_50 + 0x18) =
                               (uint)bVar6 << 0x18 | (uint)bVar2 << 0x10 | (uint)*pbVar22 |
                               (uint)bVar3 << 8;
                        }
                        iVar7 = iVar7 + 1;
                        std::vector<Sexy::ResourceGroup*,std::allocator<Sexy::ResourceGroup*>>::
                        push_back((vector<Sexy::ResourceGroup*,std::allocator<Sexy::ResourceGroup*>>
                                   *)(lVar18 + 0x38),&local_50);
                        *(long *)(local_50 + 0x30) = lVar18;
                        std::string::~string(asStack_40);
                        std::string::~string(local_48);
                      }
                    }
                    uVar24 = uVar24 + 1;
                    RtSerialRtonReader::EndObject(*(RtSerialRtonReader **)(this + 0x1f8));
                    RtName::~RtName((RtName *)local_18);
                    FUN_05476c50(awStack_58);
                  } while (uVar24 < local_6c);
                }
              }
              else {
                uVar12 = (uVar24 - 1) + local_6c;
              }
              RtSerialRtonReader::EndArray(*(RtSerialRtonReader **)(this + 0x1f8));
              uVar24 = uVar12;
              goto LAB_051a3abc;
            }
            uVar19 = FUN_054766ec(awStack_60);
            StrFormat("No subgroup array on composite group \"%ls\"",(RtSerialRtonKey *)local_18,
                      uVar19);
          }
          else {
            uVar19 = FUN_054766ec(awStack_60);
            StrFormat("Unrecognized group type \"%s\" on group \"%ls\"",(RtSerialRtonKey *)local_18,
                      pcVar17,uVar19);
          }
          goto LAB_051a3f68;
        }
        if ((int)uVar24 < 1) {
          local_48[0] = (string)0x0;
          pRVar21 = (ResourceGroup *)
                    CreateResourceGroup(this,(RtName *)local_28,false,(bool *)local_48);
          if (local_48[0] == (string)0x0) {
            if (iVar7 != 0) goto LAB_051a3fd4;
          }
          else {
            if (iVar7 == 0) goto LAB_051a3abc;
LAB_051a3fd4:
            iVar7 = iVar7 + -1;
          }
          pRVar23 = *(RtSerialRtonKey **)(this + 0x1f8);
          RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)asStack_30,"res");
          std::string::string((string *)local_18,"");
          RtSerialRtonReader::ReadString(pRVar23,asStack_30);
          std::string::~string((string *)local_18);
          nop();
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_30);
          cVar5 = FUN_0547419c(asStack_40);
          if (cVar5 == '\0') {
            pcVar17 = (char *)FUN_0547429c(asStack_40);
            iVar11 = atoi(pcVar17);
            *(int *)(pRVar21 + 0x14) = iVar11;
          }
          pRVar23 = *(RtSerialRtonKey **)(this + 0x1f8);
          RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)asStack_30,"loc");
          std::string::string((string *)local_18,"");
          RtSerialRtonReader::ReadString(pRVar23,asStack_30);
          std::string::~string((string *)local_18);
          nop();
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_30);
          uVar20 = FUN_05474184((string *)aRStack_38);
          if (3 < uVar20) {
            pbVar22 = (byte *)FUN_05474ee8((string *)aRStack_38,0);
            bVar6 = *pbVar22;
            pbVar22 = (byte *)FUN_05474ee8((string *)aRStack_38,1);
            bVar2 = *pbVar22;
            pbVar22 = (byte *)FUN_05474ee8((string *)aRStack_38,2);
            bVar3 = *pbVar22;
            pbVar22 = (byte *)FUN_05474ee8((string *)aRStack_38,3);
            *(uint *)(pRVar21 + 0x18) =
                 (uint)bVar6 << 0x18 | (uint)bVar2 << 0x10 | (uint)*pbVar22 | (uint)bVar3 << 8;
          }
          cVar5 = ParseGroupResources(this,pRVar21,uVar8);
          if (cVar5 != '\0') {
            std::string::~string((string *)aRStack_38);
            std::string::~string(asStack_40);
            goto LAB_051a3abc;
          }
          RtSerialRtonReader::EndObject(*(RtSerialRtonReader **)(this + 0x1f8));
          std::string::~string((string *)aRStack_38);
          std::string::~string(asStack_40);
          goto LAB_051a3f84;
        }
        uVar24 = uVar24 - 1;
LAB_051a3abc:
        uVar10 = uVar10 + 1;
        RtSerialRtonReader::EndObject(*(RtSerialRtonReader **)(this + 0x1f8));
        RtName::~RtName((RtName *)local_28);
        FUN_05476c50(awStack_60);
        std::string::~string(asStack_68);
      } while (uVar10 < local_70);
    }
    RtSerialRtonReader::EndArray(*(RtSerialRtonReader **)(this + 0x1f8));
  }
  else {
    RtSerialBuffer::~RtSerialBuffer(this_00);
    AK::FreeHook(this_00);
    pcVar17 = "Version mismatch in resource file: ";
LAB_051a3844:
    FUN_031f5e7c((RtSerialRtonKey *)local_18,pcVar17,param_1);
    Fail(this,(string *)local_18);
    std::string::~string((string *)local_18);
  }
  RtSerialRtonReader::EndDocumentObject(*(RtSerialRtonReader **)(this + 0x1f8));
  pRVar15 = *(RtSerialRtonReader **)(this + 0x1f8);
  if (pRVar15 != (RtSerialRtonReader *)0x0) {
    RtSerialRtonReader::~RtSerialRtonReader(pRVar15);
    AK::FreeHook(pRVar15);
  }
  *(undefined8 *)(this + 0x1f8) = 0;
  bVar6 = HadError(this);
  bVar6 = bVar6 ^ 1;
LAB_051a3894:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar6);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::Init(int, int, std::string const&, std::string const&, bool) */

void __thiscall
Sexy::ResourceManager::Init
          (ResourceManager *this,int param_1,int param_2,string *param_3,string *param_4,
          bool param_5)

{
  char cVar1;
  byte bVar2;
  Sexy *this_00;
  char *__s;
  ulong uVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(param_4);
  if (cVar1 == '\0') {
    *(int *)(this + 0x204) = param_1;
    *(int *)(this + 0x208) = param_2;
    this_00 = (Sexy *)FUN_0547419c(param_3);
    uVar3 = (ulong)this_00 & 0xff;
    if (((ulong)this_00 & 0xff) == 0) {
      if (*(ResStreamsManager **)(*(long *)(this + 0x1a0) + 0x908) == (ResStreamsManager *)0x0) {
        __s = "ResourceManager::Init: RSB path provided but ResStreamsManager does not exist";
        goto LAB_051a43ec;
      }
      this_00 = (Sexy *)ResStreamsManager::InitializeWithRSB
                                  (*(ResStreamsManager **)(*(long *)(this + 0x1a0) + 0x908),param_3,
                                   (string *)(this + 0x170),(string *)(this + 0x178),param_5);
      uVar3 = (ulong)this_00 & 0xff;
      if (((ulong)this_00 & 0xff) != 0) goto LAB_051a433c;
      std::string::string(asStack_10,"ResourceManager::Init: RSB Initialization failed");
      Fail(this,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (param_5) goto LAB_051a4354;
    }
    else {
LAB_051a433c:
      SexyTime(this_00);
      bVar2 = ParseResourcesFile(this,param_4);
      uVar3 = (ulong)bVar2;
      if (bVar2 != 0) goto LAB_051a4354;
    }
    uVar3 = 0;
    ShowResourceError(this,true);
  }
  else {
    __s = 
    "ResourceManager::Init: Manifest file name is empty; please supply relative path to resources RTON file."
    ;
    uVar3 = 0;
LAB_051a43ec:
    std::string::string(asStack_10,__s);
    Fail(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    ShowResourceError(this,true);
  }
LAB_051a4354:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::AddDLCRsb(std::string const&, std::string const&, std::string const&) */

void __thiscall
Sexy::ResourceManager::AddDLCRsb
          (ResourceManager *this,string *param_1,string *param_2,string *param_3)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(param_3);
  if (cVar1 == '\0') {
    cVar1 = FUN_0547419c(param_2);
    if (cVar1 != '\0') {
LAB_051a44dc:
      uVar2 = ParseResourcesFile(this,param_3);
      goto LAB_051a44f4;
    }
    lVar3 = *(long *)(*(long *)(this + 0x1a0) + 0x908);
    if (lVar3 != 0) {
      FUN_05475d88(asStack_10,param_1);
      cVar1 = ResStreamsManager::AddDLCRSB(lVar3,asStack_10,param_2,this + 0x170,this + 0x178,0);
      std::string::~string(asStack_10);
      if (cVar1 != '\0') goto LAB_051a44dc;
    }
  }
  uVar2 = 0;
LAB_051a44f4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceManager::AddRsb(std::string const&, std::string const&, std::string const&) */

void __thiscall
Sexy::ResourceManager::AddRsb(ResourceManager *this,string *param_1,string *param_2,string *param_3)

{
  char cVar1;
  byte bVar2;
  Sexy *this_00;
  Sexy *extraout_x0;
  char *__s;
  ulong uVar3;
  ResStreamsManager *pRVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(param_3);
  if (cVar1 == '\0') {
    this_00 = (Sexy *)FUN_0547419c(param_2);
    uVar3 = (ulong)this_00 & 0xff;
    if (((ulong)this_00 & 0xff) == 0) {
      pRVar4 = *(ResStreamsManager **)(*(long *)(this + 0x1a0) + 0x908);
      if (pRVar4 == (ResStreamsManager *)0x0) {
        __s = "ResourceManager::Init: RSB path provided but ResStreamsManager does not exist";
        goto LAB_051a4638;
      }
      FUN_05475d88(asStack_10,param_1);
      cVar1 = ResStreamsManager::AddRSB
                        (pRVar4,asStack_10,param_2,this + 0x170,this + 0x178,(uint)this_00 & 0xff);
      std::string::~string(asStack_10);
      this_00 = extraout_x0;
      if (cVar1 == '\0') {
        std::string::string(asStack_10,"ResourceManager::Init: RSB Initialization failed");
        Fail(this,asStack_10);
        std::string::~string(asStack_10);
        nop();
        ShowResourceError(this,true);
        uVar3 = 0;
        goto LAB_051a45dc;
      }
    }
    SexyTime(this_00);
    bVar2 = ParseResourcesFile(this,param_3);
    uVar3 = (ulong)bVar2;
    if (bVar2 == 0) {
      ShowResourceError(this,true);
    }
  }
  else {
    __s = 
    "ResourceManager::Init: Manifest file name is empty; please supply relative path to resources RTON file."
    ;
    uVar3 = 0;
LAB_051a4638:
    std::string::string(asStack_10,__s);
    Fail(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    ShowResourceError(this,true);
  }
LAB_051a45dc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

