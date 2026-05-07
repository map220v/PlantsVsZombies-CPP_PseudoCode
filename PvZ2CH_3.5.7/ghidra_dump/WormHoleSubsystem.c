// Class: WormHoleSubsystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WormHoleSubsystem::StaticClassInit() */

void WormHoleSubsystem::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WormRecord");
    (*pcVar3)(plVar2,asStack_10,FUN_03d2174c,0x1c,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"EntityWormData");
    (*pcVar3)(plVar2,asStack_10,FUN_03d222e0,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WormHoleSubsystem");
    (*pcVar3)(plVar2,asStack_10,FUN_03d2262c,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WormHoleSubsystem::StaticGetClass() */

long * WormHoleSubsystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"WormHoleSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WormHoleSubsystem::GetClass() const */

long * WormHoleSubsystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"WormHoleSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WormHoleSubsystem::onDestroy() */

void __thiscall WormHoleSubsystem::onDestroy(WormHoleSubsystem *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x50);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WormHoleSubsystem::PlayWormEffect(bool) */

void __thiscall WormHoleSubsystem::PlayWormEffect(WormHoleSubsystem *this,bool param_1)

{
  Effect_PopAnim *pEVar1;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  if (param_1) {
    __s = "idle_in";
  }
  else {
    __s = "idle_out";
  }
  std::string::string(asStack_10,__s);
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar1,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WormHoleSubsystem::IsWarpDone() */

void __thiscall WormHoleSubsystem::IsWarpDone(WormHoleSubsystem *this)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x10));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      uVar3 = 1;
LAB_03d21a9c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*(char *)(lVar2 + 8) != '\0') {
      uVar3 = 0;
      goto LAB_03d21a9c;
    }
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WormHoleSubsystem::CreateTutorialWormEffect(Sexy::Point const&) */

void __thiscall WormHoleSubsystem::CreateTutorialWormEffect(WormHoleSubsystem *this,Point *param_1)

{
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  PopAnimRig *pPVar2;
  Point aPStack_60 [8];
  Point aPStack_58 [8];
  int local_50;
  int local_4c;
  RtWeakPtr aRStack_48 [16];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)&local_50,"POPANIM_EFFECTS_WORMHOLE");
  GetPAMByName((string *)&local_50);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_48);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  std::string::~string((string *)&local_50);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  FUN_03d210fc(this_00 + 0x1c);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this_00,true);
  Sexy::Point::Point(aPStack_60,(TPoint *)param_1);
  Sexy::Point::Point(aPStack_58,-10,-0xf);
  BoardTransforms::GridToBoardSpace(aPStack_60);
  Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_50,(TPoint *)aPStack_58);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_48,(float)local_50,(float)local_4c,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_48,-1);
  pPVar2 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_00);
  std::string::string((string *)aRStack_48,"idle_in");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,aRStack_48,0,aDStack_38);
  std::string::~string((string *)aRStack_48);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WormHoleSubsystem::CreateWormEffect() */

void __thiscall WormHoleSubsystem::CreateWormEffect(WormHoleSubsystem *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  Effect_PopAnim *pEVar1;
  ResourceInfo *pRVar2;
  StandaloneEffect *pSVar3;
  long lVar4;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x50);
  local_8 = ___stack_chk_guard;
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string(asStack_18,"POPANIM_EFFECTS_WORMHOLE");
  GetPAMByName(asStack_18);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_PopAnim::SetCentered(pEVar1,true);
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetKeepAlive(pSVar3,true);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  FUN_03d210fc(lVar4 + 0x1c);
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetVisibility(pSVar3,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WormHoleSubsystem::onInitialized() */

void __thiscall WormHoleSubsystem::onInitialized(WormHoleSubsystem *this)

{
  Board *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"WormHole");
  Board::LoadResourceGroupForGameplay(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined4 *)(this + 0x28) = 5;
  *(undefined4 *)(this + 0x2c) = 0;
  CreateWormEffect(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WormHoleSubsystem::PlayWormEffectStart(Sexy::Point const&) */

void __thiscall WormHoleSubsystem::PlayWormEffectStart(WormHoleSubsystem *this,Point *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  StandaloneEffect *pSVar1;
  UIWidget *this_01;
  PopAnimRig *pPVar2;
  float fVar3;
  Point aPStack_70 [8];
  Point aPStack_68 [8];
  int local_60;
  int local_5c;
  string asStack_58 [8];
  Vec3 aVStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  fVar3 = 0.0;
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_70,(TPoint *)param_1);
  Sexy::Point::Point(aPStack_68,-10,-0xf);
  BoardTransforms::GridToBoardSpace(aPStack_70);
  Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_60,(TPoint *)aPStack_68);
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    fVar3 = (float)Board::calculateRoofOffsetZ((float)local_60);
  }
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50);
  pSVar1 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  EATextSquish::Vec3::Vec3(aVStack_50,(float)local_60,(float)local_5c,fVar3);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar1,(SexyVector3 *)aVStack_50,-1);
  pSVar1 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  StandaloneEffect::SetVisibility(pSVar1,true);
  this_01 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  pPVar2 = (PopAnimRig *)UIWidget::GetAtlasImage(this_01);
  std::string::string(asStack_58,"idle1");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWormEffectDone);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<WormHoleSubsystem,void(WormHoleSubsystem::*)(std::string_const&)>(aDStack_38,aVStack_50)
  ;
  PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WormHoleSubsystem::Generate(WormRecord) */

