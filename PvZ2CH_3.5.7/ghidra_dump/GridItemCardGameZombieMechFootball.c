// Class: GridItemCardGameZombieMechFootball


/* GridItemCardGameZombieMechFootball::CheckHalfBlood() */

bool __thiscall
GridItemCardGameZombieMechFootball::CheckHalfBlood(GridItemCardGameZombieMechFootball *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)this;
  if (*(code **)(lVar1 + 0x1d8) == GridItem::GetHitpoints) {
    fVar2 = (float)GridItem::GetHitpoints((GridItem *)this);
  }
  else {
    fVar2 = (float)(**(code **)(lVar1 + 0x1d8))();
    lVar1 = *(long *)this;
  }
  fVar3 = (float)(**(code **)(lVar1 + 0x1e0))(this);
  return fVar2 < fVar3 * 0.5;
}


/* GridItemCardGameZombieMechFootball::onAttackAnimDone(std::string const&) */

void GridItemCardGameZombieMechFootball::onAttackAnimDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x328))(param_1,*(undefined8 *)(param_1 + 0x1f8));
  GridItemCardGameZombie::onAttackAnimDone(param_1);
  return;
}


/* GridItemCardGameZombieMechFootball::onPopAnimCommand(std::string const&, float, std::string
   const&, std::string const&) */

void GridItemCardGameZombieMechFootball::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"use_action");
  if (bVar1) {
    (**(code **)(*(long *)param_1 + 0x328))(param_1,*(undefined8 *)(param_1 + 0x1f8));
  }
  return;
}


/* GridItemCardGameZombieMechFootball::~GridItemCardGameZombieMechFootball() */

void __thiscall
GridItemCardGameZombieMechFootball::~GridItemCardGameZombieMechFootball
          (GridItemCardGameZombieMechFootball *this)

{
  *(undefined ***)this = &PTR_GetClass_069d8d80;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCardGameZombieMechFootball_069d9130;
  GridItemCardGameZombie::~GridItemCardGameZombie((GridItemCardGameZombie *)this);
  return;
}


/* non-virtual thunk to GridItemCardGameZombieMechFootball::~GridItemCardGameZombieMechFootball() */

void __thiscall
GridItemCardGameZombieMechFootball::~GridItemCardGameZombieMechFootball
          (GridItemCardGameZombieMechFootball *this)

{
  ~GridItemCardGameZombieMechFootball(this + -0x10);
  return;
}


/* GridItemCardGameZombieMechFootball::~GridItemCardGameZombieMechFootball() */

void __thiscall
GridItemCardGameZombieMechFootball::~GridItemCardGameZombieMechFootball
          (GridItemCardGameZombieMechFootball *this)

