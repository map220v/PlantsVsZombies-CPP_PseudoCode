// Class: Reflection::RCustomType::TEmbeddedObjectManipulator<CardEffectProperty,161>


/* Reflection::RCustomType::TEmbeddedObjectManipulator<CardEffectProperty,
   161>::TEmbeddedObjectManipulator() */

void __thiscall
Reflection::RCustomType::TEmbeddedObjectManipulator<CardEffectProperty,161>::
TEmbeddedObjectManipulator(TEmbeddedObjectManipulator<CardEffectProperty,161> *this)

{
  IStdManipulator::IStdManipulator((IStdManipulator *)this);
  *(undefined ***)this = &PTR_nop_066664a0;
  return;
}


/* Reflection::RCustomType::TEmbeddedObjectManipulator<CardRuleProperty,
   161>::TEmbeddedObjectManipulator() */

void __thiscall
Reflection::RCustomType::TEmbeddedObjectManipulator<CardRuleProperty,161>::
TEmbeddedObjectManipulator(TEmbeddedObjectManipulator<CardRuleProperty,161> *this)

{
  IStdManipulator::IStdManipulator((IStdManipulator *)this);
  *(undefined ***)this = &PTR_nop_066664d0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RCustomType::TEmbeddedObjectManipulator<CardRuleProperty,
   161>::InstanceRtonSync(void*, Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey const&,
   Reflection::RType*) const */

void Reflection::RCustomType::TEmbeddedObjectManipulator<CardRuleProperty,161>::InstanceRtonSync
               (void *param_1,RtSerialRtonSync *param_2,RtSerialRtonKey *param_3,RType *param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  RtSerialRtonKey *this;
  RtDb *this_00;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  ulong extraout_x1;
  code *pcVar8;
  RtSerialRtonKey aRStack_40 [8];
  RtSerializeContext aRStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_035fd330(param_3[0x10]);
  if (cVar1 == '\0') {
    this = (RtSerialRtonKey *)FUN_035fd33c(*(undefined8 *)param_3);
    this_00 = (RtDb *)Sexy::RtDb::GetDb();
    uVar4 = Sexy::RtDb::GetTable(this_00,0xa1);
    cVar1 = Sexy::RtSerialRtonReader::BeginObject(this);
    if (cVar1 != '\0') {
      Sexy::RtSerialRtonReader::GetCurrentScope((RtSerialRtonReader *)this);
      uVar2 = FUN_035fdc10();
      cVar1 = FUN_035fd320(extraout_x1 & 0xffffffff);
      if (cVar1 == '\0') {
LAB_035fff8c:
        uVar3 = 0;
      }
      else {
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(uVar2);
        lVar6 = Sexy::RtClass::StaticGetClassNamed(pcVar5);
        if (lVar6 == 0) goto LAB_035fff8c;
        uVar3 = 1;
        plVar7 = (long *)FUN_035fd304(*(undefined8 *)(lVar6 + 0x18));
        pcVar8 = *(code **)(*plVar7 + 0x30);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(uVar2);
        Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_40,pcVar5);
        Sexy::RtSerializeContext::RtSerializeContext(aRStack_38,param_3,aRStack_40,0);
        (*pcVar8)(plVar7,aRStack_38);
        Sexy::RtSerializeContext::~RtSerializeContext(aRStack_38);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_40);
        Sexy::RtDbTable::AllocId(aRStack_38,uVar4,plVar7,1,1,0);
        Sexy::RtId::operator=((RtId *)param_2,(RtId *)aRStack_38);
        Sexy::RtId::~RtId((RtId *)aRStack_38);
      }
      Sexy::RtSerialRtonReader::EndObject((RtSerialRtonReader *)this);
      goto LAB_035fff08;
    }
  }
  uVar3 = 0;
LAB_035fff08:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* Reflection::RCustomType::TEmbeddedObjectManipulator<TravelLogData,
   153>::TEmbeddedObjectManipulator() */

void __thiscall
Reflection::RCustomType::TEmbeddedObjectManipulator<TravelLogData,153>::TEmbeddedObjectManipulator
          (TEmbeddedObjectManipulator<TravelLogData,153> *this)

