// Class: EA::IO::MemoryStream


/* EA::IO::MemoryStream::AddRef() */

void __thiscall EA::IO::MemoryStream::AddRef(MemoryStream *this)

{
  *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
  return;
}


/* EA::IO::MemoryStream::GetType() const */

undefined8 EA::IO::MemoryStream::GetType(void)

{
  return 0x347223d2;
}


/* EA::IO::MemoryStream::GetAvailable() const */

long __thiscall EA::IO::MemoryStream::GetAvailable(MemoryStream *this)

{
  return *(long *)(this + 0x30) - *(long *)(this + 0x40);
}


/* EA::IO::MemoryStream::Close() */

void __thiscall EA::IO::MemoryStream::Close(MemoryStream *this)

{
  SetData(this,(void *)0x0,0,false,true,(ICoreAllocator *)0x0);
  return;
}


/* EA::IO::MemoryStream::~MemoryStream() */

void __thiscall EA::IO::MemoryStream::~MemoryStream(MemoryStream *this)

{
  *(undefined ***)this = &PTR__MemoryStream_06608170;
  if (*(SharedPointer **)(this + 8) != (SharedPointer *)0x0) {
    SharedPointer::Release(*(SharedPointer **)(this + 8));
    return;
  }
  return;
}


/* EA::IO::MemoryStream::~MemoryStream() */

void __thiscall EA::IO::MemoryStream::~MemoryStream(MemoryStream *this)

{
  ~MemoryStream(this);
  AK::FreeHook(this);
  return;
}


/* EA::IO::MemoryStream::Release() */

int __thiscall EA::IO::MemoryStream::Release(MemoryStream *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x28) + -1;
  if (iVar1 != 0) {
    *(int *)(this + 0x28) = iVar1;
    return iVar1;
  }
  *(undefined4 *)(this + 0x28) = 1;
  if (*(long *)(this + 0x18) != 0) {
    (*(code *)**(undefined8 **)this)();
    (**(code **)(**(long **)(this + 0x18) + 0x20))(*(long **)(this + 0x18),this,0x58);
    return 0;
  }
  (**(code **)(*(long *)this + 8))();
  return 0;
}


/* EA::IO::MemoryStream::GetPosition(EA::IO::PositionType) const */

long __thiscall EA::IO::MemoryStream::GetPosition(MemoryStream *this,int param_2)

{
  if (param_2 == 0) {
    return *(long *)(this + 0x40);
  }
  if (param_2 == 2) {
    return *(long *)(this + 0x40) - *(long *)(this + 0x30);
  }
  return 0;
}


/* EA::IO::MemoryStream::Read(void*, unsigned long) */

size_t __thiscall EA::IO::MemoryStream::Read(MemoryStream *this,void *param_1,ulong param_2)

{
  ulong uVar1;
  size_t __n;
  long lVar2;
  long lVar3;
  
  __n = 0;
  if (param_2 != 0) {
    lVar3 = *(long *)(this + 0x40);
    uVar1 = *(long *)(this + 0x30) - lVar3;
    if (uVar1 != 0) {
      __n = param_2;
      if (uVar1 < param_2) {
        __n = uVar1;
      }
      lVar2 = FUN_053474a0(*(undefined8 *)(*(long *)(this + 8) + 0x10));
      memcpy(param_1,(void *)(lVar2 + lVar3),__n);
      *(size_t *)(this + 0x40) = *(long *)(this + 0x40) + __n;
    }
  }
  return __n;
}


/* EA::IO::MemoryStream::MemoryStream(EA::IO::MemoryStream const&) */

void __thiscall EA::IO::MemoryStream::MemoryStream(MemoryStream *this,MemoryStream *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  MemoryStream MVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  IStream::IStream((IStream *)this);
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  lVar4 = *(long *)(param_1 + 8);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  MVar3 = param_1[0x48];
  uVar2 = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined ***)this = &PTR__MemoryStream_06608170;
  *(long *)(this + 8) = lVar4;
  *(undefined8 *)(this + 0x10) = uVar8;
  *(undefined8 *)(this + 0x20) = uVar7;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x38) = uVar6;
  *(undefined8 *)(this + 0x40) = uVar5;
  this[0x48] = MVar3;
  *(undefined4 *)(this + 0x50) = uVar2;
  *(undefined4 *)(this + 0x4c) = uVar1;
  if (lVar4 != 0) {
    FUN_0534751c(lVar4 + 0x18);
    return;
  }
  return;
}


