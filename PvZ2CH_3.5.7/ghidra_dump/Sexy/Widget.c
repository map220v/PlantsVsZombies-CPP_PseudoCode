// Class: Sexy::Widget


/* Sexy::Widget::ShouldReceiveAllOverTouchEvents() */

Widget __thiscall Sexy::Widget::ShouldReceiveAllOverTouchEvents(Widget *this)

{
  return this[0xd0];
}


/* Sexy::Widget::DrawOverlay(Sexy::Graphics*, int) */

void Sexy::Widget::DrawOverlay(Graphics *param_1,int param_2)

{
  (**(code **)(*(long *)param_1 + 0x1c0))(param_1,param_2);
  return;
}


/* Sexy::Widget::Move(int, int) */

void Sexy::Widget::Move(int param_1,int param_2)

{
  long *plVar1;
  undefined8 in_x2;
  
  plVar1 = (long *)(ulong)(uint)param_1;
  (**(code **)(*plVar1 + 0x198))
            (plVar1,param_2,in_x2,(int)plVar1[10],*(undefined4 *)((long)plVar1 + 0x54));
  return;
}


/* Sexy::Widget::Translate(int, int) */

void __thiscall Sexy::Widget::Translate(Widget *this,int param_1,int param_2)

{
  (**(code **)(*(long *)this + 0x198))
            (this,param_1 + *(int *)(this + 0x48),param_2 + *(int *)(this + 0x4c),
             *(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  return;
}


/* Sexy::Widget::WantsFocus() */

Widget __thiscall Sexy::Widget::WantsFocus(Widget *this)

{
  return this[0xa1];
}


/* Sexy::Widget::GotFocus() */

void __thiscall Sexy::Widget::GotFocus(Widget *this)

{
  this[0x6f] = (Widget)0x1;
  return;
}


/* Sexy::Widget::LostFocus() */

void __thiscall Sexy::Widget::LostFocus(Widget *this)

{
  this[0x6f] = (Widget)0x0;
  return;
}


/* Sexy::Widget::KeyDown(Sexy::KeyCode) */

void __thiscall Sexy::Widget::KeyDown(Widget *this,int param_2)

{
  long lVar1;
  
  if (param_2 == 9) {
    if ((char)(*(long **)(this + 0x18))[0x2c] == '\0') {
      lVar1 = *(long *)(this + 0xb0);
    }
    else {
      lVar1 = *(long *)(this + 0xa8);
    }
    if (lVar1 != 0) {
      (**(code **)(**(long **)(this + 0x18) + 0x98))();
      return;
    }
  }
  return;
}


/* Sexy::Widget::MouseDown(int, int, int) */

void __thiscall Sexy::Widget::MouseDown(Widget *this,int param_1,int param_2,int param_3)

{
  if (param_3 == 3) {
    (**(code **)(*(long *)this + 0x218))(this,param_1,param_2,2,1);
  }
  else {
    if (param_3 < 0) {
      (**(code **)(*(long *)this + 0x218))();
      return;
    }
    (**(code **)(*(long *)this + 0x218))();
  }
  return;
}


/* Sexy::Widget::MouseUp(int, int, int) */

void __thiscall Sexy::Widget::MouseUp(Widget *this,int param_1,int param_2,int param_3)

{
  long lVar1;
  
  (**(code **)(*(long *)this + 0x220))(this,param_1,param_2);
  lVar1 = *(long *)this;
  if (param_3 == 3) {
    (**(code **)(lVar1 + 0x230))(this,param_1,param_2,2,1);
  }
  else {
    if (param_3 < 0) {
      (**(code **)(lVar1 + 0x230))(this,param_1,param_2,1,-param_3);
      return;
    }
    (**(code **)(lVar1 + 0x230))(this,param_1,param_2,0,param_3);
  }
  return;
}


/* Sexy::Widget::GetNumDigits(int) */

int __thiscall Sexy::Widget::GetNumDigits(Widget *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if (9 < param_1) {
    iVar2 = 10;
    do {
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 * 10;
    } while (iVar2 <= param_1);
  }
  return iVar1;
}


/* Sexy::Widget::Contains(int, int) */

bool __thiscall Sexy::Widget::Contains(Widget *this,int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (((*(int *)(this + 0x48) <= param_1) &&
      (param_1 < *(int *)(this + 0x48) + *(int *)(this + 0x50))) &&
     (*(int *)(this + 0x4c) <= param_2)) {
    bVar1 = param_2 < *(int *)(this + 0x4c) + *(int *)(this + 0x54);
  }
  return bVar1;
}


/* Sexy::Widget::TouchBegan(Sexy::Touch const&) */

void __thiscall Sexy::Widget::TouchBegan(Widget *this,Touch *param_1)

{
  (**(code **)(*(long *)this + 0x210))
            (this,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),1);
  return;
}


/* Sexy::Widget::TouchMoved(Sexy::Touch const&) */

void __thiscall Sexy::Widget::TouchMoved(Widget *this,Touch *param_1)

{
  (**(code **)(*(long *)this + 0x238))
            (this,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  return;
}


/* Sexy::Widget::TouchEnded(Sexy::Touch const&) */

void __thiscall Sexy::Widget::TouchEnded(Widget *this,Touch *param_1)

{
  (**(code **)(*(long *)this + 0x228))
            (this,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),1);
  return;
}


/* Sexy::Widget::SetVisible(bool) */

void __thiscall Sexy::Widget::SetVisible(Widget *this,bool param_1)

{
  WidgetManager *this_00;
  
  if (this[0x6c] != (Widget)param_1) {
    this[0x6c] = (Widget)param_1;
    if (param_1) {
      (**(code **)(*(long *)this + 0xd8))();
      this_00 = *(WidgetManager **)(this + 0x18);
    }
    else {
      (**(code **)(*(long *)this + 0xe0))();
      this_00 = *(WidgetManager **)(this + 0x18);
    }
    if (this_00 != (WidgetManager *)0x0) {
      WidgetManager::RehupMouse(this_00);
      return;
    }
  }
  return;
}


/* Sexy::Widget::Resize(int, int, int, int) */

void __thiscall Sexy::Widget::Resize(Widget *this,int param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  
  if ((((*(int *)(this + 0x48) != param_1) || (*(int *)(this + 0x4c) != param_2)) ||
      (*(int *)(this + 0x50) != param_3)) || (*(int *)(this + 0x54) != param_4)) {
    (**(code **)(*(long *)this + 0xe0))();
    *(int *)(this + 0x48) = param_1;
    *(int *)(this + 0x4c) = param_2;
    pcVar1 = *(code **)(*(long *)this + 0xd8);
    *(int *)(this + 0x50) = param_3;
    *(int *)(this + 0x54) = param_4;
    (*pcVar1)(this);
    if (*(WidgetManager **)(this + 0x18) != (WidgetManager *)0x0) {
      WidgetManager::RehupMouse(*(WidgetManager **)(this + 0x18));
      return;
    }
  }
  return;
}


/* Sexy::Widget::SetDisabled(bool) */

void __thiscall Sexy::Widget::SetDisabled(Widget *this,bool param_1)

{
  char cVar1;
  long *plVar2;
  WidgetManager *this_00;
  long lVar3;
  
  if (this[0x6e] != (Widget)param_1) {
    this[0x6e] = (Widget)param_1;
    if (param_1) {
      plVar2 = *(long **)(this + 0x18);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x78))(plVar2,this);
      }
      (**(code **)(*(long *)this + 0xd8))(this);
    }
    else {
      (**(code **)(*(long *)this + 0xd8))();
      lVar3 = *(long *)(this + 0x18);
      if ((lVar3 != 0) &&
         (cVar1 = (**(code **)(*(long *)this + 0x300))
                            (this,*(undefined4 *)(lVar3 + 0x13c),*(undefined4 *)(lVar3 + 0x140)),
         cVar1 != '\0')) {
        this_00 = *(WidgetManager **)(this + 0x18);
        WidgetManager::MousePosition(this_00,*(int *)(this_00 + 0x13c),*(int *)(this_00 + 0x140));
        return;
      }
    }
  }
  return;
}


