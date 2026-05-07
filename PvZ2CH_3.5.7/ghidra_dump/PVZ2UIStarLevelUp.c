// Class: PVZ2UIStarLevelUp


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIStarLevelUp::~PVZ2UIStarLevelUp() */

void __thiscall PVZ2UIStarLevelUp::~PVZ2UIStarLevelUp(PVZ2UIStarLevelUp *this)

{
  LawnApp *pLVar1;
  long *plVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0683cbe0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  if (*(long **)(this + 0xe8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe8) + 0x18))();
    *(undefined8 *)(this + 0xe8) = 0;
  }
  if (*(long **)(this + 0xd8) == (long *)0x0) {
    plVar2 = *(long **)(this + 0x158);
  }
  else {
    (**(code **)(**(long **)(this + 0xd8) + 0x18))();
    *(undefined8 *)(this + 0xd8) = 0;
    plVar2 = *(long **)(this + 0x158);
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
    *(undefined8 *)(this + 0x158) = 0;
  }
  if (*(long **)(this + 0x160) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x160) + 0x18))();
    *(undefined8 *)(this + 0x160) = 0;
  }
  if (*(long **)(this + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x168) + 0x18))();
    *(undefined8 *)(this + 0x168) = 0;
  }
  if (*(long **)(this + 0x170) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x170) + 0x18))();
    *(undefined8 *)(this + 0x170) = 0;
  }
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
  std::string::string(asStack_10,"Effects_LevelUp");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelUp");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string((string *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIStarLevelUp::~PVZ2UIStarLevelUp() */

void __thiscall PVZ2UIStarLevelUp::~PVZ2UIStarLevelUp(PVZ2UIStarLevelUp *this)

{
  ~PVZ2UIStarLevelUp(this);
  AK::FreeHook(this);
  return;
}


/* PVZ2UIStarLevelUp::onAnimStopped(std::string const&) */

void PVZ2UIStarLevelUp::onAnimStopped(string *param_1)

{
  if (*(int *)(param_1 + 0x150) == 0) {
    return;
  }
  param_1[0xe0] = (string)0x1;
  LawnApp::KillPlantStarLevelUpAnimUI(gLawnApp);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* PVZ2UIStarLevelUp::TouchEnded(Sexy::Touch const&) */

void PVZ2UIStarLevelUp::TouchEnded(Touch *param_1)

{
  if (*(int *)(param_1 + 0x150) == 0) {
    if (*(int *)(param_1 + 0x10c) - 9U < 2) {
      if (*(int *)(param_1 + 0x10c) == 10) {
        LawnApp::KillPlantStarLevelUpAnimUI(gLawnApp);
        MessageRouter::Post((_func_void *)gMessageRouter);
        return;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x10c) = 9;
    }
  }
  return;
}


/* PVZ2UIStarLevelUp::StartTimer() */

void __thiscall PVZ2UIStarLevelUp::StartTimer(PVZ2UIStarLevelUp *this)

{
  FUN_0438cb0c(this + 0x110,this + 0x120);
  return;
}


/* PVZ2UIStarLevelUp::CheckCooldownAndReset(bool) */

bool __thiscall PVZ2UIStarLevelUp::CheckCooldownAndReset(PVZ2UIStarLevelUp *this,bool param_1)

{
  PerfTimer *this_00;
  bool bVar1;
  double dVar2;
  double dVar3;
  
  if (param_1) {
    dVar3 = 0.30000001192092896;
  }
  else {
    dVar3 = 0.6000000238418579;
  }
  this_00 = (PerfTimer *)(this + 0x110);
  dVar2 = (double)Sexy::PerfTimer::GetDuration(this_00);
  bVar1 = dVar3 <= dVar2 * 0.001;
  if (bVar1) {
    Sexy::PerfTimer::Stop(this_00);
    FUN_0438cb0c(this_00,this + 0x120);
  }
  return bVar1;
}


/* PVZ2UIStarLevelUp::NotifyUpdateComplete(bool) */

void __thiscall PVZ2UIStarLevelUp::NotifyUpdateComplete(PVZ2UIStarLevelUp *this,bool param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x148);
  if (iVar1 == 1) {
    PlantLevelUpIconWidget::RequestForUpdate(*(PlantLevelUpIconWidget **)(this + 0x138),param_1);
    return;
  }
  if (iVar1 != 2) {
    if (iVar1 != 3) {
      return;
    }
    *(undefined4 *)(this + 0x10c) = 10;
    return;
  }
  PlantLevelUpIconWidget::RequestForUpdate(*(PlantLevelUpIconWidget **)(this + 0x140),param_1);
  return;
}


