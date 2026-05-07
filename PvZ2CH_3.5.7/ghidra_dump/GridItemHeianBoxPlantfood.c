// Class: GridItemHeianBoxPlantfood


/* GridItemHeianBoxPlantfood::~GridItemHeianBoxPlantfood() */

void __thiscall
GridItemHeianBoxPlantfood::~GridItemHeianBoxPlantfood(GridItemHeianBoxPlantfood *this)

{
  *(undefined ***)this = &PTR_GetClass_06766d30;
  *(undefined ***)(this + 0x10) = &PTR__GridItemHeianBoxPlantfood_06767000;
  GridItemHeianBox::~GridItemHeianBox((GridItemHeianBox *)this);
  return;
}


/* non-virtual thunk to GridItemHeianBoxPlantfood::~GridItemHeianBoxPlantfood() */

void __thiscall
GridItemHeianBoxPlantfood::~GridItemHeianBoxPlantfood(GridItemHeianBoxPlantfood *this)

{
  ~GridItemHeianBoxPlantfood(this + -0x10);
  return;
}


/* GridItemHeianBoxPlantfood::~GridItemHeianBoxPlantfood() */

void __thiscall
GridItemHeianBoxPlantfood::~GridItemHeianBoxPlantfood(GridItemHeianBoxPlantfood *this)

{
  ~GridItemHeianBoxPlantfood(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemHeianBoxPlantfood::~GridItemHeianBoxPlantfood() */

void __thiscall
GridItemHeianBoxPlantfood::~GridItemHeianBoxPlantfood(GridItemHeianBoxPlantfood *this)

{
  ~GridItemHeianBoxPlantfood(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxPlantfood::StaticClassInit() */

void GridItemHeianBoxPlantfood::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemHeianBoxPlantfood");
    (*pcVar2)(plVar1,asStack_10,FUN_03d29320,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHeianBoxPlantfood::StaticGetClass() */

long * GridItemHeianBoxPlantfood::StaticGetClass(void)

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
  uVar2 = GridItemHeianBox::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHeianBoxPlantfood",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHeianBoxPlantfood::GetClass() const */

long * GridItemHeianBoxPlantfood::GetClass(void)

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
  uVar2 = GridItemHeianBox::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHeianBoxPlantfood",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHeianBoxPlantfood::GridItemHeianBoxPlantfood() */

void __thiscall
GridItemHeianBoxPlantfood::GridItemHeianBoxPlantfood(GridItemHeianBoxPlantfood *this)

{
  undefined4 uVar1;
  
  GridItemHeianBox::GridItemHeianBox((GridItemHeianBox *)this);
  *(undefined ***)this = &PTR_GetClass_06766d30;
  *(undefined ***)(this + 0x10) = &PTR__GridItemHeianBoxPlantfood_06767000;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = uVar1;
  return;
}


/* GridItemHeianBoxPlantfood::StaticNew() */

GridItemHeianBoxPlantfood * GridItemHeianBoxPlantfood::StaticNew(void)

{
  GridItemHeianBoxPlantfood *this;
  
  this = ::operator_new(0x1b0);
  GridItemHeianBoxPlantfood(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxPlantfood::triggerPlantfood() */

void GridItemHeianBoxPlantfood::triggerPlantfood(void)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Plant *this;
  RtObject *this_00;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombiePVPSkill_Sleep::findSleepTargets();
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    this_00 = (RtObject *)*puVar3;
    if ((this_00 != (RtObject *)0x0) && (bVar1 = Sexy::RtObject::IsA<Plant>(this_00), bVar1)) {
      this = Sexy::RtObject::Cast<Plant>(this_00);
      cVar2 = Plant::CanApplyPlantfood(this);
      if (cVar2 != '\0') {
        (**(code **)(**(long **)(this + 0xa8) + 0x220))(*(long **)(this + 0xa8));
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHeianBoxPlantfood::onActivated() */

void __thiscall GridItemHeianBoxPlantfood::onActivated(GridItemHeianBoxPlantfood *this)

{
  GridItemHeianBoxPlantfoodProps *pGVar1;
  float fVar2;
  
  triggerPlantfood();
  fVar2 = (float)PVZ_T();
  pGVar1 = GridItem::GetProps<GridItemHeianBoxPlantfoodProps>();
  *(float *)(this + 0x1ac) = fVar2 + *(float *)(pGVar1 + 0xd0);
  return;
}