/* Sexy::Widget::ShowFinger(bool) */

void __thiscall Sexy::Widget::ShowFinger(Widget *this,bool param_1)

{
  int iVar1;
  
  if (*(long *)(this + 0x18) == 0) {
    return;
  }
  iVar1 = (int)*(undefined8 *)(*(long *)(this + 0x18) + 0x80);
  if (!param_1) {
    SexyAppBase::SetCursor(iVar1);
    return;
  }
  SexyAppBase::SetCursor(iVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Widget::WriteCenteredLine(Sexy::Graphics*, Sexy::PrimeTypeface*, Sexy::Color, int,
   std::wstring const&) */

void __thiscall
Sexy::Widget::WriteCenteredLine
          (Widget *this,undefined8 param_1,undefined8 param_2,undefined8 param_4,int param_5,
          undefined8 param_6)

{
  int iVar1;
  undefined1 auStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  iVar1 = *(int *)(this + 0x50);
  local_8 = ___stack_chk_guard;
  FUN_05477b24(auStack_20,param_6);
  Color::Color(aCStack_18,0xffffffff);
  PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)0x0,(float)param_5,(float)iVar1,param_2,param_1,auStack_20,1,
             aCStack_18,0);
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Widget::WriteCenteredLine(Sexy::Graphics*, Sexy::PrimeTypeface*, int, std::wstring const&,
   Sexy::Color, Sexy::Color, Sexy::Point const&) */

void __thiscall
Sexy::Widget::WriteCenteredLine
          (Widget *this,undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
          Insets *param_6,Insets *param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  iVar1 = param_8[1];
  iVar2 = *param_8;
  iVar3 = *(int *)(this + 0x50);
  local_8 = ___stack_chk_guard;
  FUN_05477b24(auStack_20,param_4);
  Insets::Insets(aIStack_18,param_7);
  PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)iVar2,(float)(param_3 + iVar1),(float)iVar3,param_2,param_1,
             auStack_20,1,aIStack_18,0);
  FUN_05476c50(auStack_20);
  iVar1 = *(int *)(this + 0x50);
  FUN_05477b24(auStack_20,param_4);
  Insets::Insets(aIStack_18,param_6);
  PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)0x0,(float)param_3,(float)iVar1,param_2,param_1,auStack_20,1,
             aIStack_18,0);
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Widget::GetWordWrappedHeight(Sexy::Graphics*, Sexy::PrimeTypeface*, int, std::wstring
   const&, int) */

