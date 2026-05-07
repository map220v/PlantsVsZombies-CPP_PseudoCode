// Class: Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::SetViewport(int, int, int, int, float, float) */

void Sexy::
     BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
     ::SetViewport(int param_1,int param_2,int param_3,int param_4,float param_5,float param_6)

{
  (**(code **)(**(long **)((ulong)(uint)param_1 + 0x80a8) + 0x68))
            (*(long **)((ulong)(uint)param_1 + 0x80a8),param_2,param_3,param_4);
  return;
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::FlushBufferedTriangles() */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::FlushBufferedTriangles
          (BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
           *this)

{
  if ((this[0x44] !=
       (BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
        )0x0) && (*(uint *)(this + 0x68) != 0)) {
    (**(code **)(*(long *)this + 0x2c0))
              (this,4,(ulong)*(uint *)(this + 0x68) / 3,*(undefined8 *)(this + 0x60),
               *(undefined4 *)(this + 0x2c),*(undefined4 *)(this + 0x30),0);
    *(undefined4 *)(this + 0x68) = 0;
    return;
  }
  return;
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::GetCurrentContext() const */

undefined8 __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::GetCurrentContext(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                    *this)

{
  return *(undefined8 *)(this + 0x80b0);
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::GetTexUVOffsetForFVF(unsigned int, unsigned int) */

int __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::GetTexUVOffsetForFVF
          (BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
           *this,uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  iVar6 = 0xc;
  if (((param_1 >> 1 & 1) == 0) && (iVar6 = 0, (param_1 & 4) != 0)) {
    iVar6 = 0x10;
  }
  iVar7 = iVar6 + 0xc;
  if ((param_1 & 0x10) == 0) {
    iVar7 = iVar6;
  }
  iVar6 = iVar7 + 4;
  if ((param_1 & 0x40) == 0) {
    iVar6 = iVar7;
  }
  uVar5 = param_1 >> 8 & 0xf;
  iVar7 = iVar6 + 4;
  if ((param_1 & 0x80) == 0) {
    iVar7 = iVar6;
  }
  if (uVar5 == 0) {
LAB_052d9318:
    iVar7 = -1;
  }
  else if (param_2 != 0) {
    uVar8 = 0x10;
    uVar9 = 0;
    do {
      uVar2 = 3 << (ulong)(uVar8 & 0x1f);
      uVar3 = 2 << (ulong)(uVar8 & 0x1f);
      uVar4 = 1 << (ulong)(uVar8 & 0x1f);
      iVar6 = iVar7 + 0x10;
      iVar1 = iVar7 + 8;
      if (uVar2 == (uVar2 & param_1)) {
        iVar7 = iVar7 + 4;
      }
      else {
        iVar7 = iVar7 + 0xc;
        if ((uVar4 != (uVar4 & param_1)) && (iVar7 = iVar1, uVar3 == (uVar3 & param_1))) {
          iVar7 = iVar6;
        }
      }
      if (uVar9 + 1 == uVar5) goto LAB_052d9318;
      uVar9 = uVar9 + 1;
      uVar8 = uVar8 + 2;
    } while (uVar9 != param_2);
  }
  return iVar7;
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::CheckBatchAndCommit() */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::CheckBatchAndCommit
          (BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
           *this)

{
  char cVar1;
  
  if (((this[0x44] !=
        (BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
         )0x0) && (*(int *)(this + 0x68) != 0)) &&
     (cVar1 = RenderStateManager::WouldCommitState(*(RenderStateManager **)(this + 0x80a8)),
     cVar1 != '\0')) {
    (**(code **)(*(long *)this + 0x2f8))(this);
  }
  RenderStateManager::CommitState(*(RenderStateManager **)(this + 0x80a8));
  return;
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::DrawPrimitiveInternal(unsigned int, unsigned int, void const*,
   unsigned int, unsigned int, bool) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::DrawPrimitiveInternal
          (BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
           *this,uint param_1,uint param_2,void *param_3,uint param_4,uint param_5,bool param_6)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_6) {
    (**(code **)(*(long *)this + 0x2c8))
              (this,param_3,*(code **)(*(long *)this + 0x2c8),param_3,param_4,param_5);
  }
  if (*(code **)(*(long *)this + 0x310) != AndroidRenderDeviceES20::BindVertexStream) {
    (**(code **)(*(long *)this + 0x310))(this,param_3);
  }
  if (param_1 == 4) {
    iVar2 = param_2 * 3;
    uVar1 = 4;
joined_r0x052d9438:
    if (iVar2 == 0) goto LAB_052d93e8;
  }
  else {
    if (1 < param_1 - 5) {
      if (param_1 != 3) goto LAB_052d93e8;
      iVar2 = param_2 + 1;
      uVar1 = 3;
      goto joined_r0x052d9438;
    }
    iVar2 = param_2 + 2;
    if (iVar2 == 0) goto LAB_052d93e8;
    uVar1 = 6;
    if (param_1 == 5) {
      uVar1 = 5;
    }
  }
  glDrawArrays(uVar1,0,iVar2);
LAB_052d93e8:
  if (*(code **)(*(long *)this + 0x318) != AndroidRenderDeviceES20::UnbindVertexStream) {
    (**(code **)(*(long *)this + 0x318))(this);
  }
  return;
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::UnbindVertexStream() */

void Sexy::
     BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
     ::UnbindVertexStream(void)

{
  glDisableVertexAttribArray(0);
  glDisableVertexAttribArray(1);
  glDisableVertexAttribArray(2);
  return;
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::PushState() */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::PushState(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
            *this)

{
  RenderStateManager::Context::PushState(*(Context **)(*(long *)(this + 0x80a8) + 0x158));
  return;
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::PopState() */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::PopState(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
           *this)

{
  RenderStateManager::Context::PopState(*(Context **)(*(long *)(this + 0x80a8) + 0x158));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::RecoverImageBitsFromRenderData(Sexy::MemoryImage*, int, int, int,
   int, int) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::RecoverImageBitsFromRenderData
          (BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
           *this,MemoryImage *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_052d96a0(*(undefined8 *)(param_1 + 0x20));
  if (lVar3 == 0) {
    uVar7 = 0;
  }
  else {
    cVar1 = FUN_052d9694(*(undefined4 *)(param_1 + 0x18),0x60);
    if (cVar1 == '\0') {
      uVar7 = 0;
      if (*(int *)(lVar3 + 0x4c) == *(int *)(param_1 + 0x78)) {
        iVar2 = *(int *)(lVar3 + 0x40);
        if (0 < iVar2) {
          iVar6 = *(int *)(lVar3 + 0x3c);
          uVar9 = (ulong)(param_4 * param_5 * 4);
          uVar10 = uVar9 << 2;
          iVar8 = 0;
          if (0x1fc0000000000000 < uVar9) {
            uVar10 = 0xffffffffffffffff;
          }
          do {
            if (0 < iVar6) {
              iVar2 = 0;
              do {
                iVar6 = iVar2 + iVar8 * iVar6;
                iVar2 = iVar2 + 1;
                puVar4 = (undefined4 *)FUN_052d9a54(*(undefined8 *)(lVar3 + 8),(long)iVar6);
                glGetError();
                pvVar5 = operator_new__(uVar10);
                glGetError();
                glPixelStorei(0xcf5,4);
                glGetError();
                local_c = 0;
                glGenFramebuffers(1,&local_c);
                glGetError();
                glCheckFramebufferStatus(0x8d40);
                glGetError();
                glBindTexture(puVar4[1],*puVar4);
                glGetError();
                glBindFramebuffer(0x8d40,local_c);
                glGetError();
                glFramebufferTexture2D(0x8d40,0x8ce0,puVar4[1],*puVar4,0);
                glGetError();
                glCheckFramebufferStatus(0x8d40);
                glReadPixels(param_2,param_3,param_4,param_5,0x1908,0x1401,pvVar5);
                glGetError();
                glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,0,0);
                glGetError();
                glBindFramebuffer(0x8d40,param_6);
                glDeleteFramebuffers(1,&local_c);
                iVar6 = *(int *)(lVar3 + 0x3c);
                *(void **)(param_1 + 0x70) = pvVar5;
              } while (iVar2 < iVar6);
              iVar2 = *(int *)(lVar3 + 0x40);
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar2);
        }
        uVar7 = 1;
      }
    }
    else {
      uVar7 = 0;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::CopyIntoImage(Sexy::Image*, int, int, int, int, void*) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::CopyIntoImage(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                *this,Image *param_1,int param_2,int param_3,int param_4,int param_5,void *param_6)

{
  long lVar1;
  undefined4 *puVar2;
  
  (**(code **)(*(long *)this + 0x2f8))(this,*(code **)(*(long *)this + 0x2f8),param_2);
  (**(code **)(*(long *)this + 0x230))(this,0,0);
  lVar1 = FUN_052d96a0(*(undefined8 *)(param_1 + 0x20));
  if (lVar1 != 0) {
    puVar2 = (undefined4 *)FUN_052d9a54(*(undefined8 *)(lVar1 + 8),0);
    glActiveTexture(0x84c0);
    glPixelStorei(0xcf5,4);
    glBindTexture(puVar2[1],*puVar2);
    glTexSubImage2D(0xde1,0,param_2,param_3,param_4,param_5,0x1908,0x1401,param_6);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::SwapScreenImage(Sexy::DeviceImage*&, Sexy::RenderSurface*&,
   unsigned int) */

void Sexy::
     BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
     ::SwapScreenImage(DeviceImage **param_1,RenderSurface **param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  DeviceImage *pDVar4;
  RenderSurface *pRVar5;
  ulong extraout_x1;
  long *plVar6;
  code *pcVar7;
  undefined1 auStack_18 [16];
  long local_8;
  
  plVar6 = (long *)(ulong)param_3;
  local_8 = ___stack_chk_guard;
  if (*param_2 == (RenderSurface *)0x0) {
    pRVar5 = (RenderSurface *)0x0;
  }
  else {
    if (*plVar6 == 0) {
      param_1[0x1017] = (DeviceImage *)0x0;
      (**(code **)(*param_1 + 800))(param_1,*param_2);
      pRVar5 = ::operator_new(0x20);
      RenderSurface::RenderSurface(pRVar5);
      *plVar6 = (long)pRVar5;
      FUN_052d96b0(pRVar5 + 0x18);
      pDVar4 = *param_1;
      *(undefined4 *)(*plVar6 + 8) = *(undefined4 *)(param_1 + 0x1018);
      pcVar7 = *(code **)(pDVar4 + 0x180);
      Color::FromInt((Color *)0xff000000,extraout_x1);
      (*pcVar7)(param_1,auStack_18);
    }
    else {
      (**(code **)(*param_1 + 0x328))(param_1,*(undefined4 *)(*plVar6 + 8));
    }
    lVar1 = (**(code **)(*(long *)param_1[0xe] + 0x60))(param_1[0xe]);
    uVar2 = FUN_052d96a0(*(undefined8 *)(lVar1 + 0x20));
    lVar1 = (**(code **)(*(long *)param_1[0xe] + 0x60))(param_1[0xe]);
    uVar3 = FUN_052d96a0(*(undefined8 *)(*param_2 + 0x20));
    FUN_052d96a4(lVar1 + 0x20,uVar3);
    FUN_052d96a4(*param_2 + 0x20,uVar2);
    pDVar4 = param_1[0x1019];
    param_1[0x1019] = (DeviceImage *)*plVar6;
    *plVar6 = (long)pDVar4;
    pDVar4 = (DeviceImage *)(**(code **)(*(long *)param_1[0xe] + 0x60))(param_1[0xe]);
    param_1[0x1017] = pDVar4;
    pRVar5 = *param_2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar5);
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::ReleaseTexture(Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,
   Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo, Sexy::AndroidRenderDeviceES20>::TextureData*,
   Sexy::GLTexHolder&) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::ReleaseTexture(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                 *this,TextureData *param_1,GLTexHolder *param_2)

{
  char cVar1;
  
  if (param_1[0x29] != (TextureData)0x0) {
    return;
  }
  cVar1 = OpenGLIdRegistry::StaticIsTextureIdValid(*(uint *)param_2);
  if (cVar1 != '\0') {
    glDeleteTextures(1,param_2);
  }
  OpenGLIdRegistry::StaticUnregisterIds(1,(uint *)param_2);
  *(undefined4 *)param_2 = 0;
  return;
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::LostFocus() */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::LostFocus(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
            *this)

{
  OpenGLIdRegistry::StaticLostFocus();
  (**(code **)(**(long **)(this + 0x80a8) + 0x38))(*(long **)(this + 0x80a8));
  return;
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::GotFocus() */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::GotFocus(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
           *this)

{
  OpenGLIdRegistry::StaticGotFocus();
  (**(code **)(**(long **)(this + 0x80a8) + 0x40))(*(long **)(this + 0x80a8));
  return;
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::SetDefaultState(Sexy::Image*, bool) */

void Sexy::
     BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
     ::SetDefaultState(Image *param_1,bool param_2)

{
  uint uVar1;
  
  uVar1 = FUN_052d98f8(0x1c4);
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetVertexFormat
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(param_1 + 0x80a8),0x1c4,uVar1);
  AndroidRenderDeviceES20::SetOrthoMatrix
            ((AndroidRenderDeviceES20 *)param_1,(Image *)(ulong)param_2);
  return;
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::PreDraw() */

undefined8 __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::PreDraw(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
          *this)

{
  char cVar1;
  Context *pCVar2;
  RenderStateManager *this_00;
  
  if (this[0x44] ==
      (BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
       )0x0) {
    this[0x44] = (BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                  )0x1;
    glLineWidth(0x3f800000);
    this_00 = *(RenderStateManager **)(this + 0x80a8);
    pCVar2 = (Context *)FUN_052d96d0(*(undefined8 *)(this_00 + 0x158));
    RenderStateManager::SetContext(this_00,(Context *)0x0);
    RenderStateManager::Context::RevertState(*(Context **)(*(long *)(this + 0x80a8) + 0x158));
    RenderStateManager::ApplyContextDefaults(*(RenderStateManager **)(this + 0x80a8));
    (**(code **)(*(long *)this + 0x300))(this,0,1);
    RenderStateManager::Context::PushState(*(Context **)(*(long *)(this + 0x80a8) + 0x158));
    cVar1 = RenderStateManager::CommitState(*(RenderStateManager **)(this + 0x80a8));
    if (cVar1 == '\0') {
      RenderStateManager::SetContext(*(RenderStateManager **)(this + 0x80a8),pCVar2);
      return 0;
    }
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::ClearColorBuffer(Sexy::Color const&) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::ClearColorBuffer(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                   *this,Color *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x2f8))();
  RenderStateManager::Context::PushState(*(Context **)(*(long *)(this + 0x80a8) + 0x158));
  (**(code **)(**(long **)(this + 0x80a8) + 0x60))
            (*(long **)(this + 0x80a8),&local_18,&local_14,&local_10,&local_c);
  if ((local_18 == 0) && (local_14 == 0)) {
    lVar5 = *(long *)(this + 0x80b8);
    if (lVar5 == 0) {
      if (*(int *)(this + 0x34) == local_10) {
        iVar1 = *(int *)(this + 0x38);
        goto joined_r0x052dc0cc;
      }
    }
    else if (*(int *)(lVar5 + 0x38) == local_10) {
      iVar1 = *(int *)(lVar5 + 0x3c);
joined_r0x052dc0cc:
      if (iVar1 == local_c) goto LAB_052dbfec;
    }
  }
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetScissorRectToViewportRect
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8));
LAB_052dbfec:
  RenderStateManager::CommitState(*(RenderStateManager **)(this + 0x80a8));
  iVar1 = EA::Thread::AtomicInt<int>::GetValue((AtomicInt<int> *)param_1);
  iVar2 = ZombieSkill::GetSkillWeight((ZombieSkill *)param_1);
  iVar3 = ImageLib::Image::GetWidth((Image *)param_1);
  iVar4 = BaseTaskResource::GetType((BaseTaskResource *)param_1);
  glClearColor((float)iVar1 * 0.003921569,(float)iVar2 * 0.003921569,(float)iVar3 * 0.003921569,
               (float)iVar4 * 0.003921569);
  glClear(0x4000);
  RenderStateManager::Context::PopState(*(Context **)(*(long *)(this + 0x80a8) + 0x158));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::ClearDepthBuffer() */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::ClearDepthBuffer(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                   *this)

{
  int iVar1;
  long lVar2;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x2f8))();
  RenderStateManager::Context::PushState(*(Context **)(*(long *)(this + 0x80a8) + 0x158));
  (**(code **)(**(long **)(this + 0x80a8) + 0x60))
            (*(long **)(this + 0x80a8),&local_18,&local_14,&local_10,&local_c);
  if ((local_18 == 0) && (local_14 == 0)) {
    lVar2 = *(long *)(this + 0x80b8);
    if (lVar2 == 0) {
      if (*(int *)(this + 0x34) == local_10) {
        iVar1 = *(int *)(this + 0x38);
        goto joined_r0x052dc284;
      }
    }
    else if (*(int *)(lVar2 + 0x38) == local_10) {
      iVar1 = *(int *)(lVar2 + 0x3c);
joined_r0x052dc284:
      if (iVar1 == local_c) goto LAB_052dc1e4;
    }
  }
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetScissorRectToViewportRect
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8));
LAB_052dc1e4:
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetRenderState
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),0xe,1);
  RenderStateManager::CommitState(*(RenderStateManager **)(this + 0x80a8));
  glClearDepthf(0x3f800000);
  glClear(0x100);
  RenderStateManager::Context::PopState(*(Context **)(*(long *)(this + 0x80a8) + 0x158));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::SetColorWriteState(bool, bool, bool, bool) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::SetColorWriteState
          (BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
           *this,bool param_1,bool param_2,bool param_3,bool param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 8;
  if (!param_1) {
    uVar3 = 0;
  }
  uVar1 = 4;
  if (!param_2) {
    uVar1 = 0;
  }
  uVar2 = 2;
  if (!param_3) {
    uVar2 = 0;
  }
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetRenderState
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),0xa8,
             uVar3 | param_4 | uVar1 | uVar2);
  return;
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::SetAlphaTest(Sexy::Graphics3D::ECompareFunc, int) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::SetAlphaTest(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
               *this,uint param_2,uint param_3)

{
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetRenderState
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),0xf,
             (uint)(param_2 != 8));
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetRenderState
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),0x19,param_2);
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetRenderState
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),0x18,param_3);
  return;
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::SetDepthState(Sexy::Graphics3D::ECompareFunc, bool) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::SetDepthState(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                *this,uint param_2,byte param_3)

{
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetRenderState
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),7,
             (uint)(param_3 | param_2 != 8));
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetRenderState
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),0xe,(uint)param_3)
  ;
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetRenderState
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),0x17,param_2);
  return;
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::BindVertexStream(void*) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::BindVertexStream(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                   *this,void *param_1)

