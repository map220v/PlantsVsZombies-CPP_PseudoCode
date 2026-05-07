// Class: OakTrainModule


/* OakTrainModule::setState(OakTrainModule::OakTrainState) */

void __thiscall OakTrainModule::setState(OakTrainModule *this,int param_2)

{
  if (*(int *)(this + 0x18) != param_2) {
    *(int *)(this + 0x18) = param_2;
  }
  return;
}


/* OakTrainModule::preventSave() */

undefined8 OakTrainModule::preventSave(void)

{
  return 1;
}


/* OakTrainModule::onReviveCancel() */

void OakTrainModule::onReviveCancel(void)

{
  return;
}


/* OakTrainModule::onMissTarget() */

void __thiscall OakTrainModule::onMissTarget(OakTrainModule *this)

{
  this[0x54] = (OakTrainModule)0x0;
  *(undefined4 *)(this + 0x50) = 0;
  return;
}


/* OakTrainModule::levelStarted() */

void OakTrainModule::levelStarted(void)

{
  return;
}


/* OakTrainModule::CheckWinCondition() */

bool __thiscall OakTrainModule::CheckWinCondition(OakTrainModule *this)

{
  return *(int *)(this + 0x18) == 4;
}


/* OakTrainModule::cancelTouch() */

void OakTrainModule::cancelTouch(void)

{
  return;
}


/* OakTrainModule::onOakArrowAdd() */

void OakTrainModule::onOakArrowAdd(void)

{
  LawnApp::ShowReviveUI(gLawnApp,1);
  return;
}


/* OakTrainModule::initializeModule() */

void __thiscall OakTrainModule::initializeModule(OakTrainModule *this)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x18) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x88) = uVar1;
  *(undefined4 *)(this + 0x8c) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainModule::StaticClassInit() */

void OakTrainModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"OakTrainModule");
    (*pcVar2)(plVar1,asStack_10,FUN_044a25d4,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OakTrainModule::StaticGetClass() */

long * OakTrainModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"OakTrainModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OakTrainModule::SetCanTouch(bool) */

void __thiscall OakTrainModule::SetCanTouch(OakTrainModule *this,bool param_1)

{
  this[0x57] = (OakTrainModule)param_1;
  return;
}


/* OakTrainModule::calcCoinReward(int) */

uint __thiscall OakTrainModule::calcCoinReward(OakTrainModule *this,int param_1)

{
  Sexy::OutputDebugStrF((wchar_t *)"coin_reward: %d \n",(ulong)(uint)(param_1 / 100));
  return param_1 / 100;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainModule::gameplayStarted() */

void __thiscall OakTrainModule::gameplayStarted(OakTrainModule *this)

{
  UIWidget *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIPlantfood");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  std::string::string(asStack_10,"UIPowerupHolder");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  std::string::string(asStack_10,"UIShovel");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  this[0x57] = (OakTrainModule)0x1;
  setState(this,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OakTrainModule::GetZombieTargetType(std::string const&) */

undefined4 __thiscall OakTrainModule::GetZombieTargetType(OakTrainModule *this,string *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = std::operator==(param_1,"zombie_target_arrow_yellow");
  uVar2 = 1;
  if (!bVar1) {
    bVar1 = std::operator==(param_1,"zombie_target_arrow_blue");
    uVar2 = 2;
    if (!bVar1) {
      bVar1 = std::operator==(param_1,"zombie_target_arrow_purple");
      uVar2 = 3;
      if (!bVar1) {
        bVar1 = std::operator==(param_1,"zombie_target_archmage");
        uVar2 = 4;
        if (!bVar1) {
          bVar1 = std::operator==(param_1,"zombie_target_wizard");
          uVar2 = 5;
          if (!bVar1) {
            bVar1 = std::operator==(param_1,"zombie_target_gargantuar");
            uVar2 = 6;
            if (!bVar1) {
              bVar1 = std::operator==(param_1,"zombie_target_bottle");
              uVar2 = 0;
              if (!bVar1) {
                uVar2 = 7;
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainModule::GetArrowWidgetPtr(oak_arrow_type) */

void OakTrainModule::GetArrowWidgetPtr
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,long param_2
               ,int param_3)

{
  bool bVar1;
  int iVar2;
  RtWeakPtrBase *pRVar3;
  AccessoryContent *this;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  uVar5 = 0;
  local_8 = ___stack_chk_guard;
  do {
    uVar6 = *(undefined8 *)(param_2 + 0x60);
    uVar4 = FUN_044a00a4(uVar6,*(undefined8 *)(param_2 + 0x68));
    if (uVar4 <= uVar5) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (param_1);
LAB_044a0a5c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    pRVar3 = (RtWeakPtrBase *)FUN_044a00cc(uVar6,uVar5);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      nop();
      if ((this != (AccessoryContent *)0x0) &&
         (iVar2 = AccessoryContent::GetBindedType(this), iVar2 == param_3)) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)param_1,(RtWeakPtrBase *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        goto LAB_044a0a5c;
      }
    }
    uVar5 = uVar5 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  } while( true );
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x044a0c48 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* OakTrainModule::updateScoreboard() */

void __thiscall OakTrainModule::updateScoreboard(OakTrainModule *this)

{
  RtWeakPtr *this_00;
  undefined1 auVar1 [16];
  bool bVar2;
  int *piVar3;
  long *plVar4;
  wstring *pwVar5;
  float fVar6;
  float fVar7;
  undefined1 extraout_var [12];
  float fVar8;
  wstring awStack_20 [8];
  int local_18 [2];
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x40) != *(int *)(this + 0x44)) {
    local_18[0] = *(int *)(this + 0x40) - *(int *)(this + 0x44);
    if (local_18[0] < 0) {
      fVar6 = (float)PVZ_Dt();
      local_10[0] = -(int)(fVar6 * 8000.0);
      piVar3 = eastl::max_alt<int>(local_10,local_18);
      *(int *)(this + 0x44) = *(int *)(this + 0x44) + *piVar3;
    }
    else {
      fVar6 = (float)PVZ_Dt();
      local_10[0] = (int)(fVar6 * 2000.0);
      piVar3 = eastl::min_alt<int>(local_10,local_18);
      *(int *)(this + 0x44) = *(int *)(this + 0x44) + *piVar3;
    }
  }
  this_00 = (RtWeakPtr *)(this + 0x20);
  FUN_05478178(awStack_20,L"[CANNON_SCORE]",local_10);
  nop();
  Sexy::StrFormat(L"%d",(wstring *)local_18,(ulong)*(uint *)(this + 0x44));
  TodReplaceString(awStack_20,L"{SCORE}",(wstring *)local_18);
  FUN_054766c8(awStack_20,local_10);
  FUN_05476c50(local_10);
  FUN_05476c50((wstring *)local_18);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar2) {
    pwVar5 = (wstring *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Effect_FloatingText::SetText(pwVar5);
  }
  fVar6 = (float)PVZ_T();
  fVar8 = *(float *)(this + 0x48);
  fVar7 = 1.0;
  if (fVar6 - fVar8 < 0.3) {
    PVZ_T();
    local_10[0] = 0x3f800000;
    auVar1._4_12_ = extraout_var;
    auVar1._0_4_ = fVar6 - fVar8;
    fVar7 = CurveEvaluate<float>(auVar1,0x40555555,this + 0x4c,local_10,3);
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar2) {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar4 + 0x80))(fVar7 * 1.5);
  }
  FUN_05476c50(awStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainModule::onOakArrowTouch(int) */

void __thiscall OakTrainModule::onOakArrowTouch(OakTrainModule *this,int param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  RtWeakPtrBase *pRVar4;
  AccessoryContent *this_00;
  PlantOakshooter *this_01;
  ulong uVar5;
  undefined8 uVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x58] != (OakTrainModule)0x0) && (*(int *)(this + 0x78) != param_1)) {
    *(int *)(this + 0x78) = param_1;
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x80));
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x80));
      nop();
      PlantOakshooter::ChangeArrowType(this_01,*(int *)(this + 0x78));
    }
    uVar5 = 0;
    while( true ) {
      uVar6 = *(undefined8 *)(this + 0x60);
      uVar3 = FUN_044a00a4(uVar6,*(undefined8 *)(this + 0x68));
      if (uVar3 <= uVar5) break;
      pRVar4 = (RtWeakPtrBase *)FUN_044a00cc(uVar6,uVar5);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,pRVar4);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        nop();
        if (this_00 != (AccessoryContent *)0x0) {
          iVar2 = AccessoryContent::GetBindedType(this_00);
          if (iVar2 == *(int *)(this + 0x78)) {
            OakArrowUI::SetArrowSelect((OakArrowUI *)this_00,true);
          }
          else {
            OakArrowUI::SetArrowSelect((OakArrowUI *)this_00,false);
          }
        }
      }
      uVar5 = uVar5 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainModule::ShowReloadTip() */

void __thiscall OakTrainModule::ShowReloadTip(OakTrainModule *this)

{
  bool bVar1;
  Effect_FloatingText *this_00;
  undefined1 auStack_20 [8];
  FastCurve aFStack_18 [8];
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x80));
  if (bVar1) {
    this_00 = Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
    Sexy::FastCurve::SetOutRange
              (aFStack_18,(float)*(int *)(gLawnApp + 0xd4) * 0.5,
               (float)*(int *)(gLawnApp + 0xd8) * 0.65);
    StandaloneEffect::SetScreenSpaceOrigin
              ((StandaloneEffect *)this_00,(SexyVector2 *)aFStack_18,900000);
    FUN_05478178(aDStack_10,L"[ARROW_RELOAD_TIP]",auStack_20);
    Effect_FloatingText::SetText((wstring *)this_00);
    FUN_05476c50(aDStack_10);
    nop();
    Effect_FloatingText::SetStyle(this_00,3);
    (**(code **)(*(long *)this_00 + 0x78))(this_00,&DAT_06b0c300);
    Effect_FloatingText::SetDuration(this_00,1.5);
    PresentDisplayRect::SetPAMScale((PresentDisplayRect *)this_00,1.5);
    (**(code **)(*(long *)this_00 + 0x80))(0x3fa00000,this_00);
    DVec2::DVec2(aDStack_10,2.5,2.5);
    Effect_FloatingText::SetFinalScale(this_00,aDStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainModule::onOakHeadShoot(Sexy::SexyVector3 const&) */

void __thiscall OakTrainModule::onOakHeadShoot(OakTrainModule *this,SexyVector3 *param_1)

{
  uint uVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  Effect_FloatingText *this_00;
  code *pcVar3;
  float fVar4;
  undefined8 local_38;
  float local_30;
  Vec3 aVStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar1 = *(uint *)(pRVar2 + 0x54);
  local_30 = *(float *)(param_1 + 8);
  *(uint *)(this + 0x40) = *(int *)(this + 0x40) + uVar1;
  local_38 = *(undefined8 *)param_1;
  local_30 = local_30 + 30.0;
  this_00 = Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_38,-1);
  Sexy::StrFormat("%d",asStack_18,(ulong)uVar1);
  Effect_FloatingText::SetText(this_00,asStack_18);
  std::string::~string(asStack_18);
  Effect_FloatingText::SetStyle(this_00,4);
  pcVar3 = *(code **)(*(long *)this_00 + 0x78);
  Sexy::Color::Color((Color *)asStack_18,1);
  (*pcVar3)(this_00,asStack_18);
  fVar4 = (float)Sexy::Rand(0.4);
  Effect_FloatingText::SetDuration(this_00,fVar4 + 1.0);
  fVar4 = (float)Sexy::Rand(4.0);
  EATextSquish::Vec3::Vec3(aVStack_28,fVar4 - 2.0,0.0,10.0);
  DVec3::DVec3((DVec3 *)asStack_18);
  Effect_FloatingText::SetMotion(this_00,(SexyVector3 *)aVStack_28,(SexyVector3 *)asStack_18);
  PresentDisplayRect::SetPAMScale((PresentDisplayRect *)this_00,0.8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainModule::onReviveOK() */

void OakTrainModule::onReviveOK(void)

{
  undefined *puVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MessageRouter::Post<int,int,ZombieTargetType,int>
            ((MessageRouter *)gMessageRouter,Message::OakArrowHitted,1,0x14);
  puVar1 = gMessageRouter;
  std::string::string(asStack_10,"OakShooter");
  MessageRouter::Post<std::string_const&,int,int,std::string,int,int>
            ((MessageRouter *)puVar1,Message::MissionGemUse,asStack_10,0x14,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainModule::handleTouch(Sexy::Touch const&) */

void __thiscall OakTrainModule::handleTouch(OakTrainModule *this,Touch *param_1)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  RtWeakPtrBase *pRVar8;
  AccessoryContent *this_00;
  GridItemCardGameZombieAction *this_01;
  ulong uVar9;
  undefined8 uVar10;
  OakTrainModule OVar11;
  float fVar12;
  float fVar13;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar6 = *(int *)(param_1 + 0x10);
    fVar12 = (float)FUN_044a047c((float)iVar6);
    fVar13 = (float)FUN_044a047c((float)*(int *)(param_1 + 0x14));
    OVar11 = this[0x57];
    if (OVar11 != (OakTrainModule)0x0) {
      iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar4 = FUN_044a0468(iVar4 + 200);
      if (iVar4 <= iVar6) {
        iVar6 = *(int *)(param_1 + 0x10);
        iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
        iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
        iVar4 = FUN_044a0468(iVar4 * iVar5 + 200);
        if (iVar6 <= iVar4) {
          iVar6 = *(int *)(param_1 + 0x14);
          iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
          iVar5 = BoardConstants::NUMBER_OF_ROWS();
          iVar4 = FUN_044a0468(iVar4 * iVar5 + 0xa0);
          if (iVar6 <= iVar4) {
            uVar9 = 0;
            while( true ) {
              uVar10 = *(undefined8 *)(this + 0x60);
              uVar7 = FUN_044a00a4(uVar10,*(undefined8 *)(this + 0x68));
              if (uVar7 <= uVar9) break;
              pRVar8 = (RtWeakPtrBase *)FUN_044a00cc(uVar10,uVar9);
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,pRVar8);
              bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
              if (bVar2) {
                bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x80));
                if (bVar2) {
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
                  nop();
                  if ((this_00 != (AccessoryContent *)0x0) &&
                     (iVar6 = AccessoryContent::GetBindedType(this_00),
                     iVar6 == *(int *)(this + 0x78))) {
                    cVar3 = OakArrowUI::IsInCoolDown((OakArrowUI *)this_00);
                    if (cVar3 == '\0') {
                      iVar6 = OakArrowUI::GetArrowCount((OakArrowUI *)this_00);
                      if (iVar6 < 1) goto LAB_044a2004;
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x80));
                      nop();
                      cVar3 = GridItemCardGameZombieAction::IsDone(this_01);
                      puVar1 = gMessageRouter;
                      if (cVar3 != '\0') {
                        Sexy::Point::Point(aPStack_10,(int)fVar12,(int)fVar13);
                        MessageRouter::Post<Sexy::Point_const&,Sexy::Point>
                                  ((MessageRouter *)puVar1,Message::OakShootTouch,aPStack_10);
                        OakArrowUI::SetArrowCount((OakArrowUI *)this_00,iVar6 + -1);
                      }
                    }
                    else {
                      ShowReloadTip(this);
                    }
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
                    OVar11 = (OakTrainModule)0x1;
                    break;
                  }
                }
              }
LAB_044a2004:
              uVar9 = uVar9 + 1;
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
            }
            goto LAB_044a1f60;
          }
        }
      }
    }
  }
  OVar11 = (OakTrainModule)0x0;
