// Class: CheatAdjusterWidget


/* CheatAdjusterWidget::~CheatAdjusterWidget() */

void __thiscall CheatAdjusterWidget::~CheatAdjusterWidget(CheatAdjusterWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06753b50;
  if (*(long *)(this + 0xd8) != 0) {
    *(undefined8 *)(this + 0xd8) = 0;
  }
  if (*(long *)(this + 0xe0) != 0) {
    *(undefined8 *)(this + 0xe0) = 0;
  }
  std::string::~string((string *)(this + 0xf8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* CheatAdjusterWidget::~CheatAdjusterWidget() */

void __thiscall CheatAdjusterWidget::~CheatAdjusterWidget(CheatAdjusterWidget *this)

{
  ~CheatAdjusterWidget(this);
  AK::FreeHook(this);
  return;
}


/* CheatAdjusterWidget::StaticGetClass() */

long * CheatAdjusterWidget::StaticGetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"CheatAdjusterWidget",uVar2,StaticNew);
  return sClass;
}


/* CheatAdjusterWidget::GetClass() const */

long * CheatAdjusterWidget::GetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"CheatAdjusterWidget",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatAdjusterWidget::onCreate(std::string const&, float, Sexy::EditListener*,
   Sexy::ButtonListener*) */

void __thiscall
CheatAdjusterWidget::onCreate
          (CheatAdjusterWidget *this,string *param_1,float param_2,EditListener *param_3,
          ButtonListener *param_4)

{
  int iVar1;
  undefined4 uVar2;
  EditWidget *this_00;
  undefined8 uVar3;
  PVZ2UIButton *pPVar4;
  undefined8 uVar5;
  long lVar6;
  string *extraout_x1;
  code *pcVar7;
  long *plVar8;
  undefined1 auStack_80 [8];
  Sexy aSStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_03c58584(300);
  *(undefined4 *)(this + 0x50) = uVar2;
  uVar2 = FUN_03c58584(0x28);
  *(undefined4 *)(this + 0x54) = uVar2;
  thunk_FUN_05475e00(this + 0xf8,param_1);
  this_00 = ::operator_new(0x180);
  Sexy::EditWidget::EditWidget(this_00,0,param_3);
  lVar6 = *(long *)this_00;
  *(EditWidget **)(this + 0xd8) = this_00;
  pcVar7 = *(code **)(lVar6 + 0x340);
  Sexy::StrFormat("%f",aSStack_78,(double)param_2);
  Sexy::ToSexyString(aSStack_78,extraout_x1);
  (*pcVar7)(this_00,asStack_40,1);
  FUN_05476c50(asStack_40);
  std::string::~string((string *)aSStack_78);
  iVar1 = *(int *)(this + 0x50);
  plVar8 = *(long **)(this + 0xd8);
  uVar2 = FUN_03c58584(0);
  (**(code **)(*plVar8 + 0x198))
            (plVar8,iVar1 / 3,uVar2,(iVar1 - iVar1 / 3) - *(int *)(this + 0x54),
             *(int *)(this + 0x54));
  plVar8 = *(long **)(this + 0xd8);
  pcVar7 = *(code **)(*plVar8 + 0x330);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  (*pcVar7)(plVar8,uVar3,0);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xd8));
  FUN_05478178(aSStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar4 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar4,2,param_4,(wstring *)aSStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0xe0) = pPVar4;
  FUN_05476c50(aSStack_78);
  nop();
  iVar1 = *(int *)(this + 0x54);
  (**(code **)(**(long **)(this + 0xe0) + 0x198))
            (*(long **)(this + 0xe0),*(int *)(this + 0x50) - iVar1,0,iVar1,iVar1);
  std::string::string(asStack_40,"IMAGE_UI_GENERIC_RED_CROSS");
  uVar3 = StringHelper::ToImage(asStack_40,true);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"IMAGE_UI_GENERIC_RED_CROSS");
  uVar5 = StringHelper::ToImage(asStack_40,true);
  std::string::~string(asStack_40);
  nop();
  pPVar4 = *(PVZ2UIButton **)(this + 0xe0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aSStack_78,uVar3,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,uVar5,2);
  PVZ2UIButton::SetDialogStates(pPVar4,(PVZ2UIImage *)aSStack_78,(PVZ2UIImage *)asStack_40);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatAdjusterWidget::getValue() */

