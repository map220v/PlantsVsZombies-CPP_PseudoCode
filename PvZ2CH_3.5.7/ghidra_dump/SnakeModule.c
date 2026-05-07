// Class: SnakeModule


/* SnakeModule::preventSave() */

undefined8 SnakeModule::preventSave(void)

{
  return 1;
}


/* SnakeModule::levelStarted() */

void SnakeModule::levelStarted(void)

{
  return;
}


/* SnakeModule::cancelTouch() */

void __thiscall SnakeModule::cancelTouch(SnakeModule *this)

{
  *(undefined8 *)(this + 0x30) = 0;
  return;
}


/* SnakeModule::onLawnMowerDie(LawnMower*) */

void SnakeModule::onLawnMowerDie(LawnMower *param_1)

{
  param_1[0x6c] = (LawnMower)0x1;
  return;
}


/* SnakeModule::onAnimDone_RunOutBorder(StandaloneEffect*) */

void SnakeModule::onAnimDone_RunOutBorder(StandaloneEffect *param_1)

{
  LawnApp::ShowReviveUI(gLawnApp,4);
  return;
}


/* SnakeModule::onZombieCloseToHouse(Zombie*) */

void __thiscall SnakeModule::onZombieCloseToHouse(SnakeModule *this,Zombie *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((this[0x74] == (SnakeModule)0x0) && (this[0x6c] != (SnakeModule)0x0)) {
    cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
    if ((cVar1 != '\0') && (this[0x28] != (SnakeModule)0x0)) {
      *(undefined4 *)(this + 0x68) = 5;
      this[0x74] = (SnakeModule)0x1;
      uVar2 = SharkMinion::getRow((SharkMinion *)param_1);
      *(undefined4 *)(this + 0x70) = uVar2;
      LawnApp::ShowReviveUI(gLawnApp,5);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeModule::StaticClassInit() */

void SnakeModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"SnakeModule");
    (*pcVar2)(plVar1,asStack_10,FUN_049d8038,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SnakeModule::StaticGetClass() */

long * SnakeModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SnakeModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SnakeModule::stopAllSnake() */

void __thiscall SnakeModule::stopAllSnake(SnakeModule *this)

{
  SnakeNode *pSVar1;
  
  for (pSVar1 = *(SnakeNode **)(this + 0x18); pSVar1 != (SnakeNode *)0x0;
      pSVar1 = *(SnakeNode **)(pSVar1 + 0xb0)) {
    SnakeNode::setState(pSVar1,0);
  }
  return;
}


/* SnakeModule::onSnakeHeadHitBody() */

void __thiscall SnakeModule::onSnakeHeadHitBody(SnakeModule *this)

{
  char cVar1;
  SnakeNode *this_00;
  float fVar2;
  
  if (((this[0x74] == (SnakeModule)0x0) &&
      (cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0)), cVar1 != '\0')) &&
     (this[0x28] != (SnakeModule)0x0)) {
    this[0x74] = (SnakeModule)0x1;
    this[0x41] = (SnakeModule)0x0;
    *(undefined4 *)(this + 0x68) = 3;
    stopAllSnake(this);
    for (this_00 = *(SnakeNode **)(this + 0x18); this_00 != (SnakeNode *)0x0;
        this_00 = *(SnakeNode **)(this_00 + 0xb0)) {
      SnakeNode::setIsBlink(this_00,true);
    }
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x7c) = fVar2 + 1.0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeModule::onUpdate() */

void __thiscall SnakeModule::onUpdate(SnakeModule *this)

{
  GridItemCardGameZombie *this_00;
  Board *this_01;
  float fVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x78) < fVar1) {
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0x78) = uVar2;
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(awStack_10,L"[SNAKE_SLOW_TIP]",auStack_18);
    Board::ClearAdvice(this_01,awStack_10);
    FUN_05476c50(awStack_10);
    nop();
    for (this_00 = *(GridItemCardGameZombie **)(this + 0x18);
        this_00 != (GridItemCardGameZombie *)0x0;
        this_00 = *(GridItemCardGameZombie **)(this_00 + 0xb0)) {
      GridItemCardGameZombie::EnableDrawHealthBar(this_00,false);
    }
  }
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x7c) < fVar1) {
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0x7c) = uVar2;
    if ((*(int *)(this + 0x68) == 2) || (*(int *)(this + 0x68) == 3)) {
      LawnApp::ShowReviveUI(gLawnApp);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeModule::onSnakeSlowDown() */

void __thiscall SnakeModule::onSnakeSlowDown(SnakeModule *this)

{
  GridItemCardGameZombie *this_00;
  Board *pBVar1;
  float fVar2;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  this_00 = *(GridItemCardGameZombie **)(this + 0x18);
  local_8 = ___stack_chk_guard;
  if (this_00 != (GridItemCardGameZombie *)0x0) {
    do {
      GridItemCardGameZombie::EnableDrawHealthBar(this_00,true);
      this_00 = *(GridItemCardGameZombie **)(this_00 + 0xb0);
    } while (this_00 != (GridItemCardGameZombie *)0x0);
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x78) = fVar2 + 5.0;
    pBVar1 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(auStack_10,L"[SNAKE_SLOW_TIP]",auStack_18);
    Board::DisplayAdviceAgain(pBVar1,auStack_10,0x1b,0);
    FUN_05476c50(auStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SnakeModule::adjustZombie(Zombie*) */

void __thiscall SnakeModule::adjustZombie(SnakeModule *this,Zombie *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  ulong uVar5;
  float *pfVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  float fVar11;
  Zombie *pZVar12;
  
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar1 = Board::GetCurrentWave(*(Board **)(gLawnApp + 0x9f0));
  uVar8 = (ulong)(int)uVar1;
  if (-1 < (int)uVar1) {
    uVar10 = *(undefined8 *)(pRVar4 + 0x78);
    uVar9 = (ulong)(int)uVar1;
    uVar5 = FUN_049d6130(uVar10,*(undefined8 *)(pRVar4 + 0x80));
    if (uVar9 < uVar5) {
      fVar11 = (float)FUN_049d6110(*(undefined4 *)(param_1 + 0x284));
      pfVar6 = (float *)FUN_049d614c(uVar10,uVar9);
      Zombie::SetHitpoints(param_1,fVar11 * *pfVar6);
      fVar11 = (float)FUN_049d6110(*(undefined4 *)(param_1 + 0x284));
      pfVar6 = (float *)FUN_049d614c(*(undefined8 *)(pRVar4 + 0x78),uVar9);
      FUN_049d6108(fVar11 * *pfVar6,param_1 + 0x284);
      uVar2 = FUN_049d6114(*(undefined4 *)(param_1 + 0xb0));
      fVar11 = (float)FUN_049d6118(*(undefined4 *)(param_1 + 0x2ac));
      pfVar6 = (float *)FUN_049d614c(*(undefined8 *)(pRVar4 + 0x78),uVar9);
      Zombie::setHelm((Zombie *)(fVar11 * *pfVar6),param_1,uVar2);
    }
    uVar10 = *(undefined8 *)(pRVar4 + 0x60);
    uVar5 = FUN_049d611c(uVar10,*(undefined8 *)(pRVar4 + 0x68));
    if ((uVar9 < uVar5) && (piVar7 = (int *)FUN_049d6128(uVar10,uVar9), *piVar7 == 1)) {
      FUN_049d615c(param_1 + 0x54);
    }
  }
  uVar3 = Zombie::GetHasPlantFood(param_1);
  if ((uVar3 & 0xff) < ~uVar1 >> 0x1f) {
    uVar10 = *(undefined8 *)(this + 0x50);
    uVar5 = FUN_049d611c(uVar10,*(undefined8 *)(this + 0x58));
    if ((uVar8 < uVar5) && (piVar7 = (int *)FUN_049d6154(uVar10,uVar8), 0 < *piVar7)) {
      pZVar12 = (Zombie *)PVZ_EOT();
      Zombie::ApplyCondition(pZVar12,0,param_1,0x2a,1);
      piVar7 = (int *)FUN_049d6154(*(undefined8 *)(this + 0x50),uVar8);
      *piVar7 = *piVar7 + -1;
    }
  }
  return;
}


/* SnakeModule::onZombieSpawned(Zombie*) */

void __thiscall SnakeModule::onZombieSpawned(SnakeModule *this,Zombie *param_1)

{
  if (param_1 != (Zombie *)0x0) {
    Zombie::SetHasDroppedLoot(param_1,true);
    Zombie::SetZombieScale(param_1,0.68);
    adjustZombie(this,param_1);
    return;
  }
  return;
}


/* SnakeModule::onZombieRiseFromGround(Zombie*) */

void __thiscall SnakeModule::onZombieRiseFromGround(SnakeModule *this,Zombie *param_1)

{
  if (param_1 != (Zombie *)0x0) {
    Zombie::SetHasDroppedLoot(param_1,true);
    Zombie::SetZombieScale(param_1,0.68);
    adjustZombie(this,param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeModule::gameplayStarted() */

void __thiscall SnakeModule::gameplayStarted(SnakeModule *this)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  UIWidget *pUVar3;
  GroupInfo *pGVar4;
  Board *this_00;
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [8];
  string asStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  std::string::string(asStack_18,"UIPlantfood");
  pUVar3 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (pUVar3 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar3,false);
  }
  std::string::string(asStack_18,"UIPowerupHolder");
  pUVar3 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (pUVar3 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar3,false);
  }
  std::string::string(asStack_18,"UIShovel");
  pUVar3 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (pUVar3 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar3,false);
  }
  local_30 = FUN_049d6d68(*(undefined8 *)(pRVar2 + 0x90));
  local_28 = FUN_049d6db8(*(undefined8 *)(pRVar2 + 0x98));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    pGVar4 = (GroupInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo((GroupInfo *)asStack_18,pGVar4);
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_20,"snakeblock");
    Board::AddGridItem(this_00,asStack_20,local_10,local_c,1);
    std::string::~string(asStack_20);
    nop();
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_18);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_30);
  }
  if (*(SnakeNode **)(this + 0x18) != (SnakeNode *)0x0) {
    SnakeNode::setState(*(SnakeNode **)(this + 0x18),1);
  }
  this[0x28] = (SnakeModule)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeModule::onSnakeHitBlock() */

