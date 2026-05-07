// Class: PlantAnimRig_Sarracenia


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sarracenia::getPlantFoodMainAnimName() */

void PlantAnimRig_Sarracenia::getPlantFoodMainAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x220) == '\0') {
    __s = "pf1";
  }
  else {
    __s = "pf2";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sarracenia::StaticClassInit() */

void PlantAnimRig_Sarracenia::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Sarracenia");
    (*pcVar2)(plVar1,asStack_10,FUN_04d1d820,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Sarracenia::StaticGetClass() */

long * PlantAnimRig_Sarracenia::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Sarracenia",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Sarracenia::GetClass() const */

long * PlantAnimRig_Sarracenia::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Sarracenia",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Sarracenia::~PlantAnimRig_Sarracenia() */

void __thiscall PlantAnimRig_Sarracenia::~PlantAnimRig_Sarracenia(PlantAnimRig_Sarracenia *this)

{
  *(undefined ***)this = &PTR_GetClass_069a9900;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Sarracenia_069a9b68;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Sarracenia::~PlantAnimRig_Sarracenia() */

void __thiscall PlantAnimRig_Sarracenia::~PlantAnimRig_Sarracenia(PlantAnimRig_Sarracenia *this)

{
  ~PlantAnimRig_Sarracenia(this + -0x10);
  return;
}


/* PlantAnimRig_Sarracenia::~PlantAnimRig_Sarracenia() */

void __thiscall PlantAnimRig_Sarracenia::~PlantAnimRig_Sarracenia(PlantAnimRig_Sarracenia *this)

{
  ~PlantAnimRig_Sarracenia(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Sarracenia::~PlantAnimRig_Sarracenia() */

void __thiscall PlantAnimRig_Sarracenia::~PlantAnimRig_Sarracenia(PlantAnimRig_Sarracenia *this)

{
  ~PlantAnimRig_Sarracenia(this + -0x10);
  return;
}


/* PlantAnimRig_Sarracenia::PlantAnimRig_Sarracenia() */

void __thiscall PlantAnimRig_Sarracenia::PlantAnimRig_Sarracenia(PlantAnimRig_Sarracenia *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069a9900;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Sarracenia_069a9b68;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x3b8));
  return;
}


/* PlantAnimRig_Sarracenia::StaticNew() */

PlantAnimRig_Sarracenia * PlantAnimRig_Sarracenia::StaticNew(void)

{
  PlantAnimRig_Sarracenia *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Sarracenia(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sarracenia::getIdleAnimationName() */

void PlantAnimRig_Sarracenia::getIdleAnimationName(void)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  long in_x0;
  PlantSarracenia *this;
  string *in_x8;
  float fVar4;
  
  lVar1 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x3b8));
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x3b8));
    nop();
    cVar3 = PlantSarracenia::IsInSpecialStatus(this);
    if (cVar3 != '\0') {
      std::string::string(in_x8,"ready");
      nop();
      goto LAB_04d1bda8;
    }
    fVar4 = (float)Sexy::Rand(1.0);
    if (fVar4 < 0.5) {
      std::string::string(in_x8,"idle2");
      nop();
      goto LAB_04d1bda8;
    }
  }
  std::string::string(in_x8,"idle1");
  nop();
LAB_04d1bda8:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sarracenia::getAttackAnimationName() */

void PlantAnimRig_Sarracenia::getAttackAnimationName(void)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  long in_x0;
  PlantSarracenia *this;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x3b8));
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x3b8));
    nop();
    cVar3 = PlantSarracenia::IsInSpecialStatus(this);
    if (cVar3 != '\0') {
      std::string::string(in_x8,"attack3");
      nop();
      goto LAB_04d1be6c;
    }
  }
  std::string::string(in_x8,"attack2");
  nop();
LAB_04d1be6c:
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