void Sexy::Widget::GetWordWrappedHeight
               (Graphics *param_1,PrimeTypeface *param_2,int param_3,wstring *param_4,int param_5)

{
  undefined1 auStack_18 [4];
  undefined4 local_14;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05477b24(auStack_10,param_5);
  PrimeTypeface::SizeString_Paragraph((float)(int)param_4,param_3,auStack_10,auStack_18,&local_14);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_14);
}


/* Sexy::Widget::WriteCenteredLine(Sexy::Graphics*, Sexy::Color, int, std::wstring const&) */

undefined8
Sexy::Widget::WriteCenteredLine
          (undefined8 param_1_00,long *param_1,Graphics *param_3,Color *param_4,undefined4 param_5,
          undefined8 param_6)

{
  Graphics::SetColor(param_3,param_4);
  (**(code **)(*param_1 + 0x2b8))(param_1_00,param_1,param_3,param_5,param_6);
  return param_1_00;
}


/* Sexy::Widget::WriteString(Sexy::Graphics*, std::wstring const&, int, int, int, int, bool, int,
   int) */

void __thiscall
Sexy::Widget::WriteString
          (Widget *this,Graphics *param_1,wstring *param_2,int param_3,int param_4,int param_5,
          int param_6,bool param_7,int param_8,int param_9)

{
  Graphics GVar1;
  
  GVar1 = param_1[0x7e];
  param_1[0x7e] = mWriteColoredString;
  Graphics::WriteString(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,-1);
  param_1[0x7e] = GVar1;
  return;
}


/* Sexy::Widget::WriteWordWrapped(Sexy::Graphics*, Sexy::TRect<int> const&, std::wstring const&,
   int, int) */

void __thiscall
Sexy::Widget::WriteWordWrapped
          (Widget *this,Graphics *param_1,TRect *param_2,wstring *param_3,int param_4,int param_5)

{
  Graphics GVar1;
  
  GVar1 = param_1[0x7e];
  param_1[0x7e] = mWriteColoredString;
  Graphics::WriteWordWrapped
            (param_1,param_2,param_3,param_4,param_5,(int *)0x0,-1,(int *)0x0,(int *)0x0,true);
  param_1[0x7e] = GVar1;
  return;
}


