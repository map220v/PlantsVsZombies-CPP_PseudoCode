// Class: MeteorAdvancedProjectile


/* MeteorAdvancedProjectile::~MeteorAdvancedProjectile() */

void __thiscall MeteorAdvancedProjectile::~MeteorAdvancedProjectile(MeteorAdvancedProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069b16e0;
  *(undefined ***)(this + 0x10) = &PTR__MeteorAdvancedProjectile_069b18d0;
  MeteorProjectile::~MeteorProjectile((MeteorProjectile *)this);
  return;
}


/* non-virtual thunk to MeteorAdvancedProjectile::~MeteorAdvancedProjectile() */

void __thiscall MeteorAdvancedProjectile::~MeteorAdvancedProjectile(MeteorAdvancedProjectile *this)

{
  ~MeteorAdvancedProjectile(this + -0x10);
  return;
}


/* MeteorAdvancedProjectile::~MeteorAdvancedProjectile() */

void __thiscall MeteorAdvancedProjectile::~MeteorAdvancedProjectile(MeteorAdvancedProjectile *this)

{
  ~MeteorAdvancedProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MeteorAdvancedProjectile::~MeteorAdvancedProjectile() */

void __thiscall MeteorAdvancedProjectile::~MeteorAdvancedProjectile(MeteorAdvancedProjectile *this)

{
  ~MeteorAdvancedProjectile(this + -0x10);
  return;
}


/* MeteorAdvancedProjectile::MeteorAdvancedProjectile() */

void __thiscall MeteorAdvancedProjectile::MeteorAdvancedProjectile(MeteorAdvancedProjectile *this)

{
  MeteorProjectile::MeteorProjectile((MeteorProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_069b16e0;
  *(undefined ***)(this + 0x10) = &PTR__MeteorAdvancedProjectile_069b18d0;
  return;
}


/* MeteorAdvancedProjectile::StaticNew() */

MeteorAdvancedProjectile * MeteorAdvancedProjectile::StaticNew(void)

{
  MeteorAdvancedProjectile *this;
  
  this = ::operator_new(0x1b0);
  MeteorAdvancedProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeteorAdvancedProjectile::StaticClassInit() */

void MeteorAdvancedProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"MeteorAdvancedProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04d4956c,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MeteorAdvancedProjectile::StaticGetClass() */

long * MeteorAdvancedProjectile::StaticGetClass(void)

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
  uVar2 = MeteorProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"MeteorAdvancedProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MeteorAdvancedProjectile::GetClass() const */

long * MeteorAdvancedProjectile::GetClass(void)

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
  uVar2 = MeteorProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"MeteorAdvancedProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeteorAdvancedProjectile::shouldKnockback(Zombie*) */

void __thiscall
MeteorAdvancedProjectile::shouldKnockback(MeteorAdvancedProjectile *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  SexyVector3 *pSVar4;
  TitleStatus aTStack_70 [24];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((((param_1 != (Zombie *)0x0) && (cVar1 = Zombie::IsFriendZombie(param_1), cVar1 == '\0')) &&
       (cVar1 = Zombie::IsFlying(param_1), cVar1 == '\0')) &&
      ((cVar1 = Zombie::IsFlickedOff(param_1), cVar1 == '\0' &&
       (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')))) &&
     ((cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0' &&
      ((cVar1 = Zombie::IsControlled(param_1), cVar1 == '\0' &&
       (cVar1 = Zombie::IsInvisible(param_1), cVar1 == '\0')))))) {
    pSVar4 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    cVar1 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),pSVar4);
    if ((cVar1 == '\0') &&
       (cVar1 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),pSVar4), cVar1 == '\0')) {
      cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),pSVar4);
      if ((cVar1 == '\0') && (iVar3 = Zombie::GetSizeType(param_1), iVar3 != 2)) {
        cVar1 = Zombie::IsBoss(param_1);
        bVar2 = 0;
        if (cVar1 == '\0') {
          Zombie::GetCurrentTitleStatus();
          if ((local_58 == '\0') &&
             (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0')) {
            bVar2 = (**(code **)(*(long *)param_1 + 0x508))(param_1);
            bVar2 = bVar2 ^ 1;
          }
          else {
            bVar2 = 0;
          }
          TitleStatus::~TitleStatus(aTStack_70);
        }
        goto LAB_04d4c8a0;
      }
    }
  }
  bVar2 = 0;
LAB_04d4c8a0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeteorAdvancedProjectile::knockbackZombie(BoardEntity*) */

void __thiscall
MeteorAdvancedProjectile::knockbackZombie(MeteorAdvancedProjectile *this,BoardEntity *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined8 *puVar9;
  Zombie *pZVar10;
  TPoint *pTVar11;
  ZombieTosserSubSystem *pZVar12;
  float *pfVar13;
  undefined1 auStack_d0 [4];
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  int local_98;
  int local_94;
  int local_90 [4];
  undefined8 local_80;
  undefined8 local_78;
  int local_68 [6];
  Point aPStack_50 [8];
  Point aPStack_48 [8];
  Point aPStack_40 [8];
  Point aPStack_38 [8];
  Point aPStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) {
    pfVar13 = (float *)std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      *)this);
    iVar4 = BoardTransforms::BoardSpaceToGridX(*pfVar13);
    iVar5 = BoardTransforms::BoardSpaceToGridY(pfVar13[1]);
  }
  else {
    iVar4 = BoardEntity::CalcColumnPosition(param_1);
    iVar5 = SharkMinion::getRow((SharkMinion *)param_1);
  }
  if ((-1 < iVar5) && (iVar7 = -(iVar4 >> 0x1f), iVar7 == 0)) {
    iVar6 = BoardConstants::NUMBER_OF_COLUMNS();
    if ((iVar4 < iVar6) && (iVar6 = BoardConstants::NUMBER_OF_ROWS(), iVar5 < iVar6)) {
      local_cc = iVar5 + -1;
      local_c8 = iVar7;
      piVar8 = eastl::max_alt<int>(&local_cc,&local_c8);
      iVar6 = iVar4 + 1;
      Sexy::Point::Point(aPStack_50,iVar4,*piVar8);
      local_c4 = iVar6;
      local_c0 = BoardConstants::NUMBER_OF_COLUMNS();
      local_c0 = local_c0 + -1;
      piVar8 = eastl::min_alt<int>(&local_c4,&local_c0);
      iVar1 = *piVar8;
      local_bc = iVar5 + -1;
      local_b8 = iVar7;
      piVar8 = eastl::max_alt<int>(&local_bc,&local_b8);
      Sexy::Point::Point(aPStack_48,iVar1,*piVar8);
      local_b4 = iVar6;
      local_b0 = BoardConstants::NUMBER_OF_COLUMNS();
      local_b0 = local_b0 + -1;
      piVar8 = eastl::min_alt<int>(&local_b4,&local_b0);
      Sexy::Point::Point(aPStack_40,*piVar8,iVar5);
      local_ac = iVar6;
      iVar7 = BoardConstants::NUMBER_OF_COLUMNS();
      local_a8 = CONCAT44(local_a8._4_4_,iVar7 + -1);
      piVar8 = eastl::min_alt<int>(&local_ac,(int *)&local_a8);
      local_a0 = CONCAT44(local_a0._4_4_,iVar5 + 1);
      iVar7 = *piVar8;
      local_98 = BoardConstants::NUMBER_OF_ROWS();
      local_98 = local_98 + -1;
      piVar8 = eastl::min_alt<int>((int *)&local_a0,&local_98);
      Sexy::Point::Point(aPStack_38,iVar7,*piVar8);
      local_90[0] = iVar5 + 1;
      local_68[0] = BoardConstants::NUMBER_OF_ROWS();
      local_68[0] = local_68[0] + -1;
      piVar8 = eastl::min_alt<int>(local_90,local_68);
      Sexy::Point::Point(aPStack_30,iVar4,*piVar8);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_80,aPStack_50,5,
                 auStack_d0);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_68);
      EntityFinder::GetEntitiesAtGridSquare
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_68,2,iVar4,
                 iVar5);
      local_a8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)local_68);
      local_a0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_68);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0),
            bVar3) {
        puVar9 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
        pZVar10 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
        if ((pZVar10 != (Zombie *)0x0) && (cVar2 = shouldKnockback(this,pZVar10), cVar2 != '\0')) {
          iVar4 = FUN_04d48354(local_80,local_78);
          iVar4 = Sexy::Rand(iVar4);
          pTVar11 = (TPoint *)FUN_04d48360(local_80,(long)iVar4);
          Sexy::Point::Point((Point *)&local_98,pTVar11);
          iVar4 = BoardTransforms::GridToBoardSpaceX(local_98);
          iVar5 = BoardTransforms::GridToBoardSpaceY(local_94);
          EATextSquish::Vec3::Vec3((Vec3 *)local_90,(float)iVar4,(float)iVar5,0.0);
          Zombie::ApplyCondition((Zombie *)0x3f800000,0,pZVar10,0x18,1);
          pZVar12 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aPStack_50);
          ZombieTosserSubSystem::LaunchZombie
                    ((ZombieTosserSubSystem *)0x428c0000,0x3f800000,pZVar12,pZVar10,(Vec3 *)local_90
                     ,aPStack_50,0);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aPStack_50);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_68);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_80);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MeteorAdvancedProjectile::handleImpact(BoardEntity*) */

void __thiscall
MeteorAdvancedProjectile::handleImpact(MeteorAdvancedProjectile *this,BoardEntity *param_1)

{
  long extraout_x0;
  
  Projectile::GetProps((Projectile *)this);
  nop();
  if (*(char *)(extraout_x0 + 0x1e0) != '\0') {
    knockbackZombie(this,param_1);
  }
  Projectile::handleImpact((Projectile *)this,param_1);
  return;
}

