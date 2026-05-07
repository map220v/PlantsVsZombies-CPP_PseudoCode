// Class: Reflection::RNamedType


/* Reflection::RNamedType::StaticNew() */

undefined8 Reflection::RNamedType::StaticNew(void)

{
  return 0;
}


/* Reflection::RNamedType::GetName() const */

void __thiscall Reflection::RNamedType::GetName(RNamedType *this)

{
  FUN_0547429c(this + 0x70);
  return;
}


/* Reflection::RNamedType::TypeEquals(Reflection::RType*, bool, bool) const */

bool Reflection::RNamedType::TypeEquals(RType *param_1,bool param_2,bool param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  char *__s1;
  char *__s2;
  RNamedType *this;
  
  this = (RNamedType *)(ulong)param_2;
  if ((this != (RNamedType *)0x0) &&
     (uVar5 = (**(code **)(*(long *)this + 0x48))(this), (uVar5 & 0x1f0) != 0)) {
    iVar3 = FUN_0517e268(*(undefined4 *)(param_1 + 0x68));
    iVar4 = FUN_0517e268(*(undefined4 *)(this + 0x68));
    if (iVar3 == iVar4) {
      if (param_3) {
        cVar1 = FUN_0517e270(*(undefined4 *)(param_1 + 100));
        cVar2 = FUN_0517e270(*(undefined4 *)(this + 100));
        if (cVar1 != cVar2) {
          return false;
        }
      }
      __s1 = (char *)GetName((RNamedType *)param_1);
      __s2 = (char *)GetName(this);
      iVar3 = strcmp(__s1,__s2);
      return iVar3 == 0;
    }
  }
  return false;
}


/* Reflection::RNamedType::InstanceToString(void const*) const */

void __thiscall Reflection::RNamedType::InstanceToString(RNamedType *this,void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = GetName(this);
  Sexy::StrFormat("(%s)",uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RNamedType::InstanceRtonSync(void*, Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey
   const&) const */

void __thiscall
Reflection::RNamedType::InstanceRtonSync
          (RNamedType *this,void *param_1,RtSerialRtonSync *param_2,RtSerialRtonKey *param_3)

{
  char cVar1;
  RtSerialRtonWriter *this_00;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0517e1fc(param_2[0x10]);
  if (cVar1 != '\0') {
    this_00 = (RtSerialRtonWriter *)FUN_0517e20c(*(undefined8 *)(param_2 + 8));
    uVar2 = GetName(this);
    Sexy::StrFormat("(%s)",asStack_10,uVar2);
    Sexy::RtSerialRtonWriter::WriteString(this_00,param_3,asStack_10,true);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* Reflection::RNamedType::TypeToString(bool) const */

void Reflection::RNamedType::TypeToString(bool param_1)

{
  char cVar1;
  char *pcVar2;
  char in_w1;
  size_t in_x2;
  string *in_x8;
  
  Set8BytesTo0();
  if ((in_w1 != '\0') &&
     (cVar1 = FUN_0517e270(*(undefined4 *)((RNamedType *)(ulong)param_1 + 100)), cVar1 != '\0')) {
    std::string::append(in_x8,"const ",in_x2);
  }
  pcVar2 = (char *)GetName((RNamedType *)(ulong)param_1);
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    FUN_05475ad8();
    return;
  }
  FUN_05475ad8();
  return;
}


/* Reflection::RNamedType::StaticGetClass() */

long * Reflection::RNamedType::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Reflection::RNamedType",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RNamedType::GetClass() const */

long * Reflection::RNamedType::GetClass(void)

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
  (*pcVar3)(plVar1,"Reflection::RNamedType",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RNamedType::RNamedType() */

void __thiscall Reflection::RNamedType::RNamedType(RNamedType *this)

{
  RType::RType((RType *)this);
  *(undefined ***)this = &PTR_GetClass_06a2f3e0;
  Set8BytesTo0(this + 0x70);
  return;
}


/* Reflection::RNamedType::~RNamedType() */

void __thiscall Reflection::RNamedType::~RNamedType(RNamedType *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2f3e0;
  std::string::~string((string *)(this + 0x70));
  RType::~RType((RType *)this);
  return;
}


/* Reflection::RNamedType::~RNamedType() */

void __thiscall Reflection::RNamedType::~RNamedType(RNamedType *this)

{
  ~RNamedType(this);
  AK::FreeHook(this);
  return;
}

