// Class: DValue


/* DValue::DValue() */

void __thiscall DValue::DValue(DValue *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  return;
}


/* DValue::DValue(unsigned char) */

void __thiscall DValue::DValue(DValue *this,uchar param_1)

{
  *this = (DValue)param_1;
  *(undefined4 *)(this + 8) = 1;
  return;
}


/* DValue::DValue(int) */

void __thiscall DValue::DValue(DValue *this,int param_1)

{
  *(int *)this = param_1;
  *(undefined4 *)(this + 8) = 2;
  return;
}


/* DValue::DValue(unsigned long long) */

void __thiscall DValue::DValue(DValue *this,ulonglong param_1)

{
  *(ulonglong *)this = param_1;
  *(undefined4 *)(this + 8) = 5;
  return;
}


/* DValue::DValue(float) */

void __thiscall DValue::DValue(DValue *this,float param_1)

{
  *(undefined4 *)(this + 8) = 3;
  *(float *)this = param_1;
  return;
}


/* DValue::DValue(double) */

void __thiscall DValue::DValue(DValue *this,double param_1)

{
  *(undefined4 *)(this + 8) = 4;
  *(double *)this = param_1;
  return;
}


/* DValue::DValue(bool) */

void __thiscall DValue::DValue(DValue *this,bool param_1)

{
  *this = (DValue)param_1;
  *(undefined4 *)(this + 8) = 6;
  return;
}


/* DValue::DValue(char const*) */

void __thiscall DValue::DValue(DValue *this,char *param_1)

{
  string *this_00;
  size_t __n;
  
  __n = 7;
  *(undefined4 *)(this + 8) = 7;
  this_00 = ::operator_new(8);
  Set8BytesTo0();
  *(string **)this = this_00;
  if (param_1 != (char *)0x0) {
    std::string::append(this_00,param_1,__n);
    return;
  }
  return;
}


/* DValue::DValue(std::string const&) */

void __thiscall DValue::DValue(DValue *this,string *param_1)

{
  void *pvVar1;
  
  *(undefined4 *)(this + 8) = 7;
  pvVar1 = ::operator_new(8);
  Set8BytesTo0();
  *(void **)this = pvVar1;
  thunk_FUN_05475e00(pvVar1,param_1);
  return;
}


/* DValue::asByte() const */

DValue __thiscall DValue::asByte(DValue *this)

{
  int iVar1;
  char *__nptr;
  
  iVar1 = *(int *)(this + 8);
  if (((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 5)) {
    if (iVar1 == 7) {
      __nptr = (char *)FUN_0547429c(*(undefined8 *)this);
      iVar1 = atoi(__nptr);
      return SUB41(iVar1,0);
    }
    if (iVar1 == 3) {
      return SUB41((int)*(float *)this,0);
    }
    if (iVar1 == 4) {
      return SUB41((int)*(double *)this,0);
    }
    if (iVar1 != 6) {
      return (DValue)0x0;
    }
  }
  return *this;
}


/* DValue::asInt() const */

uint __thiscall DValue::asInt(DValue *this)

{
  int iVar1;
  char *__nptr;
  uint uVar2;
  
  iVar1 = *(int *)(this + 8);
  if ((iVar1 == 2) || (iVar1 == 5)) {
    return *(uint *)this;
  }
  if (iVar1 != 1) {
    if (iVar1 == 7) {
      __nptr = (char *)FUN_0547429c(*(undefined8 *)this);
      uVar2 = atoi(__nptr);
      return uVar2;
    }
    if (iVar1 == 3) {
      uVar2 = (uint)*(float *)this;
    }
    else if (iVar1 == 4) {
      uVar2 = (uint)*(double *)this;
    }
    else {
      uVar2 = 0;
      if (iVar1 == 6) goto LAB_04f7f9cc;
    }
    return uVar2;
  }
LAB_04f7f9cc:
  return (uint)(byte)*this;
}


/* DValue::asUInt64() const */

ulong __thiscall DValue::asUInt64(DValue *this)

{
  int iVar1;
  ulong uVar2;
  char *__nptr;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 == 2) {
    return (long)*(int *)this;
  }
  if (iVar1 == 5) {
    return *(ulong *)this;
  }
  if (iVar1 != 1) {
    if (iVar1 == 7) {
      __nptr = (char *)FUN_0547429c(*(undefined8 *)this);
      iVar1 = atoi(__nptr);
      return (long)iVar1;
    }
    if (iVar1 == 3) {
      uVar2 = (ulong)*(float *)this;
    }
    else if (iVar1 == 4) {
      uVar2 = (ulong)*(double *)this;
    }
    else {
      uVar2 = 0;
      if (iVar1 == 6) goto LAB_04f7fa68;
    }
    return uVar2;
  }
LAB_04f7fa68:
  return (ulong)(byte)*this;
}


/* DValue::asFloat() const */

float __thiscall DValue::asFloat(DValue *this)