{
  undefined4 uVar1;
  
  uVar1 = BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetVertexSize
                    (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8));
  glVertexAttribPointer(0,2,0x1406,0,uVar1,param_1);
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(1,4,0x1401,1,uVar1,(long)param_1 + 0x10);
  glEnableVertexAttribArray(1);
  glVertexAttribPointer(2,2,0x1406,0,uVar1,(long)param_1 + 0x18);
  glEnableVertexAttribArray(2);
  return;
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::AdjustVertexUVsEx(unsigned int, Sexy::SexyVertex*, int, int) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::AdjustVertexUVsEx(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                    *this,uint param_1,SexyVertex *param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (*(code **)(*(long *)this + 0x308) == GetTexUVOffsetForFVF) {
    iVar1 = GetTexUVOffsetForFVF(this,param_1,0);
  }
  else {
    iVar1 = (**(code **)(*(long *)this + 0x308))();
  }
  if (-1 < iVar1) {
    FUN_052dc778(this + 0x80a8,param_2,param_3,param_1,param_4);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::SetupDrawMode(int) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::SetupDrawMode(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                *this,int param_1)

{
  uint local_10;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetBlendOverride
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),
             (EBlendMode *)&local_10,(EBlendMode *)&local_c);
  if (local_10 == 0xffff) {
    local_10 = 5;
  }
  if ((local_c == 0xffff) && (local_c = 6, param_1 != 0)) {
    local_c = 2;
  }
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetRenderState
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),0x13,local_10);
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetRenderState
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),0x14,local_c);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::SetTextureSingle(int, Sexy::GLTexHolder, Sexy::SexyVector2) */

