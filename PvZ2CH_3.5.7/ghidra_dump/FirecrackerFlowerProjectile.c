// Class: FirecrackerFlowerProjectile


/* FirecrackerFlowerProjectile::~FirecrackerFlowerProjectile() */

void __thiscall
FirecrackerFlowerProjectile::~FirecrackerFlowerProjectile(FirecrackerFlowerProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06797b50;
  *(undefined ***)(this + 0x10) = &PTR__FirecrackerFlowerProjectile_06797d40;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to FirecrackerFlowerProjectile::~FirecrackerFlowerProjectile() */

void __thiscall
FirecrackerFlowerProjectile::~FirecrackerFlowerProjectile(FirecrackerFlowerProjectile *this)

{
  ~FirecrackerFlowerProjectile(this + -0x10);
  return;
}


/* FirecrackerFlowerProjectile::~FirecrackerFlowerProjectile() */

void __thiscall
FirecrackerFlowerProjectile::~FirecrackerFlowerProjectile(FirecrackerFlowerProjectile *this)

{
  ~FirecrackerFlowerProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FirecrackerFlowerProjectile::~FirecrackerFlowerProjectile() */

void __thiscall
FirecrackerFlowerProjectile::~FirecrackerFlowerProjectile(FirecrackerFlowerProjectile *this)

{
  ~FirecrackerFlowerProjectile(this + -0x10);
  return;
}


/* FirecrackerFlowerProjectile::FirecrackerFlowerProjectile() */

void __thiscall
FirecrackerFlowerProjectile::FirecrackerFlowerProjectile(FirecrackerFlowerProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (FirecrackerFlowerProjectile)0x0;
  this[0x1ac] = (FirecrackerFlowerProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_06797b50;
  this[0x1ad] = (FirecrackerFlowerProjectile)0x0;
  *(undefined ***)(this + 0x10) = &PTR__FirecrackerFlowerProjectile_06797d40;
  return;
}


/* FirecrackerFlowerProjectile::StaticNew() */

FirecrackerFlowerProjectile * FirecrackerFlowerProjectile::StaticNew(void)

{
  FirecrackerFlowerProjectile *this;
  
  this = ::operator_new(0x1c0);
  FirecrackerFlowerProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FirecrackerFlowerProjectile::StaticClassInit() */

void FirecrackerFlowerProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"FirecrackerFlowerProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03f46ea8,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FirecrackerFlowerProjectile::StaticGetClass() */

long * FirecrackerFlowerProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FirecrackerFlowerProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FirecrackerFlowerProjectile::GetClass() const */

long * FirecrackerFlowerProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"FirecrackerFlowerProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FirecrackerFlowerProjectile::setData(float, int, bool, bool, float) */

void __thiscall
FirecrackerFlowerProjectile::setData
          (FirecrackerFlowerProjectile *this,float param_1,int param_2,bool param_3,bool param_4,
          float param_5)

{
  long extraout_x0;
  float fVar1;
  
  *(int *)(this + 0x1a8) = param_2;
  this[0x1ac] = (FirecrackerFlowerProjectile)param_3;
  this[0x1ad] = (FirecrackerFlowerProjectile)param_4;
  *(float *)(this + 0x1b0) = param_5;
  Projectile::GetProps((Projectile *)this);
  nop();
  fVar1 = *(float *)(extraout_x0 + 0x1e4);
  if (this[0x1ac] == (FirecrackerFlowerProjectile)0x0) {
    fVar1 = param_1 + fVar1;
  }
  *(float *)(this + 0x1b4) = fVar1;
  return;
}


/* FirecrackerFlowerProjectile::hitTarget(BoardEntity*) */

void __thiscall
FirecrackerFlowerProjectile::hitTarget(FirecrackerFlowerProjectile *this,BoardEntity *param_1)

{
  long extraout_x0;
  
  if (param_1 == (BoardEntity *)0x0) {
    return;
  }
  Projectile::GetProps((Projectile *)this);
  nop();
  if (this[0x1ac] == (FirecrackerFlowerProjectile)0x0) {
    GridItemFirecracker::firecrackerDamageTarget
              ((GridItemFirecracker *)this,param_1,
               *(float *)(this + 0x1b0) * *(float *)(extraout_x0 + 0x1e0),*(float *)(this + 0x1b4));
    return;
  }
  GridItemFirecracker::firecrackerDamageTarget
            ((GridItemFirecracker *)this,param_1,
             (float)(*(int *)(this + 0x1a8) + 1) * *(float *)(extraout_x0 + 0x1e0),
             *(float *)(this + 0x1b4));
  return;
}


/* FirecrackerFlowerProjectile::shouldStun(BoardEntity*) */

bool __thiscall
FirecrackerFlowerProjectile::shouldStun(FirecrackerFlowerProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  long extraout_x0;
  
  Projectile::GetProps((Projectile *)this);
  nop();
  if ((0.0 < *(float *)(extraout_x0 + 0x1e8)) &&
     (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)) {
    bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1);
    return !bVar1;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FirecrackerFlowerProjectile::burnZombie(BoardEntity*) */

void __thiscall
FirecrackerFlowerProjectile::burnZombie(FirecrackerFlowerProjectile *this,BoardEntity *param_1)

{
  int iVar1;
  long extraout_x0;
  long extraout_x0_00;
  int *piVar2;
  float fVar3;
  undefined4 uVar4;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (extraout_x0 != 0) {
    Projectile::GetProps((Projectile *)this);
    nop();
                    /* WARNING: Load size is inaccurate */
    Zombie::ApplyCondition(*(Zombie **)(extraout_x0_00 + 0x1f0),0,extraout_x0,0x35,1);
    fVar3 = (float)PVZ_T();
    *(float *)(extraout_x0 + 0x3c) = fVar3 + *(float *)(extraout_x0_00 + 0x1f0);
    if (*(int *)(extraout_x0 + 0x30) < 1) {
      iVar1 = *(int *)(this + 0x1a8);
      fVar3 = *(float *)(extraout_x0_00 + 0x1ec);
      *(undefined4 *)(extraout_x0 + 0x30) = 2;
      *(int *)(extraout_x0 + 0x34) = (int)((float)(iVar1 + 1) * fVar3);
      uVar4 = PVZ_T();
      *(undefined4 *)(extraout_x0 + 0x38) = uVar4;
    }
    else if (*(int *)(extraout_x0 + 0x30) != 2) {
      local_c = (int)((float)(*(int *)(this + 0x1a8) + 1) * *(float *)(extraout_x0_00 + 0x1ec));
      piVar2 = eastl::max_alt<int>(&local_c,(int *)(extraout_x0 + 0x34));
      *(int *)(extraout_x0 + 0x34) = *piVar2;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FirecrackerFlowerProjectile::stunZombie(BoardEntity*) */

void __thiscall
FirecrackerFlowerProjectile::stunZombie(FirecrackerFlowerProjectile *this,BoardEntity *param_1)

{
  long extraout_x0;
  long lVar1;
  RtObject *pRVar2;
  Plant *pPVar3;
  float fVar4;
  
  Projectile::GetProps((Projectile *)this);
  nop();
  lVar1 = Projectile::GetInstigator((Projectile *)this);
  if (lVar1 != 0) {
    pRVar2 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
    pPVar3 = Sexy::RtObject::Cast<Plant>(pRVar2);
    if (pPVar3 != (Plant *)0x0) {
      pRVar2 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
      pPVar3 = Sexy::RtObject::Cast<Plant>(pRVar2);
      fVar4 = (float)Plant::GetZombieConditionExtendRate(pPVar3,2);
      goto LAB_03f48158;
    }
  }
  fVar4 = 1.0;
LAB_03f48158:
  nop();
  Zombie::ApplyCondition((Zombie *)(fVar4 * *(float *)(extraout_x0 + 0x1e8)),0);
  return;
}


/* FirecrackerFlowerProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
FirecrackerFlowerProjectile::OnCollideEntity(FirecrackerFlowerProjectile *this,BoardEntity *param_1)

{
  if ((param_1 != (BoardEntity *)0x0) && (*(int *)(param_1 + 0x40) != -1)) {
    this[0x1a5] = (FirecrackerFlowerProjectile)0x1;
  }
  Projectile::OnCollideEntity((Projectile *)this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FirecrackerFlowerProjectile::handleImpact(BoardEntity*) */

void __thiscall
FirecrackerFlowerProjectile::handleImpact(FirecrackerFlowerProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Zombie *this_00;
  GridItem *this_01;
  float *pfVar5;
  Board *pBVar6;
  Effect_PopAnim *this_02;
  ResourceInfo *pRVar7;
  undefined8 uVar8;
  long lVar9;
  long extraout_x0;
  undefined8 *puVar10;
  GridItemFirecracker *this_03;
  code *pcVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) goto LAB_03f4a830;
  Projectile::GetProps((Projectile *)this);
  this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
  this_01 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1);
  if (this[0x1a5] != (FirecrackerFlowerProjectile)0x0) {
    if (*(int *)(this + 0x1a8) == 5) {
      fVar12 = *(float *)(param_1 + 0x4c);
      if (this[0x1ac] == (FirecrackerFlowerProjectile)0x0) {
        fVar14 = (float)PVZ_T();
        if (fVar14 < fVar12) {
          iVar3 = *(int *)(param_1 + 0x44);
          fVar12 = *(float *)(this + 0x1b4);
          pcVar11 = *(code **)(*(long *)param_1 + 0x110);
          uVar8 = operator|(0x20,0x400);
          Sexy::Point::Point((Point *)&local_80,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_78,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)((float)iVar3 * fVar12),(undefined4)local_78,local_78._4_4_,
                     (DamageInfo *)&local_68,uVar8,(Point *)&local_80,0);
          (*pcVar11)(param_1,(DamageInfo *)&local_68);
          DamageInfo::~DamageInfo((DamageInfo *)&local_68);
        }
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
        iVar3 = SharkMinion::getRow((SharkMinion *)param_1);
        iVar4 = BoardEntity::CalcColumnPosition(param_1);
        Sexy::Insets::Insets((Insets *)&local_78,iVar4 + -1,iVar3,3,1);
        EntityFinder::GetEntitiesInGridSquares
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68,4,
                   (Insets *)&local_78);
        lVar9 = FUN_03f46648(local_68,local_60);
        if (lVar9 != 0) {
          local_80 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)&local_68);
          local_78 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_68);
          while (bVar2 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78),
                bVar2) {
            puVar10 = (undefined8 *)
                      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
            this_03 = Sexy::RtObject::Cast<GridItemFirecracker>((RtObject *)*puVar10);
            if ((this_03 != (GridItemFirecracker *)0x0) &&
               (cVar1 = GameObject::IsDestroyed((GameObject *)this_03), cVar1 == '\0')) {
              GridItemFirecracker::setState(this_03,3);
            }
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
          }
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
        goto LAB_03f4a7dc;
      }
      fVar14 = (float)PVZ_T();
      if (fVar14 < fVar12) {
        fVar14 = *(float *)(param_1 + 0x4c);
        fVar12 = (float)PVZ_T();
        iVar3 = *(int *)(param_1 + 0x44);
        pcVar11 = *(code **)(*(long *)param_1 + 0x110);
        uVar8 = operator|(0x20,0x400);
        Sexy::Point::Point((Point *)&local_80,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_78,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)((fVar14 - fVar12) * (float)iVar3),(undefined4)local_78,
                   local_78._4_4_,(DamageInfo *)&local_68,uVar8,(Point *)&local_80,0);
        (*pcVar11)(param_1,(DamageInfo *)&local_68);
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
        *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
      }
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_1);
      fVar12 = *pfVar5;
      fVar14 = pfVar5[1];
      fVar13 = pfVar5[2];
      pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    }
    else {
      fVar14 = *(float *)(param_1 + 0x4c);
      fVar12 = (float)PVZ_T();
      if (fVar12 < fVar14) {
        fVar14 = *(float *)(param_1 + 0x4c);
        fVar12 = (float)PVZ_T();
        iVar3 = *(int *)(param_1 + 0x44);
        pcVar11 = *(code **)(*(long *)param_1 + 0x110);
        uVar8 = operator|(0x20,0x400);
        Sexy::Point::Point((Point *)&local_80,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_78,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)((fVar14 - fVar12) * (float)iVar3),(undefined4)local_78,
                   local_78._4_4_,(DamageInfo *)&local_68,uVar8,(Point *)&local_80,0);
        (*pcVar11)(param_1,(DamageInfo *)&local_68);
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
        *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
      }
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_1);
      fVar12 = *pfVar5;
      fVar14 = pfVar5[1];
      fVar13 = pfVar5[2];
      pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    }
    this_02 = Board::AddEffect<Effect_PopAnim>(pBVar6);
    std::string::string((string *)&local_78,"POPANIM_EFFECTS_FIRECRACKERFLOWER_PROJECTILE");
    GetPAMByName((string *)&local_78);
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_68);
    Effect_PopAnim::CreatePopAnimRig(this_02,(PopAnim *)pRVar7,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    std::string::~string((string *)&local_78);
    nop();
    EATextSquish::Vec3::Vec3
              ((Vec3 *)&local_68,(float)(int)(fVar12 - 80.0),(float)(int)(fVar14 - 114.0),
               (float)(int)fVar13);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_02,(SexyVector3 *)&local_68,-1);
    FUN_03f46728(this_02 + 0x1c);
    std::string::string((string *)&local_68,"pg03");
    Effect_PopAnim::PlaySingleAnimation(this_02,(RtWeakPtr *)&local_68,0);
    std::string::~string((string *)&local_68);
    nop();
  }
