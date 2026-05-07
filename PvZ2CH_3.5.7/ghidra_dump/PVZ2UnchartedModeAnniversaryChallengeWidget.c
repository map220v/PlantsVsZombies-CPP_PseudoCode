// Class: PVZ2UnchartedModeAnniversaryChallengeWidget


/* PVZ2UnchartedModeAnniversaryChallengeWidget::SetProps(Sexy::RtWeakPtr<LevelModifierModuleCollection>)
    */

void __thiscall
PVZ2UnchartedModeAnniversaryChallengeWidget::SetProps
          (PVZ2UnchartedModeAnniversaryChallengeWidget *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x308),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeAnniversaryChallengeWidget::Draw(Sexy::Graphics*) */

void __thiscall
PVZ2UnchartedModeAnniversaryChallengeWidget::Draw
          (PVZ2UnchartedModeAnniversaryChallengeWidget *this,Graphics *param_1)

{
  Image *pIVar1;
  int iVar2;
  int iVar3;
  SalesProgressBar *this_00;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(Image **)(this + 800) != (Image *)0x0) && (*(Image **)(this + 0x328) != (Image *)0x0)) {
    pIVar1 = *(Image **)(this + 800);
    if (this[0x318] == (PVZ2UnchartedModeAnniversaryChallengeWidget)0x0) {
      pIVar1 = *(Image **)(this + 0x328);
    }
    Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 800));
    iVar3 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 800));
    Sexy::Insets::Insets(aIStack_18,0,0,iVar2,iVar3);
    Sexy::Graphics::DrawImage(param_1,pIVar1,(TRect *)aIStack_28,(TRect *)aIStack_18);
  }
  if ((this[0x348] == (PVZ2UnchartedModeAnniversaryChallengeWidget)0x0) &&
     (this[0x318] != (PVZ2UnchartedModeAnniversaryChallengeWidget)0x0)) {
    Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x340));
    this_00 = *(SalesProgressBar **)(this + 0x340);
    iVar3 = SalesProgressBar::GetCurrentLevel(this_00);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar2,iVar3);
    Sexy::Graphics::DrawImage(param_1,(Image *)this_00,(TRect *)aIStack_28,(TRect *)aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeAnniversaryChallengeWidget::PVZ2UnchartedModeAnniversaryChallengeWidget(int,
   bool) */

void __thiscall
PVZ2UnchartedModeAnniversaryChallengeWidget::PVZ2UnchartedModeAnniversaryChallengeWidget
          (PVZ2UnchartedModeAnniversaryChallengeWidget *this,int param_1,bool param_2)

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
  *(undefined ***)this = &PTR_GetClass_069d1c40;
  *(undefined ***)(this + 0x198) = &PTR__PVZ2UnchartedModeAnniversaryChallengeWidget_069d1fa0;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_069d1fc8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x308));
  *(int *)(this + 0x310) = param_1;
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x314) = 0;
  this[0x318] = (PVZ2UnchartedModeAnniversaryChallengeWidget)0x0;
  *(undefined4 *)(this + 0x31c) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  this[0x348] = (PVZ2UnchartedModeAnniversaryChallengeWidget)param_2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UnchartedModeAnniversaryChallengeWidget::~PVZ2UnchartedModeAnniversaryChallengeWidget() */

void __thiscall
PVZ2UnchartedModeAnniversaryChallengeWidget::~PVZ2UnchartedModeAnniversaryChallengeWidget
          (PVZ2UnchartedModeAnniversaryChallengeWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069d1c40;
  *(undefined ***)(this + 0x198) = &PTR__PVZ2UnchartedModeAnniversaryChallengeWidget_069d1fa0;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_069d1fc8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x308));
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to
   PVZ2UnchartedModeAnniversaryChallengeWidget::~PVZ2UnchartedModeAnniversaryChallengeWidget() */

void __thiscall
PVZ2UnchartedModeAnniversaryChallengeWidget::~PVZ2UnchartedModeAnniversaryChallengeWidget
          (PVZ2UnchartedModeAnniversaryChallengeWidget *this)

{
  ~PVZ2UnchartedModeAnniversaryChallengeWidget(this + -0x198);
  return;
}


