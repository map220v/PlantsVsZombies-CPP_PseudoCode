// Class: Sexy::AndroidResStreamsDriver


/* Sexy::AndroidResStreamsDriver::GetDecompressBufferSize() */

undefined8 Sexy::AndroidResStreamsDriver::GetDecompressBufferSize(void)

{
  return 0x80000;
}


/* Sexy::AndroidResStreamsDriver::GetGraphicsDriver() */

undefined8 __thiscall
Sexy::AndroidResStreamsDriver::GetGraphicsDriver(AndroidResStreamsDriver *this)

{
  return *(undefined8 *)(this + 0x1f0);
}


/* Sexy::AndroidResStreamsDriver::AttachGraphicsDriver(Sexy::IGraphicsDriver*) */

undefined8 __thiscall
Sexy::AndroidResStreamsDriver::AttachGraphicsDriver
          (AndroidResStreamsDriver *this,IGraphicsDriver *param_1)

{
  *(IGraphicsDriver **)(this + 0x1f0) = param_1;
  (**(code **)(*(long *)this + 0xb0))();
  return 1;
}


/* Sexy::AndroidResStreamsDriver::InitWithApp(Sexy::SexyAppBase*) */

void Sexy::AndroidResStreamsDriver::InitWithApp(SexyAppBase *param_1)

{
  char cVar1;
  
  cVar1 = BaseResStreamsDriver::InitWithApp(param_1);
  if (cVar1 != '\0') {
    *(undefined8 *)(param_1 + 0x1f0) = 0;
  }
  return;
}


/* Sexy::AndroidResStreamsDriver::GetExtensionsSupported() */

void __thiscall Sexy::AndroidResStreamsDriver::GetExtensionsSupported(AndroidResStreamsDriver *this)