{
  int iVar1;
  float fVar2;
  double dVar3;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 == 3) {
    return *(float *)this;
  }
  if (iVar1 != 5) {
    if (iVar1 != 1) {
      if (iVar1 == 7) {
        FUN_0547429c(*(undefined8 *)this);
        dVar3 = (double)FUN_04f7f504();
        fVar2 = (float)dVar3;
      }
      else if (iVar1 == 2) {
        fVar2 = (float)*(int *)this;
      }
      else if (iVar1 == 4) {
        fVar2 = (float)*(double *)this;
      }
      else {
        fVar2 = 0.0;
        if ((iVar1 == 6) && (fVar2 = 1.0, *this == (DValue)0x0)) {
          fVar2 = 0.0;
        }
      }
      return fVar2;
    }
    return (float)(byte)*this;
  }
  return (float)*(ulong *)this;
}


/* DValue::asDouble() const */

undefined1  [16] __thiscall DValue::asDouble(DValue *this)

{
  int iVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 == 4) {
    auVar6._0_8_ = *(ulong *)this;
    auVar6._8_8_ = 0;
    return auVar6;
  }
  if (iVar1 == 1) {
    auVar5._0_8_ = (double)(byte)*this;
    auVar5._8_8_ = 0;
    return auVar5;
  }
  if (iVar1 == 7) {
    FUN_0547429c(*(undefined8 *)this);
    auVar6 = FUN_04f7f504();
    return auVar6;
  }
  if (iVar1 != 2) {
    if (iVar1 == 5) {
      dVar2 = (double)*(ulong *)this;
    }
    else if (iVar1 == 3) {
      dVar2 = (double)*(float *)this;
    }
    else {
      dVar2 = 0.0;
      if ((iVar1 == 6) && (dVar2 = 1.0, *this == (DValue)0x0)) {
        dVar2 = 0.0;
      }
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = dVar2;
    return auVar3;
  }
  auVar4._0_8_ = (double)*(int *)this;
  auVar4._8_8_ = 0;
  return auVar4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DValue::asString() const */

void DValue::asString(void)

{
  undefined4 uVar1;
  char *in_x0;
  undefined8 uVar2;
  ulong extraout_x0;
  ulong extraout_x0_00;
  char *pcVar3;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 8) == 7) {
    FUN_05475d88();
  }
  else {
    uVar1 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar1);
    switch(*(undefined4 *)(in_x0 + 8)) {
    case 1:
      FUN_05460394(auStack_168,*in_x0);
      break;
    case 2:
      FUN_0546065c(auStack_168,*(undefined4 *)in_x0);
      break;
    case 3:
      uVar2 = FUN_0545f9fc(auStack_168,std::fixed);
      nop();
      FUN_0545feec(uVar2,extraout_x0_00 & 0xffffffff);
      FUN_05460f98(*(undefined4 *)in_x0);
      break;
    case 4:
      uVar2 = FUN_0545f9fc(auStack_168,std::fixed);
      nop();
      FUN_0545feec(uVar2,extraout_x0 & 0xffffffff);
      thunk_FUN_05460d54(*(undefined8 *)in_x0);
      break;
    case 5:
      thunk_FUN_05460b1c(auStack_168,*(undefined8 *)in_x0);
      break;
    case 6:
      if (*in_x0 == '\0') {
        pcVar3 = "false";
      }
      else {
        pcVar3 = "true";
      }
      FUN_054603b8(auStack_168,pcVar3);
    }
    FUN_05462824(auStack_178);
    FUN_054617bc(auStack_178);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DValue::asBool() const */

DValue __thiscall DValue::asBool(DValue *this)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 == 6) {
    return *this;
  }
  if (iVar1 == 1) {
    return (DValue)(*this != (DValue)0x0);
  }
  if (iVar1 == 7) {
    bVar2 = std::operator==(*(string **)this,"0");
    if (!bVar2) {
      bVar2 = std::operator==(*(string **)this,"false");
      return (DValue)!bVar2;
    }
  }
  else {
    if (iVar1 == 2) {
      return (DValue)(*(int *)this != 0);
    }
    if (iVar1 == 5) {
      return (DValue)(*(long *)this != 0);
    }
    if (iVar1 == 3) {
      return (DValue)(*(float *)this != 0.0);
    }
    if (iVar1 == 4) {
      return (DValue)(*(double *)this != 0.0);
    }
  }
  return (DValue)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DValue::getDescription() const */

void DValue::getDescription(void)

{
  string *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"\n");
  nop();
  FUN_04f80440(asStack_10);
  thunk_FUN_054757c0();
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DValue::clear() */

void __thiscall DValue::clear(DValue *this)

