// Class: ZombieIceYearMonster


/* ZombieIceYearMonster::onDraw(Sexy::Graphics*) */

void __thiscall ZombieIceYearMonster::onDraw(ZombieIceYearMonster *this,Graphics *param_1)

{
  Zombie::onDraw((Graphics *)this);
  (**(code **)(*(long *)(this + 0x800) + 0x10))(this + 0x800,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceYearMonster::onExitState_ResilienceRecover(ZombieState) */

void ZombieIceYearMonster::onExitState_ResilienceRecover(Zombie *param_1)

{
  char cVar1;
  AttachedEffect *this;
  UIWidget *this_00;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  string asStack_28 [8];
  string asStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Zombie::SetIsControlled(param_1,false);
  (**(code **)(*(long *)param_1 + 0x858))(param_1);
  std::string::string(asStack_20,"resilience_r_bar");
  cVar1 = GameObjectDictionary::Contains((string *)(param_1 + 0x420));
  std::string::~string(asStack_20);
  nop();
  if (cVar1 != '\0') {
    std::string::string(asStack_20,"resilience_r_bar");
    this = (AttachedEffect *)
           GameObjectDictionary::FindOrCreate((GameObjectDictionary *)(param_1 + 0x420),asStack_20);
    std::string::~string(asStack_20);
    nop();
    this_00 = (UIWidget *)AttachedEffect::GetEffect(this);
    plVar2 = (long *)UIWidget::GetAtlasImage(this_00);
    pcVar4 = *(code **)(*plVar2 + 0x78);
    std::string::string(asStack_28,"reduce");
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
    (*pcVar4)(plVar2,asStack_28,0,0,asStack_20);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_20);
    std::string::~string(asStack_28);
    nop();
    lVar3 = AttachedEffect::GetEffect(this);
    FUN_045b3254(lVar3 + 0x108,0);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceYearMonster::StaticClassInit() */

void ZombieIceYearMonster::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieIceYearMonster");
    (*pcVar2)(plVar1,asStack_10,FUN_03fcbc98,0x878,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceYearMonster::StaticGetClass() */

long * ZombieIceYearMonster::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieIceYearMonster",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceYearMonster::GetClass() const */

long * ZombieIceYearMonster::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieIceYearMonster",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceYearMonster::KillPlant() */

void __thiscall ZombieIceYearMonster::KillPlant(ZombieIceYearMonster *this)

{
  long lVar1;
  BoardTransforms *this_00;
  PlantGroup *this_01;
  
  lVar1 = ___stack_chk_guard;
  this_00 = (BoardTransforms *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
  this_01 = (PlantGroup *)Board::GetPlantGroupAt(*(Point **)(gLawnApp + 0x9f0));
  if (this_01 != (PlantGroup *)0x0) {
    PlantGroup::TakeSmashAttack(this_01,(BoardEntity *)this);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceYearMonster::isOnLastColumn() */

ZombieIceYearMonster __thiscall ZombieIceYearMonster::isOnLastColumn(ZombieIceYearMonster *this)

{
  ZombieIceYearMonster ZVar1;
  float *pfVar2;
  
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  ZVar1 = (ZombieIceYearMonster)0x0;
  if ((*pfVar2 <= *(float *)(this + 0x86c)) &&
     (ZVar1 = this[0x844], ZVar1 != (ZombieIceYearMonster)0x0)) {
    this[0x844] = (ZombieIceYearMonster)0x0;
  }
  return ZVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceYearMonster::SetDestinationPosition() */

void __thiscall ZombieIceYearMonster::SetDestinationPosition(ZombieIceYearMonster *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)(**(code **)(*(long *)this + 0x308))(_FUN_03fc6dec);
  fVar5 = (float)FUN_03fc6478(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  iVar1 = BoardTransforms::BoardSpaceToGridX(fVar5);
  iVar1 = BoardTransforms::GridToBoardSpaceX(iVar1 + -1);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar5 = (float)FUN_03fc6478(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  iVar3 = BoardTransforms::BoardSpaceToGridX(fVar5);
  if (iVar3 != 0) {
    *(float *)(this + 0x86c) = (float)iVar1 + (float)iVar2 * (fVar4 + 0.25);
    return;
  }
  fVar4 = (float)FUN_03fc6478(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  iVar1 = BoardTransforms::BoardSpaceToGridX(fVar4);
  iVar1 = BoardTransforms::GridToBoardSpaceX(iVar1 + -2);
  *(float *)(this + 0x86c) = (float)iVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceYearMonster::SetEffectVisibility(bool) */

void __thiscall ZombieIceYearMonster::SetEffectVisibility(ZombieIceYearMonster *this,bool param_1)

{
  char cVar1;
  GameObjectDictionary *this_00;
  CthulhuSubSystem *pCVar2;
  StandaloneEffect *pSVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (GameObjectDictionary *)Zombie::GetAttachedEffects((Zombie *)this);
  std::string::string(asStack_10,"resilience_h_bar");
  pCVar2 = (CthulhuSubSystem *)GameObjectDictionary::FindOrCreate(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  cVar1 = CthulhuSubSystem::Update(pCVar2);
  if (cVar1 != '\0') {
    pSVar3 = (StandaloneEffect *)AttachedEffect::GetEffect((AttachedEffect *)pCVar2);
    StandaloneEffect::SetVisibility(pSVar3,param_1);
  }
  std::string::string(asStack_10,"resilience_r_bar");
  pCVar2 = (CthulhuSubSystem *)GameObjectDictionary::FindOrCreate(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  cVar1 = CthulhuSubSystem::Update(pCVar2);
  if (cVar1 != '\0') {
    pSVar3 = (StandaloneEffect *)AttachedEffect::GetEffect((AttachedEffect *)pCVar2);
    StandaloneEffect::SetVisibility(pSVar3,param_1);
  }
  std::string::string(asStack_10,"resilience_icon");
  pCVar2 = (CthulhuSubSystem *)GameObjectDictionary::FindOrCreate(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  cVar1 = CthulhuSubSystem::Update(pCVar2);
  if (cVar1 != '\0') {
    pSVar3 = (StandaloneEffect *)AttachedEffect::GetEffect((AttachedEffect *)pCVar2);
    StandaloneEffect::SetVisibility(pSVar3,param_1);
  }
  std::string::string(asStack_10,"resilience_activated");
  pCVar2 = (CthulhuSubSystem *)GameObjectDictionary::FindOrCreate(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  cVar1 = CthulhuSubSystem::Update(pCVar2);
  if (cVar1 != '\0') {
    pSVar3 = (StandaloneEffect *)AttachedEffect::GetEffect((AttachedEffect *)pCVar2);
    StandaloneEffect::SetVisibility(pSVar3,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceYearMonster::ZombieIceYearMonster() */

void __thiscall ZombieIceYearMonster::ZombieIceYearMonster(ZombieIceYearMonster *this)

{
  Zombie::Zombie((Zombie *)this);
  ZombieEliteModule::ZombieEliteModule((ZombieEliteModule *)(this + 0x800));
  *(undefined ***)this = &PTR_GetClass_067aa8a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieIceYearMonster_067ab2b8;
  *(undefined ***)(this + 0x800) = &PTR__ZombieIceYearMonster_067ab2e8;
  DVec3::DVec3((DVec3 *)(this + 0x848));
  DVec3::DVec3((DVec3 *)(this + 0x854));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x860));
  return;
}


/* ZombieIceYearMonster::StaticNew() */

ZombieIceYearMonster * ZombieIceYearMonster::StaticNew(void)

{
  ZombieIceYearMonster *this;
  
  this = ::operator_new(0x878);
  ZombieIceYearMonster(this);
  return this;
}


/* ZombieIceYearMonster::~ZombieIceYearMonster() */

void __thiscall ZombieIceYearMonster::~ZombieIceYearMonster(ZombieIceYearMonster *this)

{
  *(undefined ***)this = &PTR_GetClass_067aa8a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieIceYearMonster_067ab2b8;
  *(undefined ***)(this + 0x800) = &PTR__ZombieIceYearMonster_067ab2e8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x860));
  nop();
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieIceYearMonster::~ZombieIceYearMonster() */

void __thiscall ZombieIceYearMonster::~ZombieIceYearMonster(ZombieIceYearMonster *this)

{
  ~ZombieIceYearMonster(this + -0x800);
  return;
}


/* non-virtual thunk to ZombieIceYearMonster::~ZombieIceYearMonster() */

void __thiscall ZombieIceYearMonster::~ZombieIceYearMonster(ZombieIceYearMonster *this)

{
  ~ZombieIceYearMonster(this + -0x10);
  return;
}


/* ZombieIceYearMonster::~ZombieIceYearMonster() */

void __thiscall ZombieIceYearMonster::~ZombieIceYearMonster(ZombieIceYearMonster *this)

{
  ~ZombieIceYearMonster(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieIceYearMonster::~ZombieIceYearMonster() */

void __thiscall ZombieIceYearMonster::~ZombieIceYearMonster(ZombieIceYearMonster *this)

{
  ~ZombieIceYearMonster(this + -0x800);
  return;
}


/* non-virtual thunk to ZombieIceYearMonster::~ZombieIceYearMonster() */

void __thiscall ZombieIceYearMonster::~ZombieIceYearMonster(ZombieIceYearMonster *this)

{
  ~ZombieIceYearMonster(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceYearMonster::onZombieInitialize() */

void __thiscall ZombieIceYearMonster::onZombieInitialize(ZombieIceYearMonster *this)

{
  int iVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  undefined4 uVar4;
  float fVar5;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_48 [16];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onZombieInitialize((Zombie *)this);
  RealObject::JoinTeam((RealObject *)this,2);
  this[0x1b8] = (ZombieIceYearMonster)0x1;
  this[0x844] = (ZombieIceYearMonster)0x1;
  this[0x845] = (ZombieIceYearMonster)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_48);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x860),(RtWeakPtr *)a_Stack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_48);
  *(undefined4 *)(this + 0x868) = 0;
  uVar4 = PVZ_EOT();
  this[0x874] = (ZombieIceYearMonster)0x1;
  this[0x875] = (ZombieIceYearMonster)0x0;
  *(undefined4 *)(this + 0x838) = uVar4;
  *(undefined4 *)(this + 0x83c) = uVar4;
  *(undefined4 *)(this + 0x870) = uVar4;
  EATextSquish::Vec3::Vec3((Vec3 *)a_Stack_48,100.0,300.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x848),(SexyVector3 *)a_Stack_48);
  fVar5 = (float)(**(code **)(*(long *)this + 0x308))(0x3dcccccd,this);
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar1 = BoardTransforms::GridToBoardSpaceX(iVar1 + -1);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  *(float *)(this + 0x86c) = (float)iVar1 + (fVar5 + 0.15) * (float)iVar2;
  HeroPlantTalentButton::OnSelect((HeroPlantTalentButton *)(this + 0x800),false);
  pPVar3 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  std::string::string((string *)a_Stack_48,"walk");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar3,a_Stack_48,0,aDStack_38);
  std::string::~string((string *)a_Stack_48);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceYearMonster::JumpingTarget(Sexy::SexyVector3, bool) */

void ZombieIceYearMonster::JumpingTarget
               (float param_1,undefined4 param_2,undefined4 param_3,Zombie *param_4,char param_5)

{
  int iVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  RtObject *pRVar2;
  ZombieIceYearMonsterProps *pZVar3;
  float *pfVar4;
  IceYearMonsterProjectile *this_00;
  PopAnimRig *this_01;
  undefined8 uVar5;
  float fVar6;
  Board *pBVar9;
  float fVar7;
  float fVar8;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_40 = param_1;
  local_3c = param_2;
  local_38 = param_3;
  this = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(param_4);
  pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  pZVar3 = Sexy::RtObject::Cast<ZombieIceYearMonsterProps>(pRVar2);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)(pZVar3 + 0x228));
  uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_4);
                    /* WARNING: Load size is inaccurate */
  pBVar9._0_4_ = *(Board **)pfVar4;
  fVar7 = pfVar4[1];
  fVar8 = pfVar4[2];
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_20);
  pRVar2 = (RtObject *)Board::AddProjectile(pBVar9._0_4_,fVar7,fVar8,uVar5,aRStack_10,param_4,0);
  this_00 = Sexy::RtObject::Cast<IceYearMonsterProjectile>(pRVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::string(asStack_18,"attack01_2");
  nop();
  FUN_05475d88(aRStack_10,asStack_18);
  IceYearMonsterProjectile::SetAnimname(this_00,aRStack_10);
  std::string::~string((string *)aRStack_10);
  IceYearMonsterProjectile::SetTargetPosition(local_40,local_3c,local_38,this_00);
  fVar7 = (float)Sexy::SexyMath::Fabs(local_40 - *pfVar4);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar1 = (int)(fVar7 / (float)(iVar1 * 3)) + 1;
  fVar7 = (float)iVar1 * 0.5;
  Projectile::LaunchAt((Projectile *)this_00,(SexyVector3 *)&local_40,(float)iVar1 * 120.0,fVar7);
  std::string::string((string *)aRStack_10,"attack01_3");
  nop();
  if (param_5 == '\0') {
    FUN_03fc6390(this_00 + 0xd4);
  }
  fVar8 = (float)PVZ_T();
  this_01 = (PopAnimRig *)Zombie::GetAnimRig(param_4);
  fVar6 = (float)PopAnimRig::CalcAnimLengthSeconds(this_01,(string *)aRStack_10);
  *(float *)(param_4 + 0x838) = fVar8 + fVar6 + fVar7;
  Zombie::SetIgnoresAllDamage(param_4,true);
  Zombie::SetIsControlled(param_4,true);
  Zombie::SetIgnoresCollisions(param_4,true);
  Zombie::SetIsTargetable(param_4,false);
  (**(code **)(*(long *)param_4 + 0x80))(param_4,1);
  SetEffectVisibility((ZombieIceYearMonster *)param_4,false);
  std::string::~string((string *)aRStack_10);
  std::string::~string(asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceYearMonster::onEnterState_ResilienceRecover(ZombieState) */

void ZombieIceYearMonster::onEnterState_ResilienceRecover(Zombie *param_1)

{
  RtObject *this;
  ZombieAnimRig_IceYearMonster *pZVar1;
  long lVar2;
  undefined8 uVar3;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtObject *)Zombie::GetAnimRig(param_1);
  pZVar1 = Sexy::RtObject::Cast<ZombieAnimRig_IceYearMonster>(this);
  lVar2 = FUN_03fc6234(*(undefined8 *)(param_1 + 0x550));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar2 + 0x208))
  ;
  uVar3 = FUN_03fc637c(*(undefined8 *)(lVar2 + 0x20));
  FUN_05475d88(asStack_68,uVar3);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Bungee::PlayStopAnimation((ZombieAnimRig_Bungee *)pZVar1,asStack_68,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceYearMonster::findMaxCostPlant() */

void ZombieIceYearMonster::findMaxCostPlant(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  RealObject *in_x0;
  undefined8 *puVar5;
  Plant *pPVar6;
  long *plVar7;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtObject *this;
  RtObject *pRVar8;
  float fVar9;
  float fVar10;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  fVar10 = -1.0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  pRVar8 = (RtObject *)0x0;
  EntityFinder::GetEntitiesOnBoard(avStack_20,1);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    this = (RtObject *)*puVar5;
    cVar2 = RealObject::IsOnOpposingTeam(in_x0,(RealObject *)this);
    if (cVar2 != '\0') {
      iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
      fVar9 = (float)FUN_03fc6478(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                                  *(undefined4 *)(this + 0x20));
      iVar4 = BoardTransforms::BoardSpaceToGridX(fVar9);
      if ((iVar4 < iVar3) &&
         ((pPVar6 = Sexy::RtObject::Cast<Plant>(this), pPVar6 == (Plant *)0x0 ||
          ((cVar2 = FUN_03fc8a20(*(undefined4 *)(pPVar6 + 0x28)), cVar2 == '\0' &&
           (cVar2 = Plant::HasCondition(pPVar6,6), cVar2 == '\0')))))) {
        Plant::GetType();
        plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        iVar3 = (**(code **)(*plVar7 + 0x70))(plVar7,0xfffffffe);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        if (fVar10 < (float)iVar3) {
          pRVar8 = this;
          fVar10 = (float)iVar3;
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  if (pRVar8 == (RtObject *)0x0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_28);
  }
  else {
    ToolPacketData::GetProps();
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceYearMonster::setState(int) */

void __thiscall ZombieIceYearMonster::setState(ZombieIceYearMonster *this,int param_1)

{
  RtWeakPtr<PowerPropertySheet> *pRVar1;
  bool bVar2;
  RtObject *pRVar3;
  ZombieAnimRig_IceYearMonster *pZVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var5;
  SexyVector3 *pSVar6;
  ResourceInfo *pRVar7;
  long *plVar8;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  ZombieIceYearMonsterProps *pZVar9;
  char *__s;
  code *pcVar10;
  float fVar11;
  undefined4 uVar12;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  *(int *)(this + 0x840) = param_1;
  local_8 = ___stack_chk_guard;
  pRVar3 = (RtObject *)Zombie::GetAnimRig((Zombie *)this);
  pZVar4 = Sexy::RtObject::Cast<ZombieAnimRig_IceYearMonster>(pRVar3);
  switch(*(undefined4 *)(this + 0x840)) {
  case 0:
    pRVar1 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x860);
    findMaxCostPlant();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(pRVar1,(RtWeakPtr *)aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar1);
    if (pRVar7 == (ResourceInfo *)0x0) {
      setState(this,8);
      break;
    }
    this[0x845] = (ZombieIceYearMonster)0x1;
    uVar12 = PVZ_EOT();
    *(undefined4 *)(this + 0x83c) = uVar12;
    p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    pSVar6 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var5);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x848),pSVar6);
    std::string::string(asStack_68,"attack01");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               aRStack_58);
    ZombieAnimRig_Bungee::PlayStopAnimation((ZombieAnimRig_Bungee *)pZVar4,asStack_68,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)aRStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    goto LAB_03fcab1c;
  case 1:
    Castskill(this);
    break;
  case 2:
    KillPlant(this);
    std::string::string(asStack_68,"attack01_4");
    goto LAB_03fcacb0;
  case 3:
    __s = "attack2";
    goto LAB_03fcaa80;
  case 4:
    plVar8 = (long *)Zombie::GetAnimRig((Zombie *)this);
    pcVar10 = *(code **)(*plVar8 + 0x110);
    RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
    RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
               aRStack_50);
    (*pcVar10)(plVar8,(RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>
                       *)aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    fVar11 = (float)PVZ_T();
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    pRVar3 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pZVar9 = Sexy::RtObject::Cast<ZombieIceYearMonsterProps>(pRVar3);
    *(float *)(this + 0x83c) = fVar11 + *(float *)(pZVar9 + 0x230);
    break;
  case 5:
    pRVar1 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x860);
    findMaxCostPlant();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(pRVar1,(RtWeakPtr *)aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)pRVar1);
    if (bVar2) {
      p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      pSVar6 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var5);
      Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x848),pSVar6);
    }
    pSVar6 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x854),pSVar6);
    JumpingTarget(*(undefined4 *)(this + 0x848),*(undefined4 *)(this + 0x84c),
                  *(undefined4 *)(this + 0x850),this,1);
    break;
  case 6:
    uVar12 = PVZ_EOT();
    *(undefined4 *)(this + 0x83c) = uVar12;
    std::string::string(asStack_68,"back_first");
LAB_03fcacb0:
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               (string *)aRStack_58);
    ZombieAnimRig_Bungee::PlayStopAnimation((ZombieAnimRig_Bungee *)pZVar4,asStack_68,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)aRStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    break;
  case 7:
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x848),(SexyVector3 *)(this + 0x854));
    JumpingTarget(*(undefined4 *)(this + 0x848),*(undefined4 *)(this + 0x84c),
                  *(undefined4 *)(this + 0x850),this,0);
    break;
  case 8:
    __s = "attack3";
    goto LAB_03fcaa80;
  case 9:
    __s = "attack4";
LAB_03fcaa80:
    std::string::string(asStack_68,__s);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               (string *)aRStack_58);
    ZombieAnimRig_Bungee::PlayStopAnimation((ZombieAnimRig_Bungee *)pZVar4,asStack_68,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)aRStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
LAB_03fcab1c:
    nop();
    *(int *)(this + 0x868) = (*(int *)(this + 0x868) + 1) % 3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceYearMonster::Castskill() */

void __thiscall ZombieIceYearMonster::Castskill(ZombieIceYearMonster *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x868);
  if (iVar1 == 1) {
    setState(this,3);
    return;
  }
  if (iVar1 == 2) {
    iVar2 = 9;
  }
  else {
    iVar2 = 0;
    if (iVar1 != 0) {
      return;
    }
  }
  setState(this,iVar2);
  return;
}


/* ZombieIceYearMonster::onAnimStoppedCallback(std::string const&) */

void __thiscall
ZombieIceYearMonster::onAnimStoppedCallback(ZombieIceYearMonster *this,string *param_1)

{
  bool bVar1;
  RtObject *this_00;
  
  this_00 = (RtObject *)Zombie::GetAnimRig((Zombie *)this);
  Sexy::RtObject::Cast<ZombieAnimRig_IceYearMonster>(this_00);
  bVar1 = std::operator==(param_1,"attack01");
  if (bVar1) {
    setState(this,5);
    return;
  }
  bVar1 = std::operator==(param_1,"attack01_4");
  if (bVar1) {
    setState(this,6);
    return;
  }
  bVar1 = std::operator==(param_1,"attack2");
  if (!bVar1) {
    bVar1 = std::operator==(param_1,"attack4");
    if (!bVar1) {
      bVar1 = std::operator==(param_1,"attack3");
      if (bVar1) {
        Zombie::setZombieState((Zombie *)this,1,0);
        this[0x844] = (ZombieIceYearMonster)0x1;
        SetDestinationPosition(this);
        return;
      }
      bVar1 = std::operator==(param_1,"back_first");
      if (!bVar1) {
        bVar1 = std::operator==(param_1,"break_recover");
        if (!bVar1) {
          return;
        }
        if (this[0x875] == (ZombieIceYearMonster)0x0) {
          setState(this,8);
          return;
        }
      }
      setState(this,7);
      return;
    }
  }
  setState(this,4);
  return;
}


/* ZombieIceYearMonster::onEnterState_ResilienceEnterBreak(ZombieState) */

void ZombieIceYearMonster::onEnterState_ResilienceEnterBreak(ZombieIceYearMonster *param_1)

{
  if ((1 < *(int *)(param_1 + 0x840) - 6U) && (*(int *)(param_1 + 0x840) != 2)) {
    Zombie::onEnterState_ResilienceEnterBreak(param_1);
    setState(param_1,10);
    return;
  }
  param_1[0x875] = (ZombieIceYearMonster)0x1;
  Zombie::onEnterState_ResilienceEnterBreak(param_1);
  setState(param_1,10);
  return;
}


/* ZombieIceYearMonster::recover() */

void __thiscall ZombieIceYearMonster::recover(ZombieIceYearMonster *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x838) = uVar1;
  BoardEntity::SetPosition((BoardEntity *)this,(SexyVector3 *)(this + 0x848));
  Zombie::SetIgnoresAllDamage((Zombie *)this,false);
  Zombie::SetIsControlled((Zombie *)this,false);
  Zombie::SetIgnoresCollisions((Zombie *)this,false);
  Zombie::SetIsTargetable((Zombie *)this,true);
  (**(code **)(*(long *)this + 0x80))(this,0);
  SetEffectVisibility(this,true);
  if (*(int *)(this + 0x840) == 5) {
    setState(this,2);
    return;
  }
  if (*(int *)(this + 0x840) == 7) {
    if (this[0x875] == (ZombieIceYearMonster)0x0) {
      setState(this,4);
      return;
    }
    setState(this,8);
    this[0x875] = (ZombieIceYearMonster)0x0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceYearMonster::UltimateSkill() */

void __thiscall ZombieIceYearMonster::UltimateSkill(ZombieIceYearMonster *this)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  Board *this_00;
  float fVar5;
  string asStack_10 [8];
  long local_8;
  
  iVar4 = 0;
  local_8 = ___stack_chk_guard;
  fVar5 = (float)FUN_03fc6478(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  iVar1 = BoardConstants::NUMBER_OF_ROWS();
  if (0 < iVar1) {
    do {
      uVar2 = BoardTransforms::BoardSpaceToGridX(fVar5);
      lVar3 = FUN_03fcb26c(uVar2,iVar4);
      if (lVar3 == 0) {
        this_00 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string(asStack_10,"land_of_frost");
        iVar1 = BoardTransforms::BoardSpaceToGridX(fVar5);
        Board::AddGridItem(this_00,asStack_10,iVar1,iVar4,1);
        std::string::~string(asStack_10);
        nop();
      }
      iVar4 = iVar4 + 1;
      iVar1 = BoardConstants::NUMBER_OF_ROWS();
    } while (iVar4 < iVar1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceYearMonster::Freezing_Breath() */

void __thiscall ZombieIceYearMonster::Freezing_Breath(ZombieIceYearMonster *this)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  long lVar7;
  long *extraout_x0;
  long *plVar8;
  long *extraout_x0_00;
  string *psVar9;
  RtObject *pRVar10;
  GridItemPlantConditionTarget *pGVar11;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar12;
  int iVar13;
  int iVar14;
  Board *pBVar15;
  RtMixedPtrBase aRStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar6 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  iVar4 = BoardTransforms::BoardSpaceToGridXKeepOnBoard(*pfVar6);
  iVar5 = BoardTransforms::BoardSpaceToGridYKeepOnBoard(pfVar6[1]);
  std::string::string((string *)&local_68,"POPANIM_EFFECTS_ZOMBIE_ICEYEARMONSTER_EFFECT");
  GetPAMByName((string *)&local_68);
  std::string::~string((string *)&local_68);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_a0);
  if (cVar1 != '\0') {
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_a0);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar12,(RtClass *)0x0);
    Effect_PopAnim::SetCentered(this_00,true);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_68,*pfVar6,pfVar6[1],0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_68,-1);
    FUN_03fc6210(this_00 + 0x1c,0x7a121);
    std::string::string((string *)&local_68,"freezing02");
    Effect_PopAnim::PlaySingleAnimation(this_00,(string *)&local_68,0);
    std::string::~string((string *)&local_68);
    nop();
  }
  iVar14 = iVar4 + -1;
  iVar13 = iVar5 + -1;
  do {
    cVar1 = BoardTransforms::IsGridCoordinateOnBoard(iVar14,iVar13);
    if (cVar1 != '\0') {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
      EntityFinder::GetEntitiesAtGridSquare
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,1,iVar14
                 ,iVar13);
      lVar7 = FUN_03fc6250(local_80,local_78);
      if (lVar7 == 0) {
        EntityFinder::GetEntitiesAtGridSquare
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,1,
                   iVar14 + -1,iVar13);
        lVar7 = FUN_03fc6250(local_80,local_78);
        if (lVar7 != 0) {
          bVar3 = false;
          local_90 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)&local_80);
          local_88 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_80);
          while (bVar2 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88),
                bVar2) {
            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
            nop();
            cVar1 = FUN_03fc6228(*(undefined1 *)((long)extraout_x0 + 0x551));
            if (cVar1 == '\0') {
              Plant::GetType();
              plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
              if (*(code **)(*plVar8 + 0xa8) == PlantType::IsDoubleBoard) {
                cVar1 = PlantType::IsDoubleBoard();
              }
              else {
                cVar1 = (**(code **)(*plVar8 + 0xa8))();
              }
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
              if (cVar1 != '\0') {
                bVar3 = true;
                DamageInfo::DamageInfo((DamageInfo *)&local_68);
                local_68 = 0;
                local_58 = 0x40000000;
                local_60 = 0;
                (**(code **)(*extraout_x0 + 0x110))(extraout_x0,(string *)&local_68);
                DamageInfo::~DamageInfo((DamageInfo *)&local_68);
              }
            }
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
          }
          if (bVar3) goto LAB_03fcc6f4;
        }
        lVar7 = FUN_03fcb188(iVar14,iVar13);
        if (lVar7 == 0) {
          psVar9 = (string *)
                   Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
          std::string::string((string *)&local_68,"planttarget_iceblock");
          ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar9);
          std::string::~string((string *)&local_68);
          nop();
          pBVar15 = *(Board **)(gLawnApp + 0x9f0);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)&local_88);
          pRVar10 = (RtObject *)Board::AddGridItem(pBVar15,(string *)&local_68,iVar14,iVar13,1);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
          pGVar11 = Sexy::RtObject::Cast<GridItemPlantConditionTarget>(pRVar10);
          FUN_03fc6384(pGVar11 + 0x1e8);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
        }
      }
      else {
        local_98 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_80);
        local_90 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_80);
        while (bVar3 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_98,(__normal_iterator *)&local_90),
              bVar3) {
          std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
          nop();
          if (extraout_x0_00 != (long *)0x0) {
            cVar1 = FUN_03fc6228(*(undefined1 *)((long)extraout_x0_00 + 0x551));
            if (cVar1 == '\0') {
              DamageInfo::DamageInfo((DamageInfo *)&local_68);
              local_68 = 0;
              local_58 = 0x40000000;
              local_60 = 0;
              (**(code **)(*extraout_x0_00 + 0x110))(extraout_x0_00,(string *)&local_68);
              DamageInfo::~DamageInfo((DamageInfo *)&local_68);
            }
            else {
              lVar7 = FUN_03fcb188(iVar14,iVar13);
              if (lVar7 == 0) {
                psVar9 = (string *)
                         Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
                std::string::string((string *)&local_68,"planttarget_iceblock");
                ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar9);
                std::string::~string((string *)&local_68);
                nop();
                pBVar15 = *(Board **)(gLawnApp + 0x9f0);
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)&local_88);
                pRVar10 = (RtObject *)
                          Board::AddGridItem(pBVar15,(string *)&local_68,iVar14,iVar13,1);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
                pGVar11 = Sexy::RtObject::Cast<GridItemPlantConditionTarget>(pRVar10);
                FUN_03fc6384(pGVar11 + 0x1e8);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
              }
            }
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
        }
      }
