// Class: DangerRoomMowerWidget


/* DangerRoomMowerWidget::~DangerRoomMowerWidget() */

void __thiscall DangerRoomMowerWidget::~DangerRoomMowerWidget(DangerRoomMowerWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06940cb0;
  UIWidgetImage::~UIWidgetImage((UIWidgetImage *)this);
  return;
}


/* DangerRoomMowerWidget::~DangerRoomMowerWidget() */

void __thiscall DangerRoomMowerWidget::~DangerRoomMowerWidget(DangerRoomMowerWidget *this)

{
  ~DangerRoomMowerWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomMowerWidget::SetWorld(std::string const&) */

void __thiscall DangerRoomMowerWidget::SetWorld(DangerRoomMowerWidget *this,string *param_1)

{
  undefined4 uVar1;
  LotteryResultProgressBar *this_00;
  string asStack_18 [8];
  string asStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Upper((Sexy *)param_1,___stack_chk_guard);
  std::operator+("IMAGE_UI_DANGERROOM_DIALOG_MOWER_",asStack_18);
  UIWidgetImage::SetImage((UIWidgetImage *)this,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  this_00 = (LotteryResultProgressBar *)
            PlantDisplayFrame::GetPlantDisplayPtr((PlantDisplayFrame *)this);
  if (this_00 != (LotteryResultProgressBar *)0x0) {
    uVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    *(undefined4 *)(this + 0x50) = uVar1;
    uVar1 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
    *(undefined4 *)(this + 0x54) = uVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomMowerWidget::Draw(Sexy::Graphics*) */

void __thiscall DangerRoomMowerWidget::Draw(DangerRoomMowerWidget *this,Graphics *param_1)

{
  Image *pIVar1;
  
  UIWidgetImage::Draw((UIWidgetImage *)this,param_1);
  if (this[0x6e] == (DangerRoomMowerWidget)0x0) {
    return;
  }
  pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7efe8);
  Sexy::Graphics::DrawImage(param_1,pIVar1,0,0);
  return;
}

