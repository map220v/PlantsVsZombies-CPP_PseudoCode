// Class: PlantAnimRig_HotDate


/* PlantAnimRig_HotDate::~PlantAnimRig_HotDate() */

void __thiscall PlantAnimRig_HotDate::~PlantAnimRig_HotDate(PlantAnimRig_HotDate *this)

{
  *(undefined ***)this = &PTR_GetClass_066dbbc0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_HotDate_066dbe28;
  PlantAnimRig_SweetPotato::~PlantAnimRig_SweetPotato((PlantAnimRig_SweetPotato *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_HotDate::~PlantAnimRig_HotDate() */

void __thiscall PlantAnimRig_HotDate::~PlantAnimRig_HotDate(PlantAnimRig_HotDate *this)

{
  ~PlantAnimRig_HotDate(this + -0x10);
  return;
}


/* PlantAnimRig_HotDate::~PlantAnimRig_HotDate() */

void __thiscall PlantAnimRig_HotDate::~PlantAnimRig_HotDate(PlantAnimRig_HotDate *this)

{
  ~PlantAnimRig_HotDate(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_HotDate::~PlantAnimRig_HotDate() */

void __thiscall PlantAnimRig_HotDate::~PlantAnimRig_HotDate(PlantAnimRig_HotDate *this)

{
  ~PlantAnimRig_HotDate(this + -0x10);
  return;
}


/* PlantAnimRig_HotDate::PlantAnimRig_HotDate() */

void __thiscall PlantAnimRig_HotDate::PlantAnimRig_HotDate(PlantAnimRig_HotDate *this)

{
  PlantAnimRig_SweetPotato::PlantAnimRig_SweetPotato((PlantAnimRig_SweetPotato *)this);
  *(undefined ***)this = &PTR_GetClass_066dbbc0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_HotDate_066dbe28;
  return;
}


/* PlantAnimRig_HotDate::StaticNew() */

PlantAnimRig_HotDate * PlantAnimRig_HotDate::StaticNew(void)

{
  PlantAnimRig_HotDate *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_HotDate(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HotDate::StaticClassInit() */

void PlantAnimRig_HotDate::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_HotDate");
    (*pcVar2)(plVar1,asStack_10,FUN_03985400,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_HotDate::StaticGetClass() */

long * PlantAnimRig_HotDate::StaticGetClass(void)

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
  uVar2 = PlantAnimRig_SweetPotato::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_HotDate",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_HotDate::GetClass() const */

long * PlantAnimRig_HotDate::GetClass(void)

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
  uVar2 = PlantAnimRig_SweetPotato::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_HotDate",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HotDate::PlayDeathAnimation(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_HotDate::PlayDeathAnimation(PlantAnimRig_HotDate *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"death");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HotDate::PlayIdleLooped() */

void __thiscall PlantAnimRig_HotDate::PlayIdleLooped(PlantAnimRig_HotDate *this)

{
  undefined8 uVar1;
  string *__n;
  undefined8 uVar2;
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_60,"");
  nop();
  std::string::string(asStack_50,"");
  nop();
  std::string::string(asStack_48,"2");
  nop();
  __n = asStack_58;
  std::string::string(asStack_40,"3");
  nop();
  if (*(int *)(this + 0x22c) == 0) {
    uVar2 = 2;
    std::string::append(asStack_60,"idle",(size_t)__n);
  }
  else {
    uVar1 = FUN_0547429c(asStack_50 + (long)(*(int *)(this + 0x22c) + -1) * 8);
    uVar2 = 0;
    Sexy::StrFormat("damage%s",asStack_58,uVar1);
    FUN_05474278(asStack_60,asStack_58);
    std::string::~string(asStack_58);
  }
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_60,uVar2,aDStack_38);
  PlantAnimRig::SetState((PlantAnimRig *)this,1);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  std::string::~string(asStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HotDate::onDamageStateIndexChanged(int) */

void __thiscall
PlantAnimRig_HotDate::onDamageStateIndexChanged(PlantAnimRig_HotDate *this,int param_1)

{
  string *psVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig::onDamageStateIndexChanged((int)this);
  Sexy::StrFormat("Play_Plant_HotDate_Damage%d_Start",asStack_10,(ulong)(param_1 + 1));
  psVar1 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(psVar1,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

