// Class: PoolDaylightStage


/* PoolDaylightStage::stopZombieGroans() */

void PoolDaylightStage::stopZombieGroans(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Stop_Seagull");
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Stop_Imp_Vox");
  StageModule::stopZombieGroans();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoolDaylightStage::onZombieTypeCountChange(Sexy::RtWeakPtr<ZombieType const>, int, int) */

void __thiscall
PoolDaylightStage::onZombieTypeCountChange
          (PoolDaylightStage *this,RtWeakPtrBase *param_2,int param_3,int param_4)

{
  char cVar1;
  string *psVar2;
  AudioMgr *pAVar3;
  char *pcVar4;
  string asStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  StageModule::onZombieTypeCountChange((StageModule *)this,aRStack_10,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_18,"seagull");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  nop();
  if (cVar1 != '\0') {
    if ((param_3 < 1) || (0 < param_4)) {
      if ((param_3 == 0) && (0 < param_4)) {
        pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar4,"Play_Seagull");
        pAVar3 = (AudioMgr *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SetRTPCValue(pAVar3,"SeagullZombieCount",(double)param_4);
      }
      else {
        pAVar3 = (AudioMgr *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SetRTPCValue(pAVar3,"SeagullZombieCount",(double)param_4);
      }
    }
    else {
      pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar4,"Stop_Seagull");
      pAVar3 = (AudioMgr *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SetRTPCValue(pAVar3,"SeagullZombieCount",(double)param_4);
    }
  }
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_18,"pirate_imp");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  nop();
  if (cVar1 != '\0') {
    if ((param_3 < 1) || (0 < param_4)) {
      if ((param_3 == 0) && (0 < param_4)) {
        pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar4,"Play_Imp_Vox");
        pAVar3 = (AudioMgr *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SetRTPCValue(pAVar3,"ImpZombieCount",(double)param_4);
      }
      else {
        pAVar3 = (AudioMgr *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SetRTPCValue(pAVar3,"ImpZombieCount",(double)param_4);
      }
    }
    else {
      pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar4,"Stop_Imp_Vox");
      pAVar3 = (AudioMgr *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SetRTPCValue(pAVar3,"ImpZombieCount",(double)param_4);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoolDaylightStage::renderBackground(Sexy::Graphics*) */

void __thiscall PoolDaylightStage::renderBackground(PoolDaylightStage *this,Graphics *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  SexyTransform2D aSStack_58 [8];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [20];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StageModule::renderBackground((StageModule *)this,param_1);
  if (((DAT_06ae2d10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06ae2d10), iVar1 != 0)) {
    Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ae2c30,490.0,220.0);
    __cxa_guard_release(&DAT_06ae2d10);
  }
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_58);
  uVar2 = FUN_03f1d290(DAT_06ae2c30);
  uVar3 = FUN_03f1d290(DAT_06ae2c34);
  FUN_03f1cee4(uVar2,uVar3,auStack_50,auStack_44);
  if (((DAT_06ae2cc0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06ae2cc0), iVar1 != 0)) {
    Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ae2ca8,580.0,300.0);
    __cxa_guard_release(&DAT_06ae2cc0);
  }
  Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_58);
  uVar2 = FUN_03f1d290(DAT_06ae2ca8);
  uVar3 = FUN_03f1d290(DAT_06ae2cac);
  FUN_03f1cee4(uVar2,uVar3,auStack_50,auStack_44);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  uVar2 = FUN_03f1d290(*(undefined4 *)(this + 0x1b4));
  uVar3 = FUN_03f1d290(*(undefined4 *)(this + 0x1b8));
  FUN_03f1cee4(uVar2,uVar3,auStack_28,auStack_1c);
  Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
  uVar2 = FUN_03f1d290(*(undefined4 *)(this + 0x1cc));
  uVar3 = FUN_03f1d290(*(undefined4 *)(this + 0x1d0));
  FUN_03f1cee4(uVar2,uVar3,auStack_28,auStack_1c);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PoolDaylightStage::initializeModule() */

void __thiscall PoolDaylightStage::initializeModule(PoolDaylightStage *this)

{
  undefined4 uVar1;
  
  StageModule::initializeModule((StageModule *)this);
  uVar1 = PVZ_EOT();
  this[0x1dd] = (PoolDaylightStage)0x0;
  this[0x1dc] = (PoolDaylightStage)0x0;
  *(undefined4 *)(this + 0x1b0) = uVar1;
  *(undefined4 *)(this + 0x1c8) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoolDaylightStage::StaticClassInit() */

void PoolDaylightStage::StaticClassInit(void)

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
    std::string::string(asStack_10,"PoolDaylightStage");
    (*pcVar2)(plVar1,asStack_10,FUN_03f1e9d4,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PoolDaylightStage::StaticGetClass() */

long * PoolDaylightStage::StaticGetClass(void)

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
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"PoolDaylightStage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PoolDaylightStage::ShowGuides(bool) */

void __thiscall PoolDaylightStage::ShowGuides(PoolDaylightStage *this,bool param_1)

{
  this[0x1dc] = (PoolDaylightStage)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoolDaylightStage::SpawnWaterSplashEffect(Sexy::SexyVector2, int) */

void PoolDaylightStage::SpawnWaterSplashEffect
               (float param_1,float param_2,undefined8 param_3,undefined4 param_4)

{
  Effect_PopAnim *this;
  ResourceInfo *pRVar1;
  RtClass *pRVar2;
  float fVar3;
  string asStack_38 [8];
  RtWeakPtr aRStack_30 [8];
  Vec3 aVStack_28 [16];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)ClampFloat(param_1,560.0,675.0);
  EATextSquish::Vec3::Vec3(aVStack_28,-95.0,-90.0,0.0);
  EATextSquish::Vec3::Vec3(aVStack_18,fVar3,param_2,0.0);
  EATextSquish::Vec3::operator+=(aVStack_18,aVStack_28);
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_38,"POPANIM_EFFECTS_WATER_SPLASH");
  GetPAMByName(asStack_38);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
  pRVar2 = (RtClass *)EffectAnimRig_WaterSplash::StaticGetClass();
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar1,pRVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  std::string::~string(asStack_38);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aVStack_18,-1);
  FUN_03f1cf5c(this + 0x1c,param_4);
  std::string::string((string *)aRStack_30,"water_splash_01");
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_30,2);
  std::string::~string((string *)aRStack_30);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PoolDaylightStage::PoolDaylightStage() */

void __thiscall PoolDaylightStage::PoolDaylightStage(PoolDaylightStage *this)

{
  StageModule::StageModule((StageModule *)this);
  this[0xe4] = (PoolDaylightStage)0x0;
  this[0xe5] = (PoolDaylightStage)0x0;
  *(undefined ***)this = &PTR_GetModuleClass_06797130;
  this[0xe6] = (PoolDaylightStage)0x0;
  this[0xe7] = (PoolDaylightStage)0x0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0xe8));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x118));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x148));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x178));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 400));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x198));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1b4));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1c0));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1cc));
  this[0x1d4] = (PoolDaylightStage)0x0;
  *(undefined4 *)(this + 0x1d8) = 0;
  return;
}


