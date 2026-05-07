// Class: UniverseWorldButton


/* UniverseWorldButton::GetWorldName() */

undefined8 UniverseWorldButton::GetWorldName(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* UniverseWorldButton::SetUniverseIconOffset(Sexy::Point) */

void __thiscall
UniverseWorldButton::SetUniverseIconOffset(UniverseWorldButton *this,undefined8 *param_2)

{
  *(undefined8 *)(this + 0x1d8) = *param_2;
  return;
}


/* UniverseWorldButton::GetStartPoint() const */

UniverseWorldButton * __thiscall UniverseWorldButton::GetStartPoint(UniverseWorldButton *this)

{
  return this + 0x208;
}


/* UniverseWorldButton::IsMouseOver(int, int) const */

void __thiscall UniverseWorldButton::IsMouseOver(UniverseWorldButton *this,int param_1,int param_2)

{
  Sexy::TRect<int>::Contains((TRect<int> *)(this + 0x198),param_1,param_2);
  return;
}


/* UniverseWorldButton::Update() */

void __thiscall UniverseWorldButton::Update(UniverseWorldButton *this)

{
  char cVar1;
  WorldMapEventAlert *this_00;
  
  this_00 = *(WorldMapEventAlert **)(this + 0x1d0);
  cVar1 = FUN_044e4248(this_00);
  if (cVar1 == '\0') {
    return;
  }
  WorldMapEventAlert::Update(this_00);
  return;
}


/* UniverseWorldButton::onUniverseMapOpened() */

void __thiscall UniverseWorldButton::onUniverseMapOpened(UniverseWorldButton *this)

{
  char cVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x1d0);
  cVar1 = FUN_044e4248(plVar2);
  if (cVar1 != '\0') {
    (**(code **)(*plVar2 + 0x48))(plVar2);
  }
  return;
}


/* UniverseWorldButton::GetHitRect() const */

UniverseWorldButton * __thiscall UniverseWorldButton::GetHitRect(UniverseWorldButton *this)

{
  return this + 0x198;
}


/* UniverseWorldButton::RemoveWorldMapEventAlert() */

void __thiscall UniverseWorldButton::RemoveWorldMapEventAlert(UniverseWorldButton *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x1d0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    *(undefined8 *)(this + 0x1d0) = 0;
  }
  return;
}


/* UniverseWorldButton::onYetiRemoved() */

void __thiscall UniverseWorldButton::onYetiRemoved(UniverseWorldButton *this)

