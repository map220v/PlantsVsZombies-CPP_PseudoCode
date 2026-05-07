// Class: PVZ1CopycatsModule


/* PVZ1CopycatsModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall PVZ1CopycatsModule::AddResourceRequirements(PVZ1CopycatsModule *this,set *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = BasePowerup::GetType((BasePowerup *)this);
  uVar2 = FUN_03e70a98(*(undefined8 *)(lVar1 + 0x10));
  uVar3 = FUN_03e70ae8(*(undefined8 *)(lVar1 + 0x18));
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::
  insert<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>>
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,uVar2,
             uVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1CopycatsModule::StaticClassInit() */

void PVZ1CopycatsModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1CopycatsModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04f60a7c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1CopycatsModule::StaticGetClass() */

long * PVZ1CopycatsModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1CopycatsModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1CopycatsModule::~PVZ1CopycatsModule() */

void __thiscall PVZ1CopycatsModule::~PVZ1CopycatsModule(PVZ1CopycatsModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06a210e0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* PVZ1CopycatsModule::~PVZ1CopycatsModule() */

void __thiscall PVZ1CopycatsModule::~PVZ1CopycatsModule(PVZ1CopycatsModule *this)

{
  ~PVZ1CopycatsModule(this);
  AK::FreeHook(this);
  return;
}


/* PVZ1CopycatsModule::PVZ1CopycatsModule() */

void __thiscall PVZ1CopycatsModule::PVZ1CopycatsModule(PVZ1CopycatsModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06a210e0;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* PVZ1CopycatsModule::StaticNew() */

PVZ1CopycatsModule * PVZ1CopycatsModule::StaticNew(void)

{
  PVZ1CopycatsModule *this;
  
  this = ::operator_new(0x28);
  PVZ1CopycatsModule(this);
  return this;
}


/* PVZ1CopycatsModule::onNotifyRefreshCard(float) */

void __thiscall PVZ1CopycatsModule::onNotifyRefreshCard(PVZ1CopycatsModule *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x20) = fVar1 + param_1;
  return;
}


/* PVZ1CopycatsModule::GetPlantCooldownSpeed() */

undefined4 __thiscall PVZ1CopycatsModule::GetPlantCooldownSpeed(PVZ1CopycatsModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return *(undefined4 *)(pRVar1 + 0x78);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1CopycatsModule::onGameplayStarted() */

void PVZ1CopycatsModule::onGameplayStarted(void)

{
  UIWidget *this;
  PowerupManager *this_00;
  string *psVar1;
  ResourceInfo *pRVar2;
  long lVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIPowerupHolder");
  this = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this != (UIWidget *)0x0) {
    this_00 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
    psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PowerupType>>::GetInstancePtr();
    std::string::string(asStack_18,"powerup_special_item_refresh_card");
    ObjectTypeDirectory<PowerupType>::GetTypeFromTypeName(psVar1);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_10);
    lVar3 = PowerupManager::GetBasePowerup(this_00,(PowerupType *)pRVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    std::string::~string(asStack_18);
    nop();
    if (lVar3 == 0) {
      UIWidget::SetVisible(this,false);
    }
    else {
      UIWidget::SetVisible(this,true);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1CopycatsModule::onCopycatsSpawn(Sexy::Point const&, int) */

void __thiscall
PVZ1CopycatsModule::onCopycatsSpawn(PVZ1CopycatsModule *this,Point *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ResilienceTutorialIntroProperties *pRVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  Plant *this_01;
  Zombie *this_02;
  Board *pBVar11;
  code *pcVar12;
  float fVar13;
  LevelEditorCardPlantInterface aLStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar6 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  fVar13 = (float)Sexy::Rand(1.0);
  if ((*(float *)(pRVar6 + 0x40) <= fVar13) ||
     (fVar13 = (float)PVZ_T(), fVar13 < *(float *)(this + 0x20))) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_48);
    while (bVar2 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                             ((ObjectTypeDirectoryIterator *)aLStack_48), bVar2) {
      ObjectTypeDirectoryIterator<PlantType>::operator*
                ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_48);
      cVar3 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aRStack_40);
      if ((cVar3 == '\0') &&
         (lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40),
         *(char *)(lVar7 + 0x30) != '\0')) {
        uVar8 = FUN_04f618f4(*(undefined8 *)(pRVar6 + 0x48));
        uVar9 = FUN_04f61944(*(undefined8 *)(pRVar6 + 0x50));
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
        local_38 = std::
                   find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                             (uVar8,uVar9,lVar7 + 8);
        local_30[0] = FUN_04f61944(*(undefined8 *)(pRVar6 + 0x50));
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_30);
        if (bVar2) goto LAB_04f6309c;
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
        bVar2 = std::operator==((string *)(lVar7 + 8),"armorflame");
        if (bVar2) goto LAB_04f6309c;
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
        bVar2 = std::operator==((string *)(lVar7 + 8),"minigame_imitater");
        if (bVar2) goto LAB_04f6309c;
        plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
        if (*(code **)(*plVar10 + 0xa0) == PlantType::IsVine) {
          cVar3 = PlantType::IsVine();
        }
        else {
          cVar3 = (**(code **)(*plVar10 + 0xa0))();
        }
        if (cVar3 != '\0') goto LAB_04f6309c;
        std::
        vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
        push_back((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                   *)&local_20,(RtWeakPtr *)aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      }
      else {
LAB_04f6309c:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      }
      ObjectTypeDirectoryIterator<PlantType>::operator++
                ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_48);
    }
    iVar4 = FUN_04f60514(local_20,local_18);
    iVar5 = Sexy::Rand(iVar4);
    iVar4 = *(int *)(param_1 + 4);
    iVar1 = *(int *)param_1;
    pBVar11 = *(Board **)(gLawnApp + 0x9f0);
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04f60520(local_20,(long)iVar5);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    this_01 = (Plant *)Board::AddPlant(pBVar11,iVar1,iVar4,(string *)(lVar7 + 8),param_2,false,false
                                       ,false,false);
    Plant::FadeIn(this_01,0.3);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    ~vector((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
             *)&local_20);
  }
  else {
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&local_20,
               (vector *)(pRVar6 + 0x60));
    iVar4 = FUN_04f60500(local_20,local_18);
    iVar4 = Sexy::Rand(iVar4);
    pBVar11 = *(Board **)(gLawnApp + 0x9f0);
    uVar8 = FUN_04f6050c(local_20,(long)iVar4);
    FUN_05475d88((string *)local_30,uVar8);
    this_02 = (Zombie *)
              Board::AddZombie(pBVar11,(string *)local_30,param_2,*(undefined4 *)param_1,
                               *(undefined4 *)(param_1 + 4));
    std::string::~string((string *)local_30);
    BoardTransforms::GridToBoardSpacePos
              ((BoardTransforms *)(ulong)*(uint *)param_1,*(int *)(param_1 + 4),param_2);
    pcVar12 = *(code **)(*(long *)this_02 + 0x78);
    EATextSquish::Vec3::Vec3((Vec3 *)local_30,(float)(int)local_38,(float)local_38._4_4_,0.0);
    (*pcVar12)(this_02,(string *)local_30);
    Zombie::StartWarpIn(this_02,1.0);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1CopycatsModule::registerForEvents() */

void __thiscall PVZ1CopycatsModule::registerForEvents(PVZ1CopycatsModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  CBMemberTranslatorX aCStack_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCopycatsSpawn);
  local_90 = local_58;
  local_a0 = local_68;
  uStack_98 = uStack_60;
  MessageRouter::
  Subscribe<Sexy::Point_const&,int,Sexy::CBMemberTranslatorX<PVZ1CopycatsModule,void(PVZ1CopycatsModule::*)(Sexy::Point_const&,int)>>
            ((MessageRouter *)puVar1,Message::CopycatsSpawn,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshCard);
  local_c0 = local_50;
  uStack_b8 = uStack_48;
  local_b0 = local_40;
  MessageRouter::
  Subscribe<float,Sexy::CBMemberTranslatorX<PVZ1CopycatsModule,void(PVZ1CopycatsModule::*)(float)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshCard,&local_c0);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<PVZ1CopycatsModule,void(PVZ1CopycatsModule::*)()>
            (aDStack_38,aCStack_80);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

