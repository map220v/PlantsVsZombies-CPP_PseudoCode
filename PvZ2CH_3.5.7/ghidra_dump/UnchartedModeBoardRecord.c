// Class: UnchartedModeBoardRecord


/* UnchartedModeBoardRecord::UnchartedModeBoardRecord(UnchartedModeBoardRecord const&) */

void __thiscall
UnchartedModeBoardRecord::UnchartedModeBoardRecord
          (UnchartedModeBoardRecord *this,UnchartedModeBoardRecord *param_1)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066a6740;
  FUN_05475d88(this + 8,param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>>::vector
            ((vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>> *)
             (this + 0x30),(vector *)(param_1 + 0x30));
  return;
}


/* UnchartedModeBoardRecord::~UnchartedModeBoardRecord() */

void __thiscall UnchartedModeBoardRecord::~UnchartedModeBoardRecord(UnchartedModeBoardRecord *this)

{
  *(undefined ***)this = &PTR_GetClass_066a6740;
  std::vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>>::~vector
            ((vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>> *)
             (this + 0x30));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  std::string::~string((string *)(this + 8));
  nop();
  return;
}


/* UnchartedModeBoardRecord::~UnchartedModeBoardRecord() */

void __thiscall UnchartedModeBoardRecord::~UnchartedModeBoardRecord(UnchartedModeBoardRecord *this)

{
  ~UnchartedModeBoardRecord(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeBoardRecord::StaticClassInit() */

void UnchartedModeBoardRecord::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"UnchartedModePlantNumData");
    (*pcVar3)(plVar2,asStack_10,FUN_03832718,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"UnchartedModeBoardRecord");
    (*pcVar3)(plVar2,asStack_10,FUN_03836dd8,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UnchartedModeBoardRecord::StaticGetClass() */

long * UnchartedModeBoardRecord::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"UnchartedModeBoardRecord",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UnchartedModeBoardRecord::GetClass() const */

long * UnchartedModeBoardRecord::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"UnchartedModeBoardRecord",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UnchartedModeBoardRecord::GetPlantNum(int) const */

int __thiscall UnchartedModeBoardRecord::GetPlantNum(UnchartedModeBoardRecord *this,int param_1)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x30);
  lVar1 = FUN_03832a98(uVar4,*(undefined8 *)(this + 0x38));
  lVar3 = 0;
  do {
    if (lVar3 == lVar1) {
      return -1;
    }
    piVar2 = (int *)FUN_03832ac0(uVar4,lVar3);
    lVar3 = lVar3 + 1;
  } while (*piVar2 != param_1);
  return piVar2[1];
}


/* UnchartedModeBoardRecord::GetPlantNum(std::string const&) const */

void __thiscall
UnchartedModeBoardRecord::GetPlantNum(UnchartedModeBoardRecord *this,string *param_1)

{
  int iVar1;
  NameMapperBase *this_00;
  
  this_00 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  iVar1 = NameMapperBase::GetIdForName(this_00,param_1);
  GetPlantNum(this,iVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeBoardRecord::IsHavePlant(int) const */

void __thiscall UnchartedModeBoardRecord::IsHavePlant(UnchartedModeBoardRecord *this,int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_03835ce0(*(undefined8 *)(this + 0x30));
  local_10 = FUN_03835d30(*(undefined8 *)(this + 0x38));
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if ((!bVar1) ||
       (piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18),
       *piVar2 == param_1)) break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeBoardRecord::SetPlantNum(int, int) */

void __thiscall
UnchartedModeBoardRecord::SetPlantNum(UnchartedModeBoardRecord *this,int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x30));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
LAB_03835eb4:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 == param_1) {
      piVar2[1] = param_2;
      goto LAB_03835eb4;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* UnchartedModeBoardRecord::SetPlantNum(std::string const&, int) */

void __thiscall
UnchartedModeBoardRecord::SetPlantNum(UnchartedModeBoardRecord *this,string *param_1,int param_2)

{
  int iVar1;
  NameMapperBase *this_00;
  
  this_00 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  iVar1 = NameMapperBase::GetIdForName(this_00,param_1);
  SetPlantNum(this,iVar1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeBoardRecord::SetPlantOnBoard(std::string const&) */

void __thiscall
UnchartedModeBoardRecord::SetPlantOnBoard(UnchartedModeBoardRecord *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  NameMapperBase *this_00;
  int *piVar3;
  int *piVar4;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  iVar2 = NameMapperBase::GetIdForName(this_00,param_1);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x30));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
LAB_03835fb8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar3 == iVar2) {
      local_20 = 0;
      local_1c = piVar3[1] + -1;
      piVar4 = eastl::max_alt<int>(&local_20,&local_1c);
      piVar3[1] = *piVar4;
      goto LAB_03835fb8;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeBoardRecord::SetPlantOnBoard(std::string const&, int) */

void __thiscall
UnchartedModeBoardRecord::SetPlantOnBoard
          (UnchartedModeBoardRecord *this,string *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  NameMapperBase *this_00;
  int *piVar3;
  int *piVar4;
  int local_24 [2];
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_2;
  this_00 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  iVar2 = NameMapperBase::GetIdForName(this_00,param_1);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x30));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
LAB_038360a4:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar3 == iVar2) {
      local_1c = 0;
      piVar4 = eastl::max_alt<int>(&local_1c,local_24);
      piVar3[1] = *piVar4;
      goto LAB_038360a4;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeBoardRecord::UnchartedModeBoardRecord() */

void __thiscall UnchartedModeBoardRecord::UnchartedModeBoardRecord(UnchartedModeBoardRecord *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066a6740;
  std::string::string((string *)(this + 8),"");
  nop();
  *(undefined4 *)(this + 0x10) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UnchartedModeBoardRecord::StaticNew() */

UnchartedModeBoardRecord * UnchartedModeBoardRecord::StaticNew(void)

{
  UnchartedModeBoardRecord *this;
  
  this = ::operator_new(0x48);
  UnchartedModeBoardRecord(this);
  return this;
}


/* UnchartedModeBoardRecord::Copy(UnchartedModeBoardRecord) */

undefined8 __thiscall UnchartedModeBoardRecord::Copy(UnchartedModeBoardRecord *this,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_2 + 0x10);
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(param_2 + 0x18));
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(param_2 + 0x18));
  std::vector<int,std::allocator<int>>::
  assign<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,void>
            ((vector<int,std::allocator<int>> *)(this + 0x18),uVar1,uVar2);
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(param_2 + 0x30));
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(param_2 + 0x30));
  std::vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>>::
  assign<__gnu_cxx::__normal_iterator<UnchartedModePlantNumData*,std::vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>>>,void>
            ((vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>> *)
             (this + 0x30),uVar1,uVar2);
  return 1;
}


/* UnchartedModeBoardRecord::UnchartedModeBoardRecord(UnchartedModeBoardRecord&&) */

void __thiscall
UnchartedModeBoardRecord::UnchartedModeBoardRecord
          (UnchartedModeBoardRecord *this,UnchartedModeBoardRecord *param_1)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066a6740;
  FUN_05474148(this + 8,param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x30),(vector *)(param_1 + 0x30));
  return;
}

