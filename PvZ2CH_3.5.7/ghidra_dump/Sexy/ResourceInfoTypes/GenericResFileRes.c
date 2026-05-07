// Class: Sexy::ResourceInfoTypes::GenericResFileRes


/* Sexy::ResourceInfoTypes::GenericResFileRes::~GenericResFileRes() */

void __thiscall
Sexy::ResourceInfoTypes::GenericResFileRes::~GenericResFileRes(GenericResFileRes *this)

{
  *(undefined ***)this = &PTR_GetClass_06a300a0;
  ResourceInfo::~ResourceInfo((ResourceInfo *)this);
  return;
}


/* Sexy::ResourceInfoTypes::GenericResFileRes::~GenericResFileRes() */

void __thiscall
Sexy::ResourceInfoTypes::GenericResFileRes::~GenericResFileRes(GenericResFileRes *this)

{
  ~GenericResFileRes(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::ResourceInfoTypes::GenericResFileRes::GenericResFileRes() */

void __thiscall
Sexy::ResourceInfoTypes::GenericResFileRes::GenericResFileRes(GenericResFileRes *this)

{
  ResourceInfo::ResourceInfo((ResourceInfo *)this);
  *(undefined ***)this = &PTR_GetClass_06a300a0;
  return;
}


/* Sexy::ResourceInfoTypes::GenericResFileRes::StaticNew() */

GenericResFileRes * Sexy::ResourceInfoTypes::GenericResFileRes::StaticNew(void)

{
  GenericResFileRes *this;
  
  this = ::operator_new(0x68);
  GenericResFileRes(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfoTypes::GenericResFileRes::DoLoad() */

void __thiscall Sexy::ResourceInfoTypes::GenericResFileRes::DoLoad(GenericResFileRes *this)

{
  GenericResFile *this_00;
  size_t __n;
  undefined8 uVar1;
  AutoCrit aAStack_20 [8];
  RtId aRStack_18 [8];
  RtId aRStack_10 [8];
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  __n = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_20,(CritSect *)(*(long *)(this + 8) + 0x1a8));
  this_00 = ::operator_new(0x20);
  GenericResFile::GenericResFile(this_00);
  std::string::append((string *)(this_00 + 0x18),*(char **)(this + 0x40),__n);
  uVar1 = *(undefined8 *)(this + 8);
  ResourceInfo::GetRtId();
  ResourceManager::RegisterResourceInternal(aRStack_10,uVar1,0,this_00,aRStack_18,1);
  RtId::operator=((RtId *)(this + 0x20),aRStack_10);
  RtId::~RtId(aRStack_10);
  RtId::~RtId(aRStack_18);
  AutoCrit::~AutoCrit(aAStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* Sexy::ResourceInfoTypes::GenericResFileRes::StaticGetClass() */

long * Sexy::ResourceInfoTypes::GenericResFileRes::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ResourceInfoTypes::GenericResFileRes",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::ResourceInfoTypes::GenericResFileRes::GetClass() const */

long * Sexy::ResourceInfoTypes::GenericResFileRes::GetClass(void)

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
  (*pcVar3)(plVar1,"ResourceInfoTypes::GenericResFileRes",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfoTypes::GenericResFileRes::StaticClassInit() */

void Sexy::ResourceInfoTypes::GenericResFileRes::StaticClassInit(void)

{
  long lVar1;
  undefined8 uVar2;
  RtName *pRVar3;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = StaticGetClass();
  uVar2 = GenericResFile::StaticGetClass();
  FUN_05194914(lVar1 + 0x48,uVar2);
  pRVar3 = (RtName *)StaticGetClass();
  RtName::RtName(aRStack_18,L"File");
  ResourceInfoClass::SetManifestTypeName(pRVar3);
  RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

