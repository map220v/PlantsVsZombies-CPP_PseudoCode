// Class: CheatUILineAdjuster


/* CheatUILineAdjuster::AllowKey(int, Sexy::KeyCode) */

undefined8 CheatUILineAdjuster::AllowKey(void)

{
  return 1;
}


/* non-virtual thunk to CheatUILineAdjuster::AllowKey(int, Sexy::KeyCode) */

void __thiscall CheatUILineAdjuster::AllowKey(CheatUILineAdjuster *this)

{
  AllowKey(this + -0x50);
  return;
}


/* CheatUILineAdjuster::AllowChar(int, wchar_t) */

undefined1  [16] CheatUILineAdjuster::AllowChar(int param_1,wchar_t param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._12_4_ = 0;
  auVar1._8_4_ = param_2;
  auVar1._0_8_ = 1;
  return auVar1;
}


/* non-virtual thunk to CheatUILineAdjuster::AllowChar(int, wchar_t) */

void __thiscall
CheatUILineAdjuster::AllowChar(CheatUILineAdjuster *this,int param_1,wchar_t param_2)

{
  AllowChar((int)this + -0x50,param_1);
  return;
}


/* CheatUILineAdjuster::AllowText(int, std::wstring const&) */

undefined8 CheatUILineAdjuster::AllowText(int param_1,wstring *param_2)

{
  return 1;
}


/* non-virtual thunk to CheatUILineAdjuster::AllowText(int, std::wstring const&) */

void __thiscall
CheatUILineAdjuster::AllowText(CheatUILineAdjuster *this,int param_1,wstring *param_2)

{
  AllowText((int)this + -0x50,(wstring *)(ulong)(uint)param_1);
  return;
}


/* CheatUILineAdjuster::ButtonDepress(int) */

void __thiscall CheatUILineAdjuster::ButtonDepress(CheatUILineAdjuster *this,int param_1)

{
  if ((param_1 == 2) && (*(long *)(this + 0x60) != 0)) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x60));
    *(undefined8 *)(this + 0x60) = 0;
    return;
  }
  return;
}


/* non-virtual thunk to CheatUILineAdjuster::ButtonDepress(int) */

void __thiscall CheatUILineAdjuster::ButtonDepress(CheatUILineAdjuster *this,int param_1)

{
  ButtonDepress(this + -0x58,param_1);
  return;
}


/* CheatUILineAdjuster::~CheatUILineAdjuster() */

void __thiscall CheatUILineAdjuster::~CheatUILineAdjuster(CheatUILineAdjuster *this)

{
  *(undefined ***)this = &PTR_GetClass_06753e70;
  *(undefined ***)(this + 0x50) = &PTR_EditWidgetText_06753f10;
  *(undefined ***)(this + 0x58) = &PTR_ButtonPress_06753f40;
  CheatUILine::~CheatUILine((CheatUILine *)this);
  return;
}


/* CheatUILineAdjuster::~CheatUILineAdjuster() */

void __thiscall CheatUILineAdjuster::~CheatUILineAdjuster(CheatUILineAdjuster *this)

{
  ~CheatUILineAdjuster(this);
  AK::FreeHook(this);
  return;
}


/* CheatUILineAdjuster::StaticGetClass() */

long * CheatUILineAdjuster::StaticGetClass(void)

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
  uVar2 = CheatUILine::StaticGetClass();
  (*pcVar3)(plVar1,"CheatUILineAdjuster",uVar2,StaticNew);
  return sClass;
}


/* CheatUILineAdjuster::GetClass() const */

long * CheatUILineAdjuster::GetClass(void)

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
  uVar2 = CheatUILine::StaticGetClass();
  (*pcVar3)(plVar1,"CheatUILineAdjuster",uVar2,StaticNew);
  return sClass;
}


/* CheatUILineAdjuster::CheatUILineAdjuster() */

void __thiscall CheatUILineAdjuster::CheatUILineAdjuster(CheatUILineAdjuster *this)

{
  CheatUILine::CheatUILine((CheatUILine *)this);
  Sexy::EditListener::EditListener((EditListener *)(this + 0x50));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x58));
  *(undefined ***)this = &PTR_GetClass_06753e70;
  *(undefined ***)(this + 0x50) = &PTR_EditWidgetText_06753f10;
  *(undefined ***)(this + 0x58) = &PTR_ButtonPress_06753f40;
  return;
}


/* CheatUILineAdjuster::StaticNew() */

CheatUILineAdjuster * CheatUILineAdjuster::StaticNew(void)

