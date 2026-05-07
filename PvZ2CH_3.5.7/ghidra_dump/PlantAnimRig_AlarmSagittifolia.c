// Class: PlantAnimRig_AlarmSagittifolia


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_AlarmSagittifolia::StaticClassInit() */

void PlantAnimRig_AlarmSagittifolia::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"PlantAnimRig_AlarmSagittifolia");
    (*pcVar2)(plVar1,asStack_10,FUN_03c1badc,0x3c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_AlarmSagittifolia::StaticGetClass() */

long * PlantAnimRig_AlarmSagittifolia::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_AlarmSagittifolia",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_AlarmSagittifolia::GetClass() const */

long * PlantAnimRig_AlarmSagittifolia::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_AlarmSagittifolia",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_AlarmSagittifolia::~PlantAnimRig_AlarmSagittifolia() */

void __thiscall
PlantAnimRig_AlarmSagittifolia::~PlantAnimRig_AlarmSagittifolia
          (PlantAnimRig_AlarmSagittifolia *this)

{
  *(undefined ***)this = &PTR_GetClass_067492a0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_AlarmSagittifolia_06749508;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3c0));
  std::string::~string((string *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_AlarmSagittifolia::~PlantAnimRig_AlarmSagittifolia() */

void __thiscall
PlantAnimRig_AlarmSagittifolia::~PlantAnimRig_AlarmSagittifolia
          (PlantAnimRig_AlarmSagittifolia *this)

{
  ~PlantAnimRig_AlarmSagittifolia(this + -0x10);
  return;
}


/* PlantAnimRig_AlarmSagittifolia::~PlantAnimRig_AlarmSagittifolia() */

void __thiscall
PlantAnimRig_AlarmSagittifolia::~PlantAnimRig_AlarmSagittifolia
          (PlantAnimRig_AlarmSagittifolia *this)

{
  ~PlantAnimRig_AlarmSagittifolia(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_AlarmSagittifolia::~PlantAnimRig_AlarmSagittifolia() */

void __thiscall
PlantAnimRig_AlarmSagittifolia::~PlantAnimRig_AlarmSagittifolia
          (PlantAnimRig_AlarmSagittifolia *this)

{
  ~PlantAnimRig_AlarmSagittifolia(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_AlarmSagittifolia::PlantAnimRig_AlarmSagittifolia() */

void __thiscall
PlantAnimRig_AlarmSagittifolia::PlantAnimRig_AlarmSagittifolia(PlantAnimRig_AlarmSagittifolia *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067492a0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_AlarmSagittifolia_06749508;
  std::string::string((string *)(this + 0x3b8),"idle1");
  nop();
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x3c0));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_AlarmSagittifolia::StaticNew() */

PlantAnimRig_AlarmSagittifolia * PlantAnimRig_AlarmSagittifolia::StaticNew(void)

{
  PlantAnimRig_AlarmSagittifolia *this;
  
  this = ::operator_new(0x3c8);
  PlantAnimRig_AlarmSagittifolia(this);
  return this;
}

