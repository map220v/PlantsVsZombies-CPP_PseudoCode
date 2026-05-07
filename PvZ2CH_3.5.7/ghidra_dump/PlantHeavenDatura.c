// Class: PlantHeavenDatura


/* PlantHeavenDatura::onCancelEvent() */

void __thiscall PlantHeavenDatura::onCancelEvent(PlantHeavenDatura *this)

{
  *(undefined8 *)(this + 0x38) = 0;
  return;
}


/* PlantHeavenDatura::unregisterForEvents() */

void __thiscall PlantHeavenDatura::unregisterForEvents(PlantHeavenDatura *this)

{
  char cVar1;
  
  cVar1 = PlantFramework::IsArenaBattle();
  if (cVar1 == '\0') {
    LawnApp::UnregisterBoardTouchGameplayObject(gLawnApp,this);
  }
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeavenDatura::onApplyCondition(PlantConditions) */

void __thiscall PlantHeavenDatura::onApplyCondition(PlantHeavenDatura *this,undefined4 param_2)

{
  string *psVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_2) {
  case 1:
  case 6:
  case 0x17:
  case 0x19:
  case 0x1d:
    psVar1 = (string *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
    std::string::string(asStack_10,"syllable");
    GameObjectDictionary::Remove(psVar1);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHeavenDatura::PlantHeavenDatura() */

void __thiscall PlantHeavenDatura::PlantHeavenDatura(PlantHeavenDatura *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067a79e0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x44));
  return;
}


/* PlantHeavenDatura::StaticNew() */

PlantHeavenDatura * PlantHeavenDatura::StaticNew(void)

{
  PlantHeavenDatura *this;
  
  this = ::operator_new(0x50);
  PlantHeavenDatura(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeavenDatura::StaticClassInit() */

void PlantHeavenDatura::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantHeavenDatura");
    (*pcVar2)(plVar1,asStack_10,FUN_03fb153c,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHeavenDatura::StaticGetClass() */

long * PlantHeavenDatura::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantHeavenDatura",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHeavenDatura::GetClass() const */

long * PlantHeavenDatura::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantHeavenDatura",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHeavenDatura::IsCondition() */

undefined1 __thiscall PlantHeavenDatura::IsCondition(PlantHeavenDatura *this)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),1);
  if ((((cVar1 != '\0') ||
       (cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),6), cVar1 != '\0')) ||
      (cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),0x1d), cVar1 != '\0')) ||
     (cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),0x17), uVar2 = 0, cVar1 != '\0')) {
    uVar2 = 1;
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeavenDatura::getSearchRect() */

void __thiscall PlantHeavenDatura::getSearchRect(PlantHeavenDatura *this)

{
  bool bVar1;
  int iVar2;
  Point *extraout_x1;
  int *in_x8;
  BoardTransforms aBStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  BoardTransforms::GridToBoardSpaceRect(aBStack_10,extraout_x1);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  *in_x8 = (int)((float)*in_x8 + (float)iVar2 * 0.2);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  bVar1 = local_8 == ___stack_chk_guard;
  in_x8[2] = (int)((float)in_x8[2] - (float)iVar2 * 0.4);
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHeavenDatura::~PlantHeavenDatura() */

void __thiscall PlantHeavenDatura::~PlantHeavenDatura(PlantHeavenDatura *this)

{
  *(undefined ***)this = &PTR_GetClass_067a79e0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantHeavenDatura::~PlantHeavenDatura() */

void __thiscall PlantHeavenDatura::~PlantHeavenDatura(PlantHeavenDatura *this)

{
  ~PlantHeavenDatura(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeavenDatura::SpawnSyllableEffect() */

void __thiscall PlantHeavenDatura::SpawnSyllableEffect(PlantHeavenDatura *this)

{
  GameObjectDictionary *this_00;
  AttachedEffect *this_01;
  ResourceInfo *pRVar1;
  undefined8 uVar2;
  code *pcVar3;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
  std::string::string(asStack_18,"syllable");
  this_01 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_00,asStack_18);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_20,"POPANIM_EFFECTS_HEAVENDATURA_EFFECT");
  nop();
  GetPAMByName(asStack_20);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
  AttachedEffect::InitializeWithAnimation(this_01,(PopAnim *)pRVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  Sexy::StrFormat("syllable_idle_%d",asStack_18,(ulong)(*(int *)(this + 0x28) + 1));
  AttachedEffect::PlayAnimLooped(this_01,asStack_18,2);
  std::string::~string(asStack_18);
  uVar2 = *(undefined8 *)(this + 0x10);
  pcVar3 = *(code **)(*(long *)this_01 + 0x18);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,-2.0,-42.0,0.0);
  (*pcVar3)(this_01,uVar2,asStack_18,1);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHeavenDatura::onEndCondition(PlantConditions) */

void __thiscall PlantHeavenDatura::onEndCondition(PlantHeavenDatura *this,undefined4 param_2)

{
  switch(param_2) {
  case 1:
  case 6:
  case 0x17:
  case 0x19:
  case 0x1d:
    SpawnSyllableEffect(this);
    return;
  default:
    return;
  }
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeavenDatura::SetSyllableQueueType(int) */

void __thiscall PlantHeavenDatura::SetSyllableQueueType(PlantHeavenDatura *this,int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  GameObjectDictionary *this_00;
  AttachedEffect *this_01;
  ResourceInfo *pRVar4;
  string *psVar5;
  undefined8 uVar6;
  code *pcVar7;
  Plant *this_02;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  *(int *)(this + 0x2c) = param_1;
  local_8 = ___stack_chk_guard;
  cVar2 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
  if (cVar2 != '\0') {
    this_02 = *(Plant **)(this + 0x10);
    iVar3 = FUN_03fb0d40(this_02);
    if (4 < iVar3) {
      if (param_1 < 2) {
        psVar5 = (string *)Plant::GetAttachedEffectManager(this_02);
        std::string::string(asStack_18,"SyllableQueue");
        GameObjectDictionary::Remove(psVar5);
        std::string::~string(asStack_18);
        nop();
      }
      else {
        this_00 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(this_02);
        std::string::string(asStack_18,"SyllableQueue");
        this_01 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_00,asStack_18);
        std::string::~string(asStack_18);
        nop();
        std::string::string(asStack_20,"POPANIM_EFFECTS_HEAVENDATURA_EFFECT");
        nop();
        GetPAMByName(asStack_20);
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
        AttachedEffect::InitializeWithAnimation(this_01,(PopAnim *)pRVar4);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18)
        ;
        uVar1 = *(int *)(this + 0x2c) - 1;
        if (5 < *(int *)(this + 0x2c)) {
          uVar1 = 4;
        }
        Sexy::StrFormat("guang0%d",asStack_18,(ulong)uVar1);
        AttachedEffect::PlayAnimLooped(this_01,asStack_18,2);
        std::string::~string(asStack_18);
        uVar6 = *(undefined8 *)(this + 0x10);
        pcVar7 = *(code **)(*(long *)this_01 + 0x18);
        EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,-30.0,0.0);
        (*pcVar7)(this_01,uVar6,asStack_18,0xffffffff);
        std::string::~string(asStack_20);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHeavenDatura::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantHeavenDatura::onAnimStoppedCallback(PlantHeavenDatura *this,string *param_1)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = std::operator==(param_1,"switch");
  if (bVar1) {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar2 + 0x118))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeavenDatura::registerForEvents() */

void __thiscall PlantHeavenDatura::registerForEvents(PlantHeavenDatura *this)

{
  undefined *puVar1;
  char cVar2;
  Board *pBVar3;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = PlantFramework::IsArenaBattle();
  if (cVar2 == '\0') {
    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onTouchEvent);
    Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
    Delegate1wRet<PlantHeavenDatura,bool(PlantHeavenDatura::*)(Sexy::Touch_const&)>
              (aDStack_68,(CBMemberTranslatorX *)&local_98);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aRStack_a8);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCancelEvent);
    Sexy::Delegate0::Delegate0<PlantHeavenDatura,void(PlantHeavenDatura::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_80);
    Board::RegisterTouchGameplayObject(pBVar3,aDStack_68,6,aRStack_a0,aDStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
  }
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantMoving);
  local_c0 = local_88;
  local_d0 = local_98;
  uStack_c8 = uStack_90;
  MessageRouter::
  Subscribe<Plant*,Sexy::Point&,Sexy::CBMemberTranslatorX<PlantHeavenDatura,void(PlantHeavenDatura::*)(Plant*,Sexy::Point&)>>
            ((MessageRouter *)puVar1,Message::PlantMoving,&local_d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantPlaced);
  local_f0 = local_80;
  uStack_e8 = uStack_78;
  local_e0 = local_70;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantHeavenDatura,void(PlantHeavenDatura::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlaced,&local_f0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeavenDatura::onDestroy() */

void __thiscall PlantHeavenDatura::onDestroy(PlantHeavenDatura *this)

{
  StaveSystem *this_00;
  long *plVar1;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::GetGameSubSystem<StaveSystem>(*(Board **)(gLawnApp + 0x9f0));
  BoardEntity::CalcGridPosition();
  StaveSystem::RemoveSyllable(this_00,aPStack_10);
  plVar1 = (long *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
  (**(code **)(*plVar1 + 0x48))();
  PlantFramework::onDestroy((PlantFramework *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeavenDatura::OnRelocationBegun() */

void __thiscall PlantHeavenDatura::OnRelocationBegun(PlantHeavenDatura *this)

{
  string *psVar1;
  StaveSystem *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
  std::string::string(asStack_10,"syllable");
  GameObjectDictionary::Remove(psVar1);
  std::string::~string(asStack_10);
  nop();
  psVar1 = (string *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
  std::string::string(asStack_10,"SyllableQueue");
  GameObjectDictionary::Remove(psVar1);
  std::string::~string(asStack_10);
  nop();
  this_00 = Board::GetGameSubSystem<StaveSystem>(*(Board **)(gLawnApp + 0x9f0));
  BoardEntity::CalcGridPosition();
  StaveSystem::RemoveSyllable(this_00,(Point *)asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeavenDatura::OnPlantMoving(Plant*, Sexy::Point&) */

void PlantHeavenDatura::OnPlantMoving(Plant *param_1,Point *param_2)

{
  StaveSystem *this;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(Point **)(param_1 + 0x10) == param_2) {
    this = Board::GetGameSubSystem<StaveSystem>(*(Board **)(gLawnApp + 0x9f0));
    BoardEntity::CalcGridPosition();
    StaveSystem::RemoveSyllable(this,aPStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeavenDatura::Initialize() */

void __thiscall PlantHeavenDatura::Initialize(PlantHeavenDatura *this)

{
  StaveSystem *this_00;
  undefined4 uVar1;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  uVar1 = PVZ_T();
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x30) = uVar1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x4c) = uVar1;
  this_00 = Board::GetGameSubSystem<StaveSystem>(*(Board **)(gLawnApp + 0x9f0));
  BoardEntity::CalcGridPosition();
  StaveSystem::AddSyllable(this_00,aPStack_10);
  SpawnSyllableEffect(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeavenDatura::OnRelocationComplete() */

void __thiscall PlantHeavenDatura::OnRelocationComplete(PlantHeavenDatura *this)

{
  StaveSystem *this_00;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::GetGameSubSystem<StaveSystem>(*(Board **)(gLawnApp + 0x9f0));
  BoardEntity::CalcGridPosition();
  StaveSystem::AddSyllable(this_00,aPStack_10);
  SpawnSyllableEffect(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeavenDatura::OnPlantPlaced(Plant*) */

void __thiscall PlantHeavenDatura::OnPlantPlaced(PlantHeavenDatura *this,Plant *param_1)

{
  StaveSystem *this_00;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(Plant **)(this + 0x10) == param_1) {
    this_00 = Board::GetGameSubSystem<StaveSystem>(*(Board **)(gLawnApp + 0x9f0));
    BoardEntity::CalcGridPosition();
    StaveSystem::AddSyllable(this_00,aPStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeavenDatura::SoundWave() */

void __thiscall PlantHeavenDatura::SoundWave(PlantHeavenDatura *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  Effect_SmallSoundWave *this_00;
  ResourceInfo *pRVar6;
  float *pfVar7;
  long lVar8;
  RtObject *pRVar9;
  PlantHeavenDaturaProps *pPVar10;
  undefined8 *puVar11;
  Zombie *this_01;
  Plant *this_02;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  Zombie *pZVar17;
  RtWeakPtr aRStack_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  Insets aIStack_90 [16];
  undefined4 local_80;
  undefined4 local_7c;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_68,"POPANIM_EFFECTS_HEAVENDATURA_EFFECT");
  GetPAMByName(asStack_68);
  std::string::~string(asStack_68);
  nop();
  this_00 = Board::AddEffect<Effect_SmallSoundWave>(*(Board **)(gLawnApp + 0x9f0));
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_a8);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_00,(PopAnim *)pRVar6,(RtClass *)0x0);
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this_00,true);
  pfVar7 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  fVar13 = *pfVar7;
  fVar16 = pfVar7[1];
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_68,(float)(iVar3 / 2) + fVar13,fVar16 - 20.0,0.0);
  lVar8 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          **)(this + 0x10));
  uVar4 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(lVar8 + 4));
  iVar3 = Board::MakeRenderOrder(0x64960,uVar4,0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)asStack_68,iVar3)
  ;
  std::string::string(asStack_68,"animation");
  Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this_00,asStack_68,0);
  std::string::~string(asStack_68);
  nop();
  BoardEntity::CalcGridPosition();
  Effect_SmallSoundWave::SetSpawnPoint(this_00,(Point *)asStack_68);
  FUN_03fb0d1c(asStack_68,*(undefined8 *)(this + 0x10));
  pRVar9 = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
  pPVar10 = Sexy::RtObject::Cast<PlantHeavenDaturaProps>(pRVar9);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
  iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar5 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  Sexy::Insets::Insets(aIStack_90,iVar3,iVar5,2,1);
  this_02 = *(Plant **)(this + 0x10);
  iVar3 = FUN_03fb0d40(this_02);
  fVar13 = 1.0;
  if ((4 < iVar3) && (fVar13 = 1.0, 1 < *(int *)(this + 0x2c))) {
    fVar13 = (float)(*(int *)(this + 0x2c) + -1) * 0.5 + 1.0;
  }
  fVar14 = *(float *)(pPVar10 + 700);
  fVar16 = (float)Plant::GetTotalDamageRate(this_02);
  fVar15 = (float)NEON_fminnm(fVar13,*(undefined4 *)(pPVar10 + 0x2c4));
  fVar13 = (float)Plant::GetDamageConstValue(*(Plant **)(this + 0x10));
  uVar12 = *(undefined8 *)(this + 0x10);
  Sexy::Point::Point((Point *)&local_98,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)(fVar13 + fVar15 * fVar16 * fVar14),local_80,local_7c,asStack_68,uVar12,
             (Point *)&local_98,0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar4 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares((FastCurve *)&local_80,uVar4,aIStack_90);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_80);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar1) {
    puVar11 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    pRVar9 = (RtObject *)*puVar11;
    uVar4 = FUN_03fb0c94(*(undefined4 *)(*(long *)(this + 0x10) + 0x24));
    cVar2 = RealObject::IsOnOpposingTeam(pRVar9,uVar4);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pRVar9 + 0x110))(pRVar9,asStack_68);
      iVar3 = FUN_03fb0d40(*(undefined8 *)(this + 0x10));
      if (1 < iVar3) {
        pZVar17._0_4_ = (Zombie *)0x3e4ccccd;
        if (iVar3 == 2) {
          pZVar17._0_4_ = (Zombie *)0x3dcccccd;
        }
        this_01 = Sexy::RtObject::Cast<Zombie>(pRVar9);
        if ((((((this_01 != (Zombie *)0x0) &&
               (bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_01), !bVar1)) &&
              (bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_01), !bVar1)) &&
             ((cVar2 = (**(code **)(*(long *)this_01 + 0x4d8))(this_01), cVar2 == '\0' &&
              (cVar2 = (**(code **)(*(long *)this_01 + 0x508))(this_01), cVar2 == '\0')))) &&
            ((cVar2 = Zombie::HasFogImmune(this_01), cVar2 == '\0' &&
             ((cVar2 = Zombie::IsBerserk(this_01), cVar2 == '\0' &&
              (cVar2 = (**(code **)(*(long *)this_01 + 0x328))(this_01), cVar2 == '\0')))))) &&
           ((cVar2 = (**(code **)(*(long *)this_01 + 0x330))(this_01), cVar2 == '\0' &&
            (cVar2 = Zombie::CanBeLaunchedByPlantsExtra(this_01), cVar2 != '\0')))) {
          Zombie::ApplyCondition(pZVar17._0_4_,0,this_01,2,1);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeavenDatura::SetSyllableType(int) */

void __thiscall PlantHeavenDatura::SetSyllableType(PlantHeavenDatura *this,int param_1)

{
  char cVar1;
  GameObjectDictionary *this_00;
  AttachedEffect *this_01;
  RtObject *this_02;
  PlantAnimRig_HeavenDatura *pPVar2;
  RtMixedPtr aRStack_88 [8];
  string asStack_80 [8];
  RtId aRStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsCondition(this);
  if (cVar1 == '\0') {
    *(int *)(this + 0x28) = param_1 % 7;
    this_00 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
    std::string::string(asStack_68,"syllable");
    this_01 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_00,asStack_68);
    std::string::~string(asStack_68);
    nop();
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)asStack_68);
    Sexy::StrFormat("syllable_switch_%d",asStack_70,(ulong)(*(int *)(this + 0x28) + 1));
    AnimationSequence::AddSingleAnimation(asStack_68,asStack_70,0);
    std::string::~string(asStack_70);
    Sexy::StrFormat("syllable_idle_%d",asStack_70,(ulong)(*(int *)(this + 0x28) + 1));
    PVZ_EOT();
    AnimationSequence::AddLoopingAnimation(asStack_68,asStack_70,0);
    std::string::~string(asStack_70);
    AttachedEffect::PlayAnimSequence(this_01,(AnimationSequence *)asStack_68);
    this_02 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar2 = Sexy::RtObject::Cast<PlantAnimRig_HeavenDatura>(this_02);
    std::string::string(asStack_80,"switch");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_88);
    std::string::string(asStack_70,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_78,
               asStack_70);
    PlantAnimRig_WizardThorns::PlayTapAnimation
              ((PlantAnimRig_WizardThorns *)pPVar2,asStack_80,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_70);
    nop();
    Sexy::RtId::~RtId(aRStack_78);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
    std::string::~string(asStack_80);
    nop();
    AnimationSequence::~AnimationSequence((AnimationSequence *)asStack_68);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeavenDatura::SetSpecialStatus(int) */

void __thiscall PlantHeavenDatura::SetSpecialStatus(PlantHeavenDatura *this,int param_1)

{
  char cVar1;
  GameObjectDictionary *this_00;
  AttachedEffect *this_01;
  RtObject *this_02;
  PlantAnimRig_HeavenDatura *pPVar2;
  RtMixedPtr aRStack_88 [8];
  string asStack_80 [8];
  RtId aRStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar1 = IsCondition(this);
  if (cVar1 == '\0') {
    *(int *)(this + 0x28) = param_1 % 7;
    this_00 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
    std::string::string(asStack_68,"syllable");
    this_01 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_00,asStack_68);
    std::string::~string(asStack_68);
    nop();
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)asStack_68);
    Sexy::StrFormat("syllable_switch_%d",asStack_70,(ulong)(*(int *)(this + 0x28) + 1));
    AnimationSequence::AddSingleAnimation(asStack_68,asStack_70,0);
    std::string::~string(asStack_70);
    Sexy::StrFormat("syllable_idle_%d",asStack_70,(ulong)(*(int *)(this + 0x28) + 1));
    PVZ_EOT();
    AnimationSequence::AddLoopingAnimation(asStack_68,asStack_70,0);
    std::string::~string(asStack_70);
    AttachedEffect::PlayAnimSequence(this_01,(AnimationSequence *)asStack_68);
    this_02 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar2 = Sexy::RtObject::Cast<PlantAnimRig_HeavenDatura>(this_02);
    std::string::string(asStack_80,"switch");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_88);
    std::string::string(asStack_70,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_78,
               asStack_70);
    PlantAnimRig_WizardThorns::PlayTapAnimation
              ((PlantAnimRig_WizardThorns *)pPVar2,asStack_80,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_70);
    nop();
    Sexy::RtId::~RtId(aRStack_78);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
    std::string::~string(asStack_80);
    nop();
    AnimationSequence::~AnimationSequence((AnimationSequence *)asStack_68);
  }
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeavenDatura::onTouchEvent(Sexy::Touch const&) */

