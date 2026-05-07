// Class: PlantGeraniiFencer


/* PlantGeraniiFencer::GetPlantAttackRect(PlantWeapon) */

undefined8 PlantGeraniiFencer::GetPlantAttackRect(undefined8 param_1)

{
  PlantFramework::GetPlantAttackRect();
  return param_1;
}


/* PlantGeraniiFencer::PlantGeraniiFencer() */

void __thiscall PlantGeraniiFencer::PlantGeraniiFencer(PlantGeraniiFencer *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x30] = (PlantGeraniiFencer)0x0;
  this[0x31] = (PlantGeraniiFencer)0x1;
  this[0x32] = (PlantGeraniiFencer)0x0;
  *(undefined ***)this = &PTR_GetClass_069a7f70;
  this[0x44] = (PlantGeraniiFencer)0x0;
  this[0x45] = (PlantGeraniiFencer)0x0;
  this[0x46] = (PlantGeraniiFencer)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


/* PlantGeraniiFencer::StaticNew() */

PlantGeraniiFencer * PlantGeraniiFencer::StaticNew(void)

{
  PlantGeraniiFencer *this;
  
  this = ::operator_new(0x48);
  PlantGeraniiFencer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeraniiFencer::StaticClassInit() */

void PlantGeraniiFencer::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantGeraniiFencer");
    (*pcVar2)(plVar1,asStack_10,FUN_04d11cec,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGeraniiFencer::StaticGetClass() */

long * PlantGeraniiFencer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantGeraniiFencer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGeraniiFencer::GetClass() const */

long * PlantGeraniiFencer::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantGeraniiFencer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGeraniiFencer::getSupperSkillRect() */

void PlantGeraniiFencer::getSupperSkillRect(void)

{
  int iVar1;
  int iVar2;
  long in_x0;
  int in_w4;
  
  iVar1 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(in_x0 + 0x10));
  iVar2 = SharkMinion::getRow(*(SharkMinion **)(in_x0 + 0x10));
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(ulong)(iVar1 - 1),iVar2 + -1,3,3,in_w4);
  return;
}


/* PlantGeraniiFencer::normalRect() */

void PlantGeraniiFencer::normalRect(void)

