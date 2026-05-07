// Class: PlantCrownFlower


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCrownFlower::StaticClassInit() */

void PlantCrownFlower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantCrownFlower");
    (*pcVar2)(plVar1,asStack_10,FUN_03b41d7c,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCrownFlower::StaticGetClass() */

long * PlantCrownFlower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantCrownFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCrownFlower::GetClass() const */

long * PlantCrownFlower::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantCrownFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCrownFlower::updatePushing() */

void __thiscall PlantCrownFlower::updatePushing(PlantCrownFlower *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  float *pfVar6;
  RtWeakPtr *pRVar7;
  ResourceInfo *pRVar8;
  float fVar9;
  Zombie *pZVar11;
  float fVar10;
  float local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  iVar3 = *(int *)(this + 0x78);
  local_8 = ___stack_chk_guard;
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      if ((0.0 < *(float *)(this + 0x7c)) && (*(float *)(this + 0x7c) < 1.0)) {
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x60));
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x60));
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18),
              bVar1) {
          pRVar7 = (RtWeakPtr *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
          pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar7);
          if (pRVar8 != (ResourceInfo *)0x0) {
            fVar9 = (float)Zombie::GetSpeedScale((Zombie *)pRVar8);
            if (fVar9 != 1.0 - *(float *)(this + 0x7c)) {
              (**(code **)(*(long *)pRVar8 + 0x358))(1.0 - *(float *)(this + 0x7c),pRVar8);
            }
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
        }
      }
    }
    else if (iVar3 == 2) {
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x60));
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x60));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18),
            bVar1) {
        pRVar7 = (RtWeakPtr *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar7);
        if ((pRVar8 != (ResourceInfo *)0x0) &&
           (cVar2 = Zombie::HasCondition(pRVar8,0x18), cVar2 == '\0')) {
          pZVar11._0_4_ = (Zombie *)PVZ_EOT();
          Zombie::ApplyCondition(pZVar11._0_4_,0,pRVar8,0x18,1);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
      }
    }
    else if (iVar3 == 3) {
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x60));
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x60));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20),
            bVar1) {
        pRVar7 = (RtWeakPtr *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
        pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar7);
        if (pRVar8 != (ResourceInfo *)0x0) {
          cVar2 = Zombie::HasCondition(pRVar8,0x18);
          if (cVar2 == '\0') {
            pZVar11._0_4_ = (Zombie *)PVZ_EOT();
            Zombie::ApplyCondition(pZVar11._0_4_,0,pRVar8,0x18,1);
          }
          puVar5 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)pRVar8);
          local_18 = *puVar5;
          fVar10 = *(float *)(this + 0x7c);
          local_10 = *(undefined4 *)(puVar5 + 1);
          fVar9 = (float)PVZ_Dt();
          local_18._0_4_ = (float)local_18 + fVar10 * fVar9;
          iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
          iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
          local_2c = (float)(iVar3 * iVar4 + 199);
          pfVar6 = eastl::min_alt<float>((float *)&local_18,&local_2c);
          local_18 = CONCAT44(local_18._4_4_,*pfVar6);
          (**(code **)(*(long *)pRVar8 + 0x78))(pRVar8,&local_18);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCrownFlower::PlantCrownFlower() */

void __thiscall PlantCrownFlower::PlantCrownFlower(PlantCrownFlower *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067301d0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x28) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  this[0x40] = (PlantCrownFlower)0x0;
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  *(undefined4 *)(this + 0x3c) = 0x41700000;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x44) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  *(undefined4 *)(this + 0x5c) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  DVec3::DVec3((DVec3 *)(this + 0x80));
  return;
}


/* PlantCrownFlower::StaticNew() */

PlantCrownFlower * PlantCrownFlower::StaticNew(void)

