// Class: ZombieTeleportActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTeleportActionHandler::StaticClassInit() */

void ZombieTeleportActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieTeleportActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04f31024,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTeleportActionHandler::StaticGetClass() */

long * ZombieTeleportActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTeleportActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTeleportActionHandler::GetClass() const */

long * ZombieTeleportActionHandler::GetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTeleportActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTeleportActionHandler::disappearZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
ZombieTeleportActionHandler::disappearZombie
          (undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  
  uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  auVar3 = PVZ_EOT();
  Zombie::ApplyCondition((Zombie *)auVar3,0,uVar1,0x3f,1);
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  (**(code **)(*plVar2 + 0x80))(plVar2,1);
  return;
}


/* ZombieTeleportActionHandler::reappearZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
ZombieTeleportActionHandler::reappearZombie
          (undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  Zombie *pZVar1;
  long *plVar2;
  
  pZVar1 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::EndCondition(pZVar1,0x3f);
  pZVar1 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::EndCondition(pZVar1,0x11);
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  (**(code **)(*plVar2 + 0x80))(plVar2,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTeleportActionHandler::onEndAction() */

void __thiscall ZombieTeleportActionHandler::onEndAction(ZombieTeleportActionHandler *this)

{
  bool bVar1;
  RtWeakPtrBase *pRVar2;
  Zombie *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x24) == 2) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x38));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x38));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      pRVar2 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar2);
      this_00 = (Zombie *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      Zombie::TakeFatalDamage(this_00,(BoardEntity *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTeleportActionHandler::startDisappearingZombies() */

void __thiscall
ZombieTeleportActionHandler::startDisappearingZombies(ZombieTeleportActionHandler *this)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x24) = 3;
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x38));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x38));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_28);
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_28);
      disappearZombie(this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTeleportActionHandler::ZombieTeleportActionHandler() */

void __thiscall
ZombieTeleportActionHandler::ZombieTeleportActionHandler(ZombieTeleportActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined ***)this = &PTR_GetClass_06a164c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  return;
}


/* ZombieTeleportActionHandler::StaticNew() */

ZombieTeleportActionHandler * ZombieTeleportActionHandler::StaticNew(void)

