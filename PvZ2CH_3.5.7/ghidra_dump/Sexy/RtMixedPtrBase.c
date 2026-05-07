// Class: Sexy::RtMixedPtrBase


/* Sexy::RtMixedPtrBase::IsValid() const */

bool __thiscall Sexy::RtMixedPtrBase::IsValid(RtMixedPtrBase *this)

{
  bool bVar1;
  char cVar2;
  RtId *pRVar3;
  long lVar4;
  
  cVar2 = CompiledMap::Initialized((CompiledMap *)this);
  bVar1 = false;
  if (cVar2 != '\0') {
    pRVar3 = (RtId *)RtDb::GetDb();
    lVar4 = RtDb::GetObjectForId(pRVar3);
    bVar1 = lVar4 != 0;
  }
  return bVar1;
}


/* Sexy::RtMixedPtrBase::GetId() const */

RtId * Sexy::RtMixedPtrBase::GetId(void)

{
  RtId *in_x0;
  RtId *in_x8;
  
  RtId::RtId(in_x8,in_x0);
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtMixedPtrBase::SetObject(unsigned int, Sexy::RtObject*,
   Sexy::RtDbTable::EObjectDeletionMode) */

void __thiscall
Sexy::RtMixedPtrBase::SetObject
          (RtMixedPtrBase *this,undefined4 param_1,long param_2,undefined4 param_4)

{
  char cVar1;
  RtId *pRVar2;
  long lVar3;
  _func_void *extraout_x1;
  _func_void *extraout_x1_00;
  _func_void *p_Var4;
  exception_ptr aeStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = (RtId *)RtDb::GetDb();
  cVar1 = CompiledMap::Initialized((CompiledMap *)this);
  if (cVar1 != '\0') {
    p_Var4 = extraout_x1;
    if (this[8] != (RtMixedPtrBase)0x0) {
      lVar3 = RtDb::GetObjectForId(pRVar2);
      if ((lVar3 == param_2) && (lVar3 != 0)) goto LAB_05173214;
      RtDb::ReleaseId(pRVar2);
      this[8] = (RtMixedPtrBase)0x0;
      p_Var4 = extraout_x1_00;
    }
    std::__exception_ptr::exception_ptr::exception_ptr(aeStack_10,p_Var4);
    RtId::operator=((RtId *)this,(RtId *)aeStack_10);
    RtId::~RtId((RtId *)aeStack_10);
  }
  if (param_2 != 0) {
    RtDb::AllocId((RtId *)aeStack_10,pRVar2,param_1,param_2,param_4,0,0);
    RtId::operator=((RtId *)this,(RtId *)aeStack_10);
    RtId::~RtId((RtId *)aeStack_10);
    this[8] = (RtMixedPtrBase)0x1;
  }
LAB_05173214:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::RtMixedPtrBase::SetId(Sexy::RtId const&, bool) */

void __thiscall Sexy::RtMixedPtrBase::SetId(RtMixedPtrBase *this,RtId *param_1,bool param_2)

{
  char cVar1;
  RtId *pRVar2;
  
  pRVar2 = (RtId *)RtDb::GetDb();
  if ((param_2) && (cVar1 = CompiledMap::Initialized((CompiledMap *)param_1), cVar1 != '\0')) {
    RtDb::RetainId(pRVar2);
  }
  if ((this[8] != (RtMixedPtrBase)0x0) &&
     (cVar1 = CompiledMap::Initialized((CompiledMap *)this), cVar1 != '\0')) {
    RtDb::ReleaseId(pRVar2);
  }
  RtId::operator=((RtId *)this,param_1);
  this[8] = (RtMixedPtrBase)param_2;
  return;
}


/* Sexy::RtMixedPtrBase::RtMixedPtrBase(Sexy::RtMixedPtrBase const&) */

void __thiscall Sexy::RtMixedPtrBase::RtMixedPtrBase(RtMixedPtrBase *this,RtMixedPtrBase *param_1)

{
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)this,(_func_void *)param_1);
  this[8] = (RtMixedPtrBase)0x0;
  SetId(this,(RtId *)param_1,(bool)param_1[8]);
  return;
}


/* Sexy::RtMixedPtrBase::RtMixedPtrBase(Sexy::RtId const&, bool) */

void __thiscall
Sexy::RtMixedPtrBase::RtMixedPtrBase(RtMixedPtrBase *this,RtId *param_1,bool param_2)

{
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)this,(_func_void *)param_1);
  SetId(this,param_1,param_2);
  return;
}


/* Sexy::RtMixedPtrBase::~RtMixedPtrBase() */

void __thiscall Sexy::RtMixedPtrBase::~RtMixedPtrBase(RtMixedPtrBase *this)

{
  SetObject(this,0,0,0);
  RtId::~RtId((RtId *)this);
  return;
}


/* Sexy::RtMixedPtrBase::Possess() */

RtMixedPtrBase __thiscall Sexy::RtMixedPtrBase::Possess(RtMixedPtrBase *this)

{
  RtMixedPtrBase RVar1;
  char cVar2;
  RtId *pRVar3;
  RtDb *this_00;
  
  RVar1 = this[8];
  if ((RVar1 != (RtMixedPtrBase)0x0) &&
     (cVar2 = std::__exception_ptr::exception_ptr::operator!((exception_ptr *)this), cVar2 == '\0'))
  {
    pRVar3 = (RtId *)RtDb::GetDb();
    cVar2 = RtDb::GetObjectIsStandalone(pRVar3);
    if (cVar2 != '\0') {
      this_00 = (RtDb *)RtDb::GetDb();
      RtDb::SetObjectIsStandalone(this_00,(RtId *)this,false);
      pRVar3 = (RtId *)RtDb::GetDb();
      RtDb::ReleaseId(pRVar3);
      return RVar1;
    }
  }
  return (RtMixedPtrBase)0x0;
}


/* Sexy::RtMixedPtrBase::TEMPNAMEPLACEHOLDERVALUE(Sexy::RtMixedPtrBase const&) */

RtMixedPtrBase * __thiscall
Sexy::RtMixedPtrBase::operator=(RtMixedPtrBase *this,RtMixedPtrBase *param_1)

{
  SetId(this,(RtId *)param_1,(bool)param_1[8]);
  return this;
}

