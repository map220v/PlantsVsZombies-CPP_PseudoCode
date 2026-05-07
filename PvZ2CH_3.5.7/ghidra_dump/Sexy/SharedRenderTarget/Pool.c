// Class: Sexy::SharedRenderTarget::Pool


/* Sexy::SharedRenderTarget::Pool::UpdateEntry(Sexy::SharedRenderTarget&) */

void __thiscall Sexy::SharedRenderTarget::Pool::UpdateEntry(Pool *this,SharedRenderTarget *param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = FUN_051de934(*(undefined8 *)this,*(long *)(param_1 + 0x10) + -1);
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 8);
  }
  return;
}


/* Sexy::SharedRenderTarget::Pool::Unacquire(Sexy::SharedRenderTarget&) */

void __thiscall Sexy::SharedRenderTarget::Pool::Unacquire(Pool *this,SharedRenderTarget *param_1)

{
  size_t __n;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  __n = FUN_051de934(*(undefined8 *)this,*(long *)(param_1 + 0x10) + -1);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(__n + 0x10) = 0;
  std::string::append((string *)(__n + 0x18),"",__n);
  return;
}


/* Sexy::SharedRenderTarget::Pool::InvalidateSurfaces() */

void __thiscall Sexy::SharedRenderTarget::Pool::InvalidateSurfaces(Pool *this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = *(undefined8 *)this;
  iVar1 = FUN_051de928(uVar3,*(undefined8 *)(this + 8));
  if (0 < iVar1) {
    lVar4 = 0;
    while( true ) {
      lVar2 = FUN_051de934(uVar3,lVar4);
      if (*(RenderSurface **)(lVar2 + 8) != (RenderSurface *)0x0) {
        RenderSurface::Release(*(RenderSurface **)(lVar2 + 8));
        *(undefined8 *)(lVar2 + 8) = 0;
      }
      if (*(long *)(lVar2 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(lVar2 + 0x10) + 8) = 0;
      }
      if (iVar1 <= (int)(lVar4 + 1)) break;
      uVar3 = *(undefined8 *)this;
      lVar4 = lVar4 + 1;
    }
  }
  return;
}


/* Sexy::SharedRenderTarget::Pool::GetInfoString() */

void Sexy::SharedRenderTarget::Pool::GetInfoString(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 *in_x0;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar12 = *in_x0;
  uVar7 = FUN_051de928(uVar12,in_x0[1]);
  if ((int)uVar7 < 1) {
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar9 = 0;
    uVar10 = 0;
  }
  else {
    lVar11 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar9 = 0;
    uVar10 = 0;
    iVar3 = *(int *)(gSexyAppBase + 0xd4);
    iVar4 = *(int *)(gSexyAppBase + 0xd8);
    iVar1 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar1 = iVar3;
    }
    iVar2 = iVar4 + 3;
    if (-1 < iVar4) {
      iVar2 = iVar4;
    }
    uVar15 = uVar9;
LAB_051dec90:
    do {
      plVar8 = (long *)FUN_051de934(uVar12,lVar11);
      iVar5 = *(int *)(*plVar8 + 0x3c);
      if (plVar8[2] != 0) {
        uVar15 = uVar15 + 1;
      }
      iVar6 = *(int *)(*plVar8 + 0x38);
      if ((iVar5 == iVar4) && (iVar6 == iVar3)) {
        uVar14 = uVar14 + 1;
      }
      else if ((iVar3 / 2 == iVar6) && (iVar4 / 2 == iVar5)) {
        uVar10 = uVar10 + 1;
      }
      else {
        if ((iVar1 >> 2 != iVar6) || (iVar2 >> 2 != iVar5)) {
          lVar11 = lVar11 + 1;
          uVar13 = uVar13 + 1;
          if ((int)uVar7 <= (int)lVar11) break;
          goto LAB_051dec90;
        }
        uVar9 = uVar9 + 1;
      }
      lVar11 = lVar11 + 1;
    } while ((int)lVar11 < (int)uVar7);
  }
  StrFormat("Total:%d (%d Full, %d Half, %d Quarter, %d Other); Locked:%d",(ulong)uVar7,
            (ulong)uVar14,(ulong)uVar10,uVar9,(ulong)uVar13,(ulong)uVar15);
  return;
}


/* Sexy::SharedRenderTarget::Pool::~Pool() */

