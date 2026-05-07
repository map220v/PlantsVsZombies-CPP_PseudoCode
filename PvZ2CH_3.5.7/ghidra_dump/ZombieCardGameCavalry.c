// Class: ZombieCardGameCavalry


/* ZombieCardGameCavalry::onExitState_Running(ZombieState) */

void ZombieCardGameCavalry::onExitState_Running(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_FairyTaleImp::SetRunning((ZombieAnimRig_FairyTaleImp *)this,false);
  Zombie::SetIsUsingAnimTranslation(param_1,false);
  return;
}


/* ZombieCardGameCavalry::onEnterState_Running(ZombieState) */

void ZombieCardGameCavalry::onEnterState_Running(long param_1)

{
  ZombieCavalry::onEnterState_Running();
  *(undefined1 *)(param_1 + 0x80e) = 0;
  *(undefined1 *)(param_1 + 0x80f) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCardGameCavalry::onPlaceOnBoard() */

void __thiscall ZombieCardGameCavalry::onPlaceOnBoard(ZombieCardGameCavalry *this)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_18 = *puVar1;
  local_10 = *(undefined4 *)(puVar1 + 1);
  ZombieCavalry::onPlaceOnBoard((ZombieCavalry *)this);
  (**(code **)(*(long *)this + 0x78))(this,&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCardGameCavalry::~ZombieCardGameCavalry() */

void __thiscall ZombieCardGameCavalry::~ZombieCardGameCavalry(ZombieCardGameCavalry *this)

{
  *(undefined ***)this = &PTR_GetClass_06a197d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCardGameCavalry_06a1a250;
  ZombieCavalry::~ZombieCavalry((ZombieCavalry *)this);
  return;
}


/* non-virtual thunk to ZombieCardGameCavalry::~ZombieCardGameCavalry() */

void __thiscall ZombieCardGameCavalry::~ZombieCardGameCavalry(ZombieCardGameCavalry *this)

{
  ~ZombieCardGameCavalry(this + -0x10);
  return;
}


/* ZombieCardGameCavalry::~ZombieCardGameCavalry() */

void __thiscall ZombieCardGameCavalry::~ZombieCardGameCavalry(ZombieCardGameCavalry *this)

{
  ~ZombieCardGameCavalry(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieCardGameCavalry::~ZombieCardGameCavalry() */

void __thiscall ZombieCardGameCavalry::~ZombieCardGameCavalry(ZombieCardGameCavalry *this)

{
  ~ZombieCardGameCavalry(this + -0x10);
  return;
}


/* ZombieCardGameCavalry::ZombieCardGameCavalry() */

void __thiscall ZombieCardGameCavalry::ZombieCardGameCavalry(ZombieCardGameCavalry *this)

{
  ZombieCavalry::ZombieCavalry((ZombieCavalry *)this);
  *(undefined ***)this = &PTR_GetClass_06a197d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCardGameCavalry_06a1a250;
  return;
}


/* ZombieCardGameCavalry::StaticNew() */

ZombieCardGameCavalry * ZombieCardGameCavalry::StaticNew(void)

{
  ZombieCardGameCavalry *this;
  
  this = ::operator_new(0x810);
  ZombieCardGameCavalry(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCardGameCavalry::StaticClassInit() */

void ZombieCardGameCavalry::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieCardGameCavalry");
    (*pcVar2)(plVar1,asStack_10,FUN_04f44a88,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCardGameCavalry::StaticGetClass() */

long * ZombieCardGameCavalry::StaticGetClass(void)

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
  uVar2 = ZombieCavalry::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCardGameCavalry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCardGameCavalry::GetClass() const */

long * ZombieCardGameCavalry::GetClass(void)

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
  uVar2 = ZombieCavalry::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCardGameCavalry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCardGameCavalry::updateState_Running() */

void __thiscall ZombieCardGameCavalry::updateState_Running(ZombieCardGameCavalry *this)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  ZombieCardGameCavalry ZVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  Plant *this_00;
  Zombie *this_01;
  GridItem *this_02;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar12 = 0;
  ZombieCavalry::calcBuckRect();
  uVar5 = SharkMinion::getRow((SharkMinion *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar8 = operator|(1,2);
  uVar6 = operator|(uVar8,4);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar6,
             auStack_30,uVar5,uVar5);
  uVar8 = local_20;
  lVar9 = FUN_04f44818(local_20,local_18);
  if (lVar9 != 0) {
    do {
      puVar10 = (undefined8 *)FUN_04f44824(uVar8,uVar12);
      this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar10);
      puVar10 = (undefined8 *)FUN_04f44824(local_20,uVar12);
      this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar10);
      puVar10 = (undefined8 *)FUN_04f44824(local_20,uVar12);
      this_02 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar10);
      if ((((this_00 != (Plant *)0x0) &&
           (iVar7 = (**(code **)(*(long *)this_00 + 0x180))(this_00), 1 < iVar7)) &&
          (cVar3 = RealObject::IsOnOpposingTeam((RealObject *)this_00,(RealObject *)this),
          cVar3 != '\0')) && (cVar3 = Plant::CanBeTargeted(this_00), cVar3 != '\0')) {
        ZVar4 = (ZombieCardGameCavalry)Plant::CanBeTargetedBy((BoardEntity *)this_00);
        if (ZVar4 != (ZombieCardGameCavalry)0x0) {
          this[0x800] = (ZombieCardGameCavalry)0x1;
          if (this[0x80e] == (ZombieCardGameCavalry)0x0) goto LAB_04f44ddc;
          this[0x80e] = (ZombieCardGameCavalry)0x1;
          goto LAB_04f44de8;
        }
      }
      if ((this_01 != (Zombie *)0x0) &&
         (cVar3 = RealObject::IsOnOpposingTeam((RealObject *)this_01,(RealObject *)this),
         cVar3 != '\0')) {
        cVar3 = (**(code **)(*(long *)this_01 + 0x328))(this_01);
        if (cVar3 != '\0') goto LAB_04f44d90;
        bVar1 = true;
        bVar2 = false;
LAB_04f44e50:
        ZVar4 = this[0x800];
        this[0x800] = ZVar4;
        if (bVar1) goto LAB_04f44e5c;
        goto LAB_04f44dd0;
      }
LAB_04f44d90:
      if (((this_02 != (GridItem *)0x0) &&
          (cVar3 = RealObject::IsOnOpposingTeam((RealObject *)this_02,(RealObject *)this),
          cVar3 != '\0')) &&
         ((cVar3 = (**(code **)(*(long *)this_02 + 0x218))(this_02,this), cVar3 != '\0' &&
          (cVar3 = (**(code **)(*(long *)this_02 + 0x1f8))(this_02), cVar3 != '\0')))) {
        bVar2 = true;
        bVar1 = false;
        goto LAB_04f44e50;
      }
      uVar8 = local_20;
      uVar12 = uVar12 + 1;
      uVar11 = FUN_04f44818(local_20,local_18);
    } while (uVar12 < uVar11);
  }
  ZVar4 = this[0x800];
  bVar2 = false;
  this[0x800] = ZVar4;
LAB_04f44dd0:
  if (this[0x80e] == (ZombieCardGameCavalry)0x0) {
    if (bVar2) {
LAB_04f44e68:
      this[0x80f] = (ZombieCardGameCavalry)0x1;
    }
    else {
LAB_04f44ddc:
      if ((ZVar4 == (ZombieCardGameCavalry)0x0) && (this[0x80f] == (ZombieCardGameCavalry)0x0))
      goto LAB_04f44df8;
    }
  }
  else {
LAB_04f44e5c:
    this[0x80e] = (ZombieCardGameCavalry)0x1;
    if (bVar2) goto LAB_04f44e68;
  }
LAB_04f44de8:
  Zombie::setZombieState((Zombie *)this,0x22,0);
LAB_04f44df8:
  this[0x801] = (ZombieCardGameCavalry)0x0;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCardGameCavalry::launchImp() */

void ZombieCardGameCavalry::launchImp(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  Zombie *in_x0;
  ZombieHydraHeadAnimRig *this;
  string *psVar4;
  ZombieType *this_00;
  SexyVector3 *extraout_x0;
  SexyVector3 *this_01;
  long *plVar5;
  code *pcVar6;
  undefined4 in_s1;
  undefined4 in_s2;
  float fVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(in_x0);
  ZombieAnimRig_Cavalry::HideRider((ZombieAnimRig_Cavalry *)this);
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  Zombie::GetProps<ZombieCavalryProps>(in_x0);
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
  this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_30);
  local_30[0] = *(undefined4 *)(in_x0 + 0x50);
  plVar5 = *(long **)(gLawnApp + 0x9f0);
  pcVar6 = *(code **)(*plVar5 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
  (*pcVar6)(plVar5,(RtWeakPtr<Sexy::SoundResource> *)&local_40,0xffffffff,
            (SpawnZombieParams *)local_30);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  uVar1 = Zombie::GetFacing(in_x0);
  Zombie::SetFacing((Zombie *)extraout_x0,uVar1);
  uVar1 = FUN_04f447f0(*(undefined4 *)(in_x0 + 0x24));
  RealObject::JoinTeam((RealObject *)extraout_x0,uVar1);
  if (((DAT_06ba5ec8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba5ec8), iVar2 != 0)) {
    fVar8 = (float)Zombie::GetFacingMultiplier(in_x0);
    in_s1 = 0;
    in_s2 = 0x42480000;
    EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06ba5eb0,fVar8 * -60.0,0.0,50.0);
    __cxa_guard_release(&DAT_06ba5ec8);
  }
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)in_x0);
  uVar1 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)&DAT_06ba5eb0);
  local_40 = CONCAT44(in_s1,uVar1);
  local_38 = in_s2;
  BoardEntity::PlaceOnBoard(extraout_x0);
  fVar8 = *(float *)this_01;
  local_40 = *(undefined8 *)this_01;
  local_38 = *(undefined4 *)(this_01 + 8);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar3 = Zombie::GetFacing(in_x0);
  if (iVar3 == 0) {
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar7 = (float)iVar2 * 3.0;
    if (fVar8 - 200.0 < (float)iVar3 * 3.0) {
      fVar7 = fVar8 - 200.0;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    fVar8 = fVar8 - fVar7;
  }
  else {
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar7 = (float)iVar2 * 3.0;
    if (800.0 - fVar8 < (float)iVar3 * 3.0) {
      fVar7 = 800.0 - fVar8;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    fVar8 = fVar7 + fVar8;
  }
  local_40 = CONCAT44(local_40._4_4_,fVar8);
  ZombieCavalryRider::SetFlyingDestinationWithTravelTime
            (fVar8,local_40._4_4_,local_38,0x3f400000,0x437a0000,extraout_x0,0);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCardGameCavalry::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombieCardGameCavalry::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  Plant *this;
  Zombie *this_00;
  GridItem *this_01;
  long extraout_x0;
  ZombieCavalryProps *pZVar9;
  RtObject *pRVar10;
  CavalryGunAnimRig *pCVar11;
  long extraout_x0_00;
  ulong uVar12;
  long extraout_x0_01;
  ulong uVar13;
  Board *pBVar14;
  code *pcVar15;
  float fVar16;
  DamageInfo *pDVar17;
  int local_a0 [2];
  undefined4 local_98;
  int local_94;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"launch_action");
  if (bVar1) {
    uVar13 = 0;
    ZombieCavalry::calcGunRect();
    uVar3 = SharkMinion::getRow((SharkMinion *)param_1);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    uVar6 = operator|(1,2);
    uVar4 = operator|(uVar6,4);
    EntityFinder::GetEntitiesTouchingRectangle
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar4,
               auStack_90,uVar3,uVar3);
    uVar6 = local_80;
    lVar7 = FUN_04f44818(local_80,local_78);
    if (lVar7 != 0) {
      do {
        puVar8 = (undefined8 *)FUN_04f44824(uVar6,uVar13);
        this = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar8);
        puVar8 = (undefined8 *)FUN_04f44824(local_80,uVar13);
        this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar8);
        puVar8 = (undefined8 *)FUN_04f44824(local_80,uVar13);
        this_01 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar8);
        if (((this != (Plant *)0x0) &&
            (iVar5 = (**(code **)(*(long *)this + 0x180))(this), 1 < iVar5)) &&
           (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)param_1),
           cVar2 != '\0')) {
          pBVar14 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string(asStack_68,"cavalrygun");
          BoardEntity::CalcGridPosition();
          BoardEntity::CalcGridPosition();
          Board::AddGridItem(pBVar14,asStack_68,local_a0[0],local_94,1);
          nop();
          std::string::~string(asStack_68);
          nop();
          if (extraout_x0_01 != 0) {
            pZVar9 = Zombie::GetProps<ZombieCavalryProps>((Zombie *)param_1);
            FUN_04f447fc(*(undefined4 *)(pZVar9 + 0x24c),extraout_x0_01 + 300);
            pZVar9 = Zombie::GetProps<ZombieCavalryProps>((Zombie *)param_1);
            FUN_04f44804(*(undefined4 *)(pZVar9 + 0x24c),extraout_x0_01 + 0x128);
            GridItemAnimation::GetAnimRig();
            pRVar10 = (RtObject *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
            pCVar11 = Sexy::RtObject::Cast<CavalryGunAnimRig>(pRVar10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
            if (pCVar11 != (CavalryGunAnimRig *)0x0) {
              fVar16 = (float)Zombie::GetFacingMultiplier((Zombie *)param_1);
              PopAnimRig::SetMirrorX((PopAnimRig *)pCVar11,fVar16 <= 0.0);
              CavalryGunAnimRig::PlayFlip(pCVar11);
            }
            uVar3 = FUN_04f447f0(*(undefined4 *)(param_1 + 0x24));
            FUN_04f447f4(extraout_x0_01 + 0x24,uVar3);
          }
          Plant::SetIsThrownAway(this,true);
          pcVar15 = *(code **)(*(long *)this + 0x120);
          Sexy::Point::Point((Point *)local_a0,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)0x0,local_98,local_94,asStack_68,param_1,(Point *)local_a0,0);
          (*pcVar15)(this,asStack_68);
          DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
          std::string::string(asStack_68,"Play_Zomb_DarkAges_Knight_Rush_Hit");
          RealObject::PlayPositionalSound((RealObject *)param_1,asStack_68,0.0);
          std::string::~string(asStack_68);
          nop();
          break;
        }
        if ((this_00 != (Zombie *)0x0) &&
           (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this_00,(RealObject *)param_1),
           cVar2 != '\0')) {
          pBVar14 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string(asStack_68,"cavalrygun");
          BoardEntity::CalcGridPosition();
          iVar5 = local_a0[0];
          BoardEntity::CalcGridPosition();
          Board::AddGridItem(pBVar14,asStack_68,iVar5,local_94,1);
          nop();
          std::string::~string(asStack_68);
          nop();
          if (extraout_x0 != 0) {
            pZVar9 = Zombie::GetProps<ZombieCavalryProps>((Zombie *)param_1);
            FUN_04f447fc(*(undefined4 *)(pZVar9 + 0x24c),extraout_x0 + 300);
            pZVar9 = Zombie::GetProps<ZombieCavalryProps>((Zombie *)param_1);
            FUN_04f44804(*(undefined4 *)(pZVar9 + 0x24c),extraout_x0 + 0x128);
            GridItemAnimation::GetAnimRig();
            pRVar10 = (RtObject *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
            pCVar11 = Sexy::RtObject::Cast<CavalryGunAnimRig>(pRVar10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
            if (pCVar11 != (CavalryGunAnimRig *)0x0) {
              fVar16 = (float)Zombie::GetFacingMultiplier((Zombie *)param_1);
              PopAnimRig::SetMirrorX((PopAnimRig *)pCVar11,fVar16 <= 0.0);
              CavalryGunAnimRig::PlayFlip(pCVar11);
            }
            uVar3 = FUN_04f447f0(*(undefined4 *)(param_1 + 0x24));
            FUN_04f447f4(extraout_x0 + 0x24,uVar3);
          }
          pZVar9 = Zombie::GetProps<ZombieCavalryProps>((Zombie *)param_1);
          if (pZVar9 == (ZombieCavalryProps *)0x0) {
            pcVar15 = *(code **)(*(long *)this_00 + 0x120);
            Sexy::Point::Point((Point *)local_a0,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)0x0,local_98,local_94,asStack_68,param_1,(Point *)local_a0,0);
            (*pcVar15)(this_00,asStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
          }
          else {
                    /* WARNING: Load size is inaccurate */
            pDVar17._0_4_ = *(DamageInfo **)(pZVar9 + 0x48);
            pcVar15 = *(code **)(*(long *)this_00 + 0x110);
            Sexy::Point::Point((Point *)local_a0,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
            DamageInfo::DamageInfo
                      (pDVar17._0_4_,local_98,local_94,asStack_68,param_1,(Point *)local_a0,0);
            (*pcVar15)(this_00,asStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
          }
        }
        if ((this_01 != (GridItem *)0x0) &&
           (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this_01,(RealObject *)param_1),
           cVar2 != '\0')) {
          pBVar14 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string(asStack_68,"cavalrygun");
          BoardEntity::CalcGridPosition();
          iVar5 = local_a0[0];
          BoardEntity::CalcGridPosition();
          Board::AddGridItem(pBVar14,asStack_68,iVar5,local_94,1);
          nop();
          std::string::~string(asStack_68);
          nop();
          if (extraout_x0_00 != 0) {
            pZVar9 = Zombie::GetProps<ZombieCavalryProps>((Zombie *)param_1);
            FUN_04f447fc(*(undefined4 *)(pZVar9 + 0x24c),extraout_x0_00 + 300);
            pZVar9 = Zombie::GetProps<ZombieCavalryProps>((Zombie *)param_1);
            FUN_04f44804(*(undefined4 *)(pZVar9 + 0x24c),extraout_x0_00 + 0x128);
            GridItemAnimation::GetAnimRig();
            pRVar10 = (RtObject *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
            pCVar11 = Sexy::RtObject::Cast<CavalryGunAnimRig>(pRVar10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
            if (pCVar11 != (CavalryGunAnimRig *)0x0) {
              fVar16 = (float)Zombie::GetFacingMultiplier((Zombie *)param_1);
              PopAnimRig::SetMirrorX((PopAnimRig *)pCVar11,fVar16 <= 0.0);
              CavalryGunAnimRig::PlayFlip(pCVar11);
            }
            uVar3 = FUN_04f447f0(*(undefined4 *)(param_1 + 0x24));
            FUN_04f447f4(extraout_x0_00 + 0x24,uVar3);
          }
          pZVar9 = Zombie::GetProps<ZombieCavalryProps>((Zombie *)param_1);
          if (pZVar9 == (ZombieCavalryProps *)0x0) {
            pcVar15 = *(code **)(*(long *)this_01 + 0x120);
            Sexy::Point::Point((Point *)local_a0,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)0x0,local_98,local_94,asStack_68,param_1,(Point *)local_a0,0);
            (*pcVar15)(this_01,asStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
          }
          else {
            cVar2 = (**(code **)(*(long *)this_01 + 0x1f8))(this_01);
            if (cVar2 != '\0') {
                    /* WARNING: Load size is inaccurate */
              pDVar17._0_4_ = *(DamageInfo **)(pZVar9 + 0x48);
              pcVar15 = *(code **)(*(long *)this_01 + 0x110);
              Sexy::Point::Point((Point *)local_a0,-1,-1);
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
              DamageInfo::DamageInfo
                        (pDVar17._0_4_,local_98,local_94,asStack_68,param_1,(Point *)local_a0,0);
              (*pcVar15)(this_01,asStack_68);
              DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
            }
          }
        }
        uVar6 = local_80;
        uVar13 = uVar13 + 1;
        uVar12 = FUN_04f44818(local_80,local_78);
      } while (uVar13 < uVar12);
    }
    param_1[0x80c] = (string)0x0;
    pZVar9 = Zombie::GetProps<ZombieCavalryProps>((Zombie *)param_1);
    FUN_04f4480c(*(undefined4 *)(pZVar9 + 0x250),param_1 + 0x284);
    pZVar9 = Zombie::GetProps<ZombieCavalryProps>((Zombie *)param_1);
    Zombie::SetHitpoints((Zombie *)param_1,*(float *)(pZVar9 + 0x250));
    (**(code **)(*(long *)param_1 + 0xa68))(param_1);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  }
  Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