{
  PlantCrownFlower *this;
  
  this = ::operator_new(0x90);
  PlantCrownFlower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCrownFlower::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantCrownFlower::Fire(long param_1,RtWeakPtrBase *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  Projectile *this;
  DVec3 *this_00;
  CrownFlowerPlantfoodProjectile *this_01;
  Plant *pPVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_03b3d34c(*(undefined8 *)(param_1 + 0x10));
  pPVar4 = *(Plant **)(param_1 + 0x10);
  *(undefined4 *)(pPVar4 + 0x150) = 0;
  cVar1 = Plant::GetAvatarEnable(pPVar4);
  pPVar4 = *(Plant **)(param_1 + 0x10);
  if (cVar1 != '\0') {
    *(undefined4 *)(pPVar4 + 0x150) = 1;
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  this = (Projectile *)Plant::Fire(pPVar4,aRStack_10,param_3,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  iVar2 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 0xffffffff;
  FUN_03b39db4((float)(iVar2 + -1) * 0.5235988,this + 0xc4);
  this_00 = (DVec3 *)Projectile::GetVelocity(this);
  fVar5 = (float)DVec3::getLength(this_00);
  Projectile::SetRotatedVelocity(this,fVar5);
  this_01 = Sexy::RtObject::Cast<CrownFlowerPlantfoodProjectile>((RtObject *)this);
  iVar2 = FUN_03b39de4(*(undefined8 *)(param_1 + 0x10));
  CrownFlowerPlantfoodProjectile::setOverrideAttackLevel(this_01,(float)(iVar2 + 1));
  fVar6 = *(float *)(lVar3 + 0x2f8);
  fVar5 = (float)Plant::GetGeneSkillBoost(*(Plant **)(param_1 + 0x10));
  FUN_03b39dc4((fVar5 + 1.0) * fVar6,this_01 + 0xd8);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
  if (cVar1 != '\0') {
    FUN_03b3a2b8(this_01 + 0x1a5);
    fVar6 = *(float *)(lVar3 + 0x2fc);
    fVar5 = (float)Plant::GetGeneSkillBoost(*(Plant **)(param_1 + 0x10));
    FUN_03b39dc4((fVar5 + 1.0) * fVar6,this_01 + 0xd8);
    FUN_03b39df4(*(undefined4 *)(lVar3 + 0x300),this_01 + 0x1c0);
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* PlantCrownFlower::getNormalAttackRange() */

void PlantCrownFlower::getNormalAttackRange(void)

{
  int iVar1;
  int iVar2;
  long in_x0;
  float *pfVar3;
  Insets *in_x8;
  float fVar4;
  float fVar5;
  
  FUN_03b3d34c(*(undefined8 *)(in_x0 + 0x10));
  Sexy::Insets::Insets(in_x8);
  iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(in_x0 + 0x10));
  fVar4 = *pfVar3;
  fVar5 = pfVar3[1];
  *(undefined4 *)(in_x8 + 0xc) = 0x1e;
  *(int *)in_x8 = (int)(fVar4 + 30.0);
  *(int *)(in_x8 + 8) = (iVar1 * iVar2 + 200) - (int)(fVar4 + 30.0);
  *(int *)(in_x8 + 4) = (int)(fVar5 - 58.0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCrownFlower::isTargetInAttackRange(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
PlantCrownFlower::isTargetInAttackRange(undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  long *plVar1;
  TRect *pTVar2;
  TRect<int> aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getNormalAttackRange();
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  pTVar2 = (TRect *)(**(code **)(*plVar1 + 0x178))();
  Sexy::TRect<int>::Intersects(aTStack_18,pTVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCrownFlower::getRayEntityScaleY(std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > >) */

void __thiscall
PlantCrownFlower::getRayEntityScaleY
          (undefined8 param_1,
          vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *param_2
          )

{
  char cVar1;
  ulong uVar2;
  float *pfVar3;
  float fVar4;
  float local_10;
  float local_c;
  long local_8;
  
  fVar4 = 1.0;
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          empty(param_2);
  if (cVar1 == '\0') {
    uVar2 = FUN_03b39e20(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
    local_10 = 1.0 - _FUN_03b3d834 * (float)uVar2;
    local_c = 0.5;
    pfVar3 = eastl::max_alt<float>(&local_10,&local_c);
    fVar4 = *pfVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCrownFlower::onHeightEnergyStateChanged() */

void __thiscall PlantCrownFlower::onHeightEnergyStateChanged(PlantCrownFlower *this)

{
  char cVar1;
  PlantAnimRig_DevilsFlower *pPVar2;
  string asStack_78 [8];
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PlantAnimRig_DevilsFlower *)FUN_03b3d6e8(*(undefined8 *)(this + 0x10));
  PopAnimRig::CalcPlayingAnimLabelName();
  FUN_03b3a000(asStack_58,pPVar2[0x3b8]);
  cVar1 = std::operator==(asStack_78,asStack_58);
  std::string::~string(asStack_58);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)pPVar2 + 0x1e8))(asStack_58,pPVar2);
    cVar1 = std::operator==(asStack_78,asStack_58);
    std::string::~string(asStack_58);
    if (cVar1 == '\0') {
      FUN_03b39f00(asStack_58,pPVar2[0x3b8]);
      cVar1 = std::operator==(asStack_78,asStack_58);
      std::string::~string(asStack_58);
      if (cVar1 == '\0') {
        FUN_03b39f80(asStack_58,pPVar2[0x3b8]);
        cVar1 = std::operator==(asStack_78,asStack_58);
        std::string::~string(asStack_58);
        if (cVar1 == '\0') goto LAB_03b3e224;
        FUN_03b39dec(pPVar2 + 0x3b8,this[0x40]);
        FUN_03b39f80(asStack_70,pPVar2[0x3b8]);
      }
      else {
        FUN_03b39dec(pPVar2 + 0x3b8,this[0x40]);
        FUN_03b39f00(asStack_70,pPVar2[0x3b8]);
      }
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_WizardThorns::PlayTapAnimation
                ((PlantAnimRig_WizardThorns *)pPVar2,asStack_70,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      std::string::~string(asStack_70);
    }
    else {
      FUN_03b39dec(pPVar2 + 0x3b8,this[0x40]);
      (**(code **)(*(long *)pPVar2 + 0x118))(pPVar2);
    }
  }
  else {
    FUN_03b39dec(pPVar2 + 0x3b8,this[0x40]);
    FUN_03b3a000(asStack_58,pPVar2[0x3b8]);
    PlantAnimRig_DevilsFlower::playLoopAnimation(pPVar2,asStack_58);
    std::string::~string(asStack_58);
  }
LAB_03b3e224:
  std::string::~string(asStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCrownFlower::lostHighEnergyState() */

void __thiscall PlantCrownFlower::lostHighEnergyState(PlantCrownFlower *this)

{
  if (this[0x40] == (PlantCrownFlower)0x0) {
    return;
  }
  this[0x40] = (PlantCrownFlower)0x0;
  onHeightEnergyStateChanged(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCrownFlower::canZombieBePushed(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
PlantCrownFlower::canZombieBePushed(PlantCrownFlower *this,RtMixedPtr<Sexy::Image> *param_2)

{
  char cVar1;
  bool bVar2;
  Zombie *pZVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(param_2);
  if (cVar1 == '\0') {
    pZVar3 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    cVar1 = Zombie::IsBoss(pZVar3);
    if (cVar1 == '\0') {
      pZVar3 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      cVar1 = Zombie::CanBeLaunchedByPlantsExtra(pZVar3);
      if (cVar1 != '\0') {
        lVar4 = FUN_03b3d34c(*(undefined8 *)(this + 0x10));
        pZVar3 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        uVar5 = Zombie::GetTypeName(pZVar3);
        FUN_05475d88(asStack_20,uVar5);
        uVar5 = FUN_03b3c0dc(*(undefined8 *)(lVar4 + 0x308));
        uVar6 = FUN_03b3c12c(*(undefined8 *)(lVar4 + 0x310));
        local_18 = std::
                   find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                             (uVar5,uVar6,asStack_20);
        local_10 = FUN_03b3c12c(*(undefined8 *)(lVar4 + 0x310));
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
        bVar2 = !bVar2;
        std::string::~string(asStack_20);
        goto LAB_03b3f680;
      }
    }
  }
  bVar2 = false;
LAB_03b3f680:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCrownFlower::calcPushingTotalWeight() */

void __thiscall PlantCrownFlower::calcPushingTotalWeight(PlantCrownFlower *this)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  RtWeakPtr *this_00;
  ResourceInfo *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_03b3d34c(*(undefined8 *)(this + 0x10));
  iVar8 = 0;
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x60));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x60));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    if (this_01 != (ResourceInfo *)0x0) {
      this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)this_01);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
      FUN_05475d88(asStack_20,lVar4 + 8);
      uVar5 = FUN_03b3c0dc(*(undefined8 *)(lVar3 + 0x350));
      uVar6 = FUN_03b3c12c(*(undefined8 *)(lVar3 + 0x358));
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                           (uVar5,uVar6,asStack_20);
      local_10 = FUN_03b3c12c(*(undefined8 *)(lVar3 + 0x358));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      iVar2 = Zombie::GetSizeType((Zombie *)this_01);
      iVar7 = 0x1e;
      if (iVar2 != 0) {
        iVar2 = Zombie::GetSizeType((Zombie *)this_01);
        if ((iVar2 != 1) || (bVar1)) {
          iVar2 = Zombie::GetSizeType((Zombie *)this_01);
          if ((iVar2 == 2) || (bVar1)) {
            iVar7 = 0x78;
          }
          else {
            iVar7 = 0;
          }
        }
        else {
          iVar7 = 0x32;
        }
      }
      iVar8 = iVar8 + iVar7;
      std::string::~string(asStack_20);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  iVar2 = iVar8 + 100;
  if (1 < *(int *)(this + 0x38)) {
    iVar2 = iVar8;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((float)iVar2);
}


/* PlantCrownFlower::refreshPushTypeAndValue() */

void __thiscall PlantCrownFlower::refreshPushTypeAndValue(PlantCrownFlower *this)

{
  int iVar1;
  float fVar2;
  
  fVar2 = (float)calcPushingTotalWeight(this);
  if ((fVar2 <= 100.0) || (200.0 <= fVar2)) {
    if (fVar2 == 100.0) {
      *(undefined4 *)(this + 0x78) = 2;
      *(undefined4 *)(this + 0x7c) = 0;
      return;
    }
    if ((fVar2 <= 1.0) || (100.0 <= fVar2)) {
      *(undefined4 *)(this + 0x78) = 0;
      *(undefined4 *)(this + 0x7c) = 0;
      return;
    }
    *(undefined4 *)(this + 0x78) = 3;
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    *(float *)(this + 0x7c) = (100.0 - fVar2) * 0.005 * (float)iVar1;
  }
  else {
    *(undefined4 *)(this + 0x78) = 1;
    *(float *)(this + 0x7c) = (200.0 - fVar2) * 0.01;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCrownFlower::onPushingZombiesChanged(std::vector<Sexy::RtWeakPtr<Zombie>,
   std::allocator<Sexy::RtWeakPtr<Zombie> > >) */

void __thiscall
PlantCrownFlower::onPushingZombiesChanged
          (PlantCrownFlower *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2)

{
  bool bVar1;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_2);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    if (pRVar2 != (ResourceInfo *)0x0) {
      (**(code **)(*(long *)pRVar2 + 0x358))(0x3f800000);
      Zombie::EndCondition((Zombie *)pRVar2,0x18);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  refreshPushTypeAndValue(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCrownFlower::freedPushZombies() */

void __thiscall PlantCrownFlower::freedPushZombies(PlantCrownFlower *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x60);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    this_01 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
    if (pRVar2 != (ResourceInfo *)0x0) {
      (**(code **)(*(long *)pRVar2 + 0x358))(0x3f800000);
      Zombie::EndCondition((Zombie *)pRVar2,0x18);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCrownFlower::onDestroy() */

void __thiscall PlantCrownFlower::onDestroy(PlantCrownFlower *this)

{
  char cVar1;
  long *plVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x48));
  if (cVar1 == '\0') {
    return;
  }
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  (**(code **)(*plVar2 + 0x48))();
  freedPushZombies(this);
  return;
}


/* PlantCrownFlower::~PlantCrownFlower() */

void __thiscall PlantCrownFlower::~PlantCrownFlower(PlantCrownFlower *this)

{
  *(undefined ***)this = &PTR_GetClass_067301d0;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x60));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantCrownFlower::~PlantCrownFlower() */

void __thiscall PlantCrownFlower::~PlantCrownFlower(PlantCrownFlower *this)

{
  ~PlantCrownFlower(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCrownFlower::stopAttacking() */

void __thiscall PlantCrownFlower::stopAttacking(PlantCrownFlower *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  PlantAnimRig_WizardThorns *pPVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  string asStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x48);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    pPVar2 = (PlantAnimRig_WizardThorns *)FUN_03b3d6e8(*(undefined8 *)(this + 0x10));
    FUN_03b39f80(asStack_78,pPVar2[0x3b8]);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    PlantAnimRig_WizardThorns::PlayTapAnimation(pPVar2,asStack_78,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_78);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar4 + 0x48))();
    }
    DVec3::DVec3((DVec3 *)asStack_60);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x80),(SexyVector3 *)asStack_60);
    freedPushZombies(this);
    *(undefined4 *)(this + 0x38) = 0xffffffff;
    uVar6 = PVZ_EOT();
    *(undefined4 *)(this + 0x28) = uVar6;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_60);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x30),(RtWeakPtr *)asStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
    if (this[0x40] != (PlantCrownFlower)0x0) {
      lVar5 = FUN_03b3d34c(*(undefined8 *)(this + 0x10));
      fVar7 = (float)PVZ_T();
      *(float *)(this + 0x44) = fVar7 + *(float *)(lVar5 + 0x2f0);
    }
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"crownflower_attack_loop_stop");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCrownFlower::UpdateUnconditionally() */

void PlantCrownFlower::UpdateUnconditionally(void)

{
  PlantCrownFlower *in_x0;
  SexyVector3 *this;
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float fVar2;
  undefined4 local_18 [4];
  long local_8;
  
  this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(in_x0 + 0x10);
  iVar1 = *(int *)(this_00 + 200);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 3) {
    stopAttacking(in_x0);
    this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(in_x0 + 0x10);
    iVar1 = *(int *)(this_00 + 200);
  }
  if (iVar1 == 0xb) {
    this = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
    local_18[0] = Sexy::SexyVector3::operator-(this,(SexyVector3 *)(in_x0 + 0x80));
    fVar2 = (float)DVec3::getLength((DVec3 *)local_18);
    if (0.0 < fVar2) {
      if (local_8 == ___stack_chk_guard) {
        stopAttacking(in_x0);
        return;
      }
      goto LAB_03b408cc;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_03b408cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCrownFlower::OnRelocationBegun() */

void __thiscall PlantCrownFlower::OnRelocationBegun(PlantCrownFlower *this)

{
  lostHighEnergyState(this);
  stopAttacking(this);
  return;
}


/* PlantCrownFlower::NotifySetHidden(bool, bool) */

void PlantCrownFlower::NotifySetHidden(bool param_1,bool param_2)

{
  if (!param_2) {
    return;
  }
  lostHighEnergyState((PlantCrownFlower *)(ulong)param_1);
  stopAttacking((PlantCrownFlower *)(ulong)param_1);
  return;
}


/* PlantCrownFlower::ApplyPlantfood() */

void __thiscall PlantCrownFlower::ApplyPlantfood(PlantCrownFlower *this)

{
  stopAttacking(this);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  *(undefined4 *)(this + 0x5c) = 0;
  return;
}


/* PlantCrownFlower::onApplyCondition(PlantConditions) */

void __thiscall PlantCrownFlower::onApplyCondition(PlantCrownFlower *this,int param_2)

{
  if (((1 < param_2 - 1U) && (param_2 != 6)) && (param_2 != 0x12)) {
    return;
  }
  stopAttacking(this);
  return;
}


/* PlantCrownFlower::TakeDamage(DamageInfo const&) */

void PlantCrownFlower::TakeDamage(DamageInfo *param_1)

{
  bool bVar1;
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  
  if (*(RtObject **)in_x1 != (RtObject *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Zombie>(*(RtObject **)in_x1);
    if (bVar1) {
      stopAttacking((PlantCrownFlower *)param_1);
    }
  }
  DamageInfo::DamageInfo(in_x8,in_x1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCrownFlower::setRayStage(int) */

void __thiscall PlantCrownFlower::setRayStage(PlantCrownFlower *this,int param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  PenetratingRayEntity *pPVar8;
  char *__s;
  float fVar9;
  undefined4 uVar10;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x38) < param_1) {
    *(int *)(this + 0x38) = param_1;
    lVar3 = FUN_03b3d34c(*(undefined8 *)(this + 0x10));
    if (*(int *)(this + 0x38) == 3) {
      this[0x40] = (PlantCrownFlower)0x1;
      onHeightEnergyStateChanged(this);
      uVar10 = PVZ_EOT();
      *(undefined4 *)(this + 0x28) = uVar10;
    }
    else {
      fVar9 = (float)PVZ_T();
      iVar2 = *(int *)(this + 0x38);
      pfVar4 = (float *)FUN_03b39e40(*(undefined8 *)(lVar3 + 0x2c0),(long)iVar2);
      uVar5 = *(undefined8 *)(lVar3 + 0x2d8);
      *(float *)(this + 0x28) = *pfVar4 + fVar9;
      puVar6 = (undefined4 *)FUN_03b39e40(uVar5,(long)iVar2);
      *(undefined4 *)(this + 0x3c) = *puVar6;
      if (iVar2 == 2) {
        iVar2 = FUN_03b39de4(*(undefined8 *)(this + 0x10));
        if (iVar2 < 3) {
          if (iVar2 != 2) {
            uVar10 = PVZ_EOT();
            *(undefined4 *)(this + 0x28) = uVar10;
          }
        }
        else {
          fVar9 = (float)PVZ_T();
          *(float *)(this + 0x28) = fVar9 + *(float *)(lVar3 + 0x2f4);
        }
      }
    }
    this_00 = (RtWeakPtr *)(this + 0x48);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      iVar2 = FUN_03b39de4(*(undefined8 *)(this + 0x10));
      if (iVar2 < 5) {
        uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        std::string::string(asStack_18,"POPANIM_EFFECTS_CROWNFLOWER_RAY");
        uVar7 = FUN_03b39e48(DAT_06acae38,(long)*(int *)(this + 0x38));
        FUN_05475d88(asStack_10,uVar7);
        PenetratingRayEntity::setChildEffectPopAnimStr(uVar5,asStack_18,asStack_10);
        std::string::~string(asStack_10);
        std::string::~string(asStack_18);
        nop();
        uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        __s = "POPANIM_EFFECTS_CROWNFLOWER_RAY_START";
      }
      else {
        uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        std::string::string(asStack_18,"POPANIM_EFFECTS_CROWNFLOWER_RAY");
        uVar7 = FUN_03b39e48(DAT_06acae38,(long)*(int *)(this + 0x38));
        FUN_05475d88(asStack_10,uVar7);
        PenetratingRayEntity::setChildEffectPopAnimStr(uVar5,asStack_18,asStack_10);
        std::string::~string(asStack_10);
        std::string::~string(asStack_18);
        nop();
        uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        __s = "POPANIM_EFFECTS_CROWNFLOWER_RAY_LV5_START";
      }
      std::string::string(asStack_18,__s);
      uVar7 = FUN_03b39e48(DAT_06acaec8,(long)*(int *)(this + 0x38));
      FUN_05475d88(asStack_10,uVar7);
      PenetratingRayEntity::setShooterEffectPopAnimStr(uVar5,asStack_18,asStack_10);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      nop();
      pPVar8 = (PenetratingRayEntity *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_18,"POPANIM_EFFECTS_CROWNFLOWER_RAY_HIT");
      uVar5 = FUN_03b39e48(DAT_06acaeb0,(long)*(int *)(this + 0x38));
      FUN_05475d88(asStack_10,uVar5);
      PenetratingRayEntity::setHitEffectPopAnimStr(pPVar8,asStack_18,asStack_10);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      nop();
      refreshPushTypeAndValue(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCrownFlower::isValidTarget(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall PlantCrownFlower::isValidTarget(PlantCrownFlower *this,RtMixedPtrBase *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  char cVar3;
  RtObject *pRVar4;
  Zombie *this_01;
  GridItem *pGVar5;
  string *psVar6;
  undefined8 uVar7;
  ResourceInfo *pRVar8;
  undefined8 uVar9;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long lVar10;
  code *pcVar11;
  float fVar12;
  string asStack_30 [8];
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)param_2);
    cVar1 = isTargetInAttackRange(this,(RtWeakPtr<Sexy::SoundResource> *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    if (cVar1 != '\0') {
      pRVar4 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      this_01 = Sexy::RtObject::Cast<Zombie>(pRVar4);
      pRVar4 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      pGVar5 = Sexy::RtObject::Cast<GridItem>(pRVar4);
      std::string::string(asStack_30,"");
      nop();
      if (this_01 == (Zombie *)0x0) {
        if (pGVar5 != (GridItem *)0x0) {
          cVar3 = (**(code **)(*(long *)pGVar5 + 0x200))(pGVar5);
          if (cVar3 == '\0') goto LAB_03b42810;
          GridItem::GetType();
          lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
          thunk_FUN_05475e00(asStack_30,lVar10 + 8);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18)
          ;
        }
LAB_03b42840:
        cVar3 = FUN_0547419c(asStack_30);
        if (cVar3 == '\0') {
          uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
          Sexy::RtName::RtName((RtName *)local_18,L"CrownFlowerDefault");
          PVZDB::FindObjectByAlias<DragonBabyBruitProps>
                    ((RtWeakPtr *)&local_20,uVar7,5,(RtWeakPtr<Sexy::SoundResource> *)local_18);
          pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
          this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(pRVar8 + 800);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
          Sexy::RtName::~RtName((RtName *)local_18);
          uVar7 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(this_00);
          uVar9 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
          local_20 = std::
                     find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                               (uVar7,uVar9,asStack_30);
          local_18[0] = std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::end(this_00);
          bVar2 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
          cVar1 = !bVar2;
        }
      }
      else {
        psVar6 = (string *)Zombie::GetTypeName(this_01);
        bVar2 = std::operator==(psVar6,"chicken");
        if (!bVar2) {
          cVar3 = (**(code **)(*(long *)this_01 + 0x328))(this_01);
          if ((((cVar3 == '\0') && (cVar3 = Zombie::IsIgnoringAllDamage(this_01), cVar3 == '\0')) &&
              (cVar3 = FUN_03b3b050(*(undefined4 *)(this_01 + 0xcc)), cVar3 == '\0')) &&
             (cVar3 = Zombie::IsTargetable(this_01), cVar3 != '\0')) {
            pcVar11 = *(code **)(*(long *)this_01 + 0x3d0);
            psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr()
            ;
            std::string::string(asStack_28,"crownflower");
            ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)&local_20);
            cVar3 = (*pcVar11)(this_01,(RtWeakPtr<Sexy::SoundResource> *)local_18,0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
            std::string::~string(asStack_28);
            nop();
            if ((cVar3 != '\0') &&
               (fVar12 = (float)FUN_02fd3c90(*(undefined4 *)(this_01 + 0x280)), 1.0 <= fVar12)) {
              this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_01);
              lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
              thunk_FUN_05475e00(asStack_30,lVar10 + 8);
              goto LAB_03b42840;
            }
          }
LAB_03b42810:
          cVar1 = '\0';
        }
      }
      std::string::~string(asStack_30);
      goto LAB_03b42728;
    }
  }
  cVar1 = '\0';
LAB_03b42728:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCrownFlower::isPenetrable(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall PlantCrownFlower::isPenetrable(PlantCrownFlower *this,RtWeakPtrBase *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  char cVar2;
  bool bVar3;
  RtObject *pRVar4;
  Zombie *this_01;
  GridItem *pGVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long lVar6;
  undefined8 uVar7;
  ResourceInfo *pRVar8;
  undefined8 uVar9;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_18,param_2);
  cVar1 = isValidTarget(this,(RtWeakPtr<Sexy::SoundResource> *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  cVar2 = '\0';
  if (cVar1 != '\0') {
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    this_01 = Sexy::RtObject::Cast<Zombie>(pRVar4);
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    pGVar5 = Sexy::RtObject::Cast<GridItem>(pRVar4);
    std::string::string(asStack_28,"");
    nop();
    if (this_01 == (Zombie *)0x0) {
      if (pGVar5 != (GridItem *)0x0) {
        GridItem::GetType();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
        thunk_FUN_05475e00(asStack_28,lVar6 + 8);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      }
    }
    else {
      this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_01);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
      thunk_FUN_05475e00(asStack_28,lVar6 + 8);
    }
    cVar2 = FUN_0547419c(asStack_28);
    if (cVar2 == '\0') {
      uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
      Sexy::RtName::RtName((RtName *)local_18,L"CrownFlowerDefault");
      PVZDB::FindObjectByAlias<DragonBabyBruitProps>
                ((RtWeakPtr *)&local_20,uVar7,5,(RtWeakPtr<Sexy::SoundResource> *)local_18);
      pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(pRVar8 + 0x338);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      Sexy::RtName::~RtName((RtName *)local_18);
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar9 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      local_20 = std::
                 find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                           (uVar7,uVar9,asStack_28);
      local_18[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(this_00);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
      cVar2 = !bVar3;
    }
    std::string::~string(asStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCrownFlower::createRayEntity() */

void __thiscall PlantCrownFlower::createRayEntity(PlantCrownFlower *this)

{
  char cVar1;
  undefined8 *puVar2;
  PenetratingRayEntity *pPVar3;
  SexyVector3 *pSVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  PlantCrownFlower *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [24];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)(this + 0x30));
  cVar1 = isValidTarget(this,aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  if (cVar1 == '\0') {
    setState(this,0xc);
  }
  else {
    uVar7 = 0x41f00000;
    FUN_03b3d34c(*(undefined8 *)(this + 0x10));
    puVar2 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this + 0x10));
    local_60 = *puVar2;
    local_58 = 0x41f00000;
    pPVar3 = GameObject::Create<PenetratingRayEntity>();
    BoardEntity::PlaceOnBoard((SexyVector3 *)pPVar3);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)&local_50);
    PenetratingRayEntity::setOwner(pPVar3,aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)&local_50);
    PoisonPeashooterCounter::SetPlant((PoisonPeashooterCounter *)pPVar3,aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
    local_50 = isValidTarget;
    local_48 = 0;
    local_68 = this;
    std::
    bind<void(DTouchDelegate::*)(Sexy::Touch_const&),DTouchDelegate*,std::_Placeholder<1>const&>
              ((_func_void_Touch_ptr *)&local_50,(DTouchDelegate **)&local_68,
               (_Placeholder *)&DAT_0576d300);
    std::function<bool(Sexy::RtWeakPtr<BoardEntity>)>::
    function<std::_Bind<std::_Mem_fn<bool(PlantCrownFlower::*)(Sexy::RtWeakPtr<BoardEntity>)>(PlantCrownFlower*,std::_Placeholder<1>)>,void>
              ((function<bool(Sexy::RtWeakPtr<BoardEntity>)> *)afStack_28,aRStack_40);
    PenetratingRayEntity::setIsValidTargetFunc(pPVar3,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    local_48 = 0;
    local_50 = isPenetrable;
    local_68 = this;
    std::
    bind<void(DTouchDelegate::*)(Sexy::Touch_const&),DTouchDelegate*,std::_Placeholder<1>const&>
              ((_func_void_Touch_ptr *)&local_50,(DTouchDelegate **)&local_68,
               (_Placeholder *)&DAT_0576d300);
    std::function<bool(Sexy::RtWeakPtr<BoardEntity>)>::
    function<std::_Bind<std::_Mem_fn<bool(PlantCrownFlower::*)(Sexy::RtWeakPtr<BoardEntity>)>(PlantCrownFlower*,std::_Placeholder<1>)>,void>
              ((function<bool(Sexy::RtWeakPtr<BoardEntity>)> *)afStack_28,aRStack_40);
    PenetratingRayEntity::setIsPenetrableFunc(pPVar3,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    local_48 = 0;
    local_50 = damageTargets;
    local_68 = this;
    std::
    bind<void(DTouchDelegate::*)(Sexy::Touch_const&),DTouchDelegate*,std::_Placeholder<1>const&>
              ((_func_void_Touch_ptr *)&local_50,(DTouchDelegate **)&local_68,
               (_Placeholder *)&DAT_0576d300);
    std::
    function<void(std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>)>
    ::
    function<std::_Bind<std::_Mem_fn<void(PlantCrownFlower::*)(std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>)>(PlantCrownFlower*,std::_Placeholder<1>)>,void>
              ((function<void(std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>)>
                *)afStack_28,aRStack_40);
    PenetratingRayEntity::setDamageTargetsFunc(pPVar3,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    nop();
    local_48 = 0;
    local_50 = getRayEntityScaleY;
    local_68 = this;
    std::
    bind<void(DTouchDelegate::*)(Sexy::Touch_const&),DTouchDelegate*,std::_Placeholder<1>const&>
              ((_func_void_Touch_ptr *)&local_50,(DTouchDelegate **)&local_68,
               (_Placeholder *)&DAT_0576d300);
    std::
    function<float(std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>)>
    ::
    function<std::_Bind<std::_Mem_fn<float(PlantCrownFlower::*)(std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>)>(PlantCrownFlower*,std::_Placeholder<1>)>,void>
              ((function<float(std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>)>
                *)afStack_28,aRStack_40);
    PenetratingRayEntity::setScaleYFunction(pPVar3,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    pSVar4 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this + 0x10));
    uVar6 = 0;
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_40,30.0,0.0,30.0);
    uVar5 = Sexy::SexyVector3::operator+(pSVar4,(SexyVector3 *)aRStack_40);
    local_50 = (code *)CONCAT44(uVar6,uVar5);
    local_48 = CONCAT44(local_48._4_4_,uVar7);
    PenetratingRayEntity::setStartPosition(pPVar3);
    getNormalAttackRange();
    PenetratingRayEntity::setAttackRect(pPVar3,aRStack_40);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x48),(RtWeakPtrBase *)aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    pSVar4 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this + 0x10));
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x80),pSVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCrownFlower::setState(CrownFlowerState) */

void __thiscall PlantCrownFlower::setState(PlantCrownFlower *this,int param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  PlantAnimRig_DevilsFlower *pPVar4;
  undefined4 uVar5;
  float fVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(*(long *)(this + 0x10) + 200) != param_2) {
    *(int *)(*(long *)(this + 0x10) + 200) = param_2;
    uVar5 = PVZ_T();
    *(undefined4 *)(this + 0x28) = uVar5;
    lVar3 = FUN_03b3d34c(*(undefined8 *)(this + 0x10));
    pPVar4 = (PlantAnimRig_DevilsFlower *)FUN_03b3d6e8(*(undefined8 *)(this + 0x10));
    iVar1 = *(int *)(*(long *)(this + 0x10) + 200);
    if (iVar1 == 0xb) {
      lostHighEnergyState(this);
      FUN_03b3a000(asStack_10,pPVar4[0x3b8]);
      PlantAnimRig_DevilsFlower::playLoopAnimation(pPVar4,asStack_10);
      std::string::~string(asStack_10);
      createRayEntity(this);
      cVar2 = FUN_03b3b7a8(this + 0x44);
      if (cVar2 == '\0') {
        setRayStage(this,0);
      }
      else {
        setRayStage(this,2);
      }
    }
    else if (iVar1 == 0xc) {
      (**(code **)(*(long *)pPVar4 + 0x118))();
      fVar6 = (float)PVZ_T();
      *(float *)(this + 0x28) = fVar6 + *(float *)(lVar3 + 0x2b8);
    }
    else if (iVar1 == 4) {
      (**(code **)(*(long *)pPVar4 + 0x118))();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCrownFlower::CancelPlantfood() */

void __thiscall PlantCrownFlower::CancelPlantfood(PlantCrownFlower *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,0xc);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCrownFlower::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantCrownFlower::onAnimStoppedCallback(PlantCrownFlower *this,string *param_1)

{
  char cVar1;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_03b3d6e8(*(undefined8 *)(this + 0x10));
  FUN_03b39f00(asStack_10,*(undefined1 *)(lVar2 + 0x3b8));
  cVar1 = std::operator==(param_1,asStack_10);
  std::string::~string(asStack_10);
  if (cVar1 == '\0') {
    FUN_03b39f80(asStack_10,*(undefined1 *)(lVar2 + 0x3b8));
    cVar1 = std::operator==(param_1,asStack_10);
    std::string::~string(asStack_10);
    if (cVar1 != '\0') {
      setState(this,0xc);
    }
  }
  else {
    setState(this,0xb);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCrownFlower::tryStopAttacking() */

void __thiscall PlantCrownFlower::tryStopAttacking(PlantCrownFlower *this)

{
  char cVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x30));
  cVar1 = isValidTarget(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (cVar1 == '\0') {
    stopAttacking(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCrownFlower::updateZombiesPushing(std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > >) */

void __thiscall
PlantCrownFlower::updateZombiesPushing
          (PlantCrownFlower *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2)

{
  vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *this_00;
  int iVar1;
  char cVar2;
  bool bVar3;
  Zombie *pZVar4;
  RtWeakPtr *this_01;
  ResourceInfo *this_02;
  ulong uVar5;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var7;
  float *pfVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> avStack_50 [24];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20 [3];
  long local_8;
  
  this_00 = (vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)(this + 0x60)
  ;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::vector
            (avStack_50,(vector *)this_00);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_2);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_2);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60), bVar3) {
    this_01 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    this_02 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
    if ((this_02 == (ResourceInfo *)0x0) ||
       (pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)this_02), pZVar4 == (Zombie *)0x0)) break;
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_20,(RtWeakPtrBase *)&local_58);
    cVar2 = canZombieBePushed(this,(RtWeakPtr<Sexy::SoundResource> *)local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    if (cVar2 == '\0') break;
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_20,(RtWeakPtrBase *)&local_58);
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)&local_38,
               (RtWeakPtr *)local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
  }
  uVar11 = local_38;
  uVar5 = FUN_03b39e2c(local_38,local_30);
  if (1 < uVar5) {
    uVar10 = 1;
    while (iVar1 = (int)uVar10, uVar10 < uVar5) {
      pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03b39e38(uVar11,uVar10);
      p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
      pfVar8 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var7);
      fVar12 = *pfVar8;
      lVar9 = uVar10 - 1;
      uVar10 = uVar10 + 1;
      pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03b39e38(local_38,lVar9);
      p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
      pfVar8 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var7);
      uVar11 = local_38;
      if (30.0 <= fVar12 - *pfVar8) {
        local_70 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_38);
        local_68 = __gnu_cxx::
                   __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                   ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                *)&local_70,(long)iVar1);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_58,(__normal_iterator *)&local_68);
        local_60 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_38);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_20,(__normal_iterator *)&local_60);
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
                  ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                   &local_38,local_58,local_20[0]);
        break;
      }
      uVar5 = FUN_03b39e2c(local_38,local_30);
    }
  }
  bVar3 = std::operator!=((vector *)&local_38,(vector *)this_00);
  if (bVar3) {
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear(this_00);
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::operator=
              (this_00,(vector *)&local_38);
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::vector
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)local_20,
               (vector *)avStack_50);
    onPushingZombiesChanged
              (this,(vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                    local_20);
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)local_20);
  }
  updatePushing(this);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)&local_38);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector(avStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCrownFlower::damageTargets(std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > >) */

void __thiscall
PlantCrownFlower::damageTargets
          (PlantCrownFlower *this,
          vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *param_2
          )

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  RtWeakPtrBase *pRVar5;
  ulong uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [16];
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          empty(param_2);
  if (cVar2 == '\0') {
    FUN_03b3d6e8(*(undefined8 *)(this + 0x10));
    FUN_03b3d34c(*(undefined8 *)(this + 0x10));
    iVar4 = FUN_03b39de4(*(undefined8 *)(this + 0x10));
    bVar1 = false;
    if (4 < iVar4) {
      fVar8 = (float)PVZ_T();
      if (*(float *)(this + 0x58) < fVar8) {
        fVar8 = (float)PVZ_T();
        *(float *)(this + 0x58) = fVar8 + 1.0;
      }
      bVar1 = 0 < *(int *)(this + 0x38);
    }
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)param_2);
    local_80 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_2);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80), bVar3)
    {
      pRVar5 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_90,pRVar5);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_90);
      if (cVar2 != '\0') {
        fVar10 = *(float *)(this + 0x3c);
        fVar8 = (float)PVZ_Dt();
        fVar9 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
        uVar6 = FUN_03b39e20(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
        Sexy::Point::Point(aPStack_78,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)((fVar8 * fVar9 * fVar10) / (float)uVar6),local_70,local_6c,
                   aDStack_68,aPStack_78,0);
        local_58 = 0x2000000000000;
        plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
        (**(code **)(*plVar7 + 0x110))(plVar7,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
    }
    if (bVar1) {
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::vector
                ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                  *)aDStack_68,(vector *)param_2);
      updateZombiesPushing
                (this,(vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                       *)aDStack_68);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              aDStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCrownFlower::updateTarget() */

