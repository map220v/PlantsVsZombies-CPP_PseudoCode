// Class: NFSLinkageDailySignActivityWidget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NFSLinkageDailySignActivityWidget::addAwardButton(int, int, int, int) */

void __thiscall
NFSLinkageDailySignActivityWidget::addAwardButton
          (NFSLinkageDailySignActivityWidget *this,int param_1,int param_2,int param_3,int param_4)

{
  PVZ2UIButton *pPVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[PLANT_SEVENDAYSLOGIN_AWARD]");
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar1 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar1,0x12f,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x1b0) = pPVar1;
  FUN_05476c50(awStack_78);
  (**(code **)(**(long **)(this + 0x1b0) + 0x198))
            (*(long **)(this + 0x1b0),param_1,param_2,param_3,param_4);
  pPVar1 = *(PVZ2UIButton **)(this + 0x1b0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ba0e68,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06ba1108,3);
  PVZ2UIButton::SetDialogStates(pPVar1,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(**(long **)(this + 0x1b0) + 0x188))(*(long **)(this + 0x1b0),0);
  (**(code **)(**(long **)(this + 0x1b0) + 0x158))(*(long **)(this + 0x1b0),1);
  plVar3 = *(long **)(this + 0x1b0);
  *(undefined1 *)((long)plVar3 + 0x59) = 0;
  pcVar4 = *(code **)(*plVar3 + 800);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  (*pcVar4)(plVar3,uVar2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1b0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NFSLinkageDailySignActivityWidget::~NFSLinkageDailySignActivityWidget() */

void __thiscall
NFSLinkageDailySignActivityWidget::~NFSLinkageDailySignActivityWidget
          (NFSLinkageDailySignActivityWidget *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069ed430;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_069ed100;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Rank_Avatar");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  DailySignActivityWidget::~DailySignActivityWidget((DailySignActivityWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NFSLinkageDailySignActivityWidget::~NFSLinkageDailySignActivityWidget() */

void __thiscall
NFSLinkageDailySignActivityWidget::~NFSLinkageDailySignActivityWidget
          (NFSLinkageDailySignActivityWidget *this)

{
  ~NFSLinkageDailySignActivityWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NFSLinkageDailySignActivityWidget::NFSLinkageDailySignActivityWidget(int, int, bool,
   std::vector<NDLoginRewardBonus, std::allocator<NDLoginRewardBonus> >&) */

void __thiscall
NFSLinkageDailySignActivityWidget::NFSLinkageDailySignActivityWidget
          (NFSLinkageDailySignActivityWidget *this,int param_1,int param_2,bool param_3,
          vector *param_4)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DailySignActivityWidget::DailySignActivityWidget
            ((DailySignActivityWidget *)this,param_1,param_2,param_3,param_4);
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069ed430;
  *(undefined ***)this = &PTR_GetClass_069ed100;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Rank_Avatar");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NFSLinkageDailySignActivityWidget::RequestReward() */

void __thiscall
NFSLinkageDailySignActivityWidget::RequestReward(NFSLinkageDailySignActivityWidget *this)

{
  undefined8 uVar1;
  DNetwork *this_00;
  undefined4 local_70 [2];
  string asStack_68 [8];
  string asStack_60 [8];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_68,"a");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_68);
  local_70[0] = 0x2a82;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_70);
  FUN_05474278(uVar1,asStack_60);
  std::string::~string(asStack_60);
  std::string::~string(asStack_68);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  std::string::string(asStack_68,"V405");
  FUN_04e8e638(afStack_58,this);
  std::string::string(asStack_60,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_68,(map *)amStack_38,30.0,(function *)afStack_58,true,true,asStack_60,0
            );
  std::string::~string(asStack_60);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  std::string::~string(asStack_68);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NFSLinkageDailySignActivityWidget::ButtonDepress(int) */

void __thiscall
NFSLinkageDailySignActivityWidget::ButtonDepress
          (NFSLinkageDailySignActivityWidget *this,int param_1)

{
  if (param_1 != 0x12f) {
    return;
  }
  RequestReward(this);
  return;
}


/* non-virtual thunk to NFSLinkageDailySignActivityWidget::ButtonDepress(int) */

void __thiscall
NFSLinkageDailySignActivityWidget::ButtonDepress
          (NFSLinkageDailySignActivityWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

