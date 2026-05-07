// Class: PlantAnimRig_BeanChemist


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_BeanChemist::StaticClassInit() */

void PlantAnimRig_BeanChemist::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_BeanChemist");
    (*pcVar2)(plVar1,asStack_10,FUN_04251724,0x3c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_BeanChemist::StaticGetClass() */

long * PlantAnimRig_BeanChemist::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_BeanChemist",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_BeanChemist::GetClass() const */

long * PlantAnimRig_BeanChemist::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_BeanChemist",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_BeanChemist::~PlantAnimRig_BeanChemist() */

void __thiscall PlantAnimRig_BeanChemist::~PlantAnimRig_BeanChemist(PlantAnimRig_BeanChemist *this)

{
  *(undefined ***)this = &PTR_GetClass_06818da0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_BeanChemist_06819008;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3c0));
  std::string::~string((string *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_BeanChemist::~PlantAnimRig_BeanChemist() */

void __thiscall PlantAnimRig_BeanChemist::~PlantAnimRig_BeanChemist(PlantAnimRig_BeanChemist *this)

{
  ~PlantAnimRig_BeanChemist(this + -0x10);
  return;
}


/* PlantAnimRig_BeanChemist::~PlantAnimRig_BeanChemist() */

void __thiscall PlantAnimRig_BeanChemist::~PlantAnimRig_BeanChemist(PlantAnimRig_BeanChemist *this)

{
  ~PlantAnimRig_BeanChemist(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_BeanChemist::~PlantAnimRig_BeanChemist() */

void __thiscall PlantAnimRig_BeanChemist::~PlantAnimRig_BeanChemist(PlantAnimRig_BeanChemist *this)

{
  ~PlantAnimRig_BeanChemist(this + -0x10);
  return;
}


/* PlantAnimRig_BeanChemist::PlantAnimRig_BeanChemist() */

void __thiscall PlantAnimRig_BeanChemist::PlantAnimRig_BeanChemist(PlantAnimRig_BeanChemist *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06818da0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_BeanChemist_06819008;
  Set8BytesTo0(this + 0x3b8);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x3c0));
  return;
}


/* PlantAnimRig_BeanChemist::StaticNew() */

PlantAnimRig_BeanChemist * PlantAnimRig_BeanChemist::StaticNew(void)

{
  PlantAnimRig_BeanChemist *this;
  
  this = ::operator_new(0x3c8);
  PlantAnimRig_BeanChemist(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_BeanChemist::getPlantFoodMainAnimName() */

void PlantAnimRig_BeanChemist::getPlantFoodMainAnimName(void)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  long in_x0;
  Plant *this;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x3c0));
  if (bVar2) {
    this = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x3c0));
    cVar3 = Plant::GetAvatarEnable(this);
    if (cVar3 != '\0') {
      std::string::string(in_x8,"plantfood2");
      nop();
      goto LAB_04251f8c;
    }
  }
  std::string::string(in_x8,"plantfood");
  nop();
LAB_04251f8c:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_BeanChemist::getIdleAnimationName() */

void PlantAnimRig_BeanChemist::getIdleAnimationName(void)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long in_x0;
  long lVar4;
  PlantBeanChemist *this;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x3c0));
  if (bVar2) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x3c0));
    this = Sexy::RtObject::Cast<PlantBeanChemist>(*(RtObject **)(lVar4 + 0xa8));
    iVar3 = EA::Thread::Mutex::GetLockCount((Mutex *)this);
    if (iVar3 == 2) {
      std::string::string(in_x8,"idle03");
      nop();
      goto LAB_04252d04;
    }
    if (iVar3 == 1) {
      std::string::string(in_x8,"idle02");
      nop();
      goto LAB_04252d04;
    }
  }
  std::string::string(in_x8,"idle");
  nop();
LAB_04252d04:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_BeanChemist::getWaterAnimName() */

void PlantAnimRig_BeanChemist::getWaterAnimName(void)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long in_x0;
  long lVar4;
  PlantBeanChemist *this;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x3c0));
  if (bVar2) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x3c0));
    this = Sexy::RtObject::Cast<PlantBeanChemist>(*(RtObject **)(lVar4 + 0xa8));
    iVar3 = EA::Thread::Mutex::GetLockCount((Mutex *)this);
    if (iVar3 == 2) {
      std::string::string(in_x8,"water03");
      nop();
      goto LAB_04252df4;
    }
    if (iVar3 == 1) {
      std::string::string(in_x8,"water02");
      nop();
      goto LAB_04252df4;
    }
  }
  std::string::string(in_x8,"water");
  nop();
LAB_04252df4:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

