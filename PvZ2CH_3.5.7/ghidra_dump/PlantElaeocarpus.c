// Class: PlantElaeocarpus


/* PlantElaeocarpus::PlantElaeocarpus() */

void __thiscall PlantElaeocarpus::PlantElaeocarpus(PlantElaeocarpus *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0681b040;
  return;
}


/* PlantElaeocarpus::StaticNew() */

PlantElaeocarpus * PlantElaeocarpus::StaticNew(void)

{
  PlantElaeocarpus *this;
  
  this = ::operator_new(0x38);
  PlantElaeocarpus(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElaeocarpus::StaticClassInit() */

void PlantElaeocarpus::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantElaeocarpus");
    (*pcVar2)(plVar1,asStack_10,FUN_04259678,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantElaeocarpus::StaticGetClass() */

long * PlantElaeocarpus::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantElaeocarpus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantElaeocarpus::GetClass() const */

long * PlantElaeocarpus::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantElaeocarpus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantElaeocarpus::~PlantElaeocarpus() */

void __thiscall PlantElaeocarpus::~PlantElaeocarpus(PlantElaeocarpus *this)

{
  *(undefined ***)this = &PTR_GetClass_0681b040;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantElaeocarpus::~PlantElaeocarpus() */

void __thiscall PlantElaeocarpus::~PlantElaeocarpus(PlantElaeocarpus *this)

{
  ~PlantElaeocarpus(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElaeocarpus::Initialize() */

void __thiscall PlantElaeocarpus::Initialize(PlantElaeocarpus *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *this_02;
  RtObject *this_03;
  NewAvatarGeneralSkillBoost *pNVar4;
  undefined4 uVar5;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x28) = 1;
  local_8 = ___stack_chk_guard;
  uVar5 = PVZ_T();
  *(undefined4 *)(this + 0x30) = 1;
  *(undefined4 *)(this + 0x2c) = uVar5;
  PlantFramework::Initialize((PlantFramework *)this);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_02 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
  std::string::string(asStack_10,"elaeocarpus_new_avatar_1");
  iVar3 = NameMapperBase::GetIdForName(this_02,asStack_10);
  std::string::~string(asStack_10);
  nop();
  cVar1 = PlayerInfo::IsPlantNewAvatarUnLocked(this_01,iVar3);
  if (cVar1 != '\0') {
    NewAvatar::GetAvatarInfoByAvatarId(iVar3);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar2) {
      NewAvatar::GetAvatarInfoByAvatarId(iVar3);
      this_03 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      pNVar4 = Sexy::RtObject::Cast<NewAvatarGeneralSkillBoost>(this_03);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      if (pNVar4 != (NewAvatarGeneralSkillBoost *)0x0) {
        *(int *)(this + 0x30) = (int)((float)*(int *)(this + 0x30) + *(float *)(pNVar4 + 100));
      }
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElaeocarpus::FindTargetAndFire(PlantWeapon) */

void PlantElaeocarpus::FindTargetAndFire(long *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  UIEasyButtonWidget *this;
  RtObject *pRVar4;
  PlantAnimRig_Elaeocarpus *pPVar5;
  Zombie *pZVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  fVar11 = *(float *)((long)param_1 + 0x2c);
  local_8 = ___stack_chk_guard;
  fVar10 = (float)PVZ_T();
  if ((fVar11 <= fVar10) || (cVar2 = Plant::CanFindTarget(param_1[2],0), cVar2 == '\0')) {
    lVar9 = param_1[2];
    iVar3 = FUN_04258f70(lVar9);
    uVar8 = 1;
    if (1 < iVar3) {
      uVar8 = 2;
    }
    bVar1 = false;
    Plant::FindTarget(aRStack_10,lVar9,uVar8);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    if (cVar2 != '\0') {
      pRVar4 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
      ;
      pZVar6 = Sexy::RtObject::Cast<Zombie>(pRVar4);
      bVar1 = pZVar6 != (Zombie *)0x0;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    this = (UIEasyButtonWidget *)param_1[2];
    if (!bVar1) {
      cVar2 = Plant::CanFindTarget(this,0);
      uVar8 = 0;
      if (cVar2 != '\0') {
        *(undefined4 *)(param_1 + 5) = 1;
        pRVar4 = (RtObject *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)param_1[2]);
        pPVar5 = Sexy::RtObject::Cast<PlantAnimRig_Elaeocarpus>(pRVar4);
        FUN_04258f78(pPVar5 + 0x3b8,(int)param_1[5]);
        (**(code **)(*param_1 + 0x1a0))(param_1);
        uVar8 = 1;
      }
      goto LAB_0425a9b8;
    }
    uVar7 = 2;
  }
  else {
    this = (UIEasyButtonWidget *)param_1[2];
    uVar7 = 3;
  }
  *(undefined4 *)(param_1 + 5) = uVar7;
  pRVar4 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this);
  pPVar5 = Sexy::RtObject::Cast<PlantAnimRig_Elaeocarpus>(pRVar4);
  FUN_04258f78(pPVar5 + 0x3b8,(int)param_1[5]);
  (**(code **)(*param_1 + 0x1a0))(param_1);
  uVar8 = 1;
LAB_0425a9b8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


/* PlantElaeocarpus::ApplyPlantfood() */

void __thiscall PlantElaeocarpus::ApplyPlantfood(PlantElaeocarpus *this)

{
  long lVar1;
  float fVar2;
  
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  fVar2 = (float)PVZ_T();
  lVar1 = FUN_0425ae1c(*(undefined8 *)(this + 0x10));
  *(float *)(this + 0x2c) = fVar2 + *(float *)(lVar1 + 700);
  return;
}


/* PlantElaeocarpus::LaunchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float, float) */

void __thiscall
PlantElaeocarpus::LaunchProjectileAt
          (PlantElaeocarpus *this,Projectile *param_1,SexyVector3 *param_2,float param_3,
          float param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ElaeocarpusDefaultProjectile *this_00;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar3 = FUN_0425ae1c(*(undefined8 *)(this + 0x10));
  fVar6 = *(float *)(lVar3 + 0x2cc);
  lVar3 = FUN_0425ae1c(*(undefined8 *)(this + 0x10));
  fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,param_3 * *(float *)(lVar3 + 0x2cc));
  fVar4 = fVar4 + fVar6;
  lVar3 = FUN_0425ae1c(*(undefined8 *)(this + 0x10));
  fVar5 = *(float *)(lVar3 + 0x2c8);
  lVar3 = FUN_0425ae1c(*(undefined8 *)(this + 0x10));
  fVar6 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * *(float *)(lVar3 + 0x2c8));
  fVar6 = fVar6 + fVar5;
  if ((param_1 != (Projectile *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<ElaeocarpusDefaultProjectile>((RtObject *)param_1), bVar1)) {
    this_00 = Sexy::RtObject::Cast<ElaeocarpusDefaultProjectile>((RtObject *)param_1);
    iVar2 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
    ElaeocarpusDefaultProjectile::FillSomeInfo(this_00,fVar4,fVar6,iVar2);
    ElaeocarpusDefaultProjectile::SetJumpTimes(this_00,*(int *)(this + 0x30));
  }
  Projectile::LaunchAt(param_1,param_2,fVar4,fVar6);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElaeocarpus::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantElaeocarpus::Fire
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               PlantElaeocarpus *param_4,RtWeakPtrBase *param_5,undefined8 param_6,
               undefined8 param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  RtObject *this;
  ElaeocarpusDefaultProjectile *pEVar5;
  ElaeocarpusSmashProjectile *this_00;
  ElaeocarpusPlantFoodProjectile *pEVar6;
  ResourceInfo *pRVar7;
  float *pfVar8;
  long *plVar9;
  long lVar10;
  float *pfVar11;
  Plant *pPVar12;
  RealObject *pRVar13;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var14;
  code *pcVar15;
  float fVar16;
  float fVar17;
  RtMixedPtrBase aRStack_38 [8];
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_4 + 0x180))();
  if (cVar1 != '\0') {
    this = (RtObject *)0x0;
    goto LAB_0425b194;
  }
  iVar3 = *(int *)(param_4 + 0x28);
  pPVar12 = *(Plant **)(param_4 + 0x10);
  iVar2 = 0;
  if (iVar3 == 1) {
    iVar2 = 0;
    *(undefined4 *)(pPVar12 + 0x150) = 0;
  }
  else if ((iVar3 == 2) || (iVar3 == 3)) {
    *(int *)(pPVar12 + 0x150) = iVar3;
    iVar2 = iVar3;
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_5);
  this = (RtObject *)
         Plant::Fire(pPVar12,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_6,param_7);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  if (this == (RtObject *)0x0) goto LAB_0425b194;
  pEVar5 = Sexy::RtObject::Cast<ElaeocarpusDefaultProjectile>(this);
  this_00 = Sexy::RtObject::Cast<ElaeocarpusSmashProjectile>(this);
  pEVar6 = Sexy::RtObject::Cast<ElaeocarpusPlantFoodProjectile>(this);
  if (pEVar5 != (ElaeocarpusDefaultProjectile *)0x0) {
    PlantFramework::FindTargetZombie(aRStack_38,param_4,iVar2);
    (**(code **)(*(long *)param_4 + 0xf8))
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_4,iVar2);
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    DVec3::DVec3((DVec3 *)&local_28);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
    if (cVar1 == '\0') {
      if (pRVar7 == (ResourceInfo *)0x0) {
        pfVar11 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           **)(param_4 + 0x10));
        local_28 = *pfVar11 + 600.0;
        local_24 = pfVar11[1];
        local_20 = 0;
      }
      else {
        GridItem::GetGridLocation();
        BoardTransforms::GridToBoardSpace((Point *)&local_18);
        local_28 = (float)local_30;
        local_20 = 0x41c80000;
        local_24 = (float)local_2c;
      }
    }
    else {
      plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pcVar15 = *(code **)(*plVar9 + 0x3b0);
      lVar10 = FUN_0425ae1c(*(undefined8 *)(param_4 + 0x10));
      local_18 = (*pcVar15)(*(undefined4 *)(lVar10 + 0x2c8),plVar9);
      local_14 = param_2;
      local_10 = param_3;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
    }
    LaunchProjectileAt(param_4,(Projectile *)this,(SexyVector3 *)&local_28,0.1,0.1);
    pRVar13 = *(RealObject **)(param_4 + 0x10);
    std::string::string((string *)&local_18,"Play_Plant_Elaeocarpus_Attack");
    RealObject::PlayPositionalSound(pRVar13,(string *)&local_18,0.0);
    std::string::~string((string *)&local_18);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    goto LAB_0425b194;
  }
  if (this_00 == (ElaeocarpusSmashProjectile *)0x0) {
    if (pEVar6 != (ElaeocarpusPlantFoodProjectile *)0x0) {
      uVar4 = Plant::GetAvatarEnable(*(Plant **)(param_4 + 0x10));
      FUN_04258f88(pEVar6 + 0x1a5,uVar4);
      lVar10 = FUN_0425ae1c(*(undefined8 *)(param_4 + 0x10));
      FUN_04258f90(*(undefined4 *)(lVar10 + 0x2b8),pEVar6 + 0x1a8);
      pRVar13 = *(RealObject **)(param_4 + 0x10);
      std::string::string((string *)&local_18,"Play_CabbagePult_Throw");
      RealObject::PlayPositionalSound(pRVar13,(string *)&local_18,0.0);
      std::string::~string((string *)&local_18);
      nop();
    }
    goto LAB_0425b194;
  }
  PlantFramework::FindTargetZombie((RtMixedPtrBase *)&local_28,param_4,iVar2);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_28);
  if (cVar1 == '\0') {
LAB_0425b1fc:
    p_Var14 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(param_4 + 0x10);
  }
  else {
    p_Var14 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    pfVar11 = (float *)std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost(p_Var14);
    p_Var14 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(param_4 + 0x10);
    pfVar8 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var14);
    if ((int)(*pfVar11 - *pfVar8) < 0x78) {
      pfVar11 = (float *)Projectile::GetVelocity((Projectile *)this_00);
      Projectile::SetVelocity((Projectile *)this_00,*pfVar11,pfVar11[1],pfVar11[2] * 3.0);
      goto LAB_0425b1fc;
    }
  }
  iVar3 = FUN_04258f70(p_Var14);
  if (iVar3 < 3) {
LAB_0425b210:
    lVar10 = FUN_0425ae1c(p_Var14);
    fVar17 = *(float *)(lVar10 + 0x2c0);
  }
  else {
    FUN_04258fc4(this_00 + 0x1a5);
    p_Var14 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(param_4 + 0x10);
    iVar3 = FUN_04258f70(p_Var14);
    if (iVar3 != 5) goto LAB_0425b210;
    lVar10 = FUN_0425ae1c(p_Var14);
    fVar17 = *(float *)(lVar10 + 0x2c4);
  }
  fVar16 = (float)Plant::GetGeneSkillBoost(*(Plant **)(param_4 + 0x10));
  FUN_04258f80(fVar16 + fVar17,this_00 + 0x1a8);
  pRVar13 = *(RealObject **)(param_4 + 0x10);
  std::string::string((string *)&local_18,"Play_Plant_Elaeocarpus_Smash");
  RealObject::PlayPositionalSound(pRVar13,(string *)&local_18,0.0);
  std::string::~string((string *)&local_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
LAB_0425b194:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}

