// Class: PlantGumnut


/* PlantGumnut::IsInvincible() const */

bool __thiscall PlantGumnut::IsInvincible(PlantGumnut *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) == 2;
}


/* PlantGumnut::PostInitialize() */

void __thiscall PlantGumnut::PostInitialize(PlantGumnut *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10);
  *(undefined1 *)(lVar1 + 0x119) = 0;
  *(undefined4 *)(lVar1 + 300) = 0;
  return;
}


/* PlantGumnut::CanApplyPlantfood() */

bool __thiscall PlantGumnut::CanApplyPlantfood(PlantGumnut *this)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*(long *)this + 0x180))();
  bVar1 = false;
  if (cVar2 == '\0') {
    bVar1 = *(int *)(*(long *)(this + 0x10) + 200) != 2;
  }
  return bVar1;
}


/* PlantGumnut::PlantGumnut() */

void __thiscall PlantGumnut::PlantGumnut(PlantGumnut *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_068219a0;
  return;
}


/* PlantGumnut::StaticNew() */

PlantGumnut * PlantGumnut::StaticNew(void)

{
  PlantGumnut *this;
  
  this = ::operator_new(0x28);
  PlantGumnut(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGumnut::StaticClassInit() */

void PlantGumnut::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantGumnut");
    (*pcVar2)(plVar1,asStack_10,FUN_04274c14,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGumnut::StaticGetClass() */

long * PlantGumnut::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantGumnut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGumnut::GetClass() const */

long * PlantGumnut::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantGumnut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGumnut::~PlantGumnut() */

void __thiscall PlantGumnut::~PlantGumnut(PlantGumnut *this)

{
  *(undefined ***)this = &PTR_GetClass_068219a0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantGumnut::~PlantGumnut() */

void __thiscall PlantGumnut::~PlantGumnut(PlantGumnut *this)

{
  ~PlantGumnut(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGumnut::calcZombieTargetWeight(Zombie*, PlantTargetParams&) */

void __thiscall
PlantGumnut::calcZombieTargetWeight(PlantGumnut *this,Zombie *param_1,PlantTargetParams *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = PlantFramework::calcZombieTargetWeight((PlantFramework *)this,param_1,param_2);
  FUN_04274684(aRStack_10,*(undefined8 *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  iVar2 = ClassBucketFilter::GetBucket
                    ((ClassBucketFilter *)(extraout_x0 + 0x300),(BoardEntity *)param_1);
  iVar3 = ClassBucketFilter::size((ClassBucketFilter *)(extraout_x0 + 0x300));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 + (iVar3 - iVar2) * 10000 + 10000);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGumnut::UpdateActions() */

void __thiscall PlantGumnut::UpdateActions(PlantGumnut *this)

{
  char cVar1;
  PopAnimRig *this_00;
  long *plVar2;
  PlantAnimRig *pPVar3;
  int iVar4;
  UIEasyButtonWidget *pUVar5;
  code *pcVar6;
  RtMixedPtrBase aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  pUVar5 = *(UIEasyButtonWidget **)(this + 0x10);
  iVar4 = *(int *)(pUVar5 + 200);
  local_8 = ___stack_chk_guard;
  if (iVar4 == 4) {
    cVar1 = (**(code **)(*(long *)this + 0x180))();
    if (cVar1 == '\0') {
      PlantFramework::FindTargetZombie(aRStack_58,this);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_58);
      if (cVar1 != '\0') {
        pUVar5 = *(UIEasyButtonWidget **)(this + 0x10);
        *(undefined4 *)(pUVar5 + 200) = 2;
        plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(pUVar5);
        pcVar6 = *(code **)(*plVar2 + 0x130);
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
        (*pcVar6)(plVar2,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
        pPVar3 = (PlantAnimRig *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        PlantAnimRig::SetState(pPVar3,0xe);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      goto LAB_04275724;
    }
    pUVar5 = *(UIEasyButtonWidget **)(this + 0x10);
    iVar4 = *(int *)(pUVar5 + 200);
  }
  if (iVar4 == 2) {
    this_00 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(pUVar5);
    cVar1 = PopAnimRig::IsPlayingAnything(this_00);
    if (cVar1 == '\0') {
      Plant::KillPlant(*(Plant **)(this + 0x10),1,0,1);
    }
  }
LAB_04275724:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGumnut::SetPopAnimDelegates(PlantAnimRig*) */

void __thiscall PlantGumnut::SetPopAnimDelegates(PlantGumnut *this,PlantAnimRig *param_1)

{
  PlantAnimRig *pPVar1;
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1<float> aDStack_68 [48];
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::SetPopAnimDelegates((PlantFramework *)this,param_1);
  pPVar1 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,popGumCallback);
  Sexy::Delegate1<float>::Delegate1<PlantGumnut,void(PlantGumnut::*)(float)>(aDStack_68,aCStack_98);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,popGumCallback);
  Sexy::Delegate1<float>::Delegate1<PlantGumnut,void(PlantGumnut::*)(float)>(aDStack_38,aCStack_80);
  PlantAnimRig::SetPlantDelegates(pPVar1,aDStack_68,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGumnut::launchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float, float) */

void __thiscall
PlantGumnut::launchProjectileAt
          (PlantGumnut *this,Projectile *param_1,SexyVector3 *param_2,float param_3,float param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_04275f8c(*(undefined8 *)(this + 0x10));
  fVar5 = *(float *)(lVar1 + 0x2d8);
  fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,param_3 * fVar5);
  fVar4 = *(float *)(lVar1 + 0x2dc);
  fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * fVar4);
  Projectile::LaunchAt(param_1,param_2,fVar2 + fVar5,fVar3 + fVar4);
  return;
}


/* PlantGumnut::isInBlackList(Sexy::RtWeakPtr<Zombie>) */

char __thiscall PlantGumnut::isInBlackList(PlantGumnut *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  Zombie *this_00;
  string *psVar2;
  string *psVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = 0;
  do {
    lVar4 = FUN_04275f8c(*(undefined8 *)(this + 0x10));
    uVar5 = FUN_042746e8(*(undefined8 *)(lVar4 + 0x2e8),*(undefined8 *)(lVar4 + 0x2f0));
    if (uVar5 <= uVar6) {
      return '\0';
    }
    this_00 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    psVar2 = (string *)Zombie::GetTypeName(this_00);
    lVar4 = FUN_04275f8c(*(undefined8 *)(this + 0x10));
    psVar3 = (string *)FUN_042746f4(*(undefined8 *)(lVar4 + 0x2e8),uVar6);
    cVar1 = std::operator==(psVar2,psVar3);
    uVar6 = uVar6 + 1;
  } while (cVar1 == '\0');
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGumnut::CanTargetZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

void PlantGumnut::CanTargetZombie(PlantGumnut *param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  long *plVar4;
  undefined8 uVar5;
  Zombie *pZVar6;
  RtObject *pRVar7;
  long lVar8;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = (**(code **)(*plVar4 + 0x330))();
  if (cVar1 == '\0') {
    uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar5,1);
    if (cVar1 == '\0') {
      uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      cVar1 = Zombie::HasCondition(uVar5,3);
      if (cVar1 == '\0') {
        uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        cVar1 = Zombie::HasCondition(uVar5,4);
        if (cVar1 == '\0') {
          uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          cVar1 = Zombie::HasCondition(uVar5,0x55);
          if (cVar1 == '\0') {
            uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            cVar1 = Zombie::HasCondition(uVar5,0x3f);
            if (cVar1 == '\0') {
              uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              cVar1 = Zombie::HasCondition(uVar5,0x11);
              if (cVar1 == '\0') {
                plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                cVar1 = (**(code **)(*plVar4 + 0x2a8))();
                if (cVar1 == '\0') {
                  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  cVar1 = (**(code **)(*plVar4 + 0x338))();
                  if (cVar1 == '\0') {
                    pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                    cVar1 = Zombie::HasFogImmune(pZVar6);
                    if (cVar1 == '\0') {
                      pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                      cVar1 = Zombie::IsBerserk(pZVar6);
                      if (cVar1 == '\0') {
                        pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                        cVar1 = Zombie::IsFlying(pZVar6);
                        if (cVar1 == '\0') {
                          pRVar7 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                          bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>(pRVar7);
                          if (!bVar2) {
                            pRVar7 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                            bVar2 = Sexy::RtObject::IsA<Zomboss>(pRVar7);
                            if (!bVar2) {
                              plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                              cVar1 = (**(code **)(*plVar4 + 0x4d8))();
                              if (cVar1 == '\0') {
                                plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                cVar1 = (**(code **)(*plVar4 + 0x508))();
                                if (cVar1 == '\0') {
                                  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                  cVar1 = FUN_02fd4354(*(undefined4 *)(lVar8 + 0xcc));
                                  if (cVar1 == '\0') {
                                    uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                    cVar1 = RealObject::IsOnTeam(uVar5,1);
                                    if (cVar1 == '\0') {
                                      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                                 (param_2);
                                      cVar1 = (**(code **)(*plVar4 + 0x410))();
                                      if (cVar1 != '\0') {
                                        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                                                  (aRStack_10,(RtWeakPtrBase *)param_2);
                                        bVar3 = isInBlackList(param_1,aRStack_10);
                                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
                                        bVar3 = bVar3 ^ 1;
                                        goto LAB_04276150;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar3 = 0;
LAB_04276150:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* PlantGumnut::calcGumHitpoints(Sexy::RtWeakPtr<Zombie>) */

undefined4 __thiscall
PlantGumnut::calcGumHitpoints(PlantGumnut *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  long lVar1;
  Zombie *this_00;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  lVar1 = FUN_04275f8c(*(undefined8 *)(this + 0x10));
  fVar5 = *(float *)(lVar1 + 0x2c8);
  fVar2 = (float)Plant::GetExtraHitPointsmodifier(*(Plant **)(this + 0x10));
  this_00 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  fVar3 = (float)Zombie::GetTotalHitpoints(this_00);
  uVar4 = NEON_fminnm(*(float *)(lVar1 + 0x2cc) * 0.01 * fVar3 + fVar5 * fVar2,
                      *(undefined4 *)(lVar1 + 0x2e0));
  return uVar4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGumnut::gumZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantGumnut::gumZombie(PlantGumnut *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  Zombie *this_00;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = Zombie::IsInWater(this_00);
  if (cVar1 == '\0') {
    uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    uVar4 = *(undefined8 *)(this + 0x10);
    cVar1 = FUN_042746a8(uVar4);
    if (cVar1 == '\0') {
      lVar3 = FUN_04275f8c(uVar4);
      lVar3 = lVar3 + 0x2b8;
    }
    else {
      lVar3 = FUN_04275f8c(uVar4);
      lVar3 = lVar3 + 0x2c0;
    }
    FUN_05475d88(asStack_10,lVar3);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)param_2);
    calcGumHitpoints(this,aRStack_18);
    Zombie::Gum(uVar2,asStack_10,*(undefined8 *)(this + 0x10));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGumnut::DoSpecial(int) */

void PlantGumnut::DoSpecial(int param_1)

{
  bool bVar1;
  char cVar2;
  PlantGumnut *pPVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined1 auStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  pPVar3 = (PlantGumnut *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)pPVar3 + 0x2b8))(auStack_30,pPVar3,0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_20,2,auStack_30,0xffffffff,0xffffffff);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar4);
    if (bVar1) {
      nop();
      pcVar5 = *(code **)(*(long *)pPVar3 + 0x3e0);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
      cVar2 = (*pcVar5)(pPVar3,aRStack_38,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      if (cVar2 != '\0') {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
        gumZombie(pPVar3,aRStack_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGumnut::popGumCallback(float) */

void PlantGumnut::popGumCallback(float param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  PlantGumnut *in_x0;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *extraout_x0;
  Projectile *pPVar8;
  undefined8 extraout_x0_00;
  long lVar9;
  code *pcVar10;
  SharkMinion *this;
  int iVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = FUN_04275f8c(*(undefined8 *)(in_x0 + 0x10));
  pcVar10 = *(code **)(*(long *)*(Plant **)(in_x0 + 0x10) + 0x1f8);
  if (pcVar10 == Plant::IsInPlantFoodState) {
    cVar2 = Plant::IsInPlantFoodState(*(Plant **)(in_x0 + 0x10));
  }
  else {
    cVar2 = (*pcVar10)();
  }
  if (cVar2 == '\0') {
    (**(code **)(*(long *)in_x0 + 0xa8))();
  }
  else {
    iVar11 = 0;
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(in_x0 + 0x10));
    iVar1 = *(int *)(lVar5 + 0x2d4);
    if (cVar2 == '\0') {
      iVar1 = *(int *)(lVar5 + 0x2d0);
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    EntityFinder::GetEntitiesOnBoard(avStack_20,2);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_20);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
    FUN_04277848(uVar6,uVar7);
    *(undefined4 *)(*(long *)(in_x0 + 0x10) + 0x150) = 1;
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar3)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      if (iVar11 == iVar1) {
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
        goto LAB_04277b10;
      }
      nop();
      pcVar10 = *(code **)(*(long *)in_x0 + 0x3e0);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)aRStack_38);
      cVar2 = (*pcVar10)();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      if (cVar2 != '\0') {
        iVar11 = iVar11 + 1;
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)aRStack_38);
        this = *(SharkMinion **)(in_x0 + 0x10);
        uVar4 = SharkMinion::getRow(this);
        pPVar8 = (Projectile *)
                 Plant::Fire((Plant *)this,(RtWeakPtr<Sexy::SoundResource> *)&local_30,uVar4,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        nop();
        FUN_05475d88((RtWeakPtr<Sexy::SoundResource> *)&local_30,lVar5 + 0x2b8);
        fVar14 = *(float *)(lVar5 + 0x2c8);
        fVar12 = (float)Plant::GetExtraHitPointsmodifier(*(Plant **)(in_x0 + 0x10));
        uVar4 = *(undefined4 *)(lVar5 + 0x2cc);
        uVar13 = *(undefined4 *)(lVar5 + 0x2e0);
        GumnutPlantfoodProjectile::InitializeGumValues
                  (fVar12 * fVar14,extraout_x0_00,(RtWeakPtr<Sexy::SoundResource> *)&local_30);
        std::string::~string((string *)&local_30);
        pcVar10 = *(code **)(*extraout_x0 + 0x3b0);
        lVar9 = FUN_04275f8c(*(undefined8 *)(in_x0 + 0x10));
        local_30 = (*pcVar10)(*(undefined4 *)(lVar9 + 0x2dc),extraout_x0);
        local_2c = uVar4;
        local_28 = uVar13;
        launchProjectileAt(in_x0,pPVar8,(SexyVector3 *)&local_30,0.1,0.1);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
    }
    *(undefined4 *)(*(long *)(in_x0 + 0x10) + 0x150) = 0xffffffff;
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
LAB_04277b10:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