/* EA::IO::MemoryStream::GetOption(EA::IO::MemoryStream::Options) const */

float __thiscall EA::IO::MemoryStream::GetOption(MemoryStream *this,undefined4 param_2)

{
  float fVar1;
  
  switch(param_2) {
  case 1:
    fVar1 = 1.0;
    if (this[0x48] == (MemoryStream)0x0) {
      fVar1 = 0.0;
    }
    break;
  default:
    fVar1 = 0.0;
    break;
  case 4:
    return *(float *)(this + 0x4c);
  case 8:
    return (float)*(int *)(this + 0x50);
  case 0x10:
    return (float)*(int *)(this + 0x54);
  }
  return fVar1;
}


/* EA::IO::MemoryStream::SetOption(EA::IO::MemoryStream::Options, float) */

void __thiscall EA::IO::MemoryStream::SetOption(float param_1,MemoryStream *this,undefined4 param_3)

{
  switch(param_3) {
  case 1:
    this[0x48] = (MemoryStream)(param_1 != 0.0);
    return;
  case 4:
    if (param_1 <= 1.0) {
      param_1 = 1.0;
    }
    *(float *)(this + 0x4c) = param_1;
    return;
  case 8:
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    *(int *)(this + 0x50) = (int)param_1;
    return;
  case 0x10:
    *(int *)(this + 0x54) = (int)param_1;
  }
  return;
}


/* EA::IO::MemoryStream::SetData(void*, unsigned long, bool, bool, EA::Allocator::ICoreAllocator*)
    */

undefined8 __thiscall
EA::IO::MemoryStream::SetData
          (MemoryStream *this,void *param_1,ulong param_2,bool param_3,bool param_4,
          ICoreAllocator *param_5)

{
  void *__dest;
  SharedPointer *this_00;
  char *pcVar1;
  undefined8 uVar2;
  
  if ((param_1 == (void *)0x0) && (param_2 == 0)) {
    if (*(SharedPointer **)(this + 8) != (SharedPointer *)0x0) {
      SharedPointer::Release(*(SharedPointer **)(this + 8));
    }
    *(undefined8 *)(this + 8) = 0;
    uVar2 = 1;
    param_2 = 0;
    goto LAB_05347930;
  }
  if (((param_5 == (ICoreAllocator *)0x0) &&
      (param_5 = *(ICoreAllocator **)(this + 0x10), param_5 == (ICoreAllocator *)0x0)) &&
     (param_5 = (ICoreAllocator *)GetAllocator(), param_5 == (ICoreAllocator *)0x0)) {
LAB_05347a1c:
    uVar2 = 0;
  }
  else {
    __dest = param_1;
    if (!param_3) {
      pcVar1 = *(char **)(this + 0x20);
      if (pcVar1 == (char *)0x0) {
        pcVar1 = "EAIO/EAStreamMemory/data";
      }
      __dest = (void *)(**(code **)(*(long *)param_5 + 0x10))(param_5,param_2,pcVar1,0);
    }
    if (__dest == (void *)0x0) goto LAB_05347a1c;
    if (*(SharedPointer **)(this + 8) != (SharedPointer *)0x0) {
      SharedPointer::Release(*(SharedPointer **)(this + 8));
    }
    pcVar1 = *(char **)(this + 0x20);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "EAIO/EAStreamMemory/ptr";
    }
    this_00 = Allocator::EAIOZoneObject::operator_new(0x20,param_5,pcVar1);
    uVar2 = 1;
    SharedPointer::SharedPointer(this_00,__dest,param_4,param_5);
    *(SharedPointer **)(this + 8) = this_00;
    FUN_0534751c(this_00 + 0x18);
    if (param_3 < (param_1 != (void *)0x0 && param_2 != 0)) {
      memcpy(__dest,param_1,param_2);
    }
  }
  if (*(long *)(this + 8) == 0) {
    param_2 = 0;
  }
LAB_05347930:
  *(ulong *)(this + 0x38) = param_2;
  *(ulong *)(this + 0x30) = param_2;
  *(undefined8 *)(this + 0x40) = 0;
  return uVar2;
}


/* EA::IO::MemoryStream::MemoryStream(void*, unsigned long, bool, bool,
   EA::Allocator::ICoreAllocator*, char const*) */

void __thiscall
EA::IO::MemoryStream::MemoryStream
          (MemoryStream *this,void *param_1,ulong param_2,bool param_3,bool param_4,
          ICoreAllocator *param_5,char *param_6)