LAB_03fcc6f4:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    }
    iVar13 = iVar13 + 1;
    if ((iVar13 == iVar5 + 2) && (iVar14 = iVar14 + 1, iVar13 = iVar5 + -1, iVar14 == iVar4 + 2)) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceYearMonster::SpawnZombie() */

void __thiscall ZombieIceYearMonster::SpawnZombie(ZombieIceYearMonster *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  string *psVar5;
  Point *pPVar6;
  TPoint *pTVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  Point aPStack_70 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  undefined8 local_38 [3];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  std::string::string(asStack_20,"zombieportal_pvz1_tutorial2");
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar5);
  std::string::~string(asStack_20);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  fVar8 = (float)FUN_03fc6478(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  iVar3 = BoardTransforms::BoardSpaceToGridX(fVar8);
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  iVar4 = Sexy::Rand(iVar4);
  Sexy::Point::Point((Point *)asStack_20,iVar3,iVar4);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_50,(Point *)asStack_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_50);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_50);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar1) {
    pPVar6 = (Point *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    cVar2 = Board::CanAddGraveStoneAt
                      (*(Board **)(gLawnApp + 0x9f0),*(int *)pPVar6,*(int *)(pPVar6 + 4),false);
    if (cVar2 == '\0') {
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)asStack_20,pPVar6);
    }
    else {
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_38,pPVar6);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
  }
  cVar2 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_38);
  if (cVar2 == '\0') {
    pTVar7 = (TPoint *)FUN_03fc6378(local_38[0]);
    Sexy::Point::Point(aPStack_70,pTVar7);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_78);
    std::string::string((string *)&local_60,"");
    std::string::string((string *)&local_58,"");
    TimeEnergyModule::spawnGridItem
              (this,aPStack_70,aRStack_68,
               (generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60,(string *)&local_58);
    std::string::~string((string *)&local_58);
    nop();
    std::string::~string((string *)&local_60);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)asStack_20);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_38);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceYearMonster::SpawnZombieAtPosition(std::vector<Sexy::Point, std::allocator<Sexy::Point>
   >&) */

