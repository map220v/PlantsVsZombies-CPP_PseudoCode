// Class: GridItemTriggerTile


/* GridItemTriggerTile::handleTargetCollisions(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> > const&) */

void GridItemTriggerTile::handleTargetCollisions(vector *param_1)

{
  return;
}


/* GridItemTriggerTile::~GridItemTriggerTile() */

void __thiscall GridItemTriggerTile::~GridItemTriggerTile(GridItemTriggerTile *this)

{
  *(undefined ***)this = &PTR_GetClass_06788350;
  *(undefined ***)(this + 0x10) = &PTR__GridItemTriggerTile_06788630;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemTriggerTile::~GridItemTriggerTile() */

void __thiscall GridItemTriggerTile::~GridItemTriggerTile(GridItemTriggerTile *this)

{
  ~GridItemTriggerTile(this + -0x10);
  return;
}


/* GridItemTriggerTile::~GridItemTriggerTile() */

void __thiscall GridItemTriggerTile::~GridItemTriggerTile(GridItemTriggerTile *this)

{
  ~GridItemTriggerTile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemTriggerTile::~GridItemTriggerTile() */

void __thiscall GridItemTriggerTile::~GridItemTriggerTile(GridItemTriggerTile *this)

{
  ~GridItemTriggerTile(this + -0x10);
  return;
}


/* GridItemTriggerTile::GridItemTriggerTile() */

void __thiscall GridItemTriggerTile::GridItemTriggerTile(GridItemTriggerTile *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_06788350;
  *(undefined ***)(this + 0x10) = &PTR__GridItemTriggerTile_06788630;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  return;
}


/* GridItemTriggerTile::StaticNew() */

GridItemTriggerTile * GridItemTriggerTile::StaticNew(void)

{
  GridItemTriggerTile *this;
  
  this = ::operator_new(0x1b0);
  GridItemTriggerTile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTriggerTile::StaticClassInit() */

void GridItemTriggerTile::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemTriggerTile");
    (*pcVar2)(plVar1,asStack_10,FUN_03e2cc50,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemTriggerTile::StaticGetClass() */

long * GridItemTriggerTile::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemTriggerTile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemTriggerTile::GetClass() const */

long * GridItemTriggerTile::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemTriggerTile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemTriggerTile::isTimeForNextTrigger() const */

bool __thiscall GridItemTriggerTile::isTimeForNextTrigger(GridItemTriggerTile *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  return *(float *)(this + 0x1a8) <= fVar1;
}


/* GridItemTriggerTile::CanTriggerTile() */

bool __thiscall GridItemTriggerTile::CanTriggerTile(GridItemTriggerTile *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  return *(float *)(this + 0x1a8) <= fVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTriggerTile::isThereValidTriggeringEntity(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> > const&) const */

void __thiscall
GridItemTriggerTile::isThereValidTriggeringEntity(GridItemTriggerTile *this,vector *param_1)

{
  char cVar1;
  bool bVar2;
  Zombie *this_00;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_03e2ceec(*(undefined8 *)param_1);
  local_10 = FUN_03e2cf3c(*(undefined8 *)(param_1 + 8));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((((RtObject *)*puVar3 == (RtObject *)0x0) ||
        (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3), this_00 == (Zombie *)0x0)) ||
       ((cVar1 = Zombie::IsFlying(this_00), cVar1 == '\0' &&
        (cVar1 = Zombie::IsFlickedOff(this_00), cVar1 == '\0')))) break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


/* GridItemTriggerTile::ManuallyTriggerTile() */

void __thiscall GridItemTriggerTile::ManuallyTriggerTile(GridItemTriggerTile *this)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0x2a8))();
  if (cVar1 != '\0') {
    if (((DAT_06add640 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06add640), iVar2 != 0)) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&DAT_06add610);
      __cxa_guard_release(&DAT_06add640);
      __cxa_atexit(std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector,&DAT_06add610,
                   &DAT_06a88000);
    }
    if (*(code **)(*(long *)this + 0x2c8) != handleTargetCollisions) {
      (**(code **)(*(long *)this + 0x2c8))(this,&DAT_06add610);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTriggerTile::getTriggeringEntityTypes() const */

void GridItemTriggerTile::getTriggeringEntityTypes(void)

{
  bool bVar1;
  GridItemTriggerTileProps *pGVar2;
  undefined4 *puVar3;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemTriggerTileProps>();
  local_1c = 0;
  local_18 = FUN_03e2ce4c(*(undefined8 *)(pGVar2 + 0xd0));
  local_10 = FUN_03e2ce9c(*(undefined8 *)(pGVar2 + 0xd8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar3 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    operator|=(&local_1c,*puVar3);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_1c);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTriggerTile::findTargets() const */

void GridItemTriggerTile::findTargets(void)

{
  SharkMinion *in_x0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)in_x0 + 0x2c0))(auStack_18);
  getTriggeringEntityTypes();
  SharkMinion::getRow(in_x0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  EntityFinder::GetEntitiesTouchingRectangle();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemTriggerTile::resetTriggerTime() */

void __thiscall GridItemTriggerTile::resetTriggerTime(GridItemTriggerTile *this)

{
  GridItemTriggerTileProps *pGVar1;
  float fVar2;
  
  pGVar1 = GridItem::GetProps<GridItemTriggerTileProps>();
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x1a8) = fVar2 + *(float *)(pGVar1 + 0xf8);
  return;
}


/* GridItemTriggerTile::calculateTriggerRect() const */

void GridItemTriggerTile::calculateTriggerRect(void)

{
  long in_x0;
  GridItemTriggerTileProps *pGVar1;
  Insets *in_x8;
  float fVar2;
  
  pGVar1 = GridItem::GetProps<GridItemTriggerTileProps>();
  Sexy::Insets::Insets(in_x8,(Insets *)(pGVar1 + 0xe8));
  fVar2 = *(float *)(in_x0 + 0x1c);
  *(int *)in_x8 = (int)((float)*(int *)in_x8 + *(float *)(in_x0 + 0x18));
  *(int *)(in_x8 + 4) = (int)((float)*(int *)(in_x8 + 4) + fVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTriggerTile::onUpdate() */

void __thiscall GridItemTriggerTile::onUpdate(GridItemTriggerTile *this)

{
  char cVar1;
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  cVar1 = isTimeForNextTrigger(this);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x2b8))(avStack_20,this);
    cVar1 = isThereValidTriggeringEntity(this,(vector *)avStack_20);
    if ((cVar1 != '\0') && (*(code **)(*(long *)this + 0x2c8) != handleTargetCollisions)) {
      (**(code **)(*(long *)this + 0x2c8))(this,avStack_20);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

