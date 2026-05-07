// Class: CannonMinigameModule


/* CannonMinigameModule::preventSave() */

undefined8 CannonMinigameModule::preventSave(void)

{
  return 1;
}


/* CannonMinigameModule::canLevelEnd() */

bool __thiscall CannonMinigameModule::canLevelEnd(CannonMinigameModule *this)

{
  return *(int *)(this + 0x18) == 4;
}


/* CannonMinigameModule::onEndLevel() */

void __thiscall CannonMinigameModule::onEndLevel(CannonMinigameModule *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* CannonMinigameModule::StaticGetClass() */

long * CannonMinigameModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CannonMinigameModule",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonMinigameModule::getComboText(int) */

void CannonMinigameModule::getComboText(int param_1)

{
  uint in_w1;
  wstring *in_x8;
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178();
  nop();
  Sexy::StrFormat(L"%d",awStack_18,(ulong)in_w1);
  TodReplaceString(in_x8,L"{COMBO}",awStack_18);
  FUN_054766c8();
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonMinigameModule::getExclamationText(ComboBracket const&) */

void CannonMinigameModule::getExclamationText(ComboBracket *param_1)

{
  int iVar1;
  string *psVar2;
  long in_x1;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03bb575c(*(undefined8 *)(in_x1 + 0x20),*(undefined8 *)(in_x1 + 0x28));
  iVar1 = Sexy::Rand(iVar1);
  if (iVar1 < 0) {
    FUN_05478178();
    nop();
  }
  else {
    psVar2 = (string *)FUN_03bb5768(*(undefined8 *)(in_x1 + 0x20));
    Sexy::ToWString(psVar2);
    TodStringTranslate(awStack_10);
    FUN_05476c50(awStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonMinigameModule::updateScoreboard() */

void __thiscall CannonMinigameModule::updateScoreboard(CannonMinigameModule *this)

{
  uint uVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  int *piVar3;
  DangerRoomManager *this_00;
  wstring *pwVar4;
  long *plVar5;
  float fVar6;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  int local_18 [2];
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar1 = *(uint *)(pRVar2 + 0xac);
  if (*(int *)(this + 0x50) != *(int *)(this + 0x78)) {
    local_18[0] = *(int *)(this + 0x50) - *(int *)(this + 0x78);
    if (local_18[0] < 0) {
      fVar6 = (float)PVZ_Dt();
      local_10[0] = -(int)(fVar6 * 8000.0);
      piVar3 = eastl::max_alt<int>(local_10,local_18);
      *(int *)(this + 0x78) = *(int *)(this + 0x78) + *piVar3;
    }
    else {
      fVar6 = (float)PVZ_Dt();
      local_10[0] = (int)(fVar6 * 2000.0);
      piVar3 = eastl::min_alt<int>(local_10,local_18);
      *(int *)(this + 0x78) = *(int *)(this + 0x78) + *piVar3;
    }
  }
  this_00 = (DangerRoomManager *)Sexy::LazySingleton<MiniGameManager>::GetInstancePtr();
  DangerRoomManager::SetMaxLevel(this_00,*(int *)(this + 0x78));
  FUN_05478178(awStack_28,L"[CANNON_SCORE]",local_10);
  nop();
  Sexy::StrFormat(L"%d",(wstring *)local_18,(ulong)*(uint *)(this + 0x78));
  TodReplaceString(awStack_28,L"{SCORE}",(wstring *)local_18);
  FUN_054766c8(awStack_28,local_10);
  FUN_05476c50(local_10);
  FUN_05476c50((wstring *)local_18);
  pwVar4 = (wstring *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  Effect_FloatingText::SetText(pwVar4);
  fVar6 = (float)PVZ_T();
  if (fVar6 - *(float *)(this + 0x70) < 0.3) {
    fVar6 = (float)PVZ_T();
    local_10[0] = 0x3f800000;
    fVar6 = CurveEvaluate<float>
                      ((fVar6 - *(float *)(this + 0x70)) * 3.3333333,this + 0x74,local_10,3);
    fVar6 = fVar6 * 1.5;
  }
  else {
    fVar6 = 1.5;
  }
  plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  (**(code **)(*plVar5 + 0x80))(fVar6);
  if (((int)uVar1 < 1) || ((int)uVar1 <= *(int *)(this + 0x78))) {
    pwVar4 = (wstring *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
    FUN_05478178(local_10,&DAT_056f11a8,(wstring *)local_18);
    Effect_FloatingText::SetText(pwVar4);
    FUN_05476c50(local_10);
    nop();
  }
  else {
    FUN_05478178(awStack_20,L"[CANNON_MINSCORE]",local_10);
    nop();
    Sexy::StrFormat(L"%d",(wstring *)local_18,(ulong)uVar1);
    TodReplaceString(awStack_20,L"{MINSCORE}",(wstring *)local_18);
    FUN_054766c8(awStack_20,local_10);
    FUN_05476c50(local_10);
    FUN_05476c50((wstring *)local_18);
    pwVar4 = (wstring *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
    Effect_FloatingText::SetText(pwVar4);
    FUN_05476c50(awStack_20);
  }
  FUN_05476c50(awStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CannonMinigameModule::calcCoinReward(int) */

ulong __thiscall CannonMinigameModule::calcCoinReward(CannonMinigameModule *this,int param_1)

{
  uint uVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar9 = *(undefined8 *)(pRVar2 + 0x88);
  uVar6 = 0;
  fVar10 = 1.0;
  iVar7 = -1;
  uVar8 = 0;
  uVar3 = FUN_03bb5708(uVar9,*(undefined8 *)(pRVar2 + 0x90));
  if (uVar3 != 0) {
    do {
      if (iVar7 == -1) {
        lVar4 = FUN_03bb5744(uVar9,uVar6);
        fVar10 = *(float *)(lVar4 + 4);
        iVar7 = (int)uVar8;
      }
      else {
        lVar4 = FUN_03bb5744(uVar9,uVar6);
        if (fVar10 < *(float *)(lVar4 + 4)) {
          fVar10 = *(float *)(lVar4 + 4);
          iVar7 = (int)uVar8;
        }
      }
      uVar6 = uVar6 + 1;
      uVar8 = uVar6 & 0xffffffff;
    } while (uVar6 != uVar3);
  }
  uVar6 = 0;
  if (iVar7 != -1) {
    uVar5 = (uint)(fVar10 * (float)(*(int *)(this + 0x54) * *(int *)(pRVar2 + 0xa0)));
    uVar1 = CurveLerp<int>(0,(float)(int)uVar5,(float)param_1,pRVar2 + 0xa4,pRVar2 + 0xa8,2);
    uVar6 = (ulong)uVar1;
    Sexy::OutputDebugStrF((wchar_t *)"*** CANNON MINIGAME SCORING\n");
    Sexy::OutputDebugStrF
              ((wchar_t *)"Score: %d    Highest Possible Score: %d\n",(ulong)(uint)param_1,
               (ulong)uVar5);
    Sexy::OutputDebugStrF
              ((wchar_t *)"Reward range: %d to %d\n",(ulong)*(uint *)(pRVar2 + 0xa4),
               (ulong)*(uint *)(pRVar2 + 0xa8));
    Sexy::OutputDebugStrF((wchar_t *)"Final reward: %d\n",uVar6);
  }
  return uVar6;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonMinigameModule::onLoadComplete() */

void __thiscall CannonMinigameModule::onLoadComplete(CannonMinigameModule *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_01;
  UIWidget *this_02;
  StandaloneEffect *pSVar1;
  long *plVar2;
  Effect_FloatingText *pEVar3;
  RtObject *this_03;
  PirateStage *this_04;
  FastCurve aFStack_20 [8];
  FastCurve aFStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_02 = (UIWidget *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  if (this_02 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_02,false);
  }
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x60);
  this_01 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x68);
  Sexy::FastCurve::SetOutRange
            (aFStack_20,(float)*(int *)(gLawnApp + 0xd4) * DAT_06acdb38,
             (float)*(int *)(gLawnApp + 0xd8) * DAT_06acdb3c);
  Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pSVar1 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetScreenSpaceOrigin(pSVar1,(SexyVector2 *)aFStack_20,900000);
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  (**(code **)(*plVar2 + 0x78))(plVar2,&DAT_06acdbf0);
  pEVar3 = (Effect_FloatingText *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_FloatingText::SetStyle(pEVar3,3);
  Sexy::FastCurve::SetOutRange
            (aFStack_18,(float)*(int *)(gLawnApp + 0xd4) * DAT_06acdba8,
             (float)*(int *)(gLawnApp + 0xd8) * DAT_06acdbac);
  Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_01,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pSVar1 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  StandaloneEffect::SetScreenSpaceOrigin(pSVar1,(SexyVector2 *)aFStack_18,900000);
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  (**(code **)(*plVar2 + 0x78))(plVar2,&DAT_06acdbb0);
  pEVar3 = (Effect_FloatingText *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  Effect_FloatingText::SetStyle(pEVar3,5);
  this_03 = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  if ((this_03 != (RtObject *)0x0) &&
     (this_04 = Sexy::RtObject::Cast<PirateStage>(this_03), this_04 != (PirateStage *)0x0)) {
    PirateStage::ShowGuides(this_04,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonMinigameModule::onGameplayStarted() */

void __thiscall CannonMinigameModule::onGameplayStarted(CannonMinigameModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  ulong uVar2;
  int *piVar3;
  ResourceInfo *pRVar4;
  ResourceInfo *pRVar5;
  UIWidget *this_00;
  RiverCrossingModule *this_01;
  int iVar6;
  ulong uVar7;
  Board *pBVar8;
  undefined8 uVar9;
  string asStack_18 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  OakTrainModule::setState((OakTrainModule *)this,1);
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  pBVar8 = *(Board **)(gLawnApp + 0x9f0);
  if (0 < *(int *)(pBVar8 + 0xfc)) {
    uVar7 = 0;
    do {
      uVar9 = *(undefined8 *)(pRVar1 + 0x68);
      uVar2 = FUN_03bb5698(uVar9,*(undefined8 *)(pRVar1 + 0x70));
      iVar6 = (int)uVar7;
      if ((uVar2 <= uVar7) || (piVar3 = (int *)FUN_03bb56a4(uVar9,uVar7), 0 < *piVar3)) {
        std::string::string(asStack_18,"");
        pRVar4 = (ResourceInfo *)Board::GetPlantAt(pBVar8,1,iVar6,asStack_18);
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (a_Stack_10);
        pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10)
        ;
        std::string::~string(asStack_18);
        nop();
        if (pRVar4 == pRVar5) {
          pBVar8 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string((string *)a_Stack_10,"coconutcannon");
          Board::AddPlant(pBVar8,1,iVar6,(string *)a_Stack_10,-1,false,false,false,false);
          std::string::~string((string *)a_Stack_10);
          nop();
          nop();
          RiverCrossingModule::SetTutorial(this_01,true);
        }
      }
      uVar7 = uVar7 + 1;
      pBVar8 = *(Board **)(gLawnApp + 0x9f0);
    } while (iVar6 + 1 < *(int *)(pBVar8 + 0xfc));
  }
  std::string::string((string *)a_Stack_10,"UIPowerupHolder");
  this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)a_Stack_10);
  UIWidget::SetVisible(this_00,false);
  std::string::~string((string *)a_Stack_10);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonMinigameModule::moveZombieCongaStyle(int, int, float) */

void CannonMinigameModule::moveZombieCongaStyle(int param_1,int param_2,float param_3)

{
  char cVar1;
  long lVar2;
  RtWeakPtrBase *pRVar3;
  ResourceInfo *pRVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  SexyVector2 *this;
  SexyVector2 *pSVar8;
  ResilienceTutorialIntroProperties *pRVar9;
  long *plVar10;
  undefined8 uVar11;
  int in_w2;
  code *pcVar12;
  undefined1 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined8 local_30;
  undefined4 local_28 [2];
  undefined4 local_20 [2];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_03bb56e4(*(undefined8 *)((LevelModule *)(ulong)(uint)param_1 + 0x20),(long)param_2);
  pRVar3 = (RtWeakPtrBase *)FUN_03bb57c0(*(undefined8 *)(lVar2 + 0x30),(long)in_w2);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,pRVar3);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_38);
  if ((pRVar4 == (ResourceInfo *)0x0) ||
     (cVar1 = (**(code **)(*(long *)pRVar4 + 0x328))(), cVar1 != '\0')) {
    uVar13 = 0;
    goto LAB_03bb8444;
  }
  lVar5 = FUN_03bb57c0(*(undefined8 *)(lVar2 + 0x30),(long)in_w2);
  uVar11 = *(undefined8 *)(lVar2 + 0x20);
  uVar6 = *(undefined8 *)(lVar2 + 0x18);
  fVar17 = param_3 + *(float *)(lVar5 + 8);
  *(float *)(lVar5 + 8) = fVar17;
  lVar5 = FUN_03bb5784(uVar6,uVar11);
  uVar13 = 0;
  if (lVar5 == 0) goto LAB_03bb8444;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_30)
  ;
  if (lVar5 == 1) {
    puVar7 = (undefined8 *)
             std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(lVar2 + 0x18));
    fVar17 = fVar17 - *(float *)(lVar2 + 0x48);
    local_30._0_4_ = (float)*puVar7;
    local_30._4_4_ = (float)((ulong)*puVar7 >> 0x20);
    local_30 = CONCAT44(local_30._4_4_,(float)local_30 - fVar17 * 2.0);
LAB_03bb857c:
    pRVar9 = LevelModule::getProps<ResilienceTutorialIntroProperties>
                       ((LevelModule *)(ulong)(uint)param_1);
    if (pRVar9[0x80] == (ResilienceTutorialIntroProperties)0x0) {
      if (150.0 < fVar17 + fVar17) {
        uVar13 = 1;
        goto LAB_03bb8444;
      }
    }
    else {
      Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),0);
    }
  }
  else {
    if (*(float *)(lVar2 + 0x48) < fVar17) {
      puVar7 = (undefined8 *)
               std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(lVar2 + 0x18));
      uVar6 = *(undefined8 *)(lVar2 + 0x18);
      local_30 = *puVar7;
      fVar17 = fVar17 - *(float *)(lVar2 + 0x48);
      lVar2 = FUN_03bb5784(uVar6,*(undefined8 *)(lVar2 + 0x20));
      this = (SexyVector2 *)FUN_03bb57ac(uVar6,lVar2 + -1);
      pSVar8 = (SexyVector2 *)FUN_03bb57ac(uVar6,lVar2 + -2);
      local_18[0] = Sexy::SexyVector2::operator-(this,pSVar8);
      local_28[0] = Sexy::SexyVector2::Normalize((SexyVector2 *)local_18);
      local_20[0] = Sexy::SexyVector2::operator*((SexyVector2 *)local_28,fVar17);
      local_18[0] = Sexy::SexyVector2::operator*((SexyVector2 *)local_20,2.0);
      Sexy::TPoint<float>::operator+=((TPoint<float> *)&local_30,(TPoint *)local_18);
      goto LAB_03bb857c;
    }
    if (fVar17 < 0.0) {
      puVar7 = (undefined8 *)FUN_03bb57ac(*(undefined8 *)(lVar2 + 0x18),0);
      local_30._0_4_ = (float)*puVar7;
      local_30._4_4_ = (float)((ulong)*puVar7 >> 0x20);
      local_30 = CONCAT44(local_30._4_4_,(float)local_30 - fVar17);
    }
    else if (fVar17 < *(float *)(lVar2 + 0x48)) {
      uVar16 = 0x41200000;
      fVar14 = fmodf(fVar17,10.0);
      uVar11 = *(undefined8 *)(lVar2 + 0x18);
      uVar6 = FUN_03bb57ac(uVar11,(long)(int)(fVar17 * 0.1));
      uVar11 = FUN_03bb57ac(uVar11,(long)((int)(fVar17 * 0.1) + 1));
      uVar15 = CurveEvaluate<Sexy::SexyVector2>(fVar14 * 0.1,uVar6,uVar11,1);
      local_30 = CONCAT44(uVar16,uVar15);
    }
  }
  plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  pcVar12 = *(code **)(*plVar10 + 0x78);
  EATextSquish::Vec3::Vec3((Vec3 *)local_18,(float)local_30,local_30._4_4_,0.0);
  (*pcVar12)(plVar10,(Vec3 *)local_18);
LAB_03bb8444:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar13);
}


/* CannonMinigameModule::CannonMinigameModule() */

void __thiscall CannonMinigameModule::CannonMinigameModule(CannonMinigameModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06737da0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x60));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x68));
  TimeLine::TimeLine((TimeLine *)(this + 0x88));
  PlantWarsStarRewardData::PlantWarsStarRewardData((PlantWarsStarRewardData *)(this + 0xe8));
  TimeLineTrack<Sexy::SexyVector3>::TimeLineTrack
            ((TimeLineTrack<Sexy::SexyVector3> *)(this + 0x108));
  TimeLineTrack<Sexy::SexyVector3>::TimeLineTrack
            ((TimeLineTrack<Sexy::SexyVector3> *)(this + 0x130));
  return;
}