void __thiscall
ZombieIceYearMonster::SpawnZombieAtPosition(ZombieIceYearMonster *this,vector *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  float local_40;
  float local_3c;
  undefined8 local_38;
  undefined8 local_30;
  float local_28;
  float local_24;
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)param_1);
  if (cVar1 == '\0') {
    EATextSquish::Vec3::Vec3((Vec3 *)&local_28,0.0,0.0,0.0);
    piVar3 = (int *)std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                    ::front((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                             *)param_1);
    iVar2 = BoardTransforms::GridToBoardSpaceX(*piVar3);
    local_28 = (float)iVar2;
    lVar4 = std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::front
                      ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                        *)param_1);
    iVar2 = BoardTransforms::GridToBoardSpaceY(*(int *)(lVar4 + 4));
    local_24 = (float)iVar2;
    uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
    std::string::string((string *)&local_38,"IceTrapProjectile");
    Sexy::ToWString((string *)&local_38);
    Sexy::RtName::RtName((RtName *)&local_18,(wstring *)&local_30);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_48,uVar5,0xc,(RtName *)&local_18);
    Sexy::RtName::~RtName((RtName *)&local_18);
    FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_30);
    std::string::~string((string *)&local_38);
    nop();
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,0.0,-20.0);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,0.0,0.0,600.0);
    fVar6 = local_18 + local_28;
    fVar7 = local_14 + local_24;
    uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)aRStack_48);
    lVar4 = Board::AddProjectile
                      ((Board *)(fVar6 + local_40),fVar7 + local_3c,local_10,uVar5,
                       (RtWeakPtr<Sexy::SoundResource> *)&local_30,this,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    FUN_03fc6208(lVar4 + 0x24,2);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)param_1);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_30,(__normal_iterator *)&local_38);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::erase
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)param_1,local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceYearMonster::SpawnIcepiton() */

