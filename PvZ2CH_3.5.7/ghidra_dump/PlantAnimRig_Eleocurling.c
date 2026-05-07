// Class: PlantAnimRig_Eleocurling


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Eleocurling::StaticClassInit() */

void PlantAnimRig_Eleocurling::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Eleocurling");
    (*pcVar2)(plVar1,asStack_10,FUN_0423a974,0x3c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Eleocurling::StaticGetClass() */

long * PlantAnimRig_Eleocurling::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Eleocurling",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Eleocurling::GetClass() const */

long * PlantAnimRig_Eleocurling::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Eleocurling",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Eleocurling::~PlantAnimRig_Eleocurling() */

void __thiscall PlantAnimRig_Eleocurling::~PlantAnimRig_Eleocurling(PlantAnimRig_Eleocurling *this)

{
  *(undefined ***)this = &PTR_GetClass_068126e0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Eleocurling_06812948;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3c0));
  std::string::~string((string *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Eleocurling::~PlantAnimRig_Eleocurling() */

void __thiscall PlantAnimRig_Eleocurling::~PlantAnimRig_Eleocurling(PlantAnimRig_Eleocurling *this)

{
  ~PlantAnimRig_Eleocurling(this + -0x10);
  return;
}


/* PlantAnimRig_Eleocurling::~PlantAnimRig_Eleocurling() */

void __thiscall PlantAnimRig_Eleocurling::~PlantAnimRig_Eleocurling(PlantAnimRig_Eleocurling *this)

{
  ~PlantAnimRig_Eleocurling(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Eleocurling::~PlantAnimRig_Eleocurling() */

void __thiscall PlantAnimRig_Eleocurling::~PlantAnimRig_Eleocurling(PlantAnimRig_Eleocurling *this)

{
  ~PlantAnimRig_Eleocurling(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Eleocurling::PlantAnimRig_Eleocurling() */

void __thiscall PlantAnimRig_Eleocurling::PlantAnimRig_Eleocurling(PlantAnimRig_Eleocurling *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068126e0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Eleocurling_06812948;
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


/* PlantAnimRig_Eleocurling::StaticNew() */

PlantAnimRig_Eleocurling * PlantAnimRig_Eleocurling::StaticNew(void)

{
  PlantAnimRig_Eleocurling *this;
  
  this = ::operator_new(0x3c8);
  PlantAnimRig_Eleocurling(this);
  return this;
}

