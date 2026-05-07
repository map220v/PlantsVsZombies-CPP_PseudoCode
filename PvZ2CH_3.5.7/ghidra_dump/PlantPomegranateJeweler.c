// Class: PlantPomegranateJeweler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPomegranateJeweler::StaticClassInit() */

void PlantPomegranateJeweler::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPomegranateJeweler");
    (*pcVar2)(plVar1,asStack_10,FUN_04cd0a9c,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPomegranateJeweler::StaticGetClass() */

long * PlantPomegranateJeweler::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantPomegranateJeweler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPomegranateJeweler::GetClass() const */

long * PlantPomegranateJeweler::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantPomegranateJeweler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPomegranateJeweler::CreateProjectile(PomegranateJewelerProjectileType, float, float, float)
    */

void __thiscall
PlantPomegranateJeweler::CreateProjectile
          (Board *param_1,undefined8 param_2,undefined8 param_3,PlantPomegranateJeweler *this,
          int param_5)

{
  long lVar1;
  undefined8 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (-1 < param_5) {
    Plant::GetProps();
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar1 = FUN_04ccda9c(*(undefined8 *)(lVar1 + 0x70),*(undefined8 *)(lVar1 + 0x78));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if ((ulong)(long)param_5 <= lVar1 - 1U) {
      Plant::GetProps();
      lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      lVar1 = FUN_04ccda74(*(undefined8 *)(lVar1 + 0x70),(long)param_5);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)(lVar1 + 8));
      uVar2 = Board::AddProjectile
                        (param_1,param_2,param_3,uVar2,aRStack_10,*(undefined8 *)(this + 0x10),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      goto LAB_04ccf5b4;
    }
  }
  uVar2 = 0;
LAB_04ccf5b4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPomegranateJeweler::LaunchProjectile(PomegranateJewelerProjectileType, BoardEntity*,
   BoardEntity*) */

void __thiscall
PlantPomegranateJeweler::LaunchProjectile
          (PlantPomegranateJeweler *this,undefined8 param_2,
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *param_3,_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *param_4)

{
  undefined8 *puVar1;
  Projectile *this_00;
  SexyVector3 *this_01;
  RealObject *this_02;
  undefined4 uVar2;
  undefined4 uVar3;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_3);
                    /* WARNING: Load size is inaccurate */
  this_00 = (Projectile *)CreateProjectile(*puVar1,*(undefined4 *)((long)puVar1 + 4),0,this,param_2)
  ;
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(param_4);
  uVar2 = 0xc2200000;
  uVar3 = 0;
  EATextSquish::Vec3::Vec3(aVStack_28,0.0,-40.0,0.0);
  local_18 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aVStack_28);
  local_14 = uVar2;
  local_10 = uVar3;
  Projectile::LaunchAt(this_00,(SexyVector3 *)&local_18,350.0,1.0);
  this_02 = *(RealObject **)(this + 0x10);
  std::string::string((string *)&local_18,"Play_Plant_Pomegranatejeweler_Attack");
  RealObject::PlayPositionalSound(this_02,(string *)&local_18,0.0);
  std::string::~string((string *)&local_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* PlantPomegranateJeweler::PlantPomegranateJeweler() */

void __thiscall PlantPomegranateJeweler::PlantPomegranateJeweler(PlantPomegranateJeweler *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0699e000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  *(undefined4 *)(this + 0x28) = 0;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x30));
  *(undefined4 *)(this + 0x48) = 0;
  return;
}


/* PlantPomegranateJeweler::StaticNew() */

PlantPomegranateJeweler * PlantPomegranateJeweler::StaticNew(void)

{
  PlantPomegranateJeweler *this;
  
  this = ::operator_new(0x50);
  PlantPomegranateJeweler(this);
  return this;
}


/* PlantPomegranateJeweler::~PlantPomegranateJeweler() */

void __thiscall PlantPomegranateJeweler::~PlantPomegranateJeweler(PlantPomegranateJeweler *this)

