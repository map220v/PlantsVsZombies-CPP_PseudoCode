// Class: ZombieBoundTileAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBoundTileAction::StaticClassInit() */

void ZombieBoundTileAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieBoundTileAction");
    (*pcVar2)(plVar1,asStack_10,FUN_03d1ec64,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBoundTileAction::StaticGetClass() */

long * ZombieBoundTileAction::StaticGetClass(void)

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
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieBoundTileAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBoundTileAction::ZombieBoundTileAction() */

void __thiscall ZombieBoundTileAction::ZombieBoundTileAction(ZombieBoundTileAction *this)

{
  WaveAction::WaveAction((WaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_06765960;
  return;
}


/* ZombieBoundTileAction::StaticNew() */

ZombieBoundTileAction * ZombieBoundTileAction::StaticNew(void)

{
  ZombieBoundTileAction *this;
  
  this = ::operator_new(0x18);
  ZombieBoundTileAction(this);
  return this;
}


/* ZombieBoundTileAction::~ZombieBoundTileAction() */

void __thiscall ZombieBoundTileAction::~ZombieBoundTileAction(ZombieBoundTileAction *this)

{
  *(undefined ***)this = &PTR_GetActionClass_06765960;
  WaveAction::~WaveAction((WaveAction *)this);
  return;
}


/* ZombieBoundTileAction::~ZombieBoundTileAction() */

void __thiscall ZombieBoundTileAction::~ZombieBoundTileAction(ZombieBoundTileAction *this)

{
  ~ZombieBoundTileAction(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBoundTileAction::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
ZombieBoundTileAction::AddResourceRequirements(ZombieBoundTileAction *this,set *param_1)

{
  bool bVar1;
  FairyTaleWindWaveActionProps *pFVar2;
  PotionData *pPVar3;
  string *psVar4;
  GridItemType *this_00;
  undefined8 local_30;
  undefined8 local_28;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  PotionData aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar2 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  local_30 = FUN_03d1f050(*(undefined8 *)(pFVar2 + 0x40));
  local_28 = FUN_03d1f0a0(*(undefined8 *)(pFVar2 + 0x48));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    pPVar3 = (PotionData *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    PotionData::PotionData(aPStack_18,pPVar3);
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
    ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar4);
    this_00 = (GridItemType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    GridItemType::AddResourceRequirements(this_00,param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    PakRecord::~PakRecord((PakRecord *)aPStack_18);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBoundTileAction::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void ZombieBoundTileAction::WaveStart(WaveAction *param_1)

{
  bool bVar1;
  FairyTaleWindWaveActionProps *pFVar2;
  long lVar3;
  PotionData *pPVar4;
  long *plVar5;
  string *psVar6;
  undefined8 uVar7;
  Board *pBVar8;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  int local_24;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  PotionData aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar2 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(param_1);
  uVar7 = *(undefined8 *)(pFVar2 + 0x40);
  lVar3 = FUN_03d1e50c(uVar7,*(undefined8 *)(pFVar2 + 0x48));
  if (lVar3 != 0) {
    local_38 = FUN_03d1f050(uVar7);
    local_30 = FUN_03d1f0a0(*(undefined8 *)(pFVar2 + 0x48));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1)
    {
      pPVar4 = (PotionData *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38)
      ;
      PotionData::PotionData(aPStack_18,pPVar4);
      Sexy::Point::Point((Point *)&local_28,(TPoint *)aPStack_18);
      if ((-1 < local_28) && (-1 < local_24)) {
        GridItemZombieBuffTile::CheckGridPlants((GridItemZombieBuffTile *)param_1,local_28,local_24)
        ;
        plVar5 = (long *)FUN_03d1f7a8(local_28,local_24);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x48))();
        }
        pBVar8 = *(Board **)(gLawnApp + 0x9f0);
        psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
        ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar6);
        Board::AddGridItem(pBVar8,aRStack_20,local_28,local_24,1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      }
      PakRecord::~PakRecord((PakRecord *)aPStack_18);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_38);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

