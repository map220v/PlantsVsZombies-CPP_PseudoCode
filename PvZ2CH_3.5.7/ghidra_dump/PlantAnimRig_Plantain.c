// Class: PlantAnimRig_Plantain


/* PlantAnimRig_Plantain::~PlantAnimRig_Plantain() */

void __thiscall PlantAnimRig_Plantain::~PlantAnimRig_Plantain(PlantAnimRig_Plantain *this)

{
  *(undefined ***)this = &PTR_GetClass_066c0ef0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Plantain_066c1158;
  std::string::~string((string *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Plantain::~PlantAnimRig_Plantain() */

void __thiscall PlantAnimRig_Plantain::~PlantAnimRig_Plantain(PlantAnimRig_Plantain *this)

{
  ~PlantAnimRig_Plantain(this + -0x10);
  return;
}


/* PlantAnimRig_Plantain::~PlantAnimRig_Plantain() */

void __thiscall PlantAnimRig_Plantain::~PlantAnimRig_Plantain(PlantAnimRig_Plantain *this)

{
  ~PlantAnimRig_Plantain(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Plantain::~PlantAnimRig_Plantain() */

void __thiscall PlantAnimRig_Plantain::~PlantAnimRig_Plantain(PlantAnimRig_Plantain *this)

{
  ~PlantAnimRig_Plantain(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Plantain::StaticClassInit() */

void PlantAnimRig_Plantain::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Plantain");
    (*pcVar2)(plVar1,asStack_10,FUN_03905358,0x3c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Plantain::StaticGetClass() */

long * PlantAnimRig_Plantain::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Plantain",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Plantain::GetClass() const */

long * PlantAnimRig_Plantain::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Plantain",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Plantain::PlantAnimRig_Plantain() */

void __thiscall PlantAnimRig_Plantain::PlantAnimRig_Plantain(PlantAnimRig_Plantain *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_066c0ef0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Plantain_066c1158;
  Set8BytesTo0(this + 0x3b8);
  this[0x3c0] = (PlantAnimRig_Plantain)0x0;
  return;
}


/* PlantAnimRig_Plantain::StaticNew() */

PlantAnimRig_Plantain * PlantAnimRig_Plantain::StaticNew(void)

{
  PlantAnimRig_Plantain *this;
  
  this = ::operator_new(0x3c8);
  PlantAnimRig_Plantain(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Plantain::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_Plantain::PlayAttack(PlantAnimRig_Plantain *this,RtReflectionDelegate *param_2)

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
  if (this[0x3c0] != (PlantAnimRig_Plantain)0x0) {
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
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  std::string::~string(asStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Plantain::PlayRecoverEnd(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_Plantain::PlayRecoverEnd(PlantAnimRig_Plantain *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"rest_off");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* PlantAnimRig_Plantain::setIsSuperSkill(bool) */

void __thiscall PlantAnimRig_Plantain::setIsSuperSkill(PlantAnimRig_Plantain *this,bool param_1)

{
  this[0x3c0] = (PlantAnimRig_Plantain)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Plantain::PlayRecoverIn() */

void __thiscall PlantAnimRig_Plantain::PlayRecoverIn(PlantAnimRig_Plantain *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"rest_in");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Plantain::PlayPlantFoodEnd() */

void __thiscall PlantAnimRig_Plantain::PlayPlantFoodEnd(PlantAnimRig_Plantain *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"rest_in");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Plantain::PlayIdleLooped() */

void __thiscall PlantAnimRig_Plantain::PlayIdleLooped(PlantAnimRig_Plantain *this)

{
  int iVar1;
  long lVar2;
  size_t in_x2;
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = ProbabilitySet<std::string>::GetSize((ProbabilitySet<std::string> *)&DAT_06ab9890);
  if (lVar2 == 0) {
    iVar1 = 1;
    Set8BytesTo0(asStack_48);
    lVar2 = 0;
    do {
      std::string::append(asStack_48,"idle1",in_x2);
      FUN_05475d88(asStack_40,asStack_48);
      in_x2 = 10;
      ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)&DAT_06ab9890,asStack_40);
      std::string::~string(asStack_40);
      std::string::~string(asStack_48);
      while( true ) {
        lVar2 = lVar2 + 1;
        iVar1 = iVar1 + 1;
        Set8BytesTo0(asStack_48);
        if (lVar2 == 0) break;
        std::string::append(asStack_48,"idle1",in_x2);
        FUN_05475d88(asStack_40,asStack_48);
        in_x2 = (size_t)(uint)(&DAT_05751d50)[lVar2];
        ProbabilitySet<std::string>::AddItem
                  ((ProbabilitySet<std::string> *)&DAT_06ab9890,asStack_40);
        std::string::~string(asStack_40);
        std::string::~string(asStack_48);
        if (iVar1 == 3) goto LAB_03905cb4;
      }
    } while( true );
  }
LAB_03905cb4:
  ProbabilitySet<std::string>::PickItemIgnoring((string *)&DAT_06ab9890);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  if (iVar1 != -1) {
    thunk_FUN_05475e00(this + 0x3b8,asStack_40);
    *(undefined4 *)(this + 0x218) = 1;
  }
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}

