// Class: ArtifactCameraSubSystem


/* ArtifactCameraSubSystem::unregisterHandTouchEvents() */

void __thiscall ArtifactCameraSubSystem::unregisterHandTouchEvents(ArtifactCameraSubSystem *this)

{
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    Board::UnregisterTouchGameplayObject(*(Board **)(gLawnApp + 0x9f0),this);
    return;
  }
  return;
}


/* ArtifactCameraSubSystem::cancelTouch() */

void __thiscall ArtifactCameraSubSystem::cancelTouch(ArtifactCameraSubSystem *this)

{
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCameraSubSystem::StaticClassInit() */

void ArtifactCameraSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactCameraSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_037eefc4,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactCameraSubSystem::StaticGetClass() */

long * ArtifactCameraSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactCameraSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactCameraSubSystem::GetClass() const */

long * ArtifactCameraSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactCameraSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactCameraSubSystem::LoadData(ArtifactCameraSubSystem::ParamAdaptor const&) */

void __thiscall
ArtifactCameraSubSystem::LoadData(ArtifactCameraSubSystem *this,ParamAdaptor *param_1)

{
  *(undefined8 *)(this + 0x34) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCameraSubSystem::DrawCaptrueImage(Sexy::Graphics*) */

void __thiscall
ArtifactCameraSubSystem::DrawCaptrueImage(ArtifactCameraSubSystem *this,Graphics *param_1)

{
  long lVar1;
  int iVar2;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::DrawGameObjects(*(Board **)(gLawnApp + 0x9f0),param_1);
  Sexy::Graphics::Translate
            (param_1,-*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48),
             -*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c));
  Sexy::Color::Color(aCStack_18,1);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  iVar2 = FUN_037eca40(0x14);
  Sexy::Graphics::FillRect(param_1,0,0,*(int *)(gLawnApp + 0xd4),iVar2);
  iVar2 = FUN_037eca40(0x14);
  Sexy::Graphics::FillRect(param_1,0,0,iVar2,*(int *)(gLawnApp + 0xd8));
  lVar1 = gLawnApp;
  iVar2 = FUN_037eca40(0x14);
  Sexy::Graphics::FillRect(param_1,0,*(int *)(lVar1 + 0xd8) - iVar2,*(int *)(lVar1 + 0xd4),iVar2);
  lVar1 = gLawnApp;
  iVar2 = FUN_037eca40(0x14);
  Sexy::Graphics::FillRect(param_1,*(int *)(lVar1 + 0xd4) - iVar2,0,iVar2,*(int *)(lVar1 + 0xd8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactCameraSubSystem::CloseArtifactCameraPictueDisplay() */

void __thiscall
ArtifactCameraSubSystem::CloseArtifactCameraPictueDisplay(ArtifactCameraSubSystem *this)

{
  if (*(long *)(this + 0x10) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x10));
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x10));
    *(undefined8 *)(this + 0x10) = 0;
  }
  return;
}


/* ArtifactCameraSubSystem::ShowArtifactCameraPictueDisplay(bool) */

void __thiscall
ArtifactCameraSubSystem::ShowArtifactCameraPictueDisplay(ArtifactCameraSubSystem *this,bool param_1)

{
  ArtifactCameraPictueDisplay *this_00;
  
  if (*(long *)(this + 0x10) != 0) {
    return;
  }
  this_00 = ::operator_new(0x110);
  ArtifactCameraPictueDisplay::ArtifactCameraPictueDisplay(this_00);
  *(ArtifactCameraPictueDisplay **)(this + 0x10) = this_00;
  if (param_1) {
    ArtifactCameraPictueDisplay::PopUp(this_00,*(Image **)(this + 0x58));
  }
  else {
    ArtifactCameraPictueDisplay::ShrinkDown(this_00,*(Image **)(this + 0x58));
  }
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x10));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x10));
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x10))
  ;
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x10));
  return;
}


/* ArtifactCameraSubSystem::onGameplayEnded() */

void ArtifactCameraSubSystem::onGameplayEnded(void)

{
  ArtifactCameraSubSystem *this;
  
  this = Board::GetGameSubSystem<ArtifactCameraSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  CloseArtifactCameraPictueDisplay(this);
  return;
}


/* ArtifactCameraSubSystem::onLevelEnded() */

void ArtifactCameraSubSystem::onLevelEnded(void)

