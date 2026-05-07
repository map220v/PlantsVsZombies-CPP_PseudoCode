// Class: PlantAnimRig_ShineVine


/* PlantAnimRig_ShineVine::~PlantAnimRig_ShineVine() */

void __thiscall PlantAnimRig_ShineVine::~PlantAnimRig_ShineVine(PlantAnimRig_ShineVine *this)

{
  *(undefined ***)this = &PTR_GetClass_067a6a60;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ShineVine_067a6cc8;
  std::string::~string((string *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ShineVine::~PlantAnimRig_ShineVine() */

void __thiscall PlantAnimRig_ShineVine::~PlantAnimRig_ShineVine(PlantAnimRig_ShineVine *this)

{
  ~PlantAnimRig_ShineVine(this + -0x10);
  return;
}


/* PlantAnimRig_ShineVine::~PlantAnimRig_ShineVine() */

void __thiscall PlantAnimRig_ShineVine::~PlantAnimRig_ShineVine(PlantAnimRig_ShineVine *this)

{
  ~PlantAnimRig_ShineVine(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ShineVine::~PlantAnimRig_ShineVine() */

void __thiscall PlantAnimRig_ShineVine::~PlantAnimRig_ShineVine(PlantAnimRig_ShineVine *this)

{
  ~PlantAnimRig_ShineVine(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ShineVine::PlantAnimRig_ShineVine() */

void __thiscall PlantAnimRig_ShineVine::PlantAnimRig_ShineVine(PlantAnimRig_ShineVine *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067a6a60;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ShineVine_067a6cc8;
  std::string::string((string *)(this + 0x3b8),"attacklv5_01");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_ShineVine::StaticNew() */

PlantAnimRig_ShineVine * PlantAnimRig_ShineVine::StaticNew(void)

{
  PlantAnimRig_ShineVine *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_ShineVine(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ShineVine::StaticClassInit() */

void PlantAnimRig_ShineVine::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_ShineVine");
    (*pcVar2)(plVar1,asStack_10,FUN_03faa0ac,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_ShineVine::StaticGetClass() */

long * PlantAnimRig_ShineVine::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_ShineVine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_ShineVine::GetClass() const */

long * PlantAnimRig_ShineVine::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_ShineVine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ShineVine::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_ShineVine::PlayAttack(PlantAnimRig_ShineVine *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  char *__s;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x224) < 2) {
    __s = "attack1";
  }
  else {
    __s = "attack2";
  }
  std::string::string(asStack_58,__s);
  nop();
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
/* PlantAnimRig_ShineVine::PlayTapAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_ShineVine::PlayTapAttack(PlantAnimRig_ShineVine *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,this + 0x3b8,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ShineVine::onPopAnimCommand(float, std::string const&, std::string const&) */

void PlantAnimRig_ShineVine::onPopAnimCommand(float param_1,string *param_2,string *param_3)

{
  bool bVar1;
  int iVar2;
  size_t in_x2;
  size_t __n;
  string asStack_10 [8];
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  __n = ___stack_chk_guard;
  FUN_05475d88(asStack_10);
  bVar1 = std::operator==(param_3,"use_action");
  if ((bVar1) && (iVar2 = Effect_AngerFlame::GetFlameCol((Effect_AngerFlame *)param_2), iVar2 != 2))
  {
    iVar2 = Effect_AngerFlame::GetFlameCol((Effect_AngerFlame *)param_2);
    if (iVar2 == 3) {
      PlantAnimRig::onPopAnimCommand(param_1,param_2,param_3);
      std::string::append(asStack_10,"use_special",in_x2);
    }
    else {
      iVar2 = Effect_AngerFlame::GetFlameCol((Effect_AngerFlame *)param_2);
      if (iVar2 == 0xe) {
        std::string::append(asStack_10,"use_special",__n);
      }
    }
  }
  PlantAnimRig::onPopAnimCommand(param_1,param_2,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ShineVine::PlaySun() */

void __thiscall PlantAnimRig_ShineVine::PlaySun(PlantAnimRig_ShineVine *this)

{
  undefined4 uVar1;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  uVar1 = PlantAnimRig::PlayAttack((PlantAnimRig *)this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

