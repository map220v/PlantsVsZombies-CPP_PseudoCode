// Class: Sexy::AndroidGraphicsDriver


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidGraphicsDriver::GetRenderModeString(Sexy::IGraphicsDriver::ERenderMode, unsigned
   int, bool, bool) */

void Sexy::AndroidGraphicsDriver::GetRenderModeString(string *param_1)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(param_1,"");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* Sexy::AndroidGraphicsDriver::GetRenderModeFlags() */

undefined4 __thiscall Sexy::AndroidGraphicsDriver::GetRenderModeFlags(AndroidGraphicsDriver *this)

{
  return *(undefined4 *)(this + 0xc6c);
}


/* Sexy::AndroidGraphicsDriver::SetRenderModeFlags(unsigned int) */

void __thiscall
Sexy::AndroidGraphicsDriver::SetRenderModeFlags(AndroidGraphicsDriver *this,uint param_1)

{
  *(uint *)(this + 0xc6c) = param_1;
  return;
}


/* Sexy::AndroidGraphicsDriver::GetRenderMode() */

undefined4 __thiscall Sexy::AndroidGraphicsDriver::GetRenderMode(AndroidGraphicsDriver *this)

{
  return *(undefined4 *)(this + 0xc68);
}


/* Sexy::AndroidGraphicsDriver::SetRenderMode(Sexy::IGraphicsDriver::ERenderMode) */

void __thiscall
Sexy::AndroidGraphicsDriver::SetRenderMode(AndroidGraphicsDriver *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0xc68) = param_2;
  return;
}


/* Sexy::AndroidGraphicsDriver::Remove3DData(Sexy::MemoryImage*) */

void Sexy::AndroidGraphicsDriver::Remove3DData(MemoryImage *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xc50);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x120))(plVar1);
    return;
  }
  (**(code **)(**(long **)(param_1 + 0xc48) + 0x120))(*(long **)(param_1 + 0xc48));
  return;
}


/* Sexy::AndroidGraphicsDriver::GetRenderDevice3D() */

long __thiscall Sexy::AndroidGraphicsDriver::GetRenderDevice3D(AndroidGraphicsDriver *this)

{
  if (*(long *)(this + 0xc50) != 0) {
    return *(long *)(this + 0xc50);
  }
  return *(long *)(this + 0xc48);
}


/* Sexy::AndroidGraphicsDriver::GetCritSect() */

AndroidGraphicsDriver * __thiscall
Sexy::AndroidGraphicsDriver::GetCritSect(AndroidGraphicsDriver *this)

{
  return this + 0xc90;
}


/* Sexy::AndroidGraphicsDriver::DetermineScreenImageType() */

void __thiscall Sexy::AndroidGraphicsDriver::DetermineScreenImageType(AndroidGraphicsDriver *this)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(RenderDevice3D **)(this + 0xc50) != (RenderDevice3D *)0x0) {
    SetGL20BackbufferImages
              (*(AndroidAppDriver **)(this + 0xc58),*(RenderDevice3D **)(this + 0xc50),
               *(Image **)(this + 0xcc0),*(Image **)(this + 0xcc8));
    lVar2 = *(long *)(*(long *)(this + 0xc60) + 0x360);
    uVar1 = (**(code **)(*(long *)this + 0x60))(this);
    *(undefined8 *)(lVar2 + 0x88) = uVar1;
  }
  return;
}


/* Sexy::AndroidGraphicsDriver::GetScreenImage() */

undefined8 __thiscall Sexy::AndroidGraphicsDriver::GetScreenImage(AndroidGraphicsDriver *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0xc48) != 0) {
    return *(undefined8 *)(this + 0xcc0);
  }
  uVar1 = GetGL20ScreenImage(*(RenderDevice3D **)(this + 0xc50));
  return uVar1;
}


/* Sexy::AndroidGraphicsDriver::Redraw(Sexy::TRect<int>*) */

undefined8 Sexy::AndroidGraphicsDriver::Redraw(TRect *param_1)

{
  long *plVar1;
  DeviceImage *pDVar2;
  DeviceImage *pDVar3;
  
  plVar1 = *(long **)(param_1 + 0xc50);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0xe0))(plVar1,2);
    SetGL20RenderTargetFBO(*(RenderDevice3D **)(param_1 + 0xc50),0);
    pDVar2 = (DeviceImage *)GetGL20ScreenImage(*(RenderDevice3D **)(param_1 + 0xc50));
    pDVar3 = *(DeviceImage **)(param_1 + 0xcc8);
    if (pDVar3 == pDVar2) {
      GL20BltSwapScreen(*(RenderDevice3D **)(param_1 + 0xc50),pDVar3,0,0,*(int *)(pDVar3 + 0x38),
                        *(int *)(pDVar3 + 0x3c));
    }
    plVar1 = *(long **)(param_1 + 0xc50);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1,2);
      return 1;
    }
  }
  (**(code **)(**(long **)(param_1 + 0xc48) + 0xe0))(*(long **)(param_1 + 0xc48),2);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidGraphicsDriver::GetAspectRatio() */

