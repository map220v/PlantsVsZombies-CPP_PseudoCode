// Class: JoustPlantPowerConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustPlantPowerConfig::StaticClassInit() */

void JoustPlantPowerConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPowerSet");
    (*pcVar3)(plVar2,asStack_10,FUN_0389339c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"JoustPlantPowerConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_038938e0,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustPlantPowerConfig::StaticGetClass() */

long * JoustPlantPowerConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"JoustPlantPowerConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustPlantPowerConfig::GetClass() const */

long * JoustPlantPowerConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"JoustPlantPowerConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustPlantPowerConfig::GetTargetPlantPower(int, int, bool) */

void __thiscall
JoustPlantPowerConfig::GetTargetPlantPower
          (JoustPlantPowerConfig *this,int param_1,int param_2,bool param_3)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar4 = 0;
  local_8 = ___stack_chk_guard;
  if (this[8] != (JoustPlantPowerConfig)0x0) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x10));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
    while( true ) {
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar1) break;
      piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if (*piVar2 == param_2) {
        piVar3 = (int *)FUN_03893134(*(undefined8 *)(piVar2 + 2),(long)(param_1 + -1));
        iVar4 = *piVar3;
        if (param_3) {
          iVar4 = iVar4 + piVar2[8];
        }
        goto LAB_03893648;
      }
      __gnu_cxx::
      __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
      ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                    *)&local_18);
    }
    iVar4 = 0;
  }
LAB_03893648:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


/* JoustPlantPowerConfig::JoustPlantPowerConfig() */

void __thiscall JoustPlantPowerConfig::JoustPlantPowerConfig(JoustPlantPowerConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066af680;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  this[8] = (JoustPlantPowerConfig)0x0;
  return;
}


/* JoustPlantPowerConfig::StaticNew() */

JoustPlantPowerConfig * JoustPlantPowerConfig::StaticNew(void)

{
  JoustPlantPowerConfig *this;
  
  this = ::operator_new(0x28);
  JoustPlantPowerConfig(this);
  return this;
}


/* JoustPlantPowerConfig::~JoustPlantPowerConfig() */

void __thiscall JoustPlantPowerConfig::~JoustPlantPowerConfig(JoustPlantPowerConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_066af680;
  std::vector<PlantPowerSet,std::allocator<PlantPowerSet>>::~vector
            ((vector<PlantPowerSet,std::allocator<PlantPowerSet>> *)(this + 0x10));
  nop();
  return;
}


/* JoustPlantPowerConfig::~JoustPlantPowerConfig() */

void __thiscall JoustPlantPowerConfig::~JoustPlantPowerConfig(JoustPlantPowerConfig *this)

{
  ~JoustPlantPowerConfig(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustPlantPowerConfig::Refresh() */

void __thiscall JoustPlantPowerConfig::Refresh(JoustPlantPowerConfig *this)

{
  bool bVar1;
  undefined8 uVar2;
  RtObject *this_00;
  JoustPlantPowerConfig *pJVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x96);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
LAB_03894198:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pJVar3 = Sexy::RtObject::Cast<JoustPlantPowerConfig>(this_00);
      if (pJVar3 != (JoustPlantPowerConfig *)0x0) {
        std::vector<PlantPowerSet,std::allocator<PlantPowerSet>>::operator=
                  ((vector<PlantPowerSet,std::allocator<PlantPowerSet>> *)(this + 0x10),
                   (vector *)(pJVar3 + 0x10));
        this[8] = (JoustPlantPowerConfig)0x1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        goto LAB_03894198;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
  } while( true );
}