/* CannonMinigameModule::StaticNew() */

CannonMinigameModule * CannonMinigameModule::StaticNew(void)

{
  CannonMinigameModule *this;
  
  this = ::operator_new(0x160);
  CannonMinigameModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonMinigameModule::spewSilverCoin(float) */

void CannonMinigameModule::spewSilverCoin(float param_1)

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
                          ((TimeLineTrack<Sexy::SexyVector3> *)(in_x0 + 0x108),param_1);
  fVar2 = (float)FUN_03bb5fcc();
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
/* CannonMinigameModule::spewGoldCoin(float) */

void CannonMinigameModule::spewGoldCoin(float param_1)

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
                          ((TimeLineTrack<Sexy::SexyVector3> *)(in_x0 + 0x108),param_1);
  fVar2 = (float)FUN_03bb5fcc();
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonMinigameModule::PlayerLost() */

void CannonMinigameModule::PlayerLost(void)

{
  long in_x0;
  StandaloneEffect *pSVar1;
  float fVar2;
  float in_s1;
  FastCurve aFStack_30 [8];
  float local_28;
  float local_24;
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  fVar2 = fVar2 - *(float *)(in_x0 + 0x7c);
  local_28 = (float)TimeLineTrack<Sexy::SexyVector3>::GetValueAt
                              ((TimeLineTrack<Sexy::SexyVector3> *)(in_x0 + 0x108),fVar2);
  local_24 = in_s1;
  local_18 = (float)TimeLineTrack<Sexy::SexyVector3>::GetValueAt
                              ((TimeLineTrack<Sexy::SexyVector3> *)(in_x0 + 0x130),fVar2);
  local_14 = in_s1;
  pSVar1 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x60))
  ;
  Sexy::FastCurve::SetOutRange(aFStack_30,local_28,local_24);
  StandaloneEffect::SetScreenSpaceOrigin(pSVar1,(SexyVector2 *)aFStack_30,0xf424a);
  pSVar1 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x68))
  ;
  Sexy::FastCurve::SetOutRange(aFStack_30,local_18,local_14);
  StandaloneEffect::SetScreenSpaceOrigin(pSVar1,(SexyVector2 *)aFStack_30,0xf424a);
  OakTrainModule::setState();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CannonMinigameModule::LevelEnded() */

