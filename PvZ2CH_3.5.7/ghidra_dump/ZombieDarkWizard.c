// Class: ZombieDarkWizard


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkWizard::isValidSpellTarget(Zombie*) */

void __thiscall ZombieDarkWizard::isValidSpellTarget(ZombieDarkWizard *this,Zombie *param_1)

{
  char cVar1;
  undefined8 uVar2;
  float *pfVar3;
  float *pfVar4;
  TRect<int> *this_00;
  TRect aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (Zombie *)0x0) && (cVar1 = RealObject::IsOnTeam(this,2), cVar1 == '\0')) {
    (**(code **)(*(long *)this + 0x3a0))(aTStack_18,this);
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    if (*pfVar3 <= *pfVar4) {
      uVar2 = 1;
      goto LAB_04664158;
    }
    this_00 = (TRect<int> *)(**(code **)(*(long *)param_1 + 0x178))(param_1);
    cVar1 = Sexy::TRect<int>::Intersects(this_00,aTStack_18);
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_04664158;
    }
  }
  uVar2 = 0;
LAB_04664158:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkWizard::HasSheepedPlantInRow(int) const */

void __thiscall ZombieDarkWizard::HasSheepedPlantInRow(ZombieDarkWizard *this,int param_1)

{
  bool bVar1;
  char cVar2;
  RtWeakPtr *pRVar3;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = FUN_0466493c(*(undefined8 *)(this + 0x808));
  local_18 = FUN_0466498c(*(undefined8 *)(this + 0x810));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    pRVar3 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar3);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar3);
      BoardEntity::CalcGridPosition();
      bVar1 = true;
      if (local_c == param_1) goto LAB_04664b24;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  cVar2 = CardGameUtils::IsPlayingCardGame();
  bVar1 = false;
  if (cVar2 != '\0') {
    local_20 = FUN_046649dc(*(undefined8 *)(this + 0x820));
    local_18 = FUN_04664a2c(*(undefined8 *)(this + 0x828));
    while( true ) {
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
      if (!bVar1) break;
      pRVar3 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar3);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar3);
        BoardEntity::CalcGridPosition();
        if (param_1 == local_c) {
          bVar1 = true;
          break;
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    }
  }
LAB_04664b24:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* ZombieDarkWizard::ZombieDarkWizard() */

void __thiscall ZombieDarkWizard::ZombieDarkWizard(ZombieDarkWizard *this)

{
  undefined4 uVar1;
  
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068905b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieDarkWizard_06890fe8;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x800) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x808));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x820));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x838));
  return;
}


/* ZombieDarkWizard::StaticNew() */

ZombieDarkWizard * ZombieDarkWizard::StaticNew(void)

