// Class: CachedResourcePtr<Sexy::PopAnim>


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CachedResourcePtr<Sexy::PopAnim>::flushCachedId() */

void __thiscall
CachedResourcePtr<Sexy::PopAnim>::flushCachedId(CachedResourcePtr<Sexy::PopAnim> *this)

{
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtId::RtId(aRStack_10,0);
  Sexy::RtId::operator=((RtId *)(this + 0x20),aRStack_10);
  Sexy::RtId::~RtId(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CachedResourcePtr<Sexy::PopAnim>::SetId(Sexy::RtId) */

void __thiscall
CachedResourcePtr<Sexy::PopAnim>::SetId(CachedResourcePtr<Sexy::PopAnim> *this,RtId *param_2)

{
  Sexy::RtId::operator=((RtId *)(this + 0x20),param_2);
  return;
}


/* CachedResourcePtr<Sexy::RenderEffectDefinition>::~CachedResourcePtr() */

void __thiscall
CachedResourcePtr<Sexy::RenderEffectDefinition>::~CachedResourcePtr
          (CachedResourcePtr<Sexy::RenderEffectDefinition> *this)

{
  *(undefined ***)this = &PTR__CachedResourcePtr_066110a0;
  Sexy::RtId::~RtId((RtId *)(this + 0x20));
  CachedResourcePtrBase::~CachedResourcePtrBase((CachedResourcePtrBase *)this);
  return;
}


/* CachedResourcePtr<Sexy::RenderEffectDefinition>::~CachedResourcePtr() */

void __thiscall
CachedResourcePtr<Sexy::RenderEffectDefinition>::~CachedResourcePtr
          (CachedResourcePtr<Sexy::RenderEffectDefinition> *this)

{
  ~CachedResourcePtr(this);
  AK::FreeHook(this);
  return;
}


/* CachedResourcePtr<Sexy::RenderEffectDefinition>::CachedResourcePtr(char const*) */

void __thiscall
CachedResourcePtr<Sexy::RenderEffectDefinition>::CachedResourcePtr
          (CachedResourcePtr<Sexy::RenderEffectDefinition> *this,char *param_1)

{
  CachedResourcePtrBase::CachedResourcePtrBase((CachedResourcePtrBase *)this);
  *(char **)(this + 0x18) = param_1;
  *(undefined ***)this = &PTR__CachedResourcePtr_066110a0;
  Sexy::RtId::RtId((RtId *)(this + 0x20),0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CachedResourcePtr<Sexy::RenderEffectDefinition>::GetId() */

void CachedResourcePtr<Sexy::RenderEffectDefinition>::GetId(void)

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
    GetResourceId<Sexy::RenderEffectDefinition>(asStack_18,0);
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
/* CachedResourcePtr<Sexy::RenderEffectDefinition>::operator Sexy::RenderEffectDefinition*() */

RenderEffectDefinition * __thiscall
CachedResourcePtr::operator_cast_to_RenderEffectDefinition_(CachedResourcePtr *this)

{
  RtId *pRVar1;
  RtObject *this_00;
  RenderEffectDefinition *pRVar2;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtId *)Sexy::RtDb::GetDb();
  CachedResourcePtr<Sexy::RenderEffectDefinition>::GetId();
  this_00 = (RtObject *)Sexy::RtDb::GetObjectForId(pRVar1);
  pRVar2 = Sexy::RtObject::Cast<Sexy::RenderEffectDefinition>(this_00);
  Sexy::RtId::~RtId(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pRVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CachedResourcePtr<Sexy::Image>::~CachedResourcePtr() */

void __thiscall
CachedResourcePtr<Sexy::Image>::~CachedResourcePtr(CachedResourcePtr<Sexy::Image> *this)

{
  *(undefined ***)this = &PTR__CachedResourcePtr_06612bb0;
  Sexy::RtId::~RtId((RtId *)(this + 0x20));
  CachedResourcePtrBase::~CachedResourcePtrBase((CachedResourcePtrBase *)this);
  return;
}


/* CachedResourcePtr<Sexy::Image>::~CachedResourcePtr() */

void __thiscall
CachedResourcePtr<Sexy::Image>::~CachedResourcePtr(CachedResourcePtr<Sexy::Image> *this)

{
  ~CachedResourcePtr(this);
  AK::FreeHook(this);
  return;
}


/* CachedResourcePtr<Sexy::Image>::CachedResourcePtr(char const*) */

void __thiscall
CachedResourcePtr<Sexy::Image>::CachedResourcePtr
          (CachedResourcePtr<Sexy::Image> *this,char *param_1)

{
  CachedResourcePtrBase::CachedResourcePtrBase((CachedResourcePtrBase *)this);
  *(char **)(this + 0x18) = param_1;
  *(undefined ***)this = &PTR__CachedResourcePtr_06612bb0;
  Sexy::RtId::RtId((RtId *)(this + 0x20),0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CachedResourcePtr<Sexy::Image>::GetId() */

void CachedResourcePtr<Sexy::Image>::GetId(void)

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
    GetResourceId<Sexy::Image>(asStack_18,0);
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
/* CachedResourcePtr<Sexy::Image>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall CachedResourcePtr<Sexy::Image>::operator->(CachedResourcePtr<Sexy::Image> *this)

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CachedResourcePtr<Sexy::Image>::operator Sexy::RtWeakPtr<Sexy::Image>() */

void __thiscall CachedResourcePtr::operator_cast_to_RtWeakPtr(CachedResourcePtr *this)

{
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CachedResourcePtr<Sexy::Image>::GetId();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtId::~RtId(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CachedResourcePtr<Sexy::GenericResFile>::~CachedResourcePtr() */

void __thiscall
CachedResourcePtr<Sexy::GenericResFile>::~CachedResourcePtr
          (CachedResourcePtr<Sexy::GenericResFile> *this)

{
  *(undefined ***)this = &PTR__CachedResourcePtr_0664db60;
  Sexy::RtId::~RtId((RtId *)(this + 0x20));
  CachedResourcePtrBase::~CachedResourcePtrBase((CachedResourcePtrBase *)this);
  return;
}


/* CachedResourcePtr<Sexy::GenericResFile>::~CachedResourcePtr() */

void __thiscall
CachedResourcePtr<Sexy::GenericResFile>::~CachedResourcePtr
          (CachedResourcePtr<Sexy::GenericResFile> *this)

{
  ~CachedResourcePtr(this);
  AK::FreeHook(this);
  return;
}


/* CachedResourcePtr<Sexy::GenericResFile>::CachedResourcePtr(char const*) */

void __thiscall
CachedResourcePtr<Sexy::GenericResFile>::CachedResourcePtr
          (CachedResourcePtr<Sexy::GenericResFile> *this,char *param_1)

{
  CachedResourcePtrBase::CachedResourcePtrBase((CachedResourcePtrBase *)this);
  *(char **)(this + 0x18) = param_1;
  *(undefined ***)this = &PTR__CachedResourcePtr_0664db60;
  Sexy::RtId::RtId((RtId *)(this + 0x20),0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CachedResourcePtr<Sexy::GenericResFile>::GetId() */

void CachedResourcePtr<Sexy::GenericResFile>::GetId(void)

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
    GetResourceId<Sexy::GenericResFile>(asStack_18,0);
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
/* CachedResourcePtr<Sexy::GenericResFile>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
CachedResourcePtr<Sexy::GenericResFile>::operator->(CachedResourcePtr<Sexy::GenericResFile> *this)

{
  RtId *pRVar1;
  RtObject *this_00;
  GenericResFile *pGVar2;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtId *)Sexy::RtDb::GetDb();
  GetId();
  this_00 = (RtObject *)Sexy::RtDb::GetObjectForId(pRVar1);
  pGVar2 = Sexy::RtObject::Cast<Sexy::GenericResFile>(this_00);
  Sexy::RtId::~RtId(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pGVar2);
}


/* CachedResourcePtr<Sexy::PopAnim>::~CachedResourcePtr() */

void __thiscall
CachedResourcePtr<Sexy::PopAnim>::~CachedResourcePtr(CachedResourcePtr<Sexy::PopAnim> *this)

{
  *(undefined ***)this = &PTR__CachedResourcePtr_066a73f0;
  Sexy::RtId::~RtId((RtId *)(this + 0x20));
  CachedResourcePtrBase::~CachedResourcePtrBase((CachedResourcePtrBase *)this);
  return;
}


/* CachedResourcePtr<Sexy::PopAnim>::~CachedResourcePtr() */

void __thiscall
CachedResourcePtr<Sexy::PopAnim>::~CachedResourcePtr(CachedResourcePtr<Sexy::PopAnim> *this)

{
  ~CachedResourcePtr(this);
  AK::FreeHook(this);
  return;
}


/* CachedResourcePtr<Sexy::PopAnim>::CachedResourcePtr(char const*) */

void __thiscall
CachedResourcePtr<Sexy::PopAnim>::CachedResourcePtr
          (CachedResourcePtr<Sexy::PopAnim> *this,char *param_1)

{
  CachedResourcePtrBase::CachedResourcePtrBase((CachedResourcePtrBase *)this);
  *(char **)(this + 0x18) = param_1;
  *(undefined ***)this = &PTR__CachedResourcePtr_066a73f0;
  Sexy::RtId::RtId((RtId *)(this + 0x20),0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CachedResourcePtr<Sexy::PopAnim>::GetId() */

void CachedResourcePtr<Sexy::PopAnim>::GetId(void)

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
    GetResourceId<Sexy::PopAnim>(asStack_18,0);
    SetId();
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
/* CachedResourcePtr<Sexy::PopAnim>::operator Sexy::PopAnim*() */

PopAnim * __thiscall CachedResourcePtr::operator_cast_to_PopAnim_(CachedResourcePtr *this)

{
  RtId *pRVar1;
  RtObject *this_00;
  PopAnim *pPVar2;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtId *)Sexy::RtDb::GetDb();
  CachedResourcePtr<Sexy::PopAnim>::GetId();
  this_00 = (RtObject *)Sexy::RtDb::GetObjectForId(pRVar1);
  pPVar2 = Sexy::RtObject::Cast<Sexy::PopAnim>(this_00);
  Sexy::RtId::~RtId(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pPVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CachedResourcePtr<Sexy::PopAnim>::operator Sexy::RtWeakPtr<Sexy::PopAnim>() */

void __thiscall CachedResourcePtr::operator_cast_to_RtWeakPtr(CachedResourcePtr *this)

{
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CachedResourcePtr<Sexy::PopAnim>::GetId();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtId::~RtId(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CachedResourcePtr<Sexy::Image>::IsValid() */

void CachedResourcePtr<Sexy::Image>::IsValid(void)

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
/* CachedResourcePtr<Sexy::Image>::operator bool() */

bool __thiscall CachedResourcePtr::operator_cast_to_bool(CachedResourcePtr *this)

{
  bool bVar1;
  char cVar2;
  RtId *pRVar3;
  long lVar4;
  CompiledMap aCStack_18 [8];
  RtId aRStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  CachedResourcePtr<Sexy::Image>::GetId();
  cVar2 = Sexy::CompiledMap::Initialized(aCStack_18);
  bVar1 = false;
  if (cVar2 != '\0') {
    pRVar3 = (RtId *)Sexy::RtDb::GetDb();
    CachedResourcePtr<Sexy::Image>::GetId();
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


/* CachedResourcePtr<Sexy::Image>::CachedResourcePtr(CachedResourcePtr<Sexy::Image> const&) */

void __thiscall
CachedResourcePtr<Sexy::Image>::CachedResourcePtr
          (CachedResourcePtr<Sexy::Image> *this,CachedResourcePtr *param_1)

{
  CachedResourcePtrBase::CachedResourcePtrBase
            ((CachedResourcePtrBase *)this,(CachedResourcePtrBase *)param_1);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined ***)this = &PTR__CachedResourcePtr_06612bb0;
  Sexy::RtId::RtId((RtId *)(this + 0x20),(RtId *)(param_1 + 0x20));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CachedResourcePtr<Sexy::GenericResFile>::operator Sexy::RtWeakPtr<Sexy::GenericResFile>() */

void __thiscall CachedResourcePtr::operator_cast_to_RtWeakPtr(CachedResourcePtr *this)

{
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CachedResourcePtr<Sexy::GenericResFile>::GetId();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtId::~RtId(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

