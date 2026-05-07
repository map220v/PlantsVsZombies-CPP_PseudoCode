// Class: PneumaticSeedBank


/* PneumaticSeedBank::IsInitialized() const */

bool __thiscall PneumaticSeedBank::IsInitialized(PneumaticSeedBank *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = UIWidget::getWidgetStateSerialization((UIWidget *)this);
  bVar1 = false;
  if (iVar2 != 0) {
    iVar2 = UIWidget::getWidgetStateSerialization((UIWidget *)this);
    bVar1 = iVar2 != 1;
  }
  return bVar1;
}


/* PneumaticSeedBank::cancelEffectCompletion(StandaloneEffect*) */

void __thiscall
PneumaticSeedBank::cancelEffectCompletion(PneumaticSeedBank *this,StandaloneEffect *param_1)

{
  StandaloneEffect::CancelCompletion(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PneumaticSeedBank::StaticClassInit() */

void PneumaticSeedBank::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PneumaticPlantEntry");
    (*pcVar3)(plVar2,asStack_10,FUN_042f1154,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PacketInterpolation");
    (*pcVar3)(plVar2,asStack_10,FUN_042f3b48,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PneumaticSeedBank");
    (*pcVar3)(plVar2,asStack_10,FUN_042f3e58,0x280,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PneumaticSeedBank::StaticGetClass() */

long * PneumaticSeedBank::StaticGetClass(void)

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
  uVar2 = SeedBankNew::StaticGetClass();
  (*pcVar3)(plVar1,"PneumaticSeedBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PneumaticSeedBank::GetClass() const */

long * PneumaticSeedBank::GetClass(void)

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
  uVar2 = SeedBankNew::StaticGetClass();
  (*pcVar3)(plVar1,"PneumaticSeedBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PneumaticSeedBank::onLevelStart() */

void __thiscall PneumaticSeedBank::onLevelStart(PneumaticSeedBank *this)

{
  (**(code **)(*(long *)this + 0xe8))(this,2);
  return;
}


/* PneumaticSeedBank::SetPause(bool) */

void __thiscall PneumaticSeedBank::SetPause(PneumaticSeedBank *this,bool param_1)

{
  this[600] = (PneumaticSeedBank)param_1;
  return;
}


/* PneumaticSeedBank::onLevelRewardDropped() */

void __thiscall PneumaticSeedBank::onLevelRewardDropped(PneumaticSeedBank *this)

{
  SetPause(this,true);
  return;
}


/* PneumaticSeedBank::SetSeedTimer(float) */

void __thiscall PneumaticSeedBank::SetSeedTimer(PneumaticSeedBank *this,float param_1)

{
  *(float *)(this + 0x1ec) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PneumaticSeedBank::onDrawBack(Sexy::Graphics*) */

void __thiscall PneumaticSeedBank::onDrawBack(PneumaticSeedBank *this,Graphics *param_1)

{
  StandaloneEffect *this_00;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  this_00 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x240));
  StandaloneEffect::Draw(this_00,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PneumaticSeedBank::onDrawValve(Sexy::Graphics*) */

void __thiscall PneumaticSeedBank::onDrawValve(PneumaticSeedBank *this,Graphics *param_1)

{
  StandaloneEffect *this_00;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  this_00 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
  StandaloneEffect::Draw(this_00,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PneumaticSeedBank::onDrawFront(Sexy::Graphics*) */

void __thiscall PneumaticSeedBank::onDrawFront(PneumaticSeedBank *this,Graphics *param_1)

{
  StandaloneEffect *this_00;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  this_00 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x238));
  StandaloneEffect::Draw(this_00,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PneumaticSeedBank::spawnSeedPacket(std::string const&) */

void __thiscall PneumaticSeedBank::spawnSeedPacket(PneumaticSeedBank *this,string *param_1)

{
  char cVar1;
  Effect_PopAnim *pEVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_042f0e70(this[0x199]);
  if (cVar1 < '\a') {
    thunk_FUN_05475e00(this + 0x250,param_1);
    pEVar2 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
    std::string::string(asStack_10,"animation4");
    Effect_PopAnim::PlaySingleAnimation(pEVar2,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PneumaticSeedBank::ForceSpawn(std::string const&) */

void __thiscall PneumaticSeedBank::ForceSpawn(PneumaticSeedBank *this,string *param_1)

{
  char cVar1;
  Effect_PopAnim *pEVar2;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar1 = FUN_042f0e70(this[0x199]);
  if (cVar1 < '\a') {
    thunk_FUN_05475e00(this + 0x250,param_1);
    pEVar2 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
    std::string::string(asStack_10,"animation4");
    Effect_PopAnim::PlaySingleAnimation(pEVar2,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PneumaticSeedBank::onSeedPacketPlanted(SeedPacket*) */

void __thiscall PneumaticSeedBank::onSeedPacketPlanted(PneumaticSeedBank *this,SeedPacket *param_1)

{
  int iVar1;
  char cVar2;
  UIWidget *this_00;
  long *plVar3;
  int iVar4;
  code *pcVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (SeedPacket *)0x0) {
    iVar4 = 0;
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar2 = FUN_042f0e70(this[0x199]);
    iVar1 = (int)cVar2;
    if (0 < iVar1) {
      do {
        UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar4);
        cVar2 = Sexy::RtWeakPtrBase::operator==
                          ((RtWeakPtrBase *)aRStack_10,(RtWeakPtrBase *)aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        if (cVar2 != '\0') {
          if (iVar4 == iVar1 + -1) {
            UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar4);
            plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
            pcVar5 = *(code **)(*plVar3 + 0x198);
            std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
            _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10)
            ;
            (*pcVar5)(plVar3,aRStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
          }
          else {
            this_00 = (UIWidget *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
            UIWidget::DetachFromParent(this_00);
          }
          plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
          (**(code **)(*plVar3 + 0x48))();
          (**(code **)(*(long *)this + 0x1c0))(this,iVar1 + -1,0);
          break;
        }
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PneumaticSeedBank::getCountOfTypeSpawned(std::string const&) */

void __thiscall PneumaticSeedBank::getCountOfTypeSpawned(PneumaticSeedBank *this,string *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  PVPManager *this_00;
  string *psVar4;
  int iVar5;
  int iVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_042f0e70(this[0x199]);
  if (cVar2 < 1) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    iVar5 = 0;
    do {
      iVar1 = iVar5 + 1;
      UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar5);
      this_00 = (PVPManager *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      psVar4 = (string *)PVPManager::GetPVPMapDataList(this_00);
      cVar3 = std::operator==(psVar4,param_1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if (cVar3 != '\0') {
        iVar6 = iVar6 + 1;
      }
      iVar5 = iVar1;
    } while (cVar2 != iVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PneumaticSeedBank::addSeed(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall PneumaticSeedBank::addSeed(PneumaticSeedBank *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  long *plVar2;
  SeedPacket *this_00;
  UIWidget *this_01;
  undefined8 uVar3;
  code *pcVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_042f0e70(this[0x199]);
  (**(code **)(*(long *)this + 0x1c0))(this,cVar1 + 1,0);
  UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,(int)cVar1);
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  pcVar4 = *(code **)(*plVar2 + 0x198);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_10,param_2);
  (*pcVar4)(plVar2,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  this_00 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  SeedPacket::SetAlwaysPlantable(this_00,true);
  this_01 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  UIWidget::SetParentWidget(this_01,(UIWidget *)this);
  uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,(float)*(int *)(gLawnApp + 0xd8));
  UIWidget::SetPositionOffset(local_10,local_c,uVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PneumaticSeedBank::onLevelEnd() */

void __thiscall PneumaticSeedBank::onLevelEnd(PneumaticSeedBank *this)

{
  bool bVar1;
  long *plVar2;
  
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x238));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x238));
    (**(code **)(*plVar2 + 0x48))();
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x240));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x240));
    (**(code **)(*plVar2 + 0x48))();
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x248));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
    (**(code **)(*plVar2 + 0x48))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PneumaticSeedBank::addTool(std::string const&) */

void __thiscall PneumaticSeedBank::addTool(PneumaticSeedBank *this,string *param_1)

{
  char cVar1;
  long *extraout_x0;
  SeedPacket *this_00;
  UIWidget *this_01;
  undefined8 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_042f0e70(this[0x199]);
  Sexy::RtName::RtName((RtName *)&local_18,L"UISeedBankToolPacket");
  UIWidget::CreateWidget((RtName *)&local_18,1);
  Sexy::RtName::~RtName((RtName *)&local_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
  SeedBankNew::addPacket((SeedBankNew *)this,(RtName *)&local_18,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,(int)cVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  nop();
  (**(code **)(*extraout_x0 + 0x230))();
  this_00 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  SeedPacket::SetAlwaysPlantable(this_00,true);
  this_01 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  UIWidget::SetParentWidget(this_01,(UIWidget *)this);
  uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,0.0,(float)*(int *)(gLawnApp + 0xd8));
  UIWidget::SetPositionOffset(local_18,local_14,uVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PneumaticSeedBank::addPowerup(std::string const&) */

void __thiscall PneumaticSeedBank::addPowerup(PneumaticSeedBank *this,string *param_1)

{
  char cVar1;
  SeedPacket_Powerup *this_00;
  SeedPacket *this_01;
  UIWidget *this_02;
  undefined8 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_042f0e70(this[0x199]);
  Sexy::RtName::RtName((RtName *)&local_18,L"UISeedBankPowerupPacket");
  UIWidget::CreateWidget((RtName *)&local_18,1);
  Sexy::RtName::~RtName((RtName *)&local_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
  SeedBankNew::addPacket((SeedBankNew *)this,(RtName *)&local_18,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,(int)cVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  nop();
  SeedPacket_Powerup::SetPowerupType(this_00,param_1);
  this_01 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  SeedPacket::SetAlwaysPlantable(this_01,true);
  this_02 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  UIWidget::SetParentWidget(this_02,(UIWidget *)this);
  uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,0.0,(float)*(int *)(gLawnApp + 0xd8));
  UIWidget::SetPositionOffset(local_18,local_14,uVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PneumaticSeedBank::resetSeedTimer() */

void __thiscall PneumaticSeedBank::resetSeedTimer(PneumaticSeedBank *this)

{
  long lVar1;
  int iVar2;
  char cVar3;
  long extraout_x0;
  long lVar4;
  int *piVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
  nop();
  uVar8 = *(undefined8 *)(extraout_x0 + 0xf0);
  lVar4 = FUN_042f1058(uVar8,*(undefined8 *)(extraout_x0 + 0xf8));
  if (lVar4 != 0) {
    fVar10 = 10.0;
    iVar7 = -1;
    cVar3 = FUN_042f0e70(this[0x199]);
    lVar6 = 0;
    do {
      lVar1 = lVar6 + 1;
      piVar5 = (int *)FUN_042f1080(uVar8,lVar6);
      iVar2 = *piVar5;
      if ((iVar7 < iVar2) && (iVar2 <= cVar3)) {
        fVar10 = (float)piVar5[1];
        iVar7 = iVar2;
      }
      lVar6 = lVar1;
    } while (lVar1 != lVar4);
    fVar9 = (float)PVZ_T();
    *(float *)(this + 0x1ec) = fVar9 + fVar10;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PneumaticSeedBank::onEnterState_Ready(WidgetState) */

void PneumaticSeedBank::onEnterState_Ready(long param_1)

{
  long extraout_x0;
  Effect_PopAnim *pEVar1;
  undefined4 uVar2;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x1a0));
  nop();
  if (*(char *)(extraout_x0 + 0xd0) == '\0') {
    fVar3 = (float)PVZ_T();
    *(float *)(param_1 + 0x1ec) = fVar3 + 1.0;
  }
  else {
    uVar2 = PVZ_EOT();
    *(undefined4 *)(param_1 + 0x1ec) = uVar2;
  }
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x238));
  std::string::string(asStack_10,"animation");
  Effect_PopAnim::PlaySingleAnimation(pEVar1,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x240));
  std::string::string(asStack_10,"animation3");
  Effect_PopAnim::PlaySingleAnimation(pEVar1,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x248));
  std::string::string(asStack_10,"animation2");
  Effect_PopAnim::PlaySingleAnimation(pEVar1,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PneumaticSeedBank::InitializePacketTimers() */

void __thiscall PneumaticSeedBank::InitializePacketTimers(PneumaticSeedBank *this)

{
  char cVar1;
  ResourceInfo *this_00;
  int iVar2;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SeedBankNew::SetPacketsOnDisplay((SeedBankNew *)this,false);
  for (iVar2 = 0; cVar1 = FUN_042f0e70(this[0x199]), iVar2 < cVar1; iVar2 = iVar2 + 1) {
    UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar2);
    this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    FishingEnergyBar::onGameUnpaused((FishingEnergyBar *)this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PneumaticSeedBank::onPowerupDeactivated(BasePowerup*) */

void __thiscall
PneumaticSeedBank::onPowerupDeactivated(PneumaticSeedBank *this,BasePowerup *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  RtObject *this_00;
  SeedPacket_Powerup *this_01;
  string *psVar5;
  int iVar6;
  code *pcVar7;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = BasePowerup::GetType(param_1);
  FUN_05475d88(asStack_20,lVar4 + 8);
  cVar2 = FUN_042f0e70(this[0x199]);
  iVar1 = (int)cVar2;
  if (0 < iVar1) {
    iVar6 = 0;
    do {
      UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar6);
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
      if (bVar3) {
        UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar6);
        this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        this_01 = Sexy::RtObject::Cast<SeedPacket_Powerup>(this_00);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        if (this_01 != (SeedPacket_Powerup *)0x0) {
          psVar5 = (string *)PVPManager::GetPVPMapDataList((PVPManager *)this_01);
          cVar2 = std::operator==(psVar5,asStack_20);
          if ((cVar2 != '\0') && (cVar2 = FUN_042f0e74(this_01[0x200]), cVar2 != '\0')) {
            if (iVar6 == iVar1 + -1) {
              pcVar7 = *(code **)(*(long *)this_01 + 0x198);
              std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
              _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                         aRStack_10);
              (*pcVar7)(this_01,aRStack_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
            }
            else {
              UIWidget::DetachFromParent((UIWidget *)this_01);
            }
            (**(code **)(*(long *)this_01 + 0x48))(this_01);
            (**(code **)(*(long *)this + 0x1c0))(this,iVar1 + -1,0);
            break;
          }
        }
      }
      else {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      }
      iVar6 = iVar6 + 1;
    } while (iVar1 != iVar6);
  }
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PneumaticSeedBank::registerForEvents() */

void __thiscall PneumaticSeedBank::registerForEvents(PneumaticSeedBank *this)

{
  undefined *puVar1;
  char cVar2;
  UIWidget *this_00;
  TimeChallengeEndLevelUI *this_01;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  CBMemberTranslatorX aCStack_98 [24];
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
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1e0);
  local_c0 = local_80;
  uStack_b8 = uStack_78;
  local_b0 = local_70;
  MessageRouter::
  Subscribe<int,WaveDefinition_const*,Sexy::CBMemberTranslatorX<PneumaticSeedBank,void(PneumaticSeedBank::*)(int,WaveDefinition_const*)>>
            ((MessageRouter *)puVar1,Message::NewWaveStarting,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelStart);
  Sexy::Delegate0::Delegate0<PneumaticSeedBank,void(PneumaticSeedBank::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelStarting,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelEnd);
  Sexy::Delegate0::Delegate0<PneumaticSeedBank,void(PneumaticSeedBank::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::MissionFinish,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1e8);
  local_d0 = local_58;
  local_e0 = local_68;
  uStack_d8 = uStack_60;
  MessageRouter::
  Subscribe<SeedPacket*,Sexy::CBMemberTranslatorX<PneumaticSeedBank,void(PneumaticSeedBank::*)(SeedPacket*)>>
            ((MessageRouter *)puVar1,Message::SeedPacketPlanted,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPowerupDeactivated);
  local_100 = local_50;
  uStack_f8 = uStack_48;
  local_f0 = local_40;
  MessageRouter::
  Subscribe<BasePowerup*,Sexy::CBMemberTranslatorX<PneumaticSeedBank,void(PneumaticSeedBank::*)(BasePowerup*)>>
            ((MessageRouter *)puVar1,Message::PowerupDeactivated,&local_100);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelRewardDropped);
  Sexy::Delegate0::Delegate0<PneumaticSeedBank,void(PneumaticSeedBank::*)()>(aDStack_38,aCStack_98);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelRewardDropped,aDStack_38);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x248));
  if (cVar2 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
    nop();
    this_01 = (TimeChallengeEndLevelUI *)UIWidget::GetAtlasImage(this_00);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onValveCommand);
    Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
    Delegate4<PneumaticSeedBank,void(PneumaticSeedBank::*)(std::string_const&,float,std::string_const&,std::string_const&)>
              ((Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *)
               aDStack_38,aCStack_98);
    TimeChallengeEndLevelUI::SetContinueCallBack(this_01,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PneumaticSeedBank::updateState_Initializing() */

void __thiscall PneumaticSeedBank::updateState_Initializing(PneumaticSeedBank *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_01;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_02;
  Effect_PopAnim *pEVar1;
  PopAnim *pPVar2;
  StandaloneEffect *pSVar3;
  UIWidget *this_03;
  TimeChallengeEndLevelUI *this_04;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x238);
  this_01 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x240);
  local_8 = ___stack_chk_guard;
  this_02 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x248);
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  pPVar2 = CachedUIResourcePtr::operator_cast_to_PopAnim_((CachedUIResourcePtr *)&DAT_06af8090);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,pPVar2,(RtClass *)0x0);
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::FastCurve::SetOutRange((FastCurve *)aRStack_68,0.0,0.0);
  StandaloneEffect::SetScreenSpaceOrigin(pSVar3,(SexyVector2 *)aRStack_68,800000);
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string((string *)aRStack_68,"cancelEffectCompletion");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,aRStack_70,
             aRStack_68);
  StandaloneEffect::SetCompletionCallback(pSVar3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_68);
  nop();
  Sexy::RtId::~RtId(aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetManuallyDrawn(pSVar3,true);
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_01,(RtWeakPtrBase *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  pPVar2 = CachedUIResourcePtr::operator_cast_to_PopAnim_((CachedUIResourcePtr *)&DAT_06af8090);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,pPVar2,(RtClass *)0x0);
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  Sexy::FastCurve::SetOutRange((FastCurve *)aRStack_68,0.0,0.0);
  StandaloneEffect::SetScreenSpaceOrigin(pSVar3,(SexyVector2 *)aRStack_68,200000);
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string((string *)aRStack_68,"cancelEffectCompletion");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,aRStack_70,
             aRStack_68);
  StandaloneEffect::SetCompletionCallback(pSVar3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_68);
  nop();
  Sexy::RtId::~RtId(aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  StandaloneEffect::SetManuallyDrawn(pSVar3,true);
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_02,(RtWeakPtrBase *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
  pPVar2 = CachedUIResourcePtr::operator_cast_to_PopAnim_((CachedUIResourcePtr *)&DAT_06af8090);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,pPVar2,(RtClass *)0x0);
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
  Sexy::FastCurve::SetOutRange((FastCurve *)aRStack_68,0.0,0.0);
  StandaloneEffect::SetScreenSpaceOrigin(pSVar3,(SexyVector2 *)aRStack_68,700000);
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string((string *)aRStack_68,"cancelEffectCompletion");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,aRStack_70,
             aRStack_68);
  StandaloneEffect::SetCompletionCallback(pSVar3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_68);
  nop();
  Sexy::RtId::~RtId(aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
  StandaloneEffect::SetManuallyDrawn(pSVar3,true);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
  nop();
  this_04 = (TimeChallengeEndLevelUI *)UIWidget::GetAtlasImage(this_03);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onValveCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<PneumaticSeedBank,void(PneumaticSeedBank::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            ((Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *)aRStack_50
             ,aRStack_68);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_04,aRStack_50);
  (**(code **)(*(long *)this + 0x1c0))(this,0,1);
  (**(code **)(*(long *)this + 0xe8))(this,3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PneumaticSeedBank::~PneumaticSeedBank() */

void __thiscall PneumaticSeedBank::~PneumaticSeedBank(PneumaticSeedBank *this)

{
  *(undefined ***)this = &PTR_GetClass_06831340;
  *(undefined ***)(this + 0x10) = &PTR__PneumaticSeedBank_06831548;
  TimeLineTrack<float>::~TimeLineTrack((TimeLineTrack<float> *)(this + 0x260));
  std::string::~string((string *)(this + 0x250));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x240));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x238));
  std::vector<PacketInterpolation,std::allocator<PacketInterpolation>>::~vector
            ((vector<PacketInterpolation,std::allocator<PacketInterpolation>> *)(this + 0x220));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x208));
  std::vector<PneumaticPlantEntry,std::allocator<PneumaticPlantEntry>>::~vector
            ((vector<PneumaticPlantEntry,std::allocator<PneumaticPlantEntry>> *)(this + 0x1f0));
  SeedBankNew::~SeedBankNew((SeedBankNew *)this);
  return;
}


/* non-virtual thunk to PneumaticSeedBank::~PneumaticSeedBank() */

void __thiscall PneumaticSeedBank::~PneumaticSeedBank(PneumaticSeedBank *this)

{
  ~PneumaticSeedBank(this + -0x10);
  return;
}


/* PneumaticSeedBank::~PneumaticSeedBank() */

void __thiscall PneumaticSeedBank::~PneumaticSeedBank(PneumaticSeedBank *this)

{
  ~PneumaticSeedBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PneumaticSeedBank::~PneumaticSeedBank() */

void __thiscall PneumaticSeedBank::~PneumaticSeedBank(PneumaticSeedBank *this)

{
  ~PneumaticSeedBank(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PneumaticSeedBank::RemoveSeedFromSeedPool(std::string const&) */

void __thiscall PneumaticSeedBank::RemoveSeedFromSeedPool(PneumaticSeedBank *this,string *param_1)

{
  char cVar1;
  long lVar2;
  string *psVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar5 = *(undefined8 *)(this + 0x1f0);
  lVar4 = 0;
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_042f1020(uVar5,*(undefined8 *)(this + 0x1f8));
  do {
    if (lVar4 == lVar2) {
LAB_042f4f48:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    psVar3 = (string *)FUN_042f1048(uVar5,lVar4);
    cVar1 = std::operator==(psVar3,param_1);
    if (cVar1 != '\0') {
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x1f0));
      local_18 = __gnu_cxx::
                 __normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                 ::operator+((__normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                              *)&local_20,lVar4);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<PneumaticPlantEntry,std::allocator<PneumaticPlantEntry>>::erase
                ((vector<PneumaticPlantEntry,std::allocator<PneumaticPlantEntry>> *)(this + 0x1f0),
                 local_10);
      goto LAB_042f4f48;
    }
    lVar4 = lVar4 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PneumaticSeedBank::addItem(std::string const&) */

void __thiscall PneumaticSeedBank::addItem(PneumaticSeedBank *this,string *param_1)

{
  int iVar1;
  char *__s1;
  string *psVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s1 = (char *)FUN_0547429c(param_1);
  iVar1 = strncasecmp(__s1,"tool_",5);
  if (iVar1 == 0) {
    addTool(this,param_1);
  }
  else {
    iVar1 = strncasecmp(__s1,"powerup",7);
    if (iVar1 == 0) {
      addPowerup(this,param_1);
    }
    else {
      psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      addSeed(this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PneumaticSeedBank::onValveCommand(std::string const&, float, std::string const&, std::string
   const&) */

void PneumaticSeedBank::onValveCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"launch");
  if (!bVar1) {
    return;
  }
  addItem((PneumaticSeedBank *)param_1,param_1 + 0x250);
  std::string::append(param_1 + 0x250,"",(size_t)param_4);
  return;
}


/* PneumaticSeedBank::AddSeedToSeedPool(PneumaticPlantEntry const&) */

void __thiscall
PneumaticSeedBank::AddSeedToSeedPool(PneumaticSeedBank *this,PneumaticPlantEntry *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  long lVar6;
  string *psVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(this + 0x1f0);
  lVar6 = FUN_042f1020(uVar9,*(undefined8 *)(this + 0x1f8));
  lVar8 = 0;
  do {
    if (lVar8 == lVar6) {
      std::vector<PneumaticPlantEntry,std::allocator<PneumaticPlantEntry>>::push_back
                ((vector<PneumaticPlantEntry,std::allocator<PneumaticPlantEntry>> *)(this + 0x1f0),
                 param_1);
      return;
    }
    psVar7 = (string *)FUN_042f1048(uVar9,lVar8);
    cVar5 = std::operator==(psVar7,(string *)param_1);
    lVar8 = lVar8 + 1;
  } while (cVar5 == '\0');
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(psVar7 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(psVar7 + 8) = uVar2;
  *(undefined4 *)(psVar7 + 0xc) = uVar4;
  *(undefined4 *)(psVar7 + 0x10) = uVar1;
  *(undefined4 *)(psVar7 + 0x18) = uVar3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PneumaticSeedBank::onNewWave(int, WaveDefinition const*) */

void __thiscall
PneumaticSeedBank::onNewWave(PneumaticSeedBank *this,int param_1,WaveDefinition *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 local_38;
  undefined8 local_30;
  PneumaticPlantEntry aPStack_28 [8];
  undefined4 local_20;
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != (WaveDefinition *)0x0) {
    local_38 = FUN_042f2dbc(*(undefined8 *)(param_2 + 0x80),param_1);
    local_30 = FUN_042f2e0c(*(undefined8 *)(param_2 + 0x88));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1)
    {
      puVar2 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38)
      ;
      PneumaticPlantEntry::PneumaticPlantEntry(aPStack_28);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(puVar2 + 6));
      thunk_FUN_05475e00(aPStack_28,lVar3 + 8);
      local_20 = *puVar2;
      local_14 = puVar2[1];
      AddSeedToSeedPool(this,aPStack_28);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aPStack_28);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_38);
    }
    local_38 = FUN_042f2dbc(*(undefined8 *)(param_2 + 0x98));
    local_30 = FUN_042f2e0c(*(undefined8 *)(param_2 + 0xa0));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1)
    {
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 0x18));
      FUN_05475d88((string *)aPStack_28,lVar3 + 8);
      RemoveSeedFromSeedPool(this,(string *)aPStack_28);
      std::string::~string((string *)aPStack_28);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PneumaticSeedBank::PneumaticSeedBank() */

void __thiscall PneumaticSeedBank::PneumaticSeedBank(PneumaticSeedBank *this)

{
  PlantWarsStarRewardData *this_00;
  undefined4 uVar1;
  undefined4 local_c;
  long local_8;
  
  this_00 = (PlantWarsStarRewardData *)(this + 0x260);
  local_8 = ___stack_chk_guard;
  SeedBankNew::SeedBankNew((SeedBankNew *)this);
  *(undefined ***)this = &PTR_GetClass_06831340;
  *(undefined ***)(this + 0x10) = &PTR__PneumaticSeedBank_06831548;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ec) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x208));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x220));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x238));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x240));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x248));
  Set8BytesTo0(this + 0x250);
  this[600] = (PneumaticSeedBank)0x0;
  PlantWarsStarRewardData::PlantWarsStarRewardData(this_00);
  local_c = 0;
  *(undefined4 *)(this + 0x19c) = 2;
  TimeLineTrack<float>::AddKeyFrame((TimeLineTrack<float> *)0x0,this_00,&local_c,5);
  local_c = FUN_042f1be4(0x41200000);
  TimeLineTrack<float>::AddKeyFrame((TimeLineTrack<float> *)0x3e4ccccd,this_00,&local_c,5);
  local_c = 0;
  TimeLineTrack<float>::AddKeyFrame((TimeLineTrack<float> *)0x3ecccccd,this_00,&local_c,5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PneumaticSeedBank::StaticNew() */

PneumaticSeedBank * PneumaticSeedBank::StaticNew(void)

{
  PneumaticSeedBank *this;
  
  this = ::operator_new(0x280);
  PneumaticSeedBank(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PneumaticSeedBank::pickSeed() */

void __thiscall PneumaticSeedBank::pickSeed(PneumaticSeedBank *this)

{
  long lVar1;
  vector<int,std::allocator<int>> *this_00;
  int iVar2;
  int iVar3;
  long lVar4;
  string *psVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  uVar12 = 0;
  local_8 = ___stack_chk_guard;
  MessageRouter::Post((_func_void *)gMessageRouter);
  iVar11 = 0;
  local_4c = -1;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  uVar13 = *(undefined8 *)(this + 0x1f0);
  lVar4 = FUN_042f1020(uVar13,*(undefined8 *)(this + 0x1f8));
  if (lVar4 != 0) {
    do {
      psVar5 = (string *)FUN_042f1048(uVar13,uVar12);
      iVar10 = *(int *)(psVar5 + 8);
      if ((0 < *(int *)(psVar5 + 0x14)) || (0 < *(int *)(psVar5 + 0xc))) {
        iVar2 = getCountOfTypeSpawned(this,psVar5);
        psVar5 = (string *)FUN_042f1048(*(undefined8 *)(this + 0x1f0),uVar12);
        iVar3 = Board::GetPlantedPacketCount(*(Board **)(gLawnApp + 0x9f0),psVar5);
        uVar13 = *(undefined8 *)(this + 0x1f0);
        lVar4 = FUN_042f1048(uVar13,uVar12);
        if ((*(int *)(lVar4 + 0x14) <= iVar2 + iVar3) && (0 < *(int *)(lVar4 + 0x14))) {
          iVar10 = (int)((float)iVar10 * *(float *)(lVar4 + 0x18));
        }
        if (iVar2 + iVar3 < *(int *)(lVar4 + 0xc)) {
          iVar10 = (int)((float)iVar10 * *(float *)(lVar4 + 0x10));
        }
      }
      uVar9 = *(undefined8 *)(this + 0x208);
      iVar2 = 0;
      lVar6 = FUN_042f0e7c(uVar9,*(undefined8 *)(this + 0x210));
      lVar4 = 0;
      while (lVar4 != lVar6) {
        lVar1 = lVar4 + 1;
        piVar7 = (int *)FUN_042f1050(uVar9,lVar4);
        lVar4 = lVar1;
        if (iVar11 == *piVar7) {
          iVar2 = iVar2 + 1;
        }
      }
      iVar10 = (int)((float)iVar10 / ((float)iVar2 * 2.0 + 1.0));
      if (0 < iVar10) {
        ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aPStack_38,iVar11,iVar10);
        uVar13 = *(undefined8 *)(this + 0x1f0);
      }
      uVar12 = uVar12 + 1;
      iVar11 = (int)uVar12;
      uVar8 = FUN_042f1020(uVar13,*(undefined8 *)(this + 0x1f8));
    } while (uVar12 < uVar8);
  }
  this_00 = (vector<int,std::allocator<int>> *)(this + 0x208);
  local_4c = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)aPStack_38);
  std::vector<int,std::allocator<int>>::push_back(this_00,&local_4c);
  uVar12 = FUN_042f0e7c(*(undefined8 *)(this + 0x208),*(undefined8 *)(this + 0x210));
  if (5 < uVar12) {
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_40,(__normal_iterator *)&local_48);
    std::vector<int,std::allocator<int>>::erase(this_00,local_40);
  }
  uVar13 = FUN_042f1048(*(undefined8 *)(this + 0x1f0),(long)local_4c);
  ProbabilitySet<int>::~ProbabilitySet((ProbabilitySet<int> *)aPStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar13);
  }
  return;
}


