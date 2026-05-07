// Class: NewPVPPlantfoodCursor


/* NewPVPPlantfoodCursor::StaticGetClass() */

long * NewPVPPlantfoodCursor::StaticGetClass(void)

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
  uVar2 = PlantfoodCursor::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPPlantfoodCursor",uVar2,StaticNew);
  return sClass;
}


/* NewPVPPlantfoodCursor::GetClass() const */

long * NewPVPPlantfoodCursor::GetClass(void)

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
  uVar2 = PlantfoodCursor::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPPlantfoodCursor",uVar2,StaticNew);
  return sClass;
}


/* NewPVPPlantfoodCursor::~NewPVPPlantfoodCursor() */

void __thiscall NewPVPPlantfoodCursor::~NewPVPPlantfoodCursor(NewPVPPlantfoodCursor *this)

{
  *(undefined ***)this = &PTR_GetClass_06646e40;
  PlantfoodCursor::~PlantfoodCursor((PlantfoodCursor *)this);
  return;
}


/* NewPVPPlantfoodCursor::~NewPVPPlantfoodCursor() */

void __thiscall NewPVPPlantfoodCursor::~NewPVPPlantfoodCursor(NewPVPPlantfoodCursor *this)

{
  ~NewPVPPlantfoodCursor(this);
  AK::FreeHook(this);
  return;
}


/* NewPVPPlantfoodCursor::NewPVPPlantfoodCursor() */

void __thiscall NewPVPPlantfoodCursor::NewPVPPlantfoodCursor(NewPVPPlantfoodCursor *this)

{
  PlantfoodCursor::PlantfoodCursor((PlantfoodCursor *)this);
  *(undefined ***)this = &PTR_GetClass_06646e40;
  return;
}


/* NewPVPPlantfoodCursor::StaticNew() */

NewPVPPlantfoodCursor * NewPVPPlantfoodCursor::StaticNew(void)

{
  NewPVPPlantfoodCursor *this;
  
  this = ::operator_new(0x48);
  NewPVPPlantfoodCursor(this);
  return this;
}


/* NewPVPPlantfoodCursor::NewPVPPlantfoodCursor(Sexy::Touch const&) */

void __thiscall
NewPVPPlantfoodCursor::NewPVPPlantfoodCursor(NewPVPPlantfoodCursor *this,Touch *param_1)

{
  PlantfoodCursor::PlantfoodCursor((PlantfoodCursor *)this,param_1);
  *(undefined ***)this = &PTR_GetClass_06646e40;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPPlantfoodCursor::canApplyPlantfood(int, int) */

void __thiscall
NewPVPPlantfoodCursor::canApplyPlantfood(NewPVPPlantfoodCursor *this,int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_18,param_1,param_2);
  cVar1 = NewPVPUtils::IsConcreteRegion(aPStack_18);
  bVar2 = 0;
  if (cVar1 == '\0') {
    Sexy::Point::Point(aPStack_10,param_1,param_2);
    bVar2 = NewPVPUtils::IsOppoentRegion(aPStack_10);
    bVar2 = bVar2 ^ 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPPlantfoodCursor::applyPlantfood(Plant*) */

void __thiscall NewPVPPlantfoodCursor::applyPlantfood(NewPVPPlantfoodCursor *this,Plant *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  NewPVPGameSubsystem *pNVar3;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar3 = Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
  uVar2 = SharkMinion::getRow((SharkMinion *)param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  NewPVPGameSubsystem::TriggerEvent
            ((NewPVPGameSubsystem *)0xbf800000,pNVar3,0,1,7,0xffffffff,uVar1,uVar2,0,avStack_20);
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