{
  IStdManipulator::IStdManipulator((IStdManipulator *)this);
  *(undefined ***)this = &PTR_nop_066f5ac0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RCustomType::TEmbeddedObjectManipulator<TravelLogData, 153>::InstanceRtonSync(void*,
   Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey const&, Reflection::RType*) const */

void Reflection::RCustomType::TEmbeddedObjectManipulator<TravelLogData,153>::InstanceRtonSync
               (void *param_1,RtSerialRtonSync *param_2,RtSerialRtonKey *param_3,RType *param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  RtSerialRtonKey *this;
  RtDb *this_00;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  ulong extraout_x1;
  code *pcVar8;
  RtSerialRtonKey aRStack_40 [8];
  RtSerializeContext aRStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_039e2a34(param_3[0x10]);
  if (cVar1 == '\0') {
    this = (RtSerialRtonKey *)FUN_039e2a40(*(undefined8 *)param_3);
    this_00 = (RtDb *)Sexy::RtDb::GetDb();
    uVar4 = Sexy::RtDb::GetTable(this_00,0x99);
    cVar1 = Sexy::RtSerialRtonReader::BeginObject(this);
    if (cVar1 != '\0') {
      Sexy::RtSerialRtonReader::GetCurrentScope((RtSerialRtonReader *)this);
      uVar2 = FUN_039e2ff4();
      cVar1 = FUN_039e2a24(extraout_x1 & 0xffffffff);
      if (cVar1 == '\0') {
LAB_039e71d8:
        uVar3 = 0;
      }
      else {
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(uVar2);
        lVar6 = Sexy::RtClass::StaticGetClassNamed(pcVar5);
        if (lVar6 == 0) goto LAB_039e71d8;
        uVar3 = 1;
        plVar7 = (long *)FUN_039e2a08(*(undefined8 *)(lVar6 + 0x18));
        pcVar8 = *(code **)(*plVar7 + 0x30);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(uVar2);
        Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_40,pcVar5);
        Sexy::RtSerializeContext::RtSerializeContext(aRStack_38,param_3,aRStack_40,0);
        (*pcVar8)(plVar7,aRStack_38);
        Sexy::RtSerializeContext::~RtSerializeContext(aRStack_38);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_40);
        Sexy::RtDbTable::AllocId(aRStack_38,uVar4,plVar7,1,1,0);
        Sexy::RtId::operator=((RtId *)param_2,(RtId *)aRStack_38);
        Sexy::RtId::~RtId((RtId *)aRStack_38);
      }
      Sexy::RtSerialRtonReader::EndObject((RtSerialRtonReader *)this);
      goto LAB_039e7154;
    }
  }
  uVar3 = 0;
LAB_039e7154:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* Reflection::RCustomType::TEmbeddedObjectManipulator<DaveTaskData,
   155>::TEmbeddedObjectManipulator() */

void __thiscall
Reflection::RCustomType::TEmbeddedObjectManipulator<DaveTaskData,155>::TEmbeddedObjectManipulator
          (TEmbeddedObjectManipulator<DaveTaskData,155> *this)

{
  IStdManipulator::IStdManipulator((IStdManipulator *)this);
  *(undefined ***)this = &PTR_nop_066f9c00;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RCustomType::TEmbeddedObjectManipulator<DaveTaskData, 155>::InstanceRtonSync(void*,
   Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey const&, Reflection::RType*) const */

void Reflection::RCustomType::TEmbeddedObjectManipulator<DaveTaskData,155>::InstanceRtonSync
               (void *param_1,RtSerialRtonSync *param_2,RtSerialRtonKey *param_3,RType *param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  RtSerialRtonKey *this;
  RtDb *this_00;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  ulong extraout_x1;
  code *pcVar8;
  RtSerialRtonKey aRStack_40 [8];
  RtSerializeContext aRStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_039fdb0c(param_3[0x10]);
  if (cVar1 == '\0') {
    this = (RtSerialRtonKey *)FUN_039fdb18(*(undefined8 *)param_3);
    this_00 = (RtDb *)Sexy::RtDb::GetDb();
    uVar4 = Sexy::RtDb::GetTable(this_00,0x9b);
    cVar1 = Sexy::RtSerialRtonReader::BeginObject(this);
    if (cVar1 != '\0') {
      Sexy::RtSerialRtonReader::GetCurrentScope((RtSerialRtonReader *)this);
      uVar2 = FUN_039fdf58();
      cVar1 = FUN_039fdafc(extraout_x1 & 0xffffffff);
      if (cVar1 == '\0') {
LAB_03a03834:
        uVar3 = 0;
      }
      else {
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(uVar2);
        lVar6 = Sexy::RtClass::StaticGetClassNamed(pcVar5);
        if (lVar6 == 0) goto LAB_03a03834;
        uVar3 = 1;
        plVar7 = (long *)FUN_039fdae0(*(undefined8 *)(lVar6 + 0x18));
        pcVar8 = *(code **)(*plVar7 + 0x30);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(uVar2);
        Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_40,pcVar5);
        Sexy::RtSerializeContext::RtSerializeContext(aRStack_38,param_3,aRStack_40,0);
        (*pcVar8)(plVar7,aRStack_38);
        Sexy::RtSerializeContext::~RtSerializeContext(aRStack_38);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_40);
        Sexy::RtDbTable::AllocId(aRStack_38,uVar4,plVar7,1,1,0);
        Sexy::RtId::operator=((RtId *)param_2,(RtId *)aRStack_38);
        Sexy::RtId::~RtId((RtId *)aRStack_38);
      }
      Sexy::RtSerialRtonReader::EndObject((RtSerialRtonReader *)this);
      goto LAB_03a037b0;
    }
  }
  uVar3 = 0;
