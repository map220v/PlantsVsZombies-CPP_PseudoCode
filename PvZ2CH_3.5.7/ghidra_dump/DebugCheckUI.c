// Class: DebugCheckUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DebugCheckUI::~DebugCheckUI() */

void __thiscall DebugCheckUI::~DebugCheckUI(DebugCheckUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0692e518;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0692e1f0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  FUN_05476c50(this + 0x100);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DebugCheckUI::~DebugCheckUI() */

void __thiscall DebugCheckUI::~DebugCheckUI(DebugCheckUI *this)

{
  ~DebugCheckUI(this);
  AK::FreeHook(this);
  return;
}


/* DebugCheckUI::ClearMsg() */

void __thiscall DebugCheckUI::ClearMsg(DebugCheckUI *this)

{
  PrimeTypeface *this_00;
  float fVar1;
  
  FUN_05476f98(this + 0x100);
  this_00 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  fVar1 = (float)Sexy::PrimeTypeface::GetLineHeight(this_00);
  this[0x10c] = (DebugCheckUI)0x0;
  *(int *)(this + 0x108) = (int)fVar1;
  return;
}


/* DebugCheckUI::AppendMsg(std::wstring const&, bool) */

void __thiscall DebugCheckUI::AppendMsg(DebugCheckUI *this,wstring *param_1,bool param_2)

{
  long lVar1;
  PrimeTypeface *pPVar2;
  float fVar3;
  
  thunk_FUN_05477668(this + 0x100);
  for (lVar1 = FUN_05476818(param_1,10,0); lVar1 != -1; lVar1 = FUN_05476818(param_1,10,lVar1 + 1))
  {
    pPVar2 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    fVar3 = (float)Sexy::PrimeTypeface::GetLineHeight(pPVar2);
    *(int *)(this + 0x108) = (int)(fVar3 + (float)*(int *)(this + 0x108));
  }
  if (param_2) {
    FUN_05477888(this + 0x100,&DAT_0570a740);
    pPVar2 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    fVar3 = (float)Sexy::PrimeTypeface::GetLineHeight(pPVar2);
    *(int *)(this + 0x108) = (int)(fVar3 + (float)*(int *)(this + 0x108));
  }
  this[0x10c] = (DebugCheckUI)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DebugCheckUI::InitView() */

void __thiscall DebugCheckUI::InitView(DebugCheckUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  SalesProgressBar *pSVar10;
  PVZ2UIButton *pPVar11;
  LotteryResultProgressBar *pLVar12;
  code *pcVar13;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  iVar2 = FUN_04a0fbdc(600);
  iVar3 = FUN_04a0fbdc(400);
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x50) - iVar2 >> 1,
             *(int *)(this + 0x54) - iVar3 >> 1,iVar2,iVar3);
  *(undefined8 *)(this + 0xe0) = local_40;
  *(undefined8 *)(this + 0xe8) = local_38;
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b785f8);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar10);
  if ((int)((ulong)local_40 >> 0x20) - iVar2 < 0) {
    pSVar10 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b785f8);
    uVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
    *(undefined4 *)(this + 0xe4) = uVar6;
  }
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar11,0,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b785f8,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b78548,1);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  iVar2 = *(int *)(this + 0xe0);
  iVar3 = *(int *)(this + 0xe8);
  pcVar13 = *(code **)(*(long *)pPVar11 + 0x198);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b785f8);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  iVar1 = *(int *)(this + 0xe4);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b785f8);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar10);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b785f8);
  uVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b785f8);
  uVar7 = SalesProgressBar::GetCurrentLevel(pSVar10);
  (*pcVar13)(pPVar11,(int)((float)(iVar2 + iVar3) - (float)iVar4 * 1.8),iVar1 - iVar5,uVar6,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,pPVar11);
  FUN_05478178(awStack_78,&DAT_0573aac8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar11,1,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
  FUN_05476c50(awStack_78);
  nop();
  iVar2 = *(int *)(this + 0xe0);
  iVar3 = *(int *)(this + 0xe8);
  pcVar13 = *(code **)(*(long *)pPVar11 + 0x198);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b78690);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  iVar8 = FUN_04a0fbdc(0x32);
  iVar1 = *(int *)(this + 0xe4);
  iVar4 = *(int *)(this + 0xec);
  iVar9 = FUN_04a0fbdc(0x14);
  uVar6 = FUN_04a0fbdc(100);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b78690);
  uVar7 = SalesProgressBar::GetCurrentLevel(pSVar10);
  (*pcVar13)(pPVar11,((iVar2 + iVar3) - iVar5) - iVar8,(iVar1 + iVar4) - iVar9,uVar6,uVar7);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b78690,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b786b8,2);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(*(long *)this + 0x60))(this,pPVar11);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DebugCheckUI::DebugCheckUI() */

