// Class: GridItemGravestoneZombieOnDestruction


/* GridItemGravestoneZombieOnDestruction::GridItemGravestoneZombieOnDestruction() */

void __thiscall
GridItemGravestoneZombieOnDestruction::GridItemGravestoneZombieOnDestruction
          (GridItemGravestoneZombieOnDestruction *this)

{
  GridItemGravestone::GridItemGravestone((GridItemGravestone *)this);
  *(undefined ***)this = &PTR_GetClass_0676c930;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGravestoneZombieOnDestruction_0676cbf0;
  return;
}


/* GridItemGravestoneZombieOnDestruction::StaticNew() */

GridItemGravestoneZombieOnDestruction * GridItemGravestoneZombieOnDestruction::StaticNew(void)

{
  GridItemGravestoneZombieOnDestruction *this;
  
  this = ::operator_new(0x1e0);
  GridItemGravestoneZombieOnDestruction(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestoneZombieOnDestruction::StaticClassInit() */

void GridItemGravestoneZombieOnDestruction::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemGravestoneZombieOnDestruction");
    (*pcVar2)(plVar1,asStack_10,FUN_03d60f24,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGravestoneZombieOnDestruction::StaticGetClass() */

long * GridItemGravestoneZombieOnDestruction::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemGravestoneZombieOnDestruction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGravestoneZombieOnDestruction::GetClass() const */

long * GridItemGravestoneZombieOnDestruction::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemGravestoneZombieOnDestruction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestoneZombieOnDestruction::onKilled() */

void __thiscall
GridItemGravestoneZombieOnDestruction::onKilled(GridItemGravestoneZombieOnDestruction *this)

{
  Zombie *this_00;
  SexyVector3 *pSVar1;
  long *plVar2;
  code *pcVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  StageModule::GetBasicZombieType();
  plVar2 = *(long **)(gLawnApp + 0x9f0);
  pcVar3 = *(code **)(*plVar2 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  this_00 = (Zombie *)(*pcVar3)(plVar2,aRStack_10,0xfffffffb,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  Zombie::RiseFromGround(this_00,pSVar1,true);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGravestoneZombieOnDestruction::~GridItemGravestoneZombieOnDestruction() */

void __thiscall
GridItemGravestoneZombieOnDestruction::~GridItemGravestoneZombieOnDestruction
          (GridItemGravestoneZombieOnDestruction *this)

{
  *(undefined ***)this = &PTR_GetClass_0676c930;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGravestoneZombieOnDestruction_0676cbf0;
  GridItemGravestone::~GridItemGravestone((GridItemGravestone *)this);
  return;
}


/* non-virtual thunk to
   GridItemGravestoneZombieOnDestruction::~GridItemGravestoneZombieOnDestruction() */

void __thiscall
GridItemGravestoneZombieOnDestruction::~GridItemGravestoneZombieOnDestruction
          (GridItemGravestoneZombieOnDestruction *this)

{
  ~GridItemGravestoneZombieOnDestruction(this + -0x10);
  return;
}


/* GridItemGravestoneZombieOnDestruction::~GridItemGravestoneZombieOnDestruction() */

void __thiscall
GridItemGravestoneZombieOnDestruction::~GridItemGravestoneZombieOnDestruction
          (GridItemGravestoneZombieOnDestruction *this)

{
  ~GridItemGravestoneZombieOnDestruction(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   GridItemGravestoneZombieOnDestruction::~GridItemGravestoneZombieOnDestruction() */

void __thiscall
GridItemGravestoneZombieOnDestruction::~GridItemGravestoneZombieOnDestruction
          (GridItemGravestoneZombieOnDestruction *this)

{
  ~GridItemGravestoneZombieOnDestruction(this + -0x10);
  return;
}