{
  long in_x0;
  int in_w4;
  
  BoardTransforms::GridToBoardSpaceRect
            ((BoardTransforms *)(ulong)*(uint *)(*(long *)(in_x0 + 0x10) + 0x114),
             *(int *)(*(long *)(in_x0 + 0x10) + 0x110),2,1,in_w4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeraniiFencer::setInvalidateRect() */

void __thiscall PlantGeraniiFencer::setInvalidateRect(PlantGeraniiFencer *this)

{
  PlantGroup *this_00;
  Point *pPVar1;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieSwashbuckler::updateState_SwingFail(*(ZombieSwashbuckler **)(this + 0x10));
  (**(code **)(**(long **)(this + 0x10) + 0x178))(*(long **)(this + 0x10));
  pPVar1 = *(Point **)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_10,*(int *)(*(long *)(this + 0x10) + 0x114),
                     *(int *)(*(long *)(this + 0x10) + 0x110));
  this_00 = (PlantGroup *)Board::GetPlantGroupAt(pPVar1);
  PlantGroup::SetNewCollisionRect(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGeraniiFencer::~PlantGeraniiFencer() */

void __thiscall PlantGeraniiFencer::~PlantGeraniiFencer(PlantGeraniiFencer *this)

{
  *(undefined ***)this = &PTR_GetClass_069a7f70;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantGeraniiFencer::~PlantGeraniiFencer() */

void __thiscall PlantGeraniiFencer::~PlantGeraniiFencer(PlantGeraniiFencer *this)

{
  ~PlantGeraniiFencer(this);
  AK::FreeHook(this);
  return;
}


/* PlantGeraniiFencer::CanTargetZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

undefined1
PlantGeraniiFencer::CanTargetZombie(undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = (**(code **)(*plVar2 + 0x330))();
  if (cVar1 != '\0') {
    uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = RealObject::IsOnOpposingTeam(uVar3,1);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}


/* PlantGeraniiFencer::ApplyPlantfood() */

void __thiscall PlantGeraniiFencer::ApplyPlantfood(PlantGeraniiFencer *this)

{
  float fVar1;
  
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0x10;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x28) = fVar1 + 1.0;
  return;
}


/* PlantGeraniiFencer::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantGeraniiFencer::onAnimStoppedCallback(PlantGeraniiFencer *this,string *param_1)

{
  bool bVar1;
  float fVar2;
  
  bVar1 = std::operator==(param_1,"attack2");
  if (bVar1) {
    *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x40) = fVar2 + 3.0;
  }
  return;
}


/* PlantGeraniiFencer::Initialize() */

void __thiscall PlantGeraniiFencer::Initialize(PlantGeraniiFencer *this)

{
  undefined4 uVar1;
  char cVar2;
  PlantAnimRig *this_00;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  PlantFramework::Initialize((PlantFramework *)this);
  lVar3 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar3 + 200) = 10;
  lVar3 = FUN_04d12c84(lVar3);
  fVar5 = (float)PVZ_T();
  fVar6 = *(float *)(lVar3 + 0x2b8);
  uVar1 = *(undefined4 *)(lVar3 + 0x2c8);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(lVar3 + 0x2c0);
  *(float *)(this + 0x34) = fVar5 + fVar6;
  *(undefined4 *)(this + 0x3c) = uVar1;
  fVar5 = (float)PVZ_T();
  uVar4 = *(undefined8 *)(this + 0x10);
  *(float *)(this + 0x40) = fVar5 + 3.0;
  cVar2 = FUN_04d113dc(uVar4);
  if (cVar2 == '\0') {
    return;
  }
  this_00 = (PlantAnimRig *)FUN_04d12d64(uVar4);
  PlantAnimRig::SetPlantLevel(this_00,5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeraniiFencer::CancelPlantfood() */

void __thiscall PlantGeraniiFencer::CancelPlantfood(PlantGeraniiFencer *this)

{
  float fVar1;
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  DamageInfo::DamageInfo(aDStack_68);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
  local_60 = _FUN_04d13118;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x40) = fVar1 + 3.0;
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeraniiFencer::normalAttack() */

void __thiscall PlantGeraniiFencer::normalAttack(PlantGeraniiFencer *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  Zombie *pZVar5;
  GridItem *pGVar6;
  long lVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  DamageInfo *pDVar11;
  undefined8 local_b0;
  undefined8 local_a8;
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined1 auStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  normalRect();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  uVar3 = operator|(2,4);
  EntityFinder::GetEntitiesInRectangle(avStack_80,uVar3,auStack_90);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8);
  if (bVar1) {
    do {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0)
      ;
      pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
      pGVar6 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar4);
      lVar7 = FUN_04d12c84(*(undefined8 *)(this + 0x10));
      fVar10 = *(float *)(lVar7 + 0x2c4);
      fVar9 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
      pDVar11._0_4_ = (DamageInfo *)(fVar9 * fVar10);
      if (pZVar5 != (Zombie *)0x0) {
        cVar2 = RealObject::IsOnOpposingTeam(pZVar5,1);
        if (cVar2 == '\0') {
          pcVar8 = *(code **)(*(long *)pZVar5 + 0x110);
          Sexy::Point::Point(aPStack_a0,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
          DamageInfo::DamageInfo(pDVar11._0_4_,local_98,local_94,aDStack_68,aPStack_a0,0);
          (*pcVar8)(pZVar5,aDStack_68);
          DamageInfo::~DamageInfo(aDStack_68);
        }
      }
      if ((pGVar6 != (GridItem *)0x0) &&
         (cVar2 = (**(code **)(*(long *)pGVar6 + 0x200))(pGVar6), cVar2 != '\0')) {
        pcVar8 = *(code **)(*(long *)pGVar6 + 0x110);
        Sexy::Point::Point(aPStack_a0,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
        DamageInfo::DamageInfo(pDVar11._0_4_,local_98,local_94,aDStack_68,aPStack_a0,0);
        (*pcVar8)(pGVar6,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8);
    } while (bVar1);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeraniiFencer::supperSkill(float) */

void __thiscall PlantGeraniiFencer::supperSkill(PlantGeraniiFencer *this,float param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  Zombie *this_00;
  undefined8 *puVar5;
  GridItem *pGVar6;
  ZombieTosserSubSystem *pZVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 local_f8;
  undefined8 local_f0;
  Point aPStack_e8 [8];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 auStack_d8 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_c8 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b0 [72];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  DamageInfo *local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getSupperSkillRect();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_c8);
  uVar3 = operator|(2,4);
  EntityFinder::GetEntitiesInRectangle(avStack_c8,uVar3,auStack_d8);
  Plant::GetProps();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  FUN_04d11420(*(undefined8 *)(lVar4 + 0x70),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  if (param_1 != 0.0) {
    local_60._0_4_ = (DamageInfo *)((float)local_60._0_4_ * 2.5);
  }
  Sexy::Point::Point(aPStack_e8,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_e0,1.0,0.0);
  DamageInfo::DamageInfo(local_60._0_4_,local_e0,local_dc,aRStack_68,aPStack_e8,0);
  local_f8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_c8);
  local_f0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_c8);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_f8,(__normal_iterator *)&local_f0), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f8);
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar5);
    if (bVar1) {
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
      if (this_00 != (Zombie *)0x0) {
        pcVar9 = *(code **)(*(long *)this + 0x3e0);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_e0,(RtWeakPtrBase *)aPStack_e8);
        cVar2 = (*pcVar9)(this,(FastCurve *)&local_e0,1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_e0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_e8)
        ;
        if (cVar2 != '\0') {
          (**(code **)(*(long *)this_00 + 0x110))(this_00,aRStack_68);
          cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
          if (((cVar2 != '\0') && (cVar2 = Zombie::CanBeLaunchedByPlants(this_00), cVar2 != '\0'))
             && (param_1 != 0.0)) {
            pZVar7 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
            uVar8 = std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this_00);
            RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b0);
            ZombieTosserSubSystem::LaunchZombie
                      ((ZombieTosserSubSystem *)0x41a00000,0x40000000,pZVar7,this_00,uVar8,
                       aRStack_b0,1);
            RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
            ::~RtReflectionDelegate
                      ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                        *)aRStack_b0);
          }
        }
      }
    }
    else {
      bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)*puVar5);
      if (((bVar1) &&
          (pGVar6 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar5), pGVar6 != (GridItem *)0x0))
         && (cVar2 = (**(code **)(*(long *)pGVar6 + 0x200))(), cVar2 != '\0')) {
        (**(code **)(*(long *)pGVar6 + 0x110))(pGVar6,aRStack_68);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_f8);
  }
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeraniiFencer::findAttackTartget() */