void __thiscall PlantHeavenDatura::onTouchEvent(PlantHeavenDatura *this,Touch *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  TRect<int> *this_00;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar4;
  SexyVector3 *pSVar5;
  code *pcVar6;
  Plant *this_02;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  string asStack_48 [8];
  RtWeakPtr aRStack_40 [8];
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    this_02 = *(Plant **)(this + 0x10);
    cVar1 = FUN_03fb0d18(this_02[0x278]);
    if ((((cVar1 == '\0') && (cVar1 = Plant::IsWatering(this_02), cVar1 == '\0')) &&
        (cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),0x11), cVar1 == '\0')) &&
       (cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),0x17), cVar1 == '\0')) {
      pcVar6 = *(code **)(*(long *)*(Plant **)(this + 0x10) + 0x1f8);
      if (pcVar6 == Plant::IsInPlantFoodState) {
        cVar1 = Plant::IsInPlantFoodState(*(Plant **)(this + 0x10));
      }
      else {
        cVar1 = (*pcVar6)();
      }
      if ((cVar1 == '\0') &&
         (cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0)), cVar1 != '\0')) {
        if ((*(long *)(this + 0x38) == 0) && (*(int *)(param_1 + 0x30) == 0)) {
          fVar7 = (float)FUN_03fb0ffc((float)*(int *)(param_1 + 0x10));
          fVar8 = (float)FUN_03fb0ffc((float)*(int *)(param_1 + 0x14));
          this_00 = (TRect<int> *)
                    (**(code **)(**(long **)(this + 0x10) + 0x178))(*(long **)(this + 0x10));
          cVar1 = Sexy::TRect<int>::Contains(this_00,(int)fVar7,(int)fVar8);
          if (cVar1 != '\0') {
            fVar8 = *(float *)(this + 0x4c);
            fVar7 = (float)PVZ_T();
            if (fVar8 < fVar7) {
              fVar7 = (float)PVZ_T();
              *(float *)(this + 0x4c) = fVar7 + 0.5;
              Sexy::StrFormat("Play_HeavenDatura_Bgm%d",asStack_48,
                              (ulong)(*(int *)(this + 0x28) + 1));
              RealObject::PlayPositionalSound(*(RealObject **)(this + 0x10),asStack_48,0.0);
              std::string::string((string *)&local_18,"POPANIM_EFFECTS_HEAVENDATURA_EFFECT");
              GetPAMByName((string *)&local_18);
              std::string::~string((string *)&local_18);
              nop();
              this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
              pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_40);
              Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar4,(RtClass *)0x0);
              Effect_PopAnim::SetCentered(this_01,true);
              pSVar5 = (SexyVector3 *)
                       std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       **)(this + 0x10));
              fVar7 = -42.0;
              uVar9 = 0;
              EATextSquish::Vec3::Vec3((Vec3 *)&local_18,-2.0,-42.0,0.0);
              local_38 = Sexy::SexyVector3::operator+(pSVar5,(SexyVector3 *)&local_18);
              local_34 = fVar7;
              local_30 = uVar9;
              pSVar5 = (SexyVector3 *)
                       std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       **)(this + 0x10));
              uVar9 = 0;
              fVar7 = gCheat_X - 30.0;
              EATextSquish::Vec3::Vec3(aVStack_28,-2.0,fVar7,0.0);
              local_18 = Sexy::SexyVector3::operator+(pSVar5,(SexyVector3 *)aVStack_28);
              fStack_14 = fVar7;
              local_10 = uVar9;
              uVar9 = BoardTransforms::BoardSpaceToGridYUnbounded(local_34);
              iVar2 = Board::MakeRenderOrder(0x64960,uVar9,0);
              StandaloneEffect::SetBoardSpaceOrigin
                        ((StandaloneEffect *)this_01,(SexyVector3 *)&local_18,iVar2);
              std::string::string((string *)&local_18,"animation_3");
              Effect_PopAnim::PlaySingleAnimation(this_01,(string *)&local_18,0);
              std::string::~string((string *)&local_18);
              nop();
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
              std::string::~string(asStack_48);
            }
            uVar9 = *(undefined4 *)(param_1 + 0x10);
            *(undefined8 *)(this + 0x38) = *(undefined8 *)param_1;
            iVar2 = FUN_03fb0fe8(uVar9);
            iVar3 = FUN_03fb0fe8(*(undefined4 *)(param_1 + 0x14));
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)iVar2,(float)iVar3);
            *(ulong *)(this + 0x44) = CONCAT44(fStack_14,local_18);
          }
        }
        else if (*(long *)(this + 0x38) == *(long *)param_1) {
          iVar2 = *(int *)(param_1 + 0x30);
          if (iVar2 != 3) {
            if (iVar2 == 1) {
              iVar2 = FUN_03fb0fe8(*(undefined4 *)(param_1 + 0x10));
              iVar3 = FUN_03fb0fe8(*(undefined4 *)(param_1 + 0x14));
              fVar8 = (float)iVar3;
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)iVar2,fVar8);
              fVar7 = (float)Sexy::SexyVector2::operator-
                                       ((SexyVector2 *)&local_18,(SexyVector2 *)(this + 0x44));
              iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
              if ((ABS(fVar7) <= (float)iVar2 * 0.5) &&
                 (iVar2 = BoardConstants::GRIDSQUARE_WIDTH(), ABS(fVar8) <= (float)iVar2 * 0.5))
              goto LAB_03fb42b4;
              iVar2 = *(int *)(this + 0x28);
              *(int *)(this + 0x28) = iVar2 + 1;
              SetSyllableType(this,iVar2 + 1);
            }
            else if (iVar2 != 4) goto LAB_03fb42b4;
          }
          onCancelEvent(this);
        }
      }
    }
  }
