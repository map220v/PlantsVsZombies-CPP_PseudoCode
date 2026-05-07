// Class: PlantTypeHotPotato


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeHotPotato::StaticClassInit() */

void PlantTypeHotPotato::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantTypeHotPotato");
    (*pcVar2)(plVar1,asStack_10,FUN_040aff58,0x160,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTypeHotPotato::StaticGetClass() */

long * PlantTypeHotPotato::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeHotPotato",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTypeHotPotato::GetClass() const */

long * PlantTypeHotPotato::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeHotPotato",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeHotPotato::CanPlantOnConvertedPlant(Sexy::RtWeakPtr<Plant>) const */

void PlantTypeHotPotato::CanPlantOnConvertedPlant
               (wchar16 *param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2,undefined8 param_3,
               LineBreakCategory *param_4,LineBreakCategory *param_5)

{
  char cVar1;
  Plant *this;
  LineBreakCategory *pLVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  LineBreakCategory *local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = ___stack_chk_guard;
  this = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = Plant::IsIceblocked(this);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (param_1,(wchar16 *)aRStack_10,pLVar2,param_4,param_5);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* PlantTypeHotPotato::PlantTypeHotPotato() */

void __thiscall PlantTypeHotPotato::PlantTypeHotPotato(PlantTypeHotPotato *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_067d3ec0;
  GridItemRestrictionSet::GridItemRestrictionSet((GridItemRestrictionSet *)(this + 0x138));
  return;
}


/* PlantTypeHotPotato::StaticNew() */

PlantTypeHotPotato * PlantTypeHotPotato::StaticNew(void)

{
  PlantTypeHotPotato *this;
  
  this = ::operator_new(0x160);
  PlantTypeHotPotato(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeHotPotato::GatherPlantingRestrictions(Board*, Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) const */

void __thiscall
PlantTypeHotPotato::GatherPlantingRestrictions
          (PlantTypeHotPotato *this,Board *param_1,Point *param_2,vector *param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  RtObject *this_00;
  GridItemBreakableTarget *this_01;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = FUN_040b07dc(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
  if (lVar6 == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = GridItemRestrictionSet::IsIncluded((GridItem *)(this + 0x138));
  }
  iVar1 = *(int *)param_2;
  iVar2 = *(int *)(param_2 + 4);
  std::string::string((string *)local_10,"");
  lVar7 = Board::GetPlantAt(param_1,iVar1,iVar2,(string *)local_10);
  std::string::~string((string *)local_10);
  nop();
  bVar4 = false;
  if (lVar7 != 0) {
    Plant::GetType();
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    bVar4 = Sexy::RtObject::IsA<PlantTypeHotPotato>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  }
  if ((lVar6 == 0) || (nop(), this_01 == (GridItemBreakableTarget *)0x0)) {
LAB_040b1428:
    if (bVar4 < bVar3) goto LAB_040b1444;
  }
  else {
    if (*(code **)(*(long *)this_01 + 0x2b0) == GridItemBreakableTarget::IsControlled) {
      cVar5 = GridItemBreakableTarget::IsControlled(this_01);
    }
    else {
      cVar5 = (**(code **)(*(long *)this_01 + 0x2b0))();
    }
    if (cVar5 == '\0') goto LAB_040b1428;
  }
  local_10[0] = 7;
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
             (PlantingReason *)local_10);
LAB_040b1444:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTypeHotPotato::~PlantTypeHotPotato() */

void __thiscall PlantTypeHotPotato::~PlantTypeHotPotato(PlantTypeHotPotato *this)

{
  *(undefined ***)this = &PTR_GetClass_067d3ec0;
  GridItemRestrictionSet::~GridItemRestrictionSet((GridItemRestrictionSet *)(this + 0x138));
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeHotPotato::~PlantTypeHotPotato() */

void __thiscall PlantTypeHotPotato::~PlantTypeHotPotato(PlantTypeHotPotato *this)

{
  ~PlantTypeHotPotato(this);
  AK::FreeHook(this);
  return;
}