void __thiscall DebugCheckUI::DebugCheckUI(DebugCheckUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0692e1f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0692e518;
  Sexy::Insets::Insets((Insets *)(this + 0xe0));
  Sexy::Insets::Insets((Insets *)(this + 0xf0));
  FUN_05476574(this + 0x100);
  *(undefined4 *)(this + 0x108) = 0;
  this[0x10c] = (DebugCheckUI)0x0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DebugCheckUI::Draw(Sexy::Graphics*) */

void __thiscall DebugCheckUI::Draw(DebugCheckUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SalesProgressBar *pSVar4;
  LotteryResultProgressBar *pLVar5;
  Image *pIVar6;
  Insets aIStack_68 [4];
  int local_64;
  int local_5c;
  Insets aIStack_58 [4];
  int local_54;
  int local_4c;
  Insets aIStack_48 [16];
  Insets aIStack_38 [12];
  int local_2c;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_68,(Insets *)(this + 0xe0));
  pSVar4 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b78668);
  iVar1 = SalesProgressBar::GetCurrentLevel(pSVar4);
  local_5c = (iVar1 << 1) / 3;
  Sexy::Insets::Insets(aIStack_58,aIStack_68);
  iVar1 = *(int *)(this + 0xe4);
  iVar3 = *(int *)(this + 0xec);
  pSVar4 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b78668);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar4);
  local_54 = (iVar1 + iVar3) - iVar2 / 6;
  pSVar4 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b78668);
  local_4c = SalesProgressBar::GetCurrentLevel(pSVar4);
  local_4c = local_4c / 6;
  Sexy::Insets::Insets
            (aIStack_48,*(int *)(this + 0xe0),local_5c + local_64,*(int *)(this + 0xe8),
             (*(int *)(this + 0xec) - local_5c) - local_4c);
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b78668);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  Sexy::Insets::Insets(aIStack_38,0,0,iVar1,local_5c);
  pSVar4 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b78668);
  iVar1 = SalesProgressBar::GetCurrentLevel(pSVar4);
  iVar1 = iVar1 - local_4c;
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b78668);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  Sexy::Insets::Insets(aIStack_28,0,iVar1,iVar3,local_4c);
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b78668);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  pSVar4 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b78668);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar4);
  Sexy::Insets::Insets(aIStack_18,0,local_2c,iVar1,(iVar3 - local_5c) - local_4c);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b78668);
  Sexy::Graphics::DrawImage(param_1,pIVar6,(TRect *)aIStack_68,(TRect *)aIStack_38);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b78668);
  Sexy::Graphics::DrawImage(param_1,pIVar6,(TRect *)aIStack_48,(TRect *)aIStack_18);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b78668);
  Sexy::Graphics::DrawImage(param_1,pIVar6,(TRect *)aIStack_58,(TRect *)aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DebugCheckUI::Close() */

void __thiscall DebugCheckUI::Close(DebugCheckUI *this)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Dialog_Close");
  (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c],this);
  (**(code **)(*gLawnApp + 0x150))(gLawnApp,this);
  s_instance = 0;
  return;
}


/* DebugCheckUI::Update() */

