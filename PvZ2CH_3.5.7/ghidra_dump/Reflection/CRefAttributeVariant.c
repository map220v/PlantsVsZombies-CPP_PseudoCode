// Class: Reflection::CRefAttributeVariant


/* Reflection::CRefAttributeVariant::CRefAttributeVariant(char const*) */

void __thiscall
Reflection::CRefAttributeVariant::CRefAttributeVariant(CRefAttributeVariant *this,char *param_1)

{
  Set8BytesTo0((string *)(this + 0x10));
  FUN_05476574(this + 0x18);
  *(undefined4 *)this = 7;
  std::string::append((string *)(this + 0x10),param_1,7);
  return;
}


/* Reflection::CRefAttributeVariant::~CRefAttributeVariant() */

void __thiscall Reflection::CRefAttributeVariant::~CRefAttributeVariant(CRefAttributeVariant *this)

{
  FUN_05476c50(this + 0x18);
  std::string::~string((string *)(this + 0x10));
  return;
}


/* Reflection::CRefAttributeVariant::CRefAttributeVariant(bool) */

void __thiscall
Reflection::CRefAttributeVariant::CRefAttributeVariant(CRefAttributeVariant *this,bool param_1)

{
  Set8BytesTo0(this + 0x10);
  FUN_05476574(this + 0x18);
  *(undefined4 *)this = 0;
  *(uint *)(this + 8) = (uint)param_1;
  return;
}


/* Reflection::CRefAttributeVariant::CRefAttributeVariant() */

void __thiscall Reflection::CRefAttributeVariant::CRefAttributeVariant(CRefAttributeVariant *this)

{
  Set8BytesTo0(this + 0x10);
  FUN_05476574(this + 0x18);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)this = 1;
  return;
}


/* Reflection::CRefAttributeVariant::CRefAttributeVariant(Reflection::CRefAttributeVariant const&)
    */

void __thiscall
Reflection::CRefAttributeVariant::CRefAttributeVariant
          (CRefAttributeVariant *this,CRefAttributeVariant *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  FUN_05477b24(this + 0x18,param_1 + 0x18);
  return;
}


/* Reflection::CRefAttributeVariant::GetFloat() const */

undefined1  [16] __thiscall Reflection::CRefAttributeVariant::GetFloat(CRefAttributeVariant *this)

