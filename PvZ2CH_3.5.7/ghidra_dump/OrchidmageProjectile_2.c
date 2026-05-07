// Class: OrchidmageProjectile_2


/* OrchidmageProjectile_2::~OrchidmageProjectile_2() */

void __thiscall OrchidmageProjectile_2::~OrchidmageProjectile_2(OrchidmageProjectile_2 *this)

{
  *(undefined ***)this = &PTR_GetClass_06639790;
  *(undefined ***)(this + 0x10) = &PTR__OrchidmageProjectile_2_06639980;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to OrchidmageProjectile_2::~OrchidmageProjectile_2() */

void __thiscall OrchidmageProjectile_2::~OrchidmageProjectile_2(OrchidmageProjectile_2 *this)

{
  ~OrchidmageProjectile_2(this + -0x10);
  return;
}


/* OrchidmageProjectile_2::~OrchidmageProjectile_2() */

void __thiscall OrchidmageProjectile_2::~OrchidmageProjectile_2(OrchidmageProjectile_2 *this)

{
  ~OrchidmageProjectile_2(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to OrchidmageProjectile_2::~OrchidmageProjectile_2() */

void __thiscall OrchidmageProjectile_2::~OrchidmageProjectile_2(OrchidmageProjectile_2 *this)

{
  ~OrchidmageProjectile_2(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidmageProjectile_2::StaticClassInit() */

void OrchidmageProjectile_2::StaticClassInit(void)

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
    std::string::string(asStack_10,"OrchidmageProjectile_2");
    (*pcVar2)(plVar1,asStack_10,FUN_03463e8c,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OrchidmageProjectile_2::StaticGetClass() */

long * OrchidmageProjectile_2::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"OrchidmageProjectile_2",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OrchidmageProjectile_2::GetClass() const */

long * OrchidmageProjectile_2::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"OrchidmageProjectile_2",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OrchidmageProjectile_2::OrchidmageProjectile_2() */

void __thiscall OrchidmageProjectile_2::OrchidmageProjectile_2(OrchidmageProjectile_2 *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (OrchidmageProjectile_2)0x1;
  *(undefined ***)this = &PTR_GetClass_06639790;
  *(undefined ***)(this + 0x10) = &PTR__OrchidmageProjectile_2_06639980;
  return;
}


/* OrchidmageProjectile_2::StaticNew() */

OrchidmageProjectile_2 * OrchidmageProjectile_2::StaticNew(void)

{
  OrchidmageProjectile_2 *this;
  
  this = ::operator_new(0x1a8);
  OrchidmageProjectile_2(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidmageProjectile_2::repelZombie(BoardEntity*) */

void __thiscall
OrchidmageProjectile_2::repelZombie(OrchidmageProjectile_2 *this,BoardEntity *param_1)

{
  char cVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  PopAnimRig *this_01;
  long lVar3;
  char *__s;
  Zombie *this_02;
  float *pfVar4;
  OrchidMageSubsystem *pOVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  string asStack_40 [8];
  RtWeakPtr aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [28];
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x180))(asStack_40);
  GetPAMByName(asStack_40);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_38);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  this_01 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_00);
  lVar3 = Projectile::getProps((Projectile *)this);
  __s = (char *)FUN_0547429c(lVar3 + 0x148);
  std::string::string(asStack_28,__s);
  fVar6 = (float)PopAnimRig::CalcAnimLengthSeconds(this_01,asStack_28);
  std::string::~string(asStack_28);
  nop();
  (**(code **)(*(long *)this_00 + 0x48))(this_00);
  fVar7 = (float)PVZ_T();
  if ((param_1 != (BoardEntity *)0x0) &&
     (this_02 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_02 != (Zombie *)0x0)) {
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this_02);
    fVar8 = *pfVar4;
    pOVar5 = Board::GetGameSubSystem<OrchidMageSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    cVar1 = OrchidMageSubsystem::haveZombieMove((Zombie *)pOVar5);
    local_c = fVar7 + fVar6;
    if (cVar1 == '\0') {
      ZombieMove::ZombieMove((ZombieMove *)asStack_28);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)asStack_28,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      pOVar5 = Board::GetGameSubSystem<OrchidMageSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      OrchidMageSubsystem::addZombieToVector(pOVar5,(ZombieMove *)asStack_28);
      pOVar5 = Board::GetGameSubSystem<OrchidMageSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      OrchidMageSubsystem::setZombiePositionX((Zombie *)pOVar5,fVar8 + 70.0);
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)asStack_28);
    }
    else {
      pOVar5 = Board::GetGameSubSystem<OrchidMageSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      OrchidMageSubsystem::setZombiePositionX((Zombie *)pOVar5,fVar8 + 70.0);
      pOVar5 = Board::GetGameSubSystem<OrchidMageSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      OrchidMageSubsystem::GetZombieMove(pOVar5,this_02);
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)asStack_28);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidmageProjectile_2::OnCollideEntity(BoardEntity*) */

void __thiscall
OrchidmageProjectile_2::OnCollideEntity(OrchidmageProjectile_2 *this,BoardEntity *param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  Zombie *this_00;
  string *psVar4;
  code *pcVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 == (BoardEntity *)0x0) ||
      (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 == (Zombie *)0x0)) ||
     (iVar3 = Zombie::GetSizeType(this_00), iVar3 == 2)) {
    uVar1 = 0;
  }
  else {
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_68,"orchidmage");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
    std::string::~string(asStack_68);
    nop();
    PVZ_Dt();
    pcVar5 = *(code **)(*(long *)param_1 + 0x110);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,asStack_68,aPStack_78,0);
    (*pcVar5)(param_1,asStack_68);
    DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
    if (((this[0x1a5] != (OrchidmageProjectile_2)0x0) &&
        (iVar3 = Zombie::GetSizeType(this_00), iVar3 != 2)) &&
       (cVar2 = Zombie::HasCondition(this_00,0x7a), cVar2 == '\0')) {
      repelZombie(this,param_1);
    }
    FUN_03461f2c(0x40000000,this + 0xc0);
    uVar1 = (**(code **)(*(long *)this + 0x168))(this,param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

