// Class: DaveClubActivityWidget


/* DaveClubActivityWidget::Update() */

void __thiscall DaveClubActivityWidget::Update(DaveClubActivityWidget *this)

{
  long *plVar1;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if ((this[0x138] == (DaveClubActivityWidget)0x0) &&
     (plVar1 = *(long **)(this + 0x110), *(char *)((long)plVar1 + 0x6e) == '\0')) {
    (**(code **)(*plVar1 + 0x188))(plVar1,1);
    return;
  }
  return;
}


/* DaveClubActivityWidget::~DaveClubActivityWidget() */

void __thiscall DaveClubActivityWidget::~DaveClubActivityWidget(DaveClubActivityWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066d3c30;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066d3f58;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0x128);
  FUN_05476c50(this + 0x120);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* DaveClubActivityWidget::~DaveClubActivityWidget() */

void __thiscall DaveClubActivityWidget::~DaveClubActivityWidget(DaveClubActivityWidget *this)

{
  ~DaveClubActivityWidget(this);
  AK::FreeHook(this);
  return;
}


/* DaveClubActivityWidget::DaveClubActivityWidget(int, bool) */

void __thiscall
DaveClubActivityWidget::DaveClubActivityWidget
          (DaveClubActivityWidget *this,int param_1,bool param_2)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066d3c30;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066d3f58;
  Sexy::Insets::Insets((Insets *)(this + 0xe0));
  Sexy::Insets::Insets((Insets *)(this + 0xf0));
  Sexy::Insets::Insets((Insets *)(this + 0x100));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x118));
  FUN_05476574(this + 0x120);
  FUN_05476574(this + 0x128);
  *(int *)(this + 0x134) = param_1;
  this[0x130] = (DaveClubActivityWidget)0x0;
  this[0x138] = (DaveClubActivityWidget)param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveClubActivityWidget::Draw(Sexy::Graphics*) */

void __thiscall DaveClubActivityWidget::Draw(DaveClubActivityWidget *this,Graphics *param_1)

{
  ResourceInfo *pRVar1;
  undefined8 uVar2;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x118));
  Sexy::Graphics::DrawImage(param_1,(Image *)pRVar1,0,0);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
  Sexy::Color::Color(aCStack_18,0);
  WriteWordInRect(param_1,this + 0x120,this + 0xf0,uVar2,aCStack_18,0,1);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,this + 0x128,this + 0x100,uVar2,aCStack_18,0,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveClubActivityWidget::ButtonDepress(int) */

void __thiscall DaveClubActivityWidget::ButtonDepress(DaveClubActivityWidget *this,int param_1)

{
  if (param_1 == 0x299b) {
    UISingletonDialog<DaveClubUI>::CloseDialog();
    LawnApp::ShowStoneLottery(SUB81(gLawnApp,0));
    return;
  }
  if (param_1 == 0x299d) {
    Sexy::LazySingleton<PlantBundleMgr>::GetInstance();
    PlantBundleMgr::requestNetwork();
    return;
  }
  return;
}


/* non-virtual thunk to DaveClubActivityWidget::ButtonDepress(int) */

void __thiscall DaveClubActivityWidget::ButtonDepress(DaveClubActivityWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveClubActivityWidget::Init() */

void __thiscall DaveClubActivityWidget::Init(DaveClubActivityWidget *this)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  PVZ2UIButton *pPVar8;
  string *extraout_x1;
  string *extraout_x1_00;
  long lVar9;
  code *pcVar10;
  Sexy aSStack_80 [8];
  string asStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x118);
  (**(code **)(*(long *)this + 0x80))(this,1,1);
  Sexy::StrFormat("IMAGE_UI_PLANTADVENTURE_BG_STONELOTTERY",asStack_78);
  GetImageByNameWithUIFallback(asStack_78);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  std::string::~string(asStack_78);
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)this_00);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  Sexy::StrFormat("[DAVECLUB_ACTIVITY_DES_%d]",aSStack_80,(ulong)*(uint *)(this + 0x134));
  Sexy::UTF8StringToWString(aSStack_80,extraout_x1);
  pwVar7 = (wchar_t *)FUN_054766ec(asStack_78);
  TodStringTranslate(pwVar7);
  FUN_054766c8(this + 0x120,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  FUN_05476c50(asStack_78);
  Sexy::StrFormat("[DAVECLUB_ACTIVITY_%d]",(RtWeakPtr<Sexy::ResourceInfo> *)&local_40,
                  (ulong)*(uint *)(this + 0x134));
  FUN_05474278(aSStack_80,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  std::string::~string((string *)&local_40);
  Sexy::UTF8StringToWString(aSStack_80,extraout_x1_00);
  pwVar7 = (wchar_t *)FUN_054766ec(asStack_78);
  TodStringTranslate(pwVar7);
  FUN_054766c8(this + 0x128,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  FUN_05476c50(asStack_78);
  this_01 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abccc0);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  iVar2 = iVar2 * 5;
  iVar4 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar4 = iVar2;
  }
  this_02 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abccc0);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_02);
  iVar6 = (iVar2 << 2) / 5;
  iVar3 = FUN_03960734(5);
  iVar2 = *(int *)(this + 0x54);
  iVar5 = *(int *)(this + 0x50);
  TodStringTranslate(L"[PLANT_DAVECLUB_PARTIN]");
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar8 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar8,*(int *)(this + 0x134),(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,
             (Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x110) = pPVar8;
  FUN_05476c50(asStack_78);
  (**(code **)(**(long **)(this + 0x110) + 0x198))
            (*(long **)(this + 0x110),(iVar5 + iVar3 * -2) - (iVar4 >> 2),iVar2 / 2 - iVar6 / 2,
             iVar4 >> 2,iVar6);
  pPVar8 = *(PVZ2UIButton **)(this + 0x110);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06abccc0,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06abcc50,2);
  PVZ2UIButton::SetDialogStates(pPVar8,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x110) + 0x188))(*(long **)(this + 0x110),0);
  (**(code **)(**(long **)(this + 0x110) + 0x158))(*(long **)(this + 0x110),1);
  lVar9 = *(long *)(this + 0x110);
  pcVar10 = *(code **)(*(long *)this + 0x60);
  *(undefined1 *)(lVar9 + 0x59) = 0;
  (*pcVar10)(this,lVar9);
  this[0x130] = (DaveClubActivityWidget)0x1;
  iVar4 = FUN_03960734(10);
  iVar2 = FUN_03960734(0x37);
  iVar5 = FUN_03960734(0x15e);
  iVar6 = FUN_03960734(0x23);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar4,iVar2,(int)((double)iVar5 * 1.22),(int)((double)iVar6 * 2.2))
  ;
  *(undefined8 *)(this + 0xf0) = local_40;
  *(undefined8 *)(this + 0xf8) = uStack_38;
  iVar4 = FUN_03960734(10);
  iVar2 = FUN_03960734(0x14);
  iVar5 = FUN_03960734(0x15e);
  iVar6 = FUN_03960734(0x23);
  Sexy::Insets::Insets((Insets *)&local_40,iVar4,iVar2,iVar5,(int)((double)iVar6 * 0.8));
  *(undefined8 *)(this + 0x100) = local_40;
  *(undefined8 *)(this + 0x108) = uStack_38;
  std::string::~string((string *)aSStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