{
  IStream::IStream((IStream *)this);
  *(undefined8 *)(this + 8) = 0;
  *(ICoreAllocator **)(this + 0x10) = param_5;
  *(undefined ***)this = &PTR__MemoryStream_06608170;
  *(undefined8 *)(this + 0x18) = 0;
  *(char **)(this + 0x20) = param_6;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  this[0x48] = (MemoryStream)0x0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x4c) = 0x3fc00000;
  if ((param_1 == (void *)0x0) && (param_2 == 0)) {
    return;
  }
  SetData(this,param_1,param_2,param_3,param_4,param_5);
  return;
}


/* EA::IO::MemoryStream::SetData(EA::IO::SharedPointer*, unsigned long) */

bool __thiscall
EA::IO::MemoryStream::SetData(MemoryStream *this,SharedPointer *param_1,ulong param_2)

{
  SharedPointer *this_00;
  
  this_00 = *(SharedPointer **)(this + 8);
  if (this_00 != param_1) {
    if (param_1 != (SharedPointer *)0x0) {
      FUN_0534751c(param_1 + 0x18);
      this_00 = *(SharedPointer **)(this + 8);
    }
    if (this_00 != (SharedPointer *)0x0) {
      SharedPointer::Release(this_00);
    }
    *(SharedPointer **)(this + 8) = param_1;
  }
  *(undefined8 *)(this + 0x40) = 0;
  if (param_1 == (SharedPointer *)0x0) {
    param_2 = 0;
  }
  *(ulong *)(this + 0x38) = param_2;
  *(ulong *)(this + 0x30) = param_2;
  return param_1 != (SharedPointer *)0x0;
}


/* EA::IO::MemoryStream::MemoryStream(EA::IO::SharedPointer*, unsigned long, char const*) */

void __thiscall
EA::IO::MemoryStream::MemoryStream
          (MemoryStream *this,SharedPointer *param_1,ulong param_2,char *param_3)

{
  undefined8 uVar1;
  
  IStream::IStream((IStream *)this);
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__MemoryStream_06608170;
  if (param_1 == (SharedPointer *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_05347530(*(undefined8 *)(param_1 + 8));
  }
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 0x18) = 0;
  *(char **)(this + 0x20) = param_3;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  this[0x48] = (MemoryStream)0x0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x4c) = 0x3fc00000;
  if ((param_1 != (SharedPointer *)0x0) && (param_2 != 0)) {
    SetData(this,param_1,param_2);
    return;
  }
  return;
}


/* EA::IO::MemoryStream::Realloc(unsigned long) */

undefined8 __thiscall EA::IO::MemoryStream::Realloc(MemoryStream *this,ulong param_1)

{
  size_t __n;
  ICoreAllocator *pIVar1;
  SharedPointer *pSVar2;
  void *__dest;
  void *__src;
  char *pcVar3;
  SharedPointer *this_00;
  long lVar4;
  
  this_00 = *(SharedPointer **)(this + 8);
  pSVar2 = (SharedPointer *)param_1;
  if ((this_00 == (SharedPointer *)0x0) ||
     (pIVar1 = (ICoreAllocator *)FUN_05347530(*(undefined8 *)(this_00 + 8)),
     pIVar1 == (ICoreAllocator *)0x0)) {
    pIVar1 = *(ICoreAllocator **)(this + 0x10);
    if (pIVar1 == (ICoreAllocator *)0x0) {
      pIVar1 = (ICoreAllocator *)GetAllocator();
    }
    if (param_1 != 0) goto LAB_05347c8c;
    this_00 = *(SharedPointer **)(this + 8);
    if (this_00 == (SharedPointer *)0x0) goto LAB_05347c6c;
  }
  else if (param_1 != 0) {
LAB_05347c8c:
    pcVar3 = *(char **)(this + 0x20);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "EAIO/EAStreamMemory/ptr";
    }
    pSVar2 = Allocator::EAIOZoneObject::operator_new(0x20,pIVar1,pcVar3);
    SharedPointer::SharedPointer(pSVar2,param_1,pIVar1,*(char **)(this + 0x20));
    FUN_0534751c(pSVar2 + 0x18);
    lVar4 = *(long *)(this + 8);
    if (lVar4 == 0) goto LAB_05347c6c;
    __n = param_1;
    if (*(ulong *)(this + 0x38) < param_1) {
      __n = *(ulong *)(this + 0x38);
    }
    __dest = (void *)FUN_053474a0(*(undefined8 *)(pSVar2 + 0x10));
    __src = (void *)FUN_053474a0(*(undefined8 *)(lVar4 + 0x10));
    memcpy(__dest,__src,__n);
    this_00 = *(SharedPointer **)(this + 8);
  }
  SharedPointer::Release(this_00);