void __thiscall DebugCheckUI::Update(DebugCheckUI *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (this[0x10c] == (DebugCheckUI)0x0) {
    this[0x10c] = (DebugCheckUI)0x1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DebugCheckUI::CheckPlayerInfo() */

void __thiscall DebugCheckUI::CheckPlayerInfo(DebugCheckUI *this)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ProfileMgr *this_00;
  PVZDB *pPVar5;
  uchar *puVar6;
  string *extraout_x1;
  string asStack_158 [8];
  Buffer aBStack_150 [8];
  Sexy aSStack_148 [8];
  wstring awStack_140 [8];
  Buffer aBStack_138 [48];
  string asStack_108 [48];
  MD5Context aMStack_d8 [88];
  MD5Context aMStack_80 [88];
  uchar auStack_28 [16];
  uchar auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetFolder(asStack_108,3);
  std::operator+(asStack_108,k_CheckPlayerInfo);
  std::string::~string(asStack_108);
  cVar1 = Sexy::SexyAppBase::FileExists(Sexy::gSexyAppBase,asStack_158);
  if (cVar1 == '\0') {
    FUN_05478178(asStack_108,L"[warning] Old file is not exist, please save first!\n",aBStack_138);
    AppendMsg(this,(wstring *)asStack_108,false);
    FUN_05476c50(asStack_108);
    nop();
  }
  else {
    Sexy::Buffer::Buffer(aBStack_138);
    cVar2 = Sexy::SexyAppBase::ReadBufferFromFile
                      ((string *)Sexy::gSexyAppBase,(Buffer *)asStack_158,SUB81(aBStack_138,0));
    if (cVar2 == '\0') {
      FUN_05478178(asStack_108,L"[error] can not read file in backup\n",awStack_140);
      AppendMsg(this,(wstring *)asStack_108,false);
      FUN_05476c50(asStack_108);
      nop();
      cVar1 = '\0';
    }
    else {
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      ProfileMgr::GetCurrentProfile(this_00);
      GetFolder(asStack_108,3);
      std::operator+(asStack_108,k_CheckPlayerInfoTemp);
      std::string::~string(asStack_108);
      pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::SavePackageForTableToFile(pPVar5,0x37,aBStack_150,1,0);
      Sexy::Buffer::Buffer((Buffer *)asStack_108);
      cVar2 = Sexy::SexyAppBase::ReadBufferFromFile
                        ((string *)Sexy::gSexyAppBase,aBStack_150,SUB81(asStack_108,0));
      if (cVar2 == '\0') {
        FUN_05478178(awStack_140,L"[error] can not read file in tmp\n",aSStack_148);
        AppendMsg(this,awStack_140,false);
        FUN_05476c50(awStack_140);
        nop();
        cVar1 = '\0';
      }
      else {
        MD5Init(aMStack_d8);
        puVar6 = (uchar *)Sexy::Buffer::GetDataPtr(aBStack_138);
        uVar3 = Sexy::Buffer::GetDataLen(aBStack_138);
        MD5Update(aMStack_d8,puVar6,uVar3);
        MD5Final(auStack_28,aMStack_d8);
        MD5Init(aMStack_80);
        puVar6 = (uchar *)Sexy::Buffer::GetDataPtr((Buffer *)asStack_108);
        uVar3 = Sexy::Buffer::GetDataLen((Buffer *)asStack_108);
        MD5Update(aMStack_80,puVar6,uVar3);
        MD5Final(auStack_18,aMStack_80);
        FUN_05478178(awStack_140,L"---------Check playerinfo start---------",aSStack_148);
        AppendMsg(this,awStack_140,true);
        FUN_05476c50(awStack_140);
        nop();
        iVar4 = memcmp(auStack_28,auStack_18,0x10);
        if (iVar4 == 0) {
          FUN_05478178(awStack_140,L"[success] no difference!\n",aSStack_148);
        }
        else {
          cVar1 = '\0';
          FUN_05478178(awStack_140,L"[error] there\'s difference after update.\n",aSStack_148);
          AppendMsg(this,awStack_140,false);
          FUN_05476c50(awStack_140);
          nop();
          FUN_05478178(awStack_140,L"[filepath] ",aSStack_148);
          AppendMsg(this,awStack_140,false);
          FUN_05476c50(awStack_140);
          nop();
          GetFolder(aSStack_148,3);
          Sexy::ToSexyString(aSStack_148,extraout_x1);
          AppendMsg(this,awStack_140,true);
          FUN_05476c50(awStack_140);
          std::string::~string((string *)aSStack_148);
          FUN_05478178(awStack_140,L"Check playerinfo end.\n",aSStack_148);
        }
        AppendMsg(this,awStack_140,iVar4 != 0);
        FUN_05476c50(awStack_140);
        nop();
      }
      Sexy::Buffer::~Buffer((Buffer *)asStack_108);
      std::string::~string((string *)aBStack_150);
    }
    Sexy::Buffer::~Buffer(aBStack_138);
  }
  std::string::~string(asStack_158);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DebugCheckUI::CheckPlants() */

void __thiscall DebugCheckUI::CheckPlants(DebugCheckUI *this)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ulong uVar5;
  ulong uVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  map *pmVar7;
  uint *puVar8;
  undefined8 uVar9;
  long lVar10;
  string *extraout_x1;
  undefined1 auVar11 [16];
  string asStack_98 [8];
  Sexy aSStack_90 [8];
  undefined8 local_88;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  Buffer aBStack_68 [48];
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ClearMsg(this);
  GetFolder(asStack_38,3);
  std::operator+(asStack_38,k_CheckPlants);
  std::string::~string(asStack_38);
  cVar2 = Sexy::SexyAppBase::FileExists(Sexy::gSexyAppBase,asStack_98);
  if (cVar2 == '\0') {
    FUN_05478178(asStack_38,L"[warning] Old file is not exist, please save first!\n",aBStack_68);
    AppendMsg(this,(wstring *)asStack_38,false);
    FUN_05476c50(asStack_38);
    nop();
    cVar2 = '\0';
  }
  else {
    Sexy::Buffer::Buffer(aBStack_68);
    cVar2 = Sexy::SexyAppBase::ReadBufferFromFile
                      ((string *)Sexy::gSexyAppBase,(Buffer *)asStack_98,SUB81(aBStack_68,0));
    if (cVar2 == '\0') {
      FUN_05478178(asStack_38,L"[error] can not read file in backup\n",&local_70);
      AppendMsg(this,(wstring *)asStack_38,false);
      FUN_05476c50(asStack_38);
      nop();
      cVar2 = '\0';
    }
    else {
      bVar1 = true;
      Sexy::Buffer::GetDataLen(aBStack_68);
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      uVar5 = Sexy::Buffer::ReadInt32(aBStack_68);
      Sexy::Buffer::ReadLine();
      std::string::~string(asStack_38);
      uVar6 = PlayerInfo::GetVersion(this_01);
      Sexy::StrFormat(L"[info] Old version: %d, current version: %d\n",asStack_38,uVar5 & 0xffffffff
                      ,uVar6 & 0xffffffff);
      AppendMsg(this,(wstring *)asStack_38,false);
      FUN_05476c50(asStack_38);
      FUN_05478178(asStack_38,L"---------Check plant id start---------",(string *)&local_70);
      AppendMsg(this,(wstring *)asStack_38,true);
      FUN_05476c50(asStack_38);
      nop();
      this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)PlantNameMapper::GetInstance();
      pmVar7 = (map *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_end(this_02);
      std::
      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
      map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           *)asStack_38,pmVar7);
      Set8BytesTo0(aSStack_90);
      while (cVar2 = Sexy::Buffer::AtEnd(aBStack_68), cVar2 == '\0') {
        while( true ) {
          uVar4 = Sexy::Buffer::ReadInt32(aBStack_68);
          Sexy::Buffer::ReadLine();
          FUN_05474278(aSStack_90,(string *)&local_70);
          std::string::~string((string *)&local_70);
          local_78 = std::
                     map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                     ::find((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                             *)asStack_38,(string *)aSStack_90);
          local_70 = std::
                     map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)asStack_38);
          bVar3 = eastl::operator!=((rbtree_iterator *)&local_78,(rbtree_iterator *)&local_70);
          if (!bVar3) break;
          puVar8 = (uint *)std::
                           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                         *)asStack_38,(string *)aSStack_90);
          if (uVar4 != *puVar8) {
            Sexy::ToSexyString(aSStack_90,(string *)(ulong)*puVar8);
            uVar9 = FUN_054766ec((rbtree_iterator *)&local_78);
            puVar8 = (uint *)std::
                             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                             ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                           *)asStack_38,(string *)aSStack_90);
            Sexy::StrFormat(L"[change] Plant<%ls> %d -> %d\n",(string *)&local_70,uVar9,(ulong)uVar4
                            ,(ulong)*puVar8);
            AppendMsg(this,(wstring *)&local_70,false);
            FUN_05476c50((string *)&local_70);
            FUN_05476c50((rbtree_iterator *)&local_78);
            bVar1 = false;
          }
          std::
          map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          ::erase(asStack_38);
          cVar2 = Sexy::Buffer::AtEnd(aBStack_68);
          if (cVar2 != '\0') goto LAB_04a10bc8;
        }
        Sexy::ToSexyString(aSStack_90,extraout_x1);
        uVar9 = FUN_054766ec((rbtree_iterator *)&local_78);
        Sexy::StrFormat(L"[delete] Plant<%ls> %d\n",(string *)&local_70,uVar9,(ulong)uVar4);
        AppendMsg(this,(wstring *)&local_70,bVar3);
        FUN_05476c50((string *)&local_70);
        FUN_05476c50((rbtree_iterator *)&local_78);
        bVar1 = false;
      }