/* PVZ2UIStarLevelUp::IncrementUpdateCount() */

void __thiscall PVZ2UIStarLevelUp::IncrementUpdateCount(PVZ2UIStarLevelUp *this)

{
  *(int *)(this + 0x148) = *(int *)(this + 0x148) + 1;
  return;
}


/* PVZ2UIStarLevelUp::GetUpdateCount() */

undefined4 __thiscall PVZ2UIStarLevelUp::GetUpdateCount(PVZ2UIStarLevelUp *this)

{
  return *(undefined4 *)(this + 0x148);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIStarLevelUp::CreateAllIcons() */

void __thiscall PVZ2UIStarLevelUp::CreateAllIcons(PVZ2UIStarLevelUp *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  PlantLevelUpIconWidget *pPVar4;
  long *plVar5;
  IconData aIStack_28 [8];
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  int local_18 [2];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  IconData::IconData(aIStack_28);
  thunk_FUN_05475e00(aIStack_28,this + 0xf0);
  local_1c = 0;
  local_20 = *(undefined4 *)(this + 0x108);
  local_1b = 0;
  IconData::IconData((IconData *)local_18,aIStack_28);
  pPVar4 = ::operator_new(0x150);
  PlantLevelUpIconWidget::PlantLevelUpIconWidget(pPVar4,(IconData *)local_18,this);
  *(PlantLevelUpIconWidget **)(this + 0x130) = pPVar4;
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)local_18);
  (**(code **)(**(long **)(this + 0x130) + 0x48))((IconData *)local_18,*(long **)(this + 0x130));
  iVar3 = local_10;
  iVar1 = FUN_0438cc10(0x23);
  plVar5 = *(long **)(this + 0x130);
  uVar2 = FUN_0438cc10(0x1b8);
  (**(code **)(*plVar5 + 0x1a8))
            (plVar5,((iVar3 * -2 - iVar1) + *(int *)(gLawnApp + 0xd4)) / 2,uVar2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x130));
  thunk_FUN_05475e00(aIStack_28,this + 0xf0);
  plVar5 = *(long **)(this + 0x130);
  local_20 = *(undefined4 *)(this + 0x108);
  local_1c = 1;
  local_1b = 0;
  (**(code **)(*plVar5 + 0x48))((IconData *)local_18,plVar5);
  (**(code **)(*plVar5 + 0x48))((IconData *)local_18,plVar5);
  iVar3 = FUN_0438cc10(0x23);
  IconData::IconData((IconData *)local_18,aIStack_28);
  pPVar4 = ::operator_new(0x150);
  PlantLevelUpIconWidget::PlantLevelUpIconWidget(pPVar4,(IconData *)local_18,this);
  *(PlantLevelUpIconWidget **)(this + 0x138) = pPVar4;
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)local_18);
  plVar5 = *(long **)(this + 0x138);
  uVar2 = FUN_0438cc10(0x1b8);
  (**(code **)(*plVar5 + 0x1a8))(plVar5,local_10 + local_18[0] + iVar3,uVar2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x138));
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIStarLevelUp::PVZ2UIStarLevelUp(int, int) */

void __thiscall
PVZ2UIStarLevelUp::PVZ2UIStarLevelUp(PVZ2UIStarLevelUp *this,int param_1,int param_2)

