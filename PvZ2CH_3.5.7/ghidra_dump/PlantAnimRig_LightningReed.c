// Class: PlantAnimRig_LightningReed


/* PlantAnimRig_LightningReed::~PlantAnimRig_LightningReed() */

void __thiscall
PlantAnimRig_LightningReed::~PlantAnimRig_LightningReed(PlantAnimRig_LightningReed *this)

{
  *(undefined ***)this = &PTR_GetClass_0679fdf0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_LightningReed_067a0060;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_LightningReed::~PlantAnimRig_LightningReed() */

void __thiscall
PlantAnimRig_LightningReed::~PlantAnimRig_LightningReed(PlantAnimRig_LightningReed *this)

{
  ~PlantAnimRig_LightningReed(this + -0x10);
  return;
}


/* PlantAnimRig_LightningReed::~PlantAnimRig_LightningReed() */

void __thiscall
PlantAnimRig_LightningReed::~PlantAnimRig_LightningReed(PlantAnimRig_LightningReed *this)

{
  ~PlantAnimRig_LightningReed(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_LightningReed::~PlantAnimRig_LightningReed() */

void __thiscall
PlantAnimRig_LightningReed::~PlantAnimRig_LightningReed(PlantAnimRig_LightningReed *this)

{
  ~PlantAnimRig_LightningReed(this + -0x10);
  return;
}


/* PlantAnimRig_LightningReed::StaticGetClass() */

long * PlantAnimRig_LightningReed::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_LightningReed",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_LightningReed::GetClass() const */

long * PlantAnimRig_LightningReed::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_LightningReed",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_LightningReed::PlantAnimRig_LightningReed() */

void __thiscall
PlantAnimRig_LightningReed::PlantAnimRig_LightningReed(PlantAnimRig_LightningReed *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0679fdf0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_LightningReed_067a0060;
  return;
}


/* PlantAnimRig_LightningReed::StaticNew() */

PlantAnimRig_LightningReed * PlantAnimRig_LightningReed::StaticNew(void)

{
  PlantAnimRig_LightningReed *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_LightningReed(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_LightningReed::PlayAttackAnim(std::string const&) */

void __thiscall
PlantAnimRig_LightningReed::PlayAttackAnim(PlantAnimRig_LightningReed *this,string *param_1)

{
  int iVar1;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,param_1,0,aDStack_38);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}