/* Sexy::Widget::WriteWordWrapped(Sexy::Graphics*, Sexy::Color, Sexy::TRect<int> const&,
   std::wstring const&, int, int) */

void __thiscall
Sexy::Widget::WriteWordWrapped
          (undefined8 param_1_00,Graphics *param_1,Color *param_3,TRect *param_4,wstring *param_5,
          int param_6,int param_7)

{
  Graphics::SetColor(param_1,param_3);
  Graphics::WriteWordWrapped
            (param_1,param_4,param_5,param_6,param_7,(int *)0x0,-1,(int *)0x0,(int *)0x0,true);
  return;
}


/* Sexy::Widget::GetWordWrappedHeight(Sexy::Graphics*, int, std::wstring const&, int) */

void __thiscall
Sexy::Widget::GetWordWrappedHeight
          (Widget *this,Graphics *param_1,int param_2,wstring *param_3,int param_4)

{
  Graphics::GetWordWrappedHeight(param_1,param_2,param_3,param_4,(int *)0x0,(int *)0x0);
  return;
}


/* Sexy::Widget::WriteNumberFromStrip(Sexy::Graphics*, int, int, int, Sexy::Image*, int) */

void __thiscall
Sexy::Widget::WriteNumberFromStrip
          (Widget *this,Graphics *param_1,int param_2,int param_3,int param_4,Image *param_5,
          int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 1;
  iVar3 = 10;
  if (9 < param_2) {
    do {
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 * 10;
    } while (iVar3 <= param_2);
  }
  iVar4 = 0;
  iVar1 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_5);
  iVar1 = iVar1 / 10;
  do {
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 / 10;
    Graphics::PushState(param_1);
    iVar2 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_5);
    Graphics::ClipRect(param_1,param_3,param_4,iVar1,iVar2);
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = param_2 / iVar3;
    }
    iVar2 = param_3 - (iVar2 % 10) * iVar1;
    param_3 = param_3 + iVar1 + param_6;
    Graphics::DrawImage(param_1,param_5,iVar2,param_4);
    Graphics::PopState(param_1);
  } while (iVar4 != iVar5);
  return;
}


/* Sexy::Widget::GetColor(int) */

undefined * __thiscall Sexy::Widget::GetColor(Widget *this,int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (((DAT_06bbecc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06bbecc8), iVar1 != 0)) {
    Color::Color((Color *)&DAT_06bbecd0);
    __cxa_guard_release(&DAT_06bbecc8);
  }
  uVar3 = *(undefined8 *)(this + 0x78);
  iVar1 = FUN_052c008c(uVar3,*(undefined8 *)(this + 0x80));
  if (param_1 < iVar1) {
    puVar2 = (undefined *)FUN_052c0098(uVar3,(long)param_1);
    return puVar2;
  }
  return &DAT_06bbecd0;
}


/* Sexy::Widget::GetColor(int, Sexy::Color const&) */

void Sexy::Widget::GetColor(int param_1,Color *param_2)

