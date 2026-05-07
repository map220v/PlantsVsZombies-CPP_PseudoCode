// Class: ZombieZombossMech_Eighties


/* ZombieZombossMech_Eighties::buildStunMovementCurve() */

void __thiscall ZombieZombossMech_Eighties::buildStunMovementCurve(ZombieZombossMech_Eighties *this)

{
  CurveSequenceCollection<float> *this_00;
  
  this_00 = (CurveSequenceCollection<float> *)
            ZombieZombossMech::getMovementCurve((ZombieZombossMech *)this);
  CurveSequenceCollection<float>::Clear(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Eighties::StaticClassInit() */

void ZombieZombossMech_Eighties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZombossMech_Eighties");
    (*pcVar2)(plVar1,asStack_10,FUN_047f17bc,0x978,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_Eighties::StaticGetClass() */

long * ZombieZombossMech_Eighties::StaticGetClass(void)

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
  uVar2 = ZombieZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMech_Eighties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMech_Eighties::GetClass() const */

long * ZombieZombossMech_Eighties::GetClass(void)

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
  uVar2 = ZombieZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMech_Eighties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMech_Eighties::ZombieZombossMech_Eighties() */

void __thiscall
ZombieZombossMech_Eighties::ZombieZombossMech_Eighties(ZombieZombossMech_Eighties *this)

{
  ZombieZombossMech::ZombieZombossMech((ZombieZombossMech *)this);
  *(undefined4 *)(this + 0x960) = 0;
  *(undefined ***)this = &PTR_GetClass_068f5770;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_Eighties_068f6330;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x968));
  this[0x970] = (ZombieZombossMech_Eighties)0x0;
  return;
}


/* ZombieZombossMech_Eighties::StaticNew() */

ZombieZombossMech_Eighties * ZombieZombossMech_Eighties::StaticNew(void)

{
  ZombieZombossMech_Eighties *this;
  
  this = ::operator_new(0x978);
  ZombieZombossMech_Eighties(this);
  return this;
}


/* ZombieZombossMech_Eighties::~ZombieZombossMech_Eighties() */

void __thiscall
ZombieZombossMech_Eighties::~ZombieZombossMech_Eighties(ZombieZombossMech_Eighties *this)

{
  *(undefined ***)this = &PTR_GetClass_068f5770;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_Eighties_068f6330;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x968));
  ZombieZombossMech::~ZombieZombossMech((ZombieZombossMech *)this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_Eighties::~ZombieZombossMech_Eighties() */

void __thiscall
ZombieZombossMech_Eighties::~ZombieZombossMech_Eighties(ZombieZombossMech_Eighties *this)

{
  ~ZombieZombossMech_Eighties(this + -0x10);
  return;
}


/* ZombieZombossMech_Eighties::~ZombieZombossMech_Eighties() */

void __thiscall
ZombieZombossMech_Eighties::~ZombieZombossMech_Eighties(ZombieZombossMech_Eighties *this)

{
  ~ZombieZombossMech_Eighties(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_Eighties::~ZombieZombossMech_Eighties() */

void __thiscall
ZombieZombossMech_Eighties::~ZombieZombossMech_Eighties(ZombieZombossMech_Eighties *this)

{
  ~ZombieZombossMech_Eighties(this + -0x10);
  return;
}


/* ZombieZombossMech_Eighties::CancelSpeakerReticle(Sexy::Point) */

void ZombieZombossMech_Eighties::CancelSpeakerReticle(long param_1)

{
  bool bVar1;
  Effect_ZombossCrosshair *this;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x968));
  if (!bVar1) {
    return;
  }
  this = (Effect_ZombossCrosshair *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x968));
  Effect_ZombossCrosshair::StartOutro(this,0.618,1.7,0.0);
  return;
}


/* ZombieZombossMech_Eighties::registerForEvents() */