{
  ZombieDarkWizard *this;
  
  this = ::operator_new(0x850);
  ZombieDarkWizard(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkWizard::isValidSpellTarget(PlantGroup*) */

void __thiscall ZombieDarkWizard::isValidSpellTarget(ZombieDarkWizard *this,PlantGroup *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  ZombieDarkWizardProps *pZVar6;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar7;
  long lVar8;
  ulong uVar9;
  float *pfVar10;
  float *pfVar11;
  TRect<int> *this_00;
  ulong uVar12;
  Point aPStack_20 [8];
  TRect aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((param_1 == (PlantGroup *)0x0) || (cVar1 = PlantGroup::HasPlantfoodedPlant(), cVar1 != '\0')
       ) || (cVar1 = PlantGroup::HasInvinciblePlant(), cVar1 != '\0')) ||
     ((bVar2 = PlantGroup::CanBeTargetedBy(param_1,(BoardEntity *)this,false), bVar2 == 0 ||
      (cVar1 = RealObject::IsOnTeam(this,1), cVar1 != '\0')))) {
LAB_046651dc:
    bVar2 = 0;
  }
  else {
    puVar5 = (undefined8 *)PlantGroup::Plants();
    for (uVar12 = 0; uVar9 = FUN_0466342c(*puVar5,puVar5[1]), uVar12 < uVar9; uVar12 = uVar12 + 1) {
      pZVar6 = Zombie::GetProps<ZombieDarkWizardProps>((Zombie *)this);
      pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04663440(*puVar5,uVar12);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
      cVar1 = PlantRestrictionSet::IsExcluded((Plant *)(pZVar6 + 0x240));
      if (cVar1 != '\0') goto LAB_046651dc;
      pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04663440(*puVar5,uVar12);
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
      if (*(int *)(lVar8 + 200) == 3) goto LAB_046651dc;
    }
    (**(code **)(*(long *)this + 0x3a0))(aTStack_18,this);
    pfVar10 = (float *)std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      *)param_1);
    pfVar11 = (float *)std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      *)this);
    if (*pfVar11 < *pfVar10) {
      this_00 = (TRect<int> *)(**(code **)(*(long *)param_1 + 0x178))(param_1);
      cVar1 = Sexy::TRect<int>::Intersects(this_00,aTStack_18);
      if (cVar1 == '\0') goto LAB_046651dc;
    }
    cVar1 = NewPVPUtils::IsPlayingNewPVP();
    if (cVar1 != '\0') {
      BoardEntity::CalcColumnPosition((BoardEntity *)this);
      iVar3 = SharkMinion::getRow((SharkMinion *)this);
      Sexy::Point::Point(aPStack_20,5,iVar3);
      cVar1 = NewPVPUtils::IsOppoentRegion(aPStack_20);
      if (cVar1 == '\0') {
        iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
        iVar4 = SharkMinion::getRow((SharkMinion *)param_1);
        Sexy::Point::Point(aPStack_20,iVar3,iVar4);
        bVar2 = NewPVPUtils::IsOppoentRegion(aPStack_20);
        bVar2 = bVar2 ^ 1;
      }
      else {
        iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
        iVar4 = SharkMinion::getRow((SharkMinion *)param_1);
        Sexy::Point::Point(aPStack_20,iVar3,iVar4);
        bVar2 = NewPVPUtils::IsOppoentRegion(aPStack_20);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* ZombieDarkWizard::updateState_Eat() */

void __thiscall ZombieDarkWizard::updateState_Eat(ZombieDarkWizard *this)

{
  char cVar1;
  RtObject *this_00;
  Plant *pPVar2;
  RiftThemeFastSpell *pRVar3;
  
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))();
  if (this_00 != (RtObject *)0x0) {
    pPVar2 = Sexy::RtObject::Cast<Plant>(this_00);
    if (pPVar2 != (Plant *)0x0) {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      return;
    }
    (**(code **)(*(long *)this + 0x958))(this,this_00);
    return;
  }
  cVar1 = Zombie::IsSuspended((Zombie *)this);
  if (cVar1 == '\0') {
    pRVar3 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
    if ((pRVar3 == (RiftThemeFastSpell *)0x0) || (cVar1 = Creature::IsOnBoard(), cVar1 == '\0')) {
      Zombie::setZombieState((Zombie *)this,1,0);
      return;
    }
    (**(code **)(*(long *)this + 600))(this);
  }
  return;
}


/* ZombieDarkWizard::onAnimationDone(std::string const&) */

void ZombieDarkWizard::onAnimationDone(string *param_1)