{
  LawnApp *pLVar1;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0683cbe0;
  Set8BytesTo0(this + 0xf0);
  Sexy::Insets::Insets((Insets *)(this + 0xf8));
  Sexy::PerfTimer::PerfTimer((PerfTimer *)(this + 0x110));
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelCommon");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelCommon2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_LevelUp");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelUp");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::Widget::Resize((Widget *)this,0,0,param_1,param_2);
  this[0xe0] = (PVZ2UIStarLevelUp)0x0;
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  this[0x14c] = (PVZ2UIStarLevelUp)0x0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIStarLevelUp::CreateTitleEffect() */

void __thiscall PVZ2UIStarLevelUp::CreateTitleEffect(PVZ2UIStarLevelUp *this)

{
  int iVar1;
  int iVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  PopAnimRig *pPVar4;
  StandaloneEffect *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  RtWeakPtr aRStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0xd8) = this_00;
  std::string::string(asStack_58,"POPANIM_EFFECTS_LEVELUP_TITLE");
  GetPAMByName(asStack_58);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_50);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0xd8),true);
  this_01 = *(StandaloneEffect **)(this + 0xd8);
  iVar2 = *(int *)(this + 0x54);
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)aRStack_50,(float)(*(int *)(this + 0x50) / 2),(float)(iVar1 >> 2));
  StandaloneEffect::SetScreenSpaceOrigin(this_01,(SexyVector2 *)aRStack_50,900000);
  Effect_PopAnim::GetPopAnimRigPtr();
  pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  std::string::string(asStack_58,"anim");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimStopped);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PVZ2UIStarLevelUp,void(PVZ2UIStarLevelUp::*)(std::string_const&)>(aDStack_38,aRStack_50)
  ;
  PopAnimRig::PlayAndStop(pPVar4,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIStarLevelUp::CreateLevelEffect() */

void __thiscall PVZ2UIStarLevelUp::CreateLevelEffect(PVZ2UIStarLevelUp *this)

{
  int iVar1;
  Effect_PopAnim *this_00;
  Effect_PopAnim *this_01;
  long lVar2;
  PopAnimRig *pPVar3;
  ResourceInfo *pRVar4;
  char *__s;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  this_01 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  if (*(int *)(this + 0x108) - 2U < 4) {
    switch(*(int *)(this + 0x108)) {
    default:
      __s = "POPANIM_EFFECTS_LEVEL_EFFECT_BLUE";
      break;
    case 4:
    case 5:
      __s = "POPANIM_EFFECTS_LEVEL_EFFECT_GOLD";
    }
    std::string::string(asStack_18,__s);
    GetPAMByName(asStack_18);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    std::string::~string(asStack_18);
    nop();
  }
  iVar1 = FUN_0438cc10(10);
  iVar1 = (*(int *)(gLawnApp + 0xd8) - *(int *)(this + 0x104)) / 2 - iVar1;
  if ((this_00 != (Effect_PopAnim *)0x0) &&
     (lVar2 = UIWidget::GetAtlasImage((UIWidget *)this_00), lVar2 != 0)) {
    std::string::string((string *)aRStack_10,"animation");
    Effect_PopAnim::PlaySingleAnimation(this_00,(string *)aRStack_10,0);
    std::string::~string((string *)aRStack_10);
    nop();
    Effect_PopAnim::SetCentered(this_00,true);
    pPVar3 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_00);
    PopAnimRig::SetDrawScale(pPVar3,1.2);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)aRStack_10,(float)(*(int *)(this + 0x50) / 2),(float)iVar1);
    StandaloneEffect::SetScreenSpaceOrigin
              ((StandaloneEffect *)this_00,(SexyVector2 *)aRStack_10,900000);
    *(Effect_PopAnim **)(this + 0x158) = this_00;
  }
  if (*(int *)(this + 0x108) - 2U < 4) {
    std::string::string(asStack_18,"POPANIM_EFFECTS_LEVEL_EFFECT_ALL");
    GetPAMByName(asStack_18);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar4,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    std::string::~string(asStack_18);
    nop();
    Sexy::StrFormat("animation%d",asStack_18,(ulong)*(uint *)(this + 0x108));
    if (4 < *(int *)(this + 0x108)) {
      FUN_05475ad8(asStack_18,"_gold");
    }
    Effect_PopAnim::PlaySingleAnimation(this_01,asStack_18,0);
    Effect_PopAnim::SetCentered(this_01,true);
    pPVar3 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_00);
    PopAnimRig::SetDrawScale(pPVar3,1.2);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)aRStack_10,(float)(*(int *)(this + 0x50) / 2),(float)iVar1);
    StandaloneEffect::SetScreenSpaceOrigin
              ((StandaloneEffect *)this_01,(SexyVector2 *)aRStack_10,900000);
    *(Effect_PopAnim **)(this + 0x160) = this_01;
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIStarLevelUp::CreateIconEffect(bool) */

