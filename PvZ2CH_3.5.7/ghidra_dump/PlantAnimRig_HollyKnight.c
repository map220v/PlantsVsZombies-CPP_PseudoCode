// Class: PlantAnimRig_HollyKnight


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HollyKnight::PlayPlantFoodStart(int, RtReflectionDelegate<Sexy::Delegate0>,
   RtReflectionDelegate<Sexy::Delegate0>, RtReflectionDelegate<Sexy::Delegate0>) */

void PlantAnimRig_HollyKnight::PlayPlantFoodStart(PopAnimRig *param_1)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"plantfood");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop(param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)param_1,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* PlantAnimRig_HollyKnight::SetNumDamageStates(int) */

void __thiscall
PlantAnimRig_HollyKnight::SetNumDamageStates(PlantAnimRig_HollyKnight *this,int param_1)

{
  *(int *)(this + 0x3b8) = param_1;
  return;
}


/* PlantAnimRig_HollyKnight::CalcDamageStateCount() */

undefined4 __thiscall PlantAnimRig_HollyKnight::CalcDamageStateCount(PlantAnimRig_HollyKnight *this)

{
  return *(undefined4 *)(this + 0x3b8);
}


/* PlantAnimRig_HollyKnight::~PlantAnimRig_HollyKnight() */

void __thiscall PlantAnimRig_HollyKnight::~PlantAnimRig_HollyKnight(PlantAnimRig_HollyKnight *this)

{
  *(undefined ***)this = &PTR_GetClass_06825760;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_HollyKnight_068259c8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_HollyKnight::~PlantAnimRig_HollyKnight() */

void __thiscall PlantAnimRig_HollyKnight::~PlantAnimRig_HollyKnight(PlantAnimRig_HollyKnight *this)

{
  ~PlantAnimRig_HollyKnight(this + -0x10);
  return;
}


/* PlantAnimRig_HollyKnight::~PlantAnimRig_HollyKnight() */

void __thiscall PlantAnimRig_HollyKnight::~PlantAnimRig_HollyKnight(PlantAnimRig_HollyKnight *this)

{
  ~PlantAnimRig_HollyKnight(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_HollyKnight::~PlantAnimRig_HollyKnight() */

void __thiscall PlantAnimRig_HollyKnight::~PlantAnimRig_HollyKnight(PlantAnimRig_HollyKnight *this)

{
  ~PlantAnimRig_HollyKnight(this + -0x10);
  return;
}


/* PlantAnimRig_HollyKnight::PlantAnimRig_HollyKnight() */

void __thiscall PlantAnimRig_HollyKnight::PlantAnimRig_HollyKnight(PlantAnimRig_HollyKnight *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3b8) = 0;
  this[0x3bc] = (PlantAnimRig_HollyKnight)0x0;
  *(undefined ***)this = &PTR_GetClass_06825760;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_HollyKnight_068259c8;
  return;
}


/* PlantAnimRig_HollyKnight::StaticNew() */

PlantAnimRig_HollyKnight * PlantAnimRig_HollyKnight::StaticNew(void)

{
  PlantAnimRig_HollyKnight *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_HollyKnight(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HollyKnight::StaticClassInit() */

void PlantAnimRig_HollyKnight::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_HollyKnight");
    (*pcVar2)(plVar1,asStack_10,FUN_04286b04,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_HollyKnight::StaticGetClass() */

long * PlantAnimRig_HollyKnight::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_HollyKnight",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_HollyKnight::GetClass() const */

long * PlantAnimRig_HollyKnight::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_HollyKnight",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_HollyKnight::ShowNumBerries(int) */

void __thiscall PlantAnimRig_HollyKnight::ShowNumBerries(PlantAnimRig_HollyKnight *this,int param_1)

{
  bool bVar1;
  string *psVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = 0;
  iVar4 = 0;
  do {
    bVar1 = iVar4 < param_1;
    iVar4 = iVar4 + 1;
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,(string *)(BerryIdleLayerNames + lVar3),bVar1)
    ;
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,(string *)(BerryFireLayerNames + lVar3),bVar1)
    ;
    PopAnimRig::SetLayerVisibility
              ((PopAnimRig *)this,(string *)(BerryReadyLayerNames + lVar3),bVar1);
    psVar2 = (string *)(LeafReadyLayerNames + lVar3);
    lVar3 = lVar3 + 8;
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar2,bVar1);
  } while (iVar4 != 3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HollyKnight::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_HollyKnight::PlayAttack(PlantAnimRig_HollyKnight *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  undefined1 *__n;
  undefined1 auStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  __n = auStack_60;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack");
  nop();
  if (this[0x3bc] != (PlantAnimRig_HollyKnight)0x0) {
    std::string::append(asStack_58,"attack5",(size_t)__n);
  }
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HollyKnight::PlaySelected() */

void __thiscall PlantAnimRig_HollyKnight::PlaySelected(PlantAnimRig_HollyKnight *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"ready");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    ShowNumBerries(this,0);
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}

