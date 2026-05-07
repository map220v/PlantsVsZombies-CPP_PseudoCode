// Class: CBuffer


/* CBuffer::Space() const */

int __thiscall CBuffer::Space(CBuffer *this)

{
  int iVar1;
  
  iVar1 = FUN_04a49134(*(undefined4 *)(this + 0xc),*(undefined4 *)(this + 0x10));
  return *(int *)(this + 8) - iVar1;
}


/* CBuffer::CBuffer(unsigned int) */

void * __thiscall CBuffer::CBuffer(CBuffer *this,uint param_1)

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


/* CBuffer::Peek(char*, unsigned int) */

ulong __thiscall CBuffer::Peek(CBuffer *this,char *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  uVar1 = *(uint *)(this + 0x10);
  iVar2 = *(int *)(this + 0xc) - uVar1;
  if (iVar2 != 0) {
    uVar4 = FUN_04a49158(param_2,iVar2);
    uVar1 = *(int *)(this + 8) - 1U & uVar1;
    uVar3 = FUN_04a49158(uVar4,*(int *)(this + 8) - uVar1);
    memcpy(param_1,(void *)(*(long *)this + (ulong)uVar1),(ulong)uVar3);
    memcpy(param_1 + uVar3,*(void **)this,(ulong)((int)uVar4 - uVar3));
    uVar4 = uVar4 & 0xffffffff;
  }
  return uVar4;
}


/* CBuffer::SeekReadPtr(unsigned int) */

bool __thiscall CBuffer::SeekReadPtr(CBuffer *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x10);
  uVar2 = FUN_04a49134(*(undefined4 *)(this + 0xc),iVar1);
  if (param_1 <= uVar2) {
    *(uint *)(this + 0x10) = iVar1 + param_1;
  }
  return param_1 <= uVar2;
}


/* CBuffer::Fetch(char*, unsigned int) */

ulong __thiscall CBuffer::Fetch(CBuffer *this,char *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = 0;
  uVar1 = *(uint *)(this + 0x10);
  iVar2 = *(int *)(this + 0xc) - uVar1;
  if (iVar2 != 0) {
    uVar5 = FUN_04a49158(param_2,iVar2);
    uVar1 = *(int *)(this + 8) - 1U & uVar1;
    uVar3 = FUN_04a49158(uVar5,*(int *)(this + 8) - uVar1);
    memcpy(param_1,(void *)(*(long *)this + (ulong)uVar1),(ulong)uVar3);
    memcpy(param_1 + uVar3,*(void **)this,(ulong)((int)uVar5 - uVar3));
    uVar4 = uVar5 & 0xffffffff;
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + (int)uVar5;
  }
  return uVar4;
}


/* CBuffer::FetchChunk(char*, unsigned int) */

undefined8 __thiscall CBuffer::FetchChunk(CBuffer *this,char *param_1,uint param_2)

{
  undefined8 uVar1;
  
  if ((uint)(*(int *)(this + 0xc) - *(int *)(this + 0x10)) < param_2) {
    return 0;
  }
  uVar1 = Fetch(this,param_1,param_2);
  return uVar1;
}


/* CBuffer::Push(char const*, unsigned int) */

bool __thiscall CBuffer::Push(CBuffer *this,char *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar2 = Space(this);
  if (param_2 <= uVar2) {
    uVar4 = FUN_04a49158(param_2,uVar2);
    uVar1 = *(int *)(this + 8) - 1U & *(uint *)(this + 0xc);
    uVar3 = FUN_04a49158(uVar4,*(int *)(this + 8) - uVar1);
    memcpy((void *)(*(long *)this + (ulong)uVar1),param_1,(ulong)uVar3);
    memcpy(*(void **)this,param_1 + uVar3,(ulong)((int)uVar4 - uVar3));
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + (int)uVar4;
  }
  return param_2 <= uVar2;
}

