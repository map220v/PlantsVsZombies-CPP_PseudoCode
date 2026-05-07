// Class: Sexy::ResourceInfoTypes::SoundRes


/* Sexy::ResourceInfoTypes::SoundRes::~SoundRes() */

void __thiscall Sexy::ResourceInfoTypes::SoundRes::~SoundRes(SoundRes *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2fd20;
  ResourceInfo::~ResourceInfo((ResourceInfo *)this);
  return;
}


/* Sexy::ResourceInfoTypes::SoundRes::~SoundRes() */

void __thiscall Sexy::ResourceInfoTypes::SoundRes::~SoundRes(SoundRes *this)

{
  ~SoundRes(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::ResourceInfoTypes::SoundRes::SoundRes() */

void __thiscall Sexy::ResourceInfoTypes::SoundRes::SoundRes(SoundRes *this)

{
  ResourceInfo::ResourceInfo((ResourceInfo *)this);
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined ***)this = &PTR_GetClass_06a2fd20;
  *(undefined8 *)(this + 0x68) = 0xbff0000000000000;
  return;
}


/* Sexy::ResourceInfoTypes::SoundRes::StaticNew() */

SoundRes * Sexy::ResourceInfoTypes::SoundRes::StaticNew(void)

{
  SoundRes *this;
  
  this = ::operator_new(0x78);
  SoundRes(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfoTypes::SoundRes::IsResourceValid() */

void Sexy::ResourceInfoTypes::SoundRes::IsResourceValid(void)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FontRes::GetFont();
  bVar1 = RtWeakPtr::operator_cast_to_bool(aRStack_10);
  uVar3 = (uint)bVar1;
  if (bVar1) {
    lVar2 = RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    uVar3 = ~*(uint *)(lVar2 + 0x18) >> 0x1f;
  }
  RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfoTypes::SoundRes::ParseRton() */

void __thiscall Sexy::ResourceInfoTypes::SoundRes::ParseRton(SoundRes *this)

{
  int iVar1;
  RtSerialRtonKey *pRVar2;
  RtSerialRtonReader *this_00;
  double dVar3;
  RtSerialRtonKey aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = *(RtSerialRtonKey **)(*(long *)(this + 8) + 0x1f8);
  RtSerialRtonKey::RtSerialRtonKey(aRStack_10,"volume");
  dVar3 = (double)RtSerialRtonReader::ReadDouble(pRVar2,-99999.0);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
  if ((float)dVar3 != -99999.0) {
    *(double *)(this + 0x68) = (double)(float)dVar3;
  }
  this_00 = *(RtSerialRtonReader **)(*(long *)(this + 8) + 0x1f8);
  RtSerialRtonKey::RtSerialRtonKey(aRStack_10,"pan");
  iVar1 = RtSerialRtonReader::ReadInt32(this_00,aRStack_10,99999);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
  if (iVar1 != 99999) {
    *(int *)(this + 0x70) = iVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* Sexy::ResourceInfoTypes::SoundRes::StaticGetClass() */

long * Sexy::ResourceInfoTypes::SoundRes::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ResourceInfoTypes::SoundRes",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::ResourceInfoTypes::SoundRes::GetClass() const */

long * Sexy::ResourceInfoTypes::SoundRes::GetClass(void)

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
  (*pcVar3)(plVar1,"ResourceInfoTypes::SoundRes",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfoTypes::SoundRes::StaticClassInit() */

void Sexy::ResourceInfoTypes::SoundRes::StaticClassInit(void)

{
  long lVar1;
  undefined8 uVar2;
  RtName *pRVar3;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = StaticGetClass();
  uVar2 = SoundResource::StaticGetClass();
  FUN_05194914(lVar1 + 0x48,uVar2);
  pRVar3 = (RtName *)StaticGetClass();
  RtName::RtName(aRStack_18,L"Sound");
  ResourceInfoClass::SetManifestTypeName(pRVar3);
  RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

