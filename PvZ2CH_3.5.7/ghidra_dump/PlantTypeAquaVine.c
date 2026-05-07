// Class: PlantTypeAquaVine


/* PlantTypeAquaVine::StaticGetClass() */

long * PlantTypeAquaVine::StaticGetClass(void)

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
  uVar2 = PlantTypeVine::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTypeAquaVine",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeAquaVine::GetClass() const */

long * PlantTypeAquaVine::GetClass(void)

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
  uVar2 = PlantTypeVine::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTypeAquaVine",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeAquaVine::PlantTypeAquaVine() */

void __thiscall PlantTypeAquaVine::PlantTypeAquaVine(PlantTypeAquaVine *this)

{
  PlantTypeVine::PlantTypeVine((PlantTypeVine *)this);
  *(undefined ***)this = &PTR_GetClass_06799b70;
  return;
}


/* PlantTypeAquaVine::StaticNew() */

PlantTypeAquaVine * PlantTypeAquaVine::StaticNew(void)

{
  PlantTypeAquaVine *this;
  
  this = ::operator_new(0x138);
  PlantTypeAquaVine(this);
  return this;
}


/* PlantTypeAquaVine::~PlantTypeAquaVine() */

void __thiscall PlantTypeAquaVine::~PlantTypeAquaVine(PlantTypeAquaVine *this)

{
  *(undefined ***)this = &PTR_GetClass_06799b70;
  PlantTypeVine::~PlantTypeVine((PlantTypeVine *)this);
  return;
}


/* PlantTypeAquaVine::~PlantTypeAquaVine() */

void __thiscall PlantTypeAquaVine::~PlantTypeAquaVine(PlantTypeAquaVine *this)

{
  ~PlantTypeAquaVine(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeAquaVine::GatherPlantingRestrictions(Board*, Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) const */

void __thiscall
PlantTypeAquaVine::GatherPlantingRestrictions
          (PlantTypeAquaVine *this,Board *param_1,Point *param_2,vector *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  Board *pBVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined4 local_28 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesAtGridSquare
            (avStack_20,1,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
  cVar3 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),param_2);
  cVar4 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (cVar4 == '\0') {
    cVar4 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),param_2);
    if (cVar4 != '\0') {
      local_28[0] = 0x38;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                 (PlantingReason *)local_28);
    }
    iVar1 = *(int *)param_2;
    iVar2 = *(int *)(param_2 + 4);
    pBVar8 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)local_28,"");
    lVar6 = Board::GetPlantAt(pBVar8,iVar1,iVar2,(string *)local_28);
    std::string::~string((string *)local_28);
    nop();
    if (lVar6 == 0) {
LAB_03f50954:
      iVar1 = *(int *)param_2;
      iVar2 = *(int *)(param_2 + 4);
      pBVar8 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)local_28,"");
      lVar7 = Board::GetPlantAt(pBVar8,iVar1 + -1,iVar2,(string *)local_28);
      std::string::~string((string *)local_28);
      nop();
      if (lVar7 != 0) {
        Plant::GetType();
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
        bVar5 = std::operator==("cobcannon",(string *)(lVar7 + 8));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
        if (bVar5) goto LAB_03f50890;
        Plant::GetType();
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
        bVar5 = std::operator==("armorflame",(string *)(lVar7 + 8));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
        if (bVar5) goto LAB_03f50844;
      }
      if (lVar6 != 0) goto LAB_03f50858;
      goto joined_r0x03f50a1c;
    }
    Plant::GetType();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
    bVar5 = std::operator==("cobcannon",(string *)(lVar7 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
    if (bVar5) {
LAB_03f50890:
      local_28[0] = 0x55;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                 (PlantingReason *)local_28);
      goto LAB_03f50858;
    }
    Plant::GetType();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
    bVar5 = std::operator==("armorflame",(string *)(lVar7 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
    if (bVar5) goto LAB_03f50844;
    Plant::GetType();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    bVar5 = std::operator==("smallcactus",(string *)(lVar7 + 8));
    if (bVar5) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    }
    else {
      Plant::GetType();
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
      bVar5 = std::operator==("smallChestnut",(string *)(lVar7 + 8));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      if (!bVar5) goto LAB_03f50954;
    }
  }
  else {
    iVar1 = *(int *)param_2;
    iVar2 = *(int *)(param_2 + 4);
    pBVar8 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)local_28,"");
    lVar6 = Board::GetPlantAt(pBVar8,iVar1 + -1,iVar2,(string *)local_28);
    std::string::~string((string *)local_28);
    nop();
    if (lVar6 != 0) {
      Plant::GetType();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
      bVar5 = std::operator==("cobcannon",(string *)(lVar6 + 8));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
      if (bVar5) goto LAB_03f50890;
      Plant::GetType();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
      bVar5 = std::operator==("armorflame",(string *)(lVar6 + 8));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
      if (bVar5) {
LAB_03f50844:
        local_28[0] = 4;
        std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                  ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                   (PlantingReason *)local_28);
        goto LAB_03f50858;
      }
    }
joined_r0x03f50a1c:
    if (cVar3 != '\0') {
      lVar6 = FUN_03f4f124(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
      if (lVar6 != 0) {
        local_28[0] = 0x83;
        std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                  ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                   (PlantingReason *)local_28);
      }
      goto LAB_03f50858;
    }
  }
  local_28[0] = 0x54;
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
             (PlantingReason *)local_28);
LAB_03f50858:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

