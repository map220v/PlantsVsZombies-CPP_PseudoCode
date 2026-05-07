// Class: DString


/* DString::findString(char const*) const */

void __thiscall DString::findString(DString *this,char *param_1)

{
  findString(this,-1,param_1);
  return;
}


/* DString::~DString() */

void __thiscall DString::~DString(DString *this)

{
  *(undefined ***)this = &PTR__DString_06a23a60;
  if (*(DStringBlock **)(this + 8) != (DStringBlock *)0x0) {
    DStringBlock::release(*(DStringBlock **)(this + 8));
    return;
  }
  return;
}


/* DString::~DString() */

void __thiscall DString::~DString(DString *this)

{
  ~DString(this);
  AK::FreeHook(this);
  return;
}


/* DString::newString(char const*) */

void __thiscall DString::newString(DString *this,char *param_1)

{
  DStringBlock *this_00;
  
  if (*(DStringBlock **)(this + 8) != (DStringBlock *)0x0) {
    DStringBlock::release(*(DStringBlock **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  this_00 = ::operator_new(0x20);
  DStringBlock::DStringBlock(this_00,param_1);
  *(DStringBlock **)(this + 8) = this_00;
  return;
}


/* DString::newString(char const*, unsigned long) */

void __thiscall DString::newString(DString *this,char *param_1,ulong param_2)

{
  DStringBlock *this_00;
  
  if (*(DStringBlock **)(this + 8) != (DStringBlock *)0x0) {
    DStringBlock::release(*(DStringBlock **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  this_00 = ::operator_new(0x20);
  DStringBlock::DStringBlock(this_00,param_1,param_2);
  *(DStringBlock **)(this + 8) = this_00;
  return;
}


/* DString::DString() */

void __thiscall DString::DString(DString *this)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__DString_06a23a60;
  return;
}


/* DString::DString(char const*) */

void __thiscall DString::DString(DString *this,char *param_1)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__DString_06a23a60;
  newString(this,param_1);
  return;
}


/* DString::DString(char const*, unsigned long) */

void __thiscall DString::DString(DString *this,char *param_1,ulong param_2)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__DString_06a23a60;
  newString(this,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::DString(char) */

void __thiscall DString::DString(DString *this,char param_1)

{
  char local_10 [8];
  long local_8;
  
  *(undefined8 *)(this + 8) = 0;
  local_10[1] = 0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__DString_06a23a60;
  local_10[0] = param_1;
  newString(this,local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DString::DString(DString*) */

void __thiscall DString::DString(DString *this,DString *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__DString_06a23a60;
  if (param_1 != (DString *)0x0) {
    uVar1 = FUN_04f7a704(param_1 + 8);
    *(undefined8 *)(this + 8) = uVar1;
  }
  return;
}


/* DString::DString(DString const&) */

void __thiscall DString::DString(DString *this,DString *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__DString_06a23a60;
  uVar1 = FUN_04f7a704(param_1 + 8);
  *(undefined8 *)(this + 8) = uVar1;
  return;
}


/* DString::DString(DString&&) */

void __thiscall DString::DString(DString *this,DString *param_1)

{
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined ***)this = &PTR__DString_06a23a60;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


/* DString::DString(std::string const&) */

void __thiscall DString::DString(DString *this,string *param_1)

{
  char *pcVar1;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__DString_06a23a60;
  pcVar1 = (char *)FUN_0547429c(param_1);
  newString(this,pcVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::setWithTime(unsigned long long, DString::DTimeFormat) */

void __thiscall DString::setWithTime(DString *this,ulong param_1,undefined4 param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  char local_40 [56];
  long local_8;
  
  local_40[0x30] = '\0';
  local_40[0x31] = '\0';
  local_40[0] = '\0';
  local_40[1] = '\0';
  local_40[2] = '\0';
  local_40[3] = '\0';
  local_40[4] = '\0';
  local_40[5] = '\0';
  local_40[6] = '\0';
  local_40[7] = '\0';
  local_40[8] = '\0';
  local_40[9] = '\0';
  local_40[10] = '\0';
  local_40[0xb] = '\0';
  local_40[0xc] = '\0';
  local_40[0xd] = '\0';
  local_40[0xe] = '\0';
  local_40[0xf] = '\0';
  local_40[0x10] = '\0';
  local_40[0x11] = '\0';
  local_40[0x12] = '\0';
  local_40[0x13] = '\0';
  local_40[0x14] = '\0';
  local_40[0x15] = '\0';
  local_40[0x16] = '\0';
  local_40[0x17] = '\0';
  local_40[0x18] = '\0';
  local_40[0x19] = '\0';
  local_40[0x1a] = '\0';
  local_40[0x1b] = '\0';
  local_40[0x1c] = '\0';
  local_40[0x1d] = '\0';
  local_40[0x1e] = '\0';
  local_40[0x1f] = '\0';
  local_40[0x20] = '\0';
  local_40[0x21] = '\0';
  local_40[0x22] = '\0';
  local_40[0x23] = '\0';
  local_40[0x24] = '\0';
  local_40[0x25] = '\0';
  local_40[0x26] = '\0';
  local_40[0x27] = '\0';
  local_40[0x28] = '\0';
  local_40[0x29] = '\0';
  local_40[0x2a] = '\0';
  local_40[0x2b] = '\0';
  local_40[0x2c] = '\0';
  local_40[0x2d] = '\0';
  local_40[0x2e] = '\0';
  local_40[0x2f] = '\0';
  local_8 = ___stack_chk_guard;
  iVar3 = (int)param_1;
  switch(param_3) {
  case 0:
    uVar1 = (param_1 % 0xe10) / 0x3c;
    sprintf(local_40,"%02d:%02d:%02d",(ulong)(uint)(iVar3 / 0xe10),uVar1,
            (ulong)(uint)((int)(param_1 % 0xe10) + (int)uVar1 * -0x3c));
    break;
  case 1:
    sprintf(local_40,"%02d:%02d",(ulong)(uint)(iVar3 / 0x3c),
            (ulong)(uint)(iVar3 + (int)(param_1 / 0x3c) * -0x3c));
    break;
  case 2:
    sprintf(local_40,"%ds",param_1 & 0xffffffff);
    break;
  case 3:
    uVar1 = param_1 % 0x15180 >> 4;
    uVar2 = param_1 % 0x15180 + (uVar1 / 0xe1) * -0xe10;
    uVar4 = uVar2 / 0x3c;
    sprintf(local_40,"%02d:%02d:%02d:%02d",(ulong)(uint)(iVar3 / 0x15180),uVar1 / 0xe1,
            uVar4 & 0xffffffff,(ulong)(uint)((int)uVar2 + (int)uVar4 * -0x3c));
  }
  newString(this,local_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::CreateWithTime(unsigned long long, DString::DTimeFormat) */

void __thiscall DString::CreateWithTime(DString *param_1,DString *this,undefined4 param_3)

{
  DString *pDVar1;
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString(aDStack_18);
  pDVar1 = (DString *)setWithTime(aDStack_18,this,param_3);
  DString(param_1,pDVar1);
  ~DString(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* DString::initWithFormatAndValist(char const*, std::__va_list) */

void __thiscall DString::initWithFormatAndValist(DString *this,char *param_1,undefined8 *param_3)

{
  DStackAllocator *pDVar1;
  char *__s;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  pDVar1 = (DStackAllocator *)DStackAllocator::getInstance();
  __s = (char *)DStackAllocator::push(pDVar1,0x2800);
  local_20 = *param_3;
  uStack_18 = param_3[1];
  local_10 = param_3[2];
  uStack_8 = param_3[3];
  vsprintf(__s,param_1,&local_20);
  newString(this,__s);
  pDVar1 = (DStackAllocator *)DStackAllocator::getInstance();
  DStackAllocator::pop(pDVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::Format(char const*, ...) */

void DString::Format(char *param_1,...)

{
  long lVar1;
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  DString *in_x8;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined8 uStack_f8;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_38 = in_x1;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  DString(in_x8);
  local_100 = auStack_40;
  uStack_f8 = 0xffffff80ffffffc8;
  local_110 = (undefined1 *)register0x00000008;
  puStack_108 = (undefined1 *)register0x00000008;
  initWithFormatAndValist(in_x8,param_1,&local_110);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::format(char const*, ...) */

void DString::format(char *param_1,...)

{
  long lVar1;
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_f0 = &local_30;
  uStack_e8 = 0xffffff80ffffffd0;
  local_100 = (undefined1 *)register0x00000008;
  puStack_f8 = (undefined1 *)register0x00000008;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  initWithFormatAndValist((DString *)param_1,in_x1,&local_100);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* DString::DString(float) */

void __thiscall DString::DString(DString *this,float param_1)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__DString_06a23a60;
  format((char *)this,(double)param_1,&DAT_055f3d18);
  return;
}


/* DString::DString(int) */

void __thiscall DString::DString(DString *this,int param_1)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__DString_06a23a60;
  format((char *)this,&DAT_055936e8,(ulong)(uint)param_1);
  return;
}


/* DString::DString(long) */

void __thiscall DString::DString(DString *this,long param_1)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__DString_06a23a60;
  format((char *)this,&DAT_0569e330,param_1);
  return;
}


/* DString::DString(double) */

void __thiscall DString::DString(DString *this,double param_1)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__DString_06a23a60;
  format((char *)this,&DAT_0569e338);
  return;
}


/* DString::DString(long long) */

void __thiscall DString::DString(DString *this,longlong param_1)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__DString_06a23a60;
  format((char *)this,&DAT_0569e340,param_1);
  return;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(char*) */

DString * __thiscall DString::operator=(DString *this,char *param_1)

{
  newString(this,param_1);
  return this;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(DString const&) */

DString * __thiscall DString::operator=(DString *this,DString *param_1)

{
  FUN_04f7a704(param_1 + 8);
  if (*(DStringBlock **)(this + 8) != (DStringBlock *)0x0) {
    DStringBlock::release(*(DStringBlock **)(this + 8));
  }
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  return this;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(DString&&) */

DString * __thiscall DString::operator=(DString *this,DString *param_1)

{
  if (*(DStringBlock **)(this + 8) != (DStringBlock *)0x0) {
    DStringBlock::release(*(DStringBlock **)(this + 8));
  }
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  return this;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(std::string const&) */

DString * __thiscall DString::operator=(DString *this,string *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_0547429c(param_1);
  newString(this,pcVar1);
  return this;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(int) */

DString * __thiscall DString::operator=(DString *this,int param_1)

{
  format((char *)this,&DAT_055936e8,(ulong)(uint)param_1);
  return this;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(float) */

DString * __thiscall DString::operator=(DString *this,float param_1)

{
  format((char *)this,(double)param_1,&DAT_055f3d18);
  return this;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(long) */

DString * __thiscall DString::operator=(DString *this,long param_1)

{
  format((char *)this,&DAT_0569e330,param_1);
  return this;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(double) */

DString * __thiscall DString::operator=(DString *this,double param_1)

{
  format((char *)this,&DAT_0569e338);
  return this;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(long long) */

DString * __thiscall DString::operator=(DString *this,longlong param_1)

{
  format((char *)this,&DAT_0569e340,param_1);
  return this;
}


/* DString::empty() const */

bool __thiscall DString::empty(DString *this)

{
  long lVar1;
  
  if (*(long *)(this + 8) != 0) {
    lVar1 = FUN_04f7a680(*(undefined8 *)(*(long *)(this + 8) + 8));
    return lVar1 == 0;
  }
  return true;
}


/* DString::size() const */

void __thiscall DString::size(DString *this)

{
  FUN_04f7a680(*(undefined8 *)(*(long *)(this + 8) + 8));
  return;
}


/* DString::camp(char const*) const */

void DString::camp(char *param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_04f7a47c(*(undefined8 *)(*(long *)(param_1 + 8) + 0x10));
    return;
  }
  return;
}


/* DString::campn(char const*) const */

void DString::campn(char *param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_04f7a544(*(long *)(param_1 + 8) + 0x10);
    return;
  }
  return;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(char*) const */

void __thiscall DString::operator==(DString *this,char *param_1)

{
  if (*(long *)(this + 8) != 0) {
    FUN_04f7a47c(*(undefined8 *)(*(long *)(this + 8) + 0x10));
    return;
  }
  return;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(std::string const&) const */

void __thiscall DString::operator==(DString *this,string *param_1)

{
  FUN_0547429c(param_1);
  camp((char *)this);
  return;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(char const*) const */

byte __thiscall DString::operator!=(DString *this,char *param_1)

{
  byte bVar1;
  
  bVar1 = camp((char *)this);
  return bVar1 ^ 1;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(std::string const&) const */

byte __thiscall DString::operator!=(DString *this,string *param_1)

{
  byte bVar1;
  
  FUN_0547429c(param_1);
  bVar1 = camp((char *)this);
  return bVar1 ^ 1;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(char const*) const */

void __thiscall DString::operator<(DString *this,char *param_1)

{
  if (*(long *)(this + 8) != 0) {
    FUN_04f7a4c0(*(undefined8 *)(*(long *)(this + 8) + 0x10));
    return;
  }
  return;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(std::string const&) const */

undefined8 __thiscall DString::operator<(DString *this,string *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8);
  if (lVar2 != 0) {
    uVar1 = FUN_0547429c(param_1);
    uVar1 = FUN_04f7a4c0(*(undefined8 *)(lVar2 + 0x10),uVar1);
    return uVar1;
  }
  return 0;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(char const*) const */

void __thiscall DString::operator>(DString *this,char *param_1)

{
  if (*(long *)(this + 8) != 0) {
    FUN_04f7a504(*(undefined8 *)(*(long *)(this + 8) + 0x10));
    return;
  }
  return;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(std::string const&) const */

undefined8 __thiscall DString::operator>(DString *this,string *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8);
  if (lVar2 != 0) {
    uVar1 = FUN_0547429c(param_1);
    uVar1 = FUN_04f7a504(*(undefined8 *)(lVar2 + 0x10),uVar1);
    return uVar1;
  }
  return 0;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(char const*) const */

byte __thiscall DString::operator<=(DString *this,char *param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(long *)(this + 8) != 0) {
    bVar1 = FUN_04f7a504(*(undefined8 *)(*(long *)(this + 8) + 0x10));
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(std::string const&) const */

byte __thiscall DString::operator<=(DString *this,string *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 8);
  if (lVar3 != 0) {
    uVar2 = FUN_0547429c(param_1);
    bVar1 = FUN_04f7a504(*(undefined8 *)(lVar3 + 0x10),uVar2);
    return bVar1 ^ 1;
  }
  return 0;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(char const*) const */

byte __thiscall DString::operator>=(DString *this,char *param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(long *)(this + 8) != 0) {
    bVar1 = FUN_04f7a4c0(*(undefined8 *)(*(long *)(this + 8) + 0x10));
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(std::string const&) const */

byte __thiscall DString::operator>=(DString *this,string *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 8);
  if (lVar3 != 0) {
    uVar2 = FUN_0547429c(param_1);
    bVar1 = FUN_04f7a4c0(*(undefined8 *)(lVar3 + 0x10),uVar2);
    return bVar1 ^ 1;
  }
  return 0;
}


/* DString::operator[](int) const */

void DString::operator[](int param_1)

{
  FUN_04f7a684(*(undefined8 *)((ulong)(uint)param_1 + 8));
  return;
}


/* DString::operator[](int) */

void DString::operator[](int param_1)

{
  FUN_04f7a6ac(*(undefined8 *)((ulong)(uint)param_1 + 8));
  return;
}


/* DString::addString(char const*) */

DString * __thiscall DString::addString(DString *this,char *param_1)

{
  undefined8 uVar1;
  
  if (*(DStringBlock **)(this + 8) != (DStringBlock *)0x0) {
    uVar1 = DStringBlock::addString(*(DStringBlock **)(this + 8),param_1);
    *(undefined8 *)(this + 8) = uVar1;
    return this;
  }
  newString(this,param_1);
  return this;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(char*) */

DString * __thiscall DString::operator+=(DString *this,char *param_1)

{
  addString(this,param_1);
  return this;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(std::string const&) */

DString * __thiscall DString::operator+=(DString *this,string *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_0547429c(param_1);
  addString(this,pcVar1);
  return this;
}


/* DString::addString(char const*, unsigned long) */

DString * __thiscall DString::addString(DString *this,char *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (*(DStringBlock **)(this + 8) != (DStringBlock *)0x0) {
    uVar1 = DStringBlock::addString(*(DStringBlock **)(this + 8),param_1,param_2);
    *(undefined8 *)(this + 8) = uVar1;
    return this;
  }
  newString(this,param_1,param_2);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::addChar(char) */

void __thiscall DString::addChar(DString *this,char param_1)

{
  char local_10 [8];
  long local_8;
  
  local_10[1] = 0;
  local_8 = ___stack_chk_guard;
  local_10[0] = param_1;
  addString(this,local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(char) */

DString * __thiscall DString::operator+=(DString *this,char param_1)

{
  addChar(this,param_1);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::subString(long) const */

void DString::subString(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong in_x1;
  DString *in_x8;
  long lVar3;
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString(aDStack_18);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != 0) {
    lVar1 = FUN_04f7a67c(*(undefined8 *)(lVar3 + 0x10));
    if (((long)in_x1 < 0) || (uVar2 = FUN_04f7a680(*(undefined8 *)(lVar3 + 8)), uVar2 <= in_x1)) {
      DString(in_x8,"");
      goto LAB_04f7b8fc;
    }
    operator+=(aDStack_18,(char *)(lVar1 + in_x1));
  }
  DString(in_x8,aDStack_18);
LAB_04f7b8fc:
  ~DString(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::subString(long, long) const */

void DString::subString(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  DStackAllocator *pDVar4;
  char *__s;
  ulong in_x2;
  DString *in_x8;
  long lVar5;
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString(aDStack_18);
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 != 0) {
    lVar2 = FUN_04f7a67c(*(undefined8 *)(lVar5 + 0x10));
    if (((param_2 < 0) ||
        (uVar3 = FUN_04f7a680(*(undefined8 *)(lVar5 + 8)), uVar3 <= (ulong)param_2)) ||
       ((long)in_x2 < param_2)) {
      DString(in_x8,"");
      goto LAB_04f7ba30;
    }
    uVar1 = uVar3 - 1;
    if (in_x2 < uVar3) {
      uVar1 = in_x2;
    }
    pDVar4 = (DStackAllocator *)DStackAllocator::getInstance();
    uVar3 = (uVar1 - param_2) + 2;
    __s = (char *)DStackAllocator::push(pDVar4,uVar3);
    memset(__s,0,uVar3);
    memcpy(__s,(void *)(lVar2 + param_2),(uVar1 - param_2) + 1);
    operator+=(aDStack_18,__s);
    pDVar4 = (DStackAllocator *)DStackAllocator::getInstance();
    DStackAllocator::pop(pDVar4);
  }
  DString(in_x8,aDStack_18);
LAB_04f7ba30:
  ~DString(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::subStringLeft(long) const */

void DString::subStringLeft(long param_1)

{
  ulong __n;
  void *__src;
  ulong uVar1;
  DStackAllocator *pDVar2;
  char *__s;
  ulong in_x1;
  DString *in_x8;
  long lVar3;
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString(aDStack_18);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != 0) {
    __src = (void *)FUN_04f7a67c(*(undefined8 *)(lVar3 + 0x10));
    uVar1 = FUN_04f7a680(*(undefined8 *)(lVar3 + 8));
    if ((uVar1 <= in_x1) || ((long)in_x1 < 0)) {
      DString(in_x8,"");
      goto LAB_04f7bb44;
    }
    pDVar2 = (DStackAllocator *)DStackAllocator::getInstance();
    __n = (uVar1 - in_x1) + 1;
    __s = (char *)DStackAllocator::push(pDVar2,__n);
    memset(__s,0,__n);
    memcpy(__s,__src,uVar1 - in_x1);
    operator+=(aDStack_18,__s);
    pDVar2 = (DStackAllocator *)DStackAllocator::getInstance();
    DStackAllocator::pop(pDVar2);
  }
  DString(in_x8,aDStack_18);
LAB_04f7bb44:
  ~DString(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::subStringLeft(long, long) const */

void DString::subStringLeft(long param_1,long param_2)

{
  ulong __n;
  long lVar1;
  ulong uVar2;
  DStackAllocator *pDVar3;
  char *__s;
  ulong in_x2;
  DString *in_x8;
  long lVar4;
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString(aDStack_18);
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 != 0) {
    lVar1 = FUN_04f7a67c(*(undefined8 *)(lVar4 + 0x10));
    uVar2 = FUN_04f7a680(*(undefined8 *)(lVar4 + 8));
    if (((long)in_x2 <= param_2 || param_2 < 0) || (uVar2 <= (ulong)param_2)) {
      DString(in_x8,"");
      goto LAB_04f7bc80;
    }
    if (uVar2 <= in_x2) {
      in_x2 = uVar2 - 1;
    }
    __n = (in_x2 - param_2) + 2;
    pDVar3 = (DStackAllocator *)DStackAllocator::getInstance();
    __s = (char *)DStackAllocator::push(pDVar3,__n);
    memset(__s,0,__n);
    memcpy(__s,(void *)(lVar1 + ((uVar2 - 1) - in_x2)),(in_x2 - param_2) + 1);
    operator+=(aDStack_18,__s);
    pDVar3 = (DStackAllocator *)DStackAllocator::getInstance();
    DStackAllocator::pop(pDVar3);
  }
  DString(in_x8,aDStack_18);
LAB_04f7bc80:
  ~DString(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DString::findString(long, char const*) const */

long __thiscall DString::findString(DString *this,long param_1,char *param_2)

{
  long lVar1;
  char *pcVar2;
  
  lVar1 = FUN_04f7a67c(*(undefined8 *)(*(long *)(this + 8) + 0x10));
  if (lVar1 == 0) {
    lVar1 = -1;
  }
  else {
    pcVar2 = strstr((char *)(lVar1 + param_1 + 1),param_2);
    lVar1 = (long)pcVar2 - lVar1;
    if (pcVar2 == (char *)0x0) {
      lVar1 = -1;
    }
  }
  return lVar1;
}


/* DString::findNumber(long) const */

long __thiscall DString::findNumber(DString *this,long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8);
  lVar1 = FUN_04f7a67c(*(undefined8 *)(lVar2 + 0x10));
  if (lVar1 != 0) {
    lVar2 = FUN_04f7a680(*(undefined8 *)(lVar2 + 8));
    while (param_1 = param_1 + 1, param_1 < lVar2) {
      if ((byte)(*(char *)(lVar1 + param_1) - 0x30U) < 10) {
        return param_1;
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::rfindString(long, char const*) const */

void __thiscall DString::rfindString(DString *this,long param_1,char *param_2)

{
  ulong uVar1;
  DStackAllocator *pDVar2;
  char *__s;
  void *__src;
  undefined8 uVar3;
  size_t __n;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_04f7a680(*(undefined8 *)(*(long *)(this + 8) + 8));
  if (param_1 + 1U < uVar1) {
    __n = uVar1 - (param_1 + 1U);
    pDVar2 = (DStackAllocator *)DStackAllocator::getInstance();
    uVar1 = __n + 1;
    __s = (char *)DStackAllocator::push(pDVar2,uVar1);
    memset(__s,0,uVar1);
    __src = (void *)FUN_04f7a67c(*(undefined8 *)(*(long *)(this + 8) + 0x10));
    memcpy(__s,__src,__n);
    std::string::string(asStack_10,__s);
    nop();
    pDVar2 = (DStackAllocator *)DStackAllocator::getInstance();
    DStackAllocator::pop(pDVar2);
    uVar3 = FUN_054744a4(asStack_10,param_2,0xffffffffffffffff);
    std::string::~string(asStack_10);
  }
  else {
    uVar3 = 0xffffffffffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* DString::clear() */

void __thiscall DString::clear(DString *this)

{
  if (*(DStringBlock **)(this + 8) != (DStringBlock *)0x0) {
    DStringBlock::release(*(DStringBlock **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  return;
}


/* DString::c_str() const */

undefined1 * __thiscall DString::c_str(DString *this)

{
  undefined1 *puVar1;
  
  if (*(long *)(this + 8) != 0) {
    puVar1 = (undefined1 *)FUN_04f7a67c(*(undefined8 *)(*(long *)(this + 8) + 0x10));
    return puVar1;
  }
  return &DAT_055923fe;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(DString const&) const */

void __thiscall DString::operator==(DString *this,DString *param_1)

{
  c_str(param_1);
  camp((char *)this);
  return;
}


/* DString::compareWithNoCase(DString const&) const */

void __thiscall DString::compareWithNoCase(DString *this,DString *param_1)

{
  c_str(param_1);
  campn((char *)this);
  return;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(DString const&) const */

byte __thiscall DString::operator!=(DString *this,DString *param_1)

{
  byte bVar1;
  
  c_str(param_1);
  bVar1 = camp((char *)this);
  return bVar1 ^ 1;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(DString const&) const */

undefined8 __thiscall DString::operator<(DString *this,DString *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8);
  if (lVar2 != 0) {
    uVar1 = c_str(param_1);
    uVar1 = FUN_04f7a4c0(*(undefined8 *)(lVar2 + 0x10),uVar1);
    return uVar1;
  }
  return 0;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(DString const&) const */

undefined8 __thiscall DString::operator>(DString *this,DString *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8);
  if (lVar2 != 0) {
    uVar1 = c_str(param_1);
    uVar1 = FUN_04f7a504(*(undefined8 *)(lVar2 + 0x10),uVar1);
    return uVar1;
  }
  return 0;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(DString const&) const */

byte __thiscall DString::operator<=(DString *this,DString *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 8);
  if (lVar3 != 0) {
    uVar2 = c_str(param_1);
    bVar1 = FUN_04f7a504(*(undefined8 *)(lVar3 + 0x10),uVar2);
    return bVar1 ^ 1;
  }
  return 0;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(DString const&) const */

byte __thiscall DString::operator>=(DString *this,DString *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 8);
  if (lVar3 != 0) {
    uVar2 = c_str(param_1);
    bVar1 = FUN_04f7a4c0(*(undefined8 *)(lVar3 + 0x10),uVar2);
    return bVar1 ^ 1;
  }
  return 0;
}


/* DString::addDString(DString*) */

DString * __thiscall DString::addDString(DString *this,DString *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  DStringBlock *this_00;
  
  this_00 = *(DStringBlock **)(this + 8);
  if (this_00 != (DStringBlock *)0x0) {
    pcVar1 = (char *)c_str(param_1);
    uVar2 = DStringBlock::addString(this_00,pcVar1);
    *(undefined8 *)(this + 8) = uVar2;
    return this;
  }
  FUN_04f7a704(param_1 + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  return this;
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(DString*) */

DString * __thiscall DString::operator+=(DString *this,DString *param_1)

{
  addDString(this,param_1);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::getFileExtNameString() const */

void DString::getFileExtNameString(void)

{
  long lVar1;
  long lVar2;
  DString *in_x0;
  char *pcVar3;
  long lVar4;
  DStackAllocator *pDVar5;
  char *__s;
  DString *in_x8;
  size_t __n;
  ulong __n_00;
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar3 = (char *)c_str(in_x0);
  lVar4 = FUN_04f7a680(*(undefined8 *)(*(long *)(in_x0 + 8) + 8));
  if (lVar4 == 0) {
LAB_04f7c384:
    DString(in_x8,pcVar3);
  }
  else {
    if ((pcVar3[lVar4 + -1] == '/') || (lVar2 = lVar4 + -1, pcVar3[lVar4 + -1] == '\\')) {
      __n_00 = 1;
      __n = 0;
    }
    else {
      do {
        lVar1 = lVar2;
        if (lVar1 == 0) goto LAB_04f7c384;
      } while ((pcVar3[lVar1 + -1] != '/') && (lVar2 = lVar1 + -1, pcVar3[lVar1 + -1] != '\\'));
      __n = lVar4 - lVar1;
      __n_00 = __n + 1;
      lVar4 = lVar1;
    }
    pDVar5 = (DStackAllocator *)DStackAllocator::getInstance();
    __s = (char *)DStackAllocator::push(pDVar5,__n_00);
    memset(__s,0,__n_00);
    memcpy(__s,pcVar3 + lVar4,__n);
    DString(aDStack_18,__s);
    pDVar5 = (DStackAllocator *)DStackAllocator::getInstance();
    DStackAllocator::pop(pDVar5);
    DString(in_x8,aDStack_18);
    ~DString(aDStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::getDirNameString(bool) const */

void DString::getDirNameString(bool param_1)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  char *__src;
  ulong __n;
  DStackAllocator *pDVar4;
  char *__s;
  char in_w1;
  DString *in_x8;
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __src = (char *)c_str((DString *)(ulong)param_1);
  __n = FUN_04f7a680(*(undefined8 *)(*(long *)((DString *)(ulong)param_1 + 8) + 8));
  if (__n == 0) {
LAB_04f7c4c0:
    DString(in_x8,__src);
  }
  else {
    cVar1 = __src[__n - 1];
    uVar3 = __n - 1;
    while ((uVar2 = uVar3, cVar1 != '/' && (cVar1 != '\\'))) {
      if (uVar2 == 0) goto LAB_04f7c4c0;
      uVar3 = uVar2 - 1;
      __n = uVar2;
      cVar1 = __src[uVar2 - 1];
    }
    if (in_w1 != '\0') {
      __n = __n + 1;
    }
    pDVar4 = (DStackAllocator *)DStackAllocator::getInstance();
    __s = (char *)DStackAllocator::push(pDVar4,__n);
    memset(__s,0,__n);
    memcpy(__s,__src,__n - 1);
    DString(aDStack_18,__s);
    pDVar4 = (DStackAllocator *)DStackAllocator::getInstance();
    DStackAllocator::pop(pDVar4);
    DString(in_x8,aDStack_18);
    ~DString(aDStack_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::getFileNameString() const */

void DString::getFileNameString(void)

{
  char cVar1;
  bool bVar2;
  DString *in_x0;
  char *pcVar3;
  long lVar4;
  DStackAllocator *pDVar5;
  char *__s;
  DString *in_x8;
  long lVar6;
  long lVar7;
  ulong __n;
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar3 = (char *)c_str(in_x0);
  lVar4 = FUN_04f7a680(*(undefined8 *)(*(long *)(in_x0 + 8) + 8));
  if (lVar4 != 0) {
    bVar2 = false;
    lVar7 = lVar4 + 1;
    do {
      while( true ) {
        lVar6 = lVar4;
        lVar4 = lVar6 + -1;
        cVar1 = pcVar3[lVar4];
        if (cVar1 != '.') break;
        bVar2 = true;
        lVar7 = lVar6;
        if (lVar4 == 0) goto LAB_04f7c5f4;
      }
      if ((cVar1 == '/') || (cVar1 == '\\')) goto LAB_04f7c634;
    } while (lVar4 != 0);
LAB_04f7c5f4:
    lVar6 = lVar4;
    if (bVar2) {
LAB_04f7c634:
      pDVar5 = (DStackAllocator *)DStackAllocator::getInstance();
      __n = lVar7 - lVar6;
      __s = (char *)DStackAllocator::push(pDVar5,__n);
      memset(__s,0,__n);
      memcpy(__s,pcVar3 + lVar6,__n - 1);
      DString(aDStack_18,__s);
      pDVar5 = (DStackAllocator *)DStackAllocator::getInstance();
      DStackAllocator::pop(pDVar5);
      DString(in_x8,aDStack_18);
      ~DString(aDStack_18);
      goto LAB_04f7c604;
    }
  }
  DString(in_x8,pcVar3);
LAB_04f7c604:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::getFileExtString() const */

void DString::getFileExtString(void)

{
  long lVar1;
  long lVar2;
  DString *in_x0;
  long lVar3;
  long lVar4;
  DStackAllocator *pDVar5;
  char *__s;
  DString *in_x8;
  size_t __n;
  ulong __n_00;
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = c_str(in_x0);
  lVar4 = FUN_04f7a680(*(undefined8 *)(*(long *)(in_x0 + 8) + 8));
  if (lVar4 == 0) {
LAB_04f7c70c:
    DString(in_x8,"");
  }
  else {
    lVar2 = lVar4 + -1;
    if (*(char *)(lVar3 + lVar4 + -1) == '.') {
      __n_00 = 1;
      __n = 0;
    }
    else {
      do {
        lVar1 = lVar2;
        if (lVar1 == 0) goto LAB_04f7c70c;
        lVar2 = lVar1 + -1;
      } while (*(char *)(lVar3 + lVar1 + -1) != '.');
      __n = lVar4 - lVar1;
      __n_00 = __n + 1;
      lVar4 = lVar1;
    }
    pDVar5 = (DStackAllocator *)DStackAllocator::getInstance();
    __s = (char *)DStackAllocator::push(pDVar5,__n_00);
    memset(__s,0,__n_00);
    memcpy(__s,(void *)(lVar3 + lVar4),__n);
    DString(aDStack_18,__s);
    pDVar5 = (DStackAllocator *)DStackAllocator::getInstance();
    DStackAllocator::pop(pDVar5);
    DString(in_x8,aDStack_18);
    ~DString(aDStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DString::makeUpper() const */

void DString::makeUpper(void)

{
  char cVar1;
  char cVar2;
  DString *in_x0;
  DStackAllocator *pDVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  DString *in_x8;
  
  pDVar3 = (DStackAllocator *)DStackAllocator::getInstance();
  uVar4 = size(in_x0);
  pcVar5 = (char *)DStackAllocator::push(pDVar3,uVar4);
  pcVar6 = (char *)c_str(in_x0);
  lVar7 = 0;
  cVar2 = *pcVar6;
  while (cVar2 != '\0') {
    cVar1 = cVar2 + -0x20;
    if (0x19 < (byte)(cVar2 + 0x9fU)) {
      cVar1 = cVar2;
    }
    pcVar5[lVar7] = cVar1;
    lVar7 = lVar7 + 1;
    cVar2 = pcVar6[lVar7];
  }
  pcVar5[lVar7] = '\0';
  DString(in_x8,pcVar5);
  pDVar3 = (DStackAllocator *)DStackAllocator::getInstance();
  DStackAllocator::pop(pDVar3);
  return;
}


/* DString::makeLower() const */

void DString::makeLower(void)

{
  char cVar1;
  char cVar2;
  DString *in_x0;
  DStackAllocator *pDVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  DString *in_x8;
  
  pDVar3 = (DStackAllocator *)DStackAllocator::getInstance();
  uVar4 = size(in_x0);
  pcVar5 = (char *)DStackAllocator::push(pDVar3,uVar4);
  pcVar6 = (char *)c_str(in_x0);
  lVar7 = 0;
  cVar2 = *pcVar6;
  while (cVar2 != '\0') {
    cVar1 = cVar2 + ' ';
    if (0x19 < (byte)(cVar2 + 0xbfU)) {
      cVar1 = cVar2;
    }
    pcVar5[lVar7] = cVar1;
    lVar7 = lVar7 + 1;
    cVar2 = pcVar6[lVar7];
  }
  pcVar5[lVar7] = '\0';
  DString(in_x8,pcVar5);
  pDVar3 = (DStackAllocator *)DStackAllocator::getInstance();
  DStackAllocator::pop(pDVar3);
  return;
}


/* DString::toLong() const */

void __thiscall DString::toLong(DString *this)

{
  char *__nptr;
  
  __nptr = (char *)c_str(this);
  if (__nptr != (char *)0x0) {
    atol(__nptr);
    return;
  }
  return;
}


/* DString::operator long() const */

long __thiscall DString::operator_cast_to_long(DString *this)

{
  char *__nptr;
  long lVar1;
  
  __nptr = (char *)c_str(this);
  if (__nptr != (char *)0x0) {
    lVar1 = atol(__nptr);
    return lVar1;
  }
  return 0;
}


/* DString::toInt64() const */

void __thiscall DString::toInt64(DString *this)

{
  char *__nptr;
  
  __nptr = (char *)c_str(this);
  if (__nptr != (char *)0x0) {
    atoll(__nptr);
    return;
  }
  return;
}


/* DString::operator long long() const */

longlong __thiscall DString::operator_cast_to_long_long(DString *this)

{
  char *__nptr;
  longlong lVar1;
  
  __nptr = (char *)c_str(this);
  if (__nptr != (char *)0x0) {
    lVar1 = atoll(__nptr);
    return lVar1;
  }
  return 0;
}


/* DString::toInt() const */

int __thiscall DString::toInt(DString *this)

{
  int iVar1;
  char *__nptr;
  
  __nptr = (char *)c_str(this);
  if (__nptr != (char *)0x0) {
    iVar1 = atoi(__nptr);
    return iVar1;
  }
  return 0;
}


/* DString::operator int() const */

int __thiscall DString::operator_cast_to_int(DString *this)

{
  int iVar1;
  char *__nptr;
  
  __nptr = (char *)c_str(this);
  if (__nptr != (char *)0x0) {
    iVar1 = atoi(__nptr);
    return iVar1;
  }
  return 0;
}


/* DString::toHex() const */

int __thiscall DString::toHex(DString *this)

{
  int iVar1;
  bool bVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  
  pbVar3 = (byte *)c_str(this);
  if ((pbVar3 == (byte *)0x0) || (uVar4 = (uint)*pbVar3, *pbVar3 == 0)) {
    return 0;
  }
  bVar2 = false;
  iVar5 = 0;
  do {
    while( true ) {
      if (9 < (uVar4 - 0x30 & 0xff)) break;
      iVar5 = (uVar4 - 0x30) + iVar5 * 0x10;
      bVar2 = true;
LAB_04f7c998:
      pbVar3 = pbVar3 + 1;
      uVar4 = (uint)*pbVar3;
      if (*pbVar3 == 0) {
        return iVar5;
      }
    }
    iVar1 = uVar4 - 0x37;
    if (5 < (uVar4 - 0x41 & 0xff)) {
      if ((uVar4 - 0x61 & 0xff) < 6) {
        iVar5 = (uVar4 - 0x57) + iVar5 * 0x10;
        bVar2 = true;
      }
      else if (bVar2) {
        return iVar5;
      }
      goto LAB_04f7c998;
    }
    pbVar3 = pbVar3 + 1;
    uVar4 = (uint)*pbVar3;
    iVar5 = iVar1 + iVar5 * 0x10;
    bVar2 = true;
    if (uVar4 == 0) {
      return iVar5;
    }
  } while( true );
}


/* DString::toDouble() const */

undefined1  [16] __thiscall DString::toDouble(DString *this)

{
  char *__nptr;
  undefined1 auVar1 [16];
  undefined8 extraout_var;
  
  __nptr = (char *)c_str(this);
  if (__nptr != (char *)0x0) {
    auVar1._0_8_ = atof(__nptr);
    auVar1._8_8_ = extraout_var;
    return auVar1;
  }
  return ZEXT816(0);
}


/* DString::toFloat() const */

float __thiscall DString::toFloat(DString *this)

{
  double dVar1;
  
  dVar1 = (double)toDouble(this);
  return (float)dVar1;
}


/* DString::operator float() const */

float __thiscall DString::operator_cast_to_float(DString *this)

{
  double dVar1;
  
  dVar1 = (double)toDouble(this);
  return (float)dVar1;
}


/* DString::trim() const */

void DString::trim(void)

{
  bool bVar1;
  bool bVar2;
  DString *in_x0;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  DString *in_x8;
  
  uVar3 = size(in_x0);
  if (uVar3 == 0) goto LAB_04f7cb34;
  pcVar4 = (char *)c_str(in_x0);
  if (*pcVar4 == ' ') {
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      if (pcVar4[uVar5] != ' ') break;
    } while (uVar5 < uVar3);
    if (uVar3 - 1 < uVar5) goto LAB_04f7cafc;
    bVar1 = uVar5 == 0;
    if (pcVar4[uVar3 - 1] == ' ') goto LAB_04f7cacc;
    bVar2 = true;
  }
  else {
    bVar1 = true;
    uVar5 = 0;
    if (pcVar4[uVar3 - 1] != ' ') goto LAB_04f7cb34;
LAB_04f7cacc:
    uVar6 = uVar3 - 1;
    do {
      uVar6 = uVar6 - 1;
      if (uVar6 < uVar5) break;
    } while (pcVar4[uVar6] == ' ');
    bVar2 = uVar6 == uVar3 - 1;
  }
  if ((!bVar1) || (!bVar2)) {
LAB_04f7cafc:
    subString((long)in_x0,uVar5);
    return;
  }
LAB_04f7cb34:
  DString(in_x8,in_x0);
  return;
}


/* DString::operator char const*() const */

char * __thiscall DString::operator_cast_to_char_(DString *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 8) != 0) {
    pcVar1 = (char *)FUN_04f7a67c(*(undefined8 *)(*(long *)(this + 8) + 0x10));
    return pcVar1;
  }
  return "";
}


/* DString::join(std::vector<DString, std::allocator<DString> > const&, char const*) */

DString * __thiscall DString::join(DString *this,vector *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  DString *pDVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (*(DStringBlock **)(this + 8) != (DStringBlock *)0x0) {
    DStringBlock::release(*(DStringBlock **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  uVar6 = *(undefined8 *)param_1;
  lVar2 = FUN_04f7a6d0(uVar6,*(undefined8 *)(param_1 + 8));
  lVar2 = lVar2 + -1;
  if (-1 < lVar2) {
    if (lVar2 != 0) {
      lVar5 = 0;
      do {
        lVar1 = lVar5 + 1;
        pDVar3 = (DString *)FUN_04f7a6dc(uVar6,lVar5);
        pcVar4 = (char *)c_str(pDVar3);
        addString(this,pcVar4);
        addString(this,param_2);
        uVar6 = *(undefined8 *)param_1;
        lVar5 = lVar1;
      } while (lVar2 != lVar1);
    }
    pDVar3 = (DString *)FUN_04f7a6dc(uVar6,lVar2);
    pcVar4 = (char *)c_str(pDVar3);
    addString(this,pcVar4);
  }
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::Join(std::vector<DString, std::allocator<DString> > const&, char const*) */

void __thiscall DString::Join(DString *this,vector *param_1,char *param_2)

{
  DString *pDVar1;
  DString *in_x8;
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString(aDStack_18);
  pDVar1 = (DString *)join(aDStack_18,(vector *)this,(char *)param_1);
  DString(in_x8,pDVar1);
  ~DString(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::operator std::string() const */

void __thiscall DString::operator_cast_to_string(DString *this)

{
  long lVar1;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  __s = (char *)c_str(this);
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DString::TEMPNAMEPLACEHOLDERVALUE(DString&&) */

DString * __thiscall DString::operator+=(DString *this,DString *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  DStringBlock *this_00;
  
  this_00 = *(DStringBlock **)(this + 8);
  if (this_00 != (DStringBlock *)0x0) {
    pcVar1 = (char *)c_str(param_1);
    uVar2 = DStringBlock::addString(this_00,pcVar1);
    *(undefined8 *)(this + 8) = uVar2;
    return this;
  }
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::TEMPNAMEPLACEHOLDERVALUE(int) */

void __thiscall DString::operator+=(DString *this,int param_1)

{
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString(aDStack_18,param_1);
  operator+=(this,aDStack_18);
  ~DString(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::TEMPNAMEPLACEHOLDERVALUE(float) */

void __thiscall DString::operator+=(DString *this,float param_1)

{
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString(aDStack_18,param_1);
  operator+=(this,aDStack_18);
  ~DString(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::TEMPNAMEPLACEHOLDERVALUE(double) */

void __thiscall DString::operator+=(DString *this,double param_1)

{
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString(aDStack_18,param_1);
  operator+=(this,aDStack_18);
  ~DString(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::TEMPNAMEPLACEHOLDERVALUE(long) */

void __thiscall DString::operator+=(DString *this,long param_1)

{
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString(aDStack_18,param_1);
  operator+=(this,aDStack_18);
  ~DString(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::TEMPNAMEPLACEHOLDERVALUE(long long) */

void __thiscall DString::operator+=(DString *this,longlong param_1)

{
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString(aDStack_18,param_1);
  operator+=(this,aDStack_18);
  ~DString(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::replace(char const*, char const*) */

void DString::replace(char *param_1,char *param_2)

{
  size_t sVar1;
  long lVar2;
  char *in_x2;
  DString *in_x8;
  long lVar3;
  DString aDStack_28 [16];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == (char *)0x0) {
    DString(in_x8,(DString *)param_1);
  }
  else {
    lVar3 = 0;
    DString(aDStack_28);
    sVar1 = strlen(param_2);
    lVar2 = -1;
    while (lVar2 = findString((DString *)param_1,lVar2,param_2), lVar2 != -1) {
      subString((long)param_1,lVar3);
      operator+=(aDStack_28,aDStack_18);
      ~DString(aDStack_18);
      operator+=(aDStack_28,in_x2);
      lVar2 = (sVar1 - 1) + lVar2;
      lVar3 = lVar2 + 1;
    }
    subString((long)param_1);
    operator+=(aDStack_28,aDStack_18);
    ~DString(aDStack_18);
    DString(in_x8,aDStack_28);
    ~DString(aDStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::TEMPNAMEPLACEHOLDERVALUE(char*) */

void __thiscall DString::operator-=(DString *this,char *param_1)

{
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  replace((char *)this,param_1);
  ~DString(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::TEMPNAMEPLACEHOLDERVALUE(char) */

void __thiscall DString::operator-=(DString *this,char param_1)

{
  char local_21 [9];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_21[0] = param_1;
  replace((char *)this,local_21);
  ~DString(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::TEMPNAMEPLACEHOLDERVALUE(DString const&) */

void __thiscall DString::operator-=(DString *this,DString *param_1)

{
  char *pcVar1;
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)c_str(param_1);
  replace((char *)this,pcVar1);
  ~DString(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::TEMPNAMEPLACEHOLDERVALUE(std::string const&) */

void __thiscall DString::operator-=(DString *this,string *param_1)

{
  char *pcVar1;
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)FUN_0547429c(param_1);
  replace((char *)this,pcVar1);
  ~DString(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::TEMPNAMEPLACEHOLDERVALUE(DString*) */

void __thiscall DString::operator-=(DString *this,DString *param_1)

{
  char *pcVar1;
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)0x0;
  if (param_1 != (DString *)0x0) {
    pcVar1 = (char *)c_str(param_1);
  }
  replace((char *)this,pcVar1);
  ~DString(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DString::split(char const*, unsigned long) const */

void DString::split(char *param_1,ulong param_2)

{
  long lVar1;
  char cVar2;
  size_t sVar3;
  long lVar4;
  ulong in_x2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  long lVar5;
  ulong uVar6;
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  cVar2 = empty((DString *)param_1);
  if (cVar2 == '\0') {
    if ((param_2 != 0) && (sVar3 = strlen((char *)param_2), sVar3 != 0)) {
      lVar5 = -1;
      uVar6 = 0;
      while ((lVar4 = findString((DString *)param_1,lVar5,(char *)param_2), lVar4 != -1 &&
             ((uVar6 < in_x2 || (in_x2 == 0))))) {
        lVar1 = lVar5 + 1;
        lVar5 = lVar4 + (sVar3 - 1);
        uVar6 = uVar6 + 1;
        subString((long)param_1,lVar1);
        std::vector<DString,std::allocator<DString>>::push_back
                  ((vector<DString,std::allocator<DString>> *)in_x8,aDStack_18);
        ~DString(aDStack_18);
      }
    }
    subString((long)param_1);
    std::vector<DString,std::allocator<DString>>::push_back
              ((vector<DString,std::allocator<DString>> *)in_x8,aDStack_18);
    ~DString(aDStack_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