void Sexy::
     BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
     ::SetTextureSingle(long param_1)

{
  char cVar1;
  
  FUN_052dd298(param_1 + 0x80a8);
  cVar1 = AndroidGL20StateManager::IsDefaultShader(*(AndroidGL20StateManager **)(param_1 + 0x80a8));
  if (cVar1 != '\0') {
    (**(code **)(**(long **)(param_1 + 0x80a8) + 0x80))(*(long **)(param_1 + 0x80a8));
  }
  return;
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::SetTextureStack(Sexy::GLTexHolder, Sexy::GLTexHolder,
   Sexy::SexyVector2) */

void Sexy::
     BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
     ::SetTextureStack(undefined4 param_1,undefined4 param_2,long param_3,ulong param_4,
                      ulong param_5)

{
  char cVar1;
  ulong uVar2;
  undefined8 local_8;
  
  local_8 = CONCAT44(param_2,param_1);
  uVar2 = param_4 & 0xffffffff;
  FUN_052dd298(param_3 + 0x80a8,0,param_4,&local_8);
  cVar1 = FUN_052da5c8(param_5 & 0xffffffff);
  if (cVar1 == '\0') {
    uVar2 = param_5 & 0xffffffff;
    cVar1 = AndroidGL20StateManager::IsDefaultShader
                      (*(AndroidGL20StateManager **)(param_3 + 0x80a8));
    if (cVar1 != '\0') {
      (**(code **)(**(long **)(param_3 + 0x80a8) + 0x88))(*(long **)(param_3 + 0x80a8));
    }
  }
  else {
    cVar1 = AndroidGL20StateManager::IsDefaultShader
                      (*(AndroidGL20StateManager **)(param_3 + 0x80a8));
    param_5 = param_4;
    if (cVar1 != '\0') {
      (**(code **)(**(long **)(param_3 + 0x80a8) + 0x80))(*(long **)(param_3 + 0x80a8));
    }
  }
  FUN_052dd298(param_3 + 0x80a8,1,param_5 & 0xffffffff00000000 | uVar2,&local_8);
  return;
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::~BaseOpenGLRenderDevice() */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::~BaseOpenGLRenderDevice
          (BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
           *this)

{
  *(undefined **)this = &DAT_06a33960;
  if (*(ColourFit **)(this + 0x60) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x60));
  }
  OpenGLIdRegistry::StaticShutdown();
  BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
  ::~BaseRenderDevice((BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
                       *)this);
  return;
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::~BaseOpenGLRenderDevice() */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::~BaseOpenGLRenderDevice
          (BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
           *this)

{
  ~BaseOpenGLRenderDevice(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::DeleteContext(Sexy::HRenderContext const&) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::DeleteContext(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                *this,HRenderContext *param_1)

{
  char cVar1;
  GLContext *this_00;
  void *extraout_x1;
  code *pcVar2;
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  arStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = CompiledMap::Initialized((CompiledMap *)param_1);
  if (cVar1 != '\0') {
    this_00 = (GLContext *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_1);
    cVar1 = std::__exception_ptr::operator==
                      ((exception_ptr *)param_1,(exception_ptr *)(this + 0x80b0));
    if (cVar1 == '\0') {
      if (this_00 == (GLContext *)0x0) goto LAB_052df64c;
    }
    else {
      pcVar2 = *(code **)(*(long *)this + 0x30);
      eastl::
      rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
      ::rbtree_iterator(arStack_10,*(rbtree_node **)(this_00 + 0x80));
      (*pcVar2)(this,arStack_10);
    }
    GLContext::~GLContext(this_00);
    GLContext::operator_delete(this_00,extraout_x1);
  }
LAB_052df64c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::BaseOpenGLRenderDevice(Sexy::IGraphicsDriver*) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::BaseOpenGLRenderDevice
          (BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
           *this,IGraphicsDriver *param_1)

{
  AndroidGL20Vertex *pAVar1;
  AndroidGL20Vertex *pAVar2;
  RenderSurface *this_00;
  AndroidGL20Vertex *this_01;
  
  BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
  ::BaseRenderDevice((BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
                      *)this,param_1);
  *(undefined **)this = &DAT_06a33960;
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                     *)(this + 0x80b0),(rbtree_node *)0x0);
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x2c) = 0x20;
  *(undefined4 *)(this + 0x30) = 0x1c4;
  *(undefined4 *)(this + 0x6c) = 0x400;
  *(undefined4 *)(this + 8) = 0;
  pAVar2 = operator_new__(0x8000);
  this_01 = pAVar2;
  do {
    pAVar1 = this_01 + 0x20;
    AndroidGL20Vertex::AndroidGL20Vertex(this_01);
    this_01 = pAVar1;
  } while (pAVar1 != pAVar2 + 0x8000);
  *(AndroidGL20Vertex **)(this + 0x60) = pAVar2;
  *(undefined8 *)(this + 0x80b8) = 0;
  *(undefined4 *)(this + 0x80c0) = 0;
  *(undefined8 *)(this + 0x80d0) = 0;
  this_00 = ::operator_new(0x20);
  RenderSurface::RenderSurface(this_00);
  *(RenderSurface **)(this + 0x80c8) = this_00;
  *(undefined4 *)(this_00 + 8) = 0;
  this[0x80d8] = (BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                  )0x0;
  *(undefined8 *)(this + 0x80e0) = 0;
  OpenGLIdRegistry::StaticStartup();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::CreateContext(Sexy::Image*, Sexy::HRenderContext const&) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::CreateContext(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                *this,Image *param_1,HRenderContext *param_2)

{
  char cVar1;
  Image *pIVar2;
  GLContext *this_00;
  ulong extraout_x1;
  undefined1 auVar3 [16];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar2 = (Image *)(**(code **)(*(long *)param_1 + 0x50))(param_1);
  if ((pIVar2 == (Image *)0x0) ||
     (cVar1 = FUN_052d9694(*(undefined4 *)(pIVar2 + 0x18),0x10), cVar1 == '\0')) {
    eastl::
    rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
    ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                       *)&local_10,(rbtree_node *)0x0);
  }
  else {
    cVar1 = CompiledMap::Initialized((CompiledMap *)param_2);
    if (cVar1 == '\0') {
      this_00 = GLContext::operator_new((GLContext *)0xa8,extraout_x1);
      GLContext::GLContext(this_00,pIVar2);
    }
    else {
      (**(code **)(*(long *)this + 0x30))(this,param_2);
      auVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_2);
      this_00 = GLContext::operator_new((GLContext *)0xa8,auVar3._8_8_);
      GLContext::GLContext(this_00,auVar3._0_8_);
    }
    eastl::
    rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
    ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                       *)&local_10,(rbtree_node *)this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10);
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::SetRenderTarget(Sexy::Image*) */