{
  char cVar1;
  RiftThemeFastSpell *pRVar2;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((cVar1 == '\0') && (cVar1 = Zombie::isInState((Zombie *)param_1,0x1f), cVar1 != '\0')) {
    pRVar2 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
    if ((pRVar2 == (RiftThemeFastSpell *)0x0) || (cVar1 = Creature::IsOnBoard(), cVar1 == '\0')) {
      (**(code **)(*(long *)param_1 + 0x260))(param_1);
    }
    else {
      (**(code **)(*(long *)param_1 + 600))(param_1);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkWizard::revertSheepPlants() */

void __thiscall ZombieDarkWizard::revertSheepPlants(ZombieDarkWizard *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar1;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar2;
  char cVar3;
  SheepInfo *pSVar4;
  Effect_PopAnim *pEVar5;
  StandaloneEffect *this_01;
  RtWeakPtrBase *pRVar6;
  RtObject *pRVar7;
  PlantGroup *pPVar8;
  Zombie *pZVar9;
  float fVar10;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar10 = (float)BoardHelpers::ApplyLevelBasedModifierValue(0.0,0xe,7,1);
  if (fVar10 <= 0.0) {
    pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)(this + 0x838);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(pvVar1);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(pvVar1);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2)
    {
      pSVar4 = (SheepInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      SheepInfo::SheepInfo((SheepInfo *)&local_18,pSVar4);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
      if (bVar2) {
        pEVar5 = (Effect_PopAnim *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        std::string::string((string *)&local_20,"animation2");
        Effect_PopAnim::PlaySingleAnimation(pEVar5,(string *)&local_20,0);
        std::string::~string((string *)&local_20);
        nop();
        this_01 = (StandaloneEffect *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        StandaloneEffect::SetKeepAlive(this_01,false);
      }
      DragonBruitLauncherSubSystem::DragonBruitLauncherEntry::~DragonBruitLauncherEntry
                ((DragonBruitLauncherEntry *)&local_18);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_30);
    }
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x808);
    std::vector<SheepInfo,std::allocator<SheepInfo>>::clear
              ((vector<SheepInfo,std::allocator<SheepInfo>> *)pvVar1);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar2)
    {
      pRVar6 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_28,pRVar6);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_28);
      if (bVar2) {
        pRVar7 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        pPVar8 = Sexy::RtObject::Cast<PlantGroup>(pRVar7);
        PlantGroup::RevertConversionCondition(pPVar8,2);
        pRVar7 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        pPVar8 = Sexy::RtObject::Cast<PlantGroup>(pRVar7);
        PlantGroup::RevertConversionCondition(pPVar8,0x25);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    }
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               this_00);
    cVar3 = CardGameUtils::IsPlayingCardGame();
    if (cVar3 != '\0') {
      pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)(this + 0x820);
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(pvVar1);
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(pvVar1);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18),
            bVar2) {
        pRVar6 = (RtWeakPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_28,pRVar6);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_28);
        if (bVar2) {
          pRVar7 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
          pZVar9 = Sexy::RtObject::Cast<Zombie>(pRVar7);
          (**(code **)(*(long *)pZVar9 + 0x80))(pZVar9,0);
          pRVar7 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
          pZVar9 = Sexy::RtObject::Cast<Zombie>(pRVar7);
          Zombie::EndCondition(pZVar9,0x70);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
      }
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)pvVar1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDarkWizard::~ZombieDarkWizard() */

void __thiscall ZombieDarkWizard::~ZombieDarkWizard(ZombieDarkWizard *this)

{
  *(undefined ***)this = &PTR_GetClass_068905b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieDarkWizard_06890fe8;
  std::vector<SheepInfo,std::allocator<SheepInfo>>::~vector
            ((vector<SheepInfo,std::allocator<SheepInfo>> *)(this + 0x838));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x820));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x808));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieDarkWizard::~ZombieDarkWizard() */

void __thiscall ZombieDarkWizard::~ZombieDarkWizard(ZombieDarkWizard *this)

{
  ~ZombieDarkWizard(this + -0x10);
  return;
}


/* ZombieDarkWizard::~ZombieDarkWizard() */

void __thiscall ZombieDarkWizard::~ZombieDarkWizard(ZombieDarkWizard *this)

