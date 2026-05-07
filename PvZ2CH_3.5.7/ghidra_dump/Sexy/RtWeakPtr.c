// Class: Sexy::RtWeakPtr<Sexy::ResourceInfo>


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


/* Sexy::RtWeakPtr<CthulhuPropertySheet>::TEMPNAMEPLACEHOLDERVALUE(Sexy::RtId const&) */

RtWeakPtr<CthulhuPropertySheet> * __thiscall
Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
          (RtWeakPtr<CthulhuPropertySheet> *this,RtId *param_1)

{
  RtWeakPtrBase::SetId((RtId *)this);
  return this;
}


/* Sexy::RtWeakPtr<PowerPropertySheet>::TEMPNAMEPLACEHOLDERVALUE(Sexy::RtWeakPtr<PowerPropertySheet>
   const&) */

RtWeakPtr<PowerPropertySheet> * __thiscall
Sexy::RtWeakPtr<PowerPropertySheet>::operator=
          (RtWeakPtr<PowerPropertySheet> *this,RtWeakPtr *param_1)

{
  RtWeakPtr<CthulhuPropertySheet>::operator=
            ((RtWeakPtr<CthulhuPropertySheet> *)this,(RtId *)param_1);
  return this;
}


/* Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(Sexy::RtWeakPtrBase const&) */

void __thiscall
Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
          (RtWeakPtr<Sexy::SoundResource> *this,RtWeakPtrBase *param_1)

{
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)this,(_func_void *)param_1);
  RtWeakPtrBase::SetId((RtId *)this);
  return;
}


/* Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr() */

void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


/* Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get() const */

undefined8 __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  char cVar1;
  RtId *pRVar2;
  undefined8 uVar3;
  
  cVar1 = CompiledMap::Initialized((CompiledMap *)this);
  if (cVar1 != '\0') {
    pRVar2 = (RtId *)RtDb::GetDb();
    uVar3 = RtDb::GetObjectForId(pRVar2);
    return uVar3;
  }
  return 0;
}


/* Sexy::RtWeakPtr<Sexy::ResourceInfo>::operator Sexy::ResourceInfo*() const */

ResourceInfo * __thiscall Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(RtWeakPtr *this)