char __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::SetRenderTarget(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                  *this,Image *param_1)

{
  char cVar1;
  char cVar2;
  MemoryImage *pMVar3;
  long lVar4;
  
  if (param_1 == (Image *)0x0) {
    if (*(long *)(this + 0x80d0) != 0) {
      cVar1 = (**(code **)(*(long *)this + 800))();
      return cVar1;
    }
  }
  else {
    if (*(Image **)(this + 0x80b8) == param_1) {
      return '\x01';
    }
    pMVar3 = (MemoryImage *)(**(code **)(*(long *)param_1 + 0x48))(param_1);
    if ((pMVar3 != (MemoryImage *)0x0) &&
       (cVar1 = BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
                ::CreateImageRenderData
                          ((BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
                            *)this,pMVar3), cVar1 != '\0')) {
      lVar4 = FUN_052d96a0(*(undefined8 *)(pMVar3 + 0x20));
      cVar2 = (**(code **)(*(long *)this + 0x328))(this,*(undefined4 *)(lVar4 + 0x20));
      if (cVar2 != '\0') {
        *(Image **)(this + 0x80b8) = param_1;
        return cVar1;
      }
    }
  }
  return '\0';
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::FlushBufferedTriangles(bool) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::FlushBufferedTriangles
          (BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
           *this,bool param_1)

{
  if (!param_1) {
    return;
  }
  BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
  ::FlushBufferedTriangles
            ((BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
              *)this);
  return;
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::Flush(unsigned int) */

undefined8 __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::Flush(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
        *this,uint param_1)

{
  uint uVar1;
  Context *pCVar2;
  RenderStateManager *this_00;
  
  uVar1 = param_1 | 1;
  if ((param_1 & 2) == 0) {
    uVar1 = param_1;
  }
  if ((uVar1 & 1) != 0) {
    FlushBufferedTriangles(this,true);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    (**(code **)(*(long *)this + 0x2c8))(this);
  }
  if (((param_1 & 2) != 0) &&
     (this[0x44] !=
      (BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
       )0x0)) {
    this_00 = *(RenderStateManager **)(this + 0x80a8);
    pCVar2 = (Context *)FUN_052d96d0(*(undefined8 *)(this_00 + 0x158));
    RenderStateManager::SetContext(this_00,(Context *)0x0);
    RenderStateManager::Context::PopState(*(Context **)(*(long *)(this + 0x80a8) + 0x158));
    this[0x44] = (BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                  )0x0;
    RenderStateManager::SetContext(*(RenderStateManager **)(this + 0x80a8),pCVar2);
    return 1;
  }
  return 1;
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::SetCurrentContext(Sexy::HRenderContext const&) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::SetCurrentContext(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                    *this,HRenderContext *param_1)

{
  char cVar1;
  long *plVar2;
  Image *pIVar3;
  
  cVar1 = std::__exception_ptr::operator==
                    ((exception_ptr *)param_1,(exception_ptr *)(this + 0x80b0));
  if (cVar1 == '\0') {
    FlushBufferedTriangles(this,true);
    *(undefined8 *)(this + 0x80b0) = *(undefined8 *)param_1;
    cVar1 = CompiledMap::Initialized((CompiledMap *)param_1);
    if (cVar1 == '\0') {
      (**(code **)(*(long *)this + 800))(this,0);
      RenderStateManager::SetContext(*(RenderStateManager **)(this + 0x80a8),(Context *)0x0);
      return;
    }
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_1);
    if ((long *)*plVar2 == (long *)0x0) {
      pIVar3 = (Image *)0x0;
    }
    else {
      pIVar3 = (Image *)(**(code **)(*(long *)*plVar2 + 0x48))();
      if (pIVar3 != (Image *)0x0) {
        (**(code **)(*(long *)this + 800))(this,pIVar3);
      }
    }
    RenderStateManager::SetContext(*(RenderStateManager **)(this + 0x80a8),(Context *)(plVar2 + 1));
    AndroidRenderDeviceES20::SetOrthoMatrix((AndroidRenderDeviceES20 *)this,pIVar3);
    if ((char)plVar2[0xf] == '\0') {
      (**(code **)(*(long *)this + 0x300))(this,pIVar3,1);
      RenderStateManager::CommitState(*(RenderStateManager **)(this + 0x80a8));
      *(undefined1 *)(plVar2 + 0xf) = 1;
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::GetInfoString(Sexy::RenderDevice3D::EInfoString) */

void Sexy::
     BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
     ::GetInfoString(string *param_1,long param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  char acStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == 1) {
    pcVar1 = (char *)glGetString(0x1f02);
    std::string::string(param_1,pcVar1);
    nop();
  }
  else if (param_3 == 0) {
    std::string::string(asStack_40,"");
    nop();
    std::string::string(asStack_38,"Vendor: ");
    pcVar1 = (char *)glGetString(0x1f00);
    std::operator+(asStack_38,pcVar1);
    std::operator+(asStack_30," - ");
    thunk_FUN_054757c0(asStack_40,asStack_28);
    std::string::~string(asStack_28);
    std::string::~string(asStack_30);
    std::string::~string(asStack_38);
    nop();
    std::string::string(asStack_30,"Renderer: ");
    pcVar1 = (char *)glGetString(0x1f01);
    std::operator+(asStack_30,pcVar1);
    thunk_FUN_054757c0(asStack_40,asStack_28);
    std::string::~string(asStack_28);
    std::string::~string(asStack_30);
    nop();
    FUN_05474148(param_1,asStack_40);
    std::string::~string(asStack_40);
  }
  else if (param_3 == 6) {
    pcVar1 = (char *)glGetString(0x1f03);
    std::string::string(asStack_28,"");
    nop();
    pcVar2 = strstr(pcVar1,"GL_EXT_framebuffer_object");
    if (pcVar2 != (char *)0x0) {
      FUN_05475ad8(asStack_28,&DAT_056e7698);
    }
    pcVar2 = strstr(pcVar1,"GL_ARB_vertex_shader");
    if (pcVar2 != (char *)0x0) {
      FUN_05475ad8(asStack_28," VERTEXSHADER");
    }
    pcVar1 = strstr(pcVar1,"GL_ARB_fragment_shader");
    if (pcVar1 != (char *)0x0) {
      FUN_05475ad8(asStack_28," PIXELSHADER");
    }
    if (*(char *)(param_2 + 0x29) != '\0') {
      FUN_05475ad8(asStack_28," FBO_MUST_BE_POW2");
    }
    if (*(char *)(param_2 + 0x28) != '\0') {
      FUN_05475ad8(asStack_28," TEX_MUST_BE_POW2");
    }
    sprintf(acStack_20," MAX_TEX=%d",(ulong)*(uint *)(param_2 + 0x14));
    FUN_05475ad8(asStack_28,acStack_20);
    FUN_05474148(param_1,asStack_28);
    std::string::~string(asStack_28);
  }
  else {
    std::string::string(param_1,"");
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::DrawPrimitiveEx(unsigned int, Sexy::Graphics3D::EPrimitiveType,
   Sexy::SexyVertex const*, int, Sexy::Color const&, int, float, float, bool, unsigned int) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::DrawPrimitiveEx(float param_1_00,float param_2,
                 BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                 *this,uint param_1,int param_5,
                 BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                 *param_6,uint param_7,int *param_8,int param_9,undefined1 param_10,uint param_11)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  PopTransformMatrix *this_00;
  int iVar8;
  BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
  *pBVar9;
  uint uVar10;
  SexyVector2 *pSVar11;
  uint uVar12;
  BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
  *pBVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
  *__dest;
  
  uVar10 = param_7 * 3;
  if (((((param_5 != 4) && (uVar10 = param_7 + 2, 1 < param_5 - 5U)) &&
       (uVar10 = param_7 + 1, param_5 != 3)) &&
      ((uVar10 = param_7 << 1, param_5 != 2 && (uVar10 = param_7, param_5 != 1)))) ||
     ((uVar10 == 0 || ((param_7 == 0 || (fVar16 = param_2, cVar2 = PreDraw(this), cVar2 == '\0')))))
     ) {
    return;
  }
  (**(code **)(*(long *)this + 0x2f8))(this);
  RenderStateManager::Context::PushState(*(Context **)(*(long *)(this + 0x80a8) + 0x158));
  uVar3 = AndroidGL20Vertex::PackColor(*param_8,param_8[1],param_8[2],param_8[3]);
  SetupDrawMode(this,param_9);
  (**(code **)(*(long *)this + 0x240))(this,0,param_10);
  uVar4 = FUN_052d98f8(param_1);
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetVertexFormat
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),param_1,uVar4);
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::Set3DMode
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),(param_1 & 4) == 0
            );
  RenderStateManager::CommitState(*(RenderStateManager **)(this + 0x80a8));
  iVar5 = BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetVertexSize
                    (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8));
  if ((param_1 & 4) == 0) {
    __dest = param_6;
    if ((param_11 & 1) != 0) goto LAB_052e6c3c;
    if (param_6 != this + 0xa8) {
      memcpy(this + 0xa8,param_6,(long)(int)(iVar5 * uVar10));
    }
  }
  else {
    __dest = this + 0xa8;
    memcpy(__dest,param_6,(long)(int)(iVar5 * uVar10));
    fVar14 = (float)BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetTextureScale
                              (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),
                               0);
    fVar18 = fVar16;
    fVar15 = (float)BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetTextureScale
                              (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),
                               1);
    iVar6 = 0x10;
    if ((param_1 & 2) != 0) {
      iVar6 = 0x1c;
    }
    iVar8 = 0;
    if ((param_1 & 2) != 0) {
      iVar8 = 0xc;
    }
    iVar8 = iVar8 + 0x1c;
    if ((param_1 & 0x10) == 0) {
      iVar8 = iVar6;
    }
    iVar6 = iVar8 + 4;
    if ((param_1 & 0x40) == 0) {
      iVar6 = iVar8;
    }
    iVar8 = iVar6 + 4;
    if ((param_1 & 0x80) == 0) {
      iVar8 = iVar6;
    }
    uVar4 = param_1 & 0x200;
    if ((param_1 >> 9 & 1) == 0) {
      uVar12 = param_1 & 0x100;
      if ((param_1 >> 8 & 1) == 0) {
        pBVar9 = __dest;
        do {
          fVar16 = *(float *)(this + 8);
          uVar4 = *(uint *)(pBVar9 + 0x10);
          uVar12 = uVar12 + 1;
          fVar18 = *(float *)(pBVar9 + 4);
          *(float *)pBVar9 = *(float *)pBVar9 + fVar16 + 0.5 + param_1_00;
          *(float *)(pBVar9 + 4) = fVar18 + param_2 + fVar16 + 0.5;
          uVar7 = uVar3;
          if (uVar4 != 0) {
            uVar7 = AndroidGL20Vertex::PackColor
                              (uVar4 >> 0x10 & 0xff,uVar4 >> 8 & 0xff,uVar4 & 0xff,uVar4 >> 0x18);
          }
          *(undefined4 *)(pBVar9 + 0x10) = uVar7;
          pBVar9 = pBVar9 + iVar5;
        } while (uVar12 != uVar10);
      }
      else {
        pBVar9 = __dest + iVar8;
        pBVar13 = __dest;
        do {
          fVar18 = *(float *)(this + 8);
          uVar12 = *(uint *)(pBVar13 + 0x10);
          uVar4 = uVar4 + 1;
          *(float *)pBVar13 = *(float *)pBVar13 + fVar18 + 0.5 + param_1_00;
          *(float *)(pBVar13 + 4) = *(float *)(pBVar13 + 4) + param_2 + fVar18 + 0.5;
          uVar7 = uVar3;
          if (uVar12 != 0) {
            uVar7 = AndroidGL20Vertex::PackColor
                              (uVar12 >> 0x10 & 0xff,uVar12 >> 8 & 0xff,uVar12 & 0xff,uVar12 >> 0x18
                              );
          }
          fVar18 = *(float *)pBVar9;
          *(undefined4 *)(pBVar13 + 0x10) = uVar7;
          pBVar13 = pBVar13 + iVar5;
          fVar18 = fVar18 * fVar14;
          *(float *)pBVar9 = fVar18;
          *(float *)(pBVar9 + 4) = *(float *)(pBVar9 + 4) * fVar16;
          pBVar9 = pBVar9 + iVar5;
        } while (uVar4 != uVar10);
      }
    }
    else {
      iVar6 = iVar8 + 8;
      pBVar9 = this + 0xac;
      uVar4 = 0;
      pBVar13 = __dest;
      do {
        fVar17 = *(float *)(this + 8);
        uVar12 = *(uint *)(pBVar13 + 0x10);
        uVar4 = uVar4 + 1;
        *(float *)pBVar13 = *(float *)pBVar13 + fVar17 + 0.5 + param_1_00;
        *(float *)pBVar9 = *(float *)pBVar9 + fVar17 + 0.5 + param_2;
        uVar7 = uVar3;
        if (uVar12 != 0) {
          uVar7 = AndroidGL20Vertex::PackColor
                            (uVar12 >> 0x10 & 0xff,uVar12 >> 8 & 0xff,uVar12 & 0xff,uVar12 >> 0x18);
        }
        fVar17 = *(float *)(pBVar13 + iVar8);
        *(undefined4 *)(pBVar13 + 0x10) = uVar7;
        *(float *)(pBVar13 + iVar8) = fVar17 * fVar14;
        *(float *)(pBVar9 + iVar8) = *(float *)(pBVar9 + iVar8) * fVar16;
        *(float *)(pBVar13 + iVar6) = *(float *)(pBVar13 + iVar6) * fVar15;
        pBVar13 = pBVar13 + iVar5;
        *(float *)(pBVar9 + iVar6) = *(float *)(pBVar9 + iVar6) * fVar18;
        pBVar9 = pBVar9 + iVar5;
      } while (uVar4 != uVar10);
    }
    cVar2 = std::vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>>::empty
                      ((vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>> *)(this + 0x48))
    ;
    if (cVar2 == '\0') {
      this_00 = (PopTransformMatrix *)
                std::vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>>::back
                          ((vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>> *)
                           (this + 0x48));
      uVar4 = 0;
      pSVar11 = (SexyVector2 *)__dest;
      do {
        uVar4 = uVar4 + 1;
        uVar3 = PopTransformMatrix::operator*(this_00,pSVar11);
        *(undefined4 *)pSVar11 = uVar3;
        *(float *)(pSVar11 + 4) = fVar18;
        pSVar11 = pSVar11 + iVar5;
      } while (uVar4 != uVar10);
    }
    if ((param_11 & 1) != 0) goto LAB_052e6c3c;
  }
  __dest = this + 0xa8;
  if (*(code **)(*(long *)this + 0x308) == GetTexUVOffsetForFVF) {
    iVar6 = GetTexUVOffsetForFVF(this,param_1,0);
  }
  else {
    iVar6 = (**(code **)(*(long *)this + 0x308))();
  }
  if (-1 < iVar6) {
    FUN_052dc778(this + 0x80a8,__dest,uVar10,param_1,iVar5);
  }
