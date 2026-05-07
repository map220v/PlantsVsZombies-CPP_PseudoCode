// Class: GridItemEggAnimRig


/* GridItemEggAnimRig::~GridItemEggAnimRig() */

void __thiscall GridItemEggAnimRig::~GridItemEggAnimRig(GridItemEggAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_0678aad0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemEggAnimRig_0678abf0;
  std::string::~string((string *)(this + 0x218));
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemEggAnimRig::~GridItemEggAnimRig() */

void __thiscall GridItemEggAnimRig::~GridItemEggAnimRig(GridItemEggAnimRig *this)

{
  ~GridItemEggAnimRig(this + -0x10);
  return;
}


/* GridItemEggAnimRig::~GridItemEggAnimRig() */

void __thiscall GridItemEggAnimRig::~GridItemEggAnimRig(GridItemEggAnimRig *this)

{
  ~GridItemEggAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemEggAnimRig::~GridItemEggAnimRig() */

void __thiscall GridItemEggAnimRig::~GridItemEggAnimRig(GridItemEggAnimRig *this)

{
  ~GridItemEggAnimRig(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEggAnimRig::StaticClassInit() */

void GridItemEggAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemEggAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_03e3bdfc,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemEggAnimRig::StaticGetClass() */

long * GridItemEggAnimRig::StaticGetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemEggAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemEggAnimRig::GetClass() const */

long * GridItemEggAnimRig::GetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemEggAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemEggAnimRig::GridItemEggAnimRig() */

void __thiscall GridItemEggAnimRig::GridItemEggAnimRig(GridItemEggAnimRig *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0678aad0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemEggAnimRig_0678abf0;
  Set8BytesTo0(this + 0x218);
  *(undefined4 *)(this + 0x210) = 0xffffffff;
  return;
}


/* GridItemEggAnimRig::StaticNew() */

GridItemEggAnimRig * GridItemEggAnimRig::StaticNew(void)

{
  GridItemEggAnimRig *this;
  
  this = ::operator_new(0x220);
  GridItemEggAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEggAnimRig::PlayTurnToAsh(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
GridItemEggAnimRig::PlayTurnToAsh(GridItemEggAnimRig *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"boom");
  nop();
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEggAnimRig::SetDamageState(int) */

void __thiscall GridItemEggAnimRig::SetDamageState(GridItemEggAnimRig *this,int param_1)

{
  bool bVar1;
  int iVar2;
  string *psVar3;
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"egg_damage3");
  nop();
  std::string::string(asStack_30,"egg_damage2");
  nop();
  std::string::string(asStack_28,"egg_damage1");
  nop();
  std::string::string(asStack_20,"idle");
  nop();
  std::string::string(asStack_18,"idle01");
  nop();
  std::string::string(asStack_10,"idle02");
  nop();
  if (*(int *)(this + 0x210) != param_1) {
    *(int *)(this + 0x210) = param_1;
    iVar2 = 0;
    psVar3 = asStack_38;
    do {
      bVar1 = iVar2 == param_1;
      iVar2 = iVar2 + 1;
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,bVar1);
      psVar3 = psVar3 + 8;
    } while (iVar2 != 3);
    if (*(int *)(this + 0x210) < 3) {
      thunk_FUN_05475e00(this + 0x218,asStack_20 + (long)param_1 * 8);
    }
  }
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEggAnimRig::PlayIdle() */

void __thiscall GridItemEggAnimRig::PlayIdle(GridItemEggAnimRig *this)

{
  char cVar1;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(this + 0x218);
  if (cVar1 == '\0') {
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    PopAnimRig::PlayAndStop((PopAnimRig *)this,this + 0x218,0,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

