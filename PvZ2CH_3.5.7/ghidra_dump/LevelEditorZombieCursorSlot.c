// Class: LevelEditorZombieCursorSlot


/* LevelEditorZombieCursorSlot::~LevelEditorZombieCursorSlot() */

void __thiscall
LevelEditorZombieCursorSlot::~LevelEditorZombieCursorSlot(LevelEditorZombieCursorSlot *this)

{
  *(undefined ***)this = &PTR_GetClass_06963090;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorZombieCursorSlot::~LevelEditorZombieCursorSlot() */

void __thiscall
LevelEditorZombieCursorSlot::~LevelEditorZombieCursorSlot(LevelEditorZombieCursorSlot *this)

{
  ~LevelEditorZombieCursorSlot(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorZombieCursorSlot::LevelEditorZombieCursorSlot() */

void __thiscall
LevelEditorZombieCursorSlot::LevelEditorZombieCursorSlot(LevelEditorZombieCursorSlot *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06963090;
  return;
}


/* LevelEditorZombieCursorSlot::StaticNew() */

LevelEditorZombieCursorSlot * LevelEditorZombieCursorSlot::StaticNew(void)

{
  LevelEditorZombieCursorSlot *this;
  
  this = ::operator_new(0xd8);
  LevelEditorZombieCursorSlot(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorZombieCursorSlot::StaticClassInit() */

void LevelEditorZombieCursorSlot::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelEditorZombieCursorSlot");
    (*pcVar2)(plVar1,asStack_10,FUN_04b4c980,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorZombieCursorSlot::StaticGetClass() */

long * LevelEditorZombieCursorSlot::StaticGetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"LevelEditorZombieCursorSlot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelEditorZombieCursorSlot::GetClass() const */

long * LevelEditorZombieCursorSlot::GetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"LevelEditorZombieCursorSlot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

