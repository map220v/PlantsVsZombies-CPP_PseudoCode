// Class: EA::Text::Bitmap8


/* EA::Text::Bitmap8::~Bitmap8() */

void __thiscall EA::Text::Bitmap8::~Bitmap8(Bitmap8 *this)

{
  long *plVar1;
  
  if ((*(long *)this != 0) && (plVar1 = *(long **)(this + 0x18), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,*(long *)this,0);
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


/* EA::Text::Bitmap8::GetPixelPtrChecked(int, int) const */

long __thiscall EA::Text::Bitmap8::GetPixelPtrChecked(Bitmap8 *this,int param_1,int param_2)

{
  if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < *(int *)(this + 8))) &&
     (param_2 < *(int *)(this + 0xc))) {
    return *(long *)this + (long)(param_2 * *(int *)(this + 8)) + (long)param_1;
  }
  return 0;
}


/* EA::Text::Bitmap8::Shutdown() */

void __thiscall EA::Text::Bitmap8::Shutdown(Bitmap8 *this)

{
  long *plVar1;
  
  if ((*(long *)this != 0) && (plVar1 = *(long **)(this + 0x18), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,*(long *)this,0);
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


/* EA::Text::Bitmap8::Acquire(unsigned char*, int, int, int) */

void __thiscall
EA::Text::Bitmap8::Acquire(Bitmap8 *this,uchar *param_1,int param_2,int param_3,int param_4)

{
  *(uchar **)this = param_1;
  *(int *)(this + 8) = param_2;
  *(int *)(this + 0xc) = param_3;
  *(int *)(this + 0x10) = param_4;
  *(int *)(this + 0x14) = param_2 * param_3;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* EA::Text::Bitmap8::SetSize(int, int) */

bool __thiscall EA::Text::Bitmap8::SetSize(Bitmap8 *this,int param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  iVar1 = param_1 * param_2;
  if ((*(int *)(this + 0x14) < iVar1) && (plVar2 = *(long **)(this + 0x18), plVar2 != (long *)0x0))
  {
    if (*(long *)this != 0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,*(long *)this,0);
      plVar2 = *(long **)(this + 0x18);
    }
    lVar3 = *plVar2;
    *(int *)(this + 0x14) = iVar1;
    lVar3 = (**(code **)(lVar3 + 0x10))(plVar2,(long)iVar1,"EAText/Bitmap8",0);
    *(long *)this = lVar3;
  }
  else {
    lVar3 = *(long *)this;
  }
  *(int *)(this + 0xc) = param_2;
  *(int *)(this + 8) = param_1;
  *(int *)(this + 0x10) = param_1;
  return lVar3 != 0;
}


/* EA::Text::Bitmap8::Init(int, int) */

void __thiscall EA::Text::Bitmap8::Init(Bitmap8 *this,int param_1,int param_2)

{
  Shutdown(this);
  SetSize(this,param_1,param_2);
  return;
}


/* EA::Text::Bitmap8::Bitmap8(EA::Allocator::ICoreAllocator*, int, int) */

void __thiscall
EA::Text::Bitmap8::Bitmap8(Bitmap8 *this,ICoreAllocator *param_1,int param_2,int param_3)

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


/* EA::Text::Bitmap8::GetPixelClamped(int, int, unsigned char) const */

uchar __thiscall
EA::Text::Bitmap8::GetPixelClamped(Bitmap8 *this,int param_1,int param_2,uchar param_3)

{
  if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < *(int *)(this + 8))) &&
     (param_2 < *(int *)(this + 0xc))) {
    param_3 = *(uchar *)(*(long *)this + (long)(param_1 + param_2 * *(int *)(this + 8)));
  }
  return param_3;
}


/* EA::Text::Bitmap8::Blit(unsigned char const*, int, int, int, int, int, int, int) */

void __thiscall
EA::Text::Bitmap8::Blit
          (Bitmap8 *this,uchar *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,int param_8)

