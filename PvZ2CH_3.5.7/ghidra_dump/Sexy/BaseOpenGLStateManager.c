// Class: Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::Init() */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::Init
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this)

{
  (**(code **)(*(long *)this + 0x48))();
  return;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::Reset() */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::Reset
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this)

{
  (**(code **)(*(long *)this + 0x50))();
  return;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetVertexFormat(unsigned int, unsigned
   int) */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetVertexFormat
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  State *pSVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x298);
  puVar2 = (undefined8 *)FUN_052d9df0(uVar4,0);
  pSVar3 = (State *)FUN_052d9dfc(*puVar2,0);
  uVar1 = RenderStateManager::State::GetDword(pSVar3);
  if (uVar1 != param_1) {
    RenderStateManager::State::SetValue(pSVar3,param_1);
    uVar4 = *(undefined8 *)(this + 0x298);
  }
  puVar2 = (undefined8 *)FUN_052d9df0(uVar4,1);
  pSVar3 = (State *)FUN_052d9dfc(*puVar2,0);
  uVar1 = RenderStateManager::State::GetDword(pSVar3);
  if (uVar1 != param_2) {
    RenderStateManager::State::SetValue(pSVar3,param_2);
    return;
  }
  return;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetScissorRectToViewportRect() */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetScissorRectToViewportRect
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this)

{
  uint uVar1;
  State *pSVar2;
  State *pSVar3;
  
  pSVar2 = (State *)FUN_052d9dfc(*(undefined8 *)(this + 0x2b0),1);
  pSVar3 = (State *)FUN_052d9dfc(*(undefined8 *)(this + 0x280),0);
  uVar1 = RenderStateManager::State::GetDword(pSVar3);
  RenderStateManager::State::SetValue(pSVar2,uVar1);
  pSVar2 = (State *)FUN_052d9dfc(*(undefined8 *)(this + 0x2b0),2);
  pSVar3 = (State *)FUN_052d9dfc(*(undefined8 *)(this + 0x280),1);
  uVar1 = RenderStateManager::State::GetDword(pSVar3);
  RenderStateManager::State::SetValue(pSVar2,uVar1);
  pSVar2 = (State *)FUN_052d9dfc(*(undefined8 *)(this + 0x2b0),3);
  pSVar3 = (State *)FUN_052d9dfc(*(undefined8 *)(this + 0x280),2);
  uVar1 = RenderStateManager::State::GetDword(pSVar3);
  RenderStateManager::State::SetValue(pSVar2,uVar1);
  pSVar2 = (State *)FUN_052d9dfc(*(undefined8 *)(this + 0x2b0),4);
  pSVar3 = (State *)FUN_052d9dfc(*(undefined8 *)(this + 0x280),3);
  uVar1 = RenderStateManager::State::GetDword(pSVar3);
  RenderStateManager::State::SetValue(pSVar2,uVar1);
  pSVar2 = (State *)FUN_052d9dfc(*(undefined8 *)(this + 0x2b0),0);
  RenderStateManager::State::SetValue(pSVar2,1);
  return;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetRenderState(unsigned int, unsigned int)
    */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetRenderState
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this,uint param_1,uint param_2)

{
  State *this_00;
  
  this_00 = (State *)FUN_052d9dfc(*(undefined8 *)(this + 0x1d8),param_1);
  RenderStateManager::State::SetValue(this_00,param_2);
  return;
}


void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetRenderState
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this,uint param_1,uint param_2)

{
  State *this_00;
  
  this_00 = (State *)FUN_052d9dfc(*(undefined8 *)(this + 0x1d8),param_1);
  RenderStateManager::State::SetValue(this_00,param_2);
  return;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetVertexFormat() */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetVertexFormat
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this)

{
  undefined8 *puVar1;
  State *this_00;
  
  puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x298),0);
  this_00 = (State *)FUN_052d9dfc(*puVar1,0);
  RenderStateManager::State::GetDword(this_00);
  return;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetVertexSize() */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetVertexSize
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this)

{
  undefined8 *puVar1;
  State *this_00;
  
  puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x298),1);
  this_00 = (State *)FUN_052d9dfc(*puVar1,0);
  RenderStateManager::State::GetDword(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetAtlasState(unsigned int,
   Sexy::SexyVector2&, Sexy::SexyVector2&, Sexy::SexyVector2&) */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetAtlasState
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this,uint param_1,SexyVector2 *param_2,
          SexyVector2 *param_3,SexyVector2 *param_4)

{
  undefined8 *puVar1;
  State *pSVar2;
  float local_10;
  float fStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x298),0x19);
  pSVar2 = (State *)FUN_052d9dfc(*puVar1,param_1);
  RenderStateManager::State::GetVector
            (pSVar2,&local_10,&fStack_c,(float *)param_2,(float *)(param_2 + 4));
  if (0.5 <= local_10) {
    puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x298),0x1a);
    pSVar2 = (State *)FUN_052d9dfc(*puVar1,param_1);
    RenderStateManager::State::GetVector
              (pSVar2,(float *)param_3,(float *)(param_3 + 4),(float *)param_4,
               (float *)(param_4 + 4));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0.5 <= local_10);
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetTransform(unsigned int,
   Sexy::SexyMatrix4*) const */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetTransform
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this,uint param_1,SexyMatrix4 *param_2)

{
  undefined8 *puVar1;
  State *pSVar2;
  
  puVar1 = (undefined8 *)FUN_052d9e3c(*(undefined8 *)(this + 0x268),param_1);
  pSVar2 = (State *)FUN_052d9e48(*puVar1,0);
  RenderStateManager::State::GetVector
            (pSVar2,(float *)param_2,(float *)(param_2 + 4),(float *)(param_2 + 8),
             (float *)(param_2 + 0xc));
  puVar1 = (undefined8 *)FUN_052d9e3c(*(undefined8 *)(this + 0x268),param_1);
  pSVar2 = (State *)FUN_052d9e48(*puVar1,1);
  RenderStateManager::State::GetVector
            (pSVar2,(float *)(param_2 + 0x10),(float *)(param_2 + 0x14),(float *)(param_2 + 0x18),
             (float *)(param_2 + 0x1c));
  puVar1 = (undefined8 *)FUN_052d9e3c(*(undefined8 *)(this + 0x268),param_1);
  pSVar2 = (State *)FUN_052d9e48(*puVar1,2);
  RenderStateManager::State::GetVector
            (pSVar2,(float *)(param_2 + 0x20),(float *)(param_2 + 0x24),(float *)(param_2 + 0x28),
             (float *)(param_2 + 0x2c));
  puVar1 = (undefined8 *)FUN_052d9e3c(*(undefined8 *)(this + 0x268),param_1);
  pSVar2 = (State *)FUN_052d9e48(*puVar1,3);
  RenderStateManager::State::GetVector
            (pSVar2,(float *)(param_2 + 0x30),(float *)(param_2 + 0x34),(float *)(param_2 + 0x38),
             (float *)(param_2 + 0x3c));
  return;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetBlendOverride(Sexy::Graphics3D::EBlendMode&,
   Sexy::Graphics3D::EBlendMode&) */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetBlendOverride
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this,EBlendMode *param_1,
          EBlendMode *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  State *pSVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x298);
  puVar2 = (undefined8 *)FUN_052d9df0(uVar4,8);
  pSVar3 = (State *)FUN_052d9dfc(*puVar2,0);
  uVar1 = RenderStateManager::State::GetDword(pSVar3);
  *(undefined4 *)param_1 = uVar1;
  puVar2 = (undefined8 *)FUN_052d9df0(uVar4,9);
  pSVar3 = (State *)FUN_052d9dfc(*puVar2,0);
  uVar1 = RenderStateManager::State::GetDword(pSVar3);
  *(undefined4 *)param_2 = uVar1;
  return;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetBltDepth() */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetBltDepth
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this)

{
  undefined8 *puVar1;
  State *this_00;
  
  puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x298),10);
  this_00 = (State *)FUN_052d9dfc(*puVar1,0);
  RenderStateManager::State::GetFloat(this_00);
  return;
}


void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetBltDepth
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this)

{
  undefined8 *puVar1;
  State *this_00;
  
  puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x298),10);
  this_00 = (State *)FUN_052d9dfc(*puVar1,0);
  RenderStateManager::State::GetFloat(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetTextureScale(int, Sexy::SexyVector2) */

void Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetTextureScale
               (float param_1,float param_2,long param_3,int param_4)

{
  undefined8 *puVar1;
  State *this;
  StateValue aSStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(param_3 + 0x298),0x14);
  this = (State *)FUN_052d9dfc(*puVar1,(long)param_4);
  RenderStateManager::StateValue::StateValue(aSStack_20,param_1,param_2,1.0,1.0);
  RenderStateManager::State::SetValue(this,aSStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::Set3DMode(bool) */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::Set3DMode
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this,bool param_1)

{
  undefined8 *puVar1;
  State *this_00;
  
  puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x298),0xb);
  this_00 = (State *)FUN_052d9dfc(*puVar1,0);
  RenderStateManager::State::SetValue(this_00,(uint)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetTextureScale(int) */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetTextureScale
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this,int param_1)