LAB_052e6c3c:
  if (*(code **)(*(long *)this + 0x310) != AndroidRenderDeviceES20::BindVertexStream) {
    (**(code **)(*(long *)this + 0x310))(this,__dest);
  }
  if ((((param_5 != 4) && (param_5 != 5)) && (param_5 != 6)) && (param_5 != 3)) {
    if (param_5 == 2) {
      param_5 = 1;
    }
    else {
      bVar1 = param_5 == 1;
      param_5 = 4;
      if (bVar1) {
        param_5 = 0;
      }
    }
  }
  glDrawArrays(param_5,0,uVar10);
  if (*(code **)(*(long *)this + 0x318) != AndroidRenderDeviceES20::UnbindVertexStream) {
    (**(code **)(*(long *)this + 0x318))(this);
  }
  RenderStateManager::Context::PopState(*(Context **)(*(long *)(this + 0x80a8) + 0x158));
  return;
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::SetBltDepth(float) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::SetBltDepth(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
              *this,float param_1)

{
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetBltDepth
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),param_1);
  return;
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::SetBlend(Sexy::Graphics3D::EBlendMode,
   Sexy::Graphics3D::EBlendMode) */

void Sexy::
     BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
     ::SetBlend(long param_1)

{
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetBlendOverride
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(param_1 + 0x80a8));
  return;
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::SetBackfaceCulling(bool, bool) */

