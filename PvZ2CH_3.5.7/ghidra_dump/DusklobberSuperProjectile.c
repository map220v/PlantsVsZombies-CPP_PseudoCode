// Class: DusklobberSuperProjectile


/* DusklobberSuperProjectile::~DusklobberSuperProjectile() */

void __thiscall
DusklobberSuperProjectile::~DusklobberSuperProjectile(DusklobberSuperProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0673d8b0;
  *(undefined ***)(this + 0x10) = &PTR__DusklobberSuperProjectile_0673daa0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to DusklobberSuperProjectile::~DusklobberSuperProjectile() */

void __thiscall
DusklobberSuperProjectile::~DusklobberSuperProjectile(DusklobberSuperProjectile *this)

{
  ~DusklobberSuperProjectile(this + -0x10);
  return;
}


/* DusklobberSuperProjectile::~DusklobberSuperProjectile() */

void __thiscall
DusklobberSuperProjectile::~DusklobberSuperProjectile(DusklobberSuperProjectile *this)

{
  ~DusklobberSuperProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DusklobberSuperProjectile::~DusklobberSuperProjectile() */

void __thiscall
DusklobberSuperProjectile::~DusklobberSuperProjectile(DusklobberSuperProjectile *this)

{
  ~DusklobberSuperProjectile(this + -0x10);
  return;
}


/* DusklobberSuperProjectile::StaticGetClass() */

long * DusklobberSuperProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DusklobberSuperProjectile",uVar2,StaticNew);
  return sClass;
}


/* DusklobberSuperProjectile::GetClass() const */

long * DusklobberSuperProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"DusklobberSuperProjectile",uVar2,StaticNew);
  return sClass;
}


/* DusklobberSuperProjectile::DusklobberSuperProjectile() */

void __thiscall
DusklobberSuperProjectile::DusklobberSuperProjectile(DusklobberSuperProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0673d8b0;
  *(undefined ***)(this + 0x10) = &PTR__DusklobberSuperProjectile_0673daa0;
  return;
}


/* DusklobberSuperProjectile::StaticNew() */

DusklobberSuperProjectile * DusklobberSuperProjectile::StaticNew(void)