void Sexy::AndroidGraphicsDriver::GetAspectRatio(void)

{
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Ratio::Ratio((Ratio *)&local_10,0,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10);
}


/* Sexy::AndroidGraphicsDriver::~AndroidGraphicsDriver() */

void __thiscall Sexy::AndroidGraphicsDriver::~AndroidGraphicsDriver(AndroidGraphicsDriver *this)

{
  *(undefined ***)this = &PTR__AndroidGraphicsDriver_06a331a0;
  EA::Thread::Mutex::~Mutex((Mutex *)(this + 0xc90));
  return;
}


/* Sexy::AndroidGraphicsDriver::~AndroidGraphicsDriver() */

void __thiscall Sexy::AndroidGraphicsDriver::~AndroidGraphicsDriver(AndroidGraphicsDriver *this)

{
  ~AndroidGraphicsDriver(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidGraphicsDriver::LoadMesh(std::string const&, Sexy::MeshListener*) */

void __thiscall
Sexy::AndroidGraphicsDriver::LoadMesh
          (AndroidGraphicsDriver *this,string *param_1,MeshListener *param_2)

{
  char cVar1;
  Mesh *this_00;
  long *plVar2;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0xc90));
  this_00 = ::operator_new(0x30);
  Mesh::Mesh(this_00);
  *(MeshListener **)(this_00 + 0x10) = param_2;
  thunk_FUN_05475e00(this_00 + 8,param_1);
  plVar2 = *(long **)(this + 0xc50);
  if (plVar2 == (long *)0x0) {
    plVar2 = *(long **)(this + 0xc48);
    if ((plVar2 != (long *)0x0) &&
       (cVar1 = (**(code **)(*plVar2 + 0x280))(plVar2,this_00), cVar1 == '\0')) {
      Mesh::~Mesh(this_00);
      AK::FreeHook(this_00);
      this_00 = (Mesh *)0x0;
    }
  }
  else {
    cVar1 = (**(code **)(*plVar2 + 0x280))(plVar2,this_00);
    if (cVar1 == '\0') {
      Mesh::~Mesh(this_00);
      AK::FreeHook(this_00);
      this_00 = (Mesh *)0x0;
    }
  }
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* Sexy::AndroidGraphicsDriver::AndroidGraphicsDriver(Sexy::AndroidAppDriver*, Sexy::SexyAppBase*)
    */

void __thiscall
Sexy::AndroidGraphicsDriver::AndroidGraphicsDriver
          (AndroidGraphicsDriver *this,AndroidAppDriver *param_1,SexyAppBase *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  IGraphicsDriver::IGraphicsDriver((IGraphicsDriver *)this);
  NativeDisplay::NativeDisplay((NativeDisplay *)(this + 8));
  *(undefined ***)this = &PTR__AndroidGraphicsDriver_06a331a0;
  CritSect::CritSect((CritSect *)(this + 0xc90));
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                     *)(this + 0xcb8),(rbtree_node *)0x0);
  *(undefined8 *)(this + 0xc48) = 0;
  *(undefined8 *)(this + 0xc50) = 0;
  cVar1 = Android::Graphics::IsOpenGLES20(param_1);
  if (cVar1 != '\0') {
    uVar2 = CreateGL20RenderDevice((IGraphicsDriver *)this);
    *(undefined8 *)(this + 0xc50) = uVar2;
  }
  *(SexyAppBase **)(this + 0xc60) = param_2;
  *(undefined4 *)(this + 0xc70) = 0;
  *(undefined4 *)(this + 0xc74) = 0;
  *(undefined4 *)(this + 0xc80) = 0;
  *(undefined4 *)(this + 0xc84) = 0;
  *(AndroidAppDriver **)(this + 0xc58) = param_1;
  *(undefined8 *)(this + 0xcc0) = 0;
  *(undefined8 *)(this + 0xcc8) = 0;
  *(undefined4 *)(this + 0xc88) = 0;
  *(undefined4 *)(this + 0xc8c) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidGraphicsDriver::ClearBuffers() */

void __thiscall Sexy::AndroidGraphicsDriver::ClearBuffers(AndroidGraphicsDriver *this)

