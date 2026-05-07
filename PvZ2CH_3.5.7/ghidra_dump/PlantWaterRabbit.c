// Class: PlantWaterRabbit


/* PlantWaterRabbit::unregisterForEvents() */

void __thiscall PlantWaterRabbit::unregisterForEvents(PlantWaterRabbit *this)

{
  Board::UnregisterTouchGameplayObject(*(Board **)(gLawnApp + 0x9f0),this);
  return;
}


/* PlantWaterRabbit::CalcRenderOrder() */

void __thiscall PlantWaterRabbit::CalcRenderOrder(PlantWaterRabbit *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    PlantFramework::CalcRenderOrder((PlantFramework *)this);
    return;
  }
  Board::MakeRenderOrder(0x639c0,*(int *)(*(long *)(this + 0x10) + 0x110) + 1,2);
  return;
}


/* PlantWaterRabbit::CanEndPlantfood() */

bool __thiscall PlantWaterRabbit::CanEndPlantfood(PlantWaterRabbit *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) != 0xd;
}


/* PlantWaterRabbit::CanBeWatered() */

bool __thiscall PlantWaterRabbit::CanBeWatered(PlantWaterRabbit *this)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = Plant::CanApplyPlantfood(*(Plant **)(this + 0x10));
  bVar1 = false;
  if (cVar2 != '\0') {
    bVar1 = *(int *)(*(long *)(this + 0x10) + 200) != 0xc;
  }
  return bVar1;
}


/* PlantWaterRabbit::GetPlantAttackRect(PlantWeapon) */