void __thiscall ZombieZombossMech_Eighties::registerForEvents(ZombieZombossMech_Eighties *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieAddedToBoard);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ZombieZombossMech_Eighties,void(ZombieZombossMech_Eighties::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Eighties::CreateSpeakerReticle(Sexy::Point, float) */

void __thiscall
ZombieZombossMech_Eighties::CreateSpeakerReticle
          (float param_1,ZombieZombossMech_Eighties *this,Point *param_3)

{
  ZombieZombossMechEightiesProps *pZVar1;
  Effect_ZombossCrosshair *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetProps<ZombieZombossMechEightiesProps>((Zombie *)this);
  this_00 = Board::AddEffect<Effect_ZombossCrosshair>(*(Board **)(gLawnApp + 0x9f0));
  Effect_ZombossCrosshair::InitializeCrosshair
            (this_00,param_3,(string *)(pZVar1 + 0x220),(string *)(pZVar1 + 0x228),param_1,true);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x968),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Eighties::onZombieAddedToBoard(Zombie*) */

void __thiscall
ZombieZombossMech_Eighties::onZombieAddedToBoard(ZombieZombossMech_Eighties *this,Zombie *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar4;
  BoardTransforms *this_01;
  undefined8 *puVar5;
  Plant *pPVar6;
  GridItem *pGVar7;
  GridItemEightiesArcadeCabinet *this_02;
  Board *this_03;
  RtObject *this_04;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  bVar1 = std::operator==((string *)(lVar4 + 8),"eighties_arcade");
  if (bVar1) {
    this_01 = (BoardTransforms *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)param_1);
    bVar1 = false;
    BoardTransforms::BoardSpaceToGrid(this_01,*(float *)this_01,*(float *)(this_01 + 4));
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    uVar3 = operator|(4,1);
    EntityFinder::GetEntitiesAtGridSquare(avStack_20,uVar3,local_40 + -1,local_3c);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    if (bVar2) {
      do {
        puVar5 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
        this_04 = (RtObject *)*puVar5;
        pPVar6 = Sexy::RtObject::Cast<Plant>(this_04);
        pGVar7 = Sexy::RtObject::Cast<GridItem>(this_04);
        if (pPVar6 != (Plant *)0x0) {
          (**(code **)(*(long *)pPVar6 + 0x48))(pPVar6);
        }
        if (pGVar7 != (GridItem *)0x0) {
          GridItem::GetType();
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          bVar2 = std::operator==((string *)(lVar4 + 8),"eightiesarcadecabinet");
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
          if (bVar2) {
            bVar1 = true;
          }
          else {
            (**(code **)(*(long *)pGVar7 + 0x48))(pGVar7);
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30)
        ;
      } while (bVar2);
    }
    if (!bVar1) {
      this_03 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)aRStack_28,"eightiesarcadecabinet");
      Board::AddGridItem(this_03,(string *)aRStack_28,local_40 + -1,local_3c,1);
      nop();
      std::string::~string((string *)aRStack_28);
      nop();
      GridItemEightiesArcadeCabinet::SetRiseFromGround(this_02);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Eighties::SwapJam() */

void __thiscall ZombieZombossMech_Eighties::SwapJam(ZombieZombossMech_Eighties *this)

{
  undefined *puVar1;
  int iVar2;
  ZombieZombossMechEightiesProps *pZVar3;
  allocator *paVar4;
  PopAnimRig *pPVar5;
  undefined8 uVar6;
  vector<std::string,std::allocator<std::string>> avStack_68 [24];
  vector<std::string,std::allocator<std::string>> avStack_50 [24];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = Zombie::GetProps<ZombieZombossMechEightiesProps>((Zombie *)this);
  iVar2 = FUN_047ee670(*(undefined4 *)(this + 0x844));
  paVar4 = (allocator *)FUN_047ee680(*(undefined8 *)(pZVar3 + 0x2a0),(long)iVar2);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((ulong)avStack_68,(string *)0x1,paVar4);
  puVar1 = gMessageRouter;
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_50,(vector *)avStack_68);
  MessageRouter::
  Broadcast<std::vector<std::string,std::allocator<std::string>>const&,std::vector<std::string,std::allocator<std::string>>>
            ((MessageRouter *)puVar1,Message::SendWaveNotificationEvents,avStack_50);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_50);
  Zombie::AddAttachedEffect
            ((Zombie *)this,"smoke","POPANIM_EFFECTS_ZOMBOSS_TRANSFORM_EFFECT","zomboss_transform",
             (SexyVector3 *)&DAT_06b28398,1,true);
  pPVar5 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  iVar2 = FUN_047ee670(*(undefined4 *)(this + 0x844));
  uVar6 = FUN_047ee680(*(undefined8 *)(pZVar3 + 0x2b8),(long)iVar2);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar5,uVar6,0,aDStack_38);
  this[0x970] = (ZombieZombossMech_Eighties)0x0;
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Eighties::onIntroAnimDone(std::string const&) */

