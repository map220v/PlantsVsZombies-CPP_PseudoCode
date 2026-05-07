// Class: PlantAppleMortar


/* PlantAppleMortar::PlantAppleMortar() */

void __thiscall PlantAppleMortar::PlantAppleMortar(PlantAppleMortar *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x2c] = (PlantAppleMortar)0x0;
  this[0x2d] = (PlantAppleMortar)0x0;
  *(undefined ***)this = &PTR_GetClass_067fcb40;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


/* PlantAppleMortar::StaticNew() */

PlantAppleMortar * PlantAppleMortar::StaticNew(void)

{
  PlantAppleMortar *this;
  
  this = ::operator_new(0x30);
  PlantAppleMortar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAppleMortar::StaticClassInit() */

void PlantAppleMortar::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAppleMortar");
    (*pcVar2)(plVar1,asStack_10,FUN_04196d80,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAppleMortar::StaticGetClass() */

long * PlantAppleMortar::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAppleMortar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAppleMortar::GetClass() const */

long * PlantAppleMortar::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAppleMortar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAppleMortar::getPlantActionIdx() */

undefined4 __thiscall PlantAppleMortar::getPlantActionIdx(PlantAppleMortar *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_04196144(*(undefined8 *)(this + 0x10));
  uVar2 = 2;
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  return uVar2;
}


/* PlantAppleMortar::getPFPlantActionIdx() */

undefined4 __thiscall PlantAppleMortar::getPFPlantActionIdx(PlantAppleMortar *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    return 4;
  }
  cVar1 = FUN_04196144(*(undefined8 *)(this + 0x10));
  uVar2 = 3;
  if (cVar1 == '\0') {
    uVar2 = 1;
  }
  return uVar2;
}


/* PlantAppleMortar::~PlantAppleMortar() */

void __thiscall PlantAppleMortar::~PlantAppleMortar(PlantAppleMortar *this)

{
  *(undefined ***)this = &PTR_GetClass_067fcb40;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantAppleMortar::~PlantAppleMortar() */

void __thiscall PlantAppleMortar::~PlantAppleMortar(PlantAppleMortar *this)

{
  ~PlantAppleMortar(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAppleMortar::PlayAttackAnimation() */

void __thiscall PlantAppleMortar::PlayAttackAnimation(PlantAppleMortar *this)

{
  char cVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  PlantAnimRig *pPVar4;
  undefined1 *__n;
  UIEasyButtonWidget *this_00;
  undefined1 auStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  __n = auStack_48;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack");
  nop();
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  cVar1 = FUN_04196144(this_00);
  if (cVar1 != '\0') {
    std::string::append(asStack_40,"attack_Golden",(size_t)__n);
    this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  }
  pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar2 = PopAnimRig::PlayAndStop(pPVar3,asStack_40,0,aDStack_38);
  if (iVar2 == -1) {
    std::string::~string(asStack_40);
  }
  else {
    pPVar4 = (PlantAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    PlantAnimRig::SetState(pPVar4,2);
    std::string::~string(asStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAppleMortar::PlayAttackAnimation2() */

void __thiscall PlantAppleMortar::PlayAttackAnimation2(PlantAppleMortar *this)

{
  char cVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  PlantAnimRig *pPVar4;
  undefined1 *__n;
  UIEasyButtonWidget *this_00;
  undefined1 auStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  __n = auStack_48;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack02");
  nop();
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  cVar1 = FUN_04196144(this_00);
  if (cVar1 != '\0') {
    std::string::append(asStack_40,"attack_Golden02",(size_t)__n);
    this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  }
  pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar2 = PopAnimRig::PlayAndStop(pPVar3,asStack_40,0,aDStack_38);
  if (iVar2 == -1) {
    std::string::~string(asStack_40);
  }
  else {
    pPVar4 = (PlantAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    PlantAnimRig::SetState(pPVar4,2);
    std::string::~string(asStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAppleMortar::Initialize() */

void __thiscall PlantAppleMortar::Initialize(PlantAppleMortar *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  PlantAnimRig *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  NameMapperBase *this_03;
  RtObject *this_04;
  NewAvatarGeneralSkillBoost *pNVar4;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this_00 = (PlantAnimRig *)
            UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar3 = FUN_0419613c(*(undefined8 *)(this + 0x10));
  PlantAnimRig::SetPlantLevel(this_00,iVar3);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  this_03 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
  std::string::string(asStack_10,"applemortar_new_avatar_3");
  iVar3 = NameMapperBase::GetIdForName(this_03,asStack_10);
  std::string::~string(asStack_10);
  nop();
  cVar1 = PlayerInfo::IsPlantNewAvatarUnLocked(this_02,iVar3);
  if (cVar1 != '\0') {
    NewAvatar::GetAvatarInfoByAvatarId(iVar3);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar2) {
      NewAvatar::GetAvatarInfoByAvatarId(iVar3);
      this_04 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      pNVar4 = Sexy::RtObject::Cast<NewAvatarGeneralSkillBoost>(this_04);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      if (pNVar4 != (NewAvatarGeneralSkillBoost *)0x0) {
        *(undefined4 *)(this + 0x28) = *(undefined4 *)(pNVar4 + 100);
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
/* PlantAppleMortar::getTargetInRow(int, PlantWeapon) */

void PlantAppleMortar::getTargetInRow
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
               long *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  RtObject *this;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_38 [8];
  undefined8 local_30;
  RtMixedPtrBase aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined1 auStack_18 [4];
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_38);
  local_30 = (**(code **)(*param_2 + 0x3f8))(param_2,param_4);
  (**(code **)(*param_2 + 0x2b0))(auStack_18,param_2,param_4);
  if (param_3 != 0) {
    iVar1 = param_3 + local_14;
    if ((iVar1 < 0) || (iVar3 = BoardConstants::NUMBER_OF_ROWS(), iVar3 <= iVar1)) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (param_1);
      goto LAB_04197628;
    }
    local_14 = local_14 + param_3;
  }
  (**(code **)(*param_2 + 0xd8))(aRStack_28,param_2,auStack_18,param_4,&local_30);
  (**(code **)(*param_2 + 0x100))(aRStack_20,param_2,auStack_18,param_4);
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
  if (cVar2 == '\0') {
    if (this != (RtObject *)0x0) goto LAB_041976dc;
  }
  else {
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
LAB_041976dc:
    Sexy::RtObject::Cast<BoardEntity>(this);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_38,(RtWeakPtrBase *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)param_1,(RtWeakPtrBase *)a_Stack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
LAB_04197628:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAppleMortar::FindTargetAndFire(PlantWeapon) */

void __thiscall PlantAppleMortar::FindTargetAndFire(PlantAppleMortar *this,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_18);
  getTargetInRow(aRStack_10,this,0,param_2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_18);
  if (cVar2 == '\0') {
    getTargetInRow(aRStack_10,this,0xffffffff,param_2);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_18);
    getTargetInRow(aRStack_10,this,1,param_2);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_18);
    uVar6 = 0;
    if (cVar3 == '\0' && cVar2 == '\0') goto LAB_041978a8;
  }
  iVar4 = FUN_0419613c(*(undefined8 *)(this + 0x10));
  if (iVar4 == 2) {
    fVar7 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    lVar5 = FUN_04197798(*(undefined8 *)(this + 0x10));
    bVar1 = fVar7 < *(float *)(this + 0x28) + *(float *)(lVar5 + 0x2c0);
LAB_04197980:
    if (bVar1) {
      this[0x2d] = (PlantAppleMortar)0x0;
      this[0x2c] = (PlantAppleMortar)0x1;
      uVar6 = 1;
      PlayAttackAnimation2(this);
      goto LAB_041978a8;
    }
  }
  else if (2 < iVar4) {
    fVar7 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    lVar5 = FUN_04197798(*(undefined8 *)(this + 0x10));
    bVar1 = fVar7 < *(float *)(this + 0x28) + *(float *)(lVar5 + 0x2c4);
    goto LAB_04197980;
  }
  this[0x2c] = (PlantAppleMortar)0x0;
  uVar6 = 1;
  (**(code **)(*(long *)this + 0x1a0))(this);
LAB_041978a8:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* PlantAppleMortar::launchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float, float) */

void __thiscall
PlantAppleMortar::launchProjectileAt
          (PlantAppleMortar *this,Projectile *param_1,SexyVector3 *param_2,float param_3,
          float param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_04197798(*(undefined8 *)(this + 0x10));
  fVar5 = *(float *)(lVar1 + 0x2cc);
  lVar1 = FUN_04197798(*(undefined8 *)(this + 0x10));
  fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,param_3 * *(float *)(lVar1 + 0x2cc));
  lVar1 = FUN_04197798(*(undefined8 *)(this + 0x10));
  fVar4 = *(float *)(lVar1 + 0x2c8);
  lVar1 = FUN_04197798(*(undefined8 *)(this + 0x10));
  fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * *(float *)(lVar1 + 0x2c8));
  Projectile::LaunchAt(param_1,param_2,fVar2 + fVar5,fVar3 + fVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAppleMortar::launchSpecialProjectile(Sexy::SexyVector3, Sexy::RtWeakPtr<BoardEntity>,
   Sexy::RtWeakPtr<BoardEntity> const&) */

void PlantAppleMortar::launchSpecialProjectile
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,PlantAppleMortar *param_4,
               RtWeakPtr *param_5,RtWeakPtr *param_6)

{
  bool bVar1;
  undefined4 uVar2;
  Projectile *this;
  undefined8 uVar3;
  RtObject *this_00;
  Zombie *pZVar4;
  AppleMortarProjectile *pAVar5;
  long lVar6;
  Plant *pPVar7;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  lVar6 = *(long *)(param_4 + 0x10);
  local_8 = ___stack_chk_guard;
  local_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  uVar2 = getPFPlantActionIdx(param_4);
  *(undefined4 *)(lVar6 + 0x150) = uVar2;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_5);
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_5);
    pZVar4 = Sexy::RtObject::Cast<Zombie>(this_00);
    pPVar7 = *(Plant **)(param_4 + 0x10);
    if (pZVar4 != (Zombie *)0x0) {
      ToolPacketData::GetProps();
      goto LAB_04197ae4;
    }
  }
  else {
    pPVar7 = *(Plant **)(param_4 + 0x10);
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_18);
LAB_04197ae4:
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)a_Stack_18);
  this = (Projectile *)Plant::Fire(pPVar7,aRStack_10,0xffffffff,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
  if ((*(int *)(*(long *)(param_4 + 0x10) + 0x150) == 4) &&
     (pAVar5 = Sexy::RtObject::Cast<AppleMortarProjectile>((RtObject *)this),
     pAVar5 != (AppleMortarProjectile *)0x0)) {
    pAVar5[0x1a5] = (AppleMortarProjectile)0x1;
  }
  uVar3 = FUN_04196124(*(undefined8 *)(this + 0xe0));
  uVar3 = operator|(uVar3,0x2000);
  FUN_04196128(this + 0xe0,uVar3);
  launchProjectileAt(param_4,this,(SexyVector3 *)&local_30,1.0,0.15);
  Projectile::SetTarget(this,param_6);
  *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 0xffffffff;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAppleMortar::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantAppleMortar::Fire
               (undefined1 param_1 [16],float param_2,undefined4 param_3,PlantAppleMortar *param_4,
               RtWeakPtrBase *param_5,undefined8 param_6,undefined4 param_7)

{
  float fVar1;
  float fVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  RtObject *pRVar7;
  Zombie *pZVar8;
  long lVar9;
  float *pfVar10;
  code *pcVar11;
  Plant *pPVar12;
  long lVar13;
  RealObject *this;
  Projectile *pPVar14;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float fVar15;
  RtMixedPtrBase aRStack_48 [8];
  int local_40;
  int local_3c;
  int local_38 [4];
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = (**(code **)(*(long *)param_4 + 0x180))();
  if (cVar3 == '\0') {
    local_38[1] = 0;
    local_38[0] = -1;
    local_38[2] = 1;
    iVar5 = RandRangeInt(0,2);
    lVar13 = 0;
    pPVar14 = (Projectile *)0x0;
    std::swap<int>(local_38,local_38 + iVar5);
    fVar1 = _FUN_04197f04;
    do {
      getTargetInRow(aRStack_48,param_4,*(undefined4 *)((long)local_38 + lVar13),param_7);
      cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_48);
      if (cVar3 != '\0') {
        DVec3::DVec3((DVec3 *)&local_28);
        pRVar7 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
        bVar4 = Sexy::RtObject::IsA<Zombie>(pRVar7);
        if (bVar4) {
          pRVar7 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          pZVar8 = Sexy::RtObject::Cast<Zombie>(pRVar7);
          pcVar11 = *(code **)(*(long *)pZVar8 + 0x3b0);
          lVar9 = FUN_04197798(*(undefined8 *)(param_4 + 0x10));
          local_18 = (*pcVar11)(*(undefined4 *)(lVar9 + 0x2c8),pZVar8);
          local_14 = param_2;
          local_10 = param_3;
          Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
          fVar2 = local_28;
          this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      **)(param_4 + 0x10);
          pfVar10 = (float *)std::
                             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::_M_leftmost(this_00);
          fVar15 = *pfVar10;
          if (fVar2 < fVar15) {
            iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
            this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        **)(param_4 + 0x10);
            local_28 = fVar15 + (float)iVar5 * 0.5;
          }
        }
        else {
          pRVar7 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          bVar4 = Sexy::RtObject::IsA<GridItem>(pRVar7);
          if (!bVar4) goto LAB_04197da8;
          pRVar7 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          Sexy::RtObject::Cast<GridItem>(pRVar7);
          GridItem::GetGridLocation();
          BoardTransforms::GridToBoardSpace((Point *)&local_18);
          this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      **)(param_4 + 0x10);
          local_20 = 0x41c80000;
          local_28 = (float)local_40;
          local_24 = (float)local_3c;
        }
        uVar6 = getPlantActionIdx(param_4);
        pPVar12 = *(Plant **)(param_4 + 0x10);
        *(undefined4 *)(this_00 + 0x150) = uVar6;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_5);
        pPVar14 = (Projectile *)
                  Plant::Fire(pPVar12,(RtWeakPtr<Sexy::SoundResource> *)&local_18,
                              *(undefined4 *)((long)local_38 + lVar13),param_7);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        param_2 = fVar1;
        launchProjectileAt(param_4,pPVar14,(SexyVector3 *)&local_28,fVar1,fVar1);
        if ((param_4[0x2c] != (PlantAppleMortar)0x0) && (param_4[0x2d] != (PlantAppleMortar)0x0)) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          break;
        }
      }
LAB_04197da8:
      lVar13 = lVar13 + 4;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    } while (lVar13 != 0xc);
    if ((param_4[0x2c] != (PlantAppleMortar)0x0) && (param_4[0x2d] == (PlantAppleMortar)0x0)) {
      param_4[0x2d] = (PlantAppleMortar)0x1;
    }
    if (pPVar14 != (Projectile *)0x0) {
      this = *(RealObject **)(param_4 + 0x10);
      std::string::string((string *)&local_18,"Play_Pepperpult_Throw");
      RealObject::PlayPositionalSound(this,(string *)&local_18,0.0);
      std::string::~string((string *)&local_18);
      nop();
    }
  }
  else {
    (**(code **)(*(long *)param_4 + 0xa8))(param_4,0);
    pPVar14 = (Projectile *)0x0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pPVar14);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAppleMortar::DoSpecial(int) */

void PlantAppleMortar::DoSpecial(int param_1)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  undefined8 *puVar4;
  RtWeakPtrBase *pRVar5;
  RtObject *this_00;
  Zombie *pZVar6;
  long *plVar7;
  code *pcVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  plVar3 = (long *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  (**(code **)(*plVar3 + 0xd0))(avStack_20,plVar3,1);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_40);
    if (!bVar1) {
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              avStack_20);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pRVar5 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,pRVar5);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_50);
    if (bVar1) {
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
      pZVar6 = Sexy::RtObject::Cast<Zombie>(this_00);
      if (pZVar6 == (Zombie *)0x0) goto LAB_0419804c;
      plVar7 = *(long **)(plVar3[2] + 0xa8);
      pcVar8 = *(code **)(*plVar7 + 0x3e0);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)aRStack_38);
      cVar2 = (*pcVar8)(plVar7,(RtWeakPtr<Sexy::SoundResource> *)&local_30,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      if (cVar2 != '\0') goto LAB_0419804c;
    }
    else {
LAB_0419804c:
      this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
      puVar4 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this);
      local_30 = *puVar4;
      local_28 = *(undefined4 *)(puVar4 + 1);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_50);
      launchSpecialProjectile
                ((undefined4)local_30,local_30._4_4_,local_28,plVar3,aRStack_38,aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  } while( true );
}

