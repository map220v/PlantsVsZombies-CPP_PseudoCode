// Class: PlantAnimRig_LancerHoya


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_LancerHoya::StaticClassInit() */

void PlantAnimRig_LancerHoya::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_LancerHoya");
    (*pcVar2)(plVar1,asStack_10,FUN_04d06564,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_LancerHoya::StaticGetClass() */

long * PlantAnimRig_LancerHoya::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_LancerHoya",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_LancerHoya::GetClass() const */

long * PlantAnimRig_LancerHoya::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_LancerHoya",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_LancerHoya::PlayTurnToSpecial(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_LancerHoya::PlayTurnToSpecial
          (PlantAnimRig_LancerHoya *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"turn_to_special1");
  nop();
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_LancerHoya::~PlantAnimRig_LancerHoya() */

void __thiscall PlantAnimRig_LancerHoya::~PlantAnimRig_LancerHoya(PlantAnimRig_LancerHoya *this)

{
  *(undefined ***)this = &PTR_GetClass_069a67c0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_LancerHoya_069a6a28;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_LancerHoya::~PlantAnimRig_LancerHoya() */

void __thiscall PlantAnimRig_LancerHoya::~PlantAnimRig_LancerHoya(PlantAnimRig_LancerHoya *this)

{
  ~PlantAnimRig_LancerHoya(this + -0x10);
  return;
}


/* PlantAnimRig_LancerHoya::~PlantAnimRig_LancerHoya() */

void __thiscall PlantAnimRig_LancerHoya::~PlantAnimRig_LancerHoya(PlantAnimRig_LancerHoya *this)

{
  ~PlantAnimRig_LancerHoya(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_LancerHoya::~PlantAnimRig_LancerHoya() */

void __thiscall PlantAnimRig_LancerHoya::~PlantAnimRig_LancerHoya(PlantAnimRig_LancerHoya *this)

{
  ~PlantAnimRig_LancerHoya(this + -0x10);
  return;
}


/* PlantAnimRig_LancerHoya::PlantAnimRig_LancerHoya() */

void __thiscall PlantAnimRig_LancerHoya::PlantAnimRig_LancerHoya(PlantAnimRig_LancerHoya *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069a67c0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_LancerHoya_069a6a28;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x3b8));
  return;
}


/* PlantAnimRig_LancerHoya::StaticNew() */

PlantAnimRig_LancerHoya * PlantAnimRig_LancerHoya::StaticNew(void)

{
  PlantAnimRig_LancerHoya *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_LancerHoya(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_LancerHoya::getPlantFoodMainAnimName() */

void PlantAnimRig_LancerHoya::getPlantFoodMainAnimName(void)

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
      __s = "plantfood2_golden";
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
/* PlantAnimRig_LancerHoya::PlaySpecialAttack(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_LancerHoya::PlaySpecialAttack
          (PlantAnimRig_LancerHoya *this,RtReflectionDelegate *param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined1 *__n;
  undefined1 auStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  __n = auStack_60;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"special_attack1");
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x3b8));
  if (bVar1) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
    iVar2 = FUN_04d039ec(*(undefined4 *)(lVar3 + 0x50));
    if (iVar2 == 5) {
      std::string::append(asStack_58,"special_attack2_golden",(size_t)__n);
    }
  }
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_LancerHoya::getIdleAnimationName() */

void PlantAnimRig_LancerHoya::getIdleAnimationName(void)

{
  RtWeakPtr *this;
  long lVar1;
  bool bVar2;
  char cVar3;
  long in_x0;
  PlantSarracenia *this_00;
  long lVar4;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  this = (RtWeakPtr *)(in_x0 + 0x3b8);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    nop();
    cVar3 = PlantSarracenia::IsInSpecialStatus(this_00);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    FUN_04d039ec(*(undefined4 *)(lVar4 + 0x50));
    if (cVar3 != '\0') {
      std::string::string(in_x8,"special_idle1");
      nop();
      goto LAB_04d04de0;
    }
  }
  std::string::string(in_x8,"idle");
  nop();
LAB_04d04de0:
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_LancerHoya::getAttackAnimationName() */

void PlantAnimRig_LancerHoya::getAttackAnimationName(void)

{
  RtWeakPtr *this;
  long lVar1;
  bool bVar2;
  char cVar3;
  long in_x0;
  PlantSarracenia *this_00;
  long lVar4;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  this = (RtWeakPtr *)(in_x0 + 0x3b8);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    nop();
    cVar3 = PlantSarracenia::IsInSpecialStatus(this_00);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    FUN_04d039ec(*(undefined4 *)(lVar4 + 0x50));
    if (cVar3 != '\0') {
      std::string::string(in_x8,"attack1");
      nop();
      goto LAB_04d04ec0;
    }
  }
  std::string::string(in_x8,"attack");
  nop();
LAB_04d04ec0:
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