void Sexy::
     BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
     ::SetBackfaceCulling(bool param_1,bool param_2)

{
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetBackfaceCulling
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)((ulong)param_1 + 0x80a8),param_2,
             param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::SetTexture(int, Sexy::Image*) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::SetTexture(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
             *this,int param_1,Image *param_2)

{
  char cVar1;
  long *plVar2;
  MemoryImage *pMVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == (Image *)0x0) {
    cVar1 = '\x01';
    GLTexHolder::GLTexHolder((GLTexHolder *)&local_18,0);
    FastCurve::SetOutRange((FastCurve *)&local_10,1.0,1.0);
    SetTextureSingle((undefined4)local_10,local_10._4_4_,this,param_1,local_18);
  }
  else {
    plVar2 = (long *)(**(code **)(*(long *)this + 0x2f0))();
    pMVar3 = (MemoryImage *)(**(code **)(*plVar2 + 0x48))();
    if (pMVar3 != (MemoryImage *)0x0) {
      cVar1 = BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
              ::CreateImageRenderData
                        ((BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
                          *)this,pMVar3);
      if (cVar1 != '\0') {
        lVar4 = FUN_052d96a0(*(undefined8 *)(pMVar3 + 0x20));
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(lVar4 + 8));
        puVar5 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
        uVar6 = *puVar5;
        FastCurve::SetOutRange
                  ((FastCurve *)&local_10,
                   (float)*(int *)(lVar4 + 0x34) / (float)*(int *)(lVar4 + 0x44),
                   (float)*(int *)(lVar4 + 0x38) / (float)*(int *)(lVar4 + 0x48));
        SetTextureSingle((undefined4)local_10,local_10._4_4_,this,param_1,uVar6);
        goto LAB_052e7268;
      }
    }
    cVar1 = '\0';
  }
LAB_052e7268:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::SetTextureWrap(int, bool, bool) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::SetTextureWrap(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                 *this,int param_1,bool param_2,bool param_3)

{
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetTextureUWrap
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),param_1,param_2);
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetTextureVWrap
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),param_1,param_3);
  return;
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::SetTextureLinearFilter(int, bool) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::SetTextureLinearFilter
          (BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
           *this,int param_1,bool param_2)

{
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetTextureMinFilter
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),param_1,param_2);
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetTextureMagFilter
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::SetProjectionTransform(Sexy::SexyMatrix4 const*) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::SetProjectionTransform
          (BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
           *this,SexyMatrix4 *param_1)

{
  SexyMatrix4 aSStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (SexyMatrix4 *)0x0) {
    param_1 = aSStack_48;
    SexyMatrix4::LoadIdentity(param_1);
  }
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetTransform
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),2,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::SetViewTransform(Sexy::SexyMatrix4 const*) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::SetViewTransform(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                   *this,SexyMatrix4 *param_1)

{
  SexyMatrix4 aSStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (SexyMatrix4 *)0x0) {
    param_1 = aSStack_48;
    SexyMatrix4::LoadIdentity(param_1);
  }
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetTransform
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),1,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::SetWorldTransform(Sexy::SexyMatrix4 const*) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::SetWorldTransform(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                    *this,SexyMatrix4 *param_1)

{
  SexyMatrix4 aSStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (SexyMatrix4 *)0x0) {
    param_1 = aSStack_48;
    SexyMatrix4::LoadIdentity(param_1);
  }
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetTransform
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),0,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::CopyImageToTexture(Sexy::GLTexHolder, int, Sexy::MemoryImage*,
   int, int, int, int, Sexy::PixelFormat) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::CopyImageToTexture
          (BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
           *this,ulong param_2,undefined4 param_3,long *param_4,int param_5,int param_6,int param_7,
          int param_8,int param_9)

{
  long lVar1;
  char cVar2;
  int iVar3;
  void *__ptr;
  ulong uVar4;
  
  cVar2 = FUN_052da5c8(param_2 & 0xffffffff);
  uVar4 = param_2 >> 0x20;
  if (cVar2 != '\0') {
    return;
  }
  (**(code **)(*(long *)this + 0x2c8))(this);
  (**(code **)(*(long *)this + 0x230))(this,0,0);
  glBindTexture(uVar4,param_2 & 0xffffffff);
  if (((param_5 == 0 && param_6 == 0) && (lVar1 = param_4[7], (int)lVar1 == param_7)) &&
     (iVar3 = *(int *)((long)param_4 + 0x3c), iVar3 == param_8)) {
    glPixelStorei(0xcf5,1);
    (**(code **)(*param_4 + 0xd0))(param_4,0,0,0,0);
    glTexImage2D(uVar4,0,param_3,(int)lVar1,iVar3,0,0x1908,0x1401);
    return;
  }
  if (param_9 == 8) {
    iVar3 = 1;
  }
  else {
    iVar3 = 2;
    if ((param_9 - 2U & 0xfffffffd) != 0) {
      iVar3 = 4;
    }
  }
  __ptr = malloc((long)(param_8 * param_7 * iVar3));
  FUN_052e879c(__ptr,param_7 * iVar3,param_4,param_5,param_6,param_7,param_8,param_9);
  glPixelStorei(0xcf5,1);
  glTexImage2D(uVar4,0,param_3,param_7,param_8,0,0x1908,0x1401,__ptr);
  free(__ptr);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::SetupAtlasState(int, Sexy::Image*) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::SetupAtlasState(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                  *this,int param_1,Image *param_2)

{
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  long *plVar2;
  long lVar3;
  ResourceInfo *pRVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_58;
  undefined4 local_50;
  float fStack_4c;
  undefined4 local_48;
  float fStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ResourceInfo *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar4 = (ResourceInfo *)param_2;
  if (param_2 != (Image *)0x0) {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)FUN_052da5d4(param_2 + 0x60);
    cVar1 = FUN_052d967c(this_00[0x38]);
    if (cVar1 == '\0') {
      plVar2 = (long *)std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost(this_00);
      pRVar4 = (ResourceInfo *)*plVar2;
    }
    else {
      pRVar4 = RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_2 + 0x48));
    }
    if (pRVar4 == (ResourceInfo *)0x0) {
      BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetAtlasState
                (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),param_1,false,
                 (SexyVector2 *)0x0,(SexyVector2 *)0x0,(SexyVector2 *)0x0);
      pRVar4 = (ResourceInfo *)param_2;
    }
    else {
      local_40 = *(undefined4 *)(pRVar4 + 0x38);
      local_3c = *(undefined4 *)(pRVar4 + 0x3c);
      local_38 = *(undefined4 *)(param_2 + 0x50);
      local_34 = *(undefined4 *)(param_2 + 0x54);
      local_30 = *(undefined4 *)(param_2 + 0x58);
      local_2c = *(undefined4 *)(param_2 + 0x5c);
      Image::CachedImageAtlasUVInfo::UpdateData
                ((CachedImageAtlasUVInfo *)this_00,(TestValue *)&local_40);
      cVar1 = FUN_052d967c(this_00[0x38]);
      if (cVar1 == '\0') {
        lVar3 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost(this_00);
        BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetAtlasState
                  (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),param_1,true
                   ,(SexyVector2 *)(lVar3 + 8),(SexyVector2 *)(lVar3 + 0x10),
                   (SexyVector2 *)(lVar3 + 0x18));
      }
      else {
        fVar5 = (float)*(int *)(param_2 + 0x54) / (float)*(int *)(pRVar4 + 0x3c);
        fVar7 = (float)*(int *)(param_2 + 0x50) / (float)*(int *)(pRVar4 + 0x38);
        fVar6 = (float)*(int *)(param_2 + 0x5c) / (float)*(int *)(pRVar4 + 0x3c);
        fVar8 = (float)*(int *)(param_2 + 0x58) / (float)*(int *)(pRVar4 + 0x38);
        FastCurve::SetOutRange((FastCurve *)&local_58,fVar7,fVar5);
        ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                  ((ResistenceValueInfo *)&local_50);
        ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                  ((ResistenceValueInfo *)&local_48);
        if (fVar5 <= fVar6) {
          FastCurve::SetOutRange((FastCurve *)&local_28,fVar8,fVar5);
          local_50 = SexyVector2::operator-((SexyVector2 *)&local_28,(SexyVector2 *)&local_58);
          fVar8 = fVar6;
          fStack_4c = fVar5;
        }
        else {
          FastCurve::SetOutRange((FastCurve *)&local_28,fVar7,fVar6);
          local_50 = SexyVector2::operator-((SexyVector2 *)&local_28,(SexyVector2 *)&local_58);
          fVar7 = fVar8;
          fVar8 = fVar5;
          fStack_4c = fVar6;
        }
        FastCurve::SetOutRange((FastCurve *)&local_28,fVar7,fVar8);
        local_48 = SexyVector2::operator-((SexyVector2 *)&local_28,(SexyVector2 *)&local_58);
        fStack_44 = fVar8;
        BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetAtlasState
                  (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),param_1,true
                   ,(SexyVector2 *)&local_58,(SexyVector2 *)&local_50,(SexyVector2 *)&local_48);
        Image::CachedAtlasUVResult::CachedAtlasUVResult((CachedAtlasUVResult *)&local_28);
        local_20 = local_58;
        local_18 = CONCAT44(fStack_4c,local_50);
        local_10 = CONCAT44(fStack_44,local_48);
        local_28 = pRVar4;
        Image::CachedImageAtlasUVInfo::SaveResult
                  ((CachedImageAtlasUVInfo *)this_00,(CachedAtlasUVResult *)&local_28);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pRVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::RenderMesh(Sexy::Mesh*, Sexy::SexyMatrix4 const&, Sexy::Color
   const&, bool) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::RenderMesh(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
             *this,Mesh *param_1,SexyMatrix4 *param_2,Color *param_3,bool param_4)

