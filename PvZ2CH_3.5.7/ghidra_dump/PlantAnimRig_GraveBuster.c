// Class: PlantAnimRig_GraveBuster


/* PlantAnimRig_GraveBuster::~PlantAnimRig_GraveBuster() */

void __thiscall PlantAnimRig_GraveBuster::~PlantAnimRig_GraveBuster(PlantAnimRig_GraveBuster *this)

{
  *(undefined ***)this = &PTR_GetClass_0679b790;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_GraveBuster_0679ba08;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_GraveBuster::~PlantAnimRig_GraveBuster() */

void __thiscall PlantAnimRig_GraveBuster::~PlantAnimRig_GraveBuster(PlantAnimRig_GraveBuster *this)

{
  ~PlantAnimRig_GraveBuster(this + -0x10);
  return;
}


/* PlantAnimRig_GraveBuster::~PlantAnimRig_GraveBuster() */

void __thiscall PlantAnimRig_GraveBuster::~PlantAnimRig_GraveBuster(PlantAnimRig_GraveBuster *this)

{
  ~PlantAnimRig_GraveBuster(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_GraveBuster::~PlantAnimRig_GraveBuster() */

void __thiscall PlantAnimRig_GraveBuster::~PlantAnimRig_GraveBuster(PlantAnimRig_GraveBuster *this)

{
  ~PlantAnimRig_GraveBuster(this + -0x10);
  return;
}


/* PlantAnimRig_GraveBuster::StaticGetClass() */

long * PlantAnimRig_GraveBuster::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_GraveBuster",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_GraveBuster::GetClass() const */

long * PlantAnimRig_GraveBuster::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_GraveBuster",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_GraveBuster::PlantAnimRig_GraveBuster() */

void __thiscall PlantAnimRig_GraveBuster::PlantAnimRig_GraveBuster(PlantAnimRig_GraveBuster *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0679b790;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_GraveBuster_0679ba08;
  return;
}


/* PlantAnimRig_GraveBuster::StaticNew() */

PlantAnimRig_GraveBuster * PlantAnimRig_GraveBuster::StaticNew(void)

{
  PlantAnimRig_GraveBuster *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_GraveBuster(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GraveBuster::PlayEatAnim() */

void __thiscall PlantAnimRig_GraveBuster::PlayEatAnim(PlantAnimRig_GraveBuster *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack1");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GraveBuster::PlayPreviewAnim(bool) */

void PlantAnimRig_GraveBuster::PlayPreviewAnim(bool param_1)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack1");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}

