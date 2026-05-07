// Class: Sexy::DrawBatcher


/* Sexy::DrawBatcher::DrawBatcher() */

void __thiscall Sexy::DrawBatcher::DrawBatcher(DrawBatcher *this)

{
  DrawBatcher *pDVar1;
  DrawBatcher *pDVar2;
  DrawBatcher *this_00;
  
  this_00 = this + 8;
  do {
    pDVar1 = this_00 + 0x60;
    do {
      pDVar2 = this_00 + 0x20;
      SexyVertex2D::SexyVertex2D((SexyVertex2D *)this_00);
      this_00 = pDVar2;
    } while (pDVar1 != pDVar2);
    this_00 = pDVar1;
  } while (pDVar1 != this + 0x18008);
  *(undefined4 *)(this + 0x18008) = 0;
  this[0x18020] = (DrawBatcher)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DrawBatcher::FlushTriQueue() */

void __thiscall Sexy::DrawBatcher::FlushTriQueue(DrawBatcher *this)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  Color aCStack_18 [16];
  long local_8;
  
  iVar1 = *(int *)(this + 0x18008);
  local_8 = ___stack_chk_guard;
  if (iVar1 != 0) {
    lVar3 = *(long *)(this + 0x18010);
    if ((this[0x18020] == (DrawBatcher)0x0) && (lVar3 != 0)) {
      plVar4 = *(long **)this;
      pcVar5 = *(code **)(*plVar4 + 0xa8);
      Color::Color(aCStack_18,1);
      (*pcVar5)(*(undefined4 *)(this + 0x18018),*(undefined4 *)(this + 0x1801c),plVar4,lVar3,
                this + 8,iVar1,aCStack_18,*(undefined4 *)(this + 0x1800c),1,0);
      *(undefined4 *)(this + 0x18008) = 0;
    }
    else {
      (**(code **)(**(long **)this + 0x230))(*(long **)this,0);
      plVar4 = *(long **)this;
      uVar2 = *(undefined4 *)(this + 0x18008);
      pcVar5 = *(code **)(*plVar4 + 0x158);
      Color::Color(aCStack_18,1);
      (*pcVar5)(*(undefined4 *)(this + 0x18018),*(undefined4 *)(this + 0x1801c),plVar4,0x1c4,4,
                this + 8,uVar2,aCStack_18,*(undefined4 *)(this + 0x1800c),1,0);
      *(undefined4 *)(this + 0x18008) = 0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::DrawBatcher::QueueQuad(Sexy::Image*, int, Sexy::SexyVertex2D*) */

void __thiscall
Sexy::DrawBatcher::QueueQuad(DrawBatcher *this,Image *param_1,int param_2,SexyVertex2D *param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (((*(int *)(this + 0x1800c) != param_2) || (*(Image **)(this + 0x18010) != param_1)) ||
     (iVar3 = *(int *)(this + 0x18008), 0x3fd < iVar3)) {
    FlushTriQueue(this);
    iVar3 = *(int *)(this + 0x18008);
    *(int *)(this + 0x1800c) = param_2;
    *(Image **)(this + 0x18010) = param_1;
  }
  iVar1 = iVar3 + 1;
  uVar2 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(this + (long)iVar3 * 0x60 + 8) = *(undefined8 *)param_3;
  *(undefined8 *)(this + (long)iVar3 * 0x60 + 0x10) = uVar2;
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(this + (long)iVar3 * 0x60 + 0x18) = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(this + (long)iVar3 * 0x60 + 0x20) = uVar2;
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(this + (long)iVar3 * 0x60 + 0x28) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(this + (long)iVar3 * 0x60 + 0x30) = uVar2;
  uVar2 = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(this + (long)iVar3 * 0x60 + 0x38) = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(this + (long)iVar3 * 0x60 + 0x40) = uVar2;
  uVar2 = *(undefined8 *)(param_3 + 0x48);
  *(undefined8 *)(this + (long)iVar3 * 0x60 + 0x48) = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(this + (long)iVar3 * 0x60 + 0x50) = uVar2;
  uVar2 = *(undefined8 *)(param_3 + 0x58);
  *(undefined8 *)(this + (long)iVar3 * 0x60 + 0x58) = *(undefined8 *)(param_3 + 0x50);
  *(undefined8 *)(this + (long)iVar3 * 0x60 + 0x60) = uVar2;
  uVar2 = *(undefined8 *)(param_3 + 0x48);
  *(undefined8 *)(this + (long)iVar3 * 0x60 + 0x68) = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(this + (long)iVar3 * 0x60 + 0x70) = uVar2;
  uVar2 = *(undefined8 *)(param_3 + 0x58);
  *(undefined8 *)(this + (long)iVar3 * 0x60 + 0x78) = *(undefined8 *)(param_3 + 0x50);
  *(undefined8 *)(this + (long)iVar3 * 0x60 + 0x80) = uVar2;
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(this + (long)iVar1 * 0x60 + 0x28) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(this + (long)iVar1 * 0x60 + 0x30) = uVar2;
  uVar2 = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(this + (long)iVar1 * 0x60 + 0x38) = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(this + (long)iVar1 * 0x60 + 0x40) = uVar2;
  uVar2 = *(undefined8 *)(param_3 + 0x68);
  *(undefined8 *)(this + (long)iVar1 * 0x60 + 0x48) = *(undefined8 *)(param_3 + 0x60);
  *(undefined8 *)(this + (long)iVar1 * 0x60 + 0x50) = uVar2;
  uVar2 = *(undefined8 *)(param_3 + 0x78);
  *(undefined8 *)(this + (long)iVar1 * 0x60 + 0x58) = *(undefined8 *)(param_3 + 0x70);
  *(undefined8 *)(this + (long)iVar1 * 0x60 + 0x60) = uVar2;
  *(int *)(this + 0x18008) = iVar3 + 2;
  return;
}


/* Sexy::DrawBatcher::Setup(Sexy::Graphics*) */

void __thiscall Sexy::DrawBatcher::Setup(DrawBatcher *this,Graphics *param_1)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  
  FlushTriQueue(this);
  fVar3 = *(float *)(param_1 + 0x14);
  *(float *)(this + 0x18018) = *(float *)(param_1 + 0x10) - 0.5;
  *(float *)(this + 0x1801c) = fVar3 - 0.5;
  lVar1 = Graphics::Get3D(param_1);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_053b9ac8(*(undefined8 *)(lVar1 + 8));
  }
  *(undefined8 *)this = uVar2;
  *(undefined4 *)(this + 0x1800c) = 0;
  return;
}


/* Sexy::DrawBatcher::StartVertexSection(Sexy::Image*, int, int) */

DrawBatcher * __thiscall
Sexy::DrawBatcher::StartVertexSection(DrawBatcher *this,Image *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(this + 0x1800c) == param_2) && (*(Image **)(this + 0x18010) == param_1)) {
    iVar2 = *(int *)(this + 0x18008);
    iVar1 = iVar2 + param_3 / 3;
    if (iVar1 < 0x400) goto LAB_053bc74c;
  }
  FlushTriQueue(this);
  iVar2 = *(int *)(this + 0x18008);
  *(int *)(this + 0x1800c) = param_2;
  *(Image **)(this + 0x18010) = param_1;
  iVar1 = iVar2 + param_3 / 3;
LAB_053bc74c:
  *(int *)(this + 0x18008) = iVar1;
  return this + (long)iVar2 * 0x60 + 8;
}

