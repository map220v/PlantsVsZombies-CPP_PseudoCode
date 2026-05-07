// Class: GridItemArtifactBlackhole


/* GridItemArtifactBlackhole::OnWaveDragAnimDone(std::string const&) */

void GridItemArtifactBlackhole::OnWaveDragAnimDone(string *param_1)

{
  *(undefined4 *)(param_1 + 0x1a8) = 4;
  return;
}


/* GridItemArtifactBlackhole::CalcRenderOrder() const */

void __thiscall GridItemArtifactBlackhole::CalcRenderOrder(GridItemArtifactBlackhole *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = BoardConstants::NUMBER_OF_ROWS();
  uVar2 = FUN_04caabcc(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(iVar1 + 0x61e68,uVar2,1);
  return;
}


/* non-virtual thunk to GridItemArtifactBlackhole::CalcRenderOrder() const */

void __thiscall GridItemArtifactBlackhole::CalcRenderOrder(GridItemArtifactBlackhole *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactBlackhole::StaticClassInit() */

void GridItemArtifactBlackhole::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemArtifactBlackhole");
    (*pcVar2)(plVar1,asStack_10,FUN_04cb16e0,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemArtifactBlackhole::StaticGetClass() */

long * GridItemArtifactBlackhole::StaticGetClass(void)

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
  uVar2 = GridItemAnimController::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemArtifactBlackhole",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemArtifactBlackhole::GetClass() const */

long * GridItemArtifactBlackhole::GetClass(void)

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
  uVar2 = GridItemAnimController::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemArtifactBlackhole",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemArtifactBlackhole::SetZombieMass(float, float, float, float) */

void __thiscall
GridItemArtifactBlackhole::SetZombieMass
          (GridItemArtifactBlackhole *this,float param_1,float param_2,float param_3,float param_4)

{
  *(float *)(this + 0x1c8) = param_1;
  *(float *)(this + 0x1cc) = param_2;
  *(float *)(this + 0x1d0) = param_3;
  *(float *)(this + 0x1d4) = param_4;
  return;
}


/* GridItemArtifactBlackhole::SetBigZombieDamage(float) */

void __thiscall
GridItemArtifactBlackhole::SetBigZombieDamage(GridItemArtifactBlackhole *this,float param_1)

{
  *(float *)(this + 0x1d8) = param_1;
  return;
}


/* GridItemArtifactBlackhole::IsSmallZombieMass(Zombie*) */

bool __thiscall
GridItemArtifactBlackhole::IsSmallZombieMass(GridItemArtifactBlackhole *this,Zombie *param_1)

{
  int iVar1;
  
  iVar1 = Zombie::GetSizeType(param_1);
  return iVar1 == 0;
}


/* GridItemArtifactBlackhole::IsMidZombieMass(Zombie*) */

bool __thiscall
GridItemArtifactBlackhole::IsMidZombieMass(GridItemArtifactBlackhole *this,Zombie *param_1)

{
  int iVar1;
  
  iVar1 = Zombie::GetSizeType(param_1);
  return iVar1 == 1;
}


/* GridItemArtifactBlackhole::IsBigZombieMass(Zombie*) */

bool __thiscall
GridItemArtifactBlackhole::IsBigZombieMass(GridItemArtifactBlackhole *this,Zombie *param_1)

{
  int iVar1;
  
  iVar1 = Zombie::GetSizeType(param_1);
  return iVar1 == 2;
}


/* GridItemArtifactBlackhole::IsImpZombieMass(Zombie*) */

bool __thiscall
GridItemArtifactBlackhole::IsImpZombieMass(GridItemArtifactBlackhole *this,Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  ZombieImp *pZVar3;
  ZombieChicken *pZVar4;
  
  pZVar3 = Sexy::RtObject::Cast<ZombieImp>((RtObject *)param_1);
  if ((pZVar3 == (ZombieImp *)0x0) && (cVar2 = Zombie::IsFlying(param_1), cVar2 == '\0')) {
    pZVar4 = Sexy::RtObject::Cast<ZombieChicken>((RtObject *)param_1);
    bVar1 = pZVar4 != (ZombieChicken *)0x0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


/* GridItemArtifactBlackhole::CaclZombieMass(Zombie*) */

undefined4 __thiscall
GridItemArtifactBlackhole::CaclZombieMass(GridItemArtifactBlackhole *this,Zombie *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = IsImpZombieMass(this,param_1);
  if (cVar1 == '\0') {
    cVar1 = IsSmallZombieMass(this,param_1);
    if (cVar1 != '\0') {
      return *(undefined4 *)(this + 0x1cc);
    }
    cVar1 = IsMidZombieMass(this,param_1);
    if (cVar1 == '\0') {
      cVar1 = IsBigZombieMass(this,param_1);
      uVar2 = 0x3f800000;
      if (cVar1 != '\0') {
        uVar2 = *(undefined4 *)(this + 0x1d4);
      }
    }
    else {
      uVar2 = *(undefined4 *)(this + 0x1d0);
    }
  }
  else {
    uVar2 = *(undefined4 *)(this + 0x1c8);
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactBlackhole::DragZombieByWave(Zombie*) */

void GridItemArtifactBlackhole::DragZombieByWave(Zombie *param_1)

{
  int iVar1;
  ZombieTosserSubSystem *pZVar2;
  undefined8 *puVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x1;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80 [4];
  undefined4 local_70;
  float local_6c;
  undefined4 local_60;
  float local_5c;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x1 != (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)0x0) {
    pZVar2 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    local_a0 = *puVar3;
    local_98 = *(undefined4 *)(puVar3 + 1);
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(in_x1);
    local_90 = *puVar3;
    local_88 = *(undefined4 *)(puVar3 + 1);
    local_80[0] = Sexy::SexyVector3::operator-((SexyVector3 *)&local_a0,(SexyVector3 *)&local_90);
    fVar4 = (float)DVec3::getLength((DVec3 *)local_80);
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar5 = (float)CaclZombieMass((GridItemArtifactBlackhole *)param_1,(Zombie *)in_x1);
    fVar6 = (float)iVar1;
    fVar5 = fVar6 / fVar5;
    if (((fVar5 <= fVar4) && (fVar5 < fVar4)) && (0.0 < fVar4)) {
      local_70 = Sexy::SexyVector3::operator*((SexyVector3 *)local_80,fVar5 / fVar4);
      local_6c = fVar6;
      local_60 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_90,(SexyVector3 *)&local_70);
      local_5c = fVar6;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_a0,(SexyVector3 *)&local_60);
    }
    RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
    ZombieTosserSubSystem::LaunchZombie((ZombieTosserSubSystem *)0x3dcccccd,0x3f59999a,pZVar2);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemArtifactBlackhole::FindTargets() */

void GridItemArtifactBlackhole::FindTargets(void)

{
  long in_x0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  if (*(int *)(in_x0 + 0x1b4) == 0) {
    EntityFinder::GetEntitiesOnBoard();
    return;
  }
  if (*(int *)(in_x0 + 0x1b4) != 1) {
    return;
  }
  EntityFinder::GetEntitiesInGridSquares();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactBlackhole::PlayWaveDragAnim() */

void __thiscall GridItemArtifactBlackhole::PlayWaveDragAnim(GridItemArtifactBlackhole *this)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  *(undefined4 *)(this + 0x1a8) = 5;
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
  std::string::string(asStack_68,"wave_drag");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"OnWaveDragAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar1,asStack_68,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactBlackhole::DragZombie(Zombie*) */

void GridItemArtifactBlackhole::DragZombie(Zombie *param_1)

{
  char cVar1;
  int iVar2;
  ZombieTosserSubSystem *pZVar3;
  undefined8 *puVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  long lVar5;
  undefined8 uVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x1;
  Board *this_00;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  RtMixedPtr aRStack_98 [8];
  RtId aRStack_90 [8];
  string asStack_88 [8];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  float local_68;
  undefined4 local_60 [4];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x1 != (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)0x0) {
    pZVar3 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    puVar4 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    local_80 = *puVar4;
    local_78 = *(undefined4 *)(puVar4 + 1);
    puVar4 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(in_x1);
    local_70 = *puVar4;
    local_68 = *(float *)(puVar4 + 1);
    local_60[0] = Sexy::SexyVector3::operator-((SexyVector3 *)&local_70,(SexyVector3 *)&local_80);
    fVar7 = (float)DVec3::getLength((DVec3 *)local_60);
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar8 = (float)CaclZombieMass((GridItemArtifactBlackhole *)param_1,(Zombie *)in_x1);
    if (fVar7 <= 0.0) {
      fVar9 = 0.1;
      dVar10 = 0.10000000149011612;
    }
    else {
      fVar9 = (fVar7 / (float)iVar2) * (fVar7 / (float)iVar2) * fVar8;
      dVar10 = (double)fVar9;
    }
    Sexy::OutputDebugStrF
              ((wchar_t *)"GridItemArtifactBlackhole::DragZombie zombieposition %f %f %f",
               (double)(float)local_70,(double)local_70._4_4_,(double)local_68);
    this = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)in_x1);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    uVar6 = FUN_0547429c(lVar5 + 8);
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "GridItemArtifactBlackhole::DragZombie name=%s distance=%f mass=%f time=%f",
               (double)fVar7,(double)fVar8,dVar10,uVar6);
    fVar7 = local_68;
    if (local_68 < 0.0) {
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_98);
      std::string::string(asStack_88,"OnZombieTossEnd");
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_50,aRStack_90,asStack_88)
      ;
      ZombieTosserSubSystem::LaunchZombieOriginalZHeight
                ((ZombieTosserSubSystem *)(fVar7 + 0.1),fVar9,pZVar3);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_88);
      nop();
      Sexy::RtId::~RtId(aRStack_90);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
    }
    else {
      this_00 = *(Board **)(gLawnApp + 0x9f0);
      BoardEntity::CalcGridPosition();
      cVar1 = Board::IsShallowWater(this_00,(Point *)asStack_88);
      if (cVar1 == '\0') {
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_98);
        std::string::string(asStack_88,"OnZombieTossEnd");
        RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_50,aRStack_90,
                   asStack_88);
        ZombieTosserSubSystem::LaunchZombieOriginalZHeight
                  ((ZombieTosserSubSystem *)0x3dcccccd,fVar9,pZVar3);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_88);
        nop();
        Sexy::RtId::~RtId(aRStack_90);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98)
        ;
      }
      else {
        fVar7 = (float)RealObject::CalcGroundZHeight((RealObject *)in_x1,(SexyVector3 *)&local_80);
        Sexy::OutputDebugStrF((wchar_t *)"inwater toss zombie z : %f",(double)fVar7);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_98);
        std::string::string(asStack_88,"OnZombieTossEnd");
        RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_50,aRStack_90,
                   asStack_88);
        ZombieTosserSubSystem::LaunchZombieOriginalZHeight
                  ((ZombieTosserSubSystem *)(fVar7 + 0.1),fVar9,pZVar3);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_88);
        nop();
        Sexy::RtId::~RtId(aRStack_90);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98)
        ;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactBlackhole::UpdateDamageZombies() */

