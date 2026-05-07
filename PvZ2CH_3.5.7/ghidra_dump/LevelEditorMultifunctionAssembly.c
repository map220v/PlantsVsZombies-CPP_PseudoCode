// Class: LevelEditorMultifunctionAssembly


/* LevelEditorMultifunctionAssembly::TouchEnded(Sexy::Touch const&) */

void __thiscall
LevelEditorMultifunctionAssembly::TouchEnded(LevelEditorMultifunctionAssembly *this,Touch *param_1)

{
  if (*(int *)(this + 0xe0) != (int)*(undefined8 *)param_1) {
    return;
  }
  UIUtil::CloseDialog((Widget *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorMultifunctionAssembly::TriggerTutorial() */

void __thiscall
LevelEditorMultifunctionAssembly::TriggerTutorial(LevelEditorMultifunctionAssembly *this)

{
  int iVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  long lVar3;
  undefined8 uVar4;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_04b4bb60(*(undefined4 *)(lVar3 + 0x40));
  if ((iVar1 == 0x3c) && (*(long *)(this + 0x118) != 0)) {
    LawnApp::KillGameMaskUI(gLawnApp);
    uVar4 = *(undefined8 *)(this + 0x118);
    std::string::string(asStack_20,"[CUSTOM_LEVEL_TUTORIAL_15]");
    Sexy::Insets::Insets(aIStack_18);
    GameMaskUI::ShowMask(uVar4,1,asStack_20,aIStack_18);
    std::string::~string(asStack_20);
    nop();
    lVar3 = LawnApp::GetGameMaskUI(gLawnApp);
    iVar1 = FUN_04b4c0a8(300);
    uVar2 = FUN_04b4c0a8(0xffffff38);
    FUN_04b4bc88(lVar3 + 0x114,-iVar1,uVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorMultifunctionAssembly::LevelEditorMultifunctionAssembly() */

void __thiscall
LevelEditorMultifunctionAssembly::LevelEditorMultifunctionAssembly
          (LevelEditorMultifunctionAssembly *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06961ba0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06961ec8;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0xe8));
  *(undefined8 *)(this + 0x118) = 0;
  Sexy::Widget::Resize((Widget *)this,0,0,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
  return;
}


/* LevelEditorMultifunctionAssembly::~LevelEditorMultifunctionAssembly() */

void __thiscall
LevelEditorMultifunctionAssembly::~LevelEditorMultifunctionAssembly
          (LevelEditorMultifunctionAssembly *this)

{
  *(undefined ***)this = &PTR_GetClass_06961ba0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06961ec8;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::
  map<int,std::function<void()>,std::less<int>,std::allocator<std::pair<int_const,std::function<void()>>>>
  ::~map((map<int,std::function<void()>,std::less<int>,std::allocator<std::pair<int_const,std::function<void()>>>>
          *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorMultifunctionAssembly::~LevelEditorMultifunctionAssembly() */

void __thiscall
LevelEditorMultifunctionAssembly::~LevelEditorMultifunctionAssembly
          (LevelEditorMultifunctionAssembly *this)

{
  ~LevelEditorMultifunctionAssembly(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorMultifunctionAssembly::ButtonDepress(int) */

void __thiscall
LevelEditorMultifunctionAssembly::ButtonDepress(LevelEditorMultifunctionAssembly *this,int param_1)

{
  map<int,std::function<void()>,std::less<int>,std::allocator<std::pair<int_const,std::function<void()>>>>
  *this_00;
  bool bVar1;
  function<void()> *this_01;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<int,std::function<void()>,std::less<int>,std::allocator<std::pair<int_const,std::function<void()>>>>
             *)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  local_18 = std::
             map<int,std::function<void()>,std::less<int>,std::allocator<std::pair<int_const,std::function<void()>>>>
             ::find(this_00,local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    this_01 = (function<void()> *)
              std::
              map<int,std::function<void()>,std::less<int>,std::allocator<std::pair<int_const,std::function<void()>>>>
              ::operator[](this_00,local_24);
    std::function<void()>::operator()(this_01);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LevelEditorMultifunctionAssembly::ButtonDepress(int) */

void __thiscall
LevelEditorMultifunctionAssembly::ButtonDepress(LevelEditorMultifunctionAssembly *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorMultifunctionAssembly::AttachButton(int, Sexy::TRect<int>, std::function<void ()>,
   std::string const&) */

void __thiscall
LevelEditorMultifunctionAssembly::AttachButton
          (LevelEditorMultifunctionAssembly *this,int param_1,undefined8 param_3,function *param_4,
          string *param_5)

{
  bool bVar1;
  int iVar2;
  PVZ2UIButton *this_00;
  ProfileMgr *this_01;
  long lVar3;
  function<void()> *this_02;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  int local_84;
  undefined1 auStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  wstring awStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_84 = param_1;
  FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)awStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,local_84,(ButtonListener *)(this + 0xd8),(wstring *)aPStack_78,
             (Color *)awStack_40);
  FUN_05476c50(aPStack_78);
  nop();
  bVar1 = std::operator==(param_5,"delete");
  if (bVar1) {
    puVar6 = &DAT_06b85da0;
  }
  else {
    bVar1 = std::operator==(param_5,"add");
    if (bVar1) {
      puVar6 = &DAT_06b85e68;
    }
    else {
      bVar1 = std::operator==(param_5,"subtract");
      if (bVar1) {
        puVar6 = &DAT_06b85c08;
      }
      else {
        bVar1 = std::operator==(param_5,"weight");
        if (bVar1) {
          puVar6 = &DAT_06b85ec0;
        }
        else {
          bVar1 = std::operator==(param_5,"set");
          if (!bVar1) {
            Sexy::ToWString(param_5);
            PVZ2UIButton::SetLabelText(this_00,awStack_40);
            FUN_05476c50(awStack_40);
            PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b85e18,5);
            puVar6 = &DAT_06b85f98;
            uVar4 = 5;
            goto LAB_04b51494;
          }
          puVar6 = &DAT_06b85d78;
        }
      }
    }
  }
  PVZ2UIImage::PVZ2UIImage(aPStack_78,puVar6,9);
  uVar4 = 9;
LAB_04b51494:
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_40,puVar6,uVar4);
  PVZ2UIButton::SetDialogStates(this_00,aPStack_78,(PVZ2UIImage *)awStack_40);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,param_3);
  pcVar5 = *(code **)(*(long *)this_00 + 800);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar5)(this_00,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_01);
  iVar2 = FUN_04b4bb60(*(undefined4 *)(lVar3 + 0x40));
  if ((iVar2 == 0x3c) && (local_84 == 1)) {
    *(PVZ2UIButton **)(this + 0x118) = this_00;
  }
  this_02 = (function<void()> *)
            std::
            map<int,std::function<void()>,std::less<int>,std::allocator<std::pair<int_const,std::function<void()>>>>
            ::operator[]((map<int,std::function<void()>,std::less<int>,std::allocator<std::pair<int_const,std::function<void()>>>>
                          *)(this + 0xe8),&local_84);
  std::function<void()>::operator=(this_02,param_4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* LevelEditorMultifunctionAssembly::AttachButton(PVZ2UIButton*, std::function<void ()>) */

long __thiscall
LevelEditorMultifunctionAssembly::AttachButton
          (LevelEditorMultifunctionAssembly *this,long param_1,function *param_3)

{
  function<void()> *this_00;
  
  this_00 = (function<void()> *)
            std::
            map<int,std::function<void()>,std::less<int>,std::allocator<std::pair<int_const,std::function<void()>>>>
            ::operator[]((map<int,std::function<void()>,std::less<int>,std::allocator<std::pair<int_const,std::function<void()>>>>
                          *)(this + 0xe8),(int *)(param_1 + 0xd4));
  std::function<void()>::operator=(this_00,param_3);
  return param_1;
}

