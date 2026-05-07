// Class: CardGameGridItemBarrel


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameGridItemBarrel::StaticClassInit() */

void CardGameGridItemBarrel::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardGameGridItemBarrel");
    (*pcVar2)(plVar1,asStack_10,FUN_04c77600,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameGridItemBarrel::StaticGetClass() */

long * CardGameGridItemBarrel::StaticGetClass(void)

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
  uVar2 = GridItemBarrel::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameGridItemBarrel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameGridItemBarrel::GetClass() const */

long * CardGameGridItemBarrel::GetClass(void)

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
  uVar2 = GridItemBarrel::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameGridItemBarrel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameGridItemBarrel::CardGameGridItemBarrel() */

void __thiscall CardGameGridItemBarrel::CardGameGridItemBarrel(CardGameGridItemBarrel *this)

{
  GridItemBarrel::GridItemBarrel((GridItemBarrel *)this);
  *(undefined ***)this = &PTR_GetClass_06992020;
  *(undefined ***)(this + 0x10) = &PTR__CardGameGridItemBarrel_06992338;
  return;
}


/* CardGameGridItemBarrel::StaticNew() */

CardGameGridItemBarrel * CardGameGridItemBarrel::StaticNew(void)

{
  CardGameGridItemBarrel *this;
  
  this = ::operator_new(0x218);
  CardGameGridItemBarrel(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameGridItemBarrel::onUpdate() */

void __thiscall CardGameGridItemBarrel::onUpdate(CardGameGridItemBarrel *this)

{
  bool bVar1;
  float *pfVar2;
  long lVar3;
  code *pcVar4;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBoardEntityConditionTarget::onUpdate((GridItemBoardEntityConditionTarget *)this);
  if (this[0x210] == (CardGameGridItemBarrel)0x0) {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    if (*pfVar2 <= 200.0) {
      pcVar4 = *(code **)(*(long *)this + 0x120);
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,aDStack_68,2,0,aPStack_78,0);
      (*pcVar4)(this,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
    }
    GridItem::GetType();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
    bVar1 = std::operator==((string *)(lVar3 + 8),"barrelpowder");
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
    }
    else {
      GridItem::GetType();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68);
      bVar1 = std::operator==((string *)(lVar3 + 8),"card_game_barrelpowder");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
      if (!bVar1) {
        (**(code **)(*(long *)this + 0x300))(this);
        goto LAB_04c794f8;
      }
    }
    GridItemBarrel::blowEntities((GridItemBarrel *)this);
  }
LAB_04c794f8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameGridItemBarrel::crushEntities() */

void __thiscall CardGameGridItemBarrel::crushEntities(CardGameGridItemBarrel *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  PlantGroup *this_00;
  long lVar5;
  PlantSpikeweed *pPVar6;
  Zombie *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  code *pcVar7;
  undefined8 local_a8;
  undefined8 local_a0;
  RtWeakPtr aRStack_98 [8];
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  GridItem::GetProps<GridItemBarrelProps>();
  uVar3 = operator|(0x10,2);
  (**(code **)(*(long *)this + 0xb0))(aDStack_68,this);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_80,uVar3,aDStack_68,0xffffffff,0xffffffff);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0);
    if (!bVar1) {
LAB_04c7983c:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
    bVar1 = Sexy::RtObject::IsA<PlantGroup>((RtObject *)*puVar4);
    if (bVar1) {
      uVar3 = FUN_04c76d34(*(undefined4 *)(this + 0x24));
      cVar2 = RealObject::IsOnOpposingTeam(*puVar4,uVar3);
      if (cVar2 == '\0') goto LAB_04c7969c;
      this_00 = Sexy::RtObject::Cast<PlantGroup>((RtObject *)*puVar4);
      if (this_00 != (PlantGroup *)0x0) {
        cVar2 = PlantGroup::Empty(this_00);
        if (cVar2 == '\0') {
          PlantGroup::GetPlantAtLayer(aRStack_98,this_00,1);
          bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_98);
          if (bVar1) {
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
            pPVar6 = Sexy::RtObject::Cast<PlantSpikeweed>(*(RtObject **)(lVar5 + 0xa8));
            if (pPVar6 == (PlantSpikeweed *)0x0) {
              pcVar7 = *(code **)(*(long *)this_00 + 0x120);
              Sexy::Point::Point(aPStack_90,-1,-1);
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
              DamageInfo::DamageInfo
                        ((DamageInfo *)0x0,local_88,local_84,aDStack_68,0x200000,this,aPStack_90,0);
              (*pcVar7)(this_00,aDStack_68);
              DamageInfo::~DamageInfo(aDStack_68);
            }
            else {
              pcVar7 = *(code **)(*(long *)this + 0x120);
              Sexy::Point::Point(aPStack_90,-1,-1);
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
              DamageInfo::DamageInfo
                        ((DamageInfo *)0x0,local_88,local_84,aDStack_68,2,0,aPStack_90,0);
              (*pcVar7)(this,aDStack_68);
              DamageInfo::~DamageInfo(aDStack_68);
              PlantGroup::TakeSmashAttack(this_00,(BoardEntity *)this);
            }
          }
          else {
            pcVar7 = *(code **)(*(long *)this_00 + 0x120);
            Sexy::Point::Point(aPStack_90,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)0x0,local_88,local_84,aDStack_68,0x200000,this,aPStack_90,0);
            (*pcVar7)(this_00,aDStack_68);
            DamageInfo::~DamageInfo(aDStack_68);
          }
          (**(code **)(*(long *)this + 0x2f8))(this);
          this[0x210] = (CardGameGridItemBarrel)0x1;
          pcVar7 = *(code **)(*(long *)this + 0x120);
          Sexy::Point::Point(aPStack_90,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
          DamageInfo::DamageInfo((DamageInfo *)0x0,local_88,local_84,aDStack_68,2,0,aPStack_90,0);
          (*pcVar7)(this,aDStack_68);
          DamageInfo::~DamageInfo(aDStack_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
          goto LAB_04c7983c;
        }
      }
    }
    else {
LAB_04c7969c:
      bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar4);
      if (bVar1) {
        uVar3 = FUN_04c76d34(*(undefined4 *)(this + 0x24));
        cVar2 = RealObject::IsOnOpposingTeam(*puVar4,uVar3);
        if (cVar2 != '\0') {
          nop();
          this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_01);
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
          FUN_05475d88((string *)aRStack_98,lVar5 + 8);
          bVar1 = std::operator==((string *)aRStack_98,"zombie_pumpkin_imp");
          if (!bVar1) {
            bVar1 = std::operator==((string *)aRStack_98,"zombie_pumpkin");
            if (!bVar1) {
              pcVar7 = *(code **)(*(long *)this_01 + 0x120);
              Sexy::Point::Point(aPStack_90,-1,-1);
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
              DamageInfo::DamageInfo
                        ((DamageInfo *)0x0,local_88,local_84,aDStack_68,0x200000,this,aPStack_90,0);
              (*pcVar7)(this_01,aDStack_68);
              DamageInfo::~DamageInfo(aDStack_68);
              (**(code **)(*(long *)this + 0x2f8))(this);
              this[0x210] = (CardGameGridItemBarrel)0x1;
              pcVar7 = *(code **)(*(long *)this + 0x120);
              Sexy::Point::Point(aPStack_90,-1,-1);
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
              DamageInfo::DamageInfo
                        ((DamageInfo *)0x0,local_88,local_84,aDStack_68,2,0,aPStack_90,bVar1);
              (*pcVar7)(this,aDStack_68);
              DamageInfo::~DamageInfo(aDStack_68);
              std::string::~string((string *)aRStack_98);
              goto LAB_04c7983c;
            }
          }
          (**(code **)(*(long *)this_01 + 0x48))(this_01);
          std::string::~string((string *)aRStack_98);
          goto LAB_04c7983c;
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
  } while( true );
}


/* CardGameGridItemBarrel::~CardGameGridItemBarrel() */

void __thiscall CardGameGridItemBarrel::~CardGameGridItemBarrel(CardGameGridItemBarrel *this)

{
  *(undefined ***)this = &PTR_GetClass_06992020;
  *(undefined ***)(this + 0x10) = &PTR__CardGameGridItemBarrel_06992338;
  GridItemBarrel::~GridItemBarrel((GridItemBarrel *)this);
  return;
}


/* non-virtual thunk to CardGameGridItemBarrel::~CardGameGridItemBarrel() */

void __thiscall CardGameGridItemBarrel::~CardGameGridItemBarrel(CardGameGridItemBarrel *this)

{
  ~CardGameGridItemBarrel(this + -0x10);
  return;
}


/* CardGameGridItemBarrel::~CardGameGridItemBarrel() */

void __thiscall CardGameGridItemBarrel::~CardGameGridItemBarrel(CardGameGridItemBarrel *this)

{
  ~CardGameGridItemBarrel(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CardGameGridItemBarrel::~CardGameGridItemBarrel() */

void __thiscall CardGameGridItemBarrel::~CardGameGridItemBarrel(CardGameGridItemBarrel *this)

{
  ~CardGameGridItemBarrel(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameGridItemBarrel::onBarrelBroken() */

void __thiscall CardGameGridItemBarrel::onBarrelBroken(CardGameGridItemBarrel *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long *extraout_x0;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  ulong uVar9;
  GriditemBarrelZombieDes *pGVar10;
  ResourceInfo *pRVar11;
  long *extraout_x0_00;
  long extraout_x0_01;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  code *pcVar15;
  DamageInfo *pDVar16;
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  string asStack_a8 [8];
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  Insets aIStack_90 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GetType();
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
  bVar3 = std::operator==((string *)(lVar7 + 8),"barrelmoster");
  if (bVar3) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
LAB_04c7aa18:
    cVar4 = std::vector<GriditemBarrelZombieDes,std::allocator<GriditemBarrelZombieDes>>::empty
                      ((vector<GriditemBarrelZombieDes,std::allocator<GriditemBarrelZombieDes>> *)
                       (this + 0x1f8));
    if (cVar4 != '\0') goto LAB_04c7aa28;
    iVar6 = SharkMinion::getRow((SharkMinion *)this);
    uVar14 = *(undefined8 *)(this + 0x1f8);
    uVar9 = FUN_04c76e04(uVar14,*(undefined8 *)(this + 0x200));
    if (uVar9 == 1) {
      pGVar10 = (GriditemBarrelZombieDes *)FUN_04c76e2c(uVar14,0);
      GriditemBarrelZombieDes::GriditemBarrelZombieDes
                ((GriditemBarrelZombieDes *)aRStack_68,pGVar10);
      GridItemBarrel::spawnImp(this,(GriditemBarrelZombieDes *)aRStack_68,iVar6);
      PakRecord::~PakRecord((PakRecord *)aRStack_68);
    }
    else {
      iVar1 = -iVar6;
      if (0 < iVar6) {
        iVar1 = -1;
      }
      uVar12 = 0;
      while (bVar3 = uVar12 < uVar9, uVar12 = uVar12 + 2, bVar3) {
        pGVar10 = (GriditemBarrelZombieDes *)FUN_04c76e2c(uVar14);
        GriditemBarrelZombieDes::GriditemBarrelZombieDes
                  ((GriditemBarrelZombieDes *)aRStack_68,pGVar10);
        GridItemBarrel::spawnImp(this,(GriditemBarrelZombieDes *)aRStack_68,iVar6 + iVar1);
        PakRecord::~PakRecord((PakRecord *)aRStack_68);
        uVar14 = *(undefined8 *)(this + 0x1f8);
        uVar9 = FUN_04c76e04(uVar14,*(undefined8 *)(this + 0x200));
      }
      uVar12 = 1;
      while (uVar12 < uVar9) {
        iVar2 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1;
        iVar1 = iVar2 - iVar6;
        if (iVar6 < iVar2) {
          iVar1 = 1;
        }
        pGVar10 = (GriditemBarrelZombieDes *)FUN_04c76e2c(uVar14,uVar12);
        GriditemBarrelZombieDes::GriditemBarrelZombieDes
                  ((GriditemBarrelZombieDes *)aRStack_68,pGVar10);
        GridItemBarrel::spawnImp(this,(GriditemBarrelZombieDes *)aRStack_68,iVar6 + iVar1);
        PakRecord::~PakRecord((PakRecord *)aRStack_68);
        uVar14 = *(undefined8 *)(this + 0x1f8);
        uVar9 = FUN_04c76e04(uVar14,*(undefined8 *)(this + 0x200));
        uVar12 = uVar12 + 2;
      }
    }
  }
  else {
    GridItem::GetType();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    bVar3 = std::operator==((string *)(lVar7 + 8),"card_game_barrelmoster");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
    if (bVar3) goto LAB_04c7aa18;
    GridItem::GetType();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
    bVar3 = std::operator==((string *)(lVar7 + 8),"barrelpowder");
    if (bVar3) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
LAB_04c7aad4:
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_80);
      BoardEntity::CalcGridPosition();
      Sexy::Insets::Insets(aIStack_90,local_c0 + -1,local_bc + -1,3,3);
      uVar14 = operator|(1,2);
      uVar5 = operator|(uVar14,4);
      EntityFinder::GetEntitiesInGridSquares(aRStack_80,uVar5,aIStack_90);
      local_b8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aRStack_80);
      local_b0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aRStack_80);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_b8,(__normal_iterator *)&local_b0),
            bVar3) {
        puVar8 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8);
                    /* WARNING: Load size is inaccurate */
        pDVar16._0_4_ = *(DamageInfo **)(this + 0x1f0);
        bVar3 = Sexy::RtObject::IsA<Plant>((RtObject *)*puVar8);
        if (bVar3) {
          uVar5 = FUN_04c76d34(*(undefined4 *)(this + 0x24));
          cVar4 = RealObject::IsOnOpposingTeam(*puVar8,uVar5);
          if (cVar4 == '\0') goto LAB_04c7ab74;
          nop();
          lVar7 = *extraout_x0;
          plVar13 = extraout_x0;
LAB_04c7ac08:
          pcVar15 = *(code **)(lVar7 + 0x110);
          Sexy::Point::Point(aPStack_a0,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
          DamageInfo::DamageInfo
                    (pDVar16._0_4_,local_98,local_94,aRStack_68,0x1000,this,aPStack_a0,0);
          (*pcVar15)(plVar13,aRStack_68);
          DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
        }
        else {
LAB_04c7ab74:
          bVar3 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar8);
          if (bVar3) {
            uVar5 = FUN_04c76d34(*(undefined4 *)(this + 0x24));
            cVar4 = RealObject::IsOnOpposingTeam(*puVar8,uVar5);
            if (cVar4 == '\0') goto LAB_04c7ab84;
            nop();
            MessageRouter::Post<Zombie*,Zombie*>
                      ((MessageRouter *)gMessageRouter,Message::OnZombiePowderKill,this_00);
            this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_00);
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
            FUN_05475d88(asStack_a8,lVar7 + 8);
            bVar3 = std::operator==(asStack_a8,"zombie_pumpkin_imp");
            if ((bVar3) || (bVar3 = std::operator==(asStack_a8,"zombie_pumpkin"), bVar3)) {
              (**(code **)(*(long *)this_00 + 0x48))(this_00);
              std::string::~string(asStack_a8);
              break;
            }
            pcVar15 = *(code **)(*(long *)this_00 + 0x110);
            Sexy::Point::Point(aPStack_a0,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
            DamageInfo::DamageInfo
                      (pDVar16._0_4_,local_98,local_94,aRStack_68,0x1000,this,aPStack_a0,0);
            (*pcVar15)(this_00,aRStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
            std::string::~string(asStack_a8);
          }
          else {
LAB_04c7ab84:
            bVar3 = Sexy::RtObject::IsA<GridItem>((RtObject *)*puVar8);
            if (bVar3) {
              ToolPacketData::GetProps();
              pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_68);
              if (this == (CardGameGridItemBarrel *)pRVar11) {
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
              }
              else {
                uVar5 = FUN_04c76d34(*(undefined4 *)(this + 0x24));
                cVar4 = RealObject::IsOnOpposingTeam(*puVar8,uVar5);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
                if (cVar4 != '\0') {
                  nop();
                  nop();
                  if ((extraout_x0_01 == 0) || (*(char *)(extraout_x0_01 + 0x210) == '\0')) {
                    lVar7 = *extraout_x0_00;
                    plVar13 = extraout_x0_00;
                    goto LAB_04c7ac08;
                  }
                }
              }
            }
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b8);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_80);
    }
    else {
      GridItem::GetType();
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      bVar3 = std::operator==((string *)(lVar7 + 8),"card_game_barrelpowder");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
      if (bVar3) goto LAB_04c7aad4;
    }
  }
  std::string::string((string *)aRStack_68,"Play_BarrelBreak");
  RealObject::PlayPositionalSound((RealObject *)this,(string *)aRStack_68,0.0);
  std::string::~string((string *)aRStack_68);
  nop();
LAB_04c7aa28:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