{
  AndroidResStreamsDriver AVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = (char *)glGetString(0x1f03);
  cVar2 = Android::Graphics::IsOpenGLES20(*(AndroidAppDriver **)(*(long *)(this + 0x1f0) + 0xc58));
  if (cVar2 == '\0') {
    pcVar4 = strstr(pcVar3,"GL_OES_texture_npot");
    if (((pcVar4 == (char *)0x0) &&
        (pcVar4 = strstr(pcVar3,"GL_IMG_texture_npot"), pcVar4 == (char *)0x0)) &&
       (pcVar4 = strstr(pcVar3,"GL_APPLE_texture_2D_limited_npot"), pcVar4 == (char *)0x0)) {
      pcVar4 = strstr(pcVar3,"GL_ARB_texture_non_power_of_two");
      this[0x1c5] = (AndroidResStreamsDriver)(pcVar4 == (char *)0x0);
    }
    else {
      this[0x1c5] = (AndroidResStreamsDriver)0x0;
    }
  }
  else {
    this[0x1c5] = (AndroidResStreamsDriver)0x0;
  }
  pcVar4 = strstr(pcVar3,"GL_OES_compressed_ETC1_RGB8_texture");
  this[0x1c0] = (AndroidResStreamsDriver)(pcVar4 != (char *)0x0);
  pcVar4 = strstr(pcVar3,"GL_IMG_texture_compression_pvrtc");
  this[0x1c1] = (AndroidResStreamsDriver)(pcVar4 != (char *)0x0);
  pcVar4 = strstr(pcVar3,"GL_AMD_compressed_ATC_texture");
  AVar1 = (AndroidResStreamsDriver)0x1;
  if (pcVar4 == (char *)0x0) {
    pcVar4 = strstr(pcVar3,"GL_ATI_texture_compression_atitc");
    AVar1 = (AndroidResStreamsDriver)(pcVar4 != (char *)0x0);
  }
  this[0x1c2] = AVar1;
  AVar1 = (AndroidResStreamsDriver)0x1;
  pcVar4 = strstr(pcVar3,"GL_OES_texture_compression_S3TC");
  if (((pcVar4 == (char *)0x0) &&
      (pcVar4 = strstr(pcVar3,"GL_EXT_texture_compression_s3tc"), pcVar4 == (char *)0x0)) &&
     ((pcVar4 = strstr(pcVar3,"GL_EXT_texture_compression_dxt1"), pcVar4 == (char *)0x0 &&
      (pcVar4 = strstr(pcVar3,"GL_EXT_texture_compression_dxt3"), pcVar4 == (char *)0x0)))) {
    pcVar4 = strstr(pcVar3,"GL_EXT_texture_compression_dxt5");
    AVar1 = (AndroidResStreamsDriver)(pcVar4 != (char *)0x0);
  }
  this[0x1c3] = AVar1;
  pcVar4 = strstr(pcVar3,"GL_AMD_compressed_3DC_texture");
  this[0x1c4] = (AndroidResStreamsDriver)(pcVar4 != (char *)0x0);
  pcVar3 = strstr(pcVar3,"EXT_texture_swizzle");
  this[0x1c6] = (AndroidResStreamsDriver)(pcVar3 != (char *)0x0);
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidResStreamsDriver::AllocatePool(Sexy::ResStreamsPool*) */

void __thiscall
Sexy::AndroidResStreamsDriver::AllocatePool(AndroidResStreamsDriver *this,ResStreamsPool *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  
  lVar4 = ___stack_chk_guard;
  lVar5 = memalign(0x80,*(int *)(param_1 + 0xc) * *(int *)(param_1 + 0x10));
  *(long *)(param_1 + 0x48) = lVar5;
  uVar2 = *(uint *)(param_1 + 0xc);
  if (uVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 0x10);
    uVar1 = (uVar2 - 2 >> 1) + 1;
    plVar7 = *(long **)(param_1 + 0x40);
    uVar6 = uVar1 * 2;
    uVar8 = (ulong)uVar3;
    if (uVar2 - 1 < 3) {
      uVar6 = 0;
    }
    else {
      uVar9 = 0;
      plVar10 = plVar7;
      lVar11 = lVar5;
      lVar12 = lVar5 + uVar8;
      do {
        uVar9 = uVar9 + 1;
        *plVar10 = lVar11;
        plVar10[1] = 0;
        plVar10[2] = lVar12;
        plVar10[3] = 0;
        plVar10 = plVar10 + 4;
        lVar11 = lVar11 + uVar8 * 2;
        lVar12 = lVar12 + uVar8 * 2;
      } while (uVar9 < uVar1);
      lVar5 = lVar5 + (ulong)uVar6 * (ulong)uVar3;
      if (uVar2 == uVar6) goto LAB_052f795c;
    }
    uVar1 = uVar6 + 1;
    plVar7[(ulong)uVar6 * 2] = lVar5;
    plVar7[(ulong)uVar6 * 2 + 1] = 0;
    if (uVar1 < uVar2) {
      uVar6 = uVar6 + 2;
      plVar7[(ulong)uVar1 * 2] = lVar5 + uVar8;
      plVar7[(ulong)uVar1 * 2 + 1] = 0;
      if (uVar6 < uVar2) {
        plVar7[(ulong)uVar6 * 2] = lVar5 + uVar8 + uVar8;
        plVar7[(ulong)uVar6 * 2 + 1] = 0;
      }
    }
  }
LAB_052f795c:
  if (lVar4 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* Sexy::AndroidResStreamsDriver::DestroyPool(Sexy::ResStreamsPool*) */

undefined8 __thiscall
Sexy::AndroidResStreamsDriver::DestroyPool(AndroidResStreamsDriver *this,ResStreamsPool *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    free(*(void **)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  plVar2 = (long *)(**(code **)(**(long **)(this + 0x1f0) + 0xb0))(*(long **)(this + 0x1f0));
  (**(code **)(*plVar2 + 0xe0))(plVar2,0x10);
  plVar2 = (long *)(**(code **)(**(long **)(this + 0x1f0) + 0xb0))(*(long **)(this + 0x1f0));
  (**(code **)(*plVar2 + 0x230))(plVar2,0,0);
  glBindTexture(0xde1,0);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x40);
    puVar4 = puVar3;
    do {
      puVar5 = puVar4 + 2;
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4 = puVar5;
    } while (puVar5 != puVar3 + ((ulong)(iVar1 - 1) + 1) * 2);
  }
  return 1;
}


/* Sexy::AndroidResStreamsDriver::GetImageFromResStream(std::string, void*, void*,
   Sexy::ResStreamFileGPULocationInfo*, Sexy::ResStreamTextureDescriptor*) */

void __thiscall
Sexy::AndroidResStreamsDriver::GetImageFromResStream
          (AndroidResStreamsDriver *this,string *param_2,void *param_3,undefined8 param_4,
          ResStreamFileGPULocationInfo *param_5,long param_6)

{
  long lVar1;
  
  lVar1 = AndroidGraphicsDriver::GetImageFromResStream
                    (*(AndroidGraphicsDriver **)(this + 0x1f0),param_2,param_3,param_5);
  if (lVar1 != 0) {
    if ((*(int *)(param_6 + 0xc) == 0x16) || (*(int *)(param_6 + 0xc) == 2)) {
      *(undefined1 *)(lVar1 + 0x92) = 0;
      *(undefined1 *)(lVar1 + 0x91) = 0;
    }
    *(float *)(lVar1 + 0x150) = (float)*(uint *)(param_6 + 0x14) * 0.01;
  }
  return;
}


/* Sexy::AndroidResStreamsDriver::ReallocateGroupTextures(Sexy::ResStreamsGroup*) const */

void __thiscall
Sexy::AndroidResStreamsDriver::ReallocateGroupTextures
          (AndroidResStreamsDriver *this,ResStreamsGroup *param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  uVar3 = FUN_052f7ad4(*(undefined4 *)(param_1 + 0x80));
  BaseGLResStreamsDriver::TextureArrayUnregister
            ((BaseGLResStreamsDriver *)this,*(void **)(param_1 + 0x98),uVar3);
  BaseGLResStreamsDriver::TextureArrayUnregister
            ((BaseGLResStreamsDriver *)this,*(void **)(param_1 + 0xa0),uVar3);
  BaseGLResStreamsDriver::TextureArrayRegister
            ((BaseGLResStreamsDriver *)this,*(void **)(param_1 + 0x98),uVar3);
  lVar8 = *(long *)(param_1 + 0xa8);
  (**(code **)(*(long *)this + 0xe0))(this,param_1);
  if (uVar3 != 0) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      uVar5 = *(undefined8 *)(lVar8 + lVar7 * 8);
      lVar1 = *(long *)(param_1 + 0xa0) + lVar6;
      if (*(long *)(param_1 + 0xa0) == 0) {
        lVar1 = 0;
      }
      lVar7 = lVar7 + 1;
      plVar4 = (long *)(**(code **)(**(long **)(this + 0x1f0) + 0xb0))(*(long **)(this + 0x1f0));
      lVar2 = *(long *)(param_1 + 0x98) + lVar6;
      lVar6 = lVar6 + 4;
      if (*(code **)(*plVar4 + 0x2a0) != RenderDevice3D::SetTextureInfoIntoTextureData) {
        (**(code **)(*plVar4 + 0x2a0))(plVar4,uVar5,lVar2,lVar1);
      }
    } while ((uint)lVar7 < uVar3);
  }
  return;
}


