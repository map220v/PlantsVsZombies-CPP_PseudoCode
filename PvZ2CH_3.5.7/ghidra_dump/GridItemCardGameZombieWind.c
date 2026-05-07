// Class: GridItemCardGameZombieWind


/* GridItemCardGameZombieWind::onAttackAnimDone(std::string const&) */

void GridItemCardGameZombieWind::onAttackAnimDone(string *param_1)

{
  if (param_1[0x209] == (string)0x0) {
    GridItemCardGameZombie::onAttackAnimDone(param_1);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x300))();
  param_1[0x209] = (string)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieWind::StaticClassInit() */

void GridItemCardGameZombieWind::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCardGameZombieWind");
    (*pcVar2)(plVar1,asStack_10,FUN_04e18b78,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieWind::StaticGetClass() */

long * GridItemCardGameZombieWind::StaticGetClass(void)

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
  uVar2 = GridItemCardGameZombie::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCardGameZombieWind",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieWind::GetClass() const */

long * GridItemCardGameZombieWind::GetClass(void)

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
  uVar2 = GridItemCardGameZombie::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCardGameZombieWind",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieWind::SummonTent(std::string, Sexy::Point) */

void __thiscall
GridItemCardGameZombieWind::SummonTent
          (GridItemCardGameZombieWind *this,string *param_2,int *param_3)

{
  RtObject *this_00;
  GridItemZombieTent *this_01;
  
  this_00 = (RtObject *)
            Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),param_2,*param_3,param_3[1],1);
  if (this_00 != (RtObject *)0x0) {
    this_01 = Sexy::RtObject::Cast<GridItemZombieTent>(this_00);
    GridItemFestivalZombieTent::SetTentLevel
              ((GridItemFestivalZombieTent *)this_01,*(int *)(this + 0x50));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieWind::GenerateNinjaTent() */

void __thiscall GridItemCardGameZombieWind::GenerateNinjaTent(GridItemCardGameZombieWind *this)

{
  TPoint *pTVar1;
  ulong uVar2;
  ulong uVar3;
  string asStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 0;
  while( true ) {
    uVar2 = FUN_04e184f8(*(undefined8 *)(this + 0x210),*(undefined8 *)(this + 0x218));
    if (uVar2 <= uVar3) break;
    std::string::string(asStack_18,"card_game_ninja_tent");
    pTVar1 = (TPoint *)FUN_04e18504(*(undefined8 *)(this + 0x210),uVar3);
    Sexy::Point::Point(aPStack_10,pTVar1);
    SummonTent(this,asStack_18,aPStack_10);
    std::string::~string(asStack_18);
    nop();
    uVar3 = uVar3 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieWind::GenerateGargantuarTent() */

void __thiscall GridItemCardGameZombieWind::GenerateGargantuarTent(GridItemCardGameZombieWind *this)

{
  TPoint *pTVar1;
  ulong uVar2;
  ulong uVar3;
  string asStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 0;
  while( true ) {
    uVar2 = FUN_04e184f8(*(undefined8 *)(this + 0x228),*(undefined8 *)(this + 0x230));
    if (uVar2 <= uVar3) break;
    std::string::string(asStack_18,"card_game_gargantuar_tent");
    pTVar1 = (TPoint *)FUN_04e18504(*(undefined8 *)(this + 0x228),uVar3);
    Sexy::Point::Point(aPStack_10,pTVar1);
    SummonTent(this,asStack_18,aPStack_10);
    std::string::~string(asStack_18);
    nop();
    uVar3 = uVar3 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieWind::GenerateCurseCard() */

void __thiscall GridItemCardGameZombieWind::GenerateCurseCard(GridItemCardGameZombieWind *this)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = Sexy::LazySingleton<CardBoardMgr>::GetInstance();
  uVar3 = *(undefined4 *)(this + 0x1c);
  uVar2 = FUN_04e18524(*(undefined4 *)(this + 0x18),uVar3,*(undefined4 *)(this + 0x20));
  CardBoardMgr::CreateCard(uVar2,uVar3,uVar1,0xf62e,1);
  uVar1 = Sexy::LazySingleton<CardBoardMgr>::GetInstance();
  uVar3 = *(undefined4 *)(this + 0x1c);
  uVar2 = FUN_04e18524(*(undefined4 *)(this + 0x18),uVar3,*(undefined4 *)(this + 0x20));
  CardBoardMgr::CreateCard(uVar2,uVar3,uVar1,0xf62e,1);
  uVar1 = Sexy::LazySingleton<CardBoardMgr>::GetInstance();
  uVar3 = *(undefined4 *)(this + 0x1c);
  uVar2 = FUN_04e18524(*(undefined4 *)(this + 0x18),uVar3,*(undefined4 *)(this + 0x20));
  CardBoardMgr::CreateCard(uVar2,uVar3,uVar1,0xf62e,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieWind::GenerateWind() */

void GridItemCardGameZombieWind::GenerateWind(void)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  GridItemCardGameZombieWindProps *pGVar5;
  HeianWindSubsystem *pHVar6;
  undefined8 uVar7;
  long *plVar8;
  Zombie *pZVar9;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  long lVar10;
  ZombieBlowerSubSystem *pZVar11;
  ResourceInfo *pRVar12;
  int extraout_w1;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  RtId aRStack_90 [8];
  undefined4 local_88;
  float fStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  Iterator aIStack_70 [32];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"GridItemCardGameZombieWind::GenerateWind");
  pGVar5 = GridItem::GetProps<GridItemCardGameZombieWindProps>();
  iVar1 = *(int *)(pGVar5 + 0x168);
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  HeianWindRecord::HeianWindRecord((HeianWindRecord *)&local_88);
  fStack_84 = -((float)iVar4 * (float)iVar1);
  local_80 = 0xffffffff;
  local_7c = 0x3fc00000;
  local_88 = 999;
  pHVar6 = Board::GetGameSubSystem<HeianWindSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  local_c0 = CONCAT44(fStack_84,local_88);
  uStack_b8 = CONCAT44(local_7c,local_80);
  local_b0 = local_78;
  HeianWindSubsystem::Generate(pHVar6,&local_c0);
  uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_70,uVar7,0x29);
  while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_70), bVar2) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_70);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_98,(RtWeakPtrBase *)aRStack_90);
    Sexy::RtId::~RtId(aRStack_90);
    plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
    cVar3 = (**(code **)(*plVar8 + 0x328))();
    if (cVar3 == '\0') {
      plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
      cVar3 = (**(code **)(*plVar8 + 1000))();
      if (cVar3 != '\0') {
        pZVar9 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
        cVar3 = Zombie::IsOnGround(pZVar9);
        if (cVar3 == '\0') {
          pZVar9 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
          this = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar9);
          lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
          FUN_05475d88(aRStack_90,lVar10 + 8);
          bVar2 = std::operator==((string *)aRStack_90,"wave_airbubble");
          if (bVar2) {
            pZVar11 = Board::GetGameSubSystem<ZombieBlowerSubSystem>(*(Board **)(gLawnApp + 0x9f0));
            pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_98);
            RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
            ZombieBlowerSubSystem::BlowZombie
                      ((ZombieBlowerSubSystem *)0x42c80000,0,pZVar11,0,pRVar12,aRStack_50);
            RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
            ::~RtReflectionDelegate
                      ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                        *)aRStack_50);
          }
          std::string::~string((string *)aRStack_90);
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
    Sexy::RtDbTable::Iterator::operator++(aIStack_70,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieWind::GenerateTornadoInRow(int) */

void __thiscall
GridItemCardGameZombieWind::GenerateTornadoInRow(GridItemCardGameZombieWind *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  Projectile *this_00;
  SexyVector3 *this_01;
  float fVar4;
  float fVar5;
  RtMixedPtrBase aRStack_38 [8];
  Point aPStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string((string *)&local_28,"HeianTornadoDefault");
  Sexy::ToWString((string *)&local_28);
  Sexy::RtName::RtName((RtName *)&local_18,(wstring *)&local_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_38,uVar3,0xc,(RtName *)&local_18);
  Sexy::RtName::~RtName((RtName *)&local_18);
  FUN_05476c50((wstring *)&local_20);
  std::string::~string((string *)&local_28);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
  if (cVar1 != '\0') {
    iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    Sexy::Point::Point(aPStack_30,iVar2,param_1);
    Sexy::Point::Point((Point *)&local_28,0xf,-0x23);
    BoardTransforms::GridToBoardSpace(aPStack_30);
    fVar5 = (float)-local_24;
    uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
    fVar4 = (float)local_1c;
    iVar2 = local_20 + local_28;
    local_20 = iVar2;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_38);
    this_00 = (Projectile *)
              Board::AddProjectile((Board *)(float)iVar2,uVar3,(RtName *)&local_18,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    this_01 = (SexyVector3 *)Projectile::GetVelocity(this_00);
    local_18 = Sexy::SexyVector3::operator*(this_01,-1.0);
    local_14 = fVar4;
    local_10 = fVar5;
    Projectile::SetVelocity(this_00,(SexyVector3 *)&local_18);
    FUN_04e18518(this_00 + 0xd4);
    FUN_04e1850c(this_00 + 0x188);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieWind::TossZombies(int) */

void __thiscall
GridItemCardGameZombieWind::TossZombies(GridItemCardGameZombieWind *this,int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  Zombie *this_00;
  SexyVector3 *pSVar6;
  ZombieTosserSubSystem *pZVar7;
  undefined8 local_88;
  undefined8 local_80;
  float local_78 [4];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  iVar3 = FUN_04e184a8(*(undefined4 *)(this + 0x130));
  iVar4 = FUN_04e184ac(*(undefined4 *)(this + 0x134));
  Sexy::Insets::Insets((Insets *)local_78,iVar3 + -1,iVar4 + -1,3,3);
  EntityFinder::GetEntitiesInGridSquares(avStack_68,2,(Insets *)local_78);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_68);
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_68);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
    if ((((((this_00 != (Zombie *)0x0) &&
           (iVar3 = FUN_04e18478(*(undefined4 *)(this_00 + 0x24)), iVar3 != 2)) &&
          (bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00), !bVar1)) &&
         ((bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00), !bVar1 &&
          (cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 == '\0')))) &&
        ((cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 == '\0' &&
         ((cVar2 = Zombie::HasFogImmune(this_00), cVar2 == '\0' &&
          (cVar2 = Zombie::IsBerserk(this_00), cVar2 == '\0')))))) &&
       (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0')) {
      cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00);
      if (cVar2 == '\0') {
        DVec3::DVec3((DVec3 *)local_78);
        pSVar6 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)this_00);
        Sexy::SexyVector3::operator=((SexyVector3 *)local_78,pSVar6);
        iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
        local_78[0] = local_78[0] - (float)(iVar3 * param_1);
        pZVar7 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
        ZombieTosserSubSystem::LaunchZombie
                  ((ZombieTosserSubSystem *)0x428c0000,0x3f800000,pZVar7,this_00,(Insets *)local_78,
                   aRStack_50,0);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieWind::CheckTentsDestroyed() */