{
  DusklobberSuperProjectile *this;
  
  this = ::operator_new(0x1a8);
  DusklobberSuperProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DusklobberSuperProjectile::DoSplashDamage(int, int) */

void __thiscall
DusklobberSuperProjectile::DoSplashDamage(DusklobberSuperProjectile *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  long extraout_x0;
  long lVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  Zombie *this_00;
  ulong uVar12;
  long *extraout_x0_00;
  Point *pPVar13;
  undefined8 uVar14;
  RtObject *this_01;
  Board *this_02;
  ulong uVar15;
  float fVar16;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  Point aPStack_80 [24];
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68);
  local_60 = 0;
  Projectile::GetProps((Projectile *)this);
  nop();
  if (extraout_x0 != 0) {
    local_60 = *(undefined4 *)(extraout_x0 + 0x1e0);
  }
  iVar7 = param_1 + 1;
  iVar2 = param_1 + -1;
  iVar3 = param_2 + -1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_b0);
  iVar1 = param_2 + 1;
  uVar15 = 0;
  Sexy::Point::Point(aPStack_80,param_1,param_2);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0,aPStack_80);
  Sexy::Point::Point(aPStack_80,iVar2,iVar3);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0,aPStack_80);
  Sexy::Point::Point(aPStack_80,param_1,iVar3);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0,aPStack_80);
  Sexy::Point::Point(aPStack_80,iVar7,iVar3);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0,aPStack_80);
  Sexy::Point::Point(aPStack_80,iVar2,param_2);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0,aPStack_80);
  Sexy::Point::Point(aPStack_80,iVar7,param_2);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0,aPStack_80);
  Sexy::Point::Point(aPStack_80,iVar2,iVar1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0,aPStack_80);
  Sexy::Point::Point(aPStack_80,param_1,iVar1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0,aPStack_80);
  Sexy::Point::Point(aPStack_80,iVar7,iVar1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0,aPStack_80);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_98);
  uVar14 = local_b0;
  lVar8 = FUN_03bd43d0(local_b0,local_a8);
  if (lVar8 != 0) {
    do {
      piVar9 = (int *)FUN_03bd43ec(uVar14,uVar15);
      cVar4 = Board::CanSpawnDuskSeedAt(*(Board **)(gLawnApp + 0x9f0),*piVar9,piVar9[1]);
      if (cVar4 != '\0') {
        pPVar13 = (Point *)FUN_03bd43ec(local_b0,uVar15);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_98,pPVar13);
      }
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aPStack_80);
      uVar6 = operator|(2,4);
      puVar10 = (undefined4 *)FUN_03bd43ec(local_b0,uVar15);
      EntityFinder::GetEntitiesAtGridSquare(aPStack_80,uVar6,*puVar10,puVar10[1]);
      local_c0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aPStack_80);
      local_b8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aPStack_80);
      while (bVar5 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_c0,(__normal_iterator *)&local_b8),
            bVar5) {
        puVar11 = (undefined8 *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0);
        this_01 = (RtObject *)*puVar11;
        cVar4 = RealObject::IsOnOpposingTeam(this_01,1);
        if (cVar4 != '\0') {
          this_00 = Sexy::RtObject::Cast<Zombie>(this_01);
          if (this_00 == (Zombie *)0x0) {
            nop();
            if (((extraout_x0_00 != (long *)0x0) &&
                (cVar4 = (**(code **)(*extraout_x0_00 + 0xb8))(), cVar4 != '\0')) &&
               (cVar4 = (**(code **)(*extraout_x0_00 + 0x200))(extraout_x0_00), cVar4 != '\0')) {
              (**(code **)(*extraout_x0_00 + 0x110))(extraout_x0_00,aDStack_68);
            }
          }
          else {
            uVar6 = operator|(1,8);
            cVar4 = Zombie::MatchesAny(this_00,uVar6);
            if (((cVar4 == '\0') &&
                (cVar4 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,7), cVar4 != '\0')) &&
               (cVar4 = Zombie::IsFlying(this_00), cVar4 == '\0')) {
              (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_68);
            }
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c0);
      }
      uVar15 = uVar15 + 1;
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aPStack_80);
      uVar14 = local_b0;
      uVar12 = FUN_03bd43d0(local_b0,local_a8);
    } while (uVar15 < uVar12);
  }
  cVar4 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_98);
  if ((cVar4 == '\0') && (fVar16 = (float)Sexy::Rand(1.0), fVar16 < *(float *)(extraout_x0 + 0x1e4))
     ) {
    iVar7 = FUN_03bd43d0(local_98,local_90);
    iVar7 = Sexy::Rand(iVar7);
    piVar9 = (int *)FUN_03bd43ec(local_98,(long)iVar7);
    this_02 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)aPStack_80,"duskseed");
    Board::AddGridItem(this_02,(string *)aPStack_80,*piVar9,piVar9[1],1);
    std::string::~string((string *)aPStack_80);
    nop();
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_98);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DusklobberSuperProjectile::MarkCenterTarget(BoardEntity*) */

void __thiscall
DusklobberSuperProjectile::MarkCenterTarget(DusklobberSuperProjectile *this,BoardEntity *param_1)

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
  iVar2 = FUN_03bd42e0(*(undefined4 *)(this + 0xa8));
  DoSplashDamage(this,iVar1,iVar2);
  return;
}


/* DusklobberSuperProjectile::handleImpact(BoardEntity*) */

void __thiscall
DusklobberSuperProjectile::handleImpact(DusklobberSuperProjectile *this,BoardEntity *param_1)

{
  MarkCenterTarget(this,param_1);
  Projectile::handleImpact((Projectile *)this,param_1);
  return;
}