LAB_03f4a7dc:
  if (this[0x1ac] == (FirecrackerFlowerProjectile)0x0) {
    if (*(int *)(this + 0x1a8) == 5) {
      if (((this_00 != (Zombie *)0x0) &&
          (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0')) &&
         (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0')) {
        pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this_00);
        fVar12 = *pfVar5;
        fVar14 = pfVar5[1];
        iVar3 = BoardTransforms::BoardSpaceToGridX(fVar12);
        if (-1 < iVar3) {
          pBVar6 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string((string *)&local_68,"firecrackerflower");
          iVar3 = BoardTransforms::BoardSpaceToGridX(fVar12);
          iVar4 = BoardTransforms::BoardSpaceToGridY(fVar14);
          Board::AddGridItem(pBVar6,(string *)&local_68,iVar3,iVar4,1);
          nop();
          std::string::~string((string *)&local_68);
          nop();
          FUN_03f4671c(extraout_x0 + 0x1ac);
          FUN_03f46738(extraout_x0 + 0x24);
        }
      }
      if ((this_01 != (GridItem *)0x0) &&
         (cVar1 = GameObject::IsDestroyed((GameObject *)this_01), cVar1 == '\0')) {
                    /* WARNING: Load size is inaccurate */
        GridItem::ApplyCondition(*(GridItem **)(this + 0x1b4),this_01,8);
        hitTarget(this,(BoardEntity *)this_01);
      }
    }
    else {
      if (((this_00 != (Zombie *)0x0) &&
          (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0')) &&
         (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0')) {
        bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00);
        if ((((bVar2) ||
             (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00), bVar2)) ||
            (bVar2 = Sexy::RtObject::IsA<ZombiePirateParrot>((RtObject *)this_00), bVar2)) ||
           ((bVar2 = Sexy::RtObject::IsA<ZombieRomanBallista>((RtObject *)this_00), bVar2 ||
            (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech_Hydra_Head>((RtObject *)this_00), bVar2))
           )) {
                    /* WARNING: Load size is inaccurate */
          Zombie::ApplyCondition(*(Zombie **)(this + 0x1b4),0,this_00,2,1);
                    /* WARNING: Load size is inaccurate */
          Zombie::ApplyCondition(*(Zombie **)(this + 0x1b4),0,this_00,0x97,1);
        }
        else {
          Zombie::setZombieState(this_00,0,0);
                    /* WARNING: Load size is inaccurate */
          Zombie::ApplyCondition(*(Zombie **)(this + 0x1b4),0,this_00,2,1);
                    /* WARNING: Load size is inaccurate */
          Zombie::ApplyCondition(*(Zombie **)(this + 0x1b4),0,this_00,0x97,1);
          Zombie::setZombieState(this_00,1,0);
        }
        hitTarget(this,(BoardEntity *)this_00);
      }
      if ((this_01 != (GridItem *)0x0) &&
         (cVar1 = GameObject::IsDestroyed((GameObject *)this_01), cVar1 == '\0')) {
                    /* WARNING: Load size is inaccurate */
        GridItem::ApplyCondition(*(GridItem **)(this + 0x1b4),this_01,7);
        hitTarget(this,(BoardEntity *)this_01);
      }
    }
  }
  else {
    if (((this_00 != (Zombie *)0x0) &&
        (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0')) &&
       (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0')) {
      bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00);
      if (((bVar2) || (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00), bVar2))
         || ((bVar2 = Sexy::RtObject::IsA<ZombiePirateParrot>((RtObject *)this_00), bVar2 ||
             ((bVar2 = Sexy::RtObject::IsA<ZombieRomanBallista>((RtObject *)this_00), bVar2 ||
              (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech_Hydra_Head>((RtObject *)this_00), bVar2
              )))))) {
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(this + 0x1b4),0,this_00,2,1);
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(this + 0x1b4),0,this_00,0x97,1);
      }
      else {
        Zombie::setZombieState(this_00,0,0);
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(this + 0x1b4),0,this_00,2,1);
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(this + 0x1b4),0,this_00,0x97,1);
        Zombie::setZombieState(this_00,1,0);
      }
      hitTarget(this,(BoardEntity *)this_00);
    }
    if ((this_01 != (GridItem *)0x0) &&
       (cVar1 = GameObject::IsDestroyed((GameObject *)this_01), cVar1 == '\0')) {
                    /* WARNING: Load size is inaccurate */
      GridItem::ApplyCondition(*(GridItem **)(this + 0x1b4),this_01,7);
      hitTarget(this,(BoardEntity *)this_01);
    }
    if (((this_00 != (Zombie *)0x0) &&
        (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0')) &&
       (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0')) {
      cVar1 = shouldStun(this,(BoardEntity *)this_00);
      if (cVar1 != '\0') {
        stunZombie(this,(BoardEntity *)this_00);
      }
      if (this[0x1ad] != (FirecrackerFlowerProjectile)0x0) {
        burnZombie(this,(BoardEntity *)this_00);
      }
    }
  }
LAB_03f4a830:
  Projectile::handleImpact((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