{
  RtMixedPtr *this_00;
  uint uVar1;
  bool bVar2;
  uint uVar3;
  Context *pCVar4;
  long *plVar5;
  Image *pIVar6;
  Context *this_01;
  long lVar7;
  code *pcVar8;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x2f8))();
  RenderStateManager::Context::PushState(*(Context **)(*(long *)(this + 0x80a8) + 0x158));
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::Set3DMode
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),true);
  if (param_4) {
    GLTexHolder::GLTexHolder((GLTexHolder *)&local_50,0);
    FastCurve::SetOutRange((FastCurve *)&local_40,1.0,1.0);
    SetTextureSingle((undefined4)local_40,local_40._4_4_,this,0,local_50);
    (**(code **)(*(long *)this + 0x198))(this,8,0);
    (**(code **)(*(long *)this + 400))(this,8,0);
    (**(code **)(*(long *)this + 0x1b0))(this,0xffff,0xffff);
    (**(code **)(*(long *)this + 0x160))(0x3f000000,this);
    SetupDrawMode(this,0);
    (**(code **)(*(long *)this + 0x240))(this,0,1);
    BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetRenderState
              (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),0x89,1);
    BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetRenderState
              (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),0xe,1);
    BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetRenderState
              (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),7,1);
    BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetRenderState
              (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),0x17,4);
    BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetRenderState
              (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),0x16,3);
    Graphics3D::LightColors::LightColors((LightColors *)&local_40);
    Color::Color((Color *)&local_50,-1);
    local_40 = local_50;
    uStack_38 = uStack_48;
    Color::Color((Color *)&local_50,0);
    local_20 = local_50;
    uStack_18 = uStack_48;
    Color::Color((Color *)&local_50,0);
    local_30 = local_50;
    uStack_28 = uStack_48;
    local_10 = 0x3f800000;
    BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetRenderState
              (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),0x8b,0x40404040)
    ;
  }
  else {
    SetupDrawMode(this,0);
  }
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetTransform
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),0,param_2);
  this_01 = *(Context **)(*(long *)(this + 0x80a8) + 0x158);
  pCVar4 = (Context *)FUN_052d96d0(this_01);
  RenderStateManager::Context::PushState(this_01);
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    if (*(code **)(*plVar5 + 0x18) != MeshListener::MeshPreDraw) {
      (**(code **)(*plVar5 + 0x18))(plVar5,param_1);
    }
    RenderStateManager::SetContext(*(RenderStateManager **)(this + 0x80a8),pCVar4);
    SetupDrawMode(this,0);
  }
  local_50 = FUN_052e8bc0(*(undefined8 *)(param_1 + 0x20));
  while( true ) {
    local_40 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(param_1 + 0x20));
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_50,(rbtree_iterator *)&local_40);
    if (!bVar2) break;
    plVar5 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_50);
    lVar7 = *plVar5;
    this_00 = (RtMixedPtr *)(lVar7 + 0x28);
    uVar1 = *(uint *)(lVar7 + 0x38);
    uVar3 = FUN_052d98f8(uVar1);
    BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetVertexFormat
              (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),uVar1,uVar3);
    pcVar8 = *(code **)(*(long *)this + 0x230);
    pIVar6 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)(lVar7 + 0x18));
    (*pcVar8)(this,0,pIVar6);
    pIVar6 = RtMixedPtr::operator_cast_to_Image_(this_00);
    if (pIVar6 != (Image *)0x0) {
      pcVar8 = *(code **)(*(long *)this + 0x230);
      pIVar6 = RtMixedPtr::operator_cast_to_Image_(this_00);
      (*pcVar8)(this,1,pIVar6);
    }
    plVar5 = *(long **)(param_1 + 0x10);
    if (plVar5 != (long *)0x0) {
      pcVar8 = *(code **)(*plVar5 + 0x28);
      pIVar6 = RtMixedPtr::operator_cast_to_Image_(this_00);
      if (pcVar8 != MeshListener::MeshPreDrawSet) {
        (*pcVar8)(plVar5,param_1,lVar7 + 8,lVar7 + 0x10,pIVar6 != (Image *)0x0);
      }
      RenderStateManager::SetContext(*(RenderStateManager **)(this + 0x80a8),pCVar4);
      SetupDrawMode(this,0);
    }
    RenderStateManager::CommitState(*(RenderStateManager **)(this + 0x80a8));
    plVar5 = *(long **)(param_1 + 0x10);
    if (plVar5 != (long *)0x0) {
      if (*(code **)(*plVar5 + 0x30) != MeshListener::MeshPostDrawSet) {
        (**(code **)(*plVar5 + 0x30))(plVar5,param_1,lVar7 + 8,lVar7 + 0x10);
      }
      RenderStateManager::SetContext(*(RenderStateManager **)(this + 0x80a8),pCVar4);
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_50);
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    if (*(code **)(*plVar5 + 0x20) != MeshListener::MeshPostDraw) {
      (**(code **)(*plVar5 + 0x20))(plVar5,param_1);
    }
    RenderStateManager::SetContext(*(RenderStateManager **)(this + 0x80a8),pCVar4);
  }
  RenderStateManager::Context::PopState(*(Context **)(*(long *)(this + 0x80a8) + 0x158));
  RenderStateManager::Context::PopState(*(Context **)(*(long *)(this + 0x80a8) + 0x158));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex, Sexy::AndroidGL20StateManager,
   Sexy::AndroidRenderDeviceES20>::LoadMesh(Sexy::Mesh*) */

void __thiscall
Sexy::
BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
::LoadMesh(BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
           *this,Mesh *param_1)