{
  undefined8 *puVar1;
  State *this_00;
  float fStack_18;
  float fStack_14;
  ResistenceValueInfo local_10 [4];
  float fStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(local_10);
  puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x298),0x14);
  this_00 = (State *)FUN_052d9dfc(*puVar1,(long)param_1);
  RenderStateManager::State::GetVector(this_00,(float *)local_10,&fStack_c,&fStack_18,&fStack_14);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)_local_10,(int)((ulong)_local_10 >> 0x20));
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetBltDepth(float) */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetBltDepth
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this,float param_1)

{
  undefined8 *puVar1;
  State *this_00;
  
  puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x298),10);
  this_00 = (State *)FUN_052d9dfc(*puVar1,0);
  RenderStateManager::State::SetValue(this_00,param_1);
  return;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetBlendOverride(Sexy::Graphics3D::EBlendMode,
   Sexy::Graphics3D::EBlendMode) */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetBlendOverride
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  State *pSVar2;
  
  puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x298),8);
  pSVar2 = (State *)FUN_052d9dfc(*puVar1,0);
  RenderStateManager::State::SetValue(pSVar2,param_2);
  puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x298),9);
  pSVar2 = (State *)FUN_052d9dfc(*puVar1,0);
  RenderStateManager::State::SetValue(pSVar2,param_3);
  return;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetBackfaceCulling(bool, bool) */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetBackfaceCulling
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this,bool param_1,bool param_2)

{
  undefined8 *puVar1;
  State *this_00;
  uint uVar2;
  
  puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x298),0xc);
  this_00 = (State *)FUN_052d9dfc(*puVar1,0);
  uVar2 = 2;
  if (!param_1) {
    uVar2 = 0;
  }
  RenderStateManager::State::SetValue(this_00,uVar2 | param_2);
  return;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetTextureUWrap(int, bool) */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetTextureUWrap
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this,int param_1,bool param_2)

{
  undefined8 *puVar1;
  State *pSVar2;
  
  if (!param_2) {
    puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x298),0x10);
    pSVar2 = (State *)FUN_052d9dfc(*puVar1,(long)param_1);
    RenderStateManager::State::SetValue(pSVar2,0x812f);
    return;
  }
  puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x298),0x10);
  pSVar2 = (State *)FUN_052d9dfc(*puVar1,(long)param_1);
  RenderStateManager::State::SetValue(pSVar2,0x2901);
  return;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetTextureVWrap(int, bool) */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetTextureVWrap
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this,int param_1,bool param_2)

{
  undefined8 *puVar1;
  State *pSVar2;
  
  if (!param_2) {
    puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x298),0x11);
    pSVar2 = (State *)FUN_052d9dfc(*puVar1,(long)param_1);
    RenderStateManager::State::SetValue(pSVar2,0x812f);
    return;
  }
  puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x298),0x11);
  pSVar2 = (State *)FUN_052d9dfc(*puVar1,(long)param_1);
  RenderStateManager::State::SetValue(pSVar2,0x2901);
  return;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetTextureMinFilter(int, bool) */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetTextureMinFilter
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this,int param_1,bool param_2)

{
  undefined8 *puVar1;
  State *pSVar2;
  
  if (!param_2) {
    puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x298),0x12);
    pSVar2 = (State *)FUN_052d9dfc(*puVar1,(long)param_1);
    RenderStateManager::State::SetValue(pSVar2,0x2600);
    return;
  }
  puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x298),0x12);
  pSVar2 = (State *)FUN_052d9dfc(*puVar1,(long)param_1);
  RenderStateManager::State::SetValue(pSVar2,0x2601);
  return;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetTextureMagFilter(int, bool) */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetTextureMagFilter
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this,int param_1,bool param_2)

{
  undefined8 *puVar1;
  State *pSVar2;
  
  if (!param_2) {
    puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x298),0x13);
    pSVar2 = (State *)FUN_052d9dfc(*puVar1,(long)param_1);
    RenderStateManager::State::SetValue(pSVar2,0x2600);
    return;
  }
  puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x298),0x13);
  pSVar2 = (State *)FUN_052d9dfc(*puVar1,(long)param_1);
  RenderStateManager::State::SetValue(pSVar2,0x2601);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetTransform(unsigned int,
   Sexy::SexyMatrix4 const*) */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetTransform
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this,uint param_1,SexyMatrix4 *param_2)

{
  undefined8 *puVar1;
  State *pSVar2;
  undefined8 uVar3;
  StateValue aSStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 2) {
    puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x268),2);
    pSVar2 = (State *)FUN_052d9dfc(*puVar1,0);
    RenderStateManager::StateValue::StateValue
              (aSStack_20,*(float *)param_2,*(float *)(param_2 + 4),*(float *)(param_2 + 8),
               *(float *)(param_2 + 0xc));
    RenderStateManager::State::SetValue(pSVar2,aSStack_20);
    puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x268),2);
    pSVar2 = (State *)FUN_052d9dfc(*puVar1,1);
    RenderStateManager::StateValue::StateValue
              (aSStack_20,*(float *)(param_2 + 0x10),*(float *)(param_2 + 0x14),
               *(float *)(param_2 + 0x18),*(float *)(param_2 + 0x1c));
    RenderStateManager::State::SetValue(pSVar2,aSStack_20);
    puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x268),2);
    pSVar2 = (State *)FUN_052d9dfc(*puVar1,2);
    RenderStateManager::StateValue::StateValue
              (aSStack_20,*(float *)(param_2 + 0x20),*(float *)(param_2 + 0x24),
               *(float *)(param_2 + 0x28),*(float *)(param_2 + 0x2c));
    RenderStateManager::State::SetValue(pSVar2,aSStack_20);
    uVar3 = *(undefined8 *)(this + 0x268);
    param_1 = 2;
  }
  else {
    puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x268),param_1);
    pSVar2 = (State *)FUN_052d9dfc(*puVar1,0);
    RenderStateManager::StateValue::StateValue
              (aSStack_20,*(float *)param_2,*(float *)(param_2 + 4),*(float *)(param_2 + 8),
               *(float *)(param_2 + 0xc));
    RenderStateManager::State::SetValue(pSVar2,aSStack_20);
    puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x268),param_1);
    pSVar2 = (State *)FUN_052d9dfc(*puVar1,1);
    RenderStateManager::StateValue::StateValue
              (aSStack_20,*(float *)(param_2 + 0x10),*(float *)(param_2 + 0x14),
               *(float *)(param_2 + 0x18),*(float *)(param_2 + 0x1c));
    RenderStateManager::State::SetValue(pSVar2,aSStack_20);
    puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x268),param_1);
    pSVar2 = (State *)FUN_052d9dfc(*puVar1,2);
    RenderStateManager::StateValue::StateValue
              (aSStack_20,*(float *)(param_2 + 0x20),*(float *)(param_2 + 0x24),
               *(float *)(param_2 + 0x28),*(float *)(param_2 + 0x2c));
    RenderStateManager::State::SetValue(pSVar2,aSStack_20);
    uVar3 = *(undefined8 *)(this + 0x268);
  }
  puVar1 = (undefined8 *)FUN_052d9df0(uVar3,param_1);
  pSVar2 = (State *)FUN_052d9dfc(*puVar1,3);
  RenderStateManager::StateValue::StateValue
            (aSStack_20,*(float *)(param_2 + 0x30),*(float *)(param_2 + 0x34),
             *(float *)(param_2 + 0x38),*(float *)(param_2 + 0x3c));
  RenderStateManager::State::SetValue(pSVar2,aSStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetTransform
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this,uint param_1,SexyMatrix4 *param_2)

