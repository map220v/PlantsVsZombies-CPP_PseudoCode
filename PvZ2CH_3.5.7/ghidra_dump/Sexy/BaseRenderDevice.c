// Class: Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>


/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::SceneBegun() */

BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
 __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::SceneBegun(BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
             *this)

{
  return this[0x44];
}


/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::FlushBufferedTriangles() */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::FlushBufferedTriangles
          (BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
           *this)

{
  if ((this[0x44] !=
       (BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
        )0x0) && (*(uint *)(this + 0x68) != 0)) {
    (**(code **)(*(long *)this + 0x2c0))
              (this,4,(ulong)*(uint *)(this + 0x68) / 3,*(undefined8 *)(this + 0x60),
               *(undefined4 *)(this + 0x2c),*(undefined4 *)(this + 0x30),0);
    *(undefined4 *)(this + 0x68) = 0;
    return;
  }
  return;
}


/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::GetBestTextureDimensions(int&, int&, bool, bool, unsigned int) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::GetBestTextureDimensions
          (BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
           *this,int *param_1,int *param_2,bool param_3,bool param_4,uint param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  if ((param_5 >> 1 & 1) != 0) {
    *param_2 = 0x40;
    *param_1 = 0x40;
    return;
  }
  if (GetBestTextureDimensions(int&,int&,bool,bool,unsigned_int)::haveInited == '\0') {
    GetBestTextureDimensions(int&,int&,bool,bool,unsigned_int)::haveInited = '\x01';
    piVar8 = &GetBestTextureDimensions(int&,int&,bool,bool,unsigned_int)::aGoodTextureSize;
    iVar7 = 0;
    iVar6 = 1;
    while( true ) {
      iVar4 = iVar6;
      iVar6 = iVar4;
      if (0x40 < iVar4 - iVar7) {
        iVar6 = iVar4 >> 1;
        iVar5 = 0;
        if (iVar6 != 0) {
          iVar5 = iVar7 / iVar6;
        }
        iVar5 = iVar5 * iVar6;
        while ((0x3f < iVar7 - iVar5 && (cVar3 = FUN_052d8c88(), cVar3 == '\0'))) {
          iVar6 = iVar6 >> 1;
          iVar5 = 0;
          if (iVar6 != 0) {
            iVar5 = iVar7 / iVar6;
          }
          iVar5 = iVar5 * iVar6;
        }
      }
      iVar7 = iVar7 + 1;
      *piVar8 = iVar6;
      if (iVar7 == 0x1000) break;
      piVar8 = piVar8 + 1;
      iVar6 = iVar4 << 1;
      if (iVar7 <= iVar4) {
        iVar6 = iVar4;
      }
    }
  }
  iVar7 = *param_1;
  iVar6 = *param_2;
  iVar4 = iVar6;
  if (param_4) {
    iVar4 = *(int *)(this + 0x14);
    if (iVar7 < *(int *)(this + 0x14)) {
      iVar4 = FUN_052d8c68(iVar7);
    }
    iVar7 = iVar4;
    iVar4 = *(int *)(this + 0x18);
    if (iVar6 < iVar4) {
      iVar4 = FUN_052d8c68(iVar6);
    }
  }
  iVar6 = *(int *)(this + 0xc);
  if (iVar7 < iVar6) {
    iVar5 = *(int *)(this + 0x10);
joined_r0x052d91ec:
    if (iVar4 < iVar5) goto LAB_052d90f8;
LAB_052d916c:
    if (iVar4 <= *(int *)(this + 0x18)) {
      bVar1 = SBORROW4(iVar6,iVar4);
      bVar2 = iVar6 - iVar4 < 0;
      iVar5 = iVar4;
      if (iVar4 < iVar6) goto LAB_052d9100;
      goto LAB_052d9144;
    }
    iVar5 = *(int *)(this + 0x18);
    if ((param_5 & 0x10) != 0) {
      iVar5 = iVar4;
    }
    bVar1 = SBORROW4(iVar6,iVar5);
    bVar2 = iVar6 - iVar5 < 0;
    iVar4 = iVar5;
    if (iVar6 <= iVar5) goto LAB_052d9144;
  }
  else {
    if (iVar7 <= *(int *)(this + 0x14)) {
      iVar5 = *(int *)(this + 0x10);
      iVar6 = iVar7;
      goto joined_r0x052d91ec;
    }
    iVar5 = *(int *)(this + 0x10);
    iVar6 = *(int *)(this + 0x14);
    if ((param_5 & 0x10) != 0) {
      iVar6 = iVar7;
    }
    if (iVar5 <= iVar4) goto LAB_052d916c;
LAB_052d90f8:
    bVar1 = SBORROW4(iVar6,iVar5);
    bVar2 = iVar6 - iVar5 < 0;
    iVar4 = iVar5;
    if (iVar6 <= iVar5) {
LAB_052d9144:
      if (bVar2 != bVar1) {
        for (; iVar6 * *(int *)(this + 0x1c) < iVar4; iVar6 = iVar6 * 2) {
        }
      }
      goto LAB_052d9120;
    }
  }
LAB_052d9100:
  for (iVar4 = iVar5; iVar4 * *(int *)(this + 0x1c) < iVar6; iVar4 = iVar4 * 2) {
  }
LAB_052d9120:
  *param_1 = iVar6;
  *param_2 = iVar4;
  return;
}


/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::GetBackBufferDimensions(unsigned int&, unsigned int&) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::GetBackBufferDimensions
          (BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
           *this,uint *param_1,uint *param_2)

{
  *param_1 = *(uint *)(this + 0x34);
  *param_2 = *(uint *)(this + 0x38);
  return;
}


