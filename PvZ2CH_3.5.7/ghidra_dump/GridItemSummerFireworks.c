// Class: GridItemSummerFireworks


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSummerFireworks::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemSummerFireworks::GatherPlantingRestrictions
          (GridItemSummerFireworks *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  local_c = 0x30;
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSummerFireworks::canActivated() */

bool __thiscall GridItemSummerFireworks::canActivated(GridItemSummerFireworks *this)

{
  return (*(uint *)(this + 0x1a8) & 0xfffffffb) == 1;
}


/* GridItemSummerFireworks::canDeactivated() */

bool __thiscall GridItemSummerFireworks::canDeactivated(GridItemSummerFireworks *this)

{
  return *(int *)(this + 0x1a8) - 3U < 2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSummerFireworks::onActivated() */

void __thiscall GridItemSummerFireworks::onActivated(GridItemSummerFireworks *this)

{
  GridItemSummerFireworksAnimRig *extraout_x0;
  float fVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x1ac) = fVar1 + 3.0;
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string((string *)aRStack_58,"onAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             aRStack_58);
  GridItemSummerFireworksAnimRig::PlayActivated(extraout_x0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSummerFireworks::throwPlant() */

void __thiscall GridItemSummerFireworks::throwPlant(GridItemSummerFireworks *this)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  Plant *this_00;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar2 = SharkMinion::getRow((SharkMinion *)this);
  uVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,1,uVar3,uVar2);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)*puVar4);
    if (((bVar1) && (nop(), this_00 != (Plant *)0x0)) && (0.0 < *(float *)(this_00 + 0xd8))) {
      Plant::beThrown(this_00);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSummerFireworks::onSummerFireworksStateChanged(int) */

void __thiscall
GridItemSummerFireworks::onSummerFireworksStateChanged(GridItemSummerFireworks *this,int param_1)

{
  if (param_1 == 0) {
    (**(code **)(*(long *)this + 0x2b0))();
    return;
  }
  (**(code **)(*(long *)this + 0x2a8))();
  return;
}


/* GridItemSummerFireworks::~GridItemSummerFireworks() */

void __thiscall GridItemSummerFireworks::~GridItemSummerFireworks(GridItemSummerFireworks *this)

{
  *(undefined ***)this = &PTR_GetClass_06993bd0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSummerFireworks_06993ea8;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemSummerFireworks::~GridItemSummerFireworks() */

void __thiscall GridItemSummerFireworks::~GridItemSummerFireworks(GridItemSummerFireworks *this)

{
  ~GridItemSummerFireworks(this + -0x10);
  return;
}


/* GridItemSummerFireworks::~GridItemSummerFireworks() */

void __thiscall GridItemSummerFireworks::~GridItemSummerFireworks(GridItemSummerFireworks *this)

{
  ~GridItemSummerFireworks(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemSummerFireworks::~GridItemSummerFireworks() */

void __thiscall GridItemSummerFireworks::~GridItemSummerFireworks(GridItemSummerFireworks *this)

{
  ~GridItemSummerFireworks(this + -0x10);
  return;
}


/* GridItemSummerFireworks::CalcRenderOrder() const */

void __thiscall GridItemSummerFireworks::CalcRenderOrder(GridItemSummerFireworks *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_04c83040(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x61e68,uVar1,1);
  return;
}


/* non-virtual thunk to GridItemSummerFireworks::CalcRenderOrder() const */

void __thiscall GridItemSummerFireworks::CalcRenderOrder(GridItemSummerFireworks *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSummerFireworks::StaticClassInit() */

void GridItemSummerFireworks::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemSummerFireworks");
    (*pcVar2)(plVar1,asStack_10,FUN_04c83a5c,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSummerFireworks::StaticGetClass() */

long * GridItemSummerFireworks::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSummerFireworks",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSummerFireworks::GetClass() const */

long * GridItemSummerFireworks::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSummerFireworks",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSummerFireworks::GridItemSummerFireworks() */

void __thiscall GridItemSummerFireworks::GridItemSummerFireworks(GridItemSummerFireworks *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1a8) = 1;
  *(undefined ***)this = &PTR_GetClass_06993bd0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSummerFireworks_06993ea8;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = uVar1;
  *(undefined4 *)(this + 0x1b0) = 0;
  return;
}


/* GridItemSummerFireworks::StaticNew() */

GridItemSummerFireworks * GridItemSummerFireworks::StaticNew(void)

{
  GridItemSummerFireworks *this;
  
  this = ::operator_new(0x1b8);
  GridItemSummerFireworks(this);
  return this;
}


/* GridItemSummerFireworks::setValues(float, float) */

void __thiscall
GridItemSummerFireworks::setValues(GridItemSummerFireworks *this,float param_1,float param_2)

{
  FUN_04c83030(this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
    FUN_04c83038(this + 0x128);
    *(float *)(this + 0x1b0) = param_2;
    return;
  }
  (**(code **)(*(long *)this + 0x1e0))();
  FUN_04c83038(this + 0x128);
  *(float *)(this + 0x1b0) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSummerFireworks::setState(SummerFireworksState) */

void __thiscall GridItemSummerFireworks::setState(GridItemSummerFireworks *this,int param_2)

{
  GridItemSummerFireworksAnimRig *this_00;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1a8) == param_2) goto switchD_04c8400c_default;
  *(int *)(this + 0x1a8) = param_2;
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  switch(param_2) {
  case 0:
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)aRStack_58,"onAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,aRStack_58);
    GridItemSummerFireworksAnimRig::PlayAppear(this_00,aRStack_50);
    break;
  case 1:
    GridItemSummerFireworksAnimRig::PlayIdle(this_00);
    goto switchD_04c8400c_default;
  case 2:
    (**(code **)(*(long *)this + 0x2b8))(this);
    goto switchD_04c8400c_default;
  case 3:
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)aRStack_58,"onAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,aRStack_58);
    GridItemSummerFireworksAnimRig::PlaySmokeStart(this_00,aRStack_50);
    break;
  case 4:
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)aRStack_58,"onAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,aRStack_58);
    GridItemSummerFireworksAnimRig::PlaySmoking(this_00,aRStack_50);
    break;
  case 5:
    GridItemSummerFireworksAnimRig::PlayIdleOut(this_00);
    goto switchD_04c8400c_default;
  case 6:
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)aRStack_58,"onAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,aRStack_58);
    GridItemSummerFireworksAnimRig::PlayExplode(this_00,aRStack_50);
    break;
  default:
    goto switchD_04c8400c_default;
  }
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string((string *)aRStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
switchD_04c8400c_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSummerFireworks::onGridItemInitialize() */

void __thiscall GridItemSummerFireworks::onGridItemInitialize(GridItemSummerFireworks *this)

{
  int iVar1;
  GridItemSummerFireworksProps *pGVar2;
  TimeChallengeEndLevelUI *this_00;
  long lVar3;
  long lVar4;
  long lVar5;
  RtObject *this_01;
  PoolDaylightStage *pPVar6;
  GameObjectDictionary *this_02;
  AttachedEffect *this_03;
  ResourceInfo *pRVar7;
  StandaloneEffect *this_04;
  code *pcVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemSummerFireworksProps>();
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  FUN_04c83030(*(undefined4 *)(pGVar2 + 0x10),this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_04c83038(this + 0x128);
  setState(this,0);
  RealObject::JoinTeam((RealObject *)this,2);
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<GridItemSummerFireworks,void(GridItemSummerFireworks::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,(string *)&local_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  lVar3 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  lVar4 = Board::FindRegionWithFlags(*(undefined8 *)(gLawnApp + 0x9f0),lVar3,2);
  lVar5 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  if (lVar5 == 0) {
    pPVar6 = (PoolDaylightStage *)0x0;
  }
  else {
    this_01 = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    pPVar6 = Sexy::RtObject::Cast<PoolDaylightStage>(this_01);
  }
  if (lVar4 != 0) {
    this_02 = (GameObjectDictionary *)PlayerInfo::GetPlantNewAvatarPiecesInfo((PlayerInfo *)this);
    std::string::string((string *)&local_50,"water_effect");
    this_03 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_02,(string *)&local_50);
    std::string::~string((string *)&local_50);
    nop();
    std::string::string((string *)aRStack_58,"POPANIM_BACKGROUNDS_WATER_ZOMBIE_RIPPLE");
    GetPAMByName((string *)aRStack_58);
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_50);
    AttachedEffect::InitializeWithAnimation(this_03,(PopAnim *)pRVar7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
    std::string::~string((string *)aRStack_58);
    nop();
    std::string::string((string *)&local_50,"ripple");
    AttachedEffect::PlayAnimLooped(this_03,(string *)&local_50,2);
    std::string::~string((string *)&local_50);
    nop();
    pcVar8 = *(code **)(*(long *)this_03 + 0x18);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_50,0.0,-5.0,0.0);
    (*pcVar8)(this_03,this,(string *)&local_50,1);
    if ((pPVar6 != (PoolDaylightStage *)0x0) &&
       (iVar1 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(lVar3 + 4)), iVar1 == 3)) {
      Sexy::Insets::Insets((Insets *)&local_50);
      local_50 = 0;
      local_4c = 0;
      local_48 = FUN_04c831e8(1000);
      local_44 = FUN_04c831e8(0x1cc);
      this_04 = (StandaloneEffect *)AttachedEffect::GetEffect(this_03);
      StandaloneEffect::SetClipRect(this_04,(TRect *)&local_50);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSummerFireworks::Activate() */

char __thiscall GridItemSummerFireworks::Activate(GridItemSummerFireworks *this)

{
  char cVar1;
  
  cVar1 = canActivated(this);
  if (cVar1 != '\0') {
    if (*(int *)(this + 0x1a8) == 1) {
      setState(this,2);
    }
    else if (*(int *)(this + 0x1a8) == 5) {
      setState(this,4);
      return cVar1;
    }
  }
  return cVar1;
}


/* GridItemSummerFireworks::Deactivate() */

char __thiscall GridItemSummerFireworks::Deactivate(GridItemSummerFireworks *this)

{
  char cVar1;
  
  cVar1 = canDeactivated(this);
  if (cVar1 != '\0') {
    setState(this,5);
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSummerFireworks::onAnimDone(std::string const&) */

void __thiscall GridItemSummerFireworks::onAnimDone(GridItemSummerFireworks *this,string *param_1)

{
  char cVar1;
  long *extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  (**(code **)(*extraout_x0 + 0x138))(aRStack_10,extraout_x0);
  cVar1 = std::operator==(param_1,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  if (cVar1 == '\0') {
    (**(code **)(*extraout_x0 + 0x118))(aRStack_10,extraout_x0);
    cVar1 = std::operator==(param_1,(string *)aRStack_10);
    std::string::~string((string *)aRStack_10);
    if (cVar1 == '\0') {
      (**(code **)(*extraout_x0 + 0x140))(aRStack_10,extraout_x0);
      cVar1 = std::operator==(param_1,(string *)aRStack_10);
      std::string::~string((string *)aRStack_10);
      if (cVar1 == '\0') {
        (**(code **)(*extraout_x0 + 0x128))(aRStack_10,extraout_x0);
        cVar1 = std::operator==(param_1,(string *)aRStack_10);
        std::string::~string((string *)aRStack_10);
        if (cVar1 == '\0') {
          (**(code **)(*extraout_x0 + 0x120))(aRStack_10,extraout_x0);
          cVar1 = std::operator==(param_1,(string *)aRStack_10);
          std::string::~string((string *)aRStack_10);
          if (cVar1 != '\0') {
            setState(this,4);
          }
        }
        else {
          setState(this,6);
        }
      }
      else {
        setState(this,1);
      }
    }
    else {
      setState(this,3);
    }
  }
  else {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSummerFireworks::onTakeDamage(DamageInfo const&) */

void __thiscall
GridItemSummerFireworks::onTakeDamage(GridItemSummerFireworks *this,DamageInfo *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  float fVar4;
  
  if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
    fVar4 = (float)GridItem::GetHitpoints((GridItem *)this);
  }
  else {
    fVar4 = (float)(**(code **)(*(long *)this + 0x1d8))();
  }
  if (fVar4 <= 1.0) {
    setState(this,6);
  }
  cVar1 = canActivated(this);
  if (cVar1 == '\0') {
LAB_04c847bc:
    cVar1 = canDeactivated(this);
    if ((cVar1 != '\0') &&
       (bVar2 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x3f8000000), bVar2)) {
      (**(code **)(*(long *)this + 0x2b0))(this);
      cVar1 = GridItem::HasCondition(this,4);
      goto joined_r0x04c84800;
    }
  }
  else {
    uVar3 = operator|(0x400,0x400000);
    bVar2 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),uVar3);
    if (!bVar2) goto LAB_04c847bc;
    (**(code **)(*(long *)this + 0x2a8))(this);
  }
  cVar1 = GridItem::HasCondition(this,4);
joined_r0x04c84800:
  if (((cVar1 != '\0') || (cVar1 = GridItem::HasCondition(this,5), cVar1 != '\0')) ||
     (cVar1 = GridItem::HasCondition(this,6), cVar1 != '\0')) {
    (**(code **)(*(long *)this + 0x2b0))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSummerFireworks::OnAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void GridItemSummerFireworks::OnAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  string *psVar8;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  string *local_68;
  undefined4 local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = FUN_0547429c(param_3);
  uVar6 = FUN_0547429c(param_4);
  Sexy::OutputDebugStrF((wchar_t *)"GridItemSummerFireworks %s, %s ",uVar5,uVar6);
  bVar1 = std::operator==(param_4,"explode");
  if (bVar1) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
    iVar2 = SharkMinion::getRow((SharkMinion *)param_1);
    iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
    uVar5 = operator|(2,4);
    uVar4 = operator|(uVar5,1);
    Sexy::Insets::Insets((Insets *)&local_68,iVar3 + -1,iVar2 + -1,3,3);
    EntityFinder::GetEntitiesInGridSquares(avStack_80,uVar4,(Insets *)&local_68);
    DamageInfo::DamageInfo((DamageInfo *)&local_68);
    local_60 = *(undefined4 *)(param_1 + 0x1b0);
    local_68 = param_1;
    operator|=(auStack_58,0x400);
    local_90 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1)
    {
      puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90)
      ;
      psVar8 = (string *)*puVar7;
      if (param_1 != psVar8) {
        (**(code **)(*(long *)psVar8 + 0x110))(psVar8,(Insets *)&local_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
    }
    DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  }
  else {
    bVar1 = std::operator==(param_4,"throwplant");
    if (bVar1) {
      throwPlant((GridItemSummerFireworks *)param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSummerFireworks::CheckGridZombies() */

void __thiscall GridItemSummerFireworks::CheckGridZombies(GridItemSummerFireworks *this)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  GridItemSummerFireworksProps *pGVar4;
  undefined8 *puVar5;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined8 local_48;
  undefined8 local_40;
  string asStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar4 = GridItem::GetProps<GridItemSummerFireworksProps>();
  if (pGVar4 != (GridItemSummerFireworksProps *)0x0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    uVar2 = SharkMinion::getRow((SharkMinion *)this);
    uVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    EntityFinder::GetEntitiesAtGridSquare(avStack_20,2,uVar3,uVar2);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48)
      ;
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
      if (this_00 != (Zombie *)0x0) {
        this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_00);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        FUN_05475d88(asStack_38,lVar6 + 8);
        uVar7 = FUN_04c83cc0(*(undefined8 *)(pGVar4 + 0xd0));
        uVar8 = FUN_04c83d10(*(undefined8 *)(pGVar4 + 0xd8));
        local_30 = std::
                   find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                             (uVar7,uVar8,asStack_38);
        local_28 = FUN_04c83d10(*(undefined8 *)(pGVar4 + 0xd8));
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28)
        ;
        if (bVar1) {
          puVar9 = (undefined4 *)Zombie::GetFlag(this_00);
          bVar1 = TestFlag<VaseFlags>(0x8000,*puVar9);
          if (bVar1) {
            (**(code **)(*(long *)this + 0x2a8))(this);
          }
        }
        std::string::~string(asStack_38);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
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


/* GridItemSummerFireworks::registerForEvents() */

void __thiscall GridItemSummerFireworks::registerForEvents(GridItemSummerFireworks *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GridItem::registerForEvents((GridItem *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSummerFireworksStateChanged);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<GridItemSummerFireworks,void(GridItemSummerFireworks::*)(int)>>
            ((MessageRouter *)puVar1,Message::GridItemSummerFireworks,&local_40);
  return;
}


/* GridItemSummerFireworks::onUpdate() */

void __thiscall GridItemSummerFireworks::onUpdate(GridItemSummerFireworks *this)

{
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  (**(code **)(*(long *)this + 0x2c0))(this);
  CheckGridZombies(this);
  return;
}