void __thiscall ZombieIceYearMonster::SpawnIcepiton(ZombieIceYearMonster *this)

{
  int iVar1;
  char cVar2;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  vector<Sexy::Point,std::allocator<Sexy::Point>> *pvVar6;
  vector<Sexy::Point,std::allocator<Sexy::Point>> *this_00;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  Point aPStack_68 [8];
  int local_60 [4];
  undefined8 local_50 [3];
  undefined8 local_38 [3];
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_20 [24];
  long local_8;
  
  local_60[0] = 0;
  local_8 = ___stack_chk_guard;
  local_60[2] = 3;
  local_60[1] = 1;
  local_60[3] = 5;
  std::
  vector<std::vector<Sexy::Point,std::allocator<Sexy::Point>>,std::allocator<std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
  ::vector((ulong)local_50,(allocator *)&DAT_00000004);
  std::
  vector<std::vector<Sexy::Point,std::allocator<Sexy::Point>>,std::allocator<std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
  ::vector((ulong)local_38,(allocator *)&DAT_00000004);
  lVar11 = 0;
  do {
    iVar12 = 2;
    if (lVar11 == 0) {
      iVar12 = 1;
    }
    iVar10 = local_60[lVar11];
    iVar12 = iVar12 + iVar10;
    if (iVar10 < iVar12) {
      do {
        iVar9 = 0;
        if (0 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
          do {
            std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                      ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)avStack_20);
            EntityFinder::GetEntitiesAtGridSquare(avStack_20,1,iVar10,iVar9);
            cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty(avStack_20);
            uVar4 = local_50[0];
            if (cVar2 == '\0') {
              uVar4 = local_38[0];
            }
            pvVar6 = (vector<Sexy::Point,std::allocator<Sexy::Point>> *)FUN_03fc625c(uVar4,lVar11);
            iVar1 = iVar9 + 1;
            Sexy::Point::Point(aPStack_68,iVar10,iVar9);
            std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(pvVar6,aPStack_68);
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
            iVar9 = iVar1;
          } while (iVar1 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 != iVar12);
    }
    pvVar3 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)FUN_03fc625c(local_50[0],lVar11);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(pvVar3);
    pvVar3 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)FUN_03fc625c(local_50[0],lVar11);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(pvVar3);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
              (uVar4,uVar5);
    pvVar3 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)FUN_03fc625c(local_38[0],lVar11);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(pvVar3);
    lVar7 = lVar11 + 1;
    pvVar3 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)FUN_03fc625c(local_38[0],lVar11);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(pvVar3);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
              (uVar4,uVar5);
    lVar11 = lVar7;
  } while (lVar7 != 4);
  iVar12 = 2;
  lVar11 = 0;
  do {
    pvVar6 = (vector<Sexy::Point,std::allocator<Sexy::Point>> *)FUN_03fc625c(local_50[0],lVar11);
    this_00 = (vector<Sexy::Point,std::allocator<Sexy::Point>> *)FUN_03fc625c(local_38[0],lVar11);
    do {
      cVar2 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty(pvVar6);
      if (cVar2 != '\0') {
        if (0 < iVar12) {
          while ((cVar2 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty(this_00),
                 cVar2 == '\0' && (SpawnZombieAtPosition(this,(vector *)this_00), iVar12 != 1))) {
            iVar12 = 1;
          }
        }
        break;
      }
      SpawnZombieAtPosition(this,(vector *)pvVar6);
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    if (lVar11 == 3) {
      std::
      vector<std::vector<Sexy::Point,std::allocator<Sexy::Point>>,std::allocator<std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
      ::~vector((vector<std::vector<Sexy::Point,std::allocator<Sexy::Point>>,std::allocator<std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
                 *)local_38);
      std::
      vector<std::vector<Sexy::Point,std::allocator<Sexy::Point>>,std::allocator<std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
      ::~vector((vector<std::vector<Sexy::Point,std::allocator<Sexy::Point>>,std::allocator<std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
                 *)local_50);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar7 = lVar11 + 1;
    uVar8 = lVar11 - 1;
    iVar12 = 2;
    lVar11 = lVar7;
    if (uVar8 < 2) {
      iVar12 = 1;
    }
  } while( true );
}


/* ZombieIceYearMonster::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieIceYearMonster::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"use_action");
  if (bVar1) {
    switch(*(undefined4 *)(param_1 + 0x840)) {
    case 2:
      Freezing_Breath((ZombieIceYearMonster *)param_1);
      return;
    case 3:
      SpawnZombie((ZombieIceYearMonster *)param_1);
      return;
    case 8:
      UltimateSkill((ZombieIceYearMonster *)param_1);
      return;
    case 9:
      SpawnIcepiton((ZombieIceYearMonster *)param_1);
      return;
    }
  }
  return;
}


/* ZombieIceYearMonster::onUpdate() */

void __thiscall ZombieIceYearMonster::onUpdate(ZombieIceYearMonster *this)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  Effect_AirflowUp *pEVar4;
  Effect_AirflowDown *pEVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtObject *this_01;
  ZombieIceYearMonsterProps *pZVar6;
  float fVar7;
  undefined4 uVar8;
  
  Zombie::onUpdate((Zombie *)this);
  fVar7 = (float)FUN_03fc6238(*(undefined4 *)(this + 0x280));
  ZombieEliteModule::SetCurrentHealth((ZombieEliteModule *)(this + 0x800),fVar7);
  puVar3 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  ZombieEliteModule::SetPosition(*puVar3,puVar3[1],puVar3[2],(ZombieEliteModule *)(this + 0x800));
  if (this[0x845] == (ZombieIceYearMonster)0x0) {
    cVar1 = isOnLastColumn(this);
  }
  else {
    this[0x845] = (ZombieIceYearMonster)0x0;
    pEVar4 = Board::AddEffect<Effect_AirflowUp>(*(Board **)(gLawnApp + 0x9f0));
    pEVar5 = Board::AddEffect<Effect_AirflowDown>(*(Board **)(gLawnApp + 0x9f0));
    Effect_AirflowUp::startAirflowUp(*puVar3,puVar3[1],puVar3[2],pEVar4);
    Effect_AirflowDown::startAirflowDown(*puVar3,puVar3[1],puVar3[2],pEVar5);
    cVar1 = isOnLastColumn(this);
  }
  if (cVar1 != '\0') {
    fVar7 = (float)PVZ_T();
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pZVar6 = Sexy::RtObject::Cast<ZombieIceYearMonsterProps>(this_01);
    *(float *)(this + 0x870) = fVar7 + *(float *)(pZVar6 + 0x234);
    Zombie::setZombieState((Zombie *)this,0,0);
    if (this[0x874] == (ZombieIceYearMonster)0x0) {
      setState(this,4);
      return;
    }
    setState(this,1);
    this[0x874] = (ZombieIceYearMonster)0x0;
    return;
  }
  uVar2 = *(uint *)(this + 0x840);
  if (uVar2 == 4) {
    fVar7 = (float)PVZ_T();
    if (fVar7 < *(float *)(this + 0x870)) {
      uVar2 = *(uint *)(this + 0x840);
    }
    else {
      setState(this,8);
      uVar2 = *(uint *)(this + 0x840);
    }
  }
  if ((uVar2 & 0xfffffffd) == 5) {
    fVar7 = (float)PVZ_T();
    if (*(float *)(this + 0x838) <= fVar7) {
      return;
    }
    uVar2 = *(uint *)(this + 0x840);
  }
  if ((uVar2 == 4) && (fVar7 = (float)PVZ_T(), *(float *)(this + 0x83c) < fVar7)) {
    uVar8 = PVZ_EOT();
    *(undefined4 *)(this + 0x83c) = uVar8;
    setState(this,1);
    return;
  }
  return;
}

