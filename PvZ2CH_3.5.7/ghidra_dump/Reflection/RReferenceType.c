// Class: Reflection::RReferenceType


/* Reflection::RReferenceType::TypeEquals(Reflection::RType*, bool, bool) const */

bool __thiscall
Reflection::RReferenceType::TypeEquals
          (RReferenceType *this,RType *param_1,bool param_2,bool param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if ((param_1 != (RType *)0x0) &&
     (iVar3 = (**(code **)(*(long *)param_1 + 0x48))
                        (param_1,*(code **)(*(long *)param_1 + 0x48),param_2,param_3), iVar3 == 2))
  {
    iVar3 = FUN_0517e268(*(undefined4 *)(this + 0x68));
    iVar4 = FUN_0517e268(*(undefined4 *)(param_1 + 0x68));
    if (iVar3 == iVar4) {
      if (param_2) {
        cVar1 = FUN_0517e270(*(undefined4 *)(this + 100));
        cVar2 = FUN_0517e270(*(undefined4 *)(param_1 + 100));
        if (cVar1 != cVar2) {
          return false;
        }
      }
      iVar3 = FUN_0517e59c(*(undefined4 *)(this + 0x70));
      iVar4 = FUN_0517e59c(*(undefined4 *)(param_1 + 0x70));
      if (iVar3 == iVar4) {
        plVar5 = (long *)FUN_0517e5a0(*(undefined8 *)(this + 0x78));
        uVar6 = FUN_0517e5a0(*(undefined8 *)(param_1 + 0x78));
        cVar1 = (**(code **)(*plVar5 + 0x50))(plVar5,uVar6,param_2,param_3);
        if (cVar1 != '\0') {
          iVar3 = FUN_0517e59c(*(undefined4 *)(this + 0x70));
          if (iVar3 == 2) {
            iVar3 = FUN_0517e5a4(*(undefined4 *)(this + 0x80));
            iVar4 = FUN_0517e5a4(*(undefined4 *)(param_1 + 0x80));
            return iVar3 == iVar4;
          }
          return (bool)cVar1;
        }
      }
    }
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RReferenceType::InstanceNavigatePath(void*&, std::string&, Reflection::RType*&) const
    */

void __thiscall
Reflection::RReferenceType::InstanceNavigatePath
          (RReferenceType *this,void **param_1,string *param_2,RType **param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  RType *pRVar6;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  cVar1 = '\0';
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_0517e59c(*(undefined4 *)(this + 0x70));
  if (iVar2 == 2) {
    iVar2 = FUN_0517e5a4(*(undefined4 *)(this + 0x80));
    cVar1 = FUN_0547419c(param_2);
    if ((cVar1 == '\0') && (pcVar4 = (char *)FUN_05474ee8(param_2,0), *pcVar4 == '[')) {
      FUN_05475ffc(asStack_18,param_2,1,0xffffffffffffffff);
      lVar5 = FUN_054743b0(asStack_18,0x5d,0);
      cVar1 = '\0';
      if (lVar5 != -1) {
        FUN_05475ffc(asStack_10,asStack_18,0,lVar5);
        FUN_05474278(asStack_18,asStack_10);
        std::string::~string(asStack_10);
        pcVar4 = (char *)FUN_0547429c(asStack_18);
        iVar3 = atoi(pcVar4);
        if ((iVar3 < iVar2) && (-1 < iVar3)) {
          pRVar6 = (RType *)FUN_0517e5a0(*(undefined8 *)(this + 0x78));
          iVar2 = FUN_0517e268(*(undefined4 *)(pRVar6 + 0x68));
          *param_1 = (void *)((long)*param_1 + (ulong)(uint)(iVar2 * iVar3));
          FUN_05475ffc(asStack_10,param_2,lVar5 + 2,0xffffffffffffffff);
          FUN_05474278(param_2,asStack_10);
          std::string::~string(asStack_10);
          *param_3 = pRVar6;
          cVar1 = FUN_0547419c(param_2);
          if (cVar1 == '\0') {
            pcVar4 = (char *)FUN_05474ee8(param_2,0);
            if (*pcVar4 == '.') {
              FUN_05475ffc(asStack_10,param_2,1,0xffffffffffffffff);
              FUN_05474278(param_2,asStack_10);
              std::string::~string(asStack_10);
            }
            cVar1 = (**(code **)(*(long *)*param_3 + 0x70))(*param_3,param_1,param_2,param_3);
          }
        }
      }
      std::string::~string(asStack_18);
    }
    else {
      cVar1 = '\0';
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RReferenceType::TypeToString(bool) const */

void Reflection::RReferenceType::TypeToString(bool param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  char in_w1;
  string asStack_10 [8];
  long local_8;
  
  uVar4 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  Set8BytesTo0();
  plVar5 = (long *)FUN_0517e5a0(*(undefined8 *)(uVar4 + 0x78));
  if (plVar5 == (long *)0x0) {
    std::string::string(asStack_10,"FIXME_REFTYPE_NULLINNERTYPE");
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
    nop();
  }
  else {
    (**(code **)(*plVar5 + 0x58))(asStack_10,plVar5,in_w1);
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
  }
  if ((in_w1 == '\0') || (cVar1 = FUN_0517e270(*(undefined4 *)(uVar4 + 100)), cVar1 == '\0')) {
    iVar2 = FUN_0517e59c(*(undefined4 *)(uVar4 + 0x70));
  }
  else {
    FUN_05475ad8();
    iVar2 = FUN_0517e59c(*(undefined4 *)(uVar4 + 0x70));
  }
  if (iVar2 == 1) {
    FUN_05475ad8();
  }
  else if (iVar2 == 0) {
    FUN_05475ad8();
  }
  else if (iVar2 == 2) {
    FUN_05475ad8();
    uVar3 = FUN_0517e5a4(*(undefined4 *)(uVar4 + 0x80));
    if (uVar3 != 0) {
      Sexy::StrFormat("%d",asStack_10,(ulong)uVar3);
      thunk_FUN_054757c0();
      std::string::~string(asStack_10);
    }
    FUN_05475ad8();
  }
  else {
    FUN_05475ad8();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Reflection::RReferenceType::GetTypeCategory() const */

undefined8 Reflection::RReferenceType::GetTypeCategory(void)

{
  return 2;
}


/* Reflection::RReferenceType::GetArrayElement(void const*, int) const */

long __thiscall
Reflection::RReferenceType::GetArrayElement(RReferenceType *this,void *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_0517e59c(*(undefined4 *)(this + 0x70));
  if (iVar1 == 2) {
    lVar2 = FUN_0517e5a0(*(undefined8 *)(this + 0x78));
    iVar1 = FUN_0517e268(*(undefined4 *)(lVar2 + 0x68));
    if ((-1 < param_2) && ((uint)param_2 <= iVar1 - 1U)) {
      return (long)param_1 + (ulong)(uint)(iVar1 * param_2);
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RReferenceType::InstanceToString(void const*, unsigned int, unsigned int) const */

void Reflection::RReferenceType::InstanceToString(void *param_1,uint param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  int *piVar7;
  int in_w3;
  string *in_x8;
  long lVar8;
  int iVar9;
  uint unaff_s13;
  int local_1c;
  string asStack_18 [8];
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_18);
  plVar6 = (long *)FUN_0517e5a0(*(undefined8 *)((long)param_1 + 0x78));
  uVar2 = FUN_0517e268((int)plVar6[0xd]);
  iVar3 = FUN_0517e59c(*(undefined4 *)((long)param_1 + 0x70));
  if (iVar3 == 2) {
    FUN_05475ad8(asStack_18,&DAT_05593308);
    local_10[0] = FUN_0517e5a4(*(undefined4 *)((long)param_1 + 0x80));
    local_10[0] = local_10[0] - param_3;
    piVar7 = eastl::min_alt<int>(&local_1c,local_10);
    iVar3 = *piVar7;
    uVar5 = CRefSymbolDb::HasStringFlags(1);
    unaff_s13 = uVar5 & 0xff ^ 1;
    CRefSymbolDb::AddStringFlags(1);
    if (0 < iVar3) {
      lVar8 = (long)(ulong)param_2 + (ulong)(uVar2 * param_3);
      goto LAB_05182354;
    }
LAB_05182460:
    iVar3 = FUN_0517e59c(*(undefined4 *)((long)param_1 + 0x70));
    if (iVar3 == 2) {
      iVar3 = FUN_0517e5a4(*(undefined4 *)((long)param_1 + 0x80));
      if (in_w3 < (int)(iVar3 - param_3)) {
        FUN_05475ad8(asStack_18,", ...");
      }
      FUN_05475ad8(asStack_18,&DAT_05593350);
      if (unaff_s13 != 0) {
        CRefSymbolDb::RemoveStringFlags(1);
      }
    }
    FUN_05474148();
  }
  else {
    lVar8 = *(long *)(ulong)param_2;
    if (lVar8 != 0) {
      if (iVar3 == 1) {
        cVar1 = CRefSymbolDb::HasStringFlags(1);
        if (cVar1 == '\0') {
          Sexy::StrFormat("0x%p -> ",(string *)local_10,lVar8);
          thunk_FUN_054757c0(asStack_18,(string *)local_10);
          std::string::~string((string *)local_10);
        }
        else {
          FUN_05475ad8(asStack_18,&DAT_056e34c0);
        }
      }
      iVar3 = 1;
LAB_05182354:
      iVar9 = 0;
      do {
        iVar4 = (**(code **)(*plVar6 + 0x48))(plVar6);
        if (iVar4 == 1) {
          iVar4 = FUN_0517e278((int)plVar6[0xe]);
          if (iVar4 == 4) {
            Sexy::StrFormat("\"%s\"",(string *)local_10,lVar8);
          }
          else {
            if (iVar4 != 5) goto LAB_05182404;
            Sexy::StrFormat("\"%ls\"",(string *)local_10,lVar8);
          }
        }
        else {
          iVar4 = (**(code **)(*plVar6 + 0x48))(plVar6);
          if ((iVar4 == 2) && (iVar4 = FUN_0517e59c((int)plVar6[0xe]), iVar4 == 2)) {
            InstanceToString(plVar6,(uint)lVar8,0);
          }
          else {
LAB_05182404:
            (**(code **)(*plVar6 + 0x60))((string *)local_10,plVar6,lVar8);
          }
        }
        iVar9 = iVar9 + 1;
        lVar8 = lVar8 + (ulong)uVar2;
        thunk_FUN_054757c0(asStack_18,(string *)local_10);
        std::string::~string((string *)local_10);
        if (iVar3 <= iVar9) goto LAB_05182460;
        FUN_05475ad8(asStack_18,&DAT_05633b30);
      } while( true );
    }
    std::string::string(in_x8,"NULL");
    nop();
  }
  std::string::~string(asStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Reflection::RReferenceType::InstanceToString(void const*) const */

void Reflection::RReferenceType::InstanceToString(void *param_1)

{
  uint in_w1;
  
  InstanceToString(param_1,in_w1,0);
  return;
}


/* Reflection::RReferenceType::StaticGetClass() */

long * Reflection::RReferenceType::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Reflection::RReferenceType",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RReferenceType::GetClass() const */

long * Reflection::RReferenceType::GetClass(void)

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
  (*pcVar3)(plVar1,"Reflection::RReferenceType",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RReferenceType::RReferenceType() */

void __thiscall Reflection::RReferenceType::RReferenceType(RReferenceType *this)

{
  RType::RType((RType *)this);
  *(undefined ***)this = &PTR_GetClass_06a2f230;
  return;
}


/* Reflection::RReferenceType::StaticNew() */

RReferenceType * Reflection::RReferenceType::StaticNew(void)

{
  RReferenceType *this;
  
  this = ::operator_new(0x88);
  RReferenceType(this);
  return this;
}


/* Reflection::RReferenceType::~RReferenceType() */

void __thiscall Reflection::RReferenceType::~RReferenceType(RReferenceType *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2f230;
  RType::~RType((RType *)this);
  return;
}


/* Reflection::RReferenceType::~RReferenceType() */

void __thiscall Reflection::RReferenceType::~RReferenceType(RReferenceType *this)

{
  ~RReferenceType(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RReferenceType::InstanceRtonSync(void*, Sexy::RtSerialRtonSync*,
   Sexy::RtSerialRtonKey const&) const */

void __thiscall
Reflection::RReferenceType::InstanceRtonSync
          (RReferenceType *this,void *param_1,RtSerialRtonSync *param_2,RtSerialRtonKey *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  RtSerialRtonWriter *this_00;
  RtSerialRtonReader *this_01;
  uint *puVar7;
  wchar_t *__src;
  char *__src_00;
  uint uVar8;
  code *pcVar9;
  undefined1 auStack_20 [4];
  uint local_1c;
  uint local_18 [2];
  RtSerialRtonKey aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar5 = (long *)FUN_0517e5a0(*(undefined8 *)(this + 0x78));
  uVar6 = FUN_0517e268((int)plVar5[0xd]);
  cVar1 = FUN_0517e1fc(param_2[0x10]);
  if (cVar1 == '\0') {
    this_01 = (RtSerialRtonReader *)FUN_0517e208(*(undefined8 *)param_2);
    iVar2 = FUN_0517e59c(*(undefined4 *)(this + 0x70));
    if (iVar2 != 2) goto LAB_05191ce0;
    uVar3 = FUN_0517e5a4(*(undefined4 *)(this + 0x80));
    local_1c = uVar3;
    iVar2 = (**(code **)(*plVar5 + 0x48))(plVar5);
    if (iVar2 == 1) {
      iVar2 = FUN_0517e278((int)plVar5[0xe]);
      if (iVar2 == 4) {
        std::string::string((string *)aRStack_10,"");
        Sexy::RtSerialRtonReader::ReadString((RtSerialRtonKey *)this_01,(string *)param_3);
        std::string::~string((string *)aRStack_10);
        cVar1 = '\x01';
        nop();
        __src_00 = (char *)FUN_0547429c((string *)local_18);
        strncpy(param_1,__src_00,(ulong)uVar3);
        std::string::~string((string *)local_18);
        goto LAB_05191ce0;
      }
      if (iVar2 == 5) {
        FUN_05478178(aRStack_10,&DAT_056f11a8,auStack_20);
        Sexy::RtSerialRtonReader::ReadWString((RtSerialRtonKey *)this_01,(wstring *)param_3);
        FUN_05476c50(aRStack_10);
        cVar1 = '\x01';
        nop();
        __src = (wchar_t *)FUN_054766ec(local_18);
        wcsncpy(param_1,__src,(ulong)uVar3);
        FUN_05476c50(local_18);
        goto LAB_05191ce0;
      }
    }
    local_18[0] = 0;
    Sexy::RtSerialRtonReader::BeginArray(this_01,param_3,local_18);
    puVar7 = eastl::min_alt<unsigned_int>(&local_1c,local_18);
    uVar3 = *puVar7;
    local_1c = uVar3;
    if (uVar3 != 0) {
      uVar8 = 0;
      do {
        uVar8 = uVar8 + 1;
        pcVar9 = *(code **)(*plVar5 + 0x68);
        Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_10,(char *)0x0);
        (*pcVar9)(plVar5,param_1,param_2,aRStack_10);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
        param_1 = (void *)((long)param_1 + (uVar6 & 0xffffffff));
      } while (uVar8 != uVar3);
    }
    cVar1 = '\x01';
    Sexy::RtSerialRtonReader::EndArray(this_01);
    goto LAB_05191ce0;
  }
  this_00 = (RtSerialRtonWriter *)FUN_0517e20c(*(undefined8 *)(param_2 + 8));
  iVar2 = FUN_0517e59c(*(undefined4 *)(this + 0x70));
  if ((iVar2 == 2) || (param_1 = *(void **)param_1, param_1 != (wchar_t *)0x0)) {
    iVar2 = (**(code **)(*plVar5 + 0x48))(plVar5);
    if (iVar2 == 1) {
      iVar2 = FUN_0517e278((int)plVar5[0xe]);
      if (iVar2 == 4) {
        Sexy::RtSerialRtonWriter::WriteString(this_00,param_3,param_1,false);
        goto LAB_05191ce0;
      }
      if (iVar2 == 5) {
        Sexy::RtSerialRtonWriter::WriteUTF8String(this_00,param_3,param_1,false);
        goto LAB_05191ce0;
      }
    }
    iVar2 = FUN_0517e59c(*(undefined4 *)(this + 0x70));
    if (iVar2 == 2) {
      iVar2 = 0;
      iVar4 = FUN_0517e5a4(*(undefined4 *)(this + 0x80));
      Sexy::RtSerialRtonWriter::BeginArray(this_00,param_3,iVar4,0xfd);
      if (0 < iVar4) {
        do {
          iVar2 = iVar2 + 1;
          pcVar9 = *(code **)(*plVar5 + 0x68);
          Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_10,(char *)0x0);
          (*pcVar9)(plVar5,param_1,param_2,aRStack_10);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
          param_1 = (wchar_t *)((long)param_1 + (uVar6 & 0xffffffff));
        } while (iVar4 != iVar2);
      }
      Sexy::RtSerialRtonWriter::EndArray(this_00);
      goto LAB_05191ce0;
    }
  }
  cVar1 = '\0';
LAB_05191ce0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}

