// Class: ActionShowAdvice


/* ActionShowAdvice::~ActionShowAdvice() */

void __thiscall ActionShowAdvice::~ActionShowAdvice(ActionShowAdvice *this)

{
  *(undefined ***)this = &PTR_GetClass_06858540;
  FUN_05476c50(this + 0x18);
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionShowAdvice::~ActionShowAdvice() */

void __thiscall ActionShowAdvice::~ActionShowAdvice(ActionShowAdvice *this)

{
  ~ActionShowAdvice(this);
  AK::FreeHook(this);
  return;
}


/* ActionShowAdvice::ActionShowAdvice() */

void __thiscall ActionShowAdvice::ActionShowAdvice(ActionShowAdvice *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06858540;
  FUN_05476574(this + 0x18);
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* ActionShowAdvice::StaticNew() */

ActionShowAdvice * ActionShowAdvice::StaticNew(void)

{
  ActionShowAdvice *this;
  
  this = ::operator_new(0x28);
  ActionShowAdvice(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionShowAdvice::End() */

void __thiscall ActionShowAdvice::End(ActionShowAdvice *this)

{
  undefined8 uVar1;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WorldMapAction::RestorePrevInput((WorldMapAction *)this);
  uVar1 = LawnApp::GetWorldMap(gLawnApp);
  FUN_05478178(auStack_10,&DAT_056f11a8,auStack_18);
  WorldMap::SetAdviceText(uVar1,auStack_10,0);
  FUN_05476c50(auStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActionShowAdvice::StaticGetClass() */

long * ActionShowAdvice::StaticGetClass(void)

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
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionShowAdvice",uVar2,StaticNew);
  return sClass;
}


/* ActionShowAdvice::GetClass() const */

long * ActionShowAdvice::GetClass(void)

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
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionShowAdvice",uVar2,StaticNew);
  return sClass;
}


/* ActionShowAdvice::Update() */

void __thiscall ActionShowAdvice::Update(ActionShowAdvice *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x20) <= fVar1) {
    this[9] = (ActionShowAdvice)0x1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionShowAdvice::Start() */

void __thiscall ActionShowAdvice::Start(ActionShowAdvice *this)

{
  bool bVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WorldMapAction::DisableInput((WorldMapAction *)this);
  uVar2 = LawnApp::GetWorldMap(gLawnApp);
  FUN_05477b24(auStack_10,this + 0x18);
  WorldMap::SetAdviceText(uVar2,auStack_10,0x15);
  FUN_05476c50(auStack_10);
  fVar3 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x20) = *(float *)(this + 0x20) + fVar3;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