void __thiscall WormHoleSubsystem::Generate(WormHoleSubsystem *this,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(this + 0x30) = *param_2;
  *(undefined8 *)(this + 0x38) = uVar1;
  *(undefined8 *)(this + 0x40) = param_2[2];
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_2 + 3);
  PlayWormEffectStart(this,(Point *)(this + 0x30));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WormHoleSubsystem::PlayWormEffectEnd() */

void __thiscall WormHoleSubsystem::PlayWormEffectEnd(WormHoleSubsystem *this)

{
  UIWidget *this_00;
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIWidget *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50))
  ;
  pPVar1 = (PopAnimRig *)UIWidget::GetAtlasImage(this_00);
  std::string::string(asStack_58,"idle2");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWormEffectDone);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<WormHoleSubsystem,void(WormHoleSubsystem::*)(std::string_const&)>(aDStack_38,aCStack_50)
  ;
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WormHoleSubsystem::WormHoleSubsystem() */

void __thiscall WormHoleSubsystem::WormHoleSubsystem(WormHoleSubsystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_06765ba0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  WormRecord::WormRecord((WormRecord *)(this + 0x30));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  return;
}


/* WormHoleSubsystem::StaticNew() */

WormHoleSubsystem * WormHoleSubsystem::StaticNew(void)

{
  WormHoleSubsystem *this;
  
  this = ::operator_new(0x88);
  WormHoleSubsystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WormHoleSubsystem::IsValidWrapOutGrid(Sexy::Point const&) */

void __thiscall WormHoleSubsystem::IsValidWrapOutGrid(WormHoleSubsystem *this,Point *param_1)

{
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *pRVar3;
  RtObject *this_00;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  Board::GetGridItemsAt
            (*(Board **)(gLawnApp + 0x9f0),*(int *)param_1,*(int *)(param_1 + 4),
             (vector *)avStack_20);
  cVar1 = std::vector<GridItem*,std::allocator<GridItem*>>::empty
                    ((vector<GridItem*,std::allocator<GridItem*>> *)avStack_20);
  if (cVar1 == '\0') {
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x10));
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar2)
    {
      pRVar3 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,pRVar3);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_28);
      if (bVar2) {
        this_00 = (RtObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
        bVar2 = Sexy::RtObject::IsA<Plant>(this_00);
        if (bVar2) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
          goto LAB_03d22a40;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_38);
    }
    cVar1 = '\x01';
  }
