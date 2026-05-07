// Class: CardGameZombieCannonBallProjectile


/* CardGameZombieCannonBallProjectile::~CardGameZombieCannonBallProjectile() */

void __thiscall
CardGameZombieCannonBallProjectile::~CardGameZombieCannonBallProjectile
          (CardGameZombieCannonBallProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069d8660;
  *(undefined ***)(this + 0x10) = &PTR__CardGameZombieCannonBallProjectile_069d8850;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to CardGameZombieCannonBallProjectile::~CardGameZombieCannonBallProjectile() */

void __thiscall
CardGameZombieCannonBallProjectile::~CardGameZombieCannonBallProjectile
          (CardGameZombieCannonBallProjectile *this)

{
  ~CardGameZombieCannonBallProjectile(this + -0x10);
  return;
}


/* CardGameZombieCannonBallProjectile::~CardGameZombieCannonBallProjectile() */

void __thiscall
CardGameZombieCannonBallProjectile::~CardGameZombieCannonBallProjectile
          (CardGameZombieCannonBallProjectile *this)

{
  ~CardGameZombieCannonBallProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CardGameZombieCannonBallProjectile::~CardGameZombieCannonBallProjectile() */

void __thiscall
CardGameZombieCannonBallProjectile::~CardGameZombieCannonBallProjectile
          (CardGameZombieCannonBallProjectile *this)

{
  ~CardGameZombieCannonBallProjectile(this + -0x10);
  return;
}


/* CardGameZombieCannonBallProjectile::CardGameZombieCannonBallProjectile() */

void __thiscall
CardGameZombieCannonBallProjectile::CardGameZombieCannonBallProjectile
          (CardGameZombieCannonBallProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069d8660;
  *(undefined ***)(this + 0x10) = &PTR__CardGameZombieCannonBallProjectile_069d8850;
  return;
}


/* CardGameZombieCannonBallProjectile::StaticNew() */

CardGameZombieCannonBallProjectile * CardGameZombieCannonBallProjectile::StaticNew(void)

{
  CardGameZombieCannonBallProjectile *this;
  
  this = ::operator_new(0x1a8);
  CardGameZombieCannonBallProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombieCannonBallProjectile::StaticClassInit() */

void CardGameZombieCannonBallProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardGameZombieCannonBallProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04e21178,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameZombieCannonBallProjectile::StaticGetClass() */

long * CardGameZombieCannonBallProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CardGameZombieCannonBallProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameZombieCannonBallProjectile::GetClass() const */

long * CardGameZombieCannonBallProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"CardGameZombieCannonBallProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombieCannonBallProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
CardGameZombieCannonBallProjectile::OnCollideEntity
          (CardGameZombieCannonBallProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *extraout_x0;
  undefined8 *puVar5;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  ResourceInfo *pRVar6;
  long *extraout_x0_00;
  code *pcVar7;
  DamageInfo *pDVar9;
  undefined1 auVar8 [16];
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  string asStack_a8 [8];
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  Insets aIStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  auVar8 = std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  BoardTransforms::BoardSpaceToGridUnbounded(auVar8._0_8_,auVar8._8_8_);
  Sexy::Insets::Insets(aIStack_90,local_c0 + -1,local_bc + -1,3,3);
  uVar3 = operator|(1,2);
  uVar2 = operator|(uVar3,4);
  EntityFinder::GetEntitiesInGridSquares(avStack_80,uVar2,aIStack_90);
  lVar4 = Projectile::GetProps((Projectile *)this);
                    /* WARNING: Load size is inaccurate */
  pDVar9._0_4_ = *(DamageInfo **)(lVar4 + 0x18);
  local_b8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_b8,(__normal_iterator *)&local_b0);
    if (!bVar1) {
LAB_04e223c4:
      uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar2);
    }
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8);
    bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)*puVar5);
    if (bVar1) {
      nop();
      pcVar7 = *(code **)(*extraout_x0 + 0x110);
      Sexy::Point::Point(aPStack_a0,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
      DamageInfo::DamageInfo(pDVar9._0_4_,local_98,local_94,aDStack_68,0x1000,0,aPStack_a0,0);
      (*pcVar7)(extraout_x0,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
    }
    else {
      bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar5);
      if (bVar1) {
        nop();
        this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_00);
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        FUN_05475d88(asStack_a8,lVar4 + 8);
        bVar1 = std::operator==(asStack_a8,"zombie_pumpkin_imp");
        if (!bVar1) {
          bVar1 = std::operator==(asStack_a8,"zombie_pumpkin");
          if (!bVar1) {
            pcVar7 = *(code **)(*(long *)this_00 + 0x110);
            Sexy::Point::Point(aPStack_a0,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
            DamageInfo::DamageInfo
                      (pDVar9._0_4_,local_98,local_94,aDStack_68,0x1000,0,aPStack_a0,bVar1);
            (*pcVar7)(this_00,aDStack_68);
            DamageInfo::~DamageInfo(aDStack_68);
            std::string::~string(asStack_a8);
            goto LAB_04e2232c;
          }
        }
        (**(code **)(*(long *)this_00 + 0x48))(this_00);
        std::string::~string(asStack_a8);
        goto LAB_04e223c4;
      }
      bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)*puVar5);
      if (bVar1) {
        ToolPacketData::GetProps();
        pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aDStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68)
        ;
        if (this != (CardGameZombieCannonBallProjectile *)pRVar6) {
          nop();
          pcVar7 = *(code **)(*extraout_x0_00 + 0x110);
          Sexy::Point::Point(aPStack_a0,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
          DamageInfo::DamageInfo(pDVar9._0_4_,local_98,local_94,aDStack_68,0x1000,0,aPStack_a0,0);
          (*pcVar7)(extraout_x0_00,aDStack_68);
          DamageInfo::~DamageInfo(aDStack_68);
        }
      }
    }
LAB_04e2232c:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b8);
  } while( true );
}