void PlantGeraniiFencer::findAttackTartget(void)

{
  bool bVar1;
  char cVar2;
  long *in_x0;
  undefined8 *puVar3;
  Zombie *pZVar4;
  GridItem *pGVar5;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  UnchartedModePlantNumData aUStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_30,1,0);
  (**(code **)(*in_x0 + 0x2b8))(auStack_18);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  operator|(2,4);
  EntityFinder::GetEntitiesInRectangle();
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)in_x8);
  do {
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)in_x8);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
    while( true ) {
      if (!bVar1) {
        if (local_8 == ___stack_chk_guard) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28)
      ;
      pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28)
      ;
      pGVar5 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar3);
      if (((pZVar4 != (Zombie *)0x0) &&
          (((cVar2 = (**(code **)(*(long *)pZVar4 + 0x330))(pZVar4), cVar2 != '\0' ||
            (cVar2 = (**(code **)(*(long *)pZVar4 + 0x328))(pZVar4), cVar2 != '\0')) ||
           (cVar2 = RealObject::IsOnOpposingTeam(pZVar4,1), cVar2 == '\0')))) ||
         ((pGVar5 != (GridItem *)0x0 &&
          (cVar2 = (**(code **)(*(long *)pGVar5 + 0x200))(pGVar5), cVar2 == '\0')))) break;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)in_x8);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_20,(__normal_iterator *)&local_28);
    local_28 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase();
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeraniiFencer::jumpBackward() */