void __thiscall PlantCrownFlower::updateTarget(PlantCrownFlower *this)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  PlantAnimRig_WizardThorns *pPVar7;
  long lVar8;
  undefined8 *puVar9;
  Zombie *this_01;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)this_00);
  cVar1 = isValidTarget(this,(RtWeakPtr<Sexy::SoundResource> *)&local_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  if (cVar1 == '\0') {
    uVar13 = 0;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_68);
    uVar14 = 0;
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    FUN_03b3d34c(*(undefined8 *)(this + 0x10));
    pPVar7 = (PlantAnimRig_WizardThorns *)FUN_03b3d6e8(*(undefined8 *)(this + 0x10));
    getNormalAttackRange();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
    uVar3 = operator|(2,4);
    uVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
    uVar5 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
    EntityFinder::GetEntitiesTouchingRectangle
              ((RtWeakPtr<Sexy::SoundResource> *)&local_68,uVar3,auStack_78,uVar4,uVar5);
    uVar11 = local_68;
    lVar8 = FUN_03b39e0c(local_68,local_60);
    uVar10 = 0;
    if (lVar8 != 0) {
      do {
        puVar9 = (undefined8 *)FUN_03b39e18(uVar11,uVar13);
        this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
        if ((this_01 != (Zombie *)0x0) && (iVar6 = Zombie::GetSizeType(this_01), iVar6 == 2)) {
          uVar10 = FUN_03b39e0c(local_68,local_60);
          if (uVar13 < uVar10) {
            local_a8 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)&local_68);
            local_a0 = __gnu_cxx::
                       __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                       ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                    *)&local_a8,(long)(int)uVar14);
            local_98 = __gnu_cxx::
                       __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                       ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                    *)&local_a0,1);
            __gnu_cxx::
            __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
            ::__normal_iterator<Sexy::RenderStateManager::Context**>
                      ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        *)&local_88,(__normal_iterator *)&local_98);
            local_90 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)&local_68);
            __gnu_cxx::
            __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
            ::__normal_iterator<Sexy::RenderStateManager::Context**>
                      ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        *)&local_80,(__normal_iterator *)&local_90);
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68,local_88,
                       local_80);
            uVar10 = FUN_03b39e0c(local_68,local_60);
          }
          break;
        }
        uVar11 = local_68;
        uVar13 = uVar13 + 1;
        uVar14 = uVar13 & 0xffffffff;
        uVar10 = FUN_03b39e0c(local_68,local_60);
      } while (uVar13 < uVar10);
    }
    if (uVar10 != 0) {
      uVar11 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_68);
      uVar12 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_68);
      FUN_03b44800(uVar11,uVar12);
    }
    local_98 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_68);
    local_90 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_68);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_98,(__normal_iterator *)&local_90), bVar2)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_80,(RtWeakPtrBase *)&local_88);
      cVar1 = isValidTarget(this,(RtWeakPtr<Sexy::SoundResource> *)&local_80);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
      if (cVar1 != '\0') {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)&local_80);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
        break;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_80,(RtWeakPtrBase *)this_00);
    cVar1 = isValidTarget(this,(RtWeakPtr<Sexy::SoundResource> *)&local_80);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
    if (cVar1 == '\0') {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
    }
    else {
      FUN_03b39f00((exception_ptr *)&local_98,pPVar7[0x3b8]);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_90);
      std::string::string((string *)&local_80,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                 (RtId *)&local_88,(RtWeakPtr<Sexy::SoundResource> *)&local_80);
      PlantAnimRig_WizardThorns::PlayTapAnimation(pPVar7,(exception_ptr *)&local_98,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)&local_80);
      nop();
      Sexy::RtId::~RtId((RtId *)&local_88);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
      std::string::~string((string *)&local_98);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantCrownFlower::UpdateActions() */

