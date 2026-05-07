// Class: PlantTypeLilyPad


/* PlantTypeLilyPad::StaticGetClass() */

long * PlantTypeLilyPad::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeLilyPad",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeLilyPad::GetClass() const */

long * PlantTypeLilyPad::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeLilyPad",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeLilyPad::PlantTypeLilyPad() */

void __thiscall PlantTypeLilyPad::PlantTypeLilyPad(PlantTypeLilyPad *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_06808240;
  return;
}


/* PlantTypeLilyPad::StaticNew() */

PlantTypeLilyPad * PlantTypeLilyPad::StaticNew(void)

{
  PlantTypeLilyPad *this;
  
  this = ::operator_new(0x138);
  PlantTypeLilyPad(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeLilyPad::GetCanBeUsedOnStage(std::string const&) const */

void __thiscall PlantTypeLilyPad::GetCanBeUsedOnStage(PlantTypeLilyPad *this,string *param_1)

{
  char cVar1;
  undefined8 uVar2;
  FestivalManager *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    uVar2 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    FUN_05475d88(asStack_10,uVar2);
    this_00 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
    cVar1 = FestivalManager::IsSummerVacationLevel(this_00,asStack_10);
    if (cVar1 != '\0') {
      std::string::~string(asStack_10);
      goto LAB_041fb148;
    }
    std::string::~string(asStack_10);
  }
  cVar1 = PlantType::GetCanBeUsedOnStage((PlantType *)this,param_1);
LAB_041fb148:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* PlantTypeLilyPad::~PlantTypeLilyPad() */

void __thiscall PlantTypeLilyPad::~PlantTypeLilyPad(PlantTypeLilyPad *this)

{
  *(undefined ***)this = &PTR_GetClass_06808240;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeLilyPad::~PlantTypeLilyPad() */

void __thiscall PlantTypeLilyPad::~PlantTypeLilyPad(PlantTypeLilyPad *this)

{
  ~PlantTypeLilyPad(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeLilyPad::GatherPlantingRestrictions(Board*, Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) const */

void __thiscall
PlantTypeLilyPad::GatherPlantingRestrictions
          (PlantTypeLilyPad *this,Board *param_1,Point *param_2,vector *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  undefined4 local_10 [2];
  long local_8;
  
  iVar1 = *(int *)(param_2 + 4);
  local_8 = ___stack_chk_guard;
  iVar2 = *(int *)param_2;
  std::string::string((string *)local_10,"");
  lVar4 = Board::GetPlantAt(param_1,iVar2,iVar1,(string *)local_10);
  std::string::~string((string *)local_10);
  nop();
  if (lVar4 != 0) {
    Plant::GetType();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    bVar3 = std::operator==((string *)(lVar4 + 8),"tanglekelp");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    if (bVar3) {
      local_10[0] = 0x4d;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                 (PlantingReason *)local_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