{
  undefined8 *puVar1;
  State *pSVar2;
  undefined8 uVar3;
  StateValue aSStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (param_1 == 2) {
    puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x268),2);
    pSVar2 = (State *)FUN_052d9dfc(*puVar1,0);
    RenderStateManager::StateValue::StateValue
              (aSStack_20,*(float *)param_2,*(float *)(param_2 + 4),*(float *)(param_2 + 8),
               *(float *)(param_2 + 0xc));
    RenderStateManager::State::SetValue(pSVar2,aSStack_20);
    puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x268),2);
    pSVar2 = (State *)FUN_052d9dfc(*puVar1,1);
    RenderStateManager::StateValue::StateValue
              (aSStack_20,*(float *)(param_2 + 0x10),*(float *)(param_2 + 0x14),
               *(float *)(param_2 + 0x18),*(float *)(param_2 + 0x1c));
    RenderStateManager::State::SetValue(pSVar2,aSStack_20);
    puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x268),2);
    pSVar2 = (State *)FUN_052d9dfc(*puVar1,2);
    RenderStateManager::StateValue::StateValue
              (aSStack_20,*(float *)(param_2 + 0x20),*(float *)(param_2 + 0x24),
               *(float *)(param_2 + 0x28),*(float *)(param_2 + 0x2c));
    RenderStateManager::State::SetValue(pSVar2,aSStack_20);
    uVar3 = *(undefined8 *)(this + 0x268);
    param_1 = 2;
  }
  else {
    puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x268),param_1);
    pSVar2 = (State *)FUN_052d9dfc(*puVar1,0);
    RenderStateManager::StateValue::StateValue
              (aSStack_20,*(float *)param_2,*(float *)(param_2 + 4),*(float *)(param_2 + 8),
               *(float *)(param_2 + 0xc));
    RenderStateManager::State::SetValue(pSVar2,aSStack_20);
    puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x268),param_1);
    pSVar2 = (State *)FUN_052d9dfc(*puVar1,1);
    RenderStateManager::StateValue::StateValue
              (aSStack_20,*(float *)(param_2 + 0x10),*(float *)(param_2 + 0x14),
               *(float *)(param_2 + 0x18),*(float *)(param_2 + 0x1c));
    RenderStateManager::State::SetValue(pSVar2,aSStack_20);
    puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x268),param_1);
    pSVar2 = (State *)FUN_052d9dfc(*puVar1,2);
    RenderStateManager::StateValue::StateValue
              (aSStack_20,*(float *)(param_2 + 0x20),*(float *)(param_2 + 0x24),
               *(float *)(param_2 + 0x28),*(float *)(param_2 + 0x2c));
    RenderStateManager::State::SetValue(pSVar2,aSStack_20);
    uVar3 = *(undefined8 *)(this + 0x268);
  }
  puVar1 = (undefined8 *)FUN_052d9df0(uVar3,param_1);
  pSVar2 = (State *)FUN_052d9dfc(*puVar1,3);
  RenderStateManager::StateValue::StateValue
            (aSStack_20,*(float *)(param_2 + 0x30),*(float *)(param_2 + 0x34),
             *(float *)(param_2 + 0x38),*(float *)(param_2 + 0x3c));
  RenderStateManager::State::SetValue(pSVar2,aSStack_20);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetAtlasState(unsigned int, bool,
   Sexy::SexyVector2 const*, Sexy::SexyVector2 const*, Sexy::SexyVector2 const*) */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetAtlasState
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this,uint param_1,bool param_2,
          SexyVector2 *param_3,SexyVector2 *param_4,SexyVector2 *param_5)

{
  undefined8 *puVar1;
  State *pSVar2;
  StateValue aSStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2) {
    puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x298),0x19);
    pSVar2 = (State *)FUN_052d9dfc(*puVar1,param_1);
    RenderStateManager::State::SetValue(pSVar2,1.0,0.0,*(float *)param_3,*(float *)(param_3 + 4));
    puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x298),0x1a);
    pSVar2 = (State *)FUN_052d9dfc(*puVar1,param_1);
    RenderStateManager::StateValue::StateValue
              (aSStack_20,*(float *)param_4,*(float *)(param_4 + 4),*(float *)param_5,
               *(float *)(param_5 + 4));
    RenderStateManager::State::SetValue(pSVar2,aSStack_20);
  }
  else {
    puVar1 = (undefined8 *)FUN_052d9df0(*(undefined8 *)(this + 0x298),0x19);
    pSVar2 = (State *)FUN_052d9dfc(*puVar1,param_1);
    RenderStateManager::State::SetValue(pSVar2,0.0,0.0,0.0,0.0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetCommitFunc(Sexy::RenderStateManager::State*)
    */

code * __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetCommitFunc
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this,State *param_1)

{
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    return DoCommitRenderState;
  default:
    return DoGLState;
  case 6:
    return DoCommitTransformState;
  case 7:
    return DoCommitViewportState;
  case 8:
    break;
  case 9:
    return DoCommitScissorState;
  }
  if (1 < *(int *)(param_1 + 0xc) - 0x19U) {
    return DoCommitMiscState;
  }
  return (code *)0x0;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::DoGLState(Sexy::RenderStateManager::State*)
    */

undefined8 Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::DoGLState(State *param_1)

{
  return 1;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetDefaultShader() */

void Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetDefaultShader(void)

{
  glUseProgram(0);
  return;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::ResetStates() */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::ResetStates
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this)

{
  long lVar1;
  State *pSVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  uVar5 = *(undefined8 *)(this + 0x1d8);
  lVar1 = FUN_052eb7a4(uVar5,*(undefined8 *)(this + 0x1e0));
  if (lVar1 != 0) {
    lVar7 = 0;
    while( true ) {
      pSVar2 = (State *)FUN_052eb780(uVar5,lVar7);
      RenderStateManager::State::Reset(pSVar2);
      if (lVar7 + 1 == lVar1) break;
      uVar5 = *(undefined8 *)(this + 0x1d8);
      lVar7 = lVar7 + 1;
    }
  }
  uVar5 = *(undefined8 *)(this + 0x280);
  lVar1 = FUN_052eb7a4(uVar5,*(undefined8 *)(this + 0x288));
  if (lVar1 != 0) {
    lVar7 = 0;
    while( true ) {
      pSVar2 = (State *)FUN_052eb780(uVar5,lVar7);
      RenderStateManager::State::Reset(pSVar2);
      if (lVar7 + 1 == lVar1) break;
      uVar5 = *(undefined8 *)(this + 0x280);
      lVar7 = lVar7 + 1;
    }
  }
  uVar5 = *(undefined8 *)(this + 0x2b0);
  lVar1 = FUN_052eb7a4(uVar5,*(undefined8 *)(this + 0x2b8));
  if (lVar1 != 0) {
    lVar7 = 0;
    while( true ) {
      pSVar2 = (State *)FUN_052eb780(uVar5,lVar7);
      RenderStateManager::State::Reset(pSVar2);
      if (lVar7 + 1 == lVar1) break;
      uVar5 = *(undefined8 *)(this + 0x2b0);
      lVar7 = lVar7 + 1;
    }
  }
  uVar5 = *(undefined8 *)(this + 0x298);
  lVar1 = FUN_052eb790(uVar5,*(undefined8 *)(this + 0x2a0));
  if (lVar1 != 0) {
    lVar7 = 0;
    while( true ) {
      puVar3 = (undefined8 *)FUN_052eb774(uVar5,lVar7);
      uVar5 = *puVar3;
      lVar4 = FUN_052eb7a4(uVar5,puVar3[1]);
      if (lVar4 != 0) {
        lVar6 = 0;
        while( true ) {
          pSVar2 = (State *)FUN_052eb780(uVar5,lVar6);
          RenderStateManager::State::Reset(pSVar2);
          if (lVar6 + 1 == lVar4) break;
          puVar3 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),lVar7);
          uVar5 = *puVar3;
          lVar6 = lVar6 + 1;
        }
      }
      lVar7 = lVar7 + 1;
      if (lVar7 == lVar1) break;
      uVar5 = *(undefined8 *)(this + 0x298);
    }
  }
  return;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetScissorRect(unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned int) */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetScissorRect
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this,uint param_1,uint param_2,
          uint param_3,uint param_4,uint param_5)

{
  State *pSVar1;
  
  pSVar1 = (State *)FUN_052eb780(*(undefined8 *)(this + 0x2b0),1);
  RenderStateManager::State::SetValue(pSVar1,param_1);
  pSVar1 = (State *)FUN_052eb780(*(undefined8 *)(this + 0x2b0),2);
  RenderStateManager::State::SetValue(pSVar1,param_2);
  pSVar1 = (State *)FUN_052eb780(*(undefined8 *)(this + 0x2b0),3);
  RenderStateManager::State::SetValue(pSVar1,param_3);
  pSVar1 = (State *)FUN_052eb780(*(undefined8 *)(this + 0x2b0),4);
  RenderStateManager::State::SetValue(pSVar1,param_4);
  pSVar1 = (State *)FUN_052eb780(*(undefined8 *)(this + 0x2b0),0);
  RenderStateManager::State::SetValue(pSVar1,param_5);
  return;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetTexture(int, unsigned int, unsigned
   int) */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetTexture
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this,int param_1,uint param_2,
          uint param_3)

{
  undefined8 *puVar1;
  State *pSVar2;
  
  puVar1 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),0xe);
  pSVar2 = (State *)FUN_052eb780(*puVar1,(long)param_1);
  RenderStateManager::State::SetValue(pSVar2,param_2);
  puVar1 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),0xf);
  pSVar2 = (State *)FUN_052eb780(*puVar1,(long)param_1);
  RenderStateManager::State::SetValue(pSVar2,param_3);
  return;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetViewport(unsigned int, unsigned int,
   unsigned int, unsigned int, float, float) */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetViewport
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this,uint param_1,uint param_2,
          uint param_3,uint param_4,float param_5,float param_6)

