// Class: ZombossHydraSprayActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraSprayActionHandler::buildWalkCurve(Sexy::SexyVector3 const&, Sexy::SexyVector3
   const&, float, float, CurveType, CurveSequenceCollection<float>&) */

void __thiscall
ZombossHydraSprayActionHandler::buildWalkCurve
          (float param_3,CurveSequence<float> *param_2_00,undefined8 param_3_00,float *param_1,
          long param_2,undefined4 param_6,CurveSequenceCollection<float> *param_7)

{
  CurveSequence<float> *pCVar1;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CurveSequenceCollection<float>::Clear(param_7);
  std::string::string(asStack_10,"x");
  pCVar1 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)param_7);
  CurveSequence<float>::StartSequence(pCVar1,param_3,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"x");
  uVar2 = CurveSequenceCollection<float>::operator[]((string *)param_7);
  CurveSequence<float>::AddCurve(param_2_00._0_4_,uVar2,param_2,param_6);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"y");
  pCVar1 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)param_7);
  CurveSequence<float>::StartSequence(pCVar1,param_3,param_1 + 1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"y");
  uVar2 = CurveSequenceCollection<float>::operator[]((string *)param_7);
  CurveSequence<float>::AddCurve(param_2_00._0_4_,uVar2,param_2 + 4,param_6);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"z");
  pCVar1 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)param_7);
  CurveSequence<float>::StartSequence(pCVar1,param_3,param_1 + 2);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"z");
  uVar2 = CurveSequenceCollection<float>::operator[]((string *)param_7);
  CurveSequence<float>::AddCurve(param_2_00._0_4_,uVar2,param_2 + 8,param_6);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraSprayActionHandler::StaticClassInit() */

void ZombossHydraSprayActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossHydraSprayActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04f55d1c,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossHydraSprayActionHandler::StaticGetClass() */

long * ZombossHydraSprayActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossHydraSprayActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossHydraSprayActionHandler::GetClass() const */

long * ZombossHydraSprayActionHandler::GetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossHydraSprayActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraSprayActionHandler::onInitializeAction() */

void __thiscall
ZombossHydraSprayActionHandler::onInitializeAction(ZombossHydraSprayActionHandler *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantBlow);
  Sexy::Delegate0::
  Delegate0<ZombossHydraSprayActionHandler,void(ZombossHydraSprayActionHandler::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::PlantBloverWind,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossHydraSprayActionHandler::onAnimStopCommand(std::string const&) */

void __thiscall
ZombossHydraSprayActionHandler::onAnimStopCommand
          (ZombossHydraSprayActionHandler *this,string *param_1)

{
  bool bVar1;
  ZombossHydraSprayActionDefinition *pZVar2;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieHydraHeadAnimRig *this_02;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  bVar1 = std::operator==(param_1,"fire_attack");
  if (bVar1) {
    uVar3 = PVZ_T();
    *(undefined4 *)(this + 0x24) = uVar3;
    pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
    fVar5 = *(float *)(pZVar2 + 0x38);
    fVar4 = (float)PVZ_T();
    *(float *)(this + 0x28) = fVar4 + fVar5;
    this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
    this_02 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
    ZombieAnimRig_ZombossMech_Hydra::PlayFireBreathLoop((ZombieAnimRig_ZombossMech_Hydra *)this_02);
    return;
  }
  bVar1 = std::operator==(param_1,"fire_attack_end");
  if (!bVar1) {
    return;
  }
  ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
  return;
}


/* ZombossHydraSprayActionHandler::ZombossHydraSprayActionHandler() */

void __thiscall
ZombossHydraSprayActionHandler::ZombossHydraSprayActionHandler(ZombossHydraSprayActionHandler *this)

{
  undefined4 uVar1;
  
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06a1ecc0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 0x28) = uVar1;
  Sexy::Point::Point((Point *)(this + 0x2c));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  Sexy::Point::Point((Point *)(this + 0x50));
  *(undefined4 *)(this + 0x58) = 0;
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x60));
  return;
}