void __thiscall GridItemArtifactBlackhole::UpdateDamageZombies(GridItemArtifactBlackhole *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  Zombie *this_00;
  float fVar6;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  BoardEntity::CalcGridPosition();
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,2,local_98,
             local_94);
  lVar4 = FUN_04cab060(local_80,local_78);
  if (lVar4 != 0) {
    local_90 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_80);
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_80);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90)
      ;
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
      if ((((this_00 != (Zombie *)0x0) &&
           (cVar2 = RealObject::IsOnOpposingTeam(this_00,1), cVar2 != '\0')) &&
          (iVar3 = Zombie::GetSizeType(this_00), iVar3 == 2)) &&
         ((cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 == '\0' &&
          (cVar2 = Zombie::IsBoss(this_00), cVar2 == '\0')))) {
        DamageInfo::DamageInfo(aDStack_68);
        fVar6 = *(float *)(this + 0x1d8);
        local_60 = (float)PVZ_Dt();
        local_60 = local_60 * fVar6;
        (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemArtifactBlackhole::~GridItemArtifactBlackhole() */

void __thiscall
GridItemArtifactBlackhole::~GridItemArtifactBlackhole(GridItemArtifactBlackhole *this)

{
  *(undefined ***)this = &PTR_GetClass_06998ad0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemArtifactBlackhole_06998db0;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1e0));
  GridItemAnimController::~GridItemAnimController((GridItemAnimController *)this);
  return;
}


