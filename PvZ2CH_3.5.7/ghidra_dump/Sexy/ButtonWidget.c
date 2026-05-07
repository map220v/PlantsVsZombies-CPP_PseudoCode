// Class: Sexy::ButtonWidget


/* Sexy::ButtonWidget::SetFont(Sexy::Font*) */

void __thiscall Sexy::ButtonWidget::SetFont(ButtonWidget *this,Font *param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(this + 0x158) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x158) + 0x18))();
  }
  uVar1 = (**(code **)(*(long *)param_1 + 0xa0))(param_1);
  *(undefined8 *)(this + 0x158) = uVar1;
  return;
}


/* Sexy::ButtonWidget::IsButtonDown() */

byte __thiscall Sexy::ButtonWidget::IsButtonDown(ButtonWidget *this)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((this[0x70] != (ButtonWidget)0x0) && (bVar1 = 0, this[0x71] != (ButtonWidget)0x0)) {
    bVar1 = (byte)this[0x6e] ^ 1;
  }
  return bVar1;
}


/* Sexy::ButtonWidget::~ButtonWidget() */

void __thiscall Sexy::ButtonWidget::~ButtonWidget(ButtonWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2cf20;
  if (*(long **)(this + 0x158) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x158) + 0x18))();
  }
  FUN_05476c50(this + 0xd8);
  Widget::~Widget((Widget *)this);
  return;
}


/* Sexy::ButtonWidget::~ButtonWidget() */

void __thiscall Sexy::ButtonWidget::~ButtonWidget(ButtonWidget *this)

