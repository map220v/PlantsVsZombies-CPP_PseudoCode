// Class: PlantAnimRig_HollyBarrierLeaf


/* PlantAnimRig_HollyBarrierLeaf::~PlantAnimRig_HollyBarrierLeaf() */

void __thiscall
PlantAnimRig_HollyBarrierLeaf::~PlantAnimRig_HollyBarrierLeaf(PlantAnimRig_HollyBarrierLeaf *this)

{
  *(undefined ***)this = &PTR_GetClass_06826370;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_HollyBarrierLeaf_068265d8;
  std::string::~string((string *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_HollyBarrierLeaf::~PlantAnimRig_HollyBarrierLeaf() */

void __thiscall
PlantAnimRig_HollyBarrierLeaf::~PlantAnimRig_HollyBarrierLeaf(PlantAnimRig_HollyBarrierLeaf *this)

{
  ~PlantAnimRig_HollyBarrierLeaf(this + -0x10);
  return;
}


/* PlantAnimRig_HollyBarrierLeaf::~PlantAnimRig_HollyBarrierLeaf() */

void __thiscall
PlantAnimRig_HollyBarrierLeaf::~PlantAnimRig_HollyBarrierLeaf(PlantAnimRig_HollyBarrierLeaf *this)

{
  ~PlantAnimRig_HollyBarrierLeaf(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_HollyBarrierLeaf::~PlantAnimRig_HollyBarrierLeaf() */

void __thiscall
PlantAnimRig_HollyBarrierLeaf::~PlantAnimRig_HollyBarrierLeaf(PlantAnimRig_HollyBarrierLeaf *this)

{
  ~PlantAnimRig_HollyBarrierLeaf(this + -0x10);
  return;
}


/* PlantAnimRig_HollyBarrierLeaf::PlantAnimRig_HollyBarrierLeaf() */

void __thiscall
PlantAnimRig_HollyBarrierLeaf::PlantAnimRig_HollyBarrierLeaf(PlantAnimRig_HollyBarrierLeaf *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06826370;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_HollyBarrierLeaf_068265d8;
  Set8BytesTo0(this + 0x3b8);
  return;
}


/* PlantAnimRig_HollyBarrierLeaf::StaticNew() */

PlantAnimRig_HollyBarrierLeaf * PlantAnimRig_HollyBarrierLeaf::StaticNew(void)

{
  PlantAnimRig_HollyBarrierLeaf *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_HollyBarrierLeaf(this);
  return this;
}


/* PlantAnimRig_HollyBarrierLeaf::StaticGetClass() */

long * PlantAnimRig_HollyBarrierLeaf::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_HollyBarrierLeaf",uVar2,StaticNew);
  nop();
  return sClass;
}


/* PlantAnimRig_HollyBarrierLeaf::GetClass() const */

long * PlantAnimRig_HollyBarrierLeaf::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_HollyBarrierLeaf",uVar2,StaticNew);
  nop();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HollyBarrierLeaf::PlayIntro(std::string const&) */

void __thiscall
PlantAnimRig_HollyBarrierLeaf::PlayIntro(PlantAnimRig_HollyBarrierLeaf *this,string *param_1)

{
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,param_1,0,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_HollyBarrierLeaf::PlayPreviewAnim(bool) */

undefined8 PlantAnimRig_HollyBarrierLeaf::PlayPreviewAnim(bool param_1)

{
  string *this;
  size_t in_x2;
  
  this = (string *)((PlantAnimRig_HollyBarrierLeaf *)(ulong)param_1 + 0x3b8);
  std::string::append(this,"animation2",in_x2);
  PlayIntro((PlantAnimRig_HollyBarrierLeaf *)(ulong)param_1,this);
  return 1;
}