LAB_04a10bc8:
      while( true ) {
        cVar2 = std::
                map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                ::empty((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)asStack_38);
        if (cVar2 != '\0') break;
        local_88 = std::
                   map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                   ::begin((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                            *)asStack_38);
        auVar11 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                            ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_88);
        Sexy::ToSexyString(auVar11._0_8_,auVar11._8_8_);
        uVar9 = FUN_054766ec(auStack_80);
        local_78 = std::
                   map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                   ::begin((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                            *)asStack_38);
        lVar10 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                           ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_78);
        Sexy::StrFormat(L"[add] Plant<%ls> %d\n",(string *)&local_70,uVar9,
                        (ulong)*(uint *)(lVar10 + 8));
        AppendMsg(this,(wstring *)&local_70,false);
        FUN_05476c50((string *)&local_70);
        FUN_05476c50(auStack_80);
        uVar9 = std::
                map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                ::begin((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)asStack_38);
        std::
        map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
        ::erase_abi_cxx11_(asStack_38,uVar9);
        bVar1 = false;
      }
      if (bVar1) {
        FUN_05478178((string *)&local_70,L"[success] there\'s no difference.\n",&local_78);
        AppendMsg(this,(wstring *)&local_70,false);
        FUN_05476c50((string *)&local_70);
        nop();
      }
      std::string::~string((string *)aSStack_90);
      std::
      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
      ~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
            *)asStack_38);
    }
    Sexy::Buffer::~Buffer(aBStack_68);
  }
  std::string::~string(asStack_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* DebugCheckUI::Check() */

undefined8 __thiscall DebugCheckUI::Check(DebugCheckUI *this)

{
  ClearMsg(this);
  CheckPlants(this);
  CheckPlayerInfo(this);
  return 1;
}


/* DebugCheckUI::ShowDialog() */

DebugCheckUI * DebugCheckUI::ShowDialog(void)

{
  DebugCheckUI *this;
  char *pcVar1;
  
  if (s_instance != (DebugCheckUI *)0x0) {
    return s_instance;
  }
  this = ::operator_new(0x110);
  DebugCheckUI(this);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Dialog_Open");
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),this);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))(*(long **)(gLawnApp + 0x360),this);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))(*(long **)(gLawnApp + 0x360),this);
  LawnApp::PushOverlaysToTop(gLawnApp);
  Check(this);
  s_instance = this;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DebugCheckUI::SavePlants() */