void __thiscall PlantCrownFlower::UpdateActions(PlantCrownFlower *this)

{
  int iVar1;
  char cVar2;
  float fVar3;
  undefined4 uVar4;
  
  cVar2 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar2 == '\0') {
      FUN_03b3d34c(*(undefined8 *)(this + 0x10));
      FUN_03b3d6e8(*(undefined8 *)(this + 0x10));
      iVar1 = *(int *)(*(long *)(this + 0x10) + 200);
      if (iVar1 == 0xb) {
        fVar3 = (float)PVZ_T();
        if ((*(float *)(this + 0x28) < fVar3) && (*(int *)(this + 0x38) < 3)) {
          setRayStage(this,*(int *)(this + 0x38) + 1);
        }
        tryStopAttacking(this);
        return;
      }
      if (iVar1 == 0xc) {
        fVar3 = (float)PVZ_T();
        if (*(float *)(this + 0x28) < fVar3) {
          uVar4 = PVZ_EOT();
          *(undefined4 *)(this + 0x28) = uVar4;
          setState(this,4);
          return;
        }
      }
      else if (((iVar1 == 4) && (updateTarget(this), this[0x40] != (PlantCrownFlower)0x0)) &&
              (fVar3 = (float)PVZ_T(), *(float *)(this + 0x44) < fVar3)) {
        lostHighEnergyState(this);
        return;
      }
    }
  }
  else {
    lostHighEnergyState(this);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x48));
    if (cVar2 != '\0') {
      stopAttacking(this);
      return;
    }
  }
  return;
}

