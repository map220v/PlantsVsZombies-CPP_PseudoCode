// Class: Reflection::REnum


/* Reflection::REnum::StaticGetTypeCategory() */

undefined8 Reflection::REnum::StaticGetTypeCategory(void)

{
  return 0x80;
}


/* Reflection::REnum::GetTypeCategory() const */

undefined8 Reflection::REnum::GetTypeCategory(void)

{
  return 0x80;
}


/* Reflection::REnum::LoadEnum() */

void __thiscall Reflection::REnum::LoadEnum(REnum *this)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(long **)(*(long *)(this + 0x78) + 0xf0) + 0x10);
  if (pcVar1 != CRefManualSymbolBuilder::BuildEnum) {
    (*pcVar1)(*(long **)(*(long *)(this + 0x78) + 0xf0),this);
  }
  return;
}


/* Reflection::REnum::StaticGetClass() */

long * Reflection::REnum::StaticGetClass(void)

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
  uVar2 = RNamedType::StaticGetClass();
  (*pcVar3)(plVar1,"Reflection::REnum",uVar2,StaticNew);
  return sClass;
}


/* Reflection::REnum::GetClass() const */

long * Reflection::REnum::GetClass(void)

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
  uVar2 = RNamedType::StaticGetClass();
  (*pcVar3)(plVar1,"Reflection::REnum",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::REnum::InstanceToString(void const*) const */

void Reflection::REnum::InstanceToString(void *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  CRefNamedSymbolCollection *this;
  RAttribute *pRVar5;
  undefined8 uVar6;
  TRefNamedSymbolCollection<Reflection::REnumMember> *this_00;
  char *__s;
  uint *in_x1;
  size_t in_x2;
  string *in_x8;
  uint uVar7;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_0517ebb8(*(undefined4 *)((long)param_1 + 0x84));
  if (cVar2 == '\0') {
    this_00 = (TRefNamedSymbolCollection<Reflection::REnumMember> *)
              ZombieType::GetAudioGroups(param_1);
    pRVar5 = (RAttribute *)
             TRefNamedSymbolCollection<Reflection::REnumMember>::GetByValue(this_00,*in_x1);
    if (pRVar5 == (RAttribute *)0x0) {
      Sexy::StrFormat("%d",(ulong)*in_x1);
    }
    else {
      __s = (char *)RAttribute::GetName(pRVar5);
      std::string::string(in_x8,__s);
      nop();
    }
  }
  else {
    uVar1 = *in_x1;
    uVar7 = 0;
    Set8BytesTo0(asStack_10);
    this = (CRefNamedSymbolCollection *)ZombieType::GetAudioGroups(param_1);
    uVar3 = CRefNamedSymbolCollection::GetCount(this);
    if (uVar3 != 0) {
      do {
        pRVar5 = (RAttribute *)
                 TRefNamedSymbolCollection<Reflection::RType>::GetIndexed
                           ((TRefNamedSymbolCollection<Reflection::RType> *)this,uVar7);
        uVar4 = FUN_0517ebb4(*(undefined4 *)(pRVar5 + 0x68));
        if (((uVar4 & uVar1) != 0) && ((uVar4 - 1 & uVar4) == 0)) {
          cVar2 = FUN_0547419c(asStack_10);
          if (cVar2 == '\0') {
            FUN_05475ad8(asStack_10,&DAT_055e9e80);
          }
          uVar6 = RAttribute::GetName(pRVar5);
          FUN_05475ad8(asStack_10,uVar6);
          uVar3 = CRefNamedSymbolCollection::GetCount(this);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar3);
    }
    cVar2 = FUN_0547419c(asStack_10);
    if (cVar2 != '\0') {
      std::string::append(asStack_10,"0",in_x2);
    }
    FUN_05474148();
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::REnum::InstanceRtonSync(void*, Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey const&)
   const */

void __thiscall
Reflection::REnum::InstanceRtonSync
          (REnum *this,void *param_1,RtSerialRtonSync *param_2,RtSerialRtonKey *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  RtSerialRtonWriter *this_00;
  CRefNamedSymbolCollection *this_01;
  RAttribute *pRVar6;
  undefined8 uVar7;
  RtSerialRtonKey *pRVar8;
  TRefNamedSymbolCollection<Reflection::RAncestor> *pTVar9;
  long lVar10;
  TRefNamedSymbolCollection<Reflection::REnumMember> *this_02;
  char *pcVar11;
  long lVar12;
  string *extraout_x1;
  string *extraout_x1_00;
  uint uVar13;
  undefined1 auVar14 [16];
  Sexy aSStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0517e1fc(param_2[0x10]);
  if (cVar1 == '\0') {
    pRVar8 = (RtSerialRtonKey *)FUN_0517e208(*(undefined8 *)param_2);
    cVar1 = FUN_0517ebb8(*(undefined4 *)(this + 0x84));
    if (cVar1 == '\0') {
      std::string::string(asStack_18,"");
      Sexy::RtSerialRtonReader::ReadString(pRVar8,(string *)param_3);
      Sexy::Trim((Sexy *)asStack_10,extraout_x1_00);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      nop();
      pTVar9 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)
               ZombieType::GetAudioGroups((ZombieType *)this);
      lVar12 = TRefNamedSymbolCollection<Reflection::RAncestor>::GetNamed
                         (pTVar9,(string *)aSStack_20);
      if (lVar12 == 0) {
        pcVar11 = (char *)FUN_0547429c((string *)aSStack_20);
        iVar5 = atoi(pcVar11);
        *(int *)param_1 = iVar5;
      }
      else {
        uVar4 = FUN_0517ebb4(*(undefined4 *)(lVar12 + 0x68));
        *(undefined4 *)param_1 = uVar4;
      }
      std::string::~string((string *)aSStack_20);
    }
    else {
      std::string::string(asStack_10,"");
      Sexy::RtSerialRtonReader::ReadString(pRVar8,(string *)param_3);
      std::string::~string(asStack_10);
      nop();
      pTVar9 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)
               ZombieType::GetAudioGroups((ZombieType *)this);
      while (auVar14 = FUN_054743b0(aSStack_20,0x7c,0), lVar12 = auVar14._0_8_, lVar12 != -1) {
        FUN_05475ffc(asStack_10,aSStack_20,0,lVar12);
        Sexy::Trim((Sexy *)asStack_10,extraout_x1);
        std::string::~string(asStack_10);
        lVar10 = TRefNamedSymbolCollection<Reflection::RAncestor>::GetNamed(pTVar9,asStack_18);
        if (lVar10 == 0) {
          pcVar11 = (char *)FUN_0547429c(asStack_18);
          iVar5 = atoi(pcVar11);
          *(int *)param_1 = iVar5;
        }
        else {
          uVar4 = FUN_0517ebb4(*(undefined4 *)(lVar10 + 0x68));
          *(undefined4 *)param_1 = uVar4;
        }
        FUN_05475ffc(asStack_10,aSStack_20,lVar12 + 1,0xffffffffffffffff);
        FUN_05474278(aSStack_20,asStack_10);
        std::string::~string(asStack_10);
        std::string::~string(asStack_18);
      }
      Sexy::Trim(aSStack_20,auVar14._8_8_);
      lVar12 = TRefNamedSymbolCollection<Reflection::RAncestor>::GetNamed(pTVar9,asStack_10);
      if (lVar12 == 0) {
        pcVar11 = (char *)FUN_0547429c(asStack_10);
        iVar5 = atoi(pcVar11);
        *(int *)param_1 = iVar5;
      }
      else {
        uVar4 = FUN_0517ebb4(*(undefined4 *)(lVar12 + 0x68));
        *(undefined4 *)param_1 = uVar4;
      }
      std::string::~string(asStack_10);
      std::string::~string((string *)aSStack_20);
    }
  }
  else {
    this_00 = (RtSerialRtonWriter *)FUN_0517e20c(*(undefined8 *)(param_2 + 8));
    cVar1 = FUN_0517ebb8(*(undefined4 *)(this + 0x84));
    if (cVar1 == '\0') {
      this_02 = (TRefNamedSymbolCollection<Reflection::REnumMember> *)
                ZombieType::GetAudioGroups((ZombieType *)this);
      pRVar6 = (RAttribute *)
               TRefNamedSymbolCollection<Reflection::REnumMember>::GetByValue
                         (this_02,*(uint *)param_1);
      if (pRVar6 == (RAttribute *)0x0) {
        Sexy::RtSerialRtonWriter::WriteUInt32(this_00,param_3,*(uint *)param_1);
      }
      else {
        pcVar11 = (char *)RAttribute::GetName(pRVar6);
        Sexy::RtSerialRtonWriter::WriteString(this_00,param_3,pcVar11,true);
      }
    }
    else {
      uVar13 = 0;
      Set8BytesTo0(asStack_10);
      this_01 = (CRefNamedSymbolCollection *)ZombieType::GetAudioGroups((ZombieType *)this);
      uVar2 = CRefNamedSymbolCollection::GetCount(this_01);
      if (uVar2 != 0) {
        do {
          pRVar6 = (RAttribute *)
                   TRefNamedSymbolCollection<Reflection::RType>::GetIndexed
                             ((TRefNamedSymbolCollection<Reflection::RType> *)this_01,uVar13);
          uVar3 = FUN_0517ebb4(*(undefined4 *)(pRVar6 + 0x68));
          if (((uVar3 & *(uint *)param_1) != 0) && ((uVar3 - 1 & uVar3) == 0)) {
            cVar1 = FUN_0547419c(asStack_10);
            if (cVar1 == '\0') {
              FUN_05475ad8(asStack_10,&DAT_055e9e80);
            }
            uVar7 = RAttribute::GetName(pRVar6);
            FUN_05475ad8(asStack_10,uVar7);
            uVar2 = CRefNamedSymbolCollection::GetCount(this_01);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar2);
      }
      cVar1 = FUN_0547419c(asStack_10);
      if (cVar1 != '\0') {
        std::string::append(asStack_10,"0",(size_t)param_2);
      }
      Sexy::RtSerialRtonWriter::WriteString(this_00,param_3,asStack_10,true);
      std::string::~string(asStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* Reflection::REnum::REnum() */

void __thiscall Reflection::REnum::REnum(REnum *this)

{
  RNamedType::RNamedType((RNamedType *)this);
  *(undefined ***)this = &PTR_GetClass_06a2f620;
  TRefNamedSymbolCollection<Reflection::REnumMember>::TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::REnumMember> *)(this + 0x88));
  return;
}


/* Reflection::REnum::StaticNew() */

REnum * Reflection::REnum::StaticNew(void)

{
  REnum *this;
  
  this = ::operator_new(0x108);
  REnum(this);
  return this;
}


/* Reflection::REnum::~REnum() */

void __thiscall Reflection::REnum::~REnum(REnum *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2f620;
  TRefNamedSymbolCollection<Reflection::REnumMember>::~TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::REnumMember> *)(this + 0x88));
  RNamedType::~RNamedType((RNamedType *)this);
  return;
}


/* Reflection::REnum::~REnum() */

void __thiscall Reflection::REnum::~REnum(REnum *this)

{
  ~REnum(this);
  AK::FreeHook(this);
  return;
}

