// Class: PlantTrialModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialModule::StaticClassInit() */

void PlantTrialModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantTrialModule");
    (*pcVar2)(plVar1,asStack_10,FUN_049657f4,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTrialModule::StaticGetClass() */

long * PlantTrialModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTrialModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTrialModule::SetZombieGeneraterPause(bool) */

void __thiscall PlantTrialModule::SetZombieGeneraterPause(PlantTrialModule *this,bool param_1)

{
  WaveGenerator *this_00;
  WaveManager *this_01;
  
  this_00 = (WaveGenerator *)Board::GetWaveGenerator(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 != (WaveGenerator *)0x0) {
    WaveGenerator::PauseNextWave(this_00,param_1);
  }
  this_01 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
  if (this_01 != (WaveManager *)0x0) {
    WaveManager::SetPause(this_01,param_1);
    return;
  }
  return;
}


/* PlantTrialModule::SetAppendObjPause(bool) */

void __thiscall PlantTrialModule::SetAppendObjPause(PlantTrialModule *this,bool param_1)

{
  Board::SuppressSunSpawners(*(Board **)(gLawnApp + 0x9f0),param_1);
  return;
}


/* PlantTrialModule::IsZombieAllDie() */

bool PlantTrialModule::IsZombieAllDie(void)

{
  int iVar1;
  
  iVar1 = Board::CountZombiesOnScreen(*(Board **)(gLawnApp + 0x9f0),false);
  return iVar1 < 1;
}


/* PlantTrialModule::CanStartNarrationActive() */

undefined8 __thiscall PlantTrialModule::CanStartNarrationActive(PlantTrialModule *this)

{
  char cVar1;
  CrazyNPCManager *this_00;
  undefined8 uVar2;
  
  if (this[0x1c] != (PlantTrialModule)0x0) {
    this_00 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    cVar1 = CrazyNPCManager::IsNarrationActive(this_00);
    if (cVar1 == '\0') {
      uVar2 = IsZombieAllDie();
      return uVar2;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialModule::DrawHighlight(Sexy::Graphics*) */

void __thiscall PlantTrialModule::DrawHighlight(PlantTrialModule *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  GraphicsAutoState aGStack_30 [8];
  Insets aIStack_28 [4];
  int local_24;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  fVar8 = *(float *)(param_1 + 0x20);
  iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c);
  *(float *)(param_1 + 0x10) = (float)*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48);
  *(float *)(param_1 + 0x14) = (float)iVar1;
  iVar1 = FUN_0496457c(200);
  fVar7 = *(float *)(param_1 + 0x18);
  fVar9 = *(float *)(param_1 + 0x24);
  iVar2 = FUN_0496457c(0xa0);
  iVar5 = (int)((float)(int)(((float)iVar2 - fVar9) * *(float *)(param_1 + 0x1c)) + fVar9);
  Sexy::Insets::Insets(aIStack_18,0xff,0xfc,0x5f,0x95);
  Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  fVar10 = (float)iVar5;
  fVar9 = (float)FUN_04964590((float)(iVar2 << 1) * *(float *)(param_1 + 0x1c));
  BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = FUN_0496457c();
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  fVar6 = *(float *)(param_1 + 0x18);
  BoardConstants::GRIDSQUARE_HEIGHT();
  iVar4 = FUN_0496457c();
  Sexy::Insets::Insets
            (aIStack_28,(int)((float)(int)(((float)iVar1 - fVar8) * fVar7) + fVar8),
             (int)(fVar10 + fVar9),(int)((float)(iVar2 * iVar3) * fVar6),
             (int)((float)iVar4 * *(float *)(param_1 + 0x1c)));
  Sexy::Graphics::FillRect(param_1,(TRect *)aIStack_28);
  Sexy::Insets::Insets(aIStack_18,0,0,0,0x80);
  Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
  local_24 = iVar5;
  BoardConstants::GRIDSQUARE_HEIGHT();
  iVar1 = FUN_0496457c();
  local_1c = (int)((float)(iVar1 << 1) * *(float *)(param_1 + 0x1c));
  Sexy::Graphics::FillRect(param_1,(TRect *)aIStack_28);
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  fVar9 = (float)FUN_04964590((float)(iVar1 * 3) * *(float *)(param_1 + 0x1c));
  local_24 = (int)(fVar10 + fVar9);
  Sexy::Graphics::FillRect(param_1,(TRect *)aIStack_28);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialModule::GetDesPacketPos() */

void PlantTrialModule::GetDesPacketPos(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  UINewPVPTopZombieQueue *this;
  UIWidget *pUVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  iVar2 = FUN_049645a0(0x6e);
  iVar3 = FUN_049645a0(0x32);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)iVar2,(float)iVar3);
  cVar1 = FUN_0496424c(this[0x199]);
  if ((int)cVar1 - 1U < 7) {
    UINewPVPTopZombieQueue::gettItem(this,(int)cVar1 - 1U);
    pUVar4 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    puVar6 = (undefined8 *)UIWidget::GetPositionOffset(pUVar4);
    local_18 = *puVar6;
    pUVar4 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar5 = UIWidget::GetRect(pUVar4);
    local_18 = CONCAT44(local_18._4_4_ + (float)*(int *)(lVar5 + 0xc),(undefined4)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  else {
    UINewPVPTopZombieQueue::gettItem(this,0);
    pUVar4 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar5 = UIWidget::GetRect(pUVar4);
    local_18 = CONCAT44((float)*(int *)(lVar5 + 4),(undefined4)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)local_18,(int)((ulong)local_18 >> 0x20));
}


/* PlantTrialModule::CanSeedPacketVisibleEnable() */

bool __thiscall PlantTrialModule::CanSeedPacketVisibleEnable(PlantTrialModule *this)

{
  char cVar1;
  int iVar2;
  UIWidget *this_00;
  long lVar3;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28));
  if (cVar1 != '\0') {
    this_00 = (UIWidget *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    cVar1 = UIWidget::IsVisible(this_00);
    if (cVar1 == '\0') {
      lVar3 = LawnApp::GetNarrationSystem(gLawnApp);
      iVar2 = FUN_04964248(*(undefined4 *)(lVar3 + 0x110));
      return iVar2 == 2;
    }
  }
  return false;
}


/* PlantTrialModule::OnNpcDraw(Sexy::Graphics*) */

void PlantTrialModule::OnNpcDraw(Graphics *param_1)

{
  char cVar1;
  UIWidget *this;
  
  if (param_1[0x1c] != (Graphics)0x0) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x28));
    if (cVar1 != '\0') {
      this = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
      UIWidget::IsVisible(this);
      return;
    }
  }
  return;
}