/* PneumaticSeedBank::SpawnSeedPacket() */

void __thiscall PneumaticSeedBank::SpawnSeedPacket(PneumaticSeedBank *this)

{
  char cVar1;
  string *psVar2;
  
  cVar1 = FUN_042f0e70(this[0x199]);
  if ('\x06' < cVar1) {
    return;
  }
  psVar2 = (string *)pickSeed(this);
  spawnSeedPacket(this,psVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PneumaticSeedBank::updateState_Ready() */

void __thiscall PneumaticSeedBank::updateState_Ready(PneumaticSeedBank *this)

{
  char cVar1;
  int iVar2;
  ResourceInfo *this_00;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  RtWeakPtr aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  float local_20;
  undefined4 uStack_1c;
  RtWeakPtr<PowerPropertySheet> aRStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[600] == (PneumaticSeedBank)0x0) {
    fVar11 = (float)PVZ_T();
    if (*(float *)(this + 0x1ec) <= fVar11) {
      SpawnSeedPacket(this);
      resetSeedTimer(this);
    }
    for (iVar10 = 0; cVar1 = FUN_042f0e70(this[0x199]), iVar10 < cVar1; iVar10 = iVar10 + 1) {
      UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar10);
      this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_38);
      puVar3 = (undefined8 *)UIWidget::GetPositionOffset((UIWidget *)this_00);
      uVar8 = *(undefined8 *)(this + 0x220);
      fVar11 = *(float *)((long)puVar3 + 4);
      uVar9 = *puVar3;
      lVar4 = FUN_042f0fe4(uVar8,*(undefined8 *)(this + 0x228));
      lVar5 = 0;
      do {
        lVar7 = lVar5;
        if (lVar7 == lVar4) {
          fVar12 = (float)FUN_042f1be4(0x42480000);
          iVar2 = FUN_042f0db0(*(undefined4 *)(this_00 + 0x3c));
          fVar12 = (float)(iVar2 * iVar10) + fVar12;
          local_28 = CONCAT44(local_28._4_4_,fVar12);
          fVar13 = 1300.0;
          if (fVar11 - fVar12 < (float)iVar2) {
            fVar13 = 1300.0 - ((fVar12 - fVar11) / (float)iVar2 + 1.0) * 1200.0;
          }
          fVar13 = (float)FUN_042f1be4(fVar13);
          fVar14 = (float)PVZ_Dt();
          local_20 = fVar11 - fVar13 * fVar14;
          pfVar6 = eastl::max_alt<float>((float *)&local_28,&local_20);
          fVar13 = *pfVar6;
          if ((fVar12 == fVar13) && (fVar11 != fVar12)) {
            ZombieDance::ZombieDance((ZombieDance *)&local_20);
            local_20 = fVar13;
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_18,aRStack_38);
            local_10 = 0;
            std::vector<PacketInterpolation,std::allocator<PacketInterpolation>>::push_back
                      ((vector<PacketInterpolation,std::allocator<PacketInterpolation>> *)
                       (this + 0x220),(PacketInterpolation *)&local_20);
            WidgetImg::~WidgetImg((WidgetImg *)&local_20);
          }
          goto LAB_042f5d3c;
        }
        lVar5 = FUN_042f1014(uVar8,lVar7);
        cVar1 = Sexy::RtWeakPtrBase::operator==
                          ((RtWeakPtrBase *)(lVar5 + 8),(RtWeakPtrBase *)aRStack_38);
        lVar5 = lVar7 + 1;
      } while (cVar1 == '\0');
      fVar11 = (float)PVZ_Dt();
      pfVar6 = (float *)FUN_042f1014(*(undefined8 *)(this + 0x220),lVar7);
      fVar13 = pfVar6[4];
      fVar12 = *pfVar6;
      pfVar6[4] = fVar11 + fVar13;
      fVar13 = (float)TimeLineTrack<float>::GetValueAt
                                ((TimeLineTrack<float> *)(this + 0x260),fVar11 + fVar13);
      fVar13 = fVar13 + fVar12;
      lVar5 = FUN_042f1014(*(undefined8 *)(this + 0x220),lVar7);
      cVar1 = TimeLineTrack<float>::Finished
                        ((TimeLineTrack<float> *)(this + 0x260),*(float *)(lVar5 + 0x10));
      if (cVar1 != '\0') {
        local_30 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x220));
        local_28 = __gnu_cxx::
                   __normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
                   ::operator+((__normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
                                *)&local_30,(long)(int)lVar7);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_20,(__normal_iterator *)&local_28);
        std::vector<PacketInterpolation,std::allocator<PacketInterpolation>>::erase
                  ((vector<PacketInterpolation,std::allocator<PacketInterpolation>> *)(this + 0x220)
                   ,CONCAT44(uStack_1c,local_20));
      }