void __thiscall CannonMinigameModule::LevelEnded(CannonMinigameModule *this)

{
  if (this[0x158] == (CannonMinigameModule)0x0) {
    OakTrainModule::setState((OakTrainModule *)this,4);
    return;
  }
  PlayerLost();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonMinigameModule::onZombieDestroyed(Zombie*) */

void __thiscall CannonMinigameModule::onZombieDestroyed(CannonMinigameModule *this,Zombie *param_1)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar8 = 0;
  local_8 = ___stack_chk_guard;
  cVar2 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
  if (cVar2 != '\0') {
    while( true ) {
      uVar7 = *(undefined8 *)(this + 0x20);
      uVar3 = FUN_03bb5770(uVar7,*(undefined8 *)(this + 0x28));
      if (uVar3 <= uVar8) break;
      lVar4 = FUN_03bb56e4(uVar7,uVar8);
      uVar3 = 0;
      while( true ) {
        uVar7 = *(undefined8 *)(lVar4 + 0x30);
        iVar1 = (int)uVar3;
        uVar6 = FUN_03bb57b4(uVar7,*(undefined8 *)(lVar4 + 0x38));
        if (uVar6 <= uVar3) break;
        this_00 = (RtWeakPtr *)FUN_03bb57c0(uVar7,uVar3);
        pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
        uVar3 = uVar3 + 1;
        if (param_1 == (Zombie *)pRVar5) {
          local_20 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)(lVar4 + 0x30));
          local_18 = __gnu_cxx::
                     __normal_iterator<Sexy::RtInvokeVariant*,std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>>
                     ::operator+((__normal_iterator<Sexy::RtInvokeVariant*,std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>>
                                  *)&local_20,(long)iVar1);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_10,(__normal_iterator *)&local_18);
          std::
          vector<CannonMinigameModule::TargetListEntry,std::allocator<CannonMinigameModule::TargetListEntry>>
          ::erase((vector<CannonMinigameModule::TargetListEntry,std::allocator<CannonMinigameModule::TargetListEntry>>
                   *)(lVar4 + 0x30),local_10);
          goto LAB_03bb9454;
        }
      }
      uVar8 = uVar8 + 1;
    }
  }