{
  char cVar1;
  
  cVar1 = FUN_044e4248(*(undefined8 *)(this + 0x1d0));
  if (cVar1 == '\0') {
    return;
  }
  RemoveWorldMapEventAlert(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldButton::~UniverseWorldButton() */

void __thiscall UniverseWorldButton::~UniverseWorldButton(UniverseWorldButton *this)

{
  LawnApp *this_00;
  char cVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06855880;
  cVar1 = FUN_044e4248(*(undefined8 *)(this + 0x1d0));
  if (cVar1 != '\0') {
    RemoveWorldMapEventAlert(this);
  }
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_UniverseWorldInfo");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string((string *)(this + 0x200));
  std::string::~string((string *)(this + 0x1f8));
  FUN_05476c50(this + 0x1e8);
  FUN_05476c50(this + 0x1e0);
  std::string::~string((string *)(this + 0x1b0));
  Sexy::ButtonWidget::~ButtonWidget((ButtonWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UniverseWorldButton::~UniverseWorldButton() */

void __thiscall UniverseWorldButton::~UniverseWorldButton(UniverseWorldButton *this)

{
  ~UniverseWorldButton(this);
  AK::FreeHook(this);
  return;
}


/* UniverseWorldButton::NeedPlayUnlockAnim() */

UniverseWorldButton __thiscall UniverseWorldButton::NeedPlayUnlockAnim(UniverseWorldButton *this)

{
  return this[0x210];
}


/* UniverseWorldButton::NeedPlayRevealAnim() */

UniverseWorldButton __thiscall UniverseWorldButton::NeedPlayRevealAnim(UniverseWorldButton *this)

{
  return this[0x211];
}


/* UniverseWorldButton::SetPlayUnlockAnim(bool) */

void __thiscall UniverseWorldButton::SetPlayUnlockAnim(UniverseWorldButton *this,bool param_1)

{
  this[0x210] = (UniverseWorldButton)param_1;
  return;
}


/* UniverseWorldButton::SetPlayRevealAnim(bool) */

void __thiscall UniverseWorldButton::SetPlayRevealAnim(UniverseWorldButton *this,bool param_1)

{
  this[0x211] = (UniverseWorldButton)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldButton::SetWorldMapEventAlert(WorldMapEventAlert*, Sexy::TRect<int>) */

void __thiscall
UniverseWorldButton::SetWorldMapEventAlert
          (UniverseWorldButton *this,undefined8 param_1,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Insets *pIVar4;
  MapPopupDialog *pMVar5;
  long *plVar6;
  code *pcVar7;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  *(undefined8 *)(this + 0x1d0) = param_1;
  local_8 = ___stack_chk_guard;
  pIVar4 = (Insets *)GetHitRect(this);
  Sexy::Insets::Insets((Insets *)&local_28,pIVar4);
  pMVar5 = *(MapPopupDialog **)(this + 0x1d0);
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(gLawnApp + 0x724),*(int *)(gLawnApp + 0x728));
  MapPopupDialog::SetPositionBounds(pMVar5,aIStack_18);
  plVar6 = *(long **)(this + 0x1d0);
  iVar1 = *param_3;
  iVar2 = param_3[1];
  pcVar7 = *(code **)(*plVar6 + 0x58);
  iVar3 = FUN_044e43a8(0x78);
  Sexy::Point::Point((Point *)aIStack_18,iVar1 + local_28 + local_20 / 2,
                     iVar2 + local_24 + local_1c / 2 + iVar3);
  (*pcVar7)(plVar6,aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldButton::drawUniverseButton(Sexy::Graphics*, Sexy::Image*) */

void __thiscall
UniverseWorldButton::drawUniverseButton(UniverseWorldButton *this,Graphics *param_1,Image *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  GraphicsAutoState aGStack_20 [8];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  iVar5 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_2);
  fVar8 = *(float *)(this + 0x218);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_2);
  iVar1 = *(int *)(this + 0x50);
  fVar9 = *(float *)(this + 0x218);
  iVar2 = *(int *)(this + 0x54);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  Sexy::Insets::Insets((Insets *)local_18,0xff,0xff,0xff,*(int *)(this + 0x21c));
  Sexy::Graphics::SetColor(param_1,(Color *)local_18);
  cVar4 = FUN_044e4694(*(undefined4 *)(this + 0x1a8));
  if ((cVar4 == '\0') && (*(long *)(this + 0x1c8) == 0)) {
    Sexy::Insets::Insets((Insets *)local_18,0x80,0x80,0x80,*(int *)(this + 0x21c));
    Sexy::Graphics::SetColor(param_1,(Color *)local_18);
  }
  local_18[0] = 0x80;
  piVar7 = eastl::max_alt<int>((int *)local_18,(int *)(this + 0x214));
  iVar3 = *piVar7;
  Sexy::Insets::Insets((Insets *)local_18,iVar3,iVar3,iVar3,iVar3);
  Sexy::Graphics::SetColor(param_1,(Color *)local_18);
  Sexy::Graphics::ClearClipRect(param_1);
  Sexy::Graphics::DrawImage
            (param_1,param_2,(iVar1 - (int)((float)iVar6 * fVar9)) / 2,
             (iVar2 - (int)((float)iVar5 * fVar8)) / 2,(int)((float)iVar6 * fVar9),
             (int)((float)iVar5 * fVar8));
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UniverseWorldButton::SetUnlocked(bool) */

void __thiscall UniverseWorldButton::SetUnlocked(UniverseWorldButton *this,bool param_1)

{
  char cVar1;
  
  cVar1 = FUN_044e4694(*(undefined4 *)(this + 0x1a8));
  if (param_1 != (bool)cVar1) {
    SetFlag<DebugLogFlags>(this + 0x1a8,2,param_1);
    return;
  }
  return;
}


/* UniverseWorldButton::SetIsComingSoon(bool) */

void __thiscall UniverseWorldButton::SetIsComingSoon(UniverseWorldButton *this,bool param_1)

{
  char cVar1;
  
  cVar1 = FUN_044e46a4(*(undefined4 *)(this + 0x1a8));
  if (param_1 != (bool)cVar1) {
    SetFlag<DebugLogFlags>(this + 0x1a8,4,param_1);
    nop();
    return;
  }
  return;
}


/* UniverseWorldButton::SetIsRevealed(bool) */

void __thiscall UniverseWorldButton::SetIsRevealed(UniverseWorldButton *this,bool param_1)

{
  char cVar1;
  
  cVar1 = FUN_044e46ac(*(undefined4 *)(this + 0x1a8));
  if (param_1 != (bool)cVar1) {
    SetFlag<DebugLogFlags>(this + 0x1a8,8,param_1);
    nop();
    return;
  }
  return;
}


/* UniverseWorldButton::SetIsUnlockable(bool) */

void __thiscall UniverseWorldButton::SetIsUnlockable(UniverseWorldButton *this,bool param_1)

{
  char cVar1;
  
  cVar1 = FUN_044e46b4(*(undefined4 *)(this + 0x1a8));
  if (param_1 != (bool)cVar1) {
    SetFlag<DebugLogFlags>(this + 0x1a8,0x20,param_1);
    nop();
    return;
  }
  return;
}


/* UniverseWorldButton::SetIsUniverseButton(bool) */

void __thiscall UniverseWorldButton::SetIsUniverseButton(UniverseWorldButton *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 0x1a8,0x40,param_1);
  return;
}


/* UniverseWorldButton::SetIsSelected(bool) */

void __thiscall UniverseWorldButton::SetIsSelected(UniverseWorldButton *this,bool param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_044e469c(*(undefined4 *)(this + 0x1a8));
  if (param_1 != (bool)cVar1) {
    SetFlag<DebugLogFlags>(this + 0x1a8,0x10,param_1);
    uVar2 = PVZ_RealT();
    *(undefined4 *)(this + 0x1f0) = uVar2;
    nop();
    return;
  }
  return;
}


/* UniverseWorldButton::onWorldMapSwitchedWorlds(WorldData*) */

void __thiscall
UniverseWorldButton::onWorldMapSwitchedWorlds(UniverseWorldButton *this,WorldData *param_1)

{
  char cVar1;
  
  cVar1 = FUN_044e4684(*(undefined4 *)(this + 0x1a8));
  if (cVar1 == '\0') {
    SetIsSelected(this,false);
    cVar1 = std::operator==((string *)(param_1 + 0x38),(string *)(this + 0x1b0));
    if (cVar1 != '\0') {
      SetIsSelected(this,true);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldButton::UniverseWorldButton(int, Sexy::ButtonListener*) */

void __thiscall
UniverseWorldButton::UniverseWorldButton
          (UniverseWorldButton *this,int param_1,ButtonListener *param_2)

{
  undefined *puVar1;
  LawnApp *this_00;
  undefined4 uVar2;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ButtonWidget::ButtonWidget((ButtonWidget *)this,param_1,param_2);
  *(undefined ***)this = &PTR_GetClass_06855880;
  Sexy::Insets::Insets((Insets *)(this + 0x198));
  Set8BytesTo0(this + 0x1b0);
  Sexy::Point::Point((Point *)(this + 0x1d8));
  FUN_05476574(this + 0x1e0);
  FUN_05476574(this + 0x1e8);
  Set8BytesTo0(this + 0x1f8);
  Set8BytesTo0(this + 0x200);
  Sexy::Point::Point((Point *)(this + 0x208));
  this[0x212] = (UniverseWorldButton)0x0;
  *(undefined4 *)(this + 0x214) = 0xff;
  *(undefined4 *)(this + 0x21c) = 0xff;
  *(undefined4 *)(this + 0x224) = 0xff;
  this[0x220] = (UniverseWorldButton)0x1;
  *(undefined4 *)(this + 0x218) = 0x3f800000;
  this_00 = gLawnApp;
  std::string::string((string *)&local_50,"UI_UniverseWorldInfo");
  LawnApp::LoadGroup(this_00,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  Sexy::Insets::Insets((Insets *)&local_50,0,0,0,0);
  *(undefined8 *)(this + 0x198) = local_50;
  *(undefined8 *)(this + 0x1a0) = uStack_48;
  *(undefined4 *)(this + 0x1ac) = 0xffffffff;
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  Sexy::Point::Point((Point *)&local_50,0,0);
  *(undefined8 *)(this + 0x1d8) = local_50;
  FUN_054772c4(this + 0x1e0,&DAT_056f11a8);
  FUN_054772c4(this + 0x1e8,&DAT_056f11a8);
  uVar2 = PVZ_EOT();
  this[0x210] = (UniverseWorldButton)0x0;
  this[0x211] = (UniverseWorldButton)0x0;
  this[0x228] = (UniverseWorldButton)0x0;
  *(uint *)(this + 0x60) = *(uint *)(this + 0x60) | 0x10;
  *(undefined4 *)(this + 0x1f0) = uVar2;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onYetiRemoved);
  Sexy::Delegate0::Delegate0<UniverseWorldButton,void(UniverseWorldButton::*)()>
            (aDStack_38,(string *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::TreasureYetiRemoved,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUniverseMapOpened);
  Sexy::Delegate0::Delegate0<UniverseWorldButton,void(UniverseWorldButton::*)()>
            (aDStack_38,(string *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::UniverseMapOpened,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWorldMapSwitchedWorlds);
  local_80 = local_50;
  uStack_78 = uStack_48;
  local_70 = local_40;
  MessageRouter::
  Subscribe<WorldData*,Sexy::CBMemberTranslatorX<UniverseWorldButton,void(UniverseWorldButton::*)(WorldData*)>>
            ((MessageRouter *)puVar1,Message::WorldMapSwitchedWorlds,&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldButton::Init(Sexy::TRect<int>, std::string const&) */

void __thiscall
UniverseWorldButton::Init(UniverseWorldButton *this,undefined8 *param_2,Sexy *param_3)

{
  string *psVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ResourceInfo *pRVar8;
  LotteryResultProgressBar *pLVar9;
  SalesProgressBar *pSVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  DangerRoomManager *this_00;
  ulong uVar13;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  size_t __n;
  UniverseWorldButton *pUVar14;
  int local_48;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_38 [8];
  string asStack_30 [8];
  Sexy aSStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  undefined8 local_10;
  size_t local_8;
  
  __n = ___stack_chk_guard;
  pUVar14 = this + 0x198;
  uVar7 = param_2[1];
  local_8 = ___stack_chk_guard;
  *(undefined8 *)pUVar14 = *param_2;
  *(undefined8 *)(this + 0x1a0) = uVar7;
  psVar1 = (string *)(this + 0x1b0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_38);
  iVar5 = (int)pUVar14;
  Sexy::StringToLower(param_3,extraout_x1);
  FUN_05474278(psVar1,(string *)&local_10);
  std::string::~string((string *)&local_10);
  FUN_05475d88(asStack_30,psVar1);
  cVar2 = FUN_0547419c(psVar1);
  if (cVar2 == '\0') {
    puVar11 = (undefined1 *)FUN_05474ee8(asStack_30,0);
    pbVar12 = (byte *)FUN_054741b0(param_3,0);
    iVar6 = toupper((uint)*pbVar12);
    *puVar11 = (char)iVar6;
  }
  bVar3 = std::operator==(asStack_30,"Kongfu");
  if (bVar3) {
    std::string::append(asStack_30,"Egypt",__n);
  }
  uVar7 = FUN_0547429c(asStack_30);
  Sexy::StrFormat("Play_UI_Map_Select_%s_Press",(string *)&local_10,uVar7);
  FUN_05474278(this + 0x1f8,(string *)&local_10);
  std::string::~string((string *)&local_10);
  uVar7 = FUN_0547429c(asStack_30);
  Sexy::StrFormat("Play_UI_Map_Select_%s_Release",(string *)&local_10,uVar7);
  FUN_05474278(this + 0x200,(string *)&local_10);
  std::string::~string((string *)&local_10);
  cVar2 = FUN_044e4684(*(undefined4 *)(this + 0x1a8));
  if (cVar2 == '\0') {
    Sexy::StringToUpper(param_3,extraout_x1_00);
    uVar7 = FUN_0547429c(asStack_20);
    Sexy::StrFormat("IMAGE_UI_HUD_WORLDMAP_WORLD_%s",asStack_18,uVar7);
    FindResourceId<Sexy::Image>(asStack_18,*(int *)(gLawnApp + 0xd8));
    Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
              ((RtWeakPtr<CthulhuPropertySheet> *)a_Stack_38,(RtId *)&local_10);
    Sexy::RtId::~RtId((RtId *)&local_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_38);
    *(ResourceInfo **)(this + 0x1b8) = pRVar8;
    *(ResourceInfo **)(this + 0x1c0) = pRVar8;
    Sexy::StringToUpper(param_3,extraout_x1_03);
    uVar7 = FUN_0547429c(asStack_20);
    Sexy::StrFormat("IMAGE_UI_HUD_WORLDMAP_WORLD_%s_UNAVAILABLE",asStack_18,uVar7);
    FindResourceId<Sexy::Image>(asStack_18,*(int *)(gLawnApp + 0xd8));
    Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
              ((RtWeakPtr<CthulhuPropertySheet> *)a_Stack_38,(RtId *)&local_10);
    Sexy::RtId::~RtId((RtId *)&local_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_38);
    *(ResourceInfo **)(this + 0x1c8) = pRVar8;
    goto LAB_044e5150;
  }
  Sexy::StringToUpper(param_3,extraout_x1_00);
  uVar7 = FUN_0547429c(asStack_20);
  Sexy::StrFormat("IMAGE_UI_UNIVERSE_WORLDS_%s",asStack_18,uVar7);
  FindResourceId<Sexy::Image>(asStack_18,*(int *)(gLawnApp + 0xd8));
  Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
            ((RtWeakPtr<CthulhuPropertySheet> *)a_Stack_38,(RtId *)&local_10);
  Sexy::RtId::~RtId((RtId *)&local_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_38);
  *(ResourceInfo **)(this + 0x1b8) = pRVar8;
  Sexy::StringToUpper(param_3,extraout_x1_01);
  Sexy::UTF8StringToWString(aSStack_28,extraout_x1_02);
  uVar7 = FUN_054766ec(asStack_20);
  Sexy::StrFormat(L"[WORLD_NAME_%ls]",asStack_18,uVar7);
  TodStringTranslate((wstring *)asStack_18);
  FUN_054766c8(this + 0x1e0,(string *)&local_10);
  FUN_05476c50((string *)&local_10);
  FUN_05476c50(asStack_18);
  FUN_05476c50(asStack_20);
  std::string::~string((string *)aSStack_28);
  if (this[0x228] == (UniverseWorldButton)0x0) {
    bVar3 = std::operator==(psVar1,"dark");
    if (!bVar3) goto LAB_044e5190;
LAB_044e4fec:
    iVar5 = *(int *)(this + 0x50);
    pLVar9 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e438);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
    local_48 = FUN_044e43a8(10);
    iVar6 = *(int *)(this + 0x54);
    local_48 = (iVar5 - iVar4) / 2 - local_48;
    pSVar10 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e438);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar10);
    uVar7 = 0x39;
LAB_044e503c:
    iVar4 = FUN_044e43a8(uVar7);
    iVar4 = iVar4 + (iVar6 - iVar5) / 2;
  }
  else {
    this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    uVar13 = DangerRoomManager::GetHighestTrainingRecord(this_00,psVar1);
    std::string::string(asStack_18,"[DANGERROOM_TRAINING_RECORD_LEVEL]");
    StringHelper::ReplaceNumberString
              ((StringHelper *)asStack_18,(string *)L"{NUMBER}",(wchar_t *)(uVar13 & 0xffffffff),
               iVar5);
    FUN_054766c8(this + 0x1e8,(string *)&local_10);
    FUN_05476c50((string *)&local_10);
    std::string::~string(asStack_18);
    nop();
    bVar3 = std::operator==(psVar1,"dark");
    if (bVar3) goto LAB_044e4fec;
LAB_044e5190:
    bVar3 = std::operator==(psVar1,"beach");
    if (bVar3) {
      iVar5 = *(int *)(this + 0x50);
      pLVar9 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e438);
      iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
      local_48 = FUN_044e43a8(8);
      iVar6 = *(int *)(this + 0x54);
      local_48 = local_48 + (iVar5 - iVar4) / 2;
      pSVar10 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e438);
      iVar5 = SalesProgressBar::GetCurrentLevel(pSVar10);
      uVar7 = 0x1c;
      goto LAB_044e503c;
    }
    bVar3 = std::operator==(psVar1,"iceage");
    if (bVar3) {
      iVar5 = *(int *)(this + 0x50);
      pLVar9 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e438);
      iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
      local_48 = FUN_044e43a8(2);
      iVar6 = *(int *)(this + 0x54);
      local_48 = local_48 + (iVar5 - iVar4) / 2;
      pSVar10 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e438);
      iVar5 = SalesProgressBar::GetCurrentLevel(pSVar10);
      uVar7 = 0x27;
      goto LAB_044e503c;
    }
    bVar3 = std::operator==(psVar1,"egypt");
    if (bVar3) {
      iVar6 = *(int *)(this + 0x50);
      pLVar9 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e438);
      iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
      iVar5 = *(int *)(this + 0x54);
      local_48 = (iVar6 - iVar4) / 2;
      pSVar10 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e438);
      iVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
      uVar7 = 10;
LAB_044e538c:
      iVar4 = FUN_044e43a8(uVar7);
      iVar4 = (iVar5 - iVar6) / 2 - iVar4;
    }
    else {
      bVar3 = std::operator==(psVar1,"kongfu");
      if (bVar3) {
        iVar6 = *(int *)(this + 0x50);
        pLVar9 = (LotteryResultProgressBar *)
                 CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e438);
        iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
        iVar5 = *(int *)(this + 0x54);
        local_48 = (iVar6 - iVar4) / 2;
        pSVar10 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e438);
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
        uVar7 = 4;
        goto LAB_044e538c;
      }
      bVar3 = std::operator==(psVar1,"future");
      if (bVar3) {
        iVar6 = *(int *)(this + 0x50);
        pLVar9 = (LotteryResultProgressBar *)
                 CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e438);
        iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
        iVar5 = *(int *)(this + 0x54);
        local_48 = (iVar6 - iVar4) / 2;
        pSVar10 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e438);
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
        uVar7 = 3;
        goto LAB_044e538c;
      }
      bVar3 = std::operator==(psVar1,"cowboy");
      if (bVar3) {
        iVar5 = *(int *)(this + 0x50);
        pLVar9 = (LotteryResultProgressBar *)
                 CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e438);
        iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
        local_48 = FUN_044e43a8(0xb);
        iVar6 = *(int *)(this + 0x54);
        local_48 = (iVar5 - iVar4) / 2 - local_48;
        pSVar10 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e438);
        iVar5 = SalesProgressBar::GetCurrentLevel(pSVar10);
        uVar7 = 0x17;
        goto LAB_044e503c;
      }
      bVar3 = std::operator==(psVar1,"pirate");
      if (bVar3) {
        iVar5 = *(int *)(this + 0x50);
        pLVar9 = (LotteryResultProgressBar *)
                 CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e438);
        iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
        local_48 = FUN_044e43a8(3);
        iVar6 = *(int *)(this + 0x54);
        local_48 = (iVar5 - iVar4) / 2 - local_48;
        pSVar10 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e438);
        iVar5 = SalesProgressBar::GetCurrentLevel(pSVar10);
        uVar7 = 0x15;
        goto LAB_044e503c;
      }
      bVar3 = std::operator==(psVar1,"lostcity");
      iVar5 = *(int *)(this + 0x50);
      if (bVar3) {
        pLVar9 = (LotteryResultProgressBar *)
                 CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e438);
        iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
        iVar6 = *(int *)(this + 0x54);
        local_48 = (iVar5 - iVar4) / 2;
        pSVar10 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e438);
        iVar5 = SalesProgressBar::GetCurrentLevel(pSVar10);
        uVar7 = 0x17;
        goto LAB_044e503c;
      }
      pLVar9 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e438);
      iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
      iVar6 = *(int *)(this + 0x54);
      local_48 = (iVar5 - iVar4) / 2;
      pSVar10 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e438);
      iVar5 = SalesProgressBar::GetCurrentLevel(pSVar10);
      iVar4 = (iVar6 - iVar5) / 2;
    }
  }
  Sexy::Point::Point((Point *)&local_10,local_48,iVar4);
  *(undefined8 *)(this + 0x208) = local_10;