{
  uchar *puVar1;
  uchar *__src;
  void *__dest;
  
  __src = param_1 + (long)param_2 + (long)(param_3 * param_6);
  puVar1 = __src + param_5 * param_6;
  __dest = (void *)(*(long *)this + (long)param_7 + (long)(param_8 * *(int *)(this + 0x10)));
  for (; __src < puVar1; __src = __src + param_6) {
    __dest = memcpy(__dest,__src,(long)param_4);
  }
  return;
}


/* EA::Text::Bitmap8::Blit1BPP(unsigned char const*, int, int, int, int, int, int, int) */

void __thiscall
EA::Text::Bitmap8::Blit1BPP
          (Bitmap8 *this,uchar *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,int param_8)

{
  byte *pbVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  
  pbVar1 = param_1 + param_5 * param_6;
  puVar2 = (undefined1 *)(*(long *)this + (long)param_7 + (long)(param_8 * *(int *)(this + 8)));
  for (; param_1 < pbVar1; param_1 = param_1 + param_6) {
    if (puVar2 < puVar2 + param_4) {
      uVar4 = 0x80;
      puVar5 = puVar2;
      pbVar6 = param_1;
      do {
        uVar3 = *pbVar6 & uVar4;
        uVar4 = uVar4 >> 1;
        if (uVar3 != 0) {
          *puVar5 = 0xff;
        }
        puVar5 = puVar5 + 1;
        if (uVar4 == 0) {
          pbVar6 = pbVar6 + 1;
          uVar4 = 0x80;
        }
      } while (puVar5 != puVar2 + param_4);
    }
    puVar2 = puVar2 + *(int *)(this + 0x10);
  }
  return;
}


/* EA::Text::Bitmap8::Clear() */

void __thiscall EA::Text::Bitmap8::Clear(Bitmap8 *this)

{
  void *__s;
  int iVar1;
  
  iVar1 = 0;
  __s = *(void **)this;
  if (0 < *(int *)(this + 0xc)) {
    do {
      iVar1 = iVar1 + 1;
      memset(__s,0,(long)*(int *)(this + 8));
      __s = (void *)((long)__s + (long)*(int *)(this + 0x10));
    } while (iVar1 < *(int *)(this + 0xc));
  }
  return;
}


/* EA::Text::Bitmap8::Fill(unsigned char) */

void __thiscall EA::Text::Bitmap8::Fill(Bitmap8 *this,uchar param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  iVar1 = *(int *)(this + 0xc);
  if (0 < iVar1) {
    iVar3 = *(int *)(this + 8);
    lVar5 = 0;
    do {
      if (0 < iVar3) {
        lVar2 = 0;
        do {
          iVar1 = (int)lVar2;
          *(uchar *)(*(long *)this + lVar5 * *(int *)(this + 0x10) + lVar2) = param_1;
          lVar2 = lVar2 + 1;
          iVar3 = *(int *)(this + 8);
        } while (iVar1 + 1 < iVar3);
        iVar1 = *(int *)(this + 0xc);
      }
      iVar4 = (int)lVar5;
      lVar5 = lVar5 + 1;
    } while (iVar4 + 1 < iVar1);
  }
  return;
}


/* EA::Text::Bitmap8::CopyFrom(EA::Text::Bitmap8 const*) */

void __thiscall EA::Text::Bitmap8::CopyFrom(Bitmap8 *this,Bitmap8 *param_1)

{
  void *pvVar1;
  void *__src;
  int iVar2;
  
  iVar2 = 0;
  __src = *(void **)param_1;
  pvVar1 = *(void **)this;
  if (0 < *(int *)(this + 0xc)) {
    do {
      iVar2 = iVar2 + 1;
      pvVar1 = memcpy(pvVar1,__src,(long)*(int *)(this + 8));
      __src = (void *)((long)__src + (long)*(int *)(param_1 + 0x10));
      pvVar1 = (void *)((long)pvVar1 + (long)*(int *)(this + 0x10));
    } while (iVar2 < *(int *)(this + 0xc));
  }
  return;
}

