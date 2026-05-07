// Class: CustomDisplayBoard


/* CustomDisplayBoard::ButtonPress(int) */

int CustomDisplayBoard::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to CustomDisplayBoard::ButtonPress(int) */

void __thiscall CustomDisplayBoard::ButtonPress(CustomDisplayBoard *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* CustomDisplayBoard::~CustomDisplayBoard() */

void __thiscall CustomDisplayBoard::~CustomDisplayBoard(CustomDisplayBoard *this)

{
  *(undefined ***)this = &PTR_GetClass_06983b60;
  *(undefined **)(this + 0xd8) = &DAT_06983e90;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  *(undefined8 *)(this + 0xe0) = 0;
  std::string::~string((string *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* CustomDisplayBoard::~CustomDisplayBoard() */

void __thiscall CustomDisplayBoard::~CustomDisplayBoard(CustomDisplayBoard *this)

{
  ~CustomDisplayBoard(this);
  AK::FreeHook(this);
  return;
}


/* CustomDisplayBoard::SetAvatarIndex(int) */

void CustomDisplayBoard::SetAvatarIndex(int param_1)

{
  long lVar1;
  
  lVar1 = *(long *)((ulong)(uint)param_1 + 0xe0);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0xf0) != 0)) {
    FUN_04c29f24(lVar1 + 0xd4);
    PlantDisplayBoard::DisplayNexyAction(*(PlantDisplayBoard **)((ulong)(uint)param_1 + 0xe0));
    return;
  }
  return;
}


/* CustomDisplayBoard::CustomDisplayBoard(std::string const&, Sexy::TRect<int> const&) */

void __thiscall
CustomDisplayBoard::CustomDisplayBoard(CustomDisplayBoard *this,string *param_1,TRect *param_2)

{
  undefined8 uVar1;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06983b60;
  *(undefined **)(this + 0xd8) = &DAT_06983e90;
  Set8BytesTo0(this + 0xe8);
  Sexy::Insets::Insets((Insets *)(this + 0xf0));
  *(undefined8 *)(this + 0xe0) = 0;
  thunk_FUN_05475e00(this + 0xe8,param_1);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0xf0) = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0xf8) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomDisplayBoard::InitView() */

void __thiscall CustomDisplayBoard::InitView(CustomDisplayBoard *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  string *psVar12;
  PVZ2UIButton *this_00;
  LotteryResultProgressBar *pLVar13;
  SalesProgressBar *pSVar14;
  code *pcVar15;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar12 = ::operator_new(0x178);
  PlantDisplayBoard::PlantDisplayBoard((PlantDisplayBoard *)psVar12,3,0);
  *(string **)(this + 0xe0) = psVar12;
  PlantDisplayBoard::SetPlantName(psVar12);
  iVar5 = FUN_04c2a40c(0x96);
  (**(code **)(**(long **)(this + 0xe0) + 0x198))
            (*(long **)(this + 0xe0),-iVar5,(*(int *)(this + 0xf4) - *(int *)(this + 0x4c)) - iVar5,
             *(undefined4 *)(this + 0xf8),*(undefined4 *)(this + 0xfc));
  PlantDisplayBoard::DisplayNexyAction(*(PlantDisplayBoard **)(this + 0xe0));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  iVar5 = *(int *)(this + 0x48);
  iVar1 = *(int *)(this + 0xf0);
  iVar2 = *(int *)(this + 0xf4);
  iVar3 = *(int *)(this + 0x4c);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0x67,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  iVar4 = *(int *)(this + 0xf8);
  pcVar15 = *(code **)(*(long *)this_00 + 0x198);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f540);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  iVar7 = FUN_04c2a40c(10);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f540);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar14);
  iVar9 = FUN_04c2a40c(8);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f540);
  uVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f540);
  uVar11 = SalesProgressBar::GetCurrentLevel(pSVar14);
  (*pcVar15)(this_00,(((iVar1 - iVar5) + iVar4) - iVar6 / 2) - iVar7,
             ((iVar2 - iVar3) - iVar8 / 2) + iVar9,uVar10,uVar11);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b8f540,1);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b8f448,1);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomDisplayBoard::ButtonDepress(int) */

void __thiscall CustomDisplayBoard::ButtonDepress(CustomDisplayBoard *this,int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  if (param_1 == 0x67) {
    (**(code **)(*(long *)this + 0x158))(this,0);
  }
  return;
}


/* non-virtual thunk to CustomDisplayBoard::ButtonDepress(int) */

void __thiscall CustomDisplayBoard::ButtonDepress(CustomDisplayBoard *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* CustomDisplayBoard::Draw(Sexy::Graphics*) */

void __thiscall CustomDisplayBoard::Draw(CustomDisplayBoard *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  
  nop();
  iVar1 = *(int *)(this + 0xf4);
  iVar2 = *(int *)(this + 0x4c);
  pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f6e0);
  Sexy::Graphics::DrawImage
            (param_1,pIVar3,0,iVar1 - iVar2,*(int *)(this + 0xf8),*(int *)(this + 0xfc));
  return;
}