void __thiscall Sexy::SharedRenderTarget::Pool::~Pool(Pool *this)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = *(undefined8 *)this;
  iVar1 = FUN_051de928(uVar4,*(undefined8 *)(this + 8));
  if (0 < iVar1) {
    lVar5 = 0;
    while( true ) {
      plVar2 = (long *)FUN_051de934(uVar4,lVar5);
      plVar3 = (long *)*plVar2;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
      if ((RenderSurface *)plVar2[1] != (RenderSurface *)0x0) {
        RenderSurface::Release((RenderSurface *)plVar2[1]);
      }
      if (iVar1 <= (int)(lVar5 + 1)) break;
      uVar4 = *(undefined8 *)this;
      lVar5 = lVar5 + 1;
    }
  }
  std::
  vector<Sexy::SharedRenderTarget::Pool::Entry,std::allocator<Sexy::SharedRenderTarget::Pool::Entry>>
  ::clear((vector<Sexy::SharedRenderTarget::Pool::Entry,std::allocator<Sexy::SharedRenderTarget::Pool::Entry>>
           *)this);
  std::
  vector<Sexy::SharedRenderTarget::Pool::Entry,std::allocator<Sexy::SharedRenderTarget::Pool::Entry>>
  ::~vector((vector<Sexy::SharedRenderTarget::Pool::Entry,std::allocator<Sexy::SharedRenderTarget::Pool::Entry>>
             *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SharedRenderTarget::Pool::InvalidateDevice() */

void __thiscall Sexy::SharedRenderTarget::Pool::InvalidateDevice(Pool *this)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar4 = *(undefined8 *)this;
  iVar1 = FUN_051de928(uVar4,*(undefined8 *)(this + 8));
  if (0 < iVar1) {
    lVar5 = 0;
    while( true ) {
      plVar2 = (long *)FUN_051de934(uVar4,lVar5);
      if (*plVar2 != 0) {
        SexyAppBase::Remove3DData(gSexyAppBase);
      }
      if (plVar2[2] != 0) {
        std::vector<Sexy::SharedRenderTarget*,std::allocator<Sexy::SharedRenderTarget*>>::push_back
                  ((vector<Sexy::SharedRenderTarget*,std::allocator<Sexy::SharedRenderTarget*>> *)
                   &local_20,(SharedRenderTarget **)(plVar2 + 2));
      }
      lVar5 = lVar5 + 1;
      if (iVar1 <= (int)lVar5) break;
      uVar4 = *(undefined8 *)this;
    }
  }
  lVar5 = 0;
  while( true ) {
    uVar4 = local_20;
    iVar1 = FUN_051de93c(local_20,local_18);
    if (iVar1 <= (int)lVar5) break;
    puVar3 = (undefined8 *)FUN_051de948(uVar4,lVar5);
    Unlock((SharedRenderTarget *)*puVar3);
    lVar5 = lVar5 + 1;
  }
  InvalidateSurfaces(this);
  std::vector<Sexy::SharedRenderTarget*,std::allocator<Sexy::SharedRenderTarget*>>::~vector
            ((vector<Sexy::SharedRenderTarget*,std::allocator<Sexy::SharedRenderTarget*>> *)
             &local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SharedRenderTarget::Pool::Acquire(Sexy::SharedRenderTarget&, int, int, unsigned int, char
   const*) */

void __thiscall
Sexy::SharedRenderTarget::Pool::Acquire
          (Pool *this,SharedRenderTarget *param_1,int param_2,int param_3,uint param_4,char *param_5
          )

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  size_t *psVar4;
  DeviceImage *this_00;
  Graphics3D *this_01;
  size_t sVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  Insets aIStack_e0 [16];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  size_t local_8;
  
  uVar7 = *(undefined8 *)this;
  local_8 = ___stack_chk_guard;
  sVar5 = ___stack_chk_guard;
  iVar1 = FUN_051de928(uVar7,*(undefined8 *)(this + 8));
  if (0 < iVar1) {
    lVar6 = 0;
    do {
      plVar3 = (long *)FUN_051de934(uVar7,lVar6);
      if (plVar3[2] == 0) {
        lVar8 = *plVar3;
        if (((*(int *)(lVar8 + 0x38) == param_2) && (*(int *)(lVar8 + 0x3c) == param_3)) &&
           (uVar2 = FUN_051de914(*(undefined4 *)(lVar8 + 0x18)), uVar2 == param_4)) {
          *(long *)(param_1 + 8) = plVar3[1];
          *(long *)param_1 = lVar8;
          *(long *)(param_1 + 0x10) = (long)((int)lVar6 + 1);
          plVar3[2] = (long)param_1;
          if (param_5 == (char *)0x0) {
            std::string::append((string *)(plVar3 + 3),"NULL",sVar5);
          }
          else {
            std::string::append((string *)(plVar3 + 3),param_5,sVar5);
          }
          goto LAB_051df8a4;
        }
      }
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < iVar1);
  }
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  Entry::Entry((Entry *)&local_d0);
  std::
  vector<Sexy::SharedRenderTarget::Pool::Entry,std::allocator<Sexy::SharedRenderTarget::Pool::Entry>>
  ::push_back((vector<Sexy::SharedRenderTarget::Pool::Entry,std::allocator<Sexy::SharedRenderTarget::Pool::Entry>>
               *)this,(Entry *)&local_d0);
  Entry::~Entry((Entry *)&local_d0);
  psVar4 = (size_t *)
           std::vector<Sexy::RenderEffectTechnique,std::allocator<Sexy::RenderEffectTechnique>>::
           back((vector<Sexy::RenderEffectTechnique,std::allocator<Sexy::RenderEffectTechnique>> *)
                this);
  this_00 = ::operator_new(0x160);
  DeviceImage::DeviceImage(this_00,gSexyAppBase);
  *psVar4 = (size_t)this_00;
  FUN_051de918(this_00 + 0x18,param_4);
  (**(code **)(*(long *)*psVar4 + 200))((long *)*psVar4,param_2,param_3);
  (**(code **)(*(long *)*psVar4 + 0x130))((long *)*psVar4,0,0);
  Image::CreateRenderData((Image *)*psVar4);
  psVar4[1] = 0;
  Graphics::Graphics((Graphics *)&local_d0,(Image *)*psVar4);
  this_01 = (Graphics3D *)Graphics::Get3D((Graphics *)&local_d0);
  if (this_01 != (Graphics3D *)0x0) {
    Insets::Insets(aIStack_e0,0,0,0,0);
    Graphics3D::ClearColorBuffer(this_01,(Color *)aIStack_e0);
  }
  sVar5 = *psVar4;
  *(size_t *)(param_1 + 8) = psVar4[1];
  *(size_t *)param_1 = sVar5;
  *(long *)(param_1 + 0x10) = (long)(iVar1 + 1);
  psVar4[2] = (size_t)param_1;
  if (param_5 == (char *)0x0) {
    param_5 = "NULL";
  }
  std::string::append((string *)(psVar4 + 3),param_5,sVar5);
  Graphics::~Graphics((Graphics *)&local_d0);
LAB_051df8a4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

