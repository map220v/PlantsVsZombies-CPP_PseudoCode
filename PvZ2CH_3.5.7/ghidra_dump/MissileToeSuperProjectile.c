// Class: MissileToeSuperProjectile


/* MissileToeSuperProjectile::~MissileToeSuperProjectile() */

void __thiscall
MissileToeSuperProjectile::~MissileToeSuperProjectile(MissileToeSuperProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06741750;
  *(undefined ***)(this + 0x10) = &PTR__MissileToeSuperProjectile_06741940;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to MissileToeSuperProjectile::~MissileToeSuperProjectile() */

void __thiscall
MissileToeSuperProjectile::~MissileToeSuperProjectile(MissileToeSuperProjectile *this)

{
  ~MissileToeSuperProjectile(this + -0x10);
  return;
}


/* MissileToeSuperProjectile::~MissileToeSuperProjectile() */

void __thiscall
MissileToeSuperProjectile::~MissileToeSuperProjectile(MissileToeSuperProjectile *this)

{
  ~MissileToeSuperProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MissileToeSuperProjectile::~MissileToeSuperProjectile() */

void __thiscall
MissileToeSuperProjectile::~MissileToeSuperProjectile(MissileToeSuperProjectile *this)

{
  ~MissileToeSuperProjectile(this + -0x10);
  return;
}


/* MissileToeSuperProjectile::StaticGetClass() */

long * MissileToeSuperProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MissileToeSuperProjectile",uVar2,StaticNew);
  return sClass;
}


/* MissileToeSuperProjectile::GetClass() const */

long * MissileToeSuperProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"MissileToeSuperProjectile",uVar2,StaticNew);
  return sClass;
}


/* MissileToeSuperProjectile::MissileToeSuperProjectile() */

void __thiscall
MissileToeSuperProjectile::MissileToeSuperProjectile(MissileToeSuperProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06741750;
  *(undefined ***)(this + 0x10) = &PTR__MissileToeSuperProjectile_06741940;
  return;
}


/* MissileToeSuperProjectile::StaticNew() */

MissileToeSuperProjectile * MissileToeSuperProjectile::StaticNew(void)