{
  ArtifactCameraSubSystem *this;
  
  this = Board::GetGameSubSystem<ArtifactCameraSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  CloseArtifactCameraPictueDisplay(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCameraSubSystem::AddToRenderQueue(RenderQueue*) */

void __thiscall
ArtifactCameraSubSystem::AddToRenderQueue(ArtifactCameraSubSystem *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,DrawCameraSubSystem);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<ArtifactCameraSubSystem,void(ArtifactCameraSubSystem::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,699999,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCameraSubSystem::ArtifactCameraSubSystem() */

void __thiscall ArtifactCameraSubSystem::ArtifactCameraSubSystem(ArtifactCameraSubSystem *this)

{
  LawnApp *pLVar1;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_0669c250;
  Sexy::Insets::Insets((Insets *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  CaptureSave::CaptureSave((CaptureSave *)(this + 0x60));
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Artifact");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Gacha");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined8 *)(this + 0x18) = 0;
  lVar2 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x30) = 1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactCameraSubSystem::StaticNew() */

ArtifactCameraSubSystem * ArtifactCameraSubSystem::StaticNew(void)

{
  ArtifactCameraSubSystem *this;
  
  this = ::operator_new(0xb8);
  ArtifactCameraSubSystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCameraSubSystem::registerHandTouchEvents() */

void __thiscall ArtifactCameraSubSystem::registerHandTouchEvents(ArtifactCameraSubSystem *this)

{
  undefined *puVar1;
  Board *pBVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  if (pBVar2 != (Board *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,handleTouch);
    Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
    Delegate1wRet<ArtifactCameraSubSystem,bool(ArtifactCameraSubSystem::*)(Sexy::Touch_const&)>
              (aDStack_68,aCStack_98);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_a0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,cancelTouch);
    Sexy::Delegate0::Delegate0<ArtifactCameraSubSystem,void(ArtifactCameraSubSystem::*)()>
              (aDStack_38,aCStack_80);
    Board::RegisterTouchGameplayObject(pBVar2,aDStack_68,0xb,a_Stack_a0,aDStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onGameplayEnded);
    Sexy::Delegate0::Delegate0<ArtifactCameraSubSystem,void(ArtifactCameraSubSystem::*)()>
              (aDStack_38,aCStack_80);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayEnded,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onLevelEnded);
    Sexy::Delegate0::Delegate0<ArtifactCameraSubSystem,void(ArtifactCameraSubSystem::*)()>
              (aDStack_38,aCStack_80);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelEnded,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCameraSubSystem::DrawCameraSubSystem(Sexy::Graphics*) */

void __thiscall
ArtifactCameraSubSystem::DrawCameraSubSystem(ArtifactCameraSubSystem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float local_44;
  GraphicsAutoState aGStack_40 [8];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  float local_28 [4];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x30) == 3) {
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab1cc0);
    Sexy::Graphics::DrawImage
              (param_1,pIVar6,*(int *)(this + 0x20),*(int *)(this + 0x24),*(int *)(this + 0x28),
               *(int *)(this + 0x2c));
    iVar3 = FUN_037eca40(0xf);
    iVar1 = *(int *)(this + 0x20);
    iVar4 = FUN_037eca40(7);
    iVar2 = *(int *)(this + 0x24);
    iVar5 = FUN_037eca40(0x32);
    Sexy::Insets::Insets((Insets *)&local_38,iVar3 + iVar1,iVar4 + iVar2,iVar5,iVar5);
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab1f80);
    Sexy::Graphics::DrawImage(param_1,pIVar6,local_38,local_34,local_30,local_2c);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
    Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
    fVar8 = (float)ArtifactMgr::GetActivatedArtifactCooldown();
    fVar9 = *(float *)(this + 0xb0);
    local_28[0] = (float)PVZ_T();
    local_28[0] = fVar9 - local_28[0];
    local_18[0] = 0;
    pfVar7 = eastl::max_alt<float>(local_28,(float *)local_18);
    local_28[0] = *pfVar7 / fVar8;
    local_44 = 0.0;
    local_18[0] = 0x3f800000;
    pfVar7 = eastl::max_alt<float>(&local_44,local_28);
    pfVar7 = eastl::min_alt<float>((float *)local_18,pfVar7);
    fVar8 = *pfVar7;
    Sexy::Insets::Insets((Insets *)local_28,0,0,0,100);
    Sexy::Insets::Insets((Insets *)local_18,0xff,0xff,0xff,0);
    DrawRadialCooldown(1.0 - fVar8,(float)(local_30 / 2 + local_38),(float)(local_34 + local_2c / 2)
                       ,(float)(local_30 / 2),param_1,(Insets *)local_28,(Insets *)local_18);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
    pIVar6 = *(Image **)(this + 0x58);
    if (pIVar6 == (Image *)0x0) {
      pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab1ee0);
      iVar3 = FUN_037eca40(0x4b);
      iVar1 = *(int *)(this + 0x20);
      iVar4 = FUN_037eca40(7);
      iVar2 = *(int *)(this + 0x24);
      iVar5 = FUN_037eca40(0x32);
      Sexy::Graphics::DrawImage(param_1,pIVar6,iVar3 + iVar1,iVar4 + iVar2,iVar5,iVar5);
    }
    else {
      iVar3 = FUN_037eca40(0x4b);
      iVar1 = *(int *)(this + 0x20);
      iVar4 = FUN_037eca40(7);
      iVar2 = *(int *)(this + 0x24);
      iVar5 = FUN_037eca40(0x32);
      Sexy::Graphics::DrawImage(param_1,pIVar6,iVar3 + iVar1,iVar4 + iVar2,iVar5,iVar5);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCameraSubSystem::CreateGhosts() */

void __thiscall ArtifactCameraSubSystem::CreateGhosts(ArtifactCameraSubSystem *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  RtObject *this_00;
  ArtifactCameraGhost *this_01;
  int iVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0.0 < *(float *)(this + 0x3c)) {
    uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
    std::string::string(asStack_28,"ArtifactCameraGhostDefault");
    Sexy::ToWString(asStack_28);
    Sexy::RtName::RtName(aRStack_18,awStack_20);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_30,uVar4,0xc,aRStack_18);
    Sexy::RtName::~RtName(aRStack_18);
    FUN_05476c50(awStack_20);
    std::string::~string(asStack_28);
    nop();
    iVar1 = BoardConstants::NUMBER_OF_ROWS();
    iVar2 = BoardTransforms::GridToBoardSpaceXUnbounded(0);
    if (0 < iVar1) {
      iVar5 = 0;
      do {
        iVar3 = BoardTransforms::GridToBoardSpaceYUnbounded(iVar5);
        uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_30);
        this_00 = (RtObject *)
                  Board::AddProjectile((Board *)(float)iVar2,(float)iVar3,0,uVar4,aRStack_18,0,0);
        this_01 = Sexy::RtObject::Cast<ArtifactCameraGhost>(this_00);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        if (this_01 != (ArtifactCameraGhost *)0x0) {
          FUN_037ec80c(this_01 + 0x24);
          EgretflowerPlantFoodBomb::SetDamageRate
                    ((EgretflowerPlantFoodBomb *)this_01,*(float *)(this + 0x3c));
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != iVar1);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCameraSubSystem::StunAllZombies() */

void __thiscall ArtifactCameraSubSystem::StunAllZombies(ArtifactCameraSubSystem *this)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  Zombie *pZVar4;
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
  EntityFinder::GetEntitiesOnBoard
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2);
  uVar7 = local_20;
  lVar2 = FUN_037ec70c(local_20,local_18);
  if (lVar2 != 0) {
    do {
      puVar3 = (undefined8 *)FUN_037ec718(uVar7,uVar6);
      pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
      if (((pZVar4 != (Zombie *)0x0) &&
          (cVar1 = RealObject::IsOnOpposingTeam(pZVar4,1), cVar1 != '\0')) &&
         (cVar1 = (**(code **)(*(long *)pZVar4 + 0x328))(pZVar4), cVar1 == '\0')) {
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(this + 0x34),0,pZVar4,2,1);
      }
      uVar7 = local_20;
      uVar6 = uVar6 + 1;
      uVar5 = FUN_037ec70c(local_20,local_18);
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
/* ArtifactCameraSubSystem::~ArtifactCameraSubSystem() */

void __thiscall ArtifactCameraSubSystem::~ArtifactCameraSubSystem(ArtifactCameraSubSystem *this)

{
  LawnApp *pLVar1;
  char cVar2;
  wchar16 *pwVar3;
  LineBreakCategory *pLVar4;
  undefined **ppuVar5;
  LineBreakCategory *pLVar6;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  LineBreakCategory *local_8;
  
  pLVar6 = ___stack_chk_guard;
  ppuVar5 = &PTR_GetClass_0669c250;
  local_8 = ___stack_chk_guard;
  pLVar4 = aLStack_18;
  *(undefined ***)this = &PTR_GetClass_0669c250;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Artifact");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Gacha");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"SomeFeatures");
  cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar3,(wchar16 *)asStack_10,pLVar4,(LineBreakCategory *)ppuVar5,pLVar6);
  std::string::~string(asStack_10);
  nop();
  if ((cVar2 == '\0') && (*(long **)(this + 0x58) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x58) + 0x18))();
    *(undefined8 *)(this + 0x58) = 0;
  }
  CaptureSave::~CaptureSave((CaptureSave *)(this + 0x60));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactCameraSubSystem::~ArtifactCameraSubSystem() */