{
  *(undefined ***)this = &PTR_GetClass_0699e000;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantPomegranateJeweler::~PlantPomegranateJeweler() */

void __thiscall PlantPomegranateJeweler::~PlantPomegranateJeweler(PlantPomegranateJeweler *this)

{
  ~PlantPomegranateJeweler(this);
  AK::FreeHook(this);
  return;
}


/* PlantPomegranateJeweler::CheckProjectileType(int) */

undefined1 __thiscall
PlantPomegranateJeweler::CheckProjectileType(PlantPomegranateJeweler *this,int param_1)

{
  undefined1 uVar1;
  char cVar2;
  long lVar3;
  
  lVar3 = FUN_04cd00e4(*(undefined8 *)(this + 0x10));
  if (0 < *(int *)(this + 0x28)) {
    *(int *)(this + 0x28) = *(int *)(this + 0x28) + -1;
    return 2;
  }
  if (param_1 < 5) {
    if (param_1 < 3) {
      if (param_1 != 2) {
        return 0;
      }
      goto LAB_04cd01ac;
    }
  }
  else {
    cVar2 = FUN_04ccdb2c(lVar3 + 0x2c0);
    if (cVar2 != '\0') {
      return 3;
    }
  }
  cVar2 = FUN_04ccdb2c(lVar3 + 700);
  if (cVar2 != '\0') {
    return 2;
  }
LAB_04cd01ac:
  uVar1 = FUN_04ccdb2c(lVar3 + 0x2b8);
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPomegranateJeweler::LaunchSpecialProjectile() */

void __thiscall PlantPomegranateJeweler::LaunchSpecialProjectile(PlantPomegranateJeweler *this)

{
  vector<BoardEntity*,std::allocator<BoardEntity*>> *this_00;
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  BoardEntity **ppBVar10;
  ulong uVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b0 [8];
  Insets aIStack_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38 [3];
  undefined8 local_20 [3];
  long local_8;
  
  this_00 = (vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x48) = 0;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear(this_00);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_98);
  uVar3 = operator|(2,4);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_98,uVar3);
  lVar6 = FUN_04ccda60(local_98,local_90);
  if (lVar6 == 0) {
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_98);
    goto LAB_04cd15f4;
  }
  Plant::FindTargetInRow
            (aRStack_b0,*(long *)(this + 0x10),*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_98);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_98);
  uVar9 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)&local_80);
  FUN_04cd1438(uVar7,uVar8,uVar9);
  iVar4 = FUN_04ccda60(local_80,local_78);
  if (iVar4 < 5) {
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_80);
    uVar8 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_80);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::
    assign<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,void>
              (this_00,uVar7,uVar8);
  }
  else {
    iVar4 = *(int *)(*(long *)(this + 0x10) + 0x110);
    iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
    Sexy::Insets::Insets
              (aIStack_a8,*(int *)(*(long *)(this + 0x10) + 0x114),iVar4,
               iVar5 - *(int *)(*(long *)(this + 0x10) + 0x114),1);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68,2,
               aIStack_a8);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_38,(vector *)&local_80);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20,(vector *)&local_68);
    ContainerUtil::SubtractContainer<BoardEntity*>
              ((ContainerUtil *)&local_50,
               (vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_38,
               (vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_38);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_50);
    uVar8 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_50);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
              (uVar7,uVar8);
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    uVar7 = local_68;
    if (cVar1 == '\0') {
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_50);
      local_20[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)&local_50);
      uVar8 = __gnu_cxx::
              __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                           *)local_20,4);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::
      assign<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,void>
                (this_00,uVar7,uVar8);
      uVar7 = FUN_04ccda60(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38));
      Sexy::OutputDebugStrF((wchar_t *)"_plantfoodEnemyList size = %d",uVar7);
      lVar6 = FUN_04ccda60(local_68,local_60);
      if (lVar6 != 0) goto LAB_04cd1848;
      ppBVar10 = (BoardEntity **)FUN_04ccda6c(local_50,4);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back(this_00,ppBVar10);
    }
    else {
      lVar6 = FUN_04ccda60(local_68,local_60);
      if (lVar6 == 0) {
        uVar7 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_50);
        local_20[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)&local_50);
        uVar8 = __gnu_cxx::
                __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                             *)local_20,4);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::
        assign<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,void>
                  (this_00,uVar7,uVar8);
        ppBVar10 = (BoardEntity **)FUN_04ccda6c(local_50,0);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back(this_00,ppBVar10);
      }
      else {
        ppBVar10 = (BoardEntity **)FUN_04ccda6c(uVar7,0);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back(this_00,ppBVar10);
        uVar7 = local_50;
        uVar11 = FUN_04ccda60(local_50,local_48);
        if (uVar11 < 3) {
          if (uVar11 == 0) {
            ppBVar10 = (BoardEntity **)FUN_04ccda6c(local_68,1);
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back(this_00,ppBVar10);
            ppBVar10 = (BoardEntity **)FUN_04ccda6c(local_68,2);
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back(this_00,ppBVar10);
            ppBVar10 = (BoardEntity **)FUN_04ccda6c(local_68,3);
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back(this_00,ppBVar10);
          }
          else {
            local_38[0] = std::
                          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                   *)&local_50);
            local_20[0] = std::
                          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                 *)&local_50);
            while (bVar2 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)local_38,(__normal_iterator *)local_20),
                  bVar2) {
              ppBVar10 = (BoardEntity **)
                         std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_38);
              std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back(this_00,ppBVar10);
              eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                        ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_38);
            }
            uVar11 = 0;
            while( true ) {
              lVar6 = FUN_04ccda60(local_50,local_48);
              bVar2 = 3U - lVar6 <= uVar11;
              uVar11 = uVar11 + 1;
              if (bVar2) break;
              ppBVar10 = (BoardEntity **)FUN_04ccda6c(local_68,uVar11);
              std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back(this_00,ppBVar10);
            }
          }
        }
        else {
          ppBVar10 = (BoardEntity **)FUN_04ccda6c(uVar7,0);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back(this_00,ppBVar10);
          ppBVar10 = (BoardEntity **)FUN_04ccda6c(local_50,1);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back(this_00,ppBVar10);
          ppBVar10 = (BoardEntity **)FUN_04ccda6c(local_50,2);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back(this_00,ppBVar10);
        }
