// Class: Sexy::Graphics3D


/* Sexy::Graphics3D::operator new(unsigned long) */

void * __thiscall Sexy::Graphics3D::operator_new(Graphics3D *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)SimpleMemPool::GetMemory(0x6bad288);
  return pvVar1;
}


/* Sexy::Graphics3D::operator delete(void*) */

void __thiscall Sexy::Graphics3D::operator_delete(Graphics3D *this,void *param_1)

{
  SimpleMemPool::ReturnMemory((SimpleMemPool *)msPool,(uchar *)this);
  return;
}


/* Sexy::Graphics3D::SetAsCurrentContext() */

void __thiscall Sexy::Graphics3D::SetAsCurrentContext(Graphics3D *this)

{
  (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),this + 0x10);
  return;
}


/* Sexy::Graphics3D::Graphics3D(Sexy::Graphics*, Sexy::RenderDevice3D*, Sexy::HRenderContext const&)
    */

void __thiscall
Sexy::Graphics3D::Graphics3D
          (Graphics3D *this,Graphics *param_1,RenderDevice3D *param_2,HRenderContext *param_3)

{
  *(undefined8 *)(this + 0x10) = *(undefined8 *)param_3;
  *(Graphics **)this = param_1;
  *(RenderDevice3D **)(this + 8) = param_2;
  return;
}


/* Sexy::Graphics3D::SupportsPixelShaders() */

void __thiscall Sexy::Graphics3D::SupportsPixelShaders(Graphics3D *this)

{
  RenderDevice3D::SupportsPixelShaders(*(RenderDevice3D **)(this + 8));
  return;
}


/* Sexy::Graphics3D::SupportsVertexShaders() */

void __thiscall Sexy::Graphics3D::SupportsVertexShaders(Graphics3D *this)

{
  RenderDevice3D::SupportsVertexShaders(*(RenderDevice3D **)(this + 8));
  return;
}


/* Sexy::Graphics3D::SupportsCubeMaps() */

void __thiscall Sexy::Graphics3D::SupportsCubeMaps(Graphics3D *this)

{
  RenderDevice3D::SupportsCubeMaps(*(RenderDevice3D **)(this + 8));
  return;
}


/* Sexy::Graphics3D::SupportsVolumeMaps() */

void __thiscall Sexy::Graphics3D::SupportsVolumeMaps(Graphics3D *this)

{
  RenderDevice3D::SupportsVolumeMaps(*(RenderDevice3D **)(this + 8));
  return;
}


/* Sexy::Graphics3D::SupportsImageRenderTargets() */

void __thiscall Sexy::Graphics3D::SupportsImageRenderTargets(Graphics3D *this)

{
  RenderDevice3D::SupportsImageRenderTargets(*(RenderDevice3D **)(this + 8));
  return;
}


/* Sexy::Graphics3D::GetMaxTextureStages() */

void __thiscall Sexy::Graphics3D::GetMaxTextureStages(Graphics3D *this)

{
  (**(code **)(**(long **)(this + 8) + 0xf8))(*(long **)(this + 8));
  return;
}


/* Sexy::Graphics3D::AdjustVertexUVsEx(unsigned int, Sexy::SexyVertex*, int, int) */

void __thiscall
Sexy::Graphics3D::AdjustVertexUVsEx
          (Graphics3D *this,uint param_1,SexyVertex *param_2,int param_3,int param_4)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x150))(*(long **)(this + 8),param_1,param_2,param_3,param_4)
  ;
  return;
}


/* Sexy::Graphics3D::DrawPrimitiveEx(unsigned int, Sexy::Graphics3D::EPrimitiveType,
   Sexy::SexyVertex const*, int, Sexy::Color const&, int, float, float, bool, unsigned int) */

void __thiscall
Sexy::Graphics3D::DrawPrimitiveEx
          (undefined8 param_1,undefined8 param_2,Graphics3D *this,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,undefined1 param_10,undefined4 param_11)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x158))
            (param_1,param_2,*(long **)(this + 8),param_4,param_5,param_6,param_7,param_8,param_9,
             param_10,param_11);
  return;
}


/* Sexy::Graphics3D::RenderMesh(Sexy::Mesh*, Sexy::SexyMatrix4 const&, Sexy::Color const&, bool) */