LAB_03fb42b4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeavenDatura::getValidProjectiles(Sexy::TRect<int>) */

void __thiscall PlantHeavenDatura::getValidProjectiles(PlantHeavenDatura *this,Insets *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ResourceInfo *this_01;
  RtObject *this_02;
  PlantHeavenDaturaProps *pPVar7;
  undefined8 uVar8;
  int iVar9;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  undefined8 local_58;
  undefined8 local_50;
  Insets aIStack_48 [16];
  undefined8 local_38 [2];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_48,param_2);
  uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar6,0x2b);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), cVar2 = '\0', bVar1)
  {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_38,(RtWeakPtrBase *)&local_50);
    this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
    Sexy::RtId::~RtId((RtId *)&local_50);
    FUN_03fb0d1c((RtWeakPtr<Sexy::SoundResource> *)local_38,*(undefined8 *)(this + 0x10));
    this_02 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
    pPVar7 = Sexy::RtObject::Cast<PlantHeavenDaturaProps>(this_02);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
    iVar4 = FUN_03fb0d10(*(undefined4 *)(this_01 + 0xa8));
    iVar9 = extraout_w1;
    if (iVar4 == *(int *)(*(long *)(this + 0x10) + 0x110)) {
      Projectile::CalcCollisionRectBoardSpace();
      cVar2 = Sexy::TRect<int>::Intersects((TRect<int> *)local_38,(TRect *)aIStack_48);
      iVar9 = extraout_w1_00;
      if (cVar2 != '\0') {
        uVar5 = FUN_03fb0c94(*(undefined4 *)(*(long *)(this + 0x10) + 0x24));
        cVar3 = RealObject::IsOnOpposingTeam(this_01,uVar5);
        iVar9 = extraout_w1_01;
        if (cVar3 == '\0') {
          this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(pPVar7 + 0x2f0);
          local_58 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end(this_00);
          uVar6 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(this_00);
          uVar8 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
          local_50 = Projectile::GetProps((Projectile *)this_01);
          local_38[0] = std::
                        find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<ProjectilePropertySheet>*,std::vector<Sexy::RtWeakPtr<ProjectilePropertySheet>,std::allocator<Sexy::RtWeakPtr<ProjectilePropertySheet>>>>,ProjectilePropertySheet_const*>
                                  (uVar6,uVar8,(RtId *)&local_50);
          bVar1 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_58,(__normal_iterator *)local_38);
          iVar9 = extraout_w1_02;
          if (!bVar1) break;
        }
      }
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar9);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeavenDatura::setSoundWaveEffectValues(SoundWaveCircle*) */