{
  ~ZombieDarkWizard(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieDarkWizard::~ZombieDarkWizard() */

void __thiscall ZombieDarkWizard::~ZombieDarkWizard(ZombieDarkWizard *this)

{
  ~ZombieDarkWizard(this + -0x10);
  return;
}


/* ZombieDarkWizard::GetSheepGroup() */

vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
ZombieDarkWizard::GetSheepGroup(void)

{
  long in_x0;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *in_x8;
  
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::vector
            (in_x8,(vector *)(in_x0 + 0x808));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkWizard::onSpellImpact(BoardEntity*) */

void __thiscall ZombieDarkWizard::onSpellImpact(ZombieDarkWizard *this,BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  PlantGroup *this_00;
  ZombieDarkWizardProps *pZVar4;
  undefined8 *puVar5;
  Effect_PopAnim *pEVar6;
  ResourceInfo *pRVar7;
  Zombie *pZVar8;
  PlantNightcap *this_01;
  PlantGroup *pPVar9;
  Zombie *pZVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  float local_40;
  undefined4 uStack_3c;
  float local_38;
  string asStack_30 [16];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    this_00 = Sexy::RtObject::Cast<PlantGroup>((RtObject *)param_1);
    if ((this_00 == (PlantGroup *)0x0) || (cVar1 = isValidSpellTarget(this,this_00), cVar1 == '\0'))
    {
      cVar1 = CardGameUtils::IsPlayingCardGame();
      if ((cVar1 != '\0') &&
         ((pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar8 != (Zombie *)0x0 &&
          (cVar1 = isValidSpellTarget(this,pZVar8), cVar1 != '\0')))) {
        pZVar4 = Zombie::GetProps<ZombieDarkWizardProps>((Zombie *)this);
        puVar5 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)this_00);
        local_40 = (float)*puVar5;
        local_38 = (float)*(int *)(pZVar4 + 0x21c) + *(float *)(puVar5 + 1);
        uStack_3c = (undefined4)((ulong)*puVar5 >> 0x20);
        _local_40 = CONCAT44(uStack_3c,(float)*(int *)(pZVar4 + 0x218) + local_40);
        pEVar6 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        GetPAMByName((string *)(pZVar4 + 0x210));
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_20);
        Effect_PopAnim::CreatePopAnimRig(pEVar6,(PopAnim *)pRVar7,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20)
        ;
        iVar3 = (**(code **)(*(long *)pZVar8 + 0x170))(pZVar8);
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)pEVar6,(SexyVector3 *)&local_40,iVar3 + 2);
        Effect_PopAnim::SetCentered(pEVar6,true);
        StandaloneEffect::SetKeepAlive((StandaloneEffect *)pEVar6,true);
        Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)asStack_20);
        std::string::string(asStack_30,"animation");
        AnimationSequence::AddSingleAnimation((RtWeakPtr *)asStack_20,asStack_30,0);
        std::string::~string(asStack_30);
        nop();
        std::string::string(asStack_30,"idle");
        pZVar10._0_4_ = (Zombie *)PVZ_EOT();
        AnimationSequence::AddLoopingAnimation((RtWeakPtr *)asStack_20,asStack_30,3);
        std::string::~string(asStack_30);
        nop();
        Effect_PopAnim::PlayAnimationSequence(pEVar6,(AnimationSequence *)asStack_20);
        PlantGroup::GetTopPlant(this_00);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_50);
        SheepInfo::SheepInfo
                  ((SheepInfo *)asStack_30,(RtWeakPtr *)aRStack_58,(RtWeakPtr *)aRStack_48);
        std::vector<SheepInfo,std::allocator<SheepInfo>>::push_back
                  ((vector<SheepInfo,std::allocator<SheepInfo>> *)(this + 0x838),
                   (SheepInfo *)asStack_30);
        DragonBruitLauncherSubSystem::DragonBruitLauncherEntry::~DragonBruitLauncherEntry
                  ((DragonBruitLauncherEntry *)asStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
        (**(code **)(*(long *)pZVar8 + 0x80))(pZVar8,1);
        Zombie::ApplyCondition(pZVar10._0_4_,0,pZVar8,0x70,1);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_30,(RtWeakPtrBase *)aRStack_48);
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                   (this + 0x820),(RtWeakPtr *)asStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48)
        ;
        AnimationSequence::~AnimationSequence((AnimationSequence *)asStack_20);
      }
    }
    else {
      pZVar4 = Zombie::GetProps<ZombieDarkWizardProps>((Zombie *)this);
      puVar5 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this_00);
      local_40 = (float)*puVar5;
      local_38 = (float)*(int *)(pZVar4 + 0x21c) + *(float *)(puVar5 + 1);
      uStack_3c = (undefined4)((ulong)*puVar5 >> 0x20);
      _local_40 = CONCAT44(uStack_3c,(float)*(int *)(pZVar4 + 0x218) + local_40);
      std::string::string(asStack_20,"nightcap");
      cVar1 = PlantGroup::HasPlant(this_00,asStack_20);
      std::string::~string(asStack_20);
      nop();
      if (cVar1 == '\0') {
        std::string::string(asStack_20,"magicbeans");
        cVar1 = PlantGroup::HasPlant(this_00,asStack_20);
        std::string::~string(asStack_20);
        nop();
        if (cVar1 != '\0') goto LAB_04667750;
      }
      else {
        std::string::string(asStack_20,"PlantNightcap");
        PlantGroup::GetPlantOfClass(asStack_30,this_00,asStack_20);
        std::string::~string(asStack_20);
        nop();
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_30);
        if (bVar2) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
          nop();
          if ((this_01 != (PlantNightcap *)0x0) &&
             (cVar1 = FUN_046641f0(this_01[0x28],this_01 + 0x34), cVar1 != '\0')) {
            PlantNightcap::setNightMode(this_01);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
            goto LAB_04667750;
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30)
        ;
      }
      pEVar6 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      GetPAMByName((string *)(pZVar4 + 0x210));
      pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_20);
      Effect_PopAnim::CreatePopAnimRig(pEVar6,(PopAnim *)pRVar7,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
      iVar3 = (**(code **)(*(long *)this_00 + 0x170))(this_00);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)pEVar6,(SexyVector3 *)&local_40,iVar3 + 2);
      Effect_PopAnim::SetCentered(pEVar6,true);
      StandaloneEffect::SetKeepAlive((StandaloneEffect *)pEVar6,true);
      Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)asStack_20);
      std::string::string(asStack_30,"animation");
      AnimationSequence::AddSingleAnimation(asStack_20,asStack_30,0);
      std::string::~string(asStack_30);
      nop();
      std::string::string(asStack_30,"idle");
      pPVar9._0_4_ = (PlantGroup *)PVZ_EOT();
      AnimationSequence::AddLoopingAnimation(asStack_20,asStack_30,3);
      std::string::~string(asStack_30);
      nop();
      Effect_PopAnim::PlayAnimationSequence(pEVar6,(AnimationSequence *)asStack_20);
      PlantGroup::GetTopPlant(this_00);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_50);
      SheepInfo::SheepInfo((SheepInfo *)asStack_30,(RtWeakPtr *)aRStack_58,(RtWeakPtr *)aRStack_48);
      std::vector<SheepInfo,std::allocator<SheepInfo>>::push_back
                ((vector<SheepInfo,std::allocator<SheepInfo>> *)(this + 0x838),
                 (SheepInfo *)asStack_30);
      DragonBruitLauncherSubSystem::DragonBruitLauncherEntry::~DragonBruitLauncherEntry
                ((DragonBruitLauncherEntry *)asStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
      PlantGroup::ApplyCondition(pPVar9._0_4_,0,this_00,0x25);
      PlantGroup::ApplyCondition(pPVar9._0_4_,0,this_00,2);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_30,(RtWeakPtrBase *)aRStack_48);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )(this + 0x808),(RtWeakPtr *)asStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
      AnimationSequence::~AnimationSequence((AnimationSequence *)asStack_20);
    }
  }
