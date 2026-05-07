// Class: PlantAnimRig_Tigerstool


/* PlantAnimRig_Tigerstool::~PlantAnimRig_Tigerstool() */

void __thiscall PlantAnimRig_Tigerstool::~PlantAnimRig_Tigerstool(PlantAnimRig_Tigerstool *this)

{
  *(undefined ***)this = &PTR_GetClass_0679acd0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Tigerstool_0679af40;
  std::string::~string((string *)(this + 0x3c0));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Tigerstool::~PlantAnimRig_Tigerstool() */

void __thiscall PlantAnimRig_Tigerstool::~PlantAnimRig_Tigerstool(PlantAnimRig_Tigerstool *this)

{
  ~PlantAnimRig_Tigerstool(this + -0x10);
  return;
}


/* PlantAnimRig_Tigerstool::~PlantAnimRig_Tigerstool() */

void __thiscall PlantAnimRig_Tigerstool::~PlantAnimRig_Tigerstool(PlantAnimRig_Tigerstool *this)

{
  ~PlantAnimRig_Tigerstool(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Tigerstool::~PlantAnimRig_Tigerstool() */

void __thiscall PlantAnimRig_Tigerstool::~PlantAnimRig_Tigerstool(PlantAnimRig_Tigerstool *this)

{
  ~PlantAnimRig_Tigerstool(this + -0x10);
  return;
}


/* PlantAnimRig_Tigerstool::PlantAnimRig_Tigerstool() */

void __thiscall PlantAnimRig_Tigerstool::PlantAnimRig_Tigerstool(PlantAnimRig_Tigerstool *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0679acd0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Tigerstool_0679af40;
  Set8BytesTo0(this + 0x3c0);
  return;
}


/* PlantAnimRig_Tigerstool::StaticNew() */

PlantAnimRig_Tigerstool * PlantAnimRig_Tigerstool::StaticNew(void)

{
  PlantAnimRig_Tigerstool *this;
  
  this = ::operator_new(0x3c8);
  PlantAnimRig_Tigerstool(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Tigerstool::StaticClassInit() */

void PlantAnimRig_Tigerstool::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Tigerstool");
    (*pcVar2)(plVar1,asStack_10,FUN_03f58718,0x3c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Tigerstool::StaticGetClass() */

long * PlantAnimRig_Tigerstool::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Tigerstool",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Tigerstool::GetClass() const */

long * PlantAnimRig_Tigerstool::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Tigerstool",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Tigerstool::PlayPunchAttack(PlantAnimRig_Tigerstool::AttackType,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_Tigerstool::PlayPunchAttack
          (PlantAnimRig_Tigerstool *this,undefined4 param_2,RtReflectionDelegate *param_3)

{
  int iVar1;
  RtReflectionDelegate *__n;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  *(undefined4 *)(this + 0x3b8) = 0;
  local_8 = ___stack_chk_guard;
  __n = param_3;
  Set8BytesTo0(asStack_58);
  switch(param_2) {
  case 0:
    std::string::append(asStack_58,"attack2",(size_t)__n);
    break;
  case 1:
  case 3:
    std::string::append(asStack_58,"attack",(size_t)__n);
    break;
  case 2:
    std::string::append(asStack_58,"attack5",(size_t)__n);
    break;
  case 4:
    std::string::append(asStack_58,"attack7",(size_t)__n);
    break;
  case 5:
    std::string::append(asStack_58,"attack6",(size_t)__n);
  }
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  std::string::~string(asStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Tigerstool::PlayPlantFoodStart(int) */

void __thiscall
PlantAnimRig_Tigerstool::PlayPlantFoodStart(PlantAnimRig_Tigerstool *this,int param_1)

{
  int iVar1;
  char *__s;
  string asStack_60 [8];
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_60);
  if (this[0x220] == (PlantAnimRig_Tigerstool)0x0) {
    __s = "pf1";
  }
  else {
    __s = "pf2";
  }
  std::string::string(asStack_58,__s);
  FUN_05474278(asStack_60,asStack_58);
  std::string::~string(asStack_58);
  nop();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_50);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_60,0,aDStack_50);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 3;
    *(int *)(this + 0x228) = param_1;
    RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate0> *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
              ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)(this + 0x298),
               (RtReflectionDelegate *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate0> *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
              ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)(this + 0x328),
               (RtReflectionDelegate *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
  }
  std::string::~string(asStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Tigerstool::onBitingCompleted(std::string const&) */

void PlantAnimRig_Tigerstool::onBitingCompleted(string *param_1)

{
  int iVar1;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x3b8) < 3) {
    std::string::string(asStack_68,"claw");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onBitingCompleted");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aDStack_50,aRStack_60,
               asStack_58);
    iVar1 = PopAnimRig::PlayAndStop
                      ((PopAnimRig *)param_1,asStack_68,0,
                       (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                        *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    *(int *)(param_1 + 0x3b8) = *(int *)(param_1 + 0x3b8) + 1;
  }
  else {
    std::string::string(asStack_58,"claw");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_50);
    iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)param_1,asStack_58,0,aDStack_50);
    std::string::~string(asStack_58);
    nop();
  }
  if (iVar1 != -1) {
    *(undefined4 *)(param_1 + 0x218) = 2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}