{
  State *pSVar1;
  
  pSVar1 = (State *)FUN_052eb780(*(undefined8 *)(this + 0x280),0);
  RenderStateManager::State::SetDirty(pSVar1);
  pSVar1 = (State *)FUN_052eb780(*(undefined8 *)(this + 0x280),1);
  RenderStateManager::State::SetDirty(pSVar1);
  pSVar1 = (State *)FUN_052eb780(*(undefined8 *)(this + 0x280),2);
  RenderStateManager::State::SetDirty(pSVar1);
  pSVar1 = (State *)FUN_052eb780(*(undefined8 *)(this + 0x280),3);
  RenderStateManager::State::SetDirty(pSVar1);
  pSVar1 = (State *)FUN_052eb780(*(undefined8 *)(this + 0x280),4);
  RenderStateManager::State::SetDirty(pSVar1);
  pSVar1 = (State *)FUN_052eb780(*(undefined8 *)(this + 0x280),5);
  RenderStateManager::State::SetDirty(pSVar1);
  pSVar1 = (State *)FUN_052eb780(*(undefined8 *)(this + 0x280),0);
  RenderStateManager::State::SetValue(pSVar1,param_1);
  pSVar1 = (State *)FUN_052eb780(*(undefined8 *)(this + 0x280),1);
  RenderStateManager::State::SetValue(pSVar1,param_2);
  pSVar1 = (State *)FUN_052eb780(*(undefined8 *)(this + 0x280),2);
  RenderStateManager::State::SetValue(pSVar1,param_3);
  pSVar1 = (State *)FUN_052eb780(*(undefined8 *)(this + 0x280),3);
  RenderStateManager::State::SetValue(pSVar1,param_4);
  pSVar1 = (State *)FUN_052eb780(*(undefined8 *)(this + 0x280),4);
  RenderStateManager::State::SetValue(pSVar1,param_5);
  pSVar1 = (State *)FUN_052eb780(*(undefined8 *)(this + 0x280),5);
  RenderStateManager::State::SetValue(pSVar1,param_6);
  return;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetViewport(unsigned int&, unsigned int&,
   unsigned int&, unsigned int&) */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetViewport
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this,uint *param_1,uint *param_2,
          uint *param_3,uint *param_4)

{
  uint uVar1;
  State *pSVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x280);
  pSVar2 = (State *)FUN_052eb780(uVar3,0);
  uVar1 = RenderStateManager::State::GetDword(pSVar2);
  *param_1 = uVar1;
  pSVar2 = (State *)FUN_052eb780(uVar3,1);
  uVar1 = RenderStateManager::State::GetDword(pSVar2);
  *param_2 = uVar1;
  pSVar2 = (State *)FUN_052eb780(uVar3,2);
  uVar1 = RenderStateManager::State::GetDword(pSVar2);
  *param_3 = uVar1;
  pSVar2 = (State *)FUN_052eb780(uVar3,3);
  uVar1 = RenderStateManager::State::GetDword(pSVar2);
  *param_4 = uVar1;
  return;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::DoCommitScissorState(Sexy::RenderStateManager::State*)
    */

