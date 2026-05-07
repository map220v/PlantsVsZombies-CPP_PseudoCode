// Class: Reflection::RSimpleType


/* Reflection::RSimpleType::GetTypeCategory() const */

undefined8 Reflection::RSimpleType::GetTypeCategory(void)

{
  return 1;
}


/* Reflection::RSimpleType::TypeEquals(Reflection::RType*, bool, bool) const */

bool Reflection::RSimpleType::TypeEquals(RType *param_1,bool param_2,bool param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)(ulong)param_2;
  if ((plVar5 != (long *)0x0) && (iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5), iVar3 == 1)) {
    iVar3 = FUN_0517e268(*(undefined4 *)(param_1 + 0x68));
    iVar4 = FUN_0517e268((int)plVar5[0xd]);
    if (iVar3 == iVar4) {
      if (param_3) {
        cVar1 = FUN_0517e270(*(undefined4 *)(param_1 + 100));
        cVar2 = FUN_0517e270(*(undefined4 *)((long)plVar5 + 100));
        if (cVar1 != cVar2) {
          return false;
        }
      }
      iVar3 = FUN_0517e278(*(undefined4 *)(param_1 + 0x70));
      iVar4 = FUN_0517e278((int)plVar5[0xe]);
      return iVar3 == iVar4;
    }
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RSimpleType::TypeToString(bool) const */

void Reflection::RSimpleType::TypeToString(bool param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  char *pcVar5;
  char in_w1;
  size_t in_x2;
  string *in_x8;
  string asStack_10 [8];
  long local_8;
  
  uVar4 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  Set8BytesTo0();
  if ((in_w1 != '\0') && (cVar1 = FUN_0517e270(*(undefined4 *)(uVar4 + 100)), cVar1 != '\0')) {
    std::string::append(in_x8,"const ",in_x2);
  }
  iVar2 = FUN_0517e278(*(undefined4 *)(uVar4 + 0x70));
  switch(iVar2) {
  case 1:
    FUN_05475ad8();
    break;
  case 2:
    FUN_05475ad8();
    break;
  case 3:
    FUN_05475ad8();
    break;
  case 4:
switchD_0517e414_caseD_4:
    FUN_05475ad8();
    break;
  case 5:
    FUN_05475ad8();
    break;
  case 6:
  case 7:
    if (iVar2 == 7) {
      FUN_05475ad8();
    }
    uVar3 = FUN_0517e268(*(undefined4 *)(uVar4 + 0x68));
    uVar4 = (ulong)uVar3;
    switch(uVar3) {
    case 1:
      goto switchD_0517e414_caseD_4;
    case 2:
      FUN_05475ad8();
      break;
    default:
      pcVar5 = "FIXME_UNKINT%d";
      goto LAB_0517e3c0;
    case 4:
      FUN_05475ad8();
      break;
    case 8:
      FUN_05475ad8();
    }
    break;
  case 8:
    uVar3 = FUN_0517e268(*(undefined4 *)(uVar4 + 0x68));
    uVar4 = (ulong)uVar3;
    if (uVar3 == 4) {
      FUN_05475ad8();
      break;
    }
    if (uVar3 == 8) {
      FUN_05475ad8();
      break;
    }
    pcVar5 = "FIXME_UNKFLT%d";
    goto LAB_0517e3c0;
  case 9:
    FUN_05475ad8();
    break;
  default:
    uVar4 = FUN_0517e268(*(undefined4 *)(uVar4 + 0x68));
    uVar4 = uVar4 & 0xffffffff;
    pcVar5 = "FIXME_UNK%d";
LAB_0517e3c0:
    Sexy::StrFormat(pcVar5,asStack_10,uVar4);
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RSimpleType::InstanceToString(void const*, bool) const */

void Reflection::RSimpleType::InstanceToString(void *param_1,bool param_2)

{
  undefined4 uVar1;
  uint uVar2;
  char *pcVar3;
  float *pfVar4;
  ulong uVar5;
  char in_w2;
  string asStack_10 [8];
  long local_8;
  
  pfVar4 = (float *)(ulong)param_2;
  local_8 = ___stack_chk_guard;
  Set8BytesTo0();
  uVar1 = FUN_0517e278(*(undefined4 *)((long)param_1 + 0x70));
  switch(uVar1) {
  case 1:
    FUN_05475ad8();
    goto LAB_051813c4;
  case 2:
    FUN_05475ad8();
    goto LAB_051813c4;
  case 3:
    FUN_05475ad8();
    goto LAB_051813c4;
  case 4:
    uVar5 = (ulong)*(byte *)pfVar4;
    pcVar3 = "%c";
    break;
  case 5:
    uVar5 = (ulong)(uint)*pfVar4;
    pcVar3 = "%C";
    break;
  case 6:
    if (in_w2 == '\0') {
      uVar2 = FUN_0517e268(*(undefined4 *)((long)param_1 + 0x68));
      switch(uVar2) {
      case 1:
        uVar5 = (ulong)*(char *)pfVar4;
        pcVar3 = "%d";
        goto LAB_05181454;
      case 2:
        uVar5 = (ulong)*(short *)pfVar4;
        pcVar3 = "%d";
        goto LAB_05181454;
      default:
        goto switchD_051815e4_caseD_3;
      case 4:
        Sexy::StrFormat("%d",asStack_10,*(undefined8 *)pfVar4);
        break;
      case 8:
switchD_051815a0_caseD_8:
        Sexy::StrFormat("%li",asStack_10,*(undefined8 *)pfVar4);
      }
      goto LAB_05181458;
    }
    uVar2 = FUN_0517e268(*(undefined4 *)((long)param_1 + 0x68));
    switch(uVar2) {
    case 1:
      uVar5 = (ulong)*(char *)pfVar4;
      pcVar3 = "0x%02x";
      break;
    case 2:
      uVar5 = (ulong)*(short *)pfVar4;
      pcVar3 = "0x%04x";
      break;
    default:
switchD_051815e4_caseD_3:
      uVar5 = (ulong)uVar2;
      pcVar3 = "?STC_SInt%d?";
      break;
    case 4:
      Sexy::StrFormat("0x%08x",asStack_10,*(undefined8 *)pfVar4);
      goto LAB_05181458;
    case 8:
switchD_051815cc_caseD_8:
      Sexy::StrFormat("0x%016I64x",asStack_10,*(undefined8 *)pfVar4);
      goto LAB_05181458;
    }
    break;
  case 7:
    if (in_w2 == '\0') {
      uVar2 = FUN_0517e268(*(undefined4 *)((long)param_1 + 0x68));
      switch(uVar2) {
      case 1:
        uVar5 = (ulong)*(byte *)pfVar4;
        pcVar3 = "%d";
        break;
      case 2:
        uVar5 = (ulong)*(ushort *)pfVar4;
        pcVar3 = "%d";
        break;
      default:
        goto switchD_051815cc_caseD_3;
      case 4:
        uVar5 = (ulong)(uint)*pfVar4;
        pcVar3 = "%d";
        break;
      case 8:
        goto switchD_051815a0_caseD_8;
      }
    }
    else {
      uVar2 = FUN_0517e268(*(undefined4 *)((long)param_1 + 0x68));
      switch(uVar2) {
      case 1:
        uVar5 = (ulong)*(byte *)pfVar4;
        pcVar3 = "0x%02x";
        break;
      case 2:
        uVar5 = (ulong)*(ushort *)pfVar4;
        pcVar3 = "0x%04x";
        break;
      default:
switchD_051815cc_caseD_3:
        uVar5 = (ulong)uVar2;
        pcVar3 = "?STC_UInt%d?";
        break;
      case 4:
        goto switchD_051815cc_caseD_4;
      case 8:
        goto switchD_051815cc_caseD_8;
      }
    }
    break;
  case 8:
    uVar2 = FUN_0517e268(*(undefined4 *)((long)param_1 + 0x68));
    uVar5 = (ulong)uVar2;
    if (uVar2 == 4) {
      Sexy::StrFormat("%f",asStack_10,(double)*pfVar4,4);
    }
    else {
      if (uVar2 != 8) {
        pcVar3 = "?STC_Float%d?";
        break;
      }
      Sexy::StrFormat("%f",asStack_10,*(undefined8 *)pfVar4,8);
    }
    goto LAB_05181458;
  case 9:
switchD_051815cc_caseD_4:
    uVar5 = (ulong)(uint)*pfVar4;
    pcVar3 = "0x%08x";
    break;
  default:
    FUN_05475ad8();
    goto LAB_051813c4;
  }
LAB_05181454:
  Sexy::StrFormat(pcVar3,asStack_10,uVar5);
LAB_05181458:
  thunk_FUN_054757c0();
  std::string::~string(asStack_10);
LAB_051813c4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Reflection::RSimpleType::InstanceToString(void const*) const */

void Reflection::RSimpleType::InstanceToString(void *param_1)

{
  bool in_w1;
  
  InstanceToString(param_1,in_w1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RSimpleType::InstanceRtonSync(void*, Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey
   const&) const */

void __thiscall
Reflection::RSimpleType::InstanceRtonSync
          (RSimpleType *this,void *param_1,RtSerialRtonSync *param_2,RtSerialRtonKey *param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  RtSerialRtonWriter *this_00;
  RtSerialRtonReader *this_01;
  char *pcVar7;
  ulong uVar8;
  undefined8 uVar9;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0517e1fc(param_2[0x10]);
  if (cVar1 == '\0') {
    this_01 = (RtSerialRtonReader *)FUN_0517e208(*(undefined8 *)param_2);
    uVar4 = FUN_0517e278(*(undefined4 *)(this + 0x70));
    switch(uVar4) {
    case 3:
      cVar1 = '\x01';
      uVar2 = Sexy::RtSerialRtonReader::ReadBool(this_01,param_3,false);
      *(undefined1 *)param_1 = uVar2;
      break;
    case 4:
switchD_051833a4_caseD_4:
      cVar1 = '\x01';
      uVar2 = Sexy::RtSerialRtonReader::ReadUInt32(this_01,param_3,0);
      *(undefined1 *)param_1 = uVar2;
      break;
    case 5:
    case 9:
switchD_051833a4_caseD_5:
      cVar1 = '\x01';
      uVar4 = Sexy::RtSerialRtonReader::ReadUInt32(this_01,param_3,0);
      *(undefined4 *)param_1 = uVar4;
      break;
    case 6:
      uVar4 = FUN_0517e268(*(undefined4 *)(this + 0x68));
      switch(uVar4) {
      case 1:
        cVar1 = '\x01';
        uVar2 = Sexy::RtSerialRtonReader::ReadInt32(this_01,param_3,0);
        *(undefined1 *)param_1 = uVar2;
        break;
      case 2:
        cVar1 = '\x01';
        uVar3 = Sexy::RtSerialRtonReader::ReadInt32(this_01,param_3,0);
        *(undefined2 *)param_1 = uVar3;
        break;
      case 4:
        cVar1 = '\x01';
        uVar4 = Sexy::RtSerialRtonReader::ReadInt32(this_01,param_3,0);
        *(undefined4 *)param_1 = uVar4;
        break;
      case 8:
        cVar1 = '\x01';
        uVar9 = Sexy::RtSerialRtonReader::ReadInt64(this_01,param_3,0);
        *(undefined8 *)param_1 = uVar9;
      }
      break;
    case 7:
      uVar4 = FUN_0517e268(*(undefined4 *)(this + 0x68));
      switch(uVar4) {
      case 1:
        goto switchD_051833a4_caseD_4;
      case 2:
        cVar1 = '\x01';
        uVar3 = Sexy::RtSerialRtonReader::ReadUInt32(this_01,param_3,0);
        *(undefined2 *)param_1 = uVar3;
        break;
      case 4:
        goto switchD_051833a4_caseD_5;
      case 8:
        cVar1 = '\x01';
        uVar9 = Sexy::RtSerialRtonReader::ReadUInt64(this_01,param_3,0);
        *(undefined8 *)param_1 = uVar9;
      }
      break;
    case 8:
      iVar6 = FUN_0517e268(*(undefined4 *)(this + 0x68));
      if (iVar6 == 4) {
        cVar1 = '\x01';
        uVar4 = Sexy::RtSerialRtonReader::ReadFloat((RtSerialRtonKey *)this_01,0.0);
        *(undefined4 *)param_1 = uVar4;
      }
      else if (iVar6 == 8) {
        cVar1 = '\x01';
        uVar9 = Sexy::RtSerialRtonReader::ReadDouble((RtSerialRtonKey *)this_01,0.0);
        *(undefined8 *)param_1 = uVar9;
      }
    }
    goto switchD_051833a4_default;
  }
  this_00 = (RtSerialRtonWriter *)FUN_0517e20c(*(undefined8 *)(param_2 + 8));
  uVar4 = FUN_0517e278(*(undefined4 *)(this + 0x70));
  switch(uVar4) {
  case 1:
    Sexy::RtSerialRtonWriter::WriteString(this_00,param_3,"...",false);
    break;
  case 2:
    Sexy::RtSerialRtonWriter::WriteString(this_00,param_3,"void",false);
    break;
  case 3:
    Sexy::RtSerialRtonWriter::WriteBool(this_00,param_3,*(bool *)param_1);
    break;
  case 4:
    Sexy::RtSerialRtonWriter::WriteUInt32(this_00,param_3,(uint)*(byte *)param_1);
    break;
  case 5:
  case 9:
switchD_051833bc_caseD_5:
    Sexy::RtSerialRtonWriter::WriteUInt32(this_00,param_3,*(uint *)param_1);
    break;
  case 6:
    uVar5 = FUN_0517e268(*(undefined4 *)(this + 0x68));
    uVar8 = (ulong)uVar5;
    switch(uVar5) {
    case 1:
      Sexy::RtSerialRtonWriter::WriteInt8Fixed(this_00,param_3,*(undefined1 *)param_1);
      break;
    case 2:
      Sexy::RtSerialRtonWriter::WriteInt16Fixed(this_00,param_3,*(short *)param_1);
      break;
    default:
      pcVar7 = "?STC_SInt%d?";
      goto LAB_051834d4;
    case 4:
      Sexy::RtSerialRtonWriter::WriteInt32(this_00,param_3,*(int *)param_1);
      break;
    case 8:
      Sexy::RtSerialRtonWriter::WriteInt64(this_00,param_3,*(long *)param_1);
    }
    break;
  case 7:
    uVar5 = FUN_0517e268(*(undefined4 *)(this + 0x68));
    uVar8 = (ulong)uVar5;
    switch(uVar5) {
    case 1:
      Sexy::RtSerialRtonWriter::WriteUInt8Fixed(this_00,param_3,*(uchar *)param_1);
      break;
    case 2:
      Sexy::RtSerialRtonWriter::WriteUInt16Fixed(this_00,param_3,*(ushort *)param_1);
      break;
    default:
      pcVar7 = "?STC_UInt%d?";
      goto LAB_051834d4;
    case 4:
      goto switchD_051833bc_caseD_5;
    case 8:
      Sexy::RtSerialRtonWriter::WriteUInt64(this_00,param_3,*(ulong *)param_1);
    }
    break;
  case 8:
    uVar5 = FUN_0517e268(*(undefined4 *)(this + 0x68));
    uVar8 = (ulong)uVar5;
    if (uVar5 == 4) {
      Sexy::RtSerialRtonWriter::WriteFloat(this_00,param_3,*(float *)param_1);
      break;
    }
    if (uVar5 == 8) {
      Sexy::RtSerialRtonWriter::WriteDouble(this_00,param_3,*(double *)param_1);
      break;
    }
    pcVar7 = "?STC_Float%d?";
LAB_051834d4:
    Sexy::StrFormat(pcVar7,asStack_10,uVar8);
    Sexy::RtSerialRtonWriter::WriteString(this_00,param_3,asStack_10,false);
    std::string::~string(asStack_10);
    break;
  default:
    Sexy::RtSerialRtonWriter::WriteString(this_00,param_3,"?STC_Unknown?",false);
  }
switchD_051833a4_default:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* Reflection::RSimpleType::StaticGetClass() */

long * Reflection::RSimpleType::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Reflection::RSimpleType",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RSimpleType::GetClass() const */

long * Reflection::RSimpleType::GetClass(void)

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
  (*pcVar3)(plVar1,"Reflection::RSimpleType",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RSimpleType::RSimpleType() */

void __thiscall Reflection::RSimpleType::RSimpleType(RSimpleType *this)

{
  RType::RType((RType *)this);
  *(undefined ***)this = &PTR_GetClass_06a2f1a0;
  return;
}


/* Reflection::RSimpleType::StaticNew() */

RSimpleType * Reflection::RSimpleType::StaticNew(void)

{
  RSimpleType *this;
  
  this = ::operator_new(0x78);
  RSimpleType(this);
  return this;
}


/* Reflection::RSimpleType::~RSimpleType() */

void __thiscall Reflection::RSimpleType::~RSimpleType(RSimpleType *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2f1a0;
  RType::~RType((RType *)this);
  return;
}


/* Reflection::RSimpleType::~RSimpleType() */

void __thiscall Reflection::RSimpleType::~RSimpleType(RSimpleType *this)

{
  ~RSimpleType(this);
  AK::FreeHook(this);
  return;
}

