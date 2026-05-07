// Class: Sexy::AndroidGL20Vertex


/* Sexy::AndroidGL20Vertex::AndroidGL20Vertex() */

void __thiscall Sexy::AndroidGL20Vertex::AndroidGL20Vertex(AndroidGL20Vertex *this)

{
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0x3f800000;
  return;
}


/* Sexy::AndroidGL20Vertex::AndroidGL20Vertex(float, float, float, float, float, unsigned int) */

void __thiscall
Sexy::AndroidGL20Vertex::AndroidGL20Vertex
          (AndroidGL20Vertex *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,uint param_6)

{
  SexyVertex2D::SexyVertex2D((SexyVertex2D *)this);
  *(uint *)(this + 0x10) = param_6;
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  *(float *)(this + 8) = param_3;
  *(float *)(this + 0x18) = param_4;
  *(float *)(this + 0x1c) = param_5;
  return;
}


/* Sexy::AndroidGL20Vertex::GetCoord(Sexy::AndroidGL20Vertex const&, int) */

undefined4 Sexy::AndroidGL20Vertex::GetCoord(AndroidGL20Vertex *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    return *(undefined4 *)param_1;
  case 1:
    return *(undefined4 *)(param_1 + 4);
  case 2:
    return *(undefined4 *)(param_1 + 8);
  case 3:
    return *(undefined4 *)(param_1 + 0x18);
  case 4:
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
  }
  return uVar1;
}


/* Sexy::AndroidGL20Vertex::Interpolate(Sexy::AndroidGL20Vertex const&, Sexy::AndroidGL20Vertex
   const&, float) */

void __thiscall
Sexy::AndroidGL20Vertex::Interpolate
          (AndroidGL20Vertex *this,AndroidGL20Vertex *param_1,AndroidGL20Vertex *param_2,
          float param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float *in_x8;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar15 = *(float *)this;
  uVar4 = *(uint *)(this + 0x10);
  fVar14 = *(float *)(this + 4);
  uVar5 = *(uint *)(param_1 + 0x10);
  fVar13 = *(float *)(this + 0x18);
  fVar12 = *(float *)(this + 0x1c);
  fVar11 = *(float *)param_1;
  fVar10 = *(float *)(param_1 + 4);
  fVar9 = *(float *)(param_1 + 0x18);
  fVar8 = *(float *)(param_1 + 0x1c);
  uVar2 = *(undefined8 *)(this + 8);
  uVar1 = *(undefined8 *)(this + 0x10);
  uVar3 = *(undefined8 *)(this + 0x18);
  *(undefined8 *)in_x8 = *(undefined8 *)this;
  *(undefined8 *)(in_x8 + 2) = uVar2;
  *(undefined8 *)(in_x8 + 4) = uVar1;
  *(undefined8 *)(in_x8 + 6) = uVar3;
  *in_x8 = fVar15 + (fVar11 - fVar15) * param_3;
  in_x8[1] = fVar14 + param_3 * (fVar10 - fVar14);
  in_x8[6] = fVar13 + param_3 * (fVar9 - fVar13);
  in_x8[7] = fVar12 + param_3 * (fVar8 - fVar12);
  if (uVar4 != uVar5) {
    iVar7 = (int)(param_3 * 255.0);
    if (0xff < iVar7) {
      iVar7 = 0xff;
    }
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    iVar6 = 0xff - iVar7;
    in_x8[4] = (float)((iVar7 * (uVar5 >> 0x18) + iVar6 * (uVar4 >> 0x18)) * 0x10000 & 0xff000000 |
                       (iVar7 * (uVar5 >> 0x10 & 0xff) + iVar6 * (uVar4 >> 0x10 & 0xff)) * 0x100 &
                       0xff0000 | iVar7 * (uVar5 >> 8 & 0xff) + iVar6 * (uVar4 >> 8 & 0xff) & 0xff00
                      | iVar7 * (uVar5 & 0xff) + iVar6 * (uVar4 & 0xff) >> 8 & 0xff);
  }
  return;
}


/* Sexy::AndroidGL20Vertex::PackColor(int, int, int, int) */

uint Sexy::AndroidGL20Vertex::PackColor(int param_1,int param_2,int param_3,int param_4)

{
  return (param_2 & 0xffU) << 8 | param_1 & 0xffU | param_4 << 0x18 | (param_3 & 0xffU) << 0x10;
}


/* Sexy::AndroidGL20Vertex::TexCoordOffset() */

undefined8 Sexy::AndroidGL20Vertex::TexCoordOffset(void)

{
  return 0x18;
}