LAB_044a1f60:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(OVar11);
}


/* OakTrainModule::OakTrainModule() */

void __thiscall OakTrainModule::OakTrainModule(OakTrainModule *this)

{
  undefined4 uVar1;
  
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06852040;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x80));
  TimeLine::TimeLine((TimeLine *)(this + 0x90));
  PlantWarsStarRewardData::PlantWarsStarRewardData((PlantWarsStarRewardData *)(this + 0xf0));
  TimeLineTrack<Sexy::SexyVector3>::TimeLineTrack
            ((TimeLineTrack<Sexy::SexyVector3> *)(this + 0x110));
  this[0x55] = (OakTrainModule)0x0;
  this[0x54] = (OakTrainModule)0x0;
  this[0x56] = (OakTrainModule)0x1;
  this[0x58] = (OakTrainModule)0x1;
  this[0x57] = (OakTrainModule)0x0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x48) = uVar1;
  return;
}


/* OakTrainModule::StaticNew() */

OakTrainModule * OakTrainModule::StaticNew(void)

{
  OakTrainModule *this;
  
  this = ::operator_new(0x138);
  OakTrainModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainModule::PlayerLost() */

void OakTrainModule::PlayerLost(void)

{
  bool bVar1;
  long in_x0;
  StandaloneEffect *this;
  float fVar2;
  float fVar3;
  FastCurve aFStack_20 [8];
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  fVar3 = *(float *)(in_x0 + 0x88);
  local_18 = (float)TimeLineTrack<Sexy::SexyVector3>::GetValueAt
                              ((TimeLineTrack<Sexy::SexyVector3> *)(in_x0 + 0x110),fVar2 - fVar3);
  local_14 = fVar3;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x20));
  if (bVar1) {
    this = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x20))
    ;
    Sexy::FastCurve::SetOutRange(aFStack_20,local_18,local_14);
    StandaloneEffect::SetScreenSpaceOrigin(this,(SexyVector2 *)aFStack_20,0xf424a);
  }
  setState();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainModule::spewSilverCoin(float) */

void OakTrainModule::spewSilverCoin(float param_1)

