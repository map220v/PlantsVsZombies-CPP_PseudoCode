// Class: Reflection::RCustomType


/* Reflection::RCustomType::TypeEquals(Reflection::RType*, bool, bool) const */

undefined1 __thiscall
Reflection::RCustomType::TypeEquals(RCustomType *this,RType *param_1,bool param_2,bool param_3)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  
  if ((param_1 == (RType *)0x0) ||
     (iVar4 = (**(code **)(*(long *)param_1 + 0x48))
                        (param_1,*(code **)(*(long *)param_1 + 0x48),param_2,param_3), iVar4 != 4))
  {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    iVar4 = FUN_0517e268(*(undefined4 *)(this + 0x68));
    iVar5 = FUN_0517e268(*(undefined4 *)(param_1 + 0x68));
    if (iVar4 == iVar5) {
      if (param_2) {
        cVar1 = FUN_0517e270(*(undefined4 *)(this + 100));
        cVar2 = FUN_0517e270(*(undefined4 *)(param_1 + 100));
        if (cVar1 != cVar2) {
          return 0;
        }
      }
      uVar3 = 0;
      iVar4 = FUN_0517eaac(*(undefined4 *)(this + 0x70));
      iVar5 = FUN_0517eaac(*(undefined4 *)(param_1 + 0x70));
      if (iVar4 == iVar5) {
        plVar6 = (long *)FUN_0517eab0(*(undefined8 *)(this + 0x78));
        uVar7 = FUN_0517eab0(*(undefined8 *)(param_1 + 0x78));
        uVar3 = (**(code **)(*plVar6 + 0x50))(plVar6,uVar7,param_2,param_3);
      }
    }
  }
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RCustomType::InstanceToString(void const*) const */

