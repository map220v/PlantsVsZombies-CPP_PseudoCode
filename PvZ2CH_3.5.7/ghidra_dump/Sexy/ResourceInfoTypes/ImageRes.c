// Class: Sexy::ResourceInfoTypes::ImageRes


/* Sexy::ResourceInfoTypes::ImageRes::~ImageRes() */

void __thiscall Sexy::ResourceInfoTypes::ImageRes::~ImageRes(ImageRes *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2fca0;
  std::string::~string((string *)(this + 0x80));
  ResourceInfo::~ResourceInfo((ResourceInfo *)this);
  return;
}


/* Sexy::ResourceInfoTypes::ImageRes::~ImageRes() */

void __thiscall Sexy::ResourceInfoTypes::ImageRes::~ImageRes(ImageRes *this)

{
  ~ImageRes(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::ResourceInfoTypes::ImageRes::ImageRes() */

void __thiscall Sexy::ResourceInfoTypes::ImageRes::ImageRes(ImageRes *this)

{
  ResourceInfo::ResourceInfo((ResourceInfo *)this);
  *(undefined ***)this = &PTR_GetClass_06a2fca0;
  Point::Point((Point *)(this + 100));
  Set8BytesTo0(this + 0x80);
  return;
}


/* Sexy::ResourceInfoTypes::ImageRes::StaticNew() */

ImageRes * Sexy::ResourceInfoTypes::ImageRes::StaticNew(void)

{
  ImageRes *this;
  
  this = ::operator_new(0x90);
  ImageRes(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfoTypes::ImageRes::ParseRton() */

void __thiscall Sexy::ResourceInfoTypes::ImageRes::ParseRton(ImageRes *this)

{
  uint uVar1;
  ImageRes IVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined2 uVar6;
  int iVar7;
  undefined4 uVar8;
  char *__s;
  RtSerialRtonKey *pRVar9;
  ResourceManager *this_00;
  RtSerialRtonReader *pRVar10;
  undefined8 uVar11;
  string asStack_28 [8];
  RtSerialRtonKey aRStack_20 [8];
  RtSerialRtonKey aRStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar10 = *(RtSerialRtonReader **)(*(long *)(this + 8) + 0x1f8);
  RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_10,"a4r4g4b4");
  IVar2 = (ImageRes)RtSerialRtonReader::ReadBool(pRVar10,(RtSerialRtonKey *)&local_10,false);
  this[0x6c] = IVar2;
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
  pRVar10 = *(RtSerialRtonReader **)(*(long *)(this + 8) + 0x1f8);
  RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_10,"nobits");
  IVar2 = (ImageRes)RtSerialRtonReader::ReadBool(pRVar10,(RtSerialRtonKey *)&local_10,false);
  this[0x6f] = IVar2;
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
  if ((this[0x6f] != (ImageRes)0x0) &&
     (cVar3 = SexyAppBase::Is3DAccelerated(*(SexyAppBase **)(*(long *)(this + 8) + 0x1a0)),
     cVar3 == '\0')) {
    this[0x6f] = (ImageRes)0x0;
  }
  pRVar10 = *(RtSerialRtonReader **)(*(long *)(this + 8) + 0x1f8);
  RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_10,"a8r8g8b8");
  IVar2 = (ImageRes)RtSerialRtonReader::ReadBool(pRVar10,(RtSerialRtonKey *)&local_10,false);
  this[0x6d] = IVar2;
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
  pRVar10 = *(RtSerialRtonReader **)(*(long *)(this + 8) + 0x1f8);
  RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_10,"dither16");
  IVar2 = (ImageRes)RtSerialRtonReader::ReadBool(pRVar10,(RtSerialRtonKey *)&local_10,false);
  this[0x6e] = IVar2;
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
  pRVar10 = *(RtSerialRtonReader **)(*(long *)(this + 8) + 0x1f8);
  RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_10,"cubemap");
  cVar3 = RtSerialRtonReader::ReadBool(pRVar10,(RtSerialRtonKey *)&local_10,false);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
  pRVar10 = *(RtSerialRtonReader **)(*(long *)(this + 8) + 0x1f8);
  RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_10,"volumemap");
  cVar4 = RtSerialRtonReader::ReadBool(pRVar10,(RtSerialRtonKey *)&local_10,false);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
  pRVar10 = *(RtSerialRtonReader **)(*(long *)(this + 8) + 0x1f8);
  RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_10,"notrirep");
  IVar2 = (ImageRes)RtSerialRtonReader::ReadBool(pRVar10,(RtSerialRtonKey *)&local_10,false);
  this[0x70] = IVar2;
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
  pRVar10 = *(RtSerialRtonReader **)(*(long *)(this + 8) + 0x1f8);
  RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_10,"atlas");
  IVar2 = (ImageRes)RtSerialRtonReader::ReadBool(pRVar10,(RtSerialRtonKey *)&local_10,false);
  this[0x71] = IVar2;
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
  Point::Point((Point *)&local_10,0,0);
  *(undefined8 *)(this + 100) = local_10;
  pRVar10 = *(RtSerialRtonReader **)(*(long *)(this + 8) + 0x1f8);
  RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_10,"x");
  iVar7 = RtSerialRtonReader::ReadInt32(pRVar10,(RtSerialRtonKey *)&local_10,0x7fffffff);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
  if (iVar7 != 0x7fffffff) {
    *(int *)(this + 100) = iVar7;
  }
  pRVar10 = *(RtSerialRtonReader **)(*(long *)(this + 8) + 0x1f8);
  RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_10,"y");
  iVar7 = RtSerialRtonReader::ReadInt32(pRVar10,(RtSerialRtonKey *)&local_10,0x7fffffff);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
  if (iVar7 != 0x7fffffff) {
    *(int *)(this + 0x68) = iVar7;
  }
  pRVar9 = *(RtSerialRtonKey **)(*(long *)(this + 8) + 0x1f8);
  RtSerialRtonKey::RtSerialRtonKey(aRStack_18,"variant");
  std::string::string((string *)&local_10,"");
  RtSerialRtonReader::ReadString(pRVar9,(string *)aRStack_18);
  std::string::~string((string *)&local_10);
  nop();
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_18);
  pRVar10 = *(RtSerialRtonReader **)(*(long *)(this + 8) + 0x1f8);
  RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_10,"rows");
  uVar8 = RtSerialRtonReader::ReadInt32(pRVar10,(RtSerialRtonKey *)&local_10,1);
  *(undefined4 *)(this + 0x74) = uVar8;
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
  pRVar10 = *(RtSerialRtonReader **)(*(long *)(this + 8) + 0x1f8);
  RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_10,"cols");
  uVar8 = RtSerialRtonReader::ReadInt32(pRVar10,(RtSerialRtonKey *)&local_10,1);
  *(undefined4 *)(this + 0x78) = uVar8;
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
  *(undefined2 *)(this + 0x8e) = 0;
  *(undefined2 *)(this + 0x8c) = 0;
  pRVar9 = *(RtSerialRtonKey **)(*(long *)(this + 8) + 0x1f8);
  *(undefined2 *)(this + 0x8a) = 0;
  *(undefined2 *)(this + 0x88) = 0;
  RtSerialRtonKey::RtSerialRtonKey(aRStack_20,"parent");
  std::string::string((string *)aRStack_18,"");
  RtSerialRtonReader::ReadString(pRVar9,(string *)aRStack_20);
  FUN_05474278(this + 0x80,(RtSerialRtonKey *)&local_10);
  std::string::~string((string *)&local_10);
  std::string::~string((string *)aRStack_18);
  nop();
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_20);
  cVar5 = FUN_0547419c(this + 0x80);
  if (cVar5 == '\0') {
    pRVar10 = *(RtSerialRtonReader **)(*(long *)(this + 8) + 0x1f8);
    RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_10,"ax");
    uVar6 = RtSerialRtonReader::ReadInt32(pRVar10,(RtSerialRtonKey *)&local_10,0);
    *(undefined2 *)(this + 0x88) = uVar6;
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
    pRVar10 = *(RtSerialRtonReader **)(*(long *)(this + 8) + 0x1f8);
    RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_10,"ay");
    uVar6 = RtSerialRtonReader::ReadInt32(pRVar10,(RtSerialRtonKey *)&local_10,0);
    *(undefined2 *)(this + 0x8a) = uVar6;
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
    pRVar10 = *(RtSerialRtonReader **)(*(long *)(this + 8) + 0x1f8);
    RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_10,"aw");
    uVar6 = RtSerialRtonReader::ReadInt32(pRVar10,(RtSerialRtonKey *)&local_10,0);
    *(undefined2 *)(this + 0x8c) = uVar6;
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
    pRVar10 = *(RtSerialRtonReader **)(*(long *)(this + 8) + 0x1f8);
    RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_10,"ah");
    uVar6 = RtSerialRtonReader::ReadInt32(pRVar10,(RtSerialRtonKey *)&local_10,0);
    *(undefined2 *)(this + 0x8e) = uVar6;
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
  }
  if (cVar3 == '\0') {
    uVar11 = 1;
    if ((cVar4 == '\0') ||
       ((uVar1 = *(int *)(this + 0x74) * *(int *)(this + 0x78), uVar1 != 0 &&
        ((uVar1 - 1 & uVar1) == 0)))) goto LAB_05198750;
    this_00 = *(ResourceManager **)(this + 8);
    __s = "Invalid VolumeMap definition; must have a pow2 cell count (check rows & cols values).";
  }
  else {
    uVar11 = 1;
    if (*(int *)(this + 0x74) * *(int *)(this + 0x78) == 6) goto LAB_05198750;
    this_00 = *(ResourceManager **)(this + 8);
    __s = "Invalid CubeMap definition; must have 6 cells (check rows & cols values).";
  }
  std::string::string((string *)&local_10,__s);
  uVar11 = 0;
  ResourceManager::Fail(this_00,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
LAB_05198750:
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


/* Sexy::ResourceInfoTypes::ImageRes::StaticGetClass() */

long * Sexy::ResourceInfoTypes::ImageRes::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ResourceInfoTypes::ImageRes",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::ResourceInfoTypes::ImageRes::GetClass() const */

long * Sexy::ResourceInfoTypes::ImageRes::GetClass(void)

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
  (*pcVar3)(plVar1,"ResourceInfoTypes::ImageRes",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfoTypes::ImageRes::StaticClassInit() */

void Sexy::ResourceInfoTypes::ImageRes::StaticClassInit(void)

{
  long lVar1;
  undefined8 uVar2;
  RtName *pRVar3;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = StaticGetClass();
  uVar2 = Image::StaticGetClass();
  FUN_05194914(lVar1 + 0x48,uVar2);
  lVar1 = StaticGetClass();
  FUN_05194e28(lVar1 + 0x50);
  pRVar3 = (RtName *)StaticGetClass();
  RtName::RtName(aRStack_18,L"Image");
  ResourceInfoClass::SetManifestTypeName(pRVar3);
  RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfoTypes::ImageRes::ApplyConfig() */

void __thiscall Sexy::ResourceInfoTypes::ImageRes::ApplyConfig(ImageRes *this)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  undefined4 uVar1;
  ImageRes IVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  char cVar7;
  RtObject *pRVar8;
  DeviceImage *pDVar9;
  char *__s;
  DeviceImage *pDVar10;
  string *psVar11;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar7 = CompiledMap::Initialized((CompiledMap *)(this + 0x28));
  if ((cVar7 == '\0') &&
     (cVar7 = std::__exception_ptr::exception_ptr::operator!((exception_ptr *)(this + 0x20)),
     cVar7 == '\0')) {
    FontRes::GetFont();
    pRVar8 = (RtObject *)RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pDVar9 = RtObject::Cast<Sexy::DeviceImage>(pRVar8);
    RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (pDVar9 != (DeviceImage *)0x0) {
      pDVar10 = pDVar9 + 0x18;
      FUN_05194e38(pDVar10);
      if (this[0x70] != (ImageRes)0x0) {
        FUN_05194904(pDVar10,0x80);
      }
      uVar1 = *(undefined4 *)(this + 0x78);
      IVar2 = this[0x6e];
      *(undefined4 *)(pDVar9 + 0x40) = *(undefined4 *)(this + 0x74);
      *(undefined4 *)(pDVar9 + 0x44) = uVar1;
      if (IVar2 != (ImageRes)0x0) {
        pDVar9[0x96] = (DeviceImage)0x1;
      }
      if (this[0x6c] != (ImageRes)0x0) {
        FUN_05194904(pDVar10,4);
      }
      if (this[0x6d] != (ImageRes)0x0) {
        FUN_05194904(pDVar10,8);
      }
      FUN_05194904(pDVar10,1);
      if (this[0x71] != (ImageRes)0x0) {
        FUN_05194904(pDVar10,0x201);
      }
      cVar7 = FUN_0547419c(this + 0x80);
      if (cVar7 == '\0') {
        psVar11 = *(string **)(this + 8);
        __s = (char *)FUN_0547429c(this + 0x80);
        this_00 = (RtWeakPtr<PowerPropertySheet> *)(pDVar9 + 0x48);
        std::string::string(asStack_18,__s);
        ResourceManager::GetResourceForStringIdT<Sexy::Image>(psVar11,SUB81(asStack_18,0));
        RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_10);
        RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        std::string::~string(asStack_18);
        nop();
        uVar3 = *(ushort *)(this + 0x88);
        uVar4 = *(ushort *)(this + 0x8c);
        *(uint *)(pDVar9 + 0x54) = (uint)*(ushort *)(this + 0x8a);
        *(uint *)(pDVar9 + 0x50) = (uint)uVar3;
        pRVar8 = (RtObject *)
                 RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        pDVar10 = RtObject::Cast<Sexy::DeviceImage>(pRVar8);
        uVar5 = *(ushort *)(this + 0x8e);
        uVar6 = *(ushort *)(this + 0x8a);
        *(uint *)(pDVar9 + 0x58) = (uint)uVar3 + (int)((float)uVar4 * *(float *)(pDVar10 + 0x150));
        pRVar8 = (RtObject *)
                 RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        pDVar10 = RtObject::Cast<Sexy::DeviceImage>(pRVar8);
        *(uint *)(pDVar9 + 0x5c) = (uint)uVar6 + (int)((float)uVar5 * *(float *)(pDVar10 + 0x150));
      }
      (**(code **)(*(long *)pDVar9 + 0xa0))(pDVar9);
      IVar2 = this[0x6f];
      *(ImageRes *)(pDVar9 + 0x94) = IVar2;
      if (IVar2 != (ImageRes)0x0) {
        AutoCrit::AutoCrit((AutoCrit *)aRStack_10,(CritSect *)(gSexyAppBase + 0x4b0));
        (**(code **)(*(long *)pDVar9 + 0x70))(pDVar9);
        AutoCrit::~AutoCrit((AutoCrit *)aRStack_10);
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
/* Sexy::ResourceInfoTypes::ImageRes::DoLoad() */

void __thiscall Sexy::ResourceInfoTypes::ImageRes::DoLoad(ImageRes *this)

{
  RtId *pRVar1;
  CompiledMap *this_00;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *__s1;
  InfoClass *pIVar8;
  ResourceInfo *pRVar9;
  RtDb *pRVar10;
  Image *pIVar11;
  DeviceImage *pDVar12;
  undefined8 uVar13;
  _func_void *extraout_x1;
  ResourceManager *pRVar14;
  bool local_79;
  AutoCrit aAStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [16];
  RtWeakPtr<Sexy::SoundResource> local_58;
  byte local_57;
  byte local_56;
  RtId aRStack_50 [8];
  size_t local_48;
  uint local_40;
  uint local_3c;
  string asStack_38 [8];
  RtId aRStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_78,(CritSect *)(*(long *)(this + 8) + 0x1a8));
  std::string::string(asStack_70,*(char **)(this + 0x40));
  nop();
  __s1 = (char *)FUN_0547429c(asStack_70);
  iVar5 = strncmp(__s1,"!ref:",5);
  if (iVar5 == 0) {
    FUN_05475ffc(asStack_68,asStack_70,5,0xffffffffffffffff);
    pIVar8 = ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                       (*(ResourceManager **)(this + 8),asStack_68);
    if (pIVar8 == (InfoClass *)0x0) {
      std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)aRStack_30,extraout_x1);
    }
    else {
      ResourceInfo::GetInstanceRtId();
    }
    RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(&local_58,(RtWeakPtrBase *)aRStack_30);
    RtId::~RtId(aRStack_30);
    cVar2 = RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)&local_58);
    if ((cVar2 == '\0') &&
       (pRVar9 = RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_58),
       pRVar9 != (ResourceInfo *)0x0)) {
      pRVar1 = (RtId *)(this + 0x20);
      uVar4 = 1;
      uVar6 = RtId::GetSlotIndex((RtId *)(this + 0x18));
      uVar7 = RtId::GetRevision((RtId *)(this + 0x18));
      RtId::RtId(aRStack_30,0x2006,uVar6,uVar7);
      RtId::operator=(pRVar1,aRStack_30);
      RtId::~RtId(aRStack_30);
      pRVar10 = (RtDb *)RtDb::GetDb();
      pRVar9 = RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_58);
      RtDb::ReplaceObjectForId(pRVar10,pRVar1,(RtObject *)pRVar9);
      pRVar10 = (RtDb *)RtDb::GetDb();
      RtDb::SetObjectDeletionMode(pRVar10,pRVar1,2);
      RtId::operator=((RtId *)(this + 0x28),(RtId *)(pIVar8 + 0x18));
    }
    else {
      pRVar14 = *(ResourceManager **)(this + 8);
      FUN_031f5e7c(aRStack_30,"Ref Image not found: ",asStack_68);
      uVar4 = ResourceManager::Fail(pRVar14,(string *)aRStack_30);
      std::string::~string((string *)aRStack_30);
    }
    RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    std::string::~string(asStack_68);
    goto LAB_051a02bc;
  }
  bVar3 = FUN_0547419c(this + 0x80);
  ResourceManager::GetImageOptions::GetImageOptions((GetImageOptions *)&local_58);
  local_48 = *(size_t *)(this + 0x30);
  local_58 = (RtWeakPtr<Sexy::SoundResource>)0x1;
  std::string::append(asStack_38,"",1);
  RtMixedPtr<Sexy::Image>::RtMixedPtr();
  ResourceManager::GetImage
            (*(ResourceManager **)(this + 8),(RtMixedPtr *)asStack_68,asStack_70,
             (GetImageOptions *)&local_58,(bool *)0x0);
  pIVar11 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)asStack_68);
  if ((pIVar11 == (Image *)0x0) ||
     (pIVar11 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)asStack_68),
     pIVar11 == (Image *)0x0)) {
    local_79 = false;
    ResourceManager::GetImageOptions::GetImageOptions((GetImageOptions *)aRStack_30);
    ResourceManager::GetImageOptions::operator=
              ((GetImageOptions *)&local_58,(GetImageOptions *)aRStack_30);
    ResourceManager::GetImageOptions::~GetImageOptions((GetImageOptions *)aRStack_30);
    local_57 = (byte)this[0x70] ^ 1;
    local_56 = bVar3 ^ 1;
    ResourceInfo::GetRtId();
    RtId::operator=(aRStack_50,aRStack_30);
    RtId::~RtId(aRStack_30);
    local_48 = *(size_t *)(this + 0x30);
    std::string::append(asStack_38,"",local_48);
    local_40 = 0;
    local_3c = 0;
    if ((bVar3 ^ 1) != 0) {
      local_40 = (uint)*(ushort *)(this + 0x8c);
      local_3c = (uint)*(ushort *)(this + 0x8e);
    }
    ResourceManager::GetImage
              (*(ResourceManager **)(this + 8),(RtMixedPtr *)asStack_68,asStack_70,
               (GetImageOptions *)&local_58,&local_79);
    cVar2 = RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)asStack_68);
    if (cVar2 == '\0') {
      pIVar11 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)asStack_68);
      pDVar12 = RtObject::Cast<Sexy::DeviceImage>((RtObject *)pIVar11);
      if (pDVar12 != (DeviceImage *)0x0) {
        uVar4 = 1;
        RtMixedPtrBase::GetId();
        RtId::operator=((RtId *)(this + 0x20),aRStack_30);
        RtId::~RtId(aRStack_30);
        (**(code **)(*(long *)this + 0x48))(this);
        goto LAB_051a03d0;
      }
    }
    pRVar14 = *(ResourceManager **)(this + 8);
    uVar13 = FUN_0547429c(asStack_70);
    StrFormat("Failed to load image: %s",aRStack_30,uVar13);
    uVar4 = ResourceManager::Fail(pRVar14,(string *)aRStack_30);
    std::string::~string((string *)aRStack_30);
  }
  else {
    this_00 = (CompiledMap *)(this + 0x18);
    cVar2 = CompiledMap::Initialized(this_00);
    if ((cVar2 == '\0') || (iVar5 = RtId::GetTableIndex((RtId *)this_00), iVar5 != 0x2004)) {
      RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)asStack_68);
      RtId::operator=((RtId *)(this + 0x20),aRStack_30);
      RtId::~RtId(aRStack_30);
    }
    else {
      pRVar1 = (RtId *)(this + 0x20);
      uVar6 = RtId::GetSlotIndex((RtId *)this_00);
      uVar7 = RtId::GetRevision((RtId *)this_00);
      RtId::RtId(aRStack_30,0x2006,uVar6,uVar7);
      RtId::operator=(pRVar1,aRStack_30);
      RtId::~RtId(aRStack_30);
      pRVar10 = (RtDb *)RtDb::GetDb();
      pIVar11 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)asStack_68);
      RtDb::ReplaceObjectForId(pRVar10,pRVar1,(RtObject *)pIVar11);
      pRVar10 = (RtDb *)RtDb::GetDb();
      RtDb::SetObjectDeletionMode(pRVar10,pRVar1,2);
    }
    uVar4 = 1;
    RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)asStack_68);
    BaseResource::GetResourceInfoRtId();
    RtId::operator=((RtId *)(this + 0x28),aRStack_30);
    RtId::~RtId(aRStack_30);
  }
