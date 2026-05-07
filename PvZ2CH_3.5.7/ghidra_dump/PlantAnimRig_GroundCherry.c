// Class: PlantAnimRig_GroundCherry


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GroundCherry::SetPlantGroundCherry(Plant*) */

void PlantAnimRig_GroundCherry::SetPlantGroundCherry(Plant *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x3b8),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_GroundCherry::getIdleAnimationName() */

undefined8 PlantAnimRig_GroundCherry::getIdleAnimationName(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* PlantAnimRig_GroundCherry::SetIdleLabel(std::string) */

void PlantAnimRig_GroundCherry::SetIdleLabel(long param_1)

{
  thunk_FUN_05475e00(param_1 + 0x3c0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GroundCherry::StaticClassInit() */

void PlantAnimRig_GroundCherry::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_GroundCherry");
    (*pcVar2)(plVar1,asStack_10,FUN_0422c4e0,0x3c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_GroundCherry::StaticGetClass() */

long * PlantAnimRig_GroundCherry::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_GroundCherry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_GroundCherry::GetClass() const */

long * PlantAnimRig_GroundCherry::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_GroundCherry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_GroundCherry::~PlantAnimRig_GroundCherry() */

void __thiscall
PlantAnimRig_GroundCherry::~PlantAnimRig_GroundCherry(PlantAnimRig_GroundCherry *this)

{
  *(undefined ***)this = &PTR_GetClass_06810320;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_GroundCherry_06810588;
  std::string::~string((string *)(this + 0x3c0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_GroundCherry::~PlantAnimRig_GroundCherry() */

void __thiscall
PlantAnimRig_GroundCherry::~PlantAnimRig_GroundCherry(PlantAnimRig_GroundCherry *this)

{
  ~PlantAnimRig_GroundCherry(this + -0x10);
  return;
}


/* PlantAnimRig_GroundCherry::~PlantAnimRig_GroundCherry() */

void __thiscall
PlantAnimRig_GroundCherry::~PlantAnimRig_GroundCherry(PlantAnimRig_GroundCherry *this)

{
  ~PlantAnimRig_GroundCherry(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_GroundCherry::~PlantAnimRig_GroundCherry() */

void __thiscall
PlantAnimRig_GroundCherry::~PlantAnimRig_GroundCherry(PlantAnimRig_GroundCherry *this)

{
  ~PlantAnimRig_GroundCherry(this + -0x10);
  return;
}


/* PlantAnimRig_GroundCherry::PlantAnimRig_GroundCherry() */

void __thiscall
PlantAnimRig_GroundCherry::PlantAnimRig_GroundCherry(PlantAnimRig_GroundCherry *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06810320;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_GroundCherry_06810588;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x3b8));
  Set8BytesTo0(this + 0x3c0);
  return;
}


/* PlantAnimRig_GroundCherry::StaticNew() */

PlantAnimRig_GroundCherry * PlantAnimRig_GroundCherry::StaticNew(void)

{
  PlantAnimRig_GroundCherry *this;
  
  this = ::operator_new(0x3c8);
  PlantAnimRig_GroundCherry(this);
  return this;
}


/* PlantAnimRig_GroundCherry::onPopAnimInitialized() */

void __thiscall PlantAnimRig_GroundCherry::onPopAnimInitialized(PlantAnimRig_GroundCherry *this)

{
  size_t in_x2;
  
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  std::string::append((string *)(this + 0x3c0),"idle",in_x2);
  return;
}

