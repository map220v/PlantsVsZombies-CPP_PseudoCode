// Class: SpawnModernPortalsWaveAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnModernPortalsWaveAction::MatchSpecialCondition(Sexy::Point const&) */

void __thiscall
SpawnModernPortalsWaveAction::MatchSpecialCondition
          (SpawnModernPortalsWaveAction *this,Point *param_1)

{
  long lVar1;
  Board *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"acid");
  lVar1 = Board::GetGridItemAt(this_00,asStack_10,*(int *)param_1,*(int *)(param_1 + 4));
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1 != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnModernPortalsWaveAction::StaticClassInit() */

void SpawnModernPortalsWaveAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpawnModernPortalsWaveAction");
    (*pcVar2)(plVar1,asStack_10,FUN_04934f78,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpawnModernPortalsWaveAction::StaticGetClass() */

long * SpawnModernPortalsWaveAction::StaticGetClass(void)

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
  uVar2 = SpawnGridItemsWaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnModernPortalsWaveAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnModernPortalsWaveAction::SpawnModernPortalsWaveAction() */

void __thiscall
SpawnModernPortalsWaveAction::SpawnModernPortalsWaveAction(SpawnModernPortalsWaveAction *this)

{
  SpawnGridItemsWaveAction::SpawnGridItemsWaveAction((SpawnGridItemsWaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_06911820;
  return;
}


/* SpawnModernPortalsWaveAction::StaticNew() */

SpawnModernPortalsWaveAction * SpawnModernPortalsWaveAction::StaticNew(void)

{
  SpawnModernPortalsWaveAction *this;
  
  this = ::operator_new(0x18);
  SpawnModernPortalsWaveAction(this);
  return this;
}


/* SpawnModernPortalsWaveAction::~SpawnModernPortalsWaveAction() */

void __thiscall
SpawnModernPortalsWaveAction::~SpawnModernPortalsWaveAction(SpawnModernPortalsWaveAction *this)

{
  *(undefined ***)this = &PTR_GetActionClass_06911820;
  SpawnGridItemsWaveAction::~SpawnGridItemsWaveAction((SpawnGridItemsWaveAction *)this);
  return;
}


/* SpawnModernPortalsWaveAction::~SpawnModernPortalsWaveAction() */

void __thiscall
SpawnModernPortalsWaveAction::~SpawnModernPortalsWaveAction(SpawnModernPortalsWaveAction *this)

{
  ~SpawnModernPortalsWaveAction(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnModernPortalsWaveAction::generateSpawnPool() */

void SpawnModernPortalsWaveAction::generateSpawnPool(void)

{
  bool bVar1;
  WaveAction *in_x0;
  FairyTaleWindWaveActionProps *pFVar2;
  GridItemPoolEntry *pGVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  int iVar6;
  undefined8 local_40;
  undefined8 local_38;
  GridItemPoolEntry aGStack_30 [8];
  int local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  pFVar2 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(in_x0);
  (**(code **)(*(long *)pFVar2 + 0x88))(avStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
  if (bVar1) {
    do {
      iVar6 = 0;
      pGVar3 = (GridItemPoolEntry *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      GridItemPoolEntry::GridItemPoolEntry(aGStack_30,pGVar3);
      if (0 < local_28) {
        do {
          iVar6 = iVar6 + 1;
          std::
          vector<Sexy::RtWeakPtr<GridItemType_const>,std::allocator<Sexy::RtWeakPtr<GridItemType_const>>>
          ::push_back((vector<Sexy::RtWeakPtr<GridItemType_const>,std::allocator<Sexy::RtWeakPtr<GridItemType_const>>>
                       *)in_x8,(RtWeakPtr *)aGStack_30);
        } while (iVar6 < local_28);
      }
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aGStack_30);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_40);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    } while (bVar1);
  }
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)in_x8);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)in_x8);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<GridItemVase>*,std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>>>
            (uVar4,uVar5);
  std::vector<GridItemPoolEntry,std::allocator<GridItemPoolEntry>>::~vector
            ((vector<GridItemPoolEntry,std::allocator<GridItemPoolEntry>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