void __thiscall PVZ2UIStarLevelUp::CreateIconEffect(PVZ2UIStarLevelUp *this,bool param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  long lVar5;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  std::string::string(asStack_18,"POPANIM_EFFECTS_ICON_EFFECT_BG");
  GetPAMByName(asStack_18);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  nop();
  if ((this_00 != (Effect_PopAnim *)0x0) &&
     (lVar5 = UIWidget::GetAtlasImage((UIWidget *)this_00), lVar5 != 0)) {
    std::string::string((string *)aRStack_10,"anim");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(this_00,aRStack_10,0);
    std::string::~string((string *)aRStack_10);
    nop();
    Effect_PopAnim::SetCentered(this_00,true);
    if (param_1) {
      lVar5 = *(long *)(this + 0x130);
      iVar1 = *(int *)(lVar5 + 0x54);
      iVar2 = *(int *)(lVar5 + 0x4c);
      iVar3 = FUN_0438cc10(0xc);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)aRStack_10,
                 (float)(*(int *)(lVar5 + 0x48) + *(int *)(lVar5 + 0x50) / 2),
                 (float)((iVar2 + iVar1 / 2) - iVar3));
      StandaloneEffect::SetScreenSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector2 *)aRStack_10,900000);
      *(Effect_PopAnim **)(this + 0x168) = this_00;
    }
    else {
      lVar5 = *(long *)(this + 0x138);
      iVar1 = *(int *)(lVar5 + 0x54);
      iVar2 = *(int *)(lVar5 + 0x4c);
      iVar3 = FUN_0438cc10(0xc);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)aRStack_10,
                 (float)(*(int *)(lVar5 + 0x48) + *(int *)(lVar5 + 0x50) / 2),
                 (float)((iVar2 + iVar1 / 2) - iVar3));
      StandaloneEffect::SetScreenSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector2 *)aRStack_10,900000);
      *(Effect_PopAnim **)(this + 0x170) = this_00;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIStarLevelUp::NotifyFadeInComplete(bool) */

void __thiscall PVZ2UIStarLevelUp::NotifyFadeInComplete(PVZ2UIStarLevelUp *this,bool param_1)

