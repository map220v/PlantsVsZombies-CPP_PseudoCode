// Class: NukeLauncherSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NukeLauncherSubSystem::StaticClassInit() */

void NukeLauncherSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"NukeLauncherEntry");
    (*pcVar3)(plVar2,asStack_10,FUN_0424627c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NukeLauncherSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_042465d4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NukeLauncherSubSystem::StaticGetClass() */

long * NukeLauncherSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NukeLauncherSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NukeLauncherSubSystem::GetClass() const */

long * NukeLauncherSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"NukeLauncherSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NukeLauncherSubSystem::canTransform(Zombie*, int) */

undefined8 __thiscall
NukeLauncherSubSystem::canTransform(NukeLauncherSubSystem *this,Zombie *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_04241f6c(*(undefined4 *)(param_1 + 0x50));
  if (param_2 < iVar1) {
    return 0;
  }
  uVar2 = Zombie::CanTakeFatalDamage(param_1);
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NukeLauncherSubSystem::getTransformType(Zombie*) */

void NukeLauncherSubSystem::getTransformType(Zombie *param_1)

{
  long lVar1;
  bool bVar2;
  RtObject *in_x1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (in_x1 != (RtObject *)0x0) {
    bVar2 = Sexy::RtObject::IsA<ZombieImp>(in_x1);
    if (bVar2) {
      std::string::string(in_x8,"radiated_small");
      nop();
      goto LAB_04243c28;
    }
    bVar2 = Sexy::RtObject::IsA<ZombieGargantuar>(in_x1);
    if (bVar2) {
      std::string::string(in_x8,"radiated_large");
      nop();
      goto LAB_04243c28;
    }
  }
  std::string::string(in_x8,"radiated_mid");
  nop();
LAB_04243c28:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NukeLauncherSubSystem::createTransformEffect(Sexy::SexyVector3 const&) */

void NukeLauncherSubSystem::createTransformEffect(SexyVector3 *param_1)

{
  undefined4 uVar1;
  Effect_PopAnim *this;
  PopAnim *pPVar2;
  SexyVector3 *in_x1;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18[0] = Sexy::SexyVector3::operator+(in_x1,(SexyVector3 *)&DAT_06af4650);
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_WITCHHAZEL_ATTACK");
  GetPAMByName(asStack_28);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  std::string::string((string *)aRStack_20,"fumeshroom_appear");
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_20,0);
  std::string::~string((string *)aRStack_20);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)local_18,-1);
  uVar1 = BoardTransforms::BoardSpaceToGridYKeepOnBoard(*(float *)(in_x1 + 4));
  uVar1 = Board::MakeRenderOrder(0x65130,uVar1,0);
  FUN_04241f5c(this + 0x1c,uVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NukeLauncherSubSystem::launch(NukeLauncherSubSystem::NukeLauncherEntry const&) */

void NukeLauncherSubSystem::launch(NukeLauncherEntry *param_1)

{
  int iVar1;
  char cVar2;
  ResourceInfo *this;
  ResourceInfo *pRVar3;
  long lVar4;
  RtWeakPtr *in_x1;
  int in_w2;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  iVar1 = *(int *)(in_x1 + 0x14);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 1) {
    uVar5 = 1;
  }
  else if (iVar1 == 2) {
    uVar5 = 2;
  }
  else {
    uVar5 = 0;
    if (iVar1 == 3) {
      uVar5 = 3;
    }
  }
  this = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(in_x1);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(in_x1 + 8);
  lVar4 = FUN_04242008(*(undefined8 *)(pRVar3 + 0x70),uVar5);
  if ((this == (ResourceInfo *)0x0) ||
     (cVar2 = FUN_0547419c((string *)(lVar4 + 0x50)), cVar2 != '\0')) {
    Sexy::Point::Point((Point *)&local_30,(TPoint *)(in_x1 + 0x18));
  }
  else {
    RealObject::PlayPositionalSound((RealObject *)this,(string *)(lVar4 + 0x50),0.0);
    Sexy::Point::Point((Point *)&local_30,(TPoint *)(in_x1 + 0x18));
  }
  if ((local_30 == 0xffffffff) || (local_2c == -1)) {
    local_30 = Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8));
    local_2c = Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
  }
  fVar7 = *(float *)(pRVar3 + 700);
  fVar6 = *(float *)(pRVar3 + 0x2c0);
  BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(ulong)local_30,local_2c,in_w2);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,*(float *)(lVar4 + 0x68),0.0,-*(float *)(lVar4 + 0x6c))
  ;
  uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)(lVar4 + 8));
  lVar4 = Board::AddProjectile
                    ((Board *)((float)local_28 + local_18 + fVar7),
                     (float)local_24 + local_14 + fVar6,local_10,uVar5,aRStack_20,this,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  FUN_04241f54(lVar4 + 0x24,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NukeLauncherSubSystem::NukeLauncherSubSystem() */

void __thiscall NukeLauncherSubSystem::NukeLauncherSubSystem(NukeLauncherSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_06816150;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* NukeLauncherSubSystem::StaticNew() */

NukeLauncherSubSystem * NukeLauncherSubSystem::StaticNew(void)

{
  NukeLauncherSubSystem *this;
  
  this = ::operator_new(0x40);
  NukeLauncherSubSystem(this);
  return this;
}


/* NukeLauncherSubSystem::registerForEvents() */

void __thiscall NukeLauncherSubSystem::registerForEvents(NukeLauncherSubSystem *this)

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
            ((ReceivedDataCallback *)this,onZombieConditionEnded);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,int,Sexy::CBMemberTranslatorX<NukeLauncherSubSystem,void(NukeLauncherSubSystem::*)(Zombie*,int)>>
            ((MessageRouter *)puVar1,Message::ZombieConditionEnded,&local_40);
  return;
}


/* NukeLauncherSubSystem::GetLauncherEntry(int) */

undefined8 __thiscall
NukeLauncherSubSystem::GetLauncherEntry(NukeLauncherSubSystem *this,int param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  cVar1 = std::
          vector<NukeLauncherSubSystem::NukeLauncherEntry,std::allocator<NukeLauncherSubSystem::NukeLauncherEntry>>
          ::empty((vector<NukeLauncherSubSystem::NukeLauncherEntry,std::allocator<NukeLauncherSubSystem::NukeLauncherEntry>>
                   *)(this + 0x10));
  if (cVar1 == '\0') {
    if (param_1 == -1) {
      uVar3 = std::vector<Sexy::RenderEffectTechnique,std::allocator<Sexy::RenderEffectTechnique>>::
              back((vector<Sexy::RenderEffectTechnique,std::allocator<Sexy::RenderEffectTechnique>>
                    *)(this + 0x10));
      return uVar3;
    }
    if (-1 < param_1) {
      uVar3 = *(undefined8 *)(this + 0x10);
      uVar2 = FUN_04241fd8(uVar3,*(undefined8 *)(this + 0x18));
      if ((ulong)(long)param_1 < uVar2) {
        uVar3 = FUN_04242000(uVar3,(long)param_1);
        return uVar3;
      }
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NukeLauncherSubSystem::doStun(Zombie*) */

void __thiscall NukeLauncherSubSystem::doStun(NukeLauncherSubSystem *this,Zombie *param_1)

{
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68);
  local_60 = 0x43af0000;
  (**(code **)(*(long *)param_1 + 0x110))(param_1,aDStack_68);
  Zombie::ApplyCondition((Zombie *)0x3f800000,0,param_1,0x18,1);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NukeLauncherSubSystem::~NukeLauncherSubSystem() */

void __thiscall NukeLauncherSubSystem::~NukeLauncherSubSystem(NukeLauncherSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_06816150;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x28));
  std::
  vector<NukeLauncherSubSystem::NukeLauncherEntry,std::allocator<NukeLauncherSubSystem::NukeLauncherEntry>>
  ::~vector((vector<NukeLauncherSubSystem::NukeLauncherEntry,std::allocator<NukeLauncherSubSystem::NukeLauncherEntry>>
             *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* NukeLauncherSubSystem::~NukeLauncherSubSystem() */

void __thiscall NukeLauncherSubSystem::~NukeLauncherSubSystem(NukeLauncherSubSystem *this)

{
  ~NukeLauncherSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NukeLauncherSubSystem::onZombieConditionEnded(Zombie*, int) */

void __thiscall
NukeLauncherSubSystem::onZombieConditionEnded
          (NukeLauncherSubSystem *this,Zombie *param_1,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  RtWeakPtrBase *pRVar5;
  long *plVar6;
  long lVar7;
  Zombie *this_01;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_90;
  RtWeakPtr<Sexy::SoundResource> aRStack_88 [8];
  RtWeakPtr aRStack_80 [8];
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_042439ec(*(undefined4 *)(param_1 + 0xcc));
  if (((cVar1 != '\0') || (param_2 != 0x58)) ||
     ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0 &&
      (cVar1 = Board::IsLevelEnded(*(Board **)(gLawnApp + 0x9f0)), cVar1 != '\0'))))
  goto LAB_04247288;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_90 = FUN_0424692c(uVar3,uVar4,param_1);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_90,(__normal_iterator *)&local_68);
  if (!bVar2) goto LAB_04247288;
  pRVar5 = (RtWeakPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_88,pRVar5);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  Zombie::GetOriginalZombie();
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_80);
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)aRStack_80);
    CthulhuActiniaSubSystem::hideShowOriginal
              ((CthulhuActiniaSubSystem *)this,
               (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_68,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    uVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
    (**(code **)(*plVar6 + 0x78))(plVar6,uVar3);
  }
  plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  cVar1 = (**(code **)(*plVar6 + 0x328))();
  if (cVar1 == '\0') {
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
    cVar1 = (**(code **)(*plVar6 + 0x330))();
    if (cVar1 != '\0') goto LAB_0424738c;
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
    fVar9 = (float)FUN_04241f9c(*(undefined4 *)(lVar7 + 0x280));
    if (fVar9 == 0.0) goto LAB_0424738c;
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_80);
    if (cVar1 != '\0') {
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
      cVar1 = (**(code **)(*plVar6 + 0x328))();
      if (cVar1 == '\0') {
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
        fVar9 = (float)FUN_04241f9c(*(undefined4 *)(lVar7 + 0x280));
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
        fVar10 = (float)FUN_04241fa4(*(undefined4 *)(lVar7 + 0x2a8));
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
        fVar11 = (float)FUN_04241fa0(*(undefined4 *)(lVar7 + 0x284));
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
        fVar12 = (float)FUN_04241fa8(*(undefined4 *)(lVar7 + 0x2ac));
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
        fVar13 = (float)FUN_04241fa0(*(undefined4 *)(lVar7 + 0x284));
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
        fVar14 = (float)FUN_04241fa8(*(undefined4 *)(lVar7 + 0x2ac));
        DamageInfo::DamageInfo((DamageInfo *)&local_68);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
        fVar15 = (float)FUN_04241fa0(*(undefined4 *)(lVar7 + 0x284));
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
        fVar16 = (float)FUN_04241fa8(*(undefined4 *)(lVar7 + 0x2ac));
        local_60 = (fVar16 + fVar15) - (fVar14 + fVar13) * ((fVar10 + fVar9) / (fVar12 + fVar11));
        this_01 = (Zombie *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
        Zombie::Heal(this_01);
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
        (**(code **)(*plVar6 + 0x110))
                  (plVar6,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                           *)&local_68);
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      }
    }
  }
  else {
LAB_0424738c:
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_80);
    if (cVar1 != '\0') {
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
      cVar1 = (**(code **)(*plVar6 + 0x328))();
      if (cVar1 == '\0') {
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
        pcVar8 = *(code **)(*plVar6 + 0x120);
        Sexy::Point::Point(aPStack_78,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)0x0,local_70,local_6c,
                   (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_68,4,aPStack_78,0);
        (*pcVar8)(plVar6,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)&local_68);
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      }
    }
  }
  plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  (**(code **)(*plVar6 + 0x80))(plVar6,1);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_88);
  if (cVar1 != '\0') {
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
    cVar1 = (**(code **)(*plVar6 + 0x328))();
    if (cVar1 == '\0') {
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
      (**(code **)(*plVar6 + 0x48))();
    }
  }
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_68,(__normal_iterator *)&local_90);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00,
             local_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
