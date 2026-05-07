// Class: InfernoAPFProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoAPFProjectile::dissipateBackAnimation() */

void __thiscall InfernoAPFProjectile::dissipateBackAnimation(InfernoAPFProjectile *this)

{
  AttachedEffect *pAVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"linkedEffect");
  pAVar1 = (AttachedEffect *)Projectile::GetAttachedEffect((Projectile *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pAVar1 != (AttachedEffect *)0x0) {
    std::string::string(asStack_10,"animation");
    AttachedEffect::PlayAnimAndDestroy(pAVar1,asStack_10,2);
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
/* InfernoAPFProjectile::setUpBackAnimation() */

void __thiscall InfernoAPFProjectile::setUpBackAnimation(InfernoAPFProjectile *this)

{
  DVec3 aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3(aDStack_18);
  Projectile::AddAttachedEffect
            ((Projectile *)this,"linkedEffect","POPANIM_EFFECTS_INFERNO_PROJECTILE_BACK_AVATAR",
             "animation3",aDStack_18,0xffffffff,0,0,2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoAPFProjectile::StaticClassInit() */

void InfernoAPFProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"InfernoAPFProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03b0d978,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InfernoAPFProjectile::StaticGetClass() */

long * InfernoAPFProjectile::StaticGetClass(void)

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
  uVar2 = InfernoPFProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"InfernoAPFProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InfernoAPFProjectile::GetClass() const */

long * InfernoAPFProjectile::GetClass(void)

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
  uVar2 = InfernoPFProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"InfernoAPFProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoAPFProjectile::moveThroughTime(float) */

void InfernoAPFProjectile::moveThroughTime(float param_1)

{
  InfernoPFProjectile *in_x0;
  SexyVector3 *pSVar1;
  AttachedEffect *this;
  StandaloneEffect *this_00;
  float in_s1;
  float local_28;
  float local_24;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  InfernoPFProjectile::moveThroughTime(param_1);
  if (in_x0[0x24d] != (InfernoPFProjectile)0x0) {
    local_18[0] = InfernoPFProjectile::getRotateCenterPosition(in_x0);
    pSVar1 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)in_x0);
    local_28 = (float)Sexy::SexyVector3::operator-((SexyVector3 *)local_18,pSVar1);
    local_24 = in_s1;
    std::string::string((string *)local_18,"linkedEffect");
    this = (AttachedEffect *)Projectile::GetAttachedEffect((Projectile *)in_x0,(string *)local_18);
    std::string::~string((string *)local_18);
    nop();
    if (this != (AttachedEffect *)0x0) {
      this_00 = (StandaloneEffect *)AttachedEffect::GetEffect(this);
      StandaloneEffect::SetAttachmentOffset(this_00,(SexyVector3 *)&local_28);
    }
    Sexy::FastCurve::SetOutRange((FastCurve *)local_18,local_28,local_24);
    FUN_03b0bf3c(in_x0 + 0x40,(SexyVector3 *)local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoAPFProjectile::playDeathAnim() */

void __thiscall InfernoAPFProjectile::playDeathAnim(InfernoAPFProjectile *this)

{
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string(asStack_58,"animation2");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,InfernoProjectile::onDeathAnimComplete);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<InfernoAPFProjectile,void(InfernoProjectile::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InfernoAPFProjectile::InfernoAPFProjectile() */

void __thiscall InfernoAPFProjectile::InfernoAPFProjectile(InfernoAPFProjectile *this)

{
  InfernoPFProjectile::InfernoPFProjectile((InfernoPFProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_0672c2a0;
  *(undefined ***)(this + 0x10) = &PTR__InfernoAPFProjectile_0672c4e8;
  return;
}


/* InfernoAPFProjectile::StaticNew() */

InfernoAPFProjectile * InfernoAPFProjectile::StaticNew(void)

{
  InfernoAPFProjectile *this;
  
  this = ::operator_new(0x250);
  InfernoAPFProjectile(this);
  return this;
}


/* InfernoAPFProjectile::~InfernoAPFProjectile() */

void __thiscall InfernoAPFProjectile::~InfernoAPFProjectile(InfernoAPFProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0672c2a0;
  *(undefined ***)(this + 0x10) = &PTR__InfernoAPFProjectile_0672c4e8;
  InfernoPFProjectile::~InfernoPFProjectile((InfernoPFProjectile *)this);
  return;
}


/* non-virtual thunk to InfernoAPFProjectile::~InfernoAPFProjectile() */

void __thiscall InfernoAPFProjectile::~InfernoAPFProjectile(InfernoAPFProjectile *this)

{
  ~InfernoAPFProjectile(this + -0x10);
  return;
}


/* InfernoAPFProjectile::~InfernoAPFProjectile() */

void __thiscall InfernoAPFProjectile::~InfernoAPFProjectile(InfernoAPFProjectile *this)

{
  ~InfernoAPFProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to InfernoAPFProjectile::~InfernoAPFProjectile() */

void __thiscall InfernoAPFProjectile::~InfernoAPFProjectile(InfernoAPFProjectile *this)

{
  ~InfernoAPFProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoAPFProjectile::dropCarriedZombie() */

void __thiscall InfernoAPFProjectile::dropCarriedZombie(InfernoAPFProjectile *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *this_01;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  Zombie *pZVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 auStack_80 [3];
  undefined8 auStack_68 [3];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long lStack_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1e8);
  lStack_8 = ___stack_chk_guard;
  auStack_80[0] =
       std::
       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
       ::begin(this_00);
  auStack_68[0] =
       std::
       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
       ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)auStack_80,(__normal_iterator *)auStack_68), bVar1)
  {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)auStack_80);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&uStack_88,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&uStack_88);
    if (cVar2 != '\0') {
      pZVar4 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_88)
      ;
      Zombie::SetIsControlled(pZVar4,false);
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_88);
      cVar2 = (**(code **)(*plVar5 + 0x328))();
      if (cVar2 == '\0') {
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_88);
        cVar2 = (**(code **)(*plVar5 + 0x330))();
        if (cVar2 == '\0') {
          plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_88);
          (**(code **)(*plVar5 + 0x260))();
          pZVar4 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_88);
          plVar5 = (long *)Zombie::GetAnimRig(pZVar4);
          pcVar7 = *(code **)(*plVar5 + 0x118);
          RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
          RtReflectionDelegate(aRStack_50);
          (*pcVar7)(plVar5,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_88);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)auStack_80);
  }
  this_01 = (vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
            (this + 0x200);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear(this_01);
  if (this[0x24c] == (InfernoAPFProjectile)0x0) {
    BoardHeroPlantButton::GetHeroPlant();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)auStack_68);
    FUN_03b0c004(lVar6 + 0x24c);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)auStack_68);
    BoardHeroPlantButton::GetHeroPlant();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)auStack_68);
    InfernoPFProjectile::getCarriedZombies();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)auStack_68);
    uStack_88 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)auStack_80);
    auStack_68[0] =
         std::
         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
         ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)auStack_80);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&uStack_88,(__normal_iterator *)auStack_68),
          bVar1) {
      pRVar3 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_88);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&uStack_90,pRVar3);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                (this_01,(RtWeakPtr *)&uStack_90);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_90);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&uStack_88);
    }
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)auStack_80
              );
    InfernoPFProjectile::getCarriedZombies();
    uStack_90 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)auStack_68);
    uStack_88 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)auStack_68);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&uStack_90,(__normal_iterator *)&uStack_88),
          bVar1) {
      pRVar3 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_90);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,pRVar3);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                (this_01,(RtWeakPtr *)aRStack_98);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&uStack_90);
    }
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)auStack_68
              );
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoAPFProjectile::onProjectileInitialized() */

void __thiscall InfernoAPFProjectile::onProjectileInitialized(InfernoAPFProjectile *this)

{
  TimeChallengeEndLevelUI *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  InfernoPFProjectile::onProjectileInitialized((InfernoPFProjectile *)this);
  this[0x24d] = (InfernoAPFProjectile)0x0;
  this_00 = (TimeChallengeEndLevelUI *)Projectile::GetAnimRig((Projectile *)this);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,InfernoPFProjectile::onPopAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<InfernoAPFProjectile,void(InfernoPFProjectile::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aCStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

