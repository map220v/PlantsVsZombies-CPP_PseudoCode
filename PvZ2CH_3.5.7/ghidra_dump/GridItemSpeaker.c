// Class: GridItemSpeaker


/* GridItemSpeaker::onAnimEnded() */

void __thiscall GridItemSpeaker::onAnimEnded(GridItemSpeaker *this)

{
  (**(code **)(*(long *)this + 0x2d8))(this,2);
  return;
}


/* GridItemSpeaker::onMusicBeatReceived() */

void __thiscall GridItemSpeaker::onMusicBeatReceived(GridItemSpeaker *this)

{
  if ((*(int *)(this + 0x1c8) == -1) && (*(int *)(this + 0x1c4) == 2)) {
    *(undefined4 *)(this + 0x1c8) = 3;
    return;
  }
  return;
}


/* GridItemSpeaker::onMusicBarReceived() */

void __thiscall GridItemSpeaker::onMusicBarReceived(GridItemSpeaker *this)

{
  if ((*(int *)(this + 0x1c8) == -1) && (*(int *)(this + 0x1c4) == 2)) {
    *(undefined4 *)(this + 0x1c8) = 4;
    return;
  }
  return;
}


/* GridItemSpeaker::onDestroy() */

void __thiscall GridItemSpeaker::onDestroy(GridItemSpeaker *this)

{
  GridItem::onDestroy((GridItem *)this);
  EntityComponent_GroundEffect::Destroy((EntityComponent_GroundEffect *)(this + 0x1d0));
  return;
}


/* GridItemSpeaker::SetSpeakerDroppingIn() */

void __thiscall GridItemSpeaker::SetSpeakerDroppingIn(GridItemSpeaker *this)

{
  (**(code **)(*(long *)this + 0x2d8))(this,1);
  (**(code **)(*(long *)this + 0x80))(this,0);
  return;
}


/* GridItemSpeaker::SetSpeakerBlasting() */

void __thiscall GridItemSpeaker::SetSpeakerBlasting(GridItemSpeaker *this)

{
  (**(code **)(*(long *)this + 0x2d8))(this,5);
  (**(code **)(*(long *)this + 0x80))(this,0);
  return;
}


/* GridItemSpeaker::SetSpeakerIdle() */

void __thiscall GridItemSpeaker::SetSpeakerIdle(GridItemSpeaker *this)

{
  (**(code **)(*(long *)this + 0x2d8))(this,2);
  (**(code **)(*(long *)this + 0x80))(this,0);
  return;
}


/* GridItemSpeaker::GetCantPlantReason() const */

undefined8 GridItemSpeaker::GetCantPlantReason(void)

{
  return 0x1b;
}


/* GridItemSpeaker::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void GridItemSpeaker::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  PlantGroup *pPVar4;
  
  bVar1 = std::operator==(param_4,"hit_ground");
  if (bVar1) {
    iVar2 = FUN_03e32560(*(undefined4 *)(param_1 + 0x130));
    iVar3 = FUN_03e32564(*(undefined4 *)(param_1 + 0x134));
    pPVar4 = (PlantGroup *)Board::GetPlantGroupAt(*(Board **)(gLawnApp + 0x9f0),iVar2,iVar3);
    if (pPVar4 != (PlantGroup *)0x0) {
      PlantGroup::KillPlants(pPVar4,0x10000000000,0);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSpeaker::onUpdate() */

void __thiscall GridItemSpeaker::onUpdate(GridItemSpeaker *this)