LAB_04667750:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkWizard::getValidSpellTarget() */

void __thiscall ZombieDarkWizard::getValidSpellTarget(ZombieDarkWizard *this)

{
  bool bVar1;
  char cVar2;
  RtObject *this_00;
  PlantGroup *pPVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_80;
  undefined8 local_78;
  Zombie *local_70;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38 [3];
  PlantGroup *local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))();
  if ((this_00 == (RtObject *)0x0) ||
     (pPVar3 = Sexy::RtObject::Cast<PlantGroup>(this_00), pPVar3 == (PlantGroup *)0x0)) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
    EntityFinder::GetEntities(avStack_68,0x10);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
    local_70 = (Zombie *)
               std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_68);
    local_38[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_68);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_70,(__normal_iterator *)local_38), bVar1)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70)
      ;
      local_20 = Sexy::RtObject::Cast<PlantGroup>((RtObject *)*puVar4);
      cVar2 = isValidSpellTarget(this,local_20);
      if (cVar2 != '\0') {
        std::vector<PlantGroup*,std::allocator<PlantGroup*>>::push_back
                  ((vector<PlantGroup*,std::allocator<PlantGroup*>> *)&local_50,&local_20);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_70);
    }
    lVar5 = FUN_04663448(local_50,local_48);
    if (lVar5 == 0) {
      cVar2 = CardGameUtils::IsPlayingCardGame();
      this_00 = (RtObject *)0x0;
      if (cVar2 != '\0') {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38);
        EntityFinder::GetEntities
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38,2);
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
        local_80 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)local_38);
        local_78 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)local_38);
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78),
              bVar1) {
          puVar4 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
          local_70 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
          cVar2 = isValidSpellTarget(this,local_70);
          if (cVar2 != '\0') {
            std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                      ((vector<Zombie*,std::allocator<Zombie*>> *)&local_20,&local_70);
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
        }
        lVar5 = FUN_04663454(local_20,local_18);
        if (lVar5 == 0) {
          std::vector<Zombie*,std::allocator<Zombie*>>::~vector
                    ((vector<Zombie*,std::allocator<Zombie*>> *)&local_20);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_38);
          this_00 = (RtObject *)0x0;
        }
        else {
          uVar6 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)&local_20);
          uVar7 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_20);
          eastl::
          rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
          ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                             *)&local_70,(rbtree_node *)this);
          std::
          sort<__gnu_cxx::__normal_iterator<Zombie**,std::vector<Zombie*,std::allocator<Zombie*>>>,DarkWizardTargetSorter>
                    (uVar6,uVar7,local_70);
          puVar4 = (undefined8 *)FUN_046635b0(local_20);
          this_00 = (RtObject *)*puVar4;
          std::vector<Zombie*,std::allocator<Zombie*>>::~vector
                    ((vector<Zombie*,std::allocator<Zombie*>> *)&local_20);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_38);
        }
      }
    }
    else {
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_50);
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_50);
      eastl::
      rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
      ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                         *)&local_20,(rbtree_node *)this);
      std::
      sort<__gnu_cxx::__normal_iterator<PlantGroup**,std::vector<PlantGroup*,std::allocator<PlantGroup*>>>,DarkWizardTargetSorter>
                (uVar6,uVar7,local_20);
      puVar4 = (undefined8 *)FUN_046635b4(local_50);
      this_00 = (RtObject *)*puVar4;
    }
    std::vector<PlantGroup*,std::allocator<PlantGroup*>>::~vector
              ((vector<PlantGroup*,std::allocator<PlantGroup*>> *)&local_50);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* ZombieDarkWizard::updateState_Walk() */

