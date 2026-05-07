// Class: TutorialLevel4


/* TutorialLevel4::onGameWon() */

void TutorialLevel4::onGameWon(void)

{
  ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(0x19);
  return;
}


/* TutorialLevel4::onLoaded() */

void __thiscall TutorialLevel4::onLoaded(TutorialLevel4 *this)

{
  long lVar1;
  
  lVar1 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  FUN_044c8bc0(lVar1 + 0xb9,(byte)this[0x70] ^ 1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel4::StaticClassInit() */

void TutorialLevel4::StaticClassInit(void)

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
    std::string::string(asStack_10,"TutorialLevel4");
    (*pcVar2)(plVar1,asStack_10,FUN_044c9efc,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TutorialLevel4::StaticGetClass() */

long * TutorialLevel4::StaticGetClass(void)

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
  uVar2 = IntroModule::StaticGetClass();
  (*pcVar3)(plVar1,"TutorialLevel4",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TutorialLevel4::~TutorialLevel4() */

void __thiscall TutorialLevel4::~TutorialLevel4(TutorialLevel4 *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06854290;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  IntroModule::~IntroModule((IntroModule *)this);
  return;
}


/* TutorialLevel4::~TutorialLevel4() */

void __thiscall TutorialLevel4::~TutorialLevel4(TutorialLevel4 *this)

{
  ~TutorialLevel4(this);
  AK::FreeHook(this);
  return;
}


/* TutorialLevel4::TutorialLevel4() */

void __thiscall TutorialLevel4::TutorialLevel4(TutorialLevel4 *this)

{
  IntroModule::IntroModule((IntroModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06854290;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x68));
  return;
}


/* TutorialLevel4::StaticNew() */

TutorialLevel4 * TutorialLevel4::StaticNew(void)

{
  TutorialLevel4 *this;
  
  this = ::operator_new(0x78);
  TutorialLevel4(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel4::showUI(bool) */

void __thiscall TutorialLevel4::showUI(TutorialLevel4 *this,bool param_1)

{
  bool bVar1;
  Board *this_00;
  UIWidget *pUVar2;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  string *extraout_x1_04;
  string *extraout_x1_05;
  RtWeakPtr aRStack_48 [8];
  RtWeakPtr aRStack_40 [8];
  RtWeakPtr aRStack_38 [8];
  RtWeakPtr aRStack_30 [8];
  RtWeakPtr aRStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Board *)ResilienceTutorialIntro::getBoard();
  pUVar2 = (UIWidget *)Board::GetSeedBank(this_00);
  UIWidget::SetVisible(pUVar2,param_1);
  std::string::string(asStack_10,"UIPlantfood");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_48);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UIShovel");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_00);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_40);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UIPauseButton");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_01);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_38);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UICoinBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_02);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_30);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UIGemBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_03);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UIChangeSpeedButton");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_04);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UISunBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_05);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TutorialLevel4::startGame() */

void __thiscall TutorialLevel4::startGame(TutorialLevel4 *this)