{
  long in_x0;
  Collectable *this;
  SexyVector3 *pSVar1;
  float fVar2;
  float in_s1;
  string asStack_30 [8];
  undefined4 local_28 [4];
  undefined4 local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28[0] = TimeLineTrack<Sexy::SexyVector3>::GetValueAt
                          ((TimeLineTrack<Sexy::SexyVector3> *)(in_x0 + 0x110),param_1);
  fVar2 = (float)FUN_044a047c(0x3f800000);
  local_18 = Sexy::SexyVector3::operator*((SexyVector3 *)local_28,fVar2);
  local_14 = in_s1 - 30.0;
  pSVar1 = *(SexyVector3 **)(gLawnApp + 0x9f0);
  std::string::string(asStack_30,"coin_silver");
  this = (Collectable *)Board::AddCoin(pSVar1,(string *)&local_18);
  std::string::~string(asStack_30);
  nop();
  Collectable::SetNeverExpire(this,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainModule::spewGoldCoin(float) */

void OakTrainModule::spewGoldCoin(float param_1)

{
  long in_x0;
  Collectable *this;
  SexyVector3 *pSVar1;
  float fVar2;
  float in_s1;
  string asStack_30 [8];
  undefined4 local_28 [4];
  undefined4 local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28[0] = TimeLineTrack<Sexy::SexyVector3>::GetValueAt
                          ((TimeLineTrack<Sexy::SexyVector3> *)(in_x0 + 0x110),param_1);
  fVar2 = (float)FUN_044a047c(0x3f800000);
  local_18 = Sexy::SexyVector3::operator*((SexyVector3 *)local_28,fVar2);
  local_14 = in_s1 - 30.0;
  pSVar1 = *(SexyVector3 **)(gLawnApp + 0x9f0);
  std::string::string(asStack_30,"coin_gold");
  this = (Collectable *)Board::AddCoin(pSVar1,(string *)&local_18);
  std::string::~string(asStack_30);
  nop();
  Collectable::SetNeverExpire(this,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OakTrainModule::~OakTrainModule() */

void __thiscall OakTrainModule::~OakTrainModule(OakTrainModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06852040;
  TimeLineTrack<Sexy::SexyVector3>::~TimeLineTrack
            ((TimeLineTrack<Sexy::SexyVector3> *)(this + 0x110));
  TimeLineTrack<int>::~TimeLineTrack((TimeLineTrack<int> *)(this + 0xf0));
  TimeLine::~TimeLine((TimeLine *)(this + 0x90));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x80));
  std::vector<Sexy::RtWeakPtr<UIWidget>,std::allocator<Sexy::RtWeakPtr<UIWidget>>>::~vector
            ((vector<Sexy::RtWeakPtr<UIWidget>,std::allocator<Sexy::RtWeakPtr<UIWidget>>> *)
             (this + 0x60));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x28));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* OakTrainModule::~OakTrainModule() */

void __thiscall OakTrainModule::~OakTrainModule(OakTrainModule *this)

{
  ~OakTrainModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall OakTrainModule::AddResourceRequirements(OakTrainModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  std::string::string(asStack_10,"Oak_Train");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainModule::CreateArrowUI() */

void __thiscall OakTrainModule::CreateArrowUI(OakTrainModule *this)

{
  vector<Sexy::RtWeakPtr<UIWidget>,std::allocator<Sexy::RtWeakPtr<UIWidget>>> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  undefined8 uVar6;
  OakArrowUI *this_01;
  int *piVar7;
  LotteryResultProgressBar *pLVar8;
  OakArrowUI *this_02;
  OakArrowUI *this_03;
  UIWidget *this_04;
  float *pfVar9;
  float fVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::RtWeakPtr<UIWidget>,std::allocator<Sexy::RtWeakPtr<UIWidget>>> *)
            (this + 0x60);
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  std::vector<Sexy::RtWeakPtr<UIWidget>,std::allocator<Sexy::RtWeakPtr<UIWidget>>>::clear(this_00);
  iVar1 = FUN_044a048c(0x118);
  iVar2 = FUN_044a048c(0x20e);
  fVar10 = (float)iVar2;
  Sexy::RtName::RtName((RtName *)&local_18,L"UIOakArrowHolder");
  uVar6 = UIWidget::CreateWidget((RtName *)&local_18,1);
  Sexy::RtName::~RtName((RtName *)&local_18);
  iVar3 = FUN_044a048c(8);
  iVar4 = FUN_044a048c(0x2d);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)(iVar1 - iVar3),(float)(iVar4 + iVar2))
  ;
  UIWidget::SetPositionOffset(local_18,local_14,uVar6);
  Sexy::RtName::RtName((RtName *)&local_18,L"UIOakArrow");
  UIWidget::CreateWidget((RtName *)&local_18,1);
  Sexy::RtName::~RtName((RtName *)&local_18);
  nop();
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)iVar1,fVar10);
  UIWidget::SetPositionOffset(local_18,local_14,this_01);
  OakArrowUI::SetArrowType(this_01,0);
  OakArrowUI::SetCanCoolDown(this_01,true);
  OakArrowUI::SetArrowSelect(this_01,true);
  piVar7 = (int *)FUN_044a0090(*(undefined8 *)(pRVar5 + 0x70),0);
  OakArrowUI::SetArrowCount(this_01,*piVar7);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
  std::vector<Sexy::RtWeakPtr<UIWidget>,std::allocator<Sexy::RtWeakPtr<UIWidget>>>::push_back
            (this_00,(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  pLVar8 = (LotteryResultProgressBar *)
           CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0c2a8);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  Sexy::RtName::RtName((RtName *)&local_18,L"UIOakArrow");
  UIWidget::CreateWidget((RtName *)&local_18,1);
  Sexy::RtName::~RtName((RtName *)&local_18);
  nop();
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)(iVar1 + iVar3),fVar10);
  UIWidget::SetPositionOffset(local_18,local_14,this_02);
  OakArrowUI::SetArrowType(this_02,1);
  piVar7 = (int *)FUN_044a0090(*(undefined8 *)(pRVar5 + 0x70),1);
  OakArrowUI::SetArrowCount(this_02,*piVar7);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
  std::vector<Sexy::RtWeakPtr<UIWidget>,std::allocator<Sexy::RtWeakPtr<UIWidget>>>::push_back
            (this_00,(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  pLVar8 = (LotteryResultProgressBar *)
           CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0c2a8);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar2 = iVar1 + iVar3 + iVar2;
  Sexy::RtName::RtName((RtName *)&local_18,L"UIOakArrow");
  UIWidget::CreateWidget((RtName *)&local_18,1);
  Sexy::RtName::~RtName((RtName *)&local_18);
  nop();
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)iVar2,fVar10);
  UIWidget::SetPositionOffset(local_18,local_14,this_03);
  OakArrowUI::SetArrowType(this_03,2);
  piVar7 = (int *)FUN_044a0090(*(undefined8 *)(pRVar5 + 0x70),2);
  OakArrowUI::SetArrowCount(this_03,*piVar7);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
  std::vector<Sexy::RtWeakPtr<UIWidget>,std::allocator<Sexy::RtWeakPtr<UIWidget>>>::push_back
            (this_00,(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  pLVar8 = (LotteryResultProgressBar *)
           CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0c2a8);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  Sexy::RtName::RtName((RtName *)&local_18,L"UIOakArrowAdd");
  this_04 = (UIWidget *)UIWidget::CreateWidget((RtName *)&local_18,1);
  Sexy::RtName::~RtName((RtName *)&local_18);
  pfVar9 = (float *)UIWidget::GetPositionOffset(this_04);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_18,(float)(iVar2 + iVar1) + *pfVar9,fVar10 + pfVar9[1]);
  UIWidget::SetPositionOffset(local_18,local_14,this_04);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainModule::loadComplete() */