void __thiscall SnakeModule::onSnakeHitBlock(SnakeModule *this)

{
  char cVar1;
  float *pfVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  float fVar4;
  float fVar5;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x74] == (SnakeModule)0x0) {
    cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
    if ((cVar1 != '\0') && (this[0x28] != (SnakeModule)0x0)) {
      this[0x74] = (SnakeModule)0x1;
      this[0x41] = (SnakeModule)0x0;
      *(undefined4 *)(this + 0x68) = 2;
      stopAllSnake(this);
      pfVar2 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(this + 0x18));
      fVar4 = *pfVar2;
      fVar5 = pfVar2[1];
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_20,"POPANIM_EFFECTS_ZOMBIE_STUNNED");
      GetPAMByName(asStack_20);
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      std::string::~string(asStack_20);
      nop();
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar4 - 85.0,fVar5 - 60.0,0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
      FUN_049d6168(this_00 + 0x1c);
      std::string::string((string *)aRStack_18,"stun");
      Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)0x3f800000,this_00,aRStack_18,2);
      std::string::~string((string *)aRStack_18);
      nop();
      fVar4 = (float)PVZ_T();
      *(float *)(this + 0x7c) = fVar4 + 1.0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeModule::onSnakeAdd() */

void __thiscall SnakeModule::onSnakeAdd(SnakeModule *this)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  SnakeNode *pSVar5;
  ResourceInfo *pRVar6;
  undefined8 *puVar7;
  long lVar8;
  Effect_PopAnim *this_00;
  Board *pBVar9;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float fVar10;
  RtWeakPtr aRStack_38 [8];
  string asStack_30 [8];
  undefined8 local_28;
  undefined4 local_20;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  std::string::string(asStack_18,"POPANIM_SNAKE_SNAKE");
  GetPAMByName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  pSVar5 = GameObject::Create<SnakeNode>();
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_38);
  SnakeNode::SnakeNodeInitialize(pSVar5,(PopAnim *)pRVar6);
  DTextField::setTextFieldType((DTextField *)pSVar5,*(undefined4 *)(pRVar4 + 0x40));
  SnakeNode::setCurrentStep(pSVar5,*(float *)(this + 0x48));
  this_01 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x20);
  puVar7 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_01);
  local_28 = *puVar7;
  local_20 = *(undefined4 *)(puVar7 + 1);
  uVar3 = SnakeNode::getState((SnakeNode *)this_01);
  switch(uVar3) {
  case 1:
    local_28 = CONCAT44(local_28._4_4_,(float)local_28 - 24.0);
    break;
  case 2:
    local_28 = CONCAT44(local_28._4_4_,(float)local_28 + 24.0);
    break;
  case 3:
    local_28 = CONCAT44(local_28._4_4_ + 24.0,(float)local_28);
    break;
  case 4:
    local_28 = CONCAT44(local_28._4_4_ - 24.0,(float)local_28);
  }
  (**(code **)(*(long *)pSVar5 + 0x78))(pSVar5,&local_28);
  uVar3 = SnakeNode::getState(*(SnakeNode **)(this + 0x20));
  SnakeNode::setState(pSVar5,uVar3);
  bVar2 = (bool)SnakeNode::IsSlowDown(*(SnakeNode **)(this + 0x20));
  GridItemCardGameZombie::EnableDrawHealthBar((GridItemCardGameZombie *)pSVar5,bVar2);
  lVar8 = *(long *)(this + 0x20);
  iVar1 = *(int *)(this + 0x44);
  *(SnakeNode **)(lVar8 + 0xb0) = pSVar5;
  *(long *)(pSVar5 + 0xa8) = lVar8;
  *(SnakeNode **)(this + 0x20) = pSVar5;
  *(int *)(this + 0x44) = iVar1 + 1;
  *(int *)(pSVar5 + 0xb8) = iVar1 + 1;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_30,"POPANIM_SNAKE_SNAKE_ADD_EFFECT");
  GetPAMByName(asStack_30);
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar6,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  std::string::~string(asStack_30);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,(float)local_28 - 85.0,local_28._4_4_ - 135.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)asStack_18,-1);
  FUN_049d6168(this_00 + 0x1c);
  std::string::string(asStack_18,"Animation");
  Effect_PopAnim::PlaySingleAnimation(this_00,asStack_18,0);
  std::string::~string(asStack_18);
  nop();
  if (*(int *)(this + 0x44) == (*(int *)(this + 0x44) / 5) * 5) {
    pSVar5 = *(SnakeNode **)(this + 0x18);
    fVar10 = *(float *)(this + 0x48) + 0.25;
    *(float *)(this + 0x48) = fVar10;
    if (pSVar5 != (SnakeNode *)0x0) {
      while( true ) {
        SnakeNode::setCurrentStep(pSVar5,fVar10);
        pSVar5 = *(SnakeNode **)(pSVar5 + 0xb0);
        if (pSVar5 == (SnakeNode *)0x0) break;
        fVar10 = *(float *)(this + 0x48);
      }
    }
  }
  pBVar9 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(asStack_18,L"[SNAKE_ADD_TIP]",asStack_30);
  Board::DisplayAdviceAgain(pBVar9,asStack_18,0x1a,0);
  FUN_05476c50(asStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SnakeModule::SnakeModule() */

void __thiscall SnakeModule::SnakeModule(SnakeModule *this)

{
  undefined4 uVar1;
  
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06929400;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  this[0x41] = (SnakeModule)0x1;
  this[0x6c] = (SnakeModule)0x1;
  this[0x74] = (SnakeModule)0x0;
  *(undefined4 *)(this + 0x68) = 2;
  this[0x28] = (SnakeModule)0x0;
  this[0x40] = (SnakeModule)0x0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x48) = 0x40000000;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x78) = uVar1;
  *(undefined4 *)(this + 0x7c) = uVar1;
  return;
}