void __thiscall
Sexy::Graphics3D::RenderMesh
          (Graphics3D *this,Mesh *param_1,SexyMatrix4 *param_2,Color *param_3,bool param_4)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x288))(*(long **)(this + 8),param_1,param_2,param_3,param_4)
  ;
  return;
}


/* Sexy::Graphics3D::SetBltDepth(float) */

void __thiscall Sexy::Graphics3D::SetBltDepth(Graphics3D *this,float param_1)

{
  undefined4 in_register_00005004;
  
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x160))
            (CONCAT44(in_register_00005004,param_1),*(long **)(this + 8));
  return;
}


/* Sexy::Graphics3D::PushTransform(Sexy::SexyMatrix3 const&, bool) */

void __thiscall Sexy::Graphics3D::PushTransform(Graphics3D *this,SexyMatrix3 *param_1,bool param_2)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x168))(*(long **)(this + 8),param_1,param_2);
  return;
}


/* Sexy::Graphics3D::PopTransform() */

void __thiscall Sexy::Graphics3D::PopTransform(Graphics3D *this)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x170))(*(long **)(this + 8));
  return;
}


/* Sexy::Graphics3D::PopTransform(Sexy::SexyMatrix3&) */

void __thiscall Sexy::Graphics3D::PopTransform(Graphics3D *this,SexyMatrix3 *param_1)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x178))(*(long **)(this + 8),param_1);
  return;
}


/* Sexy::Graphics3D::ClearColorBuffer(Sexy::Color const&) */

void __thiscall Sexy::Graphics3D::ClearColorBuffer(Graphics3D *this,Color *param_1)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x180))(*(long **)(this + 8),param_1);
  return;
}


/* Sexy::Graphics3D::ClearMask() */

void __thiscall Sexy::Graphics3D::ClearMask(Graphics3D *this)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x188))(*(long **)(this + 8));
  return;
}


/* Sexy::Graphics3D::SetDepthState(Sexy::Graphics3D::ECompareFunc, bool) */

void __thiscall
Sexy::Graphics3D::SetDepthState(Graphics3D *this,undefined8 param_2,undefined1 param_3)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 400))(*(long **)(this + 8),param_2,param_3);
  return;
}


/* Sexy::Graphics3D::SetAlphaTest(Sexy::Graphics3D::ECompareFunc, int) */

void __thiscall
Sexy::Graphics3D::SetAlphaTest(Graphics3D *this,undefined8 param_2,undefined8 param_3)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x198))(*(long **)(this + 8),param_2,param_3);
  return;
}


/* Sexy::Graphics3D::SetColorWriteState(bool, bool, bool, bool) */

void __thiscall
Sexy::Graphics3D::SetColorWriteState
          (Graphics3D *this,bool param_1,bool param_2,bool param_3,bool param_4)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x1a0))(*(long **)(this + 8),param_1,param_2,param_3,param_4)
  ;
  return;
}


/* Sexy::Graphics3D::SetWireframe(bool) */

void __thiscall Sexy::Graphics3D::SetWireframe(Graphics3D *this,bool param_1)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x1a8))(*(long **)(this + 8),param_1);
  return;
}


/* Sexy::Graphics3D::SetBlend(Sexy::Graphics3D::EBlendMode, Sexy::Graphics3D::EBlendMode) */

void __thiscall Sexy::Graphics3D::SetBlend(Graphics3D *this,undefined8 param_2,undefined8 param_3)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x1b0))(*(long **)(this + 8),param_2,param_3);
  return;
}


/* Sexy::Graphics3D::SetBackfaceCulling(bool, bool) */

void __thiscall Sexy::Graphics3D::SetBackfaceCulling(Graphics3D *this,bool param_1,bool param_2)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x1b8))(*(long **)(this + 8),param_1,param_2);
  return;
}


/* Sexy::Graphics3D::SetLightEnabled(int, bool) */

void __thiscall Sexy::Graphics3D::SetLightEnabled(Graphics3D *this,int param_1,bool param_2)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x1c8))(*(long **)(this + 8),param_1,param_2);
  return;
}


/* Sexy::Graphics3D::SetPointLight(int, Sexy::SexyVector3 const&, Sexy::Graphics3D::LightColors
   const&, float, Sexy::SexyVector3 const&) */

void __thiscall
Sexy::Graphics3D::SetPointLight
          (Graphics3D *this,int param_1,SexyVector3 *param_2,LightColors *param_3,float param_4,
          SexyVector3 *param_5)