void __thiscall OakTrainModule::loadComplete(OakTrainModule *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  string *psVar1;
  long lVar2;
  PlantOakshooter *this_01;
  PlantOakshooter *this_02;
  ResilienceTutorialIntroProperties *pRVar3;
  StandaloneEffect *this_03;
  long *plVar4;
  Effect_FloatingText *pEVar5;
  undefined8 uVar6;
  Board *pBVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  FastCurve aFStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_10,"oakshooter");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
  std::string::~string(asStack_10);
  nop();
  pBVar7 = *(Board **)(gLawnApp + 0x9f0);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Board::LoadResourceGroupForGameplay(pBVar7,(string *)(lVar2 + 0x10));
  pBVar7 = *(Board **)(gLawnApp + 0x9f0);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Board::LoadResourceGroupsForGameplay(pBVar7,(vector *)(lVar2 + 0x80));
  uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_20);
  lVar2 = Board::AddPlant((Board *)0x0,uVar6,0,2,asStack_10,0,0,0xffffffff,0,1,1,0,0,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  if (lVar2 != 0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x80),(RtWeakPtrBase *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    nop();
    PlantOakshooter::RegisterOakTrainModule(this_01);
    nop();
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    PlantOakshooter::SetShootTime(this_02,*(float *)(pRVar3 + 0x68));
    fVar8 = (float)PVZ_EOT();
    Sexy::FastCurve::SetOutRange((FastCurve *)(lVar2 + 0xbc),fVar8,fVar8);
    Sexy::FastCurve::SetOutRange((FastCurve *)(lVar2 + 0xb4),fVar8,fVar8);
    FUN_044a0154(lVar2 + 0x54);
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    *(float *)(lVar2 + 0xd8) = (float)*(int *)(pRVar3 + 0x40);
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    *(float *)(lVar2 + 0xdc) = (float)*(int *)(pRVar3 + 0x40);
  }
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x20);
  Sexy::FastCurve::SetOutRange
            (aFStack_18,(float)*(int *)(gLawnApp + 0xd4) * DAT_06b0c2a0,
             (float)*(int *)(gLawnApp + 0xd8) * DAT_06b0c2a4);
  Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  this_03 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetScreenSpaceOrigin(this_03,(SexyVector2 *)aFStack_18,900000);
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  (**(code **)(*plVar4 + 0x78))(plVar4,&DAT_06b0c348);
  pEVar5 = (Effect_FloatingText *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_FloatingText::SetStyle(pEVar5,3);
  CreateArrowUI(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainModule::onZombieDied(Zombie*, DamageInfo const*) */

void OakTrainModule::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
  if (cVar1 != '\0') {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
               (param_1 + 0x28),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainModule::updateOutro() */

void OakTrainModule::updateOutro(void)

{
  RtWeakPtr *this;
  bool bVar1;
  uint uVar2;
  long in_x0;
  Effect_FloatingText *this_00;
  long *plVar3;
  StandaloneEffect *pSVar4;
  float fVar5;
  float in_s1;
  float in_s2;
  string asStack_20 [8];
  float local_18;
  float local_14;
  float local_10;
  long local_8;
  
  this = (RtWeakPtr *)(in_x0 + 0x20);
  local_8 = ___stack_chk_guard;
  fVar5 = (float)PVZ_T();
  fVar5 = fVar5 - *(float *)(in_x0 + 0x88);
  local_18 = (float)TimeLineTrack<Sexy::SexyVector3>::GetValueAt
                              ((TimeLineTrack<Sexy::SexyVector3> *)(in_x0 + 0x110),fVar5);
  local_14 = in_s1;
  local_10 = in_s2;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (bVar1) {
    pSVar4 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    Sexy::FastCurve::SetOutRange((FastCurve *)asStack_20,local_18,local_14);
    StandaloneEffect::SetScreenSpaceOrigin(pSVar4,(SexyVector2 *)asStack_20,900000);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    (**(code **)(*plVar3 + 0x80))(local_10 * 1.5);
  }
  if (*(char *)(in_x0 + 0x55) == '\0') {
    uVar2 = TimeLineTrack<int>::GetValueAt((TimeLineTrack<int> *)(in_x0 + 0xf0),fVar5);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if (bVar1) {
      this_00 = (Effect_FloatingText *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      Sexy::StrFormat("%d",asStack_20,(ulong)uVar2);
      Effect_FloatingText::SetText(this_00,asStack_20);
      std::string::~string(asStack_20);
      if (uVar2 == 0) {
        pSVar4 = (StandaloneEffect *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        StandaloneEffect::SetVisibility(pSVar4,false);
      }
      fVar5 = (float)PVZ_Dt();
      TimeLine::Update((TimeLine *)(in_x0 + 0x90),fVar5);
    }
  }
  fVar5 = (float)PVZ_T();
  if (*(float *)(in_x0 + 0x8c) < fVar5) {
    if (*(char *)(in_x0 + 0x55) == '\0') {
      setState();
    }
    else {
      PlayerLost();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainModule::registerForEvents() */

void __thiscall OakTrainModule::registerForEvents(OakTrainModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  Board *pBVar3;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  CBMemberTranslatorX aCStack_c8 [24];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
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
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,loadComplete);
  Sexy::Delegate0::Delegate0<OakTrainModule,void(OakTrainModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,levelStarted);
  Sexy::Delegate0::Delegate0<OakTrainModule,void(OakTrainModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnIntroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<OakTrainModule,void(OakTrainModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<OakTrainModule,void(OakTrainModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CheckWinCondition);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<OakTrainModule,bool(OakTrainModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterWinCondition(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,preventSave);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<OakTrainModule,bool(OakTrainModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterCanPreventSave(pLVar2,aDStack_38);
  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<OakTrainModule,bool(OakTrainModule::*)(Sexy::Touch_const&)>
            (aDStack_68,(CBMemberTranslatorX *)&local_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_b0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<OakTrainModule,void(OakTrainModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  Board::RegisterTouchGameplayObject
            (pBVar3,aDStack_68,4,
             (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_b0,aDStack_38)
  ;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_f0 = local_b0;
  uStack_e8 = uStack_a8;
  local_e0 = local_a0;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<OakTrainModule,void(OakTrainModule::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMissTarget);
  Sexy::Delegate0::Delegate0<OakTrainModule,void(OakTrainModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::MissTarget,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onOakArrowTouch);
  local_100 = local_88;
  local_110 = local_98;
  uStack_108 = uStack_90;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<OakTrainModule,void(OakTrainModule::*)(int)>>
            ((MessageRouter *)puVar1,Message::OakArrowTouch,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onOakHeadShoot);
  local_130 = local_80;
  uStack_128 = uStack_78;
  local_120 = local_70;
  MessageRouter::
  Subscribe<Sexy::SexyVector3_const&,Sexy::CBMemberTranslatorX<OakTrainModule,void(OakTrainModule::*)(Sexy::SexyVector3_const&)>>
            ((MessageRouter *)puVar1,Message::OakHeadShoot,&local_130);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onOakArrowAdd);
  Sexy::Delegate0::Delegate0<OakTrainModule,void(OakTrainModule::*)()>(aDStack_38,aCStack_c8);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::OakArrowAdd,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReviveOK);
  Sexy::Delegate0::Delegate0<OakTrainModule,void(OakTrainModule::*)()>(aDStack_38,aCStack_c8);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ReviveSucceed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReviveCancel);
  Sexy::Delegate0::Delegate0<OakTrainModule,void(OakTrainModule::*)()>(aDStack_38,aCStack_c8);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ReviveClose,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainModule::startOutro() */

void __thiscall OakTrainModule::startOutro(OakTrainModule *this)

{
  OakTrainModule *pOVar1;
  TimeLineTrack<int> *this_00;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  string *psVar6;
  long extraout_x0;
  long extraout_x0_00;
  code *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  TimeLine *pTVar12;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  Vec3 aVStack_90 [8];
  undefined4 local_88;
  string asStack_80 [24];
  undefined4 local_68 [12];
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  pOVar1 = this + 0x110;
  local_8 = ___stack_chk_guard;
  this_00 = (TimeLineTrack<int> *)(this + 0xf0);
  setState(this,2);
  uVar10 = PVZ_T();
  *(undefined4 *)(this + 0x88) = uVar10;
  fVar11 = (float)PVZ_T();
  *(float *)(this + 0x8c) = fVar11 + 8.0;
  TimeLineTrack<int>::Initialize(this_00,*(int *)(this + 0x40));
  TimeLineTrack<int>::AddKeyFrame((TimeLineTrack<int> *)0x40400000,this_00,this + 0x40,2);
  local_68[0] = 0;
  TimeLineTrack<int>::AddKeyFrame
            ((TimeLineTrack<int> *)0x40b00000,this_00,(RtWeakPtr<Sexy::ResourceInfo> *)local_68,1);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_a0,(float)*(int *)(gLawnApp + 0xd4) * DAT_06b0c2a0,
             (float)*(int *)(gLawnApp + 0xd8) * DAT_06b0c2a4,1.0);
  TimeLineTrack<Sexy::SexyVector3>::Initialize(local_a0,local_9c,local_98,pOVar1);
  TimeLineTrack<Sexy::SexyVector3>::AddKeyFrame
            ((TimeLineTrack<Sexy::SexyVector3> *)0x3fc00000,pOVar1,(Vec3 *)&local_a0,4);
  EATextSquish::Vec3::Vec3
            (aVStack_90,(float)*(int *)(gLawnApp + 0xd4) * DAT_06b0c310,
             (float)*(int *)(gLawnApp + 0xd8) * DAT_06b0c314,2.0);
  TimeLineTrack<Sexy::SexyVector3>::AddKeyFrame
            ((TimeLineTrack<Sexy::SexyVector3> *)0x40400000,pOVar1,aVStack_90,1);
  TimeLineTrack<Sexy::SexyVector3>::AddKeyFrame
            ((TimeLineTrack<Sexy::SexyVector3> *)0x40b00000,pOVar1,aVStack_90,4);
  local_88 = 0;
  TimeLineTrack<Sexy::SexyVector3>::AddKeyFrame
            ((TimeLineTrack<Sexy::SexyVector3> *)0x40c00000,pOVar1,aVStack_90,4);
  iVar5 = calcCoinReward(this,*(int *)(this + 0x40));
  psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
  std::string::string(asStack_80,"coin_gold");
  ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar6);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
  nop();
  iVar2 = *(int *)(extraout_x0 + 0x94);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
  std::string::~string(asStack_80);
  nop();
  iVar9 = 0;
  if (iVar2 != 0) {
    iVar9 = iVar5 / iVar2;
  }
  iVar9 = iVar9 / 2;
  psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
  std::string::string(asStack_80,"coin_silver");
  ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar6);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
  nop();
  iVar3 = *(int *)(extraout_x0_00 + 0x94);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
  std::string::~string(asStack_80);
  nop();
  iVar8 = 0;
  if (iVar3 != 0) {
    iVar8 = (iVar5 - iVar9 * iVar2) / iVar3;
  }
  iVar2 = iVar9 + iVar8;
  if ((0 < iVar8) || (0 < iVar9)) {
    pTVar12._0_4_ = (TimeLine *)0x40400000;
    do {
      ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
                ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)local_68);
      ProbabilitySet<bool>::AddItem((ProbabilitySet<bool> *)local_68,false,iVar8);
      ProbabilitySet<bool>::AddItem((ProbabilitySet<bool> *)local_68,true,iVar9);
      cVar4 = ProbabilitySet<bool>::PickItem((ProbabilitySet<bool> *)local_68);
      if (cVar4 == '\0') {
        pcVar7 = spewSilverCoin;
        iVar8 = iVar8 + -1;
      }
      else {
        pcVar7 = spewGoldCoin;
        iVar9 = iVar9 + -1;
      }
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,pcVar7);
      Sexy::Delegate1<float>::Delegate1<OakTrainModule,void(OakTrainModule::*)(float)>
                (aDStack_38,asStack_80);
      TimeLine::AddEvent(pTVar12._0_4_,this + 0x90,aDStack_38);
      pTVar12._0_4_ = (TimeLine *)((float)pTVar12._0_4_ + 2.5 / (float)iVar2);
      ProbabilitySet<bool>::~ProbabilitySet((ProbabilitySet<bool> *)local_68);
    } while ((0 < iVar8) || (0 < iVar9));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x044a42e4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* OakTrainModule::updateGameplay() */

void OakTrainModule::updateGameplay(void)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  OakTrainModule *in_x0;
  long lVar7;
  RtWeakPtr *this;
  ResourceInfo *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  ResilienceTutorialIntroProperties *pRVar8;
  undefined8 *puVar9;
  Effect_FloatingText *pEVar10;
  char *pcVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  undefined8 uVar15;
  ulong uVar16;
  code *pcVar17;
  float in_s0;
  float fVar18;
  undefined4 uVar19;
  undefined1 extraout_var [12];
  undefined1 extraout_var_00 [12];
  undefined1 auVar20 [12];
  undefined1 extraout_var_01 [12];
  undefined1 extraout_var_02 [12];
  FastCurve aFStack_40 [8];
  undefined8 local_38;
  float local_30;
  Vec3 aVStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  uVar15 = *(undefined8 *)(in_x0 + 0x28);
  local_8 = ___stack_chk_guard;
  lVar7 = FUN_044a00d4(uVar15,*(undefined8 *)(in_x0 + 0x30));
  if (lVar7 != 0) {
    uVar16 = 0;
    iVar6 = 0;
    auVar20 = extraout_var;
    if (lVar7 != 0) {
      do {
        this = (RtWeakPtr *)FUN_044a00e0(uVar15,uVar16);
        this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
        this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)this_00);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        uVar5 = GetZombieTargetType(in_x0,(string *)(lVar7 + 8));
        if ((uVar5 == 0) || (uVar5 == 2)) {
LAB_044a438c:
          pRVar8 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)in_x0);
          uVar1 = *(uint *)(pRVar8 + 0x44);
          in_x0[0x54] = (OakTrainModule)0x1;
          *(int *)(in_x0 + 0x50) = *(int *)(in_x0 + 0x50) + 1;
          iVar6 = iVar6 + uVar1;
          puVar9 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)this_00);
          local_38 = *puVar9;
          local_30 = *(float *)(puVar9 + 1) + 100.0;
          pEVar10 = Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
          StandaloneEffect::SetBoardSpaceOrigin
                    ((StandaloneEffect *)pEVar10,(SexyVector3 *)&local_38,-1);
          Sexy::StrFormat("%d",asStack_18,(ulong)uVar1);
          Effect_FloatingText::SetText(pEVar10,asStack_18);
          std::string::~string(asStack_18);
          Effect_FloatingText::SetStyle(pEVar10,4);
          pcVar17 = *(code **)(*(long *)pEVar10 + 0x78);
          Sexy::Color::Color((Color *)asStack_18,1);
          (*pcVar17)(pEVar10,asStack_18);
          fVar18 = (float)Sexy::Rand(0.4);
          Effect_FloatingText::SetDuration(pEVar10,fVar18 + 1.0);
          fVar18 = (float)Sexy::Rand(4.0);
          in_s0 = fVar18 - 2.0;
          EATextSquish::Vec3::Vec3(aVStack_28,in_s0,0.0,10.0);
          DVec3::DVec3((DVec3 *)asStack_18);
          Effect_FloatingText::SetMotion
                    (pEVar10,(SexyVector3 *)aVStack_28,(SexyVector3 *)asStack_18);
          PresentDisplayRect::SetPAMScale((PresentDisplayRect *)pEVar10,0.8);
          puVar3 = gMessageRouter;
          if (uVar5 == 0) {
            pRVar8 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)in_x0);
            MessageRouter::Post<int,int,ZombieTargetType,int>
                      ((MessageRouter *)puVar3,Message::OakArrowHitted,0,
                       *(undefined4 *)(pRVar8 + 0x58));
          }
          else if (uVar5 == 2) {
            pRVar8 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)in_x0);
            MessageRouter::Post<int,int,ZombieTargetType,int>
                      ((MessageRouter *)puVar3,Message::OakArrowHitted,2,
                       *(undefined4 *)(pRVar8 + 0x5c));
          }
          else {
            if (uVar5 == 1) {
              pRVar8 = LevelModule::getProps<ResilienceTutorialIntroProperties>
                                 ((LevelModule *)in_x0);
              uVar19 = *(undefined4 *)(pRVar8 + 0x60);
            }
            else {
              if (uVar5 != 3) goto LAB_044a44d4;
              pRVar8 = LevelModule::getProps<ResilienceTutorialIntroProperties>
                                 ((LevelModule *)in_x0);
              uVar19 = *(undefined4 *)(pRVar8 + 100);
            }
            MessageRouter::Post<int,int,ZombieTargetType,int>
                      ((MessageRouter *)puVar3,Message::OakArrowHitted,uVar5,uVar19);
          }
LAB_044a44d4:
          pcVar11 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
          AudioMgr::SendEvent(pcVar11,"Play_UI_Game_Mower_Appear_Single");
          uVar15 = *(undefined8 *)(in_x0 + 0x28);
          uVar12 = FUN_044a00d4(uVar15,*(undefined8 *)(in_x0 + 0x30));
          auVar20 = extraout_var_01;
        }
        else {
          if ((uVar5 & 0xfffffffd) == 1) goto LAB_044a438c;
          if (uVar5 == 7) goto LAB_044a438c;
          if (uVar5 - 4 < 3) {
            if (uVar5 == 6) {
              pRVar8 = LevelModule::getProps<ResilienceTutorialIntroProperties>
                                 ((LevelModule *)in_x0);
              uVar5 = *(uint *)(pRVar8 + 0x50);
            }
            else if (uVar5 == 4) {
              pRVar8 = LevelModule::getProps<ResilienceTutorialIntroProperties>
                                 ((LevelModule *)in_x0);
              uVar5 = *(uint *)(pRVar8 + 0x4c);
            }
            else {
              pRVar8 = LevelModule::getProps<ResilienceTutorialIntroProperties>
                                 ((LevelModule *)in_x0);
              uVar5 = *(uint *)(pRVar8 + 0x48);
            }
            in_x0[0x54] = (OakTrainModule)0x1;
            *(int *)(in_x0 + 0x50) = *(int *)(in_x0 + 0x50) + 1;
            iVar6 = iVar6 + uVar5;
            puVar9 = (undefined8 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)this_00);
            local_38 = *puVar9;
            local_30 = *(float *)(puVar9 + 1) + 100.0;
            pEVar10 = Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
            StandaloneEffect::SetBoardSpaceOrigin
                      ((StandaloneEffect *)pEVar10,(SexyVector3 *)&local_38,-1);
            Sexy::StrFormat("%d",asStack_18,(ulong)uVar5);
            Effect_FloatingText::SetText(pEVar10,asStack_18);
            std::string::~string(asStack_18);
            Effect_FloatingText::SetStyle(pEVar10,4);
            pcVar17 = *(code **)(*(long *)pEVar10 + 0x78);
            Sexy::Color::Color((Color *)asStack_18,1);
            (*pcVar17)(pEVar10,asStack_18);
            fVar18 = (float)Sexy::Rand(0.4);
            Effect_FloatingText::SetDuration(pEVar10,fVar18 + 1.0);
            fVar18 = (float)Sexy::Rand(4.0);
            in_s0 = fVar18 - 2.0;
            EATextSquish::Vec3::Vec3(aVStack_28,in_s0,0.0,10.0);
            DVec3::DVec3((DVec3 *)asStack_18);
            Effect_FloatingText::SetMotion
                      (pEVar10,(SexyVector3 *)aVStack_28,(SexyVector3 *)asStack_18);
            PresentDisplayRect::SetPAMScale((PresentDisplayRect *)pEVar10,0.8);
            pcVar11 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
            AudioMgr::SendEvent(pcVar11,"Play_UI_Game_Mower_Appear_Single");
          }
          uVar15 = *(undefined8 *)(in_x0 + 0x28);
          uVar12 = FUN_044a00d4(uVar15,*(undefined8 *)(in_x0 + 0x30));
          auVar20 = extraout_var_00;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar12);
    }
    *(int *)(in_x0 + 0x40) = *(int *)(in_x0 + 0x40) + iVar6;
    if (in_x0[0x54] != (OakTrainModule)0x0) {
      if (2 < *(int *)(in_x0 + 0x50)) {
        in_s0 = (float)*(int *)(gLawnApp + 0xd4) * DAT_06b0c2f0;
        Sexy::FastCurve::SetOutRange
                  (aFStack_40,in_s0,(float)*(int *)(gLawnApp + 0xd8) * DAT_06b0c2f4);
        FUN_05478178((wstring *)&local_38,L"[CANNON_COMBO]",(DVec2 *)asStack_18);
        nop();
        Sexy::StrFormat(L"%d",(wstring *)aVStack_28,(ulong)*(uint *)(in_x0 + 0x50));
        TodReplaceString((wstring *)&local_38,L"{COMBO}",(wstring *)aVStack_28);
        FUN_054766c8((wstring *)&local_38,(DVec2 *)asStack_18);
        FUN_05476c50((DVec2 *)asStack_18);
        FUN_05476c50((wstring *)aVStack_28);
        pEVar10 = Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
        StandaloneEffect::SetScreenSpaceOrigin
                  ((StandaloneEffect *)pEVar10,(SexyVector2 *)aFStack_40,900000);
        Effect_FloatingText::SetText((wstring *)pEVar10);
        Effect_FloatingText::SetStyle(pEVar10,3);
        (**(code **)(*(long *)pEVar10 + 0x78))(pEVar10,&DAT_06b0c300);
        Effect_FloatingText::SetDuration(pEVar10,1.5);
        PresentDisplayRect::SetPAMScale((PresentDisplayRect *)pEVar10,1.5);
        (**(code **)(*(long *)pEVar10 + 0x80))(0x3fa00000,pEVar10);
        DVec2::DVec2((DVec2 *)asStack_18,2.5,2.5);
        Effect_FloatingText::SetFinalScale(pEVar10,(DVec2 *)asStack_18);
        iVar14 = 200;
        if (*(uint *)(in_x0 + 0x50) < 10) {
          iVar14 = *(int *)(&DAT_05753ab0 + (ulong)*(uint *)(in_x0 + 0x50) * 4);
        }
        *(int *)(in_x0 + 0x40) = *(int *)(in_x0 + 0x40) + iVar14;
        FUN_05476c50((wstring *)&local_38);
        auVar20 = extraout_var_02;
      }
    }
    auVar2._4_12_ = auVar20;
    auVar2._0_4_ = in_s0;
    fVar18 = CurveLerp<float>(auVar2,0x451c4000,(float)iVar6,&DAT_06a88740,&DAT_06a8873c,1);
    *(float *)(in_x0 + 0x4c) = fVar18;
    uVar19 = PVZ_T();
    *(undefined4 *)(in_x0 + 0x48) = uVar19;
  }
  plVar13 = (long *)FUN_044a1c34(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (plVar13 != (long *)0x0) {
    cVar4 = (**(code **)(*plVar13 + 0xa0))();
    if (cVar4 == '\0') {
      Board::CountZombiesOnScreen(*(Board **)(gLawnApp + 0x9f0),false);
      goto LAB_044a4348;
    }
  }
  iVar6 = Board::CountZombiesOnScreen(*(Board **)(gLawnApp + 0x9f0),false);
  if (iVar6 == 0) {
    startOutro(in_x0);
  }
LAB_044a4348:
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (in_x0 + 0x28));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OakTrainModule::onUpdate() */

