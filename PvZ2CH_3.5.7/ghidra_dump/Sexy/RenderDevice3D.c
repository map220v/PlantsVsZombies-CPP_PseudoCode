// Class: Sexy::RenderDevice3D


/* Sexy::RenderDevice3D::SupportsPixelShaders() */

ulong __thiscall Sexy::RenderDevice3D::SupportsPixelShaders(RenderDevice3D *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0xf0))();
  return uVar1 >> 1 & 1;
}


/* Sexy::RenderDevice3D::SupportsVertexShaders() */

ulong __thiscall Sexy::RenderDevice3D::SupportsVertexShaders(RenderDevice3D *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0xf0))();
  return uVar1 >> 2 & 1;
}


/* Sexy::RenderDevice3D::SupportsCubeMaps() */

ulong __thiscall Sexy::RenderDevice3D::SupportsCubeMaps(RenderDevice3D *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0xf0))();
  return uVar1 >> 5 & 1;
}


/* Sexy::RenderDevice3D::SupportsVolumeMaps() */

ulong __thiscall Sexy::RenderDevice3D::SupportsVolumeMaps(RenderDevice3D *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0xf0))();
  return uVar1 >> 6 & 1;
}


/* Sexy::RenderDevice3D::SupportsImageRenderTargets() */

ulong __thiscall Sexy::RenderDevice3D::SupportsImageRenderTargets(RenderDevice3D *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0xf0))();
  return uVar1 >> 3 & 1;
}


/* Sexy::RenderDevice3D::LostFocus() */

void Sexy::RenderDevice3D::LostFocus(void)

{
  return;
}


/* Sexy::RenderDevice3D::GotFocus() */

void Sexy::RenderDevice3D::GotFocus(void)

{
  return;
}


/* Sexy::RenderDevice3D::ReloadEffects() */

undefined8 Sexy::RenderDevice3D::ReloadEffects(void)

{
  return 0;
}


/* Sexy::RenderDevice3D::ReloadEffects(bool) */

void Sexy::RenderDevice3D::ReloadEffects(bool param_1)

{
  if (*(code **)(*(long *)(ulong)param_1 + 0x260) == ReloadEffects) {
    ReloadEffects();
    return;
  }
  (**(code **)(*(long *)(ulong)param_1 + 0x260))();
  return;
}


/* Sexy::RenderDevice3D::CreateTextureData(Sexy::ResStreamFileGPULocationInfo*, void*, void*) */

undefined8
Sexy::RenderDevice3D::CreateTextureData
          (ResStreamFileGPULocationInfo *param_1,void *param_2,void *param_3)

{
  return 0;
}


/* Sexy::RenderDevice3D::SetTextureInfoIntoTextureData(void*, void*, void*) */

void Sexy::RenderDevice3D::SetTextureInfoIntoTextureData(void *param_1,void *param_2,void *param_3)

{
  return;
}


/* Sexy::RenderDevice3D::RenderDevice3D() */

void __thiscall Sexy::RenderDevice3D::RenderDevice3D(RenderDevice3D *this)

{
  RenderDevice::RenderDevice((RenderDevice *)this);
  *(undefined **)this = &DAT_06a332d0;
  return;
}

