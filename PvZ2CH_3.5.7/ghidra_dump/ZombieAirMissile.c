// Class: ZombieAirMissile


/* ZombieAirMissile::SetTargetRow(int) */

void __thiscall ZombieAirMissile::SetTargetRow(ZombieAirMissile *this,int param_1)

{
  *(int *)(this + 0x800) = param_1;
  return;
}


/* ZombieAirMissile::DamageAirShip(float) */

void ZombieAirMissile::DamageAirShip(float param_1)

{
  MessageRouter::Post<float,float>((_func_void_float *)gMessageRouter,param_1);
  return;
}


/* ZombieAirMissile::~ZombieAirMissile() */

void __thiscall ZombieAirMissile::~ZombieAirMissile(ZombieAirMissile *this)

{
  *(undefined ***)this = &PTR_GetClass_068dd160;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAirMissile_068ddb78;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieAirMissile::~ZombieAirMissile() */

void __thiscall ZombieAirMissile::~ZombieAirMissile(ZombieAirMissile *this)

{
  ~ZombieAirMissile(this + -0x10);
  return;
}


/* ZombieAirMissile::~ZombieAirMissile() */

void __thiscall ZombieAirMissile::~ZombieAirMissile(ZombieAirMissile *this)

{
  ~ZombieAirMissile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAirMissile::~ZombieAirMissile() */

void __thiscall ZombieAirMissile::~ZombieAirMissile(ZombieAirMissile *this)

{
  ~ZombieAirMissile(this + -0x10);
  return;
}


/* ZombieAirMissile::CalcRenderOrder() const */

void ZombieAirMissile::CalcRenderOrder(void)

{
  undefined4 uVar1;
  
  uVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  Board::MakeRenderOrder(0x635d8,uVar1,1);
  return;
}


/* non-virtual thunk to ZombieAirMissile::CalcRenderOrder() const */

void __thiscall ZombieAirMissile::CalcRenderOrder(ZombieAirMissile *this)

{
  CalcRenderOrder();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAirMissile::StaticClassInit() */

void ZombieAirMissile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAirMissile");
    (*pcVar2)(plVar1,asStack_10,FUN_047a04c8,0x820,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAirMissile::StaticGetClass() */

long * ZombieAirMissile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAirMissile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAirMissile::GetClass() const */

long * ZombieAirMissile::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAirMissile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAirMissile::ZombieAirMissile() */

void __thiscall ZombieAirMissile::ZombieAirMissile(ZombieAirMissile *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068dd160;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAirMissile_068ddb78;
  DVec3::DVec3((DVec3 *)(this + 0x808));
  DVec3::DVec3((DVec3 *)(this + 0x814));
  *(undefined4 *)(this + 0x800) = 0;
  this[0x804] = (ZombieAirMissile)0x0;
  return;
}


/* ZombieAirMissile::StaticNew() */

ZombieAirMissile * ZombieAirMissile::StaticNew(void)

{
  ZombieAirMissile *this;
  
  this = ::operator_new(0x820);
  ZombieAirMissile(this);
  return this;
}


/* ZombieAirMissile::GetVelocityRotation() */

float __thiscall ZombieAirMissile::GetVelocityRotation(ZombieAirMissile *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (ABS(*(float *)(this + 0x808)) < 0.001) {
    if (*(float *)(this + 0x80c) < 0.0) {
      return -1.5707964;
    }
    return 1.5707964;
  }
  fVar1 = atan2f(-*(float *)(this + 0x80c),*(float *)(this + 0x808));
  fVar1 = (float)Sexy::SexyMath::RadToDeg(fVar1);
  fVar2 = (float)FUN_0479ed28(*(undefined4 *)(this + 0x36c));
  if ((long)(double)fVar2 < 0) {
    fVar3 = (float)Sexy::SexyMath::RadToDeg(fVar1 + -6.2831855);
    if (ABS(fVar2 - fVar1) < ABS(fVar2 - fVar3)) goto LAB_0479f640;
  }
  else {
    fVar3 = (float)Sexy::SexyMath::RadToDeg(fVar1 + 6.2831855);
    if (ABS(fVar2 - fVar1) < ABS(fVar2 - fVar3)) goto LAB_0479f640;
  }
  fVar1 = fVar3;
LAB_0479f640:
  return fVar1 + 180.0;
}


/* ZombieAirMissile::GetTargetX() */

void ZombieAirMissile::GetTargetX(void)

{
  BoardTransforms::GridToBoardSpaceXUnbounded(1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAirMissile::CalcVelocity(int) */

void __thiscall ZombieAirMissile::CalcVelocity(ZombieAirMissile *this,int param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar2 = GetTargetX();
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar4 = ((float)iVar2 - *pfVar3) * -0.0025;
  fVar4 = (((float)(iVar1 * param_1 + 0xa0) - pfVar3[1]) + fVar4 * 400.0) / (fVar4 * fVar4);
  EATextSquish::Vec3::Vec3(aVStack_18,-400.0,-400.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x808),(SexyVector3 *)aVStack_18);
  EATextSquish::Vec3::Vec3(aVStack_18,0.0,fVar4 + fVar4,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x814),(SexyVector3 *)aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAirMissile::updateState_Walk() */

void ZombieAirMissile::updateState_Walk(void)

{
  int iVar1;
  Zombie *in_x0;
  SexyVector3 *pSVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  undefined4 local_28 [4];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar4 = (float)Zombie::getStateMachineTimeScale(in_x0);
  fVar5 = (float)PVZ_Dt();
  pcVar3 = *(code **)(*(long *)in_x0 + 0x78);
  local_28[0] = Sexy::SexyVector3::operator*((SexyVector3 *)(in_x0 + 0x808),fVar5 * fVar4);
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)in_x0);
  local_18[0] = Sexy::SexyVector3::operator+((SexyVector3 *)local_28,pSVar2);
  (*pcVar3)();
  local_18[0] = Sexy::SexyVector3::operator*((SexyVector3 *)(in_x0 + 0x814),fVar5 * fVar4);
  EATextSquish::Vec3::operator+=((Vec3 *)(in_x0 + 0x808),(Vec3 *)local_18);
  GetVelocityRotation((ZombieAirMissile *)in_x0);
  FUN_0479ed20(in_x0 + 0x36c);
  fVar4 = *(float *)pSVar2;
  iVar1 = GetTargetX();
  if (fVar4 < (float)iVar1) {
    in_x0[0x804] = (Zombie)0x1;
    Zombie::setZombieState();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAirMissile::DamagePlantAtGrid(Sexy::Point const&) */

void __thiscall ZombieAirMissile::DamagePlantAtGrid(ZombieAirMissile *this,Point *param_1)

{
  bool bVar1;
  char cVar2;
  ZombieAirMissileProps *pZVar3;
  Plant *extraout_x0;
  DamageInfo *pDVar4;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  EntityFinder::GetEntitiesAtGridSquare
            (avStack_80,1,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
  pZVar3 = Zombie::GetProps<ZombieAirMissileProps>((Zombie *)this);
                    /* WARNING: Load size is inaccurate */
  pDVar4._0_4_ = *(DamageInfo **)(pZVar3 + 0x238);
  Sexy::Point::Point((Point *)&local_90,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
  DamageInfo::DamageInfo
            (pDVar4._0_4_,(undefined4)local_88,local_88._4_4_,aDStack_68,this,(Point *)&local_90,0);
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    nop();
    cVar2 = Zombie::WillTargetPlant((Zombie *)this,extraout_x0);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)extraout_x0 + 0x110))(extraout_x0,aDStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
  }
  DamageInfo::~DamageInfo(aDStack_68);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAirMissile::Explode() */

void __thiscall ZombieAirMissile::Explode(ZombieAirMissile *this)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  ZombieAirMissileProps *pZVar5;
  char *__s;
  float fVar6;
  float fVar7;
  float local_30;
  float local_2c;
  string asStack_28 [8];
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x804] == (ZombieAirMissile)0x0) {
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,0.0,0.0);
  }
  else {
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,-10.0,30.0);
  }
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar6 = *pfVar3;
  fVar7 = pfVar3[1];
  if (this[0x804] == (ZombieAirMissile)0x0) {
    __s = "idle2";
  }
  else {
    __s = "idle";
  }
  std::string::string(asStack_28,__s);
  nop();
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  iVar2 = Board::MakeRenderOrder(0x64960,uVar1,0);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_AIR_MISSILE_EFFECT");
  GetPAMByName(asStack_20);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_18,(float)(int)(local_30 + fVar6),(float)(int)(local_2c + fVar7),0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,iVar2)
  ;
  iVar2 = 0;
  Effect_PopAnim::PlaySingleAnimation(this_00,asStack_28);
  if (this[0x804] != (ZombieAirMissile)0x0) {
    pZVar5 = Zombie::GetProps<ZombieAirMissileProps>((Zombie *)this);
    DamageAirShip(*(float *)(pZVar5 + 0x234));
    BoardTransforms::BoardSpaceToGrid
              ((BoardTransforms *)(ulong)(uint)(int)(local_30 + fVar6),(int)(local_2c + fVar7),iVar2
              );
    DamagePlantAtGrid(this,(Point *)aRStack_18);
  }
  std::string::string((string *)aRStack_18,"Play_SkyCity_Missile_Explode");
  RealObject::PlayPositionalSound((RealObject *)this,(string *)aRStack_18,0.0);
  std::string::~string((string *)aRStack_18);
  nop();
  (**(code **)(*(long *)this + 0x48))(this);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAirMissile::playDeathAnimation() */

void __thiscall ZombieAirMissile::playDeathAnimation(ZombieAirMissile *this)

{
  Zombie::playDeathAnimation((Zombie *)this);
  Explode(this);
  return;
}


/* ZombieAirMissile::onZombieInitialize() */

void __thiscall ZombieAirMissile::onZombieInitialize(ZombieAirMissile *this)

{
  Zombie::onZombieInitialize((Zombie *)this);
  Zombie::SetIsFlying((Zombie *)this,true);
  Zombie::SetIsControlled((Zombie *)this,true);
  Zombie::SetIsTargetable((Zombie *)this,false);
  return;
}


/* ZombieAirMissile::onPlaceOnBoard() */

void __thiscall ZombieAirMissile::onPlaceOnBoard(ZombieAirMissile *this)

{
  Zombie::onPlaceOnBoard((Zombie *)this);
  CalcVelocity(this,*(int *)(this + 0x800));
  GetVelocityRotation(this);
  FUN_0479ed20(this + 0x36c);
  return;
}


/* ZombieAirMissile::TakeDamage(DamageInfo const&) */

void __thiscall ZombieAirMissile::TakeDamage(ZombieAirMissile *this,DamageInfo *param_1)

{
  bool bVar1;
  
  bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x20000);
  if (!bVar1) {
    return;
  }
  Zombie::TakeDamage((Zombie *)this,param_1);
  return;
}