{
  this[0x14c] = (PVZ2UIStarLevelUp)0x1;
  CreateIconEffect(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIStarLevelUp::InitUIView(PVZ2UIStarLevelUp::AnimaType, std::string, int) */

void __thiscall
PVZ2UIStarLevelUp::InitUIView(PVZ2UIStarLevelUp *this,int param_2,undefined8 param_3,int param_4)

{
  PVZ2UIStarLevelUp *pPVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  string *psVar5;
  long *plVar6;
  char *pcVar7;
  Effect_PopAnim *pEVar8;
  ResourceInfo *pRVar9;
  PopAnimRig *pPVar10;
  int iVar11;
  StandaloneEffect *this_00;
  RtWeakPtr aRStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  pPVar1 = this + 0xf0;
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(pPVar1,param_3);
  *(int *)(this + 0x150) = param_2;
  *(int *)(this + 0x108) = param_4 + 1;
  if (param_2 == 0) {
    *(undefined4 *)(this + 0x10c) = 1;
    CreateLevelEffect(this);
    StartTimer(this);
  }
  else if (param_2 == 1) {
    pEVar8 = GameObject::CreateOutsideTable<Effect_PopAnim>();
    *(Effect_PopAnim **)(this + 0xd8) = pEVar8;
    std::string::string((string *)&local_50,"POPANIM_EFFECTS_UNLOCK_PLANT");
    GetPAMByName((string *)&local_50);
    std::string::~string((string *)&local_50);
    nop();
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_68);
    Effect_PopAnim::CreatePopAnimRig
              (*(Effect_PopAnim **)(this + 0xd8),(PopAnim *)pRVar9,(RtClass *)0x0);
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0xd8),true);
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0xd8),true);
    this_00 = *(StandaloneEffect **)(this + 0xd8);
    iVar2 = *(int *)(this + 0x50);
    cVar4 = FUN_0547419c(pPVar1);
    iVar3 = *(int *)(this + 0x54);
    if (cVar4 == '\0') {
      iVar11 = iVar3 + 3;
      if (-1 < iVar3) {
        iVar11 = iVar3;
      }
      iVar11 = iVar11 >> 2;
    }
    else {
      iVar11 = iVar3 / 2;
    }
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_50,(float)(iVar2 / 2),(float)iVar11);
    StandaloneEffect::SetScreenSpaceOrigin(this_00,(SexyVector2 *)&local_50,900000);
    Effect_PopAnim::GetPopAnimRigPtr();
    pPVar10 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
    std::string::string((string *)aRStack_58,"anim");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAnimStopped);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PVZ2UIStarLevelUp,void(PVZ2UIStarLevelUp::*)(std::string_const&)>
              (aDStack_38,(string *)&local_50);
    PopAnimRig::PlayAndStop(pPVar10,(string *)aRStack_58,0,aDStack_38);
    std::string::~string((string *)aRStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  this[0xe0] = (PVZ2UIStarLevelUp)0x0;
  cVar4 = FUN_0547419c(pPVar1);
  if (cVar4 == '\0') {
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)&local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_50,(RtWeakPtrBase *)aRStack_58);
    plVar6 = (long *)CreateStandalonePlantAnimRig((RtWeakPtr<Sexy::ResourceInfo> *)&local_50,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
    (**(code **)(*plVar6 + 0x1a0))(plVar6,0);
    *(long **)(this + 0xe8) = plVar6;
    Sexy::Insets::Insets((Insets *)&local_50);
    (**(code **)(**(long **)(this + 0xe8) + 0x90))
              (*(long **)(this + 0xe8),(RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
    *(undefined8 *)(this + 0xf8) = local_50;
    *(undefined8 *)(this + 0x100) = uStack_48;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  }
  pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar7,"Play_UI_PlantLevelUp");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIStarLevelUp::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
PVZ2UIStarLevelUp::DrawAll(PVZ2UIStarLevelUp *this,ModalFlags *param_1,Graphics *param_2)

{
  GraphicsAutoState aGStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x150) == 0) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_2);
    Sexy::Graphics::ClearClipRect(param_2);
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    Sexy::Insets::Insets(aIStack_18,0,0,0,0xff);
    Sexy::Graphics::SetColor(param_2,(Color *)aIStack_18);
    Sexy::Graphics::FillRect(param_2,0,0,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  }
  else {
    LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  }
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIStarLevelUp::Update() */

