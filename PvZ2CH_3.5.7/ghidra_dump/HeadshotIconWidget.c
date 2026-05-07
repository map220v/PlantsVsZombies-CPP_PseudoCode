// Class: HeadshotIconWidget


/* HeadshotIconWidget::~HeadshotIconWidget() */

void __thiscall HeadshotIconWidget::~HeadshotIconWidget(HeadshotIconWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0698bae0;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* HeadshotIconWidget::~HeadshotIconWidget() */

void __thiscall HeadshotIconWidget::~HeadshotIconWidget(HeadshotIconWidget *this)

{
  ~HeadshotIconWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeadshotIconWidget::Draw(Sexy::Graphics*) */

void __thiscall HeadshotIconWidget::Draw(HeadshotIconWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xe8) != 0) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xd8));
    iVar1 = FUN_04c57134(10);
    iVar2 = FUN_04c57134(0x14);
    Sexy::Insets::Insets
              (aIStack_18,iVar1,iVar1,*(int *)(this + 0x50) - iVar2,*(int *)(this + 0x54) - iVar2);
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xe8));
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xe0));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeadshotIconWidget::InitView(int) */

void __thiscall HeadshotIconWidget::InitView(HeadshotIconWidget *this,int param_1)

{
  int iVar1;
  undefined8 uVar2;
  DIniFile *this_00;
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [16];
  string asStack_58 [16];
  DString aDStack_48 [16];
  int local_38 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetGameItemInfo(param_1,0x7fffffff,0);
  if (local_38[0] != 0) {
    uVar2 = StringHelper::ToImage(asStack_18,false);
    *(undefined8 *)(this + 0xe8) = uVar2;
    DSingleton<HeadshotConfig>::getInstance();
    nop();
    DString::DString(aDStack_48,param_1);
    DString::operator_cast_to_string(aDStack_48);
    std::string::string(asStack_58,"frame");
    iVar1 = DIniFile::getItemInt(this_00,asStack_68,asStack_58,1);
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_68);
    DString::~DString(aDStack_48);
    DString::DString((DString *)asStack_68,iVar1);
    ::operator+("IMAGE_UI_HEADSHOTFRAME_LV",(DString *)asStack_68);
    ::operator+((DString *)asStack_58,"_1");
    DString::operator_cast_to_string(aDStack_48);
    DString::~DString(aDStack_48);
    DString::~DString((DString *)asStack_58);
    DString::~DString((DString *)asStack_68);
    uVar2 = StringHelper::ToImage(asStack_78,false);
    *(undefined8 *)(this + 0xe0) = uVar2;
    DString::DString((DString *)asStack_68,iVar1);
    ::operator+("IMAGE_UI_HEADSHOTFRAME_LV",(DString *)asStack_68);
    ::operator+((DString *)asStack_58,"_2");
    DString::operator_cast_to_string(aDStack_48);
    DString::~DString(aDStack_48);
    DString::~DString((DString *)asStack_58);
    DString::~DString((DString *)asStack_68);
    uVar2 = StringHelper::ToImage(asStack_70,false);
    *(undefined8 *)(this + 0xd8) = uVar2;
    std::string::~string(asStack_70);
    std::string::~string(asStack_78);
  }
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeadshotIconWidget::HeadshotIconWidget(int) */

void __thiscall HeadshotIconWidget::HeadshotIconWidget(HeadshotIconWidget *this,int param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(int *)(this + 0xd4) = param_1;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_0698bae0;
  *(undefined8 *)(this + 0xe8) = 0;
  InitView(this,param_1);
  return;
}

