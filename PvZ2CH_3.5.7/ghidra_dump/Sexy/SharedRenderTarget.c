// Class: Sexy::SharedRenderTarget


/* Sexy::SharedRenderTarget::GetCurrentLockImage() */

undefined8 __thiscall Sexy::SharedRenderTarget::GetCurrentLockImage(SharedRenderTarget *this)

{
  if (*(long *)(this + 0x10) != 0) {
    return *(undefined8 *)this;
  }
  return 0;
}


/* Sexy::SharedRenderTarget::Unlock() */

bool __thiscall Sexy::SharedRenderTarget::Unlock(SharedRenderTarget *this)

{
  Pool *this_00;
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10);
  if (lVar1 != 0) {
    this_00 = (Pool *)SexyAppBase::GetSharedRenderTargetPool(gSexyAppBase);
    Pool::Unacquire(this_00,this);
  }
  return lVar1 != 0;
}


/* Sexy::SharedRenderTarget::Lock(int, int, unsigned int, char const*) */

undefined8 __thiscall
Sexy::SharedRenderTarget::Lock
          (SharedRenderTarget *this,int param_1,int param_2,uint param_3,char *param_4)

{
  Pool *this_00;
  
  Unlock(this);
  this_00 = (Pool *)SexyAppBase::GetSharedRenderTargetPool(gSexyAppBase);
  Pool::Acquire(this_00,this,param_1,param_2,param_3 | 0x10,param_4);
  return *(undefined8 *)this;
}


/* Sexy::SharedRenderTarget::LockScreenImage(char const*, unsigned int) */

undefined8 __thiscall
Sexy::SharedRenderTarget::LockScreenImage(SharedRenderTarget *this,char *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  Pool *pPVar5;
  long *plVar6;
  
  plVar6 = *(long **)(gSexyAppBase + 0x20);
  plVar3 = (long *)(**(code **)(*plVar6 + 0xb0))(plVar6);
  uVar2 = (**(code **)(*plVar3 + 0xf0))();
  if (((uVar2 >> 8 & 1) == 0) || ((param_2 & 1) == 0)) {
    lVar4 = (**(code **)(*plVar6 + 0x60))(plVar6);
    iVar1 = *(int *)(lVar4 + 0x38);
    lVar4 = (**(code **)(*plVar6 + 0x60))(plVar6);
    lVar4 = Lock(this,iVar1,*(int *)(lVar4 + 0x3c),0,param_1);
    if (lVar4 == 0) {
      return 0;
    }
  }
  lVar4 = (**(code **)(*plVar6 + 0xb0))(plVar6);
  if (lVar4 != 0) {
    plVar3 = (long *)(**(code **)(*plVar6 + 0xb0))(plVar6);
    uVar2 = (**(code **)(*plVar3 + 0xf0))();
    if ((uVar2 >> 7 & 1) == 0) {
      plVar3 = (long *)(**(code **)(*plVar6 + 0xb0))(plVar6);
      (**(code **)(*plVar3 + 0x140))(plVar3,this,this + 8,param_2);
      pPVar5 = (Pool *)SexyAppBase::GetSharedRenderTargetPool(gSexyAppBase);
      Pool::UpdateEntry(pPVar5,this);
      return *(undefined8 *)this;
    }
    plVar3 = (long *)(**(code **)(*plVar6 + 0xb0))(plVar6);
    (**(code **)(*plVar3 + 0x148))(plVar3,*(undefined8 *)this,param_2);
  }
  pPVar5 = (Pool *)SexyAppBase::GetSharedRenderTargetPool(gSexyAppBase);
  Pool::UpdateEntry(pPVar5,this);
  return *(undefined8 *)this;
}