{
  undefined4 in_register_00005004;
  
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x1d0))
            (CONCAT44(in_register_00005004,param_4),*(long **)(this + 8),param_1,param_2,param_3,
             param_5);
  return;
}


/* Sexy::Graphics3D::SetDirectionalLight(int, Sexy::SexyVector3 const&,
   Sexy::Graphics3D::LightColors const&) */

void __thiscall
Sexy::Graphics3D::SetDirectionalLight
          (Graphics3D *this,int param_1,SexyVector3 *param_2,LightColors *param_3)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x1d8))(*(long **)(this + 8),param_1,param_2,param_3);
  return;
}


/* Sexy::Graphics3D::SetGlobalAmbient(Sexy::Color const&) */

void __thiscall Sexy::Graphics3D::SetGlobalAmbient(Graphics3D *this,Color *param_1)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x1e0))(*(long **)(this + 8),param_1);
  return;
}


/* Sexy::Graphics3D::SetMaterialAmbient(Sexy::Color const&, int) */

void __thiscall Sexy::Graphics3D::SetMaterialAmbient(Graphics3D *this,Color *param_1,int param_2)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x1e8))(*(long **)(this + 8),param_1,param_2);
  return;
}


/* Sexy::Graphics3D::SetMaterialDiffuse(Sexy::Color const&, int) */

void __thiscall Sexy::Graphics3D::SetMaterialDiffuse(Graphics3D *this,Color *param_1,int param_2)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x1f0))(*(long **)(this + 8),param_1,param_2);
  return;
}


/* Sexy::Graphics3D::SetMaterialSpecular(Sexy::Color const&, int, float) */

void __thiscall
Sexy::Graphics3D::SetMaterialSpecular(Graphics3D *this,Color *param_1,int param_2,float param_3)

{
  undefined4 in_register_00005004;
  
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x1f8))
            (CONCAT44(in_register_00005004,param_3),*(long **)(this + 8),param_1,param_2);
  return;
}


/* Sexy::Graphics3D::SetMaterialEmissive(Sexy::Color const&, int) */

void __thiscall Sexy::Graphics3D::SetMaterialEmissive(Graphics3D *this,Color *param_1,int param_2)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x200))(*(long **)(this + 8),param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics3D::SetLightingEnabled(bool, bool) */

void __thiscall Sexy::Graphics3D::SetLightingEnabled(Graphics3D *this,bool param_1,bool param_2)

{
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x1c0))(*(long **)(this + 8),param_1);
  if ((param_1) && (param_2)) {
    Color::Color(aCStack_18,1);
    SetMaterialAmbient(this,aCStack_18,-1);
    Color::Color(aCStack_18,1);
    SetMaterialDiffuse(this,aCStack_18,0);
    Color::Color(aCStack_18,1);
    SetMaterialSpecular(this,aCStack_18,-1,0.0);
    Color::Color(aCStack_18,0);
    SetMaterialEmissive(this,aCStack_18,-1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Graphics3D::SetWorldTransform(Sexy::SexyMatrix4 const*) */

void __thiscall Sexy::Graphics3D::SetWorldTransform(Graphics3D *this,SexyMatrix4 *param_1)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x208))(*(long **)(this + 8),param_1);
  return;
}


/* Sexy::Graphics3D::SetViewTransform(Sexy::SexyMatrix4 const*) */

void __thiscall Sexy::Graphics3D::SetViewTransform(Graphics3D *this,SexyMatrix4 *param_1)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x210))(*(long **)(this + 8),param_1);
  return;
}


/* Sexy::Graphics3D::SetProjectionTransform(Sexy::SexyMatrix4 const*) */

void __thiscall Sexy::Graphics3D::SetProjectionTransform(Graphics3D *this,SexyMatrix4 *param_1)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x218))(*(long **)(this + 8),param_1);
  return;
}


/* Sexy::Graphics3D::SetTextureTransform(int, Sexy::SexyMatrix4 const*, int) */

void __thiscall
Sexy::Graphics3D::SetTextureTransform(Graphics3D *this,int param_1,SexyMatrix4 *param_2,int param_3)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x220))(*(long **)(this + 8),param_1,param_2,param_3);
  return;
}


/* Sexy::Graphics3D::SetTexture(int, Sexy::Image*) */

void __thiscall Sexy::Graphics3D::SetTexture(Graphics3D *this,int param_1,Image *param_2)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x230))(*(long **)(this + 8),param_1,param_2);
  return;
}