long PlantWaterRabbit::GetPlantAttackRect(long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  PlantFramework::GetPlantAttackRect();
  if (param_3 == 0) {
    iVar1 = FUN_04d2cff0(*(undefined8 *)(param_2 + 0x10));
    iVar2 = 0;
    if (2 < iVar1) {
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar2;
  }
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWaterRabbit::StaticClassInit() */

void PlantWaterRabbit::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWaterRabbit");
    (*pcVar2)(plVar1,asStack_10,FUN_04d2eb70,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWaterRabbit::StaticGetClass() */

long * PlantWaterRabbit::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantWaterRabbit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWaterRabbit::GetClass() const */

long * PlantWaterRabbit::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantWaterRabbit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWaterRabbit::canAffectEatDPS(Zombie*) */

undefined8 __thiscall PlantWaterRabbit::canAffectEatDPS(PlantWaterRabbit *this,Zombie *param_1)

{
  char cVar1;
  
  cVar1 = Zombie::IsBoss(param_1);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0'))
  {
    return 1;
  }
  return 0;
}


/* PlantWaterRabbit::PlantWaterRabbit() */

void __thiscall PlantWaterRabbit::PlantWaterRabbit(PlantWaterRabbit *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR_GetClass_069abf70;
  *(undefined4 *)(this + 0x2c) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  return;
}


/* PlantWaterRabbit::StaticNew() */

PlantWaterRabbit * PlantWaterRabbit::StaticNew(void)

{
  PlantWaterRabbit *this;
  
  this = ::operator_new(0x60);
  PlantWaterRabbit(this);
  return this;
}


/* PlantWaterRabbit::~PlantWaterRabbit() */

void __thiscall PlantWaterRabbit::~PlantWaterRabbit(PlantWaterRabbit *this)

{
  *(undefined ***)this = &PTR_GetClass_069abf70;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantWaterRabbit::~PlantWaterRabbit() */

void __thiscall PlantWaterRabbit::~PlantWaterRabbit(PlantWaterRabbit *this)

{
  ~PlantWaterRabbit(this);
  AK::FreeHook(this);
  return;
}


/* PlantWaterRabbit::canBeLaunchedByPlants(Zombie*) const */

undefined1 __thiscall
PlantWaterRabbit::canBeLaunchedByPlants(PlantWaterRabbit *this,Zombie *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar4;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(param_1);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  if (((((*(char *)(lVar4 + 0x3e) != '\0') &&
        (cVar1 = Zombie::HasCondition(param_1,0x27), cVar1 == '\0')) &&
       (cVar1 = Zombie::HasCondition(param_1,0x25), cVar1 == '\0')) &&
      ((((cVar1 = Zombie::HasCondition(param_1,0x65), cVar1 == '\0' &&
         (cVar1 = Zombie::HasCondition(param_1,0x2c), cVar1 == '\0')) &&
        ((cVar1 = Zombie::HasCondition(param_1,0x29), cVar1 == '\0' &&
         ((cVar1 = Zombie::HasCondition(param_1,0x55), cVar1 == '\0' &&
          (cVar1 = Zombie::HasCondition(param_1,0x8c), cVar1 == '\0')))))) &&
       (iVar3 = Zombie::getZombieStateSerialization(param_1), iVar3 != 0x14)))) &&
     ((((iVar3 = Zombie::getZombieStateSerialization(param_1), iVar3 != 0x13 &&
        (cVar1 = Zombie::HasFogImmune(param_1), cVar1 == '\0')) &&
       (cVar1 = Zombie::IsBerserk(param_1), cVar1 == '\0')) &&
      ((cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0' &&
       (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 == '\0')))))) {
    uVar2 = (**(code **)(*(long *)param_1 + 0x380))(param_1);
    return uVar2;
  }
  return 0;
}


/* PlantWaterRabbit::DoEventCall(RealObject*) */

PlantWaterRabbit * __thiscall
PlantWaterRabbit::DoEventCall(PlantWaterRabbit *this,RealObject *param_1)

{
  bool bVar1;
  Zombie *this_00;
  PlantWaterRabbit *pPVar2;
  
  if (param_1 != (RealObject *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    this = (PlantWaterRabbit *)(ulong)bVar1;
    if (bVar1) {
      nop();
      pPVar2 = (PlantWaterRabbit *)Zombie::SetIsJumping(this_00,false);
      return pPVar2;
    }
  }
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWaterRabbit::isValidTarget(BoardEntity*) */

void __thiscall PlantWaterRabbit::isValidTarget(PlantWaterRabbit *this,BoardEntity *param_1)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined4 uVar4;
  Zombie *extraout_x0;
  undefined8 uVar5;
  long *extraout_x0_00;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) &&
     (cVar1 = GameObject::IsDestroyed((GameObject *)param_1), cVar1 == '\0')) {
    uVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if (!(bool)uVar2) {
      bVar3 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
      if (bVar3) {
        nop();
        cVar1 = RealObject::IsOnTeam();
        if ((cVar1 == '\0') &&
           (cVar1 = (**(code **)(*extraout_x0_00 + 0x218))(extraout_x0_00,param_1), cVar1 != '\0'))
        {
          uVar2 = (**(code **)(*extraout_x0_00 + 0x200))(extraout_x0_00);
        }
      }
      goto LAB_04d2dda8;
    }
    nop();
    uVar5 = operator|(0x2d,0x80);
    uVar5 = operator|(uVar5,0x200);
    uVar5 = operator|(uVar5,0x800);
    uVar4 = operator|(uVar5,0x2000);
    cVar1 = Zombie::MatchesAny(extraout_x0,uVar4,*(undefined8 *)(this + 0x10));
    if (((cVar1 == '\0') &&
        (cVar1 = (**(code **)(*(long *)extraout_x0 + 0x328))(extraout_x0), cVar1 == '\0')) &&
       (cVar1 = FUN_04d2dbcc(*(undefined4 *)(extraout_x0 + 0xcc)), cVar1 == '\0')) {
      cVar1 = Zombie::HasCondition(extraout_x0,0x19);
      if (cVar1 == '\0') {
        pcVar6 = *(code **)(*(long *)extraout_x0 + 0x3d0);
        Plant::GetType();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
        uVar2 = (*pcVar6)(extraout_x0,aRStack_10,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        goto LAB_04d2dda8;
      }
    }
  }
  uVar2 = 0;
LAB_04d2dda8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PlantWaterRabbit::canKnockBack(Zombie*) */

char __thiscall PlantWaterRabbit::canKnockBack(PlantWaterRabbit *this,Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  if ((param_1 != (Zombie *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<ZombiePirateParrot>((RtObject *)param_1), bVar1)) {
    return '\0';
  }
  iVar3 = Zombie::GetSizeType(param_1);
  if ((iVar3 < 2) && (cVar2 = canBeLaunchedByPlants(this,param_1), cVar2 != '\0')) {
    return cVar2;
  }
  return '\0';
}


/* PlantWaterRabbit::shouldChangeTarget() */

byte __thiscall PlantWaterRabbit::shouldChangeTarget(PlantWaterRabbit *this)

{
  RtWeakPtr *this_00;
  char cVar1;
  byte bVar2;
  ResourceInfo *pRVar3;
  RtObject *this_01;
  BoardEntity *this_02;
  
  this_00 = (RtWeakPtr *)(this + 0x38);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  if ((pRVar3 == (ResourceInfo *)0x0) ||
     (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar1 == '\0')) {
    bVar2 = 1;
  }
  else {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar2 = Sexy::RtObject::IsA<Zombie>(this_01);
    if ((bool)bVar2) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      cVar1 = (**(code **)(*(long *)this_02 + 0x328))();
      if (((cVar1 == '\0') && (cVar1 = FUN_04d2dbcc(*(undefined4 *)(this_02 + 0xcc)), cVar1 == '\0')
          ) && (cVar1 = BoardEntity::IsInRow(this_02,*(int *)(*(long *)(this + 0x10) + 0x110)),
               cVar1 != '\0')) {
        bVar2 = BoardEntity::IsInCol(this_02,*(int *)(*(long *)(this + 0x10) + 0x114) + 1);
        bVar2 = bVar2 ^ 1;
      }
    }
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWaterRabbit::registerForEvents() */

void __thiscall PlantWaterRabbit::registerForEvents(PlantWaterRabbit *this)

{
  Board *pBVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_88 [8];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTouchEvent);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<PlantWaterRabbit,bool(PlantWaterRabbit::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_80);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_88,(RtWeakPtrBase *)aRStack_90);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,6,aRStack_88,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWaterRabbit::thunderAttackUseAction(bool, bool) */

void __thiscall
PlantWaterRabbit::thunderAttackUseAction(PlantWaterRabbit *this,bool param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  RtObject *pRVar5;
  WaterRabbitProps *pWVar6;
  undefined8 *puVar7;
  Zombie *this_00;
  undefined8 uVar8;
  ZombieTosserSubSystem *pZVar9;
  SexyVector3 *this_01;
  long lVar10;
  ZombieTosserSubSystem *pZVar13;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 local_120;
  undefined8 local_118;
  RtMixedPtr aRStack_110 [8];
  RtId aRStack_108 [8];
  string asStack_100 [8];
  Vec3 aVStack_f8 [16];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 auStack_d8 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_c8 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b0 [72];
  Plant *local_68;
  float local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04d2cfcc((RtWeakPtr<Sexy::ResourceInfo> *)&local_68,*(undefined8 *)(this + 0x10));
  pRVar5 = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  pWVar6 = Sexy::RtObject::Cast<WaterRabbitProps_const>(pRVar5);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  DamageInfo::DamageInfo((DamageInfo *)&local_68);
  local_68 = *(Plant **)(this + 0x10);
  local_58 = 0x4000000000;
  if (param_1) {
    iVar4 = *(int *)(pWVar6 + 800);
    local_60 = (float)Plant::GetTotalDamageRate(local_68);
    local_60 = local_60 * (float)iVar4;
  }
  else {
    iVar4 = *(int *)(pWVar6 + 0x2b8);
    local_60 = (float)Plant::GetTotalDamageRate(local_68);
    local_60 = (float)iVar4 * 15.0 * local_60;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_c8);
  (**(code **)(*(long *)this + 0x2b8))(auStack_d8,this,1);
  uVar3 = operator|(4,2);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_c8,uVar3,auStack_d8,0xffffffff,0xffffffff);
  local_120 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_c8);
  local_118 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_c8);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_120,(__normal_iterator *)&local_118), bVar1)
  {
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_120);
    pRVar5 = (RtObject *)*puVar7;
    cVar2 = isValidTarget(this,(BoardEntity *)pRVar5);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pRVar5 + 0x110))(pRVar5,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      bVar1 = Sexy::RtObject::IsA<Zombie>(pRVar5);
      if (bVar1) {
        nop();
        cVar2 = canKnockBack(this,this_00);
        if ((cVar2 == '\0') || ((!param_2 && (*(int *)(this + 0x44) != 6)))) {
          cVar2 = canAffectEatDPS(this,this_00);
        }
        else {
          iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
          pZVar9 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          this_01 = (SexyVector3 *)
                    std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this_00);
          uVar11 = 0;
          uVar3 = 0;
          EATextSquish::Vec3::Vec3(aVStack_f8,(float)iVar4 * 1.5,0.0,0.0);
          local_e8 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aVStack_f8);
                    /* WARNING: Load size is inaccurate */
          pZVar13._0_4_ = *(ZombieTosserSubSystem **)(pWVar6 + 0x2c4);
          uVar12 = *(undefined4 *)(pWVar6 + 0x2c8);
          local_e4 = uVar11;
          local_e0 = uVar3;
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_110);
          std::string::string(asStack_100,"OnEventCall");
          RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
                    (aRStack_b0,aRStack_108,asStack_100);
          ZombieTosserSubSystem::LaunchZombie
                    (pZVar13._0_4_,uVar12,pZVar9,this_00,&local_e8,aRStack_b0,0);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_b0);
          std::string::~string(asStack_100);
          nop();
          Sexy::RtId::~RtId(aRStack_108);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_110);
          MessageRouter::Broadcast<KnockbackReason,KnockbackReason>
                    ((MessageRouter *)gMessageRouter,Message::ZombieKnockedBackByPlayer,0);
          cVar2 = canAffectEatDPS(this,this_00);
        }
        if ((cVar2 != '\0') &&
           ((!param_1 ||
            (iVar4 = *(int *)(this + 0x28), lVar10 = FUN_04d2e95c(*(undefined8 *)(this + 0x10)),
            iVar4 == *(int *)(lVar10 + 0x324))))) {
                    /* WARNING: Load size is inaccurate */
          Zombie::ApplyCondition(*(Zombie **)(pWVar6 + 0x328),0,this_00,0x7d,1);
          uVar8 = Zombie::GetConditionTracker(this_00);
                    /* WARNING: Load size is inaccurate */
          ZombieConditionTracker::SetAdditionalValue
                    (*(ZombieConditionTracker **)(pWVar6 + 0x32c),uVar8,0x7d);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_120);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_c8);
  DamageInfo::~DamageInfo((DamageInfo *)&local_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWaterRabbit::getZombieTarget(std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > >&) */

void PlantWaterRabbit::getZombieTarget(vector *param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *in_x1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  ulong uVar6;
  undefined8 uVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined1 auStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  (**(code **)(*(long *)param_1 + 0x2b8))(auStack_30,param_1,0);
  uVar2 = operator|(2,4);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar2,
             auStack_30,0xffffffff,0xffffffff);
  uVar7 = local_20;
  lVar3 = FUN_04d2d1f4(local_20,local_18);
  if (lVar3 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_04d2d200(uVar7,uVar6);
      cVar1 = isValidTarget((PlantWaterRabbit *)param_1,(BoardEntity *)*puVar4);
      if (cVar1 != '\0') {
        FUN_04d2d200(local_20,uVar6);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back(in_x1,(RtWeakPtr *)aRStack_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        FUN_04d2d200(local_20,uVar6);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)in_x8,(RtWeakPtrBase *)aRStack_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
      }
      uVar7 = local_20;
      uVar6 = uVar6 + 1;
      uVar5 = FUN_04d2d1f4(local_20,local_18);
    } while (uVar6 < uVar5);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWaterRabbit::getTarget(std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > >&) */

void __thiscall PlantWaterRabbit::getTarget(PlantWaterRabbit *this,vector *param_1)

{
  char cVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [8];
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_18);
  getZombieTarget((vector *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  if (cVar1 == '\0') {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8)
    ;
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)in_x8,(RtWeakPtrBase *)aRStack_10);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWaterRabbit::attackUseAction() */

void __thiscall PlantWaterRabbit::attackUseAction(PlantWaterRabbit *this)

{
  bool bVar1;
  char cVar2;
  RtObject *pRVar3;
  WaterRabbitProps *pWVar4;
  float *pfVar5;
  long *plVar6;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  Zombie *this_01;
  ZombieTosserSubSystem *pZVar7;
  SexyVector3 *this_02;
  int iVar8;
  int iVar9;
  float fVar10;
  ZombieTosserSubSystem *pZVar14;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 local_110;
  undefined8 local_108;
  RtMixedPtr aRStack_100 [8];
  RtId aRStack_f8 [8];
  string asStack_f0 [8];
  Vec3 aVStack_e8 [16];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_c8 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b0 [72];
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_c8);
  iVar9 = 0;
  getTarget(this,(vector *)avStack_c8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  FUN_04d2cfcc((RtWeakPtr<Sexy::ResourceInfo> *)&local_68,*(undefined8 *)(this + 0x10));
  pRVar3 = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  pWVar4 = Sexy::RtObject::Cast<WaterRabbitProps_const>(pRVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  local_110 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_c8);
  local_108 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_c8);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_110,(__normal_iterator *)&local_108);
    if (!bVar1) {
LAB_04d2fdf4:
      *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              avStack_c8);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_110);
    if (*(int *)(this + 0x40) < 4) {
      iVar8 = *(int *)(pWVar4 + 0x2b8);
    }
    else {
      iVar8 = *(int *)(pWVar4 + 700);
    }
    fVar10 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
    iVar8 = (int)(fVar10 * (float)iVar8);
    if (0 < *(int *)(this + 0x44)) {
      pfVar5 = (float *)FUN_04d2d208(*(undefined8 *)(pWVar4 + 0x2d0),
                                     (long)(*(int *)(this + 0x44) + -1));
      iVar8 = (int)((float)iVar8 * *pfVar5);
    }
    DamageInfo::DamageInfo((DamageInfo *)&local_68);
    local_60 = (float)iVar8;
    local_68 = *(undefined8 *)(this + 0x10);
    local_58 = 0x4000000000;
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar6 + 0x110))(plVar6,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    if ((*(int *)(this + 0x40) == 4) &&
       (bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00), bVar1)) {
      pRVar3 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      bVar1 = Sexy::RtObject::IsA<Zombie>(pRVar3);
      if (!bVar1) goto LAB_04d2fbe4;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      nop();
      cVar2 = canKnockBack(this,this_01);
      if (cVar2 == '\0') goto LAB_04d2fbe4;
      iVar8 = BoardConstants::GRIDSQUARE_WIDTH();
      fVar10 = 0.5;
      if (*(int *)(this + 0x44) == 0) {
        fVar10 = 0.25;
      }
      Zombie::SetIsJumping(this_01,true);
      pZVar7 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      this_02 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)this_01);
      uVar12 = 0;
      uVar11 = 0;
      EATextSquish::Vec3::Vec3(aVStack_e8,fVar10 * (float)iVar8,0.0,0.0);
      local_d8 = Sexy::SexyVector3::operator+(this_02,(SexyVector3 *)aVStack_e8);
                    /* WARNING: Load size is inaccurate */
      pZVar14._0_4_ = *(ZombieTosserSubSystem **)(pWVar4 + 0x2c4);
      uVar13 = *(undefined4 *)(pWVar4 + 0x2c8);
      local_d4 = uVar12;
      local_d0 = uVar11;
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_100);
      std::string::string(asStack_f0,"OnEventCall");
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
                (aRStack_b0,aRStack_f8,asStack_f0);
      ZombieTosserSubSystem::LaunchZombie
                (pZVar14._0_4_,uVar13,pZVar7,this_01,&local_d8,aRStack_b0,0);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_b0);
      std::string::~string(asStack_f0);
      nop();
      Sexy::RtId::~RtId(aRStack_f8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_100);
      MessageRouter::Broadcast<KnockbackReason,KnockbackReason>
                ((MessageRouter *)gMessageRouter,Message::ZombieKnockedBackByPlayer,0);
      if (*(int *)(this + 0x48) <= iVar9 + 1) goto LAB_04d2fdf0;
    }
    else {
LAB_04d2fbe4:
      if (*(int *)(this + 0x48) <= iVar9 + 1) {
LAB_04d2fdf0:
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
        goto LAB_04d2fdf4;
      }
    }
    iVar9 = iVar9 + 1;
    DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_110);
  } while( true );
}


