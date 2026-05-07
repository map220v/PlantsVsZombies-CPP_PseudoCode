// Class: RecordWidget


/* RecordWidget::~RecordWidget() */

void __thiscall RecordWidget::~RecordWidget(RecordWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0694cad0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0694cdf8;
  FUN_05476c50(this + 0x108);
  FUN_05476c50(this + 0x100);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* RecordWidget::~RecordWidget() */

void __thiscall RecordWidget::~RecordWidget(RecordWidget *this)

{
  ~RecordWidget(this);
  AK::FreeHook(this);
  return;
}


/* RecordWidget::Resize(int, int, int, int) */

void __thiscall
RecordWidget::Resize(RecordWidget *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  PlaybackManager *this_00;
  long lVar6;
  
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  lVar6 = *(long *)(this + 0xe8);
  if (lVar6 == 0) {
    iVar4 = 0;
    iVar3 = 0;
  }
  else {
    iVar1 = *(int *)(lVar6 + 0x50);
    iVar3 = FUN_04ae4680(0x14);
    iVar5 = *(int *)(lVar6 + 0x54);
    iVar3 = ((param_3 + iVar1 * -2) - iVar3) / 2;
    iVar4 = FUN_04ae4680(0xf);
    *(int *)(lVar6 + 0x48) = iVar3;
    iVar4 = (param_4 - iVar5) - iVar4;
    *(int *)(lVar6 + 0x4c) = iVar4;
    iVar5 = FUN_04ae4680(0x14);
    iVar3 = iVar3 + iVar1 + iVar5;
  }
  lVar6 = *(long *)(this + 0xf0);
  if (lVar6 != 0) {
    *(int *)(lVar6 + 0x48) = iVar3;
    *(int *)(lVar6 + 0x4c) = iVar4;
    this_00 = (PlaybackManager *)Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
    lVar6 = PlaybackManager::GetPlayback(this_00,*(ulong *)(this + 0xe0));
    if (lVar6 != 0) {
      iVar3 = Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
      cVar2 = PlaybackManager::CheckVersionValid(iVar3);
      if (cVar2 == '\0') {
        *(int *)(*(long *)(this + 0xf0) + 0x48) =
             param_3 - *(int *)(*(long *)(this + 0xf0) + 0x50) >> 1;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RecordWidget::refresh() */

void __thiscall RecordWidget::refresh(RecordWidget *this)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  RecordWidget RVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  PlaybackManager *this_00;
  long lVar8;
  Sexy *this_01;
  char *pcVar9;
  size_t __n;
  int iVar10;
  long lVar11;
  uint uVar12;
  string asStack_20 [8];
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlaybackManager *)Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
  lVar8 = PlaybackManager::GetPlayback(this_00,*(ulong *)(this + 0xe0));
  if (lVar8 == 0) {
    this[0xf8] = (RecordWidget)0x0;
    FUN_05476f98(this + 0x100);
    FUN_05476f98(this + 0x108);
    *(undefined4 *)(this + 0x110) = 0;
    *(undefined4 *)(this + 0x114) = 0;
    lVar8 = **(long **)(this + 0xe8);
    *(undefined4 *)(this + 0x118) = 0;
    (**(code **)(lVar8 + 0x158))(*(long **)(this + 0xe8),0);
    *(undefined4 *)(this + 0xfc) = 0;
    goto LAB_04ae4b0c;
  }
  iVar7 = Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
  bVar5 = PlaybackManager::CheckVersionValid(iVar7);
  (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8),bVar5 ^ 1);
  (**(code **)(**(long **)(this + 0xe8) + 0x158))(*(long **)(this + 0xe8),bVar5);
  uVar12 = *(uint *)(lVar8 + 0x120);
  if (*(int *)(lVar8 + 0xf4) != 1) {
    uVar12 = 5;
LAB_04ae48fc:
    lVar11 = *(long *)(this + 0xf0);
    pcVar9 = "[PVP_PLAYBACK_REVENGE]";
    goto LAB_04ae4918;
  }
  if (3 < uVar12) goto LAB_04ae48fc;
  switch(uVar12) {
  case 0:
    lVar11 = *(long *)(this + 0xf0);
    pcVar9 = "[PVP_PLAYBACK_ATTACKED]";
    break;
  case 1:
    lVar11 = *(long *)(this + 0xf0);
    std::string::string(asStack_18,"[PVP_PLAYBACK_REVENGE]");
    StringHelper::ToStringValue(asStack_18);
    FUN_054766c8(lVar11 + 0xd8,auStack_10);
    FUN_05476c50(auStack_10);
    std::string::~string(asStack_18);
    nop();
    (**(code **)(**(long **)(this + 0xf0) + 0x188))(*(long **)(this + 0xf0),0);
    goto LAB_04ae496c;
  case 2:
    lVar11 = *(long *)(this + 0xf0);
    pcVar9 = "[PVP_PLAYBACK_REVENGE_DONE]";
    break;
  case 3:
    lVar11 = *(long *)(this + 0xf0);
    pcVar9 = "[PVP_PLAYBACK_BE_REVENGED]";
  }
LAB_04ae4918:
  std::string::string(asStack_18,pcVar9);
  StringHelper::ToStringValue(asStack_18);
  FUN_054766c8(lVar11 + 0xd8,auStack_10);
  FUN_05476c50(auStack_10);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(**(long **)(this + 0xf0) + 0x188))(*(long **)(this + 0xf0),1);
LAB_04ae496c:
  iVar7 = *(int *)(lVar8 + 0x110);
  cVar6 = *(char *)(lVar8 + 0xf0);
  *(int *)(this + 0xfc) = iVar7;
  RVar4 = (RecordWidget)(iVar7 == 0);
  if (cVar6 != '\0') {
    RVar4 = (RecordWidget)(0 < iVar7);
  }
  this[0xf8] = RVar4;
  lVar11 = LawnApp::GetRealBeijingTime(gLawnApp);
  std::string::string(asStack_18,"[PVP_PLAYBACK_TIME1]");
  StringHelper::ToStringValue(asStack_18);
  FUN_054766c8(this + 0x100,auStack_10);
  FUN_05476c50(auStack_10);
  std::string::~string(asStack_18);
  nop();
  if (lVar11 < 1) {
    lVar11 = Sexy::SexyTime(this_01);
    lVar11 = lVar11 / 1000;
    if (0 < lVar11) goto LAB_04ae49ec;
  }
  else {
LAB_04ae49ec:
    iVar7 = (int)lVar11 - *(int *)(lVar8 + 0x130);
    if (iVar7 < 0x3c) {
      std::string::string(asStack_18,"[PVP_PLAYBACK_TIME1]");
      StringHelper::ToStringValue(asStack_18);
    }
    else {
      iVar1 = iVar7 >> 0x1f;
      if (iVar7 - 0x3cU < 0xdd4) {
        std::string::string(asStack_18,"[PVP_PLAYBACK_TIME2]");
        iVar10 = (int)((ulong)((long)iVar7 * 0x88888889) >> 0x20);
        iVar7 = iVar7 / 0x3c + iVar1;
      }
      else if (iVar7 < 0x15180) {
        std::string::string(asStack_18,"[PVP_PLAYBACK_TIME3]");
        iVar10 = (int)((ulong)((long)iVar7 * 0x91a2b3c5) >> 0x20);
        iVar7 = iVar7 / 0xe10 + iVar1;
      }
      else {
        std::string::string(asStack_18,"[PVP_PLAYBACK_TIME4]");
        iVar10 = (int)((ulong)((long)iVar7 * 0xc22e4507) >> 0x20);
        iVar7 = iVar7 / 0x15180 + iVar1;
      }
      StringHelper::ReplaceNumberString
                ((StringHelper *)asStack_18,(string *)L"{NUMBER}",
                 (wchar_t *)(ulong)(uint)(iVar7 - iVar1),iVar10);
    }
    FUN_054766c8(this + 0x100,auStack_10);
    FUN_05476c50(auStack_10);
    std::string::~string(asStack_18);
    nop();
  }
  uVar2 = *(undefined4 *)(lVar8 + 0x118);
  uVar3 = *(uint *)(lVar8 + 0x114);
  __n = (size_t)uVar3;
  *(undefined4 *)(this + 0x118) = *(undefined4 *)(lVar8 + 0x11c);
  *(undefined4 *)(this + 0x110) = uVar2;
  *(uint *)(this + 0x114) = uVar3;
  Set8BytesTo0(asStack_20);
  if (*(int *)(lVar8 + 0xf4) == 1) {
    if (uVar12 == 4) {
      *(undefined4 *)(this + 0x114) = 0xffffffff;
    }
    else {
      *(undefined4 *)(this + 0x118) = 0xffffffff;
    }
    if (*(char *)(lVar8 + 0xf0) == '\0') {
      if (this[0xf8] == (RecordWidget)0x0) {
        pcVar9 = "[PVP_PLAYBACK_RESULT3]";
      }
      else {
        pcVar9 = "[PVP_PLAYBACK_RESULT4]";
      }
    }
    else if (this[0xf8] == (RecordWidget)0x0) {
      pcVar9 = "[PVP_PLAYBACK_RESULT2]";
    }
    else {
      pcVar9 = "[PVP_PLAYBACK_RESULT1]";
    }
LAB_04ae4c78:
    std::string::append(asStack_20,pcVar9,__n);
  }
  else if (*(int *)(lVar8 + 0xf4) == 2) {
    cVar6 = *(char *)(lVar8 + 0xf0);
    *(undefined4 *)(this + 0x114) = 0xffffffff;
    if (cVar6 == '\0') {
      if (this[0xf8] == (RecordWidget)0x0) {
        if (*(int *)(lVar8 + 0x110) == 3) {
          pcVar9 = "[PVP_PLAYBACK_RESULT8]";
        }
        else {
          pcVar9 = "[PVP_PLAYBACK_RESULT10]";
        }
      }
      else {
        pcVar9 = "[PVP_PLAYBACK_RESULT7]";
      }
    }
    else if (this[0xf8] == (RecordWidget)0x0) {
      pcVar9 = "[PVP_PLAYBACK_RESULT6]";
    }
    else if (*(int *)(lVar8 + 0x110) == 3) {
      pcVar9 = "[PVP_PLAYBACK_RESULT5]";
    }
    else {
      pcVar9 = "[PVP_PLAYBACK_RESULT9]";
    }
    goto LAB_04ae4c78;
  }
  cVar6 = FUN_0547419c(asStack_20);
  if (cVar6 == '\0') {
    StringHelper::ToStringValue(asStack_20);
    TodReplaceString((wstring *)asStack_18,L"{NAME}",(wstring *)(lVar8 + 0x100));
    FUN_054766c8(this + 0x108,auStack_10);
    FUN_05476c50(auStack_10);
    FUN_05476c50(asStack_18);
  }
  std::string::~string(asStack_20);
LAB_04ae4b0c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RecordWidget::RecordWidget(unsigned long) */

void __thiscall RecordWidget::RecordWidget(RecordWidget *this,ulong param_1)

{
  ButtonListener *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  PVZ2UIButton *pPVar3;
  long lVar4;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ButtonListener *)(this + 0xd8);
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener(this_00);
  *(ulong *)(this + 0xe0) = param_1;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined ***)this = &PTR_GetClass_0694cad0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0694cdf8;
  FUN_05476574(this + 0x100);
  FUN_05476574(this + 0x108);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar3 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar3,100,this_00,awStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar3;
  FUN_05476c50(awStack_78);
  nop();
  pPVar3 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b81878,5);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b81878,5);
  PVZ2UIButton::SetDialogStates(pPVar3,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  uVar1 = FUN_04ae4680(0x78);
  uVar2 = FUN_04ae4680(0x32);
  (**(code **)(**(long **)(this + 0xe8) + 0x198))(*(long **)(this + 0xe8),0,0,uVar1,uVar2);
  lVar4 = *(long *)(this + 0xe8);
  std::string::string(asStack_40,"[PVP_PLAYBACK_START]");
  StringHelper::ToStringValue(asStack_40);
  FUN_054766c8(lVar4 + 0xd8,awStack_78);
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_40);
  nop();
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xe8));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar3 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar3,0x65,this_00,awStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar3;
  FUN_05476c50(awStack_78);
  nop();
  pPVar3 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b81910,5);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b81910,5);
  PVZ2UIButton::SetDialogStates(pPVar3,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  (**(code **)(**(long **)(this + 0xf0) + 0x198))(*(long **)(this + 0xf0),0,0,uVar1,uVar2);
  lVar4 = *(long *)(this + 0xf0);
  std::string::string(asStack_40,"[PVP_PLAYBACK_REVENGE]");
  StringHelper::ToStringValue(asStack_40);
  FUN_054766c8(lVar4 + 0xd8,awStack_78);
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_40);
  nop();
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xf0));
  refresh(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RecordWidget::Draw(Sexy::Graphics*) */

void __thiscall RecordWidget::Draw(RecordWidget *this,Graphics *param_1)

{
  PrimeText_PotentialTypeface *pPVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  PrimeTypeface *this_00;
  SalesProgressBar *pSVar9;
  undefined8 uVar10;
  Image *pIVar11;
  LotteryResultProgressBar *pLVar12;
  PrimeTypeface *this_01;
  char *__s;
  CachedUIResourcePtr<Sexy::Image> *this_02;
  float fVar13;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  Insets aIStack_28 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574(auStack_40);
  if (this[0xf8] == (RecordWidget)0x0) {
    Sexy::Color::Color((Color *)&local_38,0x49,0x76,0);
  }
  else {
    Sexy::Color::Color((Color *)&local_38,0xf4,0x46,0x46);
  }
  this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81988;
  this_00 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  iVar2 = FUN_04ae4680(5);
  iVar3 = FUN_04ae4680(0);
  iVar4 = FUN_04ae4680(10);
  iVar6 = *(int *)(this + 0x50);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b818b0);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar9);
  Sexy::Insets::Insets((Insets *)&local_18,iVar2,iVar3,iVar6 - iVar4,iVar5);
  uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b818b0);
  Draw3SliceImage(param_1,(Insets *)&local_18,uVar10);
  iVar6 = FUN_04ae4680(0x14);
  fVar13 = (float)Sexy::PrimeTypeface::GetLineHeight(this_00);
  iVar2 = FUN_04ae4680(5);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81988);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar9);
  if (this[0xf8] == (RecordWidget)0x0) {
    this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b818d8;
  }
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_02);
  Sexy::Graphics::DrawImage(param_1,pIVar11,iVar6,iVar2);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81988);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  iVar7 = FUN_04ae4680(0x5a);
  iVar4 = iVar6 + iVar5 + iVar7;
  Sexy::Insets::Insets(aIStack_28,iVar6 + iVar5,iVar2 + (iVar3 - (int)fVar13) / 2,iVar7,(int)fVar13)
  ;
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_38);
  WriteWordInRect(param_1,this + 0x100,aIStack_28,this_00,(Insets *)&local_18,3,1);
  iVar5 = FUN_04ae4680(0x140);
  iVar6 = iVar4 + iVar5;
  this_01 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  fVar13 = (float)Sexy::PrimeTypeface::GetLineHeight(this_01);
  Sexy::Insets::Insets(aIStack_28,iVar4,iVar2 + (iVar3 - (int)fVar13) / 2,iVar5,(int)fVar13);
  pPVar1 = PrimeText_Game::Typeface_FZCuYuan_18;
  Sexy::Color::Color((Color *)&local_18,0);
  WriteWordInRect(param_1,this + 0x108,aIStack_28,pPVar1,(Insets *)&local_18,3,1);
  fVar13 = (float)Sexy::PrimeTypeface::GetLineHeight(this_00);
  iVar4 = (int)fVar13;
  iVar3 = iVar2 + (iVar3 - iVar4) / 2;
  if (((0 < *(int *)(this + 0x114)) || (0 < *(int *)(this + 0x110))) || (0 < *(int *)(this + 0x118))
     ) {
    if (this[0xf8] == (RecordWidget)0x0) {
      __s = "[PVP_PLAYBACK_LOSE]";
    }
    else {
      __s = "[PVP_PLAYBACK_GET]";
    }
    std::string::string((string *)aIStack_28,__s);
    StringHelper::ToStringValue((string *)aIStack_28);
    FUN_054766c8(auStack_40,(Insets *)&local_18);
    FUN_05476c50((Insets *)&local_18);
    std::string::~string((string *)aIStack_28);
    nop();
    iVar7 = FUN_04ae4680(0x3c);
    iVar5 = iVar6 + iVar7;
    iVar8 = FUN_04ae4680(10);
    Sexy::Insets::Insets(aIStack_28,iVar6,iVar3,iVar8 + iVar7,iVar4);
    Sexy::Color::Color((Color *)&local_18,0);
    WriteWordInRect(param_1,auStack_40,aIStack_28,this_00,(Insets *)&local_18,3,1);
    if (0 < *(int *)(this + 0x114)) {
      pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81850);
      Sexy::Graphics::DrawImage(param_1,pIVar11,iVar5,iVar2);
      Sexy::StrFormat(L"%d",(Insets *)&local_18,(ulong)*(uint *)(this + 0x114));
      FUN_054766c8(auStack_40,(Insets *)&local_18);
      FUN_05476c50((Insets *)&local_18);
      Sexy::Color::Color((Color *)&local_18,0x45,0x40,9);
      local_38 = local_18;
      uStack_30 = uStack_10;
      pLVar12 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81850);
      iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
      iVar6 = iVar5 + iVar6;
      iVar7 = FUN_04ae4680(0x46);
      iVar5 = iVar6 + iVar7;
      Sexy::Insets::Insets(aIStack_28,iVar6,iVar3,iVar7,iVar4);
      Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_38);
      WriteWordInRect(param_1,auStack_40,aIStack_28,this_00,(Insets *)&local_18,3,1);
    }
    if (0 < *(int *)(this + 0x110)) {
      pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81960);
      Sexy::Graphics::DrawImage(param_1,pIVar11,iVar5,iVar2);
      Sexy::StrFormat(L"%d",(Insets *)&local_18,(ulong)*(uint *)(this + 0x110));
      FUN_054766c8(auStack_40,(Insets *)&local_18);
      FUN_05476c50((Insets *)&local_18);
      Sexy::Color::Color((Color *)&local_18,0x45,0x40,9);
      local_38 = local_18;
      uStack_30 = uStack_10;
      pLVar12 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81850);
      iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
      iVar6 = iVar5 + iVar6;
      iVar7 = FUN_04ae4680(0x46);
      iVar5 = iVar6 + iVar7;
      Sexy::Insets::Insets(aIStack_28,iVar6,iVar3,iVar7,iVar4);
      Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_38);
      WriteWordInRect(param_1,auStack_40,aIStack_28,this_00,(Insets *)&local_18,3,1);
    }
    if (0 < *(int *)(this + 0x118)) {
      pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81820);
      Sexy::Graphics::DrawImage(param_1,pIVar11,iVar5,iVar2);
      Sexy::StrFormat(L"%d",(Insets *)&local_18,(ulong)*(uint *)(this + 0x118));
      FUN_054766c8(auStack_40,(Insets *)&local_18);
      FUN_05476c50((Insets *)&local_18);
      Sexy::Color::Color((Color *)&local_18,0x45,0x40,9);
      local_38 = local_18;
      uStack_30 = uStack_10;
      pLVar12 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81820);
      iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
      iVar2 = FUN_04ae4680(0x46);
      Sexy::Insets::Insets(aIStack_28,iVar5 + iVar6,iVar3,iVar2,iVar4);
      Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_38);
      WriteWordInRect(param_1,auStack_40,aIStack_28,this_00,(Insets *)&local_18,3,1);
    }
  }
  FUN_05476c50(auStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RecordWidget::ButtonDepress(int) */

void __thiscall RecordWidget::ButtonDepress(RecordWidget *this,int param_1)

{
  char cVar1;
  int iVar2;
  PlaybackManager *this_00;
  PlaybackData *this_01;
  long lVar3;
  PVPManager *pPVar4;
  DTextField *this_02;
  ulong uVar5;
  NetworkMgr *this_03;
  INetworkMsgProcess *this_04;
  NameEffectStruct aNStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlaybackManager *)Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
  this_01 = (PlaybackData *)PlaybackManager::GetPlayback(this_00,*(ulong *)(this + 0xe0));
  if (this_01 != (PlaybackData *)0x0) {
    if (param_1 == 100) {
      cVar1 = PlaybackData::IsValid(this_01);
      if (cVar1 == '\0') {
        this_03 = (NetworkMgr *)NetworkMgr::Instance();
        this_04 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_03);
        INetworkMsgProcess::RequestPlaybackDownload
                  (this_04,*(int *)(this_01 + 0xf4),*(ulong *)(this + 0xe0));
      }
      else {
        MessageRouter::Post<unsigned_long,bool,unsigned_long,bool>
                  ((MessageRouter *)gMessageRouter,Message::PlaybackDownloadResult,
                   *(ulong *)(this + 0xe0),true);
      }
    }
    else if (param_1 == 0x65) {
      lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      FUN_04ae44b8(lVar3 + 0x180,*(undefined8 *)(this_01 + 0xe8));
      pPVar4 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      NameEffectStruct::NameEffectStruct(aNStack_20);
      PVPManager::SetOldNameStatus(pPVar4,aNStack_20);
      NameEffectStruct::~NameEffectStruct(aNStack_20);
      lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      FUN_04ae44e0(lVar3 + 0x128);
      lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      FUN_04ae44d8(lVar3 + 0x174);
      lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      FUN_04ae44cc(lVar3 + 0x176);
      lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      FUN_04ae44c4(lVar3 + 0x177);
      lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      FUN_04ae44b0(lVar3 + 0x178,*(undefined4 *)(this_01 + 0x108));
      iVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      PVPManager::RequestGetPlayerProfile(iVar2,0,4);
      this_02 = (DTextField *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      uVar5 = LawnApp::GetRealServerTime(gLawnApp);
      DTextField::setCharNum(this_02,uVar5);
      UISingletonDialog<PlaybackDlg>::CloseDialog();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to RecordWidget::ButtonDepress(int) */

void __thiscall RecordWidget::ButtonDepress(RecordWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

