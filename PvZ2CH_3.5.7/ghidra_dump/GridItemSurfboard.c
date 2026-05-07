// Class: GridItemSurfboard


/* GridItemSurfboard::GetCantPlantReason() const */

undefined8 GridItemSurfboard::GetCantPlantReason(void)

{
  return 0x16;
}


/* GridItemSurfboard::GridItemSurfboard() */

void __thiscall GridItemSurfboard::GridItemSurfboard(GridItemSurfboard *this)

{
  GridItemGravestone::GridItemGravestone((GridItemGravestone *)this);
  *(undefined ***)this = &PTR_GetClass_068854f0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSurfboard_068857b0;
  return;
}


/* GridItemSurfboard::StaticNew() */

GridItemSurfboard * GridItemSurfboard::StaticNew(void)

{
  GridItemSurfboard *this;
  
  this = ::operator_new(0x1e0);
  GridItemSurfboard(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSurfboard::StaticClassInit() */

void GridItemSurfboard::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemSurfboard");
    (*pcVar2)(plVar1,asStack_10,FUN_04646424,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSurfboard::StaticGetClass() */

long * GridItemSurfboard::StaticGetClass(void)

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
  uVar2 = GridItemGravestone::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSurfboard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSurfboard::GetClass() const */

long * GridItemSurfboard::GetClass(void)

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
  uVar2 = GridItemGravestone::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSurfboard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSurfboard::updateGroundEffect() */

void __thiscall GridItemSurfboard::updateGroundEffect(GridItemSurfboard *this)

{
  char cVar1;
  SexyVector3 *pSVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_04644a28(this[0x1b8]);
  if (cVar1 == '\0') {
    pSVar2 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    cVar1 = RealObject::IsOnWaterTile((RealObject *)this,pSVar2);
    if (((cVar1 == '\0') || (cVar1 = (**(code **)(*(long *)this + 0xa0))(this), cVar1 == '\0')) ||
       (0.0 < *(float *)(pSVar2 + 8))) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = 0;
    }
    EntityComponent_GroundEffect::SetGroundEffect
              ((EntityComponent_GroundEffect *)(this + 0x1b0),this,uVar3,0);
    return;
  }
  return;
}


/* GridItemSurfboard::onUpdate() */

void __thiscall GridItemSurfboard::onUpdate(GridItemSurfboard *this)

{
  updateGroundEffect(this);
  (**(code **)(*(long *)this + 0xa8))(this,0);
  GridItemGravestone::onUpdate((GridItemGravestone *)this);
  return;
}


/* GridItemSurfboard::~GridItemSurfboard() */

void __thiscall GridItemSurfboard::~GridItemSurfboard(GridItemSurfboard *this)

{
  *(undefined ***)this = &PTR_GetClass_068854f0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSurfboard_068857b0;
  GridItemGravestone::~GridItemGravestone((GridItemGravestone *)this);
  return;
}


/* non-virtual thunk to GridItemSurfboard::~GridItemSurfboard() */

void __thiscall GridItemSurfboard::~GridItemSurfboard(GridItemSurfboard *this)

{
  ~GridItemSurfboard(this + -0x10);
  return;
}


/* GridItemSurfboard::~GridItemSurfboard() */

void __thiscall GridItemSurfboard::~GridItemSurfboard(GridItemSurfboard *this)

{
  ~GridItemSurfboard(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemSurfboard::~GridItemSurfboard() */

void __thiscall GridItemSurfboard::~GridItemSurfboard(GridItemSurfboard *this)

{
  ~GridItemSurfboard(this + -0x10);
  return;
}