undefined8 __thiscall
GridItemCardGameZombieWind::CheckTentsDestroyed(GridItemCardGameZombieWind *this)

{
  ulong uVar1;
  int *piVar2;
  GridIcelotusDropwater *pGVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  do {
    uVar5 = *(undefined8 *)(this + 0x210);
    uVar1 = FUN_04e184f8(uVar5,*(undefined8 *)(this + 0x218));
    if (uVar1 <= uVar4) {
      uVar4 = 0;
      do {
        uVar5 = *(undefined8 *)(this + 0x228);
        uVar1 = FUN_04e184f8(uVar5,*(undefined8 *)(this + 0x230));
        if (uVar1 <= uVar4) {
          return 1;
        }
        piVar2 = (int *)FUN_04e18504(uVar5,uVar4);
        uVar4 = uVar4 + 1;
        pGVar3 = EntityFinder::GetGridItemAt<GridIcelotusDropwater>(*piVar2,piVar2[1]);
      } while (pGVar3 == (GridIcelotusDropwater *)0x0);
      return 0;
    }
    piVar2 = (int *)FUN_04e18504(uVar5,uVar4);
    uVar4 = uVar4 + 1;
    pGVar3 = EntityFinder::GetGridItemAt<GridIcelotusDropwater>(*piVar2,piVar2[1]);
  } while (pGVar3 == (GridIcelotusDropwater *)0x0);
  return 0;
}