{
  int iVar1;
  Insets *pIVar2;
  Insets *in_x2;
  Insets *in_x8;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)((ulong)(uint)param_1 + 0x78);
  iVar1 = FUN_052c008c(uVar3,*(undefined8 *)((ulong)(uint)param_1 + 0x80));
  if (iVar1 <= (int)param_2) {
    Insets::Insets(in_x8,in_x2);
    return;
  }
  pIVar2 = (Insets *)FUN_052c0098(uVar3,(long)(int)param_2);
  Insets::Insets(in_x8,pIVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Widget::StaticClassInit() */

void Sexy::Widget::StaticClassInit(void)

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
    std::string::string(asStack_10,"Widget");
    (*pcVar2)(plVar1,asStack_10,FUN_052c0350,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Widget::StaticGetClass() */

long * Sexy::Widget::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = WidgetContainer::StaticGetClass();
  (*pcVar3)(plVar1,"Widget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::Widget::GetClass() const */

long * Sexy::Widget::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = WidgetContainer::StaticGetClass();
  (*pcVar3)(plVar1,"Widget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Widget::WriteString(Sexy::Graphics*, Sexy::PrimeTypeface*, Sexy::Color, std::wstring
   const&, int, int, int, int, bool, int, int) */

void Sexy::Widget::WriteString
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,Insets *param_4,
               undefined8 param_5,int param_6,int param_7,int param_8,int param_9)

{
  undefined4 uVar1;
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = ConvertTheJustificationToEAText(param_9);
  FUN_05477b24(auStack_20,param_5);
  Insets::Insets(aIStack_18,param_4);
  PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)param_6,(float)param_7,(float)param_8,param_3,param_2,
             auStack_20,uVar1,aIStack_18,0);
  FUN_05476c50(auStack_20);
  FUN_05477b24(aIStack_18,param_5);
  uVar1 = PrimeTypeface::StringWidth(param_3,aIStack_18);
  FUN_05476c50(aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Widget::WriteWordWrapped(Sexy::Graphics*, Sexy::PrimeTypeface*, Sexy::Color,
   Sexy::TRect<int> const&, std::wstring const&, int, int) */

void __thiscall
Sexy::Widget::WriteWordWrapped
          (undefined8 param_1_00,undefined8 param_1,undefined8 param_2,Insets *param_4,int *param_5,
          undefined8 param_6,undefined8 param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_24 [4];
  undefined4 local_20 [2];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = ConvertTheJustificationToEAText(param_8);
  iVar1 = *param_5;
  iVar2 = param_5[1];
  iVar3 = param_5[2];
  iVar4 = param_5[3];
  FUN_05477b24(local_20,param_6);
  Insets::Insets(aIStack_18,param_4);
  PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)iVar1,(float)iVar2,(float)iVar3,(float)iVar4,param_2,param_1,
             local_20,uVar5,0,aIStack_18,0);
  FUN_05476c50(local_20);
  FUN_05477b24(aIStack_18,param_6);
  PrimeTypeface::SizeString_Paragraph(0,param_2,aIStack_18,auStack_24,local_20);
  FUN_05476c50(aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_20[0]);
}


/* Sexy::Widget::DeferOverlay(int) */

void __thiscall Sexy::Widget::DeferOverlay(Widget *this,int param_1)

{
  WidgetManager::DeferOverlay(*(WidgetManager **)(this + 0x18),this,param_1);
  return;
}


/* Sexy::Widget::Layout(int, Sexy::Widget*, int, int, int, int) */

