// Class: CardGameZombieMirrorQueenPoisonAppleProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombieMirrorQueenPoisonAppleProjectile::StaticClassInit() */

void CardGameZombieMirrorQueenPoisonAppleProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardGameZombieMirrorQueenPoisonAppleProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04f07470,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameZombieMirrorQueenPoisonAppleProjectile::StaticGetClass() */

long * CardGameZombieMirrorQueenPoisonAppleProjectile::StaticGetClass(void)

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
  uVar2 = ZombieMirrorQueenPoisonAppleProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameZombieMirrorQueenPoisonAppleProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameZombieMirrorQueenPoisonAppleProjectile::GetClass() const */

long * CardGameZombieMirrorQueenPoisonAppleProjectile::GetClass(void)

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
  uVar2 = ZombieMirrorQueenPoisonAppleProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameZombieMirrorQueenPoisonAppleProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameZombieMirrorQueenPoisonAppleProjectile::CardGameZombieMirrorQueenPoisonAppleProjectile()
    */

void __thiscall
CardGameZombieMirrorQueenPoisonAppleProjectile::CardGameZombieMirrorQueenPoisonAppleProjectile
          (CardGameZombieMirrorQueenPoisonAppleProjectile *this)

{
  ZombieMirrorQueenPoisonAppleProjectile::ZombieMirrorQueenPoisonAppleProjectile
            ((ZombieMirrorQueenPoisonAppleProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_06a0e300;
  *(undefined ***)(this + 0x10) = &PTR__CardGameZombieMirrorQueenPoisonAppleProjectile_06a0e4f8;
  return;
}


/* CardGameZombieMirrorQueenPoisonAppleProjectile::StaticNew() */

CardGameZombieMirrorQueenPoisonAppleProjectile *
CardGameZombieMirrorQueenPoisonAppleProjectile::StaticNew(void)

{
  CardGameZombieMirrorQueenPoisonAppleProjectile *this;
  
  this = ::operator_new(0x1b0);
  CardGameZombieMirrorQueenPoisonAppleProjectile(this);
  return this;
}


/* CardGameZombieMirrorQueenPoisonAppleProjectile::~CardGameZombieMirrorQueenPoisonAppleProjectile()
    */

void __thiscall
CardGameZombieMirrorQueenPoisonAppleProjectile::~CardGameZombieMirrorQueenPoisonAppleProjectile
          (CardGameZombieMirrorQueenPoisonAppleProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0e300;
  *(undefined ***)(this + 0x10) = &PTR__CardGameZombieMirrorQueenPoisonAppleProjectile_06a0e4f8;
  ZombieMirrorQueenPoisonAppleProjectile::~ZombieMirrorQueenPoisonAppleProjectile
            ((ZombieMirrorQueenPoisonAppleProjectile *)this);
  return;
}


/* non-virtual thunk to
   CardGameZombieMirrorQueenPoisonAppleProjectile::~CardGameZombieMirrorQueenPoisonAppleProjectile()
    */

void __thiscall
CardGameZombieMirrorQueenPoisonAppleProjectile::~CardGameZombieMirrorQueenPoisonAppleProjectile
          (CardGameZombieMirrorQueenPoisonAppleProjectile *this)

{
  ~CardGameZombieMirrorQueenPoisonAppleProjectile(this + -0x10);
  return;
}


/* CardGameZombieMirrorQueenPoisonAppleProjectile::~CardGameZombieMirrorQueenPoisonAppleProjectile()
    */

void __thiscall
CardGameZombieMirrorQueenPoisonAppleProjectile::~CardGameZombieMirrorQueenPoisonAppleProjectile
          (CardGameZombieMirrorQueenPoisonAppleProjectile *this)

{
  ~CardGameZombieMirrorQueenPoisonAppleProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   CardGameZombieMirrorQueenPoisonAppleProjectile::~CardGameZombieMirrorQueenPoisonAppleProjectile()
    */

void __thiscall
CardGameZombieMirrorQueenPoisonAppleProjectile::~CardGameZombieMirrorQueenPoisonAppleProjectile
          (CardGameZombieMirrorQueenPoisonAppleProjectile *this)

{
  ~CardGameZombieMirrorQueenPoisonAppleProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombieMirrorQueenPoisonAppleProjectile::OnCollideEntity(BoardEntity*) */

void CardGameZombieMirrorQueenPoisonAppleProjectile::OnCollideEntity(BoardEntity *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x1a8),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombieMirrorQueenPoisonAppleProjectile::OnCollideGround() */

void __thiscall
CardGameZombieMirrorQueenPoisonAppleProjectile::OnCollideGround
          (CardGameZombieMirrorQueenPoisonAppleProjectile *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  RtObject *pRVar2;
  Plant *pPVar3;
  ResourceInfo *pRVar4;
  Zombie *pZVar5;
  GridItem *pGVar6;
  code *pcVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x1a8);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pRVar2 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pPVar3 = Sexy::RtObject::Cast<Plant>(pRVar2);
    if (pPVar3 == (Plant *)0x0) {
      pRVar2 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pZVar5 = Sexy::RtObject::Cast<Zombie>(pRVar2);
      if (pZVar5 == (Zombie *)0x0) {
        pRVar2 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        pGVar6 = Sexy::RtObject::Cast<GridItem>(pRVar2);
        if (pGVar6 == (GridItem *)0x0) goto LAB_04f0a72c;
      }
    }
    pcVar7 = *(code **)(*(long *)this + 0x1e0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    (*pcVar7)(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    pcVar7 = *(code **)(*(long *)this + 0x168);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    (*pcVar7)(this,pRVar4);
  }
LAB_04f0a72c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombieMirrorQueenPoisonAppleProjectile::createApplePuree(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
CardGameZombieMirrorQueenPoisonAppleProjectile::createApplePuree
          (CardGameZombieMirrorQueenPoisonAppleProjectile *this,RtWeakPtr *param_2)

{
  bool bVar1;
  char cVar2;
  RtObject *pRVar3;
  ZombieMirrorQueenPoisonAppleProjectileProps *pZVar4;
  GameObjectDictionary *pGVar5;
  CthulhuSubSystem *pCVar6;
  Zombie *this_00;
  Plant *this_01;
  GridItem *this_02;
  GridItemZombieMirrorQueenPoisonApplePuree *pGVar7;
  Board *pBVar8;
  code *pcVar9;
  int local_28;
  int local_24;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (Plant *)0x0;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    pRVar3 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    this_01 = Sexy::RtObject::Cast<Plant>(pRVar3);
  }
  this_00 = (Zombie *)0x0;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    pRVar3 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    this_00 = Sexy::RtObject::Cast<Zombie>(pRVar3);
  }
  this_02 = (GridItem *)0x0;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    pRVar3 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    this_02 = Sexy::RtObject::Cast<GridItem>(pRVar3);
  }
  pRVar3 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pZVar4 = Sexy::RtObject::Cast<ZombieMirrorQueenPoisonAppleProjectileProps>(pRVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  BoardEntity::CalcGridPosition();
  if (this_01 == (Plant *)0x0) {
    if (this_00 == (Zombie *)0x0) {
      if (this_02 != (GridItem *)0x0) {
        pGVar5 = (GameObjectDictionary *)GridItem::GetAttachedBoardEntityManager(this_02);
        std::string::string(asStack_18,"card_game_poison_apple_puree");
        pCVar6 = (CthulhuSubSystem *)GameObjectDictionary::FindOrCreate(pGVar5,asStack_18);
        std::string::~string(asStack_18);
        nop();
        cVar2 = CthulhuSubSystem::Update(pCVar6);
        if (cVar2 == '\0') {
          pBVar8 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string(asStack_18,"card_game_poison_apple_puree");
          Board::AddGridItem(pBVar8,asStack_18,local_28,local_24,1);
          std::string::~string(asStack_18);
          nop();
          ToolPacketData::GetProps();
          BasePowerup::SetPowerupType((BasePowerup *)pCVar6,asStack_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
          pcVar9 = *(code **)(*(long *)pCVar6 + 0x18);
          EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,0.0,0.0);
          (*pcVar9)(pCVar6,this_02,asStack_18,1);
        }
        pGVar7 = (GridItemZombieMirrorQueenPoisonApplePuree *)0x0;
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(pCVar6 + 0x10));
        if (bVar1) {
          pRVar3 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(pCVar6 + 0x10));
          pGVar7 = Sexy::RtObject::Cast<GridItemZombieMirrorQueenPoisonApplePuree>(pRVar3);
        }
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_18,(RtWeakPtrBase *)aRStack_20);
                    /* WARNING: Load size is inaccurate */
        GridItemZombieMirrorQueenPoisonApplePuree::setValuesGridItem
                  (*(GridItemZombieMirrorQueenPoisonApplePuree **)(pZVar4 + 0x1e4),
                   *(undefined4 *)(pZVar4 + 0x1e0),pGVar7,asStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      }
    }
    else {
      pGVar5 = (GameObjectDictionary *)Zombie::GetAttachedBoardEntityManager(this_00);
      std::string::string(asStack_18,"card_game_poison_apple_puree");
      pCVar6 = (CthulhuSubSystem *)GameObjectDictionary::FindOrCreate(pGVar5,asStack_18);
      std::string::~string(asStack_18);
      nop();
      cVar2 = CthulhuSubSystem::Update(pCVar6);
      if (cVar2 == '\0') {
        pBVar8 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string(asStack_18,"card_game_poison_apple_puree");
        Board::AddGridItem(pBVar8,asStack_18,local_28,local_24,1);
        std::string::~string(asStack_18);
        nop();
        ToolPacketData::GetProps();
        BasePowerup::SetPowerupType((BasePowerup *)pCVar6,asStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18)
        ;
        pcVar9 = *(code **)(*(long *)pCVar6 + 0x18);
        EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,0.0,0.0);
        (*pcVar9)(pCVar6,this_00,asStack_18,1);
      }
      pGVar7 = (GridItemZombieMirrorQueenPoisonApplePuree *)0x0;
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(pCVar6 + 0x10));
      if (bVar1) {
        pRVar3 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(pCVar6 + 0x10));
        pGVar7 = Sexy::RtObject::Cast<GridItemZombieMirrorQueenPoisonApplePuree>(pRVar3);
      }
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_18,(RtWeakPtrBase *)aRStack_20);
                    /* WARNING: Load size is inaccurate */
      GridItemZombieMirrorQueenPoisonApplePuree::setValuesZombie
                (*(GridItemZombieMirrorQueenPoisonApplePuree **)(pZVar4 + 0x1e4),
                 *(undefined4 *)(pZVar4 + 0x1e0),pGVar7,asStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    }
    goto LAB_04f0a93c;
  }
  pGVar5 = (GameObjectDictionary *)Plant::GetAttachedBoardEntityManager(this_01);
  std::string::string(asStack_18,"card_game_poison_apple_puree");
  pCVar6 = (CthulhuSubSystem *)GameObjectDictionary::FindOrCreate(pGVar5,asStack_18);
  std::string::~string(asStack_18);
  nop();
  cVar2 = CthulhuSubSystem::Update(pCVar6);
  if (cVar2 == '\0') {
    pBVar8 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_18,"card_game_poison_apple_puree");
    Board::AddGridItem(pBVar8,asStack_18,local_28,local_24,1);
    std::string::~string(asStack_18);
    nop();
    ToolPacketData::GetProps();
    BasePowerup::SetPowerupType((BasePowerup *)pCVar6,asStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    pcVar9 = *(code **)(*(long *)pCVar6 + 0x18);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,0.0,0.0);
    (*pcVar9)(pCVar6,this_01,asStack_18,1);
    pGVar7 = (GridItemZombieMirrorQueenPoisonApplePuree *)0x0;
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(pCVar6 + 0x10));
    if (bVar1) goto LAB_04f0a968;
  }
  else {
    pGVar7 = (GridItemZombieMirrorQueenPoisonApplePuree *)0x0;
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(pCVar6 + 0x10));
    if (bVar1) {
LAB_04f0a968:
      pRVar3 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(pCVar6 + 0x10));
      pGVar7 = Sexy::RtObject::Cast<GridItemZombieMirrorQueenPoisonApplePuree>(pRVar3);
    }
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_18,(RtWeakPtrBase *)aRStack_20);
                    /* WARNING: Load size is inaccurate */
  GridItemZombieMirrorQueenPoisonApplePuree::setValues
            (*(GridItemZombieMirrorQueenPoisonApplePuree **)(pZVar4 + 0x1e4),
             *(undefined4 *)(pZVar4 + 0x1e0),pGVar7,asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
LAB_04f0a93c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