{
  ZombieTeleportActionHandler *this;
  
  this = ::operator_new(0x50);
  ZombieTeleportActionHandler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTeleportActionHandler::playLoopingAnimationAgain() */

void __thiscall
ZombieTeleportActionHandler::playLoopingAnimationAgain(ZombieTeleportActionHandler *this)

{
  ZombossHydraSprayActionDefinition *pZVar1;
  Zombie *pZVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  code *pcVar4;
  float fVar5;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  if (*(int *)(this + 0x24) - 3U < 2) {
    if (((this[0x28] != (ZombieTeleportActionHandler)0x0) &&
        (fVar5 = (float)PVZ_T(), fVar5 < *(float *)(this + 0x34))) &&
       (this[0x28] != (ZombieTeleportActionHandler)0x0)) goto LAB_04f329fc;
    pZVar2 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(pZVar2);
    pcVar4 = *(code **)(*(long *)pZVar3 + 0x170);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimationDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    pZVar1 = pZVar1 + 0xf0;
  }
  else {
    pZVar2 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(pZVar2);
    pcVar4 = *(code **)(*(long *)pZVar3 + 0x170);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimationDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    pZVar1 = pZVar1 + 0xe8;
  }
  (*pcVar4)(pZVar3,pZVar1,0,
            (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
             *)aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
LAB_04f329fc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTeleportActionHandler::onAnimationDone(std::string const&) */

void __thiscall
ZombieTeleportActionHandler::onAnimationDone(ZombieTeleportActionHandler *this,string *param_1)

{
  string *psVar1;
  char cVar2;
  ZombossHydraSprayActionDefinition *pZVar3;
  Zombie *pZVar4;
  ZombieHydraHeadAnimRig *pZVar5;
  code *pcVar6;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  psVar1 = (string *)(pZVar3 + 0xe8);
  cVar2 = std::operator==(param_1,(string *)(pZVar3 + 0xe0));
  if (cVar2 != '\0') {
    *(undefined4 *)(this + 0x24) = 1;
    cVar2 = FUN_0547419c(psVar1);
    if (cVar2 == '\0') {
      pZVar4 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
      pZVar5 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(pZVar4);
      pcVar6 = *(code **)(*(long *)pZVar5 + 0x170);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimationDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_60,asStack_58);
      (*pcVar6)(pZVar5,psVar1,0,aRStack_50);
    }
    else {
      pZVar4 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
      pZVar5 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(pZVar4);
      pcVar6 = *(code **)(*(long *)pZVar5 + 0x170);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimationDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_60,asStack_58);
      (*pcVar6)(pZVar5,pZVar3 + 0xf0,0,aRStack_50);
    }
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  cVar2 = std::operator==(param_1,psVar1);
  if (cVar2 == '\0') {
    cVar2 = std::operator==(param_1,(string *)(pZVar3 + 0xf0));
    if (cVar2 != '\0') {
      ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
    }
  }
  else {
    playLoopingAnimationAgain(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTeleportActionHandler::~ZombieTeleportActionHandler() */

void __thiscall
ZombieTeleportActionHandler::~ZombieTeleportActionHandler(ZombieTeleportActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06a164c0;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x38));
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombieTeleportActionHandler::~ZombieTeleportActionHandler() */

void __thiscall
ZombieTeleportActionHandler::~ZombieTeleportActionHandler(ZombieTeleportActionHandler *this)

{
  ~ZombieTeleportActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTeleportActionHandler::createWarpingEffectAt(Sexy::RtWeakPtr<Zombie>, std::string,
   std::string) */

void __thiscall
ZombieTeleportActionHandler::createWarpingEffectAt
          (undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2,undefined8 param_3,
          undefined8 param_4)

{
  int iVar1;
  Effect_PopAnim *this;
  PopAnim *pPVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var3;
  float *pfVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_ZMECH_PORT_FX");
  nop();
  GetPAMByName(asStack_28);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var3);
  fVar7 = *pfVar4;
  p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  lVar5 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(p_Var3);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_20,fVar7,*(float *)(lVar5 + 4) - 40.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_20,-1);
  plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  iVar1 = (**(code **)(*plVar6 + 200))();
  FUN_04f2d488(this + 0x1c,iVar1 + -1);
  Effect_PopAnim::SetCentered(this,true);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
  AnimationSequence::AddSingleAnimation(aRStack_20,param_3,0);
  AnimationSequence::AddSingleAnimation(aRStack_20,param_4,0);
  Effect_PopAnim::PlayAnimationSequence(this,(AnimationSequence *)aRStack_20);
  AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTeleportActionHandler::warpZombieOut(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
ZombieTeleportActionHandler::warpZombieOut
          (ZombieTeleportActionHandler *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  ZombossHydraSprayActionDefinition *pZVar1;
  Zombie *pZVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  string asStack_28 [8];
  vector<ZombieConditions,std::allocator<ZombieConditions>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  pZVar2 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::SetIsControlled(pZVar2,true);
  pZVar2 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::SetIgnoresAllDamage(pZVar2,true);
  pZVar2 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::vector
            (avStack_20,(vector *)(pZVar1 + 0x78));
  Zombie::EndConditions(pZVar2,avStack_20);
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::~vector(avStack_20);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)param_2);
  std::string::string(asStack_28,"animation_start");
  std::string::string((string *)avStack_20,"animation_end");
  createWarpingEffectAt(this,aRStack_30,asStack_28,avStack_20);
  std::string::~string((string *)avStack_20);
  nop();
  std::string::~string(asStack_28);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  pZVar2 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::StartWarpOut(pZVar2,*(float *)(pZVar1 + 0x58));
  pZVar2 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)avStack_20,(RtWeakPtrBase *)asStack_28);
  Zombie::AddToTargetHistory(pZVar2,avStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTeleportActionHandler::startWarpingZombiesOut() */

void __thiscall
ZombieTeleportActionHandler::startWarpingZombiesOut(ZombieTeleportActionHandler *this)

{
  bool bVar1;
  char cVar2;
  Zombie *this_00;
  ZombossHydraSprayActionDefinition *pZVar3;
  RtWeakPtrBase *pRVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x24) = 2;
  local_8 = ___stack_chk_guard;
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  Zombie::ClearTargetHistory(this_00);
  pZVar3 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x38));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x38));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    pRVar4 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,pRVar4);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_28);
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_28);
      cVar2 = ZombieTeleportActionDefinition::IsValidTarget
                        ((ZombieTeleportActionDefinition *)pZVar3,aRStack_10,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_28);
        warpZombieOut(this,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTeleportActionHandler::placeZombieInNewPosition(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
ZombieTeleportActionHandler::placeZombieInNewPosition
          (ZombieTeleportActionHandler *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  ZombossHydraSprayActionDefinition ZVar1;
  undefined *this_00;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ZombossHydraSprayActionDefinition *pZVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  RtObject *pRVar11;
  ZombieCarnieMagicianArtifact *pZVar12;
  Zombie *pZVar13;
  long *plVar14;
  int local_24;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar7 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  puVar8 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_01);
  local_18 = *puVar8;
  local_10 = *(undefined4 *)(puVar8 + 1);
  uVar9 = ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  uVar4 = RealObject::IsOnTeam(uVar9,1);
  uVar4 = uVar4 & 0xff;
  lVar10 = ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  if (lVar10 == 0) {
LAB_04f396b4:
    pZVar13 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    iVar5 = Zombie::GetSizeType(pZVar13);
    if (iVar5 != 2) {
LAB_04f395dc:
      iVar5 = *(int *)(pZVar7 + 0x3c);
      goto LAB_04f395e0;
    }
LAB_04f396c8:
    iVar5 = *(int *)(pZVar7 + 0x40);
    if (uVar4 == 0) goto LAB_04f396d0;
LAB_04f395e4:
    iVar6 = BoardConstants::NUMBER_OF_COLUMNS();
    uVar4 = iVar6 - 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    BoardEntity::CalcGridPosition();
    if ((int)uVar4 < iVar5 + local_20) goto LAB_04f39610;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    BoardEntity::CalcGridPosition();
    iVar5 = BoardTransforms::GridToBoardSpaceX(iVar5 + local_20);
    local_18 = CONCAT44(local_18._4_4_,(float)iVar5);
LAB_04f39714:
    ZVar1 = pZVar7[0x68];
  }
  else {
    pRVar11 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    bVar2 = Sexy::RtObject::IsA<ZombieCarnieMagicianArtifact>(pRVar11);
    if (!bVar2) goto LAB_04f396b4;
    pRVar11 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    pZVar12 = Sexy::RtObject::Cast<ZombieCarnieMagicianArtifact>(pRVar11);
    cVar3 = FUN_04f2d4dc(pZVar12[0x861]);
    pZVar13 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    iVar5 = Zombie::GetSizeType(pZVar13);
    if (iVar5 == 2) goto LAB_04f396c8;
    if (cVar3 == '\0') goto LAB_04f395dc;
    iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
LAB_04f395e0:
    if (uVar4 != 0) goto LAB_04f395e4;
LAB_04f396d0:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    BoardEntity::CalcGridPosition();
    if (-1 < local_20 - iVar5) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      BoardEntity::CalcGridPosition();
      iVar5 = BoardTransforms::GridToBoardSpaceX(local_20 - iVar5);
      local_18 = CONCAT44(local_18._4_4_,(float)iVar5);
      goto LAB_04f39714;
    }
LAB_04f39610:
    iVar5 = BoardTransforms::GridToBoardSpaceX(uVar4);
    ZVar1 = pZVar7[0x68];
    local_18 = CONCAT44(local_18._4_4_,(float)iVar5);
  }
  if (ZVar1 != (ZombossHydraSprayActionDefinition)0x0) {
    iVar5 = RandRangeInt(0,1);
    iVar6 = RandRangeInt(0,*(int *)(pZVar7 + 0x6c));
    if (iVar5 == 0) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      BoardEntity::CalcGridPosition();
      if (local_24 - iVar6 < 0) {
        iVar5 = BoardTransforms::GridToBoardSpaceY(0);
        local_18 = CONCAT44((float)iVar5,(undefined4)local_18);
      }
      else {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        BoardEntity::CalcGridPosition();
        iVar5 = BoardTransforms::GridToBoardSpaceY(local_1c - iVar6);
        local_18 = CONCAT44((float)iVar5,(undefined4)local_18);
      }
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      BoardEntity::CalcGridPosition();
      iVar5 = BoardConstants::NUMBER_OF_ROWS();
      if (iVar6 + local_24 < iVar5) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        BoardEntity::CalcGridPosition();
        iVar5 = BoardTransforms::GridToBoardSpaceY(iVar6 + local_1c);
        local_18 = CONCAT44((float)iVar5,(undefined4)local_18);
      }
      else {
        iVar5 = BoardConstants::NUMBER_OF_ROWS();
        iVar5 = BoardTransforms::GridToBoardSpaceY(iVar5 + -1);
        local_18 = CONCAT44((float)iVar5,(undefined4)local_18);
      }
    }
    cVar3 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),(SexyVector3 *)&local_18);
    if (cVar3 == '\0') goto LAB_04f3964c;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  BoardEntity::CalcGridPosition();
  iVar5 = BoardTransforms::GridToBoardSpaceY(local_1c);
  local_18 = CONCAT44((float)iVar5,(undefined4)local_18);