/* PoolDaylightStage::StaticNew() */

PoolDaylightStage * PoolDaylightStage::StaticNew(void)

{
  PoolDaylightStage *this;
  
  this = ::operator_new(0x1e0);
  PoolDaylightStage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoolDaylightStage::WaterEffChange(bool) */

void __thiscall PoolDaylightStage::WaterEffChange(PoolDaylightStage *this,bool param_1)

{
  Effect_PopAnim *pEVar1;
  string asStack_28 [8];
  PIInterpolator aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    if ((this[0xe5] == (PoolDaylightStage)0x0) && (this[0xe6] == (PoolDaylightStage)0x0)) {
      if (this[0xe7] == (PoolDaylightStage)0x0) {
        Sexy::PIInterpolator::PIInterpolator(aPStack_20);
        std::string::string(asStack_28,"idle_02");
        AnimationSequence::AddSingleAnimation(aPStack_20,asStack_28,0);
        std::string::~string(asStack_28);
        nop();
        std::string::string(asStack_28,"idle_03");
        PVZ_EOT();
        AnimationSequence::AddLoopingAnimation(aPStack_20,asStack_28,0);
        std::string::~string(asStack_28);
        nop();
        pEVar1 = (Effect_PopAnim *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 400));
        Effect_PopAnim::PlayAnimationSequence(pEVar1,(AnimationSequence *)aPStack_20);
        AnimationSequence::~AnimationSequence((AnimationSequence *)aPStack_20);
      }
    }
  }
  else if ((this[0xe5] == (PoolDaylightStage)0x0) && (this[0xe6] == (PoolDaylightStage)0x0)) {
    if (this[0xe7] == (PoolDaylightStage)0x0) {
      Sexy::PIInterpolator::PIInterpolator(aPStack_20);
      std::string::string(asStack_28,"idle_04");
      AnimationSequence::AddSingleAnimation(aPStack_20,asStack_28,0);
      std::string::~string(asStack_28);
      nop();
      std::string::string(asStack_28,"idle");
      PVZ_EOT();
      AnimationSequence::AddLoopingAnimation(aPStack_20,asStack_28,0);
      std::string::~string(asStack_28);
      nop();
      pEVar1 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 400));
      Effect_PopAnim::PlayAnimationSequence(pEVar1,(AnimationSequence *)aPStack_20);
      AnimationSequence::~AnimationSequence((AnimationSequence *)aPStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoolDaylightStage::DropZombieInOcean(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PoolDaylightStage::DropZombieInOcean(PoolDaylightStage *this,RtWeakPtr *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ResourceInfo *this_00;
  float *pfVar4;
  Zombie *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long lVar5;
  char *pcVar6;
  undefined4 local_20;
  undefined4 local_1c;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this_00);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,*pfVar4,pfVar4[1]);
  iVar3 = SharkMinion::getRow((SharkMinion *)this_00);
  Board::GetGridBoundingRect();
  SpawnWaterSplashEffect(local_20,local_1c,this,(iVar3 - local_c) + 300000);
  this_01 = (Zombie *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_01);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
  bVar1 = std::operator==((string *)(lVar5 + 8),"swashbuckler");
  if (bVar1) {
    pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar6,"Play_Zombie_HitWater");
  }
  else {
    pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar6,"Play_Zombie_Splash");
  }
  cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
  if (cVar2 == '\0') {
    thunk_FUN_03f1f0b8(gMessageRouter,this_00);
  }
  (**(code **)(*(long *)this_00 + 0x48))(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoolDaylightStage::onUpdate() */

void __thiscall PoolDaylightStage::onUpdate(PoolDaylightStage *this)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  float *pfVar8;
  RtObject *this_00;
  ZombiePirateCaptain *pZVar9;
  ZombiePirateParrot *pZVar10;
  Zombie *this_01;
  char *pcVar11;
  int extraout_w1;
  Board *this_02;
  float fVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = false;
  this_02 = *(Board **)(gLawnApp + 0x9f0);
  uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
  bVar1 = false;
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar7,0x29);
  do {
    bVar4 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar4) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      cVar3 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
      if (cVar3 != '\0') {
        if ((bVar1) && (bVar2)) {
          if (this[0x1dd] == (PoolDaylightStage)0x0) {
            pcVar11 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
            AudioMgr::SendEvent(pcVar11,"Play_Captain_Parrot");
            this[0x1dd] = (PoolDaylightStage)0x1;
          }
        }
        else if (this[0x1dd] != (PoolDaylightStage)0x0) {
          pcVar11 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
          AudioMgr::SendEvent(pcVar11,"Stop_Captain_Parrot");
          this[0x1dd] = (PoolDaylightStage)0x0;
        }
      }
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId((RtId *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    nop();
    pZVar9 = Sexy::RtObject::Cast<ZombiePirateCaptain>(this_00);
    if (pZVar9 == (ZombiePirateCaptain *)0x0) {
      pZVar10 = Sexy::RtObject::Cast<ZombiePirateParrot>(this_00);
      if (pZVar10 != (ZombiePirateParrot *)0x0) {
        bVar2 = true;
      }
    }
    else {
      bVar1 = true;
      pZVar9 = Sexy::RtObject::Cast<ZombiePirateCaptain>(this_00);
      cVar3 = FUN_03f1cf64(pZVar9[0x810]);
      if (cVar3 != '\0') {
        bVar2 = true;
      }
    }
    cVar3 = Zombie::IsOnGround((Zombie *)this_00);
    if (cVar3 != '\0') {
      pfVar8 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this_00);
      fVar12 = pfVar8[1];
      iVar5 = BoardTransforms::BoardSpaceToGridX(*pfVar8);
      iVar6 = BoardTransforms::BoardSpaceToGridYUnbounded(fVar12);
      if ((iVar6 < 0) || (*(int *)(this_02 + 0xfc) <= iVar6)) {
LAB_03f1f514:
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
        DropZombieInOcean(this,aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
      else {
        this_01 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        cVar3 = Zombie::IsControlled(this_01);
        if (cVar3 == '\0') {
          Sexy::Point::Point((Point *)aRStack_30,iVar5,iVar6);
          cVar3 = Board::IsPitOfDoom(this_02,(Point *)aRStack_30);
          if (cVar3 != '\0') goto LAB_03f1f514;
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* PoolDaylightStage::onLevelEnded() */

void PoolDaylightStage::onLevelEnded(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Stop_Bow_Wash_BG");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoolDaylightStage::registerForEvents() */

void __thiscall PoolDaylightStage::registerForEvents(PoolDaylightStage *this)

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
  StageModule::registerForEvents((StageModule *)this);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<PoolDaylightStage,void(PoolDaylightStage::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<PoolDaylightStage,void(PoolDaylightStage::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelEnded);
  Sexy::Delegate0::Delegate0<PoolDaylightStage,void(PoolDaylightStage::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gatherPlantingRestrictions);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<PoolDaylightStage,void(PoolDaylightStage::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoolDaylightStage::GetToxicZombieRow() */

void __thiscall PoolDaylightStage::GetToxicZombieRow(PoolDaylightStage *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  if (this[0xe5] == (PoolDaylightStage)0x0) {
    local_28 = CONCAT44(local_28._4_4_,1);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)&local_20,(int *)&local_28);
  }
  if (this[0xe6] == (PoolDaylightStage)0x0) {
    local_28 = CONCAT44(local_28._4_4_,2);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)&local_20,(int *)&local_28);
  }
  if (this[0xe7] == (PoolDaylightStage)0x0) {
    local_28 = CONCAT44(local_28._4_4_,3);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)&local_20,(int *)&local_28);
  }
  uVar5 = 0;
  lVar1 = FUN_03f1cf68(local_20,local_18);
  if (lVar1 != 0) {
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
    std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
              (uVar2,uVar3);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    puVar4 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    uVar5 = *puVar4;
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* PoolDaylightStage::~PoolDaylightStage() */

void __thiscall PoolDaylightStage::~PoolDaylightStage(PoolDaylightStage *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06797130;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 400));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x178));
  std::
  map<int,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>>>>
  ::~map((map<int,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>>>>
          *)(this + 0x148));
  std::
  map<int,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>>>>
  ::~map((map<int,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>>>>
          *)(this + 0x118));
  std::
  map<int,std::map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>>>>
  ::~map((map<int,std::map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>>>>
          *)(this + 0xe8));
  StageModule::~StageModule((StageModule *)this);
  return;
}


/* PoolDaylightStage::~PoolDaylightStage() */

void __thiscall PoolDaylightStage::~PoolDaylightStage(PoolDaylightStage *this)

{
  ~PoolDaylightStage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoolDaylightStage::showFloatIslandsUPDown(int, int, bool) */

void __thiscall
PoolDaylightStage::showFloatIslandsUPDown
          (PoolDaylightStage *this,int param_1,int param_2,bool param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>
  *pmVar5;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar6;
  Effect_PopAnim *pEVar7;
  long lVar8;
  undefined8 *puVar9;
  Plant *this_00;
  string *psVar10;
  PlantNameMapperServerID *pPVar11;
  undefined8 uVar12;
  ResourceInfo *pRVar13;
  ulong uVar14;
  GridItem *pGVar15;
  ulong uVar16;
  code *pcVar17;
  float fVar18;
  int local_f8;
  int local_f4 [3];
  string asStack_e8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  Insets aIStack_c0 [16];
  PIInterpolator aPStack_b0 [24];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_78;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_f8 = param_2;
  local_f4[0] = param_1;
  if (param_2 == 1) {
    if (param_3) {
      Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)asStack_68);
      std::string::string((string *)&local_80,"start");
      AnimationSequence::AddSingleAnimation((PIInterpolator *)asStack_68,(string *)&local_80,0);
      std::string::~string((string *)&local_80);
      nop();
      std::string::string((string *)&local_80,"loop");
      PVZ_EOT();
      AnimationSequence::AddLoopingAnimation((PIInterpolator *)asStack_68,(string *)&local_80,0);
      std::string::~string((string *)&local_80);
      nop();
      pmVar5 = (map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>
                *)std::
                  map<int,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>>>>
                  ::operator[]((map<int,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>>>>
                                *)(this + 0x148),&local_f8);
      pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
               std::
               map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>
               ::operator[](pmVar5,local_f4);
      pEVar7 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
      Effect_PopAnim::PlayAnimationSequence(pEVar7,(AnimationSequence *)asStack_68);
      AnimationSequence::~AnimationSequence((AnimationSequence *)asStack_68);
    }
    else {
      uVar16 = 0;
      Sexy::PIInterpolator::PIInterpolator(aPStack_b0);
      std::string::string(asStack_68,"end");
      AnimationSequence::AddSingleAnimation(aPStack_b0,asStack_68,0);
      std::string::~string(asStack_68);
      nop();
      std::string::string(asStack_68,"empty");
      PVZ_EOT();
      AnimationSequence::AddLoopingAnimation(aPStack_b0,asStack_68,0);
      std::string::~string(asStack_68);
      nop();
      pmVar5 = (map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>
                *)std::
                  map<int,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>>>>
                  ::operator[]((map<int,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>>>>
                                *)(this + 0x148),&local_f8);
      pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
               std::
               map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>
               ::operator[](pmVar5,local_f4);
      pEVar7 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
      Effect_PopAnim::PlayAnimationSequence(pEVar7,(AnimationSequence *)aPStack_b0);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_98);
      Sexy::Insets::Insets(aIStack_c0,local_f4[0],local_f8,1,1);
      uVar3 = operator|(4,1);
      EntityFinder::GetEntitiesInGridSquares
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_98,uVar3,
                 aIStack_c0);
      uVar12 = local_98;
      lVar8 = FUN_03f1cf7c(local_98,local_90);
      if (lVar8 != 0) {
        do {
          puVar9 = (undefined8 *)FUN_03f1cf88(uVar12,uVar16);
          this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar9);
          if (this_00 != (Plant *)0x0) {
            uVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
            uVar4 = SharkMinion::getRow((SharkMinion *)this_00);
            std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                      ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
            EntityFinder::GetEntitiesAtGridSquare
                      ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,4,
                       uVar3,uVar4);
            Plant::GetType();
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
            FUN_05475d88(asStack_e8,lVar8 + 8);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
            psVar10 = (string *)
                      Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
            ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
            pPVar11 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)asStack_68,(RtWeakPtrBase *)aRStack_e0);
            uVar3 = PlantNameMapperServerID::GetIdForType(pPVar11,asStack_68);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
            uVar12 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
            fVar18 = (float)PlantBoostMgr::GetPlantBoostValue
                                      ((PlantBoostMgr *)0x0,uVar12,uVar3,0x11,0);
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e0);
            pRVar13 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar8 + 0x28));
            lVar8 = FUN_03f1cf7c(local_80,local_78);
            if (lVar8 == 0) {
LAB_03f22820:
              if (((int)fVar18 != 1) && (pRVar13[0x24b] == (ResourceInfo)0x0)) {
                pcVar17 = *(code **)(*(long *)this_00 + 0x120);
                Sexy::Point::Point((Point *)&local_d0,-1,-1);
                Sexy::FastCurve::SetOutRange((FastCurve *)&local_c8,1.0,0.0);
                DamageInfo::DamageInfo
                          ((DamageInfo *)0x0,local_c8,local_c4,asStack_68,4,(Point *)&local_d0,0);
                (*pcVar17)(this_00,asStack_68);
                DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
              }
            }
            else {
              bVar1 = true;
              local_d8 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                  *)&local_80);
              local_d0 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)&local_80);
              while (bVar2 = __gnu_cxx::operator!=
                                       ((__normal_iterator *)&local_d8,
                                        (__normal_iterator *)&local_d0), bVar2) {
                puVar9 = (undefined8 *)
                         std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d8);
                pGVar15 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar9);
                if (pGVar15 != (GridItem *)0x0) {
                  GridItem::GetType();
                  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
                  FUN_05475d88((string *)&local_c8,lVar8 + 8);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
                  bVar2 = std::operator==((string *)&local_c8,"lilypad");
                  if (bVar2) {
                    bVar1 = false;
                  }
                  std::string::~string((string *)&local_c8);
                }
                eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                          ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_d8);
              }
              if (bVar1) goto LAB_03f22820;
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_e0);
            std::string::~string(asStack_e8);
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
          }
          uVar12 = local_98;
          uVar16 = uVar16 + 1;
          uVar14 = FUN_03f1cf7c(local_98,local_90);
        } while (uVar16 < uVar14);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_98);
      AnimationSequence::~AnimationSequence((AnimationSequence *)aPStack_b0);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PoolDaylightStage::upWaterGrid(int, int) */