void __thiscall
Sexy::Widget::Layout
          (Widget *this,int param_1,Widget *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  iVar3 = FUN_052c0074(*(undefined4 *)(param_2 + 0x48));
  iVar4 = FUN_052c0078(*(undefined4 *)(param_2 + 0x4c));
  if (*(Widget **)(this + 0x20) == param_2) {
    iVar4 = 0;
    iVar3 = 0;
  }
  iVar5 = FUN_052c007c(*(undefined4 *)(param_2 + 0x50));
  iVar1 = iVar3 + iVar5;
  iVar6 = FUN_052c0080(*(undefined4 *)(param_2 + 0x54));
  iVar2 = iVar4 + iVar6;
  iVar7 = FUN_052c0074(*(undefined4 *)(this + 0x48));
  iVar8 = FUN_052c0078(*(undefined4 *)(this + 0x4c));
  iVar9 = FUN_052c007c(*(undefined4 *)(this + 0x50));
  iVar10 = FUN_052c0080(*(undefined4 *)(this + 0x54));
  uVar11 = 1;
joined_r0x052c078c:
  do {
    if ((uVar11 & param_1) != 0) {
      if (uVar11 == 0x800) {
        uVar11 = 0x1000;
        iVar7 = (iVar3 - iVar9) + param_3;
        goto joined_r0x052c078c;
      }
      if ((int)uVar11 < 0x801) {
        if (uVar11 == 0x40) {
          uVar11 = 0x80;
          iVar9 = param_5;
          goto joined_r0x052c078c;
        }
        if ((int)uVar11 < 0x41) {
          if (uVar11 == 2) {
            uVar11 = 4;
            iVar10 = iVar6 + param_6;
            goto joined_r0x052c078c;
          }
          if ((int)uVar11 < 3) {
            if (uVar11 == 1) {
              uVar11 = 2;
              iVar9 = iVar5 + param_5;
              goto joined_r0x052c078c;
            }
          }
          else {
            if (uVar11 == 0x10) {
              uVar11 = 0x20;
              iVar7 = param_3;
              goto joined_r0x052c078c;
            }
            if (uVar11 == 0x20) {
              uVar11 = 0x40;
              iVar8 = param_4;
              goto joined_r0x052c078c;
            }
          }
        }
        else {
          if (uVar11 == 0x100) {
            uVar11 = 0x200;
            iVar8 = (iVar4 - iVar10) + param_4;
            goto joined_r0x052c078c;
          }
          if ((int)uVar11 < 0x101) {
            if (uVar11 == 0x80) {
              uVar11 = 0x100;
              iVar10 = param_6;
              goto joined_r0x052c078c;
            }
          }
          else {
            if (uVar11 == 0x200) {
              uVar11 = 0x400;
              iVar8 = iVar2 + param_4;
              goto joined_r0x052c078c;
            }
            if (uVar11 == 0x400) {
              uVar11 = 0x800;
              iVar7 = iVar1 + param_3;
              goto joined_r0x052c078c;
            }
          }
        }
      }
      else {
        if (uVar11 == 0x10000) {
          uVar11 = 0x20000;
          iVar9 = (iVar1 - iVar7) + param_5;
          goto joined_r0x052c078c;
        }
        if ((int)uVar11 < 0x10001) {
          if (uVar11 == 0x2000) {
            uVar11 = 0x4000;
            iVar7 = (iVar1 - iVar9) + param_3;
            goto joined_r0x052c078c;
          }
          if ((int)uVar11 < 0x2001) {
            if (uVar11 == 0x1000) {
              uVar11 = 0x2000;
              iVar7 = iVar3 + param_3;
              goto joined_r0x052c078c;
            }
          }
          else {
            if (uVar11 == 0x4000) {
              uVar11 = 0x8000;
              iVar8 = iVar4 + param_4;
              goto joined_r0x052c078c;
            }
            if (uVar11 == 0x8000) {
              uVar11 = 0x10000;
              iVar8 = (iVar2 - iVar10) + param_4;
              goto joined_r0x052c078c;
            }
          }
        }
        else {
          if (uVar11 == 0x80000) {
            uVar11 = 0x100000;
            iVar10 = (iVar2 - iVar8) + param_6;
            goto joined_r0x052c078c;
          }
          if ((int)uVar11 < 0x80001) {
            if (uVar11 == 0x20000) {
              uVar11 = 0x40000;
              iVar9 = (iVar3 - iVar7) + param_5;
              goto joined_r0x052c078c;
            }
            if (uVar11 == 0x40000) {
              uVar11 = 0x80000;
              iVar10 = (iVar4 - iVar8) + param_6;
              goto joined_r0x052c078c;
            }
          }
          else {
            if (uVar11 == 0x100000) {
              uVar11 = 0x200000;
              iVar7 = iVar3 + (iVar5 - iVar9) / 2 + param_3;
              goto joined_r0x052c078c;
            }
            if (uVar11 == 0x200000) {
              iVar8 = iVar4 + (iVar6 - iVar10) / 2 + param_4;
              goto LAB_052c07e0;
            }
          }
        }
      }
    }
    uVar11 = uVar11 * 2;
    if (0x3fffff < (int)uVar11) {
LAB_052c07e0:
      (**(code **)(*(long *)this + 0x198))(this,iVar7,iVar8,iVar9);
      return;
    }
  } while( true );
}


/* Sexy::Widget::WriteCenteredLine(Sexy::Graphics*, int, std::wstring const&) */

void Sexy::Widget::WriteCenteredLine(Graphics *param_1,int param_2,wstring *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  wstring *in_x3;
  Insets *in_x8;
  
  plVar5 = (long *)Effect_Barrage::GetViceBarrage((Effect_Barrage *)(ulong)(uint)param_2);
  iVar2 = (**(code **)(*plVar5 + 0x80))();
  iVar1 = (*(int *)(param_1 + 0x50) - iVar2) / 2;
  Graphics::DrawString((Graphics *)(ulong)(uint)param_2,in_x3,iVar1,(int)param_3);
  iVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
  iVar4 = (**(code **)(*plVar5 + 0x68))(plVar5);
  Insets::Insets(in_x8,iVar1,(int)param_3 - iVar3,iVar2,iVar4);
  return;
}


/* Sexy::Widget::GetInsetRect() */

Insets * Sexy::Widget::GetInsetRect(void)

