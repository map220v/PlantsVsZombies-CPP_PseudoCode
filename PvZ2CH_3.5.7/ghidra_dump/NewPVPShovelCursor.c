// Class: NewPVPShovelCursor


/* NewPVPShovelCursor::StaticGetClass() */

long * NewPVPShovelCursor::StaticGetClass(void)

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
  uVar2 = ShovelCursor::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPShovelCursor",uVar2,StaticNew);
  return sClass;
}


/* NewPVPShovelCursor::GetClass() const */

long * NewPVPShovelCursor::GetClass(void)

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
  uVar2 = ShovelCursor::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPShovelCursor",uVar2,StaticNew);
  return sClass;
}


/* NewPVPShovelCursor::~NewPVPShovelCursor() */

void __thiscall NewPVPShovelCursor::~NewPVPShovelCursor(NewPVPShovelCursor *this)

{
  *(undefined ***)this = &PTR_GetClass_06646da0;
  ShovelCursor::~ShovelCursor((ShovelCursor *)this);
  return;
}


/* NewPVPShovelCursor::~NewPVPShovelCursor() */

void __thiscall NewPVPShovelCursor::~NewPVPShovelCursor(NewPVPShovelCursor *this)

{
  ~NewPVPShovelCursor(this);
  AK::FreeHook(this);
  return;
}


/* NewPVPShovelCursor::NewPVPShovelCursor() */

void __thiscall NewPVPShovelCursor::NewPVPShovelCursor(NewPVPShovelCursor *this)

{
  ShovelCursor::ShovelCursor((ShovelCursor *)this);
  *(undefined ***)this = &PTR_GetClass_06646da0;
  return;
}


/* NewPVPShovelCursor::StaticNew() */

NewPVPShovelCursor * NewPVPShovelCursor::StaticNew(void)

{
  NewPVPShovelCursor *this;
  
  this = ::operator_new(0x48);
  NewPVPShovelCursor(this);
  return this;
}


/* NewPVPShovelCursor::NewPVPShovelCursor(Sexy::Touch const&) */

void __thiscall NewPVPShovelCursor::NewPVPShovelCursor(NewPVPShovelCursor *this,Touch *param_1)

{
  ShovelCursor::ShovelCursor((ShovelCursor *)this,param_1);
  *(undefined ***)this = &PTR_GetClass_06646da0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPShovelCursor::doShovelEntity(BoardEntity*) */

void __thiscall NewPVPShovelCursor::doShovelEntity(NewPVPShovelCursor *this,BoardEntity *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  NewPVPGameSubsystem *pNVar3;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar3 = Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  uVar1 = BoardEntity::CalcColumnPosition(param_1);
  uVar2 = SharkMinion::getRow((SharkMinion *)param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  NewPVPGameSubsystem::TriggerEvent
            ((NewPVPGameSubsystem *)0xbf800000,pNVar3,0,1,2,0xffffffff,uVar1,uVar2,0,avStack_20);
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

