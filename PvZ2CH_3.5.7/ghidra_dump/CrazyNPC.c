// Class: CrazyNPC


/* CrazyNPC::IsInitialized() const */

CrazyNPC * __thiscall CrazyNPC::IsInitialized(CrazyNPC *this)

{
  return this + 0x120;
}


/* CrazyNPC::Terminate() */

void __thiscall CrazyNPC::Terminate(CrazyNPC *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x18);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    *(undefined8 *)(this + 0x18) = 0;
  }
  return;
}


/* CrazyNPC::onCrazyTalkingAnimFinished(std::string const&) */

void CrazyNPC::onCrazyTalkingAnimFinished(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x78))(param_1,5);
  return;
}


/* CrazyNPC::onHoldingTalkingAnimFinished(std::string const&) */

void CrazyNPC::onHoldingTalkingAnimFinished(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x78))(param_1,8);
  return;
}


/* CrazyNPC::onTalkAnimFinished(std::string const&) */

void CrazyNPC::onTalkAnimFinished(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x78))(param_1,5);
  return;
}


/* CrazyNPC::Enter() */

void __thiscall CrazyNPC::Enter(CrazyNPC *this)

{
  (**(code **)(*(long *)this + 0x78))(this,3);
  return;
}


/* CrazyNPC::Die() */

void __thiscall CrazyNPC::Die(CrazyNPC *this)

{
  (**(code **)(*(long *)this + 0x78))(this,0xb);
  return;
}


/* CrazyNPC::StartEating(std::string const&) */

void CrazyNPC::StartEating(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x128);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,10);
  return;
}


/* CrazyNPC::StartHolding(std::string const&) */

void CrazyNPC::StartHolding(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x128);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,7);
  return;
}


/* CrazyNPC::onScreamTalkingAnimFinished(std::string const&) */

void CrazyNPC::onScreamTalkingAnimFinished(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x78))(param_1,5);
  return;
}


/* CrazyNPC::getState() const */

void __thiscall CrazyNPC::getState(CrazyNPC *this)

{
  FUN_03c7f870(*(undefined4 *)(this + 0x68));
  return;
}


/* CrazyNPC::IsLeaving() */

bool __thiscall CrazyNPC::IsLeaving(CrazyNPC *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = getState(this);
  bVar1 = true;
  if (iVar2 != 4) {
    iVar2 = getState(this);
    bVar1 = iVar2 == 10;
  }
  return bVar1;
}


/* CrazyNPC::Leave() */

void __thiscall CrazyNPC::Leave(CrazyNPC *this)

{
  char cVar1;
  
  cVar1 = IsLeaving(this);
  if (cVar1 == '\0') {
    nop();
    (**(code **)(*(long *)this + 0x78))(this,4);
  }
  return;
}


/* CrazyNPC::IsTalking() */

bool __thiscall CrazyNPC::IsTalking(CrazyNPC *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = getState(this);
  bVar1 = true;
  if (iVar2 != 6) {
    iVar2 = getState(this);
    bVar1 = iVar2 == 9;
  }
  return bVar1;
}


/* CrazyNPC::IsHoldingItem() */

bool __thiscall CrazyNPC::IsHoldingItem(CrazyNPC *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = getState(this);
  bVar1 = true;
  if (iVar2 != 8) {
    iVar2 = getState(this);
    bVar1 = iVar2 == 9;
  }
  return bVar1;
}


/* CrazyNPC::StopTalking() */

void __thiscall CrazyNPC::StopTalking(CrazyNPC *this)

{
  char cVar1;
  PrimeText *pPVar2;
  
  cVar1 = IsHoldingItem(this);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x78))(this,8);
    FUN_05476f98(this + 0x10);
    pPVar2 = (PrimeText *)Sexy::PrimeText::Instance();
    Sexy::PrimeText::ClearGlyphCache(pPVar2);
    return;
  }
  cVar1 = IsTalking(this);
  if (cVar1 == '\0') {
    FUN_05476f98(this + 0x10);
    pPVar2 = (PrimeText *)Sexy::PrimeText::Instance();
    Sexy::PrimeText::ClearGlyphCache(pPVar2);
    return;
  }
  (**(code **)(*(long *)this + 0x78))(this,5);
  FUN_05476f98(this + 0x10);
  pPVar2 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(pPVar2);
  return;
}


/* CrazyNPC::IsDead() */

bool __thiscall CrazyNPC::IsDead(CrazyNPC *this)

{
  int iVar1;
  
  iVar1 = getState(this);
  return iVar1 == 0xb;
}


/* CrazyNPC::isInState(unsigned int) const */

bool __thiscall CrazyNPC::isInState(CrazyNPC *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_03c7f870(*(undefined4 *)(this + 0x68));
  return uVar1 == param_1;
}


/* CrazyNPC::CompleteLoad() */

void __thiscall CrazyNPC::CompleteLoad(CrazyNPC *this)

{
  char cVar1;
  
  cVar1 = isInState(this,0);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x78))(this,1);
  }
  return;
}


/* CrazyNPC::IsLoaded() */

byte __thiscall CrazyNPC::IsLoaded(CrazyNPC *this)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = isInState(this,0);
  if ((cVar1 == '\0') && (cVar1 = IsDead(this), cVar1 == '\0')) {
    bVar2 = isInState(this,0xffffffff);
    return bVar2 ^ 1;
  }
  return 0;
}


/* CrazyNPC::PrepForLoading() */

void __thiscall CrazyNPC::PrepForLoading(CrazyNPC *this)

{
  char cVar1;
  
  cVar1 = isInState(this,0xffffffff);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x68))(this);
    (**(code **)(*(long *)this + 0x78))(this,0);
  }
  return;
}


/* CrazyNPC::GetNPCName() const */

long __thiscall CrazyNPC::GetNPCName(CrazyNPC *this)