LAB_04f3964c:
  plVar14 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  (**(code **)(*plVar14 + 0x78))(plVar14,&local_18);
  this_00 = gMessageRouter;
  pZVar13 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  MessageRouter::Broadcast<Zombie*,Zombie*>
            ((MessageRouter *)this_00,Message::ZombieReaddedToBoard,pZVar13);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTeleportActionHandler::warpZombieIn(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
ZombieTeleportActionHandler::warpZombieIn
          (ZombieTeleportActionHandler *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  int iVar2;
  ZombossHydraSprayActionDefinition *pZVar3;
  long lVar4;
  Zombie *pZVar5;
  long *plVar6;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  code *pcVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)param_2);
  reappearZombie(this,aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  lVar4 = FUN_04f2d66c(*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40));
  if (((lVar4 == 0) || (*(float *)(pZVar3 + 0x70) <= 0.0)) ||
     (iVar2 = RandRangeInt(0,100), *(float *)(pZVar3 + 0x70) <= (float)iVar2)) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)param_2);
    placeZombieInNewPosition(this,aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    Zombie::StartWarpIn(pZVar5,*(float *)(pZVar3 + 0x60));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_78,(RtWeakPtrBase *)param_2);
    std::string::string((string *)&local_70,"animation_start");
    std::string::string((string *)aRStack_68,"animation_end");
    createWarpingEffectAt(this,aRStack_78,(string *)&local_70,aRStack_68);
    std::string::~string((string *)aRStack_68);
    nop();
    std::string::~string((string *)&local_70);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    Zombie::SetIsControlled(pZVar5,false);
    pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::vector
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)aRStack_68,
               (vector *)(pZVar3 + 0x78));
    Zombie::EndConditions(pZVar5,aRStack_68);
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::~vector
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)aRStack_68);
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = (**(code **)(*plVar6 + 0x328))();
    if (cVar1 == '\0') {
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      (**(code **)(*plVar6 + 0x260))();
    }
    pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    Zombie::SetIgnoresAllDamage(pZVar5,false);
  }
  else {
    pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    Zombie::SetIgnoresAllDamage(pZVar5,false);
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04f2d664(*(undefined8 *)(this + 0x38),0);
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pcVar7 = *(code **)(*plVar6 + 0x120);
    Sexy::Point::Point((Point *)aRStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)0x0,local_70,local_6c,aRStack_68,0x1000,(Point *)aRStack_78,0);
    (*pcVar7)(plVar6,aRStack_68);
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTeleportActionHandler::startWarpingZombiesIn() */