/* GridItemCardGameZombieWind::~GridItemCardGameZombieWind() */

void __thiscall
GridItemCardGameZombieWind::~GridItemCardGameZombieWind(GridItemCardGameZombieWind *this)

{
  *(undefined ***)this = &PTR_GetClass_069d6a90;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCardGameZombieWind_069d6e40;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x228));
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x210));
  GridItemCardGameZombie::~GridItemCardGameZombie((GridItemCardGameZombie *)this);
  return;
}


/* non-virtual thunk to GridItemCardGameZombieWind::~GridItemCardGameZombieWind() */

void __thiscall
GridItemCardGameZombieWind::~GridItemCardGameZombieWind(GridItemCardGameZombieWind *this)

{
  ~GridItemCardGameZombieWind(this + -0x10);
  return;
}


/* GridItemCardGameZombieWind::~GridItemCardGameZombieWind() */

void __thiscall
GridItemCardGameZombieWind::~GridItemCardGameZombieWind(GridItemCardGameZombieWind *this)

{
  ~GridItemCardGameZombieWind(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemCardGameZombieWind::~GridItemCardGameZombieWind() */

void __thiscall
GridItemCardGameZombieWind::~GridItemCardGameZombieWind(GridItemCardGameZombieWind *this)

{
  ~GridItemCardGameZombieWind(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieWind::GridItemCardGameZombieWind() */

void __thiscall
GridItemCardGameZombieWind::GridItemCardGameZombieWind(GridItemCardGameZombieWind *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_00;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_01;
  Point aPStack_10 [8];
  long local_8;
  
  this_00 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x210);
  this_01 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x228);
  local_8 = ___stack_chk_guard;
  GridItemCardGameZombie::GridItemCardGameZombie((GridItemCardGameZombie *)this);
  *(undefined ***)this = &PTR_GetClass_069d6a90;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCardGameZombieWind_069d6e40;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_00);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_01);
  this[0x208] = (GridItemCardGameZombieWind)0x0;
  this[0x209] = (GridItemCardGameZombieWind)0x0;
  Sexy::Point::Point(aPStack_10,10,1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this_00,aPStack_10);
  Sexy::Point::Point(aPStack_10,10,3);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this_00,aPStack_10);
  Sexy::Point::Point(aPStack_10,10,5);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this_00,aPStack_10);
  Sexy::Point::Point(aPStack_10,9,2);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this_01,aPStack_10);
  Sexy::Point::Point(aPStack_10,9,4);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this_01,aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieWind::StaticNew() */