{
  Board *this_00;
  
  this_00 = (Board *)ResilienceTutorialIntro::getBoard();
  Board::DestroyCutsceneZombies();
  Board::StartLevel(this_00);
  showUI(this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel4::initializeModule() */

void __thiscall TutorialLevel4::initializeModule(TutorialLevel4 *this)

{
  undefined4 uVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x48) = 0xffffffff;
  local_8 = ___stack_chk_guard;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x5c) = uVar1;
  *(undefined4 *)(this + 0x60) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x68),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  this[0x70] = gSkippedTutorial;
  gSkippedTutorial = (TutorialLevel4)0x0;
  AnimationMgr::Create();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x50),(RtWeakPtrBase *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel4::addToRenderQueue(RenderQueue*) */

void __thiscall TutorialLevel4::addToRenderQueue(TutorialLevel4 *this,RenderQueue *param_1)

{
  AnimationMgr *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50))
  ;
  AnimationMgr::AddToRenderQueue(this_00,param_1);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,drawLawnOverlays);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<TutorialLevel4,void(TutorialLevel4::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,0x493e1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel4::setupSodRollout() */

void __thiscall TutorialLevel4::setupSodRollout(TutorialLevel4 *this)

{
  Effect_PopAnim *pEVar1;
  ResourceInfo *pRVar2;
  int in_w4;
  float fVar3;
  string asStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_T();
  *(float *)(this + 0x58) = fVar3;
  *(float *)(this + 0x5c) = fVar3 + 2.0;
  pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,0,1,1,in_w4);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_18,(float)(int)local_28 - 14.0,(float)local_28._4_4_ - 115.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar1,(SexyVector3 *)&local_18,-1);
  std::string::string(asStack_30,"POPANIM_EFFECTS_SODROLL");
  GetPAMByName(asStack_30);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_30);
  nop();
  std::string::string((string *)&local_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(pEVar1,(Vec3 *)&local_18,0);
  std::string::~string((string *)&local_18);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x68),(RtWeakPtrBase *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,4,1,1,in_w4);
  local_20 = local_10;
  local_28 = local_18;
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_18,(float)(int)local_18 - 14.0,
             (float)(int)((ulong)local_18 >> 0x20) - 115.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar1,(SexyVector3 *)&local_18,-1);
  std::string::string(asStack_30,"POPANIM_EFFECTS_SODROLL");
  GetPAMByName(asStack_30);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_30);
  nop();
  std::string::string((string *)&local_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(pEVar1,(Vec3 *)&local_18,0);
  std::string::~string((string *)&local_18);
  nop();
  if (this[0x70] != (TutorialLevel4)0x0) {
    pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,1,1,1,in_w4);
    local_20 = local_10;
    local_28 = local_18;
    EATextSquish::Vec3::Vec3
              ((Vec3 *)&local_18,(float)(int)local_18 - 14.0,
               (float)(int)((ulong)local_18 >> 0x20) - 115.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar1,(SexyVector3 *)&local_18,-1);
    std::string::string(asStack_30,"POPANIM_EFFECTS_SODROLL");
    GetPAMByName(asStack_30);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    std::string::~string(asStack_30);
    nop();
    std::string::string((string *)&local_18,"animation");
    Effect_PopAnim::PlaySingleAnimation(pEVar1,(Vec3 *)&local_18,0);
    std::string::~string((string *)&local_18);
    nop();
    pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,2,1,1,in_w4);
    local_20 = local_10;
    local_28 = local_18;
    EATextSquish::Vec3::Vec3
              ((Vec3 *)&local_18,(float)(int)local_18 - 14.0,
               (float)(int)((ulong)local_18 >> 0x20) - 115.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar1,(SexyVector3 *)&local_18,-1);
    std::string::string(asStack_30,"POPANIM_EFFECTS_SODROLL");
    GetPAMByName(asStack_30);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    std::string::~string(asStack_30);
    nop();
    std::string::string((string *)&local_18,"animation");
    Effect_PopAnim::PlaySingleAnimation(pEVar1,(Vec3 *)&local_18,0);
    std::string::~string((string *)&local_18);
    nop();
    pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,3,1,1,in_w4);
    local_20 = local_10;
    local_28 = local_18;
    EATextSquish::Vec3::Vec3
              ((Vec3 *)&local_18,(float)(int)local_18 - 14.0,
               (float)(int)((ulong)local_18 >> 0x20) - 115.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar1,(SexyVector3 *)&local_18,-1);
    std::string::string(asStack_30,"POPANIM_EFFECTS_SODROLL");
    GetPAMByName(asStack_30);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    std::string::~string(asStack_30);
    nop();
    std::string::string((string *)&local_18,"animation");
    Effect_PopAnim::PlaySingleAnimation(pEVar1,(Vec3 *)&local_18,0);
    std::string::~string((string *)&local_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel4::drawLawnOverlays(Sexy::Graphics*) */

void TutorialLevel4::drawLawnOverlays(Graphics *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  RtObject *this;
  Effect_PopAnim *this_00;
  PopAnimRig *this_01;
  Graphics *in_x1;
  int in_w4;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_4c;
  undefined4 local_48 [2];
  int local_40 [4];
  SexyMatrix3 aSStack_30 [8];
  float local_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x48) < 3) {
    fVar6 = (float)PVZ_EOT();
    if (((*(float *)(param_1 + 0x5c) == fVar6) ||
        (bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x68)), bVar1)) &&
       (param_1[0x70] == (Graphics)0x0)) {
      pIVar5 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                  ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0d460);
      iVar3 = FUN_044c8d58(200);
      iVar4 = FUN_044c8d58(0xe0);
      Sexy::Graphics::DrawImage(in_x1,pIVar5,iVar3,iVar4);
    }
    if (fVar6 != *(float *)(param_1 + 0x5c)) {
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x68));
      if (bVar1) {
        this = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x68));
        this_00 = Sexy::RtObject::Cast<Effect_PopAnim>(this);
        this_01 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_00);
        std::string::string((string *)local_40,"SodRoll");
        cVar2 = PopAnimRig::CalcLayerTransformScreenSpace(this_01,(string *)local_40,aSStack_30);
        std::string::~string((string *)local_40);
        nop();
        if (cVar2 != '\0') {
          BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,0,1,1,in_w4);
          uVar9 = *(undefined4 *)(param_1 + 0x58);
          uVar8 = *(undefined4 *)(param_1 + 0x5c);
          uVar7 = PVZ_T();
          local_4c = 0x10;
          local_48[0] = 5;
          iVar3 = CurveLerp<int>(uVar9,uVar8,uVar7,&local_4c,local_48,1);
          fVar6 = (float)FUN_044c8d6c((float)local_40[0] - 14.0);
          iVar3 = FUN_044c8d58(iVar3);
          iVar4 = FUN_044c8d58(600);
          Sexy::Graphics::SetClipRect(in_x1,0,0,(int)(fVar6 + local_28 + (float)iVar3),iVar4);
        }
      }
      pIVar5 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                  ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0d530);
      iVar3 = FUN_044c8d58(0xb6);
      iVar4 = FUN_044c8d58(0x9d);
      Sexy::Graphics::DrawImage(in_x1,pIVar5,iVar3,iVar4);
      Sexy::Graphics::ClearClipRect(in_x1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel4::onEndLevel() */

void __thiscall TutorialLevel4::onEndLevel(TutorialLevel4 *this)

{
  int iVar1;
  AnimationMgr *this_00;
  ProfileMgr *this_01;
  PlayerInfo *pPVar2;
  WorldDataManager *pWVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var4;
  undefined8 uVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Board::GetBoardResult(*(Board **)(gLawnApp + 0x9f0));
  if (iVar1 == 1) {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    pWVar3 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    std::string::string(asStack_10,"egypt_stargate_start");
    p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)WorldDataManager::FindEventByLevelName(pWVar3,asStack_10);
    std::string::~string(asStack_10);
    nop();
    uVar5 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(p_Var4);
    PlayerInfo::SetWorldMapEventStatus(pPVar2,uVar5,uVar5,3,1);
    pWVar3 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    std::string::string(asStack_10,"tutorial_stargate_exit");
    p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)WorldDataManager::FindEventByLevelName(pWVar3,asStack_10);
    std::string::~string(asStack_10);
    nop();
    uVar5 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(p_Var4);
    PlayerInfo::SetWorldMapEventStatus(pPVar2,uVar5,uVar5,3,1);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::TutorialFTUE,2);
  }
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50))
  ;
  AnimationMgr::Clear(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel4::setupLawnPreview() */

void __thiscall TutorialLevel4::setupLawnPreview(TutorialLevel4 *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  long lVar2;
  ResourceInfo *this_00;
  AnimationController *pAVar3;
  AnimationController *pAVar4;
  AnimationController *pAVar5;
  AnimationController *pAVar6;
  AnimationController *pAVar7;
  AnimationController *pAVar8;
  AnimationController *pAVar9;
  code *pcVar10;
  float fVar11;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  RtMixedPtr aRStack_60 [8];
  float local_58 [2];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  lVar2 = ResilienceTutorialIntro::getBoard();
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar2 + 0x898));
  fVar11 = (float)FUN_044c8bb8(*(undefined4 *)(this_00 + 0x10));
  StandardLevelIntro::GetPanLocations(0,&local_70,&local_6c);
  pAVar3 = (AnimationController *)
           MoveBoard::Create(*(undefined4 *)(pRVar1 + 0x48),local_70,local_6c,0,0,4);
  std::string::string(asStack_50,"Play_UI_Game_Intro_Cam_Pan");
  pAVar4 = (AnimationController *)AnimMgrSendAudioEvent::Create(asStack_50);
  std::string::~string(asStack_50);
  nop();
  StandardLevelIntro::GetPanLocations(3,&local_68,&local_64);
  pAVar5 = (AnimationController *)
           MoveBoard::Create(*(undefined4 *)(pRVar1 + 0x4c),local_68,local_64,0,0,4);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_60);
  std::string::string(asStack_50,"setupSodRollout");
  pAVar6 = (AnimationController *)TimeEvent::Create((RtId *)local_58,asStack_50);
  std::string::~string(asStack_50);
  nop();
  Sexy::RtId::~RtId((RtId *)local_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  std::string::string(asStack_50,"Play_UI_Map_Lawn_Start");
  pAVar7 = (AnimationController *)AnimMgrSendAudioEvent::Create(asStack_50);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"Stop_UI_Map_Lawn_Stop");
  pAVar8 = (AnimationController *)AnimMgrSendAudioEvent::Create(asStack_50);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"PlaceLawnItems");
  pAVar9 = (AnimationController *)IntroBoardDispatch::Create(asStack_50);
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar9,fVar11);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"PlaceStreetZombies");
  pAVar9 = (AnimationController *)IntroBoardDispatch::Create(asStack_50);
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar9,fVar11);
  std::string::~string(asStack_50);
  nop();
  pAVar9 = (AnimationController *)StandardLevelIntro::CreateLevelNameStringAdvice();
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar9,fVar11 + 1.0);
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar3,fVar11 + 2.0,local_58);
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar4,fVar11 + 2.0);
  std::string::string(asStack_50,"EnableGridItems");
  pAVar3 = (AnimationController *)IntroBoardDispatch::Create(asStack_50);
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar3,fVar11 + 2.5);
  std::string::~string(asStack_50);
  nop();
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar5,local_58[0],local_58);
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar7,local_58[0]);
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar8,local_58[0] + 2.0);
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar6,local_58[0],local_58);
  std::string::string(asStack_50,"ShowLawnItems");
  pAVar3 = (AnimationController *)IntroBoardDispatch::Create(asStack_50);
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar3,local_58[0],local_58);
  std::string::~string(asStack_50);
  nop();
  pcVar10 = *(code **)(*(long *)this + 0xa0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLawnPreviewComplete);
  Sexy::Delegate0::Delegate0<TutorialLevel4,void(TutorialLevel4::*)()>(aDStack_38,asStack_50);
  (*pcVar10)(this,this_00,(RtId *)local_58,aDStack_38,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TutorialLevel4::setState(TutorialLevel4::State) */

void __thiscall TutorialLevel4::setState(TutorialLevel4 *this,int param_2)

{
  Board *this_00;
  SeedBankNew *this_01;
  
  if (*(int *)(this + 0x48) != param_2) {
    this_00 = (Board *)ResilienceTutorialIntro::getBoard();
    this_01 = (SeedBankNew *)Board::GetSeedBank(this_00);
    if (*(int *)(this + 0x48) == 1) {
      showUI(this,true);
      SeedBankNew::SetPacketsOnDisplay(this_01,false);
      (**(code **)(*(long *)this_01 + 0x1a0))(this_01);
      startGame(this);
      *(int *)(this + 0x48) = param_2;
    }
    else {
      *(int *)(this + 0x48) = param_2;
    }
    if (param_2 == 1) {
      setupLawnPreview(this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel4::startIntro() */

void __thiscall TutorialLevel4::startIntro(TutorialLevel4 *this)

{
  LawnApp *pLVar1;
  LevelModuleManager *this_00;
  Board *this_01;
  int *piVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x70] != (TutorialLevel4)0x0) {
    this_00 = (LevelModuleManager *)
              FUN_044c8bbc(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    LevelModuleManager::ReduceRefCounts(this_00);
    pLVar1 = gLawnApp;
    std::string::string(asStack_10,"Keys");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
    pLVar1 = gLawnApp;
    std::string::string(asStack_10,"AudioCommon");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
    pLVar1 = gLawnApp;
    std::string::string(asStack_10,"LevelCommon");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
    pLVar1 = gLawnApp;
    std::string::string(asStack_10,"LevelCommon2");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
    pLVar1 = gLawnApp;
    std::string::string(asStack_10,"LevelImage");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  this_01 = (Board *)ResilienceTutorialIntro::getBoard();
  piVar2 = (int *)Board::GetBoardPanLocations(this_01);
  (**(code **)(*(long *)this_01 + 0x1a8))(this_01,-*piVar2,0);
  showUI(this,false);
  setState(this,0);
  ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(0x17);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TutorialLevel4::onUpdate() */

void __thiscall TutorialLevel4::onUpdate(TutorialLevel4 *this)

{
  AnimationMgr *this_00;
  
  if (*(int *)(this + 0x48) == 0) {
    setState(this,1);
  }
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50))
  ;
  AnimationMgr::Update(this_00);
  return;
}


/* TutorialLevel4::onLawnPreviewComplete() */

void __thiscall TutorialLevel4::onLawnPreviewComplete(TutorialLevel4 *this)

{
  setState(this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel4::registerForEvents() */

void __thiscall TutorialLevel4::registerForEvents(TutorialLevel4 *this)

{
  undefined *this_00;
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  IntroModule::registerForEvents();
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoaded);
  Sexy::Delegate0::Delegate0<TutorialLevel4,void(TutorialLevel4::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,startIntro);
  Sexy::Delegate0::Delegate0<TutorialLevel4,void(TutorialLevel4::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnIntroStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onEndLevel);
  Sexy::Delegate0::Delegate0<TutorialLevel4,void(TutorialLevel4::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<TutorialLevel4,void(TutorialLevel4::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::Delegate1<TutorialLevel4,void(TutorialLevel4::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,aCStack_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar1,aDStack_38);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameWon);
  Sexy::Delegate0::Delegate0<TutorialLevel4,void(TutorialLevel4::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::GameWon,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