/* SnakeModule::StaticNew() */

SnakeModule * SnakeModule::StaticNew(void)

{
  SnakeModule *this;
  
  this = ::operator_new(0x80);
  SnakeModule(this);
  return this;
}


/* SnakeModule::~SnakeModule() */

void __thiscall SnakeModule::~SnakeModule(SnakeModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06929400;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x50));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* SnakeModule::~SnakeModule() */

void __thiscall SnakeModule::~SnakeModule(SnakeModule *this)

{
  ~SnakeModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeModule::onReviveCancel() */

void __thiscall SnakeModule::onReviveCancel(SnakeModule *this)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  wchar_t *pwVar4;
  code *pcVar5;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x68);
  this[0x74] = (SnakeModule)0x0;
  local_8 = ___stack_chk_guard;
  if (iVar1 == 4) {
    cVar2 = Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),0);
    if (cVar2 != '\0') {
      plVar3 = (long *)FUN_049d78e8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
      pcVar5 = *(code **)(*plVar3 + 0xa0);
      FUN_05478178(auStack_10,L"[SNAKE_RUN_OUT_BOARDER_MESSAGE]",auStack_18);
      (*pcVar5)(plVar3,auStack_10);
      FUN_05476c50(auStack_10);
      nop();
      this[0x28] = (SnakeModule)0x0;
    }
    goto LAB_049d7960;
  }
  if (iVar1 == 3) {
    cVar2 = Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),0);
    if (cVar2 == '\0') goto LAB_049d7960;
    plVar3 = (long *)FUN_049d78e8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    pwVar4 = L"[SNAKE_HIT_BODY_MESSAGE]";
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 5) {
        this[0x6c] = (SnakeModule)0x0;
      }
      goto LAB_049d7960;
    }
    cVar2 = Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),0);
    if (cVar2 == '\0') goto LAB_049d7960;
    plVar3 = (long *)FUN_049d78e8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    pwVar4 = L"[SNAKE_HIT_BLOCK_MESSAGE]";
  }
  pcVar5 = *(code **)(*plVar3 + 0xa0);
  FUN_05478178(auStack_10,pwVar4,auStack_18);
  (*pcVar5)(plVar3,auStack_10);
  FUN_05476c50(auStack_10);
  nop();
  this[0x28] = (SnakeModule)0x0;
  stopAllSnake(this);
