// Class: PlantAnimRig_GatlingPea


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GatlingPea::StaticClassInit() */

void PlantAnimRig_GatlingPea::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_GatlingPea");
    (*pcVar2)(plVar1,asStack_10,FUN_0413aaa8,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_GatlingPea::StaticGetClass() */

long * PlantAnimRig_GatlingPea::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_GatlingPea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_GatlingPea::GetClass() const */

long * PlantAnimRig_GatlingPea::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_GatlingPea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_GatlingPea::~PlantAnimRig_GatlingPea() */

void __thiscall PlantAnimRig_GatlingPea::~PlantAnimRig_GatlingPea(PlantAnimRig_GatlingPea *this)

{
  *(undefined ***)this = &PTR_GetClass_067ecfe0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_GatlingPea_067ed248;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_GatlingPea::~PlantAnimRig_GatlingPea() */

void __thiscall PlantAnimRig_GatlingPea::~PlantAnimRig_GatlingPea(PlantAnimRig_GatlingPea *this)

{
  ~PlantAnimRig_GatlingPea(this + -0x10);
  return;
}


/* PlantAnimRig_GatlingPea::~PlantAnimRig_GatlingPea() */

void __thiscall PlantAnimRig_GatlingPea::~PlantAnimRig_GatlingPea(PlantAnimRig_GatlingPea *this)

{
  ~PlantAnimRig_GatlingPea(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_GatlingPea::~PlantAnimRig_GatlingPea() */

void __thiscall PlantAnimRig_GatlingPea::~PlantAnimRig_GatlingPea(PlantAnimRig_GatlingPea *this)

{
  ~PlantAnimRig_GatlingPea(this + -0x10);
  return;
}


/* PlantAnimRig_GatlingPea::PlantAnimRig_GatlingPea() */

void __thiscall PlantAnimRig_GatlingPea::PlantAnimRig_GatlingPea(PlantAnimRig_GatlingPea *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067ecfe0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_GatlingPea_067ed248;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x3b8));
  return;
}


/* PlantAnimRig_GatlingPea::StaticNew() */

PlantAnimRig_GatlingPea * PlantAnimRig_GatlingPea::StaticNew(void)

{
  PlantAnimRig_GatlingPea *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_GatlingPea(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GatlingPea::getIdleAnimationName() */

void PlantAnimRig_GatlingPea::getIdleAnimationName(void)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  long in_x0;
  long lVar4;
  PlantGatlingPea *this;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x3b8));
  if (bVar2) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x3b8));
    this = Sexy::RtObject::Cast<PlantGatlingPea>(*(RtObject **)(lVar4 + 0xa8));
    cVar3 = PlantGatlingPea::IsInGeneBuffAttack(this);
    if (cVar3 != '\0') {
      std::string::string(in_x8,"idle02");
      nop();
      goto LAB_0413b534;
    }
  }
  std::string::string(in_x8,"idle");
  nop();
LAB_0413b534:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GatlingPea::getAttackAnimationName() */

void PlantAnimRig_GatlingPea::getAttackAnimationName(void)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  long in_x0;
  long lVar4;
  PlantGatlingPea *this;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x3b8));
  if (bVar2) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x3b8));
    this = Sexy::RtObject::Cast<PlantGatlingPea>(*(RtObject **)(lVar4 + 0xa8));
    cVar3 = PlantGatlingPea::IsInGeneBuffAttack(this);
    if (cVar3 != '\0') {
      std::string::string(in_x8,"attack02");
      nop();
      goto LAB_0413b5f8;
    }
  }
  std::string::string(in_x8,"attack");
  nop();
LAB_0413b5f8:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GatlingPea::getWaterAnimName() */

void PlantAnimRig_GatlingPea::getWaterAnimName(void)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  long in_x0;
  long lVar4;
  PlantGatlingPea *this;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x3b8));
  if (bVar2) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x3b8));
    this = Sexy::RtObject::Cast<PlantGatlingPea>(*(RtObject **)(lVar4 + 0xa8));
    cVar3 = PlantGatlingPea::IsInGeneBuffAttack(this);
    if (cVar3 != '\0') {
      std::string::string(in_x8,"water02");
      nop();
      goto LAB_0413b6bc;
    }
  }
  std::string::string(in_x8,"water");
  nop();
LAB_0413b6bc:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