{
  ~GridItemCardGameZombieMechFootball(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemCardGameZombieMechFootball::~GridItemCardGameZombieMechFootball() */

void __thiscall
GridItemCardGameZombieMechFootball::~GridItemCardGameZombieMechFootball
          (GridItemCardGameZombieMechFootball *this)

{
  ~GridItemCardGameZombieMechFootball(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieMechFootball::StaticClassInit() */

void GridItemCardGameZombieMechFootball::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCardGameZombieMechFootball");
    (*pcVar2)(plVar1,asStack_10,FUN_04e23bcc,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieMechFootball::StaticGetClass() */

long * GridItemCardGameZombieMechFootball::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCardGameZombieMechFootball",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieMechFootball::GetClass() const */

long * GridItemCardGameZombieMechFootball::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCardGameZombieMechFootball",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieMechFootball::SetDamageState(int) */

void __thiscall
GridItemCardGameZombieMechFootball::SetDamageState
          (GridItemCardGameZombieMechFootball *this,int param_1)

{
  bool bVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  bVar1 = param_1 == 1;
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_10,"damage1_disco_head");
  (*pcVar2)(this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_10,"damage1_eyeglasses");
  (*pcVar2)(this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_10,"damage1_sidebum");
  (*pcVar2)(this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = param_1 == 2;
  pcVar2 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_10,"damage2_disco_head");
  (*pcVar2)(this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_10,"damage2_eyeglasses");
  (*pcVar2)(this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_10,"damage2_sidebum");
  (*pcVar2)(this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = param_1 == 3;
  pcVar2 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_10,"damage3_disco_head");
  (*pcVar2)(this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_10,"damage3_eyeglasses");
  (*pcVar2)(this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_10,"damage3_sidebum");
  (*pcVar2)(this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = param_1 == 4;
  pcVar2 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_10,"damage4_disco_head");
  (*pcVar2)(this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_10,"damage4_eyeglasses");
  (*pcVar2)(this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_10,"damage4_sidebum");
  (*pcVar2)(this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_10,"damage4_discoball");
  (*pcVar2)(this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_10,"damage4_shoe");
  (*pcVar2)(this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = param_1 == 5;
  pcVar2 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_10,"damage5_disco_head");
  (*pcVar2)(this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_10,"damage5_eyeglasses");
  (*pcVar2)(this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_10,"damage5_sidebum");
  (*pcVar2)(this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_10,"damage5_discoball");
  (*pcVar2)(this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_10,"damage5_shoe");
  (*pcVar2)(this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = param_1 == 6;
  pcVar2 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_10,"damage6_disco_head");
  (*pcVar2)(this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_10,"damage6_eyeglasses");
  (*pcVar2)(this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_10,"damage6_sidebum");
  (*pcVar2)(this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_10,"damage6_discoball");
  (*pcVar2)(this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x398);
  std::string::string(asStack_10,"damage6_shoe");
  (*pcVar2)(this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieMechFootball::onGridItemInitialize() */

void __thiscall
GridItemCardGameZombieMechFootball::onGridItemInitialize(GridItemCardGameZombieMechFootball *this)

{
  GridItemCardGameZombie::onGridItemInitialize((GridItemCardGameZombie *)this);
  SetDamageState(this,0);
  return;
}


/* GridItemCardGameZombieMechFootball::GridItemCardGameZombieMechFootball() */

void __thiscall
GridItemCardGameZombieMechFootball::GridItemCardGameZombieMechFootball
          (GridItemCardGameZombieMechFootball *this)

{
  GridItemCardGameZombie::GridItemCardGameZombie((GridItemCardGameZombie *)this);
  this[0x208] = (GridItemCardGameZombieMechFootball)0x0;
  this[0x209] = (GridItemCardGameZombieMechFootball)0x0;
  *(undefined ***)this = &PTR_GetClass_069d8d80;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCardGameZombieMechFootball_069d9130;
  return;
}


/* GridItemCardGameZombieMechFootball::StaticNew() */

GridItemCardGameZombieMechFootball * GridItemCardGameZombieMechFootball::StaticNew(void)

{
  GridItemCardGameZombieMechFootball *this;
  
  this = ::operator_new(0x210);
  GridItemCardGameZombieMechFootball(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieMechFootball::TossZombies(int) */

void __thiscall
GridItemCardGameZombieMechFootball::TossZombies
          (GridItemCardGameZombieMechFootball *this,int param_1)

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
  iVar3 = FUN_04e238ac(*(undefined4 *)(this + 0x130));
  iVar4 = FUN_04e238b0(*(undefined4 *)(this + 0x134));
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
           (iVar3 = FUN_04e238a8(*(undefined4 *)(this_00 + 0x24)), iVar3 != 2)) &&
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieMechFootball::GenerateDiscoZombies() */

void __thiscall
GridItemCardGameZombieMechFootball::GenerateDiscoZombies(GridItemCardGameZombieMechFootball *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  GridItemCardGameZombieMechFootballProps *pGVar4;
  string *psVar5;
  ZombieType *this_00;
  SexyVector3 *pSVar6;
  TPoint *pTVar7;
  long lVar8;
  Board *pBVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"GridItemCardGameZombieMechFootball::GenerateDiscoZombies");
  pGVar4 = GridItem::GetProps<GridItemCardGameZombieMechFootballProps>();
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(vector *)(pGVar4 + 0x160)
            );
  iVar2 = FUN_04e238dc(local_20,local_18);
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string((string *)&local_30,"card_game_enemy_disco_mech");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
  std::string::~string((string *)&local_30);
  nop();
  this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  lVar8 = 0;
  if (0 < iVar2) {
    do {
      pBVar9 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)aRStack_40);
      pSVar6 = (SexyVector3 *)
               Board::AddZombie(pBVar9,(string *)&local_30,0xfffffffb,*(undefined4 *)(this + 0x50),0
                                ,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      lVar1 = lVar8 + 1;
      pTVar7 = (TPoint *)FUN_04e238e8(local_20,lVar8);
      Sexy::Point::Point((Point *)&local_38,pTVar7);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_30,0.0,0.0,0.0);
      iVar3 = BoardTransforms::GridToBoardSpaceX(local_38);
      local_30 = (float)iVar3;
      iVar3 = BoardTransforms::GridToBoardSpaceY(local_34);
      local_2c = (float)iVar3;
      BoardEntity::PlaceOnBoard(pSVar6);
      lVar8 = lVar1;
    } while ((int)lVar1 < iVar2);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieMechFootball::GenerateBattlePlaneZombies() */

void __thiscall
GridItemCardGameZombieMechFootball::GenerateBattlePlaneZombies
          (GridItemCardGameZombieMechFootball *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  GridItemCardGameZombieMechFootballProps *pGVar4;
  string *psVar5;
  ZombieType *this_00;
  SexyVector3 *pSVar6;
  TPoint *pTVar7;
  long lVar8;
  Board *pBVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"GridItemCardGameZombieMechFootball::GenerateBattlePlaneZombies")
  ;
  pGVar4 = GridItem::GetProps<GridItemCardGameZombieMechFootballProps>();
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(vector *)(pGVar4 + 0x178)
            );
  iVar2 = FUN_04e238dc(local_20,local_18);
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string((string *)&local_30,"card_game_enemy_skycity_battleplane");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
  std::string::~string((string *)&local_30);
  nop();
  this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  lVar8 = 0;
  if (0 < iVar2) {
    do {
      pBVar9 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)aRStack_40);
      pSVar6 = (SexyVector3 *)
               Board::AddZombie(pBVar9,(string *)&local_30,0xfffffffb,*(undefined4 *)(this + 0x50),0
                                ,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      lVar1 = lVar8 + 1;
      pTVar7 = (TPoint *)FUN_04e238e8(local_20,lVar8);
      Sexy::Point::Point((Point *)&local_38,pTVar7);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_30,0.0,0.0,0.0);
      iVar3 = BoardTransforms::GridToBoardSpaceX(local_38);
      local_30 = (float)iVar3;
      iVar3 = BoardTransforms::GridToBoardSpaceY(local_34);
      local_2c = (float)iVar3;
      BoardEntity::PlaceOnBoard(pSVar6);
      lVar8 = lVar1;
    } while ((int)lVar1 < iVar2);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieMechFootball::SummonBothZombies() */

void __thiscall
GridItemCardGameZombieMechFootball::SummonBothZombies(GridItemCardGameZombieMechFootball *this)

{
  GenerateDiscoZombies(this);
  GenerateBattlePlaneZombies(this);
  return;
}


/* GridItemCardGameZombieMechFootball::HalfBloodSpecailAction() */

void __thiscall
GridItemCardGameZombieMechFootball::HalfBloodSpecailAction(GridItemCardGameZombieMechFootball *this)

{
  this[0x208] = (GridItemCardGameZombieMechFootball)0x1;
  TossZombies(this,5);
  SummonBothZombies(this);
  return;
}


/* GridItemCardGameZombieMechFootball::onUpdate() */

void __thiscall
GridItemCardGameZombieMechFootball::onUpdate(GridItemCardGameZombieMechFootball *this)

{
  char cVar1;
  
  GridItemCardGameZombie::onUpdate((GridItemCardGameZombie *)this);
  if ((this[0x208] == (GridItemCardGameZombieMechFootball)0x0) &&
     (cVar1 = CheckHalfBlood(this), cVar1 != '\0')) {
    HalfBloodSpecailAction(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieMechFootball::GenerateZombieActions() */

void __thiscall
GridItemCardGameZombieMechFootball::GenerateZombieActions(GridItemCardGameZombieMechFootball *this)

{
  ulong uVar1;
  int iVar2;
  GridItemCardGameZombieMechFootballProps *pGVar3;
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
  Sexy::OutputDebugStrF((wchar_t *)"GridItemCardGameZombieMechFootball::GenerateZombieActions");
  std::vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>>::clear
            ((vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>> *)
             (this + 0x1e0));
  pGVar3 = GridItem::GetProps<GridItemCardGameZombieMechFootballProps>();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_70);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GenerateDiscoZombies);
  Sexy::Delegate0::
  Delegate0<GridItemCardGameZombieMechFootball,void(GridItemCardGameZombieMechFootball::*)()>
            (aDStack_38,aGStack_58);
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::push_back
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_70,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GenerateBattlePlaneZombies);
  Sexy::Delegate0::
  Delegate0<GridItemCardGameZombieMechFootball,void(GridItemCardGameZombieMechFootball::*)()>
            (aDStack_38,aGStack_58);
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::push_back
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_70,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SummonBothZombies);
  Sexy::Delegate0::
  Delegate0<GridItemCardGameZombieMechFootball,void(GridItemCardGameZombieMechFootball::*)()>
            (aDStack_38,aGStack_58);
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::push_back
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_70,aDStack_38);
  iVar2 = FUN_04e238b4(local_70,local_68);
  uVar7 = 0;
  if (0 < iVar2) {
    do {
      pGVar4 = ::operator_new(0x70);
      GridItemCardGameZombieAction::GridItemCardGameZombieAction(pGVar4);
      pcVar8 = (code *)**(undefined8 **)pGVar4;
      local_78 = pGVar4;
      pGVar5 = (GridItemCardGameZombieActionData *)
               FUN_04e238d4(*(undefined8 *)(pGVar3 + 0x148),uVar7);
      GridItemCardGameZombieActionData::GridItemCardGameZombieActionData(aGStack_58,pGVar5);
      (*pcVar8)(pGVar4,uVar7 & 0xffffffff,aGStack_58);
      GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData(aGStack_58);
      pGVar4 = local_78;
      uVar1 = uVar7 + 1;
      pDVar6 = (Delegate0 *)FUN_04e238c8(local_70,uVar7);
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
/* GridItemCardGameZombieMechFootball::PickAction() */

void __thiscall
GridItemCardGameZombieMechFootball::PickAction(GridItemCardGameZombieMechFootball *this)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  Image *this_00;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  AndroidAsyncIOFile *this_01;
  long lVar9;
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  lVar9 = 0;
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  if (this[0x208] == (GridItemCardGameZombieMechFootball)0x0) {
    while( true ) {
      puVar4 = (undefined8 *)FUN_04e238f0(*(undefined8 *)(this + 0x1e0),lVar9);
      this_01 = (AndroidAsyncIOFile *)*puVar4;
      iVar2 = Sexy::AndroidAsyncIOFile::GetSize(this_01);
      Sexy::BaseTaskResource::GetType((BaseTaskResource *)this_01);
      iVar3 = Sexy::BaseResStreamsDriver::IsDecompressionFullyComplete
                        ((BaseResStreamsDriver *)this_01);
      if (iVar3 == 0) {
        ProbabilitySet<GridItemCardGameZombieAction*>::AddItem
                  ((ProbabilitySet<GridItemCardGameZombieAction*> *)aPStack_38,
                   (GridItemCardGameZombieAction *)this_01,iVar2);
      }
      if (lVar9 != 0) break;
      lVar9 = 1;
    }
    uVar5 = ProbabilitySet<GridItemCardGameZombieAction*>::GetSize
                      ((ProbabilitySet<GridItemCardGameZombieAction*> *)aPStack_38);
    Sexy::OutputDebugStrF
              ((wchar_t *)"GridItemCardGameZombieMechFootball::PickAction bucketSize = %d",uVar5);
    lVar9 = ProbabilitySet<GridItemCardGameZombieAction*>::GetSize
                      ((ProbabilitySet<GridItemCardGameZombieAction*> *)aPStack_38);
    if (lVar9 == 0) {
      this_00 = (Image *)0x0;
    }
    else {
      this_00 = (Image *)ProbabilitySet<GridItemCardGameZombieAction*>::PickItem
                                   ((ProbabilitySet<GridItemCardGameZombieAction*> *)aPStack_38);
      uVar6 = ImageLib::Image::GetWidth(this_00);
      uVar7 = Sexy::BaseTaskResource::GetType((BaseTaskResource *)this_00);
      uVar8 = Sexy::Font::GetLineSpacingOffset((Font *)this_00);
      bVar1 = GridItemCardGameZombieAction::IsDone((GridItemCardGameZombieAction *)this_00);
      Sexy::OutputDebugStrF
                ((wchar_t *)
                 "GridItemCardGameZombieMechFootball PickAction index = %d intentCountDown = %d cooldown = %d isdone = %d"
                 ,uVar6 & 0xffffffff,uVar7 & 0xffffffff,uVar8 & 0xffffffff,(ulong)bVar1);
    }
  }
  else {
    puVar4 = (undefined8 *)FUN_04e238f0(*(undefined8 *)(this + 0x1e0),2);
    this_00 = (Image *)*puVar4;
  }
  ProbabilitySet<GridItemCardGameZombieAction*>::~ProbabilitySet
            ((ProbabilitySet<GridItemCardGameZombieAction*> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}

