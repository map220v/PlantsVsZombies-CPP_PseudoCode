// Class: Sexy::BaseGLResStreamsDriver


/* Sexy::BaseGLResStreamsDriver::BaseGLResStreamsDriver() */

void __thiscall Sexy::BaseGLResStreamsDriver::BaseGLResStreamsDriver(BaseGLResStreamsDriver *this)

{
  BaseResStreamsDriver::BaseResStreamsDriver((BaseResStreamsDriver *)this);
  *(undefined **)this = &DAT_06a37850;
  TextureRestitchBuffer::TextureRestitchBuffer((TextureRestitchBuffer *)(this + 0x1d0));
  return;
}


/* Sexy::BaseGLResStreamsDriver::~BaseGLResStreamsDriver() */

void __thiscall Sexy::BaseGLResStreamsDriver::~BaseGLResStreamsDriver(BaseGLResStreamsDriver *this)

{
  *(undefined **)this = &DAT_06a37850;
  TextureRestitchBuffer::~TextureRestitchBuffer((TextureRestitchBuffer *)(this + 0x1d0));
  BaseResStreamsDriver::~BaseResStreamsDriver((BaseResStreamsDriver *)this);
  return;
}


/* Sexy::BaseGLResStreamsDriver::~BaseGLResStreamsDriver() */

void __thiscall Sexy::BaseGLResStreamsDriver::~BaseGLResStreamsDriver(BaseGLResStreamsDriver *this)

{
  ~BaseGLResStreamsDriver(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::BaseGLResStreamsDriver::DestroyPool(Sexy::ResStreamsPool*) */

undefined8 __thiscall
Sexy::BaseGLResStreamsDriver::DestroyPool(BaseGLResStreamsDriver *this,ResStreamsPool *param_1)

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
  plVar2 = (long *)(**(code **)(*(long *)this + 0xd8))(this);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))();
  (**(code **)(*plVar2 + 0xe0))(plVar2,0x10);
  plVar2 = (long *)(**(code **)(*(long *)this + 0xd8))(this);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))();
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


/* Sexy::BaseGLResStreamsDriver::TextureArrayUnregister(void*, int) const */

BaseGLResStreamsDriver * __thiscall
Sexy::BaseGLResStreamsDriver::TextureArrayUnregister
          (BaseGLResStreamsDriver *this,void *param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  BaseGLResStreamsDriver *pBVar4;
  uint *puVar5;
  
  if ((param_1 != (void *)0x0) && (0 < param_2)) {
    puVar2 = (uint *)((long)param_1 + ((ulong)(param_2 - 1) + 1) * 4);
    puVar5 = param_1;
    do {
      while (*puVar5 != 0) {
        cVar3 = OpenGLIdRegistry::StaticIsTextureIdValid(*puVar5);
        if (cVar3 != '\0') {
          glDeleteTextures(param_2,param_1);
        }
        puVar1 = puVar5 + 1;
        pBVar4 = (BaseGLResStreamsDriver *)OpenGLIdRegistry::StaticUnregisterIds(1,puVar5);
        *puVar5 = 0;
        puVar5 = puVar1;
        if (puVar1 == puVar2) {
          return pBVar4;
        }
      }
      puVar5 = puVar5 + 1;
      this = (BaseGLResStreamsDriver *)0x0;
    } while (puVar5 != puVar2);
  }
  return this;
}


/* Sexy::BaseGLResStreamsDriver::TextureArrayRegister(void*, int) const */

void __thiscall
Sexy::BaseGLResStreamsDriver::TextureArrayRegister
          (BaseGLResStreamsDriver *this,void *param_1,int param_2)

{
  glGenTextures(param_2);
  OpenGLIdRegistry::StaticRegisterIds(param_2,param_1);
  return;
}


/* Sexy::BaseGLResStreamsDriver::GroupTexturesDeallocate(Sexy::ResStreamsGroup*) const */

void __thiscall
Sexy::BaseGLResStreamsDriver::GroupTexturesDeallocate
          (BaseGLResStreamsDriver *this,ResStreamsGroup *param_1)

