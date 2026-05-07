// Class: GridItemCardGameZombieCannon


/* GridItemCardGameZombieCannon::~GridItemCardGameZombieCannon() */

void __thiscall
GridItemCardGameZombieCannon::~GridItemCardGameZombieCannon(GridItemCardGameZombieCannon *this)

{
  *(undefined ***)this = &PTR_GetClass_069d8270;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCardGameZombieCannon_069d8630;
  GridItemCardGameZombie::~GridItemCardGameZombie((GridItemCardGameZombie *)this);
  return;
}


/* non-virtual thunk to GridItemCardGameZombieCannon::~GridItemCardGameZombieCannon() */

void __thiscall
GridItemCardGameZombieCannon::~GridItemCardGameZombieCannon(GridItemCardGameZombieCannon *this)

{
  ~GridItemCardGameZombieCannon(this + -0x10);
  return;
}


/* GridItemCardGameZombieCannon::~GridItemCardGameZombieCannon() */

void __thiscall
GridItemCardGameZombieCannon::~GridItemCardGameZombieCannon(GridItemCardGameZombieCannon *this)

{
  ~GridItemCardGameZombieCannon(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemCardGameZombieCannon::~GridItemCardGameZombieCannon() */

void __thiscall
GridItemCardGameZombieCannon::~GridItemCardGameZombieCannon(GridItemCardGameZombieCannon *this)

{
  ~GridItemCardGameZombieCannon(this + -0x10);
  return;
}


/* GridItemCardGameZombieCannon::PlayAttackAnim() */

void __thiscall GridItemCardGameZombieCannon::PlayAttackAnim(GridItemCardGameZombieCannon *this)

{
  GridItemCardGameZombie::PlayAttackAnim();
  (**(code **)(*(long *)this + 0x328))(this,*(undefined8 *)(this + 0x1f8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieCannon::StaticClassInit() */

void GridItemCardGameZombieCannon::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCardGameZombieCannon");
    (*pcVar2)(plVar1,asStack_10,FUN_04e20e08,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieCannon::StaticGetClass() */

long * GridItemCardGameZombieCannon::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCardGameZombieCannon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieCannon::GetClass() const */

long * GridItemCardGameZombieCannon::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCardGameZombieCannon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieCannon::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void GridItemCardGameZombieCannon::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"fire_projectile_use_action");
  if ((!bVar1) && (bVar1 = std::operator==(param_4,"use_action"), !bVar1)) {
    return;
  }
  (**(code **)(*(long *)param_1 + 0x328))(param_1,*(undefined8 *)(param_1 + 0x1f8));
  return;
}


/* GridItemCardGameZombieCannon::GridItemCardGameZombieCannon() */

void __thiscall
GridItemCardGameZombieCannon::GridItemCardGameZombieCannon(GridItemCardGameZombieCannon *this)

{
  GridItemCardGameZombie::GridItemCardGameZombie((GridItemCardGameZombie *)this);
  *(undefined4 *)(this + 0x208) = 1;
  *(undefined ***)this = &PTR_GetClass_069d8270;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCardGameZombieCannon_069d8630;
  *(undefined4 *)(this + 0x20c) = 3;
  return;
}


/* GridItemCardGameZombieCannon::StaticNew() */

GridItemCardGameZombieCannon * GridItemCardGameZombieCannon::StaticNew(void)

{
  GridItemCardGameZombieCannon *this;
  
  this = ::operator_new(0x210);
  GridItemCardGameZombieCannon(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieCannon::FireTarget(BoardEntity*) */

void __thiscall
GridItemCardGameZombieCannon::FireTarget(GridItemCardGameZombieCannon *this,BoardEntity *param_1)

{
  char cVar1;
  undefined4 uVar2;
  GridItemCardGameZombieCannonProps *pGVar3;
  undefined8 *puVar4;
  Projectile *this_00;
  SexyVector3 *pSVar5;
  undefined8 uVar6;
  Board *pBVar8;
  float fVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar3 = GridItem::GetProps<GridItemCardGameZombieCannonProps>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)(pGVar3 + 0x170));
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_28);
  if (cVar1 != '\0') {
    puVar4 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
                    /* WARNING: Load size is inaccurate */
    pBVar8._0_4_ = *puVar4;
    fVar7 = *(float *)((long)puVar4 + 4);
    uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_28);
    this_00 = (Projectile *)Board::AddProjectile(pBVar8._0_4_,fVar7,0,uVar6,aRStack_18,this,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    if (this_00 != (Projectile *)0x0) {
      if (param_1 == (BoardEntity *)0x0) {
        EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,110.0,fVar7,0.0);
        Projectile::LaunchAt(this_00,(SexyVector3 *)aRStack_18,150.0,1.5);
      }
      else {
        pSVar5 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)param_1);
        Projectile::LaunchAt(this_00,pSVar5,150.0,1.5);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_20);
        Projectile::SetTarget(this_00,(RtWeakPtr *)aRStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      }
      FUN_04e20b2c(this_00 + 0xd4);
      uVar2 = FUN_04e209b4(*(undefined4 *)(this + 0x24));
      FUN_04e209b8(this_00 + 0x24,uVar2);
      FUN_04e20b24(this_00 + 0xd5);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieCannon::FireImp(Sexy::SexyVector3) */

void GridItemCardGameZombieCannon::FireImp
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_4)

{
  int iVar1;
  string *psVar2;
  SexyVector3 *pSVar3;
  SexyVector3 *this;
  long *extraout_x0;
  long *plVar4;
  code *pcVar5;
  undefined4 uVar6;
  string asStack_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_2b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar4 = *(long **)(gLawnApp + 0x9f0);
  uVar6 = param_2;
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
  local_30 = *(undefined4 *)(param_4 + 0x50);
  pcVar5 = *(code **)(*plVar4 + 0x318);
  local_2b = 1;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_48,"card_game_enemy_cannon_pirate_imp");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  pSVar3 = (SexyVector3 *)
           (*pcVar5)(plVar4,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40,0xfffffffb,
                     (SpawnZombieParams *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  std::string::~string(asStack_48);
  nop();
  if (((DAT_06b9e320 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b9e320), iVar1 != 0)) {
    param_3 = 0x42140000;
    uVar6 = 0x3f800000;
    EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06b9e380,-65.0,1.0,37.0);
    __cxa_guard_release(&DAT_06b9e320);
  }
  this = (SexyVector3 *)
         std::
         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         ::_M_leftmost(param_4);
  local_40 = Sexy::SexyVector3::operator+(this,(SexyVector3 *)&DAT_06b9e380);
  local_3c = uVar6;
  local_38 = param_3;
  BoardEntity::PlaceOnBoard(pSVar3);
  nop();
  DVec3::DVec3((DVec3 *)&local_40);
  local_38 = 0;
  local_40 = param_1;
  local_3c = param_2;
  (**(code **)(*extraout_x0 + 0xa08))(param_1,param_2,0,0x3f800000,0x42be0000,extraout_x0,0);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieCannon::GenerateZombieActions() */

void __thiscall
GridItemCardGameZombieCannon::GenerateZombieActions(GridItemCardGameZombieCannon *this)

{
  ulong uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  GridItemCardGameZombieCannonProps *pGVar5;
  GridItemCardGameZombieAction *pGVar6;
  GridItemCardGameZombieActionData *pGVar7;
  Delegate0 *pDVar8;
  ulong uVar9;
  code *pcVar10;
  GridItemCardGameZombieAction *local_78;
  undefined8 local_70;
  undefined8 local_68;
  GridItemCardGameZombieActionData aGStack_58 [32];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"GridItemCardGameZombieCannon::GenerateZombieActions");
  std::vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>>::clear
            ((vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>> *)
             (this + 0x1e0));
  pGVar5 = GridItem::GetProps<GridItemCardGameZombieCannonProps>();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_70);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x3a0);
  Sexy::Delegate0::Delegate0<GridItemCardGameZombieCannon,void(GridItemCardGameZombieCannon::*)()>
            (aDStack_38,aGStack_58);
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::push_back
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_70,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x3a8);
  Sexy::Delegate0::Delegate0<GridItemCardGameZombieCannon,void(GridItemCardGameZombieCannon::*)()>
            (aDStack_38,aGStack_58);
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::push_back
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_70,aDStack_38);
  iVar4 = FUN_04e20a10(local_70,local_68);
  uVar9 = 0;
  if (0 < iVar4) {
    do {
      pGVar6 = ::operator_new(0x70);
      GridItemCardGameZombieAction::GridItemCardGameZombieAction(pGVar6);
      pcVar10 = (code *)**(undefined8 **)pGVar6;
      local_78 = pGVar6;
      pGVar7 = (GridItemCardGameZombieActionData *)
               FUN_04e20a4c(*(undefined8 *)(pGVar5 + 0x148),uVar9);
      GridItemCardGameZombieActionData::GridItemCardGameZombieActionData(aGStack_58,pGVar7);
      (*pcVar10)(pGVar6,uVar9 & 0xffffffff,aGStack_58);
      GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData(aGStack_58);
      pGVar6 = local_78;
      uVar1 = uVar9 + 1;
      pDVar8 = (Delegate0 *)FUN_04e20a24(local_70,uVar9);
      Sexy::Delegate0::Delegate0(aDStack_38,pDVar8);
      GridItemCardGameZombieAction::SetCallbackFunc(pGVar6,aDStack_38);
      std::vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>>::
      push_back((vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>>
                 *)(this + 0x1e0),&local_78);
      uVar9 = uVar1;
    } while ((int)uVar1 < iVar4);
  }
  *(undefined4 *)(this + 0x208) = 1;
  cVar3 = CardGameUtils::IsHardMode();
  uVar2 = *(undefined4 *)(pGVar5 + 0x16c);
  if (cVar3 == '\0') {
    uVar2 = *(undefined4 *)(pGVar5 + 0x168);
  }
  *(undefined4 *)(this + 0x20c) = uVar2;
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::~vector
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieCannon::FindSpawnImpPosition() */