{
  long lVar1;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  return lVar1 + 0x28;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPC::drawTextBannerStyle(Sexy::Graphics*) */

void __thiscall CrazyNPC::drawTextBannerStyle(CrazyNPC *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  PrimeTypeface *pPVar6;
  float fVar7;
  float fVar8;
  wstring awStack_58 [8];
  undefined1 auStack_50 [8];
  int local_48;
  int local_44;
  int local_38 [2];
  int local_30;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_054765e8(this + 0x10);
  if (cVar1 != '\0') goto LAB_03c7ff14;
  *(undefined4 *)(param_1 + 0x10) = 0;
  lVar5 = gLawnApp;
  *(float *)(param_1 + 0x14) = (float)*(int *)(gLawnApp + 0xd8);
  fVar7 = (float)FUN_03c7fa74(0x43520000);
  fVar8 = (float)FUN_03c7fa74(0x42dc0000);
  Sexy::Insets::Insets((Insets *)&local_48,0,(int)-fVar7,*(int *)(lVar5 + 0xd4),(int)fVar8);
  Sexy::Insets::Insets(aIStack_18,0,0,0,0x80);
  Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
  Sexy::Graphics::FillRect(param_1,(TRect *)&local_48);
  fVar7 = (float)FUN_03c7fa74(0x431b0000);
  Sexy::Insets::Insets((Insets *)local_38,(Insets *)&local_48);
  fVar8 = (float)FUN_03c7fa74(0x418c0000);
  iVar2 = FUN_03c7fa60(0xbe);
  local_38[0] = (int)((float)iVar2 + fVar8);
  local_30 = local_30 + local_38[0] * -2;
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  if (*(char *)(lVar5 + 0x38) == '\0') {
    fVar8 = (float)FUN_03c7fa74(0x418c0000);
    iVar2 = FUN_03c7fa60(0xffffffea);
    Sexy::Graphics::PushState(param_1);
    iVar3 = FUN_03c7fa60(0xaf);
    iVar4 = FUN_03c7fa60(0xffffffe3);
    fVar8 = (float)iVar2 + fVar8;
    fVar7 = ((float)iVar4 - fVar7) - (float)(iVar3 / 2);
  }
  else {
    fVar8 = (float)FUN_03c7fa74(0x418c0000);
    iVar2 = FUN_03c7fa60(0xbe);
    iVar3 = FUN_03c7fa60(0);
    fVar8 = (((float)iVar3 - fVar8) + (float)*(int *)(gLawnApp + 0xd4)) - (float)iVar2;
    Sexy::Graphics::PushState(param_1);
    iVar2 = FUN_03c7fa60(0xaf);
    iVar3 = FUN_03c7fa60(0xffffffe5);
    fVar7 = ((float)iVar3 - fVar7) - (float)(iVar2 / 2);
  }
  Sexy::Graphics::Translate(param_1,(int)fVar8,(int)fVar7);
  PopAnimRig::Draw(*(PopAnimRig **)(this + 0x18),param_1);
  Sexy::Graphics::PopState(param_1);
  FUN_05477b24(awStack_58,this + 0x10);
  lVar5 = FUN_054767dc(awStack_58,&DAT_057165a0,0);
  if (lVar5 != -1) {
    FUN_05478178(aIStack_28,&DAT_056f11a8,auStack_50);
    TodReplaceString(awStack_58,L"{SHAKE}",(wstring *)aIStack_28);
    FUN_054766c8(awStack_58,aIStack_18);
    FUN_05476c50(aIStack_18);
    FUN_05476c50(aIStack_28);
    nop();
    iVar2 = rand();
    iVar2 = FUN_03c7fa4c(iVar2 % 2);
    local_48 = local_48 + iVar2;
    iVar2 = rand();
    iVar2 = FUN_03c7fa4c(iVar2 % 2);
    local_44 = local_44 + iVar2;
  }
  lVar5 = FUN_054767dc(awStack_58,L"{NO_CLICK}",0);
  if (lVar5 != -1) {
    FUN_05478178(aIStack_28,&DAT_056f11a8,auStack_50);
    TodReplaceString(awStack_58,L"{NO_CLICK}",(wstring *)aIStack_28);
    FUN_054766c8(awStack_58,aIStack_18);
    FUN_05476c50(aIStack_18);
    FUN_05476c50(aIStack_28);
    nop();
  }
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  iVar2 = *(int *)(lVar5 + 0x1c);
  if (iVar2 == 1) {
LAB_03c802f0:
    pPVar6 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
  }
  else if (iVar2 == 0) {
    pPVar6 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZKaTong_30);
  }
  else {
    if (iVar2 == 2) goto LAB_03c802f0;
    pPVar6 = (PrimeTypeface *)0x0;
  }
  Sexy::Insets::Insets(aIStack_28,(Insets *)local_38);
  FUN_05477b24(auStack_50,awStack_58);
  Sexy::Color::Color((Color *)aIStack_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph(pPVar6,param_1,aIStack_28,auStack_50,1,1,aIStack_18,0);
  FUN_05476c50(auStack_50);
  FUN_05476c50(awStack_58);
LAB_03c7ff14:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPC::drawTextTopBannerStyle(Sexy::Graphics*) */

void __thiscall CrazyNPC::drawTextTopBannerStyle(CrazyNPC *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_50 [8];
  wstring awStack_48 [8];
  wstring awStack_40 [8];
  int local_38;
  int local_34;
  int local_28 [2];
  int local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  cVar1 = FUN_054765e8(this + 0x10);
  if (cVar1 != '\0') goto LAB_03c80394;
  fVar6 = (float)FUN_03c7fa74(0x435c0000);
  fVar7 = (float)FUN_03c7fa74(0x42dc0000);
  Sexy::Insets::Insets((Insets *)&local_38,0,(int)fVar6,*(int *)(gLawnApp + 0x724),(int)fVar7);
  Sexy::Insets::Insets(aIStack_18,0,0,0,0x80);
  Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
  Sexy::Graphics::FillRect(param_1,(TRect *)&local_38);
  Sexy::Insets::Insets((Insets *)local_28,(Insets *)&local_38);
  fVar6 = (float)FUN_03c7fa74(0x40c00000);
  iVar2 = FUN_03c7fa4c(0xaf);
  local_28[0] = (int)((float)iVar2 + fVar6);
  local_20 = local_20 + local_28[0] * -2;
  FUN_05477b24(awStack_48,this + 0x10);
  lVar4 = FUN_054767dc(awStack_48,&DAT_057165a0,0);
  if (lVar4 != -1) {
    FUN_05478178(awStack_40,&DAT_056f11a8,auStack_50);
    TodReplaceString(awStack_48,L"{SHAKE}",awStack_40);
    FUN_054766c8(awStack_48,aIStack_18);
    FUN_05476c50(aIStack_18);
    FUN_05476c50(awStack_40);
    nop();
    iVar2 = rand();
    iVar2 = FUN_03c7fa4c(iVar2 % 2);
    local_38 = local_38 + iVar2;
    iVar2 = rand();
    iVar2 = FUN_03c7fa4c(iVar2 % 2);
    local_34 = local_34 + iVar2;
  }
  lVar4 = FUN_054767dc(awStack_48,L"{NO_CLICK}",0);
  if (lVar4 != -1) {
    FUN_05478178(awStack_40,&DAT_056f11a8,auStack_50);
    TodReplaceString(awStack_48,L"{NO_CLICK}",awStack_40);
    FUN_054766c8(awStack_48,aIStack_18);
    FUN_05476c50(aIStack_18);
    FUN_05476c50(awStack_40);
    nop();
  }
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  iVar2 = *(int *)(lVar4 + 0x1c);
  if (iVar2 == 1) {
LAB_03c80698:
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
  }
  else if (iVar2 == 0) {
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZKaTong_30);
  }
  else {
    if (iVar2 == 2) goto LAB_03c80698;
    uVar5 = 0;
  }
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,awStack_48,(Insets *)local_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(awStack_48);
LAB_03c80394:
  iVar2 = FUN_03c7fa4c(0xffffffae);
  iVar2 = iVar2 + *(int *)(gLawnApp + 0x724) / 2;
  fVar6 = (float)FUN_03c7fa74(0x435c0000);
  iVar3 = FUN_03c7fa4c(0xffffff60);
  Sexy::Graphics::Translate(param_1,iVar2,(int)((float)iVar3 + fVar6));
  PopAnimRig::Draw(*(PopAnimRig **)(this + 0x18),param_1);
  iVar3 = FUN_03c7fa4c(0xffffff60);
  Sexy::Graphics::Translate(param_1,-iVar2,-iVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPC::Init() */

void __thiscall CrazyNPC::Init(CrazyNPC *this)

{
  long lVar1;
  PopAnim *pPVar2;
  RtClass *pRVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this[0x120] = (CrazyNPC)0x1;
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  lVar1 = FUN_05474178(lVar1 + 8);
  if (lVar1 != 0) {
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    GetPAMByName((string *)(lVar1 + 8));
    pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
    uVar4 = PopAnimRig::CreateRigOutsideTable(pPVar2,pRVar3);
    *(undefined8 *)(this + 0x18) = uVar4;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  (**(code **)(*(long *)this + 0x78))(this,2);
  Enter(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrazyNPC::initLoadingResourcesGroupList() */

void __thiscall CrazyNPC::initLoadingResourcesGroupList(CrazyNPC *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  
  this_00 = (RtWeakPtr *)(this + 0x28);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  uVar5 = 0;
  if (bVar1) {
    while( true ) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      uVar4 = FUN_03c7f85c(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x48));
      if (uVar4 <= uVar5) break;
      pcVar6 = *(code **)(*(long *)this + 0x70);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      uVar2 = FUN_03c7f868(*(undefined8 *)(lVar3 + 0x40),uVar5);
      (*pcVar6)(this,uVar2);
      uVar5 = uVar5 + 1;
    }
  }
  return;
}


/* CrazyNPC::updateStateMachine() */

void __thiscall CrazyNPC::updateStateMachine(CrazyNPC *this)

{
  StateMachine<CrazyNPCState>::UpdateState((StateMachine<CrazyNPCState> *)(this + 0x68));
  return;
}


/* CrazyNPC::Update() */

void CrazyNPC::Update(void)

{
  long in_x0;
  
  StateMachine<CrazyNPCState>::UpdateState((StateMachine<CrazyNPCState> *)(in_x0 + 0x68));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPC::onEnterState_Idle(CrazyNPCState) */

void CrazyNPC::onEnterState_Idle(CrazyNPC *param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  string *psVar4;
  PopAnimRig *pPVar5;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
  if (*(int *)(lVar3 + 0x18) == 0) {
    pPVar5 = *(PopAnimRig **)(param_1 + 0x18);
    std::string::string(asStack_40,"anim_idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar5,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  psVar4 = (string *)GetNPCName(param_1);
  bVar1 = std::operator==(psVar4,"zombossicon");
  if (bVar1) {
    std::string::string(asStack_40,"anim_idle");
    nop();
    cVar2 = PopAnimRig::IsAnimStringActive(*(PopAnimRig **)(param_1 + 0x18),asStack_40);
    if (cVar2 == '\0') {
      pPVar5 = *(PopAnimRig **)(param_1 + 0x18);
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar5,asStack_40,0,aDStack_38);
    }
    std::string::~string(asStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPC::onEnterState_HoldingIdle(CrazyNPCState) */

void CrazyNPC::onEnterState_HoldingIdle(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  PopAnimRig *pPVar3;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
  if (*(int *)(lVar1 + 0x18) == 0) {
    pPVar3 = *(PopAnimRig **)(param_1 + 0x18);
    uVar2 = FUN_0547429c(param_1 + 0x128);
    Sexy::StrFormat("anim_%s_idle",asStack_40,uVar2);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPC::onEnterState_HoldingEnter(CrazyNPCState) */

void CrazyNPC::onEnterState_HoldingEnter(ReceivedDataCallback *param_1)

{
  long lVar1;
  undefined8 uVar2;
  PopAnimRig *pPVar3;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
  if (*(int *)(lVar1 + 0x18) == 0) {
    pPVar3 = *(PopAnimRig **)(param_1 + 0x18);
    uVar2 = FUN_0547429c(param_1 + 0x128);
    Sexy::StrFormat("anim_%s_enter",asStack_58,uVar2);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              (param_1,onHoldingEnteringAnimFinished);
    Sexy::Delegate1<std::string_const&>::Delegate1<CrazyNPC,void(CrazyNPC::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar3,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
  }
  FUN_05476f98(param_1 + 0x10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrazyNPC::setStateHelper(StateDefinition<CrazyNPCState> const&) */

void __thiscall CrazyNPC::setStateHelper(CrazyNPC *this,StateDefinition *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = StateMachine<CrazyNPCState>::SetState
                    ((StateMachine<CrazyNPCState> *)(this + 0x68),param_1);
  if (cVar1 != '\0') {
    uVar2 = PVZ_T();
    *(undefined4 *)(this + 0x60) = uVar2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPC::drawSpeechBubbleStyle(Sexy::Graphics*) */

void __thiscall CrazyNPC::drawSpeechBubbleStyle(CrazyNPC *this,Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  LotteryResultProgressBar *this_01;
  undefined8 uVar9;
  float fVar10;
  undefined1 auStack_40 [8];
  wstring awStack_38 [8];
  wstring awStack_30 [8];
  int local_28;
  int local_24;
  Insets aIStack_18 [16];
  long local_8;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28);
  *(float *)(param_1 + 0x14) = (float)*(int *)(gLawnApp + 0xd8);
  cVar2 = FUN_054765e8(this + 0x10);
  if (cVar2 != '\0') goto LAB_03c810d8;
  this_01 = (LotteryResultProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad1f20);
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  if (*(char *)(lVar8 + 0x38) == '\0') {
    iVar3 = FUN_03c7fa4c(0xb9);
    iVar4 = FUN_03c7fa4c(0xfffffe34);
    Sexy::Graphics::DrawImage(param_1,(Image *)this_01,iVar3,iVar4);
    iVar4 = 0;
  }
  else {
    iVar3 = *(int *)(gLawnApp + 0xd4);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    iVar3 = iVar3 - iVar4;
    iVar5 = FUN_03c7fa4c(0xb9);
    iVar4 = iVar3 + iVar5 * -2;
    iVar6 = FUN_03c7fa4c(0xfffffe34);
    Sexy::Graphics::DrawImageMirror(param_1,(Image *)this_01,iVar3 - iVar5,iVar6,true);
  }
  FUN_05477b24(awStack_38,this + 0x10);
  iVar3 = FUN_03c7fa4c(0xc5);
  iVar5 = FUN_03c7fa4c(0xfffffe34);
  iVar6 = FUN_03c7fa4c(0x103);
  iVar7 = FUN_03c7fa4c(0x8c);
  Sexy::Insets::Insets((Insets *)&local_28,iVar3 + iVar4,iVar5,iVar6,iVar7);
  lVar8 = FUN_054767dc(awStack_38,&DAT_057165a0,0);
  if (lVar8 != -1) {
    FUN_05478178(awStack_30,&DAT_056f11a8,auStack_40);
    TodReplaceString(awStack_38,L"{SHAKE}",awStack_30);
    FUN_054766c8(awStack_38,aIStack_18);
    FUN_05476c50(aIStack_18);
    FUN_05476c50(awStack_30);
    nop();
    iVar3 = rand();
    iVar3 = FUN_03c7fa4c(iVar3 % 2);
    local_28 = local_28 + iVar3;
    iVar3 = rand();
    iVar3 = FUN_03c7fa4c(iVar3 % 2);
    local_24 = local_24 + iVar3;
  }
  lVar8 = FUN_054767dc(awStack_38,L"{NO_CLICK}",0);
  if (lVar8 == -1) {
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    iVar3 = *(int *)(lVar8 + 0x1c);
    if (iVar3 == 1) {
LAB_03c81454:
      bVar1 = true;
      goto LAB_03c81390;
    }
    if (iVar3 == 0) {
      bVar1 = true;
      goto LAB_03c81568;
    }
    if (iVar3 == 2) goto LAB_03c81454;
    Sexy::Color::Color((Color *)aIStack_18,0);
    TodDrawStringWrapped(param_1,awStack_38,(Insets *)&local_28,0,aIStack_18,5,0);
LAB_03c81488:
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_20);
    iVar3 = FUN_03c7fa4c(0xb9);
    iVar5 = FUN_03c7fa4c(0xfffffeba);
    iVar6 = FUN_03c7fa4c(0x118);
    TodStringTranslate(L"[CLICK_TO_CONTINUE]");
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Conversation_Tap_Text);
    Sexy::PrimeTypeface::DrawString_Line
              ((PrimeTypeface *)(float)(iVar3 + iVar4),(float)iVar5,(float)iVar6,uVar9,param_1,
               awStack_30,1,aIStack_18,0);
    FUN_05476c50(awStack_30);
  }
  else {
    FUN_05478178(awStack_30,&DAT_056f11a8,auStack_40);
    TodReplaceString(awStack_38,L"{NO_CLICK}",awStack_30);
    FUN_054766c8(awStack_38,aIStack_18);
    FUN_05476c50(aIStack_18);
    FUN_05476c50(awStack_30);
    nop();
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    iVar3 = *(int *)(lVar8 + 0x1c);
    if (iVar3 == 1) {
LAB_03c8138c:
      bVar1 = false;
LAB_03c81390:
      uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
LAB_03c813a4:
      Sexy::Color::Color((Color *)aIStack_18,0);
      TodDrawStringWrapped(param_1,awStack_38,(Insets *)&local_28,uVar9,aIStack_18,5,0);
      if (bVar1) goto LAB_03c81488;
    }
    else {
      if (iVar3 == 0) {
        bVar1 = false;
LAB_03c81568:
        uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZKaTong_30);
        goto LAB_03c813a4;
      }
      if (iVar3 == 2) goto LAB_03c8138c;
      Sexy::Color::Color((Color *)aIStack_18,0);
      TodDrawStringWrapped(param_1,awStack_38,(Insets *)&local_28,0,aIStack_18,5,0);
    }
  }
  FUN_05476c50(awStack_38);
LAB_03c810d8:
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar10 = 0.0;
  if (*(char *)(lVar8 + 0x38) != '\0') {
    fVar10 = (float)*(int *)(gLawnApp + 0xd4);
  }
  *(float *)(param_1 + 0x10) = fVar10;
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar3 = FUN_03c7fa4c(*(undefined4 *)(lVar8 + 0x30));
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar4 = FUN_03c7fa4c(*(undefined4 *)(lVar8 + 0x34));
  Sexy::Graphics::Translate(param_1,-iVar3,-iVar4);
  PopAnimRig::Draw(*(PopAnimRig **)(this + 0x18),param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrazyNPC::Draw(Sexy::Graphics*) */

void __thiscall CrazyNPC::Draw(CrazyNPC *this,Graphics *param_1)

{
  int iVar1;
  long lVar2;
  
  Sexy::Graphics::PushState(param_1);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  iVar1 = *(int *)(lVar2 + 0x18);
  if (iVar1 == 1) {
    drawTextBannerStyle(this,param_1);
    Sexy::Graphics::PopState(param_1);
    return;
  }
  if (iVar1 != 0) {
    if (iVar1 == 2) {
      drawTextTopBannerStyle(this,param_1);
    }
    Sexy::Graphics::PopState(param_1);
    return;
  }
  drawSpeechBubbleStyle(this,param_1);
  Sexy::Graphics::PopState(param_1);
  return;
}


/* non-virtual thunk to CrazyNPC::Draw(Sexy::Graphics*) */

void __thiscall CrazyNPC::Draw(CrazyNPC *this,Graphics *param_1)

{
  Draw(this + -8,param_1);
  return;
}


/* CrazyNPC::StartLoad() */

void __thiscall CrazyNPC::StartLoad(CrazyNPC *this)

{
  char cVar1;
  
  cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                    ((vector<std::string,std::allocator<std::string>> *)(this + 0x108));
  if (cVar1 != '\0') {
    return;
  }
  LawnApp::LoadGroups(gLawnApp,(vector *)(this + 0x108));
  return;
}


/* CrazyNPC::onEnterState_Loading(CrazyNPCState) */

void CrazyNPC::onEnterState_Loading(long param_1)

{
  char cVar1;
  
  cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                    ((vector<std::string,std::allocator<std::string>> *)(param_1 + 0x108));
  if (cVar1 != '\0') {
    return;
  }
  LawnApp::LoadGroups(gLawnApp,(vector *)(param_1 + 0x108));
  return;
}


/* CrazyNPC::IsLoadComplete() */

undefined8 __thiscall CrazyNPC::IsLoadComplete(CrazyNPC *this)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                    ((vector<std::string,std::allocator<std::string>> *)(this + 0x108));
  if (cVar1 != '\0') {
    return 1;
  }
  uVar2 = LawnApp::IsGroupLoadComplete(gLawnApp,(vector *)(this + 0x108));
  return uVar2;
}


/* CrazyNPC::updateState_Loading() */

void __thiscall CrazyNPC::updateState_Loading(CrazyNPC *this)

{
  char cVar1;
  
  cVar1 = IsLoadComplete(this);
  if (cVar1 == '\0') {
    return;
  }
  CompleteLoad(this);
  return;
}


/* CrazyNPC::UnloadResources() */

void __thiscall CrazyNPC::UnloadResources(CrazyNPC *this)

{
  char cVar1;
  
  cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                    ((vector<std::string,std::allocator<std::string>> *)(this + 0x108));
  if (cVar1 != '\0') {
    return;
  }
  LawnApp::DeleteGroups(gLawnApp,(vector *)(this + 0x108));
  return;
}


/* CrazyNPC::onEnterState_Dead(CrazyNPCState) */

void CrazyNPC::onEnterState_Dead(long param_1)

{
  char cVar1;
  
  cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                    ((vector<std::string,std::allocator<std::string>> *)(param_1 + 0x108));
  if (cVar1 != '\0') {
    return;
  }
  LawnApp::DeleteGroups(gLawnApp,(vector *)(param_1 + 0x108));
  return;
}


/* CrazyNPC::onEnteringAnimFinished(std::string const&) */

void CrazyNPC::onEnteringAnimFinished(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x78))(param_1,5);
  MessageRouter::Post<CrazyNPC*,CrazyNPC*>
            ((MessageRouter *)gMessageRouter,Message::NPCFinishedEntering,(CrazyNPC *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPC::updateState_Entering() */

void __thiscall CrazyNPC::updateState_Entering(CrazyNPC *this)

{
  bool bVar1;
  char cVar2;
  PopAnimRig *pPVar3;
  long lVar4;
  string *psVar5;
  float fVar6;
  float fVar7;
  string asStack_10 [8];
  long local_8;
  
  pPVar3 = *(PopAnimRig **)(this + 0x18);
  local_8 = ___stack_chk_guard;
  if (pPVar3 != (PopAnimRig *)0x0) {
    fVar6 = (float)PVZ_T();
    fVar7 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar3,fVar6,fVar7);
  }
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  if (*(int *)(lVar4 + 0x18) != 0) {
    psVar5 = (string *)GetNPCName(this);
    bVar1 = std::operator==(psVar5,"zombossicon");
    if (bVar1) {
      pPVar3 = *(PopAnimRig **)(this + 0x18);
      std::string::string(asStack_10,"anim_enter");
      cVar2 = PopAnimRig::IsAnimStringActive(pPVar3,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (cVar2 != '\0') goto LAB_03c819d8;
    }
    std::string::string(asStack_10,"");
    onEnteringAnimFinished((string *)this);
    std::string::~string(asStack_10);
    nop();
  }
LAB_03c819d8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrazyNPC::onLeavingAnimFinished(std::string const&) */

void CrazyNPC::onLeavingAnimFinished(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x78))(param_1,0xb);
  MessageRouter::Post<CrazyNPC*,CrazyNPC*>
            ((MessageRouter *)gMessageRouter,Message::NPCFinishedExiting,(CrazyNPC *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPC::updateState_Leaving() */

void __thiscall CrazyNPC::updateState_Leaving(CrazyNPC *this)

{
  bool bVar1;
  char cVar2;
  PopAnimRig *pPVar3;
  long lVar4;
  string *psVar5;
  float fVar6;
  float fVar7;
  string asStack_10 [8];
  long local_8;
  
  pPVar3 = *(PopAnimRig **)(this + 0x18);
  local_8 = ___stack_chk_guard;
  if (pPVar3 != (PopAnimRig *)0x0) {
    fVar6 = (float)PVZ_T();
    fVar7 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar3,fVar6,fVar7);
  }
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  if (*(int *)(lVar4 + 0x18) != 0) {
    psVar5 = (string *)GetNPCName(this);
    bVar1 = std::operator==(psVar5,"zombossicon");
    if (bVar1) {
      pPVar3 = *(PopAnimRig **)(this + 0x18);
      std::string::string(asStack_10,"anim_leave");
      cVar2 = PopAnimRig::IsAnimStringActive(pPVar3,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (cVar2 != '\0') goto LAB_03c81b3c;
    }
    std::string::string(asStack_10,"");
    onLeavingAnimFinished((string *)this);
    std::string::~string(asStack_10);
    nop();
  }
LAB_03c81b3c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrazyNPC::onHoldingEnteringAnimFinished(std::string const&) */

void CrazyNPC::onHoldingEnteringAnimFinished(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x78))(param_1,8);
  MessageRouter::Post<CrazyNPC*,CrazyNPC*>
            ((MessageRouter *)gMessageRouter,Message::NPCFinishedEntering,(CrazyNPC *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPC::updateState_HoldingEnter() */

void __thiscall CrazyNPC::updateState_HoldingEnter(CrazyNPC *this)

{
  PopAnimRig *this_00;
  long lVar1;
  float fVar2;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  this_00 = *(PopAnimRig **)(this + 0x18);
  local_8 = ___stack_chk_guard;
  if (this_00 != (PopAnimRig *)0x0) {
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar2,fVar3);
  }
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  if (*(int *)(lVar1 + 0x18) != 0) {
    std::string::string(asStack_10,"");
    onHoldingEnteringAnimFinished((string *)this);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrazyNPC::onHoldingEatAnimFinished(std::string const&) */

void CrazyNPC::onHoldingEatAnimFinished(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x78))(param_1,5);
  MessageRouter::Post<CrazyNPC*,CrazyNPC*>
            ((MessageRouter *)gMessageRouter,Message::NPCFinishedEntering,(CrazyNPC *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPC::updateState_HoldingEat() */

void __thiscall CrazyNPC::updateState_HoldingEat(CrazyNPC *this)

{
  PopAnimRig *this_00;
  long lVar1;
  float fVar2;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  this_00 = *(PopAnimRig **)(this + 0x18);
  local_8 = ___stack_chk_guard;
  if (this_00 != (PopAnimRig *)0x0) {
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar2,fVar3);
  }
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  if (*(int *)(lVar1 + 0x18) != 0) {
    std::string::string(asStack_10,"");
    onHoldingEatAnimFinished((string *)this);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrazyNPC::CrazyNPC() */

void __thiscall CrazyNPC::CrazyNPC(CrazyNPC *this)

{
  Renderable *extraout_x1;
  undefined4 uVar1;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  Renderable::Renderable((Renderable *)(this + 8),extraout_x1);
  *(undefined ***)this = &PTR_GetClass_0675a550;
  *(undefined ***)(this + 8) = &PTR__CrazyNPC_0675a700;
  FUN_05476574(this + 0x10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)(this + 0x30));
  StateMachine<CrazyNPCState>::StateMachine((StateMachine<CrazyNPCState> *)(this + 0x68));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x108));
  Set8BytesTo0(this + 0x128);
  this[0x120] = (CrazyNPC)0x0;
  *(undefined4 *)(this + 0x24) = 0;
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x108));
  FUN_05476f98(this + 0x10);
  *(undefined4 *)(this + 0x20) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x60) = uVar1;
  FUN_05474ff8(this + 0x128);
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* CrazyNPC::StaticNew() */

CrazyNPC * CrazyNPC::StaticNew(void)

{
  CrazyNPC *this;
  
  this = ::operator_new(0x130);
  CrazyNPC(this);
  return this;
}


/* CrazyNPC::SetNPCSheet(Sexy::RtWeakPtr<NPCDataSheet const>) */

void __thiscall CrazyNPC::SetNPCSheet(CrazyNPC *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  
  cVar1 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)(this + 0x28),param_2);
  if (cVar1 != '\0') {
    return;
  }
  cVar1 = IsLoaded(this);
  if (cVar1 != '\0') {
    UnloadResources(this);
  }
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x28),(RtWeakPtr *)param_2);
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x108));
  PrepForLoading(this);
  return;
}


/* CrazyNPC::~CrazyNPC() */

void __thiscall CrazyNPC::~CrazyNPC(CrazyNPC *this)

{
  *(undefined ***)this = &PTR_GetClass_0675a550;
  *(undefined ***)(this + 8) = &PTR__CrazyNPC_0675a700;
  Terminate(this);
  std::string::~string((string *)(this + 0x128));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x108));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x68));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  FUN_05476c50(this + 0x10);
  nop();
  return;
}


/* non-virtual thunk to CrazyNPC::~CrazyNPC() */

void __thiscall CrazyNPC::~CrazyNPC(CrazyNPC *this)

{
  ~CrazyNPC(this + -8);
  return;
}


/* CrazyNPC::~CrazyNPC() */

void __thiscall CrazyNPC::~CrazyNPC(CrazyNPC *this)

{
  ~CrazyNPC(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CrazyNPC::~CrazyNPC() */

void __thiscall CrazyNPC::~CrazyNPC(CrazyNPC *this)

{
  ~CrazyNPC(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPC::pickAndPlayTalkingVO(CrazyNPCMood, CrazyNPCLineLength) */

void __thiscall CrazyNPC::pickAndPlayTalkingVO(CrazyNPC *this,undefined4 param_2,int param_3)

{
  string *psVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_18);
  switch(param_2) {
  case 0:
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    uVar3 = FUN_0547429c(lVar2 + 0x20);
    pcVar4 = "Play_VO_%s_Emote_General";
    goto LAB_03c82088;
  case 1:
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    uVar3 = FUN_0547429c(lVar2 + 0x20);
    pcVar4 = "Play_VO_%s_Emote_Excited";
    goto LAB_03c82088;
  case 2:
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    uVar3 = FUN_0547429c(lVar2 + 0x20);
    pcVar4 = "Play_VO_%s_Emote_Playful";
    goto LAB_03c82088;
  case 3:
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    uVar3 = FUN_0547429c(lVar2 + 0x20);
    pcVar4 = "Play_VO_%s_Emote_Tired";
LAB_03c82088:
    Sexy::StrFormat(pcVar4,asStack_10,uVar3);
    FUN_05474278(asStack_18,asStack_10);
    std::string::~string(asStack_10);
switchD_03c82060_default:
    if (param_3 == 2) {
      FUN_05475ad8(asStack_18,&DAT_055f5048);
    }
    else if (param_3 == 3) {
      FUN_05475ad8(asStack_18,"_Long");
    }
    else if (param_3 == 1) {
      FUN_05475ad8(asStack_18,"_Short");
    }
    goto LAB_03c820c8;
  case 4:
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    uVar3 = FUN_0547429c(lVar2 + 0x20);
    pcVar4 = "Play_VO_%s_Emote_Shout";
    break;
  case 5:
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    uVar3 = FUN_0547429c(lVar2 + 0x20);
    pcVar4 = "Play_VO_%s_Special_01";
    break;
  case 6:
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    uVar3 = FUN_0547429c(lVar2 + 0x20);
    pcVar4 = "Play_VO_%s_Special_02";
    break;
  case 7:
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    uVar3 = FUN_0547429c(lVar2 + 0x20);
    pcVar4 = "Play_VO_%s_Special_03";
    break;
  case 8:
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    uVar3 = FUN_0547429c(lVar2 + 0x20);
    pcVar4 = "Play_VO_%s_Special_04";
    break;
  case 9:
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    uVar3 = FUN_0547429c(lVar2 + 0x20);
    pcVar4 = "Play_VO_%s_Special_05";
    break;
  case 10:
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    uVar3 = FUN_0547429c(lVar2 + 0x20);
    pcVar4 = "Play_VO_%s_Special_06";
    break;
  case 0xb:
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    uVar3 = FUN_0547429c(lVar2 + 0x20);
    pcVar4 = "Play_VO_%s_Special_07";
    break;
  case 0xc:
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    uVar3 = FUN_0547429c(lVar2 + 0x20);
    pcVar4 = "Play_VO_%s_Special_08";
    break;
  case 0xd:
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    uVar3 = FUN_0547429c(lVar2 + 0x20);
    pcVar4 = "Play_VO_%s_Special_09";
    break;
  case 0xe:
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    uVar3 = FUN_0547429c(lVar2 + 0x20);
    pcVar4 = "Play_VO_%s_Special_10";
    break;
  case 0xf:
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    uVar3 = FUN_0547429c(lVar2 + 0x20);
    pcVar4 = "Play_VO_%s_Special_11";
    break;
  case 0x10:
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    uVar3 = FUN_0547429c(lVar2 + 0x20);
    pcVar4 = "Play_VO_%s_Special_12";
    break;
  case 0x11:
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    uVar3 = FUN_0547429c(lVar2 + 0x20);
    pcVar4 = "Play_VO_%s_Special_13";
    break;
  case 0x12:
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    uVar3 = FUN_0547429c(lVar2 + 0x20);
    pcVar4 = "Play_VO_%s_Special_14";
    break;
  case 0x13:
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    uVar3 = FUN_0547429c(lVar2 + 0x20);
    pcVar4 = "Play_VO_%s_Special_15";
    break;
  case 0x14:
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    uVar3 = FUN_0547429c(lVar2 + 0x20);
    pcVar4 = "Play_VO_%s_Special_16";
    break;
  case 0x15:
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    uVar3 = FUN_0547429c(lVar2 + 0x20);
    pcVar4 = "Play_VO_%s_Special_17";
    break;
  default:
    goto switchD_03c82060_default;
  }
  Sexy::StrFormat(pcVar4,asStack_10,uVar3);
  FUN_05474278(asStack_18,asStack_10);
  std::string::~string(asStack_10);
LAB_03c820c8:
  psVar1 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(psVar1,asStack_18);
  std::string::~string(asStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPC::pickAndPlayTalkingAnimation() */

void __thiscall CrazyNPC::pickAndPlayTalkingAnimation(CrazyNPC *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  char *__s;
  code *pcVar8;
  size_t in_x2;
  PopAnimRig *pPVar9;
  string asStack_88 [8];
  string asStack_80 [24];
  DummyInit aDStack_68 [48];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  iVar3 = *(int *)(this + 0x24);
  local_8 = ___stack_chk_guard;
  if (iVar3 == 0) {
    iVar3 = 1;
    uVar4 = FUN_054765c4(this + 0x10);
    if (uVar4 < 9) goto LAB_03c824d8;
    iVar3 = 2;
    if (0x33 < uVar4) {
      iVar3 = 3;
    }
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    iVar1 = *(int *)(lVar5 + 0x18);
  }
  else {
LAB_03c824d8:
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    iVar1 = *(int *)(lVar5 + 0x18);
  }
  if (iVar1 != 0) {
    piVar6 = (int *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_rightmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)this);
    goto LAB_03c824f4;
  }
  Set8BytesTo0(asStack_88);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_68);
  piVar6 = (int *)std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_rightmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)this);
  iVar1 = *piVar6;
  cVar2 = IsHoldingItem(this);
  if (cVar2 == '\0') {
    if ((iVar1 - 6U < 2) || (iVar1 == 4)) {
      std::string::append(asStack_88,"anim_crazyblahblah",in_x2);
      pcVar8 = onCrazyTalkingAnimFinished;
      goto LAB_03c8264c;
    }
    if ((iVar1 == 0x11) || (iVar1 == 5)) {
LAB_03c82718:
      __s = "anim_smalltalk";
LAB_03c826a4:
      std::string::append(asStack_88,__s,in_x2);
      pcVar8 = onTalkAnimFinished;
      goto LAB_03c8264c;
    }
    if ((iVar1 == 0xb) || (((iVar1 - 0xdU < 2 || (iVar1 == 0x10)) || (iVar1 - 0x12U < 3)))) {
LAB_03c82698:
      __s = "anim_mediumtalk";
      goto LAB_03c826a4;
    }
    if ((((iVar1 - 8U < 3) || (iVar1 == 0xc)) || (iVar1 == 0xf)) || (iVar1 == 0x15)) {
LAB_03c82728:
      __s = "anim_blahblah";
      goto LAB_03c826a4;
    }
    if (iVar3 == 2) goto LAB_03c82698;
    if (iVar3 == 3) goto LAB_03c82728;
    if (iVar3 == 1) goto LAB_03c82718;
  }
  else {
    uVar7 = FUN_0547429c(this + 0x128);
    Sexy::StrFormat("anim_%s_talk",asStack_80,uVar7);
    FUN_05474278(asStack_88,asStack_80);
    std::string::~string(asStack_80);
    pcVar8 = onHoldingTalkingAnimFinished;
LAB_03c8264c:
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,pcVar8);
    Sexy::Delegate1<std::string_const&>::Delegate1<CrazyNPC,void(CrazyNPC::*)(std::string_const&)>
              (aDStack_38,asStack_80);
    Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
              ((Delegate2<Sexy::IPurchaseDriver*,bool> *)aDStack_68,(Delegate2 *)aDStack_38);
  }
  pPVar9 = *(PopAnimRig **)(this + 0x18);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,aDStack_68);
  PopAnimRig::PlayAndStop(pPVar9,asStack_88,0,aDStack_38);
  std::string::~string(asStack_88);
LAB_03c824f4:
  pickAndPlayTalkingVO(this,*piVar6,iVar3);
  *(undefined4 *)(this + 0x24) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrazyNPC::StartTalking(std::wstring const&) */

void CrazyNPC::StartTalking(wstring *param_1)

{
  char cVar1;
  
  thunk_FUN_05477b9c(param_1 + 0x10);
  cVar1 = IsLoaded((CrazyNPC *)param_1);
  if (cVar1 != '\0') {
    cVar1 = IsTalking((CrazyNPC *)param_1);
    if (cVar1 != '\0') {
      pickAndPlayTalkingAnimation((CrazyNPC *)param_1);
      return;
    }
    cVar1 = IsHoldingItem((CrazyNPC *)param_1);
    if (cVar1 == '\0') {
      (**(code **)(*(long *)param_1 + 0x78))(param_1,6);
      return;
    }
    (**(code **)(*(long *)param_1 + 0x78))(param_1,9);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPC::onEnterState_HoldingTalking(CrazyNPCState) */

void CrazyNPC::onEnterState_HoldingTalking
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *param_1,undefined8 param_2,size_t param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  char *__s;
  code *pcVar8;
  PopAnimRig *pPVar9;
  string asStack_88 [8];
  string asStack_80 [24];
  DummyInit aDStack_68 [48];
  Delegate1<std::string_const&> aDStack_38 [48];
  long lStack_8;
  
  iVar3 = *(int *)(param_1 + 0x24);
  lStack_8 = ___stack_chk_guard;
  if (iVar3 == 0) {
    iVar3 = 1;
    uVar4 = FUN_054765c4(param_1 + 0x10);
    if (uVar4 < 9) goto LAB_03c824d8;
    iVar3 = 2;
    if (0x33 < uVar4) {
      iVar3 = 3;
    }
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
    iVar1 = *(int *)(lVar5 + 0x18);
  }
  else {
LAB_03c824d8:
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
    iVar1 = *(int *)(lVar5 + 0x18);
  }
  if (iVar1 != 0) {
    piVar6 = (int *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_rightmost(param_1);
    goto LAB_03c824f4;
  }
  Set8BytesTo0(asStack_88);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_68);
  piVar6 = (int *)std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_rightmost(param_1);
  iVar1 = *piVar6;
  cVar2 = IsHoldingItem((CrazyNPC *)param_1);
  if (cVar2 == '\0') {
    if ((iVar1 - 6U < 2) || (iVar1 == 4)) {
      std::string::append(asStack_88,"anim_crazyblahblah",param_3);
      pcVar8 = onCrazyTalkingAnimFinished;
      goto LAB_03c8264c;
    }
    if ((iVar1 == 0x11) || (iVar1 == 5)) {
LAB_03c82718:
      __s = "anim_smalltalk";
LAB_03c826a4:
      std::string::append(asStack_88,__s,param_3);
      pcVar8 = onTalkAnimFinished;
      goto LAB_03c8264c;
    }
    if ((iVar1 == 0xb) || (((iVar1 - 0xdU < 2 || (iVar1 == 0x10)) || (iVar1 - 0x12U < 3)))) {
LAB_03c82698:
      __s = "anim_mediumtalk";
      goto LAB_03c826a4;
    }
    if ((((iVar1 - 8U < 3) || (iVar1 == 0xc)) || (iVar1 == 0xf)) || (iVar1 == 0x15)) {
LAB_03c82728:
      __s = "anim_blahblah";
      goto LAB_03c826a4;
    }
    if (iVar3 == 2) goto LAB_03c82698;
    if (iVar3 == 3) goto LAB_03c82728;
    if (iVar3 == 1) goto LAB_03c82718;
  }
  else {
    uVar7 = FUN_0547429c(param_1 + 0x128);
    Sexy::StrFormat("anim_%s_talk",asStack_80,uVar7);
    FUN_05474278(asStack_88,asStack_80);
    std::string::~string(asStack_80);
    pcVar8 = onHoldingTalkingAnimFinished;
LAB_03c8264c:
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,pcVar8);
    Sexy::Delegate1<std::string_const&>::Delegate1<CrazyNPC,void(CrazyNPC::*)(std::string_const&)>
              (aDStack_38,asStack_80);
    Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
              ((Delegate2<Sexy::IPurchaseDriver*,bool> *)aDStack_68,(Delegate2 *)aDStack_38);
  }
  pPVar9 = *(PopAnimRig **)(param_1 + 0x18);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,aDStack_68);
  PopAnimRig::PlayAndStop(pPVar9,asStack_88,0,aDStack_38);
  std::string::~string(asStack_88);
LAB_03c824f4:
  pickAndPlayTalkingVO((CrazyNPC *)param_1,*piVar6,iVar3);
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPC::onEnterState_Entering(CrazyNPCState) */

void CrazyNPC::onEnterState_Entering(ReceivedDataCallback *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  string *psVar4;
  char *pcVar5;
  PASpriteDef *this;
  PopAnimRig *pPVar6;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
  if (*(int *)(lVar3 + 0x18) == 0) {
    pPVar6 = *(PopAnimRig **)(param_1 + 0x18);
    std::string::string(asStack_58,"anim_enter");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              (param_1,onEnteringAnimFinished);
    Sexy::Delegate1<std::string_const&>::Delegate1<CrazyNPC,void(CrazyNPC::*)(std::string_const&)>
              (aDStack_38,asStack_50);
    PopAnimRig::PlayAndStop(pPVar6,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
    psVar4 = (string *)GetNPCName((CrazyNPC *)param_1);
    bVar1 = std::operator==(psVar4,"crazydave");
    if (bVar1) {
      pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar5,"Play_CrazyDave_Enter");
    }
    else {
      psVar4 = (string *)GetNPCName((CrazyNPC *)param_1);
      bVar1 = std::operator==(psVar4,"winnie");
      if (bVar1) {
        pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar5,"Play_VO_TimeMachine_Arrive");
      }
    }
  }
  else {
    psVar4 = (string *)GetNPCName((CrazyNPC *)param_1);
    bVar1 = std::operator==(psVar4,"crazydaveicon");
    if (bVar1) {
      pPVar6 = *(PopAnimRig **)(param_1 + 0x18);
      std::string::string(asStack_50,"dave");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aDStack_38)
      ;
      PopAnimRig::PlayAndContinue(pPVar6,asStack_50,0,(DummyInit *)aDStack_38);
      std::string::~string(asStack_50);
      nop();
    }
    else {
      psVar4 = (string *)GetNPCName((CrazyNPC *)param_1);
      bVar1 = std::operator==(psVar4,"winnieicon");
      if (bVar1) {
        pPVar6 = *(PopAnimRig **)(param_1 + 0x18);
        std::string::string(asStack_50,"winnie");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3
                  ((DummyInit *)aDStack_38);
        PopAnimRig::PlayAndContinue(pPVar6,asStack_50,0,(DummyInit *)aDStack_38);
        std::string::~string(asStack_50);
        nop();
      }
      else {
        psVar4 = (string *)GetNPCName((CrazyNPC *)param_1);
        bVar1 = std::operator==(psVar4,"zombossicon");
        if (bVar1) {
          lVar3 = FUN_03c7f854(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20));
          this = (PASpriteDef *)**(undefined8 **)(lVar3 + 0x58);
          std::string::string(asStack_50,"anim_enter");
          iVar2 = Sexy::PASpriteDef::GetLabelFrame(this,asStack_50);
          std::string::~string(asStack_50);
          nop();
          if (iVar2 != -1) {
            pPVar6 = *(PopAnimRig **)(param_1 + 0x18);
            std::string::string(asStack_58,"anim_enter");
            Sexy::
            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                      (param_1,onEnteringAnimFinished);
            Sexy::Delegate1<std::string_const&>::
            Delegate1<CrazyNPC,void(CrazyNPC::*)(std::string_const&)>(aDStack_38,asStack_50);
            PopAnimRig::PlayAndStop(pPVar6,asStack_58,0,aDStack_38);
            std::string::~string(asStack_58);
            nop();
          }
        }
      }
    }
  }
  FUN_05476f98(param_1 + 0x10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPC::onEnterState_Leaving(CrazyNPCState) */

void CrazyNPC::onEnterState_Leaving(ReceivedDataCallback *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  string *psVar4;
  char *pcVar5;
  PASpriteDef *this;
  PopAnimRig *pPVar6;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
  if (*(int *)(lVar3 + 0x18) == 0) {
    pPVar6 = *(PopAnimRig **)(param_1 + 0x18);
    if (pPVar6 != (PopAnimRig *)0x0) {
      std::string::string(asStack_58,"anim_leave");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                (param_1,onLeavingAnimFinished);
      Sexy::Delegate1<std::string_const&>::Delegate1<CrazyNPC,void(CrazyNPC::*)(std::string_const&)>
                (aDStack_38,asStack_50);
      PopAnimRig::PlayAndStop(pPVar6,asStack_58,0,aDStack_38);
      std::string::~string(asStack_58);
      nop();
    }
    psVar4 = (string *)GetNPCName((CrazyNPC *)param_1);
    bVar1 = std::operator==(psVar4,"crazydave");
    if (bVar1) {
      pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar5,"Play_CrazyDave_Leave");
    }
    else {
      psVar4 = (string *)GetNPCName((CrazyNPC *)param_1);
      bVar1 = std::operator==(psVar4,"winnie");
      if (bVar1) {
        pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar5,"Play_VO_TimeMachine_Away");
      }
    }
  }
  else {
    psVar4 = (string *)GetNPCName((CrazyNPC *)param_1);
    bVar1 = std::operator==(psVar4,"zombossicon");
    if ((bVar1) && (*(long *)(param_1 + 0x18) != 0)) {
      lVar3 = FUN_03c7f854(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20));
      this = (PASpriteDef *)**(undefined8 **)(lVar3 + 0x58);
      std::string::string(asStack_50,"anim_leave");
      iVar2 = Sexy::PASpriteDef::GetLabelFrame(this,asStack_50);
      std::string::~string(asStack_50);
      nop();
      if (iVar2 != -1) {
        pPVar6 = *(PopAnimRig **)(param_1 + 0x18);
        std::string::string(asStack_58,"anim_leave");
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  (param_1,onLeavingAnimFinished);
        Sexy::Delegate1<std::string_const&>::
        Delegate1<CrazyNPC,void(CrazyNPC::*)(std::string_const&)>(aDStack_38,asStack_50);
        PopAnimRig::PlayAndStop(pPVar6,asStack_58,0,aDStack_38);
        std::string::~string(asStack_58);
        nop();
      }
    }
  }
  FUN_05476f98(param_1 + 0x10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPC::onEnterState_HoldingEat(CrazyNPCState) */

void CrazyNPC::onEnterState_HoldingEat(ReceivedDataCallback *param_1)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  PopAnimRig *pPVar4;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
  if (*(int *)(lVar1 + 0x18) == 0) {
    pPVar4 = *(PopAnimRig **)(param_1 + 0x18);
    uVar2 = FUN_0547429c(param_1 + 0x128);
    Sexy::StrFormat("anim_%s_eat",asStack_58,uVar2);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              (param_1,onHoldingEatAnimFinished);
    Sexy::Delegate1<std::string_const&>::Delegate1<CrazyNPC,void(CrazyNPC::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar4,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_VO_CrazyDave_Taco_Chomp");
  }
  FUN_05476f98(param_1 + 0x10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPC::addToLoadingResourcesGroupList(std::string const&) */

void __thiscall CrazyNPC::addToLoadingResourcesGroupList(CrazyNPC *this,string *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x108);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    if (local_8 == ___stack_chk_guard) {
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)this_00,param_1);
      return;
    }
  }
  else if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPC::StaticClassInit() */

void CrazyNPC::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<CrazyNPCState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<CrazyNPCState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"CrazyNPC");
      (*pcVar4)(plVar1,asStack_150,FUN_03c83ca0,0x130,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<CrazyNPCState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x80);
  Sexy::Delegate1<CrazyNPCState>::Delegate1<CrazyNPC,void(CrazyNPC::*)(CrazyNPCState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x88);
  Sexy::Delegate0::Delegate0<CrazyNPC,void(CrazyNPC::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x90);
  Sexy::Delegate1<CrazyNPCState>::Delegate1<CrazyNPC,void(CrazyNPC::*)(CrazyNPCState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CNPC_Loading");
  StateDefinition<CrazyNPCState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03c83158(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x98);
  Sexy::Delegate1<CrazyNPCState>::Delegate1<CrazyNPC,void(CrazyNPC::*)(CrazyNPCState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa0);
  Sexy::Delegate0::Delegate0<CrazyNPC,void(CrazyNPC::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa8);
  Sexy::Delegate1<CrazyNPCState>::Delegate1<CrazyNPC,void(CrazyNPC::*)(CrazyNPCState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CNPC_Initializing");
  StateDefinition<CrazyNPCState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03c83158(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb0);
  Sexy::Delegate1<CrazyNPCState>::Delegate1<CrazyNPC,void(CrazyNPC::*)(CrazyNPCState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb8);
  Sexy::Delegate0::Delegate0<CrazyNPC,void(CrazyNPC::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xc0);
  Sexy::Delegate1<CrazyNPCState>::Delegate1<CrazyNPC,void(CrazyNPC::*)(CrazyNPCState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CNPC_Ready");
  StateDefinition<CrazyNPCState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03c83158(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xc8);
  Sexy::Delegate1<CrazyNPCState>::Delegate1<CrazyNPC,void(CrazyNPC::*)(CrazyNPCState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xd0);
  Sexy::Delegate0::Delegate0<CrazyNPC,void(CrazyNPC::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xd8);
  Sexy::Delegate1<CrazyNPCState>::Delegate1<CrazyNPC,void(CrazyNPC::*)(CrazyNPCState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CNPC_State_Entering");
  StateDefinition<CrazyNPCState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03c83158(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xe0);
  Sexy::Delegate1<CrazyNPCState>::Delegate1<CrazyNPC,void(CrazyNPC::*)(CrazyNPCState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xe8);
  Sexy::Delegate0::Delegate0<CrazyNPC,void(CrazyNPC::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xf0);
  Sexy::Delegate1<CrazyNPCState>::Delegate1<CrazyNPC,void(CrazyNPC::*)(CrazyNPCState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CNPC_State_Leaving");
  StateDefinition<CrazyNPCState>::StateDefinition
            (aSStack_a8,4,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03c83158(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xf8);
  Sexy::Delegate1<CrazyNPCState>::Delegate1<CrazyNPC,void(CrazyNPC::*)(CrazyNPCState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x100);
  Sexy::Delegate0::Delegate0<CrazyNPC,void(CrazyNPC::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x108);
  Sexy::Delegate1<CrazyNPCState>::Delegate1<CrazyNPC,void(CrazyNPC::*)(CrazyNPCState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CNPC_State_Idle");
  StateDefinition<CrazyNPCState>::StateDefinition
            (aSStack_a8,5,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03c83158(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x110);
  Sexy::Delegate1<CrazyNPCState>::Delegate1<CrazyNPC,void(CrazyNPC::*)(CrazyNPCState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x118);
  Sexy::Delegate0::Delegate0<CrazyNPC,void(CrazyNPC::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x120);
  Sexy::Delegate1<CrazyNPCState>::Delegate1<CrazyNPC,void(CrazyNPC::*)(CrazyNPCState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CNPC_State_Talking");
  StateDefinition<CrazyNPCState>::StateDefinition
            (aSStack_a8,6,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03c83158(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x128);
  Sexy::Delegate1<CrazyNPCState>::Delegate1<CrazyNPC,void(CrazyNPC::*)(CrazyNPCState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x130);
  Sexy::Delegate0::Delegate0<CrazyNPC,void(CrazyNPC::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x138);
  Sexy::Delegate1<CrazyNPCState>::Delegate1<CrazyNPC,void(CrazyNPC::*)(CrazyNPCState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CNPC_State_HoldingEnter");
  StateDefinition<CrazyNPCState>::StateDefinition
            (aSStack_a8,7,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03c83158(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x140);
  Sexy::Delegate1<CrazyNPCState>::Delegate1<CrazyNPC,void(CrazyNPC::*)(CrazyNPCState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x148);
  Sexy::Delegate0::Delegate0<CrazyNPC,void(CrazyNPC::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x150);
  Sexy::Delegate1<CrazyNPCState>::Delegate1<CrazyNPC,void(CrazyNPC::*)(CrazyNPCState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CNPC_State_HoldingIdle");
  StateDefinition<CrazyNPCState>::StateDefinition
            (aSStack_a8,8,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03c83158(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x158);
  Sexy::Delegate1<CrazyNPCState>::Delegate1<CrazyNPC,void(CrazyNPC::*)(CrazyNPCState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x160);
  Sexy::Delegate0::Delegate0<CrazyNPC,void(CrazyNPC::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x168);
  Sexy::Delegate1<CrazyNPCState>::Delegate1<CrazyNPC,void(CrazyNPC::*)(CrazyNPCState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CNPC_State_HoldingTalking");
  StateDefinition<CrazyNPCState>::StateDefinition
            (aSStack_a8,9,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03c83158(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x170);
  Sexy::Delegate1<CrazyNPCState>::Delegate1<CrazyNPC,void(CrazyNPC::*)(CrazyNPCState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x178);
  Sexy::Delegate0::Delegate0<CrazyNPC,void(CrazyNPC::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x180);
  Sexy::Delegate1<CrazyNPCState>::Delegate1<CrazyNPC,void(CrazyNPC::*)(CrazyNPCState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CNPC_State_HoldingEat");
  StateDefinition<CrazyNPCState>::StateDefinition
            (aSStack_a8,10,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03c83158(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x188);
  Sexy::Delegate1<CrazyNPCState>::Delegate1<CrazyNPC,void(CrazyNPC::*)(CrazyNPCState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x190);
  Sexy::Delegate0::Delegate0<CrazyNPC,void(CrazyNPC::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x198);
  Sexy::Delegate1<CrazyNPCState>::Delegate1<CrazyNPC,void(CrazyNPC::*)(CrazyNPCState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CNPC_Dead");
  StateDefinition<CrazyNPCState>::StateDefinition
            (aSStack_a8,0xb,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03c83158(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* CrazyNPC::StaticGetClass() */

long * CrazyNPC::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"CrazyNPC",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CrazyNPC::GetClass() const */

long * CrazyNPC::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"CrazyNPC",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPC::setState(CrazyNPCState) */

void __thiscall CrazyNPC::setState(CrazyNPC *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<CrazyNPCState>(this_00,pRVar1);
  StateMachineTable<CrazyNPCState>::GetStateDefinitionWithContext(aSStack_a8,pSVar2,param_2,this);
  setStateHelper(this,(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrazyNPC::IsEntering() */

bool __thiscall CrazyNPC::IsEntering(CrazyNPC *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = getState(this);
  bVar1 = true;
  if (iVar2 != 3) {
    iVar2 = getState(this);
    bVar1 = iVar2 == 7;
  }
  return bVar1;
}

