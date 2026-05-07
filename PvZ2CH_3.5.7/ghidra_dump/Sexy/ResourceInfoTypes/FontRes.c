// Class: Sexy::ResourceInfoTypes::FontRes


/* Sexy::ResourceInfoTypes::FontRes::GetFont() */

RtWeakPtr<Sexy::SoundResource> * Sexy::ResourceInfoTypes::FontRes::GetFont(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x20));
  return in_x8;
}


/* Sexy::ResourceInfoTypes::FontRes::~FontRes() */

void __thiscall Sexy::ResourceInfoTypes::FontRes::~FontRes(FontRes *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2fe20;
  std::string::~string((string *)(this + 0x68));
  ResourceInfo::~ResourceInfo((ResourceInfo *)this);
  return;
}


/* Sexy::ResourceInfoTypes::FontRes::~FontRes() */

void __thiscall Sexy::ResourceInfoTypes::FontRes::~FontRes(FontRes *this)

{
  ~FontRes(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::ResourceInfoTypes::FontRes::FontRes() */

void __thiscall Sexy::ResourceInfoTypes::FontRes::FontRes(FontRes *this)

{
  ResourceInfo::ResourceInfo((ResourceInfo *)this);
  *(undefined ***)this = &PTR_GetClass_06a2fe20;
  Set8BytesTo0(this + 0x68);
  this[0x70] = (FontRes)0x0;
  return;
}


/* Sexy::ResourceInfoTypes::FontRes::StaticNew() */

FontRes * Sexy::ResourceInfoTypes::FontRes::StaticNew(void)

{
  FontRes *this;
  
  this = ::operator_new(0x80);
  FontRes(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfoTypes::FontRes::ApplyConfig() */

void __thiscall Sexy::ResourceInfoTypes::FontRes::ApplyConfig(FontRes *this)

{
  char cVar1;
  RtObject *this_00;
  ImageFont *pIVar2;
  char *pcVar3;
  code *pcVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_410 [8];
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::__exception_ptr::exception_ptr::operator!((exception_ptr *)(this + 0x20));
  if ((cVar1 == '\0') && (this[0x70] == (FontRes)0x0)) {
    GetFont();
    this_00 = (RtObject *)RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_410);
    pIVar2 = RtObject::Cast<Sexy::ImageFont>(this_00);
    RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_410);
    if (pIVar2 != (ImageFont *)0x0) {
      cVar1 = FUN_0547419c(this + 0x68);
      if (cVar1 == '\0') {
        pcVar3 = (char *)FUN_0547429c(this + 0x68);
        pcVar3 = strcpy(acStack_408,pcVar3);
        pcVar3 = strtok(pcVar3,", \r\n\t");
        while (pcVar3 != (char *)0x0) {
          pcVar4 = *(code **)(*(long *)pIVar2 + 0xd8);
          std::string::string((string *)aRStack_410,pcVar3);
          (*pcVar4)(pIVar2,aRStack_410);
          std::string::~string((string *)aRStack_410);
          nop();
          pcVar3 = strtok((char *)0x0,", \r\n\t");
        }
        (**(code **)(*(long *)pIVar2 + 0xf8))(pIVar2);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfoTypes::FontRes::ParseRton() */

void __thiscall Sexy::ResourceInfoTypes::FontRes::ParseRton(FontRes *this)

{
  FontRes FVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ResourceManager *this_00;
  RtSerialRtonKey *pRVar6;
  char *__s1;
  RtSerialRtonReader *pRVar7;
  RtSerialRtonKey aRStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar6 = *(RtSerialRtonKey **)(*(long *)(this + 8) + 0x1f8);
  RtSerialRtonKey::RtSerialRtonKey(aRStack_20,"tags");
  std::string::string(asStack_18,"");
  RtSerialRtonReader::ReadString(pRVar6,(string *)aRStack_20);
  FUN_05474278(this + 0x68,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_20);
  __s1 = *(char **)(this + 0x40);
  iVar3 = strncmp(__s1,"!sys:",5);
  if (iVar3 == 0) {
    this[0x70] = (FontRes)0x1;
    std::string::string(asStack_18,__s1);
    nop();
    FUN_05475ffc(asStack_10,asStack_18,5,0xffffffffffffffff);
    FUN_05474278(this + 0x50,asStack_10);
    std::string::~string(asStack_10);
    uVar5 = FUN_0547429c(this + 0x50);
    *(undefined8 *)(this + 0x40) = uVar5;
    pRVar7 = *(RtSerialRtonReader **)(*(long *)(this + 8) + 0x1f8);
    RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)asStack_10,"size");
    uVar4 = RtSerialRtonReader::ReadInt32(pRVar7,(RtSerialRtonKey *)asStack_10,0);
    *(undefined4 *)(this + 0x78) = uVar4;
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_10);
    if (*(int *)(this + 0x78) < 1) {
      this_00 = *(ResourceManager **)(this + 8);
      std::string::string(asStack_10,"SysFont needs point size");
      uVar2 = ResourceManager::Fail(this_00,asStack_10);
      std::string::~string(asStack_10);
      nop();
      std::string::~string(asStack_18);
    }
    else {
      uVar2 = 1;
      pRVar7 = *(RtSerialRtonReader **)(*(long *)(this + 8) + 0x1f8);
      RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)asStack_10,"bold");
      FVar1 = (FontRes)RtSerialRtonReader::ReadBool(pRVar7,(RtSerialRtonKey *)asStack_10,false);
      this[0x71] = FVar1;
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_10);
      pRVar7 = *(RtSerialRtonReader **)(*(long *)(this + 8) + 0x1f8);
      RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)asStack_10,"italic");
      FVar1 = (FontRes)RtSerialRtonReader::ReadBool(pRVar7,(RtSerialRtonKey *)asStack_10,false);
      this[0x72] = FVar1;
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_10);
      pRVar7 = *(RtSerialRtonReader **)(*(long *)(this + 8) + 0x1f8);
      RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)asStack_10,"shadow");
      FVar1 = (FontRes)RtSerialRtonReader::ReadBool(pRVar7,(RtSerialRtonKey *)asStack_10,false);
      this[0x74] = FVar1;
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_10);
      pRVar7 = *(RtSerialRtonReader **)(*(long *)(this + 8) + 0x1f8);
      RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)asStack_10,"underline");
      FVar1 = (FontRes)RtSerialRtonReader::ReadBool(pRVar7,(RtSerialRtonKey *)asStack_10,false);
      this[0x73] = FVar1;
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_10);
      std::string::~string(asStack_18);
    }
  }
  else {
    this[0x70] = (FontRes)0x0;
    uVar2 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* Sexy::ResourceInfoTypes::FontRes::StaticGetClass() */

long * Sexy::ResourceInfoTypes::FontRes::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceInfoClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ResourceInfo::StaticGetClass();
  (*pcVar3)(plVar1,"ResourceInfoTypes::FontRes",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::ResourceInfoTypes::FontRes::GetClass() const */

long * Sexy::ResourceInfoTypes::FontRes::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceInfoClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ResourceInfo::StaticGetClass();
  (*pcVar3)(plVar1,"ResourceInfoTypes::FontRes",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfoTypes::FontRes::StaticClassInit() */

void Sexy::ResourceInfoTypes::FontRes::StaticClassInit(void)

{
  long lVar1;
  undefined8 uVar2;
  RtName *pRVar3;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = StaticGetClass();
  uVar2 = Font::StaticGetClass();
  FUN_05194914(lVar1 + 0x48,uVar2);
  pRVar3 = (RtName *)StaticGetClass();
  RtName::RtName(aRStack_18,L"Font");
  ResourceInfoClass::SetManifestTypeName(pRVar3);
  RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfoTypes::FontRes::DoLoad() */

void __thiscall Sexy::ResourceInfoTypes::FontRes::DoLoad(FontRes *this)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  ImageFont *this_00;
  long *plVar5;
  undefined8 uVar6;
  InfoClass *pIVar7;
  RtObject *this_01;
  Font *pFVar8;
  _func_void *extraout_x1;
  ResourceManager *pRVar9;
  code *pcVar10;
  AutoCrit aAStack_428 [8];
  string asStack_420 [8];
  string asStack_418 [8];
  exception_ptr aeStack_410 [8];
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_428,(CritSect *)(*(long *)(this + 8) + 0x1a8));
  std::__exception_ptr::exception_ptr::exception_ptr(aeStack_410,extraout_x1);
  RtId::operator=((RtId *)(this + 0x20),(RtId *)aeStack_410);
  RtId::~RtId((RtId *)aeStack_410);
  std::string::string(asStack_420,*(char **)(this + 0x40));
  nop();
  if (this[0x70] == (FontRes)0x0) {
    pcVar4 = (char *)FUN_0547429c(asStack_420);
    iVar3 = strncmp(pcVar4,"!ref:",5);
    if (iVar3 == 0) {
      FUN_05475ffc(asStack_418,asStack_420,5,0xffffffffffffffff);
      pIVar7 = ResourceManager::GetResInfoForStringIdT<Sexy::Font>
                         (*(ResourceManager **)(this + 8),asStack_418);
      if (pIVar7 != (InfoClass *)0x0) {
        this_01 = (RtObject *)ResourceInfo::GetInstancePtr();
        pFVar8 = RtObject::Cast<Sexy::Font>(this_01);
        if (pFVar8 != (Font *)0x0) {
          this_00 = (ImageFont *)(**(code **)(*(long *)pFVar8 + 0xa0))();
          RtId::operator=((RtId *)(this + 0x28),(RtId *)(pIVar7 + 0x18));
          std::string::~string(asStack_418);
          goto LAB_0519d500;
        }
      }
      pRVar9 = *(ResourceManager **)(this + 8);
      FUN_031f5e7c(aeStack_410,"Ref Font not found: ",asStack_418);
      uVar1 = ResourceManager::Fail(pRVar9,(string *)aeStack_410);
      std::string::~string((string *)aeStack_410);
      std::string::~string(asStack_418);
      goto LAB_0519d570;
    }
    std::string::string((string *)aeStack_410,"");
    this_00 = ::operator_new(0x88);
    ImageFont::ImageFont
              (this_00,*(SexyAppBase **)(*(long *)(this + 8) + 0x1a0),asStack_420,
               (string *)aeStack_410);
    std::string::~string((string *)aeStack_410);
    nop();
  }
  else {
    this_00 = ::operator_new(0x48);
    SysFont::SysFont((SysFont *)this_00,(SysFont *)asStack_420);
    *(FontRes *)(this_00 + 0x40) = this[0x74];
    *(SysFont *)(this_00 + 0x41) = (SysFont)0x0;
  }
LAB_0519d500:
  plVar5 = (long *)(**(code **)(*(long *)this_00 + 0x48))(this_00);
  if (plVar5 != (long *)0x0) {
    if ((plVar5[5] == 0) || (*(char *)(plVar5[5] + 0x88) == '\0')) {
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
      pRVar9 = *(ResourceManager **)(this + 8);
      uVar6 = FUN_0547429c(asStack_420);
      StrFormat("Failed to load font: %s",aeStack_410,uVar6);
      uVar1 = ResourceManager::Fail(pRVar9,(string *)aeStack_410);
      std::string::~string((string *)aeStack_410);
      goto LAB_0519d570;
    }
    std::vector<std::string,std::allocator<std::string>>::clear
              ((vector<std::string,std::allocator<std::string>> *)(plVar5 + 7));
    *(undefined1 *)((long)plVar5 + 0x51) = 0;
    cVar2 = FUN_0547419c(this + 0x68);
    if (cVar2 == '\0') {
      pcVar4 = (char *)FUN_0547429c(this + 0x68);
      pcVar4 = strcpy(acStack_408,pcVar4);
      pcVar4 = strtok(pcVar4,", \r\n\t");
      while (pcVar4 != (char *)0x0) {
        pcVar10 = *(code **)(*plVar5 + 0xd8);
        std::string::string((string *)aeStack_410,pcVar4);
        (*pcVar10)(plVar5,aeStack_410);
        std::string::~string((string *)aeStack_410);
        nop();
        pcVar4 = strtok((char *)0x0,", \r\n\t");
      }
      (**(code **)(*plVar5 + 0xf8))(plVar5);
    }
  }
  uVar6 = *(undefined8 *)(this + 8);
  uVar1 = 1;
  ResourceInfo::GetRtId();
  ResourceManager::RegisterResourceInternal(aeStack_410,uVar6,0,this_00,(RtId *)asStack_418,1);
  RtId::operator=((RtId *)(this + 0x20),(RtId *)aeStack_410);
  RtId::~RtId((RtId *)aeStack_410);
  RtId::~RtId((RtId *)asStack_418);
  (**(code **)(*(long *)this + 0x48))(this);
LAB_0519d570:
  std::string::~string(asStack_420);
  AutoCrit::~AutoCrit(aAStack_428);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

