// Class: RankAvatarWidget


/* RankAvatarWidget::~RankAvatarWidget() */

void __thiscall RankAvatarWidget::~RankAvatarWidget(RankAvatarWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06614a50;
  *(undefined ***)(this + 0x198) = &PTR__RankAvatarWidget_06614db8;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_06614de0;
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to RankAvatarWidget::~RankAvatarWidget() */

void __thiscall RankAvatarWidget::~RankAvatarWidget(RankAvatarWidget *this)

{
  ~RankAvatarWidget(this + -0x198);
  return;
}


/* RankAvatarWidget::~RankAvatarWidget() */

void __thiscall RankAvatarWidget::~RankAvatarWidget(RankAvatarWidget *this)

{
  ~RankAvatarWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RankAvatarWidget::~RankAvatarWidget() */

void __thiscall RankAvatarWidget::~RankAvatarWidget(RankAvatarWidget *this)

{
  ~RankAvatarWidget(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RankAvatarWidget::Draw(Sexy::Graphics*) */

void __thiscall RankAvatarWidget::Draw(RankAvatarWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(Image **)(this + 0x310) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x310),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  if (this[800] != (RankAvatarWidget)0x0) {
    iVar1 = FUN_033aa804(0xfffffff7);
    iVar2 = FUN_033aa804(0x12);
    Sexy::Insets::Insets
              (aIStack_18,iVar1,iVar1,iVar2 + *(int *)(this + 0x50),iVar2 + *(int *)(this + 0x54));
    Draw9SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0x318));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RankAvatarWidget::RankAvatarWidget(int, int) */

void __thiscall RankAvatarWidget::RankAvatarWidget(RankAvatarWidget *this,int param_1,int param_2)

{
  long lVar1;
  undefined1 auStack_58 [8];
  wstring awStack_50 [8];
  Color aCStack_48 [16];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_50,&DAT_056f11a8,auStack_58);
  Sexy::Color::Color(aCStack_48,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,param_1,(ButtonListener *)(this + 0x300),awStack_50,aCStack_48);
  FUN_05476c50(awStack_50);
  nop();
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x300));
  *(undefined ***)this = &PTR_GetClass_06614a50;
  *(undefined ***)(this + 0x198) = &PTR__RankAvatarWidget_06614db8;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_06614de0;
  Sexy::Delegate1<int>::Delegate1((DummyInit *)(this + 0x328));
  *(int *)(this + 0x308) = param_2;
  this[800] = (RankAvatarWidget)0x0;
  Sexy::Delegate1<int>::Delegate1(aDStack_38);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x328),(Delegate2 *)aDStack_38);
  *(undefined8 *)(this + 0x310) = 0;
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x318) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RankAvatarWidget::Select() */

void __thiscall RankAvatarWidget::Select(RankAvatarWidget *this)

{
  int iVar1;
  
  if (this[800] == (RankAvatarWidget)0x0) {
    iVar1 = FUN_033aa428(*(undefined8 *)(this + 0x330),*(undefined8 *)(this + 0x340));
    if (iVar1 != 0) {
      Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
                ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x328),
                 (SexyURL *)(ulong)*(uint *)(this + 0x308));
    }
    this[800] = (RankAvatarWidget)0x1;
  }
  return;
}


/* RankAvatarWidget::ButtonDepress(int) */

void __thiscall RankAvatarWidget::ButtonDepress(RankAvatarWidget *this,int param_1)

{
  if (*(int *)(this + 0xd4) != param_1) {
    return;
  }
  Select(this);
  return;
}


/* non-virtual thunk to RankAvatarWidget::ButtonDepress(int) */

void __thiscall RankAvatarWidget::ButtonDepress(RankAvatarWidget *this,int param_1)

{
  ButtonDepress(this + -0x300,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RankAvatarWidget::InitView() */

void __thiscall RankAvatarWidget::InitView(RankAvatarWidget *this)

{
  undefined8 uVar1;
  string asStack_48 [8];
  string asStack_40 [8];
  int local_38 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetGameItemInfo(*(int *)(this + 0x308),0x7fffffff,0);
  std::string::string(asStack_48,"");
  nop();
  if (local_38[0] != 0) {
    std::operator+(asStack_18,"_DISPLAY");
    FUN_05474278(asStack_48,asStack_40);
    std::string::~string(asStack_40);
  }
  uVar1 = StringHelper::ToImage(asStack_48,false);
  *(undefined8 *)(this + 0x310) = uVar1;
  std::string::string(asStack_40,"IMAGE_UI_GENERIC_SELECT_FRAME_BLUE_LIGHT");
  uVar1 = StringHelper::ToImage(asStack_40,false);
  *(undefined8 *)(this + 0x318) = uVar1;
  std::string::~string(asStack_40);
  nop();
  std::string::~string(asStack_48);
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

