// Class: ArtifactUFOSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUFOSubSystem::StaticClassInit() */

void ArtifactUFOSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"RisedZombie");
    (*pcVar3)(plVar2,asStack_10,FUN_037ceba8,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ArtifactUFOSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_037cf1a0,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactUFOSubSystem::StaticGetClass() */

long * ArtifactUFOSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactUFOSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactUFOSubSystem::GetClass() const */

long * ArtifactUFOSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactUFOSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactUFOSubSystem::setValues(float, float) */

void __thiscall
ArtifactUFOSubSystem::setValues(ArtifactUFOSubSystem *this,float param_1,float param_2)

{
  *(float *)(this + 0x58) = param_1;
  *(float *)(this + 0x5c) = param_2;
  return;
}


/* ArtifactUFOSubSystem::canZombieBeSeckilled(Sexy::RtWeakPtr<Zombie>) */

bool __thiscall ArtifactUFOSubSystem::canZombieBeSeckilled(undefined8 param_1,RtWeakPtr *param_2)

{
  bool bVar1;
  int iVar2;
  Zombie *pZVar3;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    pZVar3 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    iVar2 = Zombie::GetSizeType(pZVar3);
    if (iVar2 != 1) {
      pZVar3 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      iVar2 = Zombie::GetSizeType(pZVar3);
      return iVar2 != 2;
    }
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUFOSubSystem::findRisedZombie(Zombie*) */

void ArtifactUFOSubSystem::findRisedZombie(Zombie *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  RtWeakPtrBase *this;
  undefined8 uVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = FUN_037cce28(uVar4,*(undefined8 *)(param_1 + 0x30));
  lVar3 = 0;
  do {
    if (lVar3 == lVar2) {
      this = (RtWeakPtrBase *)0x0;
      break;
    }
    this = (RtWeakPtrBase *)FUN_037cce50(uVar4,lVar3);
    cVar1 = Sexy::RtWeakPtrBase::operator==(this,(RtWeakPtrBase *)aRStack_18);
    lVar3 = lVar3 + 1;
  } while (cVar1 == '\0');
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* ArtifactUFOSubSystem::onZombieDamageTaken(Zombie*, DamageInfo const&) */

void __thiscall
ArtifactUFOSubSystem::onZombieDamageTaken
          (ArtifactUFOSubSystem *this,Zombie *param_1,DamageInfo *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  if ((((0.0 < *(float *)(param_2 + 8)) && (lVar1 = findRisedZombie((Zombie *)this), lVar1 != 0)) &&
      (*(char *)(lVar1 + 0x71) != '\0')) &&
     (fVar3 = *(float *)(lVar1 + 0x7c), fVar2 = (float)PVZ_T(), fVar3 < fVar2)) {
    fVar2 = (float)PVZ_T();
    *(float *)(lVar1 + 0x7c) = fVar2 + *(float *)(lVar1 + 0x74);
    *(float *)(lVar1 + 8) = *(float *)(lVar1 + 8) + *(float *)(lVar1 + 0x78);
    return;
  }
  return;
}


/* ArtifactUFOSubSystem::registerForEvents() */

void __thiscall ArtifactUFOSubSystem::registerForEvents(ArtifactUFOSubSystem *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDestroyed);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ArtifactUFOSubSystem,void(ArtifactUFOSubSystem::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_40);
  return;
}


/* ArtifactUFOSubSystem::ArtifactUFOSubSystem() */

void __thiscall ArtifactUFOSubSystem::ArtifactUFOSubSystem(ArtifactUFOSubSystem *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_06699f20;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  *(undefined4 *)(this + 0x58) = 0xc4160000;
  *(undefined4 *)(this + 0x5c) = 0x7f7fffff;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x10));
  std::vector<RisedZombie,std::allocator<RisedZombie>>::clear
            ((vector<RisedZombie,std::allocator<RisedZombie>> *)(this + 0x28));
  std::vector<RisedZombie,std::allocator<RisedZombie>>::clear
            ((vector<RisedZombie,std::allocator<RisedZombie>> *)(this + 0x40));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDamageTaken);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const&,Sexy::CBMemberTranslatorX<ArtifactUFOSubSystem,void(ArtifactUFOSubSystem::*)(Zombie*,DamageInfo_const&)>>
            ((MessageRouter *)puVar1,Message::ZombieDamageTaken,&local_40);
  return;
}


/* ArtifactUFOSubSystem::StaticNew() */

ArtifactUFOSubSystem * ArtifactUFOSubSystem::StaticNew(void)

{
  ArtifactUFOSubSystem *this;
  
  this = ::operator_new(0x60);
  ArtifactUFOSubSystem(this);
  return this;
}


/* ArtifactUFOSubSystem::~ArtifactUFOSubSystem() */

