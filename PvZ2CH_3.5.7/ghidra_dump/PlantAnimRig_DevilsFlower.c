// Class: PlantAnimRig_DevilsFlower


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DevilsFlower::playLoopAnimation(std::string) */

void __thiscall
PlantAnimRig_DevilsFlower::playLoopAnimation(PlantAnimRig_DevilsFlower *this,undefined8 param_2)

{
  int iVar1;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,param_2,0,aDStack_38);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* PlantAnimRig_DevilsFlower::SetPlantPtr(Sexy::RtWeakPtr<Plant>) */

void __thiscall
PlantAnimRig_DevilsFlower::SetPlantPtr(PlantAnimRig_DevilsFlower *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x3b8),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DevilsFlower::onPopAnimInitialized() */

void __thiscall PlantAnimRig_DevilsFlower::onPopAnimInitialized(PlantAnimRig_DevilsFlower *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x3b8),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DevilsFlower::StaticClassInit() */

void PlantAnimRig_DevilsFlower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_DevilsFlower");
    (*pcVar2)(plVar1,asStack_10,FUN_04d66e7c,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_DevilsFlower::StaticGetClass() */

long * PlantAnimRig_DevilsFlower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_DevilsFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_DevilsFlower::GetClass() const */

long * PlantAnimRig_DevilsFlower::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_DevilsFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_DevilsFlower::~PlantAnimRig_DevilsFlower() */

void __thiscall
PlantAnimRig_DevilsFlower::~PlantAnimRig_DevilsFlower(PlantAnimRig_DevilsFlower *this)

{
  *(undefined ***)this = &PTR_GetClass_069b46f0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_DevilsFlower_069b4958;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_DevilsFlower::~PlantAnimRig_DevilsFlower() */

void __thiscall
PlantAnimRig_DevilsFlower::~PlantAnimRig_DevilsFlower(PlantAnimRig_DevilsFlower *this)

{
  ~PlantAnimRig_DevilsFlower(this + -0x10);
  return;
}


/* PlantAnimRig_DevilsFlower::~PlantAnimRig_DevilsFlower() */

void __thiscall
PlantAnimRig_DevilsFlower::~PlantAnimRig_DevilsFlower(PlantAnimRig_DevilsFlower *this)

{
  ~PlantAnimRig_DevilsFlower(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_DevilsFlower::~PlantAnimRig_DevilsFlower() */

void __thiscall
PlantAnimRig_DevilsFlower::~PlantAnimRig_DevilsFlower(PlantAnimRig_DevilsFlower *this)

{
  ~PlantAnimRig_DevilsFlower(this + -0x10);
  return;
}


/* PlantAnimRig_DevilsFlower::PlantAnimRig_DevilsFlower() */

void __thiscall
PlantAnimRig_DevilsFlower::PlantAnimRig_DevilsFlower(PlantAnimRig_DevilsFlower *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069b46f0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_DevilsFlower_069b4958;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x3b8));
  return;
}


/* PlantAnimRig_DevilsFlower::StaticNew() */

PlantAnimRig_DevilsFlower * PlantAnimRig_DevilsFlower::StaticNew(void)

{
  PlantAnimRig_DevilsFlower *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_DevilsFlower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DevilsFlower::getIdleAnimationName() */

void PlantAnimRig_DevilsFlower::getIdleAnimationName(void)

{
  long lVar1;
  bool bVar2;
  long in_x0;
  long extraout_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x3b8));
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x3b8));
    nop();
    if (extraout_x0 != 0) {
      PlantDevilsFlower::GetIdleName();
      goto LAB_04d64a18;
    }
  }
  std::string::string(in_x8,"idle01");
  nop();
LAB_04d64a18:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DevilsFlower::getPlantFoodMainAnimName() */

void PlantAnimRig_DevilsFlower::getPlantFoodMainAnimName(void)

{
  RtWeakPtr *this;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long in_x0;
  PlantDevilsFlower *this_00;
  char *__s;
  Point *__n;
  string *in_x8;
  string asStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  this = (RtWeakPtr *)(in_x0 + 0x3b8);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (bVar1) {
    __s = "plantfood_01";
    __n = (Point *)&local_10;
    std::string::string(asStack_20,"plantfood_01");
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    nop();
    cVar2 = PlantDevilsFlower::IsInParasiteStandby(this_00);
    if (cVar2 == '\0') {
      cVar2 = FUN_04d6172c(this_00[0x38]);
      if (cVar2 != '\0') {
        __s = "plantfood_02";
      }
      std::string::append(asStack_20,__s,(size_t)__n);
    }
    else {
      std::string::append(asStack_20,"plantfood_03",(size_t)__n);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    BoardEntity::CalcGridPosition();
    Sexy::Point::Point((Point *)&local_10,local_18 + 1,local_14);
    iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    cVar2 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_10);
    if ((((cVar2 != '\0') ||
         (cVar2 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_10), cVar2 != '\0')) ||
        (iVar4 = Board::GetGridSquareType(*(Board **)(gLawnApp + 0x9f0),local_10,local_c),
        iVar4 == 0)) || ((iVar4 == 3 || (iVar3 + -1 <= local_18)))) {
      FUN_05475ad8(asStack_20,"_extra");
    }
    FUN_05474148();
    std::string::~string(asStack_20);
  }
  else {
    std::string::string(in_x8,"plantfood_01");
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

