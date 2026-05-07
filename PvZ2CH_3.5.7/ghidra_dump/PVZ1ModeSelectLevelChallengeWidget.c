// Class: PVZ1ModeSelectLevelChallengeWidget


/* PVZ1ModeSelectLevelChallengeWidget::SetDescStr(std::wstring) */

void PVZ1ModeSelectLevelChallengeWidget::SetDescStr(long param_1)

{
  thunk_FUN_05477b9c(param_1 + 0x310);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeSelectLevelChallengeWidget::Draw(Sexy::Graphics*) */

void __thiscall
PVZ1ModeSelectLevelChallengeWidget::Draw(PVZ1ModeSelectLevelChallengeWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  LotteryResultProgressBar *pLVar6;
  SalesProgressBar *pSVar7;
  undefined8 uVar8;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04dded90(5);
  iVar1 = *(int *)(this + 0x54) + iVar2 * -2;
  if (this[0x30c] == (PVZ1ModeSelectLevelChallengeWidget)0x0) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9b800);
    Sexy::Insets::Insets(aIStack_28,iVar2,iVar2,iVar1,iVar1);
    pLVar6 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9b800);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
    pSVar7 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9b800);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar7);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar3,iVar4);
    Sexy::Graphics::DrawImage(param_1,pIVar5,(TRect *)aIStack_28,(TRect *)aIStack_18);
  }
  else {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9b8a0);
    Sexy::Insets::Insets(aIStack_28,iVar2,iVar2,iVar1,iVar1);
    pLVar6 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9b8a0);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
    pSVar7 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9b8a0);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar7);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar3,iVar4);
    Sexy::Graphics::DrawImage(param_1,pIVar5,(TRect *)aIStack_28,(TRect *)aIStack_18);
  }
  if (this[0x30d] != (PVZ1ModeSelectLevelChallengeWidget)0x0) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9b8a0);
    Sexy::Insets::Insets(aIStack_28,iVar2,iVar2,iVar1,iVar1);
    pLVar6 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9b8a0);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
    pSVar7 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9b8a0);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar7);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar3,iVar4);
    Sexy::Graphics::DrawImage(param_1,pIVar5,(TRect *)aIStack_28,(TRect *)aIStack_18);
  }
  iVar3 = FUN_04dded90(10);
  iVar3 = iVar2 + iVar1 + iVar3;
  Sexy::Insets::Insets(aIStack_28,iVar3,0,*(int *)(this + 0x50) - iVar3,*(int *)(this + 0x54));
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Insets::Insets(aIStack_18,0x57,0x37,0,0xff);
  WriteWordInRect(param_1,this + 0x310,aIStack_28,uVar8,aIStack_18,3,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeSelectLevelChallengeWidget::~PVZ1ModeSelectLevelChallengeWidget() */

void __thiscall
PVZ1ModeSelectLevelChallengeWidget::~PVZ1ModeSelectLevelChallengeWidget
          (PVZ1ModeSelectLevelChallengeWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069c8a30;
  *(undefined ***)(this + 0x198) = &PTR__PVZ1ModeSelectLevelChallengeWidget_069c8d90;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_069c8db8;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x318));
  FUN_05476c50(this + 0x310);
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to PVZ1ModeSelectLevelChallengeWidget::~PVZ1ModeSelectLevelChallengeWidget() */

void __thiscall
PVZ1ModeSelectLevelChallengeWidget::~PVZ1ModeSelectLevelChallengeWidget
          (PVZ1ModeSelectLevelChallengeWidget *this)

{
  ~PVZ1ModeSelectLevelChallengeWidget(this + -0x198);
  return;
}


/* PVZ1ModeSelectLevelChallengeWidget::~PVZ1ModeSelectLevelChallengeWidget() */

void __thiscall
PVZ1ModeSelectLevelChallengeWidget::~PVZ1ModeSelectLevelChallengeWidget
          (PVZ1ModeSelectLevelChallengeWidget *this)

{
  ~PVZ1ModeSelectLevelChallengeWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVZ1ModeSelectLevelChallengeWidget::~PVZ1ModeSelectLevelChallengeWidget() */

void __thiscall
PVZ1ModeSelectLevelChallengeWidget::~PVZ1ModeSelectLevelChallengeWidget
          (PVZ1ModeSelectLevelChallengeWidget *this)

{
  ~PVZ1ModeSelectLevelChallengeWidget(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeSelectLevelChallengeWidget::ButtonDepress(int) */

void __thiscall
PVZ1ModeSelectLevelChallengeWidget::ButtonDepress
          (PVZ1ModeSelectLevelChallengeWidget *this,int param_1)

{
  PVZ1ModeSelectLevelChallengeWidget PVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0xd4) == param_1) &&
     (Sexy::OutputDebugStrF
                ((wchar_t *)"PVZ1ModeSelectLevelChallengeWidget : ButtonDepress id = %d mId = %d"),
     this[0x30c] == (PVZ1ModeSelectLevelChallengeWidget)0x0)) {
    PVar1 = this[0x30d];
    this[0x30d] = (PVZ1ModeSelectLevelChallengeWidget)((byte)PVar1 ^ 1);
    MessageRouter::Post<int,bool,int,bool>
              ((MessageRouter *)gMessageRouter,Message::UpdateSelectChallenge,*(int *)(this + 0x308)
               ,(bool)((byte)PVar1 ^ 1));
    if (this[0x330] == (PVZ1ModeSelectLevelChallengeWidget)0x0) {
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x318));
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x318));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar2) {
        piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        if (this[0x30d] == (PVZ1ModeSelectLevelChallengeWidget)0x0) {
          iVar4 = -piVar3[1];
        }
        else {
          iVar4 = piVar3[1];
        }
        MessageRouter::Post<int,int,int,int>
                  ((MessageRouter *)gMessageRouter,Message::UpdatePVZ1ModeSelectLevelBonus,*piVar3,
                   iVar4);
        __gnu_cxx::
        __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
        ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                      *)&local_18);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PVZ1ModeSelectLevelChallengeWidget::ButtonDepress(int) */

void __thiscall
PVZ1ModeSelectLevelChallengeWidget::ButtonDepress
          (PVZ1ModeSelectLevelChallengeWidget *this,int param_1)

{
  ButtonDepress(this + -0x300,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeSelectLevelChallengeWidget::PVZ1ModeSelectLevelChallengeWidget(int,
   std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >) */

void __thiscall
PVZ1ModeSelectLevelChallengeWidget::PVZ1ModeSelectLevelChallengeWidget
          (PVZ1ModeSelectLevelChallengeWidget *this,int param_1,vector *param_3)

{
  long lVar1;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,param_1,(ButtonListener *)(this + 0x300),awStack_20,aCStack_18);
  FUN_05476c50(awStack_20);
  nop();
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x300));
  *(undefined ***)this = &PTR_GetClass_069c8a30;
  *(undefined ***)(this + 0x198) = &PTR__PVZ1ModeSelectLevelChallengeWidget_069c8d90;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_069c8db8;
  FUN_05476574(this + 0x310);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x318));
  *(int *)(this + 0x308) = param_1;
  this[0x30c] = (PVZ1ModeSelectLevelChallengeWidget)0x0;
  this[0x30d] = (PVZ1ModeSelectLevelChallengeWidget)0x0;
  FUN_054772c4(this + 0x310,&DAT_056f11a8);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x318),param_3);
  this[0x59] = (PVZ1ModeSelectLevelChallengeWidget)0x0;
  lVar1 = ___stack_chk_guard;
  this[0x330] = (PVZ1ModeSelectLevelChallengeWidget)0x0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

