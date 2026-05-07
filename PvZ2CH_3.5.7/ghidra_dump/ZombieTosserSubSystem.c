// Class: ZombieTosserSubSystem


/* ZombieTosserSubSystem::ZombieTosserSubSystem() */

void __thiscall ZombieTosserSubSystem::ZombieTosserSubSystem(ZombieTosserSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_068b6be0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  return;
}


/* ZombieTosserSubSystem::~ZombieTosserSubSystem() */

void __thiscall ZombieTosserSubSystem::~ZombieTosserSubSystem(ZombieTosserSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_068b6be0;
  std::vector<TossedZombie,std::allocator<TossedZombie>>::~vector
            ((vector<TossedZombie,std::allocator<TossedZombie>> *)(this + 0x58));
  std::vector<TossedZombie,std::allocator<TossedZombie>>::~vector
            ((vector<TossedZombie,std::allocator<TossedZombie>> *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x28))
  ;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ZombieTosserSubSystem::~ZombieTosserSubSystem() */

void __thiscall ZombieTosserSubSystem::~ZombieTosserSubSystem(ZombieTosserSubSystem *this)

{
  ~ZombieTosserSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTosserSubSystem::StaticClassInit() */

void ZombieTosserSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"TossedZombie");
    (*pcVar3)(plVar2,asStack_10,FUN_046dc710,0xf0,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieTosserSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_046dd520,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTosserSubSystem::StaticGetClass() */

long * ZombieTosserSubSystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTosserSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTosserSubSystem::GetClass() const */

long * ZombieTosserSubSystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTosserSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTosserSubSystem::findTossedZombie(Zombie*) */

void ZombieTosserSubSystem::findTossedZombie(Zombie *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  lVar2 = FUN_046da948(uVar5,*(undefined8 *)(param_1 + 0x48));
  lVar3 = 0;
  do {
    if (lVar3 == lVar2) {
      lVar4 = 0;
      break;
    }
    lVar4 = FUN_046da978(uVar5,lVar3);
    cVar1 = Sexy::RtWeakPtrBase::operator==
                      ((RtWeakPtrBase *)(lVar4 + 0x40),(RtWeakPtrBase *)aRStack_18);
    lVar3 = lVar3 + 1;
  } while (cVar1 == '\0');
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


/* ZombieTosserSubSystem::IsTossed(Zombie*) */

bool ZombieTosserSubSystem::IsTossed(Zombie *param_1)

{
  long lVar1;
  
  lVar1 = findTossedZombie(param_1);
  return lVar1 != 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTosserSubSystem::GetTargetPosition(Zombie*) */

void ZombieTosserSubSystem::GetTargetPosition(Zombie *param_1)

{
  long lVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = findTossedZombie(param_1);
  if (lVar1 == 0) {
    DVec3::DVec3((DVec3 *)&local_28);
    local_18 = local_28;
    local_10 = local_20;
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0xc);
    local_10 = *(undefined4 *)(lVar1 + 0x14);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((undefined4)local_18,local_18._4_4_,local_10);
}


/* ZombieTosserSubSystem::GetOnLandedCallback(Zombie*) */

void __thiscall
ZombieTosserSubSystem::GetOnLandedCallback(ZombieTosserSubSystem *this,Zombie *param_1)

{
  long lVar1;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *in_x8;
  
  lVar1 = findTossedZombie((Zombie *)this);
  if (lVar1 != 0) {
    RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
              (in_x8,(RtReflectionDelegate *)(lVar1 + 0x48));
    return;
  }
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(in_x8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTosserSubSystem::CaculateTargetButNotOffScreen(Zombie*, float) */

void ZombieTosserSubSystem::CaculateTargetButNotOffScreen(Zombie *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  fVar6 = *pfVar4;
  fVar7 = pfVar4[1];
  lVar5 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  if (lVar5 == 0) {
    iVar3 = 0;
  }
  else {
    lVar5 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    iVar3 = *(int *)(lVar5 + 0x34);
  }
  local_28 = fVar6 + param_2;
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  local_18 = CONCAT44(local_18._4_4_,(float)(iVar3 + iVar1 * iVar2 + 200));
  pfVar4 = eastl::min_alt<float>(&local_28,(float *)&local_18);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,*pfVar4,fVar7,0.0);
  local_18 = CONCAT44(uStack_24,local_28);
  local_10 = local_20;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_28,uStack_24,local_20);
}


/* ZombieTosserSubSystem::StaticNew() */

ZombieTosserSubSystem * ZombieTosserSubSystem::StaticNew(void)

{
  ZombieTosserSubSystem *this;
  
  this = ::operator_new(0x70);
  ZombieTosserSubSystem(this);
  return this;
}


/* ZombieTosserSubSystem::registerForEvents() */

void __thiscall ZombieTosserSubSystem::registerForEvents(ZombieTosserSubSystem *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantLost);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<ZombieTosserSubSystem,void(ZombieTosserSubSystem::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDestroyed);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ZombieTosserSubSystem,void(ZombieTosserSubSystem::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_70);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTosserSubSystem::removeTossedZombie(Zombie*) */

void ZombieTosserSubSystem::removeTossedZombie(Zombie *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  lVar3 = FUN_046da948(uVar6,*(undefined8 *)(param_1 + 0x48));
  lVar5 = 0;
  do {
    iVar1 = (int)lVar5;
    if (lVar5 == lVar3) goto LAB_046dea58;
    lVar4 = FUN_046da978(uVar6,lVar5);
    cVar2 = Sexy::RtWeakPtrBase::operator==
                      ((RtWeakPtrBase *)(lVar4 + 0x40),(RtWeakPtrBase *)aRStack_28);
    lVar5 = lVar5 + 1;
  } while (cVar2 == '\0');
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x40));
  local_18 = __gnu_cxx::
             __normal_iterator<TossedZombie*,std::vector<TossedZombie,std::allocator<TossedZombie>>>
             ::operator+((__normal_iterator<TossedZombie*,std::vector<TossedZombie,std::allocator<TossedZombie>>>
                          *)&local_20,(long)iVar1);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<TossedZombie,std::allocator<TossedZombie>>::erase
            ((vector<TossedZombie,std::allocator<TossedZombie>> *)(param_1 + 0x40),local_10);
LAB_046dea58:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTosserSubSystem::ReleaseZombie(Zombie*) */

void __thiscall ZombieTosserSubSystem::ReleaseZombie(ZombieTosserSubSystem *this,Zombie *param_1)

{
  long lVar1;
  
  lVar1 = findTossedZombie((Zombie *)this);
  if (lVar1 != 0) {
    Zombie::SetIsFlying(param_1,*(bool *)(lVar1 + 0x91));
    if (*(char *)(lVar1 + 0x92) != '\0') {
      Zombie::EndCondition(param_1,2);
    }
    Zombie::EndCondition(param_1,0xe);
    Zombie::SetIsControlled(param_1,false);
    removeTossedZombie((Zombie *)this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTosserSubSystem::internalLaunchZombie(float, float, TossedZombie&, bool) */

void ZombieTosserSubSystem::internalLaunchZombie
               (float param_1,float param_2,TossedZombie *param_3,bool param_4)

{
  SexyVector3 *this;
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  ResourceInfo *this_00;
  SexyVector3 *pSVar4;
  SexyVector3 *this_01;
  char in_w2;
  float fVar5;
  Zombie *pZVar6;
  undefined4 in_s2;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  undefined4 local_28;
  float local_24;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  this_01 = (SexyVector3 *)(ulong)param_4;
  local_8 = ___stack_chk_guard;
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this_01 + 0x40));
  if (in_w2 == '\0') {
    pZVar6._0_4_ = (Zombie *)PVZ_EOT();
  }
  else {
    pZVar6._0_4_ = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar6._0_4_,0,this_00,2,1);
  }
  this = this_01 + 0x18;
  Zombie::SetIsFlying((Zombie *)this_00,true);
  Zombie::SetIsControlled((Zombie *)this_00,true);
  Zombie::ApplyCondition(pZVar6._0_4_,0,this_00,0xe,1);
  pSVar4 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this_00);
  Sexy::SexyVector3::operator=(this_01,pSVar4);
  Sexy::SexyVector3::operator=(this,this_01);
  CalculateTossVelocity(this,this_01 + 0xc,param_1,param_2,this_01 + 0x24,this_01 + 0x30);
  local_28 = Sexy::SexyVector3::operator-(this_01 + 0xc,this);
  local_24 = param_2;
  if (((DAT_06b20328 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b20328), iVar3 != 0)) {
    param_2 = 0.0;
    in_s2 = 0;
    EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06b20318,1.0,0.0,0.0);
    __cxa_guard_release(&DAT_06b20328);
  }
  local_18 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_28);
  local_14 = param_2;
  local_10 = in_s2;
  fVar5 = (float)EATextSquish::Dot((Vec3 *)&DAT_06b20318,(Vec3 *)&local_18);
  fVar5 = acosf(fVar5);
  bVar2 = Sexy::IsNearZero(fVar5,0.2);
  this_01[0x90] = (SexyVector3)(bVar2 ^ 1);
  std::vector<TossedZombie,std::allocator<TossedZombie>>::push_back
            ((vector<TossedZombie,std::allocator<TossedZombie>> *)(param_3 + 0x58),
             (TossedZombie *)this_01);
  puVar1 = gMessageRouter;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)(this_01 + 0x40));
  MessageRouter::Post<Zombie*,Sexy::RtWeakPtr<Zombie>>
            ((MessageRouter *)puVar1,Message::ZombieTossed,aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTosserSubSystem::LaunchZombieWithPlant(Zombie*, Plant*, Sexy::SexyVector3 const&, float,
   float, RtReflectionDelegate<Sexy::Delegate1<Zombie*> >, bool) */

void __thiscall
ZombieTosserSubSystem::LaunchZombieWithPlant
          (float param_4,float param_5,ZombieTosserSubSystem *this,Zombie *param_1,
          undefined8 param_5_00,SexyVector3 *param_3,RtReflectionDelegate *param_7,
          undefined1 param_8)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_100 [8];
  TossedZombie aTStack_f8 [12];
  SexyVector3 aSStack_ec [8];
  float local_e4;
  float local_bc;
  RtWeakPtr<SpartanBambooMatrixSystem> aRStack_b8 [8];
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>> aRStack_b0 [73];
  undefined1 local_67;
  undefined1 local_66;
  RtWeakPtr<SpartanBambooMatrixSystem> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TossedZombie::TossedZombie(aTStack_f8);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(aRStack_b8,(RtWeakPtrBase *)aRStack_100);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_100);
  Sexy::SexyVector3::operator=(aSStack_ec,param_3);
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=(aRStack_b0,param_7);
  local_67 = Zombie::IsFlying(param_1);
  local_66 = param_8;
  local_e4 = (float)RealObject::CalcGroundZHeight((RealObject *)param_1,param_3);
  local_bc = param_5;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(aRStack_10,(RtWeakPtrBase *)aRStack_100);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_100);
  Sexy::OutputDebugStrF
            ((wchar_t *)"ZombieTosserSubSystem::LaunchZombie target z=%f",(double)local_e4);
  internalLaunchZombie(param_4,param_5,(TossedZombie *)this,SUB81(aTStack_f8,0));
  TossedZombie::~TossedZombie(aTStack_f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTosserSubSystem::LaunchZombie(Zombie*, Sexy::SexyVector3 const&, float, float,
   RtReflectionDelegate<Sexy::Delegate1<Zombie*> >, bool) */

void __thiscall
ZombieTosserSubSystem::LaunchZombie
          (float param_3,float param_4,ZombieTosserSubSystem *this,
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *param_1,SexyVector3 *param_2,RtReflectionDelegate *param_6,undefined1 param_7)

{
  bool bVar1;
  char cVar2;
  SexyVector3 *pSVar3;
  float *pfVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float local_168;
  float local_164;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_160 [32];
  float local_140;
  TossedZombie aTStack_f8 [12];
  float local_ec [2];
  float local_e4;
  float local_bc;
  RtWeakPtr<SpartanBambooMatrixSystem> aRStack_b8 [8];
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>> aRStack_b0 [73];
  undefined1 local_67;
  undefined1 local_66;
  RtWeakPtr<PowerPropertySheet> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TossedZombie::TossedZombie(aTStack_f8);
  pSVar3 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_1);
  cVar2 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),pSVar3);
  if (cVar2 != '\0') {
    pcVar5 = *(code **)(*(long *)param_1 + 0x78);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_160,*(float *)pSVar3,*(float *)(pSVar3 + 4),0.0);
    (*pcVar5)(param_1,(Vec3 *)aRStack_160);
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(aRStack_b8,(RtWeakPtrBase *)aRStack_160);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_160);
  Sexy::SexyVector3::operator=((SexyVector3 *)local_ec,param_2);
  Zombie::GetCurrentTitleStatus();
  fVar6 = local_140;
  TitleStatus::~TitleStatus((TitleStatus *)aRStack_160);
  if (0.0 < fVar6) {
    fVar6 = *(float *)param_2;
    fVar7 = *(float *)pSVar3;
    if (fVar7 < fVar6) {
      bVar1 = true;
      local_168 = 0.0;
      Zombie::GetCurrentTitleStatus();
      local_164 = 1.0 - local_140;
      pfVar4 = eastl::max_alt<float>(&local_168,&local_164);
      local_ec[0] = local_ec[0] - (fVar6 - fVar7) * *pfVar4;
      TitleStatus::~TitleStatus((TitleStatus *)aRStack_160);
      Zombie::TriggerTitleIconEffect((Zombie *)param_1,3);
      goto LAB_046df660;
    }
  }
  bVar1 = false;