void Reflection::RCustomType::InstanceToString(void *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  Sexy *in_x1;
  char *pcVar5;
  bool *pbVar6;
  RtId aRStack_18 [8];
  string asStack_10 [8];
  bool *local_8;
  
  local_8 = ___stack_chk_guard;
  pbVar6 = ___stack_chk_guard;
  Set8BytesTo0();
  plVar2 = (long *)FUN_0517eab0(*(undefined8 *)((long)param_1 + 0x78));
  uVar1 = FUN_0517eaac(*(undefined4 *)((long)param_1 + 0x70));
  switch(uVar1) {
  case 0:
    FUN_05475ad8();
    thunk_FUN_054757c0();
    FUN_05475ad8();
    break;
  case 1:
    FUN_05475ad8();
    Sexy::WStringToString(in_x1,(wstring *)0x0,pbVar6);
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
    FUN_05475ad8();
    break;
  case 2:
    plVar4 = (long *)FUN_0517eba8(*(undefined8 *)((long)param_1 + 0x80));
    if (plVar4 == (long *)0x0) {
      FUN_05475ad8();
      if (plVar2 != (long *)0x0) goto LAB_0517fa00;
      pcVar5 = "FIXME_CUSTOMTYPE_STDVECTOR_NULLINNERTYPE";
LAB_0517fa64:
      std::string::string(asStack_10,pcVar5);
      thunk_FUN_054757c0();
      std::string::~string(asStack_10);
      nop();
LAB_0517fa30:
      FUN_05475ad8();
      break;
    }
    FUN_05475ad8();
    if (plVar2 != (long *)0x0) goto LAB_0517f7d4;
    pcVar5 = "FIXME_CUSTOMTYPE_STDVECTOR_NULLINNERTYPE";
    goto LAB_0517f88c;
  case 3:
  case 4:
  case 8:
    Sexy::RtId::RtId(aRStack_18,(RtId *)in_x1);
    Set8BytesTo0(asStack_10);
    Sexy::RtId::ToString(aRStack_18,asStack_10,false);
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
    Sexy::RtId::~RtId(aRStack_18);
    break;
  case 5:
    plVar4 = (long *)FUN_0517eba8(*(undefined8 *)((long)param_1 + 0x80));
    if (plVar4 == (long *)0x0) {
      FUN_05475ad8();
      if (plVar2 == (long *)0x0) {
        pcVar5 = "FIXME_CUSTOMTYPE_STDDEQUE_NULLINNERTYPE";
        goto LAB_0517fa64;
      }
LAB_0517fa00:
      (**(code **)(*plVar2 + 0x58))(asStack_10,plVar2,0);
      thunk_FUN_054757c0();
      std::string::~string(asStack_10);
      goto LAB_0517fa30;
    }
    FUN_05475ad8();
    if (plVar2 == (long *)0x0) {
      pcVar5 = "FIXME_CUSTOMTYPE_STDDEQUE_NULLINNERTYPE";
      goto LAB_0517f88c;
    }
    goto LAB_0517f7d4;
  case 6:
    plVar4 = (long *)FUN_0517eba8(*(undefined8 *)((long)param_1 + 0x80));
    FUN_05475ad8();
    if (plVar2 != (long *)0x0) goto LAB_0517f7d4;
LAB_0517f874:
    pcVar5 = "FIXME_CUSTOMTYPE_STDMAP_NULLINNERTYPE";
LAB_0517f88c:
    std::string::string(asStack_10,pcVar5);
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
    nop();
LAB_0517f804:
    FUN_05475ad8();
    uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
    Sexy::StrFormat("(count = %d)",asStack_10,uVar3 & 0xffffffff);
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
    break;
  case 7:
    plVar4 = (long *)FUN_0517eba8(*(undefined8 *)((long)param_1 + 0x80));
    FUN_05475ad8();
    if (plVar2 == (long *)0x0) goto LAB_0517f874;
LAB_0517f7d4:
    (**(code **)(*plVar2 + 0x58))(asStack_10,plVar2,0);
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
    goto LAB_0517f804;
  default:
    FUN_05475ad8();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Reflection::RCustomType::GetTypeCategory() const */

undefined8 Reflection::RCustomType::GetTypeCategory(void)

{
  return 4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RCustomType::TypeToString(bool) const */

void Reflection::RCustomType::TypeToString(bool param_1)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  char in_w1;
  char *__s;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  uVar3 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  Set8BytesTo0();
  plVar4 = (long *)FUN_0517eab0(*(undefined8 *)(uVar3 + 0x78));
  if (plVar4 == (long *)0x0) {
    std::string::string(asStack_10,"FIXME_REFTYPE_NULLINNERTYPE");
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
    nop();
  }
  else {
    (**(code **)(*plVar4 + 0x58))(asStack_10,plVar4,in_w1);
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
  }
  if ((in_w1 != '\0') && (cVar1 = FUN_0517e270(*(undefined4 *)(uVar3 + 100)), cVar1 != '\0')) {
    FUN_05475ad8();
  }
  uVar2 = FUN_0517eaac(*(undefined4 *)(uVar3 + 0x70));
  switch(uVar2) {
  case 0:
    FUN_05475ad8();
    break;
  case 1:
    FUN_05475ad8();
    break;
  case 2:
    FUN_05475ad8();
    if (plVar4 != (long *)0x0) goto LAB_051827fc;
    __s = "FIXME_CUSTOMTYPE_STDVECTOR_NULLINNERTYPE";
LAB_0518288c:
    std::string::string(asStack_10,__s);
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
    nop();
    goto LAB_05182828;
  case 3:
    if (plVar4 == (long *)0x0) {
      FUN_05475ad8();
    }
    else {
      (**(code **)(*plVar4 + 0x58))(asStack_20,plVar4,in_w1);
      std::operator+("RtWeakPtr<",asStack_20);
      std::operator+(asStack_18,">");
      thunk_FUN_054757c0();
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      std::string::~string(asStack_20);
    }
    break;
  case 4:
    FUN_05475ad8();
    if (plVar4 == (long *)0x0) {
      __s = "RtObject";
      goto LAB_0518288c;
    }
LAB_051827fc:
    (**(code **)(*plVar4 + 0x58))(asStack_10,plVar4,in_w1);
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
LAB_05182828:
    FUN_05475ad8();
    break;
  default:
    FUN_05475ad8();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RCustomType::InstanceRtonSync(void*, Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey
   const&) const */

void __thiscall
Reflection::RCustomType::InstanceRtonSync
          (RCustomType *this,void *param_1,RtSerialRtonSync *param_2,RtSerialRtonKey *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  RtSerialRtonWriter *this_00;
  RtSerialRtonKey *pRVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_0517eab0(*(undefined8 *)(this + 0x78));
  cVar1 = FUN_0517e1fc(param_2[0x10]);
  if (cVar1 == '\0') {
    pRVar4 = (RtSerialRtonKey *)FUN_0517e208(*(undefined8 *)param_2);
    uVar2 = FUN_0517eaac(*(undefined4 *)(this + 0x70));
    switch(uVar2) {
    case 0:
      cVar1 = '\x01';
      std::string::string(asStack_18,"");
      Sexy::RtSerialRtonReader::ReadString(pRVar4,(string *)param_3);
      FUN_05474278(param_1,asStack_10);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      nop();
      break;
    case 1:
      cVar1 = '\x01';
      FUN_05478178(asStack_18,&DAT_056f11a8,auStack_20);
      Sexy::RtSerialRtonReader::ReadWString(pRVar4,(wstring *)param_3);
      FUN_054766c8(param_1,asStack_10);
      FUN_05476c50(asStack_10);
      FUN_05476c50(asStack_18);
      nop();
      break;
    case 2:
    case 5:
    case 6:
    case 7:
    case 8:
      uVar5 = *(undefined8 *)(this + 0x80);
      cVar1 = '\x01';
      goto LAB_05183934;
    case 3:
    case 4:
      cVar1 = '\x01';
      std::__exception_ptr::exception_ptr::exception_ptr
                ((exception_ptr *)asStack_18,(_func_void *)0x5183918);
      Sexy::RtSerialRtonReader::ReadRtId(pRVar4,(RtId *)param_3);
      Sexy::RtId::operator=(param_1,(RtId *)asStack_10);
      Sexy::RtId::~RtId((RtId *)asStack_10);
      Sexy::RtId::~RtId((RtId *)asStack_18);
    }
  }
  else {
    this_00 = (RtSerialRtonWriter *)FUN_0517e20c(*(undefined8 *)(param_2 + 8));
    uVar2 = FUN_0517eaac(*(undefined4 *)(this + 0x70));
    switch(uVar2) {
    case 0:
      Sexy::RtSerialRtonWriter::WriteString(this_00,param_3,param_1,false);
      break;
    case 1:
      Sexy::RtSerialRtonWriter::WriteUTF8String(this_00,param_3,param_1,false);
      break;
    case 2:
    case 5:
    case 6:
    case 7:
    case 8:
      uVar5 = *(undefined8 *)(this + 0x80);
LAB_05183934:
      plVar6 = (long *)FUN_0517eba8(uVar5);
      (**(code **)(*plVar6 + 0x10))(plVar6,param_1,param_2,param_3,uVar3);
      break;
    case 3:
    case 4:
      Sexy::RtSerialRtonWriter::WriteRtId(this_00,param_3,param_1);
      break;
    default:
      cVar1 = '\0';
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* Reflection::RCustomType::StaticGetClass() */

long * Reflection::RCustomType::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = RType::StaticGetClass();
  (*pcVar3)(plVar1,"Reflection::RCustomType",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RCustomType::GetClass() const */

long * Reflection::RCustomType::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = RType::StaticGetClass();
  (*pcVar3)(plVar1,"Reflection::RCustomType",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RCustomType::RCustomType() */

void __thiscall Reflection::RCustomType::RCustomType(RCustomType *this)

{
  RType::RType((RType *)this);
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined ***)this = &PTR_GetClass_06a2f350;
  return;
}


/* Reflection::RCustomType::StaticNew() */

RCustomType * Reflection::RCustomType::StaticNew(void)

{
  RCustomType *this;
  
  this = ::operator_new(0x88);
  RCustomType(this);
  return this;
}


/* Reflection::RCustomType::~RCustomType() */

void __thiscall Reflection::RCustomType::~RCustomType(RCustomType *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2f350;
  if (*(long **)(this + 0x80) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x80) + 8))();
  }
  *(undefined8 *)(this + 0x80) = 0;
  RType::~RType((RType *)this);
  return;
}


/* Reflection::RCustomType::~RCustomType() */

void __thiscall Reflection::RCustomType::~RCustomType(RCustomType *this)

{
  ~RCustomType(this);
  AK::FreeHook(this);
  return;
}

