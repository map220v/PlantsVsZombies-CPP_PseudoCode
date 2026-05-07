// Class: PlantTypeVine


/* PlantTypeVine::PlantTypeVine() */

void __thiscall PlantTypeVine::PlantTypeVine(PlantTypeVine *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_067af540;
  return;
}


/* PlantTypeVine::~PlantTypeVine() */

void __thiscall PlantTypeVine::~PlantTypeVine(PlantTypeVine *this)

{
  *(undefined ***)this = &PTR_GetClass_067af540;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeVine::~PlantTypeVine() */

void __thiscall PlantTypeVine::~PlantTypeVine(PlantTypeVine *this)

{
  ~PlantTypeVine(this);
  AK::FreeHook(this);
  return;
}


/* PlantTypeVine::StaticNew() */

PlantTypeVine * PlantTypeVine::StaticNew(void)

{
  PlantTypeVine *this;
  
  this = ::operator_new(0x138);
  PlantTypeVine(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeVine::StaticClassInit() */

void PlantTypeVine::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantTypeVine");
    (*pcVar2)(plVar1,asStack_10,FUN_03fd9ac0,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTypeVine::StaticGetClass() */

long * PlantTypeVine::StaticGetClass(void)

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
  uVar2 = PlantType::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTypeVine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTypeVine::GetClass() const */

long * PlantTypeVine::GetClass(void)

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
  uVar2 = PlantType::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTypeVine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeVine::CanPlantOnPlant(Plant*) const */

void __thiscall PlantTypeVine::CanPlantOnPlant(PlantTypeVine *this,Plant *param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  PlantGroup *this_00;
  long lVar5;
  Plant *pPVar6;
  Point *pPVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar7 = *(Point **)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_10,*(int *)(param_1 + 0x114),*(int *)(param_1 + 0x110));
  this_00 = (PlantGroup *)Board::GetPlantGroupAt(pPVar7);
  if (this_00 != (PlantGroup *)0x0) {
    PlantGroup::GetTopPlant(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    Plant::GetType();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
    bVar1 = std::operator!=((string *)(lVar5 + 8),(string *)(this + 8));
    if ((bVar1) && (iVar4 = FUN_03fd98e8(*(undefined4 *)(param_1 + 0x230)), iVar4 == 1)) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      uVar3 = 1;
      goto LAB_03fd9de4;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    PlantGroup::GetTopPlant(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    Plant::GetType();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
    cVar2 = std::operator==((string *)(lVar5 + 8),(string *)(this + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    if (cVar2 != '\0') {
      PlantGroup::GetTopPlant(this_00);
      pPVar6 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
      uVar3 = PlantType::CanPlantOnPlant((PlantType *)this,pPVar6);
      goto LAB_03fd9de4;
    }
  }
  uVar3 = 0;
LAB_03fd9de4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeVine::GatherPlantingRestrictions(Board*, Sexy::Point const&, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
PlantTypeVine::GatherPlantingRestrictions
          (PlantTypeVine *this,Board *param_1,Point *param_2,vector *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  Board *pBVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined4 local_28 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesAtGridSquare
            (avStack_20,1,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
  cVar3 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (cVar3 == '\0') {
    cVar3 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),param_2);
    if (cVar3 != '\0') {
      local_28[0] = 0x38;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                 (PlantingReason *)local_28);
    }
    iVar1 = *(int *)(param_2 + 4);
    iVar2 = *(int *)param_2;
    pBVar7 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)local_28,"");
    lVar5 = Board::GetPlantAt(pBVar7,iVar2,iVar1,(string *)local_28);
    std::string::~string((string *)local_28);
    nop();
    if (lVar5 == 0) {
LAB_03fdada8:
      iVar1 = *(int *)param_2;
      iVar2 = *(int *)(param_2 + 4);
      pBVar7 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)local_28,"");
      lVar6 = Board::GetPlantAt(pBVar7,iVar1 + -1,iVar2,(string *)local_28);
      std::string::~string((string *)local_28);
      nop();
      if (lVar6 != 0) {
        Plant::GetType();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
        bVar4 = std::operator==("cobcannon",(string *)(lVar6 + 8));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
        if (bVar4) goto LAB_03fdad38;
        Plant::GetType();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
        bVar4 = std::operator==("armorflame",(string *)(lVar6 + 8));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
        if (bVar4) goto LAB_03fdabb4;
      }
      if (lVar5 != 0) goto LAB_03fdabc8;
    }
    else {
      Plant::GetType();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
      bVar4 = std::operator==("cobcannon",(string *)(lVar6 + 8));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
      if (bVar4) {
LAB_03fdad38:
        local_28[0] = 0x55;
        std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                  ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                   (PlantingReason *)local_28);
        goto LAB_03fdabc8;
      }
      Plant::GetType();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
      bVar4 = std::operator==("armorflame",(string *)(lVar6 + 8));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
      if (bVar4) goto LAB_03fdabb4;
      Plant::GetType();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      bVar4 = std::operator==("smallcactus",(string *)(lVar6 + 8));
      if (bVar4) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      }
      else {
        Plant::GetType();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
        bVar4 = std::operator==("smallChestnut",(string *)(lVar6 + 8));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        if (!bVar4) goto LAB_03fdada8;
      }
    }
  }
  else {
    iVar1 = *(int *)param_2;
    iVar2 = *(int *)(param_2 + 4);
    pBVar7 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)local_28,"");
    lVar5 = Board::GetPlantAt(pBVar7,iVar1 + -1,iVar2,(string *)local_28);
    std::string::~string((string *)local_28);
    nop();
    if (lVar5 != 0) {
      Plant::GetType();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
      bVar4 = std::operator==("cobcannon",(string *)(lVar5 + 8));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
      if (bVar4) goto LAB_03fdad38;
      Plant::GetType();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
      bVar4 = std::operator==("armorflame",(string *)(lVar5 + 8));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
      if (bVar4) {
LAB_03fdabb4:
        local_28[0] = 4;
        std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                  ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                   (PlantingReason *)local_28);
        goto LAB_03fdabc8;
      }
    }
  }
  local_28[0] = 0x54;
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
             (PlantingReason *)local_28);
LAB_03fdabc8:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