{
  if (*(void **)(param_1 + 0x98) != (void *)0x0) {
    TextureArrayUnregister(this,*(void **)(param_1 + 0x98),*(int *)(param_1 + 0x80));
    if (*(ColourFit **)(param_1 + 0x98) != (ColourFit *)0x0) {
      EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(param_1 + 0x98));
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (*(void **)(param_1 + 0xa0) != (void *)0x0) {
    TextureArrayUnregister(this,*(void **)(param_1 + 0xa0),*(int *)(param_1 + 0x80));
    if (*(ColourFit **)(param_1 + 0xa0) != (ColourFit *)0x0) {
      EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(param_1 + 0xa0));
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  return;
}


/* Sexy::BaseGLResStreamsDriver::GroupTexturesAllocateMultiAtIndex(Sexy::ResStreamsGroup*, int)
   const */

int __thiscall
Sexy::BaseGLResStreamsDriver::GroupTexturesAllocateMultiAtIndex
          (BaseGLResStreamsDriver *this,ResStreamsGroup *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  
  pvVar3 = *(void **)(param_1 + 0xa0);
  if (pvVar3 == (void *)0x0) {
    pvVar3 = operator_new__((ulong)*(uint *)(param_1 + 0x80) << 2);
    *(void **)(param_1 + 0xa0) = pvVar3;
    if (*(int *)(param_1 + 0x80) != 0) {
      lVar2 = 0;
      do {
        *(undefined4 *)((long)pvVar3 + lVar2 * 4) = 0;
        iVar1 = (int)lVar2;
        lVar2 = lVar2 + 1;
      } while (iVar1 + 1U < *(uint *)(param_1 + 0x80));
    }
  }
  uVar4 = -(ulong)((uint)param_2 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_2 << 2;
  iVar1 = *(int *)((long)pvVar3 + uVar4);
  if (iVar1 == 0) {
    glGenTextures(1,(long)pvVar3 + uVar4);
    OpenGLIdRegistry::StaticRegisterIds(1,(uint *)(*(long *)(param_1 + 0xa0) + uVar4));
    iVar1 = *(int *)(*(long *)(param_1 + 0xa0) + uVar4);
  }
  return iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseGLResStreamsDriver::AllocateMultiTexture(Sexy::ResStreamsGroup*, int,
   Sexy::ResStreamTextureDescriptor&) const */

void __thiscall
Sexy::BaseGLResStreamsDriver::AllocateMultiTexture
          (BaseGLResStreamsDriver *this,ResStreamsGroup *param_1,int param_2,
          ResStreamTextureDescriptor *param_3)

{
  undefined4 uVar1;
  int local_14;
  int local_10;
  int iStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetAttachedTextureSize(param_3,&local_14,&local_10,&iStack_c);
  uVar1 = GroupTexturesAllocateMultiAtIndex(this,param_1,param_2);
  glPixelStorei(0xcf5,4);
  glBindTexture(0xde1,uVar1);
  glTexParameteri(0xde1,0x2802,0x812f);
  glTexParameteri(0xde1,0x2803,0x812f);
  glTexParameteri(0xde1,0x2800,0x2601);
  glTexParameteri(0xde1,0x2801,0x2601);
  glTexImage2D(0xde1,0,0x1906,local_10,local_14,0,0x1906,0x1401,0);
  glGetError();
  glPixelStorei(0xcf5,4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseGLResStreamsDriver::AllocateMultiTexture2(Sexy::ResStreamsGroup*, int,
   Sexy::ResStreamTextureDescriptor&) const */

void __thiscall
Sexy::BaseGLResStreamsDriver::AllocateMultiTexture2
          (BaseGLResStreamsDriver *this,ResStreamsGroup *param_1,int param_2,
          ResStreamTextureDescriptor *param_3)

{
  undefined4 uVar1;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetAttachedTextureSize(param_3,&iStack_14,&iStack_10,&iStack_c);
  uVar1 = GroupTexturesAllocateMultiAtIndex(this,param_1,param_2);
  glPixelStorei(0xcf5,4);
  glBindTexture(0xde1,uVar1);
  glTexParameteri(0xde1,0x2802,0x812f);
  glTexParameteri(0xde1,0x2803,0x812f);
  glGetError();
  glPixelStorei(0xcf5,4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseGLResStreamsDriver::LoadMultiTexture2(int, unsigned int, unsigned int, void*,
   Sexy::ResStreamTextureDescriptor&) const */

void __thiscall
Sexy::BaseGLResStreamsDriver::LoadMultiTexture2
          (BaseGLResStreamsDriver *this,int param_1,uint param_2,uint param_3,void *param_4,
          ResStreamTextureDescriptor *param_5)

{
  uint uVar1;
  int local_14;
  int local_10;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetAttachedTextureSize(param_5,&local_14,&local_10,(int *)&local_c);
  glGetError();
  glActiveTexture(0x84c1);
  glPixelStorei(0xcf5,4);
  glBindTexture(0xde1,(ulong)(uint)param_1);
  glTexSubImage2D(0xde1,0,0,0,local_10,local_14,0x1906,0x1401,param_4);
  uVar1 = glGetError();
  if (uVar1 != 0) {
    OutputDebugStrF((wchar_t *)
                    "==> GL Error %d in glTexSubImage2D push of alpha uncompressed texture id %d : bytes=%d"
                    ,(ulong)uVar1,(ulong)(uint)param_1,(ulong)local_c);
  }
  glActiveTexture(0x84c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::BaseGLResStreamsDriver::PushCompressedTexture(Sexy::ResStreamTextureDescriptor&, unsigned
   int, unsigned int, unsigned int, unsigned int, unsigned char*) */

void __thiscall
Sexy::BaseGLResStreamsDriver::PushCompressedTexture
          (BaseGLResStreamsDriver *this,ResStreamTextureDescriptor *param_1,uint param_2,
          uint param_3,uint param_4,uint param_5,uchar *param_6)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)param_5;
  uVar2 = (ulong)param_3;
  glPixelStorei(0xcf5,4,param_2,uVar2,param_4);
  glBindTexture(0xde1,uVar2);
  glGetError();
  if (param_2 == 0x1908) {
    glTexSubImage2D(0xde1,0,0,0,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),0x1908,0x1401,
                    param_6);
  }
  else {
    if (param_5 == 0x12bfd) {
      param_5 = 0x12fc0;
      uVar3 = 0x12fc0;
    }
    glCompressedTexImage2D
              (0xde1,0,param_2,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),0,param_5,param_6
              );
  }
  uVar1 = glGetError();
  if (uVar1 != 0) {
    OutputDebugStrF((wchar_t *)
                    "==> GL Error %d in glCompressedTexSubImage2D push of compressed texture id %d : bytes=%d colorType=%d"
                    ,(ulong)uVar1,uVar2,uVar3,(ulong)param_2);
    return;
  }
  return;
}


/* Sexy::BaseGLResStreamsDriver::ExtractPalletAlphaTextureData(unsigned char const*, unsigned char,
   unsigned char*, int) */

void __thiscall
Sexy::BaseGLResStreamsDriver::ExtractPalletAlphaTextureData
          (BaseGLResStreamsDriver *this,uchar *param_1,uchar param_2,uchar *param_3,int param_4)

{
  uint uVar1;
  uchar uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uchar uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  
  uVar6 = (ulong)param_2;
  if ((param_3 == (uchar *)0x0 || param_4 < 1) || (param_1 == (uchar *)0x0)) {
    return;
  }
  iVar4 = 2;
  iVar9 = 1;
  iVar7 = 0;
  if (2 < param_2) {
    do {
      iVar7 = iVar9;
      iVar4 = iVar4 * 2;
      iVar9 = iVar7 + 1;
    } while (iVar4 < (int)(uint)param_2);
  }
  iVar4 = 0;
  uVar8 = 0;
  uVar12 = uVar6;
LAB_053e67e0:
  uVar11 = (uint)uVar12;
  uVar5 = (uint)param_1[uVar6] << (ulong)(uVar8 & 0x1f);
  uVar13 = (iVar7 - 7U) + uVar8;
  if ((int)(8 - uVar8) < iVar9) goto LAB_053e6870;
  do {
    uVar8 = uVar8 + iVar9;
    bVar3 = (byte)((int)(uVar5 & 0xff) >> (7U - iVar7 & 0x1f));
    while( true ) {
      iVar4 = iVar4 + 1;
      uVar2 = param_1[bVar3];
      uVar10 = '\0';
      if (uVar2 != '\0') {
        uVar10 = 0xff;
        if (uVar2 != '\x0f') {
          uVar10 = uVar2 * '\x10' + '\x01';
        }
      }
      *param_3 = uVar10;
      param_3 = param_3 + 1;
      if (param_4 <= iVar4) {
        return;
      }
      if (uVar8 != 8) goto LAB_053e67e0;
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulong)uVar11;
      uVar8 = 0;
      uVar6 = (ulong)(int)uVar11;
      uVar5 = (uint)param_1[uVar6];
      uVar13 = iVar7 - 7U;
      if (iVar9 < 9) break;
LAB_053e6870:
      uVar12 = (ulong)(uVar11 + 1);
      uVar1 = uVar8 & 0x1f;
      uVar8 = uVar13 & 0xff;
      uVar6 = (ulong)(int)(uVar11 + 1);
      bVar3 = (byte)(((int)(uVar5 & 0xff) >> uVar1 & 0xffU) << (ulong)(uVar13 & 0x1f)) |
              (byte)((int)(uint)param_1[uVar6] >> (8 - uVar8 & 0x1f));
    }
  } while( true );
}


/* Sexy::BaseGLResStreamsDriver::ExtractNonPalletAlphaTextureData(unsigned char const*, unsigned
   char*, int) */

void __thiscall
Sexy::BaseGLResStreamsDriver::ExtractNonPalletAlphaTextureData
          (BaseGLResStreamsDriver *this,uchar *param_1,uchar *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  if ((param_2 != (uchar *)0x0 && 0 < param_3) && (param_1 != (uchar *)0x0)) {
    lVar3 = 0;
    iVar2 = 0;
    iVar4 = 0;
    do {
      uVar1 = 7 - iVar2;
      iVar2 = iVar2 + 1;
      param_2[lVar3] = -(((uint)param_1[iVar4] & 1 << (ulong)(uVar1 & 0x1f)) != 0);
      if (iVar2 == 8) {
        iVar4 = iVar4 + 1;
        iVar2 = 0;
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < param_3);
  }
  return;
}


/* Sexy::BaseGLResStreamsDriver::ExtractAlphaTextureData(unsigned char const*, int) */

uchar * __thiscall
Sexy::BaseGLResStreamsDriver::ExtractAlphaTextureData
          (BaseGLResStreamsDriver *this,uchar *param_1,int param_2)

{
  uchar *puVar1;
  
  if ((param_1 != (uchar *)0x0) && (0 < param_2)) {
    puVar1 = operator_new__((long)param_2);
    if (*param_1 != '\0') {
      ExtractPalletAlphaTextureData(this,param_1 + 1,*param_1,puVar1,param_2);
      return puVar1;
    }
    ExtractNonPalletAlphaTextureData(this,param_1 + 1,puVar1,param_2);
    return puVar1;
  }
  return (uchar *)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseGLResStreamsDriver::LoadMultiTexture(int, void*, Sexy::ResStreamTextureDescriptor&) */

void __thiscall
Sexy::BaseGLResStreamsDriver::LoadMultiTexture
          (BaseGLResStreamsDriver *this,int param_1,void *param_2,
          ResStreamTextureDescriptor *param_3)

{
  uint uVar1;
  ColourFit *this_00;
  int local_14;
  int local_10;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetAttachedTextureSize(param_3,&local_14,&local_10,(int *)&local_c);
  this_00 = (ColourFit *)ExtractAlphaTextureData(this,param_2,local_10 * local_14);
  if (this_00 != (ColourFit *)0x0) {
    glGetError();
    glActiveTexture(0x84c1);
    glPixelStorei(0xcf5,4);
    glBindTexture(0xde1,(ulong)(uint)param_1);
    glTexSubImage2D(0xde1,0,0,0,local_10,local_14,0x1906,0x1401,this_00);
    uVar1 = glGetError();
    if (uVar1 != 0) {
      OutputDebugStrF((wchar_t *)
                      "==> GL Error %d in glTexSubImage2D push of alpha uncompressed texture id %d : bytes=%d"
                      ,(ulong)uVar1,(ulong)(uint)param_1,(ulong)local_c);
    }
    glActiveTexture(0x84c0);
    EATextSquish::ColourFit::~ColourFit(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::BaseGLResStreamsDriver::PushCompressedTextureMulti(Sexy::ResStreamTextureDescriptor&,
   unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */

void __thiscall
Sexy::BaseGLResStreamsDriver::PushCompressedTextureMulti
          (BaseGLResStreamsDriver *this,ResStreamTextureDescriptor *param_1,uint param_2,
          uint param_3,uint param_4,uint param_5,uint param_6,uchar *param_7)

{
  uint uVar1;
  
  PushCompressedTexture(this,param_1,param_2,param_3,param_4,param_5,param_7);
  if (param_6 <= param_5) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  if (0x92 < uVar1) {
    if (uVar1 < 0x96) {
      LoadMultiTexture(this,param_4,param_7 + param_5,param_1);
      return;
    }
    if (uVar1 == 0x96) {
      LoadMultiTexture2(this,param_4,param_2,param_5,param_7 + param_5,param_1);
      return;
    }
  }
  OutputDebugStrF((wchar_t *)"Invalid packed multi texture format");
  return;
}


/* Sexy::BaseGLResStreamsDriver::ClearCompressedTextureBuffer() */

void __thiscall
Sexy::BaseGLResStreamsDriver::ClearCompressedTextureBuffer(BaseGLResStreamsDriver *this)

{
  TextureRestitchBuffer::Clear((TextureRestitchBuffer *)(this + 0x1d0),true);
  return;
}


/* Sexy::BaseGLResStreamsDriver::DecodeCompressedTextureBlock(Sexy::ResStreamTextureDescriptor&,
   unsigned int, unsigned int, unsigned int, unsigned char*, unsigned int, unsigned int, unsigned
   int) */

void __thiscall
Sexy::BaseGLResStreamsDriver::DecodeCompressedTextureBlock
          (BaseGLResStreamsDriver *this,ResStreamTextureDescriptor *param_1,uint param_2,
          uint param_3,uint param_4,uchar *param_5,uint param_6,uint param_7,uint param_8)

{
  char cVar1;
  uint uVar2;
  uchar *puVar3;
  
  cVar1 = FUN_053e61c4(this[0x1d1]);
  if (cVar1 == '\0') {
    if (param_8 <= param_6) {
      PushCompressedTextureMulti(this,param_1,param_2,param_3,param_4,param_7,param_8,param_5);
      return;
    }
    *(int *)(this + 0x1c8) = *(int *)(this + 0x1c8) + 1;
    TextureRestitchBuffer::Initialize((TextureRestitchBuffer *)(this + 0x1d0),param_8);
    TextureRestitchBuffer::Add
              ((TextureRestitchBuffer *)(this + 0x1d0),*(int *)(this + 0x1c8),param_5,param_6);
    uVar2 = FUN_053e61c8(*(undefined4 *)(this + 0x1e8));
  }
  else {
    TextureRestitchBuffer::Add
              ((TextureRestitchBuffer *)(this + 0x1d0),*(int *)(this + 0x1c8),param_5,param_6);
    uVar2 = FUN_053e61c8(*(undefined4 *)(this + 0x1e8));
  }
  if (uVar2 < param_8) {
    return;
  }
  puVar3 = (uchar *)FUN_053e61cc(*(undefined8 *)(this + 0x1d8));
  PushCompressedTextureMulti(this,param_1,param_2,param_3,param_4,param_7,param_8,puVar3);
  TextureRestitchBuffer::Clear((TextureRestitchBuffer *)(this + 0x1d0),true);
  return;
}


/* Sexy::BaseGLResStreamsDriver::IsCompressedFormatAvailable(int) const */

BaseGLResStreamsDriver __thiscall
Sexy::BaseGLResStreamsDriver::IsCompressedFormatAvailable(BaseGLResStreamsDriver *this,int param_1)

{
  if (param_1 < 0x26) {
    if (0x22 < param_1) {
      return this[0x1c3];
    }
    if (0x1d < param_1) {
      if (param_1 < 0x20) {
LAB_053e6d68:
        return this[0x1c1];
      }
      if (param_1 == 0x20) goto LAB_053e6d58;
    }
  }
  else {
    if (param_1 == 0x93) {
LAB_053e6d58:
      return this[0x1c0];
    }
    if (param_1 < 0x94) {
      if (param_1 < 0x28) {
        return this[0x1c2];
      }
    }
    else {
      if (param_1 == 0x94) goto LAB_053e6d68;
      if (param_1 == 0x96) goto LAB_053e6d58;
    }
  }
  return (BaseGLResStreamsDriver)0x0;
}

