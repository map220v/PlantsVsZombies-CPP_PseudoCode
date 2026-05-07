// Class: GridItem_HealerStaff


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItem_HealerStaff::StaticClassInit() */

void GridItem_HealerStaff::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItem_HealerStaff");
    (*pcVar2)(plVar1,asStack_10,FUN_04ee7dcc,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItem_HealerStaff::StaticGetClass() */

long * GridItem_HealerStaff::StaticGetClass(void)

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
  uVar2 = GridItemEntityTargeting::StaticGetClass();
  (*pcVar3)(plVar1,"GridItem_HealerStaff",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItem_HealerStaff::GetClass() const */

long * GridItem_HealerStaff::GetClass(void)

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
  uVar2 = GridItemEntityTargeting::StaticGetClass();
  (*pcVar3)(plVar1,"GridItem_HealerStaff",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItem_HealerStaff::GridItem_HealerStaff() */

void __thiscall GridItem_HealerStaff::GridItem_HealerStaff(GridItem_HealerStaff *this)

{
  GridItemEntityTargeting::GridItemEntityTargeting((GridItemEntityTargeting *)this);
  *(undefined ***)this = &PTR_GetClass_06a00fd0;
  *(undefined ***)(this + 0x10) = &PTR__GridItem_HealerStaff_06a012e8;
  return;
}


/* GridItem_HealerStaff::StaticNew() */

GridItem_HealerStaff * GridItem_HealerStaff::StaticNew(void)

{
  GridItem_HealerStaff *this;
  
  this = ::operator_new(0x1e8);
  GridItem_HealerStaff(this);
  return this;
}


/* GridItem_HealerStaff::onAnimationComplete(std::string const&) */

void __thiscall
GridItem_HealerStaff::onAnimationComplete(GridItem_HealerStaff *this,string *param_1)

{
  bool bVar1;
  
  GridItemEntityTargeting::onAnimationComplete((string *)this);
  bVar1 = std::operator==(param_1,"drop");
  if (!bVar1) {
    return;
  }
  GridItemEntityTargeting::SetActive((GridItemEntityTargeting *)this,true);
  return;
}


/* GridItem_HealerStaff::isValidFriendlyTarget(Zombie*) const */

bool __thiscall
GridItem_HealerStaff::isValidFriendlyTarget(GridItem_HealerStaff *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  GridItemHealerStaffProps *pGVar4;
  string *psVar5;
  float *pfVar6;
  float *pfVar7;
  
  uVar3 = operator|(1,8);
  cVar1 = Zombie::MatchesAny(param_1,uVar3);
  if ((cVar1 == '\0') && (cVar1 = Creature::IsOnBoard(), cVar1 != '\0')) {
    pGVar4 = GridItem::GetProps<GridItemHealerStaffProps>();
    psVar5 = (string *)Zombie::GetTypeName(param_1);
    cVar1 = StringRestrictionSet::IsExcluded((StringRestrictionSet *)(pGVar4 + 0x168),psVar5);
    if ((cVar1 == '\0') &&
       ((param_1 == (Zombie *)0x0 ||
        (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1), !bVar2)))) {
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_1);
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this);
      return *pfVar6 <= *pfVar7;
    }
  }
  return false;
}


/* GridItem_HealerStaff::~GridItem_HealerStaff() */

void __thiscall GridItem_HealerStaff::~GridItem_HealerStaff(GridItem_HealerStaff *this)

{
  *(undefined ***)this = &PTR_GetClass_06a00fd0;
  *(undefined ***)(this + 0x10) = &PTR__GridItem_HealerStaff_06a012e8;
  GridItemEntityTargeting::~GridItemEntityTargeting((GridItemEntityTargeting *)this);
  return;
}


/* non-virtual thunk to GridItem_HealerStaff::~GridItem_HealerStaff() */

void __thiscall GridItem_HealerStaff::~GridItem_HealerStaff(GridItem_HealerStaff *this)

{
  ~GridItem_HealerStaff(this + -0x10);
  return;
}


/* GridItem_HealerStaff::~GridItem_HealerStaff() */

void __thiscall GridItem_HealerStaff::~GridItem_HealerStaff(GridItem_HealerStaff *this)

{
  ~GridItem_HealerStaff(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItem_HealerStaff::~GridItem_HealerStaff() */

void __thiscall GridItem_HealerStaff::~GridItem_HealerStaff(GridItem_HealerStaff *this)

{
  ~GridItem_HealerStaff(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItem_HealerStaff::findTargets(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   TeamFlags, BoardEntityTypeFlag, GridItemTargetingArea, float) */

void __thiscall
GridItem_HealerStaff::findTargets
          (GridItemEntityTargeting *param_1_00,GridItem_HealerStaff *this,
          vector<BoardEntity*,std::allocator<BoardEntity*>> *param_1,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  undefined8 *puVar4;
  Zombie *extraout_x0;
  float fVar5;
  float fVar6;
  RtObject *local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  cVar1 = GridItemEntityTargeting::findTargets(param_1_00,this,avStack_20,param_4,param_5,param_6);
  if (cVar1 != '\0') {
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar3)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      local_38 = (RtObject *)*puVar4;
      if ((local_38 != (RtObject *)0x0) && (bVar3 = Sexy::RtObject::IsA<Zombie>(local_38), bVar3)) {
        nop();
        cVar1 = isValidFriendlyTarget(this,extraout_x0);
        if (cVar1 != '\0') {
          fVar5 = (float)FUN_04ee7110(*(undefined4 *)(extraout_x0 + 0x280));
          fVar6 = (float)FUN_04ee7114(*(undefined4 *)(extraout_x0 + 0x284));
          if (fVar5 < fVar6) {
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                      (param_1,(BoardEntity **)&local_38);
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
  }
  bVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty(param_1);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2 ^ 1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItem_HealerStaff::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItem_HealerStaff::GatherPlantingRestrictions
          (GridItem_HealerStaff *this,PlantType *param_1,vector *param_2)

{
  GridItemPropertySheet *pGVar1;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = GridItem::GetProps<GridItemPropertySheet>();
  PlantingRestrictionSet::GatherPlantingRestrictions
            ((PlantingRestrictionSet *)(pGVar1 + 0x68),param_1,param_2);
  local_c = 0x65;
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

