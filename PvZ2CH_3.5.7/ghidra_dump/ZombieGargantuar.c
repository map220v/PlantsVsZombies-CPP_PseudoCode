// Class: ZombieGargantuar


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGargantuar::getAshPAMName() const */

void __thiscall ZombieGargantuar::getAshPAMName(ZombieGargantuar *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBIE_GARGANTUAR_ASH");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieGargantuar::ZombieGargantuar() */

void __thiscall ZombieGargantuar::ZombieGargantuar(ZombieGargantuar *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068a5160;
  *(undefined ***)(this + 0x10) = &PTR__ZombieGargantuar_068a5bb8;
  return;
}


/* ZombieGargantuar::~ZombieGargantuar() */

void __thiscall ZombieGargantuar::~ZombieGargantuar(ZombieGargantuar *this)

{
  *(undefined ***)this = &PTR_GetClass_068a5160;
  *(undefined ***)(this + 0x10) = &PTR__ZombieGargantuar_068a5bb8;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieGargantuar::~ZombieGargantuar() */

void __thiscall ZombieGargantuar::~ZombieGargantuar(ZombieGargantuar *this)

{
  ~ZombieGargantuar(this + -0x10);
  return;
}


/* ZombieGargantuar::~ZombieGargantuar() */

void __thiscall ZombieGargantuar::~ZombieGargantuar(ZombieGargantuar *this)

{
  ~ZombieGargantuar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieGargantuar::~ZombieGargantuar() */

void __thiscall ZombieGargantuar::~ZombieGargantuar(ZombieGargantuar *this)

{
  ~ZombieGargantuar(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGargantuar::getElectrocutePAMName() const */

void __thiscall ZombieGargantuar::getElectrocutePAMName(ZombieGargantuar *this)

{
  char cVar1;
  string *extraout_x1;
  string *in_x8;
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBIE_GARGANTUAR_SHOCK");
  nop();
  Zombie::GetElectrocuteColor();
  cVar1 = FUN_0547419c(aSStack_18);
  if (cVar1 == '\0') {
    FUN_05475ad8();
    Sexy::Upper(aSStack_18,extraout_x1);
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
  }
  std::string::~string((string *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieGargantuar::StaticNew() */

ZombieGargantuar * ZombieGargantuar::StaticNew(void)

{
  ZombieGargantuar *this;
  
  this = ::operator_new(0x808);
  ZombieGargantuar(this);
  return this;
}


/* ZombieGargantuar::updateState_ThrowImp() */

void __thiscall ZombieGargantuar::updateState_ThrowImp(ZombieGargantuar *this)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = Zombie::GetAnimRig((Zombie *)this);
  cVar1 = PopAnimRig::IsAnimFinished(uVar2,*(undefined4 *)(this + 0x804));
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x260))(this);
  }
  return;
}


/* ZombieGargantuar::onTakeFatalDamage(DamageInfo const&) */

void __thiscall ZombieGargantuar::onTakeFatalDamage(ZombieGargantuar *this,DamageInfo *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  bVar1 = TestFlag<DamageTypeFlags>(uVar2,0x1000);
  if ((!bVar1) && (bVar1 = TestFlag<DamageTypeFlags>(uVar2,0x80), !bVar1)) {
    (**(code **)(*(long *)this + 0x240))(this);
  }
  return;
}


/* ZombieGargantuar::isImpReadyToBeThrown() */

byte __thiscall ZombieGargantuar::isImpReadyToBeThrown(ZombieGargantuar *this)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  ZombieGargantuarProps *pZVar4;
  ulong uVar5;
  float *pfVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  
  pZVar4 = Zombie::GetProps<ZombieGargantuarProps>((Zombie *)this);
  uVar7 = *(undefined8 *)(pZVar4 + 0x210);
  uVar1 = *(uint *)(this + 0x800);
  uVar5 = FUN_046969dc(uVar7,*(undefined8 *)(pZVar4 + 0x218));
  if (uVar1 < uVar5) {
    fVar8 = (float)FUN_046969cc(*(undefined4 *)(this + 0x280));
    pfVar6 = (float *)FUN_046969e8(uVar7,(ulong)uVar1);
    fVar9 = *pfVar6;
    pZVar4 = Zombie::GetProps<ZombieGargantuarProps>((Zombie *)this);
    if ((((fVar8 < fVar9 * *(float *)(pZVar4 + 0x18)) &&
         (cVar2 = Zombie::HasCondition(this,0x40), cVar2 == '\0')) &&
        (cVar2 = Zombie::HasCondition(this,0x41), cVar2 == '\0')) &&
       (((cVar2 = Zombie::HasCondition(this,0x60), cVar2 == '\0' &&
         (cVar2 = Zombie::HasCondition(this,0x42), cVar2 == '\0')) &&
        (cVar2 = Zombie::HasCondition(this,0x43), cVar2 == '\0')))) {
      bVar3 = Zombie::HasCondition(this,0x44);
      return bVar3 ^ 1;
    }
  }
  return 0;
}


/* ZombieGargantuar::isFarEnoughOutToThrowImp() */

bool __thiscall ZombieGargantuar::isFarEnoughOutToThrowImp(ZombieGargantuar *this)

{
  float *pfVar1;
  ZombieGargantuarProps *pZVar2;
  float fVar3;
  
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar3 = *pfVar1;
  pZVar2 = Zombie::GetProps<ZombieGargantuarProps>((Zombie *)this);
  return *(float *)(pZVar2 + 0x228) < fVar3;
}


/* ZombieGargantuar::updateState_Walk() */

void __thiscall ZombieGargantuar::updateState_Walk(ZombieGargantuar *this)

{
  char cVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*(long *)this + 0x228))();
  if (lVar2 != 0) {
    Zombie::setZombieState((Zombie *)this,0x1f,0);
    return;
  }
  cVar1 = (**(code **)(*(long *)this + 0xa08))(this);
  if (((cVar1 != '\0') && (cVar1 = isFarEnoughOutToThrowImp(this), cVar1 != '\0')) &&
     (cVar1 = RealObject::IsOnTeam(this,2), cVar1 != '\0')) {
    Zombie::setZombieState((Zombie *)this,0x20,0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGargantuar::onEnterState_Smashing(ZombieState) */

void ZombieGargantuar::onEnterState_Smashing(Zombie *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  ZombieGargantuarProps *pZVar3;
  code *pcVar4;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar2 = (long *)Zombie::GetAnimRig(param_1);
  pcVar4 = *(code **)(*plVar2 + 0x168);
  std::string::string(asStack_40,"eat");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar1 = (*pcVar4)(plVar2,asStack_40,0,aDStack_38);
  *(undefined4 *)(param_1 + 0x804) = uVar1;
  std::string::~string(asStack_40);
  nop();
  pZVar3 = Zombie::GetProps<ZombieGargantuarProps>(param_1);
  RealObject::PlayPositionalSound((RealObject *)param_1,(string *)(pZVar3 + 600),0.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGargantuar::onEnterState_ThrowImp(ZombieState) */

void ZombieGargantuar::onEnterState_ThrowImp(Zombie *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  ZombieGargantuarProps *pZVar3;
  code *pcVar4;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar2 = (long *)Zombie::GetAnimRig(param_1);
  pcVar4 = *(code **)(*plVar2 + 0x168);
  std::string::string(asStack_40,"fire");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar1 = (*pcVar4)(plVar2,asStack_40,0,aDStack_38);
  *(undefined4 *)(param_1 + 0x804) = uVar1;
  std::string::~string(asStack_40);
  nop();
  pZVar3 = Zombie::GetProps<ZombieGargantuarProps>(param_1);
  RealObject::PlayPositionalSound((RealObject *)param_1,(string *)(pZVar3 + 0x260),0.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieGargantuar::SetHiddenImp(int) */

void __thiscall ZombieGargantuar::SetHiddenImp(ZombieGargantuar *this,int param_1)

{
  ZombieGargantuarProps *pZVar1;
  ZombieHydraHeadAnimRig *this_00;
  long lVar2;
  
  pZVar1 = Zombie::GetProps<ZombieGargantuarProps>((Zombie *)this);
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  lVar2 = FUN_046969e8(*(undefined8 *)(pZVar1 + 0x210),(long)param_1);
  ZombieAnimRig_Gargantuar::SetAmmoLayersVisibility
            ((ZombieAnimRig_Gargantuar *)this_00,(vector *)(lVar2 + 8),false);
  return;
}


/* ZombieGargantuar::GetImpTargetColumn() */

undefined4 __thiscall ZombieGargantuar::GetImpTargetColumn(ZombieGargantuar *this)

{
  ZombieGargantuarProps *pZVar1;
  
  pZVar1 = Zombie::GetProps<ZombieGargantuarProps>((Zombie *)this);
  return *(undefined4 *)(pZVar1 + 0x230);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGargantuar::findTarget() */

void __thiscall ZombieGargantuar::findTarget(ZombieGargantuar *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  Zombie *pZVar4;
  Zombie *this_00;
  RealObject *extraout_x0;
  Plant *extraout_x0_00;
  long lVar5;
  PlantGroup *extraout_x0_01;
  Zombie *pZVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 auStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::IsSuspended((Zombie *)this);
  if ((cVar1 == '\0') && (cVar1 = Zombie::IsIgnoreFindTarget((Zombie *)this), cVar1 == '\0')) {
    (**(code **)(*(long *)this + 0x3a0))(auStack_30,this);
    iVar3 = SharkMinion::getRow((SharkMinion *)this);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    pZVar4 = (Zombie *)Zombie::GetForcedTarget((Zombie *)this);
    (**(code **)(*(long *)this + 0xd0))((RtWeakPtr<Sexy::ResourceInfo> *)&local_38,this);
    EntityFinder::GetEntitiesTouchingRectangle
              (avStack_20,2,auStack_30,(iVar3 - local_38._4_4_) + 1,iVar3);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      nop();
      cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)this_00);
      if ((((((cVar1 != '\0') && (cVar1 = Zombie::IsBoss(this_00), cVar1 == '\0')) &&
            (cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 == '\0')) &&
           ((cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0' &&
            (cVar1 = Zombie::HasCondition(this_00,0x27), cVar1 == '\0')))) &&
          ((cVar1 = Zombie::HasCondition(this_00,0x25), cVar1 == '\0' &&
           ((cVar1 = Zombie::HasCondition(this_00,0x65), cVar1 == '\0' &&
            (cVar1 = Zombie::HasCondition(this_00,0x2c), cVar1 == '\0')))))) &&
         ((pZVar6 = this_00, pZVar4 == this_00 || (pZVar4 == (Zombie *)0x0)))) goto LAB_046974b4;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    (**(code **)(*(long *)this + 0xd0))((RtWeakPtr<Sexy::ResourceInfo> *)&local_38,this);
    EntityFinder::GetEntitiesTouchingRectangle
              (avStack_20,4,auStack_30,(iVar3 - local_38._4_4_) + 1,iVar3);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      nop();
      cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,extraout_x0);
      if (((cVar1 != '\0') &&
          (cVar1 = (**(code **)(*(long *)extraout_x0 + 0x218))(extraout_x0,this), cVar1 != '\0')) &&
         ((pZVar6 = (Zombie *)extraout_x0, pZVar4 == (Zombie *)extraout_x0 ||
          (pZVar4 == (Zombie *)0x0)))) goto LAB_046974b4;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    (**(code **)(*(long *)this + 0xd0))((RtWeakPtr<Sexy::ResourceInfo> *)&local_38,this);
    EntityFinder::GetEntitiesTouchingRectangle
              (avStack_20,1,auStack_30,(iVar3 - local_38._4_4_) + 1,iVar3);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar2)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      nop();
      cVar1 = Zombie::WillTargetPlant((Zombie *)this,extraout_x0_00);
      if ((cVar1 != '\0') && ((pZVar4 == (Zombie *)extraout_x0_00 || (pZVar4 == (Zombie *)0x0)))) {
        Plant::GetType();
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38)
        ;
        bVar2 = std::operator==((string *)(lVar5 + 8),"smallChestnut");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
        if (bVar2) {
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
          pZVar6 = (Zombie *)extraout_x0_00;
          goto LAB_046972f8;
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    (**(code **)(*(long *)this + 0xd0))((RtWeakPtr<Sexy::ResourceInfo> *)&local_38,this);
    EntityFinder::GetEntitiesTouchingRectangle
              (avStack_20,0x10,auStack_30,(iVar3 - local_38._4_4_) + 1,iVar3);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      nop();
      cVar1 = Zombie::CanNormalDamagePlantGroup((Zombie *)this,extraout_x0_01,false);
      if ((cVar1 != '\0') &&
         ((pZVar6 = (Zombie *)extraout_x0_01, pZVar4 == (Zombie *)extraout_x0_01 ||
          (pZVar4 == (Zombie *)0x0)))) goto LAB_046974b4;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    pZVar6 = (Zombie *)0x0;
LAB_046974b4:
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  else {
    pZVar6 = (Zombie *)0x0;
  }
LAB_046972f8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pZVar6);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGargantuar::onApplyCondition(ZombieConditions) */

void __thiscall ZombieGargantuar::onApplyCondition(ZombieGargantuar *this,int param_2)

{
  bool bVar1;
  ZombieGargantuarProps *pZVar2;
  ZombieGargantuarProjectilePair *pZVar3;
  ZombieHydraHeadAnimRig *this_00;
  undefined8 local_38;
  undefined8 local_30;
  ZombieGargantuarProjectilePair aZStack_28 [8];
  vector avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_2 - 0x40U < 5) || (param_2 == 0x60)) {
    pZVar2 = Zombie::GetProps<ZombieGargantuarProps>((Zombie *)this);
    local_38 = FUN_04696cf0(*(undefined8 *)(pZVar2 + 0x210));
    local_30 = FUN_04696d40(*(undefined8 *)(pZVar2 + 0x218));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1)
    {
      pZVar3 = (ZombieGargantuarProjectilePair *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      ZombieGargantuarProjectilePair::ZombieGargantuarProjectilePair(aZStack_28,pZVar3);
      this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      ZombieAnimRig_Gargantuar::SetAmmoLayersVisibility
                ((ZombieAnimRig_Gargantuar *)this_00,avStack_20,false);
      WorldResourceLoadState::~WorldResourceLoadState((WorldResourceLoadState *)aZStack_28);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_38);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGargantuar::fireImpCannon() */

void ZombieGargantuar::fireImpCannon(void)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  Zombie *in_x0;
  long lVar5;
  ZombieGargantuarProps *pZVar6;
  string *psVar7;
  RtObject *this;
  SexyVector3 *this_00;
  long *extraout_x0;
  ZombieHydraHeadAnimRig *this_01;
  ZombieFutureImp *this_02;
  Board *pBVar8;
  code *pcVar9;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 uVar10;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (lVar5 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0)), lVar5 != 0)) {
    pZVar6 = Zombie::GetProps<ZombieGargantuarProps>(in_x0);
    FUN_05475d88(asStack_28,pZVar6 + 0x250);
    psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar7);
    pBVar8 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
    this = (RtObject *)
           Board::AddZombie(pBVar8,(RtWeakPtr<Sexy::SoundResource> *)&local_18,0,
                            *(undefined4 *)(in_x0 + 0x50),0,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    cVar1 = Zombie::HasCondition();
    if (cVar1 != '\0') {
      PVZ_EOT();
      in_s1 = 0;
      Zombie::ApplyCondition((Zombie *)this,0x19,1);
    }
    cVar1 = Zombie::HasCondition();
    if (cVar1 != '\0') {
      PVZ_EOT();
      in_s1 = 0;
      Zombie::ApplyCondition((Zombie *)this,0x90,1);
      Zombie::SetFacing((Zombie *)this,1);
    }
    cVar1 = Zombie::HasCondition();
    if (cVar1 != '\0') {
      PVZ_EOT();
      in_s1 = 0;
      Zombie::ApplyCondition((Zombie *)this,0x77,1);
    }
    pcVar9 = *(code **)(*(long *)this + 0x78);
    this_00 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)in_x0);
    pZVar6 = Zombie::GetProps<ZombieGargantuarProps>(in_x0);
    local_18 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)(pZVar6 + 0x238));
    local_14 = in_s1;
    local_10 = in_s2;
    (*pcVar9)(this,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
    uVar3 = FUN_046969c0(*(undefined4 *)(in_x0 + 0x24));
    RealObject::JoinTeam((RealObject *)this,uVar3);
    uVar3 = Zombie::GetFacing(in_x0);
    Zombie::SetFacing((Zombie *)this,uVar3);
    if (*(code **)(*(long *)this + 0x270) != Zombie::LaunchedByGargantuar) {
      (**(code **)(*(long *)this + 0x270))(this);
    }
    pZVar6 = Zombie::GetProps<ZombieGargantuarProps>(in_x0);
    iVar4 = (**(code **)(*(long *)in_x0 + 0xa10))();
    iVar4 = BoardTransforms::GridToBoardSpaceX(iVar4);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)iVar4,*(float *)(this_00 + 4),0.0);
    uVar3 = *(undefined4 *)(pZVar6 + 0x234);
    uVar10 = *(undefined4 *)(pZVar6 + 0x244);
    bVar2 = Sexy::RtObject::IsA<ZombieFutureImp>(this);
    if (bVar2) {
      nop();
      ZombieFutureImp::SetIsFallingFromSpawn(this_02,true);
    }
    nop();
    (**(code **)(*extraout_x0 + 0xa08))(local_18,local_14,local_10,uVar10,uVar3);
    this_01 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(in_x0);
    lVar5 = FUN_046969e8(*(undefined8 *)(pZVar6 + 0x210),*(undefined4 *)(in_x0 + 0x800));
    ZombieAnimRig_Gargantuar::SetAmmoLayersVisibility
              ((ZombieAnimRig_Gargantuar *)this_01,(vector *)(lVar5 + 8),false);
    *(int *)(in_x0 + 0x800) = *(int *)(in_x0 + 0x800) + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    std::string::~string(asStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGargantuar::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieGargantuar::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  RtObject *this;
  PlantGroup *this_00;
  ZombieGargantuarProps *pZVar2;
  float fVar3;
  string *local_68;
  float local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"smash_left");
  if ((bVar1) || (bVar1 = std::operator==(param_4,"smash_righ"), bVar1)) {
    this = (RtObject *)(**(code **)(*(long *)param_1 + 0x228))(param_1);
    if (this != (RtObject *)0x0) {
      this_00 = Sexy::RtObject::Cast<PlantGroup>(this);
      if (this_00 == (PlantGroup *)0x0) {
        DamageInfo::DamageInfo((DamageInfo *)&local_68);
        local_68 = param_1;
        pZVar2 = Zombie::GetProps<ZombieGargantuarProps>((Zombie *)param_1);
        fVar3 = *(float *)(pZVar2 + 0x24c);
        local_60 = (float)Zombie::GetExtraDPSmodifier((Zombie *)param_1);
        local_60 = local_60 * fVar3;
        local_58 = 0x200000;
        (**(code **)(*(long *)this + 0x110))(this,(DamageInfo *)&local_68);
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      }
      else {
        PlantGroup::TakeSmashAttack(this_00,(BoardEntity *)param_1);
      }
    }
  }
  else {
    bVar1 = std::operator==(param_4,"cannon_fire");
    if (bVar1) {
      fireImpCannon();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGargantuar::StaticClassInit() */

void ZombieGargantuar::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieGargantuar");
      (*pcVar4)(plVar1,asStack_150,FUN_04698070,0x808,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGargantuar,void(ZombieGargantuar::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate0::Delegate0<ZombieGargantuar,void(ZombieGargantuar::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGargantuar,void(ZombieGargantuar::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Gargantuar_Smashing");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04697d6c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGargantuar,void(ZombieGargantuar::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate0::Delegate0<ZombieGargantuar,void(ZombieGargantuar::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGargantuar,void(ZombieGargantuar::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Gargantuar_ThrowImp");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04697d6c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieGargantuar::StaticGetClass() */

long * ZombieGargantuar::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieGargantuar::GetClass() const */

long * ZombieGargantuar::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieGargantuar::onInitialized() */

void __thiscall ZombieGargantuar::onInitialized(ZombieGargantuar *this)

{
  Zombie::onInitialized((Zombie *)this);
  *(undefined4 *)(this + 0x800) = 0;
  *(undefined4 *)(this + 0x804) = 0xffffffff;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGargantuar::TakeDamage(DamageInfo const&) */

void __thiscall ZombieGargantuar::TakeDamage(ZombieGargantuar *this,DamageInfo *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68,param_1);
  if ((*(RtObject **)param_1 != (RtObject *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<Plant>(*(RtObject **)param_1), bVar1)) {
    nop();
    Plant::GetType();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    bVar1 = std::operator==((string *)(lVar3 + 8),"shrinkingviolet");
    if (bVar1) {
      iVar2 = FUN_046969c4(*(undefined4 *)(*(long *)param_1 + 0x50));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
      if (iVar2 < 2) {
        DamageInfo::RemoveZombieCondition(aDStack_68,0x40);
        DamageInfo::RemoveZombieCondition(aDStack_68,0x42);
      }
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    }
  }
  Zombie::TakeDamage((Zombie *)this,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGargantuar::DropAllLoot() */

void __thiscall ZombieGargantuar::DropAllLoot(ZombieGargantuar *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  FestivalManager *pFVar4;
  undefined8 uVar5;
  string *psVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var7;
  undefined8 *puVar8;
  float fVar9;
  bool local_51;
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  float local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  DVec3 aDStack_28 [4];
  undefined4 local_24;
  DVec3 aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar9 = (float)FUN_046969cc(*(undefined4 *)(this + 0x280));
  if ((((fVar9 <= 0.0) || (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 != '\0')) &&
      (cVar1 = Zombie::GetHasDroppedLoot((Zombie *)this), cVar1 == '\0')) &&
     ((lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar3 == 0 ||
      (lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
      *(char *)(lVar3 + 0x112) == '\0')))) {
    pFVar4 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
    uVar5 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    cVar1 = FestivalManager::IsFestivalLevel(pFVar4,uVar5,1);
    if ((cVar1 == '\0') || (cVar1 = RealObject::IsOnTeam(this,2), cVar1 == '\0')) {
      Zombie::DropAllLoot((Zombie *)this);
    }
    else {
      std::string::string(asStack_50,"spring_mode");
      nop();
      std::string::string(asStack_48,"all");
      nop();
      Board::TryGargantuarDirectDropItemName(*(string **)(gLawnApp + 0x9f0),asStack_50);
      psVar6 = (string *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this);
      p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Board::AddDirectCollectable(*(SexyVector3 **)(gLawnApp + 0x9f0),psVar6);
      cVar1 = FUN_046969c8(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0xa01));
      if (p_Var7 != (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)0x0) {
        puVar8 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(p_Var7);
        if (490.0 <= *(float *)((long)puVar8 + 4)) {
          local_30 = *(undefined4 *)(puVar8 + 1);
          local_38 = (float)*puVar8;
          _local_38 = CONCAT44(0x43f50000,local_38);
          (**(code **)(*(long *)p_Var7 + 0x78))(p_Var7,&local_38);
          iVar2 = FUN_046969d0(*(undefined4 *)(p_Var7 + 0x188));
          if (iVar2 == 1) {
            DVec3::DVec3(aDStack_28);
            DVec3::DVec3(aDStack_18);
            Collectable::GetMotionNewtonianValues
                      ((Collectable *)p_Var7,(SexyVector3 *)aDStack_28,(SexyVector3 *)aDStack_18,
                       &local_51);
            local_24 = 0;
            Collectable::SetMotionNewtonian
                      ((Collectable *)p_Var7,(SexyVector3 *)aDStack_28,(SexyVector3 *)aDStack_18,
                       local_51);
          }
        }
        if ((cVar1 != '\0') &&
           (p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)Board::AddDirectCollectable(*(SexyVector3 **)(gLawnApp + 0x9f0),psVar6),
           p_Var7 != (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)0x0)) {
          puVar8 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost(p_Var7);
          local_30 = *(undefined4 *)(puVar8 + 1);
          local_38 = (float)*puVar8;
          uStack_34 = 0x43f50000;
          iVar2 = FUN_04696ac8(200);
          fVar9 = local_38 - (float)iVar2;
          local_38 = fVar9;
          iVar2 = FUN_04696ac8(0x96);
          _local_38 = CONCAT44(uStack_34,fVar9 + (float)iVar2);
          (**(code **)(*(long *)p_Var7 + 0x78))(p_Var7,&local_38);
          iVar2 = FUN_046969d0(*(undefined4 *)(p_Var7 + 0x188));
          if (iVar2 == 1) {
            DVec3::DVec3(aDStack_28);
            DVec3::DVec3(aDStack_18);
            Collectable::GetMotionNewtonianValues
                      ((Collectable *)p_Var7,(SexyVector3 *)aDStack_28,(SexyVector3 *)aDStack_18,
                       &local_51);
            local_24 = 0;
            Collectable::SetMotionNewtonian
                      ((Collectable *)p_Var7,(SexyVector3 *)aDStack_28,(SexyVector3 *)aDStack_18,
                       local_51);
          }
        }
      }
      std::string::~string(asStack_40);
      std::string::~string(asStack_48);
      std::string::~string(asStack_50);
    }
    MessageRouter::Post<Zombie*,ZombieGargantuar*>
              ((MessageRouter *)gMessageRouter,Message::ZombieDropLoot,this);
    Zombie::SetHasDroppedLoot((Zombie *)this,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