undefined8
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::DoCommitScissorState(State *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  State *pSVar6;
  long lVar7;
  
  lVar7 = *(long *)param_1;
  pSVar6 = (State *)FUN_052eb780(*(undefined8 *)(lVar7 + 0x2b0),1);
  uVar1 = RenderStateManager::State::GetDword(pSVar6);
  RenderStateManager::State::ClearDirty(pSVar6,true);
  pSVar6 = (State *)FUN_052eb780(*(undefined8 *)(lVar7 + 0x2b0),2);
  uVar2 = RenderStateManager::State::GetDword(pSVar6);
  RenderStateManager::State::ClearDirty(pSVar6,true);
  pSVar6 = (State *)FUN_052eb780(*(undefined8 *)(lVar7 + 0x2b0),3);
  uVar3 = RenderStateManager::State::GetDword(pSVar6);
  RenderStateManager::State::ClearDirty(pSVar6,true);
  pSVar6 = (State *)FUN_052eb780(*(undefined8 *)(lVar7 + 0x2b0),4);
  uVar4 = RenderStateManager::State::GetDword(pSVar6);
  RenderStateManager::State::ClearDirty(pSVar6,true);
  pSVar6 = (State *)FUN_052eb780(*(undefined8 *)(lVar7 + 0x2b0),0);
  iVar5 = RenderStateManager::State::GetDword(pSVar6);
  RenderStateManager::State::ClearDirty(pSVar6,true);
  if (iVar5 == 0) {
    glDisable();
  }
  else {
    glEnable(0xc11);
  }
  glScissor(uVar1,uVar2,uVar3,uVar4);
  return 1;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::DoCommitViewportState(Sexy::RenderStateManager::State*)
    */

undefined8
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::DoCommitViewportState(State *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  State *pSVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  lVar6 = *(long *)param_1;
  pSVar5 = (State *)FUN_052eb780(*(undefined8 *)(lVar6 + 0x280),0);
  uVar1 = RenderStateManager::State::GetDword(pSVar5);
  RenderStateManager::State::ClearDirty(pSVar5,true);
  pSVar5 = (State *)FUN_052eb780(*(undefined8 *)(lVar6 + 0x280),1);
  uVar2 = RenderStateManager::State::GetDword(pSVar5);
  RenderStateManager::State::ClearDirty(pSVar5,true);
  pSVar5 = (State *)FUN_052eb780(*(undefined8 *)(lVar6 + 0x280),2);
  uVar3 = RenderStateManager::State::GetDword(pSVar5);
  RenderStateManager::State::ClearDirty(pSVar5,true);
  pSVar5 = (State *)FUN_052eb780(*(undefined8 *)(lVar6 + 0x280),3);
  uVar4 = RenderStateManager::State::GetDword(pSVar5);
  RenderStateManager::State::ClearDirty(pSVar5,true);
  pSVar5 = (State *)FUN_052eb780(*(undefined8 *)(lVar6 + 0x280),4);
  uVar7 = RenderStateManager::State::GetFloat(pSVar5);
  RenderStateManager::State::ClearDirty(pSVar5,true);
  pSVar5 = (State *)FUN_052eb780(*(undefined8 *)(lVar6 + 0x280),5);
  uVar8 = RenderStateManager::State::GetFloat(pSVar5);
  RenderStateManager::State::ClearDirty(pSVar5,true);
  glViewport(uVar1,uVar2,uVar3,uVar4);
  glDepthRangef(uVar7,uVar8);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::DoCommitTransformState(Sexy::RenderStateManager::State*)
    */

void Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::DoCommitTransformState(State *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  State *pSVar4;
  long lVar5;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  long local_8;
  
  lVar5 = *(long *)param_1;
  iVar1 = *(int *)(param_1 + 0xc);
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)FUN_052eb774(*(undefined8 *)(lVar5 + 0x298),0xb);
  pSVar4 = (State *)FUN_052eb780(*puVar3,0);
  iVar2 = RenderStateManager::State::GetDword(pSVar4);
  if ((iVar2 == 0) && (iVar1 != 0xb)) {
    RenderStateManager::State::ClearDirty(param_1,false);
  }
  else {
    puVar3 = (undefined8 *)FUN_052eb774(*(undefined8 *)(lVar5 + 0x268),iVar1);
    pSVar4 = (State *)FUN_052eb780(*puVar3,0);
    RenderStateManager::State::GetVector(pSVar4,&fStack_48,&fStack_44,&fStack_40,&fStack_3c);
    RenderStateManager::State::ClearDirty(pSVar4,true);
    puVar3 = (undefined8 *)FUN_052eb774(*(undefined8 *)(lVar5 + 0x268),iVar1);
    pSVar4 = (State *)FUN_052eb780(*puVar3,1);
    RenderStateManager::State::GetVector(pSVar4,&fStack_38,&fStack_34,&fStack_30,&fStack_2c);
    RenderStateManager::State::ClearDirty(pSVar4,true);
    puVar3 = (undefined8 *)FUN_052eb774(*(undefined8 *)(lVar5 + 0x268),iVar1);
    pSVar4 = (State *)FUN_052eb780(*puVar3,2);
    RenderStateManager::State::GetVector(pSVar4,&fStack_28,&fStack_24,&fStack_20,&fStack_1c);
    RenderStateManager::State::ClearDirty(pSVar4,true);
    puVar3 = (undefined8 *)FUN_052eb774(*(undefined8 *)(lVar5 + 0x268),iVar1);
    pSVar4 = (State *)FUN_052eb780(*puVar3,3);
    RenderStateManager::State::GetVector(pSVar4,&fStack_18,&fStack_14,&fStack_10,&fStack_c);
    RenderStateManager::State::ClearDirty(pSVar4,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::DoCommitMiscState(Sexy::RenderStateManager::State*)
    */

undefined8 Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::DoCommitMiscState(State *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  State *pSVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  
  plVar11 = *(long **)param_1;
  iVar3 = *(int *)(param_1 + 0x10);
  switch(*(undefined4 *)(param_1 + 0xc)) {
  default:
    goto switchD_052ec3f8_caseD_0;
  case 3:
    puVar6 = (undefined8 *)FUN_052eb774(plVar11[0x53],0xb);
    pSVar7 = (State *)FUN_052eb780(*puVar6,0);
    iVar3 = RenderStateManager::State::GetDword(pSVar7);
    if (iVar3 != 0) goto switchD_052ec3f8_caseD_0;
    iVar3 = RenderStateManager::State::GetDword(param_1);
    if (iVar3 == 0) {
      (**(code **)(*plVar11 + 0x80))(plVar11);
      goto switchD_052ec3f8_caseD_0;
    }
    break;
  case 4:
    puVar6 = (undefined8 *)FUN_052eb774(plVar11[0x53],0xb);
    pSVar7 = (State *)FUN_052eb780(*puVar6,0);
    iVar3 = RenderStateManager::State::GetDword(pSVar7);
    if (iVar3 != 1) goto switchD_052ec3f8_caseD_0;
    RenderStateManager::State::GetDword(param_1);
    break;
  case 0xb:
    lVar8 = plVar11[0x53];
    puVar6 = (undefined8 *)FUN_052eb774(lVar8,0xb);
    pSVar7 = (State *)FUN_052eb780(*puVar6,0);
    iVar3 = RenderStateManager::State::GetDword(pSVar7);
    if (iVar3 == 1) {
      puVar6 = (undefined8 *)FUN_052eb774(plVar11[0x4d],0);
      pSVar7 = (State *)FUN_052eb780(*puVar6,0);
      RenderStateManager::State::SetDirty(pSVar7);
      puVar6 = (undefined8 *)FUN_052eb774(plVar11[0x4d],1);
      pSVar7 = (State *)FUN_052eb780(*puVar6,0);
      RenderStateManager::State::SetDirty(pSVar7);
      puVar6 = (undefined8 *)FUN_052eb774(plVar11[0x4d],2);
      pSVar7 = (State *)FUN_052eb780(*puVar6,0);
      RenderStateManager::State::SetDirty(pSVar7);
      puVar6 = (undefined8 *)FUN_052eb774(plVar11[0x53],4);
      pSVar7 = (State *)FUN_052eb780(*puVar6,0);
      RenderStateManager::State::SetDirty(pSVar7);
      puVar6 = (undefined8 *)FUN_052eb774(plVar11[0x4d],0);
      pSVar7 = (State *)FUN_052eb780(*puVar6,0);
      DoCommitTransformState(pSVar7);
      lVar8 = plVar11[0x4d];
      uVar10 = 2;
    }
    else {
      puVar6 = (undefined8 *)FUN_052eb774(lVar8,3);
      pSVar7 = (State *)FUN_052eb780(*puVar6,0);
      RenderStateManager::State::SetDirty(pSVar7);
      puVar6 = (undefined8 *)FUN_052eb774(plVar11[0x4d],0xb);
      pSVar7 = (State *)FUN_052eb780(*puVar6,0);
      RenderStateManager::State::SetDirty(pSVar7);
      lVar8 = plVar11[0x4d];
      uVar10 = 0xb;
    }
    puVar6 = (undefined8 *)FUN_052eb774(lVar8,uVar10);
    pSVar7 = (State *)FUN_052eb780(*puVar6,0);
    DoCommitTransformState(pSVar7);
    lVar8 = plVar11[0x53];
    uVar10 = 0xb;
    goto LAB_052ec610;
  case 0xc:
    uVar4 = RenderStateManager::State::GetDword(param_1);
    if (uVar4 == 0) {
      glDisable(0xb44);
    }
    else {
      glEnable();
      if ((uVar4 & 1) == 0) {
        glCullFace(0x405);
      }
      else if ((uVar4 >> 1 & 1) == 0) {
        glCullFace(0x404);
      }
      else {
        glCullFace(0x408);
      }
    }
    lVar8 = plVar11[0x53];
    uVar10 = 0xc;
LAB_052ec610:
    puVar6 = (undefined8 *)FUN_052eb774(lVar8,uVar10);
    pSVar7 = (State *)FUN_052eb780(*puVar6,0);
    RenderStateManager::State::ClearDirty(pSVar7,false);
    return 1;
  case 0xe:
    iVar5 = RenderStateManager::State::GetDword(param_1);
    if (iVar5 == 0) {
      glActiveTexture(iVar3 + 0x84c0);
      glBindTexture(0xde1,0);
    }
    else {
      glActiveTexture(iVar3 + 0x84c0);
      puVar6 = (undefined8 *)FUN_052eb774(plVar11[0x53],0xf);
      pSVar7 = (State *)FUN_052eb780(*puVar6,iVar3);
      uVar9 = RenderStateManager::State::GetDword(pSVar7);
      uVar12 = uVar9 & 0xffffffff;
      glBindTexture(uVar9,iVar5);
      puVar6 = (undefined8 *)FUN_052eb774(plVar11[0x53],0x10);
      pSVar7 = (State *)FUN_052eb780(*puVar6,iVar3);
      uVar1 = RenderStateManager::State::GetDword(pSVar7);
      glTexParameteri(uVar12,0x2802,uVar1);
      puVar6 = (undefined8 *)FUN_052eb774(plVar11[0x53],0x11);
      pSVar7 = (State *)FUN_052eb780(*puVar6,iVar3);
      uVar1 = RenderStateManager::State::GetDword(pSVar7);
      glTexParameteri(uVar12,0x2803,uVar1);
      puVar6 = (undefined8 *)FUN_052eb774(plVar11[0x53],0x13);
      pSVar7 = (State *)FUN_052eb780(*puVar6,iVar3);
      uVar1 = RenderStateManager::State::GetDword(pSVar7);
      glTexParameteri(uVar12,0x2800,uVar1);
      puVar6 = (undefined8 *)FUN_052eb774(plVar11[0x53],0x12);
      pSVar7 = (State *)FUN_052eb780(*puVar6,iVar3);
      uVar1 = RenderStateManager::State::GetDword(pSVar7);
      glTexParameteri(uVar12,0x2801,uVar1);
      puVar6 = (undefined8 *)FUN_052eb774(plVar11[0x53],0x10);
      pSVar7 = (State *)FUN_052eb780(*puVar6,iVar3);
      RenderStateManager::State::ClearDirty(pSVar7,true);
      puVar6 = (undefined8 *)FUN_052eb774(plVar11[0x53],0x11);
      pSVar7 = (State *)FUN_052eb780(*puVar6,iVar3);
      RenderStateManager::State::ClearDirty(pSVar7,true);
      puVar6 = (undefined8 *)FUN_052eb774(plVar11[0x53],0x13);
      pSVar7 = (State *)FUN_052eb780(*puVar6,iVar3);
      RenderStateManager::State::ClearDirty(pSVar7,true);
      puVar6 = (undefined8 *)FUN_052eb774(plVar11[0x53],0x12);
      pSVar7 = (State *)FUN_052eb780(*puVar6,iVar3);
      RenderStateManager::State::ClearDirty(pSVar7,true);
    }
    goto switchD_052ec3f8_caseD_0;
  case 0x10:
    puVar6 = (undefined8 *)FUN_052eb774(plVar11[0x53],0xf);
    pSVar7 = (State *)FUN_052eb780(*puVar6,iVar3);
    uVar1 = RenderStateManager::State::GetDword(pSVar7);
    glActiveTexture(iVar3 + 0x84c0);
    uVar2 = RenderStateManager::State::GetDword(param_1);
    glTexParameteri(uVar1,0x2802,uVar2);
    RenderStateManager::State::ClearDirty(param_1,false);
    return 1;
  case 0x11:
    puVar6 = (undefined8 *)FUN_052eb774(plVar11[0x53],0xf);
    pSVar7 = (State *)FUN_052eb780(*puVar6,iVar3);
    uVar1 = RenderStateManager::State::GetDword(pSVar7);
    glActiveTexture(iVar3 + 0x84c0);
    uVar2 = RenderStateManager::State::GetDword(param_1);
    glTexParameteri(uVar1,0x2803,uVar2);
    RenderStateManager::State::ClearDirty(param_1,false);
    return 1;
  case 0x12:
    puVar6 = (undefined8 *)FUN_052eb774(plVar11[0x53],0xf);
    pSVar7 = (State *)FUN_052eb780(*puVar6,iVar3);
    uVar1 = RenderStateManager::State::GetDword(pSVar7);
    glActiveTexture(iVar3 + 0x84c0);
    uVar2 = RenderStateManager::State::GetDword(param_1);
    glTexParameteri(uVar1,0x2801,uVar2);
    RenderStateManager::State::ClearDirty(param_1,false);
    return 1;
  case 0x13:
    puVar6 = (undefined8 *)FUN_052eb774(plVar11[0x53],0xf);
    pSVar7 = (State *)FUN_052eb780(*puVar6,iVar3);
    uVar1 = RenderStateManager::State::GetDword(pSVar7);
    glActiveTexture(iVar3 + 0x84c0);
    uVar2 = RenderStateManager::State::GetDword(param_1);
    glTexParameteri(uVar1,0x2800,uVar2);
    RenderStateManager::State::ClearDirty(param_1,false);
    return 1;
  }
  glUseProgram();
switchD_052ec3f8_caseD_0:
  RenderStateManager::State::ClearDirty(param_1,false);
  return 1;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::BaseOpenGLStateManager() */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::BaseOpenGLStateManager
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this)

{
  RenderStateManager::RenderStateManager((RenderStateManager *)this);
  *(undefined ***)this = &PTR_GetCommitFunc_06a34070;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x208));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x220));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x238));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x250));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x268));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x280));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x298));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2b0));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x2c8));
  return;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetGLCompareFunc(Sexy::Graphics3D::ECompareFunc)
    */