/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::BufferedDrawPrimitive(int, unsigned int, Sexy::AndroidGL20Vertex
   const*, int, unsigned int) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::BufferedDrawPrimitive
          (BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
           *this,int param_1,uint param_2,AndroidGL20Vertex *param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  AndroidGL20Vertex *pAVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  AndroidGL20Vertex *pAVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  
  if (((param_4 == *(int *)(this + 0x2c)) && (*(uint *)(this + 0x30) == param_5)) &&
     (param_1 - 4U < 3)) {
    if (param_1 == 4) {
      (**(code **)(*(long *)this + 0x2c8))();
      if (param_2 == 0) {
        uVar16 = *(uint *)(this + 0x68);
        uVar21 = *(uint *)(this + 0x6c);
      }
      else {
        uVar16 = *(uint *)(this + 0x68);
        uVar21 = *(uint *)(this + 0x6c);
        pAVar17 = param_3;
        do {
          if (uVar21 - 3 < uVar16) {
            (**(code **)(*(long *)this + 0x2f8))(this);
            uVar16 = *(uint *)(this + 0x68);
            uVar21 = *(uint *)(this + 0x6c);
          }
          lVar18 = *(long *)(this + 0x60);
          uVar11 = *(undefined8 *)(pAVar17 + 8);
          puVar4 = (undefined8 *)(lVar18 + (ulong)uVar16 * 0x20);
          pAVar3 = pAVar17 + 0x60;
          uVar2 = uVar16 + 1;
          uVar15 = uVar16 + 2;
          uVar16 = uVar16 + 3;
          *puVar4 = *(undefined8 *)pAVar17;
          puVar4[1] = uVar11;
          puVar5 = (undefined8 *)(lVar18 + (ulong)uVar2 * 0x20);
          puVar6 = (undefined8 *)(lVar18 + (ulong)uVar15 * 0x20);
          uVar11 = *(undefined8 *)(pAVar17 + 0x18);
          puVar4[2] = *(undefined8 *)(pAVar17 + 0x10);
          puVar4[3] = uVar11;
          uVar11 = *(undefined8 *)(pAVar17 + 0x28);
          *puVar5 = *(undefined8 *)(pAVar17 + 0x20);
          puVar5[1] = uVar11;
          uVar11 = *(undefined8 *)(pAVar17 + 0x38);
          puVar5[2] = *(undefined8 *)(pAVar17 + 0x30);
          puVar5[3] = uVar11;
          uVar11 = *(undefined8 *)(pAVar17 + 0x40);
          uVar12 = *(undefined8 *)(pAVar17 + 0x48);
          *(uint *)(this + 0x68) = uVar16;
          *puVar6 = uVar11;
          puVar6[1] = uVar12;
          uVar11 = *(undefined8 *)(pAVar17 + 0x58);
          puVar6[2] = *(undefined8 *)(pAVar17 + 0x50);
          puVar6[3] = uVar11;
          pAVar17 = pAVar3;
        } while (pAVar3 != param_3 + ((ulong)(param_2 - 1) + 1) * 0x60);
      }
    }
    else {
      uVar2 = param_2 * 3;
      if (*(uint *)(this + 0x6c) < uVar2) goto LAB_052dd80c;
      (**(code **)(*(long *)this + 0x2c8))();
      if (param_1 == 6) {
        uVar21 = *(uint *)(this + 0x6c);
        uVar16 = *(uint *)(this + 0x68);
        if (uVar21 - uVar16 < uVar2) {
          (**(code **)(*(long *)this + 0x2f8))(this);
          uVar16 = *(uint *)(this + 0x68);
          uVar21 = *(uint *)(this + 0x6c);
        }
        lVar18 = *(long *)(this + 0x60);
        uVar11 = *(undefined8 *)(param_3 + 8);
        puVar4 = (undefined8 *)(lVar18 + (ulong)uVar16 * 0x20);
        uVar13 = *(undefined4 *)(param_3 + 0x10);
        uVar14 = *(undefined4 *)(param_3 + 0x14);
        uVar34 = *(undefined4 *)param_3;
        uVar35 = *(undefined4 *)(param_3 + 4);
        puVar5 = (undefined8 *)(lVar18 + (ulong)(uVar16 + 1) * 0x20);
        uVar33 = *(undefined4 *)(param_3 + 8);
        puVar6 = (undefined8 *)(lVar18 + (ulong)(uVar16 + 2) * 0x20);
        uVar31 = *(undefined4 *)(param_3 + 0xc);
        uVar16 = uVar16 + 3;
        uVar32 = *(undefined4 *)(param_3 + 0x18);
        uVar30 = *(undefined4 *)(param_3 + 0x1c);
        *puVar4 = *(undefined8 *)param_3;
        puVar4[1] = uVar11;
        uVar11 = *(undefined8 *)(param_3 + 0x18);
        puVar4[2] = *(undefined8 *)(param_3 + 0x10);
        puVar4[3] = uVar11;
        uVar11 = *(undefined8 *)(param_3 + 0x28);
        *puVar5 = *(undefined8 *)(param_3 + 0x20);
        puVar5[1] = uVar11;
        uVar11 = *(undefined8 *)(param_3 + 0x38);
        puVar5[2] = *(undefined8 *)(param_3 + 0x30);
        puVar5[3] = uVar11;
        uVar11 = *(undefined8 *)(param_3 + 0x40);
        uVar12 = *(undefined8 *)(param_3 + 0x48);
        uVar26 = *(undefined4 *)(param_3 + 0x50);
        uVar27 = *(undefined4 *)(param_3 + 0x54);
        uVar22 = *(undefined4 *)(param_3 + 0x40);
        uVar23 = *(undefined4 *)(param_3 + 0x44);
        uVar24 = *(undefined4 *)(param_3 + 0x48);
        uVar25 = *(undefined4 *)(param_3 + 0x4c);
        uVar28 = *(undefined4 *)(param_3 + 0x58);
        uVar29 = *(undefined4 *)(param_3 + 0x5c);
        *(uint *)(this + 0x68) = uVar16;
        *puVar6 = uVar11;
        puVar6[1] = uVar12;
        uVar11 = *(undefined8 *)(param_3 + 0x58);
        puVar6[2] = *(undefined8 *)(param_3 + 0x50);
        puVar6[3] = uVar11;
        if (param_2 != 1) {
          pAVar17 = param_3 + 0x60;
          do {
            if (uVar21 - uVar16 < 3) {
              (**(code **)(*(long *)this + 0x2f8))(this);
              uVar16 = *(uint *)(this + 0x68);
              lVar18 = *(long *)(this + 0x60);
              uVar21 = *(uint *)(this + 0x6c);
            }
            lVar7 = lVar18 + (ulong)uVar16 * 0x20;
            lVar19 = (ulong)(uVar16 + 1) * 0x20;
            *(undefined4 *)(lVar18 + (ulong)uVar16 * 0x20) = uVar34;
            lVar8 = lVar18 + lVar19;
            *(undefined4 *)(lVar7 + 4) = uVar35;
            *(undefined4 *)(lVar7 + 0x10) = uVar13;
            pAVar3 = pAVar17 + 0x20;
            *(undefined4 *)(lVar7 + 0x14) = uVar14;
            puVar4 = (undefined8 *)(lVar18 + (ulong)(uVar16 + 2) * 0x20);
            *(undefined4 *)(lVar7 + 8) = uVar33;
            uVar16 = uVar16 + 3;
            *(undefined4 *)(lVar7 + 0xc) = uVar31;
            *(undefined4 *)(lVar7 + 0x18) = uVar32;
            *(undefined4 *)(lVar7 + 0x1c) = uVar30;
            *(undefined4 *)(lVar18 + lVar19) = uVar22;
            *(undefined4 *)(lVar8 + 0x10) = uVar26;
            *(undefined4 *)(lVar8 + 0x14) = uVar27;
            *(undefined4 *)(lVar8 + 4) = uVar23;
            *(undefined4 *)(lVar8 + 8) = uVar24;
            *(undefined4 *)(lVar8 + 0xc) = uVar25;
            *(undefined4 *)(lVar8 + 0x18) = uVar28;
            *(undefined4 *)(lVar8 + 0x1c) = uVar29;
            uVar26 = *(undefined4 *)(pAVar17 + 0x10);
            uVar11 = *(undefined8 *)(pAVar17 + 8);
            uVar27 = *(undefined4 *)(pAVar17 + 0x14);
            uVar22 = *(undefined4 *)pAVar17;
            uVar23 = *(undefined4 *)(pAVar17 + 4);
            uVar24 = *(undefined4 *)(pAVar17 + 8);
            uVar25 = *(undefined4 *)(pAVar17 + 0xc);
            uVar28 = *(undefined4 *)(pAVar17 + 0x18);
            uVar29 = *(undefined4 *)(pAVar17 + 0x1c);
            *puVar4 = *(undefined8 *)pAVar17;
            puVar4[1] = uVar11;
            uVar11 = *(undefined8 *)(pAVar17 + 0x18);
            puVar4[2] = *(undefined8 *)(pAVar17 + 0x10);
            puVar4[3] = uVar11;
            *(uint *)(this + 0x68) = uVar16;
            pAVar17 = pAVar3;
          } while (pAVar3 != param_3 + 0x60 + ((ulong)(param_2 - 2) + 1) * 0x20);
        }
      }
      else {
        uVar21 = *(uint *)(this + 0x6c);
        uVar15 = *(uint *)(this + 0x68);
        if (uVar21 - uVar15 < uVar2) {
          (**(code **)(*(long *)this + 0x2f8))(this);
          uVar15 = *(uint *)(this + 0x68);
          uVar21 = *(uint *)(this + 0x6c);
        }
        lVar18 = *(long *)(this + 0x60);
        uVar11 = *(undefined8 *)(param_3 + 8);
        puVar4 = (undefined8 *)(lVar18 + (ulong)uVar15 * 0x20);
        uVar16 = uVar15 + 3;
        puVar5 = (undefined8 *)(lVar18 + (ulong)(uVar15 + 1) * 0x20);
        *puVar4 = *(undefined8 *)param_3;
        puVar4[1] = uVar11;
        puVar6 = (undefined8 *)(lVar18 + (ulong)(uVar15 + 2) * 0x20);
        uVar11 = *(undefined8 *)(param_3 + 0x18);
        puVar4[2] = *(undefined8 *)(param_3 + 0x10);
        puVar4[3] = uVar11;
        uVar11 = *(undefined8 *)(param_3 + 0x28);
        *puVar5 = *(undefined8 *)(param_3 + 0x20);
        puVar5[1] = uVar11;
        uVar11 = *(undefined8 *)(param_3 + 0x38);
        puVar5[2] = *(undefined8 *)(param_3 + 0x30);
        puVar5[3] = uVar11;
        uVar11 = *(undefined8 *)(param_3 + 0x40);
        uVar12 = *(undefined8 *)(param_3 + 0x48);
        *(uint *)(this + 0x68) = uVar16;
        *puVar6 = uVar11;
        puVar6[1] = uVar12;
        uVar11 = *(undefined8 *)(param_3 + 0x58);
        puVar6[2] = *(undefined8 *)(param_3 + 0x50);
        puVar6[3] = uVar11;
        if (param_2 != 1) {
          uVar20 = *(uint *)(this + 0x68);
          pAVar17 = param_3 + 0x60;
          uVar1 = uVar16;
          do {
            puVar4 = (undefined8 *)(lVar18 + (ulong)uVar1 * 0x20);
            puVar5 = (undefined8 *)(lVar18 + (ulong)(uVar1 - 2) * 0x20);
            puVar6 = (undefined8 *)(lVar18 + (ulong)(uVar1 - 1) * 0x20);
            puVar9 = (undefined8 *)(lVar18 + (ulong)(uVar20 + 1) * 0x20);
            uVar11 = puVar5[1];
            *puVar4 = *puVar5;
            puVar4[1] = uVar11;
            puVar10 = (undefined8 *)(lVar18 + (ulong)(uVar1 + 2) * 0x20);
            uVar20 = uVar1 + 3;
            uVar11 = puVar5[3];
            puVar4[2] = puVar5[2];
            puVar4[3] = uVar11;
            uVar11 = puVar6[1];
            *puVar9 = *puVar6;
            puVar9[1] = uVar11;
            uVar11 = puVar6[3];
            puVar9[2] = puVar6[2];
            puVar9[3] = uVar11;
            uVar11 = *(undefined8 *)(pAVar17 + 8);
            *puVar10 = *(undefined8 *)pAVar17;
            puVar10[1] = uVar11;
            uVar11 = *(undefined8 *)(pAVar17 + 0x18);
            puVar10[2] = *(undefined8 *)(pAVar17 + 0x10);
            puVar10[3] = uVar11;
            *(uint *)(this + 0x68) = uVar20;
            pAVar17 = pAVar17 + 0x20;
            uVar1 = uVar20;
          } while (uVar20 != uVar2 + uVar15);
          uVar16 = uVar16 + (uVar2 - 3);
        }
      }
    }
    if (uVar21 < uVar16 + 3) {
      (**(code **)(*(long *)this + 0x2f8))(this);
    }
  }
  else {
LAB_052dd80c:
    (**(code **)(*(long *)this + 0x2f8))(this);
    (**(code **)(*(long *)this + 0x2c0))(this,param_1,param_2,param_3,param_4,param_5,1);
  }
  return;
}


