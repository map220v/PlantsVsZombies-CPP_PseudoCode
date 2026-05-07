// Class: EffectObject_BurrowAttack


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_BurrowAttack::StaticClassInit() */

void EffectObject_BurrowAttack::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectObject_BurrowAttack");
    (*pcVar2)(plVar1,asStack_10,FUN_04291c6c,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_BurrowAttack::StaticGetClass() */

long * EffectObject_BurrowAttack::StaticGetClass(void)

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
  uVar2 = EffectObject::StaticGetClass();
  (*pcVar3)(plVar1,"EffectObject_BurrowAttack",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_BurrowAttack::GetClass() const */

long * EffectObject_BurrowAttack::GetClass(void)

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
  uVar2 = EffectObject::StaticGetClass();
  (*pcVar3)(plVar1,"EffectObject_BurrowAttack",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_BurrowAttack::determineAttackAnimation() */

void EffectObject_BurrowAttack::determineAttackAnimation(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 300) == '\0') {
    __s = "burrow_attack03";
  }
  else {
    __s = "burrow_attack02";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_BurrowAttack::AttackTargetZombie() */

void __thiscall EffectObject_BurrowAttack::AttackTargetZombie(EffectObject_BurrowAttack *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StandaloneEffect::SetVisibility((StandaloneEffect *)this,true);
  determineAttackAnimation();
  Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,asStack_10,0);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_BurrowAttack::~EffectObject_BurrowAttack() */

void __thiscall
EffectObject_BurrowAttack::~EffectObject_BurrowAttack(EffectObject_BurrowAttack *this)

{
  *(undefined ***)this = &PTR_GetClass_068271d0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x120));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
  EffectObject::~EffectObject((EffectObject *)this);
  return;
}


/* EffectObject_BurrowAttack::~EffectObject_BurrowAttack() */

void __thiscall
EffectObject_BurrowAttack::~EffectObject_BurrowAttack(EffectObject_BurrowAttack *this)

{
  ~EffectObject_BurrowAttack(this);
  AK::FreeHook(this);
  return;
}


/* EffectObject_BurrowAttack::EffectObject_BurrowAttack() */

void __thiscall
EffectObject_BurrowAttack::EffectObject_BurrowAttack(EffectObject_BurrowAttack *this)

{
  EffectObject::EffectObject((EffectObject *)this);
  *(undefined ***)this = &PTR_GetClass_068271d0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x118));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x120));
  return;
}


/* EffectObject_BurrowAttack::StaticNew() */

EffectObject_BurrowAttack * EffectObject_BurrowAttack::StaticNew(void)