undefined4 Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetGLCompareFunc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x207;
  if (param_1 - 1U < 7) {
    uVar1 = *(undefined4 *)(&DAT_0575ac60 + (ulong)(param_1 - 1U) * 4);
  }
  return uVar1;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetGLBlendState(unsigned int, unsigned
   int) */

void Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetGLBlendState
               (uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (param_1 - 1 < 0xb) {
    iVar2 = *(int *)(&DAT_0575ac80 + (ulong)(param_1 - 1) * 4);
  }
  if (param_2 - 1 < 0xb) {
    iVar1 = *(int *)(&DAT_0575acb0 + (ulong)(param_2 - 1) * 4);
    glBlendFunc(iVar2,iVar1);
    if ((iVar2 == 1) && (iVar1 == 0)) {
      glDisable(0xbe2);
      return;
    }
  }
  else {
    glBlendFunc(iVar2,1);
  }
  glEnable(0xbe2);
  return;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::DoCommitRenderState(Sexy::RenderStateManager::State*)
    */

undefined8
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::DoCommitRenderState(State *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  State *pSVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  lVar8 = *(long *)param_1;
  if (uVar2 < 0x15) {
    if (0x12 < uVar2) {
      uVar7 = *(undefined8 *)(lVar8 + 0x1d8);
      pSVar4 = (State *)FUN_052eb780(uVar7,0x13);
      uVar2 = RenderStateManager::State::GetDword(pSVar4);
      pSVar4 = (State *)FUN_052eb780(uVar7,0x14);
      uVar3 = RenderStateManager::State::GetDword(pSVar4);
      SetGLBlendState(uVar2,uVar3);
      pSVar4 = (State *)FUN_052eb780(*(undefined8 *)(lVar8 + 0x1d8),0x13);
      RenderStateManager::State::ClearDirty(pSVar4,true);
      pSVar4 = (State *)FUN_052eb780(*(undefined8 *)(lVar8 + 0x1d8),0x14);
      RenderStateManager::State::ClearDirty(pSVar4,true);
      return 1;
    }
    if (uVar2 == 0xe) {
      iVar1 = RenderStateManager::State::GetDword(param_1);
      if (iVar1 == 0) {
        glDepthMask();
      }
      else {
        glDepthMask(1);
      }
    }
    else if ((uVar2 != 0xf) && (uVar2 == 7)) {
      iVar1 = RenderStateManager::State::GetDword(param_1);
      if (iVar1 == 0) {
        glDisable(0xb71);
      }
      else {
        glEnable(0xb71);
      }
    }
  }
  else if (uVar2 < 0x1a) {
    if (0x17 < uVar2) {
      return 1;
    }
    if (uVar2 == 0x17) {
      RenderStateManager::State::GetDword(param_1);
      GetGLCompareFunc();
      glDepthFunc();
      RenderStateManager::State::ClearDirty(param_1,false);
      return 1;
    }
  }
  else if (uVar2 == 0xa8) {
    uVar5 = RenderStateManager::State::GetDword(param_1);
    uVar6 = uVar5 & 0xffffffff;
    glColorMask(uVar6 >> 3 & 1,uVar6 >> 2 & 1,uVar6 >> 1 & 1,(uint)uVar5 & 1);
    RenderStateManager::State::ClearDirty(param_1,false);
    return 1;
  }
  RenderStateManager::State::ClearDirty(param_1,false);
  return 1;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::~BaseOpenGLStateManager() */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::~BaseOpenGLStateManager
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this)

{
  *(undefined ***)this = &PTR_GetCommitFunc_06a34070;
  std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>::
  ~vector((vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>> *
          )(this + 0x2b0));
  std::
  vector<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>,std::allocator<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>>>
  ::~vector((vector<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>,std::allocator<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>>>
             *)(this + 0x298));
  std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>::
  ~vector((vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>> *
          )(this + 0x280));
  std::
  vector<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>,std::allocator<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>>>
  ::~vector((vector<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>,std::allocator<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>>>
             *)(this + 0x268));
  std::
  vector<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>,std::allocator<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>>>
  ::~vector((vector<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>,std::allocator<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>>>
             *)(this + 0x250));
  std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>::
  ~vector((vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>> *
          )(this + 0x238));
  std::
  vector<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>,std::allocator<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>>>
  ::~vector((vector<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>,std::allocator<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>>>
             *)(this + 0x220));
  std::
  vector<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>,std::allocator<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>>>
  ::~vector((vector<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>,std::allocator<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>>>
             *)(this + 0x208));
  std::
  vector<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>,std::allocator<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>>>
  ::~vector((vector<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>,std::allocator<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>>>
             *)(this + 0x1f0));
  std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>::
  ~vector((vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>> *
          )(this + 0x1d8));
  RenderStateManager::~RenderStateManager((RenderStateManager *)this);
  return;
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::~BaseOpenGLStateManager() */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::~BaseOpenGLStateManager
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this)

{
  ~BaseOpenGLStateManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::InitStates() */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::InitStates
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this)

{
  uint uVar1;
  StateValue *pSVar2;
  vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>> *pvVar3;
  undefined8 *puVar4;
  StateValue *pSVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_f0 [8];
  string asStack_e8 [8];
  StateValue aSStack_e0 [24];
  undefined8 local_c8 [3];
  State aSStack_b0 [168];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FastCurve::SetOutRange((FastCurve *)local_c8,1.0,1.0);
  *(undefined8 *)(this + 0x2c8) = local_c8[0];
  glEnable(0xbe2);
  glBlendFunc(1,0x303);
  glFrontFace(0x900);
  uVar8 = 0;
  do {
    uVar1 = uVar8 + 1;
    RenderStateManager::State::State(aSStack_b0,(RenderStateManager *)this,0,uVar8,0,0);
    std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>::
    push_back((vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>
               *)(this + 0x1d8),aSStack_b0);
    RenderStateManager::State::~State(aSStack_b0);
    uVar8 = uVar1;
  } while (uVar1 != 0x100);
  iVar10 = 0xc;
  pSVar2 = (StateValue *)FUN_052eb780(*(undefined8 *)(this + 0x1d8),7,auStack_f0);
  RenderStateManager::StateValue::StateValue(aSStack_e0,1);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0);
  std::string::string(asStack_e8,"ZENABLE");
  RenderStateManager::State::Init(pSVar2,aSStack_e0,(string *)local_c8,(char *)asStack_e8);
  std::string::~string(asStack_e8);
  nop();
  pSVar2 = (StateValue *)FUN_052eb780(*(undefined8 *)(this + 0x1d8),0xe);
  RenderStateManager::StateValue::StateValue(aSStack_e0,1);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0);
  std::string::string(asStack_e8,"ZWRITEENABLE");
  RenderStateManager::State::Init(pSVar2,aSStack_e0,(string *)local_c8,(char *)asStack_e8);
  std::string::~string(asStack_e8);
  nop();
  pSVar2 = (StateValue *)FUN_052eb780(*(undefined8 *)(this + 0x1d8),0xf);
  RenderStateManager::StateValue::StateValue(aSStack_e0,0);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0);
  std::string::string(asStack_e8,"ALPHATESTENABLE");
  RenderStateManager::State::Init(pSVar2,aSStack_e0,(string *)local_c8,(char *)asStack_e8);
  std::string::~string(asStack_e8);
  nop();
  pSVar2 = (StateValue *)FUN_052eb780(*(undefined8 *)(this + 0x1d8),0x17);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,4);
  std::string::string((string *)aSStack_e0,"ZFUNC");
  RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
  std::string::~string((string *)aSStack_e0);
  nop();
  pSVar2 = (StateValue *)FUN_052eb780(*(undefined8 *)(this + 0x1d8),0x18);
  RenderStateManager::StateValue::StateValue(aSStack_e0,0);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0);
  std::string::string(asStack_e8,"ALPHAREF");
  RenderStateManager::State::Init(pSVar2,aSStack_e0,(string *)local_c8,(char *)asStack_e8);
  std::string::~string(asStack_e8);
  nop();
  pSVar2 = (StateValue *)FUN_052eb780(*(undefined8 *)(this + 0x1d8),0x19);
  RenderStateManager::StateValue::StateValue(aSStack_e0,8);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,8);
  std::string::string(asStack_e8,"ALPHAFUNC");
  RenderStateManager::State::Init(pSVar2,aSStack_e0,(string *)local_c8,(char *)asStack_e8);
  std::string::~string(asStack_e8);
  nop();
  pSVar2 = (StateValue *)FUN_052eb780(*(undefined8 *)(this + 0x1d8),0x13);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,1);
  std::string::string((string *)aSStack_e0,"SRCBLEND");
  RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
  std::string::~string((string *)aSStack_e0);
  nop();
  pSVar2 = (StateValue *)FUN_052eb780(*(undefined8 *)(this + 0x1d8),0x14);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,1);
  std::string::string((string *)aSStack_e0,"DESTBLEND");
  RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
  std::string::~string((string *)aSStack_e0);
  nop();
  pSVar2 = (StateValue *)FUN_052eb780(*(undefined8 *)(this + 0x1d8),0xa8);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0xf);
  std::string::string((string *)aSStack_e0,"COLORWRITE");
  RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
  std::string::~string((string *)aSStack_e0);
  nop();
  do {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_c8);
    std::
    vector<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>,std::allocator<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>>>
    ::push_back((vector<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>,std::allocator<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>>>
                 *)(this + 0x268),(vector *)local_c8);
    std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>::
    ~vector((vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>
             *)local_c8);
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  lVar11 = 0;
  do {
    uVar8 = 0;
    do {
      pvVar3 = (vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>
                *)FUN_052eb774(*(undefined8 *)(this + 0x268),lVar11);
      pSVar2 = (StateValue *)&DAT_00000006;
      uVar1 = uVar8 + 1;
      RenderStateManager::State::State(aSStack_b0,(RenderStateManager *)this,6,(uint)lVar11,uVar8,0)
      ;
      std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>::
      push_back(pvVar3,aSStack_b0);
      RenderStateManager::State::~State(aSStack_b0);
      uVar8 = uVar1;
    } while (uVar1 != 4);
    lVar11 = lVar11 + 1;
  } while (lVar11 != 0xc);
  uVar12 = 0xfffffffd;
  lVar11 = 0;
  do {
    Set8BytesTo0(asStack_e8);
    if (lVar11 == 0) {
      std::string::append(asStack_e8,"WORLD",(size_t)pSVar2);
    }
    else {
      iVar10 = (int)lVar11;
      if (iVar10 == 1) {
        std::string::append(asStack_e8,"VIEW",(size_t)pSVar2);
      }
      else if (iVar10 == 2) {
        std::string::append(asStack_e8,"PROJECTION",(size_t)pSVar2);
      }
      else if (iVar10 == 0xb) {
        std::string::append(asStack_e8,"ORTHOPROJECTION",(size_t)pSVar2);
      }
      else {
        StrFormat("TEXTURE%d",(FastCurve *)local_c8,uVar12);
        FUN_05474278(asStack_e8,(FastCurve *)local_c8);
        std::string::~string((string *)local_c8);
      }
    }
    uVar9 = 0;
    do {
      puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x268),lVar11);
      pSVar5 = (StateValue *)FUN_052eb780(*puVar4,uVar9);
      RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0.0,0.0,0.0,0.0);
      uVar6 = FUN_0547429c(asStack_e8);
      uVar7 = uVar9 & 0xffffffff;
      uVar9 = uVar9 + 1;
      StrFormat("TRANSFORM:%s[%d]",aSStack_e0,uVar6,uVar7);
      pSVar2 = aSStack_e0;
      RenderStateManager::State::Init(pSVar5,(string *)local_c8,(char *)aSStack_e0);
      std::string::~string((string *)aSStack_e0);
    } while (uVar9 != 4);
    lVar11 = lVar11 + 1;
    uVar12 = (ulong)((int)uVar12 + 1);
    std::string::~string(asStack_e8);
  } while (lVar11 != 0xc);
  uVar8 = 0;
  do {
    uVar1 = uVar8 + 1;
    RenderStateManager::State::State(aSStack_b0,(RenderStateManager *)this,7,uVar8,0,0);
    std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>::
    push_back((vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>
               *)(this + 0x280),aSStack_b0);
    RenderStateManager::State::~State(aSStack_b0);
    uVar8 = uVar1;
  } while (uVar1 != 6);
  pSVar2 = (StateValue *)FUN_052eb780(*(undefined8 *)(this + 0x280),0);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0);
  std::string::string((string *)aSStack_e0,"VIEWPORT:X");
  RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
  std::string::~string((string *)aSStack_e0);
  nop();
  pSVar2 = (StateValue *)FUN_052eb780(*(undefined8 *)(this + 0x280),1);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0);
  std::string::string((string *)aSStack_e0,"VIEWPORT:Y");
  RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
  std::string::~string((string *)aSStack_e0);
  nop();
  pSVar2 = (StateValue *)FUN_052eb780(*(undefined8 *)(this + 0x280),2);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,800);
  std::string::string((string *)aSStack_e0,"VIEWPORT:WIDTH");
  RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
  std::string::~string((string *)aSStack_e0);
  nop();
  pSVar2 = (StateValue *)FUN_052eb780(*(undefined8 *)(this + 0x280),3);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,600);
  std::string::string((string *)aSStack_e0,"VIEWPORT:HEIGHT");
  RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
  std::string::~string((string *)aSStack_e0);
  nop();
  pSVar2 = (StateValue *)FUN_052eb780(*(undefined8 *)(this + 0x280),4);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0.0);
  std::string::string((string *)aSStack_e0,"VIEWPORT_MINZ");
  RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
  std::string::~string((string *)aSStack_e0);
  nop();
  pSVar2 = (StateValue *)FUN_052eb780(*(undefined8 *)(this + 0x280),5);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,1.0);
  std::string::string((string *)aSStack_e0,"VIEWPORT_MAXZ");
  RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
  std::string::~string((string *)aSStack_e0);
  nop();
  uVar8 = 0;
  do {
    uVar1 = uVar8 + 1;
    RenderStateManager::State::State(aSStack_b0,(RenderStateManager *)this,9,uVar8,0,0);
    std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>::
    push_back((vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>
               *)(this + 0x2b0),aSStack_b0);
    RenderStateManager::State::~State(aSStack_b0);
    uVar8 = uVar1;
  } while (uVar1 != 5);
  iVar10 = 0x1b;
  pSVar2 = (StateValue *)FUN_052eb780(*(undefined8 *)(this + 0x2b0),1);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0);
  std::string::string((string *)aSStack_e0,"SCISSOR:X");
  RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
  std::string::~string((string *)aSStack_e0);
  nop();
  pSVar2 = (StateValue *)FUN_052eb780(*(undefined8 *)(this + 0x2b0),2);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0);
  std::string::string((string *)aSStack_e0,"SCISSOR:Y");
  RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
  std::string::~string((string *)aSStack_e0);
  nop();
  pSVar2 = (StateValue *)FUN_052eb780(*(undefined8 *)(this + 0x2b0),3);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,800);
  std::string::string((string *)aSStack_e0,"SCISSOR:WIDTH");
  RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
  std::string::~string((string *)aSStack_e0);
  nop();
  pSVar2 = (StateValue *)FUN_052eb780(*(undefined8 *)(this + 0x2b0),4);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,600);
  std::string::string((string *)aSStack_e0,"SCISSOR:HEIGHT");
  RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
  std::string::~string((string *)aSStack_e0);
  nop();
  pSVar2 = (StateValue *)FUN_052eb780(*(undefined8 *)(this + 0x2b0),0);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0);
  std::string::string((string *)aSStack_e0,"SCISSOR:ENABLED");
  RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
  std::string::~string((string *)aSStack_e0);
  nop();
  do {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_c8);
    std::
    vector<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>,std::allocator<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>>>
    ::push_back((vector<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>,std::allocator<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>>>
                 *)(this + 0x298),(vector *)local_c8);
    std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>::
    ~vector((vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>
             *)local_c8);
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  lVar11 = 0;
  do {
    pvVar3 = (vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>
              *)FUN_052eb774(*(undefined8 *)(this + 0x298),lVar11);
    uVar8 = (uint)lVar11;
    lVar11 = lVar11 + 1;
    RenderStateManager::State::State(aSStack_b0,(RenderStateManager *)this,8,uVar8,0,0);
    std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>::
    push_back(pvVar3,aSStack_b0);
    RenderStateManager::State::~State(aSStack_b0);
  } while (lVar11 != 0xe);
  puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),0,"ClearPass");
  pSVar2 = (StateValue *)FUN_052eb780(*puVar4,0);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0);
  std::string::string((string *)aSStack_e0,"MISC:VERTEXFORMAT");
  RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
  std::string::~string((string *)aSStack_e0);
  nop();
  puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),1);
  pSVar2 = (StateValue *)FUN_052eb780(*puVar4,0);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0);
  std::string::string((string *)aSStack_e0,"MISC:VERTEXSIZE");
  RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
  std::string::~string((string *)aSStack_e0);
  nop();
  puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),3);
  pSVar2 = (StateValue *)FUN_052eb780(*puVar4,0);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0);
  std::string::string((string *)aSStack_e0,"MISC:SHADERPROGRAM_ORTHO");
  RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
  std::string::~string((string *)aSStack_e0);
  nop();
  puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),4);
  pSVar2 = (StateValue *)FUN_052eb780(*puVar4,0);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0);
  std::string::string((string *)aSStack_e0,"MISC:SHADERPROGRAM_3D");
  RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
  std::string::~string((string *)aSStack_e0);
  nop();
  puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),10);
  pSVar2 = (StateValue *)FUN_052eb780(*puVar4,0);
  RenderStateManager::StateValue::StateValue(aSStack_e0,0.0);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0.5);
  std::string::string(asStack_e8,"MISC:BLTDEPTH");
  RenderStateManager::State::Init(pSVar2,aSStack_e0,(string *)local_c8,(char *)asStack_e8);
  std::string::~string(asStack_e8);
  nop();
  puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),0xb);
  pSVar2 = (StateValue *)FUN_052eb780(*puVar4,0);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0);
  std::string::string((string *)aSStack_e0,"MISC:3DMODE");
  RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
  std::string::~string((string *)aSStack_e0);
  nop();
  puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),0xc);
  pSVar2 = (StateValue *)FUN_052eb780(*puVar4,0);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0);
  std::string::string((string *)aSStack_e0,"MISC:CULLMODE");
  RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
  std::string::~string((string *)aSStack_e0);
  nop();
  puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),8);
  pSVar2 = (StateValue *)FUN_052eb780(*puVar4,0);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0xffff);
  std::string::string((string *)aSStack_e0,"MISC:SRCBLENDOVERRIDE");
  RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
  std::string::~string((string *)aSStack_e0);
  nop();
  puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),9);
  pSVar2 = (StateValue *)FUN_052eb780(*puVar4,0);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0xffff);
  std::string::string((string *)aSStack_e0,"MISC:DESTBLENDOVERRIDE");
  RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
  std::string::~string((string *)aSStack_e0);
  nop();
  puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),10);
  pSVar2 = (StateValue *)FUN_052eb780(*puVar4,0);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0.0);
  std::string::string((string *)aSStack_e0,"MISC:BLTDEPTH");
  RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
  std::string::~string((string *)aSStack_e0);
  nop();
  puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),0xd);
  pSVar2 = (StateValue *)FUN_052eb780(*puVar4,0);
  RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0);
  std::string::string((string *)aSStack_e0,"MISC:USE_TEXSCALE");
  RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
  std::string::~string((string *)aSStack_e0);
  nop();
  uVar8 = 0;
  do {
    pvVar3 = (vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>
              *)FUN_052eb774(*(undefined8 *)(this + 0x298),0xe);
    RenderStateManager::State::State(aSStack_b0,(RenderStateManager *)this,8,0xe,uVar8,0);
    std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>::
    push_back(pvVar3,aSStack_b0);
    RenderStateManager::State::~State(aSStack_b0);
    pvVar3 = (vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>
              *)FUN_052eb774(*(undefined8 *)(this + 0x298),0xf);
    RenderStateManager::State::State(aSStack_b0,(RenderStateManager *)this,8,0xf,uVar8,0);
    std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>::
    push_back(pvVar3,aSStack_b0);
    RenderStateManager::State::~State(aSStack_b0);
    pvVar3 = (vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>
              *)FUN_052eb774(*(undefined8 *)(this + 0x298),0x10);
    RenderStateManager::State::State(aSStack_b0,(RenderStateManager *)this,8,0x10,uVar8,0);
    std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>::
    push_back(pvVar3,aSStack_b0);
    RenderStateManager::State::~State(aSStack_b0);
    pvVar3 = (vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>
              *)FUN_052eb774(*(undefined8 *)(this + 0x298),0x11);
    RenderStateManager::State::State(aSStack_b0,(RenderStateManager *)this,8,0x11,uVar8,0);
    std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>::
    push_back(pvVar3,aSStack_b0);
    RenderStateManager::State::~State(aSStack_b0);
    pvVar3 = (vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>
              *)FUN_052eb774(*(undefined8 *)(this + 0x298),0x13);
    RenderStateManager::State::State(aSStack_b0,(RenderStateManager *)this,8,0x13,uVar8,0);
    std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>::
    push_back(pvVar3,aSStack_b0);
    RenderStateManager::State::~State(aSStack_b0);
    pvVar3 = (vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>
              *)FUN_052eb774(*(undefined8 *)(this + 0x298),0x12);
    RenderStateManager::State::State(aSStack_b0,(RenderStateManager *)this,8,0x12,uVar8,0);
    std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>::
    push_back(pvVar3,aSStack_b0);
    RenderStateManager::State::~State(aSStack_b0);
    pvVar3 = (vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>
              *)FUN_052eb774(*(undefined8 *)(this + 0x298),0x14);
    uVar1 = uVar8 + 1;
    RenderStateManager::State::State(aSStack_b0,(RenderStateManager *)this,8,0x14,uVar8,0);
    std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>::
    push_back(pvVar3,aSStack_b0);
    RenderStateManager::State::~State(aSStack_b0);
    uVar8 = uVar1;
  } while (uVar1 != 8);
  uVar12 = 0;
  do {
    puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),0xe);
    pSVar2 = (StateValue *)FUN_052eb780(*puVar4,uVar12);
    RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0);
    StrFormat("MISC:TEXTURE[%d]",aSStack_e0,uVar12 & 0xffffffff);
    RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
    std::string::~string((string *)aSStack_e0);
    puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),0xf);
    pSVar2 = (StateValue *)FUN_052eb780(*puVar4,uVar12);
    RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0);
    StrFormat("MISC:TEXTURE_SRC[%d]",aSStack_e0,uVar12 & 0xffffffff);
    RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
    std::string::~string((string *)aSStack_e0);
    puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),0x10);
    pSVar2 = (StateValue *)FUN_052eb780(*puVar4,uVar12);
    RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0x812f);
    StrFormat("MISC:TEXTURE_WRAP_S[%d]",aSStack_e0,uVar12 & 0xffffffff);
    RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
    std::string::~string((string *)aSStack_e0);
    puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),0x11);
    pSVar2 = (StateValue *)FUN_052eb780(*puVar4,uVar12);
    RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0x812f);
    StrFormat("MISC:TEXTURE_WRAP_T[%d]",aSStack_e0,uVar12 & 0xffffffff);
    RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
    std::string::~string((string *)aSStack_e0);
    puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),0x12);
    pSVar2 = (StateValue *)FUN_052eb780(*puVar4,uVar12);
    RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0x2601);
    StrFormat("MISC:TEXTURE_MIN_FILTER[%d]",aSStack_e0,uVar12 & 0xffffffff);
    RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
    std::string::~string((string *)aSStack_e0);
    puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),0x13);
    pSVar2 = (StateValue *)FUN_052eb780(*puVar4,uVar12);
    RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0x2601);
    StrFormat("MISC:TEXTURE_MAG_FILTER[%d]",aSStack_e0,uVar12 & 0xffffffff);
    RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
    std::string::~string((string *)aSStack_e0);
    puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),0x14);
    pSVar2 = (StateValue *)FUN_052eb780(*puVar4,uVar12);
    RenderStateManager::StateValue::StateValue((StateValue *)local_c8,1.0,1.0,1.0,1.0);
    uVar9 = uVar12 & 0xffffffff;
    uVar12 = uVar12 + 1;
    StrFormat("MISC:TEXSCALE[%d]",aSStack_e0,uVar9);
    RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
    std::string::~string((string *)aSStack_e0);
  } while (uVar12 != 8);
  uVar8 = 0;
  do {
    pvVar3 = (vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>
              *)FUN_052eb774(*(undefined8 *)(this + 0x298),0x19);
    RenderStateManager::State::State(aSStack_b0,(RenderStateManager *)this,8,0x19,uVar8,0);
    std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>::
    push_back(pvVar3,aSStack_b0);
    RenderStateManager::State::~State(aSStack_b0);
    pvVar3 = (vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>
              *)FUN_052eb774(*(undefined8 *)(this + 0x298),0x1a);
    uVar1 = uVar8 + 1;
    RenderStateManager::State::State(aSStack_b0,(RenderStateManager *)this,8,0x1a,uVar8,0);
    std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>::
    push_back(pvVar3,aSStack_b0);
    RenderStateManager::State::~State(aSStack_b0);
    uVar8 = uVar1;
  } while (uVar1 != 8);
  uVar12 = 0;
  do {
    puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),0x19);
    pSVar2 = (StateValue *)FUN_052eb780(*puVar4,uVar12);
    RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0.0,0.0,0.0,0.0);
    StrFormat("MISC:ATLASENABLEDANDBASE[%d]",aSStack_e0,uVar12 & 0xffffffff);
    RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
    std::string::~string((string *)aSStack_e0);
    puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),0x1a);
    pSVar2 = (StateValue *)FUN_052eb780(*puVar4,uVar12);
    RenderStateManager::StateValue::StateValue((StateValue *)local_c8,0.0,0.0,1.0,1.0);
    uVar9 = uVar12 & 0xffffffff;
    uVar12 = uVar12 + 1;
    StrFormat("MISC:ATLASUV[%d]",aSStack_e0,uVar9);
    RenderStateManager::State::Init(pSVar2,(string *)local_c8,(char *)aSStack_e0);
    std::string::~string((string *)aSStack_e0);
  } while (uVar12 != 8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetOrthoProjection(Sexy::SexyMatrix4
   const*) */

void __thiscall
Sexy::BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetOrthoProjection
          (BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this,SexyMatrix4 *param_1)

{
  SetTransform(this,0xb,param_1);
  return;
}