LAB_04cd1848:
        ppBVar10 = (BoardEntity **)FUN_04ccda6c(local_68,0);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back(this_00,ppBVar10);
      }
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_98);
LAB_04cd15f4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantPomegranateJeweler::ApplyPlantfood() */

void __thiscall PlantPomegranateJeweler::ApplyPlantfood(PlantPomegranateJeweler *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  LaunchSpecialProjectile(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPomegranateJeweler::OnAnimCommand(std::string const&, std::string const&) */

void PlantPomegranateJeweler::OnAnimCommand(string *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  Insets aIStack_60 [16];
  undefined8 local_50 [3];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
  if (cVar1 == '\0') {
    puVar10 = normalOrderList;
  }
  else {
    puVar10 = avatarOrderList;
  }
  ContainerUtil::FillContainer<PomegranateJewelerProjectileType>((vector *)local_50,puVar10,5);
  bVar2 = std::operator==(param_2,"use_action");
  if (bVar2) {
    cVar1 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
    if (cVar1 == '\0') {
      Plant::FindTargetInRow
                ((RtWeakPtr *)&local_20,*(long *)(param_1 + 0x10),
                 *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x110));
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_20);
      if (bVar2) {
        lVar8 = FUN_04cd00e4(*(undefined8 *)(param_1 + 0x10));
        iVar4 = FUN_04ccda50(*(undefined8 *)(param_1 + 0x10));
        iVar4 = CheckProjectileType((PlantPomegranateJeweler *)param_1,iVar4);
        if (iVar4 == 3) {
          *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar8 + 0x2c4);
        }
        uVar9 = *(undefined8 *)(param_1 + 0x10);
        uVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
        LaunchProjectile((PlantPomegranateJeweler *)param_1,iVar4,uVar9,uVar11);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    }
    else {
      uVar11 = *(undefined8 *)(param_1 + 0x30);
      iVar4 = FUN_04ccda60(uVar11,*(undefined8 *)(param_1 + 0x38));
      if (*(int *)(param_1 + 0x48) == 0) {
        if (4 < iVar4) {
          iVar4 = 4;
        }
        if (0 < iVar4) {
          iVar5 = 0;
          while( true ) {
            puVar6 = (undefined8 *)FUN_04ccda6c(uVar11,(long)iVar5);
            puVar7 = (undefined4 *)FUN_04ccda94(local_50[0],(long)iVar5);
            LaunchProjectile((PlantPomegranateJeweler *)param_1,*puVar7,
                             *(undefined8 *)(param_1 + 0x10),*puVar6);
            iVar5 = *(int *)(param_1 + 0x48) + 1;
            *(int *)(param_1 + 0x48) = iVar5;
            if (iVar4 <= iVar5) break;
            uVar11 = *(undefined8 *)(param_1 + 0x30);
          }
        }
      }
      else if (4 < iVar4) {
        iVar4 = *(int *)(*(long *)(param_1 + 0x10) + 0x110);
        iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
        Sexy::Insets::Insets
                  (aIStack_60,*(int *)(*(long *)(param_1 + 0x10) + 0x114),iVar4,
                   iVar5 - *(int *)(*(long *)(param_1 + 0x10) + 0x114),1);
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
        EntityFinder::GetEntitiesInGridSquares
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38,2,
                   aIStack_60);
        lVar8 = FUN_04ccda60(local_38,local_30);
        if (lVar8 == 0) {
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
          EntityFinder::GetEntities
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2);
          lVar8 = FUN_04ccda60(local_20,local_18);
          if (lVar8 != 0) {
            uVar11 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)&local_20);
            uVar9 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)&local_20);
            std::
            random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
                      (uVar11,uVar9);
            puVar7 = (undefined4 *)FUN_04ccda94(local_50[0],(long)*(int *)(param_1 + 0x48));
            puVar6 = (undefined8 *)FUN_04ccda6c(local_20,0);
            LaunchProjectile((PlantPomegranateJeweler *)param_1,*puVar7,
                             *(undefined8 *)(param_1 + 0x10),*puVar6);
          }
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
        }
        else {
          puVar7 = (undefined4 *)FUN_04ccda94(local_50[0],(long)*(int *)(param_1 + 0x48));
          puVar6 = (undefined8 *)FUN_04ccda6c(local_38,0);
          LaunchProjectile((PlantPomegranateJeweler *)param_1,*puVar7,
                           *(undefined8 *)(param_1 + 0x10),*puVar6);
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
      }
    }
  }
  uVar3 = PlantFramework::OnAnimCommand(param_1,param_2);
  std::vector<PomegranateJewelerProjectileType,std::allocator<PomegranateJewelerProjectileType>>::
  ~vector((vector<PomegranateJewelerProjectileType,std::allocator<PomegranateJewelerProjectileType>>
           *)local_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