{
  Buffer *pBVar1;
  RtMixedPtrBase *pRVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  GLMeshPiece *this_00;
  long *plVar13;
  Image *pIVar14;
  uchar *puVar15;
  code *pcVar16;
  int iVar17;
  ResourceManager *pRVar18;
  long lVar19;
  int iVar20;
  undefined1 auVar21 [16];
  int local_8c;
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  GLMeshPiece *local_40;
  Buffer aBStack_38 [48];
  long local_8;
  
  pBVar1 = (Buffer *)(param_1 + 8);
  local_8 = ___stack_chk_guard;
  Buffer::Buffer(aBStack_38);
  cVar5 = SexyAppBase::ReadBufferFromFile(gSexyAppBase,pBVar1,SUB81(aBStack_38,0));
  if (((cVar5 == '\0') || (iVar10 = Buffer::ReadInt32(aBStack_38), iVar10 != 0x3dbeef00)) ||
     (iVar10 = Buffer::ReadInt32(aBStack_38), 2 < iVar10)) {
    cVar5 = '\0';
  }
  else {
    (*(code *)**(undefined8 **)param_1)(param_1);
    puVar12 = *(undefined8 **)(param_1 + 0x10);
    if ((puVar12 != (undefined8 *)0x0) && (*(code **)*puVar12 != MeshListener::MeshPreLoad)) {
      (**(code **)*puVar12)(puVar12,param_1);
    }
    sVar8 = Buffer::ReadInt16(aBStack_38);
    if (0 < sVar8) {
      local_8c = 0;
      do {
        Buffer::ReadString();
        sVar9 = Buffer::ReadInt16(aBStack_38);
        iVar3 = (int)sVar9;
        if (0 < iVar3) {
          iVar20 = 0;
          do {
            if ((iVar10 != 2) || (cVar6 = Buffer::ReadByte(aBStack_38), cVar6 != '\0')) {
              this_00 = ::operator_new(0x58);
              GLMeshPiece::GLMeshPiece(this_00);
              iVar17 = 0;
              local_40 = this_00;
              std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::push_back
                        ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)(param_1 + 0x20)
                         ,(MeshPiece **)&local_40);
              plVar13 = (long *)std::
                                list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::
                                back((list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>
                                      *)(param_1 + 0x20));
              lVar19 = *plVar13;
              Buffer::ReadString();
              Set8BytesTo0(asStack_58);
              Set8BytesTo0(asStack_50);
              thunk_FUN_05475e00(lVar19 + 8,asStack_68);
              thunk_FUN_05475e00(lVar19 + 0x10,asStack_60);
              sVar9 = Buffer::ReadInt16(aBStack_38);
              iVar4 = (int)sVar9;
              if (0 < iVar4) {
                do {
                  while( true ) {
                    Buffer::ReadString();
                    Buffer::ReadString();
                    plVar13 = *(long **)(param_1 + 0x10);
                    if ((plVar13 != (long *)0x0) &&
                       (*(code **)(*plVar13 + 8) != MeshListener::MeshHandleProperty)) {
                      (**(code **)(*plVar13 + 8))
                                (plVar13,param_1,asStack_68,asStack_60,asStack_48,
                                 (string *)&local_40);
                    }
                    bVar7 = std::operator==(asStack_48,"texture0.fileName");
                    if (!bVar7) break;
                    thunk_FUN_05475e00(asStack_58,(string *)&local_40);
                    bVar7 = std::operator==(asStack_48,"bump.fileName");
                    if (!bVar7) goto LAB_052eaf74;
LAB_052eb014:
                    iVar17 = iVar17 + 1;
                    thunk_FUN_05475e00(asStack_50,(string *)&local_40);
                    std::string::~string((string *)&local_40);
                    std::string::~string(asStack_48);
                    if (iVar4 == iVar17) goto LAB_052eb03c;
                  }
                  bVar7 = std::operator==(asStack_48,"bump.fileName");
                  if (bVar7) goto LAB_052eb014;
LAB_052eaf74:
                  iVar17 = iVar17 + 1;
                  std::string::~string((string *)&local_40);
                  std::string::~string(asStack_48);
                } while (iVar4 != iVar17);
              }
LAB_052eb03c:
              auVar21 = FUN_05474184(asStack_58);
              if (auVar21._0_8_ != 0) {
                pRVar2 = (RtMixedPtrBase *)(lVar19 + 0x18);
                std::__exception_ptr::exception_ptr::exception_ptr
                          ((exception_ptr *)&local_40,auVar21._8_8_);
                RtMixedPtrBase::SetId(pRVar2,(RtId *)&local_40,false);
                RtId::~RtId((RtId *)&local_40);
                plVar13 = *(long **)(param_1 + 0x10);
                if (plVar13 != (long *)0x0) {
                  pcVar16 = *(code **)(*plVar13 + 0x10);
                  std::string::string(asStack_48,"texture0.fileName");
                  (*pcVar16)((string *)&local_40,plVar13,param_1,asStack_68,asStack_60,asStack_48,
                             asStack_58);
                  RtMixedPtrBase::SetId(pRVar2,(RtId *)&local_40,false);
                  RtId::~RtId((RtId *)&local_40);
                  std::string::~string(asStack_48);
                  nop();
                }
                pIVar14 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)pRVar2);
                if (pIVar14 != (Image *)0x0) {
                  pRVar18 = *(ResourceManager **)(gSexyAppBase + 0x848);
                  GetFileDir((string *)pBVar1,false);
                  GetPathFrom(asStack_58,asStack_48);
                  ResourceManager::GetImage
                            (pRVar18,(RtMixedPtr *)pRVar2,(string *)&local_40,(GetImageOptions *)0x0
                             ,(bool *)0x0);
                  std::string::~string((string *)&local_40);
                  std::string::~string(asStack_48);
                }
                pIVar14 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)pRVar2);
                if (pIVar14 != (Image *)0x0) {
                  pIVar14 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)pRVar2);
                  FUN_052d9684(pIVar14 + 0x18,0x81);
                  goto LAB_052eb174;
                }
LAB_052eb3a8:
                std::string::~string(asStack_50);
                std::string::~string(asStack_58);
                std::string::~string(asStack_60);
                if (iVar20 < iVar3) {
                  cVar5 = '\0';
                  std::string::~string(asStack_68);
                  goto LAB_052ead94;
                }
                break;
              }
LAB_052eb174:
              cVar6 = RenderDevice3D::SupportsPixelShaders((RenderDevice3D *)this);
              if (cVar6 != '\0') {
                auVar21 = FUN_05474184(asStack_50);
                if (auVar21._0_8_ != 0) {
                  pRVar2 = (RtMixedPtrBase *)(lVar19 + 0x28);
                  std::__exception_ptr::exception_ptr::exception_ptr
                            ((exception_ptr *)&local_40,auVar21._8_8_);
                  RtMixedPtrBase::SetId(pRVar2,(RtId *)&local_40,false);
                  RtId::~RtId((RtId *)&local_40);
                  plVar13 = *(long **)(param_1 + 0x10);
                  if (plVar13 != (long *)0x0) {
                    pcVar16 = *(code **)(*plVar13 + 0x10);
                    std::string::string(asStack_48,"bump.fileName");
                    (*pcVar16)((string *)&local_40,plVar13,param_1,asStack_68,asStack_60,asStack_48,
                               asStack_50);
                    RtMixedPtrBase::SetId(pRVar2,(RtId *)&local_40,false);
                    RtId::~RtId((RtId *)&local_40);
                    std::string::~string(asStack_48);
                    nop();
                  }
                  pIVar14 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)pRVar2);
                  if (pIVar14 != (Image *)0x0) {
                    pRVar18 = *(ResourceManager **)(gSexyAppBase + 0x848);
                    GetFileDir((string *)pBVar1,false);
                    GetPathFrom(asStack_50,asStack_48);
                    ResourceManager::GetImage
                              (pRVar18,(RtMixedPtr *)pRVar2,(string *)&local_40,
                               (GetImageOptions *)0x0,(bool *)0x0);
                    std::string::~string((string *)&local_40);
                    std::string::~string(asStack_48);
                  }
                  pIVar14 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)pRVar2);
                  if (pIVar14 == (Image *)0x0) goto LAB_052eb3a8;
                  pIVar14 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)pRVar2);
                  FUN_052d9684(pIVar14 + 0x18,1);
                }
              }
              Buffer::ReadInt16(aBStack_38);
              uVar11 = Buffer::ReadInt32(aBStack_38);
              *(undefined4 *)(lVar19 + 0x38) = uVar11;
              *(undefined4 *)(lVar19 + 0x3c) = 0x24;
              sVar9 = Buffer::ReadInt16(aBStack_38);
              *(int *)(lVar19 + 0x40) = (int)sVar9;
              puVar15 = operator_new__((long)(sVar9 * 0x24));
              *(uchar **)(lVar19 + 0x48) = puVar15;
              Buffer::ReadBytes(aBStack_38,puVar15,*(int *)(lVar19 + 0x40) * 0x24);
              sVar9 = Buffer::ReadInt16(aBStack_38);
              *(int *)(lVar19 + 0x44) = sVar9 * 3;
              puVar15 = operator_new__((long)(sVar9 * 6));
              *(uchar **)(lVar19 + 0x50) = puVar15;
              Buffer::ReadBytes(aBStack_38,puVar15,*(int *)(lVar19 + 0x44) << 1);
              std::string::~string(asStack_50);
              std::string::~string(asStack_58);
              std::string::~string(asStack_60);
            }
            iVar20 = iVar20 + 1;
          } while (iVar3 != iVar20);
        }
        local_8c = local_8c + 1;
        std::string::~string(asStack_68);
      } while (sVar8 != local_8c);
    }
  }
LAB_052ead94:
  Buffer::~Buffer(aBStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar5);
  }
  return;
}