LAB_03a037b0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* Reflection::RCustomType::TEmbeddedObjectManipulator<GeneralTaskData,
   158>::TEmbeddedObjectManipulator() */

void __thiscall
Reflection::RCustomType::TEmbeddedObjectManipulator<GeneralTaskData,158>::TEmbeddedObjectManipulator
          (TEmbeddedObjectManipulator<GeneralTaskData,158> *this)

{
  IStdManipulator::IStdManipulator((IStdManipulator *)this);
  *(undefined ***)this = &PTR_nop_0670d6c0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RCustomType::TEmbeddedObjectManipulator<GeneralTaskData,
   158>::InstanceRtonSync(void*, Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey const&,
   Reflection::RType*) const */

void Reflection::RCustomType::TEmbeddedObjectManipulator<GeneralTaskData,158>::InstanceRtonSync
               (void *param_1,RtSerialRtonSync *param_2,RtSerialRtonKey *param_3,RType *param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  RtSerialRtonKey *this;
  RtDb *this_00;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  ulong extraout_x1;
  code *pcVar8;
  RtSerialRtonKey aRStack_40 [8];
  RtSerializeContext aRStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03a6ee64(param_3[0x10]);
  if (cVar1 == '\0') {
    this = (RtSerialRtonKey *)FUN_03a6ee70(*(undefined8 *)param_3);
    this_00 = (RtDb *)Sexy::RtDb::GetDb();
    uVar4 = Sexy::RtDb::GetTable(this_00,0x9e);
    cVar1 = Sexy::RtSerialRtonReader::BeginObject(this);
    if (cVar1 != '\0') {
      Sexy::RtSerialRtonReader::GetCurrentScope((RtSerialRtonReader *)this);
      uVar2 = FUN_03a6f2f0();
      cVar1 = FUN_03a6ee54(extraout_x1 & 0xffffffff);
      if (cVar1 == '\0') {
LAB_03a77fc0:
        uVar3 = 0;
      }
      else {
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(uVar2);
        lVar6 = Sexy::RtClass::StaticGetClassNamed(pcVar5);
        if (lVar6 == 0) goto LAB_03a77fc0;
        uVar3 = 1;
        plVar7 = (long *)FUN_03a6ee38(*(undefined8 *)(lVar6 + 0x18));
        pcVar8 = *(code **)(*plVar7 + 0x30);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(uVar2);
        Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_40,pcVar5);
        Sexy::RtSerializeContext::RtSerializeContext(aRStack_38,param_3,aRStack_40,0);
        (*pcVar8)(plVar7,aRStack_38);
        Sexy::RtSerializeContext::~RtSerializeContext(aRStack_38);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_40);
        Sexy::RtDbTable::AllocId(aRStack_38,uVar4,plVar7,1,1,0);
        Sexy::RtId::operator=((RtId *)param_2,(RtId *)aRStack_38);
        Sexy::RtId::~RtId((RtId *)aRStack_38);
      }
      Sexy::RtSerialRtonReader::EndObject((RtSerialRtonReader *)this);
      goto LAB_03a77f3c;
    }
  }
  uVar3 = 0;
LAB_03a77f3c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