void __thiscall PoolDaylightStage::upWaterGrid(PoolDaylightStage *this,int param_1,int param_2)

{
  map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *this_00;
  undefined1 *puVar1;
  int local_8;
  int local_4;
  
  local_8 = param_2;
  local_4 = param_1;
  this_00 = (map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)
            std::
            map<int,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>>>>
            ::operator[]((map<int,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>>>>
                          *)(this + 0x118),&local_8);
  puVar1 = (undefined1 *)
           std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::operator[]
                     (this_00,&local_4);
  *puVar1 = 0;
  return;
}


/* PoolDaylightStage::downWaterGrid(int, int) */

void __thiscall PoolDaylightStage::downWaterGrid(PoolDaylightStage *this,int param_1,int param_2)

{
  map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *this_00;
  undefined1 *puVar1;
  int local_8;
  int local_4;
  
  local_8 = param_2;
  local_4 = param_1;
  this_00 = (map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)
            std::
            map<int,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>>>>
            ::operator[]((map<int,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>>>>
                          *)(this + 0x118),&local_8);
  puVar1 = (undefined1 *)
           std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::operator[]
                     (this_00,&local_4);
  *puVar1 = 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoolDaylightStage::gatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
PoolDaylightStage::gatherPlantingRestrictions
          (PoolDaylightStage *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  RtWeakPtr *this_00;
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  PlantNameMapperServerID *pPVar5;
  undefined8 uVar6;
  ResourceInfo *pRVar7;
  map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *this_01;
  char *pcVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  Board *this_02;
  float fVar12;
  undefined4 local_10 [2];
  long local_8;
  
  uVar11 = *(uint *)(param_1 + 4);
  local_8 = ___stack_chk_guard;
  if ((uVar11 & 0xfffffffb) == 0) {
    bVar3 = std::operator==((string *)(param_2 + 0x10),"PlantLilyPad");
    if (bVar3) {
      local_10[0] = 0x39;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                 (PlantingReason *)local_10);
      uVar11 = *(uint *)(param_1 + 4);
    }
    else {
      uVar11 = *(uint *)(param_1 + 4);
    }
  }
  if (uVar11 - 1 < 3) {
    bVar3 = std::operator==((string *)(param_2 + 0x10),"PlantPowerPlant");
    if (bVar3) {
      local_10[0] = 0x3a;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                 (PlantingReason *)local_10);
    }
    pPVar5 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
    this_00 = (RtWeakPtr *)(param_2 + 0x28);
    uVar4 = PlantNameMapperServerID::GetIdForType(pPVar5,param_2);
    uVar6 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
    fVar12 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar6,uVar4,0x11,0);
    if (this[0x1d4] == (PoolDaylightStage)0x0) {
      pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      if (((int)fVar12 != 1) <= (byte)pRVar7[0x24b]) goto LAB_03f22da4;
    }
    else {
      pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      if (pRVar7[0x24b] != (ResourceInfo)0x0) goto LAB_03f22da4;
    }
    this_01 = (map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)
              std::
              map<int,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>>>>
              ::operator[]((map<int,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>>>>
                            *)(this + 0x118),(int *)(param_1 + 4));
    pcVar8 = (char *)std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::
                     operator[](this_01,(int *)param_1);
    if ((*pcVar8 != '\0') && (param_2 != (PlantType *)0x0)) {
      pPVar5 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
      PlantNameMapperServerID::GetIdForType(pPVar5,param_2);
      Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      iVar1 = *(int *)(param_1 + 4);
      iVar2 = *(int *)param_1;
      this_02 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)local_10,"");
      lVar9 = Board::GetPlantAt(this_02,iVar2,iVar1,(string *)local_10);
      std::string::~string((string *)local_10);
      nop();
      lVar10 = FUN_03f1e810(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
      if ((lVar10 == 0) &&
         ((lVar9 == 0 ||
          (bVar3 = Sexy::RtObject::IsA<PlantAquaVine>(*(RtObject **)(lVar9 + 0xa8)), !bVar3)))) {
        local_10[0] = 0x32;
        std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                  ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                   (PlantingReason *)local_10);
      }
    }
  }
