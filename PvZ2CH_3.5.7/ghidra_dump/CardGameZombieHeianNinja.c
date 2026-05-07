// Class: CardGameZombieHeianNinja


/* CardGameZombieHeianNinja::~CardGameZombieHeianNinja() */

void __thiscall CardGameZombieHeianNinja::~CardGameZombieHeianNinja(CardGameZombieHeianNinja *this)

{
  *(undefined ***)this = &PTR_GetClass_06769230;
  *(undefined ***)(this + 0x10) = &PTR__CardGameZombieHeianNinja_06769d88;
  ZombieHeianNinja::~ZombieHeianNinja((ZombieHeianNinja *)this);
  return;
}


/* non-virtual thunk to CardGameZombieHeianNinja::~CardGameZombieHeianNinja() */

void __thiscall CardGameZombieHeianNinja::~CardGameZombieHeianNinja(CardGameZombieHeianNinja *this)

{
  ~CardGameZombieHeianNinja(this + -0x10);
  return;
}


/* CardGameZombieHeianNinja::~CardGameZombieHeianNinja() */

void __thiscall CardGameZombieHeianNinja::~CardGameZombieHeianNinja(CardGameZombieHeianNinja *this)

{
  ~CardGameZombieHeianNinja(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CardGameZombieHeianNinja::~CardGameZombieHeianNinja() */

void __thiscall CardGameZombieHeianNinja::~CardGameZombieHeianNinja(CardGameZombieHeianNinja *this)

{
  ~CardGameZombieHeianNinja(this + -0x10);
  return;
}


/* CardGameZombieHeianNinja::CardGameZombieHeianNinja() */

void __thiscall CardGameZombieHeianNinja::CardGameZombieHeianNinja(CardGameZombieHeianNinja *this)

{
  ZombieHeianNinja::ZombieHeianNinja((ZombieHeianNinja *)this);
  *(undefined ***)this = &PTR_GetClass_06769230;
  *(undefined ***)(this + 0x10) = &PTR__CardGameZombieHeianNinja_06769d88;
  return;
}


/* CardGameZombieHeianNinja::StaticNew() */

CardGameZombieHeianNinja * CardGameZombieHeianNinja::StaticNew(void)

{
  CardGameZombieHeianNinja *this;
  
  this = ::operator_new(0x820);
  CardGameZombieHeianNinja(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombieHeianNinja::StaticClassInit() */

void CardGameZombieHeianNinja::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardGameZombieHeianNinja");
    (*pcVar2)(plVar1,asStack_10,FUN_03d36fbc,0x820,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameZombieHeianNinja::calcRangedTargetGridRect() */

void CardGameZombieHeianNinja::calcRangedTargetGridRect(void)

{
  Zombie *in_x0;
  ZombieHeianNinjaProps *pZVar1;
  Insets *in_x8;
  
  pZVar1 = Zombie::GetProps<ZombieHeianNinjaProps>(in_x0);
  Sexy::Insets::Insets
            (in_x8,*(int *)(pZVar1 + 0x230),-1,*(int *)(pZVar1 + 0x234) - *(int *)(pZVar1 + 0x230),3
            );
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombieHeianNinja::throwSushi(BoardEntity*) */

void CardGameZombieHeianNinja::throwSushi(BoardEntity *param_1)

{
  int iVar1;
  int iVar2;
  SexyVector3 *pSVar3;
  ZombieHeianNinjaProps *pZVar4;
  Projectile *this;
  long lVar5;
  float *pfVar6;
  long in_x1;
  undefined8 uVar7;
  float fVar8;
  Board *pBVar9;
  int local_40;
  int local_3c;
  float local_28 [4];
  undefined4 local_18 [2];
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x1 != 0) {
    BoardEntity::CalcGridPosition();
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    pZVar4 = Zombie::GetProps<ZombieHeianNinjaProps>((Zombie *)param_1);
    pBVar9 = (Board *)Sexy::SexyVector3::operator+(pSVar3,(SexyVector3 *)(pZVar4 + 0x218));
    uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
    pZVar4 = Zombie::GetProps<ZombieHeianNinjaProps>((Zombie *)param_1);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)(pZVar4 + 0x228));
    this = (Projectile *)
           Board::AddProjectile(pBVar9,uVar7,(RtWeakPtr<Sexy::SoundResource> *)local_18,param_1,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    if (this != (Projectile *)0x0) {
      pSVar3 = (SexyVector3 *)Projectile::GetVelocity(this);
      fVar8 = (float)Zombie::GetFacingMultiplier((Zombie *)param_1);
      local_28[0] = (float)Sexy::SexyVector3::operator*(pSVar3,fVar8);
      local_18[0] = Sexy::SexyVector3::operator*((SexyVector3 *)local_28,-1.0);
      Projectile::SetVelocity(this,(SexyVector3 *)local_18);
      iVar1 = Zombie::GetFacing((Zombie *)param_1);
      FUN_03d33c10(this + 0xd4,iVar1 == 0);
      iVar1 = BoardTransforms::GridToBoardSpaceX(local_40);
      iVar2 = BoardTransforms::GridToBoardSpaceY(local_3c);
      EATextSquish::Vec3::Vec3((Vec3 *)local_18,(float)iVar1,(float)iVar2,0.0);
      lVar5 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
      local_28[0] = *(float *)(lVar5 + 8) + 200.0;
      pfVar6 = eastl::max_alt<float>(local_28,local_10);
      Projectile::LaunchAt(this,(SexyVector3 *)local_18,*pfVar6,1.0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombieHeianNinja::FindRangedTargets() */

void CardGameZombieHeianNinja::FindRangedTargets(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  undefined8 *puVar4;
  Plant *this;
  float *pfVar5;
  float *pfVar6;
  Zombie *pZVar7;
  TRect<int> *this_00;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  BoardEntity *local_78;
  RtObject *local_70;
  RtObject *local_68;
  undefined8 local_60;
  int local_58;
  int local_54;
  int local_50;
  undefined8 local_48;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  local_78 = (BoardEntity *)(**(code **)(*(long *)in_x0 + 0x228))();
  if (local_78 != (BoardEntity *)0x0) {
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)in_x8,&local_78);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (**(code **)(*(long *)in_x0 + 0x550))(&local_58);
  if (local_50 == 0) {
    EntityFinder::GetEntities(avStack_38,1);
    EntityFinder::GetEntities(avStack_20,2);
  }
  else {
    BoardEntity::CalcGridPosition();
    local_58 = local_58 + (int)local_48;
    local_54 = local_54 + local_48._4_4_;
    EntityFinder::GetEntitiesInGridSquares(avStack_38,1,&local_58);
    EntityFinder::GetEntitiesInGridSquares(avStack_20,2,&local_58);
  }
  local_68 = (RtObject *)
             std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_38);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)&local_60);
    if (!bVar1) {
      local_60 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_48 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_60,(__normal_iterator *)&local_48),
            bVar1) {
        puVar4 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
        local_68 = (RtObject *)*puVar4;
        pZVar7 = Sexy::RtObject::Cast<Zombie>(local_68);
        iVar3 = FUN_03d33c0c(*(undefined4 *)(pZVar7 + 0x24));
        if (iVar3 != 2) {
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)in_x8,
                     (BoardEntity **)&local_68);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    local_70 = (RtObject *)*puVar4;
    this = Sexy::RtObject::Cast<Plant>(local_70);
    cVar2 = (**(code **)(*(long *)in_x0 + 0x200))();
    if (cVar2 != '\0') {
      (**(code **)(*(long *)in_x0 + 0x3a0))((TRect *)&local_48);
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this);
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(in_x0);
      if (*pfVar6 < *pfVar5) {
        this_00 = (TRect<int> *)(**(code **)(*(long *)this + 0x178))(this);
        cVar2 = Sexy::TRect<int>::Intersects(this_00,(TRect *)&local_48);
        if (cVar2 == '\0') goto LAB_03d36140;
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)in_x8,
                 (BoardEntity **)&local_70);
    }
LAB_03d36140:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombieHeianNinja::updateState_Walk() */

void __thiscall CardGameZombieHeianNinja::updateState_Walk(CardGameZombieHeianNinja *this)

{
  char cVar1;
  long lVar2;
  ZombieHeianNinjaProps *pZVar3;
  float fVar4;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03d34694(*(undefined4 *)(this + 0x28));
  if ((cVar1 == '\0') && (fVar4 = (float)PVZ_T(), *(float *)(this + 0x81c) <= fVar4)) {
    FindRangedTargets();
    lVar2 = FUN_03d33c3c(local_20,local_18);
    if (lVar2 == 0) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    }
    else {
      Zombie::setZombieState((Zombie *)this,0x29,0);
      fVar4 = (float)PVZ_T();
      pZVar3 = Zombie::GetProps<ZombieHeianNinjaProps>((Zombie *)this);
      *(float *)(this + 0x81c) = fVar4 + *(float *)(pZVar3 + 0x238);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameZombieHeianNinja::StaticGetClass() */

long * CardGameZombieHeianNinja::StaticGetClass(void)

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
  uVar2 = ZombieHeianNinja::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameZombieHeianNinja",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameZombieHeianNinja::GetClass() const */

long * CardGameZombieHeianNinja::GetClass(void)

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
  uVar2 = ZombieHeianNinja::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameZombieHeianNinja",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombieHeianNinja::throwSushi() */

void __thiscall CardGameZombieHeianNinja::throwSushi(CardGameZombieHeianNinja *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  BoardEntitySorter_Closest aBStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindRangedTargets();
  lVar1 = FUN_03d33c3c(local_20,local_18);
  if (lVar1 != 0) {
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
    BoardEntity::CalcGridPosition();
    EntityFinder::BoardEntitySorter_Closest::BoardEntitySorter_Closest(aBStack_30,auStack_38);
    std::
    sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_Closest>
              (uVar2,uVar3,aBStack_30);
    FUN_03d33c48(local_20);
    throwSushi((BoardEntity *)this);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