LAB_042f5d3c:
      UIWidget::SetPositionOffset((int)uVar9,fVar13,this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    }
  }
  else {
    fVar11 = (float)PVZ_EOT();
    if (*(float *)(this + 0x1ec) < fVar11) {
      fVar11 = (float)PVZ_Dt();
      *(float *)(this + 0x1ec) = *(float *)(this + 0x1ec) + fVar11;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PneumaticSeedBank::Draw(Sexy::Graphics*) */

void PneumaticSeedBank::Draw(Graphics *param_1)

{
  return;
}


/* non-virtual thunk to PneumaticSeedBank::Draw(Sexy::Graphics*) */

void __thiscall PneumaticSeedBank::Draw(PneumaticSeedBank *this,Graphics *param_1)

{
  Draw((Graphics *)(this + -0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PneumaticSeedBank::SetSeedBankProperties(Sexy::RtWeakPtr<SeedBankProperties const>) */

void __thiscall
PneumaticSeedBank::SetSeedBankProperties(PneumaticSeedBank *this,RtWeakPtrBase *param_2)

{
  long extraout_x0;
  PneumaticPlantEntry *pPVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  SeedBankNew::SetSeedBankProperties((SeedBankNew *)this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  nop();
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(extraout_x0 + 0xd8);
    uVar2 = FUN_042f1020(uVar4,*(undefined8 *)(extraout_x0 + 0xe0));
    if (uVar2 <= uVar3) break;
    pPVar1 = (PneumaticPlantEntry *)FUN_042f1048(uVar4,uVar3);
    AddSeedToSeedPool(this,pPVar1);
    uVar3 = uVar3 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PneumaticSeedBank::AddToRenderQueue(RenderQueue*) */

void __thiscall PneumaticSeedBank::AddToRenderQueue(PneumaticSeedBank *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::AddToRenderQueue((UIWidget *)this,param_1);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDrawBack);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<PneumaticSeedBank,void(PneumaticSeedBank::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,200000,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDrawValve);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<PneumaticSeedBank,void(PneumaticSeedBank::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,700000,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDrawFront);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<PneumaticSeedBank,void(PneumaticSeedBank::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,800000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