LAB_03f22da4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoolDaylightStage::freshenWaterGrid() */

void __thiscall PoolDaylightStage::freshenWaterGrid(PoolDaylightStage *this)

{
  map<int,std::map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>>>>
  *this_00;
  map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>
  *pmVar1;
  undefined8 *puVar2;
  map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *pmVar3;
  ulong uVar4;
  char *pcVar5;
  int *piVar6;
  BoardRegion *pBVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  int local_38;
  int local_34;
  int local_30 [4];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  this_00 = (map<int,std::map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>>>>
             *)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  local_34 = 1;
  do {
    local_30[0] = 0;
    do {
      pmVar1 = (map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>
                *)std::
                  map<int,std::map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>>>>
                  ::operator[](this_00,&local_34);
      puVar2 = (undefined8 *)
               std::
               map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>
               ::operator[](pmVar1,local_30);
      pBVar7 = (BoardRegion *)*puVar2;
      Sexy::Insets::Insets((Insets *)&local_20,0,0,0,0);
      BoardRegion::SetRegionFromGridSquares(pBVar7,(TRect *)&local_20);
      local_30[0] = local_30[0] + 1;
    } while (local_30[0] < 5);
    local_34 = local_34 + 1;
  } while (local_34 < 4);
  local_38 = 1;
  do {
    local_34 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    local_30[0] = 0;
    while( true ) {
      iVar9 = local_30[0];
      pmVar3 = (map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)
               std::
               map<int,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>>>>
               ::operator[]((map<int,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>>>>
                             *)(this + 0x118),&local_38);
      uVar4 = std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::size
                        (pmVar3);
      uVar12 = local_20;
      if (uVar4 <= (ulong)(long)iVar9) break;
      pmVar3 = (map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)
               std::
               map<int,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>>>>
               ::operator[]((map<int,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>>>>
                             *)(this + 0x118),&local_38);
      pcVar5 = (char *)std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::
                       operator[](pmVar3,local_30);
      if (*pcVar5 != '\0') {
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)&local_20,local_30);
      }
      local_30[0] = local_30[0] + 1;
    }
    uVar8 = 0;
    iVar9 = 0;
    uVar4 = FUN_03f1cf68(local_20,local_18);
    iVar10 = 1;
    if (uVar4 != 0) {
      do {
        if (uVar8 == 0) {
          piVar6 = (int *)FUN_03f1cfc4(uVar12,0);
          iVar9 = *piVar6;
          iVar11 = iVar10;
        }
        else {
          piVar6 = (int *)FUN_03f1cfc4(uVar12,uVar8);
          if (*piVar6 == iVar9 + iVar10) {
            iVar11 = iVar10 + 1;
          }
          else {
            pmVar1 = (map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>
                      *)std::
                        map<int,std::map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>>>>
                        ::operator[](this_00,&local_38);
            puVar2 = (undefined8 *)
                     std::
                     map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>
                     ::operator[](pmVar1,&local_34);
            pBVar7 = (BoardRegion *)*puVar2;
            iVar11 = 1;
            Sexy::Insets::Insets((Insets *)local_30,iVar9,local_38,iVar10,1);
            BoardRegion::SetRegionFromGridSquares(pBVar7,(TRect *)local_30);
            uVar12 = local_20;
            piVar6 = (int *)FUN_03f1cfc4(local_20,uVar8);
            iVar9 = *piVar6;
            local_34 = local_34 + 1;
            uVar4 = FUN_03f1cf68(uVar12,local_18);
          }
        }
        if (uVar8 == uVar4 - 1) {
          pmVar1 = (map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>
                    *)std::
                      map<int,std::map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>>>>
                      ::operator[](this_00,&local_38);
          puVar2 = (undefined8 *)
                   std::
                   map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>
                   ::operator[](pmVar1,&local_34);
          pBVar7 = (BoardRegion *)*puVar2;
          Sexy::Insets::Insets((Insets *)local_30,iVar9,local_38,iVar11,1);
          BoardRegion::SetRegionFromGridSquares(pBVar7,(TRect *)local_30);
          uVar12 = local_20;
          uVar4 = FUN_03f1cf68(local_20,local_18);
        }
        uVar8 = uVar8 + 1;
        iVar10 = iVar11;
      } while (uVar8 < uVar4);
    }
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
    local_38 = local_38 + 1;
  } while (local_38 < 4);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoolDaylightStage::generatePlanks() */