GridItemCardGameZombieWind * GridItemCardGameZombieWind::StaticNew(void)

{
  GridItemCardGameZombieWind *this;
  
  this = ::operator_new(0x240);
  GridItemCardGameZombieWind(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieWind::ThrowNinjaZombies() */

void __thiscall GridItemCardGameZombieWind::ThrowNinjaZombies(GridItemCardGameZombieWind *this)

{
  int iVar1;
  GridItemCardGameZombieWindProps *pGVar2;
  string *psVar3;
  ZombieType *this_00;
  int iVar4;
  Board *pBVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = 0;
  Sexy::OutputDebugStrF((wchar_t *)"GridItemCardGameZombieWind::ThrowNinjaZombies");
  pGVar2 = GridItem::GetProps<GridItemCardGameZombieWindProps>();
  iVar1 = *(int *)(pGVar2 + 0x160);
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_10,"card_game_enemy_heian_ninja");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
  std::string::~string(asStack_10);
  nop();
  this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  if (0 < iVar1) {
    do {
      iVar4 = iVar4 + 1;
      pBVar5 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
      Board::AddZombie(pBVar5,asStack_10,0xfffffffb,*(undefined4 *)(this + 0x50),0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    } while (iVar4 != iVar1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieWind::SummonGargantuarZombies() */

void __thiscall
GridItemCardGameZombieWind::SummonGargantuarZombies(GridItemCardGameZombieWind *this)

{
  string *psVar1;
  ZombieType *this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var5;
  undefined8 *puVar6;
  SexyVector3 *pSVar7;
  Board *pBVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_90 [8];
  float local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined8 local_78 [3];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_60 [24];
  undefined8 local_48 [3];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"GridItemCardGameZombieWind::SummonGargantuarZombies");
  GridItem::GetProps<GridItemCardGameZombieWindProps>();
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string((string *)&local_30,"card_game_enemy_heian_gargantuar");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  std::string::~string((string *)&local_30);
  nop();
  this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)local_78,&DAT_05755cc0,2,(string *)&local_30);
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)avStack_60,&DAT_05755cb0,3,(string *)&local_30);
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)local_48,&DAT_05755ca0,2,(string *)&local_30);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_78);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_78);
  std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (uVar2,uVar3);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(avStack_60);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(avStack_60);
  std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (uVar2,uVar3);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_48);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_48);
  std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (uVar2,uVar3);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
  local_2c = 0;
  local_30 = *(undefined4 *)(this + 0x50);
  local_2b = 0;
  pBVar8 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_88,(RtWeakPtrBase *)aRStack_98);
  puVar4 = (undefined4 *)FUN_04e184dc(local_78[0],0);
  p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Board::AddZombieInRow
                        (pBVar8,(RtWeakPtr<Sexy::SoundResource> *)&local_88,*puVar4,0xfffffffb,
                         (string *)&local_30,1,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
  puVar6 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(p_Var5);
  local_88 = (float)*puVar6;
  local_80 = *(undefined4 *)(puVar6 + 1);
  local_88 = local_88 - 40.0;
  uStack_84 = (undefined4)((ulong)*puVar6 >> 0x20);
  (**(code **)(*(long *)p_Var5 + 0x78))(p_Var5,(RtWeakPtr<Sexy::SoundResource> *)&local_88);
  pBVar8 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,(RtWeakPtrBase *)aRStack_98);
  puVar4 = (undefined4 *)FUN_04e184dc(local_48[0],0);
  p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Board::AddZombieInRow(pBVar8,aRStack_90,*puVar4,0xfffffffb,(string *)&local_30,1,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
  pSVar7 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(p_Var5);
  Sexy::SexyVector3::operator=((SexyVector3 *)&local_88,pSVar7);
  _local_88 = CONCAT44(uStack_84,local_88 - 40.0);
  (**(code **)(*(long *)p_Var5 + 0x78))(p_Var5,(RtWeakPtr<Sexy::SoundResource> *)&local_88);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_48);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_60);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieWind::SummonBothZombies() */

