// Class: PlantAnimRig_FireShroom


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_FireShroom::PlayPreviewAnim(bool) */

void PlantAnimRig_FireShroom::PlayPreviewAnim(bool param_1)

{
  long lVar1;
  int iVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"IDLE3_STAGE3");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar2 = PopAnimRig::PlayAndContinue((PopAnimRig *)(ulong)param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)((PopAnimRig *)(ulong)param_1 + 0x218) = 1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_FireShroom::getPlantFoodMainAnimName() */

void __thiscall PlantAnimRig_FireShroom::getPlantFoodMainAnimName(PlantAnimRig_FireShroom *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"PLANTFOOD");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_FireShroom::getIdleAnimationName() */

void PlantAnimRig_FireShroom::getIdleAnimationName(void)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  long in_x0;
  
  bVar2 = *(byte *)(in_x0 + 0x3b8);
  uVar4 = Sexy::Rand();
  uVar1 = bVar2 + 1;
  iVar3 = (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) % 3;
  if (iVar3 == 0) {
    Sexy::StrFormat("IDLE_STAGE%d",(ulong)uVar1);
    return;
  }
  Sexy::StrFormat("IDLE%d_STAGE%d",(ulong)(iVar3 + 1),(ulong)uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_FireShroom::StaticClassInit() */

void PlantAnimRig_FireShroom::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_FireShroom");
    (*pcVar2)(plVar1,asStack_10,FUN_042189d0,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_FireShroom::StaticGetClass() */

long * PlantAnimRig_FireShroom::StaticGetClass(void)

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
  uVar2 = PlantAnimRig_IceShroom::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_FireShroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_FireShroom::GetClass() const */

long * PlantAnimRig_FireShroom::GetClass(void)

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
  uVar2 = PlantAnimRig_IceShroom::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_FireShroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_FireShroom::~PlantAnimRig_FireShroom() */

void __thiscall PlantAnimRig_FireShroom::~PlantAnimRig_FireShroom(PlantAnimRig_FireShroom *this)

{
  *(undefined ***)this = &PTR_GetClass_0680d950;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_FireShroom_0680dbb8;
  PlantAnimRig_IceShroom::~PlantAnimRig_IceShroom((PlantAnimRig_IceShroom *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_FireShroom::~PlantAnimRig_FireShroom() */

void __thiscall PlantAnimRig_FireShroom::~PlantAnimRig_FireShroom(PlantAnimRig_FireShroom *this)

{
  ~PlantAnimRig_FireShroom(this + -0x10);
  return;
}


/* PlantAnimRig_FireShroom::~PlantAnimRig_FireShroom() */

void __thiscall PlantAnimRig_FireShroom::~PlantAnimRig_FireShroom(PlantAnimRig_FireShroom *this)

{
  ~PlantAnimRig_FireShroom(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_FireShroom::~PlantAnimRig_FireShroom() */

void __thiscall PlantAnimRig_FireShroom::~PlantAnimRig_FireShroom(PlantAnimRig_FireShroom *this)

{
  ~PlantAnimRig_FireShroom(this + -0x10);
  return;
}


/* PlantAnimRig_FireShroom::PlantAnimRig_FireShroom() */

void __thiscall PlantAnimRig_FireShroom::PlantAnimRig_FireShroom(PlantAnimRig_FireShroom *this)

{
  PlantAnimRig_IceShroom::PlantAnimRig_IceShroom((PlantAnimRig_IceShroom *)this);
  this[0x3b9] = (PlantAnimRig_FireShroom)0x0;
  *(undefined ***)this = &PTR_GetClass_0680d950;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_FireShroom_0680dbb8;
  return;
}


/* PlantAnimRig_FireShroom::StaticNew() */

PlantAnimRig_FireShroom * PlantAnimRig_FireShroom::StaticNew(void)

{
  PlantAnimRig_FireShroom *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_FireShroom(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_FireShroom::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_FireShroom::PlayAttack(PlantAnimRig_FireShroom *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string *__n;
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = asStack_58;
  std::string::string(asStack_60,"");
  nop();
  Sexy::StrFormat("ATTACK_STAGE%d",asStack_58,(ulong)((byte)this[0x3b8] + 1));
  FUN_05474278(asStack_60,asStack_58);
  std::string::~string(asStack_58);
  if (this[0x3b9] != (PlantAnimRig_FireShroom)0x0) {
    std::string::append(asStack_60,"ATTACK_STAGE5",(size_t)__n);
    this[0x3b9] = (PlantAnimRig_FireShroom)0x0;
  }
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_60,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  std::string::~string(asStack_60);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}

