// Class: SpawnPumpkinScarecrowWaveAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnPumpkinScarecrowWaveAction::AddResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) */

void __thiscall
SpawnPumpkinScarecrowWaveAction::AddResourceRequirements
          (SpawnPumpkinScarecrowWaveAction *this,set *param_1)

{
  bool bVar1;
  RtWeakPtrBase *pRVar2;
  GridItemType *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0xa8))(avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    pRVar2 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,pRVar2);
    this_00 = (GridItemType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    GridItemType::AddResourceRequirements(this_00,param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::
  vector<Sexy::RtWeakPtr<GridItemType_const>,std::allocator<Sexy::RtWeakPtr<GridItemType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<GridItemType_const>,std::allocator<Sexy::RtWeakPtr<GridItemType_const>>>
           *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnPumpkinScarecrowWaveAction::StaticClassInit() */

void SpawnPumpkinScarecrowWaveAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpawnPumpkinScarecrowWaveAction");
    (*pcVar2)(plVar1,asStack_10,FUN_04c98e94,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpawnPumpkinScarecrowWaveAction::StaticGetClass() */

long * SpawnPumpkinScarecrowWaveAction::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SpawnPumpkinScarecrowWaveAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnPumpkinScarecrowWaveAction::SpawnPumpkinScarecrowWaveAction() */

void __thiscall
SpawnPumpkinScarecrowWaveAction::SpawnPumpkinScarecrowWaveAction
          (SpawnPumpkinScarecrowWaveAction *this)

{
  SpawnGridItemsWaveAction::SpawnGridItemsWaveAction((SpawnGridItemsWaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_069965f0;
  return;
}


/* SpawnPumpkinScarecrowWaveAction::StaticNew() */

SpawnPumpkinScarecrowWaveAction * SpawnPumpkinScarecrowWaveAction::StaticNew(void)

{
  SpawnPumpkinScarecrowWaveAction *this;
  
  this = ::operator_new(0x18);
  SpawnPumpkinScarecrowWaveAction(this);
  return this;
}


/* SpawnPumpkinScarecrowWaveAction::~SpawnPumpkinScarecrowWaveAction() */

void __thiscall
SpawnPumpkinScarecrowWaveAction::~SpawnPumpkinScarecrowWaveAction
          (SpawnPumpkinScarecrowWaveAction *this)

{
  *(undefined ***)this = &PTR_GetActionClass_069965f0;
  SpawnGridItemsWaveAction::~SpawnGridItemsWaveAction((SpawnGridItemsWaveAction *)this);
  return;
}


/* SpawnPumpkinScarecrowWaveAction::~SpawnPumpkinScarecrowWaveAction() */

void __thiscall
SpawnPumpkinScarecrowWaveAction::~SpawnPumpkinScarecrowWaveAction
          (SpawnPumpkinScarecrowWaveAction *this)

{
  ~SpawnPumpkinScarecrowWaveAction(this);
  AK::FreeHook(this);
  return;
}


/* SpawnPumpkinScarecrowWaveAction::onGridItemSpawn(GridItem*) */

void __thiscall
SpawnPumpkinScarecrowWaveAction::onGridItemSpawn
          (SpawnPumpkinScarecrowWaveAction *this,GridItem *param_1)

{
  FairyTaleWindWaveActionProps *pFVar1;
  GridItemPumpkinScarecrow *this_00;
  
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  this_00 = Sexy::RtObject::Cast<GridItemPumpkinScarecrow>((RtObject *)param_1);
  if ((this_00 != (GridItemPumpkinScarecrow *)0x0) && (0.0 < *(float *)(pFVar1 + 0x98))) {
    FUN_04c98d48(this_00 + 300);
    if (*(code **)(*(long *)this_00 + 0x1e0) == GridItem::GetMaxHitpoints) {
      GridItem::GetMaxHitpoints((GridItem *)this_00);
    }
    else {
      (**(code **)(*(long *)this_00 + 0x1e0))();
    }
    FUN_04c98d50(this_00 + 0x128);
    (**(code **)(*(long *)this_00 + 0x198))(this_00,*(undefined4 *)(pFVar1 + 0x9c));
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnPumpkinScarecrowWaveAction::generateSpawnPool() */

void SpawnPumpkinScarecrowWaveAction::generateSpawnPool(void)

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
  local_28 = FUN_04c99240(*(undefined8 *)(pFVar2 + 0x58));
  local_20 = FUN_04c99290(*(undefined8 *)(pFVar2 + 0x60));
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

