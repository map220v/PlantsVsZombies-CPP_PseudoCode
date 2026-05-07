// Class: NewPVPInfoCard


/* NewPVPInfoCard::SetEnterCallback(std::function<void (int, NewPVPInfoCard*)>) */

void __thiscall NewPVPInfoCard::SetEnterCallback(NewPVPInfoCard *this,function *param_2)

{
  std::function<void(int,NewPVPInfoCard*)>::operator=
            ((function<void(int,NewPVPInfoCard*)> *)(this + 400),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPInfoCard::StaticClassInit() */

void NewPVPInfoCard::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPInfoCard");
    (*pcVar2)(plVar1,asStack_10,FUN_0351b65c,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPInfoCard::StaticGetClass() */

long * NewPVPInfoCard::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPInfoCard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPInfoCard::GetClass() const */

long * NewPVPInfoCard::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPInfoCard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPInfoCard::~NewPVPInfoCard() */

void __thiscall NewPVPInfoCard::~NewPVPInfoCard(NewPVPInfoCard *this)

{
  *(undefined ***)this = &PTR_GetClass_0664e310;
  *(undefined ***)(this + 0x10) = &PTR__NewPVPInfoCard_0664e4b0;
  if (*(long **)(this + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x168) + 0x18))();
    *(undefined8 *)(this + 0x168) = 0;
  }
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 400));
  FUN_05476c50(this + 0x178);
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to NewPVPInfoCard::~NewPVPInfoCard() */

void __thiscall NewPVPInfoCard::~NewPVPInfoCard(NewPVPInfoCard *this)

{
  ~NewPVPInfoCard(this + -0x10);
  return;
}


/* NewPVPInfoCard::~NewPVPInfoCard() */

void __thiscall NewPVPInfoCard::~NewPVPInfoCard(NewPVPInfoCard *this)

{
  ~NewPVPInfoCard(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewPVPInfoCard::~NewPVPInfoCard() */

void __thiscall NewPVPInfoCard::~NewPVPInfoCard(NewPVPInfoCard *this)

{
  ~NewPVPInfoCard(this + -0x10);
  return;
}


/* NewPVPInfoCard::SetHeadShotID(int) */

void __thiscall NewPVPInfoCard::SetHeadShotID(NewPVPInfoCard *this,int param_1)

{
  if (*(int *)(this + 0x180) != param_1) {
    *(int *)(this + 0x180) = param_1;
    UIHeadshotIcon::changeHeadshot(*(UIHeadshotIcon **)(this + 0x168),param_1);
    return;
  }
  return;
}


/* NewPVPInfoCard::Enter() */

void __thiscall NewPVPInfoCard::Enter(NewPVPInfoCard *this)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)PVZ_EOT();
  if (fVar1 <= *(float *)(this + 0x18c)) {
    uVar2 = PVZ_T();
    *(undefined4 *)(this + 0x188) = uVar2;
    fVar1 = (float)PVZ_T();
    *(float *)(this + 0x18c) = fVar1 + 0.5;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPInfoCard::UpdateCardEntering() */

void __thiscall NewPVPInfoCard::UpdateCardEntering(NewPVPInfoCard *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06aa4880 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06aa4880), iVar1 != 0)) {
    DAT_06aa46a8 = FUN_0351847c(1000);
    __cxa_guard_release(&DAT_06aa4880);
  }
  if (((DAT_06aa4c70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06aa4c70), iVar1 != 0)) {
    DAT_06aa4650 = *(int *)(gLawnApp + 0xd4) / 2;
    __cxa_guard_release(&DAT_06aa4c70);
  }
  uVar5 = *(undefined4 *)(this + 0x188);
  uVar4 = *(undefined4 *)(this + 0x18c);
  uVar3 = PVZ_T();
  iVar1 = CurveLerp<int>(uVar5,uVar4,uVar3,&DAT_06aa46a8,&DAT_06aa4650,3);
  if (*(int *)(this + 0x164) == 0) {
    iVar2 = FUN_0351847c(0x85);
  }
  else {
    iVar2 = FUN_0351847c(400);
  }
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)iVar1,(float)iVar2);
  UIWidget::SetPositionOffset(local_10,local_c,this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPInfoCard::NewPVPInfoCard() */

void __thiscall NewPVPInfoCard::NewPVPInfoCard(NewPVPInfoCard *this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ProfileMgr *this_00;
  undefined4 uVar4;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined ***)this = &PTR_GetClass_0664e310;
  *(undefined ***)(this + 0x10) = &PTR__NewPVPInfoCard_0664e4b0;
  this[0x170] = (NewPVPInfoCard)0x0;
  FUN_05476574(this + 0x178);
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  uVar4 = PVZ_EOT();
  *(undefined4 *)(this + 0x188) = uVar4;
  *(undefined4 *)(this + 0x18c) = uVar4;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 400));
  lVar2 = DSingleton<UserInfo>::getInstance();
  iVar1 = FUN_03517f94(*(undefined4 *)(lVar2 + 0x24));
  *(int *)(this + 0x180) = iVar1;
  uVar3 = UIHeadshotIcon::create(iVar1);
  *(undefined8 *)(this + 0x168) = uVar3;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar2 == 0) {
    FUN_05478178(auStack_10,L"-invalid-",auStack_18);
    nop();
  }
  else {
    PlayerInfo::AM_GetName();
  }
  thunk_FUN_05477b9c(this + 0x178,auStack_10);
  *(undefined4 *)(this + 0x164) = 1;
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPInfoCard::StaticNew() */

