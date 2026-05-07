// Class: BeachStage


/* BeachStage::BeachStage() */

void __thiscall BeachStage::BeachStage(BeachStage *this)

{
  StageModule::StageModule((StageModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06761b60;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  return;
}


/* BeachStage::StaticNew() */

BeachStage * BeachStage::StaticNew(void)

{
  BeachStage *this;
  
  this = ::operator_new(0xf0);
  BeachStage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeachStage::StaticClassInit() */

void BeachStage::StaticClassInit(void)

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
    std::string::string(asStack_10,"BeachStage");
    (*pcVar2)(plVar1,asStack_10,FUN_03cf5548,0xf0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BeachStage::StaticGetClass() */

long * BeachStage::StaticGetClass(void)

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
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"BeachStage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeachStage::addForegroundToRenderQueue(RenderQueue*) */

void __thiscall BeachStage::addForegroundToRenderQueue(BeachStage *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,renderForeground);
  Sexy::Delegate1<Sexy::Graphics*>::Delegate1<BeachStage,void(BeachStage::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,0x24dd8,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeachStage::AddVortex(float, float, float) */

void BeachStage::AddVortex(float param_1,float param_2,float param_3)

{
  char cVar1;
  Effect_GroundEffectStun *this;
  ResourceInfo *pRVar2;
  RtMixedPtrBase aRStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"POPANIM_EFFECTS_LOTUSHOOTER_VORTEX");
  GetPAMByName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
  if (cVar1 != '\0') {
    this = Board::AddEffect<Effect_GroundEffectStun>(*(Board **)(gLawnApp + 0x9f0));
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
    Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,(PopAnim *)pRVar2,(RtClass *)0x0);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,param_1,param_2 - 35.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)asStack_18,-1);
    FUN_03cf4fc8(this + 0x1c);
    FUN_03cf5e9c(param_3,this + 0x110);
    std::string::string(asStack_18,"ANIMATION");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)this,asStack_18,0);
    std::string::~string(asStack_18);
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BeachStage::SetLemonRainDelayTime(int) */

void __thiscall BeachStage::SetLemonRainDelayTime(BeachStage *this,int param_1)

{
  byte bVar1;
  
  bVar1 = FUN_03cf4efc(*(undefined4 *)(this + 0xe4));
  if (bVar1 < (0 < param_1)) {
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::BeachWaveChangeColor,false);
  }
  *(float *)(this + 0xe4) = (float)param_1;
  return;
}


/* BeachStage::renderForeground(Sexy::Graphics*) */

void __thiscall BeachStage::renderForeground(BeachStage *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  float fVar4;
  float fVar5;
  
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) / *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) / *(float *)(param_1 + 0x1c);
  pIVar3 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad5160);
  fVar4 = (float)FUN_03cf5134(0x43198000);
  fVar5 = (float)FUN_03cf5134(0x40c00000);
  Sexy::Graphics::DrawImage(param_1,pIVar3,(int)fVar4,(int)fVar5);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) / *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) / *(float *)(param_1 + 0x1c);
  pIVar3 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad5188);
  iVar1 = FUN_03cf5120(0xffffffd7);
  iVar2 = FUN_03cf5120(0x194);
  Sexy::Graphics::DrawImage(param_1,pIVar3,iVar1,iVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeachStage::WaterDamge() */

void __thiscall BeachStage::WaterDamge(BeachStage *this)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  Zombie *this_00;
  code *pcVar4;
  DamageInfo *pDVar5;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (2.0 <= *(float *)(this + 0xec)) {
    *(undefined4 *)(this + 0xec) = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
    Board::GetGridBoundingRect();
    EntityFinder::GetEntitiesTouchingRectangle(avStack_80,2,aRStack_68,0xffffffff,0xffffffff);
    local_a0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
    local_98 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar1)
    {
      plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
      if (*plVar3 != 0) {
        ToolPacketData::GetProps();
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_68);
        if (cVar2 == '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
        }
        else {
          this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*plVar3);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
          if ((((this_00 != (Zombie *)0x0) && (cVar2 = Zombie::IsInWater(this_00), cVar2 != '\0'))
              && (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0')) &&
             (((cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0' &&
               (cVar2 = BoardEntity::IsOnScreen((BoardEntity *)this_00), cVar2 != '\0')) &&
              (cVar2 = RealObject::IsOnOpposingTeam(this_00,1), cVar2 != '\0')))) {
                    /* WARNING: Load size is inaccurate */
            pDVar5._0_4_ = *(DamageInfo **)(this + 0xe8);
            pcVar4 = *(code **)(*(long *)this_00 + 0x110);
            BoardEntity::CalcGridPosition();
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
            DamageInfo::DamageInfo
                      (pDVar5._0_4_,local_88,local_84,aRStack_68,0x400000000,auStack_90,0);
            (*pcVar4)(this_00,aRStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BeachStage::UpdateLemonRainEffect() */

void __thiscall BeachStage::UpdateLemonRainEffect(BeachStage *this)

{
  char cVar1;
  float fVar2;
  
  cVar1 = FUN_03cf4efc(*(undefined4 *)(this + 0xe4));
  if (cVar1 == '\0') {
    return;
  }
  fVar2 = (float)PVZ_Dt();
  *(float *)(this + 0xe4) = *(float *)(this + 0xe4) - fVar2;
  fVar2 = (float)PVZ_Dt();
  *(float *)(this + 0xec) = *(float *)(this + 0xec) + fVar2;
  if (*(float *)(this + 0xe4) < 0.0) {
    *(undefined4 *)(this + 0xe4) = 0;
    *(undefined4 *)(this + 0xec) = 0;
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::BeachWaveChangeColor,true);
  }
  WaterDamge(this);
  return;
}


/* BeachStage::onUpdate() */

void __thiscall BeachStage::onUpdate(BeachStage *this)

{
  char cVar1;
  float fVar2;
  
  cVar1 = FUN_03cf4efc(*(undefined4 *)(this + 0xe4));
  if (cVar1 == '\0') {
    return;
  }
  fVar2 = (float)PVZ_Dt();
  *(float *)(this + 0xe4) = *(float *)(this + 0xe4) - fVar2;
  fVar2 = (float)PVZ_Dt();
  *(float *)(this + 0xec) = *(float *)(this + 0xec) + fVar2;
  if (*(float *)(this + 0xe4) < 0.0) {
    *(undefined4 *)(this + 0xe4) = 0;
    *(undefined4 *)(this + 0xec) = 0;
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::BeachWaveChangeColor,true);
  }
  WaterDamge(this);
  return;
}


/* BeachStage::~BeachStage() */

void __thiscall BeachStage::~BeachStage(BeachStage *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06761b60;
  StageModule::~StageModule((StageModule *)this);
  return;
}


/* BeachStage::~BeachStage() */

void __thiscall BeachStage::~BeachStage(BeachStage *this)

{
  ~BeachStage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeachStage::registerForEvents() */

void __thiscall BeachStage::registerForEvents(BeachStage *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<RenderQueue*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StageModule::registerForEvents((StageModule *)this);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addForegroundToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::Delegate1<BeachStage,void(BeachStage::*)(RenderQueue*)>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<BeachStage,void(BeachStage::*)()>((Delegate0 *)aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

