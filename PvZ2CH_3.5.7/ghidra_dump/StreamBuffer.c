// Class: StreamBuffer


/* StreamBuffer::SetBuffReadPos(unsigned int) */

void __thiscall StreamBuffer::SetBuffReadPos(StreamBuffer *this,uint param_1)

{
  *(uint *)(this + 0x10) = *(int *)(this + 0x10) + param_1;
  return;
}


/* StreamBuffer::StreamBuffer(unsigned int) */

void * __thiscall StreamBuffer::StreamBuffer(StreamBuffer *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  cVar1 = FUN_04a4913c((ulong)param_1);
  if (cVar1 == '\0') {
    uVar2 = printf("error");
    return (void *)(ulong)uVar2;
  }
  pvVar3 = operator_new__((ulong)param_1);
  *(uint *)(this + 8) = param_1;
  *(void **)this = pvVar3;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return pvVar3;
}


/* StreamBuffer::~StreamBuffer() */

void __thiscall StreamBuffer::~StreamBuffer(StreamBuffer *this)

{
  if (*(ColourFit **)this != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)this);
    return;
  }
  return;
}


/* StreamBuffer::GetBufWriteStart(unsigned int&) */

long __thiscall StreamBuffer::GetBufWriteStart(StreamBuffer *this,uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(this + 8);
  iVar2 = (iVar1 + *(int *)(this + 0x10)) - *(uint *)(this + 0xc);
  if (iVar2 != 0) {
    uVar3 = FUN_04a49f6c(iVar2,iVar1 - (iVar1 - 1U & *(uint *)(this + 0xc)));
    *param_1 = uVar3;
    return *(long *)this + (ulong)(*(int *)(this + 8) - 1U & *(uint *)(this + 0xc));
  }
  return 0;
}


/* StreamBuffer::CheckGetAPhpPakage(char*, unsigned short) */

