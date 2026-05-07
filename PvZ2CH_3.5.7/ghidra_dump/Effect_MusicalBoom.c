// Class: Effect_MusicalBoom


/* Effect_MusicalBoom::~Effect_MusicalBoom() */

void __thiscall Effect_MusicalBoom::~Effect_MusicalBoom(Effect_MusicalBoom *this)

{
  *(undefined ***)this = &PTR_GetClass_0669b240;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_MusicalBoom::~Effect_MusicalBoom() */

void __thiscall Effect_MusicalBoom::~Effect_MusicalBoom(Effect_MusicalBoom *this)

{
  ~Effect_MusicalBoom(this);
  AK::FreeHook(this);
  return;
}


/* Effect_MusicalBoom::Effect_MusicalBoom() */

void __thiscall Effect_MusicalBoom::Effect_MusicalBoom(Effect_MusicalBoom *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_0669b240;
  return;
}


/* Effect_MusicalBoom::StaticNew() */

Effect_MusicalBoom * Effect_MusicalBoom::StaticNew(void)

{
  Effect_MusicalBoom *this;
  
  this = ::operator_new(0x110);
  Effect_MusicalBoom(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_MusicalBoom::StaticClassInit() */

void Effect_MusicalBoom::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_MusicalBoom");
    (*pcVar2)(plVar1,asStack_10,FUN_037e1920,0x110,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_MusicalBoom::StaticGetClass() */

long * Effect_MusicalBoom::StaticGetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_MusicalBoom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_MusicalBoom::GetClass() const */

long * Effect_MusicalBoom::GetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_MusicalBoom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_MusicalBoom::onUpdate() */

void __thiscall Effect_MusicalBoom::onUpdate(Effect_MusicalBoom *this)

{
  PopAnimRig *this_00;
  long lVar1;
  float fVar2;
  float fVar3;
  
  Effect_PopAnim::onUpdate((Effect_PopAnim *)this);
  this_00 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
  lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  fVar2 = (float)FUN_037e12f8(*(undefined4 *)(lVar1 + 0x38));
  lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  fVar3 = (float)FUN_037e12fc(*(undefined4 *)(lVar1 + 0x3c));
  PopAnimRig::UpdateAnim(this_00,fVar2,fVar3);
  return;
}

