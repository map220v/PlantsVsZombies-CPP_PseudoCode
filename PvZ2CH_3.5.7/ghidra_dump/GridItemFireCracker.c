// Class: GridItemFireCracker


/* GridItemFireCracker::onFireCrackerStateChanged(int) */

void __thiscall
GridItemFireCracker::onFireCrackerStateChanged(GridItemFireCracker *this,int param_1)

{
  if (param_1 == 0) {
    (**(code **)(*(long *)this + 0x2b0))();
    return;
  }
  (**(code **)(*(long *)this + 0x2a8))();
  return;
}


/* GridItemFireCracker::~GridItemFireCracker() */

void __thiscall GridItemFireCracker::~GridItemFireCracker(GridItemFireCracker *this)

{
  *(undefined ***)this = &PTR_GetClass_06993510;
  *(undefined ***)(this + 0x10) = &PTR__GridItemFireCracker_069937e8;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemFireCracker::~GridItemFireCracker() */

void __thiscall GridItemFireCracker::~GridItemFireCracker(GridItemFireCracker *this)

{
  ~GridItemFireCracker(this + -0x10);
  return;
}


/* GridItemFireCracker::~GridItemFireCracker() */

void __thiscall GridItemFireCracker::~GridItemFireCracker(GridItemFireCracker *this)

{
  ~GridItemFireCracker(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemFireCracker::~GridItemFireCracker() */

void __thiscall GridItemFireCracker::~GridItemFireCracker(GridItemFireCracker *this)

{
  ~GridItemFireCracker(this + -0x10);
  return;
}


/* GridItemFireCracker::CalcRenderOrder() const */

void __thiscall GridItemFireCracker::CalcRenderOrder(GridItemFireCracker *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_04c7fcbc(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x61e68,uVar1,1);
  return;
}


/* non-virtual thunk to GridItemFireCracker::CalcRenderOrder() const */

void __thiscall GridItemFireCracker::CalcRenderOrder(GridItemFireCracker *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFireCracker::StaticClassInit() */

void GridItemFireCracker::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemFireCracker");
    (*pcVar2)(plVar1,asStack_10,FUN_04c808a0,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFireCracker::StaticGetClass() */

long * GridItemFireCracker::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemFireCracker",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemFireCracker::GetClass() const */

long * GridItemFireCracker::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemFireCracker",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemFireCracker::GridItemFireCracker() */

void __thiscall GridItemFireCracker::GridItemFireCracker(GridItemFireCracker *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1a8) = 1;
  *(undefined ***)this = &PTR_GetClass_06993510;
  *(undefined ***)(this + 0x10) = &PTR__GridItemFireCracker_069937e8;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = uVar1;
  *(undefined4 *)(this + 0x1b0) = 0;
  return;
}


/* GridItemFireCracker::StaticNew() */

GridItemFireCracker * GridItemFireCracker::StaticNew(void)

{
  GridItemFireCracker *this;
  
  this = ::operator_new(0x1b8);
  GridItemFireCracker(this);
  return this;
}


/* GridItemFireCracker::setValues(float, float) */

void __thiscall
GridItemFireCracker::setValues(GridItemFireCracker *this,float param_1,float param_2)

{
  FUN_04c7fcac(this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
    FUN_04c7fcb4(this + 0x128);
    *(float *)(this + 0x1b0) = param_2;
    return;
  }
  (**(code **)(*(long *)this + 0x1e0))();
  FUN_04c7fcb4(this + 0x128);
  *(float *)(this + 0x1b0) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFireCracker::setState(FireCrackerState) */

void __thiscall GridItemFireCracker::setState(GridItemFireCracker *this,int param_2)

{
  GridItemSummerFireworksAnimRig *this_00;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1a8) == param_2) goto switchD_04c80e50_default;
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
    goto switchD_04c80e50_default;
  case 2:
    (**(code **)(*(long *)this + 0x2b8))(this);
    goto switchD_04c80e50_default;
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
    goto switchD_04c80e50_default;
  case 6:
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)aRStack_58,"onAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,aRStack_58);
    GridItemSummerFireworksAnimRig::PlayExplode(this_00,aRStack_50);
    break;
  default:
    goto switchD_04c80e50_default;
  }
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string((string *)aRStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
switchD_04c80e50_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFireCracker::onGridItemInitialize() */

void __thiscall GridItemFireCracker::onGridItemInitialize(GridItemFireCracker *this)

{
  GridItemFireCrackerProps *pGVar1;
  TimeChallengeEndLevelUI *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = GridItem::GetProps<GridItemFireCrackerProps>();
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  FUN_04c7fcac(*(undefined4 *)(pGVar1 + 0x10),this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_04c7fcb4(this + 0x128);
  setState(this,0);
  RealObject::JoinTeam((RealObject *)this,2);
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<GridItemFireCracker,void(GridItemFireCracker::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aCStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFireCracker::Activate() */

char __thiscall GridItemFireCracker::Activate(GridItemFireCracker *this)

{
  char cVar1;
  
  cVar1 = GridItemSummerFireworks::canActivated((GridItemSummerFireworks *)this);
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


/* GridItemFireCracker::Deactivate() */

char __thiscall GridItemFireCracker::Deactivate(GridItemFireCracker *this)

{
  char cVar1;
  
  cVar1 = GridItemSummerFireworks::canDeactivated((GridItemSummerFireworks *)this);
  if (cVar1 != '\0') {
    setState(this,5);
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFireCracker::onAnimDone(std::string const&) */

void __thiscall GridItemFireCracker::onAnimDone(GridItemFireCracker *this,string *param_1)

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


/* GridItemFireCracker::onTakeDamage(DamageInfo const&) */

void __thiscall GridItemFireCracker::onTakeDamage(GridItemFireCracker *this,DamageInfo *param_1)

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
  cVar1 = GridItemSummerFireworks::canActivated((GridItemSummerFireworks *)this);
  if (cVar1 == '\0') {
LAB_04c81458:
    cVar1 = GridItemSummerFireworks::canDeactivated((GridItemSummerFireworks *)this);
    if ((cVar1 != '\0') &&
       (bVar2 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x3f8000000), bVar2)) {
      (**(code **)(*(long *)this + 0x2b0))(this);
      cVar1 = GridItem::HasCondition(this,4);
      goto joined_r0x04c8149c;
    }
  }
  else {
    uVar3 = operator|(0x400,0x400000);
    bVar2 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),uVar3);
    if (!bVar2) goto LAB_04c81458;
    (**(code **)(*(long *)this + 0x2a8))(this);
  }
  cVar1 = GridItem::HasCondition(this,4);
joined_r0x04c8149c:
  if (((cVar1 != '\0') || (cVar1 = GridItem::HasCondition(this,5), cVar1 != '\0')) ||
     (cVar1 = GridItem::HasCondition(this,6), cVar1 != '\0')) {
    (**(code **)(*(long *)this + 0x2b0))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFireCracker::OnAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void GridItemFireCracker::OnAnimCommand
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
  Sexy::OutputDebugStrF((wchar_t *)"GridItemFireCracker %s, %s ",uVar5,uVar6);
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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFireCracker::CheckGridZombies() */

void __thiscall GridItemFireCracker::CheckGridZombies(GridItemFireCracker *this)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  GridItemFireCrackerProps *pGVar4;
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
  pGVar4 = GridItem::GetProps<GridItemFireCrackerProps>();
  if (pGVar4 != (GridItemFireCrackerProps *)0x0) {
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
        uVar7 = FUN_04c80b04(*(undefined8 *)(pGVar4 + 0xd0));
        uVar8 = FUN_04c80b54(*(undefined8 *)(pGVar4 + 0xd8));
        local_30 = std::
                   find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                             (uVar7,uVar8,asStack_38);
        local_28 = FUN_04c80b54(*(undefined8 *)(pGVar4 + 0xd8));
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


/* GridItemFireCracker::registerForEvents() */

void __thiscall GridItemFireCracker::registerForEvents(GridItemFireCracker *this)

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
            ((ReceivedDataCallback *)this,onFireCrackerStateChanged);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<GridItemFireCracker,void(GridItemFireCracker::*)(int)>>
            ((MessageRouter *)puVar1,Message::GridItemFireCracker,&local_40);
  return;
}


/* GridItemFireCracker::onUpdate() */

void __thiscall GridItemFireCracker::onUpdate(GridItemFireCracker *this)

{
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  (**(code **)(*(long *)this + 0x2c0))(this);
  CheckGridZombies(this);
  return;
}