{
  EffectObject_BurrowAttack *this;
  
  this = ::operator_new(0x130);
  EffectObject_BurrowAttack(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_BurrowAttack::fireProjectiles() */

void EffectObject_BurrowAttack::fireProjectiles(void)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  RtWeakPtr *this_00;
  bool bVar1;
  StandaloneEffect *in_x0;
  RtObject *this_01;
  SnapPeaProps *pSVar2;
  long lVar3;
  Plant *pPVar4;
  Projectile *this_02;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_03;
  long lVar5;
  float fVar6;
  float in_s1;
  float fVar7;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  this = (RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x118);
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  Plant::GetProps();
  this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  pSVar2 = Sexy::RtObject::Cast<SnapPeaProps_const>(this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (pSVar2 != (SnapPeaProps *)0x0) {
    this_00 = (RtWeakPtr *)(in_x0 + 0x120);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    *(undefined4 *)(lVar3 + 0x150) = 1;
    lVar3 = FUN_0428f378(*(undefined8 *)(pSVar2 + 0x70));
    fVar6 = (float)StandaloneEffect::GetBoardSpaceOrigin(in_x0);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      this_03 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      lVar5 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(this_03);
      fVar7 = *(float *)(lVar5 + 8);
      *(float *)(in_x0 + 0x128) = fVar7;
    }
    else {
      fVar7 = *(float *)(in_x0 + 0x128);
    }
    EATextSquish::Vec3::Vec3
              ((Vec3 *)aRStack_18,fVar6 + *(float *)(lVar3 + 0x68),in_s1 + *(float *)(lVar3 + 0x6c),
               fVar7);
    pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_20);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    this_02 = (Projectile *)Plant::Fire(pPVar4,a_Stack_20,*(undefined4 *)(lVar3 + 0x110),1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    *(undefined4 *)(lVar3 + 0x150) = 0xffffffff;
    if (this_02 != (Projectile *)0x0) {
      (**(code **)(*(long *)this_02 + 0x78))(this_02,aRStack_18);
      FUN_0428f380(this_02 + 0x24);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_20,(RtWeakPtrBase *)this_00);
      Projectile::SetTarget(this_02,(RtWeakPtr *)a_Stack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
      Projectile::RotateTowardTarget(this_02);
      DangerRoomManager::SetMaxLevel((DangerRoomManager *)this_02,7);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_BurrowAttack::onEffectObjectInitialize(Sexy::RtWeakPtr<EffectObjectType const>, int,
   int) */

void EffectObject_BurrowAttack::onEffectObjectInitialize(UIWidget *param_1,RtWeakPtrBase *param_2)

{
  PopAnimRig *pPVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,param_2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(param_1 + 0x118));
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(param_1 + 0x120));
  pPVar1 = (PopAnimRig *)UIWidget::GetAtlasImage(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string((string *)aRStack_58,"onPopAnimCommand");
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::RtReflectionDelegate(aRStack_50,aRStack_60,aRStack_58);
  PopAnimRig::SetPopAnimCommandDelegate(pPVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  pPVar1 = (PopAnimRig *)UIWidget::GetAtlasImage(param_1);
  PopAnimRig::SetPaused(pPVar1,true);
  StandaloneEffect::SetVisibility((StandaloneEffect *)param_1,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_BurrowAttack::SetTargetZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
EffectObject_BurrowAttack::SetTargetZombie(EffectObject_BurrowAttack *this,RtWeakPtr *param_2)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  EffectObject_BurrowAttack EVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  PlantSnapPea *pPVar5;
  Zombie *pZVar6;
  EffectObject_BurrowAttackProps *pEVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float *pfVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x120);
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,param_2);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
  pPVar5 = Sexy::RtObject::Cast<PlantSnapPea>(*(RtObject **)(lVar4 + 0xa8));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)param_2);
  EVar1 = (EffectObject_BurrowAttack)PlantSnapPea::IsZombieBlacklistedForEating(pPVar5,aRStack_18);
  this[300] = EVar1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (this[300] == (EffectObject_BurrowAttack)0x0) {
    fVar11 = 0.0;
    plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar9 + 600))();
    pZVar6 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Zombie::SetIgnoresAllDamage(pZVar6,true);
    pZVar6 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Zombie::SetMarkedForDeath(pZVar6);
    pZVar6 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Zombie::SetIsTargetable(pZVar6,false);
    pZVar6 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Zombie::SetIgnoresCollisions(pZVar6,true);
    pEVar7 = EffectObject::GetProps<EffectObject_BurrowAttackProps>();
    fVar12 = *(float *)(pEVar7 + 0x34);
  }
  else {
    pZVar6 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar2 = Zombie::IsBoss(pZVar6);
    if (cVar2 == '\0') {
      plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar2 = (**(code **)(*plVar9 + 0x4d8))();
      if (cVar2 == '\0') {
        plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        cVar2 = (**(code **)(*plVar9 + 0x508))();
        if (cVar2 == '\0') {
          plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          (**(code **)(*plVar9 + 600))();
        }
      }
    }
    fVar12 = 0.0;
    pEVar7 = EffectObject::GetProps<EffectObject_BurrowAttackProps>();
    fVar11 = *(float *)(pEVar7 + 0x30);
  }
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  pfVar8 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_01);
  fVar10 = pfVar8[2];
  fVar14 = *pfVar8;
  fVar13 = pfVar8[1];
  *(float *)(this + 0x128) = fVar10;
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar14 + fVar11,fVar13 + fVar12,fVar10);
  iVar3 = FUN_0428f124(*(undefined4 *)(this + 0x1c),this + 0x20);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,iVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_BurrowAttack::onAnimStopped(std::string const&) */