void __thiscall PVZ2UIStarLevelUp::Update(PVZ2UIStarLevelUp *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  PopAnimRig *this_00;
  PlantLevelUpIconWidget *pPVar5;
  PVZ2UIStarLevelUp PVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  IconData aIStack_28 [8];
  undefined4 local_20;
  PVZ2UIStarLevelUp local_1c;
  PVZ2UIStarLevelUp local_1b;
  int local_18 [2];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (*(StandaloneEffect **)(this + 0x158) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x158));
  }
  if (*(StandaloneEffect **)(this + 0x160) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x160));
  }
  if (*(StandaloneEffect **)(this + 0x168) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x168));
  }
  if (*(StandaloneEffect **)(this + 0x170) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x170));
  }
  iVar2 = *(int *)(this + 0x10c);
  if (iVar2 < 2) {
    if (*(int *)(this + 0x150) == 1) goto LAB_0438dd54;
    if (iVar2 != 1) goto LAB_0438dd6c;
LAB_0438df30:
    cVar1 = CheckCooldownAndReset(this,true);
    if (cVar1 == '\0') {
      iVar2 = *(int *)(this + 0x10c);
    }
    else {
      *(undefined4 *)(this + 0x10c) = 2;
      CreateTitleEffect(this);
      iVar2 = *(int *)(this + 0x10c);
    }
    if (iVar2 != 3) goto LAB_0438dd74;
LAB_0438df4c:
    cVar1 = CheckCooldownAndReset(this,true);
    if (cVar1 == '\0') {
      iVar2 = *(int *)(this + 0x10c);
      goto LAB_0438dd74;
    }
    *(undefined4 *)(this + 0x10c) = 4;
LAB_0438defc:
    if (this[0x14c] != (PVZ2UIStarLevelUp)0x0) {
      this[0x14c] = (PVZ2UIStarLevelUp)0x0;
      *(undefined4 *)(this + 0x10c) = 5;
      this[0x128] = (PVZ2UIStarLevelUp)0x0;
      goto LAB_0438ddc4;
    }
    PVar6 = this[0x128];
    if (PVar6 == (PVZ2UIStarLevelUp)0x0) {
      IconData::IconData(aIStack_28);
      thunk_FUN_05475e00(aIStack_28,this + 0xf0);
      local_20 = *(undefined4 *)(this + 0x108);
      local_1c = PVar6;
      local_1b = PVar6;
      IconData::IconData((IconData *)local_18,aIStack_28);
      pPVar5 = ::operator_new(0x150);
      PlantLevelUpIconWidget::PlantLevelUpIconWidget(pPVar5,(IconData *)local_18,this);
      *(PlantLevelUpIconWidget **)(this + 0x130) = pPVar5;
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)local_18);
      (**(code **)(**(long **)(this + 0x130) + 0x48))((IconData *)local_18,*(long **)(this + 0x130))
      ;
      iVar2 = local_10;
      iVar4 = FUN_0438cc10(0x23);
      plVar7 = *(long **)(this + 0x130);
      uVar3 = FUN_0438cc10(0x1b8);
      (**(code **)(*plVar7 + 0x1a8))
                (plVar7,((iVar2 * -2 - iVar4) + *(int *)(gLawnApp + 0xd4)) / 2,uVar3);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x130));
      this[0x128] = (PVZ2UIStarLevelUp)0x1;
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aIStack_28);
      iVar2 = *(int *)(this + 0x10c);
      goto LAB_0438dd7c;
    }
    iVar2 = *(int *)(this + 0x10c);
    if (iVar2 == 6) goto LAB_0438de00;