LAB_049d7960:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeModule::onSnakeRunOutBorder() */

void __thiscall SnakeModule::onSnakeRunOutBorder(SnakeModule *this)

{
  char cVar1;
  float *pfVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  float fVar4;
  float fVar5;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtWeakPtr aRStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x74] == (SnakeModule)0x0) {
    cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
    if ((cVar1 != '\0') && (this[0x28] != (SnakeModule)0x0)) {
      this[0x74] = (SnakeModule)0x1;
      this[0x41] = (SnakeModule)0x0;
      *(undefined4 *)(this + 0x68) = 4;
      stopAllSnake(this);
      pfVar2 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(this + 0x18));
      fVar5 = *pfVar2;
      fVar4 = pfVar2[1];
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_68,"POPANIM_SNAKE_SNAKE_SMOKE_EFFECT");
      GetPAMByName(asStack_68);
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_60);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
      std::string::~string(asStack_68);
      nop();
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_60,fVar5 - 48.0,fVar4 - 105.0,0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_60,-1);
      FUN_049d6168(this_00 + 0x1c);
      std::string::string((string *)aRStack_60,"animation");
      Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_60,0);
      std::string::~string((string *)aRStack_60);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string((string *)aRStack_60,"onAnimDone_RunOutBorder");
      RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_68,
                 aRStack_60);
      StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this_00,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)aRStack_60);
      nop();
      Sexy::RtId::~RtId((RtId *)asStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeModule::handleTouch(Sexy::Touch const&) */

void __thiscall SnakeModule::handleTouch(SnakeModule *this,Touch *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  SnakeModule SVar6;
  SnakeNode *this_00;
  float fVar7;
  float fVar8;
  float local_18;
  float local_14;
  undefined4 local_10;
  float fStack_c;
  long local_8;
  
  SVar6 = this[0x41];
  local_8 = ___stack_chk_guard;
  if (SVar6 == (SnakeModule)0x0) goto switchD_049d89a4_caseD_2;
  if ((*(long *)(this + 0x30) == 0) && (*(int *)(param_1 + 0x30) == 0)) {
    lVar4 = *(long *)param_1;
switchD_049d89a4_caseD_0:
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    *(long *)(this + 0x30) = lVar4;
    iVar2 = FUN_049d6408(uVar1);
    iVar3 = FUN_049d6408(*(undefined4 *)(param_1 + 0x14));
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)iVar2,(float)iVar3);
    this[0x40] = (SnakeModule)0x0;
    *(ulong *)(this + 0x38) = CONCAT44(fStack_c,local_10);
  }
  else {
    lVar4 = *(long *)param_1;
    if (*(long *)(this + 0x30) != lVar4) {
      SVar6 = (SnakeModule)0x0;
      goto switchD_049d89a4_caseD_2;
    }
    switch(*(undefined4 *)(param_1 + 0x30)) {
    case 0:
      goto switchD_049d89a4_caseD_0;
    case 1:
      iVar2 = FUN_049d6408(*(undefined4 *)(param_1 + 0x10));
      iVar3 = FUN_049d6408(*(undefined4 *)(param_1 + 0x14));
      fVar7 = (float)iVar3;
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)iVar2,fVar7);
      local_10 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_18,(SexyVector2 *)(this + 0x38))
      ;
      fStack_c = fVar7;
      fVar7 = (float)VectorNorm((FPoint *)&local_10);
      fVar8 = 3600.0;
      if (3600.0 < fVar7) {
        this[0x40] = (SnakeModule)0x1;
        fVar7 = (float)Sexy::SexyVector2::Normalize((SexyVector2 *)&local_10);
        if (fVar7 <= 0.5) {
          if (-0.5 <= fVar7) {
            if (fVar8 <= 0.5) {
              if ((-0.5 <= fVar8) || (*(SnakeNode **)(this + 0x18) == (SnakeNode *)0x0)) break;
              SnakeNode::setTouchState(*(SnakeNode **)(this + 0x18),3);
              uVar5 = 3;
            }
            else {
              if (*(SnakeNode **)(this + 0x18) == (SnakeNode *)0x0) break;
              SnakeNode::setTouchState(*(SnakeNode **)(this + 0x18),4);
              uVar5 = 4;
            }
          }
          else {
            if (*(SnakeNode **)(this + 0x18) == (SnakeNode *)0x0) break;
            SnakeNode::setTouchState(*(SnakeNode **)(this + 0x18),2);
            uVar5 = 2;
          }
        }
        else {
          if (*(SnakeNode **)(this + 0x18) == (SnakeNode *)0x0) break;
          SnakeNode::setTouchState(*(SnakeNode **)(this + 0x18),1);
          uVar5 = 1;
        }
        MessageRouter::Post<int,SnakeState>
                  ((MessageRouter *)gMessageRouter,Message::SnakeHandleTouchState,uVar5);
      }
      break;
    case 3:
      iVar2 = FUN_049d6408(*(undefined4 *)(param_1 + 0x10));
      iVar3 = FUN_049d6408(*(undefined4 *)(param_1 + 0x14));
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)iVar2,(float)iVar3);
      if ((this[0x40] == (SnakeModule)0x0) &&
         (this_00 = *(SnakeNode **)(this + 0x18), this_00 != (SnakeNode *)0x0)) {
        Sexy::Point::Point((Point *)&local_10,(int)local_18,(int)local_14);
        SnakeNode::HandleTouch(this_00,(Point *)&local_10);
      }
      this[0x40] = (SnakeModule)0x0;
      cancelTouch(this);
      break;
    case 4:
      cancelTouch(this);
    }
  }
