// Class: Sexy::ResourceInfoTypes::PopAnimRes


/* Sexy::ResourceInfoTypes::PopAnimRes::~PopAnimRes() */

void __thiscall Sexy::ResourceInfoTypes::PopAnimRes::~PopAnimRes(PopAnimRes *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2ff20;
  ResourceInfo::~ResourceInfo((ResourceInfo *)this);
  return;
}


/* Sexy::ResourceInfoTypes::PopAnimRes::~PopAnimRes() */

void __thiscall Sexy::ResourceInfoTypes::PopAnimRes::~PopAnimRes(PopAnimRes *this)

{
  ~PopAnimRes(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::ResourceInfoTypes::PopAnimRes::PopAnimRes() */

void __thiscall Sexy::ResourceInfoTypes::PopAnimRes::PopAnimRes(PopAnimRes *this)

{
  ResourceInfo::ResourceInfo((ResourceInfo *)this);
  *(undefined8 *)(this + 0x68) = 0x3ff0000000000000;
  *(undefined ***)this = &PTR_GetClass_06a2ff20;
  *(undefined8 *)(this + 0x70) = 0x3ff0000000000000;
  return;
}


/* Sexy::ResourceInfoTypes::PopAnimRes::StaticNew() */

PopAnimRes * Sexy::ResourceInfoTypes::PopAnimRes::StaticNew(void)

{
  PopAnimRes *this;
  
  this = ::operator_new(0x78);
  PopAnimRes(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfoTypes::PopAnimRes::DoLoad() */

void __thiscall Sexy::ResourceInfoTypes::PopAnimRes::DoLoad(PopAnimRes *this)

{
  char cVar1;
  PopAnim *this_00;
  char *__s;
  long lVar2;
  ResourceManager *this_01;
  undefined8 uVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  AutoCrit aAStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_28,(CritSect *)(*(long *)(this + 8) + 0x1a8));
  this_00 = ::operator_new(0xa8);
  PopAnim::PopAnim(this_00,0,(PopAnimListener *)0x0);
  dVar7 = *(double *)(this + 0x70);
  dVar6 = *(double *)(this + 0x68);
  dVar4 = (double)*(int *)(*(long *)(this + 8) + 0x208) /
          (double)*(int *)(*(long *)(this + 8) + 0x204);
  cVar1 = IsNear((float)dVar7,(float)dVar6,0.001);
  if (cVar1 == '\0') {
    cVar1 = IsNear((float)dVar7,1.0,0.001);
    if (cVar1 == '\0') {
      fVar5 = (float)(dVar4 * dVar6);
      *(float *)(this_00 + 0x2c) = (float)dVar4;
    }
    else {
      fVar5 = (float)(dVar4 * dVar6);
      *(float *)(this_00 + 0x2c) = fVar5;
    }
  }
  else {
    fVar5 = (float)(dVar4 * dVar6);
    *(float *)(this_00 + 0x2c) = (float)dVar4;
  }
  __s = *(char **)(this + 0x40);
  *(float *)(this_00 + 0x28) = fVar5;
  std::string::string(asStack_10,__s);
  PopAnim::LoadFile(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  lVar2 = *(long *)(this_00 + 0x58);
  *(float *)(this_00 + 0x2c) = (float)(dVar4 * *(double *)(this + 0x70));
  cVar1 = FUN_0547419c(lVar2 + 0x50);
  if (cVar1 == '\0') {
    this_01 = *(ResourceManager **)(this + 8);
    FUN_031f5e7c(asStack_20,"PopAnim loading error: ",lVar2 + 0x50);
    std::operator+(asStack_20," on file ");
    std::operator+(asStack_18,*(char **)(this + 0x40));
    ResourceManager::Fail(this_01,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    (**(code **)(*(long *)this_00 + 0x18))(this_00);
  }
  else {
    uVar3 = *(undefined8 *)(this + 8);
    ResourceInfo::GetRtId();
    ResourceManager::RegisterResourceInternal(asStack_10,uVar3,0,this_00,asStack_18,1);
    RtId::operator=((RtId *)(this + 0x20),(RtId *)asStack_10);
    RtId::~RtId((RtId *)asStack_10);
    RtId::~RtId((RtId *)asStack_18);
  }
  AutoCrit::~AutoCrit(aAStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfoTypes::PopAnimRes::ParseRton() */

void __thiscall Sexy::ResourceInfoTypes::PopAnimRes::ParseRton(PopAnimRes *this)

{
  RtSerialRtonKey *pRVar1;
  undefined8 uVar2;
  RtSerialRtonKey aRStack_10 [8];
  long local_8;
  
  pRVar1 = *(RtSerialRtonKey **)(*(long *)(this + 8) + 0x1f8);
  local_8 = ___stack_chk_guard;
  RtSerialRtonKey::RtSerialRtonKey(aRStack_10,"scale");
  uVar2 = RtSerialRtonReader::ReadDouble(pRVar1,1.0);
  *(undefined8 *)(this + 0x68) = uVar2;
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
  pRVar1 = *(RtSerialRtonKey **)(*(long *)(this + 8) + 0x1f8);
  RtSerialRtonKey::RtSerialRtonKey(aRStack_10,"rasterizedScale");
  uVar2 = RtSerialRtonReader::ReadDouble(pRVar1,1.0);
  *(undefined8 *)(this + 0x70) = uVar2;
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* Sexy::ResourceInfoTypes::PopAnimRes::StaticGetClass() */

long * Sexy::ResourceInfoTypes::PopAnimRes::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ResourceInfoTypes::PopAnimRes",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::ResourceInfoTypes::PopAnimRes::GetClass() const */

long * Sexy::ResourceInfoTypes::PopAnimRes::GetClass(void)

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
  (*pcVar3)(plVar1,"ResourceInfoTypes::PopAnimRes",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfoTypes::PopAnimRes::StaticClassInit() */

void Sexy::ResourceInfoTypes::PopAnimRes::StaticClassInit(void)

{
  long lVar1;
  undefined8 uVar2;
  RtName *pRVar3;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = StaticGetClass();
  uVar2 = PopAnim::StaticGetClass();
  FUN_05194914(lVar1 + 0x48,uVar2);
  pRVar3 = (RtName *)StaticGetClass();
  RtName::RtName(aRStack_18,L"PopAnim");
  ResourceInfoClass::SetManifestTypeName(pRVar3);
  RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

