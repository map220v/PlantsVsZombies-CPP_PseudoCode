// Class: BlueBallProjectile


/* BlueBallProjectile::~BlueBallProjectile() */

void __thiscall BlueBallProjectile::~BlueBallProjectile(BlueBallProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06827f90;
  *(undefined ***)(this + 0x10) = &PTR__BlueBallProjectile_06828180;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to BlueBallProjectile::~BlueBallProjectile() */

void __thiscall BlueBallProjectile::~BlueBallProjectile(BlueBallProjectile *this)

{
  ~BlueBallProjectile(this + -0x10);
  return;
}


/* BlueBallProjectile::~BlueBallProjectile() */

void __thiscall BlueBallProjectile::~BlueBallProjectile(BlueBallProjectile *this)

{
  ~BlueBallProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BlueBallProjectile::~BlueBallProjectile() */

void __thiscall BlueBallProjectile::~BlueBallProjectile(BlueBallProjectile *this)

{
  ~BlueBallProjectile(this + -0x10);
  return;
}


/* BlueBallProjectile::BlueBallProjectile() */

void __thiscall BlueBallProjectile::BlueBallProjectile(BlueBallProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06827f90;
  *(undefined ***)(this + 0x10) = &PTR__BlueBallProjectile_06828180;
  return;
}


/* BlueBallProjectile::StaticNew() */

BlueBallProjectile * BlueBallProjectile::StaticNew(void)

{
  BlueBallProjectile *this;
  
  this = ::operator_new(0x1a8);
  BlueBallProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlueBallProjectile::StaticClassInit() */

void BlueBallProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BlueBallProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04299cfc,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BlueBallProjectile::StaticGetClass() */

long * BlueBallProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BlueBallProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BlueBallProjectile::GetClass() const */

long * BlueBallProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"BlueBallProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlueBallProjectile::DoSplashDamage(int, int) */

void __thiscall BlueBallProjectile::DoSplashDamage(BlueBallProjectile *this,int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  RtObject *pRVar7;
  Plant *this_00;
  long extraout_x0;
  undefined4 *puVar8;
  undefined8 *puVar9;
  Zombie *this_01;
  ulong uVar10;
  long *extraout_x0_00;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ZombieConditionsStruct *pZVar16;
  undefined8 local_c8;
  undefined8 local_c0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_98 [24];
  Point aPStack_80 [24];
  DamageInfo aDStack_68 [8];
  float local_60;
  undefined8 local_58;
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = Projectile::GetInstigator((Projectile *)this);
  if (lVar6 == 0) {
LAB_0429d5b4:
    fVar15 = 1.0;
  }
  else {
    pRVar7 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
    this_00 = Sexy::RtObject::Cast<Plant>(pRVar7);
    if (this_00 == (Plant *)0x0) goto LAB_0429d5b4;
    fVar12 = (float)FUN_042991d0(*(undefined4 *)(this_00 + 0xf4),*(undefined4 *)(this_00 + 0x100),
                                 *(undefined4 *)(this_00 + 0x104),*(undefined4 *)(this_00 + 0x3b8));
    fVar13 = (float)FUN_042991e0(*(undefined4 *)(this_00 + 0x3bc));
    fVar14 = (float)Plant::GetExtraDPSmodifier(this_00);
    fVar15 = (float)FUN_042991e4(*(undefined4 *)(this_00 + 0x424));
    fVar15 = fVar13 * fVar12 * fVar14 * fVar15;
  }
  DamageInfo::DamageInfo(aDStack_68);
  local_58 = 0x80;
  local_60 = 0.0;
  Projectile::GetProps((Projectile *)this);
  nop();
  if (extraout_x0 != 0) {
    local_60 = fVar15 * *(float *)(extraout_x0 + 0x1e8);
    fVar15 = (float)Sexy::Rand(1.0);
    if (fVar15 < *(float *)(extraout_x0 + 0x1e0)) {
                    /* WARNING: Load size is inaccurate */
      pZVar16._0_4_ = *(ZombieConditionsStruct **)(extraout_x0 + 0x1e4);
      bVar2 = true;
      goto LAB_0429d278;
    }
  }
  pZVar16._0_4_ = (ZombieConditionsStruct *)0x0;
  bVar2 = false;
LAB_0429d278:
  iVar1 = param_1 + 1;
  uVar11 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_b0);
  Sexy::Point::Point(aPStack_80,param_1,param_2);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0,aPStack_80);
  Sexy::Point::Point(aPStack_80,param_1,param_2 + -1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0,aPStack_80);
  Sexy::Point::Point(aPStack_80,iVar1,param_2);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0,aPStack_80);
  Sexy::Point::Point(aPStack_80,iVar1,param_2 + -1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0,aPStack_80);
  Sexy::Point::Point(aPStack_80,param_1,param_2 + 1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0,aPStack_80);
  Sexy::Point::Point(aPStack_80,iVar1,param_2 + 1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0,aPStack_80);
  lVar6 = FUN_04299250(local_b0,local_a8);
  if (lVar6 != 0) {
    do {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_98);
      uVar5 = operator|(2,4);
      puVar8 = (undefined4 *)FUN_0429925c(local_b0,uVar11);
      EntityFinder::GetEntitiesAtGridSquare(avStack_98,uVar5,*puVar8,puVar8[1]);
      local_c8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_98);
      local_c0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_98);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_c8,(__normal_iterator *)&local_c0),
            bVar3) {
        puVar9 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c8);
        pRVar7 = (RtObject *)*puVar9;
        cVar4 = RealObject::IsOnOpposingTeam(pRVar7,1);
        if (cVar4 != '\0') {
          this_01 = Sexy::RtObject::Cast<Zombie>(pRVar7);
          if (this_01 == (Zombie *)0x0) {
            nop();
            if (((extraout_x0_00 != (long *)0x0) &&
                (cVar4 = (**(code **)(*extraout_x0_00 + 0xb8))(), cVar4 != '\0')) &&
               (cVar4 = (**(code **)(*extraout_x0_00 + 0x200))(extraout_x0_00), cVar4 != '\0')) {
              (**(code **)(*extraout_x0_00 + 0x110))(extraout_x0_00,aDStack_68);
            }
          }
          else {
            uVar5 = operator|(1,8);
            cVar4 = Zombie::MatchesAny(this_01,uVar5);
            if (((cVar4 == '\0') &&
                (cVar4 = (**(code **)(*(long *)this_01 + 0xb8))(this_01,7), cVar4 != '\0')) &&
               (cVar4 = Zombie::HasCondition(this_01,0x65), cVar4 == '\0')) {
              if (bVar2) {
                local_14 = 0x41200000;
                (**(code **)(*(long *)this_01 + 0x110))(this_01,aDStack_68);
                PVPSeedBankModule::GetPVPSkillEnergyUI();
                ZombieConditionsStruct::ZombieConditionsStruct
                          (pZVar16._0_4_,aPStack_80,0x18,aRStack_b8);
                Zombie::ApplyCondition(this_01,(ZombieConditionsStruct *)aPStack_80);
                PVPZoneData::~PVPZoneData((PVPZoneData *)aPStack_80);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b8);
              }
              else {
                (**(code **)(*(long *)this_01 + 0x110))(this_01,aDStack_68);
              }
            }
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c8);
      }
      uVar11 = uVar11 + 1;
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_98);
      uVar10 = FUN_04299250(local_b0,local_a8);
    } while (uVar11 < uVar10);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BlueBallProjectile::MarkCenterTarget(BoardEntity*) */

void __thiscall BlueBallProjectile::MarkCenterTarget(BlueBallProjectile *this,BoardEntity *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  
  if (param_1 != (BoardEntity *)0x0) {
    iVar1 = BoardEntity::CalcColumnPosition(param_1);
    iVar2 = SharkMinion::getRow((SharkMinion *)param_1);
    DoSplashDamage(this,iVar1,iVar2);
    return;
  }
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  iVar1 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar3);
  iVar2 = FUN_042991c8(*(undefined4 *)(this + 0xa8));
  DoSplashDamage(this,iVar1,iVar2);
  return;
}


/* BlueBallProjectile::handleImpact(BoardEntity*) */

void __thiscall BlueBallProjectile::handleImpact(BlueBallProjectile *this,BoardEntity *param_1)

{
  MarkCenterTarget(this,param_1);
  Projectile::handleImpact((Projectile *)this,param_1);
  return;
}

