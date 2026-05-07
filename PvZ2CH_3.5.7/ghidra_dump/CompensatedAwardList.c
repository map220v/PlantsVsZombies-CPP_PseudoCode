// Class: CompensatedAwardList


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CompensatedAwardList::StaticClassInit() */

void CompensatedAwardList::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CompensatedAward");
    (*pcVar3)(plVar2,asStack_10,FUN_043c85e0,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CompensatedAwardList");
    (*pcVar3)(plVar2,asStack_10,FUN_043cbb9c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CompensatedAwardList::StaticGetClass() */

long * CompensatedAwardList::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"CompensatedAwardList",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CompensatedAwardList::GetClass() const */

long * CompensatedAwardList::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"CompensatedAwardList",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CompensatedAwardList::GetItem(int) */

int * __thiscall CompensatedAwardList::GetItem(CompensatedAwardList *this,int param_1)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(this + 8);
  lVar2 = FUN_043c84d4(uVar6,*(undefined8 *)(this + 0x10));
  lVar4 = 0;
  piVar5 = (int *)0x0;
  while (lVar1 = lVar4 + 1, lVar4 != lVar2) {
    piVar3 = (int *)FUN_043c8510(uVar6,lVar4);
    lVar4 = lVar1;
    if (*piVar3 == param_1) {
      piVar5 = piVar3;
    }
  }
  return piVar5;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CompensatedAwardList::AddCompensatedAward(int, std::string&) */

void __thiscall
CompensatedAwardList::AddCompensatedAward(CompensatedAwardList *this,int param_1,string *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  PlayerInfo *this_00;
  long lVar6;
  Magento *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar10 = *(undefined8 *)(this + 8);
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_043c84d4(uVar10,*(undefined8 *)(this + 0x10));
  lVar6 = 0;
  do {
    lVar9 = lVar6;
    if (lVar9 == lVar4) {
      uVar10 = 0;
      goto LAB_043c8dfc;
    }
    piVar5 = (int *)FUN_043c8510(uVar10,lVar9);
    lVar6 = lVar9 + 1;
  } while (*piVar5 != param_1);
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  lVar6 = FUN_043c8510(*(undefined8 *)(this + 8),lVar9);
  if (0 < *(int *)(lVar6 + 0x10)) {
    cVar1 = PlayerInfo::GetIsPlantUnlocked(this_00,(string *)(lVar6 + 8));
    if (cVar1 == '\0') {
      lVar6 = FUN_043c8510(*(undefined8 *)(this + 8),lVar9);
      PlayerInfo::UnlockPlant(this_00,(string *)(lVar6 + 8),true);
      this_01 = (Magento *)FUN_043c8510(*(undefined8 *)(this + 8),lVar9);
      iVar3 = *(int *)(this_01 + 0x10);
    }
    else {
      lVar6 = FUN_043c8510(*(undefined8 *)(this + 8),lVar9);
      iVar2 = PlayerInfo::GetPlantStarLevel(this_00,(string *)(lVar6 + 8),false);
      this_01 = (Magento *)FUN_043c8510(*(undefined8 *)(this + 8),lVar9);
      iVar3 = *(int *)(this_01 + 0x10);
      if (iVar3 <= iVar2) {
        Magento::GetPlantLevelUp(this_01);
        uVar8 = 0;
        do {
          uVar11 = uVar8;
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          uVar8 = FUN_043c8520(*(undefined8 *)(lVar6 + 0x60),*(undefined8 *)(lVar6 + 0x68));
          if (uVar8 <= uVar11) goto LAB_043c9038;
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   FUN_043c852c(*(undefined8 *)(lVar6 + 0x60),uVar11);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
          lVar4 = FUN_043c8510(*(undefined8 *)(this + 8),lVar9);
          cVar1 = std::operator==((string *)(lVar6 + 0x80),(string *)(lVar4 + 8));
          uVar8 = uVar11 + 1;
        } while (cVar1 == '\0');
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_043c852c(*(undefined8 *)(lVar6 + 0x60),uVar11)
        ;
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
        iVar3 = FUN_043c8510(*(undefined8 *)(this + 8),lVar9);
        PlayerInfo::AddPlantPieceCount
                  ((string *)this_00,iVar3 + 8,SUB41(*(undefined4 *)(lVar6 + 0x90),0));
LAB_043c9038:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        lVar6 = FUN_043c8510(*(undefined8 *)(this + 8),lVar9);
        goto LAB_043c8ef8;
      }
    }
    PlayerInfo::PlantLevelUpCurrentLevel(this_00,(string *)(this_01 + 8),iVar3,false);
    lVar6 = FUN_043c8510(*(undefined8 *)(this + 8),lVar9);
  }
LAB_043c8ef8:
  if (0 < *(int *)(lVar6 + 0x14)) {
    PlayerInfo::AddPlantPieceCount((string *)this_00,(int)lVar6 + 8,SUB41(*(int *)(lVar6 + 0x14),0))
    ;
    lVar6 = FUN_043c8510(*(undefined8 *)(this + 8),lVar9);
  }
  if (0 < *(int *)(lVar6 + 0x18)) {
    PlayerInfo::AddAvatarPiecesCount(this_00,lVar6 + 8,0,*(undefined4 *)(lVar6 + 0x14),1);
    lVar6 = FUN_043c8510(*(undefined8 *)(this + 8),lVar9);
  }
  if (0 < *(int *)(lVar6 + 0x1c)) {
    PlayerInfo::AddCoins(this_00,*(int *)(lVar6 + 0x1c));
    lVar6 = FUN_043c8510(*(undefined8 *)(this + 8),lVar9);
  }
  if (0 < *(int *)(lVar6 + 0x20)) {
    PlayerInfo::AddGems(this_00,*(int *)(lVar6 + 0x20),true);
    lVar6 = FUN_043c8510(*(undefined8 *)(this + 8),lVar9);
  }
  thunk_FUN_05475e00(param_2,lVar6 + 0x30);
  PlayerInfo::saveCurrentProfile(this_00);
  uVar10 = 1;
LAB_043c8dfc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}


/* CompensatedAwardList::CompensatedAwardList() */

void __thiscall CompensatedAwardList::CompensatedAwardList(CompensatedAwardList *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_068460c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* CompensatedAwardList::StaticNew() */

CompensatedAwardList * CompensatedAwardList::StaticNew(void)

{
  CompensatedAwardList *this;
  
  this = ::operator_new(0x20);
  CompensatedAwardList(this);
  return this;
}


/* CompensatedAwardList::~CompensatedAwardList() */

void __thiscall CompensatedAwardList::~CompensatedAwardList(CompensatedAwardList *this)

{
  *(undefined ***)this = &PTR_GetClass_068460c0;
  std::vector<CompensatedAward,std::allocator<CompensatedAward>>::~vector
            ((vector<CompensatedAward,std::allocator<CompensatedAward>> *)(this + 8));
  nop();
  return;
}


/* CompensatedAwardList::~CompensatedAwardList() */

void __thiscall CompensatedAwardList::~CompensatedAwardList(CompensatedAwardList *this)

{
  ~CompensatedAwardList(this);
  AK::FreeHook(this);
  return;
}

