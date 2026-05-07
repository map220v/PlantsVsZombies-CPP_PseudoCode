// Class: PlantAnimRig_MagnifyingGrass


/* PlantAnimRig_MagnifyingGrass::~PlantAnimRig_MagnifyingGrass() */

void __thiscall
PlantAnimRig_MagnifyingGrass::~PlantAnimRig_MagnifyingGrass(PlantAnimRig_MagnifyingGrass *this)

{
  *(undefined ***)this = &PTR_GetClass_0679c270;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_MagnifyingGrass_0679c4d8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_MagnifyingGrass::~PlantAnimRig_MagnifyingGrass() */

void __thiscall
PlantAnimRig_MagnifyingGrass::~PlantAnimRig_MagnifyingGrass(PlantAnimRig_MagnifyingGrass *this)

{
  ~PlantAnimRig_MagnifyingGrass(this + -0x10);
  return;
}


/* PlantAnimRig_MagnifyingGrass::~PlantAnimRig_MagnifyingGrass() */

void __thiscall
PlantAnimRig_MagnifyingGrass::~PlantAnimRig_MagnifyingGrass(PlantAnimRig_MagnifyingGrass *this)

{
  ~PlantAnimRig_MagnifyingGrass(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_MagnifyingGrass::~PlantAnimRig_MagnifyingGrass() */

void __thiscall
PlantAnimRig_MagnifyingGrass::~PlantAnimRig_MagnifyingGrass(PlantAnimRig_MagnifyingGrass *this)

{
  ~PlantAnimRig_MagnifyingGrass(this + -0x10);
  return;
}


/* PlantAnimRig_MagnifyingGrass::StaticGetClass() */

long * PlantAnimRig_MagnifyingGrass::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_MagnifyingGrass",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_MagnifyingGrass::GetClass() const */

long * PlantAnimRig_MagnifyingGrass::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_MagnifyingGrass",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_MagnifyingGrass::PlantAnimRig_MagnifyingGrass() */

void __thiscall
PlantAnimRig_MagnifyingGrass::PlantAnimRig_MagnifyingGrass(PlantAnimRig_MagnifyingGrass *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0679c270;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_MagnifyingGrass_0679c4d8;
  return;
}


/* PlantAnimRig_MagnifyingGrass::StaticNew() */

PlantAnimRig_MagnifyingGrass * PlantAnimRig_MagnifyingGrass::StaticNew(void)

{
  PlantAnimRig_MagnifyingGrass *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_MagnifyingGrass(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MagnifyingGrass::PlayTapAttack(Sexy::Delegate1<std::string const&>) */

void __thiscall
PlantAnimRig_MagnifyingGrass::PlayTapAttack(PlantAnimRig_MagnifyingGrass *this,Delegate1 *param_2)

{
  int iVar1;
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack2");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
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
/* PlantAnimRig_MagnifyingGrass::PlayIdleLooped() */

void __thiscall PlantAnimRig_MagnifyingGrass::PlayIdleLooped(PlantAnimRig_MagnifyingGrass *this)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  size_t in_x2;
  ulong uVar4;
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = ProbabilitySet<std::string>::GetSize((ProbabilitySet<std::string> *)&DAT_06ae3b80);
  if (lVar3 == 0) {
    uVar4 = 1;
    Set8BytesTo0(asStack_48);
    lVar3 = 0;
    do {
      std::string::append(asStack_48,"idle",in_x2);
      FUN_05475d88(asStack_40,asStack_48);
      in_x2 = 0xf;
      ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)&DAT_06ae3b80,asStack_40);
      std::string::~string(asStack_40);
      std::string::~string(asStack_48);
      while( true ) {
        lVar3 = lVar3 + 1;
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulong)uVar1;
        Set8BytesTo0(asStack_48);
        if (lVar3 == 0) break;
        Sexy::StrFormat("idle%d",asStack_40,uVar4);
        FUN_05474278(asStack_48,asStack_40);
        std::string::~string(asStack_40);
        FUN_05475d88(asStack_40,asStack_48);
        in_x2 = (size_t)(uint)(&DAT_05752be0)[lVar3];
        ProbabilitySet<std::string>::AddItem
                  ((ProbabilitySet<std::string> *)&DAT_06ae3b80,asStack_40);
        std::string::~string(asStack_40);
        std::string::~string(asStack_48);
        if (uVar1 == 3) goto LAB_03f5b6b8;
      }
    } while( true );
  }
LAB_03f5b6b8:
  ProbabilitySet<std::string>::PickItem();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  if (iVar2 != -1) {
    *(undefined4 *)(this + 0x218) = 1;
  }
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != -1);
}