/* non-virtual thunk to GridItemArtifactBlackhole::~GridItemArtifactBlackhole() */

void __thiscall
GridItemArtifactBlackhole::~GridItemArtifactBlackhole(GridItemArtifactBlackhole *this)

{
  ~GridItemArtifactBlackhole(this + -0x10);
  return;
}


/* GridItemArtifactBlackhole::~GridItemArtifactBlackhole() */

void __thiscall
GridItemArtifactBlackhole::~GridItemArtifactBlackhole(GridItemArtifactBlackhole *this)

{
  ~GridItemArtifactBlackhole(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemArtifactBlackhole::~GridItemArtifactBlackhole() */

void __thiscall
GridItemArtifactBlackhole::~GridItemArtifactBlackhole(GridItemArtifactBlackhole *this)

{
  ~GridItemArtifactBlackhole(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactBlackhole::GridItemArtifactBlackhole() */

void __thiscall
GridItemArtifactBlackhole::GridItemArtifactBlackhole(GridItemArtifactBlackhole *this)

{
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimController::GridItemAnimController((GridItemAnimController *)this);
  *(undefined ***)this = &PTR_GetClass_06998ad0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemArtifactBlackhole_06998db0;
  Sexy::Insets::Insets((Insets *)(this + 0x1b8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1e0));
  *(undefined4 *)(this + 0x1b4) = 1;
  Sexy::Insets::Insets((Insets *)&local_18,-1,-1,3,3);
  *(undefined8 *)(this + 0x1b8) = local_18;
  *(undefined8 *)(this + 0x1c0) = uStack_10;
  this[0x1dc] = (GridItemArtifactBlackhole)0x0;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1cc) = 0;
  *(undefined4 *)(this + 0x1d0) = 0;
  *(undefined4 *)(this + 0x1d4) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1e0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemArtifactBlackhole::StaticNew() */

GridItemArtifactBlackhole * GridItemArtifactBlackhole::StaticNew(void)

{
  GridItemArtifactBlackhole *this;
  
  this = ::operator_new(0x1f8);
  GridItemArtifactBlackhole(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactBlackhole::StopDragZombies() */

void __thiscall GridItemArtifactBlackhole::StopDragZombies(GridItemArtifactBlackhole *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  ZombieTosserSubSystem *this_01;
  RtMixedPtrBase *this_02;
  ResourceInfo *pRVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1e0);
  local_8 = ___stack_chk_guard;
  this_01 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_02 = (RtMixedPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_02);
    if (cVar2 != '\0') {
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_02);
      ZombieTosserSubSystem::ReleaseZombie(this_01,(Zombie *)pRVar3);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactBlackhole::IsZombieValid(Zombie*) */

void __thiscall
GridItemArtifactBlackhole::IsZombieValid(GridItemArtifactBlackhole *this,Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  ZombieZombossMech *pZVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_78;
  undefined8 local_70 [3];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((param_1 != (Zombie *)0x0) && (cVar1 = Zombie::IsBoss(param_1), cVar1 == '\0')) &&
      (pZVar3 = Sexy::RtObject::Cast<ZombieZombossMech>((RtObject *)param_1),
      pZVar3 == (ZombieZombossMech *)0x0)) &&
     ((cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0' &&
      (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 == '\0')))) {
    Zombie::GetCurrentTitleStatus();
    if ((((local_58 == '\0') &&
         ((cVar1 = FUN_04cac65c(*(undefined4 *)(param_1 + 0xcc)), cVar1 == '\0' &&
          (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')))) &&
        (cVar1 = Zombie::IsIgnoringAllDamage(param_1), cVar1 == '\0')) &&
       (((((cVar1 = Zombie::IsControlled(param_1), cVar1 == '\0' &&
           (cVar1 = Zombie::IsSuspended(param_1), cVar1 == '\0')) &&
          (cVar1 = Zombie::HasFogImmune(param_1), cVar1 == '\0')) &&
         (((cVar1 = Zombie::IsBerserk(param_1), cVar1 == '\0' &&
           (cVar1 = Zombie::IsTargetable(param_1), cVar1 != '\0')) &&
          ((cVar1 = RealObject::IsOnOpposingTeam(param_1,1), cVar1 != '\0' &&
           ((cVar1 = Zombie::IsRisingFromGround(param_1), cVar1 == '\0' &&
            (cVar1 = Zombie::IsFlickedOff(param_1), cVar1 == '\0')))))))) &&
        ((cVar1 = Zombie::IsDropingIntoHole(param_1), cVar1 == '\0' &&
         ((cVar1 = FUN_02fd4794(*(undefined4 *)(param_1 + 0xcc)), cVar1 == '\0' &&
          (cVar1 = Zombie::CanTakeFatalDamage(param_1), cVar1 != '\0')))))))) {
      cVar1 = Zombie::IsTargetable(param_1);
      TitleStatus::~TitleStatus((TitleStatus *)local_70);
      if (cVar1 != '\0') {
        this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x1e0);
        uVar4 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
        uVar5 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
        ToolPacketData::GetProps();
        local_78 = std::
                   find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<GameObject>>
                             (uVar4,uVar5,(TitleStatus *)local_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_70);
        local_70[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(this_00);
        bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_78,(__normal_iterator *)local_70);
        goto LAB_04cb12dc;
      }
    }
    else {
      TitleStatus::~TitleStatus((TitleStatus *)local_70);
    }
  }
  bVar2 = false;
LAB_04cb12dc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactBlackhole::OnZombieTossEnd(Zombie*) */

void __thiscall
GridItemArtifactBlackhole::OnZombieTossEnd(GridItemArtifactBlackhole *this,Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x1e0);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    ToolPacketData::GetProps();
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<GameObject>>
                         (uVar3,uVar4,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (bVar1) {
      iVar2 = Zombie::GetSizeType(param_1);
      if ((iVar2 == 0) || (iVar2 = Zombie::GetSizeType(param_1), iVar2 == 1)) {
        Zombie::TakeFatalDamage(param_1,(BoardEntity *)0x0);
      }
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      uVar3 = FUN_0547429c(lVar5 + 8);
      Sexy::OutputDebugStrF((wchar_t *)"GridItemArtifactBlackhole::OnZombieTossEnd %s",uVar3);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00,
                 local_10);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactBlackhole::UpdateDragZombies() */

void __thiscall GridItemArtifactBlackhole::UpdateDragZombies(GridItemArtifactBlackhole *this)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  Zombie *pZVar5;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindTargets();
  lVar3 = FUN_04cab060(local_20,local_18);
  if (lVar3 != 0) {
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
      if ((pZVar5 != (Zombie *)0x0) && (cVar2 = IsZombieValid(this,pZVar5), cVar2 != '\0')) {
        DragZombie((Zombie *)this);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                   (this + 0x1e0),(RtWeakPtr *)aRStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactBlackhole::WaveDragZombies() */

void __thiscall GridItemArtifactBlackhole::WaveDragZombies(GridItemArtifactBlackhole *this)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  Zombie *pZVar5;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindTargets();
  lVar3 = FUN_04cab060(local_20,local_18);
  if (lVar3 != 0) {
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
      cVar2 = IsZombieValid(this,pZVar5);
      if (cVar2 != '\0') {
        DragZombieByWave((Zombie *)this);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                   (this + 0x1e0),(RtWeakPtr *)aRStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemArtifactBlackhole::OnEndAnimDone(std::string const&) */

void GridItemArtifactBlackhole::OnEndAnimDone(string *param_1)

{
  StopDragZombies((GridItemArtifactBlackhole *)param_1);
  if (param_1[0x1dc] != (string)0x0) {
    WaveDragZombies((GridItemArtifactBlackhole *)param_1);
  }
  PlayWaveDragAnim((GridItemArtifactBlackhole *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactBlackhole::onGridItemInitialize() */

void __thiscall GridItemArtifactBlackhole::onGridItemInitialize(GridItemArtifactBlackhole *this)

{
  GridItemArtifactBlackholeProps *pGVar1;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimController::onGridItemInitialize((GridItemAnimController *)this);
  pGVar1 = GridItem::GetProps<GridItemArtifactBlackholeProps>();
  if (pGVar1 != (GridItemArtifactBlackholeProps *)0x0) {
    Sexy::Insets::Insets((Insets *)&local_28,(Insets *)(pGVar1 + 0xec));
    BoardEntity::CalcGridPosition();
    Sexy::Insets::Insets
              ((Insets *)&local_18,local_30 + local_28,local_2c + local_24,local_20,local_1c);
    *(undefined8 *)(this + 0x1b8) = local_18;
    *(undefined8 *)(this + 0x1c0) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemArtifactBlackhole::onUpdate() */

void __thiscall GridItemArtifactBlackhole::onUpdate(GridItemArtifactBlackhole *this)

{
  GridItemAnimController::onUpdate((GridItemAnimController *)this);
  if (*(int *)(this + 0x1a8) != 2) {
    return;
  }
  UpdateDragZombies(this);
  UpdateDamageZombies(this);
  return;
}


/* GridItemArtifactBlackhole::KillGridItem() */

void __thiscall GridItemArtifactBlackhole::KillGridItem(GridItemArtifactBlackhole *this)

{
  GridItem::KillGridItem((GridItem *)this);
  if (this[0x1dc] == (GridItemArtifactBlackhole)0x0) {
    return;
  }
  StopDragZombies(this);
  return;
}

