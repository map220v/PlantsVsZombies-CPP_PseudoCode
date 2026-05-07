// Class: GridItemFirecracker


/* GridItemFirecracker::CalcRenderOrder() const */

void __thiscall GridItemFirecracker::CalcRenderOrder(GridItemFirecracker *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(500000,uVar1,uVar2);
  return;
}


/* non-virtual thunk to GridItemFirecracker::CalcRenderOrder() const */

void __thiscall GridItemFirecracker::CalcRenderOrder(GridItemFirecracker *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFirecracker::StaticClassInit() */

void GridItemFirecracker::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemFirecracker");
    (*pcVar2)(plVar1,asStack_10,FUN_03f483d8,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFirecracker::StaticGetClass() */

long * GridItemFirecracker::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemFirecracker",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemFirecracker::GetClass() const */

long * GridItemFirecracker::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemFirecracker",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemFirecracker::GridItemFirecracker() */

void __thiscall GridItemFirecracker::GridItemFirecracker(GridItemFirecracker *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_06798600;
  *(undefined ***)(this + 0x10) = &PTR__GridItemFirecracker_067988b8;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  *(undefined4 *)(this + 0x1ac) = uVar1;
  return;
}


/* GridItemFirecracker::StaticNew() */

GridItemFirecracker * GridItemFirecracker::StaticNew(void)

{
  GridItemFirecracker *this;
  
  this = ::operator_new(0x1b8);
  GridItemFirecracker(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFirecracker::firecrackerDamageTarget(BoardEntity*, float, float) */

void __thiscall
GridItemFirecracker::firecrackerDamageTarget
          (GridItemFirecracker *this,BoardEntity *param_1,float param_2,float param_3)

{
  int *piVar1;
  float fVar2;
  undefined4 uVar3;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  *(float *)(param_1 + 0x4c) = fVar2 + param_3;
  if (*(int *)(param_1 + 0x40) < 1) {
    *(undefined4 *)(param_1 + 0x40) = 1;
    *(int *)(param_1 + 0x44) = (int)param_2;
    uVar3 = PVZ_T();
    *(undefined4 *)(param_1 + 0x48) = uVar3;
  }
  else if (*(int *)(param_1 + 0x40) != 1) {
    local_c = (int)param_2;
    piVar1 = eastl::max_alt<int>(&local_c,(int *)(param_1 + 0x44));
    *(int *)(param_1 + 0x44) = *piVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFirecracker::causeZombieDamage() */

void __thiscall GridItemFirecracker::causeZombieDamage(GridItemFirecracker *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  GridItemFirecrackerProps *pGVar5;
  ulong uVar6;
  undefined8 *puVar7;
  Zombie *this_00;
  int in_w4;
  float fVar8;
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar5 = GridItem::GetProps<GridItemFirecrackerProps>();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar6 = FUN_03f465f8(*(undefined4 *)(this + 0x130));
  iVar3 = FUN_03f465fc(*(undefined4 *)(this + 0x134));
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(uVar6 & 0xffffffff),iVar3,1,1,in_w4);
  uVar4 = FUN_03f465fc(*(undefined4 *)(this + 0x134));
  EntityFinder::GetEntitiesTouchingRectangle(avStack_20,2,(__normal_iterator *)local_30,uVar4,uVar4)
  ;
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_30)
        , bVar1) {
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
    if (this_00 != (Zombie *)0x0) {
      uVar4 = operator|(1,8);
      cVar2 = Zombie::MatchesAny(this_00,uVar4);
      if ((((cVar2 == '\0') &&
           (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this_00,(RealObject *)this),
           cVar2 != '\0')) && (cVar2 = Zombie::HasCondition(this_00,2), cVar2 == '\0')) &&
         (fVar8 = (float)PVZ_T(), fVar8 - *(float *)(this + 0x1a8) < *(float *)(this + 0x1ac))) {
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(pGVar5 + 0xd0),0,this_00,2,1);
      }
      cVar2 = Zombie::MatchesAny(this_00,uVar4);
      if ((cVar2 == '\0') && (*(int *)(this_00 + 0x40) == -1)) {
        firecrackerDamageTarget
                  (this,(BoardEntity *)this_00,*(float *)(pGVar5 + 0xd4),*(float *)(pGVar5 + 0xd0));
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFirecracker::gridItemFade() */

void __thiscall GridItemFirecracker::gridItemFade(GridItemFirecracker *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  undefined8 uVar7;
  int in_w4;
  code *pcVar8;
  float fVar9;
  float fVar10;
  undefined8 local_a0;
  undefined8 local_98;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GetProps<GridItemFirecrackerProps>();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  uVar5 = FUN_03f465f8(*(undefined4 *)(this + 0x130));
  iVar3 = FUN_03f465fc(*(undefined4 *)(this + 0x134));
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(uVar5 & 0xffffffff),iVar3,1,1,in_w4);
  uVar4 = FUN_03f465fc(*(undefined4 *)(this + 0x134));
  EntityFinder::GetEntitiesTouchingRectangle(avStack_80,2,aDStack_68,uVar4,uVar4);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98);
    if (!bVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
    if (this_00 != (Zombie *)0x0) {
      uVar4 = operator|(1,8);
      cVar2 = Zombie::MatchesAny(this_00,uVar4);
      if (((cVar2 == '\0') &&
          (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this_00,(RealObject *)this),
          cVar2 != '\0')) && (cVar2 = Zombie::HasCondition(this_00,2), cVar2 != '\0')) {
        Zombie::EndCondition(this_00,2);
        fVar10 = *(float *)(this_00 + 0x4c);
        fVar9 = (float)PVZ_T();
        if (fVar9 < fVar10) {
LAB_03f49680:
          fVar10 = *(float *)(this_00 + 0x4c);
          fVar9 = (float)PVZ_T();
          iVar3 = *(int *)(this_00 + 0x44);
          pcVar8 = *(code **)(*(long *)this_00 + 0x110);
          uVar7 = operator|(0x20,0x400);
          Sexy::Point::Point(aPStack_90,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)((fVar10 - fVar9) * (float)iVar3),local_88,local_84,aDStack_68,
                     uVar7,aPStack_90,0);
          (*pcVar8)(this_00,aDStack_68);
          DamageInfo::~DamageInfo(aDStack_68);
          *(undefined4 *)(this_00 + 0x40) = 0xffffffff;
        }
      }
      else {
        fVar10 = *(float *)(this_00 + 0x4c);
        fVar9 = (float)PVZ_T();
        if (fVar9 < fVar10) goto LAB_03f49680;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  } while( true );
}


/* GridItemFirecracker::~GridItemFirecracker() */

void __thiscall GridItemFirecracker::~GridItemFirecracker(GridItemFirecracker *this)

{
  *(undefined ***)this = &PTR_GetClass_06798600;
  *(undefined ***)(this + 0x10) = &PTR__GridItemFirecracker_067988b8;
  gridItemFade(this);
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemFirecracker::~GridItemFirecracker() */

void __thiscall GridItemFirecracker::~GridItemFirecracker(GridItemFirecracker *this)

{
  ~GridItemFirecracker(this + -0x10);
  return;
}


/* GridItemFirecracker::~GridItemFirecracker() */

void __thiscall GridItemFirecracker::~GridItemFirecracker(GridItemFirecracker *this)

{
  ~GridItemFirecracker(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemFirecracker::~GridItemFirecracker() */

void __thiscall GridItemFirecracker::~GridItemFirecracker(GridItemFirecracker *this)

{
  ~GridItemFirecracker(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFirecracker::setState(GridItemFirecrackerState) */

void __thiscall GridItemFirecracker::setState(GridItemFirecracker *this,int param_2)

{
  PopAnimRig *pPVar1;
  char *pcVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 2) {
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_68,"lv5_01_2");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onAnimStopped");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aDStack_50,
               (RtId *)aRStack_60,asStack_58);
    PopAnimRig::PlayAndStop
              (pPVar1,asStack_68,0,
               (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId((RtId *)aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  }
  else {
    if (param_2 == 3) {
      this_00 = aRStack_78;
      GridItemAnimation::GetAnimRig();
      pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      std::string::string(asStack_68,"lv5_02");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_58,"onAnimStopped");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aDStack_50,
                 (RtId *)aRStack_60,asStack_58);
      PopAnimRig::PlayAndStop
                (pPVar1,asStack_68,0,
                 (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aDStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aDStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId((RtId *)aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_68);
    }
    else {
      if (param_2 != 1) goto LAB_03f49b34;
      this_00 = aRStack_60;
      GridItemAnimation::GetAnimRig();
      pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      std::string::string(asStack_58,"lv5_01");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_50);
      PopAnimRig::PlayAndContinue(pPVar1,asStack_58,0,aDStack_50);
      std::string::~string(asStack_58);
    }
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(this_00);
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_Plant_FirecrackerFlower_Lv5_Attack");
  }
LAB_03f49b34:
  *(int *)(this + 0x1b0) = param_2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFirecracker::onGridItemInitialize() */

void __thiscall GridItemFirecracker::onGridItemInitialize(GridItemFirecracker *this)

{
  GridItemFirecrackerProps *pGVar1;
  undefined4 uVar2;
  
  pGVar1 = GridItem::GetProps<GridItemFirecrackerProps>();
  *(undefined4 *)(this + 0x1ac) = *(undefined4 *)(pGVar1 + 0xd0);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  setState(this,1);
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar2;
  return;
}


/* GridItemFirecracker::onAnimStopped(std::string const&) */

void __thiscall GridItemFirecracker::onAnimStopped(GridItemFirecracker *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"lv5_01_2");
  if (bVar1) {
    (**(code **)(*(long *)this + 0x48))(this);
    return;
  }
  bVar1 = std::operator==(param_1,"lv5_02");
  if (!bVar1) {
    return;
  }
  setState(this,1);
  return;
}


/* GridItemFirecracker::onUpdate() */

void __thiscall GridItemFirecracker::onUpdate(GridItemFirecracker *this)

{
  float fVar1;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if ((*(int *)(this + 0x1b0) != 1) && (*(int *)(this + 0x1b0) != 3)) {
    return;
  }
  fVar1 = (float)PVZ_T();
  if (fVar1 - *(float *)(this + 0x1a8) <= *(float *)(this + 0x1ac)) {
    causeZombieDamage(this);
    return;
  }
  setState(this,2);
  return;
}