/* PlantTrialModule::RenderInfos(Sexy::Graphics*) */

void PlantTrialModule::RenderInfos(Graphics *param_1)

{
  char cVar1;
  UIWidget *this;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x28));
  if (cVar1 == '\0') {
    return;
  }
  this = (UIWidget *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28))
  ;
  UIWidget::IsVisible(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialModule::AddToRenderQueue(RenderQueue*) */

void __thiscall PlantTrialModule::AddToRenderQueue(PlantTrialModule *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x18) == 2) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,DrawHighlight);
    Sexy::Delegate1<Sexy::Graphics*>::
    Delegate1<PlantTrialModule,void(PlantTrialModule::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,0x61a81,aDStack_38);
  }
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,RenderInfos);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<PlantTrialModule,void(PlantTrialModule::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,500000,aDStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantTrialModule::PlantTrialModule() */

void __thiscall PlantTrialModule::PlantTrialModule(PlantTrialModule *this)

{
  undefined4 uVar1;
  
  LevelModule::LevelModule((LevelModule *)this);
  this[0x1c] = (PlantTrialModule)0x0;
  this[0x1d] = (PlantTrialModule)0x0;
  *(undefined ***)this = &PTR_GetModuleClass_06915d10;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x50) = uVar1;
  return;
}


/* PlantTrialModule::StaticNew() */

PlantTrialModule * PlantTrialModule::StaticNew(void)