LAB_044e5150:
  std::string::~string(asStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldButton::drawCompletionStatus(Sexy::Graphics*, Sexy::Color) */

void UniverseWorldButton::drawCompletionStatus(long param_1,Graphics *param_2)

{
  string *psVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  LotteryResultProgressBar *pLVar9;
  ProfileMgr *this;
  PlayerInfo *pPVar10;
  Image *pIVar11;
  CachedUIResourcePtr<Sexy::Image> *pCVar12;
  string asStack_10 [8];
  long local_8;
  
  pCVar12 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e398;
  local_8 = ___stack_chk_guard;
  iVar5 = FUN_044e43a8(10);
  iVar2 = *(int *)(param_1 + 0x50);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e470);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e398);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar10 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (pPVar10 != (PlayerInfo *)0x0) {
    psVar1 = (string *)(param_1 + 0x1b0);
    bVar3 = std::operator==("",psVar1);
    if (!bVar3) {
      FUN_05475d88(asStack_10,psVar1);
      cVar4 = PlayerInfo::IsStarCupUnlocked(pPVar10,asStack_10);
      std::string::~string(asStack_10);
      if (cVar4 == '\0') {
        pCVar12 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e370;
      }
      pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar12);
      iVar8 = FUN_044e43a8(0xdc);
      pCVar12 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e470;
      Sexy::Graphics::DrawImage(param_2,pIVar11,((iVar2 / 2 - iVar5) - iVar6 / 2) - iVar7,iVar8);
      iVar2 = *(int *)(param_1 + 0x50);
      pLVar9 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e470);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
      FUN_05475d88(asStack_10,psVar1);
      cVar4 = PlayerInfo::IsBossCupUnlocked(pPVar10,asStack_10);
      std::string::~string(asStack_10);
      if (cVar4 == '\0') {
        pCVar12 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e180;
      }
      pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar12);
      iVar6 = FUN_044e43a8(0xdc);
      Sexy::Graphics::DrawImage(param_2,pIVar11,iVar2 / 2 - iVar5 / 2,iVar6);
      iVar5 = FUN_044e43a8(10);
      iVar2 = *(int *)(param_1 + 0x50);
      pLVar9 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e470);
      iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
      FUN_05475d88(asStack_10,psVar1);
      cVar4 = PlayerInfo::IsPlantCupUnlocked(pPVar10,asStack_10);
      std::string::~string(asStack_10);
      if (cVar4 == '\0') {
        pCVar12 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e2b0;
      }
      else {
        pCVar12 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e3c0;
      }
      pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar12);
      iVar7 = FUN_044e43a8(0xdc);
      Sexy::Graphics::DrawImage(param_2,pIVar11,iVar5 + iVar2 / 2 + iVar6 / 2,iVar7);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UniverseWorldButton::drawPreviewButton(Sexy::Graphics*, Sexy::Color) */