{
  long *plVar1;
  code *pcVar2;
  Color aCStack_18 [16];
  long local_8;
  
  plVar1 = *(long **)(this + 0xc50);
  local_8 = ___stack_chk_guard;
  if (plVar1 == (long *)0x0) {
    glClearColor(0,0,0,0x3f800000);
    glClear(0x4000);
  }
  else {
    pcVar2 = *(code **)(*plVar1 + 0x180);
    Color::Color(aCStack_18,0);
    (*pcVar2)(plVar1,aCStack_18);
    (**(code **)(**(long **)(this + 0xc50) + 0x188))(*(long **)(this + 0xc50));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::AndroidGraphicsDriver::GetImageFromResStream(std::string const&, void*,
   Sexy::ResStreamFileGPULocationInfo*) */

void __thiscall
Sexy::AndroidGraphicsDriver::GetImageFromResStream
          (AndroidGraphicsDriver *this,string *param_1,void *param_2,
          ResStreamFileGPULocationInfo *param_3)

{
  if (*(RenderDevice3D **)(this + 0xc50) != (RenderDevice3D *)0x0) {
    GetGL20ImageFromResStream(*(RenderDevice3D **)(this + 0xc50),param_1,param_2,param_3);
    return;
  }
  return;
}


/* Sexy::AndroidGraphicsDriver::GetOptimizedImage(std::string const&, bool, bool) */

void __thiscall
Sexy::AndroidGraphicsDriver::GetOptimizedImage
          (AndroidGraphicsDriver *this,string *param_1,bool param_2,bool param_3)

{
  if (*(RenderDevice3D **)(this + 0xc50) != (RenderDevice3D *)0x0) {
    GetGL20OptimizedImage(*(RenderDevice3D **)(this + 0xc50),param_1,param_2,param_3);
    return;
  }
  return;
}


/* Sexy::AndroidGraphicsDriver::GetOptimizedImage(ImageLib::Image*, bool, bool, bool) */

void __thiscall
Sexy::AndroidGraphicsDriver::GetOptimizedImage
          (AndroidGraphicsDriver *this,Image *param_1,bool param_2,bool param_3,bool param_4)

{
  if (*(RenderDevice3D **)(this + 0xc50) != (RenderDevice3D *)0x0) {
    GetGL20OptimizedImage(*(RenderDevice3D **)(this + 0xc50),param_1,param_2,param_3,param_4);
    return;
  }
  return;
}


/* Sexy::AndroidGraphicsDriver::ReinitForSurfaceChange(Sexy::UI_ORIENTATION, int, int, bool) */

void __thiscall
Sexy::AndroidGraphicsDriver::ReinitForSurfaceChange
          (AndroidGraphicsDriver *this,int param_2,int param_3,int param_4,char param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  DeviceImage *pDVar8;
  int *piVar9;
  int *piVar10;
  long *plVar11;
  int iVar12;
  code *pcVar13;
  int unaff_w20;
  int unaff_w21;
  PrimeGlyphMesh *this_00;
  float fVar14;
  
  Android::Graphics::GetScreenSizeInPoints((int *)(this + 0xc80),(int *)(this + 0xc84));
  if (((param_5 == '\0') && (*(int *)(this + 0xc70) == param_3)) &&
     (*(int *)(this + 0xc74) == param_4)) {
    OutputDebugStrF((wchar_t *)"SKIP ReinitForSurfaceChange");
    return;
  }
  OutputDebugStrF((wchar_t *)"ACTUALLY DO ReinitForSurfaceChange");
  if (param_2 - 3U < 2) {
    piVar10 = (int *)(*(long *)(this + 0xc60) + 0xd4);
    piVar1 = (int *)(*(long *)(this + 0xc60) + 0xd8);
    piVar9 = eastl::max_alt<int>(piVar10,piVar1);
    unaff_w21 = *piVar9;
    piVar10 = eastl::min_alt<int>(piVar10,piVar1);
    unaff_w20 = *piVar10;
  }
  else if (param_2 - 1U < 2) {
    piVar10 = (int *)(*(long *)(this + 0xc60) + 0xd4);
    piVar1 = (int *)(*(long *)(this + 0xc60) + 0xd8);
    piVar9 = eastl::min_alt<int>(piVar10,piVar1);
    unaff_w21 = *piVar9;
    piVar10 = eastl::max_alt<int>(piVar10,piVar1);
    unaff_w20 = *piVar10;
  }
  cVar5 = Android::Graphics::CanSetGLViewScaleFactor(*(AndroidAppDriver **)(this + 0xc58));
  if (cVar5 != '\0') {
    iVar12 = *(int *)(this + 0xc80);
    iVar7 = *(int *)(this + 0xc84);
    uVar4 = iVar12 - unaff_w21 >> 0x1f;
    uVar6 = iVar7 - unaff_w20 >> 0x1f;
    if ((int)((iVar7 - unaff_w20 ^ uVar6) - uVar6) < (int)((iVar12 - unaff_w21 ^ uVar4) - uVar4)) {
      fVar14 = (float)unaff_w21 / (float)iVar12;
    }
    else {
      fVar14 = (float)unaff_w20 / (float)iVar7;
    }
    iVar7 = (int)((float)iVar7 * fVar14);
    iVar12 = (int)((float)iVar12 * fVar14);
    if ((iVar7 < unaff_w20) || (iVar12 < unaff_w21)) {
      if (unaff_w20 - iVar7 < unaff_w21 - iVar12) {
        fVar14 = fVar14 * ((float)unaff_w21 / (float)iVar12);
      }
      else {
        fVar14 = fVar14 * ((float)unaff_w20 / (float)iVar7);
      }
    }
    Android::Graphics::SetGLViewScaleFactor(*(AndroidAppDriver **)(this + 0xc58),fVar14);
  }
  this_00 = *(PrimeGlyphMesh **)(this + 0xc50);
  *(int *)(this + 0xc70) = unaff_w21;
  *(int *)(this + 0xc74) = unaff_w20;
  *(undefined4 *)(this + 0xc6c) = 0;
  if (this_00 != (PrimeGlyphMesh *)0x0) {
    uVar6 = (**(code **)(*(long *)this + 0x20))(this);
    PrimeGlyphMesh::SetColorRGBA(this_00,uVar6);
    SetGL20FramebufferSize(*(RenderDevice3D **)(this + 0xc50),param_3,param_4);
  }
  nop();
  if (*(RenderDevice3D **)(this + 0xc50) != (RenderDevice3D *)0x0) {
    SetGL20RenderTargetImage(*(RenderDevice3D **)(this + 0xc50),(Image *)0x0);
  }
  if (*(long *)(this + 0xcc0) != 0) {
    (**(code **)(**(long **)(this + 0xc58) + 0x48))(*(long **)(this + 0xc58));
    if (*(long **)(this + 0xcc0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xcc0) + 0x18))();
    }
    *(undefined8 *)(this + 0xcc0) = 0;
  }
  if (*(long *)(this + 0xcc8) != 0) {
    (**(code **)(**(long **)(this + 0xc58) + 0x48))(*(long **)(this + 0xc58));
    if (*(long **)(this + 0xcc8) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xcc8) + 0x18))();
    }
    *(undefined8 *)(this + 0xcc8) = 0;
  }
  pDVar8 = ::operator_new(0x160);
  DeviceImage::DeviceImage(pDVar8,*(SexyAppBase **)(this + 0xc60));
  *(DeviceImage **)(this + 0xcc0) = pDVar8;
  FUN_052d85c8(pDVar8 + 0x18);
  plVar11 = *(long **)(this + 0xcc0);
  uVar2 = *(undefined4 *)(this + 0xc70);
  uVar3 = *(undefined4 *)(this + 0xc74);
  plVar11[0xe] = 0;
  *(undefined4 *)(plVar11 + 7) = uVar2;
  pcVar13 = *(code **)(*plVar11 + 0x130);
  *(undefined4 *)((long)plVar11 + 0x3c) = uVar3;
  (*pcVar13)(plVar11,0,0);
  *(undefined8 *)(this + 0xcc8) = 0;
  if ((*(long *)(this + 0xc48) == 0) &&
     (*(char *)(*(long *)(*(long *)(this + 0xc58) + 0x88) + 0x928) != '\0')) {
    pDVar8 = ::operator_new(0x160);
    DeviceImage::DeviceImage(pDVar8,*(SexyAppBase **)(this + 0xc60));
    *(DeviceImage **)(this + 0xcc8) = pDVar8;
    FUN_052d85c8(pDVar8 + 0x18);
    plVar11 = *(long **)(this + 0xcc8);
    uVar2 = *(undefined4 *)(this + 0xc70);
    uVar3 = *(undefined4 *)(this + 0xc74);
    plVar11[0xe] = 0;
    *(undefined4 *)(plVar11 + 7) = uVar2;
    pcVar13 = *(code **)(*plVar11 + 0x130);
    *(undefined4 *)((long)plVar11 + 0x3c) = uVar3;
    (*pcVar13)(plVar11,0,0);
    Image::CreateRenderData(*(Image **)(this + 0xcc8));
  }
  if (*(RenderDevice3D **)(this + 0xc50) != (RenderDevice3D *)0x0) {
    SetGL20BackbufferImages
              (*(AndroidAppDriver **)(this + 0xc58),*(RenderDevice3D **)(this + 0xc50),
               *(Image **)(this + 0xcc0),*(Image **)(this + 0xcc8));
    return;
  }
  return;
}

