// Class: TideModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TideModule::StaticClassInit() */

void TideModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"TideModule");
    (*pcVar2)(plVar1,asStack_10,FUN_0435f370,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TideModule::StaticGetClass() */

long * TideModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"TideModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TideModule::GetWaveLocation() const */

undefined4 __thiscall TideModule::GetWaveLocation(TideModule *this)

{
  return *(undefined4 *)(this + 0x18);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TideModule::GetTideRectOnBoard() const */

void TideModule::GetTideRectOnBoard(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  Insets *in_x8;
  float fVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  Board::GetGridBoundingRect();
  fVar3 = *(float *)(in_x0 + 0x18);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  Sexy::Insets::Insets
            (in_x8,(int)((float)(local_18 + local_10) - fVar3 * (float)iVar2),local_14,
             local_10 + 400,local_c);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TideModule::updateTideRegion() */

void __thiscall TideModule::updateTideRegion(TideModule *this)

{
  BoardRegion *this_00;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Rectangle aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetTideRectOnBoard();
  this_00 = (BoardRegion *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68))
  ;
  EA::Text::Rectangle::Rectangle
            (aRStack_18,(float)local_28,(float)(local_24 + -200),(float)local_20,
             (float)(local_1c + 400));
  BoardRegion::SetRegionFromBoardCoordinates(this_00,(TRect *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x0435e8ac */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* TideModule::onUpdateEffects() */

void __thiscall TideModule::onUpdateEffects(TideModule *this)

{
  undefined1 auVar1 [16];
  RtWeakPtrBase *pRVar2;
  StandaloneEffect *this_00;
  float *pfVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined1 extraout_var [12];
  undefined4 local_28;
  undefined4 local_24;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  Color aCStack_18 [12];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar8 = (float)BoardTransforms::GridToBoardSpaceXUnbounded_Float(9.0 - *(float *)(this + 0x18));
  fVar9 = (float)FUN_0435de5c(fVar8 + DAT_06afc1b0);
  uVar6 = 0;
  fVar8 = fVar9;
  while( true ) {
    uVar7 = *(undefined8 *)(this + 0x40);
    uVar5 = FUN_0435ddac(uVar7,*(undefined8 *)(this + 0x48));
    if (uVar5 <= uVar6) break;
    pRVar2 = (RtWeakPtrBase *)FUN_0435ddb8(uVar7,uVar6);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar2);
    Sexy::Color::Color(aCStack_18,1);
    this_00 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    pfVar3 = (float *)StandaloneEffect::GetScreenSpaceOrigin(this_00);
    local_28 = 0;
    local_24 = 0x437f0000;
    auVar1._4_12_ = extraout_var;
    auVar1._0_4_ = fVar8;
    fVar8 = CurveLerp<float>(auVar1,0x43960000,*pfVar3 - fVar9,&local_28,&local_24,3);
    local_c = (int)fVar8;
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    (**(code **)(*plVar4 + 0x78))(plVar4,aCStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    uVar6 = uVar6 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TideModule::getWaveManagerProps() const */

void __thiscall TideModule::getWaveManagerProps(TideModule *this)

{
  LevelModuleManager *this_00;
  WaveManagerModule *this_01;
  WaveManager *this_02;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LevelModuleManager *)LevelModule::getManager();
  this_01 = LevelModuleManager::GetModuleByClass<WaveManagerModule>(this_00);
  if (this_01 == (WaveManagerModule *)0x0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  else {
    this_02 = (WaveManager *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this_01);
    WaveManager::GetProps(this_02);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TideModule::TideModule() */

void __thiscall TideModule::TideModule(TideModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  this[0x2c] = (TideModule)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_06834f10;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x60));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x68));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x70));
  return;
}


/* TideModule::StaticNew() */

TideModule * TideModule::StaticNew(void)

{
  TideModule *this;
  
  this = ::operator_new(0x78);
  TideModule(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x0435ee98 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* TideModule::updateWaveTransition() */

void __thiscall TideModule::updateWaveTransition(TideModule *this)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  
  fVar1 = (float)PVZ_T();
  fVar3 = *(float *)(this + 0x28);
  if (fVar1 < fVar3) {
    auVar2 = PVZ_T();
    fVar1 = CurveLerp<float>(auVar2,fVar3,auVar2._0_4_,this + 0x1c,this + 0x20,3);
    *(float *)(this + 0x18) = fVar1;
    onUpdateEffects(this);
    updateTideRegion(this);
    return;
  }
  this[0x2c] = (TideModule)0x0;
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(this + 0x20);
  MessageRouter::Broadcast<TideModule_const*,TideModule*>
            ((MessageRouter *)gMessageRouter,Message::TideTransitionComplete,this);
  onUpdateEffects(this);
  updateTideRegion(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TideModule::onUpdate() */

void __thiscall TideModule::onUpdate(TideModule *this)

{
  int iVar1;
  StandaloneEffect *pSVar2;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  int local_28;
  int local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x2c] != (TideModule)0x0) {
    updateWaveTransition(this);
  }
  local_48 = DAT_06afc1c0;
  local_40 = DAT_06afc1c8;
  GetTideRectOnBoard();
  iVar1 = local_28;
  Board::GetGridBoundingRect();
  local_48 = CONCAT44(local_48._4_4_,(float)(iVar1 - local_18) + (float)local_48);
  pSVar2 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  StandaloneEffect::SetBoardSpaceOrigin(pSVar2,(SexyVector3 *)&local_48,-1);
  local_38 = DAT_06afc268;
  local_30 = DAT_06afc270;
  GetTideRectOnBoard();
  Board::GetGridBoundingRect();
  local_38 = CONCAT44(local_38._4_4_,(float)(local_28 - local_18) + (float)local_38);
  pSVar2 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  StandaloneEffect::SetBoardSpaceOrigin(pSVar2,(SexyVector3 *)&local_38,-1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TideModule::GetEffectProperties() */

void TideModule::GetEffectProperties(void)

{
  undefined8 uVar1;
  ResourceInfo *pRVar2;
  RtWeakPtr aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,L"DefaultTideEffectProps");
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar1,5,aRStack_18);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar2);
}


/* TideModule::~TideModule() */

void __thiscall TideModule::~TideModule(TideModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06834f10;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  ~vector((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *
          )(this + 0x40));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* TideModule::~TideModule() */

void __thiscall TideModule::~TideModule(TideModule *this)

{
  ~TideModule(this);
  AK::FreeHook(this);
  return;
}


/* TideModule::updateAudio(float) */

void __thiscall TideModule::updateAudio(TideModule *this,float param_1)

{
  char *pcVar1;
  AudioMgr *this_00;
  int iVar2;
  float fVar3;
  
  if (param_1 < 0.0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_Amb_Beach_Tide_Decrease");
  }
  else if (0.0 < param_1) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_Amb_Beach_Tide_Increase");
  }
  fVar3 = *(float *)(this + 0x18);
  iVar2 = BoardConstants::NUMBER_OF_ROWS();
  *(int *)(this + 0x30) = (int)((float)iVar2 * fVar3);
  this_00 = (AudioMgr *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SetRTPCValue(this_00,"Board_WaterOnTiles",(double)*(int *)(this + 0x30));
  return;
}


/* TideModule::initializeModule() */

void __thiscall TideModule::initializeModule(TideModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(pRVar1 + 0x40);
  updateAudio(this,0.0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TideModule::SetWaveLocation(float, float) */

void __thiscall TideModule::SetWaveLocation(TideModule *this,float param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float local_14;
  float local_10;
  float local_c;
  long local_8;
  
  local_10 = 0.0;
  local_8 = ___stack_chk_guard;
  local_14 = param_1;
  pfVar1 = eastl::max_alt<float>(&local_10,&local_14);
  local_c = (float)*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
  pfVar1 = eastl::min_alt<float>(pfVar1,&local_c);
  fVar3 = *pfVar1;
  updateAudio(this,fVar3 - *(float *)(this + 0x18));
  if (param_2 <= 0.0) {
    *(float *)(this + 0x18) = fVar3;
    updateTideRegion(this);
    onUpdateEffects(this);
  }
  else {
    fVar2 = (float)PVZ_T();
    this[0x2c] = (TideModule)0x1;
    *(float *)(this + 0x24) = fVar2;
    *(float *)(this + 0x20) = fVar3;
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)(this + 0x18);
    *(float *)(this + 0x28) = fVar2 + param_2;
  }
  MessageRouter::Broadcast<TideModule_const*,TideModule*>
            ((MessageRouter *)gMessageRouter,Message::TideChanged,this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TideModule::calculateMaxWaveLocation(float,
   std::vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,
   std::allocator<Sexy::RtWeakPtr<WaveActionProperties> > >,
   std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,
   std::allocator<Sexy::RtWeakPtr<WaveActionProperties> > > > >) const */

void __thiscall
TideModule::calculateMaxWaveLocation(float param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  vector *pvVar2;
  RtWeakPtrBase *pRVar3;
  RtObject *pRVar4;
  TidalChangeWaveActionProps *this;
  float *pfVar5;
  float local_50;
  float local_4c;
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_50 = param_1;
  local_4c = param_1;
  local_48 = FUN_0435e9c4(*param_3);
  local_40 = FUN_0435ea14(param_3[1]);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_40);
  if (bVar1) {
    do {
      pvVar2 = (vector *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      std::
      vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
      ::vector(avStack_20,pvVar2);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar1) {
        pRVar3 = (RtWeakPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,pRVar3);
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
        if (bVar1) {
          pRVar4 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          bVar1 = Sexy::RtObject::IsA<TidalChangeWaveActionProps>(pRVar4);
          if (bVar1) {
            pRVar4 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
            this = Sexy::RtObject::Cast<TidalChangeWaveActionProps>(pRVar4);
            local_50 = (float)TidalChangeWaveActionProps::GetFinalTidePosition(this,local_50);
            pfVar5 = eastl::max_alt<float>(&local_4c,&local_50);
            local_4c = *pfVar5;
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      }
      std::
      vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
      ::~vector(avStack_20);
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_48);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_40);
    } while (bVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_4c);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TideModule::postInitialize() */

void __thiscall TideModule::postInitialize(TideModule *this)

{
  bool bVar1;
  int iVar2;
  BoardRegion *this_00;
  long lVar3;
  undefined4 uVar4;
  TideModule *pTVar5;
  RtWeakPtr aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getWaveManagerProps(this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if (bVar1) {
                    /* WARNING: Load size is inaccurate */
    pTVar5._0_4_ = *(TideModule **)(this + 0x18);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    std::
    vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
    ::vector((vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
              *)aRStack_20,(vector *)(lVar3 + 0x10));
    uVar4 = calculateMaxWaveLocation
                      (pTVar5._0_4_,this,
                       (vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
                        *)aRStack_20);
    *(undefined4 *)(this + 0x34) = uVar4;
    std::
    vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
    ::~vector((vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
               *)aRStack_20);
  }
  else {
    *(undefined4 *)(this + 0x34) = *(undefined4 *)(this + 0x18);
  }
  Board::AddRegion<BoardRegionDrySand>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x70),(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  this_00 = (BoardRegion *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70))
  ;
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets
            ((Insets *)aRStack_20,0,0,(int)((float)iVar2 - *(float *)(this + 0x34)),
             *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
  BoardRegion::SetRegionFromGridSquares(this_00,(TRect *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TideModule::ResetWavePropertiesForLevel(int,
   std::vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,
   std::allocator<Sexy::RtWeakPtr<WaveActionProperties> > >,
   std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,
   std::allocator<Sexy::RtWeakPtr<WaveActionProperties> > > > >) */

void __thiscall
TideModule::ResetWavePropertiesForLevel(TideModule *this,int param_1,vector *param_3)

{
  undefined4 uVar1;
  vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
  avStack_20 [24];
  long local_8;
  
                    /* WARNING: Store size is inaccurate */
  *(TideModule **)(this + 0x18) = (TideModule *)(float)param_1;
  local_8 = ___stack_chk_guard;
  std::
  vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
  ::vector(avStack_20,param_3);
  uVar1 = calculateMaxWaveLocation((TideModule *)(float)param_1,this,avStack_20);
  *(undefined4 *)(this + 0x34) = uVar1;
  std::
  vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
  ::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TideModule::onLoadComplete() */

void __thiscall TideModule::onLoadComplete(TideModule *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *pRVar1;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  Effect_PopAnim *pEVar4;
  ResourceInfo *pRVar5;
  StandaloneEffect *pSVar6;
  UIWidget *pUVar7;
  PopAnimRig *pPVar8;
  long lVar9;
  long *plVar10;
  float *pfVar11;
  long lVar12;
  ulong uVar13;
  HighTideSign *pHVar14;
  Point *extraout_x1;
  ulong uVar15;
  undefined8 uVar16;
  code *pcVar17;
  Effect_PopAnim *pEVar19;
  float fVar18;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  int local_28;
  int local_24;
  int local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (pRVar3[0x44] != (ResilienceTutorialIntroProperties)0x0) {
    pHVar14 = GameObject::Create<HighTideSign>();
                    /* WARNING: Load size is inaccurate */
    HighTideSign::Initialize(*(HighTideSign **)(this + 0x34),pHVar14,0);
  }
  pRVar1 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x38);
  fVar18 = *(float *)(gLawnApp + 0x28dc) * 0.0006510417;
  Board::GetGridBoundingRect();
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(pRVar1,(RtWeakPtrBase *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  pEVar4 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
  std::string::string((string *)&local_38,"POPANIM_BACKGROUNDS_WATER_TIDE_LINE");
  GetPAMByName((string *)&local_38);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar4,(PopAnim *)pRVar5,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  std::string::~string((string *)&local_38);
  nop();
  local_58 = DAT_06afc1e0;
  local_50 = DAT_06afc1e8;
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardTransforms::GridToBoardSpaceXUnbounded((int)((float)iVar2 - *(float *)(this + 0x34)))
  ;
  local_58 = CONCAT44((float)local_24 + local_58._4_4_,(float)iVar2 + (float)local_58);
  pSVar6 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar6,(SexyVector3 *)&local_58,-1);
  pSVar6 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
  StandaloneEffect::SetKeepAlive(pSVar6,true);
  pEVar4 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
  std::string::string((string *)local_18,"idle");
  pEVar19._0_4_ = (Effect_PopAnim *)PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar4,(RtWeakPtr<Sexy::ResourceInfo> *)local_18,0);
  std::string::~string((string *)local_18);
  nop();
  pUVar7 = (UIWidget *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
  pPVar8 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar7);
  PopAnimRig::SetDrawScale(pPVar8,fVar18);
  lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
  FUN_0435dd74(lVar9 + 0x1c,0x24a54);
  plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
  pcVar17 = *(code **)(*plVar10 + 0x78);
  Sexy::Color::Color((Color *)local_18,1);
  (*pcVar17)(plVar10,(RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  lVar9 = GetEffectProperties();
  uVar15 = 0;
  while( true ) {
    uVar16 = *(undefined8 *)(lVar9 + 0x10);
    uVar13 = FUN_0435dd98(uVar16,*(undefined8 *)(lVar9 + 0x18));
    if (uVar13 <= uVar15) break;
    pfVar11 = (float *)FUN_0435dda4(uVar16,uVar15);
    Sexy::Point::Point((Point *)local_18,(int)*pfVar11,(int)pfVar11[1]);
    BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)local_18,extraout_x1);
    local_60 = (int)((float)local_60 + DAT_06afc1b0);
    local_5c = (int)((float)local_5c + DAT_06afc1b4);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_48);
    Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)&local_48,(RtWeakPtrBase *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    pEVar4 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    std::string::string((string *)&local_38,"POPANIM_BACKGROUNDS_WATER_SQUARE");
    GetPAMByName((string *)&local_38);
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_18);
    Effect_PopAnim::CreatePopAnimRig(pEVar4,(PopAnim *)pRVar5,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    std::string::~string((string *)&local_38);
    nop();
    pSVar6 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    EATextSquish::Vec3::Vec3((Vec3 *)local_18,(float)local_60,(float)local_5c,0.0);
    StandaloneEffect::SetBoardSpaceOrigin(pSVar6,(SexyVector3 *)local_18,-1);
    pSVar6 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    StandaloneEffect::SetKeepAlive(pSVar6,true);
    uVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    std::string::string((string *)local_18,"Water");
    Effect_PopAnim::PlayLoopingAnimation
              (pEVar19._0_4_,uVar16,(RtWeakPtr<Sexy::ResourceInfo> *)local_18,0);
    std::string::~string((string *)local_18);
    nop();
    pUVar7 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    pPVar8 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar7);
    PopAnimRig::SetDrawScale(pPVar8,fVar18);
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    FUN_0435dd74(lVar12 + 0x1c,0x24a56);
    std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
    push_back((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>
               *)(this + 0x40),(RtWeakPtr *)&local_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    uVar15 = uVar15 + 1;
  }
  pRVar1 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x58);
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x60);
  Board::AddEffect<Effect_BeachWaterWave>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(pRVar1,(RtWeakPtrBase *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  pEVar4 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
  std::string::string((string *)&local_38,"POPANIM_BACKGROUNDS_WAVE_UPPERLAYER");
  GetPAMByName((string *)&local_38);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar4,(PopAnim *)pRVar5,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  std::string::~string((string *)&local_38);
  nop();
  local_48 = DAT_06afc1c0;
  local_40 = DAT_06afc1c8;
  GetTideRectOnBoard();
  local_48 = CONCAT44(local_48._4_4_,(float)(local_18[0] - local_28) + (float)local_48);
  pSVar6 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar6,(SexyVector3 *)&local_48,-1);
  pSVar6 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
  StandaloneEffect::SetKeepAlive(pSVar6,true);
  uVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
  std::string::string((string *)local_18,"water");
  Effect_PopAnim::PlayLoopingAnimation
            (pEVar19._0_4_,uVar16,(RtWeakPtr<Sexy::ResourceInfo> *)local_18,0);
  std::string::~string((string *)local_18);
  nop();
  pUVar7 = (UIWidget *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
  pPVar8 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar7);
  PopAnimRig::SetDrawScale(pPVar8,fVar18);
  lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
  FUN_0435dd74(lVar9 + 0x1c,0x24a57);
  plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
  pcVar17 = *(code **)(*plVar10 + 0x78);
  Sexy::Color::Color((Color *)local_18,1);
  (*pcVar17)(plVar10,(RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  Board::AddEffect<Effect_BeachWaterWave>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  pEVar4 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)&local_38,"POPANIM_BACKGROUNDS_WATER_UNDERLAYER");
  GetPAMByName((string *)&local_38);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar4,(PopAnim *)pRVar5,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  std::string::~string((string *)&local_38);
  nop();
  local_38 = DAT_06afc268;
  local_30 = DAT_06afc270;
  GetTideRectOnBoard();
  local_38 = CONCAT44(local_38._4_4_,(float)(local_18[0] - local_28) + (float)local_38);
  pSVar6 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar6,(SexyVector3 *)&local_38,-1);
  pSVar6 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetKeepAlive(pSVar6,true);
  uVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)local_18,"water");
  Effect_PopAnim::PlayLoopingAnimation
            (pEVar19._0_4_,uVar16,(RtWeakPtr<Sexy::ResourceInfo> *)local_18,0);
  std::string::~string((string *)local_18);
  nop();
  pUVar7 = (UIWidget *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  pPVar8 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar7);
  PopAnimRig::SetDrawScale(pPVar8,fVar18);
  lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  FUN_0435dd74(lVar9 + 0x1c,0x24a55);
  plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  pcVar17 = *(code **)(*plVar10 + 0x78);
  Sexy::Color::Color((Color *)local_18,1);
  (*pcVar17)(plVar10,(RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  Board::AddRegion<BoardRegionTideWater>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x68),(RtWeakPtrBase *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  updateTideRegion(this);
  onUpdateEffects(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TideModule::registerForEvents() */

void __thiscall TideModule::registerForEvents(TideModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<TideModule,void(TideModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<TideModule,void(TideModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

