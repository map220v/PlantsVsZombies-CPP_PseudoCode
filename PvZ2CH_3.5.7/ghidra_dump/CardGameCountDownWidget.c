// Class: CardGameCountDownWidget


/* CardGameCountDownWidget::~CardGameCountDownWidget() */

void __thiscall CardGameCountDownWidget::~CardGameCountDownWidget(CardGameCountDownWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0665b200;
  *(undefined ***)(this + 0x10) = &PTR__CardGameCountDownWidget_0665b3a0;
  FUN_05476c50(this + 0x168);
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to CardGameCountDownWidget::~CardGameCountDownWidget() */

void __thiscall CardGameCountDownWidget::~CardGameCountDownWidget(CardGameCountDownWidget *this)

{
  ~CardGameCountDownWidget(this + -0x10);
  return;
}


/* CardGameCountDownWidget::~CardGameCountDownWidget() */

void __thiscall CardGameCountDownWidget::~CardGameCountDownWidget(CardGameCountDownWidget *this)

{
  ~CardGameCountDownWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CardGameCountDownWidget::~CardGameCountDownWidget() */

void __thiscall CardGameCountDownWidget::~CardGameCountDownWidget(CardGameCountDownWidget *this)

{
  ~CardGameCountDownWidget(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameCountDownWidget::StaticClassInit() */

void CardGameCountDownWidget::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"CardGameCountDownWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_03565684,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameCountDownWidget::StaticGetClass() */

long * CardGameCountDownWidget::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameCountDownWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameCountDownWidget::GetClass() const */

long * CardGameCountDownWidget::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameCountDownWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameCountDownWidget::CardGameCountDownWidget() */

void __thiscall CardGameCountDownWidget::CardGameCountDownWidget(CardGameCountDownWidget *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0665b200;
  *(undefined ***)(this + 0x10) = &PTR__CardGameCountDownWidget_0665b3a0;
  FUN_05476574(this + 0x168);
  return;
}


/* CardGameCountDownWidget::StaticNew() */

CardGameCountDownWidget * CardGameCountDownWidget::StaticNew(void)

{
  CardGameCountDownWidget *this;
  
  this = ::operator_new(0x170);
  CardGameCountDownWidget(this);
  return this;
}


/* CardGameCountDownWidget::onEnterState_Initializing(WidgetState) */

void __thiscall CardGameCountDownWidget::onEnterState_Initializing(CardGameCountDownWidget *this)

{
  undefined4 uVar1;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  
  nop();
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa68a0);
  uVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  FUN_03563944(this + 0x38,uVar1);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa68a0);
  uVar1 = SalesProgressBar::GetCurrentLevel(this_01);
  FUN_03563950(this + 0x3c,uVar1);
  UIWidget::calculatePosition();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameCountDownWidget::Draw(Sexy::Graphics*) */

void __thiscall CardGameCountDownWidget::Draw(CardGameCountDownWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  undefined8 uVar5;
  long lVar6;
  GraphicsAutoState aGStack_b0 [8];
  wstring awStack_a8 [16];
  Color aCStack_98 [16];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_b0,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa68a0);
  Sexy::Graphics::DrawImage(param_1,pIVar4,0,0);
  iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar1);
  iVar1 = ActiveItem::GetLeftTimes(aAStack_88);
  lVar6 = (long)iVar1;
  if (lVar6 < 1) {
    TodStringTranslate(L"[ACTIVE_CLOSED]");
  }
  else {
    if (lVar6 / 0x15180 != 0) {
      TodStringTranslate(L"[REMAIN_DAYS]");
      TodReplaceNumberString(awStack_a8,L"{DAYS}",(int)(lVar6 / 0x15180));
      FUN_054766c8(this + 0x168,aCStack_98);
      FUN_05476c50(aCStack_98);
      FUN_05476c50(awStack_a8);
      goto LAB_03568c80;
    }
    iVar2 = (int)(lVar6 / 0x3c);
    Sexy::StrFormat(L"%02d:%02d:%02d",aCStack_98,(ulong)(uint)(iVar1 / 0xe10),
                    (ulong)(uint)(iVar2 + (int)((lVar6 / 0x3c) / 0x3c) * -0x3c),
                    (ulong)(uint)(iVar1 + iVar2 * -0x3c));
  }
  FUN_054766c8(this + 0x168,aCStack_98);
  FUN_05476c50(aCStack_98);
LAB_03568c80:
  iVar1 = FUN_03564578(0x3c);
  iVar2 = FUN_03564578(0xfffffff1);
  iVar3 = FUN_03563940(*(undefined4 *)(this + 0x38));
  Sexy::Insets::Insets((Insets *)awStack_a8,iVar1,iVar2,iVar3,iVar1);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color(aCStack_98,1);
  WriteWordInRect(param_1,this + 0x168,(Insets *)awStack_a8,uVar5,aCStack_98,5,1);
  ActiveItem::~ActiveItem(aAStack_88);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to CardGameCountDownWidget::Draw(Sexy::Graphics*) */

void __thiscall CardGameCountDownWidget::Draw(CardGameCountDownWidget *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