void __thiscall ArtifactUFOSubSystem::~ArtifactUFOSubSystem(ArtifactUFOSubSystem *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  *(undefined ***)this = &PTR_GetClass_06699f20;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDamageTaken);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Unsubscribe<Zombie*,DamageInfo_const&,Sexy::CBMemberTranslatorX<ArtifactUFOSubSystem,void(ArtifactUFOSubSystem::*)(Zombie*,DamageInfo_const&)>>
            ((MessageRouter *)puVar1,Message::ZombieDamageTaken,&local_40);
  std::vector<RisedZombie,std::allocator<RisedZombie>>::~vector
            ((vector<RisedZombie,std::allocator<RisedZombie>> *)(this + 0x40));
  std::vector<RisedZombie,std::allocator<RisedZombie>>::~vector
            ((vector<RisedZombie,std::allocator<RisedZombie>> *)(this + 0x28));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ArtifactUFOSubSystem::~ArtifactUFOSubSystem() */

void __thiscall ArtifactUFOSubSystem::~ArtifactUFOSubSystem(ArtifactUFOSubSystem *this)

{
  ~ArtifactUFOSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactUFOSubSystem::internalRiseZombie(RisedZombie) */

void __thiscall
ArtifactUFOSubSystem::internalRiseZombie(ArtifactUFOSubSystem *this,RtWeakPtr *param_2)

{
  ResourceInfo *this_00;
  undefined1 auVar1 [16];
  
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
  Zombie::SetIsFlying((Zombie *)this_00,true);
  Zombie::SetIsControlled((Zombie *)this_00,true);
  auVar1 = PVZ_EOT();
  Zombie::ApplyCondition((Zombie *)auVar1,0,this_00,0x18,1);
  std::vector<RisedZombie,std::allocator<RisedZombie>>::push_back
            ((vector<RisedZombie,std::allocator<RisedZombie>> *)(this + 0x40),(RisedZombie *)param_2
            );
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUFOSubSystem::riseZombie(Zombie*, Sexy::SexyVector3, float,
   RtReflectionDelegate<Sexy::Delegate1<Zombie*> >) */

void ArtifactUFOSubSystem::riseZombie
               (undefined4 param_1_00,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               ArtifactUFOSubSystem *param_1,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_6,RtReflectionDelegate *param_7)

{
  SexyVector3 *pSVar1;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_110 [8];
  RisedZombie aRStack_108 [8];
  SexyVector3 aSStack_100 [12];
  SexyVector3 aSStack_f4 [12];
  undefined4 local_e8;
  undefined4 local_e4;
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>> aRStack_e0 [72];
  undefined1 local_98;
  undefined1 local_97;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  RisedZombie aRStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_120 = param_1_00;
  local_11c = param_2;
  local_118 = param_3;
  RisedZombie::RisedZombie(aRStack_108);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)aRStack_108,(RtWeakPtrBase *)aRStack_110);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_110);
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_6);
  Sexy::SexyVector3::operator=(aSStack_100,pSVar1);
  Sexy::SexyVector3::operator=(aSStack_f4,(SexyVector3 *)&local_120);
  local_e4 = 0;
  local_e8 = param_4;
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=(aRStack_e0,param_7);
  local_98 = Zombie::IsFlying((Zombie *)param_6);
  local_97 = 1;
  local_94 = PVZ_EOT();
  local_90 = 0;
  local_8c = local_94;
  RisedZombie::RisedZombie(aRStack_88,aRStack_108);
  internalRiseZombie(param_1,aRStack_88);
  RisedZombie::~RisedZombie(aRStack_88);
  RisedZombie::~RisedZombie(aRStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUFOSubSystem::riseAndTossBackZombie(Zombie*, Sexy::SexyVector3, float, float, float,
   RtReflectionDelegate<Sexy::Delegate1<Zombie*> >) */

void ArtifactUFOSubSystem::riseAndTossBackZombie
               (undefined4 param_1_00,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               float param_5,undefined4 param_6,ArtifactUFOSubSystem *param_1,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_8,RtReflectionDelegate *param_9)

{
  SexyVector3 *pSVar1;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_110 [8];
  RisedZombie aRStack_108 [8];
  SexyVector3 aSStack_100 [12];
  SexyVector3 aSStack_f4 [12];
  undefined4 local_e8;
  undefined4 local_e4;
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>> aRStack_e0 [72];
  undefined1 local_98;
  undefined1 local_97;
  float local_94;
  undefined4 local_90;
  float local_8c;
  RisedZombie aRStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_120 = param_1_00;
  local_11c = param_2;
  local_118 = param_3;
  RisedZombie::RisedZombie(aRStack_108);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)aRStack_108,(RtWeakPtrBase *)aRStack_110);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_110);
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_8);
  Sexy::SexyVector3::operator=(aSStack_100,pSVar1);
  Sexy::SexyVector3::operator=(aSStack_f4,(SexyVector3 *)&local_120);
  local_e4 = 0;
  local_e8 = param_4;
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=(aRStack_e0,param_9);
  local_98 = Zombie::IsFlying((Zombie *)param_8);
  local_97 = 1;
  local_94 = param_5;
  local_90 = param_6;
  local_8c = (float)PVZ_T();
  local_8c = local_8c + param_5;
  RisedZombie::RisedZombie(aRStack_88,aRStack_108);
  internalRiseZombie(param_1,aRStack_88);
  RisedZombie::~RisedZombie(aRStack_88);
  RisedZombie::~RisedZombie(aRStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUFOSubSystem::onZombieDestroyed(Zombie*) */

void ArtifactUFOSubSystem::onZombieDestroyed(Zombie *param_1)

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
/* ArtifactUFOSubSystem::Update() */

void __thiscall ArtifactUFOSubSystem::Update(ArtifactUFOSubSystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  SexyVector3 *this_02;
  uint uVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  RtWeakPtrBase *this_03;
  RtWeakPtrBase *pRVar6;
  RtWeakPtr *this_04;
  ResourceInfo *this_05;
  Delegate1wRet<bool,SexyURL_const&> *this_06;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  SexyVector3 *this_07;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  Vec3 aVStack_58 [16];
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  undefined8 local_38;
  float local_30;
  undefined8 local_28;
  float local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  float local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  uVar9 = 0;
  local_8 = ___stack_chk_guard;
  fVar14 = (float)PVZ_Dt();
  uVar13 = *(undefined8 *)(this + 0x10);
  uVar4 = FUN_037cce1c(uVar13,*(undefined8 *)(this + 0x18));
  if (uVar4 != 0) {
    do {
      uVar10 = *(undefined8 *)(this + 0x28);
      lVar5 = FUN_037cce28(uVar10,*(undefined8 *)(this + 0x30));
      lVar7 = 0;
      do {
        iVar3 = (int)lVar7;
        if (lVar7 == lVar5) goto LAB_037d105c;
        this_03 = (RtWeakPtrBase *)FUN_037cce50(uVar10,lVar7);
        pRVar6 = (RtWeakPtrBase *)FUN_037cce58(uVar13,uVar9);
        cVar2 = Sexy::RtWeakPtrBase::operator==(this_03,pRVar6);
        lVar7 = lVar7 + 1;
      } while (cVar2 == '\0');
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_00);
      local_28 = __gnu_cxx::
                 __normal_iterator<PullZombie*,std::vector<PullZombie,std::allocator<PullZombie>>>::
                 operator+((__normal_iterator<PullZombie*,std::vector<PullZombie,std::allocator<PullZombie>>>
                            *)&local_38,(long)iVar3);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_18,(__normal_iterator *)&local_28);
      std::vector<RisedZombie,std::allocator<RisedZombie>>::erase
                ((vector<RisedZombie,std::allocator<RisedZombie>> *)this_00,
                 CONCAT44(uStack_14,local_18));
      uVar13 = *(undefined8 *)(this + 0x10);
      uVar4 = FUN_037cce1c(uVar13,*(undefined8 *)(this + 0x18));
LAB_037d105c:
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar4);
  }
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x40);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x10));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_18,(__normal_iterator *)&local_28);
  uVar13 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin(this_01);
  uVar10 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end(this_01);
  std::vector<RisedZombie,std::allocator<RisedZombie>>::
  insert<__gnu_cxx::__normal_iterator<RisedZombie*,std::vector<RisedZombie,std::allocator<RisedZombie>>>,void>
            ((vector<RisedZombie,std::allocator<RisedZombie>> *)this_00,CONCAT44(uStack_14,local_18)
             ,uVar13,uVar10);
  std::vector<RisedZombie,std::allocator<RisedZombie>>::clear
            ((vector<RisedZombie,std::allocator<RisedZombie>> *)this_01);
  uVar13 = *(undefined8 *)(this + 0x28);
  iVar3 = FUN_037cce28(uVar13,*(undefined8 *)(this + 0x30));
  uVar1 = iVar3 - 1;
  if ((int)uVar1 < 0) {
LAB_037d13c8:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar11 = (long)(int)uVar1 + -1;
  lVar7 = lVar11;
  lVar5 = (long)(int)uVar1;
  do {
    lVar12 = lVar7;
    this_04 = (RtWeakPtr *)FUN_037cce50(uVar13,lVar5);
    this_05 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_04);
    if (this_05 == (ResourceInfo *)0x0) {
LAB_037d1374:
      lVar7 = FUN_037cce28(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
      if (lVar7 != 0) {
        local_38 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(this_00);
        local_28 = __gnu_cxx::
                   __normal_iterator<PullZombie*,std::vector<PullZombie,std::allocator<PullZombie>>>
                   ::operator+((__normal_iterator<PullZombie*,std::vector<PullZombie,std::allocator<PullZombie>>>
                                *)&local_38,lVar5);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_18,(__normal_iterator *)&local_28);
        std::vector<RisedZombie,std::allocator<RisedZombie>>::erase
                  ((vector<RisedZombie,std::allocator<RisedZombie>> *)this_00,
                   CONCAT44(uStack_14,local_18));
      }
    }
    else {
      if (*(float *)(this + 0x5c) < *(float *)(this_04 + 0x10)) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)&local_28);
        cVar2 = canZombieBeSeckilled
                          (this,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                 *)&local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)this_05 + 0x48))(this_05);
        }
      }
      if (*(float *)(this_04 + 0x20) < *(float *)(this_04 + 0x24)) {
        if (this_04[0x71] != (RtWeakPtr)0x0) {
          DVec3::DVec3((DVec3 *)&local_18);
          Sexy::SexyVector3::operator=((SexyVector3 *)(this_04 + 0x14),(SexyVector3 *)&local_18);
          this_04[0x71] = (RtWeakPtr)0x0;
        }
LAB_037d1108:
        fVar17 = *(float *)(this + 0x58);
        uVar16 = 0;
        EATextSquish::Vec3::Vec3(aVStack_58,0.0,0.0,fVar17);
      }
      else {
        if (this_04[0x71] == (RtWeakPtr)0x0) goto LAB_037d1108;
        uVar16 = 0;
        fVar17 = 0.0;
        EATextSquish::Vec3::Vec3(aVStack_58,0.0,0.0,0.0);
      }
      this_07 = (SexyVector3 *)(this_04 + 0x14);
      this_02 = (SexyVector3 *)(this_04 + 8);
      local_48 = Sexy::SexyVector3::operator*(this_07,fVar14);
      local_44 = uVar16;
      local_40 = fVar17;
      uVar15 = Sexy::SexyVector3::operator+(this_02,(SexyVector3 *)&local_48);
      local_38 = CONCAT44(uVar16,uVar15);
      local_30 = fVar17;
      uVar15 = Sexy::SexyVector3::operator*((SexyVector3 *)aVStack_58,fVar14 * fVar14 * 0.5);
      local_28 = CONCAT44(uVar16,uVar15);
      local_20 = fVar17;
      local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_38,(SexyVector3 *)&local_28);
      uStack_14 = uVar16;
      local_10 = fVar17;
      Sexy::SexyVector3::operator=(this_02,(SexyVector3 *)&local_18);
      uVar15 = Sexy::SexyVector3::operator*((SexyVector3 *)aVStack_58,fVar14);
      local_28 = CONCAT44(uVar16,uVar15);
      local_20 = fVar17;
      local_18 = Sexy::SexyVector3::operator+(this_07,(SexyVector3 *)&local_28);
      uStack_14 = uVar16;
      local_10 = fVar17;
      Sexy::SexyVector3::operator=(this_07,(SexyVector3 *)&local_18);
      pcVar8 = *(code **)(*(long *)this_05 + 0x78);
      *(float *)(this_04 + 0x24) = *(float *)(this_04 + 0x24) + fVar14;
      (*pcVar8)(this_05,this_02);
      fVar17 = (float)RealObject::CalcGroundZHeight((RealObject *)this_05,this_02);
      if ((*(float *)(this_04 + 0x10) < fVar17) && (*(float *)(this_04 + 0x1c) < 0.0)) {
        Zombie::SetIsFlying((Zombie *)this_05,(bool)this_04[0x70]);
        Zombie::SetIsControlled((Zombie *)this_05,false);
        cVar2 = Zombie::HasCondition(this_05,0x18);
        if (cVar2 != '\0') {
          Zombie::EndCondition((Zombie *)this_05,0x18);
        }
        iVar3 = ::RtReflectionDelegate::operator_cast_to_int
                          ((RtReflectionDelegate *)(this_04 + 0x28));
        if (iVar3 != 0) {
          this_06 = (Delegate1wRet<bool,SexyURL_const&> *)
                    RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::GetDelegate
                              ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)(this_04 + 0x28));
          Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(this_06,(SexyURL *)this_05);
        }
        goto LAB_037d1374;
      }
    }
    if (lVar12 == lVar11 - (ulong)uVar1) goto LAB_037d13c8;
    uVar13 = *(undefined8 *)(this + 0x28);
    lVar7 = lVar12 + -1;
    lVar5 = lVar12;
  } while( true );
}