void __thiscall GridItemCardGameZombieWind::SummonBothZombies(GridItemCardGameZombieWind *this)

{
  ThrowNinjaZombies(this);
  SummonGargantuarZombies(this);
  return;
}


/* GridItemCardGameZombieWind::HalfBloodSpecailAction() */

void __thiscall GridItemCardGameZombieWind::HalfBloodSpecailAction(GridItemCardGameZombieWind *this)

{
  this[0x208] = (GridItemCardGameZombieWind)0x1;
  TossZombies(this,5);
  SummonBothZombies(this);
  return;
}


/* GridItemCardGameZombieWind::onUpdate() */

void __thiscall GridItemCardGameZombieWind::onUpdate(GridItemCardGameZombieWind *this)

{
  char cVar1;
  
  GridItemCardGameZombie::onUpdate((GridItemCardGameZombie *)this);
  if ((this[0x208] == (GridItemCardGameZombieWind)0x0) &&
     (cVar1 = GridItemCardGameZombieMechFootball::CheckHalfBlood
                        ((GridItemCardGameZombieMechFootball *)this), cVar1 != '\0')) {
    HalfBloodSpecailAction(this);
    return;
  }
  return;
}


/* GridItemCardGameZombieWind::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void GridItemCardGameZombieWind::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  if (param_1[0x209] == (string)0x0) {
    GridItemCardGameZombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
    return;
  }
  bVar1 = std::operator==(param_4,"use_action");
  if (!bVar1) {
    return;
  }
  TossZombies((GridItemCardGameZombieWind *)param_1,5);
  SummonBothZombies((GridItemCardGameZombieWind *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieWind::GenerateTornado() */

