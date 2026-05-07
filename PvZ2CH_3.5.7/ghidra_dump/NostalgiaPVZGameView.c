// Class: NostalgiaPVZGameView


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NostalgiaPVZGameView::~NostalgiaPVZGameView() */

void __thiscall NostalgiaPVZGameView::~NostalgiaPVZGameView(NostalgiaPVZGameView *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0676e290;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NostalgiaPVZ");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"AudioAnnversaryMusic");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NostalgiaPVZGameView::~NostalgiaPVZGameView() */

void __thiscall NostalgiaPVZGameView::~NostalgiaPVZGameView(NostalgiaPVZGameView *this)

{
  ~NostalgiaPVZGameView(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NostalgiaPVZGameView::NostalgiaPVZGameView() */

void __thiscall NostalgiaPVZGameView::NostalgiaPVZGameView(NostalgiaPVZGameView *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_0676e290;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NostalgiaPVZ");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"AudioAnnversaryMusic");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NostalgiaPVZGameView::TriggerTutorial() */

void NostalgiaPVZGameView::TriggerTutorial(void)

{
  char cVar1;
  
  cVar1 = PVZ1ModeUtils::IsFromTutorial();
  if (cVar1 == '\0') {
    return;
  }
  PVZ1ModeUtils::SetFromTutorial(false);
  PVZ1ModeUtils::ShowHowToPlay(1);
  return;
}


/* NostalgiaPVZGameView::Draw(Sexy::Graphics*) */

void __thiscall NostalgiaPVZGameView::Draw(NostalgiaPVZGameView *this,Graphics *param_1)

{
  Image *pIVar1;
  
  nop();
  pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad8800);
  Sexy::Graphics::DrawImage(param_1,pIVar1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NostalgiaPVZGameView::InitView() */

void __thiscall NostalgiaPVZGameView::InitView(NostalgiaPVZGameView *this)

{
  NostalgiaMainView *this_00;
  char *__s;
  TGALogMgr *this_01;
  code *__n;
  long lVar1;
  DString aDStack_68 [16];
  TGAPVZ1ModeData aTStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  this_00 = ::operator_new(0x168);
  NostalgiaMainView::NostalgiaMainView(this_00);
  lVar1 = *(long *)this_00;
  *(NostalgiaMainView **)(this + 0xd8) = this_00;
  (**(code **)(lVar1 + 0x198))
            (this_00,(*(int *)(this + 0x50) - (int)((float)*(int *)(this + 0x54) * 1.234)) / 2,0);
  NostalgiaMainView::InitView(*(NostalgiaMainView **)(this + 0xd8));
  __n = *(code **)(*(long *)this + 0x60);
  (*__n)(this,*(undefined8 *)(this + 0xd8));
  TGAPVZ1ModeData::TGAPVZ1ModeData(aTStack_58);
  DString::DString(aDStack_68,1);
  __s = (char *)DString::c_str(aDStack_68);
  std::string::append((string *)aTStack_58,__s,(size_t)__n);
  DString::~DString(aDStack_68);
  this_01 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogPVZ1Mode(this_01,aTStack_58);
  TGAPVZ1ModeData::~TGAPVZ1ModeData(aTStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