void UniverseWorldButton::drawPreviewButton(long param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LotteryResultProgressBar *this;
  SalesProgressBar *this_00;
  Image *pIVar4;
  
  this = (LotteryResultProgressBar *)
         CachedUIResourcePtr<Sexy::Image>::operator->
                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e278);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e278);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e278);
  iVar3 = FUN_044e43a8(0xe6);
  Sexy::Graphics::DrawImage(param_2,pIVar4,(*(int *)(param_1 + 0x50) - iVar1) / 2,iVar3,iVar1,iVar2)
  ;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldButton::drawWorldDetails(Sexy::Graphics*) */

void __thiscall UniverseWorldButton::drawWorldDetails(UniverseWorldButton *this,Graphics *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  GraphicsAutoState aGStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  Sexy::Insets::Insets(aIStack_28,0xff,0xff,0xff,*(int *)(this + 0x214));
  Sexy::Graphics::SetColor(param_1,(Color *)aIStack_28);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  iVar4 = FUN_044e43a8(0xffffffe8);
  iVar1 = *(int *)(this + 0x50);
  if (this[0x228] == (UniverseWorldButton)0x0) {
    uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  }
  else {
    uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
  }
  cVar3 = FUN_054765e8(this + 0x1e0);
  if (cVar3 == '\0') {
    if (0x40 < *(int *)(this + 0x214)) {
      iVar5 = FUN_044e43a8(0xfffffff4);
      iVar6 = FUN_044e43a8(0x10e);
      iVar7 = FUN_044e43a8(0x50);
      FUN_05477b24(auStack_30,this + 0x1e0);
      Sexy::Insets::Insets(aIStack_18,aIStack_28);
      Sexy::PrimeTypeface::DrawString_Paragraph
                ((PrimeTypeface *)(float)iVar5,(float)iVar6,(float)(iVar1 - iVar4),(float)iVar7,
                 uVar8,param_1,auStack_30,1,1,aIStack_18,0);
      FUN_05476c50(auStack_30);
      goto LAB_044e5a68;
    }
LAB_044e5978:
    uVar2 = *(undefined4 *)(this + 0x1a8);
    cVar3 = FUN_044e4694(uVar2);
  }
  else {
LAB_044e5a68:
    cVar3 = FUN_054765e8(this + 0x1e8);
    if (cVar3 != '\0') goto LAB_044e5978;
    if (*(int *)(this + 0x214) < 0x41) goto LAB_044e5998;
    uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    iVar5 = FUN_044e43a8(0xfffffff4);
    iVar6 = FUN_044e43a8(0x136);
    iVar7 = FUN_044e43a8(0x3c);
    FUN_05477b24(auStack_30,this + 0x1e8);
    Sexy::Insets::Insets(aIStack_18,aIStack_28);
    Sexy::PrimeTypeface::DrawString_Paragraph
              ((PrimeTypeface *)(float)iVar5,(float)iVar6,(float)(iVar1 - iVar4),(float)iVar7,uVar8,
               param_1,auStack_30,1,1,aIStack_18,0);
    FUN_05476c50(auStack_30);
    uVar2 = *(undefined4 *)(this + 0x1a8);
    cVar3 = FUN_044e4694(uVar2);
  }
  if (cVar3 == '\0') {
    cVar3 = FUN_044e46a4(uVar2);
    if ((cVar3 == '\0') && (0x40 < *(int *)(this + 0x214))) {
      Sexy::Insets::Insets(aIStack_18,aIStack_28);
      drawPreviewButton(this,param_1,aIStack_18);
    }
  }
  else if (0x40 < *(int *)(this + 0x214)) {
    Sexy::Insets::Insets(aIStack_18,aIStack_28);
    drawCompletionStatus(this,param_1,aIStack_18);
  }
LAB_044e5998:
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x044e5e7c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* UniverseWorldButton::Draw(Sexy::Graphics*) */

void UniverseWorldButton::Draw(Graphics *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  Image *this;
  Graphics *in_x1;
  LineBreakCategory *in_x2;
  long *plVar6;
  code *pcVar7;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LotteryResultProgressBar *this_00;
  Image *pIVar8;
  LotteryResultProgressBar *this_01;
  undefined4 uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined4 local_1c;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar8 = *(Image **)(param_1 + 0x1b8);
  cVar2 = FUN_044e4684(*(undefined4 *)(param_1 + 0x1a8));
  if (cVar2 == '\0') {
    this_00 = (LotteryResultProgressBar *)0x0;
    this_01 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e1a8);
    uVar9 = *(undefined4 *)(param_1 + 0x1a8);
    cVar2 = FUN_044e468c(uVar9);
    if (((cVar2 != '\0') && (*(long *)(param_1 + 0x1c0) != 0)) &&
       (cVar2 = FUN_044e469c(uVar9), cVar2 == '\0')) {
      this_00 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e248);
      uVar9 = *(undefined4 *)(param_1 + 0x1a8);
    }
    cVar2 = FUN_044e4694(uVar9);
    if (((cVar2 == '\0') && (this = *(Image **)(param_1 + 0x1c8), this != (Image *)0x0)) ||
       (this = pIVar8, pIVar8 != (Image *)0x0)) {
      cVar2 = FUN_044e4684(uVar9);
      in_x2 = (LineBreakCategory *)this;
      if (cVar2 != '\0') goto LAB_044e5c24;
      iVar3 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this);
      uVar5 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)this);
      in_x4 = (LineBreakCategory *)(ulong)uVar5;
      in_x2 = (LineBreakCategory *)(ulong)(uint)-((int)uVar5 / 2);
      in_x3 = (LineBreakCategory *)(ulong)(uint)-(iVar3 / 2);
      Sexy::Graphics::DrawImage(in_x1,this,-((int)uVar5 / 2),-(iVar3 / 2),uVar5,iVar3);
    }