LAB_03d22a40:
  std::vector<GridItem*,std::allocator<GridItem*>>::~vector
            ((vector<GridItem*,std::allocator<GridItem*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WormHoleSubsystem::CheckValidWrapOutGrid() */

void __thiscall WormHoleSubsystem::CheckValidWrapOutGrid(WormHoleSubsystem *this)

{
  char cVar1;
  Point *pPVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  cVar1 = IsValidWrapOutGrid(this,(Point *)(this + 0x38));
  uVar3 = 1;
  if (cVar1 == '\0') {
    while( true ) {
      uVar5 = uVar3;
      uVar6 = *(undefined8 *)(this + 0x70);
      uVar3 = FUN_03d21028(uVar6,*(undefined8 *)(this + 0x78));
      if (uVar3 <= uVar5) break;
      pPVar2 = (Point *)FUN_03d21034(uVar6,uVar5);
      cVar1 = IsValidWrapOutGrid(this,pPVar2);
      uVar3 = uVar5 + 1;
      if (cVar1 != '\0') {
        puVar4 = (undefined8 *)FUN_03d21034(*(undefined8 *)(this + 0x70),uVar5);
        *(undefined8 *)(this + 0x38) = *puVar4;
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WormHoleSubsystem::UpdateInitEndHeight(Sexy::RtWeakPtr<BoardEntity>, float, float) */

void __thiscall
WormHoleSubsystem::UpdateInitEndHeight
          (undefined4 param_1,undefined4 param_2,WormHoleSubsystem *this,RtWeakPtrBase *param_4)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_10,param_4);
  local_18 = FUN_03d230d4(uVar2,uVar3,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_10);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    *(undefined4 *)(lVar4 + 0x14) = param_1;
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    *(undefined4 *)(lVar4 + 0xc) = param_2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WormHoleSubsystem::Transfer() */

void __thiscall WormHoleSubsystem::Transfer(WormHoleSubsystem *this)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  RtWeakPtrBase *pRVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  long lVar7;
  long *plVar8;
  Plant *this_01;
  RtObject *pRVar9;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  float *pfVar10;
  code *pcVar11;
  WormHoleSubsystem *pWVar12;
  float fVar13;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  Point aPStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CheckValidWrapOutGrid(this);
  cVar1 = *(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x10));
  do {
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    if (!bVar3) {
      PlayWormEffectStart(this,(Point *)(this + 0x38));
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar6 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,pRVar6);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_28);
    if (!bVar3) goto LAB_03d232e0;
    iVar4 = BoardTransforms::GridToBoardSpaceX(*(int *)(this + 0x38));
    iVar5 = BoardTransforms::GridToBoardSpaceY(*(int *)(this + 0x3c));
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    lVar7 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(this_00);
    EATextSquish::Vec3::Vec3(aVStack_18,(float)iVar4,(float)iVar5,*(float *)(lVar7 + 8));
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_28);
    if (bVar3) {
      pRVar9 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      bVar3 = Sexy::RtObject::IsA<Plant>(pRVar9);
      if (!bVar3) goto LAB_03d23370;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      nop();
      puVar2 = gMessageRouter;
      if (this_01 != (Plant *)0x0) {
        Sexy::Point::Point(aPStack_20,(TPoint *)(this + 0x38));
        MessageRouter::Broadcast<Plant*,Sexy::Point&,Plant*,Sexy::Point>
                  ((MessageRouter *)puVar2,Message::PlantMoving,this_01,aPStack_20);
        Plant::SetGridLoc(this_01,*(int *)(this + 0x38),*(int *)(this + 0x3c));
        if (cVar1 == '\0') goto LAB_03d232e0;
        lVar7 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)this_01);
        pWVar12 = (WormHoleSubsystem *)(ulong)(uint)*(float *)(lVar7 + 8);
        fVar13 = *(float *)(lVar7 + 8) + *(float *)(this + 0x48);
LAB_03d23468:
        if ((SUB84(pWVar12,0) != 0.0) || (fVar13 != 0.0)) {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aPStack_20,(RtWeakPtrBase *)aRStack_28);
          UpdateInitEndHeight(pWVar12,fVar13,this,aPStack_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_20);
        }
      }
    }
    else {
LAB_03d23370:
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_28);
      if (bVar3) {
        pRVar9 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        bVar3 = Sexy::RtObject::IsA<GridItem>(pRVar9);
        if (bVar3) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          nop();
          if (this_02 !=
              (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)0x0) {
            pcVar11 = *(code **)(*(long *)this_02 + 0x1f0);
            Sexy::Point::Point(aPStack_20,*(int *)(this + 0x38),*(int *)(this + 0x3c));
            (*pcVar11)(this_02,aPStack_20,1);
            if (cVar1 != '\0') {
              pfVar10 = (float *)std::
                                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 ::_M_leftmost(this_02);
              pWVar12 = (WormHoleSubsystem *)Board::calculateRoofOffsetZ(*pfVar10);
              fVar13 = SUB84(pWVar12,0) + *(float *)(this + 0x48);
              goto LAB_03d23468;
            }
          }
          goto LAB_03d232e0;
        }
      }
      plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      (**(code **)(*plVar8 + 0x78))(plVar8,aVStack_18);
    }