{
  long in_x0;
  Insets *in_x8;
  
  Insets::Insets(in_x8,*(int *)(in_x0 + 0x90) + *(int *)(in_x0 + 0x48),
                 *(int *)(in_x0 + 0x94) + *(int *)(in_x0 + 0x4c),
                 (*(int *)(in_x0 + 0x50) - *(int *)(in_x0 + 0x90)) - *(int *)(in_x0 + 0x98),
                 (*(int *)(in_x0 + 0x54) - *(int *)(in_x0 + 0x94)) - *(int *)(in_x0 + 0x9c));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Widget::SetColors(int (*) [3], int) */

void __thiscall Sexy::Widget::SetColors(Widget *this,int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::Color,std::allocator<Sexy::Color>>::clear
            ((vector<Sexy::Color,std::allocator<Sexy::Color>> *)(this + 0x78));
  iVar2 = 0;
  if (0 < param_2) {
    do {
      pcVar3 = *(code **)(*(long *)this + 0x170);
      Color::Color(aCStack_18,*param_1,param_1[1],param_1[2]);
      iVar1 = iVar2 + 1;
      (*pcVar3)(this,iVar2,aCStack_18);
      param_1 = param_1 + 3;
      iVar2 = iVar1;
    } while (iVar1 != param_2);
  }
  (**(code **)(*(long *)this + 0xd8))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Widget::SetColors(int (*) [4], int) */

void __thiscall Sexy::Widget::SetColors(Widget *this,int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::Color,std::allocator<Sexy::Color>>::clear
            ((vector<Sexy::Color,std::allocator<Sexy::Color>> *)(this + 0x78));
  iVar2 = 0;
  if (0 < param_2) {
    do {
      pcVar3 = *(code **)(*(long *)this + 0x170);
      Insets::Insets(aIStack_18,*param_1,param_1[1],param_1[2],param_1[3]);
      iVar1 = iVar2 + 1;
      (*pcVar3)(this,iVar2,aIStack_18);
      param_1 = param_1 + 4;
      iVar2 = iVar1;
    } while (iVar1 != param_2);
  }
  (**(code **)(*(long *)this + 0xd8))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Widget::WriteCenteredLine(Sexy::Graphics*, int, std::wstring const&, Sexy::Color,
   Sexy::Color, Sexy::Point const&) */

void Sexy::Widget::WriteCenteredLine
               (Insets *param_1_00,long param_1,Effect_Barrage *param_3,int param_4,wstring *param_5
               ,Color *param_6,Color *param_7,uint *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  int *piVar11;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar10 = (long *)Effect_Barrage::GetViceBarrage(param_3);
  iVar7 = (**(code **)(*plVar10 + 0x80))(plVar10,param_5);
  iVar1 = *(int *)(param_1 + 0x50);
  Graphics::SetColor((Graphics *)param_3,param_7);
  Graphics::DrawString
            ((Graphics *)param_3,param_5,*param_8 + (*(int *)(param_1 + 0x50) - iVar7) / 2,
             param_4 + param_8[1]);
  Graphics::SetColor((Graphics *)param_3,param_6);
  Graphics::DrawString((Graphics *)param_3,param_5,(*(int *)(param_1 + 0x50) - iVar7) / 2,param_4);
  local_c = 0;
  piVar11 = eastl::min_alt<int>(&local_c,(int *)param_8);
  iVar2 = *piVar11;
  local_c = 0;
  piVar11 = eastl::min_alt<int>(&local_c,(int *)(param_8 + 1));
  iVar3 = *piVar11;
  iVar8 = (**(code **)(*plVar10 + 0x50))(plVar10);
  uVar4 = *param_8;
  uVar6 = (int)uVar4 >> 0x1f;
  iVar9 = (**(code **)(*plVar10 + 0x68))(plVar10);
  uVar5 = (int)param_8[1] >> 0x1f;
  Insets::Insets(param_1_00,(iVar1 - iVar7) / 2 + iVar2,(param_4 - iVar8) + iVar3,
                 iVar7 + ((uVar4 ^ uVar6) - uVar6),iVar9 + ((param_8[1] ^ uVar5) - uVar5));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Widget::WidgetRemovedHelper() */

void __thiscall Sexy::Widget::WidgetRemovedHelper(Widget *this)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  Widget *pWVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x18) != 0) {
    local_18 = FUN_052c0e20(*(undefined8 *)(this + 8));
    while( true ) {
      local_10 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)(this + 8));
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar1) break;
      puVar2 = (undefined8 *)
               std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                         ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      WidgetRemovedHelper((Widget *)*puVar2);
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
    (**(code **)(**(long **)(this + 0x18) + 0x78))(*(long **)(this + 0x18),this);
    local_18 = FUN_052c0e6c(*(undefined8 *)(*(long *)(this + 0x18) + 0x108));
    while( true ) {
      local_10 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)(*(long *)(this + 0x18) + 0x108));
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar1) break;
      lVar3 = std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                        ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      if (*(Widget **)(lVar3 + 8) == this) {
        pWVar4 = *(Widget **)(lVar3 + 0x10);
        *(undefined8 *)(lVar3 + 8) = 0;
      }
      else {
        pWVar4 = *(Widget **)(lVar3 + 0x10);
      }
      if (pWVar4 == this) {
        *(undefined8 *)(lVar3 + 0x10) = 0;
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
    (**(code **)(*(long *)this + 0x100))(this,*(undefined8 *)(this + 0x18));
    (**(code **)(*(long *)this + 0xe8))(this,this);
    *(undefined8 *)(this + 0x18) = 0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Sexy::Widget::Widget() */

void __thiscall Sexy::Widget::Widget(Widget *this)

{
  WidgetContainer::WidgetContainer((WidgetContainer *)this);
  *(undefined ***)this = &PTR_GetClass_06a320d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  Insets::Insets((Insets *)(this + 0x90));
  Set8BytesTo0(this + 0xc0);
  Set8BytesTo0(this + 200);
  *(undefined8 *)(this + 0x18) = 0;
  this[0x6e] = (Widget)0x0;
  this[0x6c] = (Widget)0x1;
  this[0x6d] = (Widget)0x1;
  this[0x70] = (Widget)0x0;
  this[0x71] = (Widget)0x0;
  this[0xa0] = (Widget)0x0;
  this[0x6f] = (Widget)0x0;
  this[0x72] = (Widget)0x0;
  this[0xa1] = (Widget)0x0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb8) = 0xffffffff;
  this[0xd0] = (Widget)0x0;
  return;
}


