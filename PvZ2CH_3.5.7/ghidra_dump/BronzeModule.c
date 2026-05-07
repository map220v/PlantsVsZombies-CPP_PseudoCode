// Class: BronzeModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BronzeModule::StaticClassInit() */

void BronzeModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"BronzeModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03dd5edc,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BronzeModule::StaticGetClass() */

long * BronzeModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BronzeModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BronzeModule::increaseBronzeStumpCount() */

void __thiscall BronzeModule::increaseBronzeStumpCount(BronzeModule *this)

{
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
  return;
}


/* BronzeModule::decreaseBronzeStumpCount() */

void __thiscall BronzeModule::decreaseBronzeStumpCount(BronzeModule *this)

{
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + -1;
  return;
}


/* BronzeModule::getBronzeStumpSize() */

void __thiscall BronzeModule::getBronzeStumpSize(BronzeModule *this)

{
  FUN_03dd48d0(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28));
  return;
}


/* BronzeModule::getBrokenLeftTime() */

undefined4 __thiscall BronzeModule::getBrokenLeftTime(BronzeModule *this)

{
  return *(undefined4 *)(this + 0x3c);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BronzeModule::gameplayStarted() */

void __thiscall BronzeModule::gameplayStarted(BronzeModule *this)

{
  ToxicWaterPerfumeBottleProjectile *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UIBronzeTimer");
  UIWidget::CreateWidget(aRStack_18,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x18),(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  nop();
  ToxicWaterPerfumeBottleProjectile::SetType(this_00,(int)*(float *)(this + 0x3c));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BronzeModule::onUpdate() */

void __thiscall BronzeModule::onUpdate(BronzeModule *this)

{
  bool bVar1;
  int iVar2;
  ToxicWaterPerfumeBottleProjectile *this_00;
  long lVar3;
  long *plVar4;
  UIWidget *this_01;
  float fVar5;
  float fVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_03dd4854(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x104));
  if (iVar2 == 5) {
    fVar5 = (float)PVZ_Dt();
    fVar6 = *(float *)(this + 0x3c);
    *(float *)(this + 0x3c) = fVar6 - fVar5;
    if ((0.0 <= fVar6 - fVar5) ||
       (lVar3 = FUN_03dd48d0(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28)), lVar3 != 0)
       ) {
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x18));
      if ((bVar1) && (0.0 < *(float *)(this + 0x3c))) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
        nop();
        ToxicWaterPerfumeBottleProjectile::SetType(this_00,(int)*(float *)(this + 0x3c));
      }
    }
    else {
      std::string::string(asStack_10,"UINextWaveButton");
      plVar4 = (long *)UIWidget::GetWidgetBySheetName(asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))(plVar4);
      }
      this_01 = (UIWidget *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
      UIWidget::SetVisible(this_01,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BronzeModule::onZombieKilled(Zombie*, DamageInfo const*) */

void BronzeModule::onZombieKilled(Zombie *param_1,DamageInfo *param_2)

{
  char cVar1;
  int iVar2;
  ZombieAgileBronze *pZVar3;
  ZombieStrongBronze *pZVar4;
  ZombieMagicBronze *pZVar5;
  
  iVar2 = FUN_03dd4854(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x104));
  if ((((iVar2 == 5) && (param_2 != (DamageInfo *)0x0)) &&
      ((pZVar3 = Sexy::RtObject::Cast<ZombieAgileBronze>((RtObject *)param_2),
       pZVar3 != (ZombieAgileBronze *)0x0 ||
       ((pZVar4 = Sexy::RtObject::Cast<ZombieStrongBronze>((RtObject *)param_2),
        pZVar4 != (ZombieStrongBronze *)0x0 ||
        (pZVar5 = Sexy::RtObject::Cast<ZombieMagicBronze>((RtObject *)param_2),
        pZVar5 != (ZombieMagicBronze *)0x0)))))) &&
     (cVar1 = FUN_03dd4850(param_2[0x55]), cVar1 == '\0')) {
    decreaseBronzeStumpCount((BronzeModule *)param_1);
    return;
  }
  return;
}


/* BronzeModule::BronzeModule() */

void __thiscall BronzeModule::BronzeModule(BronzeModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0677dbf0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x3c) = 0xbf800000;
  return;
}