LAB_03d232e0:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_38);
  } while( true );
}


/* WormHoleSubsystem::~WormHoleSubsystem() */

void __thiscall WormHoleSubsystem::~WormHoleSubsystem(WormHoleSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_06765ba0;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x70));
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  std::vector<EntityWormData,std::allocator<EntityWormData>>::~vector
            ((vector<EntityWormData,std::allocator<EntityWormData>> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* WormHoleSubsystem::~WormHoleSubsystem() */

void __thiscall WormHoleSubsystem::~WormHoleSubsystem(WormHoleSubsystem *this)

{
  ~WormHoleSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WormHoleSubsystem::FillGrids() */

void __thiscall WormHoleSubsystem::FillGrids(WormHoleSubsystem *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  Point aPStack_10 [8];
  long local_8;
  
  iVar4 = 0;
  local_8 = ___stack_chk_guard;
  do {
    iVar3 = 0;
    do {
      iVar1 = iVar3 + 1;
      Sexy::Point::Point(aPStack_10,iVar3,iVar4);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x58),aPStack_10);
      iVar3 = iVar1;
    } while (iVar1 != 4);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 5);
  iVar4 = 0;
  do {
    iVar3 = 6;
    do {
      Sexy::Point::Point(aPStack_10,iVar3,iVar4);
      cVar2 = IsValidWrapOutGrid(this,aPStack_10);
      if (cVar2 != '\0') {
        Sexy::Point::Point(aPStack_10,iVar3,iVar4);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x70),aPStack_10);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 9);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WormHoleSubsystem::GenerateRandom() */

void __thiscall WormHoleSubsystem::GenerateRandom(WormHoleSubsystem *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  WormHoleSubsystem *pWVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  WormRecord aWStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FillGrids(this);
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x58));
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x58));
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
            (uVar1,uVar2);
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x70));
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x70));
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
            (uVar1,uVar2);
  WormRecord::WormRecord((WormRecord *)&local_48);
  puVar3 = (undefined8 *)FUN_03d21034(*(undefined8 *)(this + 0x58),0);
  local_48 = *puVar3;
  puVar3 = (undefined8 *)FUN_03d21034(*(undefined8 *)(this + 0x70),0);
  local_40 = *puVar3;
  local_38 = 0x3fc00000;
  local_34 = 0x3fc00000;
  local_30 = 0xc2f00000;
  pWVar4 = Board::GetGameSubSystem<WormHoleSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  WormRecord::WormRecord(aWStack_28,(WormRecord *)&local_48);
  Generate(pWVar4,aWStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WormHoleSubsystem::GetTutorialEntities(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&)
    */

void __thiscall WormHoleSubsystem::GetTutorialEntities(WormHoleSubsystem *this,vector *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  Plant *pPVar3;
  BoardEntity **ppBVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1);
  uVar7 = local_20;
  lVar1 = FUN_03d2103c(local_20,local_18);
  if (lVar1 != 0) {
    do {
      puVar2 = (undefined8 *)FUN_03d21048(uVar7,uVar6);
      pPVar3 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar2);
      if (pPVar3 != (Plant *)0x0) {
        ppBVar4 = (BoardEntity **)FUN_03d21048(local_20,uVar6);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,ppBVar4);
      }
      uVar7 = local_20;
      uVar6 = uVar6 + 1;
      uVar5 = FUN_03d2103c(local_20,local_18);
    } while (uVar6 < uVar5);
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
/* WormHoleSubsystem::findTargets(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   Sexy::Point const&) */