{
  vector<DValue,std::allocator<DValue>> *this_00;
  unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
  *this_01;
  string *this_02;
  unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
  *this_03;
  
  switch(*(undefined4 *)(this + 8)) {
  case 1:
  case 6:
    *this = (DValue)0x0;
    *(undefined4 *)(this + 8) = 0;
    return;
  case 2:
    *(undefined4 *)this = 0;
    break;
  case 3:
    *(undefined4 *)this = 0;
    break;
  case 4:
    *(undefined8 *)this = 0;
    break;
  case 5:
switchD_04f80e88_caseD_5:
    *(undefined8 *)this = 0;
    *(undefined4 *)(this + 8) = 0;
    return;
  case 7:
    this_02 = *(string **)this;
    if (this_02 != (string *)0x0) {
      std::string::~string(this_02);
      AK::FreeHook(this_02);
      *(undefined8 *)this = 0;
    }
    break;
  case 8:
    this_00 = *(vector<DValue,std::allocator<DValue>> **)this;
    if (this_00 != (vector<DValue,std::allocator<DValue>> *)0x0) {
      std::vector<DValue,std::allocator<DValue>>::~vector(this_00);
      AK::FreeHook(this_00);
      *(undefined8 *)this = 0;
    }
    break;
  case 9:
    this_03 = *(unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
                **)this;
    if (this_03 !=
        (unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
         *)0x0) {
      std::
      unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
      ::~unordered_map(this_03);
      AK::FreeHook(this_03);
      *(undefined8 *)this = 0;
    }
    break;
  case 10:
    this_01 = *(unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
                **)this;
    if (this_01 !=
        (unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
         *)0x0) {
      std::
      unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
      ::~unordered_map(this_01);
      AK::FreeHook(this_01);
      goto switchD_04f80e88_caseD_5;
    }
  }
  *(undefined4 *)(this + 8) = 0;
  return;
}


/* DValue::~DValue() */

void __thiscall DValue::~DValue(DValue *this)

{
  vector<DValue,std::allocator<DValue>> *this_00;
  unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
  *this_01;
  string *this_02;
  unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
  *this_03;
  
  switch(*(undefined4 *)(this + 8)) {
  case 1:
  case 6:
    *this = (DValue)0x0;
    *(undefined4 *)(this + 8) = 0;
    return;
  case 2:
    *(undefined4 *)this = 0;
    break;
  case 3:
    *(undefined4 *)this = 0;
    break;
  case 4:
    *(undefined8 *)this = 0;
    break;
  case 5:
switchD_04f80e88_caseD_5:
    *(undefined8 *)this = 0;
    *(undefined4 *)(this + 8) = 0;
    return;
  case 7:
    this_02 = *(string **)this;
    if (this_02 != (string *)0x0) {
      std::string::~string(this_02);
      AK::FreeHook(this_02);
      *(undefined8 *)this = 0;
    }
    break;
  case 8:
    this_00 = *(vector<DValue,std::allocator<DValue>> **)this;
    if (this_00 != (vector<DValue,std::allocator<DValue>> *)0x0) {
      std::vector<DValue,std::allocator<DValue>>::~vector(this_00);
      AK::FreeHook(this_00);
      *(undefined8 *)this = 0;
    }
    break;
  case 9:
    this_03 = *(unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
                **)this;
    if (this_03 !=
        (unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
         *)0x0) {
      std::
      unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
      ::~unordered_map(this_03);
      AK::FreeHook(this_03);
      *(undefined8 *)this = 0;
    }
    break;
  case 10:
    this_01 = *(unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
                **)this;
    if (this_01 !=
        (unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
         *)0x0) {
      std::
      unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
      ::~unordered_map(this_01);
      AK::FreeHook(this_01);
      goto switchD_04f80e88_caseD_5;
    }
  }
  *(undefined4 *)(this + 8) = 0;
  return;
}


/* DValue::DValue(std::vector<DValue, std::allocator<DValue> >&&) */

