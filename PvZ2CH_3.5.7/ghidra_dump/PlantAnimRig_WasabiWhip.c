// Class: PlantAnimRig_WasabiWhip


/* PlantAnimRig_WasabiWhip::PlayIdleLooped() */

char __thiscall PlantAnimRig_WasabiWhip::PlayIdleLooped(PlantAnimRig_WasabiWhip *this)

{
  char cVar1;
  
  cVar1 = PlantIdleAwareAnimRig::PlayIdleLooped((PlantIdleAwareAnimRig *)this);
  if (cVar1 != '\0') {
    PlantAnimRig::SetState((PlantAnimRig *)this,1);
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_WasabiWhip::StaticClassInit() */

void PlantAnimRig_WasabiWhip::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_WasabiWhip");
    (*pcVar2)(plVar1,asStack_10,FUN_0397f508,0x3f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_WasabiWhip::StaticGetClass() */

long * PlantAnimRig_WasabiWhip::StaticGetClass(void)

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
  uVar2 = PlantIdleAwareAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_WasabiWhip",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_WasabiWhip::GetClass() const */

long * PlantAnimRig_WasabiWhip::GetClass(void)

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
  uVar2 = PlantIdleAwareAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_WasabiWhip",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_WasabiWhip::getAttackAnimLabel(MeleePlantTargeter::TargetDirection) */

void PlantAnimRig_WasabiWhip::getAttackAnimLabel(string *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  char *__s;
  
  lVar1 = ___stack_chk_guard;
  if (param_3 == 2) {
    __s = "attack";
  }
  else {
    __s = "attack2";
  }
  std::string::string(param_1,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_WasabiWhip::PlayPunchAttack(MeleePlantTargeter::TargetDirection,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_WasabiWhip::PlayPunchAttack
          (PlantAnimRig_WasabiWhip *this,undefined8 param_2,RtReflectionDelegate *param_3)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getAttackAnimLabel(asStack_58);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* PlantAnimRig_WasabiWhip::PlantAnimRig_WasabiWhip() */

void __thiscall PlantAnimRig_WasabiWhip::PlantAnimRig_WasabiWhip(PlantAnimRig_WasabiWhip *this)

{
  PlantIdleAwareAnimRig::PlantIdleAwareAnimRig((PlantIdleAwareAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_066dada0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_WasabiWhip_066db008;
  return;
}


/* PlantAnimRig_WasabiWhip::StaticNew() */

PlantAnimRig_WasabiWhip * PlantAnimRig_WasabiWhip::StaticNew(void)

{
  PlantAnimRig_WasabiWhip *this;
  
  this = ::operator_new(0x3f0);
  PlantAnimRig_WasabiWhip(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_WasabiWhip::onPopAnimInitialized() */

void __thiscall PlantAnimRig_WasabiWhip::onPopAnimInitialized(PlantAnimRig_WasabiWhip *this)

{
  undefined1 auStack_28 [8];
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig_PyreVine::onPopAnimInitialized((PlantAnimRig_PyreVine *)this);
  std::vector<int,std::allocator<int>>::vector(avStack_20,&DAT_05751e90,3,auStack_28);
  IdleAnimationSelector::SetWeights((vector *)(this + 0x3b8));
  std::vector<int,std::allocator<int>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_WasabiWhip::~PlantAnimRig_WasabiWhip() */

void __thiscall PlantAnimRig_WasabiWhip::~PlantAnimRig_WasabiWhip(PlantAnimRig_WasabiWhip *this)

{
  *(undefined ***)this = &PTR_GetClass_066dada0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_WasabiWhip_066db008;
  PlantIdleAwareAnimRig::~PlantIdleAwareAnimRig((PlantIdleAwareAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_WasabiWhip::~PlantAnimRig_WasabiWhip() */

void __thiscall PlantAnimRig_WasabiWhip::~PlantAnimRig_WasabiWhip(PlantAnimRig_WasabiWhip *this)

{
  ~PlantAnimRig_WasabiWhip(this + -0x10);
  return;
}


/* PlantAnimRig_WasabiWhip::~PlantAnimRig_WasabiWhip() */

void __thiscall PlantAnimRig_WasabiWhip::~PlantAnimRig_WasabiWhip(PlantAnimRig_WasabiWhip *this)

{
  ~PlantAnimRig_WasabiWhip(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_WasabiWhip::~PlantAnimRig_WasabiWhip() */

void __thiscall PlantAnimRig_WasabiWhip::~PlantAnimRig_WasabiWhip(PlantAnimRig_WasabiWhip *this)

{
  ~PlantAnimRig_WasabiWhip(this + -0x10);
  return;
}