void __thiscall
WormHoleSubsystem::findTargets(WormHoleSubsystem *this,vector *param_1,Point *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long extraout_x0;
  undefined8 *puVar5;
  RtObject *this_00;
  ZombieWaveAirbubble *this_01;
  RtObject *this_02;
  GridItem *this_03;
  float fVar6;
  undefined8 local_38;
  undefined8 local_30;
  BoardEntity *local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar4 = operator|(2,1);
  uVar3 = operator|(uVar4,4);
  EntityFinder::GetEntitiesAtGridSquare
            (avStack_20,uVar3,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    if (!bVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)*puVar5);
    if (bVar1) {
      nop();
      if ((extraout_x0 != 0) && (0.0 < *(float *)(extraout_x0 + 0xd8))) {
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,&local_28);
      }
    }
    else {
      bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar5);
      if (bVar1) {
        nop();
        if (this_00 != (RtObject *)0x0) {
          this_01 = Sexy::RtObject::Cast<ZombieWaveAirbubble>(this_00);
          if (this_01 == (ZombieWaveAirbubble *)0x0) {
            cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
            if ((cVar2 == '\0') &&
               (cVar2 = FUN_03d215e8(*(undefined4 *)(this_00 + 0x28)), cVar2 == '\0'))
            goto LAB_03d23cb8;
          }
          else {
            ZombiePumpkinScarecrowBird::flyAway((ZombiePumpkinScarecrowBird *)this_01);
          }
        }
      }
      else {
        bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)*puVar5);
        if ((((bVar1) && (nop(), this_02 != (RtObject *)0x0)) &&
            (bVar1 = Sexy::RtObject::IsA<GridItemFlowerPot>(this_02), bVar1)) &&
           (nop(), this_03 != (GridItem *)0x0)) {
          if (*(code **)(*(long *)this_03 + 0x1d8) == GridItem::GetHitpoints) {
            fVar6 = (float)GridItem::GetHitpoints(this_03);
          }
          else {
            fVar6 = (float)(**(code **)(*(long *)this_03 + 0x1d8))();
          }
          if (0.0 < fVar6) {
LAB_03d23cb8:
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,&local_28);
          }
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WormHoleSubsystem::WarpTarget(BoardEntity*, bool) */

void __thiscall
WormHoleSubsystem::WarpTarget(WormHoleSubsystem *this,BoardEntity *param_1,bool param_2)

{
  bool bVar1;
  bool bVar2;
  Zombie *extraout_x0;
  RtObject *this_00;
  RealObject *extraout_x0_00;
  Zombie *this_01;
  Zombie *pZVar3;
  undefined1 auVar4 [16];
  EntityComponent_GroundEffect aEStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) goto LAB_03d23dd8;
  bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)param_1);
  if (bVar1) {
    nop();
    if (extraout_x0 == (Zombie *)0x0) goto LAB_03d23dd8;
    auVar4 = PVZ_EOT();
    Plant::ApplyCondition(auVar4,0,extraout_x0,0x19);
    pZVar3 = extraout_x0;
    if (!param_2) {
LAB_03d23dfc:
      (**(code **)(*(long *)pZVar3 + 0x80))(pZVar3,param_2);
      goto LAB_03d23dd8;
    }
    Plant::GetGroundEffect();
  }
  else {
    bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if (bVar2) {
      nop();
      if (this_01 == (Zombie *)0x0) goto LAB_03d23dd8;
      (**(code **)(*(long *)this_01 + 600))();
      Zombie::SetIgnoresAllDamage(this_01,true);
      Zombie::SetIsTargetable(this_01,bVar1);
      Zombie::SetIgnoresCollisions(this_01,true);
      pZVar3 = this_01;
      if (!param_2) goto LAB_03d23dfc;
      Zombie::GetGroundEffect();
    }
    else {
      bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
      if (((!bVar1) || (nop(), this_00 == (RtObject *)0x0)) ||
         (bVar1 = Sexy::RtObject::IsA<GridItemFlowerPot>(this_00), !bVar1)) goto LAB_03d23dd8;
      nop();
      if (!param_2) {
        (**(code **)(*(long *)extraout_x0_00 + 0x80))();
        goto LAB_03d23dd8;
      }
      GridItemFlowerPot::GetGroundEffect();
      pZVar3 = (Zombie *)extraout_x0_00;
    }
  }
  EntityComponent_GroundEffect::SetGroundEffect(aEStack_28,pZVar3,4,1);
  EntityComponent_GroundEffect::~EntityComponent_GroundEffect(aEStack_28);
  RealObject::SetDisableSnapToGround((RealObject *)pZVar3,true);
LAB_03d23dd8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WormHoleSubsystem::WarpingOut() */