void __thiscall CheatAdjusterWidget::getValue(CheatAdjusterWidget *this)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ToString((wstring *)(*(long *)(this + 0xd8) + 0xe8));
  uVar1 = StringHelper::ToFloat(asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatAdjusterWidget::TouchEnded(Sexy::Touch const&) */

void CheatAdjusterWidget::TouchEnded(Touch *param_1)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_10,0,0);
  param_1[0xf0] = (Touch)0x0;
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(param_1 + 0xe8) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatAdjusterWidget::CheatAdjusterWidget() */

void __thiscall CheatAdjusterWidget::CheatAdjusterWidget(CheatAdjusterWidget *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_06753b50;
  Sexy::Point::Point((Point *)(this + 0xe8),0,0);
  this[0xf0] = (CheatAdjusterWidget)0x0;
  std::string::string((string *)(this + 0xf8),"");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CheatAdjusterWidget::StaticNew() */

CheatAdjusterWidget * CheatAdjusterWidget::StaticNew(void)

{
  CheatAdjusterWidget *this;
  
  this = ::operator_new(0x100);
  CheatAdjusterWidget(this);
  return this;
}


/* CheatAdjusterWidget::getNameDrawRect() */

Insets * CheatAdjusterWidget::getNameDrawRect(void)

{
  long in_x0;
  Insets *in_x8;
  
  Sexy::Insets::Insets(in_x8,0,0,*(int *)(in_x0 + 0x50) / 3,*(int *)(in_x0 + 0x54));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatAdjusterWidget::Draw(Sexy::Graphics*) */

void __thiscall CheatAdjusterWidget::Draw(CheatAdjusterWidget *this,Graphics *param_1)

{
  undefined8 uVar1;
  string *extraout_x1;
  GraphicsAutoState aGStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  Sexy::Graphics::SetDrawMode(param_1,0);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  Sexy::Insets::Insets(aIStack_18,0x46,0x46,0x46,0xf0);
  Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
  (**(code **)(*(long *)this + 0x50))(aIStack_18,this);
  Sexy::Graphics::FillRect(param_1,(TRect *)aIStack_18);
  Sexy::ToSexyString((Sexy *)(this + 0xf8),extraout_x1);
  getNameDrawRect();
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  Sexy::Color::Color((Color *)aIStack_18,8);
  WriteWordInRect(param_1,auStack_30,auStack_28,uVar1,aIStack_18,3,0);
  FUN_05476c50(auStack_30);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatAdjusterWidget::TouchBegan(Sexy::Touch const&) */

void __thiscall CheatAdjusterWidget::TouchBegan(CheatAdjusterWidget *this,Touch *param_1)

{
  char cVar1;
  undefined8 local_20;
  TRect<int> aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_20,(TPoint *)(param_1 + 0x10));
  getNameDrawRect();
  cVar1 = Sexy::TRect<int>::Contains(aTStack_18,(TPoint *)&local_20);
  if (cVar1 != '\0') {
    *(undefined8 *)(this + 0xe8) = local_20;
    this[0xf0] = (CheatAdjusterWidget)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatAdjusterWidget::TouchMoved(Sexy::Touch const&) */

void __thiscall CheatAdjusterWidget::TouchMoved(CheatAdjusterWidget *this,Touch *param_1)

{
  int local_18;
  int local_14;
  TPoint aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xf0] != (CheatAdjusterWidget)0x0) {
    Sexy::TPoint<int>::operator-((TPoint<int> *)(param_1 + 0x10),(TPoint *)(this + 0xe8));
    Sexy::Point::Point((Point *)&local_18,aTStack_10);
    if ((local_18 != 0) || (local_14 != 0)) {
      (**(code **)(*(long *)this + 0x1a8))
                (this,local_18 + *(int *)(this + 0x48),local_14 + *(int *)(this + 0x4c));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

