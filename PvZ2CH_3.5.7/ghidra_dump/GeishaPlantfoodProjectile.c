// Class: GeishaPlantfoodProjectile


/* GeishaPlantfoodProjectile::~GeishaPlantfoodProjectile() */

void __thiscall
GeishaPlantfoodProjectile::~GeishaPlantfoodProjectile(GeishaPlantfoodProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0674be90;
  *(undefined ***)(this + 0x10) = &PTR__GeishaPlantfoodProjectile_0674c088;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to GeishaPlantfoodProjectile::~GeishaPlantfoodProjectile() */

void __thiscall
GeishaPlantfoodProjectile::~GeishaPlantfoodProjectile(GeishaPlantfoodProjectile *this)

{
  ~GeishaPlantfoodProjectile(this + -0x10);
  return;
}


/* GeishaPlantfoodProjectile::~GeishaPlantfoodProjectile() */

void __thiscall
GeishaPlantfoodProjectile::~GeishaPlantfoodProjectile(GeishaPlantfoodProjectile *this)

{
  ~GeishaPlantfoodProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GeishaPlantfoodProjectile::~GeishaPlantfoodProjectile() */

void __thiscall
GeishaPlantfoodProjectile::~GeishaPlantfoodProjectile(GeishaPlantfoodProjectile *this)

{
  ~GeishaPlantfoodProjectile(this + -0x10);
  return;
}


/* GeishaPlantfoodProjectile::GeishaPlantfoodProjectile() */

void __thiscall
GeishaPlantfoodProjectile::GeishaPlantfoodProjectile(GeishaPlantfoodProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0674be90;
  *(undefined ***)(this + 0x10) = &PTR__GeishaPlantfoodProjectile_0674c088;
  DVec3::DVec3((DVec3 *)(this + 0x1a8));
  this[0x1b4] = (GeishaPlantfoodProjectile)0x0;
  return;
}


/* GeishaPlantfoodProjectile::StaticNew() */

GeishaPlantfoodProjectile * GeishaPlantfoodProjectile::StaticNew(void)

{
  GeishaPlantfoodProjectile *this;
  
  this = ::operator_new(0x1b8);
  GeishaPlantfoodProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeishaPlantfoodProjectile::StaticClassInit() */

void GeishaPlantfoodProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeishaPlantfoodProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03c2efa0,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeishaPlantfoodProjectile::StaticGetClass() */

long * GeishaPlantfoodProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeishaPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeishaPlantfoodProjectile::GetClass() const */

long * GeishaPlantfoodProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"GeishaPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeishaPlantfoodProjectile::createSplitProjectiles() */

void __thiscall GeishaPlantfoodProjectile::createSplitProjectiles(GeishaPlantfoodProjectile *this)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  GeishaProjectile *this_00;
  RtObject *pRVar5;
  GeishaPlantfoodProjectileProps *pGVar6;
  GeishaProjectile *this_01;
  long extraout_x0;
  undefined8 uVar7;
  undefined8 uVar8;
  Board *pBVar11;
  undefined4 uVar9;
  undefined4 uVar10;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_38 [8];
  string asStack_30 [8];
  wstring awStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_38);
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_30,"GeishaPlantfoodSplitDefault");
  Sexy::ToWString(asStack_30);
  Sexy::RtName::RtName(aRStack_18,awStack_28);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar2,0xc,aRStack_18);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_38,(RtWeakPtr *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_28);
  std::string::~string(asStack_30);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_38);
  if (cVar1 != '\0') {
    uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
                    /* WARNING: Load size is inaccurate */
    pBVar11._0_4_ = *puVar3;
    uVar9 = *(undefined4 *)((long)puVar3 + 4);
    uVar10 = *(undefined4 *)(puVar3 + 1);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)a_Stack_38);
    uVar2 = Projectile::GetInstigator((Projectile *)this);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
    Board::AddProjectile
              (pBVar11._0_4_,uVar9,uVar10,uVar7,aRStack_18,uVar2,*(undefined4 *)(lVar4 + 0x68));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    *(undefined4 *)(this_00 + 0x1a8) = 0;
    pRVar5 = (RtObject *)Projectile::GetProps((Projectile *)this);
    pGVar6 = Sexy::RtObject::Cast<GeishaPlantfoodProjectileProps>(pRVar5);
    *(undefined4 *)(this_00 + 0x1ac) = *(undefined4 *)(pGVar6 + 0x1e8);
    uVar2 = WorldMap::GetPopAnimRigs((WorldMap *)this);
    GeishaProjectile::InitTrajectory(this_00,0,uVar2);
    GeishaProjectile::ReturnBack(this_00);
                    /* WARNING: Load size is inaccurate */
    pBVar11._0_4_ = *puVar3;
    uVar9 = *(undefined4 *)((long)puVar3 + 4);
    uVar10 = *(undefined4 *)(puVar3 + 1);
    uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)a_Stack_38);
    uVar7 = Projectile::GetInstigator((Projectile *)this);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
    Board::AddProjectile
              (pBVar11._0_4_,uVar9,uVar10,uVar8,aRStack_18,uVar7,*(undefined4 *)(lVar4 + 0x68));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    *(undefined4 *)(this_01 + 0x1a8) = 0;
    pRVar5 = (RtObject *)Projectile::GetProps((Projectile *)this);
    pGVar6 = Sexy::RtObject::Cast<GeishaPlantfoodProjectileProps>(pRVar5);
    *(undefined4 *)(this_01 + 0x1ac) = *(undefined4 *)(pGVar6 + 0x1e8);
    GeishaProjectile::InitTrajectory(this_01,2,uVar2);
    GeishaProjectile::ReturnBack(this_01);
    if (this[0x1b4] != (GeishaPlantfoodProjectile)0x0) {
      uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
      std::string::string(asStack_30,"GeishaPlantfoodSplit2Default");
      Sexy::ToWString(asStack_30);
      Sexy::RtName::RtName(aRStack_18,awStack_28);
      PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar2,0xc,aRStack_18);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_38,(RtWeakPtr *)aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      Sexy::RtName::~RtName(aRStack_18);
      FUN_05476c50(awStack_28);
      std::string::~string(asStack_30);
      nop();
                    /* WARNING: Load size is inaccurate */
      pBVar11._0_4_ = *puVar3;
      uVar9 = *(undefined4 *)((long)puVar3 + 4);
      uVar10 = *(undefined4 *)(puVar3 + 1);
      uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)a_Stack_38);
      uVar2 = Projectile::GetInstigator((Projectile *)this);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
      Board::AddProjectile
                (pBVar11._0_4_,uVar9,uVar10,uVar7,aRStack_18,uVar2,*(undefined4 *)(lVar4 + 0x68));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      *(undefined4 *)(extraout_x0 + 0x1a8) = 0;
      FUN_03c2d264(extraout_x0 + 0x1f1);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeishaPlantfoodProjectile::knockbackEnemies(BoardEntity*) */