void __thiscall WormHoleSubsystem::WarpingOut(WormHoleSubsystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar2;
  RtObject *this_01;
  undefined8 *puVar3;
  Plant *this_02;
  undefined8 uVar4;
  undefined8 uVar5;
  BoardEntity *pBVar6;
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x38) == -1) {
LAB_03d240ec:
    if (local_8 == ___stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_20[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)local_20);
    if (!bVar1) goto LAB_03d2407c;
    pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    if ((this_01 != (RtObject *)0x0) && (bVar1 = Sexy::RtObject::IsA<Plant>(this_01), bVar1)) break;
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_28);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20,1,
             *(undefined4 *)(this + 0x38),*(undefined4 *)(this + 0x3c));
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)local_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)&local_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)*puVar3);
    if (((bVar1) && (nop(), this_02 != (Plant *)0x0)) && (0.0 < *(float *)(this_02 + 0xd8))) {
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)aRStack_38);
      local_30 = FUN_03d22e68(uVar4,uVar5,(move_iterator<Sexy::LeaderboardEntry*> *)&local_28);
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_28);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
      if (bVar1) {
        Plant::beThrown(this_02);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
LAB_03d2407c:
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_20[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)local_20)
        , bVar1) {
    pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    pBVar6 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    WarpTarget(this,pBVar6,*(float *)(pRVar2 + 0x14) < 0.0);
    pRVar2[8] = (RtWeakPtr<Sexy::ResourceInfo>)0x1;
    *(undefined4 *)(pRVar2 + 0x10) = *(undefined4 *)(this + 0x44);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_28);
  }
  goto LAB_03d240ec;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WormHoleSubsystem::Warping(BoardEntity*, float, float) */

void __thiscall
WormHoleSubsystem::Warping(WormHoleSubsystem *this,BoardEntity *param_1,float param_2,float param_3)

{
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  EntityWormData aEStack_20 [8];
  undefined1 local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WarpTarget(this,param_1,param_3 < 0.0);
  EntityWormData::EntityWormData(aEStack_20);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)aEStack_20,(RtWeakPtrBase *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  local_18 = 1;
  local_14 = param_3;
  local_10 = param_2;
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_1);
  local_c = *(undefined4 *)(lVar1 + 8);
  std::vector<EntityWormData,std::allocator<EntityWormData>>::push_back
            ((vector<EntityWormData,std::allocator<EntityWormData>> *)(this + 0x10),aEStack_20);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aEStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WormHoleSubsystem::generateTutorial() */

void __thiscall WormHoleSubsystem::generateTutorial(WormHoleSubsystem *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_40 [24];
  WormRecord aWStack_28 [8];
  undefined8 local_20;
  float local_18;
  undefined4 local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_40);
  GetTutorialEntities(this,(vector *)avStack_40);
  WormRecord::WormRecord(aWStack_28);
  Sexy::Point::Point((Point *)&local_48,0,0);
  local_20 = local_48;
  local_18 = 1.5;
  local_10 = -120.0;
  local_14 = 0x3fc00000;
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_40);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_40);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)*puVar4);
    iVar3 = SharkMinion::getRow((SharkMinion *)*puVar4);
    Sexy::Point::Point((Point *)&local_48,iVar2,iVar3);
    CreateTutorialWormEffect(this,(Point *)&local_48);
    Warping(this,(BoardEntity *)*puVar4,local_18,local_10);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WormHoleSubsystem::SetState(WormState) */

