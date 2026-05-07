// Class: SpawnGravestonesWaveAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnGravestonesWaveAction::StaticClassInit() */

void SpawnGravestonesWaveAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpawnGravestonesWaveAction");
    (*pcVar2)(plVar1,asStack_10,FUN_049349e8,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpawnGravestonesWaveAction::StaticGetClass() */

long * SpawnGravestonesWaveAction::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SpawnGravestonesWaveAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnGravestonesWaveAction::SpawnGravestonesWaveAction() */

void __thiscall
SpawnGravestonesWaveAction::SpawnGravestonesWaveAction(SpawnGravestonesWaveAction *this)

{
  SpawnGridItemsWaveAction::SpawnGridItemsWaveAction((SpawnGridItemsWaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_069116a0;
  return;
}


/* SpawnGravestonesWaveAction::StaticNew() */

SpawnGravestonesWaveAction * SpawnGravestonesWaveAction::StaticNew(void)

{
  SpawnGravestonesWaveAction *this;
  
  this = ::operator_new(0x18);
  SpawnGravestonesWaveAction(this);
  return this;
}


/* SpawnGravestonesWaveAction::~SpawnGravestonesWaveAction() */

void __thiscall
SpawnGravestonesWaveAction::~SpawnGravestonesWaveAction(SpawnGravestonesWaveAction *this)

{
  *(undefined ***)this = &PTR_GetActionClass_069116a0;
  SpawnGridItemsWaveAction::~SpawnGridItemsWaveAction((SpawnGridItemsWaveAction *)this);
  return;
}


/* SpawnGravestonesWaveAction::~SpawnGravestonesWaveAction() */

void __thiscall
SpawnGravestonesWaveAction::~SpawnGravestonesWaveAction(SpawnGravestonesWaveAction *this)

{
  ~SpawnGravestonesWaveAction(this);
  AK::FreeHook(this);
  return;
}


/* SpawnGravestonesWaveAction::onGridItemSpawn(GridItem*) */

SpawnGravestonesWaveAction * __thiscall
SpawnGravestonesWaveAction::onGridItemSpawn(SpawnGravestonesWaveAction *this,GridItem *param_1)

{
  GridItemGravestone *this_00;
  SpawnGravestonesWaveAction *pSVar1;
  
  if ((param_1 != (GridItem *)0x0) &&
     (this_00 = Sexy::RtObject::Cast<GridItemGravestone>((RtObject *)param_1),
     this = (SpawnGravestonesWaveAction *)0x0, this_00 != (GridItemGravestone *)0x0)) {
    pSVar1 = (SpawnGravestonesWaveAction *)GridItemGravestone::SetRiseDelay(this_00,0.0);
    return pSVar1;
  }
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnGravestonesWaveAction::generateSpawnPool() */

void SpawnGravestonesWaveAction::generateSpawnPool(void)

{
  bool bVar1;
  WaveAction *in_x0;
  FairyTaleWindWaveActionProps *pFVar2;
  GridItemPoolEntry *pGVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  int iVar6;
  undefined8 local_28;
  undefined8 local_20;
  GridItemPoolEntry aGStack_18 [8];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  pFVar2 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(in_x0);
  local_28 = FUN_04935584(*(undefined8 *)(pFVar2 + 0x58));
  local_20 = FUN_049355d4(*(undefined8 *)(pFVar2 + 0x60));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
  if (bVar1) {
    do {
      iVar6 = 0;
      pGVar3 = (GridItemPoolEntry *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      GridItemPoolEntry::GridItemPoolEntry(aGStack_18,pGVar3);
      if (0 < local_10) {
        do {
          iVar6 = iVar6 + 1;
          std::
          vector<Sexy::RtWeakPtr<GridItemType_const>,std::allocator<Sexy::RtWeakPtr<GridItemType_const>>>
          ::push_back((vector<Sexy::RtWeakPtr<GridItemType_const>,std::allocator<Sexy::RtWeakPtr<GridItemType_const>>>
                       *)in_x8,(RtWeakPtr *)aGStack_18);
        } while (iVar6 < local_10);
      }
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aGStack_18);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_28);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