{
  char cVar1;
  RtId *pRVar2;
  ResourceInfo *pRVar3;
  
  cVar1 = CompiledMap::Initialized((CompiledMap *)this);
  if (cVar1 != '\0') {
    pRVar2 = (RtId *)RtDb::GetDb();
    pRVar3 = (ResourceInfo *)RtDb::GetObjectForId(pRVar2);
    return pRVar3;
  }
  return (ResourceInfo *)0x0;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


/* Sexy::RtWeakPtr<Sexy::BaseResource>::operator bool() const */

bool __thiscall Sexy::RtWeakPtr::operator_cast_to_bool(RtWeakPtr *this)

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::TEMPNAMEPLACEHOLDERVALUE(Sexy::RtWeakPtrBase const&)
    */

void __thiscall
Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
          (RtWeakPtr<SpartanBambooMatrixSystem> *this,RtWeakPtrBase *param_1)

{
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtMixedPtrBase::GetId();
  RtWeakPtrBase::SetId((RtId *)this);
  RtId::~RtId(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


/* Sexy::RtWeakPtr<PlantType const>::GetPtr() const */

PlantType * __thiscall Sexy::RtWeakPtr<PlantType_const>::GetPtr(RtWeakPtr<PlantType_const> *this)

{
  char cVar1;
  RtId *pRVar2;
  RtObject *this_00;
  PlantType *pPVar3;
  
  cVar1 = CompiledMap::Initialized((CompiledMap *)this);
  if (cVar1 != '\0') {
    pRVar2 = (RtId *)RtDb::GetDb();
    this_00 = (RtObject *)RtDb::GetObjectForId(pRVar2);
    pPVar3 = RtObject::Cast<PlantType_const>(this_00);
    return pPVar3;
  }
  return (PlantType *)0x0;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


/* Sexy::RtWeakPtr<Zombie>::GetPtr() const */

Zombie * __thiscall Sexy::RtWeakPtr<Zombie>::GetPtr(RtWeakPtr<Zombie> *this)

{
  char cVar1;
  RtId *pRVar2;
  RtObject *this_00;
  Zombie *pZVar3;
  
  cVar1 = CompiledMap::Initialized((CompiledMap *)this);
  if (cVar1 != '\0') {
    pRVar2 = (RtId *)RtDb::GetDb();
    this_00 = (RtObject *)RtDb::GetObjectForId(pRVar2);
    pZVar3 = RtObject::Cast<Zombie>(this_00);
    return pZVar3;
  }
  return (Zombie *)0x0;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


/* Sexy::RtWeakPtr<ZombieWithActions>::GetPtr() const */

ZombieWithActions * __thiscall
Sexy::RtWeakPtr<ZombieWithActions>::GetPtr(RtWeakPtr<ZombieWithActions> *this)

{
  char cVar1;
  RtId *pRVar2;
  RtObject *this_00;
  ZombieWithActions *pZVar3;
  
  cVar1 = CompiledMap::Initialized((CompiledMap *)this);
  if (cVar1 != '\0') {
    pRVar2 = (RtId *)RtDb::GetDb();
    this_00 = (RtObject *)RtDb::GetObjectForId(pRVar2);
    pZVar3 = RtObject::Cast<ZombieWithActions>(this_00);
    return pZVar3;
  }
  return (ZombieWithActions *)0x0;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


/* Sexy::RtWeakPtr<Sexy::PopAnim>::GetPtr() const */

PopAnim * __thiscall Sexy::RtWeakPtr<Sexy::PopAnim>::GetPtr(RtWeakPtr<Sexy::PopAnim> *this)

{
  char cVar1;
  RtId *pRVar2;
  RtObject *this_00;
  PopAnim *pPVar3;
  
  cVar1 = CompiledMap::Initialized((CompiledMap *)this);
  if (cVar1 != '\0') {
    pRVar2 = (RtId *)RtDb::GetDb();
    this_00 = (RtObject *)RtDb::GetObjectForId(pRVar2);
    pPVar3 = RtObject::Cast<Sexy::PopAnim>(this_00);
    return pPVar3;
  }
  return (PopAnim *)0x0;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


/* Sexy::RtWeakPtr<Plant>::GetPtr() const */

Plant * __thiscall Sexy::RtWeakPtr<Plant>::GetPtr(RtWeakPtr<Plant> *this)

{
  char cVar1;
  RtId *pRVar2;
  RtObject *this_00;
  Plant *pPVar3;
  
  cVar1 = CompiledMap::Initialized((CompiledMap *)this);
  if (cVar1 != '\0') {
    pRVar2 = (RtId *)RtDb::GetDb();
    this_00 = (RtObject *)RtDb::GetObjectForId(pRVar2);
    pPVar3 = RtObject::Cast<Plant>(this_00);
    return pPVar3;
  }
  return (Plant *)0x0;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


void __thiscall Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(RtWeakPtr<Sexy::ResourceInfo> *this)

{
  RtId::Set((RtId *)this,0);
  return;
}


/* Sexy::RtWeakPtr<MagentoProductProps>::GetPtr() const */

MagentoProductProps * __thiscall
Sexy::RtWeakPtr<MagentoProductProps>::GetPtr(RtWeakPtr<MagentoProductProps> *this)

{
  char cVar1;
  RtId *pRVar2;
  RtObject *this_00;
  MagentoProductProps *pMVar3;
  
  cVar1 = CompiledMap::Initialized((CompiledMap *)this);
  if (cVar1 != '\0') {
    pRVar2 = (RtId *)RtDb::GetDb();
    this_00 = (RtObject *)RtDb::GetObjectForId(pRVar2);
    pMVar3 = RtObject::Cast<MagentoProductProps>(this_00);
    return pMVar3;
  }
  return (MagentoProductProps *)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<Sexy::Image>::RtWeakPtr(Sexy::RtMixedPtrBase const&) */

void Sexy::RtWeakPtr<Sexy::Image>::RtWeakPtr(RtMixedPtrBase *param_1)

{
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtMixedPtrBase::GetId();
  RtWeakPtrBase::RtWeakPtrBase((RtWeakPtrBase *)param_1,aRStack_10);
  RtId::~RtId(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