/* BronzeModule::StaticNew() */

BronzeModule * BronzeModule::StaticNew(void)

{
  BronzeModule *this;
  
  this = ::operator_new(0x48);
  BronzeModule(this);
  return this;
}


/* BronzeModule::~BronzeModule() */

void __thiscall BronzeModule::~BronzeModule(BronzeModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0677dbf0;
  std::vector<Sexy::RtWeakPtr<GridItemBronze>,std::allocator<Sexy::RtWeakPtr<GridItemBronze>>>::
  ~vector((vector<Sexy::RtWeakPtr<GridItemBronze>,std::allocator<Sexy::RtWeakPtr<GridItemBronze>>> *
          )(this + 0x20));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* BronzeModule::~BronzeModule() */

void __thiscall BronzeModule::~BronzeModule(BronzeModule *this)

{
  ~BronzeModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BronzeModule::onBronzeStumpDestroy(GridItemBronze*) */

void __thiscall BronzeModule::onBronzeStumpDestroy(BronzeModule *this,GridItemBronze *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
LAB_03dd6354:
      uVar4 = *(undefined8 *)(this + 0x20);
      lVar3 = FUN_03dd48d0(uVar4,*(undefined8 *)(this + 0x28));
      if (lVar3 != 0) {
        this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03dd48f8(uVar4,0);
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        *(undefined4 *)(this + 0x3c) = *(undefined4 *)(lVar3 + 0x194);
      }
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_01 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
    if (param_1 == (GridItemBronze *)pRVar2) {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<Sexy::RtWeakPtr<GridItemBronze>,std::allocator<Sexy::RtWeakPtr<GridItemBronze>>>::
      erase((vector<Sexy::RtWeakPtr<GridItemBronze>,std::allocator<Sexy::RtWeakPtr<GridItemBronze>>>
             *)this_00,local_10);
      goto LAB_03dd6354;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BronzeModule::spawnBronze(int) */

void BronzeModule::spawnBronze(int param_1)

{
  char cVar1;
  bool bVar2;
  LevelModule *this;
  ResilienceTutorialIntroProperties *pRVar3;
  long lVar4;
  char *__s;
  ulong uVar5;
  uint *puVar6;
  GridItemBronze *pGVar7;
  ResilienceTutorialIntroProperties *pRVar8;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  ulong uVar9;
  undefined8 uVar10;
  Board *this_01;
  ulong uVar11;
  uint local_20;
  uint local_1c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this = (LevelModule *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>(this);
  cVar1 = std::vector<BronzeProperties::ModuleData,std::allocator<BronzeProperties::ModuleData>>::
          empty((vector<BronzeProperties::ModuleData,std::allocator<BronzeProperties::ModuleData>> *
                )(pRVar3 + 0x48));
  if (cVar1 == '\0') {
    uVar10 = *(undefined8 *)(pRVar3 + 0x48);
    uVar11 = 0;
    lVar4 = FUN_03dd4864(uVar10,*(undefined8 *)(pRVar3 + 0x50));
    if (lVar4 != 0) {
      do {
        uVar9 = 0;
        while( true ) {
          lVar4 = FUN_03dd488c(uVar10,uVar11);
          uVar5 = FUN_03dd4894(*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
          if (uVar5 <= uVar9) break;
          Sexy::Point::Point((Point *)&local_20);
          lVar4 = FUN_03dd488c(*(undefined8 *)(pRVar3 + 0x48),uVar11);
          puVar6 = (uint *)FUN_03dd48c4(*(undefined8 *)(lVar4 + 8),uVar9);
          local_20 = *puVar6;
          local_1c = puVar6[1];
          cVar1 = Board::CanAddArmrackAt(*(Board **)(gLawnApp + 0x9f0),local_20,local_1c);
          if (cVar1 == '\0') {
            Sexy::StrFormat("Failed to add bronze at [%d,%d]",asStack_10,(ulong)local_20,
                            (ulong)local_1c);
            __s = (char *)FUN_0547429c(asStack_10);
            fputs(__s,(FILE *)getaddrinfo);
            std::string::~string(asStack_10);
          }
          else {
            this_01 = *(Board **)(gLawnApp + 0x9f0);
            std::string::string(asStack_10,"bronze");
            pGVar7 = (GridItemBronze *)Board::AddGridItem(this_01,asStack_10,local_20,local_1c,1);
            std::string::~string(asStack_10);
            nop();
            if (pGVar7 != (GridItemBronze *)0x0) {
              lVar4 = FUN_03dd488c(*(undefined8 *)(pRVar3 + 0x48),uVar11);
              lVar4 = FUN_03dd48c4(*(undefined8 *)(lVar4 + 8),uVar9);
              *(undefined4 *)(pGVar7 + 0x194) = *(undefined4 *)(lVar4 + 0x10);
              bVar2 = std::operator==((string *)(lVar4 + 8),"strength");
              if (bVar2) {
                GridItemBronze::initBronzeType(pGVar7,1);
              }
              else {
                lVar4 = FUN_03dd488c(*(undefined8 *)(pRVar3 + 0x48),uVar11);
                lVar4 = FUN_03dd48c4(*(undefined8 *)(lVar4 + 8),uVar9);
                bVar2 = std::operator==((string *)(lVar4 + 8),"agile");
                if (bVar2) {
                  GridItemBronze::initBronzeType(pGVar7,2);
                }
                else {
                  lVar4 = FUN_03dd488c(*(undefined8 *)(pRVar3 + 0x48),uVar11);
                  lVar4 = FUN_03dd48c4(*(undefined8 *)(lVar4 + 8),uVar9);
                  bVar2 = std::operator==((string *)(lVar4 + 8),"mage");
                  if (bVar2) {
                    GridItemBronze::initBronzeType(pGVar7,3);
                  }
                }
              }
              pRVar8 = LevelModule::getProps<ResilienceTutorialIntroProperties>(this);
              *(undefined4 *)(pGVar7 + 0x198) = *(undefined4 *)(pRVar8 + 0x40);
              *(int *)(pGVar7 + 0x19c) = (int)*(float *)(pGVar7 + 0x194);
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
              std::
              vector<Sexy::RtWeakPtr<GridItemBronze>,std::allocator<Sexy::RtWeakPtr<GridItemBronze>>>
              ::push_back((vector<Sexy::RtWeakPtr<GridItemBronze>,std::allocator<Sexy::RtWeakPtr<GridItemBronze>>>
                           *)(this + 0x20),(RtWeakPtr *)asStack_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
            }
          }
          uVar10 = *(undefined8 *)(pRVar3 + 0x48);
          uVar9 = uVar9 + 1;
        }
        uVar11 = uVar11 + 1;
        uVar9 = FUN_03dd4864(uVar10,*(undefined8 *)(pRVar3 + 0x50));
      } while (uVar11 < uVar9);
    }
    uVar10 = *(undefined8 *)(this + 0x20);
    lVar4 = FUN_03dd48d0(uVar10,*(undefined8 *)(this + 0x28));
    if (lVar4 != 0) {
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03dd48f8(uVar10,0);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      *(undefined4 *)(this + 0x3c) = *(undefined4 *)(lVar4 + 0x194);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BronzeModule::finishLoad() */

void __thiscall BronzeModule::finishLoad(BronzeModule *this)

{
  spawnBronze((int)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BronzeModule::registerForEvents() */

void __thiscall BronzeModule::registerForEvents(BronzeModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  Board *this_00;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  string asStack_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,finishLoad);
  Sexy::Delegate0::Delegate0<BronzeModule,void(BronzeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<BronzeModule,void(BronzeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<BronzeModule,void(BronzeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieKilled);
  local_80 = local_50;
  uStack_78 = uStack_48;
  local_70 = local_40;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<BronzeModule,void(BronzeModule::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_80);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_58,"ZombieKongFuBronzeHolderGroup");
  Board::LoadResourceGroupForGameplay(this_00,asStack_58);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