LAB_044e5c34:
    if (this_00 != (LotteryResultProgressBar *)0x0) {
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
      iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
      in_x3 = (LineBreakCategory *)(ulong)(uint)-(iVar4 / 2);
      in_x2 = (LineBreakCategory *)(ulong)(uint)-(iVar3 / 2);
      Sexy::Graphics::DrawImage(in_x1,(Image *)this_00,-(iVar3 / 2),-(iVar4 / 2));
    }
    if (this_01 == (LotteryResultProgressBar *)0x0) {
      cVar2 = FUN_044e4684(*(undefined4 *)(param_1 + 0x1a8));
    }
    else {
      uVar9 = *(undefined4 *)(param_1 + 0x1a8);
      cVar2 = FUN_044e469c(uVar9);
      if (cVar2 == '\0') {
        fVar10 = (float)PVZ_EOT();
        if (fVar10 <= *(float *)(param_1 + 0x1f0)) {
          cVar2 = FUN_044e4684(uVar9);
          goto joined_r0x044e5f6c;
        }
        auVar11 = PVZ_RealT();
        in_x2 = (LineBreakCategory *)&DAT_00000004;
        local_1c = 0x3f800000;
        local_18[0] = 0;
        fVar10 = CurveLerp<float>(auVar11,0x3f000000,auVar11._0_4_ - *(float *)(param_1 + 0x1f0),
                                  &local_1c,local_18);
      }
      else {
        auVar11 = PVZ_RealT();
        in_x2 = (LineBreakCategory *)&DAT_00000004;
        local_1c = 0;
        local_18[0] = 0x3f800000;
        fVar10 = CurveLerp<float>(auVar11,0x3f000000,auVar11._0_4_ - *(float *)(param_1 + 0x1f0),
                                  &local_1c,local_18);
      }
      if (0.0 < fVar10) {
        iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_01);
        iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_01);
        in_x4 = (LineBreakCategory *)(ulong)(uint)(int)(fVar10 * 255.0);
        Sexy::Insets::Insets((Insets *)local_18,0xff,0xff,0xff,(int)(fVar10 * 255.0));
        Sexy::Graphics::SetColor(in_x1,(Color *)local_18);
        Sexy::Graphics::SetColorizeImages(in_x1,true);
        in_x2 = (LineBreakCategory *)(ulong)(uint)-(iVar3 / 2);
        in_x3 = (LineBreakCategory *)(ulong)(uint)-(iVar4 / 2);
        Sexy::Graphics::DrawImage(in_x1,(Image *)this_01,-(iVar3 / 2),-(iVar4 / 2));
      }
      cVar2 = FUN_044e4684(*(undefined4 *)(param_1 + 0x1a8));
    }
