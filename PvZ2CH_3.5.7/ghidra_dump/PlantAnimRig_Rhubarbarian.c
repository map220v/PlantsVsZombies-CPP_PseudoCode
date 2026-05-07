// Class: PlantAnimRig_Rhubarbarian


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Rhubarbarian::StaticClassInit() */

void PlantAnimRig_Rhubarbarian::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Rhubarbarian");
    (*pcVar2)(plVar1,asStack_10,FUN_03fb773c,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Rhubarbarian::StaticGetClass() */

long * PlantAnimRig_Rhubarbarian::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Rhubarbarian",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Rhubarbarian::GetClass() const */

long * PlantAnimRig_Rhubarbarian::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Rhubarbarian",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Rhubarbarian::PlantAnimRig_Rhubarbarian() */

void __thiscall
PlantAnimRig_Rhubarbarian::PlantAnimRig_Rhubarbarian(PlantAnimRig_Rhubarbarian *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067a8bf0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Rhubarbarian_067a8e58;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x3b8));
  return;
}


/* PlantAnimRig_Rhubarbarian::StaticNew() */

PlantAnimRig_Rhubarbarian * PlantAnimRig_Rhubarbarian::StaticNew(void)

{
  PlantAnimRig_Rhubarbarian *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Rhubarbarian(this);
  return this;
}


/* PlantAnimRig_Rhubarbarian::~PlantAnimRig_Rhubarbarian() */

void __thiscall
PlantAnimRig_Rhubarbarian::~PlantAnimRig_Rhubarbarian(PlantAnimRig_Rhubarbarian *this)

{
  *(undefined ***)this = &PTR_GetClass_067a8bf0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Rhubarbarian_067a8e58;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Rhubarbarian::~PlantAnimRig_Rhubarbarian() */

void __thiscall
PlantAnimRig_Rhubarbarian::~PlantAnimRig_Rhubarbarian(PlantAnimRig_Rhubarbarian *this)

{
  ~PlantAnimRig_Rhubarbarian(this + -0x10);
  return;
}


/* PlantAnimRig_Rhubarbarian::~PlantAnimRig_Rhubarbarian() */

void __thiscall
PlantAnimRig_Rhubarbarian::~PlantAnimRig_Rhubarbarian(PlantAnimRig_Rhubarbarian *this)

{
  ~PlantAnimRig_Rhubarbarian(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Rhubarbarian::~PlantAnimRig_Rhubarbarian() */

void __thiscall
PlantAnimRig_Rhubarbarian::~PlantAnimRig_Rhubarbarian(PlantAnimRig_Rhubarbarian *this)

{
  ~PlantAnimRig_Rhubarbarian(this + -0x10);
  return;
}


/* PlantAnimRig_Rhubarbarian::onSetFollowerLayerVisibility(std::string const&, bool) */

void __thiscall
PlantAnimRig_Rhubarbarian::onSetFollowerLayerVisibility
          (PlantAnimRig_Rhubarbarian *this,string *param_1,bool param_2)

{
  bool bVar1;
  Barbarian *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x3b8));
  if (!bVar1) {
    return;
  }
  this_00 = (Barbarian *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
  Barbarian::SetLayerVisibility(this_00,param_1,param_2);
  return;
}

