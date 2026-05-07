// Class: BaseChallengeModule


/* BaseChallengeModule::getActiveChallenges(std::vector<Challenge*, std::allocator<Challenge*> >&)
    */

void BaseChallengeModule::getActiveChallenges(vector *param_1)

{
  if ((param_1[0x19] != (vector)0x0) && (param_1[0x18] == (vector)0x0)) {
    (**(code **)(*(long *)param_1 + 0xb8))();
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BaseChallengeModule::StaticClassInit() */

void BaseChallengeModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"BaseChallengeModule");
    (*pcVar2)(plVar1,asStack_10,FUN_036a88a4,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BaseChallengeModule::StaticGetClass() */

long * BaseChallengeModule::StaticGetClass(void)

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
  uVar2 = ChallengeModule::StaticGetClass();
  (*pcVar3)(plVar1,"BaseChallengeModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BaseChallengeModule::BaseChallengeModule() */

void __thiscall BaseChallengeModule::BaseChallengeModule(BaseChallengeModule *this)

{
  ChallengeModule::ChallengeModule((ChallengeModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06680530;
  return;
}


/* BaseChallengeModule::StaticNew() */

BaseChallengeModule * BaseChallengeModule::StaticNew(void)

{
  BaseChallengeModule *this;
  
  this = ::operator_new(0x20);
  BaseChallengeModule(this);
  return this;
}


/* BaseChallengeModule::~BaseChallengeModule() */

void __thiscall BaseChallengeModule::~BaseChallengeModule(BaseChallengeModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06680530;
  ChallengeModule::~ChallengeModule((ChallengeModule *)this);
  return;
}


/* BaseChallengeModule::~BaseChallengeModule() */

void __thiscall BaseChallengeModule::~BaseChallengeModule(BaseChallengeModule *this)

{
  ~BaseChallengeModule(this);
  AK::FreeHook(this);
  return;
}


/* BaseChallengeModule::initializeModule() */

void __thiscall BaseChallengeModule::initializeModule(BaseChallengeModule *this)

{
  BaseChallengeModule BVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  
  Sexy::FastCurve::ClearTrigger((FastCurve *)this);
  this[0x18] = (BaseChallengeModule)0x0;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  BVar1 = (BaseChallengeModule)ProfileUtils::ChallengesUnlockedForCurrentStage(pPVar2);
  if (BVar1 == (BaseChallengeModule)0x0) {
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    BVar1 = *(BaseChallengeModule *)(pRVar3 + 0x70);
  }
  this[0x19] = BVar1;
  return;
}


/* BaseChallengeModule::SetActiveChallengesCompleted() */

void __thiscall BaseChallengeModule::SetActiveChallengesCompleted(BaseChallengeModule *this)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ulong uVar3;
  
  iVar1 = FUN_036a859c(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x87c));
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (((-1 < iVar1) && (this[0x19] != (BaseChallengeModule)0x0)) &&
     (uVar3 = FUN_036a85a4(*(undefined8 *)(pRVar2 + 0x40),*(undefined8 *)(pRVar2 + 0x48)),
     (ulong)(long)iVar1 < uVar3)) {
    ChallengeModule::setActiveChallengesCompletedAtIndex((int)this);
  }
  this[0x18] = (BaseChallengeModule)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BaseChallengeModule::getChallenges(std::vector<Challenge*, std::allocator<Challenge*> >&) */

void __thiscall BaseChallengeModule::getChallenges(BaseChallengeModule *this,vector *param_1)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  LevelModuleManager *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long *plVar6;
  RtClass *pRVar7;
  ulong uVar8;
  undefined8 uVar9;
  Challenge *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_036a859c(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x87c));
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (-1 < iVar1) {
    uVar9 = *(undefined8 *)(pRVar2 + 0x40);
    uVar3 = FUN_036a85a4(uVar9,*(undefined8 *)(pRVar2 + 0x48));
    if ((ulong)(long)iVar1 < uVar3) {
      uVar3 = 0;
      puVar4 = (undefined8 *)FUN_036a85b8(uVar9,(long)iVar1);
      lVar5 = FUN_036a85c4(*puVar4,puVar4[1]);
      if (lVar5 != 0) {
        do {
          this_00 = (LevelModuleManager *)LevelModule::getManager();
          this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_036a85d0(*puVar4,uVar3);
          plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
          pRVar7 = (RtClass *)(**(code **)(*plVar6 + 0x80))();
          lVar5 = LevelModuleManager::GetModuleByClass(this_00,pRVar7);
          if (lVar5 != 0) {
            nop();
            std::vector<Challenge*,std::allocator<Challenge*>>::push_back
                      ((vector<Challenge*,std::allocator<Challenge*>> *)param_1,&local_10);
          }
          uVar3 = uVar3 + 1;
          uVar8 = FUN_036a85c4(*puVar4,puVar4[1]);
        } while (uVar3 < uVar8);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BaseChallengeModule::getChallengesByChoose(std::vector<Challenge*, std::allocator<Challenge*> >&,
   std::vector<bool, std::allocator<bool> >) */

void __thiscall
BaseChallengeModule::getChallengesByChoose
          (BaseChallengeModule *this,vector<Challenge*,std::allocator<Challenge*>> *param_1,
          vector<bool,std::allocator<bool>> *param_3)

{
  bool bVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  LevelModuleManager *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long *plVar8;
  RtClass *pRVar9;
  undefined8 extraout_x0;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_036a859c(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x87c));
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (-1 < iVar2) {
    uVar10 = *(undefined8 *)(pRVar3 + 0x40);
    uVar4 = FUN_036a85a4(uVar10,*(undefined8 *)(pRVar3 + 0x48));
    if ((ulong)(long)iVar2 < uVar4) {
      uVar4 = 0;
      puVar5 = (undefined8 *)FUN_036a85b8(uVar10,(long)iVar2);
      lVar6 = FUN_036a85c4(*puVar5,puVar5[1]);
      if (lVar6 != 0) {
        do {
          uVar7 = std::vector<bool,std::allocator<bool>>::size(param_3);
          if (uVar4 < uVar7) {
            auVar11 = FUN_036a8714(*(undefined8 *)param_3,uVar4);
            local_18 = auVar11;
            bVar1 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_18);
            if (bVar1) {
              this_00 = (LevelModuleManager *)LevelModule::getManager();
              this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_036a85d0(*puVar5,uVar4);
              plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
              pRVar9 = (RtClass *)(**(code **)(*plVar8 + 0x80))();
              lVar6 = LevelModuleManager::GetModuleByClass(this_00,pRVar9);
              if (lVar6 != 0) {
                nop();
                local_18._0_8_ = extraout_x0;
                std::vector<Challenge*,std::allocator<Challenge*>>::push_back
                          (param_1,(Challenge **)local_18);
              }
            }
          }
          uVar4 = uVar4 + 1;
          uVar7 = FUN_036a85c4(*puVar5,puVar5[1]);
        } while (uVar4 < uVar7);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BaseChallengeModule::GatherDependentModulePropertySheets(std::vector<Sexy::RtWeakPtr<LevelModuleProperties
   const>, std::allocator<Sexy::RtWeakPtr<LevelModuleProperties const> > >&) */

void __thiscall
BaseChallengeModule::GatherDependentModulePropertySheets(BaseChallengeModule *this,vector *param_1)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (this[0x19] != (BaseChallengeModule)0x0) {
    iVar1 = FUN_036a859c(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x87c));
    pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    if (-1 < iVar1) {
      uVar6 = *(undefined8 *)(pRVar2 + 0x40);
      uVar3 = FUN_036a85a4(uVar6,*(undefined8 *)(pRVar2 + 0x48));
      if ((ulong)(long)iVar1 < uVar3) {
        puVar4 = (undefined8 *)FUN_036a85b8(uVar6,(long)iVar1);
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)param_1);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        uVar6 = FUN_036a8ee0(*puVar4);
        uVar5 = FUN_036a8f30(puVar4[1]);
        std::
        vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>
        ::
        insert<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<LevelModuleProperties_const>const*,std::vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>>,void>
                  ((vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>
                    *)param_1,local_10,uVar6,uVar5);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

