// Class: Sexy::AndroidRenderDeviceES20


/* Sexy::AndroidRenderDeviceES20::GetCapsFlags() */

undefined8 Sexy::AndroidRenderDeviceES20::GetCapsFlags(void)

{
  return 0x10e;
}


/* Sexy::AndroidRenderDeviceES20::BindVertexStream(void*) */

void Sexy::AndroidRenderDeviceES20::BindVertexStream(void *param_1)

{
  return;
}


/* Sexy::AndroidRenderDeviceES20::UnbindVertexStream() */

void Sexy::AndroidRenderDeviceES20::UnbindVertexStream(void)

{
  return;
}


/* Sexy::AndroidRenderDeviceES20::SetTextureInfoIntoTextureData(void*, void*, void*) */

void __thiscall
Sexy::AndroidRenderDeviceES20::SetTextureInfoIntoTextureData
          (AndroidRenderDeviceES20 *this,void *param_1,void *param_2,void *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_052d9a54(*(undefined8 *)((long)param_1 + 8),0);
  *puVar1 = *(undefined4 *)param_2;
  if (param_3 != (void *)0x0) {
    puVar1[2] = *(undefined4 *)param_3;
  }
  return;
}


/* Sexy::AndroidRenderDeviceES20::ReleaseExtraRenderDataInfo(Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,
   Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo, Sexy::AndroidRenderDeviceES20>::TextureData*,
   Sexy::GLExtraRenderDataInfo&) */

void __thiscall
Sexy::AndroidRenderDeviceES20::ReleaseExtraRenderDataInfo
          (AndroidRenderDeviceES20 *this,TextureData *param_1,GLExtraRenderDataInfo *param_2)

{
  uint uVar1;
  char cVar2;
  
  if (param_2[8] == (GLExtraRenderDataInfo)0x0) {
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)(param_2 + 4) = 0;
    return;
  }
  if (*(int *)param_2 == 0) {
    uVar1 = *(uint *)(param_2 + 4);
  }
  else {
    glDeleteFramebuffers(1,param_2);
    *(undefined4 *)param_2 = 0;
    uVar1 = *(uint *)(param_2 + 4);
  }
  if (uVar1 == 0) {
    return;
  }
  cVar2 = OpenGLIdRegistry::StaticIsTextureIdValid(uVar1);
  if (cVar2 != '\0') {
    glDeleteTextures(1,param_2 + 4);
  }
  OpenGLIdRegistry::StaticUnregisterIds(1,(uint *)(param_2 + 4));
  *(undefined4 *)(param_2 + 4) = 0;
  return;
}


/* Sexy::AndroidRenderDeviceES20::SetShader(Sexy::ShaderInfo*) */

void __thiscall
Sexy::AndroidRenderDeviceES20::SetShader(AndroidRenderDeviceES20 *this,ShaderInfo *param_1)

{
  ShaderInfo *pSVar1;
  
  pSVar1 = (ShaderInfo *)
           AndroidGL20StateManager::GetShader(*(AndroidGL20StateManager **)(this + 0x80a8));
  if (param_1 != pSVar1) {
    (**(code **)(*(long *)this + 0x2f8))(this);
    (**(code **)(**(long **)(this + 0x80a8) + 0x90))(*(long **)(this + 0x80a8),param_1);
  }
  return;
}


/* Sexy::AndroidRenderDeviceES20::SetOrthoMatrixForSwapScreen(int, int) */