void __thiscall
PlantHeavenDatura::setSoundWaveEffectValues(PlantHeavenDatura *this,SoundWaveCircle *param_1)

{
  char cVar1;
  int iVar2;
  RtObject *this_00;
  PlantHeavenDaturaProps *pPVar3;
  SexyVector3 *this_01;
  ulong __n;
  Plant *this_02;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  string asStack_1b0 [8];
  Point aPStack_1a8 [16];
  DamageInfo aDStack_198 [96];
  SoundWaveCircleDescription aSStack_138 [8];
  float local_130;
  undefined4 local_12c;
  DamageInfo aDStack_128 [8];
  float local_120;
  string asStack_c8 [8];
  string asStack_c0 [8];
  SexyVector3 aSStack_b8 [12];
  uint local_ac;
  undefined1 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (SoundWaveCircle *)0x0) goto LAB_03fb5760;
  Plant::GetProps();
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
  pPVar3 = Sexy::RtObject::Cast<PlantHeavenDaturaProps>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
  SoundWaveCircleDescription::SoundWaveCircleDescription(aSStack_138);
  this_02 = *(Plant **)(this + 0x10);
  iVar2 = FUN_03fb0d40(this_02);
  fVar6 = 0.0;
  if ((4 < iVar2) && (1 < *(int *)(this + 0x2c))) {
    fVar6 = (float)(*(int *)(this + 0x2c) + -1);
  }
  fVar9 = *(float *)(pPVar3 + 0x2c0);
  fVar11 = *(float *)(pPVar3 + 700);
  fVar5 = (float)Plant::GetTotalDamageRate(this_02);
  fVar9 = (float)NEON_fminnm(fVar9 * fVar6 + 1.0,*(undefined4 *)(pPVar3 + 0x2c4));
  fVar6 = (float)Plant::GetDamageConstValue(*(Plant **)(this + 0x10));
  uVar4 = *(undefined8 *)(this + 0x10);
  Sexy::Point::Point(aPStack_1a8,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_a0,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)(fVar6 + fVar9 * fVar5 * fVar11),local_a0,local_9c,aDStack_198,uVar4,
             aPStack_1a8,0);
  DamageInfo::operator=(aDStack_128,aDStack_198);
  iVar2 = FUN_03fb0d40(*(undefined8 *)(this + 0x10));
  uVar10 = *(uint *)(this + 0x2c);
  __n = (ulong)uVar10;
  if (iVar2 < 2) {
    if ((int)uVar10 < 3) goto LAB_03fb5864;
LAB_03fb5624:
    fVar6 = *(float *)(pPVar3 + 0x2d4);
    if (iVar2 < 3) {
LAB_03fb5630:
      if (4 < (int)uVar10) goto LAB_03fb5638;
    }
    else if (3 < (int)uVar10) {
LAB_03fb5638:
      fVar6 = *(float *)(pPVar3 + 0x2d8);
      uVar4 = 2;
      goto LAB_03fb5640;
    }
    uVar4 = 1;
    if (iVar2 < 2) goto LAB_03fb57b0;
LAB_03fb5648:
    if (iVar2 == 2) {
      uVar10 = 0x3dcccccd;
    }
    else {
      uVar10 = 0x3e4ccccd;
    }
    cVar1 = NewPVPUtils::IsPlayingNewPVP();
    local_130 = DAT_06ae6138;
  }
  else {
    if (1 < (int)uVar10) goto LAB_03fb5624;
LAB_03fb5864:
    uVar4 = 1;
    fVar6 = 0.0;
    if (iVar2 < 3) goto LAB_03fb5630;
LAB_03fb5640:
    if (1 < iVar2) goto LAB_03fb5648;
LAB_03fb57b0:
    uVar10 = 0;
    cVar1 = NewPVPUtils::IsPlayingNewPVP();
    local_130 = DAT_06ae6138;
  }
  DAT_06ae6138 = local_130;
  if (cVar1 != '\0') {
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    local_130 = (float)iVar2;
  }
  local_130 = local_130 * fVar6;
  Sexy::StrFormat("animation_%d",asStack_1b0,uVar4);
  thunk_FUN_05475e00(asStack_c0,asStack_1b0);
  local_12c = 0x3f19999a;
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(this + 0x10));
  uVar7 = 0xc2280000;
  uVar8 = 0;
  EATextSquish::Vec3::Vec3((Vec3 *)aPStack_1a8,-2.0,-42.0,0.0);
  local_a0 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aPStack_1a8);
  local_9c = uVar7;
  local_98 = uVar8;
  Sexy::SexyVector3::operator=(aSStack_b8,(SexyVector3 *)&local_a0);
  std::string::append(asStack_c8,"POPANIM_EFFECTS_HEAVENDATURA_EFFECT",__n);
  fVar6 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
  local_120 = (fVar6 + 1.0) * local_120;
  local_ac = uVar10;
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar1 != '\0') {
    fVar5 = *(float *)(pPVar3 + 0x2d0);
    fVar6 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
    local_120 = (float)Plant::GetDamageConstValue(*(Plant **)(this + 0x10));
    local_120 = local_120 + fVar5 * fVar6;
    fVar5 = *(float *)(pPVar3 + 0x2dc);
    cVar1 = NewPVPUtils::IsPlayingNewPVP();
    fVar6 = DAT_06ae6138;
    if (cVar1 != '\0') {
      iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
      fVar6 = (float)iVar2;
    }
    local_130 = fVar6 * fVar5;
    local_ac = *(uint *)(pPVar3 + 0x2cc);
    std::string::append(asStack_c0,"animation_plantfood",(ulong)local_ac);
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar1 != '\0') {
      local_a8 = 1;
      std::string::append(asStack_c0,"animation_plantfood_avatar",1);
    }
  }
  SoundWaveCircleDescription::SoundWaveCircleDescription
            ((SoundWaveCircleDescription *)&local_a0,aSStack_138);
  SoundWaveCircle::setValues(param_1,(RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
  SoundWaveCircleDescription::~SoundWaveCircleDescription((SoundWaveCircleDescription *)&local_a0);
  std::string::~string(asStack_1b0);
  DamageInfo::~DamageInfo(aDStack_198);
  SoundWaveCircleDescription::~SoundWaveCircleDescription(aSStack_138);
LAB_03fb5760:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeavenDatura::SpawnSoundWave() */

void __thiscall PlantHeavenDatura::SpawnSoundWave(PlantHeavenDatura *this)

{
  SoundWaveCircle *pSVar1;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar1 = Board::AddEffect<SoundWaveCircle>(*(Board **)(gLawnApp + 0x9f0));
  pSVar1 = Sexy::RtObject::Cast<SoundWaveCircle>((RtObject *)pSVar1);
  setSoundWaveEffectValues(this,pSVar1);
  BoardEntity::CalcGridPosition();
  SoundWaveCircle::SetSpawnPoint(pSVar1,aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeavenDatura::PlaySyllable() */

void __thiscall PlantHeavenDatura::PlaySyllable(PlantHeavenDatura *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  RtObject *this_00;
  PlantHeavenDaturaProps *pPVar4;
  float fVar5;
  float fVar6;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  fVar6 = *(float *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  fVar5 = (float)PVZ_T();
  if (fVar5 < fVar6) goto LAB_03fb5a00;
  iVar3 = FUN_03fb0d40(*(undefined8 *)(this + 0x10));
  iVar1 = *(int *)(this + 0x2c);
  if (iVar3 < 2) {
    if (iVar1 < 3) goto LAB_03fb5a40;
LAB_03fb5978:
    bVar2 = true;
    if (iVar3 < 3) goto LAB_03fb5984;
    bVar2 = true;
    if (iVar1 < 4) goto LAB_03fb5a4c;
LAB_03fb598c:
    Sexy::StrFormat("Play_HeavenDatura_Bgm%d",asStack_18,(ulong)(*(int *)(this + 0x28) + 1));
    RealObject::PlayPositionalSound(*(RealObject **)(this + 0x10),asStack_18,0.0);
LAB_03fb59b8:
    SpawnSoundWave(this);
  }
  else {
    if (1 < iVar1) goto LAB_03fb5978;
LAB_03fb5a40:
    bVar2 = false;
    if (2 < iVar3) goto LAB_03fb5a4c;
LAB_03fb5984:
    if (4 < iVar1) goto LAB_03fb598c;
LAB_03fb5a4c:
    Sexy::StrFormat("Play_HeavenDatura_Bgm%d",asStack_18,(ulong)(*(int *)(this + 0x28) + 1));
    RealObject::PlayPositionalSound(*(RealObject **)(this + 0x10),asStack_18,0.0);
    if (bVar2) goto LAB_03fb59b8;
    SoundWave(this);
  }
  fVar5 = (float)PVZ_T();
  FUN_03fb0d1c(aRStack_10,*(undefined8 *)(this + 0x10));
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pPVar4 = Sexy::RtObject::Cast<PlantHeavenDaturaProps>(this_00);
  *(float *)(this + 0x30) = fVar5 + *(float *)(pPVar4 + 0x2b8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
LAB_03fb5a00:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeavenDatura::UpdateActions() */

void __thiscall PlantHeavenDatura::UpdateActions(PlantHeavenDatura *this)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  RtObject *this_00;
  PlantHeavenDaturaProps *pPVar5;
  float fVar6;
  float fVar7;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(*(long *)(this + 0x10) + 200) != 4) ||
     (fVar7 = *(float *)(this + 0x30), fVar6 = (float)PVZ_T(), fVar6 < fVar7)) goto LAB_03fb5cd0;
  getSearchRect(this);
  cVar3 = getValidProjectiles(this,aRStack_18);
  if (cVar3 == '\0') goto LAB_03fb5cd0;
  iVar4 = FUN_03fb0d40(*(undefined8 *)(this + 0x10));
  iVar2 = *(int *)(this + 0x2c);
  if ((iVar4 < 2) || (bVar1 = true, iVar2 < 2)) {
    bVar1 = 2 < iVar2;
  }
  if (iVar4 < 3) {
    if (4 < iVar2) goto LAB_03fb5d60;
LAB_03fb5ddc:
    Sexy::StrFormat("Play_HeavenDatura_Bgm%d",asStack_20,(ulong)(*(int *)(this + 0x28) + 1));
    RealObject::PlayPositionalSound(*(RealObject **)(this + 0x10),asStack_20,0.0);
    if (bVar1) goto LAB_03fb5d8c;
    SoundWave(this);
  }
  else {
    if (iVar2 < 4) goto LAB_03fb5ddc;
LAB_03fb5d60:
    Sexy::StrFormat("Play_HeavenDatura_Bgm%d",asStack_20,(ulong)(*(int *)(this + 0x28) + 1));
    RealObject::PlayPositionalSound(*(RealObject **)(this + 0x10),asStack_20,0.0);
LAB_03fb5d8c:
    SpawnSoundWave(this);
  }
  fVar6 = (float)PVZ_T();
  FUN_03fb0d1c(aRStack_18,*(undefined8 *)(this + 0x10));
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  pPVar5 = Sexy::RtObject::Cast<PlantHeavenDaturaProps>(this_00);
  *(float *)(this + 0x30) = fVar6 + *(float *)(pPVar5 + 0x2b8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_20);
LAB_03fb5cd0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHeavenDatura::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantHeavenDatura::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"use_action");
  if (bVar1) {
    SpawnSoundWave((PlantHeavenDatura *)param_1);
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeavenDatura::canTarget(BoardEntity*) */

void PlantHeavenDatura::canTarget(BoardEntity *param_1)

{
  char cVar1;
  Zombie *this;
  GridItem *pGVar2;
  undefined8 uVar3;
  string *psVar4;
  code *pcVar5;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
  if ((((this == (Zombie *)0x0) || (cVar1 = (**(code **)(*(long *)this + 0x330))(), cVar1 != '\0'))
      || (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 != '\0')) ||
     (cVar1 = Zombie::IsIgnoringAllDamage(this), cVar1 != '\0')) {
LAB_03fb5eb8:
    pGVar2 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1);
    if ((pGVar2 == (GridItem *)0x0) ||
       (cVar1 = (**(code **)(*(long *)pGVar2 + 0x200))(), cVar1 == '\0')) {
      uVar3 = 0;
      goto LAB_03fb5edc;
    }
  }
  else {
    pcVar5 = *(code **)(*(long *)this + 0x3d0);
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_20,"heavendatura");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    cVar1 = (*pcVar5)(this,aRStack_10,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    std::string::~string(asStack_20);
    nop();
    if (cVar1 == '\0') goto LAB_03fb5eb8;
  }
  uVar3 = 1;
LAB_03fb5edc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