void __thiscall GridItemCardGameZombieWind::GenerateTornado(GridItemCardGameZombieWind *this)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  GridItemCardGameZombieWindProps *pGVar5;
  int *piVar6;
  long lVar7;
  int local_24;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  local_24 = 0;
  while (iVar2 = BoardConstants::NUMBER_OF_ROWS(), local_24 < iVar2) {
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)local_20,&local_24);
    local_24 = local_24 + 1;
  }
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_20);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_20);
  std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (uVar3,uVar4);
  pGVar5 = GridItem::GetProps<GridItemCardGameZombieWindProps>();
  iVar2 = *(int *)(pGVar5 + 0x16c);
  lVar7 = 0;
  if (0 < iVar2) {
    do {
      lVar1 = lVar7 + 1;
      piVar6 = (int *)FUN_04e184dc(local_20[0],lVar7);
      GenerateTornadoInRow(this,*piVar6);
      lVar7 = lVar1;
    } while ((int)lVar1 < iVar2);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieWind::GenerateZombieActions() */

void __thiscall GridItemCardGameZombieWind::GenerateZombieActions(GridItemCardGameZombieWind *this)

{
  ulong uVar1;
  int iVar2;
  GridItemCardGameZombieWindProps *pGVar3;
  GridItemCardGameZombieAction *pGVar4;
  GridItemCardGameZombieActionData *pGVar5;
  Delegate0 *pDVar6;
  ulong uVar7;
  code *pcVar8;
  GridItemCardGameZombieAction *local_78;
  undefined8 local_70;
  undefined8 local_68;
  GridItemCardGameZombieActionData aGStack_58 [32];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"GridItemCardGameZombieWind::GenerateZombieActions");
  std::vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>>::clear
            ((vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>> *)
             (this + 0x1e0));
  pGVar3 = GridItem::GetProps<GridItemCardGameZombieWindProps>();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_70);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GenerateNinjaTent);
  Sexy::Delegate0::Delegate0<GridItemCardGameZombieWind,void(GridItemCardGameZombieWind::*)()>
            (aDStack_38,aGStack_58);
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::push_back
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_70,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GenerateGargantuarTent);
  Sexy::Delegate0::Delegate0<GridItemCardGameZombieWind,void(GridItemCardGameZombieWind::*)()>
            (aDStack_38,aGStack_58);
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::push_back
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_70,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GenerateCurseCard);
  Sexy::Delegate0::Delegate0<GridItemCardGameZombieWind,void(GridItemCardGameZombieWind::*)()>
            (aDStack_38,aGStack_58);
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::push_back
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_70,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GenerateWind);
  Sexy::Delegate0::Delegate0<GridItemCardGameZombieWind,void(GridItemCardGameZombieWind::*)()>
            (aDStack_38,aGStack_58);
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::push_back
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_70,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SummonBothZombies);
  Sexy::Delegate0::Delegate0<GridItemCardGameZombieWind,void(GridItemCardGameZombieWind::*)()>
            (aDStack_38,aGStack_58);
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::push_back
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_70,aDStack_38);
  iVar2 = FUN_04e184b0(local_70,local_68);
  uVar7 = 0;
  if (0 < iVar2) {
    do {
      pGVar4 = ::operator_new(0x70);
      GridItemCardGameZombieAction::GridItemCardGameZombieAction(pGVar4);
      pcVar8 = (code *)**(undefined8 **)pGVar4;
      local_78 = pGVar4;
      pGVar5 = (GridItemCardGameZombieActionData *)
               FUN_04e184d4(*(undefined8 *)(pGVar3 + 0x148),uVar7);
      GridItemCardGameZombieActionData::GridItemCardGameZombieActionData(aGStack_58,pGVar5);
      (*pcVar8)(pGVar4,uVar7 & 0xffffffff,aGStack_58);
      GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData(aGStack_58);
      pGVar4 = local_78;
      uVar1 = uVar7 + 1;
      pDVar6 = (Delegate0 *)FUN_04e184c4(local_70,uVar7);
      Sexy::Delegate0::Delegate0(aDStack_38,pDVar6);
      GridItemCardGameZombieAction::SetCallbackFunc(pGVar4,aDStack_38);
      std::vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>>::
      push_back((vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>>
                 *)(this + 0x1e0),&local_78);
      uVar7 = uVar1;
    } while ((int)uVar1 < iVar2);
  }
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::~vector
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieWind::PickAction() */