undefined8 __thiscall
StreamBuffer::CheckGetAPhpPakage(StreamBuffer *this,char *param_1,ushort param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  uint uVar8;
  
  uVar8 = *(int *)(this + 0xc) - *(uint *)(this + 0x10);
  if (uVar8 == 0) {
    return 0xfffffffc;
  }
  uVar5 = *(int *)(this + 8) - 1U & *(uint *)(this + 0x10);
  uVar2 = FUN_04a49f6c(uVar8,*(int *)(this + 8) - uVar5);
  pcVar7 = *(char **)this;
  if (uVar2 == 0) {
    uVar4 = 0;
LAB_04a4a08c:
    uVar5 = 0;
    if (*pcVar7 == '\n') {
      uVar5 = 0;
    }
    else {
      do {
        pcVar7 = pcVar7 + 1;
        uVar5 = uVar5 + 1;
        if (uVar8 <= uVar5) {
          return 0xfffffffd;
        }
      } while (*pcVar7 != '\n');
    }
    uVar4 = uVar5 + uVar4;
    if (uVar4 < param_2) goto LAB_04a4a0e0;
  }
  else {
    uVar6 = (ulong)uVar5;
    if (pcVar7[uVar5] == '\n') {
      uVar4 = 0;
    }
    else {
      do {
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar1;
        uVar4 = uVar1 - uVar5;
        if (uVar1 == uVar2 + uVar5) {
          if (uVar8 <= uVar2) {
            return 0xfffffffd;
          }
          uVar8 = uVar8 - uVar2;
          if (uVar8 == 0) {
            return 0xfffffffd;
          }
          goto LAB_04a4a08c;
        }
      } while (pcVar7[uVar6] != '\n');
    }
    if (uVar4 < param_2) {
LAB_04a4a0e0:
      uVar3 = CBuffer::FetchChunk((CBuffer *)this,param_1,uVar4 + 1);
      return uVar3;
    }
  }
  return 0xfffffffe;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StreamBuffer::CheckGetAPackage(char*, unsigned short) */

void __thiscall StreamBuffer::CheckGetAPackage(StreamBuffer *this,char *param_1,ushort param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ushort local_a;
  long local_8;
  
  local_a = 0;
  local_8 = ___stack_chk_guard;
  uVar1 = CBuffer::Peek((CBuffer *)this,(char *)&local_a,2);
  if (uVar1 < 2) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar1 = (uint)(byte)(local_a >> 8) | (local_a & 0xff00ff) << 8;
    local_a = (ushort)uVar1;
    if (param_2 < uVar1) {
      uVar2 = 0xfffffffe;
    }
    else {
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + 2;
      uVar2 = CBuffer::FetchChunk((CBuffer *)this,param_1,uVar1);
      if ((int)uVar2 == 0) {
        *(int *)(this + 0x10) = *(int *)(this + 0x10) + -2;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StreamBuffer::CheckGetAPackage(char*, unsigned int) */

void __thiscall StreamBuffer::CheckGetAPackage(StreamBuffer *this,char *param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  uVar1 = CBuffer::Peek((CBuffer *)this,(char *)&local_c,4);
  if (uVar1 < 4) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar1 = (local_c & 0xff00ff00) >> 8 | (local_c & 0xff00ff) << 8;
    local_c = uVar1 >> 0x10 | uVar1 << 0x10;
    if (param_2 < local_c) {
      uVar2 = 0xfffffffe;
    }
    else {
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + 4;
      uVar2 = CBuffer::FetchChunk((CBuffer *)this,param_1,local_c);
      if ((int)uVar2 == 0) {
        *(int *)(this + 0x10) = *(int *)(this + 0x10) + -4;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* StreamBuffer::PushAPakcetNoLen(char const*, unsigned short) */

void __thiscall StreamBuffer::PushAPakcetNoLen(StreamBuffer *this,char *param_1,ushort param_2)

{
  CBuffer::Push((CBuffer *)this,param_1,(uint)param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StreamBuffer::PushAPacket(char const*, unsigned short) */

void __thiscall StreamBuffer::PushAPacket(StreamBuffer *this,char *param_1,ushort param_2)

{
  char cVar1;
  undefined8 uVar2;
  ushort local_a;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_a = param_2 >> 8 | param_2 << 8;
  cVar1 = CBuffer::Push((CBuffer *)this,(char *)&local_a,2);
  uVar2 = 0;
  if (cVar1 != '\0') {
    cVar1 = CBuffer::Push((CBuffer *)this,param_1,(uint)param_2);
    uVar2 = 1;
    if (cVar1 == '\0') {
      uVar2 = 0;
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + -2;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StreamBuffer::PushAPacket(char const*, unsigned int) */

void __thiscall StreamBuffer::PushAPacket(StreamBuffer *this,char *param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  uint local_c;
  long local_8;
  
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_c = uVar1 >> 0x10 | uVar1 << 0x10;
  local_8 = ___stack_chk_guard;
  cVar2 = CBuffer::Push((CBuffer *)this,(char *)&local_c,4);
  uVar3 = 0;
  if (cVar2 != '\0') {
    cVar2 = CBuffer::Push((CBuffer *)this,param_1,param_2);
    uVar3 = 1;
    if (cVar2 == '\0') {
      uVar3 = 0;
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + -4;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* StreamBuffer::SetBuffWrtieStart(unsigned int) */

void __thiscall StreamBuffer::SetBuffWrtieStart(StreamBuffer *this,uint param_1)

{
  *(uint *)(this + 0xc) = *(int *)(this + 0xc) + param_1;
  return;
}


/* StreamBuffer::GetBufReadStart(unsigned int&) */

long __thiscall StreamBuffer::GetBufReadStart(StreamBuffer *this,uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0xc) - *(uint *)(this + 0x10);
  if (iVar1 != 0) {
    uVar2 = FUN_04a49f6c(iVar1,*(int *)(this + 8) -
                               (*(int *)(this + 8) - 1U & *(uint *)(this + 0x10)));
    *param_1 = uVar2;
    return *(long *)this + (ulong)(*(int *)(this + 8) - 1U & *(uint *)(this + 0x10));
  }
  return 0;
}


/* StreamBuffer::Clean() */

void __thiscall StreamBuffer::Clean(StreamBuffer *this)

{
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