{
  int iVar1;
  float fVar2;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1c4) == 0) {
    fVar2 = (float)PVZ_Dt();
    fVar2 = fVar2 + *(float *)(this + 0x1f0);
    *(float *)(this + 0x1f0) = fVar2;
    if (0.15 <= fVar2) {
      EntityComponent_GroundEffect::SetGroundEffect
                ((EntityComponent_GroundEffect *)(this + 0x1d0),this,3,1);
      fVar2 = *(float *)(this + 0x1f0);
    }
    local_c = 1000;
    local_10 = 0;
    iVar1 = CurveLerp<int>(0,0x3f800000,fVar2,&local_10,&local_c,4);
    GridItemEightiesArcadeCabinet::setRiseHeight((GridItemEightiesArcadeCabinet *)this,(float)iVar1)
    ;
    if (1.0 <= *(float *)(this + 0x1f0)) {
      EntityComponent_GroundEffect::ClearGroundEffect
                ((EntityComponent_GroundEffect *)(this + 0x1d0),(RealObject *)this);
      (**(code **)(*(long *)this + 0x2d8))(this,2);
    }
  }
  if ((*(int *)(this + 0x1c8) != -1) && (*(int *)(this + 0x1c4) == 2)) {
    (**(code **)(*(long *)this + 0x2d8))(this);
    *(undefined4 *)(this + 0x1c8) = 0xffffffff;
  }
  GridItemBreakableTarget::onUpdate((GridItemBreakableTarget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSpeaker::GridItemSpeaker() */

void __thiscall GridItemSpeaker::GridItemSpeaker(GridItemSpeaker *this)

{
  undefined *puVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBreakableTarget::GridItemBreakableTarget((GridItemBreakableTarget *)this);
  *(undefined4 *)(this + 0x1c4) = 0;
  *(undefined ***)this = &PTR_GetClass_067894e0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSpeaker_067897d0;
  *(undefined4 *)(this + 0x1c8) = 0xffffffff;
  EntityComponent_GroundEffect::EntityComponent_GroundEffect
            ((EntityComponent_GroundEffect *)(this + 0x1d0));
  *(undefined4 *)(this + 0x1f0) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMusicBarReceived);
  Sexy::Delegate0::Delegate0<GridItemSpeaker,void(GridItemSpeaker::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::MusicBarReceived,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMusicBeatReceived);
  Sexy::Delegate0::Delegate0<GridItemSpeaker,void(GridItemSpeaker::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::MusicBeatReceived,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSpeaker::StaticNew() */

GridItemSpeaker * GridItemSpeaker::StaticNew(void)

{
  GridItemSpeaker *this;
  
  this = ::operator_new(0x1f8);
  GridItemSpeaker(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSpeaker::onPostLoad() */

void __thiscall GridItemSpeaker::onPostLoad(GridItemSpeaker *this)

{
  TimeChallengeEndLevelUI *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  this_00 = (TimeChallengeEndLevelUI *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2d0);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<GridItemSpeaker,void(GridItemSpeaker::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aCStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSpeaker::spawnSpeakerShatterEffect(Sexy::SexyVector2 const&, std::string const&) const */

void __thiscall
GridItemSpeaker::spawnSpeakerShatterEffect
          (GridItemSpeaker *this,SexyVector2 *param_1,string *param_2)

{
  Effect_PopAnim *this_00;
  PopAnim *pPVar1;
  float local_28;
  float local_24;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)&local_28,"POPANIM_EFFECTS_80S_SPEAKER");
  GetPAMByName((string *)&local_28);
  pPVar1 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string((string *)&local_28);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,0.0,0.0,0.0);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_18,local_28 + *(float *)param_1,local_24 + *(float *)(param_1 + 4),0.0)
  ;
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  Effect_PopAnim::PlaySingleAnimation(this_00,param_2,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSpeaker::onKilled() */

void __thiscall GridItemSpeaker::onKilled(GridItemSpeaker *this)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  uVar1 = *(undefined4 *)(this + 0x1c);
  local_8 = ___stack_chk_guard;
  local_18 = FUN_03e3257c(*(undefined4 *)(this + 0x18),uVar1,*(undefined4 *)(this + 0x20));
  local_14 = uVar1;
  std::string::string(asStack_10,"death");
  spawnSpeakerShatterEffect(this,(SexyVector2 *)&local_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSpeaker::onGridItemInitialize() */

void __thiscall GridItemSpeaker::onGridItemInitialize(GridItemSpeaker *this)

{
  long lVar1;
  GridItemSpeakerProps *pGVar2;
  TimeChallengeEndLevelUI *this_00;
  undefined4 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBreakableTarget::onGridItemInitialize((GridItemBreakableTarget *)this);
  pGVar2 = GridItem::GetProps<GridItemSpeakerProps>();
  uVar3 = *(undefined4 *)(pGVar2 + 0x10);
  FUN_03e32550(uVar3,this + 300);
  FUN_03e32558(uVar3,this + 0x128);
  FUN_03e32548(this + 0x24,2);
  (**(code **)(*(long *)this + 0x80))(this,1);
  (**(code **)(*(long *)this + 0x2d8))(this,0);
  GridItemAnimation::GetAnimRig();
  this_00 = (TimeChallengeEndLevelUI *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2d0);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<GridItemSpeaker,void(GridItemSpeaker::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aCStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1c8) = 0xffffffff;
  *(undefined4 *)(this + 0x1f0) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSpeaker::shortRangeAttack() */

void __thiscall GridItemSpeaker::shortRangeAttack(GridItemSpeaker *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  GridItemSpeakerProps *pGVar7;
  Plant *this_00;
  long lVar8;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  Insets aIStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  local_9c = 0;
  iVar3 = FUN_03e32560(*(undefined4 *)(this + 0x130));
  local_98 = CONCAT44(local_98._4_4_,iVar3 + -2);
  piVar6 = eastl::max_alt<int>(&local_9c,(int *)&local_98);
  iVar5 = *piVar6;
  iVar4 = FUN_03e32564(*(undefined4 *)(this + 0x134));
  local_90 = CONCAT44(local_90._4_4_,iVar3);
  local_88 = 2;
  piVar6 = eastl::min_alt<int>((int *)&local_90,(int *)&local_88);
  Sexy::Insets::Insets(aIStack_68,iVar5,iVar4,*piVar6,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_80,1,aIStack_68);
  pGVar7 = GridItem::GetProps<GridItemSpeakerProps>();
  iVar5 = *(int *)(pGVar7 + 0x138);
  Sexy::Point::Point((Point *)&local_90,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)(float)iVar5,local_88,local_84,aIStack_68,(Point *)&local_90,0);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_98,(__normal_iterator *)&local_90), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
    nop();
    Plant::GetType();
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
    bVar1 = std::operator!=((string *)(lVar8 + 8),"phatbeet");
    if (((bVar1) && (iVar5 = (**(code **)(*(long *)this_00 + 0x180))(this_00), 0 < iVar5)) &&
       (cVar2 = Plant::IsInvincible(this_00,false), cVar2 == '\0')) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
      (**(code **)(*(long *)this_00 + 0x110))(this_00,aIStack_68);
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
  }
  DamageInfo::~DamageInfo((DamageInfo *)aIStack_68);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSpeaker::setState(SpeakerState) */

void __thiscall GridItemSpeaker::setState(GridItemSpeaker *this,undefined4 param_2)

{
  PopAnimRig *pPVar1;
  char *pcVar2;
  PopAnimRig *local_98;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1c4) = param_2;
  switch(param_2) {
  case 0:
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    std::string::string(asStack_58,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_58,0,(DummyInit *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    RealObject::SetUseGroundClipRect((RealObject *)this,true);
    (**(code **)(*(long *)this + 0x80))(this,0);
    break;
  case 1:
    RealObject::SetUseGroundClipRect((RealObject *)this,false);
    GridItemAnimation::GetAnimRig();
    local_98 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    pcVar2 = "drop";
    goto LAB_03e34200;
  case 2:
    RealObject::SetUseGroundClipRect((RealObject *)this,false);
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    pcVar2 = "idle";
    goto LAB_03e34408;
  case 3:
    GridItemAnimation::GetAnimRig();
    local_98 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    pcVar2 = "idle2";
LAB_03e34200:
    std::string::string(asStack_68,pcVar2);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onAnimEnded");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(local_98,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    break;
  case 4:
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_68,"blast");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onAnimEnded");
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
    shortRangeAttack(this);
    break;
  case 5:
    RealObject::SetUseGroundClipRect((RealObject *)this,false);
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    pcVar2 = "blast";
LAB_03e34408:
    std::string::string(asStack_58,pcVar2);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_58,0,(DummyInit *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSpeaker::StaticClassInit() */

void GridItemSpeaker::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"SPEAKERSTATE_RISING",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"SPEAKERSTATE_DROPPING",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"SPEAKERSTATE_IDLE",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 3;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"SPEAKERSTATE_PULSING",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 4;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"SPEAKERSTATE_ATTACKING",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 6;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"SPEAKERSTATE_ROWCLEAR",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"SpeakerState");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"GridItemSpeaker");
    (*pcVar3)(plVar2,avStack_20,FUN_03e34e1c,0x1f8,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSpeaker::StaticGetClass() */

long * GridItemSpeaker::StaticGetClass(void)

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
  uVar2 = GridItemBreakableTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSpeaker",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSpeaker::GetClass() const */

long * GridItemSpeaker::GetClass(void)

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
  uVar2 = GridItemBreakableTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSpeaker",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSpeaker::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemSpeaker::GatherPlantingRestrictions
          (GridItemSpeaker *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  local_c = GetCantPlantReason();
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSpeaker::~GridItemSpeaker() */

void __thiscall GridItemSpeaker::~GridItemSpeaker(GridItemSpeaker *this)

{
  *(undefined ***)this = &PTR_GetClass_067894e0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSpeaker_067897d0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  EntityComponent_GroundEffect::~EntityComponent_GroundEffect
            ((EntityComponent_GroundEffect *)(this + 0x1d0));
  GridItemBreakableTarget::~GridItemBreakableTarget((GridItemBreakableTarget *)this);
  return;
}


/* non-virtual thunk to GridItemSpeaker::~GridItemSpeaker() */

void __thiscall GridItemSpeaker::~GridItemSpeaker(GridItemSpeaker *this)

{
  ~GridItemSpeaker(this + -0x10);
  return;
}


/* GridItemSpeaker::~GridItemSpeaker() */

void __thiscall GridItemSpeaker::~GridItemSpeaker(GridItemSpeaker *this)

{
  ~GridItemSpeaker(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemSpeaker::~GridItemSpeaker() */

void __thiscall GridItemSpeaker::~GridItemSpeaker(GridItemSpeaker *this)

{
  ~GridItemSpeaker(this + -0x10);
  return;
}

