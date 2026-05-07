// Class: SpawnGridItemsWaveAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnGridItemsWaveAction::StaticClassInit() */

void SpawnGridItemsWaveAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpawnGridItemsWaveAction");
    (*pcVar2)(plVar1,asStack_10,FUN_04934250,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpawnGridItemsWaveAction::StaticGetClass() */

long * SpawnGridItemsWaveAction::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SpawnGridItemsWaveAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnGridItemsWaveAction::movePlant(Sexy::Point const&) */

void SpawnGridItemsWaveAction::movePlant(Point *param_1)

{
  Board::GetPlantGroupAt(*(Point **)(gLawnApp + 0x9f0));
  return;
}


/* SpawnGridItemsWaveAction::SpawnGridItemsWaveAction() */

void __thiscall SpawnGridItemsWaveAction::SpawnGridItemsWaveAction(SpawnGridItemsWaveAction *this)

{
  WaveAction::WaveAction((WaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_06911470;
  return;
}


/* SpawnGridItemsWaveAction::StaticNew() */

SpawnGridItemsWaveAction * SpawnGridItemsWaveAction::StaticNew(void)

{
  SpawnGridItemsWaveAction *this;
  
  this = ::operator_new(0x18);
  SpawnGridItemsWaveAction(this);
  return this;
}


/* SpawnGridItemsWaveAction::~SpawnGridItemsWaveAction() */

void __thiscall SpawnGridItemsWaveAction::~SpawnGridItemsWaveAction(SpawnGridItemsWaveAction *this)

{
  *(undefined ***)this = &PTR_GetActionClass_06911470;
  WaveAction::~WaveAction((WaveAction *)this);
  return;
}


/* SpawnGridItemsWaveAction::~SpawnGridItemsWaveAction() */

void __thiscall SpawnGridItemsWaveAction::~SpawnGridItemsWaveAction(SpawnGridItemsWaveAction *this)

{
  ~SpawnGridItemsWaveAction(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnGridItemsWaveAction::spawnGridItem(Sexy::Point, Sexy::RtWeakPtr<GridItemType const>,
   std::string, std::string) */

void SpawnGridItemsWaveAction::spawnGridItem
               (long *param_1,Point *param_2,RtWeakPtrBase *param_3,string *param_4)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  Effect_PopAnim *this;
  PopAnim *pPVar4;
  Board *pBVar5;
  int local_30;
  int local_2c;
  TPoint<int> aTStack_28 [8];
  Point aPStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar5 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_3);
  plVar3 = (long *)Board::AddGridItem(pBVar5,aRStack_18,*(undefined4 *)param_2,
                                      *(undefined4 *)(param_2 + 4),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  (**(code **)(*param_1 + 0xa0))(param_1,plVar3);
  cVar1 = FUN_0547419c(param_4);
  if (cVar1 == '\0') {
    BoardTransforms::GridToBoardSpace(param_2);
    Sexy::Point::Point(aPStack_20,0,-0x1e);
    Sexy::TPoint<int>::operator+(aTStack_28,(TPoint *)aPStack_20);
    Sexy::Point::Point((Point *)&local_30,(TPoint *)aRStack_18);
    this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    GetPAMByName(param_4);
    pPVar4 = (PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Effect_PopAnim::CreatePopAnimRig(this,pPVar4,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Effect_PopAnim::SetCentered(this,true);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_30,(float)local_2c,0.0);
    iVar2 = (**(code **)(*plVar3 + 0x170))(plVar3);
    StandaloneEffect::SetBoardSpaceOrigin
              ((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,iVar2 + 2);
    std::string::string((string *)aRStack_18,"animation");
    Effect_PopAnim::PlaySingleAnimation(this,aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnGridItemsWaveAction::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void SpawnGridItemsWaveAction::WaveStart(WaveAction *param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  FairyTaleWindWaveActionProps *pFVar4;
  Point *pPVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  RtWeakPtrBase *pRVar11;
  TPoint *pTVar12;
  undefined8 local_98;
  undefined8 local_90;
  Point aPStack_88 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0xa8))
            ((vector<Sexy::RtWeakPtr<GridItemType_const>,std::allocator<Sexy::RtWeakPtr<GridItemType_const>>>
              *)&local_68);
  lVar3 = FUN_04933fb8(local_68,local_60);
  if (lVar3 == 0) {
    std::
    vector<Sexy::RtWeakPtr<GridItemType_const>,std::allocator<Sexy::RtWeakPtr<GridItemType_const>>>
    ::~vector((vector<Sexy::RtWeakPtr<GridItemType_const>,std::allocator<Sexy::RtWeakPtr<GridItemType_const>>>
               *)&local_68);
  }
  else {
    pFVar4 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(param_1);
    (**(code **)(*(long *)pFVar4 + 0x90))
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_50);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    Sexy::OutputDebugStrF((wchar_t *)"props->IgnoreGraveStone %d",(ulong)(byte)pFVar4[0x51]);
    if (pFVar4[0x51] == (FairyTaleWindWaveActionProps)0x0) {
      local_78 = FUN_049352f4(local_50);
      local_70 = FUN_04935344(local_48);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70),
            bVar1) {
        pPVar5 = (Point *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
        cVar2 = Board::CanAddGraveStoneAt
                          (*(Board **)(gLawnApp + 0x9f0),*(int *)pPVar5,*(int *)(pPVar5 + 4),false);
        if ((cVar2 == '\0') &&
           (cVar2 = (**(code **)(*(long *)param_1 + 0xb0))(param_1,pPVar5), cVar2 == '\0')) {
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20,pPVar5);
        }
        else {
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,pPVar5);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
      }
    }
    else {
      local_78 = FUN_049352f4(local_50);
      local_70 = FUN_04935344(local_48);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70),
            bVar1) {
        pPVar5 = (Point *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,pPVar5);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
      }
    }
    uVar6 = FUN_04933fc4(local_38,local_30);
    uVar7 = FUN_04933fb8(local_68,local_60);
    if ((uVar6 < uVar7) && (pFVar4[0x50] != (FairyTaleWindWaveActionProps)0x0)) {
      local_78 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_70 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70),
            bVar1) {
        pPVar5 = (Point *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
        cVar2 = Board::CanAddGraveStoneAt
                          (*(Board **)(gLawnApp + 0x9f0),*(int *)pPVar5,*(int *)(pPVar5 + 4),
                           (bool)pFVar4[0x50]);
        if ((cVar2 != '\0') ||
           (cVar2 = (**(code **)(*(long *)param_1 + 0xb0))(param_1,pPVar5), cVar2 != '\0')) {
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,pPVar5);
          uVar6 = FUN_04933fc4(local_38,local_30);
          uVar7 = FUN_04933fb8(local_68,local_60);
          if (uVar7 <= uVar6) break;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
      }
    }
    cVar2 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty
                      ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38);
    if (cVar2 == '\0') {
      uVar6 = 0;
      uVar9 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_38);
      uVar10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_38);
      std::
      random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
                (uVar9,uVar10);
      local_98 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_68);
      local_90 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_68);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_98,(__normal_iterator *)&local_90),
            bVar1) {
        pRVar11 = (RtWeakPtrBase *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
        pTVar12 = (TPoint *)FUN_04933fd0(local_38,uVar6);
        if (pFVar4[0x50] != (FairyTaleWindWaveActionProps)0x0) {
          movePlant((Point *)param_1);
        }
        uVar6 = uVar6 + 1;
        Sexy::Point::Point(aPStack_88,pTVar12);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_80,pRVar11);
        FUN_05475d88((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78,pFVar4 + 0x40);
        FUN_05475d88((string *)&local_70,pFVar4 + 0x48);
        spawnGridItem(param_1,aPStack_88,aRStack_80,
                      (generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78,
                      (string *)&local_70);
        std::string::~string((string *)&local_70);
        std::string::~string((string *)&local_78);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80)
        ;
        uVar7 = FUN_04933fc4(local_38,local_30);
        if (uVar7 <= uVar6) break;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
      }
    }
    pcVar8 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar8,"Play_UI_Grave_Spawn");
    WaveAction::notifyWaveEvents(param_1);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_50);
    std::
    vector<Sexy::RtWeakPtr<GridItemType_const>,std::allocator<Sexy::RtWeakPtr<GridItemType_const>>>
    ::~vector((vector<Sexy::RtWeakPtr<GridItemType_const>,std::allocator<Sexy::RtWeakPtr<GridItemType_const>>>
               *)&local_68);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