{
  ~ButtonWidget(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::ButtonWidget::DrawButtonImage(Sexy::Graphics*, Sexy::Image*, Sexy::TRect<int> const&, int,
   int) */

void __thiscall
Sexy::ButtonWidget::DrawButtonImage
          (ButtonWidget *this,Graphics *param_1,Image *param_2,TRect *param_3,int param_4,
          int param_5)

{
  Image *pIVar1;
  
  if (*(int *)(param_3 + 8) != 0) {
    pIVar1 = *(Image **)(this + 0xe8);
    if (*(Image **)(this + 0xe8) == (Image *)0x0) {
      pIVar1 = param_2;
    }
    Graphics::DrawImage(param_1,pIVar1,param_4,param_5,param_3);
    return;
  }
  Graphics::DrawImage(param_1,param_2,param_4,param_5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ButtonWidget::StaticClassInit() */

void Sexy::ButtonWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"ButtonWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_0511ffa8,0x198,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ButtonWidget::StaticGetClass() */

long * Sexy::ButtonWidget::StaticGetClass(void)

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
  uVar2 = Widget::StaticGetClass();
  (*pcVar3)(plVar1,"ButtonWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::ButtonWidget::GetClass() const */

long * Sexy::ButtonWidget::GetClass(void)

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
  uVar2 = Widget::StaticGetClass();
  (*pcVar3)(plVar1,"ButtonWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::ButtonWidget::EnsureFonts() */

void __thiscall Sexy::ButtonWidget::EnsureFonts(ButtonWidget *this)

{
  long lVar1;
  BaseBufferResource *this_00;
  undefined8 uVar2;
  
  if ((*(long *)(this + 0x158) == 0) && (lVar1 = FUN_054765d0(this + 0xd8), lVar1 != 0)) {
    this_00 = (BaseBufferResource *)PrimeText::Instance();
    uVar2 = BaseBufferResource::GetPtr(this_00);
    *(undefined8 *)(this + 0x150) = uVar2;
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ButtonWidget::DrawIcon(Sexy::Graphics*, Sexy::Color&, int, int, int, int) */

void __thiscall
Sexy::ButtonWidget::DrawIcon
          (ButtonWidget *this,Graphics *param_1,Color *param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  long lVar1;
  undefined1 auStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Graphics::SetColor(param_1,param_2);
  if (*(Image **)(this + 0xf0) == (Image *)0x0) {
    if (*(Effect_Barrage **)(this + 0x158) == (Effect_Barrage *)0x0) {
      lVar1 = *(long *)(this + 0x150);
      if (lVar1 != 0) {
        FUN_05477b24(auStack_20,this + 0xd8);
        Color::Color(aCStack_18,0xffffffff);
        PrimeTypeface::DrawString_Simple
                  ((PrimeTypeface *)(float)param_5,(float)param_6,lVar1,param_1,auStack_20,
                   aCStack_18,0);
        FUN_05476c50(auStack_20);
      }
    }
    else {
      Effect_Barrage::SetViceBarrage((Effect_Barrage *)param_1,*(Effect_Barrage **)(this + 0x158));
      Graphics::DrawString(param_1,(wstring *)(this + 0xd8),param_5,param_6);
    }
  }
  else {
    Graphics::DrawImage(param_1,*(Image **)(this + 0xf0),param_3,param_4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ButtonWidget::Draw(Sexy::Graphics*) */

void __thiscall Sexy::ButtonWidget::Draw(ButtonWidget *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  Color *pCVar8;
  Color *pCVar9;
  long *plVar10;
  SalesProgressBar *this_00;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  byte bVar14;
  ButtonWidget *pBVar15;
  undefined8 local_28;
  undefined8 uStack_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x161] != (ButtonWidget)0x0) goto LAB_05120234;
  EnsureFonts(this);
  bVar14 = 0;
  if ((this[0x70] != (ButtonWidget)0x0) && (this[0x71] != (ButtonWidget)0x0)) {
    bVar14 = (byte)this[0x6e] ^ 1;
  }
  plVar10 = *(long **)(this + 0x158);
  bVar14 = (byte)this[0x160] ^ bVar14;
  if (plVar10 == (long *)0x0) {
    iVar6 = 0;
    iVar5 = iVar6;
  }
  else {
    if (*(int *)(this + 0xe0) == 0) {
      iVar6 = *(int *)(this + 0x50);
      iVar5 = (**(code **)(*plVar10 + 0x80))(plVar10,this + 0xd8);
      plVar10 = *(long **)(this + 0x158);
      iVar5 = (iVar6 - iVar5) / 2;
    }
    else {
      iVar5 = 0;
      if (*(int *)(this + 0xe0) == 1) {
        iVar5 = *(int *)(this + 0x50);
        iVar6 = (**(code **)(*plVar10 + 0x80))(plVar10,this + 0xd8);
        iVar5 = iVar5 - iVar6;
        plVar10 = *(long **)(this + 0x158);
      }
    }
    iVar6 = *(int *)(this + 0x54);
    iVar2 = (**(code **)(*plVar10 + 0x50))(plVar10);
    iVar3 = (**(code **)(**(long **)(this + 0x158) + 0x50))(*(long **)(this + 0x158));
    iVar6 = (((iVar6 + iVar2) - iVar3 / 6) + -1) / 2;
  }
  this_00 = *(SalesProgressBar **)(this + 0xf0);
  if (this_00 == (SalesProgressBar *)0x0) {
    iVar2 = 0;
    iVar3 = iVar2;
  }
  else {
    if (*(int *)(this + 0xe0) == 0) {
      iVar2 = *(int *)(this + 0x50);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)this_00);
      this_00 = *(SalesProgressBar **)(this + 0xf0);
      iVar3 = *(int *)(this + 400) + (iVar2 - iVar3) / 2;
    }
    else {
      iVar3 = 0;
      if (*(int *)(this + 0xe0) == 1) {
        iVar3 = *(int *)(this + 0x50);
        iVar2 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)this_00);
        iVar3 = iVar3 - iVar2;
        this_00 = *(SalesProgressBar **)(this + 0xf0);
      }
    }
    iVar2 = *(int *)(this + 0x54);
    iVar4 = SalesProgressBar::GetCurrentLevel(this_00);
    iVar2 = *(int *)(this + 0x194) + (iVar2 - iVar4) / 2;
  }
  pCVar8 = (Color *)&local_28;
  Color::Color(pCVar8);
  if ((*(long *)(this + 0xe8) == 0) && (*(long *)(this + 0x100) == 0)) {
    if (this[0x162] == (ButtonWidget)0x0) {
      pCVar9 = (Color *)FUN_0511fe6c(*(undefined8 *)(this + 0x78),5);
      Graphics::SetColor(param_1,pCVar9);
      Graphics::FillRect(param_1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      if (bVar14 != 0) {
        if (this[0x162] == (ButtonWidget)0x0) {
          pCVar9 = (Color *)FUN_0511fe6c(*(undefined8 *)(this + 0x78),2);
          Graphics::SetColor(param_1,pCVar9);
          Graphics::FillRect(param_1,0,0,*(int *)(this + 0x50) + -1,1);
          Graphics::FillRect(param_1,0,0,1,*(int *)(this + 0x54) + -1);
          pCVar9 = (Color *)FUN_0511fe6c(*(undefined8 *)(this + 0x78),3);
          Graphics::SetColor(param_1,pCVar9);
          Graphics::FillRect(param_1,0,*(int *)(this + 0x54) + -1,*(int *)(this + 0x50),1);
          Graphics::FillRect(param_1,*(int *)(this + 0x50) + -1,0,1,*(int *)(this + 0x54));
          pCVar9 = (Color *)FUN_0511fe6c(*(undefined8 *)(this + 0x78),4);
          Graphics::SetColor(param_1,pCVar9);
          Graphics::FillRect(param_1,1,1,*(int *)(this + 0x50) + -3,1);
          Graphics::FillRect(param_1,1,1,1,*(int *)(this + 0x54) + -3);
        }
        goto LAB_05120684;
      }
      if (this[0x162] == (ButtonWidget)0x0) {
        pCVar9 = (Color *)FUN_0511fe6c(*(undefined8 *)(this + 0x78),3);
        Graphics::SetColor(param_1,pCVar9);
        Graphics::FillRect(param_1,0,0,*(int *)(this + 0x50) + -1,1);
        Graphics::FillRect(param_1,0,0,1,*(int *)(this + 0x54) + -1);
        pCVar9 = (Color *)FUN_0511fe6c(*(undefined8 *)(this + 0x78),2);
        Graphics::SetColor(param_1,pCVar9);
        Graphics::FillRect(param_1,0,*(int *)(this + 0x54) + -1,*(int *)(this + 0x50),1);
        Graphics::FillRect(param_1,*(int *)(this + 0x50) + -1,0,1,*(int *)(this + 0x54));
        pCVar9 = (Color *)FUN_0511fe6c(*(undefined8 *)(this + 0x78),4);
        Graphics::SetColor(param_1,pCVar9);
        Graphics::FillRect(param_1,1,*(int *)(this + 0x54) + -2,*(int *)(this + 0x50) + -2,1);
        Graphics::FillRect(param_1,*(int *)(this + 0x50) + -2,1,1,*(int *)(this + 0x54) + -2);
      }
    }
    else if (bVar14 != 0) {
LAB_05120684:
      if (this[0x71] == (ButtonWidget)0x0) {
        puVar7 = (undefined8 *)FUN_0511fe6c(*(undefined8 *)(this + 0x78),0);
        local_28 = *puVar7;
        uStack_20 = puVar7[1];
      }
      else {
        puVar7 = (undefined8 *)FUN_0511fe6c(*(undefined8 *)(this + 0x78),1);
        local_28 = *puVar7;
        uStack_20 = puVar7[1];
      }
      goto LAB_051206ac;
    }
  }
  else {
    if (bVar14 != 0) {
      pBVar15 = this + 0x130;
      cVar1 = (**(code **)(*(long *)this + 0x310))(this,*(undefined8 *)(this + 0x100),pBVar15);
      if (cVar1 == '\0') {
        pBVar15 = this + 0x120;
        cVar1 = (**(code **)(*(long *)this + 0x310))(this,*(undefined8 *)(this + 0xf8),pBVar15);
        lVar13 = *(long *)this;
        uVar12 = 1;
        if (cVar1 != '\0') {
          uVar11 = *(undefined8 *)(this + 0xf8);
          goto LAB_051205b0;
        }
        (**(code **)(lVar13 + 0x318))(this,param_1,*(undefined8 *)(this + 0xe8),this + 0x110,1,1);
      }
      else {
        lVar13 = *(long *)this;
        uVar12 = 0;
        uVar11 = *(undefined8 *)(this + 0x100);
LAB_051205b0:
        (**(code **)(lVar13 + 0x318))(this,param_1,uVar11,pBVar15,uVar12,uVar12);
      }
      pCVar8 = (Color *)FUN_0511fe6c(*(undefined8 *)(this + 0x78),1);
      Graphics::SetColor(param_1,pCVar8);
      pCVar8 = (Color *)FUN_0511fe6c(*(undefined8 *)(this + 0x78),1);
LAB_051206ac:
      DrawIcon(this,param_1,pCVar8,iVar3 + 1,iVar2 + 1,iVar5 + 1,iVar6 + 1);
      goto LAB_05120234;
    }
    if (this[0x6e] != (ButtonWidget)0x0) {
      cVar1 = (**(code **)(*(long *)this + 0x310))(this,*(undefined8 *)(this + 0x108),this + 0x140);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)this + 0x318))
                  (this,param_1,*(undefined8 *)(this + 0x108),this + 0x140,0,0);
        goto LAB_05120448;
      }
    }
    if (0.0 < *(double *)(this + 0x178)) {
      cVar1 = (**(code **)(*(long *)this + 0x310))(this,*(undefined8 *)(this + 0xf8),this + 0x120);
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*(long *)this + 0x310))(this,*(undefined8 *)(this + 0xe8),this + 0x110)
        ;
        if ((cVar1 != '\0') && (*(double *)(this + 0x178) < 1.0)) {
          (**(code **)(*(long *)this + 0x318))
                    (this,param_1,*(undefined8 *)(this + 0xe8),this + 0x110,0,0);
        }
        Graphics::SetColorizeImages(param_1,true);
        Insets::Insets(aIStack_18,0xff,0xff,0xff,(int)(*(double *)(this + 0x178) * 255.0));
        Graphics::SetColor(param_1,(Color *)aIStack_18);
        (**(code **)(*(long *)this + 0x318))
                  (this,param_1,*(undefined8 *)(this + 0xf8),this + 0x120,0,0);
        Graphics::SetColorizeImages(param_1,false);
        goto LAB_05120448;
      }
    }
    if ((this[0x71] == (ButtonWidget)0x0) && (this[0x70] == (ButtonWidget)0x0)) {
LAB_05120510:
      pBVar15 = this + 0x110;
      cVar1 = (**(code **)(*(long *)this + 0x310))(this,*(undefined8 *)(this + 0xe8),pBVar15);
      if (cVar1 == '\0') goto LAB_05120448;
      lVar13 = *(long *)this;
      uVar11 = *(undefined8 *)(this + 0xe8);
    }
    else {
      pBVar15 = this + 0x120;
      cVar1 = (**(code **)(*(long *)this + 0x310))(this,*(undefined8 *)(this + 0xf8),pBVar15);
      if (cVar1 == '\0') goto LAB_05120510;
      lVar13 = *(long *)this;
      uVar11 = *(undefined8 *)(this + 0xf8);
    }
    (**(code **)(lVar13 + 0x318))(this,param_1,uVar11,pBVar15,0,0);
  }