/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::PopTransform() */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::PopTransform(BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
               *this)

{
  char cVar1;
  
  cVar1 = std::vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>>::empty
                    ((vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>> *)(this + 0x48));
  if (cVar1 != '\0') {
    return;
  }
  FUN_052da48c(this + 0x50);
  return;
}


/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::~BaseRenderDevice() */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::~BaseRenderDevice(BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
                    *this)

{
  *(undefined **)this = &DAT_06a33650;
  std::set<Sexy::MemoryImage*,std::less<Sexy::MemoryImage*>,std::allocator<Sexy::MemoryImage*>>::
  ~set((set<Sexy::MemoryImage*,std::less<Sexy::MemoryImage*>,std::allocator<Sexy::MemoryImage*>> *)
       (this + 0x78));
  std::vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>>::~vector
            ((vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>> *)(this + 0x48));
  return;
}


/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::~BaseRenderDevice() */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::~BaseRenderDevice(BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
                    *this)

{
  ~BaseRenderDevice(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::BaseRenderDevice(Sexy::IGraphicsDriver*) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::BaseRenderDevice(BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
                   *this,IGraphicsDriver *param_1)

{
  RenderDevice3D::RenderDevice3D((RenderDevice3D *)this);
  *(undefined **)this = &DAT_06a33650;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x78));
  *(undefined4 *)(this + 0x68) = 0;
  *(IGraphicsDriver **)(this + 0x70) = param_1;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  this[0x44] = (BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
                )0x0;
  this[0x29] = (BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
                )0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::PopTransform(Sexy::SexyMatrix3&) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::PopTransform(BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
               *this,SexyMatrix3 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = std::vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>>::empty
                    ((vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>> *)(this + 0x48));
  if (cVar2 == '\0') {
    puVar3 = (undefined8 *)
             std::vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>>::back
                       ((vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>> *)(this + 0x48)
                       );
    uVar1 = puVar3[1];
    *(undefined8 *)param_1 = *puVar3;
    *(undefined8 *)(param_1 + 8) = uVar1;
    uVar1 = puVar3[3];
    *(undefined8 *)(param_1 + 0x10) = puVar3[2];
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(puVar3 + 4);
  }
  else {
    SexyMatrix3::LoadIdentity((SexyMatrix3 *)&local_30);
    *(undefined4 *)(param_1 + 0x20) = local_10;
    *(undefined8 *)param_1 = local_30;
    *(undefined8 *)(param_1 + 8) = uStack_28;
    *(undefined8 *)(param_1 + 0x10) = local_20;
    *(undefined8 *)(param_1 + 0x18) = uStack_18;
  }
  (**(code **)(*(long *)this + 0x170))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::DrawLine(double, double, double, double, Sexy::Color const&, int,
   bool) */

void Sexy::
     BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
     ::DrawLine(double param_1,double param_2,double param_3,double param_4,Color *param_5,
               int param_6,bool param_7)

{
  vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>> *this;
  char cVar1;
  uint uVar2;
  PopTransformMatrix *pPVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_78;
  float fStack_74;
  float local_70;
  float local_6c;
  AndroidGL20Vertex aAStack_68 [32];
  AndroidGL20Vertex aAStack_48 [32];
  AndroidGL20Vertex aAStack_28 [32];
  long local_8;
  
  piVar4 = (int *)(ulong)(uint)param_6;
  local_8 = ___stack_chk_guard;
  cVar1 = BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
          ::PreDraw((BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                     *)param_5);
  if (cVar1 != '\0') {
    this = (vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>> *)(param_5 + 0x48);
    BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
    ::SetupDrawMode((BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                     *)param_5,(uint)param_7);
    uVar2 = AndroidGL20Vertex::PackColor(*piVar4,piVar4[1],piVar4[2],piVar4[3]);
    cVar1 = std::vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>>::empty(this);
    if (cVar1 == '\0') {
      FastCurve::SetOutRange((FastCurve *)&local_78,(float)param_1,(float)param_2);
      fVar6 = (float)param_4;
      FastCurve::SetOutRange((FastCurve *)&local_70,(float)param_3,fVar6);
      pPVar3 = (PopTransformMatrix *)
               std::vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>>::back(this);
      local_78 = (float)PopTransformMatrix::operator*(pPVar3,(SexyVector2 *)&local_78);
      fStack_74 = fVar6;
      pPVar3 = (PopTransformMatrix *)
               std::vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>>::back(this);
      fVar7 = (float)PopTransformMatrix::operator*(pPVar3,(SexyVector2 *)&local_70);
      fVar9 = local_78;
      fVar8 = fStack_74;
      local_70 = fVar7;
      local_6c = fVar6;
    }
    else {
      fVar7 = (float)param_3;
      fVar6 = (float)param_4;
      fVar9 = (float)param_1;
      fVar8 = (float)param_2;
    }
    fVar5 = (float)BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetBltDepth
                             (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)
                               (param_5 + 0x80a8));
    AndroidGL20Vertex::AndroidGL20Vertex(aAStack_68,fVar9,fVar8,fVar5,0.0,0.0,uVar2);
    AndroidGL20Vertex::AndroidGL20Vertex(aAStack_48,fVar7,fVar6,fVar5,0.0,0.0,uVar2);
    AndroidGL20Vertex::AndroidGL20Vertex(aAStack_28);
    GLTexHolder::GLTexHolder((GLTexHolder *)&local_78,0);
    FastCurve::SetOutRange((FastCurve *)&local_70,1.0,1.0);
    BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
    ::SetTextureSingle(local_70,local_6c,param_5,0,CONCAT44(fStack_74,local_78));
    BufferedDrawPrimitive
              ((BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
                *)param_5,3,1,aAStack_68,*(int *)(param_5 + 0x2c),*(uint *)(param_5 + 0x30));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::FillRect(Sexy::TRect<int> const&, Sexy::Color const&, int) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::FillRect(BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
           *this,TRect *param_1,Color *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  PopTransformMatrix *this_00;
  FastCurve *pFVar4;
  int iVar5;
  long lVar6;
  AndroidGL20Vertex *this_01;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  FastCurve local_a8 [4];
  FastCurve local_a4 [4];
  FastCurve aFStack_a0 [8];
  FastCurve aFStack_98 [8];
  FastCurve aFStack_90 [8];
  AndroidGL20Vertex aAStack_88 [32];
  AndroidGL20Vertex aAStack_68 [32];
  AndroidGL20Vertex aAStack_48 [32];
  AndroidGL20Vertex aAStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
          ::PreDraw((BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                     *)this);
  if (cVar2 != '\0') {
    BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
    ::SetupDrawMode((BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                     *)this,param_3);
    uVar3 = AndroidGL20Vertex::PackColor
                      (*(int *)param_2,*(int *)(param_2 + 4),*(int *)(param_2 + 8),
                       *(int *)(param_2 + 0xc));
    iVar5 = *(int *)(param_1 + 8);
    iVar1 = *(int *)(param_1 + 0xc);
    fVar10 = (float)*(int *)param_1 + *(float *)(this + 8);
    fVar9 = (float)*(int *)(param_1 + 4) + *(float *)(this + 8);
    fVar7 = (float)BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetBltDepth
                             (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8));
    fVar12 = fVar10 + (float)iVar5;
    fVar11 = fVar9 + (float)iVar1;
    AndroidGL20Vertex::AndroidGL20Vertex(aAStack_88,fVar10,fVar9,fVar7,0.0,0.0,uVar3);
    AndroidGL20Vertex::AndroidGL20Vertex(aAStack_68,fVar12,fVar9,fVar7,0.0,0.0,uVar3);
    AndroidGL20Vertex::AndroidGL20Vertex(aAStack_48,fVar10,fVar11,fVar7,0.0,0.0,uVar3);
    AndroidGL20Vertex::AndroidGL20Vertex(aAStack_28,fVar12,fVar11,fVar7,0.0,0.0,uVar3);
    cVar2 = std::vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>>::empty
                      ((vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>> *)(this + 0x48))
    ;
    if (cVar2 == '\0') {
      FastCurve::SetOutRange(local_a8,fVar10,fVar9);
      FastCurve::SetOutRange(aFStack_a0,fVar10,fVar11);
      FastCurve::SetOutRange(aFStack_98,fVar12,fVar9);
      FastCurve::SetOutRange(aFStack_90,fVar12,fVar11);
      iVar5 = 0;
      pFVar4 = local_a8;
      this_01 = aAStack_88;
      do {
        lVar6 = (long)iVar5;
        iVar5 = iVar5 + 1;
        this_00 = (PopTransformMatrix *)
                  std::vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>>::back
                            ((vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>> *)
                             (this + 0x48));
        uVar8 = PopTransformMatrix::operator*(this_00,(SexyVector2 *)pFVar4);
        *(undefined4 *)(local_a8 + lVar6 * 8) = uVar8;
        *(float *)(aFStack_a0 + lVar6 * 8 + -4) = fVar11;
        fVar9 = *(float *)(this + 8) + *(float *)pFVar4;
        fVar11 = *(float *)(this + 8) + *(float *)(pFVar4 + 4);
        *(float *)pFVar4 = fVar9;
        *(float *)(pFVar4 + 4) = fVar11;
        EATextSquish::Vec3::Vec3((Vec3 *)this_01,fVar9,fVar11,fVar7);
        pFVar4 = (FastCurve *)(pFVar4 + 8);
        this_01 = (AndroidGL20Vertex *)(this_01 + 0x20);
      } while (iVar5 != 4);
    }
    GLTexHolder::GLTexHolder((GLTexHolder *)&local_b8,0);
    FastCurve::SetOutRange((FastCurve *)&local_b0,1.0,1.0);
    BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
    ::SetTextureSingle(local_b0,local_ac,this,0,local_b8);
    BufferedDrawPrimitive(this,5,2,aAStack_88,*(int *)(this + 0x2c),*(uint *)(this + 0x30));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::DrawPolyClipped(Sexy::TRect<int> const*,
   Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::VertexTList const&) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::DrawPolyClipped(BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
                  *this,TRect *param_1,VertexTList *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  VertexTList *pVVar4;
  int iVar5;
  AndroidGL20Vertex *pAVar6;
  VertexTList *local_1938;
  VertexTList *local_1930;
  VertexTList aVStack_1928 [3216];
  VertexTList aVStack_c98 [3216];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  VertexTList::VertexTList(aVStack_1928);
  VertexTList::VertexTList(aVStack_c98);
  FUN_052e04c0(aVStack_1928,param_2 + 0xc80,param_2 + 0xc88);
  iVar5 = *(int *)param_1;
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0xc);
  local_1938 = aVStack_1928;
  local_1930 = aVStack_c98;
  FUN_052e01ec((float)iVar5,0,aVStack_1928,aVStack_c98);
  std::swap<Sexy::PIInterpolatorPoint*>
            ((PIInterpolatorPoint **)&local_1938,(PIInterpolatorPoint **)&local_1930);
  FUN_052da0c8(local_1930 + 0xc88);
  FUN_052e01ec((float)iVar2,1,local_1938,local_1930);
  std::swap<Sexy::PIInterpolatorPoint*>
            ((PIInterpolatorPoint **)&local_1938,(PIInterpolatorPoint **)&local_1930);
  FUN_052da0c8(local_1930 + 0xc88);
  FUN_052e03fc((float)(iVar5 + iVar1),0,local_1938,local_1930);
  std::swap<Sexy::PIInterpolatorPoint*>
            ((PIInterpolatorPoint **)&local_1938,(PIInterpolatorPoint **)&local_1930);
  FUN_052da0c8(local_1930 + 0xc88);
  FUN_052e03fc((float)(iVar2 + iVar3),1,local_1938,local_1930);
  pVVar4 = local_1930;
  iVar5 = FUN_052da0d0(*(undefined4 *)(local_1930 + 0xc88));
  if (2 < iVar5) {
    pAVar6 = (AndroidGL20Vertex *)FUN_052da0d4(*(undefined8 *)(pVVar4 + 0xc80),0);
    BufferedDrawPrimitive(this,6,iVar5 - 2,pAVar6,*(int *)(this + 0x2c),*(uint *)(this + 0x30));
  }
  VertexTList::~VertexTList(aVStack_c98);
  VertexTList::~VertexTList(aVStack_1928);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::BltTransformed(Sexy::Image*, Sexy::TRect<int> const*, Sexy::Color
   const&, int, Sexy::TRect<int> const&, Sexy::SexyMatrix3 const&, bool, float, float, bool) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::BltTransformed(BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
                 *this,Image *param_1,TRect *param_2,Color *param_3,int param_4,TRect *param_5,
                SexyMatrix3 *param_6,bool param_7,float param_8,float param_9,bool param_10)

{
  vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>> *this_00;
  bool bVar1;
  char cVar2;
  long lVar3;
  TextureData *this_01;
  SexyMatrix3 *pSVar4;
  SexyTransform2D aSStack_58 [8];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [20];
  SexyMatrix3 aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
          ::PreDraw((BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                     *)this);
  if (cVar2 != '\0') {
    lVar3 = (**(code **)(*(long *)this + 0x2f0))(this,0,param_1);
    cVar2 = (**(code **)(*(long *)this + 0x118))(this,lVar3);
    if (cVar2 != '\0') {
      bVar1 = false;
      if ((((param_4 == 0) && (bVar1 = false, *(char *)(lVar3 + 0x92) == '\0')) &&
          (0xfe < *(int *)(param_3 + 0xc))) &&
         (40000 < *(int *)(param_1 + 0x38) * *(int *)(param_1 + 0x3c))) {
        bVar1 = true;
        (**(code **)(*(long *)this + 0x1b0))(this,2);
      }
      this_00 = (vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>> *)(this + 0x48);
      BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
      ::SetupDrawMode((BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                       *)this,param_4);
      this_01 = (TextureData *)FUN_052d96a0(*(undefined8 *)(lVar3 + 0x20));
      cVar2 = std::vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>>::empty(this_00);
      if (cVar2 == '\0') {
        if ((param_8 == 0.0) && (param_9 == 0.0)) {
          pSVar4 = (SexyMatrix3 *)
                   std::vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>>::back(this_00);
          SexyMatrix3::operator*(pSVar4,param_6);
          SexyTransform2D::SexyTransform2D(aSStack_58,aSStack_30);
          TextureData::BltTransformed
                    (this_01,(BaseRenderDevice *)this,(MemoryImage *)param_1,param_4,
                     (SexyMatrix3 *)aSStack_58,param_5,param_3,param_2,param_8,param_9,param_10);
        }
        else {
          SexyTransform2D::SexyTransform2D(aSStack_58);
          if (param_10) {
            FUN_052d9660((float)-*(int *)(param_5 + 8) * 0.5,(float)-*(int *)(param_5 + 0xc) * 0.5,
                         auStack_50,auStack_44);
          }
          SexyMatrix3::operator*(param_6,(SexyMatrix3 *)aSStack_58);
          SexyTransform2D::operator=(aSStack_58,aSStack_30);
          FUN_052d9660(param_8,param_9,auStack_50,auStack_44);
          pSVar4 = (SexyMatrix3 *)
                   std::vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>>::back(this_00);
          SexyMatrix3::operator*(pSVar4,(SexyMatrix3 *)aSStack_58);
          SexyTransform2D::operator=(aSStack_58,aSStack_30);
          TextureData::BltTransformed
                    (this_01,(BaseRenderDevice *)this,(MemoryImage *)param_1,param_4,
                     (SexyMatrix3 *)aSStack_58,param_5,param_3,param_2,0.0,0.0,false);
        }
      }
      else {
        TextureData::BltTransformed
                  (this_01,(BaseRenderDevice *)this,(MemoryImage *)param_1,param_4,param_6,param_5,
                   param_3,param_2,param_8,param_9,param_10);
      }
      if (bVar1) {
        (**(code **)(*(long *)this + 0x1b0))(this,0xffff,0xffff);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::BltStretchedAndRotated(Sexy::Image*, Sexy::TRect<int> const&,
   Sexy::TRect<int> const&, Sexy::TRect<int> const&, Sexy::Color const&, int, double, float, float,
   bool, bool) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::BltStretchedAndRotated
          (BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
           *this,Image *param_1,TRect *param_2,TRect *param_3,TRect *param_4,Color *param_5,
          int param_6,double param_7,float param_8,float param_9,bool param_10,bool param_11)

{
  int iVar1;
  int iVar2;
  float fVar3;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SexyTransform2D::SexyTransform2D(aSStack_30);
  iVar1 = *(int *)(param_2 + 0xc);
  iVar2 = *(int *)(param_3 + 0xc);
  fVar3 = (float)*(int *)(param_2 + 8) / (float)*(int *)(param_3 + 8);
  if (param_11) {
    FUN_052d9660(-(float)*(int *)(param_3 + 8),0,auStack_28,auStack_1c);
    SexyTransform2D::Scale(aSStack_30,-fVar3,(float)iVar1 / (float)iVar2);
  }
  else {
    SexyTransform2D::Scale(aSStack_30,fVar3,(float)iVar1 / (float)iVar2);
  }
  FUN_052d9660(-param_8,-param_9,auStack_28,auStack_1c);
  SexyTransform2D::RotateRad(aSStack_30,(float)param_7);
  FUN_052d9660(param_8,param_9,auStack_28,auStack_1c);
  FUN_052d9660((float)*(int *)param_2,(float)*(int *)(param_2 + 4),auStack_28,auStack_1c);
  BltTransformed(this,param_1,param_4,param_5,param_6,param_3,(SexyMatrix3 *)aSStack_30,!param_10,
                 0.0,0.0,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::BltStretched(Sexy::Image*, Sexy::TRect<int> const&,
   Sexy::TRect<int> const&, Sexy::TRect<int> const&, Sexy::Color const&, int, bool, bool) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::BltStretched(BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
               *this,Image *param_1,TRect *param_2,TRect *param_3,TRect *param_4,Color *param_5,
              int param_6,bool param_7,bool param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_3 + 8);
  iVar3 = *(int *)(param_2 + 0xc);
  iVar4 = *(int *)(param_3 + 0xc);
  local_8 = ___stack_chk_guard;
  SexyTransform2D::SexyTransform2D(aSStack_30);
  if (param_8) {
    FUN_052d9660(-(float)*(int *)(param_3 + 8),0,auStack_28,auStack_1c);
    SexyTransform2D::Scale(aSStack_30,-((float)iVar1 / (float)iVar2),(float)iVar3 / (float)iVar4);
  }
  else {
    SexyTransform2D::Scale(aSStack_30,(float)iVar1 / (float)iVar2,(float)iVar3 / (float)iVar4);
  }
  FUN_052d9660((float)*(int *)param_2,(float)*(int *)(param_2 + 4),auStack_28,auStack_1c);
  BltTransformed(this,param_1,param_4,param_5,param_6,param_3,(SexyMatrix3 *)aSStack_30,!param_7,0.0
                 ,0.0,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::BltMirror(Sexy::Image*, int, int, Sexy::TRect<int> const&,
   Sexy::Color const&, int) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::BltMirror(BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
            *this,Image *param_1,int param_2,int param_3,TRect *param_4,Color *param_5,int param_6)

{
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SexyTransform2D::SexyTransform2D(aSStack_30);
  FUN_052d9660(-(float)*(int *)(param_4 + 8),0,auStack_28,auStack_1c);
  SexyTransform2D::Scale(aSStack_30,-1.0,1.0);
  FUN_052d9660((float)param_2,(float)param_3,auStack_28,auStack_1c);
  BltTransformed(this,param_1,(TRect *)0x0,param_5,param_6,param_4,(SexyMatrix3 *)aSStack_30,false,
                 0.0,0.0,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::BltMatrix2(Sexy::Image*, float, float, Sexy::SexyMatrix3 const&,
   Sexy::TRect<int> const&, Sexy::Color const&, int, Sexy::TRect<int> const&, bool, bool) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::BltMatrix2(BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
             *this,Image *param_1,float param_2,float param_3,SexyMatrix3 *param_4,TRect *param_5,
            Color *param_6,int param_7,TRect *param_8,bool param_9,bool param_10)

{
  BltTransformed(this,param_1,param_5,param_6,param_7,param_8,param_4,param_9,param_2,param_3,
                 param_10);
  return;
}


/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::BltMatrix(Sexy::Image*, float, float, Sexy::SexyMatrix3 const&,
   Sexy::TRect<int> const&, Sexy::Color const&, int, Sexy::TRect<int> const&, bool) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::BltMatrix(BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
            *this,Image *param_1,float param_2,float param_3,SexyMatrix3 *param_4,TRect *param_5,
           Color *param_6,int param_7,TRect *param_8,bool param_9)

{
  BltTransformed(this,param_1,param_5,param_6,param_7,param_8,param_4,param_9,param_2,param_3,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::BltRotated(Sexy::Image*, float, float, Sexy::TRect<int> const&,
   Sexy::TRect<int> const&, Sexy::Color const&, int, double, float, float) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::BltRotated(BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
             *this,Image *param_1,float param_2,float param_3,TRect *param_4,TRect *param_5,
            Color *param_6,int param_7,double param_8,float param_9,float param_10)

{
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SexyTransform2D::SexyTransform2D(aSStack_30);
  FUN_052d9660(-param_9,-param_10,auStack_28,auStack_1c);
  SexyTransform2D::RotateRad(aSStack_30,(float)param_8);
  FUN_052d9660(param_9 + param_2,param_10 + param_3,auStack_28,auStack_1c);
  BltTransformed(this,param_1,param_5,param_6,param_7,param_4,(SexyMatrix3 *)aSStack_30,true,0.0,0.0
                 ,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::BltClipF(Sexy::Image*, float, float, Sexy::TRect<int> const&,
   Sexy::TRect<int> const*, Sexy::Color const&, int) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::BltClipF(BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
           *this,Image *param_1,float param_2,float param_3,TRect *param_4,TRect *param_5,
          Color *param_6,int param_7)

{
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SexyTransform2D::SexyTransform2D(aSStack_30);
  FUN_052d9660(CONCAT44(in_register_00005004,param_2),CONCAT44(in_register_00005024,param_3),
               auStack_28,auStack_1c);
  BltTransformed(this,param_1,param_5,param_6,param_7,param_4,(SexyMatrix3 *)aSStack_30,true,0.0,0.0
                 ,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::Blt(Sexy::Image*, int, int, Sexy::TRect<int> const&, Sexy::Color
   const&, int) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::Blt(BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
      *this,Image *param_1,int param_2,int param_3,TRect *param_4,Color *param_5,int param_6)

{
  FUN_052e18e8((float)param_2,(float)param_3,this,param_1,param_4,param_5,param_6);
  return;
}


/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::BltStretch(Sexy::Image*, int, int, Sexy::TRect<int> const&,
   Sexy::Color const&, int) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::BltStretch(BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
             *this,Image *param_1,int param_2,int param_3,TRect *param_4,Color *param_5,int param_6)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  cVar1 = std::vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>>::empty
                    ((vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>> *)(this + 0x48));
  if (cVar1 == '\0') {
    BltClipF(this,param_1,(float)param_2,(float)param_3,param_4,(TRect *)0x0,param_5,param_6);
    return;
  }
  cVar1 = BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
          ::PreDraw((BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                     *)this);
  if (cVar1 != '\0') {
    lVar2 = (**(code **)(*(long *)this + 0x2f0))(this,0,param_1);
    cVar1 = (**(code **)(*(long *)this + 0x118))(this,lVar2);
    if (cVar1 != '\0') {
      BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
      ::SetupDrawMode((BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                       *)this,param_6);
      uVar3 = FUN_052d96a0(*(undefined8 *)(lVar2 + 0x20));
      FUN_052ddcb8((float)param_2,(float)param_3,uVar3,this,param_4,param_5);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::FillPoly(Sexy::Point const*, int, Sexy::TRect<int> const*,
   Sexy::Color const&, int, int, int) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::FillPoly(BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
           *this,Point *param_1,int param_2,TRect *param_3,Color *param_4,int param_5,int param_6,
          int param_7)

{
  Point *pPVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  PopTransformMatrix *this_00;
  AndroidGL20Vertex *pAVar5;
  float fVar6;
  float fVar7;
  float local_cc0 [2];
  float local_cb8;
  float local_cb4;
  VertexTList aVStack_c98 [3200];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (2 < param_2) {
    cVar2 = BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
            ::PreDraw((BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                       *)this);
    if (cVar2 != '\0') {
      BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
      ::SetupDrawMode((BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                       *)this,param_5);
      pPVar1 = param_1 + ((ulong)(param_2 - 1) + 1) * 8;
      uVar3 = AndroidGL20Vertex::PackColor
                        (*(int *)param_4,*(int *)(param_4 + 4),*(int *)(param_4 + 8),
                         *(int *)(param_4 + 0xc));
      fVar6 = (float)BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetBltDepth
                               (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(this + 0x80a8)
                               );
      VertexTList::VertexTList(aVStack_c98);
      do {
        AndroidGL20Vertex::AndroidGL20Vertex
                  ((AndroidGL20Vertex *)&local_cb8,(float)*(int *)param_1 + (float)param_6,
                   (float)*(int *)(param_1 + 4) + (float)param_7,fVar6,0.0,0.0,uVar3);
        cVar2 = std::vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>>::empty
                          ((vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>> *)
                           (this + 0x48));
        if (cVar2 == '\0') {
          fVar7 = local_cb4;
          FastCurve::SetOutRange((FastCurve *)local_cc0,local_cb8,local_cb4);
          this_00 = (PopTransformMatrix *)
                    std::vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>>::back
                              ((vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>> *)
                               (this + 0x48));
          local_cc0[0] = (float)PopTransformMatrix::operator*(this_00,(SexyVector2 *)local_cc0);
          EATextSquish::Vec3::Vec3((Vec3 *)&local_cb8,local_cc0[0],fVar7,fVar6);
        }
        param_1 = param_1 + 8;
        VertexTList::push_back(aVStack_c98,(AndroidGL20Vertex *)&local_cb8);
      } while (param_1 != pPVar1);
      if (param_3 == (TRect *)0x0) {
        iVar4 = FUN_052da0d0(local_10);
        pAVar5 = (AndroidGL20Vertex *)FUN_052da0d4(local_18,0);
        BufferedDrawPrimitive(this,6,iVar4 - 2,pAVar5,*(int *)(this + 0x2c),*(uint *)(this + 0x30));
      }
      else {
        DrawPolyClipped(this,param_3,aVStack_c98);
      }
      VertexTList::~VertexTList(aVStack_c98);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::CreateImageRenderData(Sexy::MemoryImage*) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::CreateImageRenderData
          (BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
           *this,MemoryImage *param_1)

{
  MemoryImage MVar1;
  char cVar2;
  TextureData *pTVar3;
  CritSect *pCVar4;
  MemoryImage *pMVar5;
  MemoryImage *local_18;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  pTVar3 = (TextureData *)FUN_052d96a0(*(undefined8 *)(param_1 + 0x20));
  if (pTVar3 == (TextureData *)0x0) {
    pTVar3 = ::operator_new(0x70);
    TextureData::TextureData(pTVar3,(BaseRenderDevice *)this);
    FUN_052d96a4(param_1 + 0x20,pTVar3);
    MVar1 = local_18[0x94];
    pCVar4 = (CritSect *)(**(code **)(**(long **)(this + 0x70) + 0xd0))(*(long **)(this + 0x70));
    AutoCrit::AutoCrit(aAStack_10,pCVar4);
    std::set<Sexy::MemoryImage*,std::less<Sexy::MemoryImage*>,std::allocator<Sexy::MemoryImage*>>::
    insert((set<Sexy::MemoryImage*,std::less<Sexy::MemoryImage*>,std::allocator<Sexy::MemoryImage*>>
            *)(this + 0x78),&local_18);
    AutoCrit::~AutoCrit(aAStack_10);
    pMVar5 = local_18;
    pTVar3 = (TextureData *)FUN_052d96a0(*(undefined8 *)(local_18 + 0x20));
    TextureData::CheckCreateTextures(pTVar3,pMVar5,(BaseRenderDevice *)this);
    pMVar5 = local_18;
    if (MVar1 == (MemoryImage)0x0) goto LAB_052e57e0;
  }
  else {
    TextureData::CheckCreateTextures(pTVar3,param_1,(BaseRenderDevice *)this);
LAB_052e57e0:
    pMVar5 = local_18;
    cVar2 = FUN_052d9694(*(undefined4 *)(local_18 + 0x18),0x10);
    if (cVar2 == '\0') goto LAB_052e57f8;
  }
  (**(code **)(*(long *)pMVar5 + 0x70))(pMVar5);
LAB_052e57f8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(int *)(pTVar3 + 100) != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::BltF(Sexy::Image*, float, float, Sexy::TRect<int> const&,
   Sexy::TRect<int> const&, Sexy::Color const&, int) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::BltF(BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
       *this,Image *param_1,float param_2,float param_3,TRect *param_4,TRect *param_5,Color *param_6
      ,int param_7)

{
  Rectangle aRStack_38 [16];
  Rectangle aRStack_28 [8];
  float local_20;
  float local_1c;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EA::Text::Rectangle::Rectangle
            (aRStack_38,(float)*(int *)param_5,(float)*(int *)(param_5 + 4),
             (float)*(int *)(param_5 + 8),(float)*(int *)(param_5 + 0xc));
  EA::Text::Rectangle::Rectangle
            (aRStack_28,param_2,param_3,(float)*(int *)(param_4 + 8),(float)*(int *)(param_4 + 0xc))
  ;
  TRect<float>::Intersection((TRect *)aRStack_28);
  if ((local_10 == local_20) && (local_c == local_1c)) {
    FUN_052e18e8(param_2,param_3,this,param_1,param_4,param_6,param_7);
  }
  else if ((local_10 != 0.0) && (local_c != 0.0)) {
    BltClipF(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::BltTriangles(Sexy::Image*, Sexy::SexyVertex2D const (*) [3], int,
   Sexy::Color const&, int, float, float, bool, Sexy::TRect<int> const*) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::BltTriangles(BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
               *this,Image *param_1,SexyVertex2D *param_2,int param_3,Color *param_4,int param_5,
              float param_6,float param_7,bool param_8,TRect *param_9)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  TextureData *this_00;
  
  cVar1 = BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
          ::PreDraw((BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                     *)this);
  if (cVar1 != '\0') {
    lVar3 = (**(code **)(*(long *)this + 0x2f0))(this,0,param_1);
    cVar1 = (**(code **)(*(long *)this + 0x118))(this,lVar3);
    if (cVar1 != '\0') {
      BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
      ::SetupDrawMode((BaseOpenGLRenderDevice<Sexy::AndroidGL20Vertex,Sexy::AndroidGL20StateManager,Sexy::AndroidRenderDeviceES20>
                       *)this,param_5);
      uVar2 = AndroidGL20Vertex::PackColor
                        (*(int *)param_4,*(int *)(param_4 + 4),*(int *)(param_4 + 8),
                         *(int *)(param_4 + 0xc));
      this_00 = (TextureData *)FUN_052d96a0(*(undefined8 *)(lVar3 + 0x20));
      TextureData::BltTriangles
                (this_00,(BaseRenderDevice *)this,(MemoryImage *)param_1,param_2,param_3,uVar2,
                 param_6,param_7,param_9);
      return;
    }
  }
  return;
}


/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::BltMatrixOptimized(Sexy::Image*, float, float, Sexy::SexyMatrix3
   const&, Sexy::TRect<int> const&, Sexy::Color const&, int, bool, bool) */

void Sexy::
     BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
     ::BltMatrixOptimized
               (Image *param_1,float param_2,float param_3,SexyMatrix3 *param_4,TRect *param_5,
               Color *param_6,int param_7,bool param_8,bool param_9)

{
  undefined4 in_w7;
  
  FUN_052ea4dc(param_1,param_4,param_6,param_7,param_8,param_5,in_w7);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::RemoveImageRenderData(Sexy::MemoryImage*) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::RemoveImageRenderData
          (BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
           *this,MemoryImage *param_1)

{
  long lVar1;
  TextureData *this_00;
  CritSect *pCVar2;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_052d96a0(*(undefined8 *)(param_1 + 0x20));
  if (lVar1 != 0) {
    (**(code **)(*(long *)this + 0x2f8))(this);
    this_00 = (TextureData *)FUN_052d96a0(*(undefined8 *)(param_1 + 0x20));
    if (this_00 != (TextureData *)0x0) {
      TextureData::~TextureData(this_00);
      AK::FreeHook(this_00);
    }
    FUN_052d96a4(param_1 + 0x20,0);
    pCVar2 = (CritSect *)(**(code **)(**(long **)(this + 0x70) + 0xd0))(*(long **)(this + 0x70));
    AutoCrit::AutoCrit(aAStack_10,pCVar2);
    std::set<Sexy::MemoryImage*,std::less<Sexy::MemoryImage*>,std::allocator<Sexy::MemoryImage*>>::
    erase((MemoryImage **)(this + 0x78));
    AutoCrit::~AutoCrit(aAStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::PushTransform(Sexy::SexyMatrix3 const&, bool) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::PushTransform(BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
                *this,SexyMatrix3 *param_1,bool param_2)

{
  vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>> *this_00;
  byte bVar1;
  SexyMatrix3 *this_01;
  SexyMatrix3 aSStack_30 [40];
  long local_8;
  
  this_00 = (vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>> *)(this + 0x48);
  local_8 = ___stack_chk_guard;
  bVar1 = std::vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>>::empty(this_00);
  if (bVar1 < param_2) {
    this_01 = (SexyMatrix3 *)
              std::vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>>::back(this_00);
    SexyMatrix3::operator*(this_01,param_1);
    std::vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>>::push_back(this_00,aSStack_30);
  }
  else {
    std::vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>>::push_back(this_00,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