LAB_0438dd8c:
    if (iVar2 == 7) {
      *(undefined4 *)(this + 0x10c) = 8;
      PlantLevelUpIconWidget::RequestForUpdate(*(PlantLevelUpIconWidget **)(this + 0x130),false);
      iVar2 = *(int *)(this + 0x10c);
    }
    if (iVar2 == 9) {
      CreateAllIcons(this);
      PlantLevelUpIconWidget::CompleteAllAnim(*(PlantLevelUpIconWidget **)(this + 0x130));
      PlantLevelUpIconWidget::CompleteAllAnim(*(PlantLevelUpIconWidget **)(this + 0x138));
      *(undefined4 *)(this + 0x10c) = 10;
    }
  }
  else {
    if ((iVar2 == 2) && (cVar1 = CheckCooldownAndReset(this,false), cVar1 != '\0')) {
      *(undefined4 *)(this + 0x10c) = 3;
      if (*(StandaloneEffect **)(this + 0xd8) != (StandaloneEffect *)0x0) {
        StandaloneEffect::Update(*(StandaloneEffect **)(this + 0xd8));
        goto LAB_0438dd60;
      }
      goto LAB_0438df4c;
    }
LAB_0438dd54:
    if (*(StandaloneEffect **)(this + 0xd8) != (StandaloneEffect *)0x0) {
      StandaloneEffect::Update(*(StandaloneEffect **)(this + 0xd8));
    }
LAB_0438dd60:
    iVar2 = *(int *)(this + 0x10c);
    if (iVar2 == 1) goto LAB_0438df30;
LAB_0438dd6c:
    if (iVar2 == 3) goto LAB_0438df4c;
LAB_0438dd74:
    if (iVar2 == 4) goto LAB_0438defc;
LAB_0438dd7c:
    if (iVar2 != 5) {
LAB_0438dd84:
      if (iVar2 == 6) {
        if (this[0x14c] != (PVZ2UIStarLevelUp)0x0) {
          this[0x128] = (PVZ2UIStarLevelUp)0x0;
          *(undefined4 *)(this + 0x10c) = 10;
          goto LAB_0438ddc4;
        }
        PVar6 = this[0x128];
LAB_0438de00:
        if (PVar6 != (PVZ2UIStarLevelUp)0x0) goto LAB_0438dd9c;
        IconData::IconData(aIStack_28);
        thunk_FUN_05475e00(aIStack_28,this + 0xf0);
        plVar7 = *(long **)(this + 0x138);
        local_20 = *(undefined4 *)(this + 0x108);
        local_1b = (PVZ2UIStarLevelUp)0x0;
        local_1c = (PVZ2UIStarLevelUp)0x1;
        (**(code **)(*plVar7 + 0x48))((IconData *)local_18,plVar7);
        (**(code **)(*plVar7 + 0x48))((IconData *)local_18,plVar7);
        iVar2 = FUN_0438cc10(0x23);
        IconData::IconData((IconData *)local_18,aIStack_28);
        pPVar5 = ::operator_new(0x150);
        PlantLevelUpIconWidget::PlantLevelUpIconWidget(pPVar5,(IconData *)local_18,this);
        *(PlantLevelUpIconWidget **)(this + 0x140) = pPVar5;
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)local_18);
        plVar7 = *(long **)(this + 0x140);
        uVar3 = FUN_0438cc10(0x1b8);
        (**(code **)(*plVar7 + 0x1a8))(plVar7,local_10 + local_18[0] + iVar2,uVar3);
        (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x140));
        this[0x128] = (PVZ2UIStarLevelUp)0x1;
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aIStack_28);
        iVar2 = *(int *)(this + 0x10c);
      }
      goto LAB_0438dd8c;
    }
    if (this[0x14c] != (PVZ2UIStarLevelUp)0x0) {
      this[0x14c] = (PVZ2UIStarLevelUp)0x0;
      *(undefined4 *)(this + 0x10c) = 10;
      goto LAB_0438ddc4;
    }
    PVar6 = this[0x128];
    if (PVar6 == (PVZ2UIStarLevelUp)0x0) {
      IconData::IconData(aIStack_28);
      thunk_FUN_05475e00(aIStack_28,this + 0xf0);
      plVar7 = *(long **)(this + 0x130);
      local_20 = *(undefined4 *)(this + 0x108);
      local_1c = (PVZ2UIStarLevelUp)0x1;
      local_1b = PVar6;
      (**(code **)(*plVar7 + 0x48))((IconData *)local_18,plVar7);
      iVar2 = local_10;
      (**(code **)(*plVar7 + 0x48))((IconData *)local_18,plVar7);
      iVar2 = iVar2 + local_18[0];
      iVar4 = FUN_0438cc10(0x23);
      IconData::IconData((IconData *)local_18,aIStack_28);
      pPVar5 = ::operator_new(0x150);
      PlantLevelUpIconWidget::PlantLevelUpIconWidget(pPVar5,(IconData *)local_18,this);
      *(PlantLevelUpIconWidget **)(this + 0x138) = pPVar5;
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)local_18);
      plVar7 = *(long **)(this + 0x138);
      uVar3 = FUN_0438cc10(0x1b8);
      (**(code **)(*plVar7 + 0x1a8))(plVar7,iVar2 + iVar4,uVar3);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x138));
      this[0x128] = (PVZ2UIStarLevelUp)0x1;
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aIStack_28);
      iVar2 = *(int *)(this + 0x10c);
      goto LAB_0438dd84;
    }
  }
