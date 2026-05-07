// Class: StarChallengeSimultaneousPlants


/* StarChallengeSimultaneousPlants::postInitialize() */

void __thiscall
StarChallengeSimultaneousPlants::postInitialize(StarChallengeSimultaneousPlants *this)

{
  byte bVar1;
  
  bVar1 = BoardHelpers::IsOptionalChallenge((Challenge *)this);
  this[0x30] = (StarChallengeSimultaneousPlants)(bVar1 ^ 1);
  return;
}


/* StarChallengeSimultaneousPlants::gameplayEnded() */

void __thiscall
StarChallengeSimultaneousPlants::gameplayEnded(StarChallengeSimultaneousPlants *this)

{
  char cVar1;
  
  cVar1 = FUN_0447af4c(*(undefined4 *)(this + 0x1c));
  if (cVar1 != '\0') {
    Challenge::Complete((Challenge *)this);
  }
  Challenge::HideUI((Challenge *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeSimultaneousPlants::StaticClassInit() */

void StarChallengeSimultaneousPlants::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeSimultaneousPlants");
    (*pcVar2)(plVar1,asStack_10,FUN_0447bbdc,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeSimultaneousPlants::StaticGetClass() */

long * StarChallengeSimultaneousPlants::StaticGetClass(void)

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
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeSimultaneousPlants",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeSimultaneousPlants::~StarChallengeSimultaneousPlants() */

void __thiscall
StarChallengeSimultaneousPlants::~StarChallengeSimultaneousPlants
          (StarChallengeSimultaneousPlants *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0684e680;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* StarChallengeSimultaneousPlants::~StarChallengeSimultaneousPlants() */

void __thiscall
StarChallengeSimultaneousPlants::~StarChallengeSimultaneousPlants
          (StarChallengeSimultaneousPlants *this)

{
  ~StarChallengeSimultaneousPlants(this);
  AK::FreeHook(this);
  return;
}


/* StarChallengeSimultaneousPlants::StarChallengeSimultaneousPlants() */

void __thiscall
StarChallengeSimultaneousPlants::StarChallengeSimultaneousPlants
          (StarChallengeSimultaneousPlants *this)

{
  Challenge::Challenge((Challenge *)this);
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_0684e680;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  this[0x30] = (StarChallengeSimultaneousPlants)0x1;
  return;
}


/* StarChallengeSimultaneousPlants::StaticNew() */

StarChallengeSimultaneousPlants * StarChallengeSimultaneousPlants::StaticNew(void)

{
  StarChallengeSimultaneousPlants *this;
  
  this = ::operator_new(0x38);
  StarChallengeSimultaneousPlants(this);
  return this;
}


/* StarChallengeSimultaneousPlants::GetProgressDescription() const */

void StarChallengeSimultaneousPlants::GetProgressDescription(void)

{
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  Sexy::StrFormat(L"[ %d / %d ]",(ulong)*(uint *)(in_x0 + 0x24),(ulong)*(uint *)(pRVar1 + 0x40));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeSimultaneousPlants::gameplayStarted() */

void __thiscall
StarChallengeSimultaneousPlants::gameplayStarted(StarChallengeSimultaneousPlants *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  GridItemWaterMist *this_01;
  ToxicWaterPerfumeBottleProjectile *this_02;
  ResilienceTutorialIntroProperties *pRVar1;
  Effect_Protrusion *extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UIChallengePlantCounter");
  UIWidget::CreateWidget(aRStack_18,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  GridItemWaterMist::SetType(this_01,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  ToxicWaterPerfumeBottleProjectile::SetType(this_02,*(int *)(pRVar1 + 0x40));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b0a5d8);
  Effect_Protrusion::SetInstigator(extraout_x0,aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeSimultaneousPlants::updateCurrentPlantCount() */

void __thiscall
StarChallengeSimultaneousPlants::updateCurrentPlantCount(StarChallengeSimultaneousPlants *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  PlantPeapod *pPVar5;
  ResourceInfo *pRVar6;
  long lVar7;
  long *plVar8;
  GridItemLilyPad *pGVar9;
  int *piVar10;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x24) = 0;
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x2c);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    Sexy::RtId::~RtId(aRStack_38);
    Plant::GetType();
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30);
    if (cVar2 != '\0') {
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      bVar1 = std::operator!=((string *)(lVar7 + 8),"imitater");
      if (bVar1) {
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
        bVar1 = std::operator!=((string *)(lVar7 + 8),"carrotmissile");
        if (bVar1) {
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
          bVar1 = std::operator!=((string *)(lVar7 + 8),"smallChestnut");
          if (bVar1) {
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
            bVar1 = std::operator!=((string *)(lVar7 + 8),"smallcactus");
            if (bVar1) {
              lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
              bVar1 = std::operator!=((string *)(lVar7 + 8),"flowerpot");
              if (bVar1) {
                lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
                bVar1 = std::operator!=((string *)(lVar7 + 8),"magicbeans");
                if (bVar1) {
                  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
                  bVar1 = std::operator!=((string *)(lVar7 + 8),"bitpeashooter");
                  if (bVar1) {
                    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
                    bVar1 = std::operator!=((string *)(lVar7 + 8),"frog");
                    if (bVar1) {
                      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
                      bVar1 = std::operator!=((string *)(lVar7 + 8),"pumpkin");
                      if (bVar1) {
                        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
                        bVar1 = std::operator!=((string *)(lVar7 + 8),"peavine");
                        if (bVar1) {
                          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
                          bVar1 = std::operator!=((string *)(lVar7 + 8),"powervine");
                          if (bVar1) {
                            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
                            bVar1 = std::operator!=((string *)(lVar7 + 8),"dragonbabybruit");
                            if (bVar1) {
                              plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
                              cVar2 = (**(code **)(*plVar8 + 0xa0))();
                              if ((cVar2 == '\0') &&
                                 (cVar2 = Plant::HasCondition(pRVar6,0x22), cVar2 == '\0')) {
                                *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    pPVar5 = Sexy::RtObject::Cast<PlantPeapod>(*(RtObject **)(pRVar6 + 0xa8));
    if (pPVar5 != (PlantPeapod *)0x0) {
      iVar3 = FUN_0447afc8(*(undefined4 *)(pPVar5 + 0x28));
      *(int *)(this + 0x24) = *(int *)(this + 0x24) + iVar3;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x2f);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    Sexy::RtId::~RtId(aRStack_38);
    iVar3 = extraout_w1_00;
    if ((pRVar6 != (ResourceInfo *)0x0) &&
       (pGVar9 = Sexy::RtObject::Cast<GridItemLilyPad>((RtObject *)pRVar6), iVar3 = extraout_w1_01,
       pGVar9 != (GridItemLilyPad *)0x0)) {
      *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar3);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  piVar10 = eastl::max_alt<int>((int *)(this + 0x20),(int *)(this + 0x24));
  *(int *)(this + 0x20) = *piVar10;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeSimultaneousPlants::registerForEvents() */

void __thiscall
StarChallengeSimultaneousPlants::registerForEvents(StarChallengeSimultaneousPlants *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Challenge::registerForEvents((Challenge *)this);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::
  Delegate0<StarChallengeSimultaneousPlants,void(StarChallengeSimultaneousPlants::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayEnded);
  Sexy::Delegate0::
  Delegate0<StarChallengeSimultaneousPlants,void(StarChallengeSimultaneousPlants::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::
  Delegate0<StarChallengeSimultaneousPlants,void(StarChallengeSimultaneousPlants::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayUpdate(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gatherPlantingRestrictions);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<StarChallengeSimultaneousPlants,void(StarChallengeSimultaneousPlants::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeSimultaneousPlants::gatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
StarChallengeSimultaneousPlants::gatherPlantingRestrictions
          (StarChallengeSimultaneousPlants *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  string *psVar1;
  bool bVar2;
  char cVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  updateCurrentPlantCount(this);
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (*(int *)(pRVar4 + 0x40) - *(int *)(this + 0x24) < 1) {
    psVar1 = (string *)(param_2 + 8);
    bVar2 = std::operator!=(psVar1,"flowerpot");
    if ((((bVar2) && (bVar2 = std::operator!=(psVar1,"pumpkin"), bVar2)) &&
        (bVar2 = std::operator!=(psVar1,"powervine"), bVar2)) &&
       (((bVar2 = std::operator!=(psVar1,"peavine"), bVar2 &&
         (cVar3 = (**(code **)(*(long *)param_2 + 0xa0))(param_2), cVar3 == '\0')) &&
        (this[0x30] != (StarChallengeSimultaneousPlants)0x0)))) {
      local_c = 0x23;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                 (PlantingReason *)&local_c);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeSimultaneousPlants::onUpdate() */

void __thiscall StarChallengeSimultaneousPlants::onUpdate(StarChallengeSimultaneousPlants *this)

{
  RtWeakPtr *this_00;
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  ToxicWaterPerfumeBottleProjectile *this_01;
  ToxicWaterPerfumeBottleProjectile *this_02;
  char *pcVar6;
  TGALogMgr *this_03;
  size_t in_x2;
  DString aDStack_68 [16];
  TGAPVZ1ModeData aTStack_58 [8];
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  updateCurrentPlantCount(this);
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar1 = *(int *)(this + 0x24);
  iVar2 = *(int *)(pRVar5 + 0x40);
  if ((iVar2 - iVar1 < 0) && (cVar4 = FUN_0447af4c(*(undefined4 *)(this + 0x1c)), cVar4 != '\0')) {
    Challenge::Fail();
    cVar4 = PVZ1ModeUtils::IsPlayingPVZ1Level();
    if (cVar4 != '\0') {
      TGAPVZ1ModeData::TGAPVZ1ModeData(aTStack_58);
      DString::DString(aDStack_68,2);
      pcVar6 = (char *)DString::c_str(aDStack_68);
      std::string::append((string *)aTStack_58,pcVar6,in_x2);
      DString::~DString(aDStack_68);
      Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
      PVZ1ModeNetworkMgr::GetCurrentLevel();
      FUN_05474278(auStack_50,aDStack_68);
      std::string::~string((string *)aDStack_68);
      cVar4 = PVZ1ModeUtils::IsHardMode();
      if (cVar4 == '\0') {
        pcVar6 = "0";
      }
      else {
        pcVar6 = "1";
      }
      std::string::append(asStack_48,pcVar6,in_x2);
      std::string::append(asStack_40,"4",in_x2);
      this_03 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::LogPVZ1Mode(this_03,aTStack_58);
      TGAPVZ1ModeData::~TGAPVZ1ModeData(aTStack_58);
    }
  }
  this_00 = (RtWeakPtr *)(this + 0x28);
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar3) {
    cVar4 = FUN_0447af90(*(undefined4 *)(this + 0x1c));
    if (cVar4 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      ToxicWaterPerfumeBottleProjectile::SetType(this_01,iVar2 - iVar1);
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      ToxicWaterPerfumeBottleProjectile::SetType(this_02,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

