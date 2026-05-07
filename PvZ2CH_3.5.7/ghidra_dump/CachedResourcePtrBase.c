// Class: CachedResourcePtrBase


/* CachedResourcePtrBase::CachedResourcePtrBase(CachedResourcePtrBase const&) */

void __thiscall
CachedResourcePtrBase::CachedResourcePtrBase
          (CachedResourcePtrBase *this,CachedResourcePtrBase *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined **)this = &DAT_06912e00;
  return;
}


/* CachedResourcePtrBase::CachedResourcePtrBase() */

void __thiscall CachedResourcePtrBase::CachedResourcePtrBase(CachedResourcePtrBase *this)

{
  *(undefined **)this = &DAT_06912e00;
  *(undefined8 *)(this + 0x10) = 0;
  *(CachedResourcePtrBase **)(this + 8) = s_allCachedResourcePtrsHead;
  if (s_allCachedResourcePtrsHead != (CachedResourcePtrBase *)0x0) {
    *(CachedResourcePtrBase **)((long)s_allCachedResourcePtrsHead + 0x10) = this;
  }
  s_allCachedResourcePtrsHead = this;
  return;
}


/* CachedResourcePtrBase::~CachedResourcePtrBase() */

void __thiscall CachedResourcePtrBase::~CachedResourcePtrBase(CachedResourcePtrBase *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x10);
  *(undefined **)this = &DAT_06912e00;
  if (lVar2 == 0) {
    lVar1 = *(long *)(this + 8);
    s_allCachedResourcePtrsHead = lVar1;
  }
  else {
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(this + 8);
    lVar1 = *(long *)(this + 8);
  }
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = lVar2;
  }
  return;
}


/* CachedResourcePtrBase::~CachedResourcePtrBase() */

void __thiscall CachedResourcePtrBase::~CachedResourcePtrBase(CachedResourcePtrBase *this)

{
  ~CachedResourcePtrBase(this);
  AK::FreeHook(this);
  return;
}


/* CachedResourcePtrBase::FlushAllCachedIds() */

void CachedResourcePtrBase::FlushAllCachedIds(void)

{
  long *plVar1;
  
  for (plVar1 = s_allCachedResourcePtrsHead; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}