LAB_0438dd9c:
  this_00 = *(PopAnimRig **)(this + 0xe8);
  if (this_00 != (PopAnimRig *)0x0) {
    fVar8 = (float)PVZ_RealT();
    fVar9 = (float)PVZ_RealDt();
    PopAnimRig::UpdateAnim(this_00,fVar8,fVar9);
  }
LAB_0438ddc4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIStarLevelUp::Draw(Sexy::Graphics*) */

void __thiscall PVZ2UIStarLevelUp::Draw(PVZ2UIStarLevelUp *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  string *psVar5;
  long lVar6;
  Image *pIVar7;
  PlantType *this_00;
  float fVar8;
  float fVar9;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  iVar2 = *(int *)(this + 0x10c);
  if ((iVar2 < 2) && (iVar3 = iVar2, *(int *)(this + 0x150) != 1)) {
joined_r0x0438e3e4:
    if (iVar3 != 1) goto LAB_0438e3b0;
  }
  else {
    if (*(StandaloneEffect **)(this + 0xd8) != (StandaloneEffect *)0x0) {
      StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0xd8),param_1);
      iVar2 = *(int *)(this + 0x10c);
    }
    if (iVar2 < 1) {
      iVar3 = *(int *)(this + 0x150);
      goto joined_r0x0438e3e4;
    }
  }
  if (*(long *)(this + 0xe8) != 0) {
    if (*(StandaloneEffect **)(this + 0x158) != (StandaloneEffect *)0x0) {
      StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x158),param_1);
    }
    lVar6 = gLawnApp;
    iVar2 = FUN_0438cc10(0xa5);
    iVar2 = *(int *)(lVar6 + 0xd4) / 2 - iVar2;
    iVar3 = FUN_0438cc10(0xb4);
    iVar3 = *(int *)(lVar6 + 0xd8) / 2 - iVar3;
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
    if (bVar1) {
      this_00 = (PlantType *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      lVar6 = PlantType::GetProps(this_00);
      if (lVar6 == 0) goto LAB_0438e2ec;
      fVar8 = (float)FUN_0438cc24(*(undefined4 *)(lVar6 + 0x2a8));
      iVar2 = (int)(fVar8 + (float)iVar2);
      fVar9 = (float)FUN_0438cc24(*(undefined4 *)(lVar6 + 0x2ac));
      fVar8 = *(float *)(lVar6 + 0x2a4) * 1.7;
      iVar3 = (int)(fVar9 + (float)iVar3);
    }
    else {
LAB_0438e2ec:
      fVar8 = 1.7;
    }
    UIUtil::DrawPopAnim(param_1,*(PopAnimRig **)(this + 0xe8),iVar2,iVar3,fVar8,0.0,0.0);
    if (*(StandaloneEffect **)(this + 0x160) != (StandaloneEffect *)0x0) {
      StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x160),param_1);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    iVar2 = *(int *)(this + 0x10c);
  }
  if (2 < iVar2) {
    iVar2 = *(int *)(gLawnApp + 0xd4);
    lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aff450);
    iVar3 = *(int *)(lVar6 + 0x38);
    iVar4 = FUN_0438cc10(0x17c);
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aff450);
    Sexy::Graphics::DrawImage(param_1,pIVar7,(iVar2 - iVar3) / 2,iVar4);
    if (*(StandaloneEffect **)(this + 0x168) != (StandaloneEffect *)0x0) {
      StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x168),param_1);
    }
    if (*(StandaloneEffect **)(this + 0x170) != (StandaloneEffect *)0x0) {
      StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x170),param_1);
    }
  }
LAB_0438e3b0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