/* PlantWaterRabbit::OnAnimCommand(std::string const&, std::string const&) */

bool PlantWaterRabbit::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  byte bVar2;
  UIEasyButtonWidget *this;
  PlantAnimRig_WaterRabbit *this_00;
  int iVar3;
  
  bVar1 = std::operator==(param_2,"use_action");
  if (bVar1) {
    this = *(UIEasyButtonWidget **)(param_1 + 0x10);
    switch(*(undefined4 *)(this + 200)) {
    case 0xb:
      attackUseAction((PlantWaterRabbit *)param_1);
      return true;
    case 0xc:
      thunderAttackUseAction((PlantWaterRabbit *)param_1,false,false);
      return true;
    case 0xd:
      iVar3 = *(int *)(param_1 + 0x58);
      if (iVar3 == 1) {
        bVar2 = Plant::GetAvatarEnable((Plant *)this);
        thunderAttackUseAction((PlantWaterRabbit *)param_1,true,(bool)(bVar2 ^ 1));
        iVar3 = *(int *)(param_1 + 0x58);
      }
      else if (iVar3 == 2) {
        thunderAttackUseAction((PlantWaterRabbit *)param_1,true,true);
        iVar3 = *(int *)(param_1 + 0x58);
      }
      else if (iVar3 == 0) {
        thunderAttackUseAction((PlantWaterRabbit *)param_1,true,false);
        iVar3 = *(int *)(param_1 + 0x58);
      }
      *(int *)(param_1 + 0x58) = iVar3 + 1;
      return true;
    case 0xe:
      UIEasyButtonWidget::GetImageNormal(this);
      nop();
      PlantAnimRig_WaterRabbit::UpdateLayer(this_00,*(int *)(param_1 + 0x44));
      return true;
    }
  }
  return bVar1;
}