switchD_049d89a4_caseD_2:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(SVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeModule::onReviveOK() */

void __thiscall SnakeModule::onReviveOK(SnakeModule *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  LawnMower *this_00;
  ResourceInfo *pRVar4;
  SnakeNode *this_01;
  RtWeakPtr aRStack_48 [8];
  string asStack_40 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  float local_20;
  float local_1c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x41] = (SnakeModule)0x1;
  this[0x74] = (SnakeModule)0x0;
  if (*(int *)(this + 0x68) == 5) {
    std::string::string((string *)&local_20,"POPANIM_MOWERS_MOWER_BEACH");
    GetPAMByName((string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
    this_00 = GameObject::Create<LawnMower>();
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_48);
    uVar1 = *(undefined4 *)(this + 0x70);
    std::string::string(asStack_40,"Play_UI_Game_Mower_Beach_TurnOn");
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)&local_20,(vector *)avStack_38);
    LawnMower::LawnMowerInitialize(this_00,pRVar4,uVar1,asStack_40,(string *)&local_20);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
    std::string::~string(asStack_40);
    nop();
    LawnMower::StartMower(this_00);
    this[0x6c] = (SnakeModule)0x0;
    puVar2 = gMessageRouter;
    std::string::string((string *)&local_20,"SnakeMower");
    MessageRouter::Post<std::string_const&,int,int,std::string,int,int>
              ((MessageRouter *)puVar2,Message::MissionGemUse,(string *)&local_20,10,0);
    std::string::~string((string *)&local_20);
    nop();
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  }
  else {
    if (*(SnakeNode **)(this + 0x18) != (SnakeNode *)0x0) {
      SnakeNode::setTouchState(*(SnakeNode **)(this + 0x18),0xffffffff);
      DVec3::DVec3((DVec3 *)&local_20);
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      local_20 = (float)iVar3 * 0.5 + 190.0;
      iVar3 = BoardTransforms::GridToBoardSpaceY(2);
      local_1c = (float)iVar3;
      for (this_01 = *(SnakeNode **)(this + 0x18); this_01 != (SnakeNode *)0x0;
          this_01 = *(SnakeNode **)(this_01 + 0xb0)) {
        (**(code **)(*(long *)this_01 + 0x78))(this_01,(DVec3 *)&local_20);
        SnakeNode::setState(this_01,1);
        SnakeNode::setIsBlink(this_01,false);
        local_20 = local_20 - 24.0;
      }
    }
    puVar2 = gMessageRouter;
    std::string::string((string *)&local_20,"SnakeRevive");
    MessageRouter::Post<std::string_const&,int,int,std::string,int,int>
              ((MessageRouter *)puVar2,Message::MissionGemUse,(string *)&local_20,10,0);
    std::string::~string((string *)&local_20);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall SnakeModule::AddResourceRequirements(SnakeModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  std::string::string(asStack_10,"SnakeGame");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"BeachMowerGroup");
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
/* SnakeModule::loadComplete() */

void __thiscall SnakeModule::loadComplete(SnakeModule *this)

{
  bool bVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  SnakeNode *this_00;
  ResourceInfo *pRVar4;
  int *piVar5;
  int local_34;
  RtWeakPtr aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  std::string::string((string *)&local_18,"POPANIM_SNAKE_SNAKE");
  GetPAMByName((string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  this_00 = GameObject::Create<SnakeNode>();
  *(SnakeNode **)(this + 0x18) = this_00;
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
  SnakeNode::SnakeNodeInitialize(this_00,(PopAnim *)pRVar4);
  DTextField::setTextFieldType(*(DTextField **)(this + 0x18),*(undefined4 *)(pRVar3 + 0x40));
  SnakeNode::setCurrentStep(*(SnakeNode **)(this + 0x18),*(float *)(this + 0x48));
  DVec3::DVec3((DVec3 *)&local_18);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  local_18 = (float)iVar2 * 0.5 + 190.0;
  iVar2 = BoardTransforms::GridToBoardSpaceY(2);
  local_14 = (float)iVar2;
  (**(code **)(**(long **)(this + 0x18) + 0x78))(*(long **)(this + 0x18),(string *)&local_18);
  iVar2 = *(int *)(this + 0x44);
  *(long *)(this + 0x20) = *(long *)(this + 0x18);
  *(int *)(this + 0x44) = iVar2 + 1;
  *(int *)(*(long *)(this + 0x18) + 0xb8) = iVar2 + 1;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x50));
  local_28 = FUN_049d6cc8(*(undefined8 *)(pRVar3 + 0x48));
  local_20 = FUN_049d6d18(*(undefined8 *)(pRVar3 + 0x50));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    local_34 = *piVar5;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)(this + 0x50),&local_34);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_28);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeModule::registerForEvents() */

