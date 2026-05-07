// Class: PlantAnimRig_Monotropa


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Monotropa::getWaterAnimName() */

void __thiscall PlantAnimRig_Monotropa::getWaterAnimName(PlantAnimRig_Monotropa *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"water1");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Monotropa::StaticClassInit() */

void PlantAnimRig_Monotropa::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Monotropa");
    (*pcVar2)(plVar1,asStack_10,FUN_04cbd8c8,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Monotropa::StaticGetClass() */

long * PlantAnimRig_Monotropa::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Monotropa",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Monotropa::GetClass() const */

long * PlantAnimRig_Monotropa::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Monotropa",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Monotropa::~PlantAnimRig_Monotropa() */

void __thiscall PlantAnimRig_Monotropa::~PlantAnimRig_Monotropa(PlantAnimRig_Monotropa *this)

{
  *(undefined ***)this = &PTR_GetClass_0699a590;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Monotropa_0699a7f8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Monotropa::~PlantAnimRig_Monotropa() */

void __thiscall PlantAnimRig_Monotropa::~PlantAnimRig_Monotropa(PlantAnimRig_Monotropa *this)

{
  ~PlantAnimRig_Monotropa(this + -0x10);
  return;
}


/* PlantAnimRig_Monotropa::~PlantAnimRig_Monotropa() */

void __thiscall PlantAnimRig_Monotropa::~PlantAnimRig_Monotropa(PlantAnimRig_Monotropa *this)

{
  ~PlantAnimRig_Monotropa(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Monotropa::~PlantAnimRig_Monotropa() */

void __thiscall PlantAnimRig_Monotropa::~PlantAnimRig_Monotropa(PlantAnimRig_Monotropa *this)

{
  ~PlantAnimRig_Monotropa(this + -0x10);
  return;
}


/* PlantAnimRig_Monotropa::PlantAnimRig_Monotropa() */

void __thiscall PlantAnimRig_Monotropa::PlantAnimRig_Monotropa(PlantAnimRig_Monotropa *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0699a590;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Monotropa_0699a7f8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x3b8));
  return;
}


/* PlantAnimRig_Monotropa::StaticNew() */

PlantAnimRig_Monotropa * PlantAnimRig_Monotropa::StaticNew(void)

{
  PlantAnimRig_Monotropa *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Monotropa(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Monotropa::getPlantFoodOnAnimName() */

void PlantAnimRig_Monotropa::getPlantFoodOnAnimName(void)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  long in_x0;
  Plant *this;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x3b8));
  if (bVar2) {
    this = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x3b8));
    cVar3 = Plant::GetAvatarEnable(this);
    if (cVar3 == '\0') {
      __s = "plantfood_on";
    }
    else {
      __s = "plantfood_on_avatar";
    }
    std::string::string(in_x8,__s);
    nop();
  }
  else {
    std::string::string(in_x8,"plantfood_on");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Monotropa::getPlantFoodMainAnimName() */

void PlantAnimRig_Monotropa::getPlantFoodMainAnimName(void)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  long in_x0;
  Plant *this;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x3b8));
  if (bVar2) {
    this = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x3b8));
    cVar3 = Plant::GetAvatarEnable(this);
    if (cVar3 == '\0') {
      __s = "plantfood";
    }
    else {
      __s = "plantfood_avatar";
    }
    std::string::string(in_x8,__s);
    nop();
  }
  else {
    std::string::string(in_x8,"plantfood");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Monotropa::getPlantFoodOffAnimName() */

void PlantAnimRig_Monotropa::getPlantFoodOffAnimName(void)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  long in_x0;
  Plant *this;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x3b8));
  if (bVar2) {
    this = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x3b8));
    cVar3 = Plant::GetAvatarEnable(this);
    if (cVar3 == '\0') {
      __s = "plantfood_off";
    }
    else {
      __s = "plantfood_off_avatar";
    }
    std::string::string(in_x8,__s);
    nop();
  }
  else {
    std::string::string(in_x8,"plantfood_off");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