LAB_05120448:
  if (this[0x71] == (ButtonWidget)0x0) {
    puVar7 = (undefined8 *)FUN_0511fe6c(*(undefined8 *)(this + 0x78),0);
    local_28 = *puVar7;
    uStack_20 = puVar7[1];
  }
  else {
    puVar7 = (undefined8 *)FUN_0511fe6c(*(undefined8 *)(this + 0x78),1);
    local_28 = *puVar7;
    uStack_20 = puVar7[1];
  }
  DrawIcon(this,param_1,pCVar8,iVar3,iVar2,iVar5,iVar6);
LAB_05120234:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ButtonWidget::ButtonWidget(int, Sexy::ButtonListener*) */

void __thiscall
Sexy::ButtonWidget::ButtonWidget(ButtonWidget *this,int param_1,ButtonListener *param_2)

{
  Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06a2cf20;
  FUN_05476574(this + 0xd8);
  Insets::Insets((Insets *)(this + 0x110));
  Insets::Insets((Insets *)(this + 0x120));
  Insets::Insets((Insets *)(this + 0x130));
  Insets::Insets((Insets *)(this + 0x140));
  *(undefined8 *)(this + 0x158) = 0;
  *(int *)(this + 0xd4) = param_1;
  *(undefined8 *)(this + 0x150) = 0;
  this[0x58] = (ButtonWidget)0x1;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  this[0x160] = (ButtonWidget)0x0;
  this[0x161] = (ButtonWidget)0x0;
  this[0x162] = (ButtonWidget)0x0;
  *(ButtonListener **)(this + 0x168) = param_2;
  *(undefined4 *)(this + 0x194) = 0;
  *(undefined4 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  Widget::SetColors((Widget *)this,(int *)&DAT_06a89d70,6);
  *(undefined4 *)(this + 0x170) = 0xffffffff;
  return;
}


/* Sexy::ButtonWidget::ButtonWidget() */

void __thiscall Sexy::ButtonWidget::ButtonWidget(ButtonWidget *this)

{
  ButtonWidget(this,-1,(ButtonListener *)0x0);
  return;
}


/* Sexy::ButtonWidget::StaticNew() */

ButtonWidget * Sexy::ButtonWidget::StaticNew(void)

{
  ButtonWidget *this;
  
  this = ::operator_new(0x198);
  ButtonWidget(this);
  return this;
}


/* Sexy::ButtonWidget::SetDisabled(bool) */

void __thiscall Sexy::ButtonWidget::SetDisabled(ButtonWidget *this,bool param_1)

{
  char cVar1;
  
  Widget::SetDisabled((Widget *)this,param_1);
  cVar1 = (**(code **)(*(long *)this + 0x310))(this,*(undefined8 *)(this + 0x108),this + 0x140);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0xd8))(this);
  }
  return;
}