/* PlantWaterRabbit::updateChiStacks(int, bool) */

void __thiscall PlantWaterRabbit::updateChiStacks(PlantWaterRabbit *this,int param_1,bool param_2)

{
  PlantAnimRig_WaterRabbit *this_00;
  undefined4 uVar1;
  
  if (6 < param_1) {
    return;
  }
  *(int *)(this + 0x44) = param_1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x30) = uVar1;
  if (!param_2) {
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    PlantAnimRig_WaterRabbit::UpdateLayer(this_00,*(int *)(this + 0x44));
    return;
  }
  setState(this,0xe);
  return;
}


/* PlantWaterRabbit::CancelPlantfood() */

void __thiscall PlantWaterRabbit::CancelPlantfood(PlantWaterRabbit *this)

{
  undefined4 uVar1;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x2c) = uVar1;
  updateChiStacks(this,0,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWaterRabbit::setState(unsigned int) */

void __thiscall PlantWaterRabbit::setState(PlantWaterRabbit *this,uint param_1)

{
  UIEasyButtonWidget *this_00;
  PlantAnimRig_WaterRabbit *extraout_x0;
  PlantAnimRig_WaterRabbit *extraout_x0_00;
  long *plVar1;
  PlantAnimRig_WaterRabbit *extraout_x0_01;
  PlantAnimRig_WaterRabbit *extraout_x0_02;
  undefined4 uVar2;
  RtMixedPtr aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  *(uint *)(this_00 + 200) = param_1;
  switch(param_1) {
  case 10:
    *(undefined4 *)(this + 0x34) = 0x40c00000;
    plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
    (**(code **)(*plVar1 + 0x118))();
    goto switchD_04d3024c_default;
  case 0xb:
    *(undefined4 *)(this + 0x40) = 0;
    UIEasyButtonWidget::GetImageNormal(this_00);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    PlantAnimRig_WaterRabbit::PlayBasicAttack(extraout_x0_01,aRStack_50);
    break;
  case 0xc:
    UIEasyButtonWidget::GetImageNormal(this_00);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    PlantAnimRig_WaterRabbit::PlayThunderclapAttack(extraout_x0_02,aRStack_50);
    break;
  case 0xd:
    *(undefined4 *)(this + 0x58) = 0;
    *(undefined4 *)(this + 0x28) = 1;
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0x2c) = uVar2;
    updateChiStacks(this,5,false);
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    std::string::string((string *)aRStack_68,"plantfood");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    PlantAnimRig_WaterRabbit::PlayPlantFoodAttack
              (extraout_x0_00,(string *)aRStack_68,
               (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string((string *)aRStack_68);
    nop();
    goto switchD_04d3024c_default;
  case 0xe:
    UIEasyButtonWidget::GetImageNormal(this_00);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    PlantAnimRig_WaterRabbit::PlayLevelUp(extraout_x0,aRStack_50);
    break;
  default:
    goto switchD_04d3024c_default;
  }
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
switchD_04d3024c_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantWaterRabbit::ApplyPlantfood() */

void __thiscall PlantWaterRabbit::ApplyPlantfood(PlantWaterRabbit *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  Plant::StartPlantfoodState(*(Plant **)(this + 0x10));
  setState(this,0xd);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWaterRabbit::findTargetAndPlayAttackAnim() */

void __thiscall PlantWaterRabbit::findTargetAndPlayAttackAnim(PlantWaterRabbit *this)

{
  bool bVar1;
  char cVar2;
  RtWeakPtr aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  getTarget(this,(vector *)avStack_20);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if (bVar1) {
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_28);
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x38),aRStack_28);
      setState(this,0xb);
      goto LAB_04d305c0;
    }
  }
  cVar2 = '\0';
LAB_04d305c0:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* PlantWaterRabbit::onTouchEvent(Sexy::Touch const&) */

char __thiscall PlantWaterRabbit::onTouchEvent(PlantWaterRabbit *this,Touch *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  TRect<int> *pTVar4;
  long lVar5;
  Board *this_00;
  float fVar6;
  float fVar7;
  
  if ((*(long *)(this + 0x50) == 0) && (*(int *)(param_1 + 0x30) == 0)) {
    fVar6 = (float)FUN_04d2d2c4((float)*(int *)(param_1 + 0x10));
    fVar7 = (float)FUN_04d2d2c4((float)*(int *)(param_1 + 0x14));
    pTVar4 = (TRect<int> *)(**(code **)(**(long **)(this + 0x10) + 0x178))(*(long **)(this + 0x10));
    cVar2 = Sexy::TRect<int>::Contains(pTVar4,(int)fVar6,(int)fVar7);
    if (cVar2 != '\0') {
      *(undefined8 *)(this + 0x50) = *(undefined8 *)param_1;
      return '\0';
    }
  }
  else if (*(long *)(this + 0x50) == *(long *)param_1) {
    if (*(int *)(param_1 + 0x30) == 4) {
      *(undefined8 *)(this + 0x50) = 0;
    }
    else if (*(int *)(param_1 + 0x30) == 3) {
      iVar1 = *(int *)(param_1 + 0x10);
      *(undefined8 *)(this + 0x50) = 0;
      fVar6 = (float)FUN_04d2d2c4((float)iVar1);
      fVar7 = (float)FUN_04d2d2c4((float)*(int *)(param_1 + 0x14));
      pTVar4 = (TRect<int> *)
               (**(code **)(**(long **)(this + 0x10) + 0x178))(*(long **)(this + 0x10));
      cVar2 = Sexy::TRect<int>::Contains(pTVar4,(int)fVar6,(int)fVar7);
      if ((cVar2 != '\0') && (cVar3 = Plant::IsSuspended(*(Plant **)(this + 0x10)), cVar3 == '\0'))
      {
        lVar5 = *(long *)(this + 0x10);
        cVar3 = FUN_04d2db38(*(undefined4 *)(lVar5 + 0x28));
        if ((((cVar3 == '\0') &&
             ((cVar3 = Plant::HasCondition(lVar5,0x11), cVar3 == '\0' &&
              (cVar3 = Plant::HasCondition(*(undefined8 *)(this + 0x10),0xf), cVar3 == '\0')))) &&
            ((this_00 = *(Board **)(gLawnApp + 0x9f0), this_00 == (Board *)0x0 ||
             ((cVar3 = Board::IsPlaying(this_00), cVar3 != '\0' &&
              (cVar3 = FUN_04d2d018(this_00[0x887]), cVar3 != '\0')))))) &&
           ((cVar3 = (**(code **)(*(long *)this + 0x180))(this), cVar3 == '\0' &&
            ((*(int *)(*(long *)(this + 0x10) + 200) - 10U < 2 && (4 < *(int *)(this + 0x44))))))) {
          setState(this,0xc);
          return cVar2;
        }
      }
    }
  }
  return '\0';
}


/* PlantWaterRabbit::Initialize() */

void __thiscall PlantWaterRabbit::Initialize(PlantWaterRabbit *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  PlantFramework::Initialize((PlantFramework *)this);
  setState(this,10);
  updateChiStacks(this,0,false);
  lVar3 = FUN_04d2e95c(*(undefined8 *)(this + 0x10));
  *(undefined4 *)(this + 0x34) = 0x40c00000;
  uVar5 = PVZ_T();
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x30) = uVar5;
  iVar2 = FUN_04d2cff0(*(undefined8 *)(this + 0x10));
  if (iVar2 == 2) {
    puVar4 = (undefined4 *)FUN_04d2d024(*(undefined8 *)(lVar3 + 0x300),0);
    *(undefined4 *)(this + 0x48) = *puVar4;
  }
  else if ((iVar2 < 2) || (5 < iVar2)) {
    *(undefined4 *)(this + 0x48) = 1;
  }
  else {
    puVar4 = (undefined4 *)FUN_04d2d024(*(undefined8 *)(lVar3 + 0x300),1);
    *(undefined4 *)(this + 0x48) = *puVar4;
  }
  if (((*(long **)(gLawnApp + 0x9f0) != (long *)0x0) &&
      (cVar1 = (**(code **)(**(long **)(gLawnApp + 0x9f0) + 0x328))(), cVar1 != '\0')) &&
     (cVar1 = FUN_04d2cff8(*(undefined8 *)(this + 0x10)), cVar1 != '\0')) {
    updateChiStacks(this,5,false);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWaterRabbit::UpdateActions() */

void __thiscall PlantWaterRabbit::UpdateActions(PlantWaterRabbit *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  RtObject *this_00;
  WaterRabbitProps *pWVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04d2cfcc(aRStack_10,*(undefined8 *)(this + 0x10));
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pWVar4 = Sexy::RtObject::Cast<WaterRabbitProps_const>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (*(int *)(*(long *)(this + 0x10) + 200) == 10) {
    fVar5 = (float)PVZ_Dt();
    *(float *)(this + 0x34) = *(float *)(this + 0x34) - fVar5;
    iVar2 = FUN_04d2cff0(*(undefined8 *)(this + 0x10));
    iVar3 = 5;
    if (iVar2 == 5) {
      iVar3 = 6;
    }
    if ((*(int *)(this + 0x44) < iVar3) ||
       (fVar5 = (float)PVZ_T(), fVar5 <= *(float *)(pWVar4 + 0x31c) + *(float *)(this + 0x30))) {
      fVar5 = (float)PVZ_T();
      if ((((fVar5 <= *(float *)(pWVar4 + 0x318) + *(float *)(this + 0x2c)) ||
           (cVar1 = findTargetAndPlayAttackAnim(this), cVar1 == '\0')) &&
          (iVar3 = FUN_04d2cff0(*(undefined8 *)(this + 0x10)), iVar3 == 5)) &&
         (*(float *)(this + 0x34) < 0.0)) {
        updateChiStacks(this,*(int *)(this + 0x44) + 1,true);
        *(undefined4 *)(this + 0x34) = 0x40c00000;
      }
    }
    else {
      updateChiStacks(this,0,true);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWaterRabbit::onAnimStoppedCallback(std::string const&) */

void PlantWaterRabbit::onAnimStoppedCallback(string *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  PlantAnimRig_WaterRabbit *extraout_x0;
  undefined4 uVar5;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(*(Plant **)(param_1 + 0x10) + 200)) {
  case 0xb:
    uVar5 = PVZ_T();
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    iVar2 = FUN_04d2cff0(*(undefined8 *)(param_1 + 0x10));
    iVar3 = 5;
    if (iVar2 == 5) {
      iVar3 = 6;
    }
    if (*(int *)(param_1 + 0x44) < iVar3) {
      updateChiStacks((PlantWaterRabbit *)param_1,*(int *)(param_1 + 0x44) + 1,true);
      break;
    }
    goto LAB_04d30ab0;
  case 0xc:
    updateChiStacks((PlantWaterRabbit *)param_1,0,true);
    uVar5 = PVZ_T();
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    break;
  case 0xd:
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
    if ((cVar1 == '\0') ||
       (iVar3 = *(int *)(param_1 + 0x28), lVar4 = FUN_04d2e95c(*(undefined8 *)(param_1 + 0x10)),
       iVar3 == *(int *)(lVar4 + 0x324))) {
      uVar5 = PVZ_T();
      *(undefined4 *)(param_1 + 0x2c) = uVar5;
      setState((PlantWaterRabbit *)param_1,10);
    }
    else {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
      nop();
      std::string::string(asStack_68,"plantfood02");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_WaterRabbit::PlayPlantFoodAttack(extraout_x0,asStack_68,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_68);
      nop();
    }
    break;
  case 0xe:
LAB_04d30ab0:
    setState((PlantWaterRabbit *)param_1,10);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantWaterRabbit::Idle() */

void __thiscall PlantWaterRabbit::Idle(PlantWaterRabbit *this)

{
  undefined4 uVar1;
  
  this[8] = (PlantWaterRabbit)0x0;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  uVar1 = PVZ_T();
  this[8] = (PlantWaterRabbit)0x1;
  *(undefined4 *)(this + 0x2c) = uVar1;
  setState(this,10);
  updateChiStacks(this,*(int *)(this + 0x44),false);
  return;
}