void __thiscall GridItemCardGameZombieWind::PickAction(GridItemCardGameZombieWind *this)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  Image *this_00;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  AndroidAsyncIOFile *this_01;
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  uVar9 = 0;
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  uVar10 = *(undefined8 *)(this + 0x1e0);
  lVar5 = FUN_04e184e4(uVar10,*(undefined8 *)(this + 0x1e8));
  if (lVar5 != 0) {
    do {
      puVar6 = (undefined8 *)FUN_04e184f0(uVar10,uVar9);
      this_01 = (AndroidAsyncIOFile *)*puVar6;
      iVar3 = Sexy::AndroidAsyncIOFile::GetSize(this_01);
      Sexy::BaseTaskResource::GetType((BaseTaskResource *)this_01);
      iVar4 = Sexy::BaseResStreamsDriver::IsDecompressionFullyComplete
                        ((BaseResStreamsDriver *)this_01);
      if (uVar9 == 4) {
        if ((iVar4 == 0) && (cVar2 = CheckTentsDestroyed(this), cVar2 != '\0')) goto LAB_04e1a6fc;
      }
      else if (iVar4 == 0) {
LAB_04e1a6fc:
        ProbabilitySet<GridItemCardGameZombieAction*>::AddItem
                  ((ProbabilitySet<GridItemCardGameZombieAction*> *)aPStack_38,
                   (GridItemCardGameZombieAction *)this_01,iVar3);
      }
      uVar9 = uVar9 + 1;
      uVar10 = *(undefined8 *)(this + 0x1e0);
      uVar7 = FUN_04e184e4(uVar10,*(undefined8 *)(this + 0x1e8));
    } while (uVar9 < uVar7);
  }
  uVar10 = ProbabilitySet<GridItemCardGameZombieAction*>::GetSize
                     ((ProbabilitySet<GridItemCardGameZombieAction*> *)aPStack_38);
  Sexy::OutputDebugStrF((wchar_t *)"GridItemCardGameZombieWind::PickAction bucketSize = %d",uVar10);
  lVar5 = ProbabilitySet<GridItemCardGameZombieAction*>::GetSize
                    ((ProbabilitySet<GridItemCardGameZombieAction*> *)aPStack_38);
  if (lVar5 == 0) {
    this_00 = (Image *)0x0;
  }
  else {
    this_00 = (Image *)ProbabilitySet<GridItemCardGameZombieAction*>::PickItem
                                 ((ProbabilitySet<GridItemCardGameZombieAction*> *)aPStack_38);
    uVar9 = ImageLib::Image::GetWidth(this_00);
    uVar7 = Sexy::BaseTaskResource::GetType((BaseTaskResource *)this_00);
    uVar8 = Sexy::Font::GetLineSpacingOffset((Font *)this_00);
    bVar1 = GridItemCardGameZombieAction::IsDone((GridItemCardGameZombieAction *)this_00);
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "GridItemCardGameZombieWind PickAction index = %d intentCountDown = %d cooldown = %d isdone = %d"
               ,uVar9 & 0xffffffff,uVar7 & 0xffffffff,uVar8 & 0xffffffff,(ulong)bVar1);
  }
  ProbabilitySet<GridItemCardGameZombieAction*>::~ProbabilitySet
            ((ProbabilitySet<GridItemCardGameZombieAction*> *)aPStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}