void ZombieZombossMech_Eighties::onIntroAnimDone(string *param_1)

{
  undefined *puVar1;
  int iVar2;
  ZombieZombossMechEightiesProps *pZVar3;
  allocator *paVar4;
  PopAnimRig *pPVar5;
  undefined8 uVar6;
  ZombossBattleIntro *this;
  long *plVar7;
  vector<std::string,std::allocator<std::string>> avStack_68 [24];
  vector<std::string,std::allocator<std::string>> avStack_50 [24];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = Zombie::GetProps<ZombieZombossMechEightiesProps>((Zombie *)param_1);
  paVar4 = (allocator *)FUN_047ee680(*(undefined8 *)(pZVar3 + 0x2a0),0);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((ulong)avStack_68,(string *)0x1,paVar4);
  puVar1 = gMessageRouter;
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_50,(vector *)avStack_68);
  MessageRouter::
  Broadcast<std::vector<std::string,std::allocator<std::string>>const&,std::vector<std::string,std::allocator<std::string>>>
            ((MessageRouter *)puVar1,Message::SendWaveNotificationEvents,avStack_50);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_50);
  pPVar5 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)param_1);
  pZVar3 = Zombie::GetProps<ZombieZombossMechEightiesProps>((Zombie *)param_1);
  iVar2 = FUN_047ee670(*(undefined4 *)(param_1 + 0x844));
  uVar6 = FUN_047ee680(*(undefined8 *)(pZVar3 + 0x2b8),(long)iVar2);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar5,uVar6,0,aDStack_38);
  this = (ZombossBattleIntro *)FUN_047f0d6c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this == (ZombossBattleIntro *)0x0) {
    plVar7 = (long *)FUN_047f0d78(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0xb8))();
    }
  }
  else {
    ZombossBattleIntro::OnZombossIntroDone(this);
  }
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x047f22d4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieZombossMech_Eighties::Retreat(ZombieState) */

void __thiscall ZombieZombossMech_Eighties::Retreat(ZombieZombossMech_Eighties *this,int param_2)

{
  ZombieWithActions *pZVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 0x27) {
    *(undefined4 *)(this + 0x960) = 2;
  }
  else {
    pZVar1 = (ZombieWithActions *)ZombieZombossMech::getActiveStage((ZombieZombossMech *)this);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(pZVar1 + 0x20));
    ZombieWithActions::QueueAction<ZombossEightiesSwapJamActionHandler>(pZVar1,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,param_2);
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Eighties::updateStageEffect() */

void __thiscall ZombieZombossMech_Eighties::updateStageEffect(ZombieZombossMech_Eighties *this)