/* Sexy::Widget::StaticNew() */

Widget * Sexy::Widget::StaticNew(void)

{
  Widget *this;
  
  this = ::operator_new(0xd8);
  Widget(this);
  return this;
}


/* Sexy::Widget::~Widget() */

void __thiscall Sexy::Widget::~Widget(Widget *this)

{
  *(undefined ***)this = &PTR_GetClass_06a320d0;
  std::vector<Sexy::Color,std::allocator<Sexy::Color>>::clear
            ((vector<Sexy::Color,std::allocator<Sexy::Color>> *)(this + 0x78));
  std::string::~string((string *)(this + 200));
  std::string::~string((string *)(this + 0xc0));
  std::vector<Sexy::Color,std::allocator<Sexy::Color>>::~vector
            ((vector<Sexy::Color,std::allocator<Sexy::Color>> *)(this + 0x78));
  WidgetContainer::~WidgetContainer((WidgetContainer *)this);
  return;
}


/* Sexy::Widget::~Widget() */

void __thiscall Sexy::Widget::~Widget(Widget *this)

{
  ~Widget(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::Widget::SetColor(int, Sexy::Color const&) */

void __thiscall Sexy::Widget::SetColor(Widget *this,int param_1,Color *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x78);
  iVar1 = FUN_052c008c(uVar4,*(undefined8 *)(this + 0x80));
  if (iVar1 <= param_1) {
    std::vector<Sexy::Color,std::allocator<Sexy::Color>>::resize
              ((vector<Sexy::Color,std::allocator<Sexy::Color>> *)(this + 0x78),(long)(param_1 + 1))
    ;
    uVar4 = *(undefined8 *)(this + 0x78);
  }
  puVar2 = (undefined8 *)FUN_052c0098(uVar4,(long)param_1);
  uVar4 = *(undefined8 *)(param_2 + 8);
  pcVar3 = *(code **)(*(long *)this + 0xd8);
  *puVar2 = *(undefined8 *)param_2;
  puVar2[1] = uVar4;
  (*pcVar3)(this);
  return;
}