joined_r0x044e5f6c:
    if (cVar2 == '\0') goto LAB_044e5ca4;
  }
  else if (pIVar8 != (Image *)0x0) {
    this_00 = (LotteryResultProgressBar *)0x0;
    this_01 = (LotteryResultProgressBar *)0x0;
    in_x2 = (LineBreakCategory *)pIVar8;
LAB_044e5c24:
    drawUniverseButton((UniverseWorldButton *)param_1,in_x1,(Image *)in_x2);
    goto LAB_044e5c34;
  }
  cVar2 = FUN_044e42cc(param_1[0x212]);
  if (cVar2 == '\0') {
    drawWorldDetails((UniverseWorldButton *)param_1,in_x1);
  }
LAB_044e5ca4:
  Sexy::Graphics::SetColorizeImages(in_x1,false);
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::Graphics::SetColor(in_x1,(Color *)local_18);
  Sexy::Graphics::SetColorizeImages(in_x1,false);
  cVar2 = FUN_044e4684(*(undefined4 *)(param_1 + 0x1a8));
  if ((cVar2 == '\0') && (*(long *)(param_1 + 0x1d0) != 0)) {
    auVar11 = LawnApp::GetWorldMap(gLawnApp);
    cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (auVar11._0_8_,auVar11._8_8_,in_x2,in_x3,in_x4);
    if (cVar2 == '\0') {
      plVar6 = *(long **)(param_1 + 0x1d0);
      uVar9 = *(undefined4 *)(in_x1 + 0x10);
      uVar1 = *(undefined4 *)(in_x1 + 0x14);
      pcVar7 = *(code **)(*plVar6 + 0x10);
      *(undefined4 *)(in_x1 + 0x10) = 0;
      *(undefined4 *)(in_x1 + 0x14) = 0;
      (*pcVar7)(plVar6);
      *(undefined4 *)(in_x1 + 0x10) = uVar9;
      *(undefined4 *)(in_x1 + 0x14) = uVar1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UniverseWorldButton::PlayOnPressAudio() */

void __thiscall UniverseWorldButton::PlayOnPressAudio(UniverseWorldButton *this)

{
  string *psVar1;
  
  psVar1 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(psVar1,this + 0x1f8);
  return;
}


/* UniverseWorldButton::SetPressed(bool) */

void __thiscall UniverseWorldButton::SetPressed(UniverseWorldButton *this,bool param_1)

{
  undefined4 uVar1;
  char cVar2;
  
  uVar1 = *(undefined4 *)(this + 0x1a8);
  cVar2 = FUN_044e468c(uVar1);
  if ((param_1 != (bool)cVar2) && (cVar2 = FUN_044e469c(uVar1), cVar2 == '\0')) {
    SetFlag<DebugLogFlags>(this + 0x1a8,1,param_1);
    cVar2 = FUN_044e468c(*(undefined4 *)(this + 0x1a8));
    if (cVar2 != '\0') {
      PlayOnPressAudio(this);
      return;
    }
  }
  return;
}


/* UniverseWorldButton::PlayOnReleaseAudio() */

void __thiscall UniverseWorldButton::PlayOnReleaseAudio(UniverseWorldButton *this)

{
  string *psVar1;
  
  psVar1 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(psVar1,this + 0x200);
  return;
}