void __thiscall PlantGeraniiFencer::jumpBackward(PlantGeraniiFencer *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  Zombie *pZVar6;
  GridItem *pGVar7;
  RtObject *this_00;
  code *pcVar8;
  float fVar9;
  undefined8 local_90;
  undefined8 local_88;
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_80 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
  fVar9 = (float)PVZ_T();
  *(float *)(this + 0x40) = fVar9 + 3.0;
  Plant::GetProps();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  lVar3 = FUN_04d11420(*(undefined8 *)(lVar3 + 0x70),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  findAttackTartget();
  this[0x30] = (PlantGeraniiFencer)0x0;
  setInvalidateRect(this);
  lVar4 = FUN_04d12d64(*(undefined8 *)(this + 0x10));
  FUN_04d1140c(lVar4 + 0x3b9,0);
  this[0x44] = (PlantGeraniiFencer)0x0;
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty(avStack_80);
  if (cVar1 == '\0') {
    local_90 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_90,(__normal_iterator *)&local_88);
    if (bVar2) {
      do {
        puVar5 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
        this_00 = (RtObject *)*puVar5;
        if (this_00 != (RtObject *)0x0) {
          pZVar6 = Sexy::RtObject::Cast<Zombie>(this_00);
          pGVar7 = Sexy::RtObject::Cast<GridItem>(this_00);
          if (pZVar6 != (Zombie *)0x0) {
            pcVar8 = *(code **)(*(long *)pZVar6 + 0x110);
            Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
            (*pcVar8)(pZVar6,aRStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
          }
          if ((pGVar7 != (GridItem *)0x0) &&
             (cVar1 = (**(code **)(*(long *)pGVar7 + 0x200))(pGVar7), cVar1 != '\0')) {
            pcVar8 = *(code **)(*(long *)pGVar7 + 0x110);
            Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
            (*pcVar8)(pGVar7,aRStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_90,(__normal_iterator *)&local_88)
        ;
      } while (bVar2);
    }
    fVar9 = (float)PVZ_T();
    *(float *)(this + 0x2c) = fVar9 + *(float *)(lVar3 + 0x24);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_80);
  }
  else {
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeraniiFencer::jumpForward(bool) */

void __thiscall PlantGeraniiFencer::jumpForward(PlantGeraniiFencer *this,bool param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  Zombie *this_00;
  GridItem *pGVar8;
  long lVar9;
  GeraniiFencerSubsystem *pGVar10;
  ZombieGargantuar *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long extraout_x0;
  ulong uVar11;
  ZombieFairyTaleGargantuar *this_03;
  undefined8 uVar12;
  RtObject *this_04;
  float fVar13;
  undefined8 local_f0;
  undefined8 local_e8;
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_e0 [24];
  DamageInfo aDStack_c8 [8];
  undefined4 local_c0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  findAttackTartget();
  this[0x30] = (PlantGeraniiFencer)0x1;
  setInvalidateRect(this);
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty(avStack_e0);
  if (cVar1 == '\0') {
    local_f0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_e0);
    local_e8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_e0);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_f0,(__normal_iterator *)&local_e8);
    if (bVar2) {
      do {
        puVar7 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f0);
        this_04 = (RtObject *)*puVar7;
        if (this_04 == (RtObject *)0x0) {
          this_00 = (Zombie *)0x0;
          pGVar8 = (GridItem *)0x0;
        }
        else {
          this_00 = Sexy::RtObject::Cast<Zombie>(this_04);
          pGVar8 = Sexy::RtObject::Cast<GridItem>(this_04);
        }
        Plant::GetProps();
        lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
        FUN_04d11420(*(undefined8 *)(lVar9 + 0x70),0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
        DamageInfo::DamageInfo(aDStack_c8);
        Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
        local_c0 = local_60;
        DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
        if (this_00 == (Zombie *)0x0) {
          if ((pGVar8 != (GridItem *)0x0) &&
             (cVar1 = (**(code **)(*(long *)pGVar8 + 0x200))(pGVar8), cVar1 != '\0')) {
            (**(code **)(*(long *)pGVar8 + 0x110))(pGVar8,aDStack_c8);
          }
        }
        else {
          uVar3 = FUN_04d113d4(*(undefined8 *)(this + 0x10));
          switch(uVar3) {
          case 2:
            iVar4 = Zombie::GetSizeType(this_00);
            if (iVar4 == 0) {
              iVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
              iVar5 = SharkMinion::getRow((SharkMinion *)this_00);
              if (param_1) {
                pGVar10 = Board::GetGameSubSystem<GeraniiFencerSubsystem>
                                    (*(Board **)(gLawnApp + 0x9f0));
                GeraniiFencerSubsystem::StunZombies
                          (pGVar10,iVar4,iVar5,*(float *)(this + 0x38),false,false);
              }
            }
          case 1:
switchD_04d13dd8_caseD_1:
            (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_c8);
            break;
          case 3:
          case 4:
          case 5:
            iVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
            iVar5 = SharkMinion::getRow((SharkMinion *)this_00);
            cVar1 = FUN_04d113dc(*(undefined8 *)(this + 0x10));
            if ((cVar1 == '\0') || (this[0x46] == (PlantGeraniiFencer)0x0)) {
              if ((param_1) && (iVar6 = Zombie::GetSizeType(this_00), iVar6 < 2)) {
                pGVar10 = Board::GetGameSubSystem<GeraniiFencerSubsystem>
                                    (*(Board **)(gLawnApp + 0x9f0));
                GeraniiFencerSubsystem::StunZombies
                          (pGVar10,iVar4,iVar5,*(float *)(this + 0x38),false,true);
              }
              goto switchD_04d13dd8_caseD_1;
            }
            pGVar10 = Board::GetGameSubSystem<GeraniiFencerSubsystem>(*(Board **)(gLawnApp + 0x9f0))
            ;
            GeraniiFencerSubsystem::StunZombies
                      (pGVar10,iVar4,iVar5,*(float *)(this + 0x38),true,true);
            this_01 = Sexy::RtObject::Cast<ZombieGargantuar>((RtObject *)this_00);
            if ((this_01 != (ZombieGargantuar *)0x0) &&
               (iVar4 = Zombie::GetSizeType((Zombie *)this_01), iVar4 == 2)) {
              this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this_01);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
              nop();
              iVar4 = FUN_04d113c4(*(undefined4 *)(this_01 + 0x800));
              uVar11 = FUN_04d11430(*(undefined8 *)(extraout_x0 + 0x210),
                                    *(undefined8 *)(extraout_x0 + 0x218));
              if ((ulong)(long)iVar4 < uVar11) {
                bVar2 = Sexy::RtObject::IsA<ZombieFairyTaleGargantuar>((RtObject *)this_01);
                if (bVar2) {
                  nop();
                  ZombieFairyTaleGargantuar::ShowImpLayers(this_03,false);
                }
                else {
                  FUN_04d113c8(this_01 + 0x800,iVar4 + 1);
                  ZombieGargantuar::SetHiddenImp(this_01,iVar4);
                }
              }
              Zombie::ApplyCondition((Zombie *)0x40000000,0,this_01,2,1);
            }
            lVar9 = FUN_04d12c84(*(undefined8 *)(this + 0x10));
            local_c0 = *(undefined4 *)(lVar9 + 700);
            (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_c8);
          }
        }
        DamageInfo::~DamageInfo(aDStack_c8);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_f0);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_f0,(__normal_iterator *)&local_e8)
        ;
      } while (bVar2);
    }
    uVar12 = *(undefined8 *)(this + 0x10);
    cVar1 = FUN_04d113dc(uVar12);
    if ((cVar1 != '\0') && (this[0x46] != (PlantGeraniiFencer)0x0)) {
      this[0x46] = (PlantGeraniiFencer)0x0;
      lVar9 = FUN_04d12c84(uVar12);
      fVar13 = (float)PVZ_T();
      *(float *)(this + 0x34) = fVar13 + *(float *)(lVar9 + 0x2b8);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_e0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeraniiFencer::OnAnimCommand(std::string const&, std::string const&) */

void __thiscall
PlantGeraniiFencer::OnAnimCommand(PlantGeraniiFencer *this,string *param_1,string *param_2)

{
  bool bVar1;
  ulong uVar2;
  RealObject *pRVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"use_special");
  if (bVar1) {
    bVar1 = std::operator==(param_2,"forward");
    if (bVar1) {
      jumpForward(this,(bool)this[0x44]);
      bVar1 = true;
    }
    else {
      bVar1 = std::operator==(param_2,"backward");
      if (!bVar1) {
        bVar1 = std::operator==(param_2,"stroke");
        if (bVar1) {
          pRVar3 = *(RealObject **)(this + 0x10);
          std::string::string(asStack_10,"Play_Roseswordman_Attack_1");
          RealObject::PlayPositionalSound(pRVar3,asStack_10,0.0);
          std::string::~string(asStack_10);
          nop();
          supperSkill(this,0.0);
        }
        else {
          bVar1 = std::operator==(param_2,"sparkle");
          if (bVar1) {
            pRVar3 = *(RealObject **)(this + 0x10);
            std::string::string(asStack_10,"Play_Roseswordman_Attack_1");
            RealObject::PlayPositionalSound(pRVar3,asStack_10,0.0);
            std::string::~string(asStack_10);
            nop();
            supperSkill(this,500.0);
          }
        }
        goto LAB_04d1419c;
      }
      pRVar3 = *(RealObject **)(this + 0x10);
      std::string::string(asStack_10,"Play_Roseswordman_Attack_2");
      RealObject::PlayPositionalSound(pRVar3,asStack_10,0.0);
      std::string::~string(asStack_10);
      nop();
      jumpBackward(this);
    }
    uVar2 = (ulong)bVar1;
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
LAB_04d1419c:
    bVar1 = std::operator==(param_1,"normal");
    uVar2 = (ulong)bVar1;
    if (bVar1) {
      uVar2 = normalAttack(this);
    }
    if (local_8 == ___stack_chk_guard) {
      PlantFramework::OnAnimCommand((string *)this,param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeraniiFencer::findNormalTartget() */

void PlantGeraniiFencer::findNormalTartget(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long in_x0;
  undefined8 *puVar4;
  Zombie *pZVar5;
  GridItem *pGVar6;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_28;
  undefined8 local_20 [2];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpaceRect
            ((BoardTransforms *)(ulong)*(uint *)(*(long *)(in_x0 + 0x10) + 0x114),
             *(int *)(*(long *)(in_x0 + 0x10) + 0x110),1,1,(int)___stack_chk_guard);
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  local_10 = (int)((double)local_10 + (double)iVar3 * 0.7);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  operator|(2,4);
  EntityFinder::GetEntitiesInRectangle();
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)in_x8);
  do {
    local_20[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)in_x8);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)local_20);
    while( true ) {
      if (!bVar1) {
        if (local_8 == ___stack_chk_guard) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28)
      ;
      pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28)
      ;
      pGVar6 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar4);
      if (((pZVar5 != (Zombie *)0x0) &&
          (((cVar2 = (**(code **)(*(long *)pZVar5 + 0x330))(pZVar5), cVar2 != '\0' ||
            (cVar2 = (**(code **)(*(long *)pZVar5 + 0x328))(pZVar5), cVar2 != '\0')) ||
           (cVar2 = RealObject::IsOnOpposingTeam(pZVar5,1), cVar2 == '\0')))) ||
         ((pGVar6 != (GridItem *)0x0 &&
          (cVar2 = (**(code **)(*(long *)pGVar6 + 0x200))(pGVar6), cVar2 == '\0')))) break;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
      local_20[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)in_x8);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)local_20);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)local_20,(__normal_iterator *)&local_28);
    local_28 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase();
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeraniiFencer::setState(GeraniiFencerState) */