NewPVPInfoCard * NewPVPInfoCard::StaticNew(void)

{
  NewPVPInfoCard *this;
  
  this = ::operator_new(0x1b0);
  NewPVPInfoCard(this);
  return this;
}


/* NewPVPInfoCard::onUpdate() */

void __thiscall NewPVPInfoCard::onUpdate(NewPVPInfoCard *this)

{
  char cVar1;
  NewPVPInfoCard NVar2;
  bool bVar3;
  ProfileMgr *this_00;
  PlayerInfo *pPVar4;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if ((pPVar4 == (PlayerInfo *)0x0) ||
     (cVar1 = PlayerInfo::IsMonthlyCardActivated(pPVar4,1), cVar1 == '\0')) {
    NVar2 = (NewPVPInfoCard)0x0;
  }
  else {
    NVar2 = (NewPVPInfoCard)0x1;
  }
  if (this[0x170] != NVar2) {
    this[0x170] = NVar2;
  }
  cVar1 = InvitationLotteryPanel::CanSelectNext((InvitationLotteryPanel *)this);
  if (cVar1 != '\0') {
    bVar3 = std::function::operator_cast_to_bool((function *)(this + 400));
    if (!bVar3) {
      return;
    }
    std::function<void(int,NewPVPInfoCard*)>::operator()
              ((function<void(int,NewPVPInfoCard*)> *)(this + 400),*(int *)(this + 0x164),this);
    return;
  }
  UpdateCardEntering(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPInfoCard::Draw(Sexy::Graphics*) */

void __thiscall NewPVPInfoCard::Draw(NewPVPInfoCard *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  string *__n;
  GraphicsAutoState aGStack_88 [8];
  string asStack_80 [8];
  Insets aIStack_78 [16];
  Color aCStack_68 [16];
  int local_58 [2];
  int local_50;
  string asStack_48 [16];
  int local_38 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_88,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  GetGameItemInfo(*(int *)(this + 0x184),0x7fffffff,0);
  __n = asStack_48;
  std::string::string(asStack_80,"");
  nop();
  if (local_38[0] == 0) {
    std::string::append(asStack_80,"IMAGE_UI_NEW_PVP_RANK_AVATAR_RANK_AVATAR_DEFAULT",(size_t)__n);
  }
  else {
    std::operator+(asStack_18,"_DISPLAY");
    FUN_05474278(asStack_80,asStack_48);
    std::string::~string(asStack_48);
  }
  uVar4 = StringHelper::ToImage(asStack_80,true);
  iVar1 = FUN_0351847c(0x32);
  iVar2 = FUN_0351847c(0xf);
  iVar3 = FUN_0351847c(0xfa);
  Sexy::Insets::Insets(aIStack_78,iVar1,iVar2,iVar3,iVar1);
  Sexy::Insets::Insets((Insets *)asStack_48,aIStack_78);
  Draw9SliceImage(param_1,asStack_48,uVar4);
  if (*(long *)(this + 0x168) != 0) {
    Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)asStack_48,param_1);
    iVar1 = FUN_0351847c(0);
    iVar2 = FUN_0351847c(0xfffffff6);
    Sexy::Graphics::Translate(param_1,iVar1,iVar2);
    UIHeadshotIcon::setScale(*(UIHeadshotIcon **)(this + 0x168),0.65,0.65);
    (**(code **)(**(long **)(this + 0x168) + 0x128))(*(long **)(this + 0x168),param_1);
    Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)asStack_48);
  }
  if (*(int *)(this + 0x164) == 0) {
    Sexy::Color::Color(aCStack_68,0x27,0xd4,0xff);
  }
  else {
    Sexy::Color::Color(aCStack_68,0xff,0x36,0x60);
  }
  Sexy::Insets::Insets((Insets *)local_58,aIStack_78);
  iVar1 = FUN_0351847c(0x28);
  local_58[0] = local_58[0] + iVar1;
  iVar1 = FUN_0351847c(0x28);
  uVar4 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
  local_50 = local_50 - iVar1;
  Sexy::Insets::Insets((Insets *)asStack_48,(Insets *)aCStack_68);
  WriteWordInRect(param_1,this + 0x178,(Insets *)local_58,uVar4,asStack_48,3,1);
  std::string::~string(asStack_80);
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to NewPVPInfoCard::Draw(Sexy::Graphics*) */

void __thiscall NewPVPInfoCard::Draw(NewPVPInfoCard *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

