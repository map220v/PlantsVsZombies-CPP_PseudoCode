// Class: Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::TextureData::ReleaseTextures() */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::TextureData::ReleaseTextures(TextureData *this)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_10;
  long local_8;
  
  uVar6 = *(undefined8 *)(this + 8);
  lVar7 = 0;
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_052d9e18(uVar6,*(undefined8 *)(this + 0x10));
  if (0 < iVar2) {
    do {
      puVar3 = (undefined4 *)FUN_052d9a54(uVar6,lVar7);
      cVar1 = FUN_052da5bc(*puVar3);
      if (cVar1 != '\0') {
        (**(code **)(**(long **)this + 0x2e0))(*(long **)this,this,puVar3);
        puVar5 = (undefined8 *)FUN_052d9a54(*(undefined8 *)(this + 8),lVar7);
        GLTexHolder::GLTexHolder((GLTexHolder *)&local_10,0);
        uVar6 = *(undefined8 *)(this + 8);
        *puVar5 = local_10;
        puVar3 = (undefined4 *)FUN_052d9a54(uVar6,lVar7);
      }
      cVar1 = FUN_052da5bc(puVar3[4]);
      if (cVar1 != '\0') {
        (**(code **)(**(long **)this + 0x2e0))(*(long **)this,this,puVar3 + 4);
        lVar4 = FUN_052d9a54(*(undefined8 *)(this + 8),lVar7);
        GLTexHolder::GLTexHolder((GLTexHolder *)&local_10,0);
        uVar6 = *(undefined8 *)(this + 8);
        *(undefined8 *)(lVar4 + 0x10) = local_10;
        puVar3 = (undefined4 *)FUN_052d9a54(uVar6,lVar7);
      }
      cVar1 = FUN_052da5bc(puVar3[6]);
      if (cVar1 != '\0') {
        (**(code **)(**(long **)this + 0x2e0))(*(long **)this,this,puVar3 + 6);
        lVar4 = FUN_052d9a54(*(undefined8 *)(this + 8),lVar7);
        GLTexHolder::GLTexHolder((GLTexHolder *)&local_10,0);
        uVar6 = *(undefined8 *)(this + 8);
        *(undefined8 *)(lVar4 + 0x18) = local_10;
      }
      lVar7 = lVar7 + 1;
      iVar2 = FUN_052d9e18(uVar6,*(undefined8 *)(this + 0x10));
    } while ((int)lVar7 < iVar2);
  }
  std::
  vector<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece,std::allocator<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece>>
  ::clear((vector<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece,std::allocator<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece>>
           *)(this + 8));
  (**(code **)(**(long **)this + 0x2e8))(*(long **)this,this,this + 0x20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::TextureData::TextureData(Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,
   Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo, Sexy::AndroidRenderDeviceES20>*) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::TextureData::TextureData(TextureData *this,BaseRenderDevice *param_1)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  GLExtraRenderDataInfo::GLExtraRenderDataInfo((GLExtraRenderDataInfo *)(this + 0x20));
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x44) = 0x40;
  *(undefined4 *)(this + 0x48) = 0x40;
  *(BaseRenderDevice **)this = param_1;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x2c) = 0xffffffff;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  this[0x30] = (TextureData)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::TextureData::Blt(Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,
   Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo, Sexy::AndroidRenderDeviceES20>*,
   Sexy::MemoryImage*, int, float, float, Sexy::TRect<int> const&, Sexy::Color const&) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::TextureData::Blt(TextureData *this,BaseRenderDevice *param_1,MemoryImage *param_2,int param_3,
                  float param_4,float param_5,TRect *param_6,Color *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_b0;
  int local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  AndroidGL20Vertex aAStack_88 [32];
  AndroidGL20Vertex aAStack_68 [32];
  AndroidGL20Vertex aAStack_48 [32];
  AndroidGL20Vertex aAStack_28 [32];
  long local_8;
  
  iVar3 = *(int *)param_6;
  iVar7 = *(int *)(param_6 + 4);
  local_8 = ___stack_chk_guard;
  iVar1 = iVar7 + *(int *)(param_6 + 0xc);
  iVar2 = iVar3 + *(int *)(param_6 + 8);
  uVar4 = AndroidGL20Vertex::PackColor
                    (*(int *)param_7,*(int *)(param_7 + 4),*(int *)(param_7 + 8),
                     *(int *)(param_7 + 0xc));
  if ((iVar7 < iVar1) && (iVar3 < iVar2)) {
    fVar9 = (float)BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetBltDepth
                             (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)
                               (param_1 + 0x80a8));
    uVar5 = AndroidGL20Vertex::TexCoordOffset();
    do {
      fVar12 = param_4;
      iVar8 = iVar3;
      do {
        local_b0 = iVar2 - iVar8;
        local_ac = iVar1 - iVar7;
        GLTexHolder::GLTexHolder((GLTexHolder *)&local_98);
        uVar6 = FUN_052db1bc(this,param_2 + 0x38,param_2 + 0x3c,iVar8,iVar7,&local_b0,&local_ac,
                             &local_a8,&local_a4,&local_a0,&local_9c,(GLTexHolder *)&local_98);
        FastCurve::SetOutRange((FastCurve *)&local_90,1.0,1.0);
        BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
        ::SetTextureStack(local_90,local_8c,param_1,uVar6,local_98);
        fVar11 = fVar12 + *(float *)(param_1 + 8);
        fVar10 = param_5 + *(float *)(param_1 + 8);
        AndroidGL20Vertex::AndroidGL20Vertex(aAStack_88,fVar11,fVar10,fVar9,local_a8,local_a4,uVar4)
        ;
        AndroidGL20Vertex::AndroidGL20Vertex
                  (aAStack_68,fVar11 + (float)local_b0,fVar10,fVar9,local_a0,local_a4,uVar4);
        AndroidGL20Vertex::AndroidGL20Vertex
                  (aAStack_48,fVar11,fVar10 + (float)local_ac,fVar9,local_a8,local_9c,uVar4);
        AndroidGL20Vertex::AndroidGL20Vertex
                  (aAStack_28,fVar11 + (float)local_b0,fVar10 + (float)local_ac,fVar9,local_a0,
                   local_9c,uVar4);
        FUN_052dc778(param_1 + 0x80a8,aAStack_88,4,0x1c4,*(undefined4 *)(param_1 + 0x2c),uVar5);
        BufferedDrawPrimitive
                  ((BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
                    *)param_1,5,2,aAStack_88,*(int *)(param_1 + 0x2c),*(uint *)(param_1 + 0x30));
        iVar8 = iVar8 + local_b0;
        fVar12 = fVar12 + (float)local_b0;
      } while (iVar8 < iVar2);
      iVar7 = iVar7 + local_ac;
      param_5 = param_5 + (float)local_ac;
    } while (iVar7 < iVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::TextureData::~TextureData() */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::TextureData::~TextureData(TextureData *this)

{
  ReleaseTextures(this);
  std::
  vector<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece,std::allocator<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece>>
  ::~vector((vector<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece,std::allocator<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece>>
             *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::TextureData::BltTransformed(Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,
   Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo, Sexy::AndroidRenderDeviceES20>*,
   Sexy::MemoryImage*, int, Sexy::SexyMatrix3 const&, Sexy::TRect<int> const&, Sexy::Color const&,
   Sexy::TRect<int> const*, float, float, bool) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::TextureData::BltTransformed
          (TextureData *this,BaseRenderDevice *param_1,MemoryImage *param_2,int param_3,
          SexyMatrix3 *param_4,TRect *param_5,Color *param_6,TRect *param_7,float param_8,
          float param_9,bool param_10)

{
  ResistenceValueInfo *pRVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  PopTransformMatrix *pPVar14;
  SexyVector2 *this_00;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int local_e1c;
  int local_d90;
  int local_d8c;
  float local_d88;
  float local_d84;
  float local_d80;
  float local_d7c;
  undefined8 local_d78;
  float local_d70;
  float local_d6c;
  float local_d68;
  float local_d64;
  FastCurve local_d60 [8];
  float fStack_d58;
  float fStack_d54;
  FastCurve local_d50 [8];
  float fStack_d48;
  float fStack_d44;
  undefined8 local_d40;
  undefined8 local_d38;
  undefined8 local_d30;
  undefined8 uStack_d28;
  ResistenceValueInfo aRStack_d20 [8];
  AndroidGL20Vertex aAStack_d18 [32];
  AndroidGL20Vertex aAStack_cf8 [32];
  AndroidGL20Vertex aAStack_cd8 [32];
  AndroidGL20Vertex aAStack_cb8 [32];
  VertexTList aVStack_c98 [3216];
  long local_8;
  
  iVar5 = *(int *)param_5;
  local_e1c = *(int *)(param_5 + 4);
  local_8 = ___stack_chk_guard;
  iVar2 = *(int *)(param_5 + 8) + iVar5;
  iVar3 = *(int *)(param_5 + 0xc) + local_e1c;
  if (param_10) {
    fVar23 = 0.0;
    fVar26 = (float)-*(int *)(param_5 + 8) * 0.5;
    fVar24 = (float)-*(int *)(param_5 + 0xc) * 0.5;
  }
  else {
    fVar24 = 0.0;
    fVar23 = -*(float *)(param_1 + 8);
    fVar26 = fVar24;
  }
  uVar9 = AndroidGL20Vertex::PackColor
                    (*(int *)param_6,*(int *)(param_6 + 4),*(int *)(param_6 + 8),
                     *(int *)(param_6 + 0xc));
  if ((local_e1c < iVar3) && (iVar5 < iVar2)) {
    fVar15 = (float)BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetBltDepth
                              (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)
                                (param_1 + 0x80a8));
    do {
      iVar4 = iVar5;
      fVar25 = fVar26;
      do {
        local_d90 = iVar2 - iVar4;
        local_d8c = iVar3 - local_e1c;
        GLTexHolder::GLTexHolder((GLTexHolder *)&local_d78);
        uVar12 = FUN_052db1bc(this,param_2 + 0x38,param_2 + 0x3c,iVar4,local_e1c,&local_d90,
                              &local_d8c,&local_d88,&local_d84,&local_d80,&local_d7c,
                              (GLTexHolder *)&local_d78);
        FastCurve::SetOutRange((FastCurve *)&local_d68,1.0,1.0);
        BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
        ::SetTextureStack(local_d68,local_d64,param_1,uVar12,local_d78);
        FastCurve::SetOutRange(local_d60,fVar25,fVar24);
        FastCurve::SetOutRange((FastCurve *)&fStack_d58,fVar25 + (float)local_d90,fVar24);
        FastCurve::SetOutRange(local_d50,fVar25,fVar24 + (float)local_d8c);
        FastCurve::SetOutRange
                  ((FastCurve *)&fStack_d48,fVar25 + (float)local_d90,fVar24 + (float)local_d8c);
        this_00 = (SexyVector2 *)&local_d40;
        do {
          pRVar1 = (ResistenceValueInfo *)(this_00 + 8);
          ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                    ((ResistenceValueInfo *)this_00);
          this_00 = (SexyVector2 *)pRVar1;
        } while (pRVar1 != aRStack_d20);
        fVar20 = *(float *)param_4;
        fVar6 = *(float *)(param_4 + 0xc);
        fVar7 = *(float *)(param_4 + 0x10);
        fVar8 = *(float *)(param_4 + 4);
        fVar16 = (param_8 + *(float *)(param_4 + 8)) - fVar23;
        fVar17 = (param_9 + *(float *)(param_4 + 0x14)) - fVar23;
        fVar18 = (param_8 + *(float *)(param_4 + 8)) - fVar23;
        fVar19 = (param_9 + *(float *)(param_4 + 0x14)) - fVar23;
        fVar21 = fVar16 + local_d60._0_4_ * fVar20 + local_d60._4_4_ * fVar8;
        fVar22 = fVar17 + local_d60._0_4_ * fVar6 + local_d60._4_4_ * fVar7;
        local_d40 = CONCAT44(fVar22,fVar21);
        local_d38 = CONCAT44(fVar19 + fStack_d58 * fVar6 + fStack_d54 * fVar7,
                             fVar18 + fStack_d58 * fVar20 + fStack_d54 * fVar8);
        uStack_d28 = CONCAT44(fVar19 + fStack_d48 * fVar6 + fStack_d44 * fVar7,
                              fVar18 + fStack_d48 * fVar20 + fStack_d44 * fVar8);
        local_d30 = CONCAT44(fVar17 + local_d50._0_4_ * fVar6 + local_d50._4_4_ * fVar7,
                             fVar16 + local_d50._0_4_ * fVar20 + local_d50._4_4_ * fVar8);
        AndroidGL20Vertex::AndroidGL20Vertex
                  (aAStack_d18,fVar21,fVar22,fVar15,local_d88,local_d84,uVar9);
        AndroidGL20Vertex::AndroidGL20Vertex
                  (aAStack_cf8,(float)local_d38,local_d38._4_4_,fVar15,local_d80,local_d84,uVar9);
        AndroidGL20Vertex::AndroidGL20Vertex
                  (aAStack_cd8,(float)local_d30,local_d30._4_4_,fVar15,local_d88,local_d7c,uVar9);
        AndroidGL20Vertex::AndroidGL20Vertex
                  (aAStack_cb8,(float)uStack_d28,uStack_d28._4_4_,fVar15,local_d80,local_d7c,uVar9);
        if ((param_7 == (TRect *)0x0) ||
           ((((iVar11 = *(int *)param_7, iVar11 == 0 && (*(int *)(param_7 + 4) == 0)) &&
             (*(int *)(param_7 + 8) == *(int *)(param_1 + 0x3c))) &&
            (*(int *)(param_7 + 0xc) == *(int *)(param_1 + 0x40))))) {
LAB_052e0cfc:
          SexyVector2::operator-((SexyVector2 *)&local_d38,(SexyVector2 *)&local_d40);
          SexyVector2::operator-((SexyVector2 *)&local_d30,(SexyVector2 *)&local_d40);
          uVar10 = AndroidGL20Vertex::TexCoordOffset();
          FUN_052dc778(param_1 + 0x80a8,aAStack_d18,4,0x1c4,*(undefined4 *)(param_1 + 0x2c),uVar10);
          BufferedDrawPrimitive
                    ((BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
                      *)param_1,5,2,aAStack_d18,*(int *)(param_1 + 0x2c),*(uint *)(param_1 + 0x30));
        }
        else {
          if ((BltTransformed(Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>*,Sexy::MemoryImage*,int,Sexy::SexyMatrix3_const&,Sexy::TRect<int>const&,Sexy::Color_const&,Sexy::TRect<int>const*,float,float,bool)
               ::aNewClipRect & 1) == 0) {
            iVar11 = __cxa_guard_acquire(&BltTransformed(Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>*,Sexy::MemoryImage*,int,Sexy::SexyMatrix3_const&,Sexy::TRect<int>const&,Sexy::Color_const&,Sexy::TRect<int>const*,float,float,bool)
                                          ::aNewClipRect);
            if (iVar11 == 0) {
              iVar11 = *(int *)param_7;
            }
            else {
              Insets::Insets((Insets *)
                             &BltTransformed(Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>*,Sexy::MemoryImage*,int,Sexy::SexyMatrix3_const&,Sexy::TRect<int>const&,Sexy::Color_const&,Sexy::TRect<int>const*,float,float,bool)
                              ::aNewClipRect);
              __cxa_guard_release(&BltTransformed(Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>*,Sexy::MemoryImage*,int,Sexy::SexyMatrix3_const&,Sexy::TRect<int>const&,Sexy::Color_const&,Sexy::TRect<int>const*,float,float,bool)
                                   ::aNewClipRect);
              iVar11 = *(int *)param_7;
            }
          }
          FastCurve::SetOutRange((FastCurve *)&local_d70,(float)iVar11,(float)*(int *)(param_7 + 4))
          ;
          fVar20 = (float)(*(int *)(param_7 + 4) + *(int *)(param_7 + 0xc));
          FastCurve::SetOutRange
                    ((FastCurve *)&local_d68,(float)(*(int *)param_7 + *(int *)(param_7 + 8)),fVar20
                    );
          lVar13 = FUN_052d9f20(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
          if (lVar13 != 0) {
            pPVar14 = (PopTransformMatrix *)
                      std::vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>>::back
                                ((vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>> *)
                                 (param_1 + 0x48));
            local_d70 = (float)PopTransformMatrix::operator*(pPVar14,(SexyVector2 *)&local_d70);
            local_d6c = fVar20;
            pPVar14 = (PopTransformMatrix *)
                      std::vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>>::back
                                ((vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>> *)
                                 (param_1 + 0x48));
            local_d68 = (float)PopTransformMatrix::operator*(pPVar14,(SexyVector2 *)&local_d68);
            local_d64 = fVar20;
          }
          if ((((((local_d70 <= (float)local_d40) && ((float)local_d40 < local_d68)) &&
                ((local_d6c <= local_d40._4_4_ &&
                 ((local_d40._4_4_ < local_d64 && (local_d70 <= (float)local_d38)))))) &&
               ((float)local_d38 < local_d68)) &&
              ((((local_d6c <= local_d38._4_4_ && (local_d38._4_4_ < local_d64)) &&
                (local_d70 <= (float)local_d30)) &&
               (((float)local_d30 < local_d68 && (local_d6c <= local_d30._4_4_)))))) &&
             (((local_d30._4_4_ < local_d64 &&
               ((local_d70 <= (float)uStack_d28 && ((float)uStack_d28 < local_d68)))) &&
              ((local_d6c <= uStack_d28._4_4_ && (uStack_d28._4_4_ < local_d64))))))
          goto LAB_052e0cfc;
          BltTransformed(Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>*,Sexy::MemoryImage*,int,Sexy::SexyMatrix3_const&,Sexy::TRect<int>const&,Sexy::Color_const&,Sexy::TRect<int>const*,float,float,bool)
          ::aNewClipRect = (int)local_d70;
          DAT_06bbf904 = (int)local_d6c;
          DAT_06bbf908 = (int)(local_d68 - local_d70);
          DAT_06bbf90c = (int)(local_d64 - local_d6c);
          uVar10 = AndroidGL20Vertex::TexCoordOffset();
          FUN_052dc778(param_1 + 0x80a8,aAStack_d18,4,0x1c4,*(undefined4 *)(param_1 + 0x2c),uVar10);
          VertexTList::VertexTList(aVStack_c98);
          VertexTList::push_back(aVStack_c98,aAStack_d18);
          VertexTList::push_back(aVStack_c98,aAStack_cf8);
          VertexTList::push_back(aVStack_c98,aAStack_cb8);
          VertexTList::push_back(aVStack_c98,aAStack_cd8);
          DrawPolyClipped((BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
                           *)param_1,
                          (TRect *)&BltTransformed(Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>*,Sexy::MemoryImage*,int,Sexy::SexyMatrix3_const&,Sexy::TRect<int>const&,Sexy::Color_const&,Sexy::TRect<int>const*,float,float,bool)
                                    ::aNewClipRect,aVStack_c98);
          VertexTList::~VertexTList(aVStack_c98);
        }
        iVar4 = iVar4 + local_d90;
        fVar25 = fVar25 + (float)local_d90;
      } while (iVar4 < iVar2);
      local_e1c = local_e1c + local_d8c;
      fVar24 = fVar24 + (float)local_d8c;
    } while (local_e1c < iVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::TextureData::CreateTextureDimensions(Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,
   Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo, Sexy::AndroidRenderDeviceES20>*,
   Sexy::MemoryImage*) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::TextureData::CreateTextureDimensions
          (TextureData *this,BaseRenderDevice *param_1,MemoryImage *param_2)

{
  vector<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece,std::allocator<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece>>
  *this_00;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  BaseRenderDevice BVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  int iVar15;
  long lVar16;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(uint *)(this + 0x68) & 0x60) == 0) {
    iVar7 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_2);
    iVar8 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_2);
    *(int *)(this + 0x44) = iVar7;
    *(int *)(this + 0x48) = iVar8;
    BVar4 = param_1[0x28];
    if ((*(uint *)(this + 0x68) >> 4 & 1) != 0) {
      BVar4 = param_1[0x29];
    }
    (**(code **)(*(long *)param_1 + 0x2b8))(param_1,this + 0x44,this + 0x48,0,BVar4);
    local_20 = *(int *)(this + 0x44);
    local_24 = *(int *)(this + 0x48);
    iVar6 = 0;
    if (local_20 != 0) {
      iVar6 = iVar7 / local_20;
    }
    local_28 = iVar7 - iVar6 * local_20;
    if (local_28 < 1) {
      local_1c = 0;
      if (local_24 != 0) {
        local_1c = iVar8 / local_24;
      }
      local_1c = local_1c * local_24;
      local_28 = local_20;
      iVar6 = local_24;
    }
    else {
      (**(code **)(*(long *)param_1 + 0x2b8))
                (param_1,&local_28,&local_24,1,BVar4,*(undefined4 *)(this + 0x68));
      iVar6 = *(int *)(this + 0x48);
      local_20 = *(int *)(this + 0x44);
      local_1c = 0;
      if (iVar6 != 0) {
        local_1c = iVar8 / iVar6;
      }
      local_1c = local_1c * iVar6;
    }
    local_1c = iVar8 - local_1c;
    if (0 < local_1c) {
      (**(code **)(*(long *)param_1 + 0x2b8))
                (param_1,&local_20,&local_1c,1,BVar4,*(undefined4 *)(this + 0x68));
      iVar6 = local_1c;
    }
    local_1c = iVar6;
    this_00 = (vector<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece,std::allocator<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece>>
               *)(this + 8);
    local_18 = local_28;
    local_14 = local_1c;
    (**(code **)(*(long *)param_1 + 0x2b8))
              (param_1,&local_18,&local_14,1,BVar4,*(undefined4 *)(this + 0x68));
    iVar6 = *(int *)(this + 0x44);
    iVar1 = *(int *)(this + 0x48);
    iVar9 = 0;
    if (iVar1 != 0) {
      iVar9 = (iVar1 + iVar8 + -1) / iVar1;
    }
    *(int *)(this + 0x40) = iVar9;
    iVar1 = 0;
    if (iVar6 != 0) {
      iVar1 = (iVar6 + iVar7 + -1) / iVar6;
    }
    *(int *)(this + 0x3c) = iVar1;
    std::
    vector<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece,std::allocator<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece>>
    ::resize(this_00,(long)(iVar1 * iVar9));
    lVar13 = 0;
    while( true ) {
      uVar14 = *(undefined8 *)(this + 8);
      iVar9 = FUN_052d9e18(uVar14,*(undefined8 *)(this + 0x10));
      iVar1 = local_24;
      iVar6 = local_28;
      if (iVar9 <= (int)lVar13) break;
      puVar11 = (undefined8 *)FUN_052d9a54(uVar14,lVar13);
      GLTexHolder::GLTexHolder((GLTexHolder *)&local_10,0);
      *puVar11 = local_10;
      GLTexHolder::GLTexHolder((GLTexHolder *)&local_10,0);
      puVar11[2] = local_10;
      GLTexHolder::GLTexHolder((GLTexHolder *)&local_10,0);
      uVar10 = *(undefined4 *)(this + 0x44);
      uVar2 = *(undefined4 *)(this + 0x48);
      puVar11[3] = local_10;
      *(undefined4 *)((long)puVar11 + 0x24) = uVar10;
      *(undefined4 *)(puVar11 + 5) = uVar2;
      lVar13 = lVar13 + 1;
    }
    iVar3 = *(int *)(this + 0x3c);
    iVar15 = iVar3 + -1;
    if (iVar15 < iVar9) {
      lVar13 = (long)iVar15;
      do {
        iVar15 = iVar15 + iVar3;
        lVar12 = FUN_052d9a54(uVar14,lVar13);
        *(int *)(lVar12 + 0x24) = iVar6;
        *(int *)(lVar12 + 0x28) = iVar1;
        lVar13 = lVar13 + iVar3;
      } while (iVar15 < iVar9);
    }
    iVar1 = local_1c;
    iVar6 = local_20;
    uVar5 = iVar3 * (*(int *)(this + 0x40) + -1);
    if ((int)uVar5 < iVar9) {
      lVar13 = (long)(int)uVar5 + 1;
      lVar12 = (long)(int)uVar5;
      lVar16 = lVar13;
      while( true ) {
        lVar12 = FUN_052d9a54(uVar14,lVar12);
        *(int *)(lVar12 + 0x24) = iVar6;
        *(int *)(lVar12 + 0x28) = iVar1;
        if (lVar16 == lVar13 + (ulong)(~uVar5 + iVar9)) break;
        lVar12 = lVar16;
        lVar16 = lVar16 + 1;
      }
    }
    lVar13 = std::
             vector<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece,std::allocator<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece>>
             ::back(this_00);
    *(int *)(lVar13 + 0x24) = local_18;
    lVar13 = std::
             vector<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece,std::allocator<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece>>
             ::back(this_00);
    iVar6 = *(int *)(this + 0x44);
    iVar1 = *(int *)(this + 0x48);
    *(int *)(lVar13 + 0x28) = local_14;
    *(float *)(this + 0x5c) = (float)iVar7 / (float)iVar6;
    *(float *)(this + 0x60) = (float)iVar8 / (float)iVar1;
  }
  else {
    uVar10 = Image::GetCelWidth((Image *)param_2);
    *(undefined4 *)(this + 0x44) = uVar10;
    *(undefined4 *)(this + 0x34) = uVar10;
    uVar10 = Image::GetCelHeight((Image *)param_2);
    *(undefined4 *)(this + 0x48) = uVar10;
    *(undefined4 *)(this + 0x38) = uVar10;
    *(undefined4 *)(this + 0x40) = 1;
    *(undefined4 *)(this + 0x3c) = 1;
    *(undefined4 *)(this + 0x60) = 0x3f800000;
    *(undefined4 *)(this + 0x5c) = 0x3f800000;
    std::
    vector<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece,std::allocator<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece>>
    ::resize((vector<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece,std::allocator<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece>>
              *)(this + 8),1);
    puVar11 = (undefined8 *)FUN_052d9a54(*(undefined8 *)(this + 8),0);
    GLTexHolder::GLTexHolder((GLTexHolder *)&local_10,0);
    *puVar11 = local_10;
    GLTexHolder::GLTexHolder((GLTexHolder *)&local_10,0);
    puVar11[2] = local_10;
    GLTexHolder::GLTexHolder((GLTexHolder *)&local_10,0);
    puVar11[3] = local_10;
    uVar10 = Image::GetCelWidth((Image *)param_2);
    *(undefined4 *)((long)puVar11 + 0x24) = uVar10;
    uVar10 = Image::GetCelHeight((Image *)param_2);
    *(undefined4 *)(puVar11 + 5) = uVar10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::TextureData::CreateTextures(Sexy::MemoryImage*,
   Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>*, bool) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::TextureData::CreateTextures
          (TextureData *this,MemoryImage *param_1,BaseRenderDevice *param_2,bool param_3)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  
  (**(code **)(*(long *)param_1 + 0x78))(param_1);
  if (param_3) {
    (**(code **)(*(long *)param_1 + 0xa0))(param_1);
  }
  if ((param_1[0x92] == (MemoryImage)0x0) && (param_1[0x91] == (MemoryImage)0x0)) {
    uVar8 = *(undefined4 *)(param_1 + 0x18);
    iVar5 = 0x10;
    if (*(int *)(this + 0x34) != *(int *)(param_1 + 0x38)) goto LAB_052e4354;
LAB_052e42d8:
    if (((*(int *)(this + 0x38) != *(int *)(param_1 + 0x3c)) || (*(int *)(this + 100) != iVar5)) ||
       (iVar6 = FUN_052d9680(uVar8), iVar6 != *(int *)(this + 0x68))) goto LAB_052e4354;
    bVar2 = false;
  }
  else {
    uVar8 = *(undefined4 *)(param_1 + 0x18);
    cVar3 = FUN_052d9694(uVar8,4);
    if ((cVar3 == '\0') || ((*(uint *)(param_2 + 0x24) >> 1 & 1) == 0)) {
      iVar5 = 2;
      if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
        iVar5 = 1;
      }
    }
    else {
      iVar5 = 2;
    }
    if (*(int *)(this + 0x34) == *(int *)(param_1 + 0x38)) goto LAB_052e42d8;
LAB_052e4354:
    bVar2 = true;
    ReleaseTextures(this);
    *(int *)(this + 100) = iVar5;
    uVar8 = FUN_052d9680(*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(this + 0x68) = uVar8;
    CreateTextureDimensions(this,param_2,param_1);
  }
  iVar6 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_1);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_1);
  if (*(int *)(this + 0x2c) != -1) {
    *(int *)(this + 0x50) = *(int *)(this + 0x50) + 0x400;
    *(int *)(this + 0x54) = *(int *)(this + 0x54) + 0x400;
  }
  uVar9 = *(uint *)(this + 0x68);
  iVar13 = 4;
  if (iVar5 == 2) {
    iVar13 = 2;
  }
  if ((uVar9 >> 5 & 1) == 0) {
    uVar15 = uVar9 & 0x40;
    if ((uVar9 >> 6 & 1) == 0) {
      uVar9 = uVar15;
      if (0 < iVar6) {
        do {
          if (0 < iVar7) {
            iVar14 = 0;
            lVar10 = (long)(int)uVar9;
            do {
              puVar11 = (undefined8 *)FUN_052d9a54(*(undefined8 *)(this + 8),lVar10);
              if (bVar2) {
                uVar8 = FUN_052d9694(*(undefined4 *)(param_1 + 0x18),0x10);
                uVar12 = (**(code **)(*(long *)param_2 + 0x2d0))
                                   (param_2,*(undefined4 *)((long)puVar11 + 0x24),
                                    *(undefined4 *)(puVar11 + 5),iVar5,uVar8,this,puVar11);
                *puVar11 = uVar12;
                cVar3 = FUN_052da5c8();
                if (cVar3 != '\0') goto LAB_052e43fc;
                *(int *)(this + 0x50) =
                     *(int *)(this + 0x50) +
                     *(int *)((long)puVar11 + 0x24) * *(int *)(puVar11 + 5) * iVar13;
              }
              bVar4 = FUN_052d9694(*(undefined4 *)(param_1 + 0x18),0x10);
              if ((bVar4 < param_3) && (*(long *)(param_1 + 0x70) != 0)) {
                (**(code **)(**(long **)this + 0x2d8))
                          (*(long **)this,*puVar11,*(undefined4 *)(puVar11 + 4),param_1,iVar14,
                           uVar15,*(undefined4 *)((long)puVar11 + 0x24),*(undefined4 *)(puVar11 + 5)
                           ,iVar5);
              }
              uVar9 = (int)lVar10 + 1;
              lVar10 = lVar10 + 1;
              iVar14 = iVar14 + *(int *)(this + 0x44);
            } while (iVar14 < iVar7);
          }
          uVar15 = uVar15 + *(int *)(this + 0x48);
        } while ((int)uVar15 < iVar6);
      }
      if (bVar2) {
        iVar6 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_1);
        iVar7 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_1);
        *(int *)(this + 0x54) = *(int *)(this + 0x54) + iVar6 * iVar7 * iVar13;
      }
      uVar8 = *(undefined4 *)(param_1 + 0x38);
      uVar1 = *(undefined4 *)(param_1 + 0x3c);
      *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x78);
      *(undefined4 *)(this + 0x34) = uVar8;
      *(undefined4 *)(this + 0x38) = uVar1;
      *(int *)(this + 100) = iVar5;
      return;
    }
    lVar10 = FUN_052d9a54(*(undefined8 *)(this + 8),0);
    if (!bVar2) goto LAB_052e4484;
    cVar3 = FUN_052da5c8(*(undefined4 *)(lVar10 + 0x18));
  }
  else {
    lVar10 = FUN_052d9a54(*(undefined8 *)(this + 8),0);
    if (!bVar2) goto LAB_052e4484;
    cVar3 = FUN_052da5c8(*(undefined4 *)(lVar10 + 0x10));
  }
  if (cVar3 != '\0') {
LAB_052e43fc:
    *(undefined4 *)(this + 100) = 0;
    return;
  }
  iVar6 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_1);
  iVar7 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_1);
  iVar13 = iVar6 * iVar7 * iVar13;
  *(int *)(this + 0x50) = *(int *)(this + 0x50) + iVar13;
  *(int *)(this + 0x54) = *(int *)(this + 0x54) + iVar13;