void __thiscall OakTrainModule::onUpdate(OakTrainModule *this)

{
  int iVar1;
  char cVar2;
  RichManUIMgr *pRVar3;
  Board *pBVar4;
  
  iVar1 = *(int *)(this + 0x18);
  if (iVar1 == 2) {
    updateOutro();
    return;
  }
  if (iVar1 != 3) {
    if (iVar1 == 1) {
      updateGameplay();
      updateScoreboard(this);
      if (this[0x56] != (OakTrainModule)0x0) {
        cVar2 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
        if ((((cVar2 != '\0') &&
             (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x80)), cVar2 == '\0')
             ) && (cVar2 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0)), cVar2 == '\0')) &&
           (cVar2 = Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),1), cVar2 != '\0')) {
          pRVar3 = (RichManUIMgr *)
                   FUN_044a1c0c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
          RichManUIMgr::SetPrevNode(pRVar3,3);
          this[0x56] = (OakTrainModule)0x0;
          goto LAB_044a4830;
        }
      }
    }
    return;
  }
  pBVar4 = *(Board **)(gLawnApp + 0x9f0);
  pBVar4[0x9d0] = (Board)0x1;
  cVar2 = Board::TryTriggerPlayerLoss(pBVar4,1);
  if (cVar2 != '\0') {
    pRVar3 = (RichManUIMgr *)FUN_044a1c0c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    RichManUIMgr::SetPrevNode(pRVar3,1);
  }
LAB_044a4830:
  setState(this,4);
  return;
}