/* Sexy::Graphics3D::SetTextureWrap(int, bool) */

void __thiscall Sexy::Graphics3D::SetTextureWrap(Graphics3D *this,int param_1,bool param_2)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x238))(*(long **)(this + 8),param_1,param_2,param_2);
  return;
}


/* Sexy::Graphics3D::SetTextureWrap(int, bool, bool) */

void __thiscall
Sexy::Graphics3D::SetTextureWrap(Graphics3D *this,int param_1,bool param_2,bool param_3)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x238))(*(long **)(this + 8),param_1,param_2,param_3);
  return;
}


/* Sexy::Graphics3D::SetTextureLinearFilter(int, bool) */

void __thiscall Sexy::Graphics3D::SetTextureLinearFilter(Graphics3D *this,int param_1,bool param_2)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x240))(*(long **)(this + 8),param_1,param_2);
  return;
}


/* Sexy::Graphics3D::SetTextureCoordSource(int, int, Sexy::Graphics3D::ETexCoordGen) */

void __thiscall
Sexy::Graphics3D::SetTextureCoordSource
          (Graphics3D *this,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x248))(*(long **)(this + 8),param_2,param_3,param_4);
  return;
}


/* Sexy::Graphics3D::SetTextureFactor(int) */

void __thiscall Sexy::Graphics3D::SetTextureFactor(Graphics3D *this,int param_1)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x250))(*(long **)(this + 8),param_1);
  return;
}


/* Sexy::Graphics3D::GetEffect(Sexy::RenderEffectDefinition*) */

void Sexy::Graphics3D::GetEffect(RenderEffectDefinition *param_1)

{
  (**(code **)(**(long **)(param_1 + 8) + 600))(*(long **)(param_1 + 8));
  return;
}


/* Sexy::Graphics3D::SetViewport(int, int, int, int, float, float) */

void __thiscall
Sexy::Graphics3D::SetViewport
          (Graphics3D *this,int param_1,int param_2,int param_3,int param_4,float param_5,
          float param_6)

{
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 8) + 0x228))
            (CONCAT44(in_register_00005004,param_5),CONCAT44(in_register_00005024,param_6),
             *(long **)(this + 8),(int)*(float *)(*(long *)this + 0x10) + param_1,
             (int)*(float *)(*(long *)this + 0x14) + param_2,param_3,param_4);
  return;
}


/* Sexy::Graphics3D::SetMasking(Sexy::Graphics3D::EMaskMode, int, float, float) */

void __thiscall
Sexy::Graphics3D::SetMasking
          (undefined8 param_1,undefined4 param_2,Graphics3D *this,int param_4,undefined8 param_5)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  
  SetAsCurrentContext(this);
  switch(param_4) {
  case 0:
    (**(code **)(**(long **)(this + 8) + 0x198))(*(long **)(this + 8),8,0);
    plVar1 = *(long **)(this + 8);
    uVar2 = 8;
    lVar3 = *plVar1;
    break;
  case 1:
  case 2:
    (**(code **)(**(long **)(this + 8) + 0x198))(*(long **)(this + 8),5,param_5);
    (**(code **)(**(long **)(this + 8) + 400))(*(long **)(this + 8),8,1);
    (**(code **)(**(long **)(this + 8) + 0x160))(param_1,*(long **)(this + 8));
    plVar1 = *(long **)(this + 8);
    if (param_4 == 1) {
      (**(code **)(*plVar1 + 0x1b0))(plVar1,1,2);
      return;
    }
    (**(code **)(*plVar1 + 0x1b0))(plVar1,0xffff,0xffff);
    return;
  case 3:
  case 4:
    (**(code **)(**(long **)(this + 8) + 0x198))(*(long **)(this + 8),5,0);
    plVar1 = *(long **)(this + 8);
    uVar2 = 4;
    if (param_4 != 4) {
      uVar2 = 7;
    }
    lVar3 = *plVar1;
    break;
  default:
    goto switchD_0514f5a4_default;
  }
  (**(code **)(lVar3 + 400))(plVar1,uVar2,0);
  (**(code **)(**(long **)(this + 8) + 0x160))(param_2,*(long **)(this + 8));
  (**(code **)(**(long **)(this + 8) + 0x1b0))(*(long **)(this + 8),0xffff,0xffff);
switchD_0514f5a4_default:
  return;
}