void __thiscall PlantGeraniiFencer::setState(PlantGeraniiFencer *this,int param_2)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  ZombieGargantuar *pZVar6;
  PlantAnimRig_GeraniiFencer *pPVar7;
  long lVar8;
  long *plVar9;
  RealObject *pRVar10;
  undefined8 uVar11;
  code *pcVar12;
  float fVar13;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80 [3];
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  pRVar10 = *(RealObject **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  *(int *)(pRVar10 + 200) = param_2;
  if (param_2 == 0xd) {
    std::string::string((string *)avStack_68,"Play_Roseswordman_Attack_2");
    RealObject::PlayPositionalSound(pRVar10,(string *)avStack_68,0.0);
    std::string::~string((string *)avStack_68);
    nop();
    pPVar7 = (PlantAnimRig_GeraniiFencer *)FUN_04d12d64(*(undefined8 *)(this + 0x10));
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_88);
    std::string::string((string *)avStack_68,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
               (RtId *)local_80,(string *)avStack_68);
    PlantAnimRig_GeraniiFencer::PlayNormalAttack(pPVar7,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)avStack_68);
    nop();
    Sexy::RtId::~RtId((RtId *)local_80);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
    goto LAB_04d14510;
  }
  if (param_2 == 0xe) {
    findAttackTartget();
    cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_80);
    if (cVar2 == '\0') {
      bVar1 = true;
      local_90 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)local_80);
      local_88 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_80);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88),
            bVar3) {
        puVar5 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
        pZVar6 = Sexy::RtObject::Cast<ZombieGargantuar>((RtObject *)*puVar5);
        if (((pZVar6 != (ZombieGargantuar *)0x0) &&
            (iVar4 = Zombie::GetSizeType((Zombie *)pZVar6), iVar4 == 2)) &&
           (iVar4 = Zombie::getZombieStateSerialization((Zombie *)pZVar6), iVar4 == 0x1f)) {
          findNormalTartget();
          cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty(avStack_68);
          if (cVar2 == '\0') {
            setState(this,0xd);
          }
          else {
            *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
          }
          bVar1 = false;
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_68);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
      }
      if (bVar1) {
        pRVar10 = *(RealObject **)(this + 0x10);
        iVar4 = FUN_04d113d4(pRVar10);
        if (1 < iVar4) {
          fVar13 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
          if (fVar13 < *(float *)(this + 0x3c)) {
            this[0x44] = (PlantGeraniiFencer)0x1;
            lVar8 = FUN_04d12d64(*(undefined8 *)(this + 0x10));
            FUN_04d1140c(lVar8 + 0x3b9,1);
            pRVar10 = *(RealObject **)(this + 0x10);
          }
          else {
            pRVar10 = *(RealObject **)(this + 0x10);
          }
        }
        cVar2 = FUN_04d113dc(pRVar10);
        if (cVar2 != '\0') {
          fVar13 = (float)PVZ_T();
          if (*(float *)(this + 0x34) <= fVar13) {
            this[0x44] = (PlantGeraniiFencer)0x1;
            this[0x46] = (PlantGeraniiFencer)0x1;
            lVar8 = FUN_04d12d64(*(undefined8 *)(this + 0x10));
            FUN_04d1140c(lVar8 + 0x3b9,1);
            lVar8 = FUN_04d12d64(*(undefined8 *)(this + 0x10));
            FUN_04d11400(lVar8 + 0x3b8);
            pRVar10 = *(RealObject **)(this + 0x10);
          }
          else {
            pRVar10 = *(RealObject **)(this + 0x10);
          }
        }
        std::string::string((string *)avStack_68,"Play_Roseswordman_Attack_2");
        RealObject::PlayPositionalSound(pRVar10,(string *)avStack_68,0.0);
        std::string::~string((string *)avStack_68);
        nop();
        plVar9 = (long *)FUN_04d12d64(*(undefined8 *)(this + 0x10));
        pcVar12 = *(code **)(*plVar9 + 0x130);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_90);
        std::string::string((string *)avStack_68,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   (RtId *)&local_88,(string *)avStack_68);
        (*pcVar12)(plVar9,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string((string *)avStack_68);
        nop();
        Sexy::RtId::~RtId((RtId *)&local_88);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_80);
        goto LAB_04d14510;
      }
    }
    else {
      *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
      fVar13 = (float)PVZ_T();
      *(float *)(this + 0x40) = fVar13 + 3.0;
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_80);
    goto LAB_04d14510;
  }
  if (param_2 != 0xc) goto LAB_04d14510;
  findNormalTartget();
  cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty(avStack_68);
  if (cVar2 == '\0') {
    bVar1 = true;
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_68);
    local_80[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_68);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_88,(__normal_iterator *)local_80), bVar3)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88)
      ;
      if ((((RtObject *)*puVar5 != (RtObject *)0x0) &&
          (pZVar6 = Sexy::RtObject::Cast<ZombieGargantuar>((RtObject *)*puVar5),
          pZVar6 != (ZombieGargantuar *)0x0)) &&
         ((iVar4 = Zombie::GetSizeType((Zombie *)pZVar6), iVar4 == 2 &&
          (iVar4 = Zombie::getZombieStateSerialization((Zombie *)pZVar6), iVar4 == 0x1f)))) {
        bVar1 = false;
        setState(this,0xd);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
    }
    if (bVar1) {
      pRVar10 = *(RealObject **)(this + 0x10);
      std::string::string((string *)local_80,"Play_Roseswordman_Attack_2");
      RealObject::PlayPositionalSound(pRVar10,(string *)local_80,0.0);
      std::string::~string((string *)local_80);
      nop();
      uVar11 = *(undefined8 *)(this + 0x10);
      cVar2 = FUN_04d113dc(uVar11);
      if (cVar2 == '\0') {
LAB_04d1481c:
        pPVar7 = (PlantAnimRig_GeraniiFencer *)FUN_04d12d64(uVar11);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_90);
        std::string::string((string *)local_80,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   (generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88,(string *)local_80
                  );
        PlantAnimRig_GeraniiFencer::PlayNormalAttack
                  (pPVar7,(RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
      }
      else {
        fVar13 = (float)PVZ_T();
        uVar11 = *(undefined8 *)(this + 0x10);
        if (fVar13 < *(float *)(this + 0x34)) goto LAB_04d1481c;
        this[0x44] = (PlantGeraniiFencer)0x1;
        this[0x46] = (PlantGeraniiFencer)0x1;
        lVar8 = FUN_04d12d64(uVar11);
        FUN_04d1140c(lVar8 + 0x3b9,1);
        lVar8 = FUN_04d12d64(*(undefined8 *)(this + 0x10));
        FUN_04d11400(lVar8 + 0x3b8);
        plVar9 = (long *)FUN_04d12d64(*(undefined8 *)(this + 0x10));
        pcVar12 = *(code **)(*plVar9 + 0x130);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_90);
        std::string::string((string *)local_80,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   (generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88,(string *)local_80
                  );
        (*pcVar12)(plVar9,(RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
      }
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)local_80);
      nop();
      Sexy::RtId::~RtId((RtId *)&local_88);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
    }
  }
  else {
    setState(this,0xe);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_68);
LAB_04d14510:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeraniiFencer::UpdateActions() */

void __thiscall PlantGeraniiFencer::UpdateActions(PlantGeraniiFencer *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  ZombieGargantuar *this_00;
  float fVar6;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 auStack_30 [8];
  int local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(*(long *)(this + 0x10) + 200) == 10) {
    fVar6 = (float)PVZ_T();
    if (*(float *)(this + 0x2c) < fVar6) {
      setState(this,0xc);
    }
  }
  else if (*(int *)(*(long *)(this + 0x10) + 200) == 0xd) {
    bVar1 = true;
    normalRect();
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    local_28 = local_28 + iVar3;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    uVar4 = operator|(2,4);
    EntityFinder::GetEntitiesInRectangle(avStack_20,uVar4,auStack_30);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      this_00 = Sexy::RtObject::Cast<ZombieGargantuar>((RtObject *)*puVar5);
      if (((this_00 != (ZombieGargantuar *)0x0) &&
          (iVar3 = Zombie::GetSizeType((Zombie *)this_00), iVar3 == 2)) &&
         (iVar3 = Zombie::getZombieStateSerialization((Zombie *)this_00), iVar3 == 0x1f)) {
        bVar1 = false;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    if (bVar1) {
      *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