{
  char *__nptr;
  wchar_t *pwVar1;
  ulong uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  switch(*(undefined4 *)this) {
  case 0:
  case 1:
    return ZEXT416((uint)(float)*(uint *)(this + 8));
  case 2:
    uVar2 = (ulong)(uint)(float)*(int *)(this + 8);
    break;
  case 3:
    uVar2 = (ulong)*(uint *)(this + 8);
    break;
  case 4:
  case 9:
    return ZEXT416((uint)(float)*(ulong *)(this + 8));
  case 5:
    uVar2 = (ulong)(uint)(float)*(long *)(this + 8);
    break;
  case 6:
    uVar2 = (ulong)(uint)(float)*(double *)(this + 8);
    break;
  case 7:
    __nptr = (char *)FUN_0547429c(this + 0x10);
    dVar3 = atof(__nptr);
    uVar2 = (ulong)(uint)(float)dVar3;
    break;
  case 8:
    pwVar1 = (wchar_t *)FUN_054766ec(this + 0x18);
    auVar4 = _wtof(pwVar1);
    return auVar4;
  default:
    uVar2 = 0;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar2;
  return auVar4;
}


/* Reflection::CRefAttributeVariant::GetDouble() const */

undefined1  [16] __thiscall Reflection::CRefAttributeVariant::GetDouble(CRefAttributeVariant *this)

{
  char *__nptr;
  wchar_t *pwVar1;
  float fVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 extraout_var;
  
  switch(*(undefined4 *)this) {
  case 0:
  case 1:
    auVar5._0_8_ = (double)*(uint *)(this + 8);
    auVar5._8_8_ = 0;
    return auVar5;
  case 2:
    dVar3 = (double)*(int *)(this + 8);
    break;
  case 3:
    dVar3 = (double)*(float *)(this + 8);
    break;
  case 4:
  case 9:
    auVar6._0_8_ = (double)*(ulong *)(this + 8);
    auVar6._8_8_ = 0;
    return auVar6;
  case 5:
    dVar3 = (double)*(long *)(this + 8);
    break;
  case 6:
    dVar3 = *(double *)(this + 8);
    break;
  case 7:
    __nptr = (char *)FUN_0547429c(this + 0x10);
    auVar7._0_8_ = atof(__nptr);
    auVar7._8_8_ = extraout_var;
    return auVar7;
  case 8:
    pwVar1 = (wchar_t *)FUN_054766ec(this + 0x18);
    fVar2 = (float)_wtof(pwVar1);
    dVar3 = (double)fVar2;
    break;
  default:
    dVar3 = 0.0;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar3;
  return auVar4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::CRefAttributeVariant::GetString() const */

void Reflection::CRefAttributeVariant::GetString(void)

{
  undefined4 *in_x0;
  char *__s;
  string *in_x8;
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*in_x0) {
  case 0:
    if (in_x0[2] == 0) {
      __s = "false";
    }
    else {
      __s = "true";
    }
    std::string::string(in_x8,__s);
    nop();
    break;
  case 1:
  case 2:
    Sexy::StrFormat("%d",(ulong)(uint)in_x0[2]);
    break;
  case 3:
    Sexy::StrFormat("%f",(double)(float)in_x0[2]);
    break;
  case 4:
  case 5:
    Sexy::StrFormat("%li",*(undefined8 *)(in_x0 + 2));
    break;
  case 6:
    Sexy::StrFormat("%f",*(undefined8 *)(in_x0 + 2));
    break;
  case 7:
    FUN_05475d88();
    break;
  case 8:
    Sexy::WStringToString((Sexy *)(in_x0 + 6),(wstring *)0x0,(bool *)0x5180ac4);
    break;
  case 9:
    Sexy::RtId::RtId(aRStack_18,*(ulong *)(in_x0 + 2));
    Set8BytesTo0(asStack_10);
    Sexy::RtId::ToString(aRStack_18,asStack_10,false);
    FUN_05474148();
    std::string::~string(asStack_10);
    Sexy::RtId::~RtId(aRStack_18);
    break;
  default:
    std::string::string(in_x8,"");
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::CRefAttributeVariant::GetWString() const */

void Reflection::CRefAttributeVariant::GetWString(void)

{
  string *in_x0;
  RtId aRStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)in_x0) {
  case 0:
    FUN_05478178();
    nop();
    break;
  case 1:
  case 2:
    Sexy::StrFormat(L"%d",(ulong)*(uint *)(in_x0 + 8));
    break;
  case 3:
    Sexy::StrFormat(L"%f",(double)*(float *)(in_x0 + 8));
    break;
  case 4:
  case 5:
    Sexy::StrFormat(L"%li",*(undefined8 *)(in_x0 + 8));
    break;
  case 6:
    Sexy::StrFormat(L"%f",*(undefined8 *)(in_x0 + 8));
    break;
  case 7:
    Sexy::StringToWString((Sexy *)(in_x0 + 0x10),in_x0);
    break;
  case 8:
    FUN_05477b24();
    break;
  case 9:
    Sexy::RtId::RtId(aRStack_18,*(ulong *)(in_x0 + 8));
    FUN_05476574(awStack_10);
    Sexy::RtId::ToString(aRStack_18,awStack_10,false);
    FUN_05476584();
    FUN_05476c50(awStack_10);
    Sexy::RtId::~RtId(aRStack_18);
    break;
  default:
    FUN_05478178();
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Reflection::CRefAttributeVariant::GetRtId() const */

void Reflection::CRefAttributeVariant::GetRtId(void)

{
  uint *in_x0;
  string *psVar1;
  string *psVar2;
  exception_ptr *in_x8;
  
  psVar1 = (string *)(ulong)*in_x0;
  psVar2 = psVar1;
  if (*in_x0 < 10) {
    psVar2 = (string *)((long)(char)psVar1[0x5756f54] * 4 + 0x5180d80);
    switch(psVar1) {
    default:
      goto switchD_05180d7c_caseD_0;
    case (string *)0x4:
    case (string *)0x5:
    case (string *)0x9:
      Sexy::RtId::RtId((RtId *)in_x8,*(ulong *)(in_x0 + 2));
      return;
    case (string *)0x7:
      Sexy::RtId::StaticParse((RtId *)(in_x0 + 4),psVar2);
      break;
    case (string *)0x8:
      Sexy::RtId::StaticParse((RtId *)(in_x0 + 6),(wstring *)psVar2);
    }
  }
  else {
switchD_05180d7c_caseD_0:
    std::__exception_ptr::exception_ptr::exception_ptr(in_x8,(_func_void *)psVar2);
  }
  return;
}


/* Reflection::CRefAttributeVariant::TEMPNAMEPLACEHOLDERVALUE(Reflection::CRefAttributeVariant
   const&) */

CRefAttributeVariant * __thiscall
Reflection::CRefAttributeVariant::operator=
          (CRefAttributeVariant *this,CRefAttributeVariant *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  thunk_FUN_05477b9c(this + 0x18,param_1 + 0x18);
  return this;
}


/* Reflection::CRefAttributeVariant::GetBool() const */

bool __thiscall Reflection::CRefAttributeVariant::GetBool(CRefAttributeVariant *this)

{
  bool bVar1;
  
  switch(*(undefined4 *)this) {
  case 0:
  case 1:
  case 2:
    return *(int *)(this + 8) != 0;
  case 3:
    bVar1 = *(float *)(this + 8) != 0.0;
    break;
  case 4:
  case 5:
  case 9:
    return *(long *)(this + 8) != 0;
  case 6:
    bVar1 = *(double *)(this + 8) != 0.0;
    break;
  case 7:
    bVar1 = std::operator==((string *)(this + 0x10),"1");
    if (bVar1) {
      return true;
    }
    bVar1 = std::operator==((string *)(this + 0x10),"true");
    return bVar1;
  case 8:
    bVar1 = std::operator==((wstring *)(this + 0x18),L"1");
    if (bVar1) {
      return true;
    }
    bVar1 = std::operator==((wstring *)(this + 0x18),L"true");
    return bVar1;
  default:
    bVar1 = false;
  }
  return bVar1;
}


/* Reflection::CRefAttributeVariant::GetUInt32() const */

ulong __thiscall Reflection::CRefAttributeVariant::GetUInt32(CRefAttributeVariant *this)

{
  uint uVar1;
  ulong uVar2;
  wchar_t *pwVar3;
  char *__nptr;
  
  switch(*(undefined4 *)this) {
  case 0:
  case 1:
  case 2:
  case 4:
  case 5:
  case 9:
    return (ulong)*(uint *)(this + 8);
  case 3:
    uVar2 = (ulong)(uint)(int)*(float *)(this + 8);
    break;
  case 6:
    uVar2 = (ulong)(uint)(int)*(double *)(this + 8);
    break;
  case 7:
    __nptr = (char *)FUN_0547429c(this + 0x10);
    uVar1 = atoi(__nptr);
    return (ulong)uVar1;
  case 8:
    pwVar3 = (wchar_t *)FUN_054766ec(this + 0x18);
    uVar2 = _wtoi(pwVar3);
    return uVar2;
  default:
    uVar2 = 0;
  }
  return uVar2;
}


/* Reflection::CRefAttributeVariant::GetSInt32() const */

ulong __thiscall Reflection::CRefAttributeVariant::GetSInt32(CRefAttributeVariant *this)

{
  uint uVar1;
  ulong uVar2;
  wchar_t *pwVar3;
  char *__nptr;
  
  switch(*(undefined4 *)this) {
  case 0:
  case 1:
  case 2:
  case 4:
  case 5:
  case 9:
    return (ulong)*(uint *)(this + 8);
  case 3:
    uVar2 = (ulong)(uint)(int)*(float *)(this + 8);
    break;
  case 6:
    uVar2 = (ulong)(uint)(int)*(double *)(this + 8);
    break;
  case 7:
    __nptr = (char *)FUN_0547429c(this + 0x10);
    uVar1 = atoi(__nptr);
    return (ulong)uVar1;
  case 8:
    pwVar3 = (wchar_t *)FUN_054766ec(this + 0x18);
    uVar2 = _wtoi(pwVar3);
    return uVar2;
  default:
    uVar2 = 0;
  }
  return uVar2;
}


/* Reflection::CRefAttributeVariant::GetUInt64() const */

ulong __thiscall Reflection::CRefAttributeVariant::GetUInt64(CRefAttributeVariant *this)

{
  int iVar1;
  char *__nptr;
  wchar_t *pwVar2;
  ulong uVar3;
  
  uVar3 = 0;
  switch(*(undefined4 *)this) {
  case 0:
  case 1:
    return (ulong)*(uint *)(this + 8);
  case 2:
    uVar3 = (ulong)*(int *)(this + 8);
    break;
  case 3:
    uVar3 = (ulong)*(float *)(this + 8);
    break;
  case 4:
  case 5:
  case 9:
    uVar3 = *(ulong *)(this + 8);
    break;
  case 6:
    uVar3 = (ulong)*(double *)(this + 8);
    break;
  case 7:
    __nptr = (char *)FUN_0547429c(this + 0x10);
    iVar1 = atoi(__nptr);
    uVar3 = (ulong)iVar1;
    break;
  case 8:
    pwVar2 = (wchar_t *)FUN_054766ec(this + 0x18);
    iVar1 = _wtoi(pwVar2);
    uVar3 = (ulong)iVar1;
  }
  return uVar3;
}


/* Reflection::CRefAttributeVariant::GetSInt64() const */

ulong __thiscall Reflection::CRefAttributeVariant::GetSInt64(CRefAttributeVariant *this)

{
  int iVar1;
  char *__nptr;
  wchar_t *pwVar2;
  ulong uVar3;
  
  uVar3 = 0;
  switch(*(undefined4 *)this) {
  case 0:
  case 1:
    return (ulong)*(uint *)(this + 8);
  case 2:
    uVar3 = (ulong)*(int *)(this + 8);
    break;
  case 3:
    uVar3 = (ulong)*(float *)(this + 8);
    break;
  case 4:
  case 5:
  case 9:
    uVar3 = *(ulong *)(this + 8);
    break;
  case 6:
    uVar3 = (ulong)*(double *)(this + 8);
    break;
  case 7:
    __nptr = (char *)FUN_0547429c(this + 0x10);
    iVar1 = atoi(__nptr);
    uVar3 = (ulong)iVar1;
    break;
  case 8:
    pwVar2 = (wchar_t *)FUN_054766ec(this + 0x18);
    iVar1 = _wtoi(pwVar2);
    uVar3 = (ulong)iVar1;
  }
  return uVar3;
}