void GridItemCardGameZombieCannon::FindSpawnImpPosition(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long in_x0;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  long lVar7;
  Vec3 aVStack_48 [16];
  undefined8 local_38 [3];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar7 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  BoardTransforms::GridToBoardSpaceX(4);
  BoardConstants::GRIDSQUARE_WIDTH();
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)local_38,&DAT_05755d00,5,
             (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)local_20);
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)local_20,&DAT_05755ce0,7,aVStack_48);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_38);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_38);
  std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (uVar4,uVar5);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_20);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_20);
  std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (uVar4,uVar5);
  if (0 < *(int *)(in_x0 + 0x208)) {
    do {
      piVar6 = (int *)FUN_04e20a6c(local_38[0],lVar7);
      iVar1 = BoardTransforms::GridToBoardSpaceX(*piVar6);
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      piVar6 = (int *)FUN_04e20a6c(local_20[0],lVar7);
      iVar3 = BoardTransforms::GridToBoardSpaceY(*piVar6);
      EATextSquish::Vec3::Vec3(aVStack_48,(float)iVar1 + (float)iVar2 * 0.25,(float)iVar3,0.0);
      std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::push_back
                ((vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)in_x8,
                 (SexyVector3 *)aVStack_48);
      iVar1 = (int)lVar7;
      lVar7 = lVar7 + 1;
    } while (iVar1 + 1 < *(int *)(in_x0 + 0x208));
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieCannon::SpawnImp() */

void __thiscall GridItemCardGameZombieCannon::SpawnImp(GridItemCardGameZombieCannon *this)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindSpawnImpPosition();
  uVar5 = local_20;
  uVar2 = FUN_04e20a30(local_20,local_18);
  uVar4 = 0;
  if (uVar2 != 0) {
    while (uVar4 < uVar2) {
      puVar3 = (undefined4 *)FUN_04e20a54(uVar5);
      FireImp(*puVar3,puVar3[1],puVar3[2],this);
      uVar5 = local_20;
      uVar2 = FUN_04e20a30(local_20,local_18);
      uVar4 = uVar4 + 1;
    }
    uVar1 = ClampInt(*(int *)(this + 0x208) + 1,1,*(int *)(this + 0x20c));
    *(undefined4 *)(this + 0x208) = uVar1;
  }
  std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::~vector
            ((vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieCannon::FindFireProjectileTarget() */

void __thiscall
GridItemCardGameZombieCannon::FindFireProjectileTarget(GridItemCardGameZombieCannon *this)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  RtObject *this_00;
  undefined8 local_80;
  undefined8 local_78;
  Zombie *local_70;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  EntityFinder::GetEntities(avStack_68,2);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_68);
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_68);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78), bVar2) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
    this_00 = (RtObject *)*puVar3;
    if ((this_00 != (RtObject *)0x0) && (cVar1 = RealObject::IsOnTeam(this_00,1), cVar1 != '\0')) {
      local_70 = Sexy::RtObject::Cast<Zombie>(this_00);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)in_x8,
                 (BoardEntity **)&local_70);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_50);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieCannon::FireProjectile() */

void __thiscall GridItemCardGameZombieCannon::FireProjectile(GridItemCardGameZombieCannon *this)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindFireProjectileTarget(this);
  lVar1 = FUN_04e20a60(local_20,local_18);
  if (lVar1 == 0) {
    FireTarget(this,(BoardEntity *)0x0);
  }
  else {
    puVar2 = (undefined8 *)FUN_04e20b20(local_20);
    FireTarget(this,(BoardEntity *)*puVar2);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