void __thiscall SnakeModule::registerForEvents(SnakeModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  Board *pBVar3;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  CBMemberTranslatorX aCStack_e0 [24];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
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
  Sexy::Delegate0::Delegate0<SnakeModule,void(SnakeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,levelStarted);
  Sexy::Delegate0::Delegate0<SnakeModule,void(SnakeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnIntroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<SnakeModule,void(SnakeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<SnakeModule,void(SnakeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,preventSave);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<SnakeModule,bool(SnakeModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterCanPreventSave(pLVar2,aDStack_38);
  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<SnakeModule,bool(SnakeModule::*)(Sexy::Touch_const&)>
            (aDStack_68,(CBMemberTranslatorX *)&local_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_b0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<SnakeModule,void(SnakeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  Board::RegisterTouchGameplayObject
            (pBVar3,aDStack_68,4,
             (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_b0,aDStack_38)
  ;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSnakeAdd);
  Sexy::Delegate0::Delegate0<SnakeModule,void(SnakeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::SnakeAdd,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSnakeHitBlock);
  Sexy::Delegate0::Delegate0<SnakeModule,void(SnakeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::SnakeHitBlock,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieSpawned);
  local_f0 = local_b8;
  local_100 = local_c8;
  uStack_f8 = uStack_c0;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<SnakeModule,void(SnakeModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_100);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieRiseFromGround);
  local_100 = local_b0;
  uStack_f8 = uStack_a8;
  local_f0 = local_a0;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<SnakeModule,void(SnakeModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieRiseFromGround,&local_100);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieCloseToHouse);
  local_100 = local_98;
  uStack_f8 = uStack_90;
  local_f0 = local_88;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<SnakeModule,void(SnakeModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieCloseToHouse,&local_100);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSnakeHeadHitBody);
  Sexy::Delegate0::Delegate0<SnakeModule,void(SnakeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::SnakeHeadHitBody,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSnakeRunOutBorder);
  Sexy::Delegate0::Delegate0<SnakeModule,void(SnakeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::SnakeRunOutBorder,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSnakeSlowDown);
  Sexy::Delegate0::Delegate0<SnakeModule,void(SnakeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::SnakeSlowDown,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLawnMowerDie);
  local_120 = local_80;
  uStack_118 = uStack_78;
  local_110 = local_70;
  MessageRouter::
  Subscribe<LawnMower*,Sexy::CBMemberTranslatorX<SnakeModule,void(SnakeModule::*)(LawnMower*)>>
            ((MessageRouter *)puVar1,Message::MowerDie,&local_120);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReviveOK);
  Sexy::Delegate0::Delegate0<SnakeModule,void(SnakeModule::*)()>(aDStack_38,aCStack_e0);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ReviveSucceed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReviveCancel);
  Sexy::Delegate0::Delegate0<SnakeModule,void(SnakeModule::*)()>(aDStack_38,aCStack_e0);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ReviveClose,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