void __thiscall
EffectObject_BurrowAttack::onAnimStopped(EffectObject_BurrowAttack *this,string *param_1)

{
  RtMixedPtrBase *this_00;
  bool bVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  Zombie *this_01;
  PlantSnapPea *pPVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"burrow_attack03");
  if (!bVar1) {
    bVar1 = std::operator==(param_1,"burrow_attack02");
    if (!bVar1) goto LAB_04294094;
    this_00 = (RtMixedPtrBase *)(this + 0x120);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar2 != '\0') {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar2 = FUN_0429009c(*(undefined4 *)(lVar3 + 0xcc));
      if (cVar2 == '\0') {
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        cVar2 = (**(code **)(*plVar4 + 0x328))();
        if (cVar2 == '\0') {
          this_01 = (Zombie *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          cVar2 = Zombie::IsBoss(this_01);
          if (cVar2 == '\0') {
            plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            cVar2 = (**(code **)(*plVar4 + 0x4d8))();
            if (cVar2 == '\0') {
              plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
              cVar2 = (**(code **)(*plVar4 + 0x508))();
              if (cVar2 == '\0') {
                plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                           ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
                (**(code **)(*plVar4 + 0x260))();
              }
            }
          }
        }
      }
    }
  }
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x118));
  if (cVar2 == '\0') {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  else {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
    pPVar5 = Sexy::RtObject::Cast<PlantSnapPea>(*(RtObject **)(lVar3 + 0xa8));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    PlantSnapPea::OnBurrowAttackEnded(pPVar5,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    (**(code **)(*(long *)this + 0x48))(this);
  }
LAB_04294094:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_BurrowAttack::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void EffectObject_BurrowAttack::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  RtWeakPtr *this;
  bool bVar1;
  char cVar2;
  Zombie *pZVar3;
  long *plVar4;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar5;
  long lVar6;
  string *psVar7;
  long *plVar8;
  ZombieParticle *this_00;
  PlantSnapPea *pPVar9;
  ZombieType *pZVar10;
  char *__s;
  code *pcVar11;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"eat_action");
  if (!bVar1) goto LAB_04294424;
  this = (RtWeakPtr *)(param_1 + 0x120);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (!bVar1) goto LAB_04294424;
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x118));
  if (cVar2 != '\0') {
    pZVar3 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar3);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
    bVar1 = std::operator==((string *)(lVar6 + 0x10),"ZombieCamel");
    if (bVar1) {
      psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      __s = "mummy";
LAB_0429457c:
      std::string::string((string *)aDStack_68,__s);
      plVar4 = (long *)0x0;
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar7);
      std::string::~string((string *)aDStack_68);
      nop();
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_70);
      if (bVar1) {
        pZVar10 = (ZombieType *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
        plVar4 = (long *)ZombieType::CreateAnimRig(pZVar10);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
    }
    else {
      pZVar3 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar3);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
      bVar1 = std::operator==((string *)(lVar6 + 0x10),"ZombieIceAgeDodo");
      if (bVar1) {
        psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
        __s = "iceage_imp";
        goto LAB_0429457c;
      }
      pZVar3 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar3);
      pZVar10 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
      plVar4 = (long *)ZombieType::CreateAnimRig(pZVar10);
    }
    plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    cVar2 = (**(code **)(*plVar8 + 0x378))();
    if (cVar2 != '\0') {
      pcVar11 = *(code **)(*plVar4 + 0x78);
      std::string::string((string *)&local_70,"particles");
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aDStack_68);
      (*pcVar11)(plVar4,(string *)&local_70,0,0,
                 (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aDStack_68);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)aDStack_68);
      std::string::~string((string *)&local_70);
      nop();
      pZVar3 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar3);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
      bVar1 = std::operator!=((string *)(lVar6 + 8),"zombie_moneytree");
      if (bVar1) {
        this_00 = (ZombieParticle *)(**(code **)(*plVar4 + 0x180))(plVar4,plVar4);
        ZombieParticle::SetMotionType(this_00,0);
        ZombieParticle::CancelFadeOutAndDestroy(this_00);
        (**(code **)(*(long *)this_00 + 0x80))(this_00,1);
        ZombieParticle::SetAttribute(this_00,1,1);
        pZVar3 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(pZVar3);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
        ZombieParticle::SetAttribute(this_00,4,*(undefined1 *)(lVar6 + 0x69));
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x118));
        pPVar9 = Sexy::RtObject::Cast<PlantSnapPea>(*(RtObject **)(lVar6 + 0xa8));
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aDStack_68,(RtWeakPtrBase *)&local_70);
        PlantSnapPea::OnZombieEaten
                  (pPVar9,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                          aDStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
      }
    }
  }
  pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
  ;
  Zombie::EndCondition(pZVar3,0x27);
  pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
  ;
  Zombie::SetIgnoresAllDamage(pZVar3,false);
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  pcVar11 = *(code **)(*plVar4 + 0x120);
  Sexy::Point::Point(aPStack_78,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,aDStack_68,4,aPStack_78,0);
  (*pcVar11)(plVar4,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
LAB_04294424:
  bVar1 = std::operator==(param_4,"use_action");
  if (bVar1) {
    fireProjectiles();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_BurrowAttack::setActiveCostume() const */

void __thiscall EffectObject_BurrowAttack::setActiveCostume(EffectObject_BurrowAttack *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  string *psVar7;
  long lVar8;
  string *psVar9;
  PopAnimRig *this_01;
  undefined8 uVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118);
  local_8 = ___stack_chk_guard;
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(*(long *)(lVar5 + 0xa8) + 0x10));
  PlantAnimRig::GetCustomizableLayers();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  Plant::GetType();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar4 = FUN_0428f138(*(undefined4 *)(lVar5 + 0x294));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  uVar6 = FUN_0428f1bc(*(undefined8 *)(lVar5 + 0x50),*(undefined8 *)(lVar5 + 0x58));
  if ((ulong)(long)iVar4 < uVar6) {
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
    lVar5 = FUN_0428f1d0(*(undefined8 *)(lVar5 + 0x50),(long)iVar4);
    local_48 = FUN_0429102c(*(undefined8 *)(lVar5 + 8));
    local_40 = FUN_0429107c(*(undefined8 *)(lVar5 + 0x10));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1)
    {
      uVar10 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      FUN_05475d88((string *)&local_50,uVar10);
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)&local_20,(string *)&local_50);
      std::string::~string((string *)&local_50);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
    }
  }
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_38);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_38);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
  if (bVar1) {
    do {
      psVar7 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      uVar10 = local_20;
      lVar8 = FUN_0428f1dc(local_20,local_18);
      lVar5 = 0;
      do {
        if (lVar5 == lVar8) {
          bVar1 = false;
          goto LAB_04294a68;
        }
        psVar9 = (string *)FUN_0428f1e8(uVar10,lVar5);
        cVar2 = std::operator==(psVar9,psVar7);
        lVar5 = lVar5 + 1;
      } while (cVar2 == '\0');
      bVar1 = true;
LAB_04294a68:
      local_48 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                           ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                            (psVar7 + 8));
      local_40 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)(psVar7 + 8));
      while (bVar3 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40),
            bVar3) {
        psVar7 = (string *)
                 std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                           ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
        this_01 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
        PopAnimRig::SetLayerVisibility(this_01,psVar7,bVar1);
        std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
                  ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_48);
      }
      std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_58);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
    } while (bVar1);
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  std::vector<PlantCustomLayers,std::allocator<PlantCustomLayers>>::~vector
            ((vector<PlantCustomLayers,std::allocator<PlantCustomLayers>> *)avStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* EffectObject_BurrowAttack::SetOwner(Sexy::RtWeakPtr<Plant>) */

void __thiscall
EffectObject_BurrowAttack::SetOwner(EffectObject_BurrowAttack *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x118),param_2);
  setActiveCostume(this);
  return;
}