void __thiscall ArtifactCameraSubSystem::~ArtifactCameraSubSystem(ArtifactCameraSubSystem *this)

{
  ~ArtifactCameraSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCameraSubSystem::LoadCaptureInfo() */

void ArtifactCameraSubSystem::LoadCaptureInfo(void)

{
  char cVar1;
  long in_x0;
  long lVar2;
  int *piVar3;
  long *plVar4;
  ulong uVar5;
  string *psVar6;
  wchar16 *pwVar7;
  vector *pvVar8;
  RtMixedPtrBase *this;
  ulong uVar9;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar10;
  Plant *pPVar11;
  Point *this_00;
  string *in_x3;
  LineBreakCategory *in_x4;
  undefined8 uVar12;
  Board *pBVar13;
  ulong uVar14;
  Point aPStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = aPStack_28;
  uVar14 = 0;
  Board::SetSunMoney(*(Board **)(gLawnApp + 0x9f0),*(int *)(in_x0 + 0x60));
  uVar12 = *(undefined8 *)(in_x0 + 0x80);
  lVar2 = FUN_037ec720(uVar12,*(undefined8 *)(in_x0 + 0x88));
  if (lVar2 != 0) {
    do {
      piVar3 = (int *)FUN_037ec734(uVar12,uVar14);
      in_x3 = gLawnApp;
      plVar4 = (long *)Board::GetPlantGroupAt(*(Board **)(gLawnApp + 0x9f0),*piVar3,piVar3[1]);
      if ((((plVar4 != (long *)0x0) && (cVar1 = (**(code **)(*plVar4 + 0x158))(), cVar1 != '\0')) &&
          (cVar1 = PlantGroup::HasInvinciblePlant(), cVar1 == '\0')) &&
         (cVar1 = PlantGroup::HasPlantfoodedPlant(), cVar1 == '\0')) {
        uVar5 = 0;
        pvVar8 = (vector *)PlantGroup::Plants();
        std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::vector
                  ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                   &local_20,pvVar8);
        uVar12 = local_20;
        lVar2 = FUN_037ec6fc(local_20,local_18);
        if (lVar2 != 0) {
          do {
            this = (RtMixedPtrBase *)FUN_037ec740(uVar12,uVar5);
            cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
            if (cVar1 != '\0') {
              pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_037ec740(local_20,uVar5);
              lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
              cVar1 = FUN_037ec6e8(*(undefined1 *)(lVar2 + 0x189));
              if (cVar1 == '\0') {
                pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_037ec740(local_20,uVar5);
                pPVar11 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
                std::string::string((string *)this_00,"xiu");
                Plant::AddTag(pPVar11,(string *)this_00);
                std::string::~string((string *)this_00);
                nop();
                pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_037ec740(local_20,uVar5);
                pPVar11 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
                in_x3 = (string *)0x8000000000;
                Plant::KillPlant(pPVar11,1,0);
              }
            }
            uVar12 = local_20;
            uVar5 = uVar5 + 1;
            uVar9 = FUN_037ec6fc(local_20,local_18);
          } while (uVar5 < uVar9);
        }
        std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
                  ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                   &local_20);
      }
      uVar14 = uVar14 + 1;
      uVar12 = *(undefined8 *)(in_x0 + 0x80);
      uVar5 = FUN_037ec720(uVar12,*(undefined8 *)(in_x0 + 0x88));
    } while (uVar14 < uVar5);
  }
  uVar12 = *(undefined8 *)(in_x0 + 0x68);
  uVar14 = 0;
  lVar2 = FUN_037ec720(uVar12,*(undefined8 *)(in_x0 + 0x70));
  if (lVar2 != 0) {
    do {
      pBVar13 = *(Board **)(gLawnApp + 0x9f0);
      piVar3 = (int *)FUN_037ec734(uVar12,uVar14);
      Sexy::Point::Point(this_00,*piVar3,piVar3[1]);
      psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      FUN_037ec734(*(undefined8 *)(in_x0 + 0x68),uVar14);
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
      cVar1 = Board::CanPlantAt(pBVar13,this_00,(RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      if (cVar1 != '\0') {
        piVar3 = (int *)FUN_037ec734(*(undefined8 *)(in_x0 + 0x68),uVar14);
        in_x4 = (LineBreakCategory *)(ulong)(uint)piVar3[4];
        in_x3 = (string *)(piVar3 + 2);
        pPVar11 = (Plant *)Board::AddPlant(*(Board **)(gLawnApp + 0x9f0),*piVar3,piVar3[1],in_x3,
                                           piVar3[4],false,false,true,false);
        if (0.0 < *(float *)(in_x0 + 0x38)) {
          Plant::SetInvincible(pPVar11,true,true,*(float *)(in_x0 + 0x38));
        }
      }
      uVar14 = uVar14 + 1;
      uVar12 = *(undefined8 *)(in_x0 + 0x68);
      uVar5 = FUN_037ec720(uVar12,*(undefined8 *)(in_x0 + 0x70));
    } while (uVar14 < uVar5);
  }
  uVar12 = *(undefined8 *)(in_x0 + 0x80);
  uVar14 = 0;
  lVar2 = FUN_037ec720(uVar12,*(undefined8 *)(in_x0 + 0x88));
  if (lVar2 != 0) {
    do {
      pBVar13 = *(Board **)(gLawnApp + 0x9f0);
      piVar3 = (int *)FUN_037ec734(uVar12,uVar14);
      Sexy::Point::Point(this_00,*piVar3,piVar3[1]);
      psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      FUN_037ec734(*(undefined8 *)(in_x0 + 0x80),uVar14);
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
      cVar1 = Board::CanPlantAt(pBVar13,this_00,(RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      if (cVar1 != '\0') {
        piVar3 = (int *)FUN_037ec734(*(undefined8 *)(in_x0 + 0x80),uVar14);
        in_x4 = (LineBreakCategory *)(ulong)(uint)piVar3[4];
        in_x3 = (string *)(piVar3 + 2);
        pPVar11 = (Plant *)Board::AddPlant(*(Board **)(gLawnApp + 0x9f0),*piVar3,piVar3[1],in_x3,
                                           piVar3[4],false,false,true,false);
        if (0.0 < *(float *)(in_x0 + 0x38)) {
          Plant::SetInvincible(pPVar11,true,true,*(float *)(in_x0 + 0x38));
        }
      }
      uVar14 = uVar14 + 1;
      uVar12 = *(undefined8 *)(in_x0 + 0x80);
      uVar5 = FUN_037ec720(uVar12,*(undefined8 *)(in_x0 + 0x88));
    } while (uVar14 < uVar5);
  }
  uVar12 = *(undefined8 *)(in_x0 + 0x98);
  uVar14 = 0;
  lVar2 = FUN_037ec720(uVar12,*(undefined8 *)(in_x0 + 0xa0));
  if (lVar2 != 0) {
    do {
      pBVar13 = *(Board **)(gLawnApp + 0x9f0);
      piVar3 = (int *)FUN_037ec734(uVar12,uVar14);
      Sexy::Point::Point(this_00,*piVar3,piVar3[1]);
      psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      FUN_037ec734(*(undefined8 *)(in_x0 + 0x98),uVar14);
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
      cVar1 = Board::CanPlantAt(pBVar13,this_00,(RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      if (cVar1 != '\0') {
        piVar3 = (int *)FUN_037ec734(*(undefined8 *)(in_x0 + 0x98),uVar14);
        in_x4 = (LineBreakCategory *)(ulong)(uint)piVar3[4];
        in_x3 = (string *)(piVar3 + 2);
        pPVar11 = (Plant *)Board::AddPlant(*(Board **)(gLawnApp + 0x9f0),*piVar3,piVar3[1],in_x3,
                                           piVar3[4],false,false,true,false);
        if (0.0 < *(float *)(in_x0 + 0x38)) {
          Plant::SetInvincible(pPVar11,true,true,*(float *)(in_x0 + 0x38));
        }
      }
      uVar14 = uVar14 + 1;
      uVar12 = *(undefined8 *)(in_x0 + 0x98);
      uVar5 = FUN_037ec720(uVar12,*(undefined8 *)(in_x0 + 0xa0));
    } while (uVar14 < uVar5);
  }
  pwVar7 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string((string *)&local_20,"SomeFeatures");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar7,(wchar16 *)&local_20,(LineBreakCategory *)this_00,
                     (LineBreakCategory *)in_x3,in_x4);
  std::string::~string((string *)&local_20);
  nop();
  if ((cVar1 == '\0') && (*(long **)(in_x0 + 0x58) != (long *)0x0)) {
    (**(code **)(**(long **)(in_x0 + 0x58) + 0x18))();
  }
  *(undefined8 *)(in_x0 + 0x58) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactCameraSubSystem::ExecuteCapture() */

void __thiscall ArtifactCameraSubSystem::ExecuteCapture(ArtifactCameraSubSystem *this)

{
  CreateGhosts(this);
  LoadCaptureInfo();
  return;
}


/* ArtifactCameraSubSystem::Trigger() */

void ArtifactCameraSubSystem::Trigger(void)

{
  ArtifactCameraSubSystem *in_x0;
  
  CreateGhosts(in_x0);
  LoadCaptureInfo();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCameraSubSystem::SaveCaptureInfo() */

void __thiscall ArtifactCameraSubSystem::SaveCaptureInfo(ArtifactCameraSubSystem *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  RtObject *this_00;
  ArtifactCamera *this_01;
  long lVar4;
  undefined8 *puVar5;
  Plant *this_02;
  PlantImitater *pPVar6;
  ulong uVar7;
  GridItemLilyPad *this_03;
  undefined *__n;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_20;
  undefined4 local_1c;
  string asStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  __n = &__stack_chk_guard;
  local_8 = ___stack_chk_guard;
  uVar8 = 0;
  uVar3 = Board::GetSunCurrency(*(Board **)(gLawnApp + 0x9f0));
  *(undefined4 *)(this + 0x60) = uVar3;
  std::
  vector<ArtifactCameraSubSystem::PlantCaptureInfo,std::allocator<ArtifactCameraSubSystem::PlantCaptureInfo>>
  ::clear((vector<ArtifactCameraSubSystem::PlantCaptureInfo,std::allocator<ArtifactCameraSubSystem::PlantCaptureInfo>>
           *)(this + 0x80));
  std::
  vector<ArtifactCameraSubSystem::PlantCaptureInfo,std::allocator<ArtifactCameraSubSystem::PlantCaptureInfo>>
  ::clear((vector<ArtifactCameraSubSystem::PlantCaptureInfo,std::allocator<ArtifactCameraSubSystem::PlantCaptureInfo>>
           *)(this + 0x98));
  Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
  ArtifactMgr::GetActivatedArtifact();
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  this_01 = Sexy::RtObject::Cast<ArtifactCamera>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  EntityFinder::GetEntitiesOnBoard
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50,1);
  uVar9 = local_50;
  lVar4 = FUN_037ec70c(local_50,local_48);
  if (lVar4 != 0) {
    do {
      puVar5 = (undefined8 *)FUN_037ec718(uVar9,uVar8);
      this_02 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar5);
      if (this_02 != (Plant *)0x0) {
        Plant::GetType();
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20)
        ;
        FUN_05475d88((string *)&local_38,lVar4 + 8);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
        pPVar6 = Sexy::RtObject::Cast<PlantImitater>(*(RtObject **)(this_02 + 0xa8));
        if (pPVar6 != (PlantImitater *)0x0) {
          PlantImitater::GetImitatedPlant();
          bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_20);
          if (!bVar1) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
            std::string::~string((string *)&local_38);
            goto LAB_037effa4;
          }
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
          thunk_FUN_05475e00((string *)&local_38,lVar4 + 8);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
        }
        if ((this_01 != (ArtifactCamera *)0x0) &&
           (cVar2 = ArtifactCamera::IsInCapturePlantBlacklist(this_01,(string *)&local_38),
           cVar2 == '\0')) {
          PakRecord::PakRecord((PakRecord *)&local_20);
          local_20 = BoardEntity::CalcColumnPosition((BoardEntity *)this_02);
          local_1c = SharkMinion::getRow((SharkMinion *)this_02);
          thunk_FUN_05475e00(asStack_18,(string *)&local_38);
          local_10 = FUN_037ec6e4(*(undefined4 *)(this_02 + 0x50));
          cVar2 = Plant::IsVine(this_02);
          if (cVar2 == '\0') {
            std::
            vector<ArtifactCameraSubSystem::PlantCaptureInfo,std::allocator<ArtifactCameraSubSystem::PlantCaptureInfo>>
            ::push_back((vector<ArtifactCameraSubSystem::PlantCaptureInfo,std::allocator<ArtifactCameraSubSystem::PlantCaptureInfo>>
                         *)(this + 0x80),(PlantCaptureInfo *)&local_20);
          }
          else {
            std::
            vector<ArtifactCameraSubSystem::PlantCaptureInfo,std::allocator<ArtifactCameraSubSystem::PlantCaptureInfo>>
            ::push_back((vector<ArtifactCameraSubSystem::PlantCaptureInfo,std::allocator<ArtifactCameraSubSystem::PlantCaptureInfo>>
                         *)(this + 0x98),(PlantCaptureInfo *)&local_20);
          }
          PakRecord::~PakRecord((PakRecord *)&local_20);
        }
        std::string::~string((string *)&local_38);
      }
LAB_037effa4:
      uVar9 = local_50;
      uVar8 = uVar8 + 1;
      uVar7 = FUN_037ec70c(local_50,local_48);
    } while (uVar8 < uVar7);
  }
  uVar8 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  EntityFinder::GetEntitiesOnBoard((string *)&local_38,4);
  uVar9 = local_38;
  lVar4 = FUN_037ec70c(local_38,local_30);
  if (lVar4 != 0) {
    do {
      puVar5 = (undefined8 *)FUN_037ec718(uVar9,uVar8);
      this_03 = Sexy::RtObject::Cast<GridItemLilyPad>((RtObject *)*puVar5);
      if (this_03 != (GridItemLilyPad *)0x0) {
        PakRecord::PakRecord((PakRecord *)&local_20);
        local_20 = BoardEntity::CalcColumnPosition((BoardEntity *)this_03);
        local_1c = SharkMinion::getRow((SharkMinion *)this_03);
        std::string::append(asStack_18,"lilypad",(size_t)__n);
        local_10 = FUN_037ec6e4(*(undefined4 *)(this_03 + 0x50));
        std::
        vector<ArtifactCameraSubSystem::PlantCaptureInfo,std::allocator<ArtifactCameraSubSystem::PlantCaptureInfo>>
        ::push_back((vector<ArtifactCameraSubSystem::PlantCaptureInfo,std::allocator<ArtifactCameraSubSystem::PlantCaptureInfo>>
                     *)(this + 0x68),(PlantCaptureInfo *)&local_20);
        PakRecord::~PakRecord((PakRecord *)&local_20);
      }
      uVar9 = local_38;
      uVar8 = uVar8 + 1;
      uVar7 = FUN_037ec70c(local_38,local_30);
    } while (uVar8 < uVar7);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCameraSubSystem::DrawCaptureToDeviceImage(Sexy::DeviceImage*) */

void __thiscall
ArtifactCameraSubSystem::DrawCaptureToDeviceImage
          (ArtifactCameraSubSystem *this,DeviceImage *param_1)

{
  Graphics3D *pGVar1;
  float *pfVar2;
  float local_10c;
  float local_108 [4];
  SexyTransform2D aSStack_f8 [40];
  Graphics aGStack_d0 [200];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Graphics::Graphics(aGStack_d0,(Image *)param_1);
  pGVar1 = (Graphics3D *)Sexy::Graphics::Get3D(aGStack_d0);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_f8);
  Sexy::Graphics3D::PushTransform(pGVar1,(SexyMatrix3 *)aSStack_f8,false);
  pGVar1 = (Graphics3D *)Sexy::Graphics::Get3D(aGStack_d0);
  Sexy::Insets::Insets((Insets *)local_108,0,0,0,0);
  Sexy::Graphics3D::ClearColorBuffer(pGVar1,(Color *)local_108);
  Sexy::Color::Color((Color *)local_108,1);
  Sexy::Graphics::SetColor(aGStack_d0,(Color *)local_108);
  local_10c = (float)*(int *)(param_1 + 0x38) / (float)*(int *)(gLawnApp + 0xd4);
  local_108[0] = (float)*(int *)(param_1 + 0x3c) / (float)*(int *)(gLawnApp + 0xd8);
  pfVar2 = eastl::min_alt<float>(&local_10c,local_108);
  Sexy::Graphics::SetScale(aGStack_d0,*pfVar2,*pfVar2,0.0,0.0);
  Sexy::Graphics::Translate
            (aGStack_d0,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48),
             *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c));
  DrawCaptrueImage(this,aGStack_d0);
  pGVar1 = (Graphics3D *)Sexy::Graphics::Get3D(aGStack_d0);
  Sexy::Graphics3D::PopTransform(pGVar1);
  Sexy::Graphics::~Graphics(aGStack_d0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCameraSubSystem::SetState(ArtifactCameraSubSystem::CameraSubSystemState) */

void ArtifactCameraSubSystem::SetState
               (ArtifactCameraSubSystem *param_1,int param_2,undefined8 param_3,
               LineBreakCategory *param_4,LineBreakCategory *param_5)

{
  undefined4 uVar1;
  char cVar2;
  BoardArtifactManager *this;
  StandaloneEffect *pSVar3;
  wchar16 *pwVar4;
  SeedPacketUtils *this_00;
  PacketRenderData *pPVar5;
  DeviceImage *pDVar6;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar7;
  undefined8 uVar8;
  string *psVar9;
  RtMixedPtr aRStack_68 [8];
  string asStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  *(int *)(param_1 + 0x30) = param_2;
  local_8 = ___stack_chk_guard;
  if (param_2 == 2) {
    this = (BoardArtifactManager *)Board::GetArtifactManager(*(Board **)(gLawnApp + 0x9f0));
    BoardArtifactManager::GetAnimateArtifactMower(this);
    AnimateArtifactMower::GetEffect();
    pSVar3 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    StandaloneEffect::SetVisibility(pSVar3,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    psVar9 = asStack_60;
    std::string::string((string *)aRStack_58,"SomeFeatures");
    cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar4,(wchar16 *)aRStack_58,(LineBreakCategory *)psVar9,param_4,param_5);
    std::string::~string((string *)aRStack_58);
    nop();
    if (cVar2 == '\0') {
      if (*(long **)(param_1 + 0x58) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x58) + 0x18))();
        *(undefined8 *)(param_1 + 0x58) = 0;
      }
      this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      std::string::string((string *)aRStack_58,"sunflower");
      pPVar5 = (PacketRenderData *)
               SeedPacketUtils::GetPlantPacketRenderData(this_00,(string *)aRStack_58,-1,-1,-1);
      std::string::~string((string *)aRStack_58);
      nop();
      pDVar6 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_00,pPVar5,0,0);
      uVar1 = *(undefined4 *)(gLawnApp + 0xd4);
      *(undefined4 *)(pDVar6 + 0x3c) = *(undefined4 *)(gLawnApp + 0xd8);
      *(undefined4 *)(pDVar6 + 0x38) = uVar1;
      DrawCaptureToDeviceImage(param_1,pDVar6);
      *(DeviceImage **)(param_1 + 0x58) = pDVar6;
    }
    else {
      std::string::string((string *)aRStack_58,"IMAGE_UI_ARTIFACT_CALABASH_FRAME1");
      uVar8 = StringHelper::ToImage((string *)aRStack_58,false);
      *(undefined8 *)(param_1 + 0x58) = uVar8;
      std::string::~string((string *)aRStack_58);
      nop();
    }
    AnimateArtifactMower::GetEffect();
    pSVar3 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    StandaloneEffect::SetVisibility(pSVar3,true);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    StunAllZombies(param_1);
    SaveCaptureInfo(param_1);
    this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_60,"POPANIM_EFFECTS_ARTIFACT_CAMERA_EFFECT1");
    GetPAMByName(asStack_60);
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_58);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar7,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    std::string::~string(asStack_60);
    nop();
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)aRStack_58,(float)(*(int *)(gLawnApp + 0xd4) / 2),
               (float)(*(int *)(gLawnApp + 0xd8) / 2));
    StandaloneEffect::SetScreenSpaceOrigin
              ((StandaloneEffect *)this_01,(SexyVector2 *)aRStack_58,500000);
    Effect_PopAnim::SetCentered(this_01,true);
    std::string::string((string *)aRStack_58,"zhengchang");
    Effect_PopAnim::PlaySingleAnimation(this_01,aRStack_58,0);
    std::string::~string((string *)aRStack_58);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)aRStack_58,"onCapture");
    RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_60,
               aRStack_58);
    StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this_01,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)aRStack_58);
    nop();
    Sexy::RtId::~RtId((RtId *)asStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  else if (param_2 == 4) {
    if (*(long *)(param_1 + 0x58) == 0) {
      SetState(param_1,1);
    }
    else {
      ShowArtifactCameraPictueDisplay(param_1,true);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactCameraSubSystem::Init() */

void __thiscall ArtifactCameraSubSystem::Init(ArtifactCameraSubSystem *this)

{
  SetState(this,1);
  return;
}


/* ArtifactCameraSubSystem::Close() */

void __thiscall ArtifactCameraSubSystem::Close(ArtifactCameraSubSystem *this)

{
  SetState(this,5);
  return;
}


/* ArtifactCameraSubSystem::StartCapture() */

void __thiscall ArtifactCameraSubSystem::StartCapture(ArtifactCameraSubSystem *this)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Artifact_Camera_Capture");
  SetState(this,2);
  fVar2 = (float)PVZ_T();
  Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
  fVar3 = (float)ArtifactMgr::GetActivatedArtifactCooldown();
  *(float *)(this + 0xb0) = fVar3 + fVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCameraSubSystem::SelectAction() */

void __thiscall ArtifactCameraSubSystem::SelectAction(ArtifactCameraSubSystem *this)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  int local_40;
  int local_3c;
  int local_38;
  int local_2c;
  int local_28;
  int local_24;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_18,"UIArtifactIconWithCamera");
  lVar6 = UIWidget::GetWidgetBySheetName((string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  if (lVar6 != 0) {
    UIWidget::GetDrawRect();
    Sexy::Point::Point((Point *)&local_40,local_28,local_24);
    Board::TranslateUIWidgetPositionToBoardPosition((Board *)gLawnApp[0x13e],(Point *)&local_40);
    Board::GetBoardBaseOffset();
    iVar3 = FUN_037eca40(0x1e);
    Board::GetBoardBaseOffset();
    iVar4 = FUN_037eca40(0x50);
    iVar5 = FUN_037eca40(0x8c);
    Sexy::Insets::Insets
              ((Insets *)&local_18,(local_40 - local_38) - iVar3,(local_3c - local_2c) - iVar4,iVar5
               ,iVar4);
    plVar1 = gLawnApp;
    pcVar7 = *(code **)(*gLawnApp + 0x360);
    *(undefined8 *)(this + 0x20) = local_18;
    *(undefined8 *)(this + 0x28) = uStack_10;
    cVar2 = (*pcVar7)(plVar1);
    if (cVar2 != '\0') {
      iVar3 = (**(code **)(*gLawnApp + 0x368))(gLawnApp);
      *(int *)(this + 0x20) = *(int *)(this + 0x20) + iVar3;
    }
  }
  SetState(this,3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactCameraSubSystem::onCapture(StandaloneEffect*) */

void ArtifactCameraSubSystem::onCapture(StandaloneEffect *param_1)

{
  SetState(param_1,1);
  ShowArtifactCameraPictueDisplay((ArtifactCameraSubSystem *)param_1,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCameraSubSystem::handleTouch(Sexy::Touch const&) */

void __thiscall ArtifactCameraSubSystem::handleTouch(ArtifactCameraSubSystem *this,Touch *param_1)

{
  TPoint *pTVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  float fVar5;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = '\0';
  if ((*(int *)(this + 0x30) != 3) ||
     (cVar3 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0)), cVar3 == '\0')) goto LAB_037f0b1c;
  iVar2 = *(int *)(param_1 + 0x30);
  if ((*(long *)(this + 0x18) == 0) && (iVar2 == 0)) {
LAB_037f0ba0:
    cVar4 = Sexy::TRect<int>::Contains((TRect<int> *)(this + 0x20),(TPoint *)(param_1 + 0x10));
    if (cVar4 != '\0') {
      *(undefined8 *)(this + 0x18) = *(undefined8 *)param_1;
      cVar3 = cVar4;
    }
  }
  else {
    if (*(long *)(this + 0x18) == *(long *)param_1) {
      if (iVar2 == 0) goto LAB_037f0ba0;
      if (iVar2 != 3) goto LAB_037f0b1c;
      pTVar1 = (TPoint *)(param_1 + 0x10);
      cVar4 = Sexy::TRect<int>::Contains((TRect<int> *)(this + 0x20),pTVar1);
      if (cVar4 == '\0') {
        SetState(this,1);
      }
      else {
        Sexy::Insets::Insets
                  (aIStack_28,*(int *)(this + 0x20),*(int *)(this + 0x24),*(int *)(this + 0x28) / 2,
                   *(int *)(this + 0x2c));
        Sexy::Insets::Insets
                  (aIStack_18,*(int *)(this + 0x28) / 2 + *(int *)(this + 0x20),
                   *(int *)(this + 0x24),*(int *)(this + 0x28) / 2,*(int *)(this + 0x2c));
        cVar4 = Sexy::TRect<int>::Contains((TRect<int> *)aIStack_28,pTVar1);
        if (cVar4 == '\0') {
          cVar4 = Sexy::TRect<int>::Contains((TRect<int> *)aIStack_18,pTVar1);
          if (cVar4 != '\0') {
            SetState(this,4);
          }
        }
        else {
          fVar5 = (float)PVZ_T();
          if (*(float *)(this + 0xb0) < fVar5) {
            StartCapture(this);
          }
        }
      }
    }
    else if (iVar2 == 3) {
      cVar4 = Sexy::TRect<int>::Contains((TRect<int> *)(this + 0x20),(TPoint *)(param_1 + 0x10));
      if (cVar4 == '\0') {
        SetState(this,1);
        cVar3 = '\0';
        goto LAB_037f0b1c;
      }
    }
    else {
      cVar3 = '\0';
      if (iVar2 != 4) goto LAB_037f0b1c;
    }
    cancelTouch(this);
  }
LAB_037f0b1c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3);
}

