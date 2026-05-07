// Class: PVZ1ModeSelectLevelBonusWidget


/* PVZ1ModeSelectLevelBonusWidget::~PVZ1ModeSelectLevelBonusWidget() */

void __thiscall
PVZ1ModeSelectLevelBonusWidget::~PVZ1ModeSelectLevelBonusWidget
          (PVZ1ModeSelectLevelBonusWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069c8710;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0xe8);
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PVZ1ModeSelectLevelBonusWidget::~PVZ1ModeSelectLevelBonusWidget() */

void __thiscall
PVZ1ModeSelectLevelBonusWidget::~PVZ1ModeSelectLevelBonusWidget
          (PVZ1ModeSelectLevelBonusWidget *this)

{
  ~PVZ1ModeSelectLevelBonusWidget(this);
  AK::FreeHook(this);
  return;
}


/* PVZ1ModeSelectLevelBonusWidget::Resize(int, int, int, int) */

void __thiscall
PVZ1ModeSelectLevelBonusWidget::Resize
          (PVZ1ModeSelectLevelBonusWidget *this,int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  plVar3 = *(long **)(this + 0xf0);
  if (plVar3 != (long *)0x0) {
    uVar1 = FUN_04dded90(5);
    iVar2 = FUN_04dded90(10);
    (**(code **)(*plVar3 + 0x198))(plVar3,uVar1,uVar1,param_3 - iVar2,param_4 - iVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeSelectLevelBonusWidget::UpdateRatio() */

void __thiscall PVZ1ModeSelectLevelBonusWidget::UpdateRatio(PVZ1ModeSelectLevelBonusWidget *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  UIRewardFrame *pUVar4;
  Color aCStack_18 [16];
  long local_8;
  
  iVar1 = *(int *)(this + 0x100);
  iVar2 = *(int *)(this + 0xfc);
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%1.1f",aCStack_18,(double)((float)iVar1 / (float)iVar2));
  FUN_054766c8(this + 0xe8,aCStack_18);
  FUN_05476c50(aCStack_18);
  this[0xe0] = (PVZ1ModeSelectLevelBonusWidget)(1.0 < (float)iVar1 / (float)iVar2);
  if (*(long *)(this + 0xf0) != 0) {
    FUN_04dde810(*(long *)(this + 0xf0) + 0xe8,*(undefined4 *)(this + 0x100));
    pUVar4 = *(UIRewardFrame **)(this + 0xf0);
    uVar3 = 3;
    if (this[0xe0] == (PVZ1ModeSelectLevelBonusWidget)0x0) {
      uVar3 = 1;
    }
    Sexy::Color::Color(aCStack_18,uVar3);
    UIRewardFrame::SetTextColor(pUVar4,aCStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeSelectLevelBonusWidget::InitView() */

void __thiscall PVZ1ModeSelectLevelBonusWidget::InitView(PVZ1ModeSelectLevelBonusWidget *this)

{
  if (*(long *)(this + 0xf0) != 0) {
    (**(code **)(*(long *)this + 0x60))();
  }
  return;
}


/* PVZ1ModeSelectLevelBonusWidget::RegisterEvents() */

void __thiscall PVZ1ModeSelectLevelBonusWidget::RegisterEvents(PVZ1ModeSelectLevelBonusWidget *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,UpdateLevelBonus);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<PVZ1ModeSelectLevelBonusWidget,void(PVZ1ModeSelectLevelBonusWidget::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::UpdatePVZ1ModeSelectLevelBonus,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeSelectLevelBonusWidget::PVZ1ModeSelectLevelBonusWidget(int, int, bool) */

void __thiscall
PVZ1ModeSelectLevelBonusWidget::PVZ1ModeSelectLevelBonusWidget
          (PVZ1ModeSelectLevelBonusWidget *this,int param_1,int param_2,bool param_3)

{
  undefined8 uVar1;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_069c8710;
  FUN_05476574(this + 0xd8);
  FUN_05476574(this + 0xe8);
  this[0xd1] = (PVZ1ModeSelectLevelBonusWidget)param_3;
  std::string::string(asStack_10,"[FIRST_REWARD_TITLE]");
  StringHelper::ToStringValue(asStack_10);
  FUN_054766c8(this + 0xd8,auStack_18);
  FUN_05476c50(auStack_18);
  std::string::~string(asStack_10);
  nop();
  this[0xe0] = (PVZ1ModeSelectLevelBonusWidget)0x0;
  FUN_054772c4(this + 0xe8,&DAT_056f11a8);
  uVar1 = UIRewardFrame::CreateUIRewardFrame(param_1,param_2,false);
  *(int *)(this + 0xf8) = param_1;
  *(undefined8 *)(this + 0xf0) = uVar1;
  *(int *)(this + 0xfc) = param_2;
  *(int *)(this + 0x100) = param_2;
  this[0x59] = (PVZ1ModeSelectLevelBonusWidget)0x0;
  RegisterEvents(this);
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeSelectLevelBonusWidget::UpdateLevelBonus(int, int) */

void __thiscall
PVZ1ModeSelectLevelBonusWidget::UpdateLevelBonus
          (PVZ1ModeSelectLevelBonusWidget *this,int param_1,int param_2)

{
  PVZ1ModeSelectLevel *this_00;
  
  if (*(int *)(this + 0xf8) == param_1) {
    *(int *)(this + 0x100) = *(int *)(this + 0x100) + param_2;
    UpdateRatio(this);
    if (*(int *)(this + 0x100) == 0) {
      this_00 = (PVZ1ModeSelectLevel *)UISingletonDialog<PVZ1ModeSelectLevel>::GetSingletonPtr();
      PVZ1ModeSelectLevel::RemoveBonusWidget(this_00,this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeSelectLevelBonusWidget::Draw(Sexy::Graphics*) */

void __thiscall
PVZ1ModeSelectLevelBonusWidget::Draw(PVZ1ModeSelectLevelBonusWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  undefined8 uVar4;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9b850);
  iVar1 = FUN_04dded90(0xfffffffb);
  iVar2 = FUN_04dded90(10);
  Sexy::Graphics::DrawImage
            (param_1,pIVar3,iVar1,iVar1,iVar2 + *(int *)(this + 0x50),iVar2 + *(int *)(this + 0x54))
  ;
  nop();
  if (this[0xd1] != (PVZ1ModeSelectLevelBonusWidget)0x0) {
    iVar1 = FUN_04dded90(0xfffffff6);
    iVar2 = FUN_04dded90(0x1e);
    Sexy::Insets::Insets(aIStack_28,0,iVar1,*(int *)(this + 0x50),iVar2);
    uVar4 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0xd8,aIStack_28,uVar4,aCStack_18,2,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