void __thiscall
Sexy::AndroidRenderDeviceES20::SetOrthoMatrixForSwapScreen
          (AndroidRenderDeviceES20 *this,int param_1,int param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long *plVar3;
  
  (**(code **)(**(long **)(this + 0x80a8) + 0x68))
            (0,0x3f800000,*(long **)(this + 0x80a8),0,0,param_1,param_2);
  plVar3 = *(long **)(this + 0x80a8);
  pcVar2 = *(code **)(*plVar3 + 0x78);
  uVar1 = AndroidAppDriver::GetDeviceScreenMatrix
                    (*(AndroidAppDriver **)(*(long *)(this + 0x80f0) + 0xc58));
  (*pcVar2)(plVar3,uVar1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(this + 0x34);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(this + 0x38);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidRenderDeviceES20::SetOrthoMatrix(Sexy::Image*) */

void __thiscall
Sexy::AndroidRenderDeviceES20::SetOrthoMatrix(AndroidRenderDeviceES20 *this,Image *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  code *pcVar5;
  ulong local_48 [3];
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(Image **)(this + 0x8130) != param_1) {
    if (param_1 != (Image *)0x0) {
      iVar2 = *(int *)(param_1 + 0x38);
      iVar1 = *(int *)(param_1 + 0x3c);
      *(int *)(this + 0x3c) = iVar2;
      local_48[1] = 0;
      uStack_30 = 0;
      *(int *)(this + 0x40) = iVar1;
      local_28 = 0;
      local_20 = 0x3f800000;
      uStack_10 = 0x3f80000000000000;
      local_18 = 0xbf800000bf800000;
      local_48[0] = (ulong)(uint)(2.0 / (float)iVar2);
      local_48[2] = (ulong)(uint)(2.0 / (float)iVar1) << 0x20;
      (**(code **)(**(long **)(this + 0x80a8) + 0x68))(0,*(long **)(this + 0x80a8),0);
      (**(code **)(**(long **)(this + 0x80a8) + 0x78))(*(long **)(this + 0x80a8),local_48);
      goto LAB_052db804;
    }
  }
  (**(code **)(**(long **)(this + 0x80a8) + 0x68))
            (0,0x3f800000,*(long **)(this + 0x80a8),0,0,*(undefined4 *)(this + 0x34),
             *(undefined4 *)(this + 0x38));
  plVar4 = *(long **)(this + 0x80a8);
  pcVar5 = *(code **)(*plVar4 + 0x78);
  uVar3 = AndroidAppDriver::GetScreenMatrix
                    (*(AndroidAppDriver **)(*(long *)(this + 0x80f0) + 0xc58));
  (*pcVar5)(plVar4,uVar3);
  iVar2 = FUN_052d96c0(*(undefined4 *)(*(long *)(*(long *)(this + 0x80f0) + 0xc58) + 0x160));
  if (iVar2 - 1U < 2) {
    *(undefined4 *)(this + 0x3c) = *(undefined4 *)(this + 0x34);
    *(undefined4 *)(this + 0x40) = *(undefined4 *)(this + 0x38);
  }
  else {
    *(undefined4 *)(this + 0x3c) = *(undefined4 *)(this + 0x38);
    *(undefined4 *)(this + 0x40) = *(undefined4 *)(this + 0x34);
  }
LAB_052db804:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::AndroidRenderDeviceES20::SetDefaultState(Sexy::Image*, bool) */

void Sexy::AndroidRenderDeviceES20::SetDefaultState(Image *param_1,bool param_2)

{
  uint uVar1;
  
  uVar1 = FUN_052d98f8(0x1c4);
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetVertexFormat
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(param_1 + 0x80a8),0x1c4,uVar1);
  (**(code **)(**(long **)(param_1 + 0x80a8) + 0x80))(*(long **)(param_1 + 0x80a8));
  SetOrthoMatrix((AndroidRenderDeviceES20 *)param_1,(Image *)(ulong)param_2);
  return;
}


/* Sexy::AndroidRenderDeviceES20::SetRenderTargetFBO(unsigned int) */

char __thiscall
Sexy::AndroidRenderDeviceES20::SetRenderTargetFBO(AndroidRenderDeviceES20 *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
          ::PreDraw((BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                     *)this);
  if (cVar1 == '\0') {
    return '\0';
  }
  if (*(uint *)(this + 0x80c0) == param_1) {
    return cVar1;
  }
  (**(code **)(*(long *)this + 0x2f8))(this);
  *(undefined8 *)(this + 0x80b8) = 0;
  uVar2 = Android::Graphics::GetGLViewSysFBO
                    (*(AndroidAppDriver **)(*(long *)(this + 0x80f0) + 0xc58));
  if (param_1 == 0) {
    if (*(uint *)(this + 0x80c0) != uVar2) {
      if (uVar2 != 0xffffffff) {
        glBindFramebuffer(0x8d40);
        *(undefined4 *)(this + 0x80c0) = 0;
        return cVar1;
      }
LAB_052dbe78:
      glBindFramebuffer(0x8d40,0);
      *(uint *)(this + 0x80c0) = param_1;
      return cVar1;
    }
  }
  else if ((param_1 != uVar2) || (*(int *)(this + 0x80c0) != 0)) {
    if (param_1 == 0xffffffff) goto LAB_052dbe78;
    glBindFramebuffer(0x8d40,param_1);
  }
  *(uint *)(this + 0x80c0) = param_1;
  return cVar1;
}


/* Sexy::AndroidRenderDeviceES20::ClearDepthBuffer() */

void __thiscall Sexy::AndroidRenderDeviceES20::ClearDepthBuffer(AndroidRenderDeviceES20 *this)

{
  (**(code **)(*(long *)this + 0x2f8))();
  RenderStateManager::Context::PushState(*(Context **)(*(long *)(this + 0x80a8) + 0x158));
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::SetRenderState
            (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8),0xe,1);
  RenderStateManager::CommitState(*(RenderStateManager **)(this + 0x80a8));
  glClearDepthf(0x3f800000);
  glClear(0x100);
  RenderStateManager::Context::PopState(*(Context **)(*(long *)(this + 0x80a8) + 0x158));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidRenderDeviceES20::CreateTextureSurface(int, int, Sexy::PixelFormat, bool,
   Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::TextureData*, Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,
   Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::TextureDataPiece*) */

void __thiscall
Sexy::AndroidRenderDeviceES20::CreateTextureSurface
          (AndroidRenderDeviceES20 *this,undefined4 param_1,undefined4 param_2,int param_4,
          byte param_5,long param_6,long param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  int iStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GLTexHolder::GLTexHolder((GLTexHolder *)&local_18,0);
  FastCurve::SetOutRange((FastCurve *)&local_10,1.0,1.0);
  BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
  ::SetTextureSingle(local_10,iStack_c,this,0,CONCAT44(uStack_14,local_18));
  GLTexHolder::GLTexHolder((GLTexHolder *)&local_10);
  glGenTextures(1,(FastCurve *)&local_10);
  OpenGLIdRegistry::StaticRegisterIds(1,(uint *)&local_10);
  iStack_c = 0xde1;
  uVar1 = 0x8033;
  if (param_4 == 0x10) {
    uVar1 = 0x8363;
  }
  uVar2 = 0x1908;
  if (param_4 == 0x10) {
    uVar2 = 0x1907;
  }
  if (param_7 != 0) {
    *(undefined4 *)(param_7 + 0x20) = uVar2;
  }
  glGetError();
  if (param_5 == 0) {
    uVar1 = 0x8069;
    if (iStack_c != 0xde1) {
      uVar1 = 0x8514;
    }
    local_18 = (uint)param_5;
    glGetIntegerv(uVar1,(GLTexHolder *)&local_18);
    glBindTexture(iStack_c,local_10);
    glBindTexture(iStack_c,local_10);
    glTexParameteri(iStack_c,0x2802,0x812f);
    glTexParameteri(iStack_c,0x2803,0x812f);
    glTexParameteri(iStack_c,0x2800,0x2601);
    glTexParameteri(iStack_c,0x2801,0x2601);
    glBindTexture(iStack_c,local_18);
  }
  else {
    glGenFramebuffers(1,param_6 + 0x20);
    glGetError();
    glBindFramebuffer(0x8d40,*(undefined4 *)(param_6 + 0x20));
    glGetError();
    glBindTexture(iStack_c,local_10);
    glGetError();
    glTexParameteri(iStack_c,0x2802,0x812f);
    glTexParameteri(iStack_c,0x2803,0x812f);
    glTexParameteri(iStack_c,0x2800,0x2601);
    glTexParameteri(iStack_c,0x2801,0x2601);
    glTexImage2D(iStack_c,0,uVar2,param_1,param_2,0,uVar2,uVar1,0);
    glGetError();
    glFramebufferTexture2D(0x8d40,0x8ce0,iStack_c,local_10,0);
    FUN_052d98b0();
    glBindFramebuffer(0x8d40,0);
    glBindTexture(iStack_c,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(CONCAT44(iStack_c,local_10));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidRenderDeviceES20::ClearRenderEffects() */

void __thiscall Sexy::AndroidRenderDeviceES20::ClearRenderEffects(AndroidRenderDeviceES20 *this)

{
  map<Sexy::RenderEffectDefinition*,Sexy::AndroidGL20RenderEffect*,std::less<Sexy::RenderEffectDefinition*>,std::allocator<std::pair<Sexy::RenderEffectDefinition*const,Sexy::AndroidGL20RenderEffect*>>>
  *this_00;
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (map<Sexy::RenderEffectDefinition*,Sexy::AndroidGL20RenderEffect*,std::less<Sexy::RenderEffectDefinition*>,std::allocator<std::pair<Sexy::RenderEffectDefinition*const,Sexy::AndroidGL20RenderEffect*>>>
             *)(this + 0x8100);
  OutputDebugStrF((wchar_t *)"ClearRenderEffects");
  local_18 = std::
             map<Sexy::RenderEffectDefinition*,Sexy::AndroidGL20RenderEffect*,std::less<Sexy::RenderEffectDefinition*>,std::allocator<std::pair<Sexy::RenderEffectDefinition*const,Sexy::AndroidGL20RenderEffect*>>>
             ::begin(this_00);
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    (**(code **)(**(long **)(lVar2 + 8) + 0x78))(*(long **)(lVar2 + 8));
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  std::
  map<Sexy::RenderEffectDefinition*,Sexy::AndroidGL20RenderEffect*,std::less<Sexy::RenderEffectDefinition*>,std::allocator<std::pair<Sexy::RenderEffectDefinition*const,Sexy::AndroidGL20RenderEffect*>>>
  ::clear(this_00);
  FUN_052dc3f4(*(undefined8 *)(this + 0x80a8),*(undefined8 *)(this + 0x60));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::AndroidRenderDeviceES20::GotFocus() */

void __thiscall Sexy::AndroidRenderDeviceES20::GotFocus(AndroidRenderDeviceES20 *this)

{
  BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
  ::GotFocus((BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
              *)this);
  ClearRenderEffects(this);
  return;
}


/* Sexy::AndroidRenderDeviceES20::~AndroidRenderDeviceES20() */

void __thiscall
Sexy::AndroidRenderDeviceES20::~AndroidRenderDeviceES20(AndroidRenderDeviceES20 *this)

{
  *(undefined ***)this = &PTR__AndroidRenderDeviceES20_06a33ca0;
  std::
  map<Sexy::RenderEffectDefinition*,Sexy::AndroidGL20RenderEffect*,std::less<Sexy::RenderEffectDefinition*>,std::allocator<std::pair<Sexy::RenderEffectDefinition*const,Sexy::AndroidGL20RenderEffect*>>>
  ::~map((map<Sexy::RenderEffectDefinition*,Sexy::AndroidGL20RenderEffect*,std::less<Sexy::RenderEffectDefinition*>,std::allocator<std::pair<Sexy::RenderEffectDefinition*const,Sexy::AndroidGL20RenderEffect*>>>
          *)(this + 0x8100));
  BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
  ::~BaseOpenGLRenderDevice
            ((BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
              *)this);
  return;
}


/* Sexy::AndroidRenderDeviceES20::~AndroidRenderDeviceES20() */

void __thiscall
Sexy::AndroidRenderDeviceES20::~AndroidRenderDeviceES20(AndroidRenderDeviceES20 *this)

{
  ~AndroidRenderDeviceES20(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::AndroidRenderDeviceES20::DestroyTextureData(void*) */

void __thiscall
Sexy::AndroidRenderDeviceES20::DestroyTextureData(AndroidRenderDeviceES20 *this,void *param_1)

{
  if (param_1 != (void *)0x0) {
    BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
    ::TextureData::~TextureData(param_1);
    AK::FreeHook(param_1);
    return;
  }
  return;
}


/* Sexy::AndroidRenderDeviceES20::AndroidRenderDeviceES20(Sexy::IGraphicsDriver*) */

void __thiscall
Sexy::AndroidRenderDeviceES20::AndroidRenderDeviceES20
          (AndroidRenderDeviceES20 *this,IGraphicsDriver *param_1)

{
  AndroidGL20StateManager *this_00;
  char *__haystack;
  char *pcVar1;
  long *plVar2;
  
  BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
  ::BaseOpenGLRenderDevice
            ((BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
              *)this,param_1);
  *(undefined ***)this = &PTR__AndroidRenderDeviceES20_06a33ca0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x8100));
  *(IGraphicsDriver **)(this + 0x80f0) = param_1;
  this_00 = ::operator_new(0x380);
  AndroidGL20StateManager::AndroidGL20StateManager(this_00);
  *(AndroidGL20StateManager **)(this + 0x80f8) = this_00;
  this[0x28] = (AndroidRenderDeviceES20)0x0;
  *(undefined4 *)(this + 0xc) = 0x10;
  *(undefined4 *)(this + 0x10) = 0x10;
  *(undefined4 *)(this + 0x14) = 0x800;
  *(undefined4 *)(this + 0x18) = 0x800;
  *(undefined4 *)(this + 0x1c) = 0x10000;
  *(undefined4 *)(this + 0x24) = 1;
  this[0x80d8] = (AndroidRenderDeviceES20)0x1;
  *(undefined8 *)(this + 0x8130) = 0;
  this[0x29] = (AndroidRenderDeviceES20)0x0;
  __haystack = (char *)glGetString(0x1f03);
  if (__haystack != (char *)0x0) {
    pcVar1 = strstr(__haystack,"GL_EXT_discard_framebuffer");
    this[0x8138] = (AndroidRenderDeviceES20)(pcVar1 != (char *)0x0);
  }
  OutputDebugStrF((wchar_t *)"*** GL Extensions = %s ***",__haystack);
  plVar2 = *(long **)(this + 0x80f8);
  *(long **)(this + 0x80a8) = plVar2;
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidRenderDeviceES20::CreateTextureData(Sexy::ResStreamFileGPULocationInfo*, void*,
   void*) */

void __thiscall
Sexy::AndroidRenderDeviceES20::CreateTextureData
          (AndroidRenderDeviceES20 *this,ResStreamFileGPULocationInfo *param_1,void *param_2,
          void *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  TextureData *this_00;
  undefined8 *puVar4;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x70);
  BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
  ::TextureData::TextureData(this_00,(BaseRenderDevice *)this);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this_00 + 0x34) = uVar1;
  *(undefined4 *)(this_00 + 0x44) = uVar1;
  *(undefined4 *)(this_00 + 0x38) = uVar2;
  *(undefined4 *)(this_00 + 0x48) = uVar2;
  *(undefined4 *)(this_00 + 0x3c) = 1;
  *(undefined4 *)(this_00 + 0x40) = 1;
  *(undefined4 *)(this_00 + 100) = 1;
  *(undefined4 *)(this_00 + 0x68) = 0;
  std::
  vector<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece,std::allocator<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece>>
  ::resize((vector<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece,std::allocator<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece>>
            *)(this_00 + 8),1);
  this_00[0x29] = (TextureData)0x1;
  this_00[0x30] = (TextureData)0x1;
  *(undefined4 *)(this_00 + 0x68) = 0;
  *(undefined4 *)(this_00 + 0x5c) = 0x3f800000;
  *(undefined4 *)(this_00 + 0x60) = 0x3f800000;
  puVar4 = (undefined8 *)FUN_052d9a54(*(undefined8 *)(this_00 + 8),0);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((long)puVar4 + 0x24) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(puVar4 + 5) = uVar1;
  GLTexHolder::GLTexHolder((GLTexHolder *)&local_10,(int)param_2);
  *puVar4 = local_10;
  GLTexHolder::GLTexHolder((GLTexHolder *)&local_10,(int)param_3);
  lVar3 = ___stack_chk_guard;
  puVar4[1] = local_10;
  if (local_8 == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidRenderDeviceES20::GetEffect(Sexy::RenderEffectDefinition*) */

void __thiscall
Sexy::AndroidRenderDeviceES20::GetEffect
          (AndroidRenderDeviceES20 *this,RenderEffectDefinition *param_1)

{
  map<Sexy::RenderEffectDefinition*,Sexy::AndroidGL20RenderEffect*,std::less<Sexy::RenderEffectDefinition*>,std::allocator<std::pair<Sexy::RenderEffectDefinition*const,Sexy::AndroidGL20RenderEffect*>>>
  *this_00;
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  AndroidGL20RenderEffect *this_01;
  RenderEffectDefinition *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<Sexy::RenderEffectDefinition*,Sexy::AndroidGL20RenderEffect*,std::less<Sexy::RenderEffectDefinition*>,std::allocator<std::pair<Sexy::RenderEffectDefinition*const,Sexy::AndroidGL20RenderEffect*>>>
             *)(this + 0x8100);
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  local_18 = std::
             map<Sexy::RenderEffectDefinition*,Sexy::AndroidGL20RenderEffect*,std::less<Sexy::RenderEffectDefinition*>,std::allocator<std::pair<Sexy::RenderEffectDefinition*const,Sexy::AndroidGL20RenderEffect*>>>
             ::find(this_00,local_28);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    this_01 = *(AndroidGL20RenderEffect **)(lVar2 + 8);
  }
  else {
    this_01 = ::operator_new(0x90);
    AndroidGL20RenderEffect::AndroidGL20RenderEffect(this_01,(RenderDevice3D *)this,local_28[0]);
    puVar3 = (undefined8 *)
             std::
             map<Sexy::RenderEffectDefinition*,Sexy::AndroidGL20RenderEffect*,std::less<Sexy::RenderEffectDefinition*>,std::allocator<std::pair<Sexy::RenderEffectDefinition*const,Sexy::AndroidGL20RenderEffect*>>>
             ::operator[](this_00,local_28);
    *puVar3 = this_01;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}

