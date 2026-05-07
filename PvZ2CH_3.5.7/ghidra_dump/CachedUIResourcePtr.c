// Class: CachedUIResourcePtr<Sexy::Image>


/* CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr() */

void __thiscall
CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr(CachedUIResourcePtr<Sexy::Image> *this)

{
  *(undefined ***)this = &PTR__CachedUIResourcePtr_06610bd0;
  Sexy::RtId::~RtId((RtId *)(this + 0x20));
  CachedResourcePtrBase::~CachedResourcePtrBase((CachedResourcePtrBase *)this);
  return;
}


/* CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr() */

void __thiscall
CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr(CachedUIResourcePtr<Sexy::Image> *this)

{
  ~CachedUIResourcePtr(this);
  AK::FreeHook(this);
  return;
}


/* CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr(char const*) */

void __thiscall
CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
          (CachedUIResourcePtr<Sexy::Image> *this,char *param_1)

{
  CachedResourcePtrBase::CachedResourcePtrBase((CachedResourcePtrBase *)this);
  *(char **)(this + 0x18) = param_1;
  *(undefined ***)this = &PTR__CachedUIResourcePtr_06610bd0;
  Sexy::RtId::RtId((RtId *)(this + 0x20),0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CachedUIResourcePtr<Sexy::Image>::GetId() */

void CachedUIResourcePtr<Sexy::Image>::GetId(void)

{
  char cVar1;
  long in_x0;
  RtId *in_x8;
  string asStack_18 [8];
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::__exception_ptr::exception_ptr::operator!((exception_ptr *)(in_x0 + 0x20));
  if (cVar1 != '\0') {
    std::string::string(asStack_18,*(char **)(in_x0 + 0x18));
    GetResourceId<Sexy::Image>(asStack_18,gAppHeight);
    CachedResourcePtr<Sexy::PopAnim>::SetId();
    Sexy::RtId::~RtId(aRStack_10);
    std::string::~string(asStack_18);
    nop();
  }
  Sexy::RtId::RtId(in_x8,(RtId *)(in_x0 + 0x20));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CachedUIResourcePtr<Sexy::Image>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall CachedUIResourcePtr<Sexy::Image>::operator->(CachedUIResourcePtr<Sexy::Image> *this)

{
  RtId *pRVar1;
  RtObject *this_00;
  Image *pIVar2;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtId *)Sexy::RtDb::GetDb();
  GetId();
  this_00 = (RtObject *)Sexy::RtDb::GetObjectForId(pRVar1);
  pIVar2 = Sexy::RtObject::Cast<Sexy::Image>(this_00);
  Sexy::RtId::~RtId(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pIVar2);
}


/* CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr(CachedUIResourcePtr<Sexy::Image> const&) */

void __thiscall
CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
          (CachedUIResourcePtr<Sexy::Image> *this,CachedUIResourcePtr *param_1)

{
  CachedResourcePtrBase::CachedResourcePtrBase
            ((CachedResourcePtrBase *)this,(CachedResourcePtrBase *)param_1);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined ***)this = &PTR__CachedUIResourcePtr_06610bd0;
  Sexy::RtId::RtId((RtId *)(this + 0x20),(RtId *)(param_1 + 0x20));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CachedUIResourcePtr<Sexy::Image>::operator Sexy::RtWeakPtr<Sexy::Image>() */

void __thiscall CachedUIResourcePtr::operator_cast_to_RtWeakPtr(CachedUIResourcePtr *this)

{
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CachedUIResourcePtr<Sexy::Image>::GetId();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtId::~RtId(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CachedUIResourcePtr<Sexy::PopAnim>::~CachedUIResourcePtr() */

void __thiscall
CachedUIResourcePtr<Sexy::PopAnim>::~CachedUIResourcePtr(CachedUIResourcePtr<Sexy::PopAnim> *this)

{
  *(undefined ***)this = &PTR__CachedUIResourcePtr_06646f80;
  Sexy::RtId::~RtId((RtId *)(this + 0x20));
  CachedResourcePtrBase::~CachedResourcePtrBase((CachedResourcePtrBase *)this);
  return;
}


/* CachedUIResourcePtr<Sexy::PopAnim>::~CachedUIResourcePtr() */

void __thiscall
CachedUIResourcePtr<Sexy::PopAnim>::~CachedUIResourcePtr(CachedUIResourcePtr<Sexy::PopAnim> *this)

{
  ~CachedUIResourcePtr(this);
  AK::FreeHook(this);
  return;
}


/* CachedUIResourcePtr<Sexy::PopAnim>::CachedUIResourcePtr(char const*) */

void __thiscall
CachedUIResourcePtr<Sexy::PopAnim>::CachedUIResourcePtr
          (CachedUIResourcePtr<Sexy::PopAnim> *this,char *param_1)

{
  CachedResourcePtrBase::CachedResourcePtrBase((CachedResourcePtrBase *)this);
  *(char **)(this + 0x18) = param_1;
  *(undefined ***)this = &PTR__CachedUIResourcePtr_06646f80;
  Sexy::RtId::RtId((RtId *)(this + 0x20),0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CachedUIResourcePtr<Sexy::PopAnim>::GetId() */

void CachedUIResourcePtr<Sexy::PopAnim>::GetId(void)

{
  char cVar1;
  long in_x0;
  RtId *in_x8;
  string asStack_18 [8];
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::__exception_ptr::exception_ptr::operator!((exception_ptr *)(in_x0 + 0x20));
  if (cVar1 != '\0') {
    std::string::string(asStack_18,*(char **)(in_x0 + 0x18));
    GetResourceId<Sexy::PopAnim>(asStack_18,gAppHeight);
    CachedResourcePtr<Sexy::PopAnim>::SetId();
    Sexy::RtId::~RtId(aRStack_10);
    std::string::~string(asStack_18);
    nop();
  }
  Sexy::RtId::RtId(in_x8,(RtId *)(in_x0 + 0x20));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CachedUIResourcePtr<Sexy::PopAnim>::operator Sexy::PopAnim*() */

PopAnim * __thiscall CachedUIResourcePtr::operator_cast_to_PopAnim_(CachedUIResourcePtr *this)

{
  RtId *pRVar1;
  RtObject *this_00;
  PopAnim *pPVar2;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtId *)Sexy::RtDb::GetDb();
  CachedUIResourcePtr<Sexy::PopAnim>::GetId();
  this_00 = (RtObject *)Sexy::RtDb::GetObjectForId(pRVar1);
  pPVar2 = Sexy::RtObject::Cast<Sexy::PopAnim>(this_00);
  Sexy::RtId::~RtId(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pPVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CachedUIResourcePtr<Sexy::Image>::TEMPNAMEPLACEHOLDERVALUE(CachedUIResourcePtr<Sexy::Image>
   const&) */

CachedUIResourcePtr<Sexy::Image> * __thiscall
CachedUIResourcePtr<Sexy::Image>::operator=
          (CachedUIResourcePtr<Sexy::Image> *this,CachedUIResourcePtr *param_1)

{
  FUN_03689d40(this,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  Sexy::RtId::operator=((RtId *)(this + 0x20),(RtId *)(param_1 + 0x20));
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CachedUIResourcePtr<Sexy::Image>::IsValid() */

void CachedUIResourcePtr<Sexy::Image>::IsValid(void)

{
  bool bVar1;
  char cVar2;
  RtId *pRVar3;
  long lVar4;
  CompiledMap aCStack_18 [8];
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetId();
  cVar2 = Sexy::CompiledMap::Initialized(aCStack_18);
  bVar1 = false;
  if (cVar2 != '\0') {
    pRVar3 = (RtId *)Sexy::RtDb::GetDb();
    GetId();
    lVar4 = Sexy::RtDb::GetObjectForId(pRVar3);
    bVar1 = lVar4 != 0;
    Sexy::RtId::~RtId(aRStack_10);
  }
  Sexy::RtId::~RtId((RtId *)aCStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CachedUIResourcePtr<Sexy::Image>::operator bool() */

bool __thiscall CachedUIResourcePtr::operator_cast_to_bool(CachedUIResourcePtr *this)

{
  bool bVar1;
  char cVar2;
  RtId *pRVar3;
  long lVar4;
  CompiledMap aCStack_18 [8];
  RtId aRStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  CachedUIResourcePtr<Sexy::Image>::GetId();
  cVar2 = Sexy::CompiledMap::Initialized(aCStack_18);
  bVar1 = false;
  if (cVar2 != '\0') {
    pRVar3 = (RtId *)Sexy::RtDb::GetDb();
    CachedUIResourcePtr<Sexy::Image>::GetId();
    lVar4 = Sexy::RtDb::GetObjectForId(pRVar3);
    bVar1 = lVar4 != 0;
    Sexy::RtId::~RtId(aRStack_10);
  }
  Sexy::RtId::~RtId((RtId *)aCStack_18);
  if (lStack_8 == ___stack_chk_guard) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CachedUIResourcePtr<Sexy::PopAnim>::operator Sexy::RtWeakPtr<Sexy::PopAnim>() */

void __thiscall CachedUIResourcePtr::operator_cast_to_RtWeakPtr(CachedUIResourcePtr *this)

{
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CachedUIResourcePtr<Sexy::PopAnim>::GetId();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtId::~RtId(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