void DebugCheckUI::SavePlants(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  *this_02;
  long lVar4;
  string *psVar5;
  string asStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetFolder(asStack_38,3);
  std::operator+(asStack_38,k_CheckPlants);
  std::string::~string(asStack_38);
  cVar1 = Sexy::SexyAppBase::FileExists(Sexy::gSexyAppBase,asStack_50);
  if (cVar1 != '\0') {
    Sexy::SexyAppBase::EraseFile((string *)Sexy::gSexyAppBase);
  }
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  Sexy::Buffer::Buffer((Buffer *)asStack_38);
  Sexy::Buffer::Reserve((Buffer *)asStack_38,0x400);
  iVar3 = PlayerInfo::GetVersion(this_00);
  Sexy::Buffer::WriteInt32((Buffer *)asStack_38,iVar3);
  std::string::string((string *)&local_40,"");
  Sexy::Buffer::WriteLine((Buffer *)asStack_38,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)PlantNameMapper::GetInstance();
  this_02 = (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             *)std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_end(this_01);
  local_48 = std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::begin(this_02);
  while( true ) {
    local_40 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_02);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40);
    if (!bVar2) break;
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
    Sexy::Buffer::WriteInt32((Buffer *)asStack_38,*(int *)(lVar4 + 8));
    psVar5 = (string *)
             std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
    Sexy::Buffer::WriteLine((Buffer *)asStack_38,psVar5);
    std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
              ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_48);
  }
  Sexy::SexyAppBase::WriteBufferToFile(gLawnApp,asStack_50,(Buffer *)asStack_38);
  Sexy::Buffer::~Buffer((Buffer *)asStack_38);
  std::string::~string(asStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DebugCheckUI::ButtonDepress(int) */

void __thiscall DebugCheckUI::ButtonDepress(DebugCheckUI *this,int param_1)

{
  PVZDB *pPVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    Close(this);
  }
  else if (param_1 == 1) {
    GetFolder(asStack_10,3);
    std::operator+(asStack_10,k_CheckPlayerInfo);
    std::string::~string(asStack_10);
    pPVar1 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::SavePackageForTableToFile(pPVar1,0x37,asStack_18,1,0);
    SavePlants();
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to DebugCheckUI::ButtonDepress(int) */

void __thiscall DebugCheckUI::ButtonDepress(DebugCheckUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