LAB_046df660:
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=(aRStack_b0,param_6);
  local_67 = Zombie::IsFlying((Zombie *)param_1);
  local_66 = param_7;
  cVar2 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),param_2);
  if (cVar2 == '\0') {
    local_e4 = (float)RealObject::CalcGroundZHeight((RealObject *)param_1,param_2);
  }
  else {
    local_e4 = *(float *)(param_2 + 8);
  }
  Zombie::GetCurrentTitleStatus();
  fVar6 = local_140;
  TitleStatus::~TitleStatus((TitleStatus *)aRStack_160);
  if ((0.0 < fVar6) && (param_3 < param_3 + local_e4)) {
    local_168 = 0.0;
    Zombie::GetCurrentTitleStatus();
    local_164 = 1.0 - local_140;
    pfVar4 = eastl::max_alt<float>(&local_168,&local_164);
    param_3 = param_3 - param_3 * *pfVar4;
    TitleStatus::~TitleStatus((TitleStatus *)aRStack_160);
    if (!bVar1) {
      Zombie::TriggerTitleIconEffect((Zombie *)param_1,3);
    }
  }
  local_bc = param_4;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_160);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_10,(RtWeakPtr *)aRStack_160);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_160);
  Sexy::OutputDebugStrF
            ((wchar_t *)"ZombieTosserSubSystem::LaunchZombie target z=%f",(double)local_e4);
  internalLaunchZombie(param_3,param_4,(TossedZombie *)this,SUB81(aTStack_f8,0));
  TossedZombie::~TossedZombie(aTStack_f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTosserSubSystem::LaunchZombieHorizontal(Zombie*, float, float, float,
   RtReflectionDelegate<Sexy::Delegate1<Zombie*> >, bool) */

void __thiscall
ZombieTosserSubSystem::LaunchZombieHorizontal
          (float param_2,ZombieTosserSubSystem *param_2_00,undefined4 param_4,
          ZombieTosserSubSystem *this,
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *param_1,RtReflectionDelegate *param_6,undefined1 param_7)

{
  float *pfVar1;
  Vec3 aVStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(param_1);
  EATextSquish::Vec3::Vec3(aVStack_60,param_2 + *pfVar1,pfVar1[1],0.0);
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50,param_6);
  LaunchZombie(param_2_00._0_4_,param_4,this,param_1,aVStack_60,aRStack_50,param_7);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTosserSubSystem::LaunchZombieOriginalZHeight(Zombie*, Sexy::SexyVector3 const&, float,
   float, RtReflectionDelegate<Sexy::Delegate1<Zombie*> >, bool) */

void __thiscall
ZombieTosserSubSystem::LaunchZombieOriginalZHeight
          (float param_3,float param_4,ZombieTosserSubSystem *this,
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *param_1,SexyVector3 *param_2,RtReflectionDelegate *param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_110 [8];
  undefined8 local_108;
  undefined4 local_100;
  TossedZombie aTStack_f8 [12];
  SexyVector3 aSStack_ec [8];
  float local_e4;
  float local_bc;
  RtWeakPtr<SpartanBambooMatrixSystem> aRStack_b8 [8];
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>> aRStack_b0 [73];
  undefined1 local_67;
  undefined1 local_66;
  RtWeakPtr<PowerPropertySheet> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TossedZombie::TossedZombie(aTStack_f8);
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_1);
  local_100 = *(undefined4 *)(puVar1 + 1);
  local_108 = *puVar1;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(aRStack_b8,(RtWeakPtrBase *)aRStack_110);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_110);
  Sexy::SexyVector3::operator=(aSStack_ec,param_2);
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=(aRStack_b0,param_6);
  local_67 = Zombie::IsFlying((Zombie *)param_1);
  local_66 = param_7;
  local_e4 = (float)RealObject::CalcGroundZHeight((RealObject *)param_1,(SexyVector3 *)&local_108);
  local_bc = param_4;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_110);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_10,(RtWeakPtr *)aRStack_110);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_110);
  Sexy::OutputDebugStrF
            ((wchar_t *)"ZombieTosserSubSystem::LaunchZombieOriginalZHeight target z=%f",
             (double)local_e4);
  internalLaunchZombie(param_3,param_4,(TossedZombie *)this,SUB81(aTStack_f8,0));
  TossedZombie::~TossedZombie(aTStack_f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTosserSubSystem::onZombieDestroyed(Zombie*) */

void ZombieTosserSubSystem::onZombieDestroyed(Zombie *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (param_1 + 0x10),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTosserSubSystem::onPlantLost(Plant*) */

void ZombieTosserSubSystem::onPlantLost(Plant *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
             (param_1 + 0x28),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTosserSubSystem::Update() */

void ZombieTosserSubSystem::Update(void)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar1;
  SexyVector3 *this_00;
  SexyVector3 *this_01;
  RtWeakPtr *this_02;
  uint uVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  long in_x0;
  ulong uVar7;
  long lVar8;
  RtWeakPtrBase *pRVar9;
  RtWeakPtr<Sexy::ResourceInfo> *this_03;
  long lVar10;
  long lVar11;
  ResourceInfo *this_04;
  Delegate1wRet<bool,SexyURL_const&> *pDVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  double in_d1;
  undefined4 uVar23;
  double in_d2;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(in_x0 + 0x40);
  local_8 = ___stack_chk_guard;
  uVar16 = 0;
  fVar19 = (float)PVZ_Dt();
  uVar18 = *(undefined8 *)(in_x0 + 0x10);
  uVar7 = FUN_046da93c(uVar18,*(undefined8 *)(in_x0 + 0x18));
  if (uVar7 != 0) {
    do {
      uVar17 = *(undefined8 *)(in_x0 + 0x40);
      lVar8 = FUN_046da948(uVar17,*(undefined8 *)(in_x0 + 0x48));
      lVar11 = 0;
      do {
        iVar6 = (int)lVar11;
        if (lVar11 == lVar8) goto LAB_046e2b34;
        lVar14 = FUN_046da978(uVar17,lVar11);
        pRVar9 = (RtWeakPtrBase *)FUN_046da988(uVar18,uVar16);
        cVar3 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)(lVar14 + 0x40),pRVar9);
        lVar11 = lVar11 + 1;
      } while (cVar3 == '\0');
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this);
      local_28 = __gnu_cxx::
                 __normal_iterator<TossedZombie*,std::vector<TossedZombie,std::allocator<TossedZombie>>>
                 ::operator+((__normal_iterator<TossedZombie*,std::vector<TossedZombie,std::allocator<TossedZombie>>>
                              *)&local_38,(long)iVar6);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_18,(__normal_iterator *)&local_28);
      std::vector<TossedZombie,std::allocator<TossedZombie>>::erase
                ((vector<TossedZombie,std::allocator<TossedZombie>> *)this,local_18);
      uVar18 = *(undefined8 *)(in_x0 + 0x10);
      uVar7 = FUN_046da93c(uVar18,*(undefined8 *)(in_x0 + 0x18));
LAB_046e2b34:
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar7);
  }
  pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)(in_x0 + 0x58);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (in_x0 + 0x10));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_18,(__normal_iterator *)&local_28);
  uVar18 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin(pvVar1);
  uVar17 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end(pvVar1);
  std::vector<TossedZombie,std::allocator<TossedZombie>>::
  insert<__gnu_cxx::__normal_iterator<TossedZombie*,std::vector<TossedZombie,std::allocator<TossedZombie>>>,void>
            ((vector<TossedZombie,std::allocator<TossedZombie>> *)this,local_18,uVar18,uVar17);
  std::vector<TossedZombie,std::allocator<TossedZombie>>::clear
            ((vector<TossedZombie,std::allocator<TossedZombie>> *)pvVar1);
  uVar18 = *(undefined8 *)(in_x0 + 0x40);
  iVar6 = FUN_046da948(uVar18,*(undefined8 *)(in_x0 + 0x48));
  uVar2 = iVar6 - 1;
  if (-1 < (int)uVar2) {
    lVar14 = (long)(int)uVar2 + -1;
    lVar11 = lVar14;
    lVar8 = (long)(int)uVar2;
    do {
      lVar15 = lVar11;
      lVar11 = FUN_046da978(uVar18,lVar8);
      this_04 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar11 + 0x40));
      uVar23 = SUB84(in_d2,0);
      uVar22 = SUB84(in_d1,0);
      if (this_04 == (ResourceInfo *)0x0) {
        lVar11 = FUN_046da948(*(undefined8 *)(in_x0 + 0x40),*(undefined8 *)(in_x0 + 0x48));
joined_r0x046e2f6c:
        if (lVar11 != 0) {
          local_38 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin(this);
          local_28 = __gnu_cxx::
                     __normal_iterator<TossedZombie*,std::vector<TossedZombie,std::allocator<TossedZombie>>>
                     ::operator+((__normal_iterator<TossedZombie*,std::vector<TossedZombie,std::allocator<TossedZombie>>>
                                  *)&local_38,lVar8);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_18,(__normal_iterator *)&local_28);
          std::vector<TossedZombie,std::allocator<TossedZombie>>::erase
                    ((vector<TossedZombie,std::allocator<TossedZombie>> *)this,local_18);
        }
      }
      else {
        FUN_046df950();
        this_00 = (SexyVector3 *)(lVar11 + 0x18);
        this_01 = (SexyVector3 *)(lVar11 + 0x24);
        local_48 = Sexy::SexyVector3::operator*(this_01,fVar19);
        local_44 = uVar22;
        local_40 = uVar23;
        uVar20 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)&local_48);
        local_38 = CONCAT44(uVar22,uVar20);
        local_30 = uVar23;
        uVar20 = Sexy::SexyVector3::operator*((SexyVector3 *)(lVar11 + 0x30),fVar19 * fVar19 * 0.5);
        local_28 = CONCAT44(uVar22,uVar20);
        local_20 = uVar23;
        uVar20 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_38,(SexyVector3 *)&local_28);
        local_18 = CONCAT44(uVar22,uVar20);
        local_10 = uVar23;
        Sexy::SexyVector3::operator=(this_00,(SexyVector3 *)&local_18);
        uVar20 = Sexy::SexyVector3::operator*((SexyVector3 *)(lVar11 + 0x30),fVar19);
        local_28 = CONCAT44(uVar22,uVar20);
        local_20 = uVar23;
        uVar20 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)&local_28);
        local_18 = CONCAT44(uVar22,uVar20);
        local_10 = uVar23;
        Sexy::SexyVector3::operator=(this_01,(SexyVector3 *)&local_18);
        (**(code **)(*(long *)this_04 + 0x78))(this_04,this_00);
        fVar21 = (float)RealObject::CalcGroundZHeight((RealObject *)this_04,this_00);
        this_03 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)this_04);
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_03);
        uVar18 = FUN_0547429c(lVar10 + 8);
        in_d1 = (double)*(float *)(lVar11 + 0x1c);
        in_d2 = (double)*(float *)(lVar11 + 0x20);
        Sexy::OutputDebugStrF
                  ((wchar_t *)
                   "ZombieTosserSubSystem::Update() zombieName=%s ts.m_pos=%f %f %f ts.m_vel=%f %f %f ts.acc=%f %f %f gourndZ=%f"
                   ,(double)*(float *)(lVar11 + 0x18),in_d1,in_d2,(double)*(float *)(lVar11 + 0x24),
                   (double)*(float *)(lVar11 + 0x28),(double)*(float *)(lVar11 + 0x2c),
                   (double)*(float *)(lVar11 + 0x30),(double)*(float *)(lVar11 + 0x34),uVar18);
        if ((*(float *)(lVar11 + 0x20) < fVar21) && (*(float *)(lVar11 + 0x2c) < 0.0)) {
          this_04[0x7e9] = (ResourceInfo)0x0;
          this_04[0x7ea] = (ResourceInfo)0x0;
          pcVar13 = *(code **)(*(long *)this_04 + 0x78);
          *(float *)(lVar11 + 0x14) = fVar21;
          (*pcVar13)(this_04,lVar11 + 0xc);
          if (*(char *)(lVar11 + 0x92) != '\0') {
            Zombie::EndCondition((Zombie *)this_04,2);
            Zombie::EndCondition((Zombie *)this_04,0x18);
          }
          Zombie::EndCondition((Zombie *)this_04,0xe);
          Zombie::SetIsFlying((Zombie *)this_04,*(bool *)(lVar11 + 0x91));
          Zombie::SetIsControlled((Zombie *)this_04,false);
          if (*(float *)(this_04 + 0x7f0) != 0.0) {
            in_d1 = 0.0;
            Zombie::ApplyCondition((Zombie *)0x40400000,this_04,2,1);
          }
          this_02 = (RtWeakPtr *)(lVar11 + 0xe8);
          bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(this_02);
          if (bVar4) {
            pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(in_x0 + 0x28);
            uVar18 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin(pvVar1);
            uVar17 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end(pvVar1);
            local_28 = std::
                       find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Plant>*,std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>>,Sexy::RtWeakPtr<Plant>>
                                 (uVar18,uVar17,this_02);
            local_18 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end(pvVar1);
            bVar4 = __gnu_cxx::operator!=
                              ((__normal_iterator *)&local_28,(__normal_iterator *)&local_18);
            iVar6 = ::RtReflectionDelegate::operator_cast_to_int
                              ((RtReflectionDelegate *)(lVar11 + 0x48));
            if ((iVar6 != 0) &&
               (bVar5 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_02), bVar4 < bVar5)) {
              pDVar12 = (Delegate1wRet<bool,SexyURL_const&> *)
                        RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::GetDelegate
                                  ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)(lVar11 + 0x48)
                                  );
              Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(pDVar12,(SexyURL *)this_04);
            }
          }
          else {
            iVar6 = ::RtReflectionDelegate::operator_cast_to_int
                              ((RtReflectionDelegate *)(lVar11 + 0x48));
            if (iVar6 != 0) {
              pDVar12 = (Delegate1wRet<bool,SexyURL_const&> *)
                        RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::GetDelegate
                                  ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)(lVar11 + 0x48)
                                  );
              Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(pDVar12,(SexyURL *)this_04);
            }
          }
          MessageRouter::Post<Zombie*,Zombie*>
                    ((MessageRouter *)gMessageRouter,Message::ZombieTossEnd,(Zombie *)this_04);
          lVar11 = FUN_046da948(*(undefined8 *)(in_x0 + 0x40),*(undefined8 *)(in_x0 + 0x48));
          goto joined_r0x046e2f6c;
        }
      }
      if (lVar15 == lVar14 - (ulong)uVar2) break;
      uVar18 = *(undefined8 *)(in_x0 + 0x40);
      lVar11 = lVar15 + -1;
      lVar8 = lVar15;
    } while( true );
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