/* Sexy::AndroidResStreamsDriver::ConfigureGroupTextures(Sexy::ResStreamsGroup*) const */

void __thiscall
Sexy::AndroidResStreamsDriver::ConfigureGroupTextures
          (AndroidResStreamsDriver *this,ResStreamsGroup *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ResStreamTextureDescriptor *pRVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  
  lVar12 = *(long *)(param_1 + 0x98);
  uVar11 = 0;
  iVar3 = FUN_052f7ad4(*(undefined4 *)(param_1 + 0x80));
  if (iVar3 != 0) {
    do {
      pRVar7 = (ResStreamTextureDescriptor *)ResStreamsGroup::GetTextureDescriptor(param_1,uVar11);
      uVar1 = *(undefined4 *)(lVar12 + (ulong)uVar11 * 4);
      uVar6 = *(undefined4 *)pRVar7;
      uVar5 = *(undefined4 *)(pRVar7 + 4);
      if (this[0x1c5] != (AndroidResStreamsDriver)0x0) {
        cVar2 = FUN_052f75e0(uVar6);
        if (cVar2 == '\0') {
          uVar6 = FUN_052f75c0(uVar6);
        }
        cVar2 = FUN_052f75e0(uVar5);
        if (cVar2 == '\0') {
          uVar5 = FUN_052f75c0(uVar5);
        }
      }
      uVar4 = *(uint *)(pRVar7 + 0xc);
      if (0x92 < uVar4) {
        if (uVar4 < 0x96) {
          BaseGLResStreamsDriver::AllocateMultiTexture
                    ((BaseGLResStreamsDriver *)this,param_1,uVar11,pRVar7);
        }
        else if (uVar4 == 0x96) {
          BaseGLResStreamsDriver::AllocateMultiTexture2
                    ((BaseGLResStreamsDriver *)this,param_1,uVar11,pRVar7);
        }
      }
      glPixelStorei(0xcf5,1);
      glBindTexture(0xde1,uVar1);
      glTexParameteri(0xde1,0x2802,0x812f);
      glTexParameteri(0xde1,0x2803,0x812f);
      switch(*(undefined4 *)(pRVar7 + 0xc)) {
      case 0:
      case 0x95:
        uVar8 = 0x1908;
        uVar10 = 0x1401;
        uVar9 = 0x1908;
        break;
      default:
        uVar8 = 0x8033;
        uVar9 = 0x1908;
        uVar10 = 0x8033;
        break;
      case 0x15:
        glTexParameteri(0xde1,0x2800,0x2601);
        glTexParameteri(0xde1,0x2801,0x2601);
      case 1:
        uVar8 = 0x1908;
        uVar10 = 0x8033;
        uVar9 = 0x1908;
        break;
      case 0x16:
        glTexParameteri(0xde1,0x2800,0x2601);
        glTexParameteri(0xde1,0x2801,0x2601);
      case 2:
        uVar8 = 0x1907;
        uVar10 = 0x8363;
        uVar9 = 0x1907;
        break;
      case 0x17:
        glTexParameteri(0xde1,0x2800,0x2601);
        glTexParameteri(0xde1,0x2801,0x2601);
      case 3:
        uVar8 = 0x1908;
        uVar10 = 0x8034;
        uVar9 = 0x1908;
        break;
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x93:
      case 0x94:
      case 0x96:
        goto switchD_052f7d48_caseD_1e;
      }
      glTexImage2D(0xde1,0,uVar8,uVar6,uVar5,0,uVar9,uVar10,0);
switchD_052f7d48_caseD_1e:
      uVar11 = uVar11 + 1;
      uVar4 = FUN_052f7ad4(*(undefined4 *)(param_1 + 0x80));
    } while (uVar11 < uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidResStreamsDriver::AttachGroupToPool(Sexy::ResStreamsPool*, int,
   Sexy::ResStreamsGroup*, Sexy::ResStreamsGroup*) */

void __thiscall
Sexy::AndroidResStreamsDriver::AttachGroupToPool
          (AndroidResStreamsDriver *this,ResStreamsPool *param_1,int param_2,
          ResStreamsGroup *param_3,ResStreamsGroup *param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  void *pvVar4;
  undefined4 *puVar5;
  ResStreamFileGPULocationInfo *pRVar6;
  undefined8 uVar7;
  ResStreamsPool *extraout_x1;
  ResStreamsPool *extraout_x1_00;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_3 != (ResStreamsGroup *)0x0) && (uVar2 = 0, *(long *)(param_3 + 0x98) != 0)) {
    for (; uVar1 = FUN_052f7ad4(*(undefined4 *)(param_3 + 0x80),param_1), uVar2 < uVar1;
        uVar2 = uVar2 + 1) {
      puVar3 = (uint *)ResStreamsGroup::GetTextureDescriptor(param_3,uVar2);
      uVar7 = FUN_0547429c(param_3);
      OutputDebugStrF((wchar_t *)
                      "AttachGroupToPool Tex Delete: %s Texture#%d  -  %d x %d  pitch=%d   format=%d"
                      ,uVar7,(ulong)uVar2,(ulong)*puVar3,(ulong)puVar3[1],(ulong)puVar3[2],
                      (ulong)puVar3[3]);
      param_1 = extraout_x1;
    }
    BaseGLResStreamsDriver::GroupTexturesDeallocate((BaseGLResStreamsDriver *)this,param_3);
    param_1 = extraout_x1_00;
  }
  if (param_4 != (ResStreamsGroup *)0x0) {
    uVar9 = (ulong)*(uint *)(param_4 + 0x80);
    uVar2 = 0;
    uVar1 = FUN_052f7ad4(uVar9,param_1);
    if (uVar1 != 0) {
      for (; uVar2 < uVar1; uVar2 = uVar2 + 1) {
        ResStreamsGroup::GetTextureDescriptor(param_4,uVar2);
        uVar9 = (ulong)*(uint *)(param_4 + 0x80);
        uVar1 = FUN_052f7ad4(uVar9);
      }
      lVar11 = 0;
      lVar10 = 0;
      puVar3 = operator_new__(uVar9 << 2);
      *(uint **)(param_4 + 0x98) = puVar3;
      pvVar4 = operator_new__((ulong)*(uint *)(param_4 + 0x80) << 3);
      plVar8 = *(long **)(this + 0x1f0);
      *(void **)(param_4 + 0xa8) = pvVar4;
      plVar8 = (long *)(**(code **)(*plVar8 + 0xb0))(plVar8);
      (**(code **)(*plVar8 + 0xe0))(plVar8,0x10);
      plVar8 = (long *)(**(code **)(**(long **)(this + 0x1f0) + 0xb0))(*(long **)(this + 0x1f0));
      (**(code **)(*plVar8 + 0x230))(plVar8,0,0);
      glGenTextures(*(undefined4 *)(param_4 + 0x80),puVar3);
      OpenGLIdRegistry::StaticRegisterIds(*(int *)(param_4 + 0x80),puVar3);
      (**(code **)(*(long *)this + 0xe0))(this,param_4);
      if (*(long *)(param_4 + 0xa0) == 0) {
        while( true ) {
          uVar2 = FUN_052f7ad4(*(undefined4 *)(param_4 + 0x80));
          if (uVar2 <= (uint)lVar10) break;
          puVar5 = (undefined4 *)ResStreamsGroup::GetTextureDescriptor(param_4,(uint)lVar10);
          local_10 = *puVar5;
          local_c = puVar5[1];
          local_18 = 0;
          local_14 = 0;
          pRVar6 = (ResStreamFileGPULocationInfo *)
                   (**(code **)(**(long **)(this + 0x1f0) + 0xb0))(*(long **)(this + 0x1f0));
          if (*(code **)(*(long *)pRVar6 + 0x290) == RenderDevice3D::CreateTextureData) {
            uVar7 = RenderDevice3D::CreateTextureData
                              (pRVar6,auStack_28,(void *)(ulong)*(uint *)((long)puVar3 + lVar11));
          }
          else {
            uVar7 = (**(code **)(*(long *)pRVar6 + 0x290))();
          }
          *(undefined8 *)((long)pvVar4 + lVar10 * 8) = uVar7;
          lVar11 = lVar11 + 4;
          lVar10 = lVar10 + 1;
        }
      }
      else {
        while( true ) {
          uVar2 = FUN_052f7ad4(*(undefined4 *)(param_4 + 0x80));
          if (uVar2 <= (uint)lVar10) break;
          puVar5 = (undefined4 *)ResStreamsGroup::GetTextureDescriptor(param_4,(uint)lVar10);
          local_10 = *puVar5;
          local_c = puVar5[1];
          local_18 = 0;
          local_14 = 0;
          pRVar6 = (ResStreamFileGPULocationInfo *)
                   (**(code **)(**(long **)(this + 0x1f0) + 0xb0))(*(long **)(this + 0x1f0));
          if (*(code **)(*(long *)pRVar6 + 0x290) == RenderDevice3D::CreateTextureData) {
            uVar7 = RenderDevice3D::CreateTextureData
                              (pRVar6,auStack_28,(void *)(ulong)*(uint *)((long)puVar3 + lVar11));
          }
          else {
            uVar7 = (**(code **)(*(long *)pRVar6 + 0x290))();
          }
          *(undefined8 *)((long)pvVar4 + lVar10 * 8) = uVar7;
          lVar11 = lVar11 + 4;
          lVar10 = lVar10 + 1;
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


/* Sexy::AndroidResStreamsDriver::~AndroidResStreamsDriver() */

void __thiscall
Sexy::AndroidResStreamsDriver::~AndroidResStreamsDriver(AndroidResStreamsDriver *this)

{
  *(undefined ***)this = &PTR__AndroidResStreamsDriver_06a34e70;
  BaseGLResStreamsDriver::~BaseGLResStreamsDriver((BaseGLResStreamsDriver *)this);
  return;
}


/* Sexy::AndroidResStreamsDriver::~AndroidResStreamsDriver() */

void __thiscall
Sexy::AndroidResStreamsDriver::~AndroidResStreamsDriver(AndroidResStreamsDriver *this)

{
  ~AndroidResStreamsDriver(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::AndroidResStreamsDriver::AndroidResStreamsDriver() */

void __thiscall
Sexy::AndroidResStreamsDriver::AndroidResStreamsDriver(AndroidResStreamsDriver *this)

{
  BaseGLResStreamsDriver::BaseGLResStreamsDriver((BaseGLResStreamsDriver *)this);
  *(undefined ***)this = &PTR__AndroidResStreamsDriver_06a34e70;
  return;
}


/* Sexy::AndroidResStreamsDriver::ValidateTextureArray(void*, int, int&) const */

undefined8 __thiscall
Sexy::AndroidResStreamsDriver::ValidateTextureArray
          (AndroidResStreamsDriver *this,void *param_1,int param_2,int *param_3)

{
  char cVar1;
  long lVar2;
  
  *param_3 = 0;
  lVar2 = 0;
  if (param_2 != 0) {
    do {
      cVar1 = OpenGLIdRegistry::StaticIsTextureIdValid(*(uint *)((long)param_1 + lVar2 * 4));
      if (cVar1 == '\0') {
        *param_3 = (int)lVar2;
        return 1;
      }
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < (uint)param_2);
  }
  *param_3 = -1;
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidResStreamsDriver::ValidateGroupTextures(Sexy::ResStreamsGroup*) const */

void __thiscall
Sexy::AndroidResStreamsDriver::ValidateGroupTextures
          (AndroidResStreamsDriver *this,ResStreamsGroup *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_052f7ad4(*(undefined4 *)(param_1 + 0x80));
  cVar1 = ValidateTextureArray(this,*(void **)(param_1 + 0x98),iVar2,(int *)&local_c);
  if (cVar1 == '\0') {
    if (*(void **)(param_1 + 0xa0) != (void *)0x0) {
      ValidateTextureArray(this,*(void **)(param_1 + 0xa0),iVar2,(int *)&local_c);
    }
    uVar3 = FUN_0547429c(param_1);
    OutputDebugStrF((wchar_t *)"No Need to reallocate \"%s\"",uVar3);
  }
  else {
    uVar3 = FUN_0547429c(param_1);
    OutputDebugStrF((wchar_t *)"MUST REALLOCATE Texture[%d] of group \"%s\"",(ulong)local_c,uVar3);
    (**(code **)(*(long *)this + 0xe8))(this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* Sexy::AndroidResStreamsDriver::CreateDecodeTask(Sexy::IResStreamsDriver::TaskResource*, unsigned
   int, Sexy::ResStreamTextureDescriptor*, unsigned int, unsigned int, unsigned int, unsigned int)
    */

AndroidDecodeTask * __thiscall
Sexy::AndroidResStreamsDriver::CreateDecodeTask
          (AndroidResStreamsDriver *this,TaskResource *param_1,uint param_2,
          ResStreamTextureDescriptor *param_3,uint param_4,uint param_5,uint param_6,uint param_7)

{
  AndroidDecodeTask *this_00;
  
  this_00 = AndroidDecodeTask::operator_new((AndroidDecodeTask *)0x1070,(ulong)param_1);
  AndroidDecodeTask::AndroidDecodeTask
            (this_00,this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return this_00;
}