{
  char cVar1;
  int iVar2;
  char *__s;
  AttachedEffect *pAVar3;
  UIWidget *pUVar4;
  PopAnimRig *pPVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(this + 0x960)) {
  case 0:
    std::string::string(asStack_48,"stage_intro");
    pAVar3 = (AttachedEffect *)Zombie::GetAttachedEffect((Zombie *)this,asStack_48);
    pUVar4 = (UIWidget *)AttachedEffect::GetEffect(pAVar3);
    pPVar5 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar4);
    cVar1 = PopAnimRig::IsPlayingAnything(pPVar5);
    std::string::~string(asStack_48);
    nop();
    if (cVar1 == '\0') {
      iVar2 = (**(code **)(*(long *)this + 0x170))(this);
      pAVar3 = (AttachedEffect *)
               Zombie::AddAttachedEffect
                         ((Zombie *)this,"stage_idle",
                          "POPANIM_ZOMBIE_ZOMBIE_EIGHTIES_ZOMBOSS_BANDMEMBERS","idle_zombie_band",
                          (SexyVector3 *)&DAT_06b28398,400000 - iVar2,false);
      AttachedEffect::AttachedEffect((AttachedEffect *)asStack_48,pAVar3);
      pUVar4 = (UIWidget *)AttachedEffect::GetEffect((AttachedEffect *)asStack_48);
      pPVar5 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar4);
      std::string::string(asStack_50,"damage_state_1");
      PopAnimRig::SetLayerVisibility(pPVar5,asStack_50,false);
      std::string::~string(asStack_50);
      nop();
      std::string::string(asStack_50,"damage_state_2");
      PopAnimRig::SetLayerVisibility(pPVar5,asStack_50,false);
      std::string::~string(asStack_50);
      nop();
      std::string::string(asStack_50,"damage_state_3");
      PopAnimRig::SetLayerVisibility(pPVar5,asStack_50,false);
      std::string::~string(asStack_50);
      nop();
      std::string::string(asStack_50,"damage_state_4");
      PopAnimRig::SetLayerVisibility(pPVar5,asStack_50,false);
      std::string::~string(asStack_50);
      nop();
      std::string::string(asStack_50,"damage_state_5");
      PopAnimRig::SetLayerVisibility(pPVar5,asStack_50,false);
      std::string::~string(asStack_50);
      nop();
      *(undefined4 *)(this + 0x960) = 1;
      AttachedEffect::~AttachedEffect((AttachedEffect *)asStack_48);
    }
    break;
  case 1:
    fVar7 = (float)FUN_047ee668(*(undefined4 *)(this + 0x280));
    fVar8 = (float)FUN_047ee66c(*(undefined4 *)(this + 0x284));
    if ((fVar7 / fVar8 <= 0.5) && (this[0x970] == (ZombieZombossMech_Eighties)0x0)) {
      std::string::string(asStack_58,"stage_idle");
      pAVar3 = (AttachedEffect *)Zombie::GetAttachedEffect((Zombie *)this,asStack_58);
      pUVar4 = (UIWidget *)AttachedEffect::GetEffect(pAVar3);
      pPVar5 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar4);
      iVar2 = FUN_047ee670(*(undefined4 *)(this + 0x844));
      Sexy::StrFormat("damage_state_%i",asStack_50,(ulong)(iVar2 + 1));
      __s = (char *)FUN_0547429c(asStack_50);
      std::string::string(asStack_48,__s);
      PopAnimRig::SetLayerVisibility(pPVar5,asStack_48,true);
      std::string::~string(asStack_48);
      nop();
      std::string::~string(asStack_50);
      std::string::~string(asStack_58);
      nop();
      this[0x970] = (ZombieZombossMech_Eighties)0x1;
    }
    break;
  case 2:
    std::string::string(asStack_48,"stage_idle");
    pAVar3 = (AttachedEffect *)Zombie::GetAttachedEffect((Zombie *)this,asStack_48);
    std::string::~string(asStack_48);
    nop();
    if (pAVar3 != (AttachedEffect *)0x0) {
      pUVar4 = (UIWidget *)AttachedEffect::GetEffect(pAVar3);
      pPVar5 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar4);
      cVar1 = PopAnimRig::IsPlayingAnything(pPVar5);
      if (cVar1 != '\0') {
        Zombie::RemoveAttachedEffect((Zombie *)this,"stage_idle");
        iVar2 = (**(code **)(*(long *)this + 0x170))(this);
        Zombie::AddAttachedEffect
                  ((Zombie *)this,"stage_dying","POPANIM_ZOMBIE_ZOMBIE_EIGHTIES_ZOMBOSS_BANDMEMBERS"
                   ,"die",(SexyVector3 *)&DAT_06b28398,400000 - iVar2,true);
        break;
      }
    }
    std::string::string(asStack_48,"stage_dying");
    pAVar3 = (AttachedEffect *)Zombie::GetAttachedEffect((Zombie *)this,asStack_48);
    pUVar4 = (UIWidget *)AttachedEffect::GetEffect(pAVar3);
    pPVar5 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar4);
    cVar1 = PopAnimRig::IsPlayingAnything(pPVar5);
    std::string::~string(asStack_48);
    nop();
    if (cVar1 == '\0') {
      iVar2 = (**(code **)(*(long *)this + 0x170))(this);
      Zombie::AddAttachedEffect
                ((Zombie *)this,"stage_talking","POPANIM_ZOMBIE_ZOMBIE_EIGHTIES_ZOMBOSS_BANDMEMBERS"
                 ,"die_talk",(SexyVector3 *)&DAT_06b28398,400000 - iVar2,false);
      *(undefined4 *)(this + 0x960) = 3;
    }
    break;
  case 4:
    std::string::string(asStack_48,"stage_exiting");
    lVar6 = Zombie::GetAttachedEffect((Zombie *)this,asStack_48);
    std::string::~string(asStack_48);
    nop();
    if (lVar6 == 0) {
      Zombie::RemoveAttachedEffect((Zombie *)this,"stage_talking");
      iVar2 = (**(code **)(*(long *)this + 0x170))(this);
      Zombie::AddAttachedEffect
                ((Zombie *)this,"stage_exiting","POPANIM_ZOMBIE_ZOMBIE_EIGHTIES_ZOMBOSS_BANDMEMBERS"
                 ,"die_exit",(SexyVector3 *)&DAT_06b28398,400000 - iVar2,true);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Eighties::onPlaceOnBoard() */

void __thiscall ZombieZombossMech_Eighties::onPlaceOnBoard(ZombieZombossMech_Eighties *this)

{
  int iVar1;
  AttachedEffect *pAVar2;
  UIWidget *this_00;
  PopAnimRig *this_01;
  string asStack_50 [8];
  AttachedEffect aAStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieZombossMech::onPlaceOnBoard();
  ZombieZombossMech::setDamageEffectsAllowed((ZombieZombossMech *)this,false);
  *(undefined4 *)(this + 0x960) = 0;
  this[0x970] = (ZombieZombossMech_Eighties)0x0;
  iVar1 = (**(code **)(*(long *)this + 0x170))(this);
  pAVar2 = (AttachedEffect *)
           Zombie::AddAttachedEffect
                     ((Zombie *)this,"stage_intro",
                      "POPANIM_ZOMBIE_ZOMBIE_EIGHTIES_ZOMBOSS_BANDMEMBERS","intro",
                      (SexyVector3 *)&DAT_06b28398,400000 - iVar1,true);
  AttachedEffect::AttachedEffect(aAStack_48,pAVar2);
  this_00 = (UIWidget *)AttachedEffect::GetEffect(aAStack_48);
  this_01 = (PopAnimRig *)UIWidget::GetAtlasImage(this_00);
  std::string::string(asStack_50,"damage_state_1");
  PopAnimRig::SetLayerVisibility(this_01,asStack_50,false);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"damage_state_2");
  PopAnimRig::SetLayerVisibility(this_01,asStack_50,false);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"damage_state_3");
  PopAnimRig::SetLayerVisibility(this_01,asStack_50,false);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"damage_state_4");
  PopAnimRig::SetLayerVisibility(this_01,asStack_50,false);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"damage_state_5");
  PopAnimRig::SetLayerVisibility(this_01,asStack_50,false);
  std::string::~string(asStack_50);
  nop();
  AttachedEffect::~AttachedEffect(aAStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_Eighties::BeginExiting() */

void __thiscall ZombieZombossMech_Eighties::BeginExiting(ZombieZombossMech_Eighties *this)

{
  *(undefined4 *)(this + 0x960) = 4;
  ZombieZombossMech::BeginExiting((ZombieZombossMech *)this);
  return;
}


/* ZombieZombossMech_Eighties::onUpdate() */

void __thiscall ZombieZombossMech_Eighties::onUpdate(ZombieZombossMech_Eighties *this)

{
  updateStageEffect(this);
  ZombieZombossMech::onUpdate((ZombieZombossMech *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Eighties::onEnterState_ZombossStageChange(ZombieState) */

void ZombieZombossMech_Eighties::onEnterState_ZombossStageChange(RealObject *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieZombossMech::onEnterState_ZombossStageChange();
  std::string::string(asStack_10,"Play_Zomb_Eighties_Zomboss_Stun_Start");
  RealObject::PlayPositionalSound(param_1,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Eighties::onExitState_ZombossStageChange(ZombieState) */

void __thiscall
ZombieZombossMech_Eighties::onExitState_ZombossStageChange(ZombieZombossMech_Eighties *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  std::string::string(asStack_10,"Play_Zomb_Eighties_Zomboss_Stun_End");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Eighties::onEnterState_ZombossDeath(ZombieState) */

void ZombieZombossMech_Eighties::onEnterState_ZombossDeath(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  long *extraout_x0;
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieZombossMech::onEnterState_ZombossDeath();
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"Play_Eighties_Genre_Transition_None");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  Sexy::Insets::Insets((Insets *)local_30,0,0,iVar3,iVar4);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,4,(Insets *)local_30);
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
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    nop();
    cVar2 = RealObject::IsOnTeam();
    if (cVar2 != '\0') {
      (**(code **)(*extraout_x0 + 0x230))(extraout_x0);
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