void __thiscall
GeishaPlantfoodProjectile::knockbackEnemies(GeishaPlantfoodProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long extraout_x0;
  SexyVector3 *this_00;
  undefined8 *puVar6;
  Zombie *this_01;
  ZombieTosserSubSystem *pZVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  Vec3 aVStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    Projectile::GetProps((Projectile *)this);
    nop();
    if (extraout_x0 != 0) {
      uVar10 = *(undefined4 *)(extraout_x0 + 0x1e4);
      uVar3 = BoardEntity::CalcColumnPosition(param_1);
      uVar4 = SharkMinion::getRow((SharkMinion *)param_1);
      this_00 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)param_1);
      iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
      uVar8 = 0;
      uVar9 = 0;
      EATextSquish::Vec3::Vec3(aVStack_68,(float)(iVar5 * *(int *)(extraout_x0 + 0x1e0)),0.0,0.0);
      local_78 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_68);
      local_74 = uVar8;
      local_70 = uVar9;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aVStack_68);
      EntityFinder::GetEntitiesAtGridSquare(aVStack_68,2,uVar3,uVar4);
      local_88 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aVStack_68);
      local_80 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aVStack_68);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80),
            bVar1) {
        puVar6 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
        bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar6);
        if (bVar1) {
          nop();
          cVar2 = Zombie::CanBeLaunchedByPlants(this_01);
          if (cVar2 != '\0') {
            pZVar7 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
            RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
            ZombieTosserSubSystem::LaunchZombie
                      ((ZombieTosserSubSystem *)0x43160000,uVar10,pZVar7,this_01,&local_78,
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
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aVStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeishaPlantfoodProjectile::handleImpact(BoardEntity*) */

void __thiscall
GeishaPlantfoodProjectile::handleImpact(GeishaPlantfoodProjectile *this,BoardEntity *param_1)

{
  knockbackEnemies(this,param_1);
  (**(code **)(*(long *)this + 0x1e0))(this);
  Projectile::handleImpact((Projectile *)this,param_1);
  return;
}

