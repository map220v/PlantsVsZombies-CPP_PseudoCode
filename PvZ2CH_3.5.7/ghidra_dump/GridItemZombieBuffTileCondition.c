// Class: GridItemZombieBuffTileCondition


/* GridItemZombieBuffTileCondition::~GridItemZombieBuffTileCondition() */

void __thiscall
GridItemZombieBuffTileCondition::~GridItemZombieBuffTileCondition
          (GridItemZombieBuffTileCondition *this)

{
  *(undefined ***)this = &PTR_GetClass_06784750;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombieBuffTileCondition_06784a28;
  GridItemZombieBuffTile::~GridItemZombieBuffTile((GridItemZombieBuffTile *)this);
  return;
}


/* non-virtual thunk to GridItemZombieBuffTileCondition::~GridItemZombieBuffTileCondition() */

void __thiscall
GridItemZombieBuffTileCondition::~GridItemZombieBuffTileCondition
          (GridItemZombieBuffTileCondition *this)

{
  ~GridItemZombieBuffTileCondition(this + -0x10);
  return;
}


/* GridItemZombieBuffTileCondition::~GridItemZombieBuffTileCondition() */

void __thiscall
GridItemZombieBuffTileCondition::~GridItemZombieBuffTileCondition
          (GridItemZombieBuffTileCondition *this)

{
  ~GridItemZombieBuffTileCondition(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemZombieBuffTileCondition::~GridItemZombieBuffTileCondition() */

void __thiscall
GridItemZombieBuffTileCondition::~GridItemZombieBuffTileCondition
          (GridItemZombieBuffTileCondition *this)

{
  ~GridItemZombieBuffTileCondition(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBuffTileCondition::StaticClassInit() */

void GridItemZombieBuffTileCondition::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemZombieBuffTileCondition");
    (*pcVar2)(plVar1,asStack_10,FUN_03e1632c,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieBuffTileCondition::StaticGetClass() */

long * GridItemZombieBuffTileCondition::StaticGetClass(void)

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
  uVar2 = GridItemZombieBuffTile::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombieBuffTileCondition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieBuffTileCondition::GetClass() const */

long * GridItemZombieBuffTileCondition::GetClass(void)

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
  uVar2 = GridItemZombieBuffTile::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombieBuffTileCondition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieBuffTileCondition::GridItemZombieBuffTileCondition() */

void __thiscall
GridItemZombieBuffTileCondition::GridItemZombieBuffTileCondition
          (GridItemZombieBuffTileCondition *this)

{
  GridItemZombieBuffTile::GridItemZombieBuffTile((GridItemZombieBuffTile *)this);
  *(undefined ***)this = &PTR_GetClass_06784750;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombieBuffTileCondition_06784a28;
  return;
}


/* GridItemZombieBuffTileCondition::StaticNew() */

GridItemZombieBuffTileCondition * GridItemZombieBuffTileCondition::StaticNew(void)

{
  GridItemZombieBuffTileCondition *this;
  
  this = ::operator_new(0x1b0);
  GridItemZombieBuffTileCondition(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBuffTileCondition::doApplyEffect(BoardEntity const*) */

void __thiscall
GridItemZombieBuffTileCondition::doApplyEffect
          (GridItemZombieBuffTileCondition *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  long *extraout_x0;
  GridItemZombieBuffTileConditionProps *pGVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  SexyVector3 *this_01;
  float fVar5;
  undefined4 uVar6;
  RtWeakPtr aRStack_30 [8];
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (extraout_x0 != (long *)0x0) {
    pGVar3 = GridItem::GetProps<GridItemZombieBuffTileConditionProps>();
    cVar1 = Zombie::HasCondition(extraout_x0,*(undefined4 *)(pGVar3 + 0xe4));
    if (cVar1 == '\0') {
      pGVar3 = GridItem::GetProps<GridItemZombieBuffTileConditionProps>();
      uVar6 = *(undefined4 *)(pGVar3 + 0xe4);
      pGVar3 = GridItem::GetProps<GridItemZombieBuffTileConditionProps>();
                    /* WARNING: Load size is inaccurate */
      Zombie::ApplyCondition(*(Zombie **)(pGVar3 + 0xe8),0,extraout_x0,uVar6,1);
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      pGVar3 = GridItem::GetProps<GridItemZombieBuffTileConditionProps>();
      GetPAMByName((string *)(pGVar3 + 0xf0));
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
      Effect_PopAnim::SetCentered(this_00,true);
      this_01 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)this);
      iVar2 = FUN_03e153cc();
      fVar5 = (float)iVar2;
      uVar6 = 0;
      EATextSquish::Vec3::Vec3(aVStack_28,0.0,fVar5,0.0);
      local_18 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aVStack_28);
      local_14 = fVar5;
      local_10 = uVar6;
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,-1)
      ;
      iVar2 = (**(code **)(*extraout_x0 + 0x170))(extraout_x0);
      FUN_03e15178(this_00 + 0x1c,iVar2 + 1);
      std::string::string((string *)&local_18,"animation");
      Effect_PopAnim::PlaySingleAnimation(this_00,(string *)&local_18,2);
      std::string::~string((string *)&local_18);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

