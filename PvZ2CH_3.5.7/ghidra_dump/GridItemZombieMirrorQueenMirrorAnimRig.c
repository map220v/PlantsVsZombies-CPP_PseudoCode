// Class: GridItemZombieMirrorQueenMirrorAnimRig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenMirrorAnimRig::SetDamageState(int, bool) */

void __thiscall
GridItemZombieMirrorQueenMirrorAnimRig::SetDamageState
          (GridItemZombieMirrorQueenMirrorAnimRig *this,int param_1,bool param_2)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GravestoneAnimRig::SetDamageState((GravestoneAnimRig *)this,param_1,param_2);
  if (param_1 == 0) {
    std::string::string(asStack_10,"mirror_damage2");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"mirror_damage3");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"mirror_damage4");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    Sexy::StrFormat("mirror_damage%d",asStack_10,(ulong)(param_1 + 1));
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieMirrorQueenMirrorAnimRig::StaticGetClass() */

long * GridItemZombieMirrorQueenMirrorAnimRig::StaticGetClass(void)

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
  uVar2 = GravestoneAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombieMirrorQueenMirrorAnimRig",uVar2,StaticNew);
  return sClass;
}


/* GridItemZombieMirrorQueenMirrorAnimRig::GetClass() const */

long * GridItemZombieMirrorQueenMirrorAnimRig::GetClass(void)

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
  uVar2 = GravestoneAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombieMirrorQueenMirrorAnimRig",uVar2,StaticNew);
  return sClass;
}


/* GridItemZombieMirrorQueenMirrorAnimRig::~GridItemZombieMirrorQueenMirrorAnimRig() */

void __thiscall
GridItemZombieMirrorQueenMirrorAnimRig::~GridItemZombieMirrorQueenMirrorAnimRig
          (GridItemZombieMirrorQueenMirrorAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0ec40;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombieMirrorQueenMirrorAnimRig_06a0ed68;
  GravestoneAnimRig::~GravestoneAnimRig((GravestoneAnimRig *)this);
  return;
}


/* non-virtual thunk to
   GridItemZombieMirrorQueenMirrorAnimRig::~GridItemZombieMirrorQueenMirrorAnimRig() */

void __thiscall
GridItemZombieMirrorQueenMirrorAnimRig::~GridItemZombieMirrorQueenMirrorAnimRig
          (GridItemZombieMirrorQueenMirrorAnimRig *this)

{
  ~GridItemZombieMirrorQueenMirrorAnimRig(this + -0x10);
  return;
}


/* GridItemZombieMirrorQueenMirrorAnimRig::~GridItemZombieMirrorQueenMirrorAnimRig() */

void __thiscall
GridItemZombieMirrorQueenMirrorAnimRig::~GridItemZombieMirrorQueenMirrorAnimRig
          (GridItemZombieMirrorQueenMirrorAnimRig *this)

{
  ~GridItemZombieMirrorQueenMirrorAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   GridItemZombieMirrorQueenMirrorAnimRig::~GridItemZombieMirrorQueenMirrorAnimRig() */

void __thiscall
GridItemZombieMirrorQueenMirrorAnimRig::~GridItemZombieMirrorQueenMirrorAnimRig
          (GridItemZombieMirrorQueenMirrorAnimRig *this)

{
  ~GridItemZombieMirrorQueenMirrorAnimRig(this + -0x10);
  return;
}


/* GridItemZombieMirrorQueenMirrorAnimRig::GridItemZombieMirrorQueenMirrorAnimRig() */

void __thiscall
GridItemZombieMirrorQueenMirrorAnimRig::GridItemZombieMirrorQueenMirrorAnimRig
          (GridItemZombieMirrorQueenMirrorAnimRig *this)

{
  GravestoneAnimRig::GravestoneAnimRig((GravestoneAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06a0ec40;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombieMirrorQueenMirrorAnimRig_06a0ed68;
  return;
}


/* GridItemZombieMirrorQueenMirrorAnimRig::StaticNew() */

GridItemZombieMirrorQueenMirrorAnimRig * GridItemZombieMirrorQueenMirrorAnimRig::StaticNew(void)

{
  GridItemZombieMirrorQueenMirrorAnimRig *this;
  
  this = ::operator_new(0x210);
  GridItemZombieMirrorQueenMirrorAnimRig(this);
  return this;
}