LAB_051a03d0:
  RtMixedPtr<Sexy::Image>::~RtMixedPtr((RtMixedPtr<Sexy::Image> *)asStack_68);
  ResourceManager::GetImageOptions::~GetImageOptions((GetImageOptions *)&local_58);
LAB_051a02bc:
  std::string::~string(asStack_70);
  AutoCrit::~AutoCrit(aAStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfoTypes::ImageRes::StaticPreCreateFilter(Sexy::ResourceManager*) */

void Sexy::ResourceInfoTypes::ImageRes::StaticPreCreateFilter(ResourceManager *param_1)

{
  char cVar1;
  long lVar2;
  RtSerialRtonKey *pRVar3;
  RtSerialRtonReader *this;
  uint local_14;
  RtSerialRtonKey aRStack_10 [8];
  long local_8;
  
  pRVar3 = *(RtSerialRtonKey **)(param_1 + 0x1f8);
  local_8 = ___stack_chk_guard;
  RtSerialRtonKey::RtSerialRtonKey(aRStack_10,"id");
  lVar2 = RtSerialRtonReader::ReadStringDirect(pRVar3);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
  if (lVar2 != 0) {
    this = *(RtSerialRtonReader **)(param_1 + 0x1f8);
    local_14 = 0;
    RtSerialRtonKey::RtSerialRtonKey(aRStack_10,"path");
    cVar1 = RtSerialRtonReader::BeginArray(this,aRStack_10,&local_14);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
    if (cVar1 != '\0') {
      RtSerialRtonReader::EndArray(*(RtSerialRtonReader **)(param_1 + 0x1f8));
      goto LAB_051a22b0;
    }
  }
  cVar1 = '\0';
LAB_051a22b0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}

