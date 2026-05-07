// Class: EA::Text::Bitmap32


/* EA::Text::Bitmap32::SetSize(int, int) */

bool __thiscall EA::Text::Bitmap32::SetSize(Bitmap32 *this,int param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = param_1 * param_2;
  if ((*(int *)(this + 0x14) < (int)uVar1) &&
     (plVar2 = *(long **)(this + 0x18), plVar2 != (long *)0x0)) {
    if (*(long *)this != 0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,*(long *)this,0);
      plVar2 = *(long **)(this + 0x18);
    }
    lVar3 = *plVar2;
    *(uint *)(this + 0x14) = uVar1;
    lVar3 = (**(code **)(lVar3 + 0x10))
                      (plVar2,-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2,
                       "EAText/Bitmap8",0);
    *(long *)this = lVar3;
  }
  else {
    lVar3 = *(long *)this;
  }
  *(int *)(this + 0xc) = param_2;
  *(int *)(this + 8) = param_1;
  *(int *)(this + 0x10) = param_1 << 2;
  return lVar3 != 0;
}


/* EA::Text::Bitmap32::Init(int, int) */

void __thiscall EA::Text::Bitmap32::Init(Bitmap32 *this,int param_1,int param_2)

{
  Bitmap8::Shutdown((Bitmap8 *)this);
  SetSize(this,param_1,param_2);
  return;
}


/* EA::Text::Bitmap32::Bitmap32(EA::Allocator::ICoreAllocator*, int, int) */

void __thiscall
EA::Text::Bitmap32::Bitmap32(Bitmap32 *this,ICoreAllocator *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = 0;
  *(int *)(this + 8) = param_2;
  *(int *)(this + 0xc) = param_3;
  *(int *)(this + 0x10) = param_2;
  *(undefined4 *)(this + 0x14) = 0;
  if (param_1 != (ICoreAllocator *)0x0) {
    *(ICoreAllocator **)(this + 0x18) = param_1;
    Init(this,param_2,param_3);
    return;
  }
  uVar1 = GetAllocator();
  *(undefined8 *)(this + 0x18) = uVar1;
  Init(this,param_2,param_3);
  return;
}


/* EA::Text::Bitmap32::GetPixelClamped(int, int) const */

undefined4 __thiscall EA::Text::Bitmap32::GetPixelClamped(Bitmap32 *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 0) {
    iVar1 = *(int *)(this + 8);
    iVar2 = 0;
  }
  else {
    iVar1 = *(int *)(this + 8);
    iVar2 = iVar1 + -1;
    if (param_1 < iVar1) {
      iVar2 = param_1;
    }
  }
  if (param_2 < 0) {
    return *(undefined4 *)(*(long *)this + (long)iVar2 * 4);
  }
  if (*(int *)(this + 0xc) <= param_2) {
    return *(undefined4 *)(*(long *)this + (long)(iVar2 + (*(int *)(this + 0xc) + -1) * iVar1) * 4);
  }
  return *(undefined4 *)(*(long *)this + (long)(iVar2 + param_2 * iVar1) * 4);
}


/* EA::Text::Bitmap32::GetPixelClamped(int, int, unsigned int) const */

uint __thiscall
EA::Text::Bitmap32::GetPixelClamped(Bitmap32 *this,int param_1,int param_2,uint param_3)

{
  if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < *(int *)(this + 8))) &&
     (param_2 < *(int *)(this + 0xc))) {
    param_3 = *(uint *)(*(long *)this + (long)(param_1 + param_2 * *(int *)(this + 8)) * 4);
  }
  return param_3;
}


/* EA::Text::Bitmap32::Blit(unsigned int const*, int, int, int, int, int, int, int) */

void __thiscall
EA::Text::Bitmap32::Blit
          (Bitmap32 *this,uint *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,int param_8)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (param_2 < param_2 + param_4) {
    lVar1 = (long)param_7 + 1;
    lVar2 = (long)param_8 + 1;
    puVar5 = param_1 + (long)param_3 * ((ulong)(long)param_6 >> 2) + (long)param_2;
    lVar8 = (long)param_7;
    lVar11 = lVar1;
    while( true ) {
      if (param_3 < param_3 + param_5) {
        lVar10 = *(long *)this;
        lVar4 = lVar2;
        puVar7 = puVar5;
        lVar9 = (long)param_8;
        do {
          lVar6 = lVar4;
          uVar3 = *puVar7;
          puVar7 = puVar7 + ((ulong)(long)param_6 >> 2);
          *(uint *)(lVar10 + (lVar8 + ((ulong)(long)*(int *)(this + 0x10) >> 2) * lVar9) * 4) =
               uVar3;
          lVar4 = lVar6 + 1;
          lVar9 = lVar6;
        } while (lVar6 != lVar2 + (ulong)(((param_3 + param_5) - param_3) - 1));
      }
      puVar5 = puVar5 + 1;
      if (lVar11 == lVar1 + (ulong)(((param_2 + param_4) - param_2) - 1)) break;
      lVar8 = lVar11;
      lVar11 = lVar11 + 1;
    }
  }
  return;
}


/* EA::Text::Bitmap32::Clear() */

void __thiscall EA::Text::Bitmap32::Clear(Bitmap32 *this)

{
  void *__s;
  int iVar1;
  
  iVar1 = 0;
  __s = *(void **)this;
  if (0 < *(int *)(this + 0xc)) {
    do {
      iVar1 = iVar1 + 1;
      memset(__s,0,(long)*(int *)(this + 8) << 2);
      __s = (void *)((long)__s + ((long)*(int *)(this + 0x10) & 0xfffffffffffffffcU));
    } while (iVar1 < *(int *)(this + 0xc));
  }
  return;
}


/* EA::Text::Bitmap32::Fill(unsigned int) */

void __thiscall EA::Text::Bitmap32::Fill(Bitmap32 *this,uint param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  iVar3 = *(int *)(this + 0xc);
  if (0 < iVar3) {
    iVar1 = *(int *)(this + 8);
    lVar6 = 0;
    do {
      if (0 < iVar1) {
        lVar7 = *(long *)this;
        lVar4 = 0;
        do {
          iVar3 = (int)lVar4;
          lVar2 = lVar4 + lVar6 * ((ulong)(long)*(int *)(this + 0x10) >> 2);
          lVar4 = lVar4 + 1;
          *(uint *)(lVar7 + lVar2 * 4) = param_1;
          iVar1 = *(int *)(this + 8);
        } while (iVar3 + 1 < iVar1);
        iVar3 = *(int *)(this + 0xc);
      }
      iVar5 = (int)lVar6;
      lVar6 = lVar6 + 1;
    } while (iVar5 + 1 < iVar3);
  }
  return;
}


/* EA::Text::Bitmap32::TransferFrom(EA::Text::Bitmap32*) */

void __thiscall EA::Text::Bitmap32::TransferFrom(Bitmap32 *this,Bitmap32 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  Bitmap8::Shutdown((Bitmap8 *)this);
  uVar3 = *(undefined8 *)param_1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)this = uVar3;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* EA::Text::Bitmap32::Swap(EA::Text::Bitmap32*) */

void __thiscall EA::Text::Bitmap32::Swap(Bitmap32 *this,Bitmap32 *param_1)

{
  std::__exception_ptr::exception_ptr::swap((exception_ptr *)this,(exception_ptr *)param_1);
  Internal::swap<int>((int *)(this + 8),(int *)(param_1 + 8));
  Internal::swap<int>((int *)(this + 0xc),(int *)(param_1 + 0xc));
  Internal::swap<int>((int *)(this + 0x10),(int *)(param_1 + 0x10));
  return;
}