{
  CheatUILineAdjuster *this;
  
  this = ::operator_new(0x70);
  CheatUILineAdjuster(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUILineAdjuster::getLabelColor() const */

void CheatUILineAdjuster::getLabelColor(void)

{
  uint uVar1;
  int iVar2;
  CheatUILine *in_x0;
  Insets *in_x8;
  float fVar3;
  float fVar4;
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CheatUILine::getLabelColor(in_x0);
  uVar1 = (uint)DAT_06ad0b20;
  if (((DAT_06ad0b20 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad0b20), iVar2 != 0)) {
    Sexy::Insets::Insets((Insets *)&DAT_06ad0ba0,0xff,0xad,uVar1 & 1,0xff);
    __cxa_guard_release(&DAT_06ad0b20);
  }
  fVar3 = (float)PVZ_RealT();
  fVar4 = *(float *)(in_x0 + 0x68);
  if (0.2 < fVar3 - fVar4) {
    Sexy::Insets::Insets(in_x8,aIStack_38);
  }
  else {
    Sexy::Insets::Insets(aIStack_28,(Insets *)&DAT_06ad0ba0);
    Sexy::Insets::Insets(aIStack_18,aIStack_38);
    Sexy::ColorLerp((Sexy *)((fVar3 - fVar4) * 5.0),aIStack_28,aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUILineAdjuster::onTap(Sexy::Point const&) */

void CheatUILineAdjuster::onTap(Point *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  RtObject *this;
  CheatVariable *pCVar3;
  CheatAdjusterWidget *this_00;
  long *plVar4;
  float fVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtObject *)Sexy::ProfileManager::GetListener((ProfileManager *)param_1);
  pCVar3 = Sexy::RtObject::Cast<CheatVariable>(this);
  plVar4 = *(long **)(param_1 + 0x60);
  if (plVar4 == (long *)0x0) {
    this_00 = ::operator_new(0x100);
    CheatAdjusterWidget::CheatAdjusterWidget(this_00);
    *(CheatAdjusterWidget **)(param_1 + 0x60) = this_00;
    CheatUILine::GetLabel();
    fVar5 = (float)FUN_03c58450(*(undefined4 *)(pCVar3 + 0x58));
    CheatAdjusterWidget::onCreate
              (this_00,asStack_10,fVar5,(EditListener *)(param_1 + 0x50),
               (ButtonListener *)(param_1 + 0x58));
    std::string::~string(asStack_10);
    plVar4 = *(long **)(param_1 + 0x60);
  }
  uVar1 = FUN_03c58584(100);
  uVar2 = FUN_03c58584(0x32);
  (**(code **)(*plVar4 + 0x198))
            (plVar4,uVar1,uVar2,(int)plVar4[10],*(undefined4 *)((long)plVar4 + 0x54));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(param_1 + 0x60));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUILineAdjuster::EditWidgetText(int, std::wstring const&) */

void __thiscall
CheatUILineAdjuster::EditWidgetText(CheatUILineAdjuster *this,int param_1,wstring *param_2)

{
  RtObject *this_00;
  CheatVariable *this_01;
  float fVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)Sexy::ProfileManager::GetListener((ProfileManager *)this);
  this_01 = Sexy::RtObject::Cast<CheatVariable>(this_00);
  Sexy::ToString(param_2);
  fVar1 = (float)StringHelper::ToFloat(asStack_10);
  CheatVariable::SetValue2(this_01,fVar1);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to CheatUILineAdjuster::EditWidgetText(int, std::wstring const&) */

void __thiscall
CheatUILineAdjuster::EditWidgetText(CheatUILineAdjuster *this,int param_1,wstring *param_2)

{
  EditWidgetText(this + -0x50,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUILineAdjuster::onDraw(Sexy::Graphics*) */

void __thiscall CheatUILineAdjuster::onDraw(CheatUILineAdjuster *this,Graphics *param_1)

{
  int iVar1;
  Image *pIVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  GraphicsAutoState aGStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  fVar4 = (float)FUN_03c58574(0x40800000);
  Sexy::Graphics::Translate(param_1,(int)fVar4,(int)fVar4);
  Sexy::LazySingleton<CheatUIPanel>::GetInstancePtr();
  fVar4 = (float)CheatUIPanel::GetDefaultLineHeight();
  fVar5 = (float)FUN_03c58574(DAT_06ad0a88);
  Sexy::Insets::Insets(aIStack_28,0,(int)((fVar4 - fVar5) * 0.5),(int)fVar5,(int)fVar5);
  Sexy::Color::Color((Color *)aIStack_18,1);
  Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
  pIVar2 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad0c08);
  lVar3 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad0c08);
  iVar1 = *(int *)(lVar3 + 0x38);
  lVar3 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad0c08);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar1,*(int *)(lVar3 + 0x3c));
  Sexy::Graphics::DrawImage(param_1,pIVar2,(TRect *)aIStack_28,(TRect *)aIStack_18);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  CheatUILine::onDraw((CheatUILine *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