LAB_052e4484:
  uVar8 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_1);
  *(undefined4 *)(this + 0x34) = uVar8;
  uVar8 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_1);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x38) = uVar8;
  *(int *)(this + 100) = iVar5;
  return;
}


/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::TextureData::CheckCreateTextures(Sexy::MemoryImage*,
   Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>*) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::TextureData::CheckCreateTextures(TextureData *this,MemoryImage *param_1,BaseRenderDevice *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((((*(int *)(this + 100) == 0) || (*(int *)(param_1 + 0x38) != *(int *)(this + 0x34))) ||
      (*(int *)(param_1 + 0x3c) != *(int *)(this + 0x38))) ||
     ((*(int *)(param_1 + 0x78) != *(int *)(this + 0x4c) ||
      (iVar2 = FUN_052d9680(*(undefined4 *)(param_1 + 0x18)), iVar2 != *(int *)(this + 0x68))))) {
    if (this[0x30] == (TextureData)0x0) {
      CreateTextures(this,param_1,param_2,true);
      return;
    }
    uVar1 = FUN_052d9680(*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(this + 0x68) = uVar1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::TextureData::BltTriangles(Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,
   Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo, Sexy::AndroidRenderDeviceES20>*,
   Sexy::MemoryImage*, Sexy::SexyVertex2D const (*) [3], int, unsigned int, float, float,
   Sexy::TRect<int> const*) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::TextureData::BltTriangles
          (TextureData *this,BaseRenderDevice *param_1,MemoryImage *param_2,SexyVertex2D *param_3,
          int param_4,uint param_5,float param_6,float param_7,TRect *param_8)

{
  ResistenceValueInfo *pRVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint *puVar12;
  float *pfVar13;
  long lVar14;
  SexyVertex2D *pSVar15;
  int iVar16;
  uint uVar17;
  ResistenceValueInfo *this_00;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int local_cd4;
  float local_cd0;
  float local_ccc;
  float local_cc8;
  float local_cc4;
  float local_cc0;
  float local_cbc;
  int local_cb8;
  undefined4 uStack_cb4;
  undefined8 uStack_cb0;
  undefined8 local_ca8;
  undefined8 uStack_ca0;
  VertexTList aVStack_c98 [3216];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(float *)(this + 0x5c) <= 1.0) && (*(float *)(this + 0x60) <= 1.0)) {
    puVar11 = (undefined8 *)FUN_052d9a54(*(undefined8 *)(this + 8),0);
    FastCurve::SetOutRange((FastCurve *)&local_cb8,1.0,1.0);
    BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
    ::SetTextureStack(local_cb8,uStack_cb4,param_1,*puVar11,*puVar11);
    fVar18 = (float)BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetBltDepth
                              (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)
                                (param_1 + 0x80a8));
    cVar5 = std::vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>>::empty
                      ((vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>> *)
                       (param_1 + 0x48));
    if ((param_8 == (TRect *)0x0) ||
       ((((*(int *)param_8 == 0 && (*(int *)(param_8 + 4) == 0)) &&
         (*(int *)(param_8 + 8) == *(int *)(param_1 + 0x3c))) &&
        (*(int *)(param_8 + 0xc) == *(int *)(param_1 + 0x40))))) {
      (**(code **)(*(long *)param_1 + 0x2c8))(param_1);
      if (cVar5 != '\0') {
        if (0 < param_4) {
          uVar6 = AndroidGL20Vertex::TexCoordOffset();
          iVar16 = 0;
          do {
            uVar9 = *(uint *)(param_1 + 0x68);
            uVar10 = *(uint *)(param_1 + 0x6c);
            if (uVar10 <= uVar9 + 3) {
              (**(code **)(*(long *)param_1 + 0x2f8))(param_1);
              uVar9 = *(uint *)(param_1 + 0x68);
              uVar10 = *(uint *)(param_1 + 0x6c);
            }
            local_cd4 = uVar10 - uVar9;
            local_cb8 = (param_4 - iVar16) * 3;
            puVar12 = (uint *)eastl::min_alt<int>(&local_cd4,&local_cb8);
            uVar10 = *puVar12;
            if (uVar10 < 3) {
              uVar17 = 0;
            }
            else {
              pSVar15 = param_3 + (long)iVar16 * 0x60;
              uVar7 = uVar9;
              uVar17 = 3;
              while( true ) {
                *(uint *)(param_1 + 0x68) = uVar7 + 1;
                uVar8 = *(uint *)(pSVar15 + 0x10);
                fVar19 = *(float *)pSVar15;
                puVar11 = (undefined8 *)(*(long *)(param_1 + 0x60) + (ulong)uVar7 * 0x20);
                fVar20 = *(float *)(pSVar15 + 4);
                fVar22 = *(float *)(pSVar15 + 0x18);
                fVar25 = *(float *)(this + 0x5c);
                fVar21 = *(float *)(pSVar15 + 0x1c);
                fVar23 = *(float *)(this + 0x60);
                uVar7 = param_5;
                if (uVar8 != 0) {
                  uVar7 = AndroidGL20Vertex::PackColor
                                    (uVar8 >> 0x10 & 0xff,uVar8 >> 8 & 0xff,uVar8 & 0xff,
                                     uVar8 >> 0x18);
                }
                AndroidGL20Vertex::AndroidGL20Vertex
                          ((AndroidGL20Vertex *)&local_cb8,param_6 + fVar19,param_7 + fVar20,fVar18,
                           fVar22 * fVar25,fVar21 * fVar23,uVar7);
                uVar7 = *(uint *)(param_1 + 0x68);
                fVar25 = *(float *)(this + 0x5c);
                lVar14 = *(long *)(param_1 + 0x60);
                fVar23 = *(float *)(this + 0x60);
                *puVar11 = CONCAT44(uStack_cb4,local_cb8);
                puVar11[1] = uStack_cb0;
                puVar11[2] = local_ca8;
                puVar11[3] = uStack_ca0;
                *(uint *)(param_1 + 0x68) = uVar7 + 1;
                puVar11 = (undefined8 *)(lVar14 + (ulong)uVar7 * 0x20);
                fVar19 = *(float *)(pSVar15 + 0x20);
                uVar7 = *(uint *)(pSVar15 + 0x30);
                fVar20 = *(float *)(pSVar15 + 0x24);
                fVar22 = *(float *)(pSVar15 + 0x38);
                fVar21 = *(float *)(pSVar15 + 0x3c);
                uVar8 = param_5;
                if (uVar7 != 0) {
                  uVar8 = AndroidGL20Vertex::PackColor
                                    (uVar7 >> 0x10 & 0xff,uVar7 >> 8 & 0xff,uVar7 & 0xff,
                                     uVar7 >> 0x18);
                }
                AndroidGL20Vertex::AndroidGL20Vertex
                          ((AndroidGL20Vertex *)&local_cb8,param_6 + fVar19,param_7 + fVar20,fVar18,
                           fVar22 * fVar25,fVar21 * fVar23,uVar8);
                uVar7 = *(uint *)(param_1 + 0x68);
                fVar25 = *(float *)(this + 0x5c);
                lVar14 = *(long *)(param_1 + 0x60);
                fVar23 = *(float *)(this + 0x60);
                *puVar11 = CONCAT44(uStack_cb4,local_cb8);
                puVar11[1] = uStack_cb0;
                puVar11[2] = local_ca8;
                puVar11[3] = uStack_ca0;
                *(uint *)(param_1 + 0x68) = uVar7 + 1;
                puVar11 = (undefined8 *)(lVar14 + (ulong)uVar7 * 0x20);
                fVar19 = *(float *)(pSVar15 + 0x40);
                uVar7 = *(uint *)(pSVar15 + 0x50);
                fVar20 = *(float *)(pSVar15 + 0x44);
                fVar22 = *(float *)(pSVar15 + 0x58);
                fVar21 = *(float *)(pSVar15 + 0x5c);
                uVar8 = param_5;
                if (uVar7 != 0) {
                  uVar8 = AndroidGL20Vertex::PackColor
                                    (uVar7 >> 0x10 & 0xff,uVar7 >> 8 & 0xff,uVar7 & 0xff,
                                     uVar7 >> 0x18);
                }
                iVar16 = iVar16 + 1;
                pSVar15 = pSVar15 + 0x60;
                AndroidGL20Vertex::AndroidGL20Vertex
                          ((AndroidGL20Vertex *)&local_cb8,param_6 + fVar19,param_7 + fVar20,fVar18,
                           fVar22 * fVar25,fVar21 * fVar23,uVar8);
                *puVar11 = CONCAT44(uStack_cb4,local_cb8);
                puVar11[1] = uStack_cb0;
                puVar11[2] = local_ca8;
                puVar11[3] = uStack_ca0;
                if (uVar10 < uVar17 + 3) break;
                uVar7 = *(uint *)(param_1 + 0x68);
                uVar17 = uVar17 + 3;
              }
            }
            FUN_052dc778(param_1 + 0x80a8,*(long *)(param_1 + 0x60) + (ulong)uVar9 * 0x20,uVar17,
                         0x1c4,*(undefined4 *)(param_1 + 0x2c),uVar6);
          } while (iVar16 < param_4);
        }
        goto LAB_052e7bd0;
      }
      bVar4 = false;
    }
    else {
      (**(code **)(*(long *)param_1 + 0x2c8))(param_1);
      if (cVar5 != '\0') {
        if (0 < param_4) {
          uVar6 = AndroidGL20Vertex::TexCoordOffset();
          pSVar15 = param_3 + 0x40;
          do {
            uVar9 = *(uint *)(param_1 + 0x68);
            if (*(int *)(param_1 + 0x6c) - 3U < uVar9) {
              (**(code **)(*(long *)param_1 + 0x2f8))(param_1);
              uVar9 = *(uint *)(param_1 + 0x68);
            }
            *(uint *)(param_1 + 0x68) = uVar9 + 1;
            uVar10 = *(uint *)(pSVar15 + -0x30);
            fVar19 = *(float *)(pSVar15 + -0x40);
            puVar11 = (undefined8 *)(*(long *)(param_1 + 0x60) + (ulong)uVar9 * 0x20);
            fVar20 = *(float *)(pSVar15 + -0x3c);
            fVar22 = *(float *)(pSVar15 + -0x28);
            fVar25 = *(float *)(this + 0x5c);
            fVar21 = *(float *)(pSVar15 + -0x24);
            fVar23 = *(float *)(this + 0x60);
            uVar9 = param_5;
            if (uVar10 != 0) {
              uVar9 = AndroidGL20Vertex::PackColor
                                (uVar10 >> 0x10 & 0xff,uVar10 >> 8 & 0xff,uVar10 & 0xff,
                                 uVar10 >> 0x18);
            }
            AndroidGL20Vertex::AndroidGL20Vertex
                      ((AndroidGL20Vertex *)&local_cb8,param_6 + fVar19,param_7 + fVar20,fVar18,
                       fVar22 * fVar25,fVar21 * fVar23,uVar9);
            uVar9 = *(uint *)(param_1 + 0x68);
            fVar25 = *(float *)(this + 0x5c);
            lVar14 = *(long *)(param_1 + 0x60);
            fVar23 = *(float *)(this + 0x60);
            *puVar11 = CONCAT44(uStack_cb4,local_cb8);
            puVar11[1] = uStack_cb0;
            puVar11[2] = local_ca8;
            puVar11[3] = uStack_ca0;
            *(uint *)(param_1 + 0x68) = uVar9 + 1;
            puVar11 = (undefined8 *)(lVar14 + (ulong)uVar9 * 0x20);
            fVar19 = *(float *)(pSVar15 + -0x20);
            uVar9 = *(uint *)(pSVar15 + -0x10);
            fVar20 = *(float *)(pSVar15 + -0x1c);
            fVar22 = *(float *)(pSVar15 + -8);
            fVar21 = *(float *)(pSVar15 + -4);
            uVar10 = param_5;
            if (uVar9 != 0) {
              uVar10 = AndroidGL20Vertex::PackColor
                                 (uVar9 >> 0x10 & 0xff,uVar9 >> 8 & 0xff,uVar9 & 0xff,uVar9 >> 0x18)
              ;
            }
            AndroidGL20Vertex::AndroidGL20Vertex
                      ((AndroidGL20Vertex *)&local_cb8,param_6 + fVar19,param_7 + fVar20,fVar18,
                       fVar22 * fVar25,fVar21 * fVar23,uVar10);
            uVar9 = *(uint *)(param_1 + 0x68);
            fVar25 = *(float *)(this + 0x5c);
            lVar14 = *(long *)(param_1 + 0x60);
            fVar23 = *(float *)(this + 0x60);
            *puVar11 = CONCAT44(uStack_cb4,local_cb8);
            puVar11[1] = uStack_cb0;
            puVar11[2] = local_ca8;
            puVar11[3] = uStack_ca0;
            *(uint *)(param_1 + 0x68) = uVar9 + 1;
            puVar11 = (undefined8 *)(lVar14 + (ulong)uVar9 * 0x20);
            fVar19 = *(float *)pSVar15;
            uVar9 = *(uint *)(pSVar15 + 0x10);
            fVar20 = *(float *)(pSVar15 + 4);
            fVar22 = *(float *)(pSVar15 + 0x18);
            fVar21 = *(float *)(pSVar15 + 0x1c);
            uVar10 = param_5;
            if (uVar9 != 0) {
              uVar10 = AndroidGL20Vertex::PackColor
                                 (uVar9 >> 0x10 & 0xff,uVar9 >> 8 & 0xff,uVar9 & 0xff,uVar9 >> 0x18)
              ;
            }
            pSVar15 = pSVar15 + 0x60;
            AndroidGL20Vertex::AndroidGL20Vertex
                      ((AndroidGL20Vertex *)&local_cb8,param_6 + fVar19,param_7 + fVar20,fVar18,
                       fVar22 * fVar25,fVar21 * fVar23,uVar10);
            iVar16 = *(int *)(param_1 + 0x68);
            uVar3 = *(undefined4 *)(param_1 + 0x2c);
            lVar14 = *(long *)(param_1 + 0x60);
            *puVar11 = CONCAT44(uStack_cb4,local_cb8);
            puVar11[1] = uStack_cb0;
            puVar11[2] = local_ca8;
            puVar11[3] = uStack_ca0;
            FUN_052dc778(param_1 + 0x80a8,lVar14 + (ulong)(iVar16 - 3) * 0x20,3,0x1c4,uVar3,uVar6);
            VertexTList::VertexTList(aVStack_c98);
            VertexTList::push_back
                      (aVStack_c98,
                       (AndroidGL20Vertex *)
                       (*(long *)(param_1 + 0x60) + (ulong)(*(int *)(param_1 + 0x68) - 3) * 0x20));
            VertexTList::push_back
                      (aVStack_c98,
                       (AndroidGL20Vertex *)
                       (*(long *)(param_1 + 0x60) + (ulong)(*(int *)(param_1 + 0x68) - 2) * 0x20));
            VertexTList::push_back
                      (aVStack_c98,
                       (AndroidGL20Vertex *)
                       (*(long *)(param_1 + 0x60) + (ulong)(*(int *)(param_1 + 0x68) - 1) * 0x20));
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -3;
            DrawPolyClipped((BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
                             *)param_1,param_8,aVStack_c98);
            VertexTList::~VertexTList(aVStack_c98);
          } while (pSVar15 != param_3 + (ulong)(param_4 - 1) * 0x60 + 0xa0);
        }
        goto LAB_052e7bd0;
      }
      bVar4 = true;
    }
    pfVar13 = (float *)std::vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>>::back
                                 ((vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>> *)
                                  (param_1 + 0x48));
    if (0 < param_4) {
      uVar6 = AndroidGL20Vertex::TexCoordOffset();
      pSVar15 = param_3 + 0x58;
      do {
        this_00 = (ResistenceValueInfo *)&local_cd0;
        if (*(int *)(param_1 + 0x6c) - 3U < *(uint *)(param_1 + 0x68)) {
          (**(code **)(*(long *)param_1 + 0x2f8))(param_1);
        }
        do {
          pRVar1 = this_00 + 8;
          ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(this_00);
          this_00 = pRVar1;
        } while (pRVar1 != (ResistenceValueInfo *)&local_cb8);
        fVar20 = *(float *)(pSVar15 + -0x54);
        fVar21 = *(float *)(pSVar15 + -0x34);
        fVar28 = *(float *)(pSVar15 + -0x14);
        puVar11 = (undefined8 *)
                  (*(long *)(param_1 + 0x60) + (ulong)*(uint *)(param_1 + 0x68) * 0x20);
        fVar24 = pfVar13[1];
        fVar27 = *(float *)(pSVar15 + -0x38);
        fVar22 = *(float *)(pSVar15 + -0x18);
        fVar19 = *(float *)(pSVar15 + -0x58);
        fVar26 = *pfVar13;
        fVar29 = pfVar13[4];
        fVar23 = pfVar13[5];
        local_cc0 = pfVar13[2];
        fVar30 = pfVar13[3];
        *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) + 1;
        fVar25 = *(float *)(pSVar15 + -0x40);
        uVar9 = *(uint *)(pSVar15 + -0x48);
        fVar31 = *(float *)(this + 0x5c);
        fVar19 = (param_7 + fVar20) * fVar24 + fVar26 * (param_6 + fVar19) + local_cc0;
        local_cc8 = (param_7 + fVar21) * fVar24 + fVar26 * (param_6 + fVar27) + local_cc0;
        local_cc0 = (param_7 + fVar28) * fVar24 + fVar26 * (param_6 + fVar22) + local_cc0;
        fVar22 = *(float *)(pSVar15 + -0x3c);
        fVar20 = fVar23 + fVar29 * (param_7 + fVar20) + fVar30 * fVar19;
        local_cc4 = fVar23 + fVar29 * (param_7 + fVar21) + fVar30 * local_cc8;
        local_cbc = fVar23 + fVar29 * (param_7 + fVar28) + fVar30 * local_cc0;
        fVar21 = *(float *)(this + 0x60);
        uVar10 = param_5;
        local_cd0 = fVar19;
        local_ccc = fVar20;
        if (uVar9 != 0) {
          uVar10 = AndroidGL20Vertex::PackColor
                             (uVar9 >> 0x10 & 0xff,uVar9 >> 8 & 0xff,uVar9 & 0xff,uVar9 >> 0x18);
        }
        AndroidGL20Vertex::AndroidGL20Vertex
                  ((AndroidGL20Vertex *)&local_cb8,fVar19,fVar20,fVar18,fVar25 * fVar31,
                   fVar22 * fVar21,uVar10);
        fVar20 = local_cc4;
        fVar19 = local_cc8;
        uVar9 = *(uint *)(param_1 + 0x68);
        fVar25 = *(float *)(this + 0x5c);
        lVar14 = *(long *)(param_1 + 0x60);
        fVar23 = *(float *)(this + 0x60);
        *puVar11 = CONCAT44(uStack_cb4,local_cb8);
        puVar11[1] = uStack_cb0;
        puVar2 = (undefined8 *)(lVar14 + (ulong)uVar9 * 0x20);
        puVar11[2] = local_ca8;
        puVar11[3] = uStack_ca0;
        *(uint *)(param_1 + 0x68) = uVar9 + 1;
        fVar22 = *(float *)(pSVar15 + -0x20);
        uVar9 = *(uint *)(pSVar15 + -0x28);
        fVar21 = *(float *)(pSVar15 + -0x1c);
        uVar10 = param_5;
        if (uVar9 != 0) {
          uVar10 = AndroidGL20Vertex::PackColor
                             (uVar9 >> 0x10 & 0xff,uVar9 >> 8 & 0xff,uVar9 & 0xff,uVar9 >> 0x18);
        }
        AndroidGL20Vertex::AndroidGL20Vertex
                  ((AndroidGL20Vertex *)&local_cb8,fVar19,fVar20,fVar18,fVar22 * fVar25,
                   fVar21 * fVar23,uVar10);
        fVar20 = local_cbc;
        fVar19 = local_cc0;
        uVar9 = *(uint *)(param_1 + 0x68);
        fVar25 = *(float *)(this + 0x5c);
        lVar14 = *(long *)(param_1 + 0x60);
        fVar23 = *(float *)(this + 0x60);
        *puVar2 = CONCAT44(uStack_cb4,local_cb8);
        puVar2[1] = uStack_cb0;
        puVar11 = (undefined8 *)(lVar14 + (ulong)uVar9 * 0x20);
        puVar2[2] = local_ca8;
        puVar2[3] = uStack_ca0;
        *(uint *)(param_1 + 0x68) = uVar9 + 1;
        fVar22 = *(float *)pSVar15;
        uVar9 = *(uint *)(pSVar15 + -8);
        fVar21 = *(float *)(pSVar15 + 4);
        uVar10 = param_5;
        if (uVar9 != 0) {
          uVar10 = AndroidGL20Vertex::PackColor
                             (uVar9 >> 0x10 & 0xff,uVar9 >> 8 & 0xff,uVar9 & 0xff,uVar9 >> 0x18);
        }
        AndroidGL20Vertex::AndroidGL20Vertex
                  ((AndroidGL20Vertex *)&local_cb8,fVar19,fVar20,fVar18,fVar22 * fVar25,
                   fVar21 * fVar23,uVar10);
        iVar16 = *(int *)(param_1 + 0x68);
        lVar14 = *(long *)(param_1 + 0x60);
        uVar3 = *(undefined4 *)(param_1 + 0x2c);
        *puVar11 = CONCAT44(uStack_cb4,local_cb8);
        puVar11[1] = uStack_cb0;
        puVar11[2] = local_ca8;
        puVar11[3] = uStack_ca0;
        FUN_052dc778(param_1 + 0x80a8,lVar14 + (ulong)(iVar16 - 3) * 0x20,3,0x1c4,uVar3,uVar6);
        if (bVar4) {
          VertexTList::VertexTList(aVStack_c98);
          VertexTList::push_back
                    (aVStack_c98,
                     (AndroidGL20Vertex *)
                     (*(long *)(param_1 + 0x60) + (ulong)(*(int *)(param_1 + 0x68) - 3) * 0x20));
          VertexTList::push_back
                    (aVStack_c98,
                     (AndroidGL20Vertex *)
                     (*(long *)(param_1 + 0x60) + (ulong)(*(int *)(param_1 + 0x68) - 2) * 0x20));
          VertexTList::push_back
                    (aVStack_c98,
                     (AndroidGL20Vertex *)
                     (*(long *)(param_1 + 0x60) + (ulong)(*(int *)(param_1 + 0x68) - 1) * 0x20));
          *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -3;
          DrawPolyClipped((BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
                           *)param_1,param_8,aVStack_c98);
          VertexTList::~VertexTList(aVStack_c98);
        }
        pSVar15 = pSVar15 + 0x60;
      } while (pSVar15 != param_3 + (ulong)(param_4 - 1) * 0x60 + 0xb8);
    }
  }
