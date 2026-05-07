// Class: Sexy::RenderSurface


/* Sexy::RenderSurface::Release() */

void __thiscall Sexy::RenderSurface::Release(RenderSurface *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x18);
  *(int *)(this + 0x18) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    (**(code **)(*(long *)this + 8))();
  }
  return;
}


/* Sexy::RenderSurface::RenderSurface() */

void __thiscall Sexy::RenderSurface::RenderSurface(RenderSurface *this)

{
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_nop_06a332b0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}