void __thiscall DValue::DValue(DValue *this,vector *param_1)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_00;
  vector *extraout_x0;
  
  *(undefined4 *)(this + 8) = 8;
  this_00 = ::operator_new(0x18,(nothrow_t *)&std::nothrow);
  if (this_00 != (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)0x0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_00);
  }
  *(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> **)this = this_00;
  nop();
  std::vector<DValue,std::allocator<DValue>>::operator=
            ((vector<DValue,std::allocator<DValue>> *)this_00,extraout_x0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DValue::DValue(std::unordered_map<std::string, DValue, std::hash<std::string >,
   std::equal_to<std::string >, std::allocator<std::pair<std::string const, DValue> > >&&) */

void __thiscall DValue::DValue(DValue *this,unordered_map *param_1)

{
  unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
  *this_00;
  unordered_map *extraout_x0;
  equal_to aeStack_20 [8];
  allocator aaStack_18 [16];
  long local_8;
  
  *(undefined4 *)(this + 8) = 9;
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x38,(nothrow_t *)&std::nothrow);
  if (this_00 !=
      (unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
       *)0x0) {
    std::
    unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
    ::unordered_map((ulong)this_00,(hash *)0xa,aeStack_20,aaStack_18);
  }
  *(unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
    **)this = this_00;
  nop();
  std::
  unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
  ::operator=(this_00,extraout_x0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DValue::TEMPNAMEPLACEHOLDERVALUE(DValue&&) */

DValue * __thiscall DValue::operator=(DValue *this,DValue *param_1)

{
  undefined4 uVar1;
  
  if (this != param_1) {
    clear(this);
    uVar1 = *(undefined4 *)(param_1 + 8);
    switch(uVar1) {
    case 1:
    case 6:
      *this = *param_1;
      break;
    case 2:
      *(undefined4 *)this = *(undefined4 *)param_1;
      break;
    case 3:
      *(undefined4 *)this = *(undefined4 *)param_1;
      break;
    case 4:
      *(undefined8 *)this = *(undefined8 *)param_1;
      break;
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
    *(undefined4 *)(this + 8) = uVar1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return this;
}


/* DValue::DValue(DValue&&) */

void __thiscall DValue::DValue(DValue *this,DValue *param_1)

{
  DValue *extraout_x0;
  
  *(undefined4 *)(this + 8) = 0;
  nop();
  operator=(this,extraout_x0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DValue::reset(DValue::Type) */

void __thiscall DValue::reset(DValue *this,int param_2)

{
  void *pvVar1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_00;
  void *pvVar2;
  equal_to aeStack_20 [8];
  allocator aaStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 8) == param_2) goto LAB_04f8143c;
  clear(this);
  switch(param_2) {
  case 7:
    pvVar1 = ::operator_new(8);
    Set8BytesTo0();
    *(void **)this = pvVar1;
    break;
  case 8:
    this_00 = ::operator_new(0x18,(nothrow_t *)&std::nothrow);
    pvVar1 = (void *)0x0;
    if (this_00 == (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)0x0)
    goto LAB_04f814a4;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_00);
    *(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> **)this = this_00;
    break;
  case 9:
    pvVar1 = ::operator_new(0x38,(nothrow_t *)&std::nothrow);
    if (pvVar1 != (void *)0x0) {
      std::
      unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
      ::unordered_map((ulong)pvVar1,(hash *)0xa,aeStack_20,aaStack_18);
    }
LAB_04f814a4:
    *(void **)this = pvVar1;
    break;
  case 10:
    pvVar2 = ::operator_new(0x38,(nothrow_t *)&std::nothrow);
    pvVar1 = (void *)0x0;
    if (pvVar2 == (void *)0x0) goto LAB_04f814a4;
    std::
    unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
    ::unordered_map((ulong)pvVar2,(hash *)0xa,aeStack_20,aaStack_18);
    *(void **)this = pvVar2;
  }
  *(int *)(this + 8) = param_2;
LAB_04f8143c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DValue::TEMPNAMEPLACEHOLDERVALUE(unsigned char) */

DValue * __thiscall DValue::operator=(DValue *this,uchar param_1)

{
  reset(this,1);
  *this = (DValue)param_1;
  return this;
}


/* DValue::TEMPNAMEPLACEHOLDERVALUE(int) */

DValue * __thiscall DValue::operator=(DValue *this,int param_1)

{
  reset(this,2);
  *(int *)this = param_1;
  return this;
}


/* DValue::TEMPNAMEPLACEHOLDERVALUE(unsigned long long) */

DValue * __thiscall DValue::operator=(DValue *this,ulonglong param_1)

{
  reset(this,5);
  *(ulonglong *)this = param_1;
  return this;
}


/* DValue::TEMPNAMEPLACEHOLDERVALUE(float) */

DValue * __thiscall DValue::operator=(DValue *this,float param_1)

{
  reset(this,3);
  *(float *)this = param_1;
  return this;
}


/* DValue::TEMPNAMEPLACEHOLDERVALUE(double) */

DValue * __thiscall DValue::operator=(DValue *this,double param_1)

{
  reset(this,4);
  *(double *)this = param_1;
  return this;
}


/* DValue::TEMPNAMEPLACEHOLDERVALUE(bool) */

DValue * __thiscall DValue::operator=(DValue *this,bool param_1)

{
  reset(this,6);
  *this = (DValue)param_1;
  return this;
}


/* DValue::TEMPNAMEPLACEHOLDERVALUE(char const*) */

DValue * __thiscall DValue::operator=(DValue *this,char *param_1)

{
  size_t in_x2;
  
  reset(this,7);
  if (param_1 != (char *)0x0) {
    std::string::append(*(string **)this,param_1,in_x2);
    return this;
  }
  std::string::append(*(string **)this,"",in_x2);
  return this;
}


/* DValue::TEMPNAMEPLACEHOLDERVALUE(std::string const&) */

DValue * __thiscall DValue::operator=(DValue *this,string *param_1)

{
  reset(this,7);
  thunk_FUN_05475e00(*(undefined8 *)this,param_1);
  return this;
}


/* DValue::TEMPNAMEPLACEHOLDERVALUE(std::vector<DValue, std::allocator<DValue> >&&) */

DValue * __thiscall DValue::operator=(DValue *this,vector *param_1)

{
  vector *extraout_x0;
  
  reset(this,8);
  nop();
  std::vector<DValue,std::allocator<DValue>>::operator=
            (*(vector<DValue,std::allocator<DValue>> **)this,extraout_x0);
  return this;
}


/* DValue::TEMPNAMEPLACEHOLDERVALUE(std::unordered_map<std::string, DValue, std::hash<std::string >,
   std::equal_to<std::string >, std::allocator<std::pair<std::string const, DValue> > >&&) */

DValue * __thiscall DValue::operator=(DValue *this,unordered_map *param_1)

{
  unordered_map *extraout_x0;
  
  reset(this,9);
  nop();
  std::
  unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
  ::operator=(*(unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
                **)this,extraout_x0);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DValue::DValue(std::unordered_map<int, DValue, std::hash<int>, std::equal_to<int>,
   std::allocator<std::pair<int const, DValue> > >&&) */

void __thiscall DValue::DValue(DValue *this,unordered_map *param_1)

{
  unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
  *this_00;
  unordered_map *extraout_x0;
  equal_to aeStack_20 [8];
  allocator aaStack_18 [16];
  long local_8;
  
  *(undefined4 *)(this + 8) = 10;
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x38,(nothrow_t *)&std::nothrow);
  if (this_00 !=
      (unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
       *)0x0) {
    std::
    unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
    ::unordered_map((ulong)this_00,(hash *)0xa,aeStack_20,aaStack_18);
  }
  *(unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
    **)this = this_00;
  nop();
  std::
  unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
  ::operator=(this_00,extraout_x0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DValue::TEMPNAMEPLACEHOLDERVALUE(std::unordered_map<int, DValue, std::hash<int>,
   std::equal_to<int>, std::allocator<std::pair<int const, DValue> > >&&) */

DValue * __thiscall DValue::operator=(DValue *this,unordered_map *param_1)

{
  unordered_map *extraout_x0;
  
  reset(this,10);
  nop();
  std::
  unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
  ::operator=(*(unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
                **)this,extraout_x0);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DValue::TEMPNAMEPLACEHOLDERVALUE(DValue const&) */

void __thiscall DValue::operator=(DValue *this,DValue *param_1)

{
  unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
  *this_00;
  unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
  *this_01;
  vector<DValue,std::allocator<DValue>> *this_02;
  void *pvVar1;
  equal_to aeStack_20 [8];
  allocator aaStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this != param_1) {
    reset(this,*(undefined4 *)(param_1 + 8));
    switch(*(undefined4 *)(param_1 + 8)) {
    case 1:
    case 6:
      *this = *param_1;
      break;
    case 2:
      *(undefined4 *)this = *(undefined4 *)param_1;
      break;
    case 3:
      *(undefined4 *)this = *(undefined4 *)param_1;
      break;
    case 4:
      *(undefined8 *)this = *(undefined8 *)param_1;
      break;
    case 5:
      *(undefined8 *)this = *(undefined8 *)param_1;
      break;
    case 7:
      pvVar1 = *(void **)this;
      if (pvVar1 == (void *)0x0) {
        pvVar1 = ::operator_new(8);
        Set8BytesTo0();
        *(void **)this = pvVar1;
      }
      thunk_FUN_05475e00(pvVar1,*(undefined8 *)param_1);
      break;
    case 8:
      this_02 = *(vector<DValue,std::allocator<DValue>> **)this;
      if (this_02 == (vector<DValue,std::allocator<DValue>> *)0x0) {
        this_02 = ::operator_new(0x18,(nothrow_t *)&std::nothrow);
        if (this_02 != (vector<DValue,std::allocator<DValue>> *)0x0) {
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this_02);
        }
        *(vector<DValue,std::allocator<DValue>> **)this = this_02;
      }
      std::vector<DValue,std::allocator<DValue>>::operator=(this_02,*(vector **)param_1);
      break;
    case 9:
      this_00 = *(unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
                  **)this;
      if (this_00 ==
          (unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           *)0x0) {
        this_00 = ::operator_new(0x38,(nothrow_t *)&std::nothrow);
        if (this_00 !=
            (unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
             *)0x0) {
          std::
          unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
          ::unordered_map((ulong)this_00,(hash *)0xa,aeStack_20,aaStack_18);
        }
        *(unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
          **)this = this_00;
      }
      std::
      unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
      ::operator=(this_00,*(unordered_map **)param_1);
      break;
    case 10:
      this_01 = *(unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
                  **)this;
      if (this_01 ==
          (unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
           *)0x0) {
        this_01 = ::operator_new(0x38,(nothrow_t *)&std::nothrow);
        if (this_01 !=
            (unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
             *)0x0) {
          std::
          unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
          ::unordered_map((ulong)this_01,(hash *)0xa,aeStack_20,aaStack_18);
        }
        *(unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
          **)this = this_01;
      }
      std::
      unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
      ::operator=(this_01,*(unordered_map **)param_1);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


/* DValue::DValue(DValue const&) */

void __thiscall DValue::DValue(DValue *this,DValue *param_1)

{
  *(undefined4 *)(this + 8) = 0;
  operator=(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DValue::DValue(std::unordered_map<std::string, DValue, std::hash<std::string >,
   std::equal_to<std::string >, std::allocator<std::pair<std::string const, DValue> > > const&) */

void __thiscall DValue::DValue(DValue *this,unordered_map *param_1)

{
  unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
  *this_00;
  equal_to aeStack_20 [8];
  allocator aaStack_18 [16];
  long local_8;
  
  *(undefined4 *)(this + 8) = 9;
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x38,(nothrow_t *)&std::nothrow);
  if (this_00 !=
      (unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
       *)0x0) {
    std::
    unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
    ::unordered_map((ulong)this_00,(hash *)0xa,aeStack_20,aaStack_18);
  }
  *(unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
    **)this = this_00;
  std::
  unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
  ::operator=(this_00,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DValue::TEMPNAMEPLACEHOLDERVALUE(std::unordered_map<std::string, DValue, std::hash<std::string >,
   std::equal_to<std::string >, std::allocator<std::pair<std::string const, DValue> > > const&) */

DValue * __thiscall DValue::operator=(DValue *this,unordered_map *param_1)

{
  reset(this,9);
  std::
  unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
  ::operator=(*(unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
                **)this,param_1);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DValue::DValue(std::unordered_map<int, DValue, std::hash<int>, std::equal_to<int>,
   std::allocator<std::pair<int const, DValue> > > const&) */

void __thiscall DValue::DValue(DValue *this,unordered_map *param_1)

{
  unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
  *this_00;
  equal_to aeStack_20 [8];
  allocator aaStack_18 [16];
  long local_8;
  
  *(undefined4 *)(this + 8) = 10;
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x38,(nothrow_t *)&std::nothrow);
  if (this_00 !=
      (unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
       *)0x0) {
    std::
    unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
    ::unordered_map((ulong)this_00,(hash *)0xa,aeStack_20,aaStack_18);
  }
  *(unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
    **)this = this_00;
  std::
  unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
  ::operator=(this_00,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DValue::TEMPNAMEPLACEHOLDERVALUE(std::unordered_map<int, DValue, std::hash<int>,
   std::equal_to<int>, std::allocator<std::pair<int const, DValue> > > const&) */

DValue * __thiscall DValue::operator=(DValue *this,unordered_map *param_1)

{
  reset(this,10);
  std::
  unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
  ::operator=(*(unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
                **)this,param_1);
  return this;
}


/* DValue::DValue(std::vector<DValue, std::allocator<DValue> > const&) */

void __thiscall DValue::DValue(DValue *this,vector *param_1)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_00;
  
  *(undefined4 *)(this + 8) = 8;
  this_00 = ::operator_new(0x18,(nothrow_t *)&std::nothrow);
  if (this_00 != (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)0x0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_00);
  }
  *(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> **)this = this_00;
  std::vector<DValue,std::allocator<DValue>>::operator=
            ((vector<DValue,std::allocator<DValue>> *)this_00,param_1);
  return;
}


/* DValue::TEMPNAMEPLACEHOLDERVALUE(std::vector<DValue, std::allocator<DValue> > const&) */

DValue * __thiscall DValue::operator=(DValue *this,vector *param_1)

{
  reset(this,8);
  std::vector<DValue,std::allocator<DValue>>::operator=
            (*(vector<DValue,std::allocator<DValue>> **)this,param_1);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DValue::TEMPNAMEPLACEHOLDERVALUE(DValue const&) const */

void __thiscall DValue::operator==(DValue *this,DValue *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  int *piVar5;
  long lVar6;
  string *psVar7;
  long lVar8;
  DValue *this_00;
  DValue *pDVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
  *this_01;
  unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
  *this_02;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this == param_1) goto LAB_04f830c8;
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != *(int *)(this + 8)) {
LAB_04f82fbc:
    uVar4 = 0;
    goto switchD_04f83028_default;
  }
  cVar2 = FUN_04f7f5b0(iVar1);
  if (cVar2 != '\0') goto LAB_04f830c8;
  uVar4 = 0;
  switch(iVar1) {
  case 1:
  case 6:
    uVar4 = *param_1 == *this;
    break;
  case 2:
    uVar4 = *(int *)param_1 == *(int *)this;
    break;
  case 3:
    uVar4 = ABS(*(float *)param_1 - *(float *)this) <= 1.1920929e-07;
    break;
  case 4:
    uVar4 = ABS(*(double *)param_1 - *(double *)this) <= 1.1920928955078125e-07;
    break;
  case 5:
    uVar4 = *(long *)param_1 == *(long *)this;
    break;
  case 7:
    uVar4 = std::operator==(*(string **)param_1,*(string **)this);
    break;
  case 8:
    puVar12 = *(undefined8 **)this;
    puVar13 = *(undefined8 **)param_1;
    uVar11 = *puVar12;
    lVar6 = FUN_04f7f5c0(uVar11,puVar12[1]);
    uVar10 = *puVar13;
    lVar8 = FUN_04f7f5c0(uVar10,puVar13[1]);
    if ((lVar6 == lVar8) && (lVar6 != 0)) {
      lVar8 = 0;
      while( true ) {
        this_00 = (DValue *)FUN_04f7f5cc(uVar11,lVar8);
        pDVar9 = (DValue *)FUN_04f7f5cc(uVar10,lVar8);
        cVar2 = operator!=(this_00,pDVar9);
        if (cVar2 != '\0') break;
        lVar8 = lVar8 + 1;
        if (lVar8 == lVar6) goto LAB_04f830c8;
        uVar11 = *puVar12;
        uVar10 = *puVar13;
      }
      goto LAB_04f82fbc;
    }
    goto LAB_04f830c8;
  case 9:
    this_02 = *(unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
                **)param_1;
    local_28 = std::
               unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
               ::begin(*(unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
                         **)this);
    local_20 = FUN_04f80128();
    while (bVar3 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_20),
          bVar3) {
      psVar7 = (string *)
               std::__detail::_Node_iterator<std::pair<int_const,DValue>,false,false>::operator*
                         ((_Node_iterator<std::pair<int_const,DValue>,false,false> *)&local_28);
      local_18 = std::
                 unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
                 ::find(this_02,psVar7);
      local_10 = FUN_04f80128();
      cVar2 = std::__exception_ptr::operator==
                        ((exception_ptr *)&local_18,(exception_ptr *)&local_10);
      if (cVar2 != '\0') goto switchD_04f83028_default;
      lVar6 = std::__detail::
              _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
              operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                          *)&local_18);
      cVar2 = operator!=((DValue *)(lVar6 + 8),(DValue *)(psVar7 + 8));
      if (cVar2 != '\0') goto switchD_04f83028_default;
      std::__detail::_Node_iterator<std::pair<std::string_const,DValue>,false,true>::operator++
                ((_Node_iterator<std::pair<std::string_const,DValue>,false,true> *)&local_28);
    }
    uVar4 = 1;
    break;
  case 10:
    this_01 = *(unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
                **)param_1;
    local_28 = std::
               unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
               ::begin(*(unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
                         **)this);
    local_20 = FUN_04f801f0();
    while (bVar3 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_20),
          bVar3) {
      piVar5 = (int *)std::__detail::_Node_iterator<std::pair<int_const,DValue>,false,false>::
                      operator*((_Node_iterator<std::pair<int_const,DValue>,false,false> *)&local_28
                               );
      local_18 = std::
                 unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
                 ::find(this_01,piVar5);
      local_10 = FUN_04f801f0();
      cVar2 = std::__exception_ptr::operator==
                        ((exception_ptr *)&local_18,(exception_ptr *)&local_10);
      if (cVar2 != '\0') goto switchD_04f83028_default;
      lVar6 = std::__detail::
              _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
              operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                          *)&local_18);
      cVar2 = operator!=((DValue *)(lVar6 + 8),(DValue *)(piVar5 + 2));
      if (cVar2 != '\0') goto switchD_04f83028_default;
      std::__detail::_Node_iterator<std::pair<int_const,DValue>,false,false>::operator++
                ((_Node_iterator<std::pair<int_const,DValue>,false,false> *)&local_28);
    }
LAB_04f830c8:
    uVar4 = 1;
  }
switchD_04f83028_default:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* DValue::TEMPNAMEPLACEHOLDERVALUE(DValue const&) const */

byte __thiscall DValue::operator!=(DValue *this,DValue *param_1)

{
  byte bVar1;
  
  bVar1 = operator==(this,param_1);
  return bVar1 ^ 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DValue::TEMPNAMEPLACEHOLDERVALUE(DValue const&) */

void __thiscall DValue::operator==(DValue *this,DValue *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  int *piVar5;
  long lVar6;
  string *psVar7;
  long lVar8;
  DValue *this_00;
  DValue *pDVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
  *this_01;
  unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
  *this_02;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (this == param_1) goto LAB_04f830c8;
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != *(int *)(this + 8)) {
LAB_04f82fbc:
    uVar4 = 0;
    goto switchD_04f83028_default;
  }
  cVar2 = FUN_04f7f5b0(iVar1);
  if (cVar2 != '\0') goto LAB_04f830c8;
  uVar4 = 0;
  switch(iVar1) {
  case 1:
  case 6:
    uVar4 = *param_1 == *this;
    break;
  case 2:
    uVar4 = *(int *)param_1 == *(int *)this;
    break;
  case 3:
    uVar4 = ABS(*(float *)param_1 - *(float *)this) <= 1.1920929e-07;
    break;
  case 4:
    uVar4 = ABS(*(double *)param_1 - *(double *)this) <= 1.1920928955078125e-07;
    break;
  case 5:
    uVar4 = *(long *)param_1 == *(long *)this;
    break;
  case 7:
    uVar4 = std::operator==(*(string **)param_1,*(string **)this);
    break;
  case 8:
    puVar12 = *(undefined8 **)this;
    puVar13 = *(undefined8 **)param_1;
    uVar11 = *puVar12;
    lVar6 = FUN_04f7f5c0(uVar11,puVar12[1]);
    uVar10 = *puVar13;
    lVar8 = FUN_04f7f5c0(uVar10,puVar13[1]);
    if ((lVar6 == lVar8) && (lVar6 != 0)) {
      lVar8 = 0;
      while( true ) {
        this_00 = (DValue *)FUN_04f7f5cc(uVar11,lVar8);
        pDVar9 = (DValue *)FUN_04f7f5cc(uVar10,lVar8);
        cVar2 = operator!=(this_00,pDVar9);
        if (cVar2 != '\0') break;
        lVar8 = lVar8 + 1;
        if (lVar8 == lVar6) goto LAB_04f830c8;
        uVar11 = *puVar12;
        uVar10 = *puVar13;
      }
      goto LAB_04f82fbc;
    }
    goto LAB_04f830c8;
  case 9:
    this_02 = *(unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
                **)param_1;
    uStack_28 = std::
                unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
                ::begin(*(unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
                          **)this);
    uStack_20 = FUN_04f80128();
    while (bVar3 = eastl::operator!=((rbtree_iterator *)&uStack_28,(rbtree_iterator *)&uStack_20),
          bVar3) {
      psVar7 = (string *)
               std::__detail::_Node_iterator<std::pair<int_const,DValue>,false,false>::operator*
                         ((_Node_iterator<std::pair<int_const,DValue>,false,false> *)&uStack_28);
      uStack_18 = std::
                  unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
                  ::find(this_02,psVar7);
      uStack_10 = FUN_04f80128();
      cVar2 = std::__exception_ptr::operator==
                        ((exception_ptr *)&uStack_18,(exception_ptr *)&uStack_10);
      if (cVar2 != '\0') goto switchD_04f83028_default;
      lVar6 = std::__detail::
              _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
              operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                          *)&uStack_18);
      cVar2 = operator!=((DValue *)(lVar6 + 8),(DValue *)(psVar7 + 8));
      if (cVar2 != '\0') goto switchD_04f83028_default;
      std::__detail::_Node_iterator<std::pair<std::string_const,DValue>,false,true>::operator++
                ((_Node_iterator<std::pair<std::string_const,DValue>,false,true> *)&uStack_28);
    }
    uVar4 = 1;
    break;
  case 10:
    this_01 = *(unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
                **)param_1;
    uStack_28 = std::
                unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
                ::begin(*(unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
                          **)this);
    uStack_20 = FUN_04f801f0();
    while (bVar3 = eastl::operator!=((rbtree_iterator *)&uStack_28,(rbtree_iterator *)&uStack_20),
          bVar3) {
      piVar5 = (int *)std::__detail::_Node_iterator<std::pair<int_const,DValue>,false,false>::
                      operator*((_Node_iterator<std::pair<int_const,DValue>,false,false> *)
                                &uStack_28);
      uStack_18 = std::
                  unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
                  ::find(this_01,piVar5);
      uStack_10 = FUN_04f801f0();
      cVar2 = std::__exception_ptr::operator==
                        ((exception_ptr *)&uStack_18,(exception_ptr *)&uStack_10);
      if (cVar2 != '\0') goto switchD_04f83028_default;
      lVar6 = std::__detail::
              _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
              operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                          *)&uStack_18);
      cVar2 = operator!=((DValue *)(lVar6 + 8),(DValue *)(piVar5 + 2));
      if (cVar2 != '\0') goto switchD_04f83028_default;
      std::__detail::_Node_iterator<std::pair<int_const,DValue>,false,false>::operator++
                ((_Node_iterator<std::pair<int_const,DValue>,false,false> *)&uStack_28);
    }
LAB_04f830c8:
    uVar4 = 1;
  }
switchD_04f83028_default:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* DValue::TEMPNAMEPLACEHOLDERVALUE(DValue const&) */

byte __thiscall DValue::operator!=(DValue *this,DValue *param_1)

{
  byte bVar1;
  
  bVar1 = operator==(this,param_1);
  return bVar1 ^ 1;
}