void __thiscall ZombieDarkWizard::updateState_Walk(ZombieDarkWizard *this)

{
  char cVar1;
  RiftThemeFastSpell *pRVar2;
  RtObject *this_00;
  Plant *pPVar3;
  ZombieDarkWizardProps *pZVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  Zombie *pZVar8;
  
  pRVar2 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  if ((pRVar2 != (RiftThemeFastSpell *)0x0) && (cVar1 = Creature::IsOnBoard(), cVar1 != '\0')) {
    pZVar8._0_4_ = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar8._0_4_,0,this,0x6f,1);
    return;
  }
  fVar6 = (float)PVZ_EOT();
  if (*(float *)(this + 0x800) == fVar6) {
    fVar6 = (float)PVZ_T();
    pZVar4 = Zombie::GetProps<ZombieDarkWizardProps>((Zombie *)this);
    fVar7 = (float)Zombie::GetRandomValue((Zombie *)this,(ValueRange *)(pZVar4 + 0x228));
    *(float *)(this + 0x800) = fVar7 + fVar6;
  }
  fVar6 = (float)PVZ_T();
  if ((*(float *)(this + 0x800) < fVar6) && (cVar1 = Creature::IsOnBoard(), cVar1 != '\0')) {
    fVar6 = (float)PVZ_T();
    pZVar4 = Zombie::GetProps<ZombieDarkWizardProps>((Zombie *)this);
    fVar7 = (float)Zombie::GetRandomValue((Zombie *)this,(ValueRange *)(pZVar4 + 0x230));
    *(float *)(this + 0x800) = fVar7 + fVar6;
    lVar5 = getValidSpellTarget(this);
    if (lVar5 != 0) {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      return;
    }
  }
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this);
  if (this_00 != (RtObject *)0x0) {
    pPVar3 = Sexy::RtObject::Cast<Plant>(this_00);
    if (pPVar3 != (Plant *)0x0) {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      return;
    }
    Zombie::setZombieState((Zombie *)this,2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkWizard::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieDarkWizard::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  BoardEntity *pBVar4;
  PopAnimRig *this;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar5;
  long lVar6;
  LightningBolt *this_00;
  ZombieDarkWizardProps *pZVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  string asStack_38 [8];
  string asStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"use_action");
  if ((bVar1) &&
     (pBVar4 = (BoardEntity *)getValidSpellTarget((ZombieDarkWizard *)param_1),
     pBVar4 != (BoardEntity *)0x0)) {
    Sexy::Insets::Insets(aIStack_18);
    this = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)param_1);
    std::string::string((string *)&local_28,"wizard_staff_ball");
    PopAnimRig::CalcSymbolRect(this,(string *)&local_28,(TRect *)aIStack_18);
    std::string::~string((string *)&local_28);
    nop();
    fVar10 = *(float *)(param_1 + 0x1c);
    fVar8 = (float)FUN_046635d4(*(undefined4 *)(param_1 + 0x18),fVar10,
                                *(undefined4 *)(param_1 + 0x20));
    Sexy::TRect<int>::GetCenter();
    iVar2 = FUN_046638c0(local_28);
    pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)param_1);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
    fVar9 = *(float *)(lVar6 + 0xc4);
    Sexy::TRect<int>::GetCenter();
    iVar3 = FUN_046638c0(local_24);
    pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)param_1);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)&local_28,(float)(int)((fVar8 - fVar9) + (float)iVar2),
               (float)(int)((fVar10 - *(float *)(lVar6 + 200)) + (float)iVar3),0.0);
    this_00 = GameObject::Create<LightningBolt>();
    pZVar7 = Zombie::GetProps<ZombieDarkWizardProps>((Zombie *)param_1);
    std::string::string(asStack_38,"");
    std::string::string(asStack_30,"POPANIM_EFFECTS_ZOMBIE_DARK_WIZARD_PROJECTILE_HIT");
    LightningBolt::SetPopAnim(this_00,(string *)(pZVar7 + 0x238),asStack_38,asStack_30);
    std::string::~string(asStack_30);
    nop();
    std::string::~string(asStack_38);
    nop();
    FUN_046635cc(this_00 + 0x118);
    FUN_046635b8(this_00 + 0x11c,this_00 + 0x120);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_30,(RtWeakPtrBase *)asStack_38);
    TwinsAssistPerson::SetOwner((TwinsAssistPerson *)this_00,asStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
    BoardEntity::PlaceOnBoard((SexyVector3 *)this_00);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_38,(RtWeakPtrBase *)asStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_30,(RtWeakPtrBase *)asStack_38);
    LightningBolt::SetInitialTarget(this_00,asStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
    pZVar7 = Zombie::GetProps<ZombieDarkWizardProps>((Zombie *)param_1);
    RealObject::PlayPositionalSound((RealObject *)param_1,(string *)(pZVar7 + 0x220),0.0);
    onSpellImpact((ZombieDarkWizard *)param_1,pBVar4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkWizard::StaticClassInit() */

void ZombieDarkWizard::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  StateMachineTableBuilder *this;
  RtClass *pRVar3;
  StateMachineTable *pSVar4;
  code *pcVar5;
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
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (pCVar1 != (CRefSymbolDb *)0x0) {
    plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1);
    if (plVar2 != (long *)0x0) {
      pcVar5 = *(code **)(*plVar2 + 0x18);
      std::string::string(asStack_150,"SheepInfo");
      (*pcVar5)(plVar2,asStack_150,FUN_04665900,0x10,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar5 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_150,"ZombieDarkWizard");
    (*pcVar5)(plVar2,asStack_150,FUN_046693d0,0x850,0);
    std::string::~string(asStack_150);
    nop();
  }
  this = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance();
  pRVar3 = (RtClass *)StaticGetClass();
  pSVar4 = StateMachineTableBuilder::RegisterClass<ZombieState>(this,pRVar3);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieDarkWizard,void(ZombieDarkWizard::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieDarkWizard,void(ZombieDarkWizard::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieDarkWizard,void(ZombieDarkWizard::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_DARKWIZARD_Casting");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04669114(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieDarkWizard::StaticGetClass() */

long * ZombieDarkWizard::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieDarkWizard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDarkWizard::GetClass() const */

long * ZombieDarkWizard::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieDarkWizard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDarkWizard::onTakeFatalDamage(DamageInfo const&) */

void ZombieDarkWizard::onTakeFatalDamage(DamageInfo *param_1)

{
  Zombie::onTakeFatalDamage(param_1);
  revertSheepPlants((ZombieDarkWizard *)param_1);
  return;
}


/* ZombieDarkWizard::onMowedDown() */

void ZombieDarkWizard::onMowedDown(void)

{
  ZombieDarkWizard *in_x0;
  
  nop();
  revertSheepPlants(in_x0);
  return;
}


/* ZombieDarkWizard::onDestroy() */

void __thiscall ZombieDarkWizard::onDestroy(ZombieDarkWizard *this)

{
  Zombie::onDestroy((Zombie *)this);
  revertSheepPlants(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkWizard::onUpdate() */

void __thiscall ZombieDarkWizard::onUpdate(ZombieDarkWizard *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  RtWeakPtr *this_00;
  long lVar4;
  ZombieDarkWizardProps *pZVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  undefined8 *puVar6;
  StandaloneEffect *this_02;
  long *plVar7;
  undefined8 local_28;
  undefined8 local_20;
  float local_18;
  undefined4 uStack_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onUpdate((Zombie *)this);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x838));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x838));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00 + 8);
      if (bVar1) {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        cVar2 = FUN_0466341c(*(undefined4 *)(lVar4 + 0x1d0));
        if (cVar2 != '\0') {
          pZVar5 = Zombie::GetProps<ZombieDarkWizardProps>((Zombie *)this);
          this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          puVar6 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost(this_01);
          local_18 = (float)*puVar6;
          local_10 = (float)*(int *)(pZVar5 + 0x21c) + *(float *)(puVar6 + 1);
          _local_18 = CONCAT44((int)((ulong)*puVar6 >> 0x20),
                               (float)*(int *)(pZVar5 + 0x218) + local_18);
          this_02 = (StandaloneEffect *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(this_00 + 8));
          plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          iVar3 = (**(code **)(*plVar7 + 0x170))();
          StandaloneEffect::SetBoardSpaceOrigin(this_02,(SexyVector3 *)&local_18,iVar3 + 2);
        }
      }
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDarkWizard::updateState_Idle() */

void __thiscall ZombieDarkWizard::updateState_Idle(ZombieDarkWizard *this)

{
  RiftThemeFastSpell *pRVar1;
  ZombieDarkWizardProps *pZVar2;
  long lVar3;
  RtObject *this_00;
  Plant *pPVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  pRVar1 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  if (pRVar1 != (RiftThemeFastSpell *)0x0) {
    pZVar2 = Zombie::GetProps<ZombieDarkWizardProps>((Zombie *)this);
    fVar6 = (float)Zombie::GetRandomValue((Zombie *)this,(ValueRange *)(pZVar2 + 0x228));
    pZVar2 = Zombie::GetProps<ZombieDarkWizardProps>((Zombie *)this);
    fVar7 = (float)Zombie::GetRandomValue((Zombie *)this,(ValueRange *)(pZVar2 + 0x230));
    fVar8 = (float)RiftThemeFastSpell::GetReducedCDRate();
    fVar9 = (float)PVZ_EOT();
    if (*(float *)(this + 0x800) == fVar9) {
      fVar9 = (float)PVZ_T();
      *(float *)(this + 0x800) = fVar9 + fVar6 * (1.0 - fVar8);
    }
    fVar6 = (float)PVZ_T();
    if (*(float *)(this + 0x800) < fVar6) {
      fVar6 = (float)PVZ_T();
      *(float *)(this + 0x800) = fVar6 + fVar7 * (1.0 - fVar8);
      lVar3 = getValidSpellTarget(this);
      if (lVar3 != 0) {
        Zombie::setZombieState((Zombie *)this,0x1f,0);
        return;
      }
    }
    this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this);
    if (this_00 != (RtObject *)0x0) {
      pPVar4 = Sexy::RtObject::Cast<Plant>(this_00);
      if (pPVar4 == (Plant *)0x0) {
        uVar5 = 2;
      }
      else {
        uVar5 = 0x1f;
      }
      Zombie::setZombieState((Zombie *)this,uVar5,0);
      return;
    }
  }
  Zombie::updateState_Idle((Zombie *)this);
  return;
}