void __thiscall WormHoleSubsystem::SetState(WormHoleSubsystem *this,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Plant *this_00;
  BoardEntity *pBVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x28) != param_2) {
    *(int *)(this + 0x28) = param_2;
    switch(param_2) {
    case 1:
      std::vector<EntityWormData,std::allocator<EntityWormData>>::clear
                ((vector<EntityWormData,std::allocator<EntityWormData>> *)(this + 0x10));
      *(undefined4 *)(this + 0x2c) = 0;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      findTargets(this,(vector *)avStack_20,(Point *)(this + 0x30));
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
      if (bVar1) {
        do {
          puVar3 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
          pBVar4 = (BoardEntity *)0x0;
          if ((RtObject *)*puVar3 == (RtObject *)0x0) {
LAB_03d244b8:
            Warping(this,pBVar4,*(float *)(this + 0x40),*(float *)(this + 0x48));
          }
          else {
            bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)*puVar3);
            if (((!bVar1) ||
                (this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3), this_00 == (Plant *)0x0
                )) || (cVar2 = Plant::IsIgnoreControlAndDmg(this_00), cVar2 == '\0')) {
              pBVar4 = (BoardEntity *)*puVar3;
              goto LAB_03d244b8;
            }
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
          bVar1 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
        } while (bVar1);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      break;
    case 2:
    case 5:
      PlayWormEffectEnd(this);
      break;
    case 3:
      *(undefined4 *)(this + 0x2c) = 0;
      WarpingOut(this);
      break;
    case 4:
      std::vector<EntityWormData,std::allocator<EntityWormData>>::clear
                ((vector<EntityWormData,std::allocator<EntityWormData>> *)(this + 0x10));
      *(undefined4 *)(this + 0x2c) = 0;
      generateTutorial(this);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WormHoleSubsystem::GenerateTutorial() */

void __thiscall WormHoleSubsystem::GenerateTutorial(WormHoleSubsystem *this)

{
  SetState(this,4);
  return;
}


/* WormHoleSubsystem::onWormEffectDone(std::string const&) */

void __thiscall WormHoleSubsystem::onWormEffectDone(WormHoleSubsystem *this,string *param_1)

{
  bool bVar1;
  bool bVar2;
  StandaloneEffect *this_00;
  
  bVar1 = std::operator==(param_1,"idle1");
  if (bVar1) {
    PlayWormEffect(this,*(int *)(this + 0x28) == 5);
    if (*(int *)(this + 0x28) == 5) {
      SetState(this,1);
      return;
    }
    if (*(int *)(this + 0x28) == 2) {
      SetState(this,3);
      return;
    }
  }
  else {
    bVar2 = std::operator==(param_1,"idle2");
    if (bVar2) {
      this_00 = (StandaloneEffect *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
      StandaloneEffect::SetVisibility(this_00,bVar1);
      if (*(int *)(this + 0x28) == 2) {
        Transfer(this);
        return;
      }
    }
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03d24770 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WormHoleSubsystem::UpdateWarping(bool) */

void __thiscall WormHoleSubsystem::UpdateWarping(WormHoleSubsystem *this,bool param_1)

{
  undefined1 auVar1 [16];
  bool bVar2;
  RtWeakPtrBase *pRVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar4;
  float *pfVar5;
  long *plVar6;
  RtObject *this_01;
  RtObject *this_02;
  RealObject *this_03;
  RealObject *this_04;
  RealObject *this_05;
  RealObject *pRVar7;
  float fVar8;
  undefined1 extraout_var [12];
  float fVar9;
  float fVar10;
  undefined4 local_58;
  float local_54;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  undefined8 local_38;
  float local_30;
  float local_28 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x10));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
    if (!bVar2) {
      fVar8 = (float)PVZ_Dt();
      *(float *)(this + 0x2c) = *(float *)(this + 0x2c) + fVar8;
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    if (pRVar3[8] != (RtWeakPtrBase)0x0) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,pRVar3);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_40);
      if (bVar2) {
        this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        puVar4 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(this_00);
        local_38 = *puVar4;
        local_30 = *(float *)(puVar4 + 1);
        if (param_1) {
          local_58 = *(undefined4 *)(pRVar3 + 0x14);
          local_54 = *(float *)(pRVar3 + 0xc);
        }
        else {
          local_58 = *(undefined4 *)(pRVar3 + 0xc);
          local_54 = *(float *)(pRVar3 + 0x14);
        }
        fVar9 = *(float *)(pRVar3 + 0x10);
        fVar8 = *(float *)(this + 0x2c) / fVar9;
        local_28[0] = fVar8;
        pfVar5 = eastl::min_alt<float>(local_28,(float *)(pRVar3 + 0x10));
        fVar10 = *pfVar5;
        auVar1._4_12_ = extraout_var;
        auVar1._0_4_ = fVar8;
        local_30 = CurveLerp<float>(auVar1,fVar9,fVar10,&local_58,&local_54,3);
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        (**(code **)(*plVar6 + 0x78))(plVar6,&local_38);
        if (1.0 <= fVar10) {
          this_01 = (RtObject *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          if (this_01 != (RtObject *)0x0) {
            bVar2 = Sexy::RtObject::IsA<Plant>(this_01);
            if (bVar2) {
              nop();
              if (this_04 != (RealObject *)0x0) {
                if (!param_1) {
                  Plant::EndCondition();
                  Plant::GetGroundEffect();
                  EntityComponent_GroundEffect::ClearGroundEffect
                            ((EntityComponent_GroundEffect *)local_28,this_04);
                  EntityComponent_GroundEffect::~EntityComponent_GroundEffect
                            ((EntityComponent_GroundEffect *)local_28);
                  RealObject::SetDisableSnapToGround(this_04,param_1);
                }
                (**(code **)(*(long *)this_04 + 0x80))(this_04,param_1);
                if (*(int *)(this + 0x28) == 4) {
                  Plant::KillPlant((Plant *)this_04,0,0,1);
                }
              }
            }
            else {
              bVar2 = Sexy::RtObject::IsA<Zombie>(this_01);
              if (bVar2) {
                nop();
                if (this_05 != (RealObject *)0x0) {
                  pRVar7 = this_05;
                  if (!param_1) {
                    Zombie::GetGroundEffect();
                    EntityComponent_GroundEffect::ClearGroundEffect
                              ((EntityComponent_GroundEffect *)local_28,this_05);
                    EntityComponent_GroundEffect::~EntityComponent_GroundEffect
                              ((EntityComponent_GroundEffect *)local_28);
                    RealObject::SetDisableSnapToGround(this_05,param_1);
                    (**(code **)(*(long *)this_05 + 0x260))(this_05);
                    Zombie::SetIgnoresAllDamage((Zombie *)this_05,param_1);
                    Zombie::SetIsTargetable((Zombie *)this_05,true);
                    Zombie::SetIgnoresCollisions((Zombie *)this_05,param_1);
                  }
                  goto LAB_03d248c4;
                }
              }
              else {
                bVar2 = Sexy::RtObject::IsA<GridItem>(this_01);
                if (((bVar2) && (nop(), this_02 != (RtObject *)0x0)) &&
                   (bVar2 = Sexy::RtObject::IsA<GridItemFlowerPot>(this_02), bVar2)) {
                  nop();
                  pRVar7 = this_03;
                  if (!param_1) {
                    GridItemFlowerPot::GetGroundEffect();
                    EntityComponent_GroundEffect::ClearGroundEffect
                              ((EntityComponent_GroundEffect *)local_28,this_03);
                    EntityComponent_GroundEffect::~EntityComponent_GroundEffect
                              ((EntityComponent_GroundEffect *)local_28);
                    RealObject::SetDisableSnapToGround(this_03,param_1);
                  }
LAB_03d248c4:
                  (**(code **)(*(long *)pRVar7 + 0x80))(pRVar7,param_1);
                  local_30 = local_54;
                  (**(code **)(*(long *)this_01 + 0x78))(this_01,&local_38);
                  pRVar3[8] = (RtWeakPtrBase)0x0;
                  goto LAB_03d246b0;
                }
              }
            }
          }
          local_30 = local_54;
          (**(code **)(*(long *)this_01 + 0x78))(this_01,&local_38);
          pRVar3[8] = (RtWeakPtrBase)0x0;
        }
      }
      else {
        pRVar3[8] = (RtWeakPtrBase)0x0;
      }
LAB_03d246b0:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    }
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_50);
  } while( true );
}


/* WormHoleSubsystem::Update() */

void __thiscall WormHoleSubsystem::Update(WormHoleSubsystem *this)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 == 1) {
    cVar2 = IsWarpDone(this);
    if (cVar2 != '\0') {
      SetState(this,2);
      return;
    }
  }
  else {
    if (iVar1 != 4) {
      if (iVar1 != 3) {
        return;
      }
      cVar2 = IsWarpDone(this);
      if (cVar2 != '\0') {
        SetState(this,5);
        return;
      }
      UpdateWarping(this,false);
      return;
    }
    cVar2 = IsWarpDone(this);
    if (cVar2 != '\0') {
      SetState(this,5);
      MessageRouter::Post((_func_void *)gMessageRouter);
      return;
    }
  }
  UpdateWarping(this,true);
  return;
}

