// Class: PopAnimRigRectDrawer


/* PopAnimRigRectDrawer::~PopAnimRigRectDrawer() */

void __thiscall PopAnimRigRectDrawer::~PopAnimRigRectDrawer(PopAnimRigRectDrawer *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x18);
  *(undefined ***)this = &PTR__PopAnimRigRectDrawer_06831870;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  return;
}


/* PopAnimRigRectDrawer::~PopAnimRigRectDrawer() */

void __thiscall PopAnimRigRectDrawer::~PopAnimRigRectDrawer(PopAnimRigRectDrawer *this)

{
  ~PopAnimRigRectDrawer(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PopAnimRigRectDrawer::Draw(Sexy::Graphics*, Sexy::TRect<int> const&, Sexy::SexyTransform2D
   const&) */

void __thiscall
PopAnimRigRectDrawer::Draw
          (PopAnimRigRectDrawer *this,Graphics *param_1,TRect *param_2,SexyTransform2D *param_3)

{
  float fVar1;
  SexyTransform2D aSStack_80 [8];
  undefined1 auStack_78 [12];
  undefined1 auStack_6c [20];
  SexyTransform2D aSStack_58 [40];
  SexyMatrix3 aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)NEON_fminnm((float)*(int *)(param_2 + 0xc) / (float)*(int *)(this + 0x14),
                             (float)*(int *)(param_2 + 8) / (float)*(int *)(this + 0x10));
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_80);
  FUN_042fffac(-((float)*(int *)(this + 0x10) * 0.5) - (float)*(int *)(this + 8),
               -((float)*(int *)(this + 0x14) * 0.5) - (float)*(int *)(this + 0xc),auStack_78,
               auStack_6c);
  Sexy::SexyTransform2D::Scale(aSStack_80,fVar1,fVar1);
  FUN_042fffac((float)*(int *)param_2 + (float)*(int *)(param_2 + 8) * 0.5,
               (float)*(int *)(param_2 + 4) + (float)*(int *)(param_2 + 0xc) * 0.5,auStack_78,
               auStack_6c);
  Sexy::SexyMatrix3::operator*((SexyMatrix3 *)param_3,(SexyMatrix3 *)aSStack_80);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_58,aSStack_30);
  PopAnimRig::Draw(*(PopAnimRig **)(this + 0x18),param_1,aSStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PopAnimRigRectDrawer::Update(float, float) */

void __thiscall PopAnimRigRectDrawer::Update(PopAnimRigRectDrawer *this,float param_1,float param_2)

{
  PopAnimRig::UpdateAnim(*(PopAnimRig **)(this + 0x18),param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PopAnimRigRectDrawer::PlayAndStop(std::string const&, Sexy::Delegate1<std::string const&>) */

void __thiscall
PopAnimRigRectDrawer::PlayAndStop(PopAnimRigRectDrawer *this,undefined8 param_1,Delegate1 *param_3)

{
  PopAnimRig *pPVar1;
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  pPVar1 = *(PopAnimRig **)(this + 0x18);
  local_8 = ___stack_chk_guard;
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_3);
  PopAnimRig::PlayAndStop(pPVar1,param_1,0,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PopAnimRigRectDrawer::PopAnimRigRectDrawer(PopAnimRig*) */

void __thiscall
PopAnimRigRectDrawer::PopAnimRigRectDrawer(PopAnimRigRectDrawer *this,PopAnimRig *param_1)

{
  *(undefined ***)this = &PTR__PopAnimRigRectDrawer_06831870;
  Sexy::Insets::Insets((Insets *)(this + 8));
  *(PopAnimRig **)(this + 0x18) = param_1;
  if (param_1 != (PopAnimRig *)0x0) {
    (**(code **)(*(long *)param_1 + 0x90))(param_1,(Insets *)(this + 8));
  }
  return;
}