/* Sexy::ButtonWidget::MouseEnter() */

void Sexy::ButtonWidget::MouseEnter(void)

{
  char cVar1;
  long *in_x0;
  long *plVar2;
  TRect<int> *this;
  TRect *pTVar3;
  long lVar4;
  
  nop();
  if (((double)in_x0[0x31] == 0.0) && (0.0 < (double)in_x0[0x2f])) {
    in_x0[0x2f] = 0;
  }
  if (((char)in_x0[0xe] == '\0') && (cVar1 = (**(code **)(*in_x0 + 0x310))(), cVar1 == '\0')) {
    lVar4 = in_x0[0xf];
    this = (TRect<int> *)FUN_0511fe6c(lVar4,1);
    pTVar3 = (TRect *)FUN_0511fe6c(lVar4,0);
    cVar1 = TRect<int>::operator!=(this,pTVar3);
    if (cVar1 == '\0') goto LAB_05120b68;
  }
  (**(code **)(*in_x0 + 0xd8))();
LAB_05120b68:
  plVar2 = (long *)in_x0[0x2d];
  if (plVar2 != (long *)0x0) {
    if (*(code **)(*plVar2 + 0x20) != ButtonListener::ButtonMouseEnter) {
      (**(code **)(*plVar2 + 0x20))(plVar2,*(undefined4 *)((long)in_x0 + 0xd4));
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ButtonWidget::MouseLeave() */

void __thiscall Sexy::ButtonWidget::MouseLeave(ButtonWidget *this)

{
  ButtonWidget BVar1;
  char cVar2;
  long *plVar3;
  double *pdVar4;
  TRect<int> *this_00;
  TRect *pTVar5;
  undefined8 uVar6;
  double dVar7;
  double local_18;
  double local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  dVar7 = *(double *)(this + 0x180);
  if (dVar7 == 0.0) {
    if (0.0 < *(double *)(this + 0x178)) {
      *(undefined8 *)(this + 0x178) = 0;
    }
LAB_05120c40:
    BVar1 = this[0x70];
  }
  else {
    if (((dVar7 <= 0.0) || (*(double *)(this + 0x178) != 0.0)) ||
       (*(char *)(gSexyAppBase + 0x666) == '\0')) goto LAB_05120c40;
    local_10 = dVar7 * 10.0;
    local_18 = 1.0;
    pdVar4 = std::min<double>(&local_18,&local_10);
    *(double *)(this + 0x178) = *pdVar4;
    BVar1 = this[0x70];
  }
  if ((BVar1 == (ButtonWidget)0x0) &&
     (cVar2 = (**(code **)(*(long *)this + 0x310))(this,*(undefined8 *)(this + 0xf8),this + 0x120),
     cVar2 == '\0')) {
    uVar6 = *(undefined8 *)(this + 0x78);
    this_00 = (TRect<int> *)FUN_0511fe6c(uVar6,1);
    pTVar5 = (TRect *)FUN_0511fe6c(uVar6,0);
    cVar2 = TRect<int>::operator!=(this_00,pTVar5);
    if (cVar2 == '\0') goto LAB_05120c58;
  }
  (**(code **)(*(long *)this + 0xd8))(this);
LAB_05120c58:
  plVar3 = *(long **)(this + 0x168);
  if (plVar3 != (long *)0x0) {
    if (*(code **)(*plVar3 + 0x28) != ButtonListener::ButtonMouseLeave) {
      (**(code **)(*plVar3 + 0x28))(plVar3,*(undefined4 *)(this + 0xd4));
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Sexy::ButtonWidget::MouseMove(int, int) */

void __thiscall Sexy::ButtonWidget::MouseMove(ButtonWidget *this,int param_1,int param_2)

{
  long *plVar1;
  
  nop();
  plVar1 = *(long **)(this + 0x168);
  if (plVar1 != (long *)0x0) {
    if (*(code **)(*plVar1 + 0x30) != ButtonListener::ButtonMouseMove) {
      (**(code **)(*plVar1 + 0x30))(plVar1,*(undefined4 *)(this + 0xd4),param_1,param_2);
    }
  }
  return;
}


/* Sexy::ButtonWidget::MouseDown(int, int, int, int) */

void __thiscall
Sexy::ButtonWidget::MouseDown(ButtonWidget *this,int param_1,int param_2,int param_3,int param_4)

{
  long *plVar1;
  
  nop();
  plVar1 = *(long **)(this + 0x168);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,*(undefined4 *)(this + 0xd4),param_4);
  }
  (**(code **)(*(long *)this + 0xd8))(this);
  return;
}


/* Sexy::ButtonWidget::MouseUp(int, int, int, int) */

void Sexy::ButtonWidget::MouseUp(int param_1,int param_2,int param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)(ulong)(uint)param_1;
  nop();
  if (((*(char *)((long)plVar1 + 0x71) != '\0') && (*(char *)(plVar1[3] + 0xc4) != '\0')) &&
     (plVar2 = (long *)plVar1[0x2d], plVar2 != (long *)0x0)) {
    if (*(code **)(*plVar2 + 0x10) != ButtonListener::ButtonDepress) {
      (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined4 *)((long)plVar1 + 0xd4));
      (**(code **)(*plVar1 + 0xd8))(plVar1);
      return;
    }
  }
  (**(code **)(*plVar1 + 0xd8))(plVar1);
  return;
}


/* Sexy::ButtonWidget::Update() */

void __thiscall Sexy::ButtonWidget::Update(ButtonWidget *this)

{
  long *plVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (this[0x70] != (ButtonWidget)0x0) {
    if (this[0x71] == (ButtonWidget)0x0) {
      return;
    }
    plVar1 = *(long **)(this + 0x168);
    if (plVar1 == (long *)0x0) goto LAB_05120eb4;
    if (*(code **)(*plVar1 + 0x18) == ButtonListener::ButtonDownTick) goto LAB_05120eb4;
    (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined4 *)(this + 0xd4));
    if (this[0x70] != (ButtonWidget)0x0) {
      if (this[0x71] == (ButtonWidget)0x0) {
        return;
      }
      goto LAB_05120eb4;
    }
  }
  if (this[0x71] == (ButtonWidget)0x0) {
    if (*(double *)(this + 0x178) <= 0.0) {
      return;
    }
    if ((*(double *)(this + 0x180) <= 0.0) ||
       (dVar3 = *(double *)(this + 0x178) - *(double *)(this + 0x180),
       *(double *)(this + 0x178) = dVar3, dVar3 < 0.0)) {
      *(undefined8 *)(this + 0x178) = 0;
    }
    (**(code **)(*(long *)this + 0xd8))(this);
    return;
  }
LAB_05120eb4:
  if ((0.0 < *(double *)(this + 0x188)) && (*(double *)(this + 0x178) < 1.0)) {
    pcVar2 = *(code **)(*(long *)this + 0xd8);
    uVar4 = NEON_fminnm(*(double *)(this + 0x178) + *(double *)(this + 0x188),0x3ff0000000000000);
    *(undefined8 *)(this + 0x178) = uVar4;
    (*pcVar2)(this);
    return;
  }
  return;
}