/* ZombossHydraSprayActionHandler::StaticNew() */

ZombossHydraSprayActionHandler * ZombossHydraSprayActionHandler::StaticNew(void)

{
  ZombossHydraSprayActionHandler *this;
  
  this = ::operator_new(0x98);
  ZombossHydraSprayActionHandler(this);
  return this;
}


/* ZombossHydraSprayActionHandler::~ZombossHydraSprayActionHandler() */

void __thiscall
ZombossHydraSprayActionHandler::~ZombossHydraSprayActionHandler
          (ZombossHydraSprayActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06a1ecc0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  CurveSequenceCollection<float>::~CurveSequenceCollection
            ((CurveSequenceCollection<float> *)(this + 0x60));
  std::vector<Sexy::RtWeakPtr<GridItemHydraFog>,std::allocator<Sexy::RtWeakPtr<GridItemHydraFog>>>::
  ~vector((vector<Sexy::RtWeakPtr<GridItemHydraFog>,std::allocator<Sexy::RtWeakPtr<GridItemHydraFog>>>
           *)(this + 0x38));
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossHydraSprayActionHandler::~ZombossHydraSprayActionHandler() */

void __thiscall
ZombossHydraSprayActionHandler::~ZombossHydraSprayActionHandler
          (ZombossHydraSprayActionHandler *this)

{
  ~ZombossHydraSprayActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraSprayActionHandler::updateFogDuration() */

void __thiscall
ZombossHydraSprayActionHandler::updateFogDuration(ZombossHydraSprayActionHandler *this)

{
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieHydraHeadAnimRig *pZVar1;
  float fVar2;
  undefined4 uVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x28) < fVar2) {
    this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
    pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStopCommand");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_ZombossMech_Hydra::PlayFireBreathEnd
              ((ZombieAnimRig_ZombossMech_Hydra *)pZVar1,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    std::vector<Sexy::RtWeakPtr<GridItemHydraFog>,std::allocator<Sexy::RtWeakPtr<GridItemHydraFog>>>
    ::clear((vector<Sexy::RtWeakPtr<GridItemHydraFog>,std::allocator<Sexy::RtWeakPtr<GridItemHydraFog>>>
             *)(this + 0x38));
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x28) = uVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraSprayActionHandler::onPlantBlow() */

void __thiscall ZombossHydraSprayActionHandler::onPlantBlow(ZombossHydraSprayActionHandler *this)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<GridItemHydraFog>,std::allocator<Sexy::RtWeakPtr<GridItemHydraFog>>>::
  clear((vector<Sexy::RtWeakPtr<GridItemHydraFog>,std::allocator<Sexy::RtWeakPtr<GridItemHydraFog>>>
         *)(this + 0x38));
  Sexy::Point::Point((Point *)&local_10,0,0);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x2c) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraSprayActionHandler::addFogGrid(std::string const&, int, int) */

void __thiscall
ZombossHydraSprayActionHandler::addFogGrid
          (ZombossHydraSprayActionHandler *this,string *param_1,int param_2,int param_3)

{
  Board *this_00;
  RtObject *this_01;
  GridItemHydraFog *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((-1 < param_2) &&
       (this_00 = *(Board **)(gLawnApp + 0x9f0), param_2 < *(int *)(this_00 + 0xf8) + -2)) &&
      (-1 < param_3)) && (param_3 < *(int *)(this_00 + 0xfc))) {
    this_01 = (RtObject *)Board::AddGridItem(this_00,param_1,param_2,param_3,1);
    pGVar1 = Sexy::RtObject::Cast<GridItemHydraFog>(this_01);
    if (pGVar1 != (GridItemHydraFog *)0x0) {
      FUN_04f510c0(pGVar1 + 0x220);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      std::
      vector<Sexy::RtWeakPtr<GridItemHydraFog>,std::allocator<Sexy::RtWeakPtr<GridItemHydraFog>>>::
      push_back((vector<Sexy::RtWeakPtr<GridItemHydraFog>,std::allocator<Sexy::RtWeakPtr<GridItemHydraFog>>>
                 *)(this + 0x38),(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraSprayActionHandler::createFogs() */

void __thiscall ZombossHydraSprayActionHandler::createFogs(ZombossHydraSprayActionHandler *this)

{
  int iVar1;
  TPoint<int> *this_00;
  double dVar2;
  char cVar3;
  bool bVar4;
  TPoint *pTVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  string asStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int local_2c;
  Point aPStack_28 [8];
  undefined8 local_20 [3];
  long local_8;
  
  this_00 = (TPoint<int> *)(this + 0x2c);
  local_8 = ___stack_chk_guard;
  dVar2 = (double)std::floor<int>(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) / 2);
  iVar7 = (int)dVar2;
  Sexy::Point::Point((Point *)local_20,0,0);
  cVar3 = Sexy::TPoint<int>::operator==(this_00,(TPoint *)local_20);
  if (cVar3 != '\0') {
    Sexy::Point::Point((Point *)local_20,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -3,iVar7);
    *(undefined8 *)(this + 0x2c) = local_20[0];
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  iVar6 = 1;
  if (0 < iVar7) {
    do {
      Sexy::Point::Point(aPStack_28,iVar6,iVar6);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_20,aPStack_28);
      iVar1 = iVar6 + 1;
      Sexy::Point::Point(aPStack_28,iVar6,-iVar6);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_20,aPStack_28);
      iVar6 = iVar1;
    } while (iVar1 <= iVar7);
  }
  fVar8 = (float)PVZ_T();
  if (*(float *)(this + 0x24) < fVar8) {
    std::string::string(asStack_48,"hydra_fog");
    nop();
    addFogGrid(this,asStack_48,*(int *)(this + 0x2c),*(int *)(this + 0x30));
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_20);
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar4)
    {
      pTVar5 = (TPoint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      Sexy::TPoint<int>::operator+(this_00,pTVar5);
      Sexy::Point::Point((Point *)&local_30,(TPoint *)aPStack_28);
      addFogGrid(this,asStack_48,local_30,local_2c);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    UnchartedModePlantNumData::UnchartedModePlantNumData
              ((UnchartedModePlantNumData *)aPStack_28,-1,0);
    Sexy::TPoint<int>::operator+=(this_00,(TPoint *)aPStack_28);
    fVar8 = (float)PVZ_T();
    *(float *)(this + 0x24) = fVar8 + 1.0;
    std::string::~string(asStack_48);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraSprayActionHandler::onStartAction() */

void __thiscall ZombossHydraSprayActionHandler::onStartAction(ZombossHydraSprayActionHandler *this)

{
  undefined4 uVar1;
  int iVar2;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  undefined4 *puVar3;
  ZombieHydraHeadAnimRig *pZVar4;
  PopAnimRig *this_02;
  code *pcVar5;
  float fVar6;
  float fVar7;
  ZombossHydraSprayActionHandler *pZVar8;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  undefined4 local_60;
  float local_5c;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  iVar2 = SharkMinion::getRow((SharkMinion *)this_01);
  if (iVar2 == 1) {
    pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string((string *)&local_60,"onAnimStopCommand");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,(RtId *)asStack_68,(string *)&local_60);
    ZombieAnimRig_ZombossMech_Hydra::PlayFireBreathStart
              ((ZombieAnimRig_ZombossMech_Hydra *)pZVar4,
               (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string((string *)&local_60);
    nop();
    Sexy::RtId::~RtId((RtId *)asStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    this[0x90] = (ZombossHydraSprayActionHandler)0x1;
  }
  else {
    DVec3::DVec3((DVec3 *)&local_60);
    puVar3 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this_01);
    local_60 = *puVar3;
    iVar2 = BoardTransforms::GridToBoardSpaceY(1);
    local_5c = (float)iVar2;
    pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
    uVar1 = *(undefined4 *)(this + 0x58);
    pcVar5 = *(code **)(*(long *)pZVar4 + 0x270);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
    (*pcVar5)(pZVar4,uVar1,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    ZombieZombossMech::ForceAnimRateModifierForActiveStage(this_01);
    this_02 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this_01);
    Zombie::GetAnimRig((Zombie *)this_01);
    PopAnimRig::CalcPlayingAnimLabelName();
    fVar6 = (float)PopAnimRig::CalcAnimLengthSeconds(this_02,asStack_68);
    std::string::~string(asStack_68);
    fVar7 = (float)ZombieZombossMech::GetZomboss_T_Modifier(this_01);
    pZVar8._0_4_ = (ZombossHydraSprayActionHandler *)ZombieZombossMech::GetZomboss_T(this_01);
    buildWalkCurve(pZVar8._0_4_,fVar7 * fVar6,this,puVar3,(DVec3 *)&local_60,4,this + 0x60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraSprayActionHandler::updateWalk() */

void __thiscall ZombossHydraSprayActionHandler::updateWalk(ZombossHydraSprayActionHandler *this)

{
  string *psVar1;
  char cVar2;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  CurveSequence<float> *pCVar3;
  ZombieHydraHeadAnimRig *pZVar4;
  float fVar5;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  string asStack_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  cVar2 = (**(code **)(*(long *)this_01 + 0xa90))();
  if ((cVar2 == '\0') && (this[0x90] == (ZombossHydraSprayActionHandler)0x0)) {
    DVec3::DVec3((DVec3 *)&local_60);
    psVar1 = (string *)(this + 0x60);
    std::string::string(asStack_68,"x");
    pCVar3 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
    fVar5 = (float)ZombieZombossMech::GetZomboss_T(this_01);
    local_60 = CurveSequence<float>::operator[](pCVar3,fVar5);
    std::string::~string(asStack_68);
    nop();
    std::string::string(asStack_68,"y");
    pCVar3 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
    fVar5 = (float)ZombieZombossMech::GetZomboss_T(this_01);
    local_5c = CurveSequence<float>::operator[](pCVar3,fVar5);
    std::string::~string(asStack_68);
    nop();
    std::string::string(asStack_68,"z");
    pCVar3 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
    fVar5 = (float)ZombieZombossMech::GetZomboss_T(this_01);
    local_58 = CurveSequence<float>::operator[](pCVar3,fVar5);
    std::string::~string(asStack_68);
    nop();
    (**(code **)(*(long *)this_01 + 0x78))(this_01,(DVec3 *)&local_60);
    cVar2 = ZombieZombossMech::IsPlantfoodedPlantUnderfoot(this_01);
    if (cVar2 == '\0') {
      ZombieZombossMech::KillEntitiesUnderfoot(this_01);
      std::string::string(asStack_68,"x");
      pCVar3 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
      fVar5 = (float)ZombieZombossMech::GetZomboss_T(this_01);
      cVar2 = CurveSequence<float>::IsTimeInSequence(pCVar3,fVar5);
      std::string::~string(asStack_68);
      nop();
      if (cVar2 == '\0') {
        this[0x90] = (ZombossHydraSprayActionHandler)0x1;
        pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
        std::string::string(asStack_68,"onAnimStopCommand");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_70,asStack_68);
        ZombieAnimRig_ZombossMech_Hydra::PlayFireBreathStart
                  ((ZombieAnimRig_ZombossMech_Hydra *)pZVar4,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_68);
        nop();
        Sexy::RtId::~RtId(aRStack_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78)
        ;
      }
    }
    else {
      ZombieZombossMech::DoStun(this_01);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossHydraSprayActionHandler::onUpdateAction() */

void __thiscall ZombossHydraSprayActionHandler::onUpdateAction(ZombossHydraSprayActionHandler *this)

{
  char cVar1;
  RtObject *this_00;
  ZombieZombossMech *pZVar2;
  
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  pZVar2 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  cVar1 = (**(code **)(*(long *)pZVar2 + 0xa90))();
  if (cVar1 != '\0') {
    return;
  }
  updateWalk(this);
  createFogs(this);
  updateFogDuration(this);
  return;
}

