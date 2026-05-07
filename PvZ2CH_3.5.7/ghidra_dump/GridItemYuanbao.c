// Class: GridItemYuanbao


/* GridItemYuanbao::~GridItemYuanbao() */

void __thiscall GridItemYuanbao::~GridItemYuanbao(GridItemYuanbao *this)

{
  *(undefined ***)this = &PTR_GetClass_0663b6e0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemYuanbao_0663b998;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemYuanbao::~GridItemYuanbao() */

void __thiscall GridItemYuanbao::~GridItemYuanbao(GridItemYuanbao *this)

{
  ~GridItemYuanbao(this + -0x10);
  return;
}


/* GridItemYuanbao::~GridItemYuanbao() */

void __thiscall GridItemYuanbao::~GridItemYuanbao(GridItemYuanbao *this)

{
  ~GridItemYuanbao(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemYuanbao::~GridItemYuanbao() */

void __thiscall GridItemYuanbao::~GridItemYuanbao(GridItemYuanbao *this)

{
  ~GridItemYuanbao(this + -0x10);
  return;
}


/* GridItemYuanbao::GridItemYuanbao() */

void __thiscall GridItemYuanbao::GridItemYuanbao(GridItemYuanbao *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_0663b6e0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemYuanbao_0663b998;
  return;
}


/* GridItemYuanbao::StaticNew() */

GridItemYuanbao * GridItemYuanbao::StaticNew(void)

{
  GridItemYuanbao *this;
  
  this = ::operator_new(0x1b0);
  GridItemYuanbao(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemYuanbao::StaticClassInit() */

void GridItemYuanbao::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemYuanbao");
    (*pcVar2)(plVar1,asStack_10,FUN_03470520,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemYuanbao::StaticGetClass() */

long * GridItemYuanbao::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemYuanbao",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemYuanbao::GetClass() const */

long * GridItemYuanbao::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemYuanbao",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemYuanbao::DropCoin() */

void __thiscall GridItemYuanbao::DropCoin(GridItemYuanbao *this)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  Collectable *this_00;
  string *psVar4;
  string asStack_40 [8];
  undefined8 local_38;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  string asStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  psVar4 = *(string **)(gLawnApp + 0x9f0);
  std::string::string(asStack_18,"coin_silver");
  lVar3 = Board::AddCollectable(psVar4);
  std::string::~string(asStack_18);
  nop();
  if (lVar3 != 0) {
    nop();
    local_38 = *puVar2;
    local_30 = *(float *)(puVar2 + 1);
    iVar1 = Sexy::Rand(0x14);
    local_30 = (float)(iVar1 + 0x3c) + local_30;
    (**(code **)(*(long *)this_00 + 0x78))(this_00,&local_38);
    DVec3::DVec3((DVec3 *)&local_28);
    local_28 = (float)Sexy::Rand(70.0);
    local_28 = local_28 - 70.0;
    local_24 = (float)Sexy::Rand(30.0);
    local_24 = local_24 - 30.0;
    local_20 = (float)Sexy::Rand(200.0);
    local_20 = local_20 + 100.0;
    DVec3::DVec3((DVec3 *)asStack_18);
    local_10 = 0xc4160000;
    Collectable::SetMotionNewtonian(this_00,(SexyVector3 *)&local_28,(SexyVector3 *)asStack_18,true)
    ;
    Collectable::SetKeepOnBoard(this_00,true);
    Collectable::StartExpirationTimerAfterMotion(this_00);
    Collectable::ForceUpdateEffect(this_00);
    MessageRouter::Post<CollectableCoin*,CollectableCoin*>
              ((MessageRouter *)gMessageRouter,Message::CoinSpawned,(CollectableCoin *)this_00);
    std::string::string(asStack_40,"Play_UI_Coin_Drop");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_40,0.0);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemYuanbao::onAnimStoppedCallback(std::string const&) */

void __thiscall GridItemYuanbao::onAnimStoppedCallback(GridItemYuanbao *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  RtObject *pRVar3;
  GridItemYuanbaoRig *pGVar4;
  int iVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"money_birth1");
  if (bVar1) {
    GridItemAnimation::GetAnimRig();
    pRVar3 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pGVar4 = Sexy::RtObject::Cast<GridItemYuanbaoRig>(pRVar3);
    GridItemYuanbaoRig::playIdle1Anim(pGVar4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  else {
    bVar1 = std::operator==(param_1,"money_birth2");
    if (bVar1) {
      GridItemAnimation::GetAnimRig();
      pRVar3 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      pGVar4 = Sexy::RtObject::Cast<GridItemYuanbaoRig>(pRVar3);
      GridItemYuanbaoRig::playIdle2Anim(pGVar4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
    else {
      bVar1 = std::operator==(param_1,"money_birth3");
      if (bVar1) {
        GridItemAnimation::GetAnimRig();
        pRVar3 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        pGVar4 = Sexy::RtObject::Cast<GridItemYuanbaoRig>(pRVar3);
        GridItemYuanbaoRig::playIdle3Anim(pGVar4);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
      else {
        bVar1 = std::operator==(param_1,"money_fade");
        if (bVar1) {
          iVar2 = RandRangeInt(0,2);
          iVar5 = 0;
          if (-1 < iVar2) {
            while (iVar5 = iVar5 + 1, iVar5 <= iVar2) {
              DropCoin(this);
            }
          }
          (**(code **)(*(long *)this + 0x48))(this);
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemYuanbao::onGridItemInitialize() */

void __thiscall GridItemYuanbao::onGridItemInitialize(GridItemYuanbao *this)

{
  RtObject *this_00;
  GridItemYuanbaoRig *pGVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  RealObject::JoinTeam((RealObject *)this,2);
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x1a8) = fVar2 + 10.0;
  GridItemAnimation::GetAnimRig();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
  pGVar1 = Sexy::RtObject::Cast<GridItemYuanbaoRig>(this_00);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  GridItemYuanbaoRig::playBirthAnim(pGVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemYuanbao::onUpdate() */

void __thiscall GridItemYuanbao::onUpdate(GridItemYuanbao *this)

{
  PopAnimRig *pPVar1;
  float fVar2;
  undefined4 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x1a8) < fVar2) {
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x1a8) = uVar3;
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_68,"money_fade");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onAnimStoppedCallback");
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
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemYuanbao::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemYuanbao::GatherPlantingRestrictions
          (GridItemYuanbao *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  local_c = 0x72;
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemYuanbao::OverrideProjectileCollision(Projectile*) */

undefined8 __thiscall
GridItemYuanbao::OverrideProjectileCollision(GridItemYuanbao *this,Projectile *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0346f448(*(undefined8 *)(param_1 + 0xe0));
  bVar1 = TestFlag<DamageTypeFlags>(uVar2,0x2000000000);
  if (!bVar1) {
    uVar2 = BoardEntity::OverrideProjectileCollision((BoardEntity *)this,param_1);
    return uVar2;
  }
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  return 0;
}