{
  PlantTrialModule *this;
  
  this = ::operator_new(0x58);
  PlantTrialModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialModule::AddBouncingArrow(Sexy::SexyVector2 const&) */

void __thiscall PlantTrialModule::AddBouncingArrow(PlantTrialModule *this,SexyVector2 *param_1)

{
  Effect_BouncingArrow *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_BouncingArrow>(*(Board **)(gLawnApp + 0x9f0));
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06b72078);
  Effect_BouncingArrow::SetArrowImage(this_00,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Effect_BouncingArrow::SetBounceHeightsBoardSpace(this_00,20.0,40.0);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this_00,true);
  StandaloneEffect::SetScreenSpaceOrigin((StandaloneEffect *)this_00,param_1,1000000);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialModule::ZombieController(bool) */

void __thiscall PlantTrialModule::ZombieController(PlantTrialModule *this,bool param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  ZombiePirateBarrelPusher *pZVar3;
  ZombieCamel *pZVar4;
  undefined8 uVar5;
  RtObject *pRVar6;
  ZombieChickenFarmer *this_01;
  int extraout_w1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pRVar6 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pZVar3 = Sexy::RtObject::Cast<ZombiePirateBarrelPusher>(pRVar6);
    if (pZVar3 != (ZombiePirateBarrelPusher *)0x0) {
      FUN_04964250(pZVar3 + 0x808,param_1);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      goto joined_r0x049655c8;
    }
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
joined_r0x049655c8:
  if (bVar1) {
    pRVar6 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pZVar4 = Sexy::RtObject::Cast<ZombieCamel>(pRVar6);
    if (pZVar4 != (ZombieCamel *)0x0) {
      uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable(aIStack_28,uVar5,0x29);
      while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
        Sexy::RtDbTable::Iterator::operator*(aIStack_28);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
        Sexy::RtId::~RtId(aRStack_30);
        pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        pZVar4 = Sexy::RtObject::Cast<ZombieCamel>(pRVar6);
        if ((pZVar4 != (ZombieCamel *)0x0) &&
           (cVar2 = (**(code **)(*(long *)pZVar4 + 0x328))(), cVar2 == '\0')) {
          RealObject::JoinTeam((RealObject *)pZVar4,2);
          Zombie::SetIsTargetable((Zombie *)pZVar4,!param_1);
          Zombie::setZombieState((Zombie *)pZVar4,!param_1,0);
          Zombie::SetIgnoresAllDamage((Zombie *)pZVar4,param_1);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
      }
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
    }
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pRVar6 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    this_01 = Sexy::RtObject::Cast<ZombieChickenFarmer>(pRVar6);
    if (this_01 != (ZombieChickenFarmer *)0x0) {
      Zombie::SetIsTargetable((Zombie *)this_01,!param_1);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantTrialModule::ControlShowZombie(bool) */

void __thiscall PlantTrialModule::ControlShowZombie(PlantTrialModule *this,bool param_1)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  bool bVar2;
  long *plVar3;
  Zombie *pZVar4;
  RtObject *pRVar5;
  ZombieBeachFisherman *pZVar6;
  RealObject *pRVar7;
  
  this_00 = (RtMixedPtrBase *)(this + 0x30);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 == '\0') {
    return;
  }
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  cVar1 = (**(code **)(*plVar3 + 0x328))();
  if (cVar1 == '\0') {
    pZVar4 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Zombie::SetIgnoresAllDamage(pZVar4,param_1);
    if (param_1) {
      pRVar5 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      bVar2 = Sexy::RtObject::IsA<ZombieChickenFarmer>(pRVar5);
      if (!bVar2) {
        pRVar7 = (RealObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        RealObject::JoinTeam(pRVar7,1);
      }
      pRVar5 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pZVar6 = Sexy::RtObject::Cast<ZombieBeachFisherman>(pRVar5);
      if (pZVar6 == (ZombieBeachFisherman *)0x0) {
        pZVar4 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        Zombie::setZombieState(pZVar4,0,0);
      }
    }
    else {
      pRVar5 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      bVar2 = Sexy::RtObject::IsA<ZombieChickenFarmer>(pRVar5);
      if (!bVar2) {
        pRVar7 = (RealObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        RealObject::JoinTeam(pRVar7,2);
      }
      pRVar5 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pZVar6 = Sexy::RtObject::Cast<ZombieBeachFisherman>(pRVar5);
      if (pZVar6 == (ZombieBeachFisherman *)0x0) {
        pZVar4 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        Zombie::setZombieState(pZVar4,1,0);
      }
    }
  }
  ZombieController(this,param_1);
  return;
}


/* PlantTrialModule::~PlantTrialModule() */

void __thiscall PlantTrialModule::~PlantTrialModule(PlantTrialModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06915d10;
  std::vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>>::~vector
            ((vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>> *)
             (this + 0x38));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* PlantTrialModule::~PlantTrialModule() */

void __thiscall PlantTrialModule::~PlantTrialModule(PlantTrialModule *this)

{
  ~PlantTrialModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialModule::IsTrialEnabled() */

void PlantTrialModule::IsTrialEnabled(void)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  LevelModule *pLVar4;
  GachaConfig *this;
  long lVar5;
  string *psVar6;
  RtObject *this_00;
  ConveyorSeedBankProperties *pCVar7;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_049653b0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (lVar3 != 0) {
    pLVar4 = (LevelModule *)FUN_049653b0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    LevelModule::GetPropsPtr(pLVar4);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar1) {
      pLVar4 = (LevelModule *)FUN_049653b0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
      LevelModule::GetPropsPtr(pLVar4);
      this_00 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      pCVar7 = Sexy::RtObject::Cast<ConveyorSeedBankProperties>(this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      if (pCVar7 != (ConveyorSeedBankProperties *)0x0) goto LAB_04965e3c;
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
    lVar3 = Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
    if (lVar3 != 0) {
      this = (GachaConfig *)LawnApp::GetPlantTrialConfig(gLawnApp);
      lVar5 = GachaConfig::GetGachaPlantRewardList(this);
      FUN_05475d88(asStack_28,lVar5 + 8);
      psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_20);
      SeedBankNew::TryFindSeedPacket(aRStack_10,lVar3,aRStack_18);
      bVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
      bVar2 = bVar2 ^ 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      std::string::~string(asStack_28);
      goto LAB_04965e40;
    }
  }
LAB_04965e3c:
  bVar2 = 0;
LAB_04965e40:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialModule::onWaveStarted(int) */

void __thiscall PlantTrialModule::onWaveStarted(PlantTrialModule *this,int param_1)

{
  int iVar1;
  LawnApp *pLVar2;
  char cVar3;
  PlantTrialConfig *pPVar4;
  undefined8 uVar5;
  long lVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = IsTrialEnabled();
  pLVar2 = gLawnApp;
  if (cVar3 != '\0') {
    pPVar4 = (PlantTrialConfig *)LawnApp::GetPlantTrialConfig(gLawnApp);
    uVar5 = Board::GetLevel(*(Board **)(pLVar2 + 0x9f0));
    FUN_05475d88(asStack_10,uVar5);
    lVar6 = PlantTrialConfig::GetTrialDataByLevelName(pPVar4,asStack_10);
    iVar1 = *(int *)(lVar6 + 0x54);
    std::string::~string(asStack_10);
    if (iVar1 == param_1 + 1) {
      this[0x1c] = (PlantTrialModule)0x1;
      SetZombieGeneraterPause(this,true);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialModule::SeedPacketGenerator() */

void __thiscall PlantTrialModule::SeedPacketGenerator(PlantTrialModule *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  LawnApp *this_01;
  char cVar1;
  UIWidget *pUVar2;
  GachaConfig *this_02;
  long lVar3;
  long *plVar4;
  string *psVar5;
  SeedPacket *this_03;
  undefined8 uVar6;
  UIWidget *pUVar7;
  Board *this_04;
  code *pcVar8;
  float fVar9;
  float fVar10;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  pUVar2 = (UIWidget *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  this_02 = (GachaConfig *)LawnApp::GetPlantTrialConfig(gLawnApp);
  lVar3 = GachaConfig::GetGachaPlantRewardList(this_02);
  FUN_05475d88(asStack_28,lVar3 + 8);
  Sexy::RtName::RtName((RtName *)&local_18,L"UISeedBankPacket");
  UIWidget::CreateWidget((RtName *)&local_18,1);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName((RtName *)&local_18);
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  pcVar8 = *(code **)(*plVar4 + 0x198);
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
  (*pcVar8)(plVar4,(RtName *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  FUN_049641c4(lVar3 + 0x81,lVar3 + 0x82,0xffffffff);
  this_03 = (SeedPacket *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  SeedPacket::SetOnDisplay(this_03,true);
  uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  fVar9 = (float)FUN_049645b4(0x43910000);
  fVar10 = (float)FUN_049645b4(0x41f00000);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,fVar9,fVar10);
  UIWidget::SetPositionOffset(local_18,local_14,uVar6);
  pUVar7 = (UIWidget *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  UIWidget::SetVisible(pUVar7,false);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  FUN_049642d8(lVar3 + 0x1e4);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  FUN_049642cc(lVar3 + 0x1e8);
  pUVar7 = (UIWidget *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  UIWidget::SetParentWidget(pUVar7,pUVar2);
  this_01 = gLawnApp;
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  cVar1 = LawnApp::CanLoadGroup(this_01,(string *)(lVar3 + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  if (cVar1 != '\0') {
    this_04 = *(Board **)(gLawnApp + 0x9f0);
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Board::LoadResourceGroupForGameplay(this_04,(string *)(lVar3 + 0x10));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  }
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall PlantTrialModule::AddResourceRequirements(PlantTrialModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  std::string::string(asStack_10,"UI_Packet_PlantTrial");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Effect_SeedPacket");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialModule::MakeGridItemTargetable(bool) */

void __thiscall PlantTrialModule::MakeGridItemTargetable(PlantTrialModule *this,bool param_1)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  RtObject *this_00;
  GridItem *pGVar4;
  undefined8 *puVar5;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x38));
    local_20[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x38));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)local_20), bVar1)
    {
      pRVar3 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar3);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_30);
      if (bVar1) {
        this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
        pGVar4 = Sexy::RtObject::Cast<GridItem>(this_00);
        if (pGVar4 != (GridItem *)0x0) {
          RealObject::JoinTeam((RealObject *)pGVar4,2);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
    }
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    EntityFinder::GetEntitiesOnBoard
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20,4);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      pGVar4 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar5);
      if ((pGVar4 != (GridItem *)0x0) && (cVar2 = RealObject::IsOnTeam(pGVar4,2), cVar2 != '\0')) {
        RealObject::JoinTeam((RealObject *)pGVar4,1);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)aRStack_30);
        std::vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>>::push_back
                  ((vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>> *)
                   (this + 0x38),(RtWeakPtr *)&local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTrialModule::EndTutorial() */

void __thiscall PlantTrialModule::EndTutorial(PlantTrialModule *this)

{
  this[0x1c] = (PlantTrialModule)0x0;
  SetAppendObjPause(this,false);
  SetZombieGeneraterPause(this,false);
  ControlShowZombie(this,false);
  MakeGridItemTargetable(this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialModule::onNarrationFinished() */

void __thiscall PlantTrialModule::onNarrationFinished(PlantTrialModule *this)

{
  bool bVar1;
  GachaConfig *this_00;
  long lVar2;
  undefined4 uVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = PVZ_T();
  this[0x1d] = (PlantTrialModule)0x1;
  *(undefined4 *)(this + 0x50) = uVar3;
  MessageRouter::Post<int,TutorialEvent>((MessageRouter *)gMessageRouter,Message::TutorialFTUE,0x1a)
  ;
  this_00 = (GachaConfig *)LawnApp::GetPlantTrialConfig(gLawnApp);
  lVar2 = GachaConfig::GetGachaPlantRewardList(this_00);
  FUN_05475d88(asStack_10,lVar2 + 8);
  bVar1 = std::operator==(asStack_10,"bloomerang");
  if (bVar1) {
    MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
              ((MessageRouter *)gMessageRouter,Message::Toturi,0,0xc);
  }
  else {
    bVar1 = std::operator==(asStack_10,"bonkchoy");
    if (bVar1) {
      MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
                ((MessageRouter *)gMessageRouter,Message::Toturi,0,0x14);
      EndTutorial(this);
    }
    else {
      EndTutorial(this);
    }
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialModule::SetIntroState(int) */

void __thiscall PlantTrialModule::SetIntroState(PlantTrialModule *this,int param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  UINewPVPTopZombieQueue *pUVar8;
  FishingEnergyBar *this_01;
  SeedPacket *pSVar9;
  Effect_BouncingArrow *pEVar10;
  Board *pBVar11;
  TPoint aTStack_38 [8];
  int local_30;
  int local_2c;
  Point aPStack_28 [8];
  FastCurve aFStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x18) == 1) {
    pSVar9 = (SeedPacket *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    SeedPacket::SetIsFlashing(pSVar9,false);
  }
  else if (*(int *)(this + 0x18) != 2) {
    *(int *)(this + 0x18) = param_1;
    goto joined_r0x049667ec;
  }
  plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  (**(code **)(*plVar7 + 0x48))();
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x20));
  *(int *)(this + 0x18) = param_1;
joined_r0x049667ec:
  if (param_1 == 2) {
    BoardTransforms::GridToBoardSpaceX(-1);
    iVar5 = FUN_0496457c();
    iVar3 = BoardTransforms::GridToBoardSpaceY(2);
    iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar3 = FUN_0496457c(iVar3 - iVar4 / 2);
    Sexy::FastCurve::SetOutRange(aFStack_20,(float)iVar5,(float)iVar3);
    AddBouncingArrow(this,(SexyVector2 *)aFStack_20);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x20),(RtWeakPtrBase *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    pEVar10 = (Effect_BouncingArrow *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
    Effect_BouncingArrow::PointRight(pEVar10);
    pBVar11 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178((RtWeakPtr<Sexy::ResourceInfo> *)&local_18,L"[PLANTTRIAL_BLOOMERANG_INTO1]",
                 aFStack_20);
    Board::DisplayAdvice(pBVar11,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,1,0);
    FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    nop();
    for (iVar5 = 0; iVar3 = BoardConstants::NUMBER_OF_COLUMNS(), iVar5 < iVar3 / 2;
        iVar5 = iVar5 + 1) {
      pBVar11 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)&local_18,"");
      lVar6 = Board::GetPlantAt(pBVar11,iVar5,2,(string *)&local_18);
      std::string::~string((string *)&local_18);
      nop();
      if (lVar6 == 0) goto LAB_04966794;
    }
    pBVar11 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)&local_18,"");
    plVar7 = (long *)Board::GetPlantAt(pBVar11,3,2,(string *)&local_18);
    std::string::~string((string *)&local_18);
    nop();
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x150))(plVar7);
    }
  }
  else if (param_1 == 3) {
    iVar5 = 0;
    pBVar11 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178((RtWeakPtr<Sexy::ResourceInfo> *)&local_18,L"[PLANTTRIAL_BLOOMERANG_INTO3]",
                 aFStack_20);
    Board::DisplayAdvice(pBVar11,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,7,0);
    FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    nop();
    EndTutorial(this);
    pUVar8 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
    if (pUVar8 != (UINewPVPTopZombieQueue *)0x0) {
      for (; cVar2 = FUN_0496424c(pUVar8[0x199]), iVar5 < cVar2; iVar5 = iVar5 + 1) {
        UINewPVPTopZombieQueue::gettItem(pUVar8,iVar5);
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_18);
        if (bVar1) {
          pSVar9 = (SeedPacket *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
          SeedPacket::SetDisabled(pSVar9,false);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      }
    }
  }
  else if ((param_1 == 1) &&
          (pUVar8 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0)),
          pUVar8 != (UINewPVPTopZombieQueue *)0x0)) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28);
    Board::GetBoardBaseOffset();
    for (iVar5 = 0; cVar2 = FUN_0496424c(pUVar8[0x199]), iVar5 < cVar2; iVar5 = iVar5 + 1) {
      UINewPVPTopZombieQueue::gettItem(pUVar8,iVar5);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_18);
      if ((bVar1) &&
         (cVar2 = Sexy::RtWeakPtrBase::operator!=
                            ((RtWeakPtrBase *)&local_18,(RtWeakPtrBase *)this_00), cVar2 != '\0')) {
        pSVar9 = (SeedPacket *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        SeedPacket::SetDisabled(pSVar9,true);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    UIWidget::GetDrawRect();
    this_01 = (FishingEnergyBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    FishingEnergyBar::onGameUnpaused(this_01);
    pSVar9 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    SeedPacket::SetIsFlashing(pSVar9,true);
    Sexy::Point::Point(aPStack_28,local_18 + local_10,local_14 + local_c / 2);
    Sexy::TPoint<int>::operator-((TPoint<int> *)aPStack_28,aTStack_38);
    Sexy::Point::Point((Point *)&local_30,(TPoint *)aFStack_20);
    Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
    iVar5 = FUN_0496457c(0x14);
    Sexy::FastCurve::SetOutRange((FastCurve *)aPStack_28,(float)(local_30 + iVar5),(float)local_2c);
    AddBouncingArrow(this,(SexyVector2 *)aPStack_28);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x20),(RtWeakPtrBase *)aFStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aFStack_20);
    pEVar10 = (Effect_BouncingArrow *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
    Effect_BouncingArrow::PointLeft(pEVar10);
  }
LAB_04966794:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTrialModule::OnCursorAdded(BaseCursor*) */

void __thiscall PlantTrialModule::OnCursorAdded(PlantTrialModule *this,BaseCursor *param_1)

{
  bool bVar1;
  
  if (((param_1 != (BaseCursor *)0x0) &&
      (bVar1 = Sexy::RtObject::IsA<PlantCursor>((RtObject *)param_1), bVar1)) &&
     (*(int *)(this + 0x18) == 1)) {
    SetIntroState(this,2);
    return;
  }
  return;
}


/* PlantTrialModule::OnCursorDestroyed(BaseCursor*) */

void __thiscall PlantTrialModule::OnCursorDestroyed(PlantTrialModule *this,BaseCursor *param_1)

{
  bool bVar1;
  
  if (((param_1 != (BaseCursor *)0x0) &&
      (bVar1 = Sexy::RtObject::IsA<PlantCursor>((RtObject *)param_1), bVar1)) &&
     (*(int *)(this + 0x18) == 2)) {
    SetIntroState(this,1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialModule::OnPlantPlanted(Plant*) */

void __thiscall PlantTrialModule::OnPlantPlanted(PlantTrialModule *this,Plant *param_1)

{
  int iVar1;
  long lVar2;
  Board *pBVar3;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x18) == 2) {
    iVar1 = SharkMinion::getRow((SharkMinion *)param_1);
    if (iVar1 == 2) {
      SetIntroState(this,3);
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
      FUN_049642cc(lVar2 + 0x1e8);
    }
    else {
      (**(code **)(*(long *)param_1 + 0x48))(param_1);
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
      FUN_049642cc(lVar2 + 0x1e8);
      pBVar3 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05478178(auStack_10,L"[PLANTTRIAL_BLOOMERANG_INTO2]",auStack_18);
      Board::DisplayAdvice(pBVar3,auStack_10,1,0);
      FUN_05476c50(auStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x04967148 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantTrialModule::UpdateCheck() */

void PlantTrialModule::UpdateCheck(void)

{
  RtMixedPtrBase *this;
  int iVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  PlantTrialModule *in_x0;
  long lVar7;
  PlantTrialConfig *pPVar8;
  undefined8 uVar9;
  int *piVar10;
  GachaConfig *pGVar11;
  UIWidget *this_00;
  SeedPacket *this_01;
  string *psVar12;
  CrazyNPCManager *pCVar13;
  LawnApp *pLVar14;
  Board *pBVar15;
  float fVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  float fVar19;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  int local_8c;
  string asStack_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  float local_68;
  float fStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  int local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = IsTrialEnabled();
  if (cVar3 != '\0') {
    cVar3 = CanStartNarrationActive(in_x0);
    if (cVar3 != '\0') {
      (**(code **)(**(long **)(gLawnApp + 0x9f0) + 0x268))(*(long **)(gLawnApp + 0x9f0));
      SetAppendObjPause(in_x0,true);
      pLVar14 = gLawnApp;
      pGVar11 = (GachaConfig *)LawnApp::GetPlantTrialConfig(gLawnApp);
      psVar12 = (string *)GachaConfig::GetGachaPlantRewardList(pGVar11);
      pCVar13 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(pLVar14);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)in_x0,onNarrationFinished);
      Sexy::Delegate0::Delegate0<PlantTrialModule,void(PlantTrialModule::*)()>
                (aDStack_38,(RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
      std::string::string((string *)&local_68,"");
      CrazyNPCManager::StartNarrativeID(pCVar13,psVar12 + 0x20,aDStack_38,(string *)&local_68);
      std::string::~string((string *)&local_68);
      nop();
      Sexy::Point::Point((Point *)&local_80,8,2);
      bVar4 = std::operator==(psVar12,"pirate7");
      if (bVar4) {
        Sexy::Point::Point((Point *)&local_50,8,1);
        local_80 = CONCAT44(uStack_4c,local_50);
      }
      pBVar15 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05475d88((string *)&local_68,psVar12 + 0x10);
      Board::AddZombie(pBVar15,(string *)&local_68,1,local_80 & 0xffffffff,local_80._4_4_);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(in_x0 + 0x30),(RtWeakPtrBase *)&local_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
      std::string::~string((string *)&local_68);
      ControlShowZombie(in_x0,true);
      MakeGridItemTargetable(in_x0,false);
      SeedPacketGenerator(in_x0);
    }
    cVar3 = CanSeedPacketVisibleEnable(in_x0);
    if (cVar3 != '\0') {
      this_00 = (UIWidget *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x28));
      UIWidget::SetVisible(this_00,true);
      this_01 = (SeedPacket *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x28));
      SeedPacket::ShowBoarderEffect(this_01,true);
    }
    if (in_x0[0x1d] != (PlantTrialModule)0x0) {
      this = (RtMixedPtrBase *)(in_x0 + 0x28);
      cVar3 = Sexy::RtMixedPtrBase::IsValid(this);
      if (cVar3 != '\0') {
        fVar19 = *(float *)(in_x0 + 0x50) + 3.0;
        fVar16 = (float)PVZ_T();
        if (fVar16 < fVar19) {
          ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                    ((ResistenceValueInfo *)&local_68);
          local_50 = GetDesPacketPos();
          uVar17 = PVZ_T();
          auVar18 = FUN_049645b4(0x43910000);
          local_80._0_4_ = auVar18._0_4_;
          local_68 = CurveLerp<float>(auVar18,fVar19,uVar17,&local_80,&local_50,3);
          uVar17 = PVZ_T();
          auVar18 = FUN_049645b4(0x41f00000);
          local_80 = CONCAT44(local_80._4_4_,auVar18._0_4_);
          fStack_64 = CurveLerp<float>(auVar18,fVar19,uVar17,&local_80,&uStack_4c,3);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          UIWidget::SetPositionOffset(local_68,fStack_64);
        }
        else {
          uVar17 = PVZ_EOT();
          in_x0[0x1d] = (PlantTrialModule)0x0;
          *(undefined4 *)(in_x0 + 0x50) = uVar17;
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          FUN_049641c4(lVar7 + 0x81,lVar7 + 0x82,0);
          pLVar14 = gLawnApp;
          pPVar8 = (PlantTrialConfig *)LawnApp::GetPlantTrialConfig(gLawnApp);
          uVar9 = Board::GetLevel(*(Board **)(pLVar14 + 0x9f0));
          FUN_05475d88((string *)&local_50,uVar9);
          lVar7 = PlantTrialConfig::GetTrialDataByLevelName(pPVar8,(string *)&local_50);
          iVar1 = *(int *)(lVar7 + 0x5c);
          local_8c = iVar1;
          std::string::~string((string *)&local_50);
          pLVar14 = gLawnApp;
          if (0 < iVar1) {
            pBVar15 = *(Board **)(gLawnApp + 0x9f0);
            uVar5 = Board::GetPlantfoodMax(pBVar15);
            uVar6 = Board::GetPlantfoodCount(pBVar15);
            local_50 = (uVar5 & 0xff) - (uVar6 & 0xff);
            if (0 < local_50) {
              uVar5 = Board::GetPlantfoodCount(pBVar15);
              piVar10 = eastl::min_alt<int>(&local_8c,&local_50);
              Board::SetPlantfoodCount(pBVar15,(uVar5 & 0xff) + *piVar10);
              pLVar14 = gLawnApp;
            }
          }
          pGVar11 = (GachaConfig *)LawnApp::GetPlantTrialConfig(pLVar14);
          lVar7 = GachaConfig::GetGachaPlantRewardList(pGVar11);
          FUN_05475d88(asStack_88,lVar7 + 8);
          bVar4 = std::operator==(asStack_88,"bloomerang");
          puVar2 = gMessageRouter;
          if (bVar4) {
            Sexy::
            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                      ((ReceivedDataCallback *)in_x0,OnCursorAdded);
            local_b0 = local_80;
            uStack_a8 = uStack_78;
            local_a0 = local_70;
            MessageRouter::
            Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<PlantTrialModule,void(PlantTrialModule::*)(BaseCursor*)>>
                      ((MessageRouter *)puVar2,Message::CursorAdded,&local_b0);
            puVar2 = gMessageRouter;
            Sexy::
            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                      ((ReceivedDataCallback *)in_x0,OnCursorDestroyed);
            local_a0 = local_58;
            uStack_a8 = uStack_60;
            MessageRouter::
            Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<PlantTrialModule,void(PlantTrialModule::*)(BaseCursor*)>>
                      ((MessageRouter *)puVar2,Message::CursorDestroyed,&local_b0);
            puVar2 = gMessageRouter;
            Sexy::
            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                      ((ReceivedDataCallback *)in_x0,OnPlantPlanted);
            local_d0 = CONCAT44(uStack_4c,local_50);
            uStack_c8 = uStack_48;
            local_c0 = local_40;
            MessageRouter::
            Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantTrialModule,void(PlantTrialModule::*)(Plant*)>>
                      ((MessageRouter *)puVar2,Message::PlantPlanted,&local_d0);
            SetIntroState(in_x0,1);
          }
          std::string::~string(asStack_88);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x04967148 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantTrialModule::OnUpdate() */

void PlantTrialModule::OnUpdate(void)

{
  RtMixedPtrBase *this;
  int iVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  PlantTrialConfig *pPVar8;
  undefined8 uVar9;
  int *piVar10;
  GachaConfig *pGVar11;
  UIWidget *this_00;
  SeedPacket *this_01;
  string *psVar12;
  CrazyNPCManager *pCVar13;
  PlantTrialModule *in_x0;
  LawnApp *pLVar14;
  Board *pBVar15;
  float fVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  float fVar19;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  int iStack_8c;
  string asStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  Delegate0 aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar3 = IsTrialEnabled();
  if (cVar3 != '\0') {
    cVar3 = CanStartNarrationActive(in_x0);
    if (cVar3 != '\0') {
      (**(code **)(**(long **)(gLawnApp + 0x9f0) + 0x268))(*(long **)(gLawnApp + 0x9f0));
      SetAppendObjPause(in_x0,true);
      pLVar14 = gLawnApp;
      pGVar11 = (GachaConfig *)LawnApp::GetPlantTrialConfig(gLawnApp);
      psVar12 = (string *)GachaConfig::GetGachaPlantRewardList(pGVar11);
      pCVar13 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(pLVar14);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)in_x0,onNarrationFinished);
      Sexy::Delegate0::Delegate0<PlantTrialModule,void(PlantTrialModule::*)()>
                (aDStack_38,(RtWeakPtr<Sexy::ResourceInfo> *)&iStack_50);
      std::string::string((string *)&fStack_68,"");
      CrazyNPCManager::StartNarrativeID(pCVar13,psVar12 + 0x20,aDStack_38,(string *)&fStack_68);
      std::string::~string((string *)&fStack_68);
      nop();
      Sexy::Point::Point((Point *)&uStack_80,8,2);
      bVar4 = std::operator==(psVar12,"pirate7");
      if (bVar4) {
        Sexy::Point::Point((Point *)&iStack_50,8,1);
        uStack_80 = CONCAT44(uStack_4c,iStack_50);
      }
      pBVar15 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05475d88((string *)&fStack_68,psVar12 + 0x10);
      Board::AddZombie(pBVar15,(string *)&fStack_68,1,uStack_80 & 0xffffffff,uStack_80._4_4_);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(in_x0 + 0x30),(RtWeakPtrBase *)&iStack_50)
      ;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&iStack_50);
      std::string::~string((string *)&fStack_68);
      ControlShowZombie(in_x0,true);
      MakeGridItemTargetable(in_x0,false);
      SeedPacketGenerator(in_x0);
    }
    cVar3 = CanSeedPacketVisibleEnable(in_x0);
    if (cVar3 != '\0') {
      this_00 = (UIWidget *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x28));
      UIWidget::SetVisible(this_00,true);
      this_01 = (SeedPacket *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x28));
      SeedPacket::ShowBoarderEffect(this_01,true);
    }
    if (in_x0[0x1d] != (PlantTrialModule)0x0) {
      this = (RtMixedPtrBase *)(in_x0 + 0x28);
      cVar3 = Sexy::RtMixedPtrBase::IsValid(this);
      if (cVar3 != '\0') {
        fVar19 = *(float *)(in_x0 + 0x50) + 3.0;
        fVar16 = (float)PVZ_T();
        if (fVar16 < fVar19) {
          ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                    ((ResistenceValueInfo *)&fStack_68);
          iStack_50 = GetDesPacketPos();
          uVar17 = PVZ_T();
          auVar18 = FUN_049645b4(0x43910000);
          uStack_80._0_4_ = auVar18._0_4_;
          fStack_68 = CurveLerp<float>(auVar18,fVar19,uVar17,&uStack_80,&iStack_50,3);
          uVar17 = PVZ_T();
          auVar18 = FUN_049645b4(0x41f00000);
          uStack_80 = CONCAT44(uStack_80._4_4_,auVar18._0_4_);
          fStack_64 = CurveLerp<float>(auVar18,fVar19,uVar17,&uStack_80,&uStack_4c,3);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          UIWidget::SetPositionOffset(fStack_68,fStack_64);
        }
        else {
          uVar17 = PVZ_EOT();
          in_x0[0x1d] = (PlantTrialModule)0x0;
          *(undefined4 *)(in_x0 + 0x50) = uVar17;
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          FUN_049641c4(lVar7 + 0x81,lVar7 + 0x82,0);
          pLVar14 = gLawnApp;
          pPVar8 = (PlantTrialConfig *)LawnApp::GetPlantTrialConfig(gLawnApp);
          uVar9 = Board::GetLevel(*(Board **)(pLVar14 + 0x9f0));
          FUN_05475d88((string *)&iStack_50,uVar9);
          lVar7 = PlantTrialConfig::GetTrialDataByLevelName(pPVar8,(string *)&iStack_50);
          iVar1 = *(int *)(lVar7 + 0x5c);
          iStack_8c = iVar1;
          std::string::~string((string *)&iStack_50);
          pLVar14 = gLawnApp;
          if (0 < iVar1) {
            pBVar15 = *(Board **)(gLawnApp + 0x9f0);
            uVar5 = Board::GetPlantfoodMax(pBVar15);
            uVar6 = Board::GetPlantfoodCount(pBVar15);
            iStack_50 = (uVar5 & 0xff) - (uVar6 & 0xff);
            if (0 < iStack_50) {
              uVar5 = Board::GetPlantfoodCount(pBVar15);
              piVar10 = eastl::min_alt<int>(&iStack_8c,&iStack_50);
              Board::SetPlantfoodCount(pBVar15,(uVar5 & 0xff) + *piVar10);
              pLVar14 = gLawnApp;
            }
          }
          pGVar11 = (GachaConfig *)LawnApp::GetPlantTrialConfig(pLVar14);
          lVar7 = GachaConfig::GetGachaPlantRewardList(pGVar11);
          FUN_05475d88(asStack_88,lVar7 + 8);
          bVar4 = std::operator==(asStack_88,"bloomerang");
          puVar2 = gMessageRouter;
          if (bVar4) {
            Sexy::
            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                      ((ReceivedDataCallback *)in_x0,OnCursorAdded);
            uStack_b0 = uStack_80;
            uStack_a8 = uStack_78;
            uStack_a0 = uStack_70;
            MessageRouter::
            Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<PlantTrialModule,void(PlantTrialModule::*)(BaseCursor*)>>
                      ((MessageRouter *)puVar2,Message::CursorAdded,&uStack_b0);
            puVar2 = gMessageRouter;
            Sexy::
            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                      ((ReceivedDataCallback *)in_x0,OnCursorDestroyed);
            uStack_a0 = uStack_58;
            uStack_a8 = uStack_60;
            MessageRouter::
            Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<PlantTrialModule,void(PlantTrialModule::*)(BaseCursor*)>>
                      ((MessageRouter *)puVar2,Message::CursorDestroyed,&uStack_b0);
            puVar2 = gMessageRouter;
            Sexy::
            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                      ((ReceivedDataCallback *)in_x0,OnPlantPlanted);
            uStack_d0 = CONCAT44(uStack_4c,iStack_50);
            uStack_c8 = uStack_48;
            uStack_c0 = uStack_40;
            MessageRouter::
            Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantTrialModule,void(PlantTrialModule::*)(Plant*)>>
                      ((MessageRouter *)puVar2,Message::PlantPlanted,&uStack_d0);
            SetIntroState(in_x0,1);
          }
          std::string::~string(asStack_88);
        }
      }
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialModule::registerForEvents() */

void __thiscall PlantTrialModule::registerForEvents(PlantTrialModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate1<RenderQueue*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,AddToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::Delegate1<PlantTrialModule,void(PlantTrialModule::*)(RenderQueue*)>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnUpdate);
  Sexy::Delegate0::Delegate0<PlantTrialModule,void(PlantTrialModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWaveStarted);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<PlantTrialModule,void(PlantTrialModule::*)(int)>>
            ((MessageRouter *)puVar1,Message::WavesNotify,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNpcDraw);
  local_b0 = local_50;
  uStack_a8 = uStack_48;
  local_a0 = local_40;
  MessageRouter::
  Subscribe<Sexy::Graphics*,Sexy::CBMemberTranslatorX<PlantTrialModule,void(PlantTrialModule::*)(Sexy::Graphics*)>>
            ((MessageRouter *)puVar1,Message::NPCDrawed,&local_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