LAB_052e7bd0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::TextureData::BltTransformedOptimized(Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,
   Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo, Sexy::AndroidRenderDeviceES20>*,
   Sexy::MemoryImage*, int, Sexy::SexyMatrix3 const&, Sexy::Color const&, Sexy::TRect<int> const*,
   float, float, bool) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::TextureData::BltTransformedOptimized
          (TextureData *this,BaseRenderDevice *param_1,MemoryImage *param_2,int param_3,
          SexyMatrix3 *param_4,Color *param_5,TRect *param_6,float param_7,float param_8,
          bool param_9)

{
  ResistenceValueInfo *pRVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  int *piVar13;
  undefined8 *extraout_x0;
  long lVar14;
  float *pfVar15;
  undefined8 *puVar16;
  int iVar17;
  ResistenceValueInfo *pRVar18;
  int iVar19;
  undefined8 uVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uStack_e28;
  undefined8 uStack_e18;
  int local_dc0;
  int local_dbc;
  float local_db8;
  float local_db4;
  float local_db0;
  float local_dac;
  undefined8 local_da8;
  float local_da0;
  float local_d9c;
  float local_d98;
  float local_d94;
  undefined8 local_d80;
  float fStack_d78;
  float fStack_d74;
  undefined8 local_d70;
  float fStack_d68;
  float fStack_d64;
  undefined8 local_d60;
  undefined8 local_d58;
  undefined8 local_d50;
  undefined8 uStack_d48;
  float local_d40;
  float local_d3c;
  undefined4 local_d38;
  undefined4 local_d34;
  int local_d30;
  int local_d2c;
  float local_d28;
  float local_d24;
  int local_d20;
  AndroidGL20Vertex aAStack_d18 [24];
  float local_d00;
  float local_cfc;
  AndroidGL20Vertex aAStack_cf8 [32];
  AndroidGL20Vertex aAStack_cd8 [32];
  AndroidGL20Vertex aAStack_cb8 [24];
  undefined4 local_ca0;
  undefined4 local_c9c;
  VertexTList aVStack_c98 [3216];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)FUN_052dcf04(param_2 + 0x158,___stack_chk_guard,param_9,param_3);
  piVar13 = (int *)std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost(this_00);
  if ((0 < piVar13[2]) && (0 < piVar13[3])) {
    fVar22 = (float)BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetBltDepth
                              (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)
                                (param_1 + 0x80a8));
    uVar10 = AndroidGL20Vertex::PackColor
                       (*(int *)param_5,*(int *)(param_5 + 4),*(int *)(param_5 + 8),
                        *(int *)(param_5 + 0xc));
    DeviceImage::CachedImageDrawInfo::UpdateTextureData
              ((CachedImageDrawInfo *)this_00,*(int *)(this + 0x44),*(int *)(this + 0x48),
               *(int *)(param_2 + 0x38),*(int *)(param_2 + 0x3c),
               (bool)((byte)(*(uint *)(this + 0x68) >> 9) & 1));
    if (((BltTransformedOptimized(Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>*,Sexy::MemoryImage*,int,Sexy::SexyMatrix3_const&,Sexy::Color_const&,Sexy::TRect<int>const*,float,float,bool)
          ::aNewClipRect & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(&BltTransformedOptimized(Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>*,Sexy::MemoryImage*,int,Sexy::SexyMatrix3_const&,Sexy::Color_const&,Sexy::TRect<int>const*,float,float,bool)
                                      ::aNewClipRect), iVar12 != 0)) {
      Insets::Insets((Insets *)
                     &BltTransformedOptimized(Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>*,Sexy::MemoryImage*,int,Sexy::SexyMatrix3_const&,Sexy::Color_const&,Sexy::TRect<int>const*,float,float,bool)
                      ::aNewClipRect);
      __cxa_guard_release(&BltTransformedOptimized(Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>*,Sexy::MemoryImage*,int,Sexy::SexyMatrix3_const&,Sexy::Color_const&,Sexy::TRect<int>const*,float,float,bool)
                           ::aNewClipRect);
    }
    cVar9 = FUN_052d96c4(this_00[0x39]);
    if (cVar9 == '\0') {
      nop();
      uVar20 = *extraout_x0;
      lVar14 = FUN_052d99fc(uVar20,extraout_x0[1]);
      fVar32 = *(float *)(param_4 + 0x14);
      fVar31 = param_7 + *(float *)(param_4 + 8);
      if (lVar14 != 0) {
        lVar21 = 0;
        pfVar15 = (float *)FUN_052d9a28(uVar20,0);
        do {
          if (param_9) {
            puVar16 = (undefined8 *)FUN_052d9a54(*(undefined8 *)(this + 8),(long)(int)pfVar15[8]);
            FastCurve::SetOutRange((FastCurve *)&local_d40,1.0,1.0);
            BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
            ::SetTextureStack(local_d40,local_d3c,param_1,*puVar16,puVar16[1]);
          }
          FastCurve::SetOutRange((FastCurve *)&local_d80,pfVar15[6],pfVar15[7]);
          FastCurve::SetOutRange
                    ((FastCurve *)&fStack_d78,(float)(int)pfVar15[4] + pfVar15[6],pfVar15[7]);
          FastCurve::SetOutRange
                    ((FastCurve *)&local_d70,pfVar15[6],(float)(int)pfVar15[5] + pfVar15[7]);
          FastCurve::SetOutRange
                    ((FastCurve *)&fStack_d68,(float)(int)pfVar15[4] + pfVar15[6],
                     (float)(int)pfVar15[5] + pfVar15[7]);
          pRVar18 = (ResistenceValueInfo *)&local_d60;
          do {
            pRVar1 = pRVar18 + 8;
            ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(pRVar18);
            pRVar18 = pRVar1;
          } while (pRVar1 != (ResistenceValueInfo *)&local_d40);
          fVar3 = *(float *)(param_4 + 4);
          fVar4 = *(float *)(param_4 + 0x10);
          fVar5 = *(float *)param_4;
          fVar27 = (float)((ulong)local_d80 >> 0x20);
          fVar30 = (float)((ulong)local_d70 >> 0x20);
                    /* WARNING: Ignoring partial resolution of indirect */
          uStack_e18._0_4_ = fVar5;
          fVar24 = (float)((ulong)uStack_e18 >> 0x20);
                    /* WARNING: Ignoring partial resolution of indirect */
          uStack_e28._0_4_ = fVar31;
          fVar26 = fVar27 * fVar3 + (float)local_d80 * fVar5 + fVar31;
          fVar27 = fVar27 * fVar4 + (float)local_d80 * *(float *)(param_4 + 0xc) + param_8 + fVar32;
          fVar23 = (float)((ulong)uStack_e28 >> 0x20);
          local_d58 = CONCAT44(fStack_d74 * fVar4 + fStack_d78 * fVar24 + fVar23,
                               fStack_d74 * fVar3 + fStack_d78 * (float)uStack_e18 +
                               (float)uStack_e28);
          local_d60 = CONCAT44(fVar27,fVar26);
          uStack_d48 = CONCAT44(fStack_d64 * fVar4 + fStack_d68 * fVar24 + fVar23,
                                fStack_d64 * fVar3 + fStack_d68 * (float)uStack_e18 +
                                (float)uStack_e28);
          local_d50 = CONCAT44(fVar30 * fVar4 + (float)local_d70 * *(float *)(param_4 + 0xc) +
                               param_8 + fVar32,fVar30 * fVar3 + (float)local_d70 * fVar5 + fVar31);
          AndroidGL20Vertex::AndroidGL20Vertex
                    (aAStack_d18,fVar26,fVar27,fVar22,*pfVar15,pfVar15[1],uVar10);
          AndroidGL20Vertex::AndroidGL20Vertex
                    (aAStack_cf8,(float)local_d58,local_d58._4_4_,fVar22,pfVar15[2],pfVar15[1],
                     uVar10);
          AndroidGL20Vertex::AndroidGL20Vertex
                    (aAStack_cd8,(float)local_d50,local_d50._4_4_,fVar22,*pfVar15,pfVar15[3],uVar10)
          ;
          AndroidGL20Vertex::AndroidGL20Vertex
                    (aAStack_cb8,(float)uStack_d48,uStack_d48._4_4_,fVar22,pfVar15[2],pfVar15[3],
                     uVar10);
          if (param_6 == (TRect *)0x0) {
LAB_052e9bc4:
            BufferedDrawPrimitive
                      ((BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
                        *)param_1,5,2,aAStack_d18,*(int *)(param_1 + 0x2c),*(uint *)(param_1 + 0x30)
                      );
          }
          else {
            iVar12 = *(int *)(param_6 + 4);
            if ((((*(int *)param_6 == 0) && (iVar12 == 0)) &&
                (iVar12 = 0, *(int *)(param_6 + 8) == *(int *)(param_1 + 0x3c))) &&
               (*(int *)(param_6 + 0xc) == *(int *)(param_1 + 0x40))) goto LAB_052e9bc4;
            FastCurve::SetOutRange((FastCurve *)&local_d98,(float)*(int *)param_6,(float)iVar12);
            FastCurve::SetOutRange
                      ((FastCurve *)&local_d40,(float)(*(int *)param_6 + *(int *)(param_6 + 8)),
                       (float)(*(int *)(param_6 + 4) + *(int *)(param_6 + 0xc)));
            if ((((((local_d98 <= (float)local_d60) && ((float)local_d60 < local_d40)) &&
                  ((local_d94 <= local_d60._4_4_ &&
                   ((local_d60._4_4_ < local_d3c && (local_d98 <= (float)local_d58)))))) &&
                 ((float)local_d58 < local_d40)) &&
                ((((local_d94 <= local_d58._4_4_ && (local_d58._4_4_ < local_d3c)) &&
                  (local_d98 <= (float)local_d50)) &&
                 (((float)local_d50 < local_d40 && (local_d94 <= local_d50._4_4_)))))) &&
               (((local_d50._4_4_ < local_d3c &&
                 ((local_d98 <= (float)uStack_d48 && ((float)uStack_d48 < local_d40)))) &&
                ((local_d94 <= uStack_d48._4_4_ && (uStack_d48._4_4_ < local_d3c))))))
            goto LAB_052e9bc4;
            BltTransformedOptimized(Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>*,Sexy::MemoryImage*,int,Sexy::SexyMatrix3_const&,Sexy::Color_const&,Sexy::TRect<int>const*,float,float,bool)
            ::aNewClipRect = (int)local_d98;
            DAT_06bbf8f4 = (int)local_d94;
            DAT_06bbf8f8 = (int)(local_d40 - local_d98);
            DAT_06bbf8fc = (int)(local_d3c - local_d94);
            VertexTList::VertexTList(aVStack_c98);
            VertexTList::push_back(aVStack_c98,aAStack_d18);
            VertexTList::push_back(aVStack_c98,aAStack_cf8);
            VertexTList::push_back(aVStack_c98,aAStack_cb8);
            VertexTList::push_back(aVStack_c98,aAStack_cd8);
            DrawPolyClipped((BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
                             *)param_1,
                            (TRect *)&BltTransformedOptimized(Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>*,Sexy::MemoryImage*,int,Sexy::SexyMatrix3_const&,Sexy::Color_const&,Sexy::TRect<int>const*,float,float,bool)
                                      ::aNewClipRect,aVStack_c98);
            VertexTList::~VertexTList(aVStack_c98);
          }
          lVar21 = lVar21 + 1;
          if (lVar21 == lVar14) break;
          pfVar15 = (float *)FUN_052d9a28(*extraout_x0,lVar21);
        } while( true );
      }
    }
    else {
      iVar6 = piVar13[2];
      iVar7 = piVar13[1];
      iVar8 = *piVar13;
      iVar12 = piVar13[3] + iVar7;
      iVar2 = iVar6 + iVar8;
      fVar31 = (float)-piVar13[3] * 0.5;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_d98);
      (**(code **)(*(long *)param_1 + 0x2f0))(param_1,0,param_2);
      if (iVar7 < iVar12) {
        do {
          if (iVar8 < iVar2) {
            uVar11 = AndroidGL20Vertex::TexCoordOffset();
            iVar19 = iVar8;
            fVar32 = (float)-iVar6 * 0.5;
            do {
              local_dc0 = iVar2 - iVar19;
              local_dbc = iVar12 - iVar7;
              GLTexHolder::GLTexHolder((GLTexHolder *)&local_da8);
              uVar20 = FUN_052db1bc(this,param_2 + 0x38,param_2 + 0x3c,iVar19,iVar7,&local_dc0,
                                    &local_dbc,&local_db8,&local_db4,&local_db0,&local_dac,
                                    (GLTexHolder *)&local_da8);
              FastCurve::SetOutRange((FastCurve *)&local_d40,1.0,1.0);
              BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
              ::SetTextureStack(local_d40,local_d3c,param_1,uVar20,local_da8);
              FastCurve::SetOutRange((FastCurve *)&local_d80,fVar32,fVar31);
              FastCurve::SetOutRange((FastCurve *)&fStack_d78,fVar32 + (float)local_dc0,fVar31);
              FastCurve::SetOutRange((FastCurve *)&local_d70,fVar32,fVar31 + (float)local_dbc);
              FastCurve::SetOutRange
                        ((FastCurve *)&fStack_d68,fVar32 + (float)local_dc0,
                         fVar31 + (float)local_dbc);
              pRVar18 = (ResistenceValueInfo *)&local_d60;
              do {
                pRVar1 = pRVar18 + 8;
                ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(pRVar18);
                pRVar18 = pRVar1;
              } while (pRVar1 != (ResistenceValueInfo *)&local_d40);
              fVar30 = (float)((ulong)local_d80 >> 0x20);
              fVar28 = (float)((ulong)local_d70 >> 0x20);
              fVar3 = *(float *)param_4;
              fVar4 = *(float *)(param_4 + 0xc);
              fVar5 = *(float *)(param_4 + 0x10);
              fVar27 = *(float *)(param_4 + 4);
              fVar26 = param_7 + *(float *)(param_4 + 8);
              fVar23 = param_8 + *(float *)(param_4 + 0x14);
              fVar24 = param_7 + *(float *)(param_4 + 8);
              fVar25 = param_8 + *(float *)(param_4 + 0x14);
              fVar29 = fVar26 + (float)local_d80 * fVar3 + fVar30 * fVar27;
              fVar30 = fVar23 + (float)local_d80 * fVar4 + fVar30 * fVar5;
              local_d60 = CONCAT44(fVar30,fVar29);
              local_d58 = CONCAT44(fVar25 + fStack_d78 * fVar4 + fStack_d74 * fVar5,
                                   fVar24 + fStack_d78 * fVar3 + fStack_d74 * fVar27);
              uStack_d48 = CONCAT44(fVar25 + fStack_d68 * fVar4 + fStack_d64 * fVar5,
                                    fVar24 + fStack_d68 * fVar3 + fStack_d64 * fVar27);
              local_d50 = CONCAT44(fVar23 + (float)local_d70 * fVar4 + fVar28 * fVar5,
                                   fVar26 + (float)local_d70 * fVar3 + fVar28 * fVar27);
              AndroidGL20Vertex::AndroidGL20Vertex
                        (aAStack_d18,fVar29,fVar30,fVar22,local_db8,local_db4,uVar10);
              AndroidGL20Vertex::AndroidGL20Vertex
                        (aAStack_cf8,(float)local_d58,local_d58._4_4_,fVar22,local_db0,local_db4,
                         uVar10);
              AndroidGL20Vertex::AndroidGL20Vertex
                        (aAStack_cd8,(float)local_d50,local_d50._4_4_,fVar22,local_db8,local_dac,
                         uVar10);
              AndroidGL20Vertex::AndroidGL20Vertex
                        (aAStack_cb8,(float)uStack_d48,uStack_d48._4_4_,fVar22,local_db0,local_dac,
                         uVar10);
              FUN_052dc778(param_1 + 0x80a8,aAStack_d18,4,0x1c4,*(undefined4 *)(param_1 + 0x2c),
                           uVar11);
              if (param_6 == (TRect *)0x0) {
LAB_052ea21c:
                BufferedDrawPrimitive
                          ((BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
                            *)param_1,5,2,aAStack_d18,*(int *)(param_1 + 0x2c),
                           *(uint *)(param_1 + 0x30));
              }
              else {
                iVar17 = *(int *)(param_6 + 4);
                if ((((*(int *)param_6 == 0) && (iVar17 == 0)) &&
                    (iVar17 = 0, *(int *)(param_6 + 8) == *(int *)(param_1 + 0x3c))) &&
                   (*(int *)(param_6 + 0xc) == *(int *)(param_1 + 0x40))) goto LAB_052ea21c;
                FastCurve::SetOutRange((FastCurve *)&local_da0,(float)*(int *)param_6,(float)iVar17)
                ;
                FastCurve::SetOutRange
                          ((FastCurve *)&local_d40,(float)(*(int *)param_6 + *(int *)(param_6 + 8)),
                           (float)(*(int *)(param_6 + 4) + *(int *)(param_6 + 0xc)));
                if (((((local_da0 <= (float)local_d60) && ((float)local_d60 < local_d40)) &&
                     ((local_d9c <= local_d60._4_4_ &&
                      ((local_d60._4_4_ < local_d3c && (local_da0 <= (float)local_d58)))))) &&
                    (((float)local_d58 < local_d40 &&
                     (((local_d9c <= local_d58._4_4_ && (local_d58._4_4_ < local_d3c)) &&
                      (local_da0 <= (float)local_d50)))))) &&
                   (((((float)local_d50 < local_d40 && (local_d9c <= local_d50._4_4_)) &&
                     (((local_d50._4_4_ < local_d3c &&
                       ((local_da0 <= (float)uStack_d48 && ((float)uStack_d48 < local_d40)))) &&
                      (local_d9c <= uStack_d48._4_4_)))) && (uStack_d48._4_4_ < local_d3c))))
                goto LAB_052ea21c;
                BltTransformedOptimized(Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>*,Sexy::MemoryImage*,int,Sexy::SexyMatrix3_const&,Sexy::Color_const&,Sexy::TRect<int>const*,float,float,bool)
                ::aNewClipRect = (int)local_da0;
                DAT_06bbf8f8 = (int)(local_d40 - local_da0);
                DAT_06bbf8f4 = (int)local_d9c;
                DAT_06bbf8fc = (int)(local_d3c - local_d9c);
                VertexTList::VertexTList(aVStack_c98);
                VertexTList::push_back(aVStack_c98,aAStack_d18);
                VertexTList::push_back(aVStack_c98,aAStack_cf8);
                VertexTList::push_back(aVStack_c98,aAStack_cb8);
                VertexTList::push_back(aVStack_c98,aAStack_cd8);
                DrawPolyClipped((BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
                                 *)param_1,
                                (TRect *)&BltTransformedOptimized(Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>*,Sexy::MemoryImage*,int,Sexy::SexyMatrix3_const&,Sexy::Color_const&,Sexy::TRect<int>const*,float,float,bool)
                                          ::aNewClipRect,aVStack_c98);
                VertexTList::~VertexTList(aVStack_c98);
              }
              local_d30 = local_dc0;
              local_d2c = local_dbc;
              local_d20 = 0;
              local_d40 = local_d00;
              local_d3c = local_cfc;
              local_d38 = local_ca0;
              local_d34 = local_c9c;
              if ((iVar19 != 0) && (iVar7 != 0)) {
                local_d20 = 0;
                if (*(int *)(this + 0x44) != 0) {
                  local_d20 = iVar19 / *(int *)(this + 0x44);
                }
                iVar17 = 0;
                if (*(int *)(this + 0x48) != 0) {
                  iVar17 = iVar7 / *(int *)(this + 0x48);
                }
                local_d20 = local_d20 + iVar17 * *(int *)(this + 0x3c);
              }
              local_d28 = fVar32;
              local_d24 = fVar31;
              std::
              vector<Sexy::DeviceImage::CachedResult,std::allocator<Sexy::DeviceImage::CachedResult>>
              ::push_back((vector<Sexy::DeviceImage::CachedResult,std::allocator<Sexy::DeviceImage::CachedResult>>
                           *)&local_d98,(CachedResult *)&local_d40);
              iVar19 = iVar19 + local_dc0;
              fVar32 = fVar32 + (float)local_dc0;
            } while (iVar19 < iVar2);
          }
          iVar7 = iVar7 + local_dbc;
          fVar31 = fVar31 + (float)local_dbc;
        } while (iVar7 < iVar12);
      }
      DeviceImage::CachedImageDrawInfo::SaveResult
                ((CachedImageDrawInfo *)this_00,(vector *)&local_d98);
      std::vector<Sexy::DeviceImage::CachedResult,std::allocator<Sexy::DeviceImage::CachedResult>>::
      ~vector((vector<Sexy::DeviceImage::CachedResult,std::allocator<Sexy::DeviceImage::CachedResult>>
               *)&local_d98);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

