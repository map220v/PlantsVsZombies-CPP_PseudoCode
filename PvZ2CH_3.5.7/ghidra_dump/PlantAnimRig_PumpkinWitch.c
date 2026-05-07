// Class: PlantAnimRig_PumpkinWitch


/* PlantAnimRig_PumpkinWitch::~PlantAnimRig_PumpkinWitch() */

void __thiscall
PlantAnimRig_PumpkinWitch::~PlantAnimRig_PumpkinWitch(PlantAnimRig_PumpkinWitch *this)

{
  *(undefined ***)this = &PTR_GetClass_067a10c0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_PumpkinWitch_067a1328;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_PumpkinWitch::~PlantAnimRig_PumpkinWitch() */

void __thiscall
PlantAnimRig_PumpkinWitch::~PlantAnimRig_PumpkinWitch(PlantAnimRig_PumpkinWitch *this)

{
  ~PlantAnimRig_PumpkinWitch(this + -0x10);
  return;
}


/* PlantAnimRig_PumpkinWitch::~PlantAnimRig_PumpkinWitch() */

void __thiscall
PlantAnimRig_PumpkinWitch::~PlantAnimRig_PumpkinWitch(PlantAnimRig_PumpkinWitch *this)

{
  ~PlantAnimRig_PumpkinWitch(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_PumpkinWitch::~PlantAnimRig_PumpkinWitch() */

void __thiscall
PlantAnimRig_PumpkinWitch::~PlantAnimRig_PumpkinWitch(PlantAnimRig_PumpkinWitch *this)

{
  ~PlantAnimRig_PumpkinWitch(this + -0x10);
  return;
}


/* PlantAnimRig_PumpkinWitch::StaticGetClass() */

long * PlantAnimRig_PumpkinWitch::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_PumpkinWitch",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_PumpkinWitch::GetClass() const */

long * PlantAnimRig_PumpkinWitch::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_PumpkinWitch",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_PumpkinWitch::PlantAnimRig_PumpkinWitch() */

void __thiscall
PlantAnimRig_PumpkinWitch::PlantAnimRig_PumpkinWitch(PlantAnimRig_PumpkinWitch *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067a10c0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_PumpkinWitch_067a1328;
  return;
}


/* PlantAnimRig_PumpkinWitch::StaticNew() */

PlantAnimRig_PumpkinWitch * PlantAnimRig_PumpkinWitch::StaticNew(void)

{
  PlantAnimRig_PumpkinWitch *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_PumpkinWitch(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PumpkinWitch::PlayIdleLooped() */

void __thiscall PlantAnimRig_PumpkinWitch::PlayIdleLooped(PlantAnimRig_PumpkinWitch *this)

{
  int iVar1;
  long lVar2;
  size_t in_x2;
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = ProbabilitySet<std::string>::GetSize((ProbabilitySet<std::string> *)&DAT_06ae45d0);
  if (lVar2 == 0) {
    iVar1 = 1;
    Set8BytesTo0(asStack_48);
    lVar2 = 0;
    do {
      std::string::append(asStack_48,"idle",in_x2);
      FUN_05475d88(asStack_40,asStack_48);
      in_x2 = 10;
      ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)&DAT_06ae45d0,asStack_40);
      std::string::~string(asStack_40);
      std::string::~string(asStack_48);
      while( true ) {
        lVar2 = lVar2 + 1;
        iVar1 = iVar1 + 1;
        Set8BytesTo0(asStack_48);
        if (lVar2 == 0) break;
        Sexy::StrFormat("idle0%d",asStack_40,2);
        FUN_05474278(asStack_48,asStack_40);
        std::string::~string(asStack_40);
        FUN_05475d88(asStack_40,asStack_48);
        in_x2 = (size_t)(uint)(&DAT_05752c40)[lVar2];
        ProbabilitySet<std::string>::AddItem
                  ((ProbabilitySet<std::string> *)&DAT_06ae45d0,asStack_40);
        std::string::~string(asStack_40);
        std::string::~string(asStack_48);
        if (iVar1 == 2) goto LAB_03f66d94;
      }
    } while( true );
  }
LAB_03f66d94:
  ProbabilitySet<std::string>::PickItem();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 1;
  }
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}

