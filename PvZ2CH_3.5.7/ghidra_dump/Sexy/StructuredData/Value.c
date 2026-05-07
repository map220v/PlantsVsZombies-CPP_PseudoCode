// Class: Sexy::StructuredData::Value


/* Sexy::StructuredData::Value::ChildrenEnd() const */

Value * __thiscall Sexy::StructuredData::Value::ChildrenEnd(Value *this)

{
  return this + (ulong)*(uint *)(this + 0x14) * 0x20;
}


/* Sexy::StructuredData::Value::IsContainer() const */

void __thiscall Sexy::StructuredData::Value::IsContainer(Value *this)

{
  undefined4 uVar1;
  char cVar2;
  
  uVar1 = *(undefined4 *)this;
  cVar2 = FUN_03188dd0(uVar1);
  if (cVar2 == '\0') {
    FUN_03188ddc(uVar1);
    return;
  }
  return;
}


/* Sexy::StructuredData::Value::Next() const */

Value * __thiscall Sexy::StructuredData::Value::Next(Value *this)

{
  char cVar1;
  Value *pVVar2;
  
  cVar1 = IsContainer(this);
  if (cVar1 == '\0') {
    return this + 0x20;
  }
  pVVar2 = (Value *)ChildrenEnd(this);
  return pVVar2;
}


/* Sexy::StructuredData::Value::GetNumber() const */

undefined1  [16] __thiscall Sexy::StructuredData::Value::GetNumber(Value *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (*(int *)this != 2) {
    auVar1._0_8_ = (double)*(long *)(this + 0x10);
    auVar1._8_8_ = 0;
    return auVar1;
  }
  auVar2._0_8_ = *(ulong *)(this + 0x10);
  auVar2._8_8_ = 0;
  return auVar2;
}


/* Sexy::StructuredData::Value::FirstChild() const */

Value * __thiscall Sexy::StructuredData::Value::FirstChild(Value *this)

{
  return this + 0x20;
}


/* Sexy::StructuredData::Value::Size() const */

undefined4 __thiscall Sexy::StructuredData::Value::Size(Value *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = IsContainer(this);
  uVar2 = 1;
  if (cVar1 != '\0') {
    uVar2 = *(undefined4 *)(this + 0x14);
  }
  return uVar2;
}


/* Sexy::StructuredData::Value::Value() */

void __thiscall Sexy::StructuredData::Value::Value(Value *this)

{
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* Sexy::StructuredData::Value::ValueForName(char const*) const */

Value * __thiscall Sexy::StructuredData::Value::ValueForName(Value *this,char *param_1)

{
  char cVar1;
  int iVar2;
  Value *this_00;
  Value *pVVar3;
  
  cVar1 = FUN_051e0ff4(*(undefined4 *)this);
  if (cVar1 != '\0') {
    this_00 = (Value *)std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_rightmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this);
    pVVar3 = (Value *)ChildrenEnd(this);
    for (; this_00 != pVVar3; this_00 = (Value *)Next(this_00)) {
      iVar2 = strcmp(*(char **)(this_00 + 8),param_1);
      if (iVar2 == 0) {
        return this_00;
      }
    }
  }
  return (Value *)0x0;
}


/* Sexy::StructuredData::Value::StringForName(char const*, char const*) const */

