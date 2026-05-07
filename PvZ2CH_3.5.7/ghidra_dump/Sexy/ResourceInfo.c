// Class: Sexy::ResourceInfo


/* Sexy::ResourceInfo::GetInstanceRtId() */

RtId * Sexy::ResourceInfo::GetInstanceRtId(void)

{
  long in_x0;
  RtId *in_x8;
  
  RtId::RtId(in_x8,(RtId *)(in_x0 + 0x20));
  return in_x8;
}


/* Sexy::ResourceInfo::StaticNew() */

undefined8 Sexy::ResourceInfo::StaticNew(void)

{
  return 0;
}


/* Sexy::ResourceInfo::ResourceInfo() */

void __thiscall Sexy::ResourceInfo::ResourceInfo(ResourceInfo *this)

{
  _func_void *extraout_x1;
  _func_void *extraout_x1_00;
  
  RtObject::RtObject((RtObject *)this);
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_GetClass_06a2fc20;
  std::__exception_ptr::exception_ptr::exception_ptr
            ((exception_ptr *)(this + 0x18),(_func_void *)&PTR_GetClass_06a2fc20);
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)(this + 0x20),extraout_x1);
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)(this + 0x28),extraout_x1_00);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  Set8BytesTo0(this + 0x48);
  Set8BytesTo0(this + 0x50);
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  this[0x60] = (ResourceInfo)0x0;
  return;
}


/* Sexy::ResourceInfo::~ResourceInfo() */

void __thiscall Sexy::ResourceInfo::~ResourceInfo(ResourceInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2fc20;
  std::string::~string((string *)(this + 0x50));
  std::string::~string((string *)(this + 0x48));
  RtId::~RtId((RtId *)(this + 0x28));
  RtId::~RtId((RtId *)(this + 0x20));
  RtId::~RtId((RtId *)(this + 0x18));
  nop();
  return;
}


/* Sexy::ResourceInfo::~ResourceInfo() */

void __thiscall Sexy::ResourceInfo::~ResourceInfo(ResourceInfo *this)

{
  ~ResourceInfo(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfo::IsResourceValid() */

void Sexy::ResourceInfo::IsResourceValid(void)

{
  undefined4 uVar1;
  CompiledMap aCStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetInstanceRtId();
  uVar1 = CompiledMap::Initialized(aCStack_10);
  RtId::~RtId((RtId *)aCStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* Sexy::ResourceInfo::GetRtId() */

RtId * Sexy::ResourceInfo::GetRtId(void)

{
  long in_x0;
  RtId *in_x8;
  
  RtId::RtId(in_x8,(RtId *)(in_x0 + 0x18));
  return in_x8;
}


/* Sexy::ResourceInfo::SetRtId(Sexy::RtId const&) */

void __thiscall Sexy::ResourceInfo::SetRtId(ResourceInfo *this,RtId *param_1)

{
  RtId::operator=((RtId *)(this + 0x18),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfo::GetInstancePtr() */

void Sexy::ResourceInfo::GetInstancePtr(void)

{
  ResourceInfo *pRVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetInstanceRtId();
  RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
  RtId::~RtId(aRStack_10);
  pRVar1 = RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
  RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfo::DeleteResource() */

void __thiscall Sexy::ResourceInfo::DeleteResource(ResourceInfo *this)

{
  exception_ptr *this_00;
  char cVar1;
  int iVar2;
  RtId *pRVar3;
  RtObject *this_01;
  BaseResource *pBVar4;
  RtDb *this_02;
  _func_void *p_Var5;
  _func_void *extraout_x1;
  exception_ptr aeStack_10 [8];
  long local_8;
  
  this_00 = (exception_ptr *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  cVar1 = std::__exception_ptr::exception_ptr::operator!(this_00);
  if ((cVar1 == '\0') &&
     (cVar1 = CompiledMap::Initialized((CompiledMap *)(this + 0x28)), cVar1 == '\0')) {
    pRVar3 = (RtId *)RtDb::GetDb();
    iVar2 = RtDb::GetObjectDeletionMode(pRVar3);
    if (iVar2 != 2) {
      pRVar3 = (RtId *)RtDb::GetDb();
      this_01 = (RtObject *)RtDb::GetObjectForId(pRVar3);
      pBVar4 = RtObject::Cast<Sexy::BaseResource>(this_01);
      if (pBVar4 != (BaseResource *)0x0) {
        (**(code **)(*(long *)pBVar4 + 0x18))();
      }
    }
    this_02 = (RtDb *)RtDb::GetDb();
    RtDb::ReplaceObjectForId(this_02,(RtId *)this_00,(RtObject *)0x0);
    iVar2 = RtId::GetTableIndex((RtId *)this_00);
    p_Var5 = (_func_void *)0x2007;
    if (iVar2 == 0x2007) {
      pRVar3 = (RtId *)RtDb::GetDb();
      RtDb::ReleaseId(pRVar3);
      p_Var5 = extraout_x1;
    }
    std::__exception_ptr::exception_ptr::exception_ptr(aeStack_10,p_Var5);
    RtId::operator=((RtId *)this_00,(RtId *)aeStack_10);
    RtId::~RtId((RtId *)aeStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ResourceInfo::StaticGetClass() */

long * Sexy::ResourceInfo::StaticGetClass(void)

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
  uVar2 = RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"ResourceInfo",uVar2,StaticNew);
  return sClass;
}


/* Sexy::ResourceInfo::GetClass() const */

long * Sexy::ResourceInfo::GetClass(void)

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
  uVar2 = RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"ResourceInfo",uVar2,StaticNew);
  return sClass;
}