{
  MissileToeSuperProjectile *this;
  
  this = ::operator_new(0x1a8);
  MissileToeSuperProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MissileToeSuperProjectile::DoSplashDamage(int, int) */

void __thiscall
MissileToeSuperProjectile::DoSplashDamage(MissileToeSuperProjectile *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long extraout_x0;
  long lVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  Zombie *pZVar11;
  int *piVar12;
  ulong uVar13;
  long *extraout_x0_00;
  GridItemIcePit *pGVar14;
  RtObject *pRVar15;
  Board *this_00;
  ulong uVar16;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_98 [24];
  Point aPStack_80 [24];
  DamageInfo aDStack_68 [8];
  float local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68);
  local_60 = 0.0;
  operator|=(auStack_58,0x800);
  Projectile::GetProps((Projectile *)this);
  nop();
  if (extraout_x0 != 0) {
    local_60 = (float)FUN_03bf2570(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                                   *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
    local_60 = local_60 * *(float *)(extraout_x0 + 0x1e0);
  }
  iVar2 = param_1 + -1;
  iVar3 = param_2 + -1;
  iVar6 = param_1 + 1;
  iVar1 = param_2 + 1;
  uVar16 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_b0);
  Sexy::Point::Point(aPStack_80,param_1,param_2);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0,aPStack_80);
  Sexy::Point::Point(aPStack_80,iVar2,iVar3);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0,aPStack_80);
  Sexy::Point::Point(aPStack_80,param_1,iVar3);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0,aPStack_80);
  Sexy::Point::Point(aPStack_80,iVar6,iVar3);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0,aPStack_80);
  Sexy::Point::Point(aPStack_80,iVar2,param_2);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0,aPStack_80);
  Sexy::Point::Point(aPStack_80,iVar6,param_2);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0,aPStack_80);
  Sexy::Point::Point(aPStack_80,iVar2,iVar1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0,aPStack_80);
  Sexy::Point::Point(aPStack_80,param_1,iVar1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0,aPStack_80);
  Sexy::Point::Point(aPStack_80,iVar6,iVar1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0,aPStack_80);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_98);
  iVar6 = FUN_03bf2580(*(undefined4 *)(this + 0x70));
  lVar8 = FUN_03bf266c(local_b0,local_a8);
  if (lVar8 != 0) {
    do {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aPStack_80);
      uVar7 = operator|(2,4);
      puVar9 = (undefined4 *)FUN_03bf2678(local_b0,uVar16);
      EntityFinder::GetEntitiesAtGridSquare(aPStack_80,uVar7,*puVar9,puVar9[1]);
      local_c0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aPStack_80);
      local_b8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aPStack_80);
      while (bVar4 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_c0,(__normal_iterator *)&local_b8),
            bVar4) {
        puVar10 = (undefined8 *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0);
        pRVar15 = (RtObject *)*puVar10;
        cVar5 = RealObject::IsOnOpposingTeam(pRVar15,1);
        if (cVar5 != '\0') {
          pZVar11 = Sexy::RtObject::Cast<Zombie>(pRVar15);
          if (pZVar11 == (Zombie *)0x0) {
            nop();
            if (((extraout_x0_00 != (long *)0x0) &&
                (cVar5 = (**(code **)(*extraout_x0_00 + 0xb8))(), cVar5 != '\0')) &&
               (cVar5 = (**(code **)(*extraout_x0_00 + 0x200))(extraout_x0_00), cVar5 != '\0')) {
              (**(code **)(*extraout_x0_00 + 0x110))(extraout_x0_00,aDStack_68);
            }
          }
          else {
            uVar7 = operator|(1,8);
            cVar5 = Zombie::MatchesAny(pZVar11,uVar7);
            if ((cVar5 == '\0') &&
               (cVar5 = (**(code **)(*(long *)pZVar11 + 0xb8))(pZVar11,7), cVar5 != '\0')) {
              (**(code **)(*(long *)pZVar11 + 0x110))(pZVar11,aDStack_68);
            }
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c0);
      }
      piVar12 = (int *)FUN_03bf2678(local_b0,uVar16);
      cVar5 = Board::CanSpawnIcePitAt(*(Board **)(gLawnApp + 0x9f0),*piVar12,piVar12[1]);
      if (cVar5 != '\0') {
        puVar9 = (undefined4 *)FUN_03bf2678(local_b0,uVar16);
        pGVar14 = (GridItemIcePit *)FUN_03bf62cc(*puVar9,puVar9[1]);
        if (pGVar14 == (GridItemIcePit *)0x0) {
          this_00 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string((string *)&local_b8,"icepit");
          piVar12 = (int *)FUN_03bf2678(local_b0,uVar16);
          pRVar15 = (RtObject *)
                    Board::AddGridItem(this_00,(string *)&local_b8,*piVar12,piVar12[1],iVar6);
          pGVar14 = Sexy::RtObject::Cast<GridItemIcePit>(pRVar15);
          std::string::~string((string *)&local_b8);
          nop();
          uVar7 = FUN_03bf2550(*(undefined4 *)(this + 0x24));
          FUN_03bf2554(pGVar14 + 0x24,uVar7);
          GridItemIcePit::SetIdle(pGVar14);
        }
        else {
          GridItemIcePit::ResetTimer(pGVar14);
          (**(code **)(*(long *)pGVar14 + 0x198))(pGVar14,iVar6);
        }
      }
      uVar16 = uVar16 + 1;
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aPStack_80);
      uVar13 = FUN_03bf266c(local_b0,local_a8);
    } while (uVar16 < uVar13);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_98);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_b0);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MissileToeSuperProjectile::MarkCenterTarget(BoardEntity*) */

void __thiscall
MissileToeSuperProjectile::MarkCenterTarget(MissileToeSuperProjectile *this,BoardEntity *param_1)

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
  iVar2 = FUN_03bf2564(*(undefined4 *)(this + 0xa8));
  DoSplashDamage(this,iVar1,iVar2);
  return;
}


/* MissileToeSuperProjectile::handleImpact(BoardEntity*) */

void __thiscall
MissileToeSuperProjectile::handleImpact(MissileToeSuperProjectile *this,BoardEntity *param_1)

{
  MarkCenterTarget(this,param_1);
  Projectile::handleImpact((Projectile *)this,param_1);
  return;
}