void __thiscall PoolDaylightStage::generatePlanks(PoolDaylightStage *this)

{
  int iVar1;
  int iVar2;
  map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>
  *this_00;
  undefined8 *puVar3;
  BoardRegionTideWater *pBVar4;
  map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *this_01;
  undefined1 *puVar5;
  int iVar6;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = 1;
  do {
    local_c = 0;
    do {
      this_00 = (map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>
                 *)std::
                   map<int,std::map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>>>>
                   ::operator[]((map<int,std::map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>>>>
                                 *)(this + 0xe8),&local_10);
      puVar3 = (undefined8 *)
               std::
               map<int,BoardRegionTideWater*,std::less<int>,std::allocator<std::pair<int_const,BoardRegionTideWater*>>>
               ::operator[](this_00,&local_c);
      pBVar4 = Board::AddRegion<BoardRegionTideWater>(*(Board **)(gLawnApp + 0x9f0));
      *puVar3 = pBVar4;
      local_c = local_c + 1;
    } while (local_c < 5);
    local_10 = local_10 + 1;
  } while (local_10 < 4);
  local_10 = 1;
  do {
    local_c = 0;
    do {
      this_01 = (map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)
                std::
                map<int,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>>>>
                ::operator[]((map<int,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>>>>
                              *)(this + 0x118),&local_10);
      puVar5 = (undefined1 *)
               std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::
               operator[](this_01,&local_c);
      *puVar5 = 1;
      local_c = local_c + 1;
    } while (local_c < 9);
    local_10 = local_10 + 1;
  } while (local_10 < 4);
  iVar6 = 0;
  freshenWaterGrid(this);
  iVar2 = BoardConstants::NUMBER_OF_ROWS();
  if (0 < iVar2) {
    do {
      BoardConstants::NUMBER_OF_COLUMNS();
      iVar2 = 0;
      do {
        iVar1 = iVar2 + 1;
        Board::SetGridSquareType(*(Board **)(gLawnApp + 0x9f0),iVar2,iVar6);
        iVar2 = iVar1;
      } while (iVar1 != 9);
      iVar6 = iVar6 + 1;
      iVar2 = BoardConstants::NUMBER_OF_ROWS();
    } while (iVar6 < iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoolDaylightStage::onLoadComplete() */

void __thiscall PoolDaylightStage::onLoadComplete(PoolDaylightStage *this)

{
  map<int,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>>>>
  *this_00;
  bool bVar1;
  WaveManager *this_01;
  long lVar2;
  WaveActionPoolTerrainChangeProps *pWVar3;
  undefined8 *puVar4;
  ulong uVar5;
  RtObject *pRVar6;
  PoolDaylightStage *pPVar7;
  ResilienceTutorialIntroProperties *pRVar8;
  ResourceInfo *pRVar9;
  StandaloneEffect *pSVar10;
  UIWidget *pUVar11;
  PopAnimRig *pPVar12;
  map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>
  *pmVar13;
  RtWeakPtr<SpartanBambooMatrixSystem> *pRVar14;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar15;
  Effect_PopAnim *pEVar16;
  char *__s;
  Point *extraout_x1;
  Point *extraout_x1_00;
  int iVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined4 uVar22;
  float fVar23;
  int local_74;
  uint local_70 [2];
  int local_68;
  int local_64;
  string asStack_60 [8];
  float local_58;
  float local_54;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr aRStack_20 [24];
  long local_8;
  
  uVar21 = 0;
  local_8 = ___stack_chk_guard;
  this_01 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
  lVar2 = WaveManager::GetProps(this_01);
  std::
  vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
  ::vector((vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
            *)&local_38,(vector *)(lVar2 + 0x10));
  uVar20 = local_38;
  lVar2 = FUN_03f1cf90(local_38,local_30);
  if (lVar2 != 0) {
    do {
      uVar18 = 0;
      while( true ) {
        puVar4 = (undefined8 *)FUN_03f1cfa4(uVar20,uVar21);
        uVar19 = *puVar4;
        uVar5 = FUN_03f1cfb0(uVar19,puVar4[1]);
        if (uVar5 <= uVar18) break;
        pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03f1cfbc(uVar19,uVar18);
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
        if (lVar2 != 0) {
          puVar4 = (undefined8 *)FUN_03f1cfa4(local_38,uVar21);
          pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03f1cfbc(*puVar4,uVar18);
          pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
          pWVar3 = Sexy::RtObject::Cast<WaveActionPoolTerrainChangeProps>(pRVar6);
          if (pWVar3 != (WaveActionPoolTerrainChangeProps *)0x0) {
            this[0x1d4] = (PoolDaylightStage)0x1;
          }
        }
        uVar18 = uVar18 + 1;
        uVar20 = local_38;
      }
      uVar21 = uVar21 + 1;
      uVar18 = FUN_03f1cf90(uVar20,local_30);
    } while (uVar21 < uVar18);
  }
  FUN_03f1d19c(this + 0xe0);
  fVar23 = *(float *)(gLawnApp + 0x28dc) * 0.0006510417;
  Board::GetGridBoundingRect();
  EATextSquish::Vec3::Vec3((Vec3 *)&local_58,-63.0,-5.0,0.0);
  lVar2 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  bVar1 = false;
  if (lVar2 != 0) {
    bVar1 = false;
    pRVar6 = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    pPVar7 = Sexy::RtObject::Cast<PoolDaylightStage>(pRVar6);
    if (pPVar7 != (PoolDaylightStage *)0x0) {
      pRVar8 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      bVar1 = std::operator==((string *)(pRVar8 + 0x48),"IMAGE_BACKGROUNDS_POOL_NIGHT");
    }
  }
  local_74 = 1;
  uVar22 = PVZ_EOT();
  iVar17 = 1;
  this_00 = (map<int,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>>>>
             *)(this + 0x148);
  do {
    local_70[0] = 0;
    do {
      Sexy::Point::Point((Point *)aRStack_20,local_70[0],iVar17);
      BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)aRStack_20,extraout_x1);
      local_68 = (int)((float)local_68 + local_58);
      local_64 = (int)((float)local_64 + local_54);
      pmVar13 = (map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>
                 *)std::
                   map<int,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>>>>
                   ::operator[](this_00,&local_74);
      pRVar14 = (RtWeakPtr<SpartanBambooMatrixSystem> *)
                std::
                map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>
                ::operator[](pmVar13,(int *)local_70);
      Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(pRVar14,(RtWeakPtrBase *)aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      if ((local_70[0] & 1) == 0) {
        if (bVar1 == false) {
          pmVar13 = (map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>
                     *)std::
                       map<int,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>>>>
                       ::operator[](this_00,&local_74);
          pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    std::
                    map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>
                    ::operator[](pmVar13,(int *)local_70);
          pEVar16 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
          __s = "POPANIM_EFFECTS_ZOMBIE_POOL_TOXICWATER_UD1";
        }
        else {
          pmVar13 = (map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>
                     *)std::
                       map<int,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>>>>
                       ::operator[](this_00,&local_74);
          pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    std::
                    map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>
                    ::operator[](pmVar13,(int *)local_70);
          pEVar16 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
          __s = "POPANIM_EFFECTS_ZOMBIE_POOL_TOXICWATER_UD11";
        }
      }
      else if (bVar1 == false) {
        pmVar13 = (map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>
                   *)std::
                     map<int,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>>>>
                     ::operator[](this_00,&local_74);
        pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::
                  map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>
                  ::operator[](pmVar13,(int *)local_70);
        pEVar16 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
        __s = "POPANIM_EFFECTS_ZOMBIE_POOL_TOXICWATER_UD2";
      }
      else {
        pmVar13 = (map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>
                   *)std::
                     map<int,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>>>>
                     ::operator[](this_00,&local_74);
        pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::
                  map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>
                  ::operator[](pmVar13,(int *)local_70);
        pEVar16 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
        __s = "POPANIM_EFFECTS_ZOMBIE_POOL_TOXICWATER_UD22";
      }
      std::string::string(asStack_60,__s);
      GetPAMByName(asStack_60);
      pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
      Effect_PopAnim::CreatePopAnimRig(pEVar16,(PopAnim *)pRVar9,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      std::string::~string(asStack_60);
      nop();
      pmVar13 = (map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>
                 *)std::
                   map<int,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>>>>
                   ::operator[](this_00,&local_74);
      pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::
                map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>
                ::operator[](pmVar13,(int *)local_70);
      pSVar10 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_20,(float)local_68,(float)local_64,0.0);
      StandaloneEffect::SetBoardSpaceOrigin(pSVar10,(SexyVector3 *)aRStack_20,-1);
      pmVar13 = (map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>
                 *)std::
                   map<int,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>>>>
                   ::operator[](this_00,&local_74);
      pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::
                map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>
                ::operator[](pmVar13,(int *)local_70);
      pSVar10 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
      StandaloneEffect::SetKeepAlive(pSVar10,true);
      Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
      std::string::string(asStack_60,"empty");
      AnimationSequence::AddSingleAnimation(aRStack_20,asStack_60,0);
      std::string::~string(asStack_60);
      nop();
      std::string::string(asStack_60,"empty");
      AnimationSequence::AddLoopingAnimation(uVar22,aRStack_20,asStack_60,0);
      std::string::~string(asStack_60);
      nop();
      pmVar13 = (map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>
                 *)std::
                   map<int,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>>>>
                   ::operator[](this_00,&local_74);
      pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::
                map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>
                ::operator[](pmVar13,(int *)local_70);
      pEVar16 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
      Effect_PopAnim::PlayAnimationSequence(pEVar16,(AnimationSequence *)aRStack_20);
      pmVar13 = (map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>
                 *)std::
                   map<int,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>>>>
                   ::operator[](this_00,&local_74);
      pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::
                map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>
                ::operator[](pmVar13,(int *)local_70);
      pUVar11 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
      pPVar12 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar11);
      PopAnimRig::SetDrawScale(pPVar12,fVar23);
      pmVar13 = (map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>
                 *)std::
                   map<int,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>>>>
                   ::operator[](this_00,&local_74);
      pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::
                map<int,Sexy::RtWeakPtr<Effect_PopAnim>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<Effect_PopAnim>>>>
                ::operator[](pmVar13,(int *)local_70);
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
      FUN_03f1cf5c(lVar2 + 0x1c,0x24a57);
      AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_20);
      local_70[0] = local_70[0] + 1;
      iVar17 = local_74;
    } while ((int)local_70[0] < 9);
    iVar17 = local_74 + 1;
    local_74 = iVar17;
  } while (iVar17 < 2);
  Sexy::Point::Point((Point *)aRStack_20,0,1);
  BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)aRStack_20,extraout_x1_00);
  pRVar14 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 400);
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(pRVar14,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  pEVar16 = (Effect_PopAnim *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar14);
  std::string::string(asStack_60,"POPANIM_EFFECTS_ZOMBIE_POOL_TOXICWATER_CHANGE");
  GetPAMByName(asStack_60);
  pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(pEVar16,(PopAnim *)pRVar9,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::~string(asStack_60);
  nop();
  pSVar10 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar14);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_20,(float)(local_68 + -0x28),(float)(local_64 + -0x2b),0.0);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar10,(SexyVector3 *)aRStack_20,-1);
  pSVar10 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar14);
  StandaloneEffect::SetKeepAlive(pSVar10,true);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
  std::string::string(asStack_60,"idle");
  AnimationSequence::AddLoopingAnimation(uVar22,aRStack_20,asStack_60,0);
  std::string::~string(asStack_60);
  nop();
  pEVar16 = (Effect_PopAnim *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar14);
  Effect_PopAnim::PlayAnimationSequence(pEVar16,(AnimationSequence *)aRStack_20);
  pUVar11 = (UIWidget *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar14);
  pPVar12 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar11);
  PopAnimRig::SetDrawScale(pPVar12,fVar23);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar14);
  FUN_03f1cf5c(lVar2 + 0x1c,0x24a56);
  generatePlanks(this);
  AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_20);
  std::
  vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
  ::~vector((vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
             *)&local_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

