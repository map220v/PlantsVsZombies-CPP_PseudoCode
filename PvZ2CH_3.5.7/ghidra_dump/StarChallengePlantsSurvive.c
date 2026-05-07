// Class: StarChallengePlantsSurvive


/* StarChallengePlantsSurvive::onFlowerPotDied(GridItemFlowerPot*) */

void StarChallengePlantsSurvive::onFlowerPotDied(GridItemFlowerPot *param_1)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantsSurvive::StaticClassInit() */

void StarChallengePlantsSurvive::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengePlantsSurvive");
    (*pcVar2)(plVar1,asStack_10,FUN_04482e04,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengePlantsSurvive::StaticGetClass() */

long * StarChallengePlantsSurvive::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengePlantsSurvive",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengePlantsSurvive::~StarChallengePlantsSurvive() */

void __thiscall
StarChallengePlantsSurvive::~StarChallengePlantsSurvive(StarChallengePlantsSurvive *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0684f460;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* StarChallengePlantsSurvive::~StarChallengePlantsSurvive() */

void __thiscall
StarChallengePlantsSurvive::~StarChallengePlantsSurvive(StarChallengePlantsSurvive *this)

{
  ~StarChallengePlantsSurvive(this);
  AK::FreeHook(this);
  return;
}


/* StarChallengePlantsSurvive::StarChallengePlantsSurvive() */

void __thiscall
StarChallengePlantsSurvive::StarChallengePlantsSurvive(StarChallengePlantsSurvive *this)

{
  Challenge::Challenge((Challenge *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0684f460;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


/* StarChallengePlantsSurvive::StaticNew() */

StarChallengePlantsSurvive * StarChallengePlantsSurvive::StaticNew(void)

{
  StarChallengePlantsSurvive *this;
  
  this = ::operator_new(0x30);
  StarChallengePlantsSurvive(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantsSurvive::onPlantUpgraded(Plant*, int) */

void StarChallengePlantsSurvive::onPlantUpgraded(Plant *param_1,int param_2)

{
  bool bVar1;
  long lVar2;
  ToxicWaterPerfumeBottleProjectile *this;
  int *piVar3;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  bVar1 = std::operator==((string *)(lVar2 + 8),"peapod");
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  if (bVar1) {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x20));
    nop();
    local_10[0] = 0;
    piVar3 = eastl::max_alt<int>((int *)local_10,(int *)(param_1 + 0x28));
    ToxicWaterPerfumeBottleProjectile::SetType(this,*piVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantsSurvive::onPlantLost(Plant*) */

void __thiscall
StarChallengePlantsSurvive::onPlantLost(StarChallengePlantsSurvive *this,Plant *param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  ToxicWaterPerfumeBottleProjectile *this_00;
  int *piVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  uint local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
  bVar1 = std::operator==((string *)(lVar3 + 8),"carrotmissile");
  if (bVar1) {
    uVar6 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
  }
  else {
    Plant::GetType();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    bVar2 = std::operator==((string *)(lVar3 + 8),"flowerpot");
    uVar8 = (uint)bVar2;
    if (uVar8 == 0) {
      Plant::GetType();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      bVar1 = std::operator==((string *)(lVar3 + 8),"bitpeashooter");
      uVar8 = (uint)bVar1;
      if (uVar8 == 0) {
        Plant::GetType();
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        bVar1 = std::operator==((string *)(lVar3 + 8),"heathseeker");
        uVar8 = (uint)bVar1;
        if (uVar8 == 0) {
          Plant::GetType();
          lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
          bVar1 = std::operator==((string *)(lVar3 + 8),"pumpkin");
          if (bVar1 == 0) {
            Plant::GetType();
            lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
            bVar1 = std::operator==((string *)(lVar3 + 8),"peavine");
            uVar6 = (uint)bVar1;
            if (uVar6 == 0) {
              Plant::GetType();
              lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
              bVar1 = std::operator==((string *)(lVar3 + 8),"powervine");
              uVar7 = (uint)bVar1;
              uVar8 = uVar7;
              if (uVar7 == 0) {
                Plant::GetType();
                lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
                bVar1 = std::operator==((string *)(lVar3 + 8),"dragonbabybruit");
                uVar7 = (uint)bVar1;
                if (uVar7 == 0) {
                  Plant::GetType();
                  plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                             ((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
                  uVar7 = (**(code **)(*plVar5 + 0xa0))();
                  uVar7 = uVar7 & 0xff;
                  if (uVar7 == 0) {
                    uVar7 = FUN_02fd4378(param_1[0x55]);
                    uVar7 = uVar7 & 0xff;
                  }
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
                }
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
                uVar8 = 1;
              }
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
              uVar9 = uVar8;
              uVar10 = uVar8;
              uVar11 = uVar8;
              uVar12 = 0;
              uVar6 = uVar8;
              goto joined_r0x04482600;
            }
            uVar8 = (uint)bVar1;
            uVar9 = uVar8;
            uVar10 = uVar8;
            uVar11 = uVar6;
          }
          else {
            uVar8 = (uint)bVar1;
            uVar6 = 0;
            uVar9 = (uint)bVar1;
            uVar10 = uVar8;
            uVar11 = (uint)bVar1;
          }
        }
        else {
          uVar6 = 0;
          uVar9 = uVar8;
          uVar10 = uVar8;
          uVar11 = 0;
        }
      }
      else {
        uVar6 = 0;
        uVar9 = uVar8;
        uVar10 = 0;
        uVar11 = 0;
      }
    }
    else {
      uVar6 = 0;
      uVar9 = (uint)bVar1;
      uVar10 = (uint)bVar1;
      uVar11 = (uint)bVar1;
    }
  }
  uVar7 = 1;
  uVar12 = uVar11;
joined_r0x04482600:
  if (uVar6 != 0) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    uVar12 = uVar11;
  }
  if (uVar12 != 0) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  }
  if (uVar10 != 0) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  }
  if (uVar9 != 0) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  }
  if (uVar8 != 0) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  if (uVar7 == 0) {
    *(int *)(this + 0x28) = *(int *)(this + 0x28) + -1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
    nop();
    local_10[0] = uVar7;
    piVar4 = eastl::max_alt<int>((int *)local_10,(int *)(this + 0x28));
    ToxicWaterPerfumeBottleProjectile::SetType(this_00,*piVar4);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantsSurvive::onLilyPadDied(GridItemLilyPad*) */

void StarChallengePlantsSurvive::onLilyPadDied(GridItemLilyPad *param_1)

{
  ToxicWaterPerfumeBottleProjectile *this;
  int *piVar1;
  int local_c;
  long local_8;
  
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x20));
  nop();
  local_c = 0;
  piVar1 = eastl::max_alt<int>(&local_c,(int *)(param_1 + 0x28));
  if (local_8 == ___stack_chk_guard) {
    ToxicWaterPerfumeBottleProjectile::SetType(this,*piVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantsSurvive::onPlantAdded(Plant*) */

void __thiscall
StarChallengePlantsSurvive::onPlantAdded(StarChallengePlantsSurvive *this,Plant *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ToxicWaterPerfumeBottleProjectile *this_00;
  int *piVar6;
  string asStack_18 [8];
  uint local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  FUN_05475d88(asStack_18,lVar4 + 8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  bVar1 = std::operator==(asStack_18,"carrotmissile");
  if (((((!bVar1) && (bVar1 = std::operator==(asStack_18,"smallChestnut"), !bVar1)) &&
       (bVar1 = std::operator==(asStack_18,"smallcactus"), !bVar1)) &&
      (((bVar1 = std::operator==(asStack_18,"flowerpot"), !bVar1 &&
        (bVar1 = std::operator==(asStack_18,"bitpeashooter"), !bVar1)) &&
       ((bVar1 = std::operator==(asStack_18,"magicbeans"), !bVar1 &&
        ((bVar1 = std::operator==(asStack_18,"frog"), !bVar1 &&
         (bVar1 = std::operator==(asStack_18,"imitater"), !bVar1)))))))) &&
     ((bVar1 = std::operator==(asStack_18,"heathseeker"), !bVar1 &&
      ((((bVar1 = std::operator==(asStack_18,"pumpkin"), !bVar1 &&
         (bVar1 = std::operator==(asStack_18,"peavine"), !bVar1)) &&
        (bVar1 = std::operator==(asStack_18,"powervine"), !bVar1)) &&
       (bVar1 = std::operator==(asStack_18,"dragonbabybruit"), !bVar1)))))) {
    Plant::GetType();
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    cVar2 = (**(code **)(*plVar5 + 0xa0))();
    if (cVar2 == '\0') {
      uVar3 = FUN_02fd4378(param_1[0x55]);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
      if ((uVar3 & 0xff) == 0) {
        *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x20));
        if (cVar2 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
          nop();
          local_10[0] = uVar3 & 0xff;
          piVar6 = eastl::max_alt<int>((int *)local_10,(int *)(this + 0x28));
          ToxicWaterPerfumeBottleProjectile::SetType(this_00,*piVar6);
        }
      }
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    }
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengePlantsSurvive::gameplayEnded() */

void __thiscall StarChallengePlantsSurvive::gameplayEnded(StarChallengePlantsSurvive *this)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  
  iVar1 = *(int *)(this + 0x28);
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (iVar1 < *(int *)(pRVar2 + 0x40)) {
    Challenge::Fail();
    Challenge::HideUI((Challenge *)this);
    return;
  }
  Challenge::Complete((Challenge *)this);
  Challenge::HideUI((Challenge *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantsSurvive::GetPlantCount() */

void StarChallengePlantsSurvive::GetPlantCount(void)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  iVar6 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  EntityFinder::GetEntities(avStack_38,1);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_38);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_20), bVar3) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    nop();
    cVar2 = Plant::HasCondition();
    if (cVar2 == '\0') {
      iVar6 = iVar6 + 1;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,4);
  uVar7 = 0;
  while (uVar1 = local_20, uVar5 = FUN_04481858(local_20,local_18), uVar7 < uVar5) {
    uVar5 = uVar7 + 1;
    puVar4 = (undefined8 *)FUN_04481864(uVar1,uVar7);
    bVar3 = Sexy::RtObject::IsA<GridItemLilyPad>((RtObject *)*puVar4);
    uVar7 = uVar5;
    if (bVar3) {
      iVar6 = iVar6 + 1;
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar6);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantsSurvive::gameplayStarted() */

void __thiscall StarChallengePlantsSurvive::gameplayStarted(StarChallengePlantsSurvive *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  int iVar1;
  undefined4 uVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  ToxicWaterPerfumeBottleProjectile *this_01;
  GridItemWaterMist *this_02;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UIChallengePlantSurvive");
  UIWidget::CreateWidget(aRStack_18,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar1 = *(int *)(pRVar3 + 0x40);
  uVar2 = GetPlantCount();
  *(undefined4 *)(this + 0x28) = uVar2;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  ToxicWaterPerfumeBottleProjectile::SetType(this_01,*(int *)(this + 0x28));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  GridItemWaterMist::SetType(this_02,iVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantsSurvive::registerForEvents() */

void __thiscall StarChallengePlantsSurvive::registerForEvents(StarChallengePlantsSurvive *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
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
  Challenge::registerForEvents((Challenge *)this);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<StarChallengePlantsSurvive,void(StarChallengePlantsSurvive::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayEnded);
  Sexy::Delegate0::Delegate0<StarChallengePlantsSurvive,void(StarChallengePlantsSurvive::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayWinConditionMet,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantLost);
  local_e0 = local_b8;
  local_f0 = local_c8;
  uStack_e8 = uStack_c0;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<StarChallengePlantsSurvive,void(StarChallengePlantsSurvive::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantLost);
  local_f0 = local_b0;
  uStack_e8 = uStack_a8;
  local_e0 = local_a0;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<StarChallengePlantsSurvive,void(StarChallengePlantsSurvive::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantChallengeDied,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLilyPadDied);
  local_100 = local_88;
  local_110 = local_98;
  uStack_108 = uStack_90;
  MessageRouter::
  Subscribe<GridItemLilyPad*,Sexy::CBMemberTranslatorX<StarChallengePlantsSurvive,void(StarChallengePlantsSurvive::*)(GridItemLilyPad*)>>
            ((MessageRouter *)puVar1,Message::LilyPadDied,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFlowerPotDied);
  local_130 = local_80;
  uStack_128 = uStack_78;
  local_120 = local_70;
  MessageRouter::
  Subscribe<GridItemFlowerPot*,Sexy::CBMemberTranslatorX<StarChallengePlantsSurvive,void(StarChallengePlantsSurvive::*)(GridItemFlowerPot*)>>
            ((MessageRouter *)puVar1,Message::FlowerPotDied,&local_130);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantAdded);
  local_f0 = local_68;
  uStack_e8 = uStack_60;
  local_e0 = local_58;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<StarChallengePlantsSurvive,void(StarChallengePlantsSurvive::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantAdded,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantUpgraded);
  local_150 = local_50;
  uStack_148 = uStack_48;
  local_140 = local_40;
  MessageRouter::
  Subscribe<Plant*,int,Sexy::CBMemberTranslatorX<StarChallengePlantsSurvive,void(StarChallengePlantsSurvive::*)(Plant*,int)>>
            ((MessageRouter *)puVar1,Message::PlantUpgraded,&local_150);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