LAB_03bb9454:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CannonMinigameModule::~CannonMinigameModule() */

void __thiscall CannonMinigameModule::~CannonMinigameModule(CannonMinigameModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06737da0;
  LawnApp::UnregisterBoardTouchGameplayObject(gLawnApp,this);
  TimeLineTrack<Sexy::SexyVector3>::~TimeLineTrack
            ((TimeLineTrack<Sexy::SexyVector3> *)(this + 0x130));
  TimeLineTrack<Sexy::SexyVector3>::~TimeLineTrack
            ((TimeLineTrack<Sexy::SexyVector3> *)(this + 0x108));
  TimeLineTrack<int>::~TimeLineTrack((TimeLineTrack<int> *)(this + 0xe8));
  TimeLine::~TimeLine((TimeLine *)(this + 0x88));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x38));
  std::vector<CannonMinigameModule::LaneData,std::allocator<CannonMinigameModule::LaneData>>::
  ~vector((vector<CannonMinigameModule::LaneData,std::allocator<CannonMinigameModule::LaneData>> *)
          (this + 0x20));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* CannonMinigameModule::~CannonMinigameModule() */

void __thiscall CannonMinigameModule::~CannonMinigameModule(CannonMinigameModule *this)

{
  ~CannonMinigameModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonMinigameModule::onZombieSpawned(Zombie*) */

void __thiscall CannonMinigameModule::onZombieSpawned(CannonMinigameModule *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  ZombiePirateSeagull *pZVar4;
  long lVar5;
  long lVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  FishingZombieInitData aFStack_18 [8];
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
  if ((cVar1 != '\0') && (*(int *)(this + 0x18) == 1)) {
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    if ((param_1 != (Zombie *)0x0) &&
       (pZVar4 = Sexy::RtObject::Cast<ZombiePirateSeagull>((RtObject *)param_1),
       pZVar4 != (ZombiePirateSeagull *)0x0)) {
      FUN_03bb5d88(pZVar4 + 0x800);
    }
    iVar2 = SharkMinion::getRow((SharkMinion *)param_1);
    lVar5 = FUN_03bb56e4(*(undefined8 *)(this + 0x20),(long)iVar2);
    FishingZombieInitData::FishingZombieInitData(aFStack_18);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)aFStack_18,(RtWeakPtrBase *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    lVar6 = FUN_03bb57b4(*(undefined8 *)(lVar5 + 0x30),*(undefined8 *)(lVar5 + 0x38));
    if (lVar6 == 0) {
      local_10 = -*(float *)(pRVar3 + 0x48);
    }
    else {
      lVar6 = std::
              vector<std::pair<FEAST::CPrsCSTNode*,bool>,std::allocator<std::pair<FEAST::CPrsCSTNode*,bool>>>
              ::back((vector<std::pair<FEAST::CPrsCSTNode*,bool>,std::allocator<std::pair<FEAST::CPrsCSTNode*,bool>>>
                      *)(lVar5 + 0x30));
      if (*(float *)(lVar6 + 8) < 0.0) {
        local_10 = *(float *)(lVar6 + 8) - *(float *)(pRVar3 + 0x48);
      }
      else {
        local_10 = -(*(float *)(pRVar3 + 0x48) * 3.0);
      }
    }
    std::
    vector<CannonMinigameModule::TargetListEntry,std::allocator<CannonMinigameModule::TargetListEntry>>
    ::push_back((vector<CannonMinigameModule::TargetListEntry,std::allocator<CannonMinigameModule::TargetListEntry>>
                 *)(lVar5 + 0x30),(TargetListEntry *)aFStack_18);
    *(int *)(this + 0x54) = *(int *)(this + 0x54) + 1;
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aFStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonMinigameModule::onZombieDied(Zombie*, DamageInfo const*) */

void CannonMinigameModule::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
  if (cVar1 != '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
               (param_1 + 0x38),(RtWeakPtr *)aRStack_10);
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
/* CannonMinigameModule::updateOutro() */

void CannonMinigameModule::updateOutro(void)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  uint uVar1;
  CannonMinigameModule *in_x0;
  StandaloneEffect *pSVar2;
  long *plVar3;
  Effect_FloatingText *this_00;
  float fVar4;
  float in_s1;
  float in_s2;
  FastCurve aFStack_30 [8];
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  long local_8;
  
  this = (RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x60);
  local_8 = ___stack_chk_guard;
  fVar4 = (float)PVZ_T();
  fVar4 = fVar4 - *(float *)(in_x0 + 0x7c);
  local_28 = (float)TimeLineTrack<Sexy::SexyVector3>::GetValueAt
                              ((TimeLineTrack<Sexy::SexyVector3> *)(in_x0 + 0x108),fVar4);
  local_24 = in_s1;
  local_20 = in_s2;
  pSVar2 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,local_28,local_24);
  StandaloneEffect::SetScreenSpaceOrigin(pSVar2,(SexyVector2 *)&local_18,900000);
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  (**(code **)(*plVar3 + 0x80))(local_20 * 1.5);
  local_18 = (float)TimeLineTrack<Sexy::SexyVector3>::GetValueAt
                              ((TimeLineTrack<Sexy::SexyVector3> *)(in_x0 + 0x130),fVar4);
  local_14 = local_20;
  local_10 = in_s2;
  pSVar2 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x68))
  ;
  Sexy::FastCurve::SetOutRange(aFStack_30,local_18,local_14);
  StandaloneEffect::SetScreenSpaceOrigin(pSVar2,(SexyVector2 *)aFStack_30,900000);
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x68));
  (**(code **)(*plVar3 + 0x80))(local_10);
  if (in_x0[0x158] == (CannonMinigameModule)0x0) {
    uVar1 = TimeLineTrack<int>::GetValueAt((TimeLineTrack<int> *)(in_x0 + 0xe8),fVar4);
    this_00 = (Effect_FloatingText *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    Sexy::StrFormat("%d",aFStack_30,(ulong)uVar1);
    Effect_FloatingText::SetText(this_00,(string *)aFStack_30);
    std::string::~string((string *)aFStack_30);
    if (uVar1 == 0) {
      pSVar2 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      StandaloneEffect::SetVisibility(pSVar2,false);
    }
    fVar4 = (float)PVZ_Dt();
    TimeLine::Update((TimeLine *)(in_x0 + 0x88),fVar4);
  }
  fVar4 = (float)PVZ_T();
  if (*(float *)(in_x0 + 0x80) < fVar4) {
    LevelEnded(in_x0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CannonMinigameModule::buildAllSplines() */

void __thiscall CannonMinigameModule::buildAllSplines(CannonMinigameModule *this)

{
  LaneData *this_00;
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  while( true ) {
    uVar3 = *(undefined8 *)(this + 0x20);
    uVar1 = FUN_03bb5770(uVar3,*(undefined8 *)(this + 0x28));
    if (uVar1 <= uVar2) break;
    this_00 = (LaneData *)FUN_03bb56e4(uVar3,uVar2);
    LaneData::RebuildSpline(this_00);
    uVar2 = uVar2 + 1;
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03bba53c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* CannonMinigameModule::updateCongaLine() */

void CannonMinigameModule::updateCongaLine(void)

{
  undefined1 auVar1 [16];
  char cVar2;
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  RtWeakPtr *this;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  float in_s0;
  float fVar12;
  undefined1 extraout_var [12];
  undefined1 auVar13 [12];
  undefined1 extraout_var_00 [12];
  float fVar14;
  int iVar15;
  ulong uVar16;
  ResourceInfo *local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar16 = 0;
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar10 = *(undefined8 *)(in_x0 + 0x20);
  iVar15 = 0;
  lVar4 = FUN_03bb5770(uVar10,*(undefined8 *)(in_x0 + 0x28));
  if (lVar4 != 0) {
    do {
      lVar4 = 1;
      uVar11 = 0;
      lVar5 = FUN_03bb56e4(uVar10,uVar16);
      while( true ) {
        uVar10 = *(undefined8 *)(lVar5 + 0x30);
        uVar6 = FUN_03bb57b4(uVar10,*(undefined8 *)(lVar5 + 0x38));
        if (uVar6 <= uVar11) break;
        if (uVar11 == 0) {
          lVar7 = FUN_03bb57c0(uVar10,0);
          fVar14 = *(float *)(lVar7 + 8);
          auVar13 = extraout_var_00;
LAB_03bba524:
          auVar1._4_12_ = auVar13;
          auVar1._0_4_ = in_s0;
          fVar14 = CurveLerp<float>(auVar1,*(float *)(lVar5 + 0x48),
                                    *(float *)(lVar5 + 0x48) - fVar14,pRVar3 + 0x44,pRVar3 + 0x40,4)
          ;
          uVar10 = *(undefined8 *)(lVar5 + 0x30);
          lVar7 = FUN_03bb57b4(uVar10,*(undefined8 *)(lVar5 + 0x38));
          if (uVar11 != lVar7 - 1U) {
            lVar7 = FUN_03bb57c0(uVar10,uVar11);
            lVar8 = FUN_03bb57c0(uVar10,lVar4);
            if (*(float *)(lVar7 + 8) - *(float *)(lVar8 + 8) <= *(float *)(pRVar3 + 0x48)) {
              fVar14 = *(float *)(pRVar3 + 0x40);
            }
          }
          fVar12 = (float)PVZ_Dt();
          in_s0 = fVar12 * fVar14;
          cVar2 = moveZombieCongaStyle((int)in_x0,iVar15,in_s0);
          if (cVar2 != '\0') {
            this = (RtWeakPtr *)FUN_03bb57c0(*(undefined8 *)(lVar5 + 0x30),uVar11);
            local_28 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
            std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                      ((vector<Zombie*,std::allocator<Zombie*>> *)&local_20,(Zombie **)&local_28);
          }
        }
        else {
          lVar7 = FUN_03bb57c0(uVar10,uVar11 - 1);
          lVar8 = FUN_03bb57c0(uVar10,uVar11);
          fVar14 = *(float *)(lVar8 + 8);
          in_s0 = *(float *)(lVar7 + 8) - fVar14;
          auVar13 = extraout_var;
          if (*(float *)(pRVar3 + 0x48) <= in_s0) goto LAB_03bba524;
          moveZombieCongaStyle((int)in_x0,iVar15,0.0);
        }
        uVar11 = uVar11 + 1;
        lVar4 = lVar4 + 1;
      }
      uVar10 = *(undefined8 *)(in_x0 + 0x20);
      uVar16 = uVar16 + 1;
      iVar15 = (int)uVar16;
      uVar11 = FUN_03bb5770(uVar10,*(undefined8 *)(in_x0 + 0x28));
    } while (uVar16 < uVar11);
  }
  uVar16 = 0;
  while( true ) {
    uVar10 = local_20;
    uVar11 = FUN_03bb57c8(local_20,local_18);
    if (uVar11 <= uVar16) break;
    puVar9 = (undefined8 *)FUN_03bb57d4(uVar10,uVar16);
    (**(code **)(*(long *)*puVar9 + 0x48))((long *)*puVar9);
    uVar16 = uVar16 + 1;
  }
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonMinigameModule::registerForEvents() */

void __thiscall CannonMinigameModule::registerForEvents(CannonMinigameModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,buildAllSplines);
  Sexy::Delegate0::Delegate0<CannonMinigameModule,void(CannonMinigameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<CannonMinigameModule,void(CannonMinigameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<CannonMinigameModule,void(CannonMinigameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<CannonMinigameModule,void(CannonMinigameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onEndLevel);
  Sexy::Delegate0::Delegate0<CannonMinigameModule,void(CannonMinigameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,canLevelEnd);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<CannonMinigameModule,bool(CannonMinigameModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterWinCondition(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,preventSave);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<CannonMinigameModule,bool(CannonMinigameModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterCanPreventSave(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_a0 = local_80;
  uStack_98 = uStack_78;
  local_90 = local_70;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<CannonMinigameModule,void(CannonMinigameModule::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDestroyed);
  local_b0 = local_58;
  local_c0 = local_68;
  uStack_b8 = uStack_60;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<CannonMinigameModule,void(CannonMinigameModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieSpawned);
  local_c0 = local_50;
  uStack_b8 = uStack_48;
  local_b0 = local_40;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<CannonMinigameModule,void(CannonMinigameModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CannonMinigameModule::initializeModule() */

void __thiscall CannonMinigameModule::initializeModule(CannonMinigameModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  ulong uVar2;
  vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *this_00;
  vector *pvVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar2 = FUN_03bb5688(DAT_06acdbc0,DAT_06acdbc8);
  std::vector<CannonMinigameModule::LaneData,std::allocator<CannonMinigameModule::LaneData>>::resize
            ((vector<CannonMinigameModule::LaneData,std::allocator<CannonMinigameModule::LaneData>>
              *)(this + 0x20),uVar2);
  uVar2 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(pRVar1 + 0x50);
    uVar4 = FUN_03bb56b4(uVar5,*(undefined8 *)(pRVar1 + 0x58));
    if (uVar4 <= uVar2) break;
    this_00 = (vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)
              FUN_03bb56e4(*(undefined8 *)(this + 0x20),uVar2);
    pvVar3 = (vector *)FUN_03bb56f0(uVar5,uVar2);
    std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::operator=(this_00,pvVar3);
    uVar2 = uVar2 + 1;
  }
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  this[0x158] = (CannonMinigameModule)0x0;
  uVar6 = PVZ_T();
  *(undefined4 *)(this + 0x70) = uVar6;
  uVar6 = PVZ_EOT();
  *(undefined4 *)(this + 0x7c) = uVar6;
  *(undefined4 *)(this + 0x80) = uVar6;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonMinigameModule::startOutro() */

void __thiscall CannonMinigameModule::startOutro(CannonMinigameModule *this)

{
  CannonMinigameModule *pCVar1;
  TimeLineTrack<int> *this_00;
  int iVar2;
  int iVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  ResilienceTutorialIntroProperties *pRVar7;
  string *psVar8;
  long extraout_x0;
  long extraout_x0_00;
  code *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  float fVar13;
  TimeLine *pTVar14;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  Vec3 aVStack_90 [8];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_68 [2];
  undefined4 local_60;
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = this + 0x108;
  this_00 = (TimeLineTrack<int> *)(this + 0xe8);
  OakTrainModule::setState((OakTrainModule *)this,2);
  uVar12 = PVZ_T();
  *(undefined4 *)(this + 0x7c) = uVar12;
  fVar13 = (float)PVZ_T();
  *(float *)(this + 0x80) = fVar13 + 8.0;
  TimeLineTrack<int>::Initialize(this_00,*(int *)(this + 0x50));
  TimeLineTrack<int>::AddKeyFrame((TimeLineTrack<int> *)0x40400000,this_00,this + 0x50,2);
  local_68[0] = 0;
  TimeLineTrack<int>::AddKeyFrame
            ((TimeLineTrack<int> *)0x40b00000,this_00,(RtWeakPtr<Sexy::ResourceInfo> *)local_68,1);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_a0,(float)*(int *)(gLawnApp + 0xd4) * DAT_06acdb38,
             (float)*(int *)(gLawnApp + 0xd8) * DAT_06acdb3c,1.0);
  TimeLineTrack<Sexy::SexyVector3>::Initialize(local_a0,local_9c,local_98,pCVar1);
  TimeLineTrack<Sexy::SexyVector3>::AddKeyFrame
            ((TimeLineTrack<Sexy::SexyVector3> *)0x3fc00000,pCVar1,(Vec3 *)&local_a0,4);
  EATextSquish::Vec3::Vec3
            (aVStack_90,(float)*(int *)(gLawnApp + 0xd4) * DAT_06acdb90,
             (float)*(int *)(gLawnApp + 0xd8) * DAT_06acdb94,2.0);
  TimeLineTrack<Sexy::SexyVector3>::AddKeyFrame
            ((TimeLineTrack<Sexy::SexyVector3> *)0x40400000,pCVar1,aVStack_90,1);
  TimeLineTrack<Sexy::SexyVector3>::AddKeyFrame
            ((TimeLineTrack<Sexy::SexyVector3> *)0x40b00000,pCVar1,aVStack_90,4);
  local_88 = 0;
  TimeLineTrack<Sexy::SexyVector3>::AddKeyFrame
            ((TimeLineTrack<Sexy::SexyVector3> *)0x40c00000,pCVar1,aVStack_90,4);
  iVar11 = *(int *)(this + 0x50);
  pRVar7 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  fVar4 = DAT_06acdbac;
  fVar13 = DAT_06acdba8;
  if (iVar11 < *(int *)(pRVar7 + 0xac)) {
    iVar11 = *(int *)(gLawnApp + 0xd4);
    pCVar1 = this + 0x130;
    iVar2 = *(int *)(gLawnApp + 0xd8);
    this[0x158] = (CannonMinigameModule)0x1;
    EATextSquish::Vec3::Vec3((Vec3 *)&local_80,(float)iVar11 * fVar13,(float)iVar2 * fVar4,1.0);
    TimeLineTrack<Sexy::SexyVector3>::Initialize(local_80,local_7c,local_78,pCVar1);
    TimeLineTrack<Sexy::SexyVector3>::AddKeyFrame
              ((TimeLineTrack<Sexy::SexyVector3> *)0x3fc00000,pCVar1,(Vec3 *)&local_80,4);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)local_68,(float)*(int *)(gLawnApp + 0xd4) * DAT_06acdb40,
               (float)*(int *)(gLawnApp + 0xd8) * DAT_06acdb44,3.0);
    TimeLineTrack<Sexy::SexyVector3>::AddKeyFrame
              ((TimeLineTrack<Sexy::SexyVector3> *)0x40400000,pCVar1,
               (RtWeakPtr<Sexy::ResourceInfo> *)local_68,1);
    TimeLineTrack<Sexy::SexyVector3>::AddKeyFrame
              ((TimeLineTrack<Sexy::SexyVector3> *)0x40b00000,pCVar1,
               (RtWeakPtr<Sexy::ResourceInfo> *)local_68,4);
    local_60 = 0;
    TimeLineTrack<Sexy::SexyVector3>::AddKeyFrame
              ((TimeLineTrack<Sexy::SexyVector3> *)0x40c00000,pCVar1,
               (RtWeakPtr<Sexy::ResourceInfo> *)local_68,4);
    fVar13 = (float)PVZ_T();
    *(float *)(this + 0x80) = fVar13 + 3.0;
  }
  else {
    iVar6 = calcCoinReward(this,*(int *)(this + 0x50));
    psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    std::string::string((string *)&local_80,"coin_gold");
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
    nop();
    iVar2 = *(int *)(extraout_x0 + 0x94);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
    std::string::~string((string *)&local_80);
    nop();
    iVar11 = 0;
    if (iVar2 != 0) {
      iVar11 = iVar6 / iVar2;
    }
    iVar11 = iVar11 / 2;
    psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    std::string::string((string *)&local_80,"coin_silver");
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
    nop();
    iVar3 = *(int *)(extraout_x0_00 + 0x94);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
    std::string::~string((string *)&local_80);
    nop();
    iVar10 = 0;
    if (iVar3 != 0) {
      iVar10 = (iVar6 - iVar11 * iVar2) / iVar3;
    }
    iVar2 = iVar11 + iVar10;
    if ((0 < iVar10) || (0 < iVar11)) {
      pTVar14._0_4_ = (TimeLine *)0x40400000;
      do {
        ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
                  ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)local_68);
        ProbabilitySet<bool>::AddItem((ProbabilitySet<bool> *)local_68,false,iVar10);
        ProbabilitySet<bool>::AddItem((ProbabilitySet<bool> *)local_68,true,iVar11);
        cVar5 = ProbabilitySet<bool>::PickItem((ProbabilitySet<bool> *)local_68);
        if (cVar5 == '\0') {
          pcVar9 = spewSilverCoin;
          iVar10 = iVar10 + -1;
        }
        else {
          pcVar9 = spewGoldCoin;
          iVar11 = iVar11 + -1;
        }
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,pcVar9);
        Sexy::Delegate1<float>::Delegate1<CannonMinigameModule,void(CannonMinigameModule::*)(float)>
                  (aDStack_38,(string *)&local_80);
        TimeLine::AddEvent(pTVar14._0_4_,this + 0x88,aDStack_38);
        pTVar14._0_4_ = (TimeLine *)((float)pTVar14._0_4_ + 2.5 / (float)iVar2);
        ProbabilitySet<bool>::~ProbabilitySet((ProbabilitySet<bool> *)local_68);
      } while ((0 < iVar10) || (0 < iVar11));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03bbb88c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* CannonMinigameModule::updateGameplay() */

void CannonMinigameModule::updateGameplay(void)

{
  int iVar1;
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  CannonMinigameModule *in_x0;
  long lVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  WaveManager *this_00;
  ResilienceTutorialIntroProperties *pRVar6;
  ulong uVar7;
  int *piVar8;
  RtWeakPtr *this_01;
  ResourceInfo *this_02;
  Vec3 *pVVar9;
  Effect_FloatingText *pEVar10;
  ulong uVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  long lVar16;
  undefined4 in_s0;
  float fVar17;
  undefined4 uVar18;
  undefined1 extraout_var [12];
  undefined1 extraout_var_00 [12];
  undefined1 auVar19 [12];
  float fVar20;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_48;
  float local_40;
  Vec3 aVStack_38 [16];
  undefined4 local_28;
  float local_24;
  Color aCStack_18 [16];
  long local_8;
  ulong uVar15;
  
  local_8 = ___stack_chk_guard;
  updateCongaLine();
  lVar5 = FUN_03bb56fc(*(undefined8 *)(in_x0 + 0x38),*(undefined8 *)(in_x0 + 0x40));
  if (lVar5 != 0) {
    uVar11 = 0;
    uVar15 = 0xffffffff;
    iVar13 = -1;
    pRVar6 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)in_x0);
    iVar4 = FUN_03bb56fc(*(undefined8 *)(in_x0 + 0x38),*(undefined8 *)(in_x0 + 0x40));
    uVar12 = *(undefined8 *)(pRVar6 + 0x88);
    uVar7 = FUN_03bb5708(uVar12,*(undefined8 *)(pRVar6 + 0x90));
    if (uVar7 != 0) {
      do {
        piVar8 = (int *)FUN_03bb5744(uVar12,uVar11);
        iVar13 = *piVar8;
        if (iVar13 <= iVar4) {
          uVar14 = (uint)uVar15;
          if (uVar14 == 0xffffffff) {
            uVar15 = uVar11 & 0xffffffff;
          }
          else {
            piVar8 = (int *)FUN_03bb5744(uVar12,(long)(int)uVar14);
            if (*piVar8 < iVar13) {
              uVar14 = (uint)uVar11;
            }
            uVar15 = (ulong)uVar14;
          }
        }
        iVar13 = (int)uVar15;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar7);
    }
    Sexy::Color::Color(aCStack_18,1);
    if (iVar13 == -1) {
      fVar20 = 1.0;
      auVar19 = extraout_var;
    }
    else {
      lVar5 = FUN_03bb5744(*(undefined8 *)(pRVar6 + 0x88),(long)iVar13);
      fVar20 = *(float *)(lVar5 + 4);
      auVar19 = extraout_var_00;
    }
    iVar1 = *(int *)(pRVar6 + 0xa0);
    iVar4 = (int)(fVar20 * (float)iVar1) * iVar4;
    *(int *)(in_x0 + 0x50) = *(int *)(in_x0 + 0x50) + iVar4;
    auVar2._4_12_ = auVar19;
    auVar2._0_4_ = in_s0;
    fVar17 = CurveLerp<float>(auVar2,0x451c4000,(float)iVar4,&DAT_06a88560,&DAT_06a88564,1);
    *(float *)(in_x0 + 0x74) = fVar17;
    uVar18 = PVZ_T();
    *(undefined4 *)(in_x0 + 0x70) = uVar18;
    EATextSquish::Vec3::Vec3((Vec3 *)&local_58,0.0,0.0,0.0);
    uVar11 = 0;
    while( true ) {
      uVar12 = *(undefined8 *)(in_x0 + 0x38);
      uVar7 = FUN_03bb56fc(uVar12,*(undefined8 *)(in_x0 + 0x40));
      if (uVar7 <= uVar11) break;
      this_01 = (RtWeakPtr *)FUN_03bb5754(uVar12,uVar11);
      this_02 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
      pVVar9 = (Vec3 *)std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      *)this_02);
      local_48 = *(undefined8 *)pVVar9;
      local_40 = *(float *)(pVVar9 + 8) + 100.0;
      pEVar10 = Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar10,(SexyVector3 *)&local_48,-1)
      ;
      Sexy::StrFormat("%d",(string *)&local_28,(ulong)(uint)(int)(fVar20 * (float)iVar1));
      Effect_FloatingText::SetText(pEVar10,(string *)&local_28);
      std::string::~string((string *)&local_28);
      Effect_FloatingText::SetStyle(pEVar10,4);
      (**(code **)(*(long *)pEVar10 + 0x78))(pEVar10,aCStack_18);
      fVar17 = (float)Sexy::Rand(0.4);
      Effect_FloatingText::SetDuration(pEVar10,fVar17 + 1.0);
      fVar17 = (float)Sexy::Rand(4.0);
      EATextSquish::Vec3::Vec3(aVStack_38,fVar17 - 2.0,0.0,10.0);
      DVec3::DVec3((DVec3 *)&local_28);
      Effect_FloatingText::SetMotion(pEVar10,(SexyVector3 *)aVStack_38,(SexyVector3 *)&local_28);
      PresentDisplayRect::SetPAMScale((PresentDisplayRect *)pEVar10,0.8);
      EATextSquish::Vec3::operator+=((Vec3 *)&local_58,pVVar9);
      uVar11 = uVar11 + 1;
    }
    if (iVar13 != -1) {
      lVar16 = (long)iVar13;
      EATextSquish::Vec3::operator/=((Vec3 *)&local_58,(float)(long)uVar7);
      fVar20 = (float)FUN_03bb5fbc(local_58);
      fVar17 = (float)FUN_03bb5fbc(local_54);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_48,fVar20,fVar17);
      pEVar10 = Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
      StandaloneEffect::SetScreenSpaceOrigin
                ((StandaloneEffect *)pEVar10,(SexyVector2 *)&local_48,900000);
      getComboText((int)in_x0);
      Effect_FloatingText::SetText((wstring *)pEVar10);
      FUN_05476c50((DVec2 *)&local_28);
      Effect_FloatingText::SetStyle(pEVar10,3);
      lVar5 = FUN_03bb5744(*(undefined8 *)(pRVar6 + 0x88),lVar16);
      (**(code **)(*(long *)pEVar10 + 0x78))(pEVar10,lVar5 + 8);
      Effect_FloatingText::SetDuration(pEVar10,1.5);
      PresentDisplayRect::SetPAMScale((PresentDisplayRect *)pEVar10,1.5);
      (**(code **)(*(long *)pEVar10 + 0x80))(0x3fa00000,pEVar10);
      DVec2::DVec2((DVec2 *)&local_28,2.5,2.5);
      Effect_FloatingText::SetFinalScale(pEVar10,(DVec2 *)&local_28);
      pEVar10 = Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
      fVar20 = (float)FUN_03bb5fe0();
      Sexy::FastCurve::SetOutRange((FastCurve *)aVStack_38,0.0,fVar20);
      local_28 = Sexy::SexyVector2::operator+((SexyVector2 *)&local_48,(SexyVector2 *)aVStack_38);
      local_24 = fVar20;
      StandaloneEffect::SetScreenSpaceOrigin
                ((StandaloneEffect *)pEVar10,(SexyVector2 *)&local_28,900000);
      FUN_03bb5744(*(undefined8 *)(pRVar6 + 0x88),lVar16);
      getExclamationText((ComboBracket *)in_x0);
      Effect_FloatingText::SetText((wstring *)pEVar10);
      FUN_05476c50((DVec2 *)&local_28);
      Effect_FloatingText::SetStyle(pEVar10,5);
      lVar5 = FUN_03bb5744(*(undefined8 *)(pRVar6 + 0x88),lVar16);
      (**(code **)(*(long *)pEVar10 + 0x78))(pEVar10,lVar5 + 8);
      Effect_FloatingText::SetDuration(pEVar10,2.0);
      PresentDisplayRect::SetPAMScale((PresentDisplayRect *)pEVar10,1.75);
      (**(code **)(*(long *)pEVar10 + 0x80))(0x3f8ccccd,pEVar10);
      DVec2::DVec2((DVec2 *)&local_28,2.75,2.75);
      Effect_FloatingText::SetFinalScale(pEVar10,(DVec2 *)&local_28);
    }
  }
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)FUN_03bb76a0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)0x0) {
    this_00 = (WaveManager *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(this);
    cVar3 = WaveManager::IsDone(this_00);
    if (cVar3 == '\0') {
      Board::CountZombiesOnScreen(*(Board **)(gLawnApp + 0x9f0),false);
      goto LAB_03bbb718;
    }
  }
  iVar4 = Board::CountZombiesOnScreen(*(Board **)(gLawnApp + 0x9f0),false);
  if (iVar4 == 0) {
    startOutro(in_x0);
  }
LAB_03bbb718:
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (in_x0 + 0x38));
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* CannonMinigameModule::onUpdate() */

void __thiscall CannonMinigameModule::onUpdate(CannonMinigameModule *this)

{
  int iVar1;
  char cVar2;
  RichManUIMgr *this_00;
  
  iVar1 = *(int *)(this + 0x18);
  if (iVar1 == 2) {
    updateOutro();
    return;
  }
  if (iVar1 != 3) {
    if (iVar1 != 1) {
      return;
    }
    updateGameplay();
    updateScoreboard(this);
    return;
  }
  cVar2 = Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),1);
  if (cVar2 != '\0') {
    this_00 = (RichManUIMgr *)FUN_03bb7678(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    RichManUIMgr::SetPrevNode(this_00,1);
  }
  OakTrainModule::setState((OakTrainModule *)this,4);
  return;
}