LAB_04247288:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NukeLauncherSubSystem::Update() */

void __thiscall NukeLauncherSubSystem::Update(NukeLauncherSubSystem *this)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04241fd8(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  uVar1 = iVar2 - 1;
  if (-1 < (int)uVar1) {
    lVar4 = (long)(int)uVar1 + -1;
    lVar3 = lVar4;
    lVar6 = (long)(int)uVar1;
    while( true ) {
      lVar5 = lVar3;
      fVar7 = (float)PVZ_T();
      lVar3 = FUN_04242000(*(undefined8 *)(this + 0x10),lVar6);
      if (*(float *)(lVar3 + 0x10) <= fVar7) {
        launch((NukeLauncherEntry *)this);
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x10));
        local_18 = __gnu_cxx::
                   __normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                   ::operator+((__normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                                *)&local_20,lVar6);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::
        vector<NukeLauncherSubSystem::NukeLauncherEntry,std::allocator<NukeLauncherSubSystem::NukeLauncherEntry>>
        ::erase((vector<NukeLauncherSubSystem::NukeLauncherEntry,std::allocator<NukeLauncherSubSystem::NukeLauncherEntry>>
                 *)(this + 0x10),local_10);
      }
      if (lVar5 == lVar4 - (ulong)uVar1) break;
      lVar3 = lVar5 + -1;
      lVar6 = lVar5;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* NukeLauncherSubSystem::AddTransformEntry(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
NukeLauncherSubSystem::AddTransformEntry(NukeLauncherSubSystem *this,RtWeakPtr *param_2)

{
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x28),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NukeLauncherSubSystem::transform(Zombie*, int) */

void __thiscall
NukeLauncherSubSystem::transform(NukeLauncherSubSystem *this,Zombie *param_1,int param_2)

{
  string *psVar1;
  ZombieType *this_00;
  SexyVector3 *pSVar2;
  long *plVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  RtWeakPtr<Sexy::SoundResource> aRStack_a8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_98 [8];
  undefined4 local_90 [10];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)param_1);
  createTransformEffect((SexyVector3 *)this);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)local_90);
  CthulhuActiniaSubSystem::hideShowOriginal((CthulhuActiniaSubSystem *)this,aRStack_68,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_90);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  getTransformType((Zombie *)this);
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a8,(RtWeakPtrBase *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string((string *)local_90);
  this_00 = (ZombieType *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_90);
  local_90[0] = FUN_04241f6c(*(undefined4 *)(param_1 + 0x50));
  plVar3 = *(long **)(gLawnApp + 0x9f0);
  pcVar4 = *(code **)(*plVar3 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_a8);
  pSVar2 = (SexyVector3 *)(*pcVar4)(plVar3,aRStack_68,0,(RtWeakPtr<Sexy::ResourceInfo> *)local_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (pSVar2 != (SexyVector3 *)0x0) {
    DamageInfo::DamageInfo((DamageInfo *)aRStack_68);
    fVar5 = (float)FUN_04241f9c(*(undefined4 *)(param_1 + 0x280));
    fVar6 = (float)FUN_04241fa4(*(undefined4 *)(param_1 + 0x2a8));
    fVar7 = (float)FUN_04241fa0(*(undefined4 *)(param_1 + 0x284));
    fVar8 = (float)FUN_04241fa8(*(undefined4 *)(param_1 + 0x2ac));
    fVar9 = (float)FUN_04241fa0(*(undefined4 *)(pSVar2 + 0x284));
    fVar10 = (float)FUN_04241fa8(*(undefined4 *)(pSVar2 + 0x2ac));
    local_60 = (fVar10 + fVar9) - (fVar10 + fVar9) * ((fVar6 + fVar5) / (fVar8 + fVar7));
    BoardEntity::PlaceOnBoard(pSVar2);
    Zombie::ApplyCondition((Zombie *)((float)((param_2 + -1) * 2) + 4.0),0,pSVar2,0x58,1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,(RtWeakPtrBase *)aRStack_a0);
    Zombie::SetOriginalZombie((Zombie *)pSVar2,aRStack_98);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,(RtWeakPtrBase *)aRStack_a0);
    AddTransformEntry(this,aRStack_98);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
    (**(code **)(*(long *)pSVar2 + 0x110))(pSVar2,aRStack_68);
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  }
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NukeLauncherSubSystem::tryTransform(Zombie*, int, int, bool) */

char __thiscall
NukeLauncherSubSystem::tryTransform
          (NukeLauncherSubSystem *this,Zombie *param_1,int param_2,int param_3,bool param_4)

{
  char cVar1;
  int iVar2;
  
  if (param_4) {
    cVar1 = canTransform(this,param_1,param_3);
  }
  else {
    iVar2 = Zombie::GetSizeType(param_1);
    if (iVar2 == 2) {
      return param_4;
    }
    cVar1 = canTransform(this,param_1,param_3);
  }
  if (cVar1 == '\0') {
    doStun(this,param_1);
    return '\0';
  }
  transform(this,param_1,param_2);
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NukeLauncherSubSystem::QueueShot(PlantNukeLauncher*, float, Sexy::Point const&, RocketType) */

void NukeLauncherSubSystem::QueueShot(long param_1)

{
  DragonBruitLauncherEntry aDStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  NukeLauncherEntry::NukeLauncherEntry((NukeLauncherEntry *)aDStack_28);
  std::
  vector<NukeLauncherSubSystem::NukeLauncherEntry,std::allocator<NukeLauncherSubSystem::NukeLauncherEntry>>
  ::push_back((vector<NukeLauncherSubSystem::NukeLauncherEntry,std::allocator<NukeLauncherSubSystem::NukeLauncherEntry>>
               *)(param_1 + 0x10),(NukeLauncherEntry *)aDStack_28);
  DragonBruitLauncherSubSystem::DragonBruitLauncherEntry::~DragonBruitLauncherEntry(aDStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

