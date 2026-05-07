// Class: NostalgiaMainView


/* NostalgiaMainView::NostalgiaMainView() */

void __thiscall NostalgiaMainView::NostalgiaMainView(NostalgiaMainView *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  PolygonCheckWidget::PolygonCheckWidget((PolygonCheckWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0676e5b0;
  FUN_05476574(this + 0x128);
  Sexy::Color::Color((Color *)(this + 0x130));
  FUN_05476574(this + 0x140);
  FUN_05476574(this + 0x148);
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  this[0x160] = (NostalgiaMainView)0x0;
  this[0x161] = (NostalgiaMainView)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<NostalgiaMainView,void(NostalgiaMainView::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* NostalgiaMainView::~NostalgiaMainView() */

void __thiscall NostalgiaMainView::~NostalgiaMainView(NostalgiaMainView *this)

{
  *(undefined ***)this = &PTR_GetClass_0676e5b0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x148);
  FUN_05476c50(this + 0x140);
  FUN_05476c50(this + 0x128);
  PolygonCheckWidget::~PolygonCheckWidget((PolygonCheckWidget *)this);
  return;
}


/* NostalgiaMainView::~NostalgiaMainView() */

void __thiscall NostalgiaMainView::~NostalgiaMainView(NostalgiaMainView *this)

{
  ~NostalgiaMainView(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NostalgiaMainView::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
NostalgiaMainView::onNotifyRefreshActivityList(NostalgiaMainView *this,bool param_1,set *param_2)

{
  bool bVar1;
  long lVar2;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (this[0x161] != (NostalgiaMainView)0x0)) {
    local_1c = 0x2a57;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      lVar2 = Sexy::LazySingleton<PvZ1AchievementManager>::GetInstancePtr();
      GeneralTaskManager::Initialize((GeneralTaskManager *)(lVar2 + 8));
      this[0x161] = (NostalgiaMainView)0x0;
    }
    else {
      this[0x161] = (NostalgiaMainView)0x0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NostalgiaMainView::PolygonDepress(int) */

void __thiscall NostalgiaMainView::PolygonDepress(NostalgiaMainView *this,int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  UIMessageBox *this_00;
  wchar_t *pwVar4;
  Image *pIVar5;
  long lVar6;
  char *pcVar7;
  NetworkMgr *this_01;
  long *plVar8;
  QuickJumpUtil *this_02;
  wstring awStack_a8 [8];
  wstring awStack_a0 [8];
  undefined1 auStack_98 [8];
  string asStack_90 [8];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_1) {
  case 0x17:
    PVZ1ModeUtils::SetIsHardMode(false);
    bVar2 = (bool)PVZ1ModeUtils::IsHardMode();
    PVZ1ModeUtils::GoToPVZ1WorldMap(bVar2);
    break;
  case 0x18:
    if (this[0x160] != (NostalgiaMainView)0x0) {
      PVZ1ModeUtils::SetIsHardMode(true);
      bVar2 = (bool)PVZ1ModeUtils::IsHardMode();
      PVZ1ModeUtils::GoToPVZ1WorldMap(bVar2);
      break;
    }
    this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_00 == (UIMessageBox *)0x0) break;
    UIMessageBox::SetShowType(this_00,4);
    TodStringTranslate(L"[REVIVE_TIP]");
    pwVar4 = L"[PVZ1MODE_HARD_MOUDLE_NOT_OPEN]";
    goto LAB_03d6b548;
  case 0x19:
    FUN_03d6ac30();
    break;
  case 0x1a:
    PVZ1ModeUtils::ShowHowToPlay(1);
    break;
  case 0x1b:
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    cVar1 = FUN_03d6aa00(local_80);
    if ((cVar1 == '\0') || (local_70 == '\0')) {
      FUN_03d6ac30();
    }
    else {
      this_02 = (QuickJumpUtil *)Sexy::LazySingleton<QuickJumpUtil>::GetInstancePtr();
      QuickJumpUtil::ShowPvz1Achievement(this_02);
    }
    ActiveItem::~ActiveItem(aAStack_88);
    break;
  case 0x1c:
    if (this[0x160] != (NostalgiaMainView)0x0) {
      UISingletonDialog<UIPVZ1ModeCredits>::ShowDialog();
      break;
    }
    this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_00 == (UIMessageBox *)0x0) break;
    UIMessageBox::SetShowType(this_00,4);
    TodStringTranslate(L"[REVIVE_TIP]");
    pwVar4 = L"[PVZ1MODE_CREDITS_TIPS]";
LAB_03d6b548:
    TodStringTranslate(pwVar4);
    TodStringTranslate(L"[BUTTON_OK]");
    UIMessageBox::SetMessage(this_00,awStack_a0,awStack_a8);
    std::string::string(asStack_90,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar5 = (Image *)StringHelper::ToImage(asStack_90,false);
    UIMessageBox::SetBackground(this_00,pIVar5);
    std::string::~string(asStack_90);
    nop();
    lVar6 = UIMessageBox::GetButtonCancel(this_00);
    thunk_FUN_05477b9c(lVar6 + 0xd8,auStack_98);
    FUN_05476c50(auStack_98);
    FUN_05476c50(awStack_a0);
    FUN_05476c50(awStack_a8);
    break;
  case 0x1d:
    this_01 = (NetworkMgr *)NetworkMgr::Instance();
    plVar8 = (long *)NetworkMgr::GetNewNetWorkProcess(this_01);
    (**(code **)(*plVar8 + 0x390))(plVar8,0,0);
    break;
  case 0x58:
    pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar7,"Play_UI_Button_X_Close_Release");
    GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NostalgiaMainView::onTouchEnded(int) */

void __thiscall NostalgiaMainView::onTouchEnded(NostalgiaMainView *this,int param_1)

{
  if ((*(int *)(this + 0x108) == param_1) && (*(int *)(this + 0x108) != -1)) {
    PolygonDepress(this,param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NostalgiaMainView::InitView() */

void __thiscall NostalgiaMainView::InitView(NostalgiaMainView *this)

{
  PolygonCheck *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  ActivityManager *this_01;
  string *extraout_x0;
  ProfileMgr *this_02;
  vector<Sexy::Point,std::allocator<Sexy::Point>> avStack_208 [24];
  vector<Sexy::Point,std::allocator<Sexy::Point>> avStack_1f0 [24];
  vector<Sexy::Point,std::allocator<Sexy::Point>> avStack_1d8 [24];
  vector<Sexy::Point,std::allocator<Sexy::Point>> avStack_1c0 [24];
  vector<Sexy::Point,std::allocator<Sexy::Point>> avStack_1a8 [24];
  vector<Sexy::Point,std::allocator<Sexy::Point>> avStack_190 [24];
  vector<Sexy::Point,std::allocator<Sexy::Point>> avStack_178 [24];
  vector<Sexy::Point,std::allocator<Sexy::Point>> avStack_160 [24];
  Point aPStack_148 [8];
  Point aPStack_140 [8];
  Point aPStack_138 [8];
  Point local_130 [8];
  Point aPStack_128 [8];
  Point aPStack_120 [8];
  Point aPStack_118 [8];
  Point aPStack_110 [72];
  PVZ1ModeMainEntryData aPStack_c8 [120];
  int local_50;
  int local_4c;
  int local_44;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x161] = (NostalgiaMainView)0x1;
  this_01 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_01,0x2a57,true,0);
  this_00 = (PolygonCheck *)(this + 0xd8);
  iVar2 = FUN_03d6aad4(0x182);
  iVar3 = FUN_03d6aad4(0xb1);
  Sexy::Point::Point(aPStack_148,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x266);
  iVar3 = FUN_03d6aad4(0xd3);
  Sexy::Point::Point(aPStack_140,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x270);
  iVar3 = FUN_03d6aad4(0x90);
  Sexy::Point::Point(aPStack_138,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x237);
  iVar3 = FUN_03d6aad4(0x86);
  Sexy::Point::Point(local_130,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x21d);
  iVar3 = FUN_03d6aad4(0x69);
  Sexy::Point::Point(aPStack_128,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x1c7);
  iVar3 = FUN_03d6aad4(0x67);
  Sexy::Point::Point(aPStack_120,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x1b3);
  iVar3 = FUN_03d6aad4(0x79);
  Sexy::Point::Point(aPStack_118,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x185);
  iVar3 = FUN_03d6aad4(0x7b);
  Sexy::Point::Point(aPStack_110,iVar2,iVar3);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector(avStack_208,aPStack_148,8,aPStack_c8)
  ;
  iVar2 = FUN_03d6aad4(0x186);
  iVar3 = FUN_03d6aad4(0xb8);
  Sexy::Point::Point(aPStack_148,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x261);
  iVar3 = FUN_03d6aad4(0xdd);
  Sexy::Point::Point(aPStack_140,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x255);
  iVar3 = FUN_03d6aad4(0x117);
  Sexy::Point::Point(aPStack_138,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x188);
  iVar3 = FUN_03d6aad4(0xef);
  Sexy::Point::Point(local_130,iVar2,iVar3);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector(avStack_1f0,aPStack_148,4,aPStack_c8)
  ;
  iVar2 = FUN_03d6aad4(0x18b);
  iVar3 = FUN_03d6aad4(0xfa);
  Sexy::Point::Point(aPStack_148,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x256);
  iVar3 = FUN_03d6aad4(0x121);
  Sexy::Point::Point(aPStack_140,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x24c);
  iVar3 = FUN_03d6aad4(0x153);
  Sexy::Point::Point(aPStack_138,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x18a);
  iVar3 = FUN_03d6aad4(0x127);
  Sexy::Point::Point(local_130,iVar2,iVar3);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector(avStack_1d8,aPStack_148,4,aPStack_c8)
  ;
  iVar2 = FUN_03d6aad4(0x18d);
  iVar3 = FUN_03d6aad4(0x131);
  Sexy::Point::Point(aPStack_148,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x249);
  iVar3 = FUN_03d6aad4(0x15d);
  Sexy::Point::Point(aPStack_140,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x244);
  iVar3 = FUN_03d6aad4(0x183);
  Sexy::Point::Point(aPStack_138,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x236);
  iVar3 = FUN_03d6aad4(0x189);
  Sexy::Point::Point(local_130,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x18e);
  iVar3 = FUN_03d6aad4(0x15a);
  Sexy::Point::Point(aPStack_128,iVar2,iVar3);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector(avStack_1c0,aPStack_148,5,aPStack_c8)
  ;
  iVar2 = FUN_03d6aad4(0x68);
  iVar3 = FUN_03d6aad4(0x172);
  Sexy::Point::Point(aPStack_148,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x54);
  iVar3 = FUN_03d6aad4(0x1ba);
  Sexy::Point::Point(aPStack_140,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x72);
  iVar3 = FUN_03d6aad4(0x1de);
  Sexy::Point::Point(aPStack_138,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0xb6);
  iVar3 = FUN_03d6aad4(0x1c9);
  Sexy::Point::Point(local_130,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0xab);
  iVar3 = FUN_03d6aad4(0x16c);
  Sexy::Point::Point(aPStack_128,iVar2,iVar3);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector(avStack_1a8,aPStack_148,5,aPStack_c8)
  ;
  iVar2 = FUN_03d6aad4(0x153);
  iVar3 = FUN_03d6aad4(0x17c);
  Sexy::Point::Point(aPStack_148,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x18a);
  iVar3 = FUN_03d6aad4(0x187);
  Sexy::Point::Point(aPStack_140,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x175);
  iVar3 = FUN_03d6aad4(0x1c1);
  Sexy::Point::Point(aPStack_138,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x144);
  iVar3 = FUN_03d6aad4(0x1b6);
  Sexy::Point::Point(local_130,iVar2,iVar3);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector(avStack_190,aPStack_148,4,aPStack_c8)
  ;
  iVar2 = FUN_03d6aad4(0x175);
  iVar3 = FUN_03d6aad4(0x1e7);
  Sexy::Point::Point(aPStack_148,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x182);
  iVar3 = FUN_03d6aad4(0x1eb);
  Sexy::Point::Point(aPStack_140,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x1a7);
  iVar3 = FUN_03d6aad4(0x1d0);
  Sexy::Point::Point(aPStack_138,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x1d6);
  iVar3 = FUN_03d6aad4(0x1cc);
  Sexy::Point::Point(local_130,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x1d6);
  iVar3 = FUN_03d6aad4(0x1a5);
  Sexy::Point::Point(aPStack_128,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x1af);
  iVar3 = FUN_03d6aad4(0x1a7);
  Sexy::Point::Point(aPStack_120,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x19e);
  iVar3 = FUN_03d6aad4(0x1ba);
  Sexy::Point::Point(aPStack_118,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x18a);
  iVar3 = FUN_03d6aad4(0x1bb);
  Sexy::Point::Point(aPStack_110,iVar2,iVar3);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector(avStack_178,aPStack_148,8,aPStack_c8)
  ;
  iVar2 = FUN_03d6aad4(0x262);
  iVar3 = FUN_03d6aad4(0x1aa);
  Sexy::Point::Point(aPStack_148,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x296);
  iVar3 = FUN_03d6aad4(0x1b0);
  Sexy::Point::Point(aPStack_140,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x292);
  iVar3 = FUN_03d6aad4(0x1d6);
  Sexy::Point::Point(aPStack_138,iVar2,iVar3);
  iVar2 = FUN_03d6aad4(0x25e);
  iVar3 = FUN_03d6aad4(0x1ce);
  Sexy::Point::Point(local_130,iVar2,iVar3);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector(avStack_160,aPStack_148,4,aPStack_c8)
  ;
  PolygonCheck::registerPolygonCheck(this_00,0x17,(vector *)avStack_208);
  PolygonCheck::registerPolygonCheck(this_00,0x18,(vector *)avStack_1f0);
  PolygonCheck::registerPolygonCheck(this_00,0x19,(vector *)avStack_1d8);
  PolygonCheck::registerPolygonCheck(this_00,0x1a,(vector *)avStack_1c0);
  PolygonCheck::registerPolygonCheck(this_00,0x1b,(vector *)avStack_1a8);
  PolygonCheck::registerPolygonCheck(this_00,0x1c,(vector *)avStack_190);
  PolygonCheck::registerPolygonCheck(this_00,0x1d,(vector *)avStack_178);
  PolygonCheck::registerPolygonCheck(this_00,0x58,(vector *)avStack_160);
  DSingleton<UserInfo>::getInstance();
  nop();
  Sexy::UTF8StringToSexyString(extraout_x0);
  FUN_054766c8(this + 0x128,aPStack_c8);
  FUN_05476c50(aPStack_c8);
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_02);
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_130[0] != (Point)0x0) {
    PVZ1ModeMainEntryData::PVZ1ModeMainEntryData(aPStack_c8);
    cVar1 = ActiveItem::GetDataSerialized((ActiveItem *)aPStack_148,(RtObject *)aPStack_c8);
    if (cVar1 != '\0') {
      *(long *)(this + 0x158) = (long)local_4c;
      *(long *)(this + 0x150) = (long)local_50;
      this[0x160] = (NostalgiaMainView)(local_44 == 1);
    }
    PVZ1ModeMainEntryData::~PVZ1ModeMainEntryData(aPStack_c8);
  }
  ActiveItem::~ActiveItem((ActiveItem *)aPStack_148);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector(avStack_160);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector(avStack_178);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector(avStack_190);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector(avStack_1a8);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector(avStack_1c0);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector(avStack_1d8);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector(avStack_1f0);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector(avStack_208);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NostalgiaMainView::Draw(Sexy::Graphics*) */

void __thiscall NostalgiaMainView::Draw(NostalgiaMainView *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  undefined8 uVar7;
  CachedUIResourcePtr<Sexy::Image> *pCVar8;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad83c8);
  Sexy::Graphics::DrawImage(param_1,pIVar6,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  iVar2 = FUN_03d6aad4(100);
  iVar3 = FUN_03d6aad4(0x70);
  iVar4 = FUN_03d6aad4(0xb9);
  iVar5 = FUN_03d6aad4(0x2d);
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar3,iVar4,iVar5);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,this + 0x128,aIStack_28,uVar7,aCStack_18,5,1);
  iVar2 = FUN_03d6aad4(100);
  iVar3 = FUN_03d6aad4(0x99);
  iVar4 = FUN_03d6aad4(0xb9);
  iVar5 = FUN_03d6aad4(0x2d);
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar3,iVar4,iVar5);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_Outline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,this + 0x140,aIStack_28,uVar7,aCStack_18,5,1);
  iVar2 = FUN_03d6aad4(100);
  iVar3 = FUN_03d6aad4(0xc4);
  iVar4 = FUN_03d6aad4(0xb9);
  iVar5 = FUN_03d6aad4(0x2d);
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar3,iVar4,iVar5);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_Outline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,this + 0x148,aIStack_28,uVar7,aCStack_18,5,1);
  if ((this[0x10c] == (NostalgiaMainView)0x0) || (*(int *)(this + 0x108) != 0x17)) {
    pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad8718;
  }
  else {
    pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad8740;
  }
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar8);
  iVar2 = FUN_03d6aad4(0x184);
  iVar3 = FUN_03d6aad4(0x69);
  iVar4 = FUN_03d6aad4(0xfa);
  iVar5 = FUN_03d6aad4(0x73);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar2,iVar3,iVar4,iVar5);
  if ((this[0x10c] == (NostalgiaMainView)0x0) || (*(int *)(this + 0x108) != 0x18)) {
    if (this[0x160] == (NostalgiaMainView)0x0) {
      pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad8378;
    }
    else {
      pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad87a8;
    }
  }
  else {
    pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad8440;
  }
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar8);
  iVar2 = FUN_03d6aad4(0x185);
  iVar3 = FUN_03d6aad4(0xb9);
  iVar4 = FUN_03d6aad4(0xf2);
  iVar5 = FUN_03d6aad4(0x69);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar2,iVar3,iVar4,iVar5);
  if ((this[0x10c] == (NostalgiaMainView)0x0) || (*(int *)(this + 0x108) != 0x19)) {
    pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad8780;
  }
  else {
    pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad8850;
  }
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar8);
  iVar2 = FUN_03d6aad4(0x18a);
  iVar3 = FUN_03d6aad4(0xf2);
  iVar4 = FUN_03d6aad4(0xd7);
  iVar5 = FUN_03d6aad4(0x73);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar2,iVar3,iVar4,iVar5);
  if ((this[0x10c] == (NostalgiaMainView)0x0) || (*(int *)(this + 0x108) != 0x1a)) {
    pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad84e0;
  }
  else {
    pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad88a8;
  }
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar8);
  iVar2 = FUN_03d6aad4(0x18d);
  iVar3 = FUN_03d6aad4(0x131);
  iVar4 = FUN_03d6aad4(200);
  iVar5 = FUN_03d6aad4(0x69);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar2,iVar3,iVar4,iVar5);
  cVar1 = PVZ1ModeAchievement::HasCompletedAllTasks();
  if (cVar1 == '\0') {
    pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad8610;
  }
  else {
    pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad8920;
  }
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar8);
  iVar2 = FUN_03d6aad4(0x3c);
  iVar3 = FUN_03d6aad4(0xf0);
  iVar4 = FUN_03d6aad4(0x9c);
  iVar5 = FUN_03d6aad4(0xf2);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar2,iVar3,iVar4,iVar5);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad86a0);
  iVar2 = FUN_03d6aad4(0xc6);
  iVar3 = FUN_03d6aad4(0x166);
  iVar4 = FUN_03d6aad4(0x6e);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar2,iVar3,iVar4,iVar4);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad8490);
  iVar2 = FUN_03d6aad4(0x1ed);
  iVar3 = FUN_03d6aad4(0x174);
  iVar4 = FUN_03d6aad4(0xb3);
  iVar5 = FUN_03d6aad4(0x6e);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar2,iVar3,iVar4,iVar5);
  if ((this[0x10c] == (NostalgiaMainView)0x0) || (*(int *)(this + 0x108) != 0x1b)) {
    pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad8640;
  }
  else {
    pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad83a0;
  }
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar8);
  iVar2 = FUN_03d6aad4(0x7c);
  iVar3 = FUN_03d6aad4(0x1b3);
  iVar4 = FUN_03d6aad4(0x32);
  iVar5 = FUN_03d6aad4(0x27);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar2,iVar3,iVar4,iVar5);
  if ((this[0x10c] == (NostalgiaMainView)0x0) || (*(int *)(this + 0x108) != 0x1c)) {
    pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad8880;
  }
  else {
    pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad8468;
  }
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar8);
  iVar2 = FUN_03d6aad4(0x143);
  iVar3 = FUN_03d6aad4(0x17e);
  iVar4 = FUN_03d6aad4(0x4b);
  iVar5 = FUN_03d6aad4(0x50);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar2,iVar3,iVar4,iVar5);
  if ((this[0x10c] == (NostalgiaMainView)0x0) || (*(int *)(this + 0x108) != 0x1d)) {
    pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad8678;
  }
  else {
    pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad87d8;
  }
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar8);
  iVar2 = FUN_03d6aad4(0x171);
  iVar3 = FUN_03d6aad4(0x199);
  iVar4 = FUN_03d6aad4(0x6a);
  iVar5 = FUN_03d6aad4(0x56);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar2,iVar3,iVar4,iVar5);
  if ((this[0x10c] == (NostalgiaMainView)0x0) || (*(int *)(this + 0x108) != 0x58)) {
    pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad82d8;
  }
  else {
    pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad8418;
  }
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar8);
  iVar2 = FUN_03d6aad4(0x268);
  iVar3 = FUN_03d6aad4(0x1ba);
  iVar4 = FUN_03d6aad4(0x29);
  iVar5 = FUN_03d6aad4(0x17);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar2,iVar3,iVar4,iVar5);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NostalgiaMainView::Update() */

void __thiscall NostalgiaMainView::Update(NostalgiaMainView *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::Update((WidgetContainer *)this);
  lVar4 = *(long *)(this + 0x158);
  lVar1 = LawnApp::GetRealServerTime(gLawnApp);
  lVar3 = *(long *)(this + 0x150);
  lVar2 = LawnApp::GetRealServerTime(gLawnApp);
  TodStringTranslate(L"[PVZ1MODE_TIME_COUNTDOWN]");
  TimeUtil::GetTimeCountdownFormat((TimeUtil *)awStack_18,(float)(lVar3 - lVar2),0);
  std::operator+(awStack_20,awStack_18);
  FUN_054766c8(this + 0x140,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_20);
  TodStringTranslate(L"[PVZ1MODE_TIME_RESET]");
  std::operator+(awStack_28,L"\n");
  TimeUtil::GetTimeCountdownFormat((TimeUtil *)awStack_18,(float)(lVar4 - lVar1),0);
  std::operator+(awStack_20,awStack_18);
  FUN_054766c8(this + 0x148,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_20);
  FUN_05476c50(awStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