char * __thiscall
Sexy::StructuredData::Value::StringForName(Value *this,char *param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  puVar2 = (undefined4 *)ValueForName(this,param_1);
  if ((puVar2 != (undefined4 *)0x0) && (cVar1 = FUN_051e0fb4(*puVar2), cVar1 != '\0')) {
    pcVar3 = (char *)FUN_051e1028(*(undefined8 *)(puVar2 + 4));
    return pcVar3;
  }
  return param_2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredData::Value::SexyStringForName(char const*, std::wstring) const */

void Sexy::StructuredData::Value::SexyStringForName
               (undefined8 param_1_00,Value *param_1,char *param_3,undefined8 param_4)

{
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = (char *)StringForName(param_1,param_3,(char *)0x0);
  if (__s == (char *)0x0) {
    FUN_05476584(param_1_00,param_4);
  }
  else {
    std::string::string(asStack_10,__s);
    ToWString(asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* Sexy::StructuredData::Value::IntegerForName(char const*, long) const */

long __thiscall Sexy::StructuredData::Value::IntegerForName(Value *this,char *param_1,long param_2)

{
  char cVar1;
  undefined4 *puVar2;
  long lVar3;
  
  puVar2 = (undefined4 *)ValueForName(this,param_1);
  if ((puVar2 != (undefined4 *)0x0) && (cVar1 = FUN_051e0fdc(*puVar2), cVar1 != '\0')) {
    lVar3 = FUN_051e1020(*(undefined8 *)(puVar2 + 4));
    return lVar3;
  }
  return param_2;
}


/* Sexy::StructuredData::Value::IntegerForNameForce(char const*, long) const */

long __thiscall
Sexy::StructuredData::Value::IntegerForNameForce(Value *this,char *param_1,long param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  long lVar4;
  char *__nptr;
  
  puVar3 = (undefined4 *)ValueForName(this,param_1);
  if (puVar3 != (undefined4 *)0x0) {
    uVar1 = *puVar3;
    cVar2 = FUN_051e0fdc(uVar1);
    if (cVar2 != '\0') {
      lVar4 = FUN_051e1020(*(undefined8 *)(puVar3 + 4));
      return lVar4;
    }
    cVar2 = FUN_051e0fb4(uVar1);
    if (cVar2 != '\0') {
      __nptr = (char *)FUN_051e1028(*(undefined8 *)(puVar3 + 4));
      lVar4 = atol(__nptr);
      return lVar4;
    }
  }
  return param_2;
}


/* Sexy::StructuredData::Value::NumberForName(char const*, double) const */

undefined1  [16] __thiscall
Sexy::StructuredData::Value::NumberForName(Value *this,char *param_1,double param_2)

{
  undefined4 uVar1;
  char cVar2;
  Value *this_00;
  undefined1 auVar3 [16];
  
  this_00 = (Value *)ValueForName(this,param_1);
  if (this_00 != (Value *)0x0) {
    uVar1 = *(undefined4 *)this_00;
    cVar2 = FUN_051e0fcc(uVar1);
    if ((cVar2 != '\0') || (cVar2 = FUN_051e0fdc(uVar1), cVar2 != '\0')) {
      auVar3 = GetNumber(this_00);
      return auVar3;
    }
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  return auVar3;
}


/* Sexy::StructuredData::Value::BooleanForName(char const*, bool) const */

ulong __thiscall Sexy::StructuredData::Value::BooleanForName(Value *this,char *param_1,bool param_2)

{
  char cVar1;
  undefined4 *puVar2;
  ulong uVar3;
  
  puVar2 = (undefined4 *)ValueForName(this,param_1);
  if ((puVar2 != (undefined4 *)0x0) && (cVar1 = FUN_051e0fe8(*puVar2), cVar1 != '\0')) {
    uVar3 = FUN_051e1024(*(undefined1 *)(puVar2 + 4));
    return uVar3;
  }
  return (ulong)param_2;
}


/* Sexy::StructuredData::Value::ObjectForName(char const*) const */

undefined4 * __thiscall Sexy::StructuredData::Value::ObjectForName(Value *this,char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)ValueForName(this,param_1);
  if (puVar2 != (undefined4 *)0x0) {
    cVar1 = FUN_051e0ff4(*puVar2);
    if (cVar1 == '\0') {
      puVar2 = (undefined4 *)0x0;
    }
    return puVar2;
  }
  return (undefined4 *)0x0;
}


/* Sexy::StructuredData::Value::ArrayForName(char const*) const */

undefined4 * __thiscall Sexy::StructuredData::Value::ArrayForName(Value *this,char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)ValueForName(this,param_1);
  if (puVar2 != (undefined4 *)0x0) {
    cVar1 = FUN_051e1000(*puVar2);
    if (cVar1 == '\0') {
      puVar2 = (undefined4 *)0x0;
    }
    return puVar2;
  }
  return (undefined4 *)0x0;
}


/* Sexy::StructuredData::Value::ValueAtIndex(long) const */

Value * __thiscall Sexy::StructuredData::Value::ValueAtIndex(Value *this,long param_1)

{
  ushort uVar1;
  char cVar2;
  Value *this_00;
  Value *pVVar3;
  
  pVVar3 = (Value *)0x0;
  cVar2 = FUN_051e1000(*(undefined4 *)this);
  this_00 = pVVar3;
  if (((cVar2 != '\0') && ((uint)param_1 < *(uint *)(this + 0x10))) &&
     (this_00 = (Value *)FirstChild(this), 0 < param_1)) {
    do {
      uVar1 = (short)pVVar3 + 1;
      this_00 = (Value *)Next(this_00);
      pVVar3 = (Value *)(ulong)uVar1;
    } while ((long)(ulong)uVar1 < param_1);
  }
  return this_00;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredData::Value::ValueForPath(char const*) const */

void __thiscall Sexy::StructuredData::Value::ValueForPath(Value *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  Value *this_00;
  Value *pVVar4;
  uint local_1c;
  char *local_18;
  char *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar3 = (char *)jpathName(param_1,&local_18,&local_10);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = (char *)jpathIndex(param_1,&local_1c);
    if ((pcVar3 != (char *)0x0) && (cVar1 = FUN_051e1000(*(undefined4 *)this), cVar1 != '\0')) {
      uVar2 = FUN_051e0fa4(*(undefined4 *)(this + 0x10));
      if (local_1c < uVar2) {
        this_00 = (Value *)ValueAtIndex(this,(ulong)local_1c);
        if (*pcVar3 != '\0') {
          this_00 = (Value *)ValueForPath(this_00,pcVar3);
        }
        goto LAB_051e1aec;
      }
    }
  }
  else {
    cVar1 = FUN_051e0ff4(*(undefined4 *)this);
    if (cVar1 != '\0') {
      this_00 = (Value *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_rightmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this);
      pVVar4 = (Value *)ChildrenEnd(this);
      for (; this_00 != pVVar4; this_00 = (Value *)Next(this_00)) {
        cVar1 = FUN_051e102c(*(undefined8 *)(this_00 + 8),local_18,local_10);
        if (cVar1 != '\0') {
          if (*pcVar3 != '\0') {
            this_00 = (Value *)ValueForPath(this_00,pcVar3);
          }
          goto LAB_051e1aec;
        }
      }
      if (*(void **)(this + 0x18) != (void *)0x0) {
        this_00 = (Value *)EA::Thread::GetModuleHandleFromAddress(*(void **)(this + 0x18));
        goto LAB_051e1aec;
      }
    }
  }
  this_00 = (Value *)0x0;
LAB_051e1aec:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* Sexy::StructuredData::Value::ReadFromBuffer(Sexy::Buffer const*, char const*, unsigned int, int)
    */

void __thiscall
Sexy::StructuredData::Value::ReadFromBuffer
          (Value *this,Buffer *param_1,char *param_2,uint param_3,int param_4)

{
  char *pcVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar4 = Buffer::ReadInt32(param_1);
  if (uVar4 < param_3) {
    pcVar1 = param_2 + uVar4;
    if (uVar4 == 0) {
      pcVar1 = (char *)0x0;
    }
    *(char **)(this + 8) = pcVar1;
    cVar2 = Buffer::ReadInt8(param_1);
    *(int *)this = (int)cVar2;
    switch((int)cVar2) {
    case 1:
      uVar7 = Buffer::ReadInt32(param_1);
      *(char **)(this + 0x10) = param_2 + (uVar7 & 0xffffffff);
      return;
    case 2:
      uVar8 = Buffer::ReadDouble(param_1);
      *(undefined8 *)(this + 0x10) = uVar8;
      return;
    case 3:
      if (param_4 < 3) {
        iVar5 = Buffer::ReadInt32(param_1);
        *(long *)(this + 0x10) = (long)iVar5;
      }
      else {
        uVar8 = Buffer::ReadInt64(param_1);
        *(undefined8 *)(this + 0x10) = uVar8;
      }
      break;
    case 4:
      cVar2 = Buffer::ReadInt8(param_1);
      this[0x10] = (Value)(cVar2 != '\0');
      return;
    case 5:
    case 6:
      if (param_4 < 3) {
        sVar3 = Buffer::ReadInt16(param_1);
        *(int *)(this + 0x10) = (int)sVar3;
        if (param_4 == 2) {
          sVar3 = Buffer::ReadInt16(param_1);
          *(int *)(this + 0x14) = (int)sVar3;
        }
        else {
          sVar3 = Buffer::ReadInt16(param_1);
          *(int *)(this + 0x14) = sVar3 + 1;
        }
      }
      else {
        uVar6 = Buffer::ReadInt32(param_1);
        *(undefined4 *)(this + 0x10) = uVar6;
        uVar6 = Buffer::ReadInt32(param_1);
        *(undefined4 *)(this + 0x14) = uVar6;
      }
    }
  }
  return;
}


/* Sexy::StructuredData::Value::StringOffset(char const* const&, char const*) */

long Sexy::StructuredData::Value::StringOffset(char **param_1,char *param_2)

{
  long lVar1;
  
  lVar1 = (long)*param_1 - (long)param_2;
  if (*param_1 == (char *)0x0) {
    lVar1 = 0;
  }
  return lVar1;
}


/* Sexy::StructuredData::Value::WriteToBuffer(Sexy::Buffer*, char const*) const */

void __thiscall
Sexy::StructuredData::Value::WriteToBuffer(Value *this,Buffer *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = StringOffset((char **)(this + 8),param_2);
  Buffer::WriteInt32(param_1,iVar1);
  Buffer::WriteInt8(param_1,*this);
  switch(*(undefined4 *)this) {
  case 1:
    iVar1 = StringOffset((char **)(this + 0x10),param_2);
    Buffer::WriteInt32(param_1,iVar1);
    return;
  case 2:
    Buffer::WriteDouble(param_1,*(double *)(this + 0x10));
    return;
  case 3:
    Buffer::WriteInt64(param_1,*(long *)(this + 0x10));
    return;
  case 4:
    Buffer::WriteInt8(param_1,this[0x10]);
    return;
  case 5:
  case 6:
    Buffer::WriteInt32(param_1,*(int *)(this + 0x10));
    Buffer::WriteInt32(param_1,*(int *)(this + 0x14));
    return;
  default:
    return;
  }
}


/* Sexy::StructuredData::Value::StringForPath(char const*, char const*) const */

char * __thiscall
Sexy::StructuredData::Value::StringForPath(Value *this,char *param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  puVar2 = (undefined4 *)ValueForPath(this,param_1);
  if ((puVar2 != (undefined4 *)0x0) && (cVar1 = FUN_051e0fb4(*puVar2), cVar1 != '\0')) {
    pcVar3 = (char *)FUN_051e1028(*(undefined8 *)(puVar2 + 4));
    return pcVar3;
  }
  return param_2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredData::Value::SexyStringForPath(char const*, std::wstring const&) const */

void Sexy::StructuredData::Value::SexyStringForPath(char *param_1,wstring *param_2)

{
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = (char *)StringForPath((Value *)param_1,(char *)param_2,(char *)0x0);
  if (__s == (char *)0x0) {
    FUN_05477b24();
  }
  else {
    std::string::string(asStack_10,__s);
    ToWString(asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::StructuredData::Value::NumberForPath(char const*, double) const */

undefined1  [16] __thiscall
Sexy::StructuredData::Value::NumberForPath(Value *this,char *param_1,double param_2)

{
  undefined4 uVar1;
  char cVar2;
  Value *this_00;
  undefined1 auVar3 [16];
  
  this_00 = (Value *)ValueForPath(this,param_1);
  if (this_00 != (Value *)0x0) {
    uVar1 = *(undefined4 *)this_00;
    cVar2 = FUN_051e0fcc(uVar1);
    if ((cVar2 != '\0') || (cVar2 = FUN_051e0fdc(uVar1), cVar2 != '\0')) {
      auVar3 = GetNumber(this_00);
      return auVar3;
    }
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  return auVar3;
}


/* Sexy::StructuredData::Value::IntegerForPath(char const*, long) const */

long __thiscall Sexy::StructuredData::Value::IntegerForPath(Value *this,char *param_1,long param_2)

{
  char cVar1;
  undefined4 *puVar2;
  long lVar3;
  
  puVar2 = (undefined4 *)ValueForPath(this,param_1);
  if ((puVar2 != (undefined4 *)0x0) && (cVar1 = FUN_051e0fdc(*puVar2), cVar1 != '\0')) {
    lVar3 = FUN_051e1020(*(undefined8 *)(puVar2 + 4));
    return lVar3;
  }
  return param_2;
}


/* Sexy::StructuredData::Value::BooleanForPath(char const*, bool) const */

ulong __thiscall Sexy::StructuredData::Value::BooleanForPath(Value *this,char *param_1,bool param_2)

{
  char cVar1;
  undefined4 *puVar2;
  ulong uVar3;
  
  puVar2 = (undefined4 *)ValueForPath(this,param_1);
  if ((puVar2 != (undefined4 *)0x0) && (cVar1 = FUN_051e0fe8(*puVar2), cVar1 != '\0')) {
    uVar3 = FUN_051e1024(*(undefined1 *)(puVar2 + 4));
    return uVar3;
  }
  return (ulong)param_2;
}


/* Sexy::StructuredData::Value::ObjectForPath(char const*) const */

undefined4 * __thiscall Sexy::StructuredData::Value::ObjectForPath(Value *this,char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)ValueForPath(this,param_1);
  if (puVar2 != (undefined4 *)0x0) {
    cVar1 = FUN_051e0ff4(*puVar2);
    if (cVar1 == '\0') {
      puVar2 = (undefined4 *)0x0;
    }
    return puVar2;
  }
  return (undefined4 *)0x0;
}


/* Sexy::StructuredData::Value::ArrayForPath(char const*) const */

undefined4 * __thiscall Sexy::StructuredData::Value::ArrayForPath(Value *this,char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)ValueForPath(this,param_1);
  if (puVar2 != (undefined4 *)0x0) {
    cVar1 = FUN_051e1000(*puVar2);
    if (cVar1 == '\0') {
      puVar2 = (undefined4 *)0x0;
    }
    return puVar2;
  }
  return (undefined4 *)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredData::Value::AppendValueToString(std::string&) const */

void __thiscall Sexy::StructuredData::Value::AppendValueToString(Value *this,string *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  char acStack_28 [32];
  long local_8;
  
  uVar1 = *(undefined4 *)this;
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_051e0fa8(uVar1);
  if (cVar2 == '\0') {
    cVar2 = FUN_051e0fb4(uVar1);
    if (cVar2 == '\0') {
      cVar2 = FUN_051e0fdc(uVar1);
      if (cVar2 == '\0') {
        cVar2 = FUN_051e0fcc(uVar1);
        if (cVar2 == '\0') {
          cVar2 = FUN_051e0fe8(uVar1);
          if (cVar2 != '\0') {
            cVar2 = FUN_051e1024(this[0x10]);
            if (cVar2 == '\0') {
              pcVar4 = "false";
            }
            else {
              pcVar4 = "true";
            }
            FUN_05475aa4(param_1,pcVar4);
          }
        }
        else {
          GetNumber(this);
          snprintf(acStack_28,0x1f,"%#g");
          FUN_05475aa4(param_1,acStack_28);
        }
      }
      else {
        uVar3 = FUN_051e1020(*(undefined8 *)(this + 0x10));
        snprintf(acStack_28,0x1f,"%li",uVar3);
        FUN_05475aa4(param_1,acStack_28);
      }
    }
    else {
      uVar3 = FUN_051e1028(*(undefined8 *)(this + 0x10));
      FUN_05475aa4(param_1,uVar3);
    }
  }
  else {
    FUN_05475aa4(param_1,&DAT_0562c0f8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredData::Value::AppendToQueryString(std::string&) const */

void __thiscall Sexy::StructuredData::Value::AppendToQueryString(Value *this,string *param_1)

{
  char cVar1;
  int iVar2;
  Value *pVVar3;
  Value *pVVar4;
  char *pcVar5;
  string *extraout_x1;
  string *extraout_x1_00;
  int iVar6;
  undefined4 uVar7;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  uVar7 = *(undefined4 *)this;
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_051e0ff4(uVar7);
  if (cVar1 == '\0') {
    cVar1 = FUN_051e1000(uVar7);
    if (cVar1 == '\0') {
      cVar1 = FUN_051e0fb4(uVar7);
      if (cVar1 == '\0') {
        AppendValueToString(this,param_1);
      }
      else {
        pcVar5 = (char *)FUN_051e1028(*(undefined8 *)(this + 0x10));
        std::string::string(asStack_18,pcVar5);
        URLEncode((Sexy *)asStack_18,extraout_x1_00);
        FUN_054757c0(param_1,asStack_10);
        std::string::~string(asStack_10);
        std::string::~string(asStack_18);
        nop();
      }
    }
    else {
      pVVar3 = (Value *)FirstChild(this);
      iVar2 = FUN_051e0fa4(*(undefined4 *)(this + 0x10));
      iVar6 = 0;
      if (iVar2 != 0) {
        while( true ) {
          iVar6 = iVar6 + 1;
          AppendToQueryString(pVVar3,param_1);
          pVVar3 = (Value *)Next(pVVar3);
          if (iVar6 == iVar2) break;
          if (iVar6 != 0) {
            FUN_05475b0c(param_1,1,0x2c);
          }
        }
      }
    }
  }
  else {
    pVVar3 = (Value *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_rightmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      *)this);
    pVVar4 = (Value *)ChildrenEnd(this);
    for (; pVVar3 != pVVar4; pVVar3 = (Value *)Next(pVVar3)) {
      cVar1 = FUN_051e100c(*(undefined8 *)(pVVar3 + 8));
      if ((cVar1 != '\0') && (cVar1 = FUN_051e0ff4(*(undefined4 *)pVVar3), cVar1 == '\0')) {
        cVar1 = FUN_0547419c(param_1);
        uVar7 = 0x3f;
        if (cVar1 == '\0') {
          uVar7 = 0x26;
        }
        FUN_05475b0c(param_1,1,uVar7);
        pcVar5 = (char *)FUN_051e0f9c(*(undefined8 *)(pVVar3 + 8));
        std::string::string(asStack_18,pcVar5);
        URLEncode((Sexy *)asStack_18,extraout_x1);
        FUN_054757c0(param_1,asStack_10);
        std::string::~string(asStack_10);
        std::string::~string(asStack_18);
        nop();
        FUN_05475b0c(param_1,1,0x3d);
        AppendToQueryString(pVVar3,param_1);
        pVVar4 = (Value *)ChildrenEnd(this);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Sexy::StructuredData::Value::StringValue() const */

void Sexy::StructuredData::Value::StringValue(void)

{
  Value *in_x0;
  string *in_x8;
  
  Set8BytesTo0();
  AppendValueToString(in_x0,in_x8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredData::Value::WriteToConsole(unsigned long) const */

void __thiscall Sexy::StructuredData::Value::WriteToConsole(Value *this,ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined4 local_188 [4];
  undefined8 local_178;
  undefined8 local_170;
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05462144(auStack_168,0x10);
  iVar1 = *(int *)this;
  local_188[0] = 0x4c554e;
  pcVar3 = *(char **)(this + 8);
  local_188[1] = 0x525453;
  local_188[2] = 0x4d554e;
  local_188[3] = 0x544e49;
  local_178 = 0x4a424f004f4f42;
  local_170 = 0x525241;
  uVar2 = FUN_054603b8(auStack_168,&DAT_05593308);
  uVar2 = thunk_FUN_0546069c(uVar2,param_1);
  uVar2 = FUN_054603b8(uVar2,&DAT_0559c970);
  uVar2 = FUN_0545f9fc(uVar2,std::hex);
  uVar2 = thunk_FUN_05460424(uVar2,pcVar3);
  uVar2 = FUN_0545f9fc(uVar2,std::dec);
  uVar2 = FUN_054603b8(uVar2,&DAT_056e57b0);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "(null)";
  }
  uVar2 = FUN_054603b8(uVar2,pcVar3);
  uVar2 = FUN_054603b8(uVar2,&DAT_056e57b8);
  uVar2 = FUN_054603b8(uVar2,local_188 + iVar1);
  FUN_054603b8(uVar2,&DAT_056e57c0);
  switch(*(undefined4 *)this) {
  case 0:
    FUN_0545f9e8(auStack_168,FUN_0545fdc8);
    break;
  case 1:
    uVar2 = FUN_05460370(auStack_168,0x22);
    uVar2 = FUN_054603b8(uVar2,*(undefined8 *)(this + 0x10));
    uVar2 = FUN_05460370(uVar2,0x22);
    FUN_0545f9e8(uVar2,FUN_0545fdc8);
    break;
  case 2:
    uVar2 = thunk_FUN_05460d54(*(undefined8 *)(this + 0x10),auStack_168);
    FUN_0545f9e8(uVar2,FUN_0545fdc8);
    break;
  case 3:
    uVar2 = thunk_FUN_05460424(auStack_168,*(undefined8 *)(this + 0x10));
    FUN_0545f9e8(uVar2,FUN_0545fdc8);
    break;
  case 4:
    uVar2 = thunk_FUN_054608e4(auStack_168,this[0x10]);
    FUN_0545f9e8(uVar2,FUN_0545fdc8);
    goto LAB_051e2600;
  case 5:
  case 6:
LAB_051e2600:
    uVar2 = FUN_054608dc(auStack_168,*(undefined4 *)(this + 0x10));
    uVar2 = FUN_054603b8(uVar2,&DAT_055933a0);
    uVar2 = FUN_054608dc(uVar2,*(undefined4 *)(this + 0x14));
    FUN_0545f9e8(uVar2,FUN_0545fdc8);
  }
  FUN_054614ac(auStack_168);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