/* PVZ2UnchartedModeAnniversaryChallengeWidget::~PVZ2UnchartedModeAnniversaryChallengeWidget() */

void __thiscall
PVZ2UnchartedModeAnniversaryChallengeWidget::~PVZ2UnchartedModeAnniversaryChallengeWidget
          (PVZ2UnchartedModeAnniversaryChallengeWidget *this)

{
  ~PVZ2UnchartedModeAnniversaryChallengeWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   PVZ2UnchartedModeAnniversaryChallengeWidget::~PVZ2UnchartedModeAnniversaryChallengeWidget() */

void __thiscall
PVZ2UnchartedModeAnniversaryChallengeWidget::~PVZ2UnchartedModeAnniversaryChallengeWidget
          (PVZ2UnchartedModeAnniversaryChallengeWidget *this)

{
  ~PVZ2UnchartedModeAnniversaryChallengeWidget(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeAnniversaryChallengeWidget::InitView() */

void __thiscall
PVZ2UnchartedModeAnniversaryChallengeWidget::InitView
          (PVZ2UnchartedModeAnniversaryChallengeWidget *this)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  size_t __n;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9d2d8);
  *(undefined8 *)(this + 0x330) = uVar3;
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9d2b0);
  *(undefined8 *)(this + 0x338) = uVar3;
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9d060);
  *(undefined8 *)(this + 0x340) = uVar3;
  uVar1 = *(int *)(this + 0x310) / 100;
  *(int *)(this + 0x314) = *(int *)(this + 0x310) % 100;
  __n = (size_t)uVar1;
  *(uint *)(this + 0x31c) = uVar1;
  Sexy::OutputDebugStrF((wchar_t *)"PVZ2UnchartedModeAnniversaryChallengeWidget i = %d s = %d");
  Set8BytesTo0(asStack_18);
  if (this[0x348] == (PVZ2UnchartedModeAnniversaryChallengeWidget)0x0) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x308));
    bVar2 = std::operator==((string *)(lVar4 + 0x38),"");
    if (bVar2) {
      std::string::append(asStack_18,"IMAGE_UI_UNCHARTED_CHALLENGE_1_1",__n);
    }
    else {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x308));
      thunk_FUN_05475e00(asStack_18,lVar4 + 0x38);
    }
  }
  else {
    Sexy::StrFormat("IMAGE_UI_UNCHARTED_CHALLENGE_BASE_%d",asStack_10,(ulong)*(uint *)(this + 0x31c)
                   );
    FUN_05474278(asStack_18,asStack_10);
    std::string::~string(asStack_10);
  }
  std::operator+(asStack_18,"_D");
  uVar3 = StringHelper::ToImage(asStack_18,false);
  *(undefined8 *)(this + 800) = uVar3;
  uVar3 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0x328) = uVar3;
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PVZ2UnchartedModeAnniversaryChallengeWidget::ButtonDepress(int) */

void __thiscall
PVZ2UnchartedModeAnniversaryChallengeWidget::ButtonDepress
          (PVZ2UnchartedModeAnniversaryChallengeWidget *this,int param_1)

{
  PVZ2UnchartedModeAnniversaryChallengeWidget PVar1;
  
  if ((*(int *)(this + 0x310) == param_1) &&
     (this[0x348] == (PVZ2UnchartedModeAnniversaryChallengeWidget)0x0)) {
    PVar1 = this[0x318];
    this[0x318] = (PVZ2UnchartedModeAnniversaryChallengeWidget)((byte)PVar1 ^ 1);
    MessageRouter::Post<int,int,bool,int,int,bool>
              ((MessageRouter *)gMessageRouter,Message::SelectChallenge,*(int *)(this + 0x314),
               *(int *)(this + 0x31c),(bool)((byte)PVar1 ^ 1));
    return;
  }
  return;
}


/* non-virtual thunk to PVZ2UnchartedModeAnniversaryChallengeWidget::ButtonDepress(int) */

void __thiscall
PVZ2UnchartedModeAnniversaryChallengeWidget::ButtonDepress
          (PVZ2UnchartedModeAnniversaryChallengeWidget *this,int param_1)

{
  ButtonDepress(this + -0x300,param_1);
  return;
}

