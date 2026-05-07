// Class: TrainingData


/* TrainingData::TrainingData() */

void __thiscall TrainingData::TrainingData(TrainingData *this)

{
  undefined4 uVar1;
  
  Set8BytesTo0();
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0xbf800000;
  uVar1 = PVZ_EOT();
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = uVar1;
  return;
}


/* TrainingData::TrainingData(TrainingData const&) */

void __thiscall TrainingData::TrainingData(TrainingData *this,TrainingData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_05475d88();
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  return;
}


/* TrainingData::TrainingData(TrainingData&&) */

void __thiscall TrainingData::TrainingData(TrainingData *this,TrainingData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_05474148();
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  return;
}


/* TrainingData::TEMPNAMEPLACEHOLDERVALUE(TrainingData const&) */

TrainingData * __thiscall TrainingData::operator=(TrainingData *this,TrainingData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  thunk_FUN_05475e00();
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  return this;
}


/* TrainingData::IsEmpty() const */

bool __thiscall TrainingData::IsEmpty(TrainingData *this)

{
  if (0 < *(int *)(this + 8)) {
    return false;
  }
  return *(int *)(this + 0xc) < 1;
}


/* TrainingData::Training(enumTrainingOperator) */

void __thiscall TrainingData::Training(TrainingData *this,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 2) {
    iVar1 = *(int *)(this + 0xc);
    *(int *)(this + 0xc) = iVar1 + -1;
    if (0 < iVar1 + -1) {
      return;
    }
  }
  else {
    if (param_2 != 3) {
      if (param_2 != 1) {
        return;
      }
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
      return;
    }
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  *(undefined4 *)(this + 0x10) = 0xbf800000;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x14) = uVar2;
  return;
}


/* TrainingData::TEMPNAMEPLACEHOLDERVALUE(TrainingData&&) */

TrainingData * __thiscall TrainingData::operator=(TrainingData *this,TrainingData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_05474278();
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingData::IsValid() const */

void TrainingData::IsValid(void)

{
  char cVar1;
  undefined1 uVar2;
  string *psVar3;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  uVar2 = 0;
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c();
  if (cVar1 == '\0') {
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<TrainingType>>::GetInstancePtr();
    ObjectTypeDirectory<TrainingType>::GetTypeFromTypeName(psVar3);
    uVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingData::GetTotalSeconds() const */

void __thiscall TrainingData::GetTotalSeconds(TrainingData *this)

{
  char cVar1;
  int iVar2;
  string *psVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  iVar2 = *(int *)(this + 0xc);
  local_8 = ___stack_chk_guard;
  if (*(float *)(this + 0x10) < 0.0) {
LAB_04ad7c7c:
    fVar6 = 0.0;
  }
  else {
    fVar6 = *(float *)(this + 0x14);
    iVar2 = iVar2 + -1;
    fVar5 = (float)PVZ_T();
    if (fVar6 <= fVar5) goto LAB_04ad7c7c;
    fVar6 = *(float *)(this + 0x14);
    fVar5 = (float)PVZ_EOT();
    if (fVar6 == fVar5) goto LAB_04ad7c7c;
    fVar5 = (float)PVZ_T();
    fVar6 = fVar6 - fVar5;
  }
  if (0 < iVar2) {
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<TrainingType>>::GetInstancePtr();
    ObjectTypeDirectory<TrainingType>::GetTypeFromTypeName(psVar3);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      iVar2 = 0;
      goto LAB_04ad7ccc;
    }
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    fVar6 = fVar6 + *(float *)(lVar4 + 0x1c) * (float)iVar2;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  iVar2 = (int)fVar6;
LAB_04ad7ccc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}

