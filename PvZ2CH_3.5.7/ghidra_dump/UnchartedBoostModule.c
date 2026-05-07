// Class: UnchartedBoostModule


/* UnchartedBoostModule::onLoadComplete() */

void UnchartedBoostModule::onLoadComplete(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBoostModule::StaticClassInit() */

void UnchartedBoostModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"UnchartedBoostModule");
    (*pcVar2)(plVar1,asStack_10,FUN_0340c5a4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UnchartedBoostModule::StaticGetClass() */

long * UnchartedBoostModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UnchartedBoostModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UnchartedBoostModule::UnchartedBoostModule() */

void __thiscall UnchartedBoostModule::UnchartedBoostModule(UnchartedBoostModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0661fcb0;
  return;
}


/* UnchartedBoostModule::StaticNew() */

UnchartedBoostModule * UnchartedBoostModule::StaticNew(void)

{
  UnchartedBoostModule *this;
  
  this = ::operator_new(0x18);
  UnchartedBoostModule(this);
  return this;
}


/* UnchartedBoostModule::~UnchartedBoostModule() */

void __thiscall UnchartedBoostModule::~UnchartedBoostModule(UnchartedBoostModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0661fcb0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* UnchartedBoostModule::~UnchartedBoostModule() */

void __thiscall UnchartedBoostModule::~UnchartedBoostModule(UnchartedBoostModule *this)

{
  ~UnchartedBoostModule(this);
  AK::FreeHook(this);
  return;
}


/* UnchartedBoostModule::onGameplayStarted() */

void UnchartedBoostModule::onGameplayStarted(void)

{
  int iVar1;
  UnchartedBoostMgr *pUVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = Board::GetSunCurrency(*(Board **)(gLawnApp + 0x9f0));
  pUVar2 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
  fVar3 = (float)UnchartedBoostMgr::GetBoostValue(pUVar2,0,6,0);
  pUVar2 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
  fVar4 = (float)UnchartedBoostMgr::GetBoostValue(pUVar2,0,0x10,0);
  if (fVar4 <= 0.0) {
    fVar4 = 1.0;
  }
  fVar3 = fVar4 * (float)((int)fVar3 + iVar1) - (float)iVar1;
  if ((fVar3 != 0.0) && (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0)) {
    Board::AddSunMoney(*(Board **)(gLawnApp + 0x9f0),(int)fVar3);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBoostModule::onPlantFoodEnd(Plant*) */

void __thiscall UnchartedBoostModule::onPlantFoodEnd(UnchartedBoostModule *this,Plant *param_1)

{
  UnchartedBoostMgr *pUVar1;
  ResourceInfo *pRVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pUVar1 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
  Plant::GetType();
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  fVar3 = (float)UnchartedBoostMgr::GetBoostValue(pUVar1,pRVar2,0xd,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (0.0 < fVar3) {
    fVar5 = *(float *)(param_1 + 0xe0);
    pUVar1 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
    fVar4 = (float)UnchartedBoostMgr::GetBoostValueBySlot(pUVar1,0xd,0,1);
    Plant::ChangeSpeedModifier(param_1,(fVar3 + 1.0) * fVar5,fVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBoostModule::onSunCurrencyChanged(int) */

void UnchartedBoostModule::onSunCurrencyChanged(int param_1)

{
  bool bVar1;
  char cVar2;
  UnchartedBoostMgr *pUVar3;
  long extraout_x0;
  ResourceInfo *pRVar4;
  undefined4 uVar5;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pUVar3 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
  uVar5 = UnchartedBoostMgr::GetBoostValue(pUVar3,0,0xc,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,1);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    nop();
    if ((extraout_x0 != 0) && (cVar2 = RealObject::IsOnOpposingTeam(), cVar2 == '\0')) {
      pUVar3 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
      Plant::GetType();
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
      cVar2 = UnchartedBoostMgr::HasAnyValidBoostType(pUVar3,0xc,pRVar4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      if (cVar2 != '\0') {
        FUN_0340bd68(uVar5,extraout_x0 + 0x100);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBoostModule::onPlantAdded(Plant*) */

void UnchartedBoostModule::onPlantAdded(Plant *param_1)

{
  bool bVar1;
  char cVar2;
  UnchartedBoostMgr *pUVar3;
  long extraout_x0;
  ResourceInfo *pRVar4;
  undefined4 uVar5;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pUVar3 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
  uVar5 = UnchartedBoostMgr::GetBoostValue(pUVar3,0,10,0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,1);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    nop();
    if ((extraout_x0 != 0) && (cVar2 = RealObject::IsOnOpposingTeam(), cVar2 == '\0')) {
      pUVar3 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
      Plant::GetType();
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
      cVar2 = UnchartedBoostMgr::HasAnyValidBoostType(pUVar3,10,pRVar4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      if (cVar2 != '\0') {
        FUN_0340bd70(uVar5,extraout_x0 + 0x104);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBoostModule::onZombieDied(Zombie*, DamageInfo const*) */

void __thiscall
UnchartedBoostModule::onZombieDied(UnchartedBoostModule *this,Zombie *param_1,DamageInfo *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UnchartedBoostMgr *pUVar4;
  Plant *pPVar5;
  long lVar6;
  float *pfVar7;
  Effect_PopAnim *pEVar8;
  ResourceInfo *pRVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  undefined8 local_90;
  undefined8 local_88;
  string asStack_80 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pUVar4 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
  fVar11 = (float)UnchartedBoostMgr::GetBoostValue(pUVar4,0,0x14,0);
  if ((((0.0 < fVar11) && (param_1 != (Zombie *)0x0)) && (*(RtObject **)param_2 != (RtObject *)0x0))
     && (pPVar5 = Sexy::RtObject::Cast<Plant>(*(RtObject **)param_2), pPVar5 != (Plant *)0x0)) {
    Plant::GetType();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    bVar1 = std::operator==((string *)(lVar6 + 8),"armorflame");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    if (bVar1) {
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_1);
      fVar11 = *pfVar7;
      fVar12 = pfVar7[1];
      pEVar8 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_80,"POPANIM_EFFECTS_CHERRYBOMB_EXPLOSION_TOP");
      GetPAMByName(asStack_80);
      pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_68);
      Effect_PopAnim::CreatePopAnimRig(pEVar8,(PopAnim *)pRVar9,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      std::string::~string(asStack_80);
      nop();
      (**(code **)(*(long *)pEVar8 + 0x80))(0x3fc00000,pEVar8);
      EATextSquish::Vec3::Vec3
                ((Vec3 *)aRStack_68,(float)(int)(fVar11 - 130.0),(float)(int)(fVar12 - 290.0),0.0);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar8,(SexyVector3 *)aRStack_68,-1)
      ;
      FUN_0340bd60(pEVar8 + 0x1c,500000);
      std::string::string((string *)aRStack_68,"animation");
      Effect_PopAnim::PlaySingleAnimation(pEVar8,aRStack_68,0);
      std::string::~string((string *)aRStack_68);
      nop();
      pEVar8 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      (**(code **)(*(long *)pEVar8 + 0x80))(0x3fc00000);
      std::string::string(asStack_80,"POPANIM_EFFECTS_CHERRYBOMB_EXPLOSION_REAR");
      GetPAMByName(asStack_80);
      pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_68);
      Effect_PopAnim::CreatePopAnimRig(pEVar8,(PopAnim *)pRVar9,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      std::string::~string(asStack_80);
      nop();
      EATextSquish::Vec3::Vec3
                ((Vec3 *)aRStack_68,(float)(int)(fVar11 - 130.0),(float)(int)(fVar12 - 290.0),0.0);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar8,(SexyVector3 *)aRStack_68,-1)
      ;
      FUN_0340bd60(pEVar8 + 0x1c,300000);
      std::string::string((string *)aRStack_68,"animation");
      Effect_PopAnim::PlaySingleAnimation(pEVar8,aRStack_68,0);
      std::string::~string((string *)aRStack_68);
      nop();
      Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),3,-4,0.0);
      uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
      uVar3 = SharkMinion::getRow((SharkMinion *)param_1);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_80);
      EntityFinder::GetEntitiesAtGridSquare(asStack_80,2,uVar2,uVar3);
      local_90 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)asStack_80);
      local_88 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)asStack_80);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88),
            bVar1) {
        puVar10 = (undefined8 *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
        DamageInfo::DamageInfo((DamageInfo *)aRStack_68);
        local_60 = *(float *)(param_2 + 8) * 0.3;
        (**(code **)(*(long *)*puVar10 + 0x110))((long *)*puVar10,aRStack_68);
        DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)asStack_80);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBoostModule::registerForEvents() */

void __thiscall UnchartedBoostModule::registerForEvents(UnchartedBoostModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<UnchartedBoostModule,void(UnchartedBoostModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantAdded);
  local_b0 = local_88;
  local_c0 = local_98;
  uStack_b8 = uStack_90;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<UnchartedBoostModule,void(UnchartedBoostModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantAdded,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSunCurrencyChanged);
  local_e0 = local_80;
  uStack_d8 = uStack_78;
  local_d0 = local_70;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<UnchartedBoostModule,void(UnchartedBoostModule::*)(int)>>
            ((MessageRouter *)puVar1,Message::SunBanked,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantFoodEnd);
  local_b0 = local_58;
  local_c0 = local_68;
  uStack_b8 = uStack_60;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<UnchartedBoostModule,void(UnchartedBoostModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantFoodEnd,&local_c0);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<UnchartedBoostModule,void(UnchartedBoostModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_100 = local_50;
  uStack_f8 = uStack_48;
  local_f0 = local_40;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<UnchartedBoostModule,void(UnchartedBoostModule::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_100);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

