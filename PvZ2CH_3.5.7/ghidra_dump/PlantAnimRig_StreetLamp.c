// Class: PlantAnimRig_StreetLamp


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_StreetLamp::StaticClassInit() */

void PlantAnimRig_StreetLamp::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_StreetLamp");
    (*pcVar2)(plVar1,asStack_10,FUN_03ff0a40,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_StreetLamp::StaticGetClass() */

long * PlantAnimRig_StreetLamp::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_StreetLamp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_StreetLamp::GetClass() const */

long * PlantAnimRig_StreetLamp::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_StreetLamp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_StreetLamp::~PlantAnimRig_StreetLamp() */

void __thiscall PlantAnimRig_StreetLamp::~PlantAnimRig_StreetLamp(PlantAnimRig_StreetLamp *this)

{
  *(undefined ***)this = &PTR_GetClass_067b1310;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_StreetLamp_067b1578;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_StreetLamp::~PlantAnimRig_StreetLamp() */

void __thiscall PlantAnimRig_StreetLamp::~PlantAnimRig_StreetLamp(PlantAnimRig_StreetLamp *this)

{
  ~PlantAnimRig_StreetLamp(this + -0x10);
  return;
}


/* PlantAnimRig_StreetLamp::~PlantAnimRig_StreetLamp() */

void __thiscall PlantAnimRig_StreetLamp::~PlantAnimRig_StreetLamp(PlantAnimRig_StreetLamp *this)

{
  ~PlantAnimRig_StreetLamp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_StreetLamp::~PlantAnimRig_StreetLamp() */

void __thiscall PlantAnimRig_StreetLamp::~PlantAnimRig_StreetLamp(PlantAnimRig_StreetLamp *this)

{
  ~PlantAnimRig_StreetLamp(this + -0x10);
  return;
}


/* PlantAnimRig_StreetLamp::PlantAnimRig_StreetLamp() */

void __thiscall PlantAnimRig_StreetLamp::PlantAnimRig_StreetLamp(PlantAnimRig_StreetLamp *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067b1310;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_StreetLamp_067b1578;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x3b8));
  return;
}


/* PlantAnimRig_StreetLamp::StaticNew() */

PlantAnimRig_StreetLamp * PlantAnimRig_StreetLamp::StaticNew(void)

{
  PlantAnimRig_StreetLamp *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_StreetLamp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_StreetLamp::getIdleAnimationName() */

void PlantAnimRig_StreetLamp::getIdleAnimationName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  long extraout_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0x3b8));
  if (cVar2 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x3b8));
    nop();
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(extraout_x0 + 0x10));
    if (cVar2 != '\0') {
      __s = "IDLE02";
      goto LAB_03ff0220;
    }
  }
  __s = "IDLE01";
LAB_03ff0220:
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_StreetLamp::getPlantFoodMainAnimName() */

void PlantAnimRig_StreetLamp::getPlantFoodMainAnimName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  long extraout_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0x3b8));
  if (cVar2 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x3b8));
    nop();
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(extraout_x0 + 0x10));
    if (cVar2 != '\0') {
      __s = "ATTACK02";
      goto LAB_03ff02d0;
    }
  }
  __s = "ATTACK01";
LAB_03ff02d0:
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