void __thiscall
ZombieTeleportActionHandler::startWarpingZombiesIn(ZombieTeleportActionHandler *this)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x24) = 4;
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x38));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x38));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_28);
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_28);
      warpZombieIn(this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTeleportActionHandler::onUpdateAction() */

void __thiscall ZombieTeleportActionHandler::onUpdateAction(ZombieTeleportActionHandler *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if ((fVar1 < *(float *)(this + 0x2c)) || (*(int *)(this + 0x24) != 1)) {
    if (this[0x28] != (ZombieTeleportActionHandler)0x0) {
      fVar1 = (float)PVZ_T();
      if ((*(float *)(this + 0x30) <= fVar1) && (*(int *)(this + 0x24) == 2)) {
        startDisappearingZombies(this);
        return;
      }
      if (((this[0x28] != (ZombieTeleportActionHandler)0x0) &&
          (fVar1 = (float)PVZ_T(), *(float *)(this + 0x34) <= fVar1)) &&
         (*(int *)(this + 0x24) == 3)) {
        startWarpingZombiesIn(this);
        return;
      }
    }
  }
  else {
    startWarpingZombiesOut(this);
    if (this[0x28] == (ZombieTeleportActionHandler)0x0) {
      startDisappearingZombies(this);
      startWarpingZombiesIn(this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTeleportActionHandler::onStartAction() */

void __thiscall ZombieTeleportActionHandler::onStartAction(ZombieTeleportActionHandler *this)

{
  ZombossHydraSprayActionDefinition *pZVar1;
  long lVar2;
  Zombie *this_00;
  ZombieHydraHeadAnimRig *pZVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  ZombieTeleportActionDefinition::FindTargetsForWarp((ZombieWithActions *)pZVar1);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::operator=
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x38),(vector *)avStack_68);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector(avStack_68);
  lVar2 = FUN_04f2d66c(*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40));
  if (lVar2 == 0) {
    ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
  }
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(this_00);
  pcVar4 = *(code **)(*(long *)pZVar3 + 0x170);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string((string *)avStack_68,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_70,
             avStack_68);
  (*pcVar4)(pZVar3,pZVar1 + 0xe0,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)avStack_68);
  nop();
  Sexy::RtId::~RtId(aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  fVar5 = (float)PVZ_T();
  fVar7 = *(float *)(pZVar1 + 0x54);
  fVar6 = *(float *)(pZVar1 + 0x58);
  fVar8 = *(float *)(pZVar1 + 0x5c);
  this[0x28] = *(ZombieTeleportActionHandler *)(pZVar1 + 0x65);
  fVar6 = fVar5 + fVar7 + fVar6;
  *(float *)(this + 0x2c) = fVar5 + fVar7;
  *(float *)(this + 0x30) = fVar6;
  *(float *)(this + 0x34) = fVar6 + fVar8;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