LAB_05347c6c:
  *(SharedPointer **)(this + 8) = pSVar2;
  *(ulong *)(this + 0x38) = param_1;
  return 1;
}


/* EA::IO::MemoryStream::SetSize(unsigned long) */

char __thiscall EA::IO::MemoryStream::SetSize(MemoryStream *this,ulong param_1)

{
  char cVar1;
  
  if (*(ulong *)(this + 0x30) != param_1) {
    if (this[0x48] == (MemoryStream)0x0) {
      return '\0';
    }
    if (*(ulong *)(this + 0x30) <= param_1) {
      cVar1 = Realloc(this,param_1);
      if (cVar1 != '\0') {
        *(ulong *)(this + 0x30) = param_1;
        return cVar1;
      }
      return '\0';
    }
    *(ulong *)(this + 0x30) = param_1;
    if (param_1 < *(ulong *)(this + 0x40)) {
      *(ulong *)(this + 0x40) = param_1;
    }
  }
  return '\x01';
}


/* EA::IO::MemoryStream::SetPosition(long, EA::IO::PositionType) */

undefined1 __thiscall
EA::IO::MemoryStream::SetPosition(MemoryStream *this,ulong param_1,int param_3)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(this + 0x40);
  if (param_3 == 1) {
    param_1 = param_1 + uVar4;
LAB_05347e04:
    uVar3 = *(ulong *)(this + 0x30);
    *(ulong *)(this + 0x40) = param_1;
    uVar2 = param_1;
  }
  else {
    if (param_3 == 0) goto LAB_05347e04;
    uVar3 = *(ulong *)(this + 0x30);
    uVar2 = uVar4;
    if (param_3 == 2) {
      uVar2 = param_1 + uVar3;
      *(ulong *)(this + 0x40) = uVar2;
      if (uVar2 <= uVar3) {
        return 1;
      }
      goto LAB_05347e14;
    }
  }
  if (uVar2 <= uVar3) {
    return 1;
  }
LAB_05347e14:
  if (this[0x48] == (MemoryStream)0x0) {
    *(ulong *)(this + 0x40) = uVar3;
    return 0;
  }
  if ((*(ulong *)(this + 0x38) < uVar2 + 1) && (cVar1 = Realloc(this,uVar2 + 1), cVar1 == '\0')) {
    *(ulong *)(this + 0x40) = uVar4;
    return 0;
  }
  return 1;
}


/* EA::IO::MemoryStream::Write(void const*, unsigned long) */

char __thiscall EA::IO::MemoryStream::Write(MemoryStream *this,void *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  cVar3 = '\x01';
  if (param_2 != 0) {
    lVar6 = *(long *)(this + 0x40);
    uVar1 = param_2 + lVar6;
    if (*(ulong *)(this + 0x38) < uVar1) {
      if (this[0x48] == (MemoryStream)0x0) {
        cVar3 = param_2 == *(long *)(this + 0x30) - lVar6;
        param_2 = *(long *)(this + 0x30) - lVar6;
      }
      else {
        uVar5 = (ulong)((float)*(int *)(this + 0x50) +
                       *(float *)(this + 0x4c) * (float)*(ulong *)(this + 0x38));
        uVar2 = uVar1;
        if (uVar1 < uVar5) {
          uVar2 = uVar5;
        }
        cVar3 = Realloc(this,uVar2);
        if (cVar3 == '\0') {
          return '\0';
        }
        lVar6 = *(long *)(this + 0x40);
        *(ulong *)(this + 0x30) = uVar1;
      }
    }
    else if (*(ulong *)(this + 0x30) < uVar1) {
      *(ulong *)(this + 0x30) = uVar1;
    }
    lVar4 = FUN_053474a0(*(undefined8 *)(*(long *)(this + 8) + 0x10));
    memcpy((void *)(lVar4 + lVar6),param_1,param_2);
    *(ulong *)(this + 0x40) = *(long *)(this + 0x40) + param_2;
  }
  return cVar3;
}


/* EA::IO::MemoryStream::SetCapacity(unsigned long) */

undefined8 __thiscall EA::IO::MemoryStream::SetCapacity(MemoryStream *this,ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 <= *(ulong *)(this + 0x38)) {
    return 0;
  }
  uVar1 = Realloc(this,param_1);
  return uVar1;
}

