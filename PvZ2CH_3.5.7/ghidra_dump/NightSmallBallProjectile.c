// Class: NightSmallBallProjectile


/* NightSmallBallProjectile::~NightSmallBallProjectile() */

void __thiscall NightSmallBallProjectile::~NightSmallBallProjectile(NightSmallBallProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069ddfb0;
  *(undefined ***)(this + 0x10) = &PTR__NightSmallBallProjectile_069de1a0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to NightSmallBallProjectile::~NightSmallBallProjectile() */

void __thiscall NightSmallBallProjectile::~NightSmallBallProjectile(NightSmallBallProjectile *this)

{
  ~NightSmallBallProjectile(this + -0x10);
  return;
}


/* NightSmallBallProjectile::~NightSmallBallProjectile() */

void __thiscall NightSmallBallProjectile::~NightSmallBallProjectile(NightSmallBallProjectile *this)

{
  ~NightSmallBallProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NightSmallBallProjectile::~NightSmallBallProjectile() */

void __thiscall NightSmallBallProjectile::~NightSmallBallProjectile(NightSmallBallProjectile *this)

{
  ~NightSmallBallProjectile(this + -0x10);
  return;
}


/* NightSmallBallProjectile::onUpdate(float) */

void NightSmallBallProjectile::onUpdate(float param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  long lVar1;
  
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(in_x0);
  if ((*(float *)(lVar1 + 4) <= 920.0) && (0.0 <= *(float *)(lVar1 + 4))) {
    return;
  }
  (**(code **)(*(long *)in_x0 + 0x48))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NightSmallBallProjectile::StaticClassInit() */

void NightSmallBallProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"NightSmallBallProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04e3effc,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NightSmallBallProjectile::StaticGetClass() */

long * NightSmallBallProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NightSmallBallProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NightSmallBallProjectile::GetClass() const */

long * NightSmallBallProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"NightSmallBallProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NightSmallBallProjectile::NightSmallBallProjectile() */

void __thiscall NightSmallBallProjectile::NightSmallBallProjectile(NightSmallBallProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069ddfb0;
  *(undefined ***)(this + 0x10) = &PTR__NightSmallBallProjectile_069de1a0;
  Sexy::Point::Point((Point *)(this + 0x1a8));
  return;
}


/* NightSmallBallProjectile::StaticNew() */

NightSmallBallProjectile * NightSmallBallProjectile::StaticNew(void)

{
  NightSmallBallProjectile *this;
  
  this = ::operator_new(0x1b0);
  NightSmallBallProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NightSmallBallProjectile::fillDamageInfo(DamageInfo&, BoardEntity*) */

void NightSmallBallProjectile::fillDamageInfo(DamageInfo *param_1,BoardEntity *param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  RtObject *pRVar5;
  Zombie *this;
  RtObject *in_x2;
  int in_w4;
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::fillDamageInfo(param_1,param_2);
  if ((in_x2 != (RtObject *)0x0) && (bVar1 = Sexy::RtObject::IsA<Zombie>(in_x2), bVar1)) {
    this = Sexy::RtObject::Cast<Zombie>(in_x2);
    iVar2 = Zombie::GetSizeType(this);
    if (iVar2 < 2) {
      DamageInfo::AddCondition((DamageInfo *)0x3f000000,param_2,2);
    }
  }
  uVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)in_x2);
  iVar2 = SharkMinion::getRow((SharkMinion *)in_x2);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(uVar3 & 0xffffffff),iVar2,1,1,in_w4);
  EntityFinder::GetEntitiesTouchingRectangle
            (avStack_20,2,(__normal_iterator *)local_30,0xffffffff,0xffffffff);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_30)
        , bVar1) {
    plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    pRVar5 = (RtObject *)*plVar4;
    if (pRVar5 != in_x2) {
      (**(code **)(*(long *)pRVar5 + 0x110))(pRVar5,param_2);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NightSmallBallProjectile::InitialSetPosition(float, float, float) */

void __thiscall
NightSmallBallProjectile::InitialSetPosition
          (NightSmallBallProjectile *this,float param_1,float param_2,float param_3)

{
  long lVar1;
  SexyVector3 *extraout_x1;
  undefined8 local_20;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::InitialSetPosition((Projectile *)this,param_1,param_2,param_3);
  EATextSquish::Vec3::Vec3(aVStack_18,param_1,param_2,param_3);
  BoardTransforms::BoardSpaceToGridUnbounded((BoardTransforms *)aVStack_18,extraout_x1);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x1a8) = local_20;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NightSmallBallProjectile::OnCollideEntity(BoardEntity*) */

undefined8 __thiscall
NightSmallBallProjectile::OnCollideEntity(NightSmallBallProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  int iVar2;
  Zombie *pZVar3;
  RtObject *this_00;
  NightNormalBallProjectileProps *pNVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar2 = SharkMinion::getRow((SharkMinion *)param_1);
  if (iVar2 != *(int *)(this + 0x1ac)) {
    if ((param_1 != (BoardEntity *)0x0) &&
       (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)) {
      pZVar3 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
      this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
      pNVar4 = Sexy::RtObject::Cast<NightNormalBallProjectileProps>(this_00);
      fVar6 = *(float *)(this + 0x170);
      fVar8 = *(float *)(pNVar4 + 0x1f8);
      fVar7 = *(float *)(this + 0x180);
      Zombie::ApplyCondition((Zombie *)0x40000000,0,pZVar3,0x30,1);
      Zombie::SetConditionTracker(fVar6 * fVar8 * fVar7,pZVar3,0x30);
    }
    uVar5 = Projectile::OnCollideEntity((Projectile *)this,param_1);
    return uVar5;
  }
  return 1;
}

