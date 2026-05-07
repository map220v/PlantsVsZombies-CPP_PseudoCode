// Class: ComponentWarmingRadiusForHeroPlant


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentWarmingRadiusForHeroPlant::StaticClassInit() */

void ComponentWarmingRadiusForHeroPlant::StaticClassInit(void)

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
    std::string::string(asStack_10,"ComponentWarmingRadiusForHeroPlant");
    (*pcVar2)(plVar1,asStack_10,FUN_042c03c8,0x238,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentWarmingRadiusForHeroPlant::StaticGetClass() */

long * ComponentWarmingRadiusForHeroPlant::StaticGetClass(void)

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
  uVar2 = ComponentWarmingRadius::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentWarmingRadiusForHeroPlant",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentWarmingRadiusForHeroPlant::GetClass() const */

long * ComponentWarmingRadiusForHeroPlant::GetClass(void)

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
  uVar2 = ComponentWarmingRadius::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentWarmingRadiusForHeroPlant",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentWarmingRadiusForHeroPlant::ComponentWarmingRadiusForHeroPlant() */

void __thiscall
ComponentWarmingRadiusForHeroPlant::ComponentWarmingRadiusForHeroPlant
          (ComponentWarmingRadiusForHeroPlant *this)

{
  ComponentWarmingRadius::ComponentWarmingRadius((ComponentWarmingRadius *)this);
  *(undefined ***)this = &PTR_GetClass_0682c810;
  return;
}


/* ComponentWarmingRadiusForHeroPlant::StaticNew() */

ComponentWarmingRadiusForHeroPlant * ComponentWarmingRadiusForHeroPlant::StaticNew(void)

{
  ComponentWarmingRadiusForHeroPlant *this;
  
  this = ::operator_new(0x238);
  ComponentWarmingRadiusForHeroPlant(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentWarmingRadiusForHeroPlant::GetGridItemsInRadius(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&) */

void __thiscall
ComponentWarmingRadiusForHeroPlant::GetGridItemsInRadius
          (ComponentWarmingRadiusForHeroPlant *this,vector *param_1)

{
  BoardTransforms *this_00;
  undefined8 uVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  BoardEntity **ppBVar5;
  undefined8 *puVar6;
  Point *extraout_x1;
  Point *pPVar7;
  Point *extraout_x1_00;
  Point *extraout_x1_01;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  float fVar12;
  int local_68;
  int local_64;
  float local_60;
  float local_5c;
  int local_58;
  int local_54;
  float local_50;
  float local_4c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  Point aPStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar11 = 0;
  local_8 = ___stack_chk_guard;
  cVar2 = ComponentRadiusBurst::calculateOrigin((ComponentRadiusBurst *)this);
  pPVar7 = extraout_x1;
  if (cVar2 != '\0') {
    uVar11 = ComponentRadiusBurst::radiusInBoardSpace((ComponentRadiusBurst *)this);
    pPVar7 = extraout_x1_01;
  }
  this_00 = (BoardTransforms *)(this + 0x34);
  BoardTransforms::GridToBoardSpaceRect(this_00,pPVar7);
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_68,(TPoint *)&local_38);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_60,(float)local_68,(float)local_64);
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    fVar12 = (float)Board::calculateRoofOffsetZ(local_60);
    local_5c = local_5c - fVar12;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  EntityFinder::GetEntitiesTouchingCircle2D
            (uVar11,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38,4,
             (FastCurve *)&local_60,0xffffffff,0xffffffff);
  BoardTransforms::GridToBoardSpaceRect(this_00,extraout_x1_00);
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_58,(TPoint *)aPStack_40);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_50,(float)local_58,(float)local_54);
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    fVar12 = (float)Board::calculateRoofOffsetZ(local_50);
    local_4c = local_4c - fVar12;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesTouchingCircle2D
            (uVar11,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,4,
             (FastCurve *)&local_50,0xffffffff,0xffffffff);
  uVar9 = 0;
  while( true ) {
    uVar1 = local_38;
    uVar3 = FUN_042c0164(local_38,local_30);
    uVar10 = local_20;
    if (uVar3 <= uVar9) break;
    ppBVar5 = (BoardEntity **)FUN_042c0170(uVar1,uVar9);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,ppBVar5);
    uVar9 = uVar9 + 1;
  }
  uVar9 = 0;
  uVar3 = FUN_042c0164(local_20,local_18);
  if (uVar3 != 0) {
    do {
      uVar1 = local_38;
      lVar4 = FUN_042c0164(local_38,local_30);
      ppBVar5 = (BoardEntity **)FUN_042c0170(uVar10,uVar9);
      for (lVar8 = 0; lVar8 != lVar4; lVar8 = lVar8 + 1) {
        puVar6 = (undefined8 *)FUN_042c0170(uVar1,lVar8);
        if (*ppBVar5 == (BoardEntity *)*puVar6) goto LAB_042c5404;
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,ppBVar5);
      uVar10 = local_20;
      uVar3 = FUN_042c0164(local_20,local_18);
LAB_042c5404:
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar3);
  }
  ComponentRadiusBurst::calculateOrigin((ComponentRadiusBurst *)this);
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  Sexy::Point::Point(aPStack_40,(TPoint *)this_00);
  TargetInfoProps::FilterUntargetableGridItemsAtLoc
            ((TargetInfoProps *)(this + 0xc0),param_1,aRStack_48,aPStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentWarmingRadiusForHeroPlant::~ComponentWarmingRadiusForHeroPlant() */

void __thiscall
ComponentWarmingRadiusForHeroPlant::~ComponentWarmingRadiusForHeroPlant
          (ComponentWarmingRadiusForHeroPlant *this)

{
  *(undefined ***)this = &PTR_GetClass_0682c810;
  ComponentWarmingRadius::~ComponentWarmingRadius((ComponentWarmingRadius *)this);
  return;
}


/* ComponentWarmingRadiusForHeroPlant::~ComponentWarmingRadiusForHeroPlant() */

void __thiscall
ComponentWarmingRadiusForHeroPlant::~ComponentWarmingRadiusForHeroPlant
          (ComponentWarmingRadiusForHeroPlant *this)

{
  ~ComponentWarmingRadiusForHeroPlant(this);
  AK::FreeHook(this);
  return;
}

