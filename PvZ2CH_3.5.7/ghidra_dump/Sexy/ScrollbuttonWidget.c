// Class: Sexy::ScrollbuttonWidget


/* Sexy::ScrollbuttonWidget::~ScrollbuttonWidget() */

void __thiscall Sexy::ScrollbuttonWidget::~ScrollbuttonWidget(ScrollbuttonWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06a31030;
  ButtonWidget::~ButtonWidget((ButtonWidget *)this);
  return;
}


/* Sexy::ScrollbuttonWidget::~ScrollbuttonWidget() */

void __thiscall Sexy::ScrollbuttonWidget::~ScrollbuttonWidget(ScrollbuttonWidget *this)

{
  ~ScrollbuttonWidget(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::ScrollbuttonWidget::Draw(Sexy::Graphics*) */

void __thiscall Sexy::ScrollbuttonWidget::Draw(ScrollbuttonWidget *this,Graphics *param_1)

{
  int iVar1;
  Color *pCVar2;
  undefined8 uVar3;
  int iVar4;
  Image *pIVar5;
  uint uVar6;
  int iVar7;
  
  pIVar5 = *(Image **)(this + 0xe8);
  if ((pIVar5 == (Image *)0x0) && (*(long *)(this + 0x100) == 0)) {
    pCVar2 = (Color *)(**(code **)(*(long *)this + 0x178))(this,5);
    Graphics::SetColor(param_1,pCVar2);
    Graphics::FillRect(param_1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    if ((this[0x70] == (ScrollbuttonWidget)0x0) ||
       ((this[0x71] == (ScrollbuttonWidget)0x0 || (this[0x6e] != (ScrollbuttonWidget)0x0)))) {
      iVar7 = 0;
      pCVar2 = (Color *)(**(code **)(*(long *)this + 0x178))(this,3);
      Graphics::SetColor(param_1,pCVar2);
      Graphics::FillRect(param_1,1,1,*(int *)(this + 0x50) + -2,1);
      Graphics::FillRect(param_1,1,1,1,*(int *)(this + 0x54) + -2);
      pCVar2 = (Color *)(**(code **)(*(long *)this + 0x178))(this,2);
      Graphics::SetColor(param_1,pCVar2);
      Graphics::FillRect(param_1,0,*(int *)(this + 0x54) + -1,*(int *)(this + 0x50),1);
      Graphics::FillRect(param_1,*(int *)(this + 0x50) + -1,0,1,*(int *)(this + 0x54));
      pCVar2 = (Color *)(**(code **)(*(long *)this + 0x178))(this,4);
      Graphics::SetColor(param_1,pCVar2);
      Graphics::FillRect(param_1,1,*(int *)(this + 0x54) + -2,*(int *)(this + 0x50) + -2,1);
      Graphics::FillRect(param_1,*(int *)(this + 0x50) + -2,1,1,*(int *)(this + 0x54) + -2);
    }
    else {
      iVar7 = 1;
      pCVar2 = (Color *)(**(code **)(*(long *)this + 0x178))(this,4);
      Graphics::SetColor(param_1,pCVar2);
      Graphics::DrawRect(param_1,0,0,*(int *)(this + 0x50) + -1,*(int *)(this + 0x54) + -1);
    }
    if (this[0x6e] == (ScrollbuttonWidget)0x0) {
      uVar3 = 2;
    }
    else {
      uVar3 = 4;
    }
    pCVar2 = (Color *)(**(code **)(*(long *)this + 0x178))(this,uVar3);
    Graphics::SetColor(param_1,pCVar2);
    if (this[0x198] == (ScrollbuttonWidget)0x0) {
      iVar4 = 1;
      uVar6 = 0;
      if (1 < *(int *)(this + 0x19c) - 3U) {
        do {
          if ((*(int *)(this + 0xd4) == 0) || (*(int *)(this + 0x19c) == 1)) {
            Graphics::FillRect(param_1,~uVar6 + *(int *)(this + 0x50) / 2 + iVar7,
                               uVar6 + (*(int *)(this + 0x54) + -4) / 2 + iVar7,iVar4,1);
          }
          else {
            Graphics::FillRect(param_1,~uVar6 + *(int *)(this + 0x50) / 2 + iVar7,
                               (3 - uVar6) + (*(int *)(this + 0x54) + -4) / 2 + iVar7,iVar4,1);
          }
          uVar6 = uVar6 + 1;
          iVar4 = iVar4 + 2;
        } while (uVar6 != 4);
        return;
      }
    }
    uVar6 = 0;
    iVar4 = 1;
    do {
      if ((*(int *)(this + 0xd4) == 0) || (*(int *)(this + 0x19c) == 3)) {
        Graphics::FillRect(param_1,uVar6 + (*(int *)(this + 0x50) + -4) / 2 + iVar7,
                           ~uVar6 + *(int *)(this + 0x54) / 2 + iVar7,1,iVar4);
      }
      else {
        Graphics::FillRect(param_1,(3 - uVar6) + (*(int *)(this + 0x50) + -4) / 2 + iVar7,
                           ~uVar6 + *(int *)(this + 0x54) / 2 + iVar7,1,iVar4);
      }
      uVar6 = uVar6 + 1;
      iVar4 = iVar4 + 2;
    } while (uVar6 != 4);
    return;
  }
  iVar7 = *(int *)(this + 0x19c);
  if (iVar7 < 1) {
    iVar4 = 0;
    if ((this[0x198] != (ScrollbuttonWidget)0x0) && (iVar4 = 0, 2 < *(int *)(pIVar5 + 0x44))) {
      iVar4 = 2;
    }
    if (*(int *)(this + 0xd4) == 1) {
      iVar4 = iVar4 + 1;
    }
    if (this[0x70] != (ScrollbuttonWidget)0x0) goto LAB_051d1578;
LAB_051d15b0:
    if (this[0x6e] == (ScrollbuttonWidget)0x0) goto LAB_051d15c4;
  }
  else {
    iVar1 = iVar7 + -1;
    iVar4 = iVar1;
    if ((2 < iVar1) && (iVar4 = iVar7 + -3, 2 < *(int *)(pIVar5 + 0x44))) {
      iVar4 = iVar1;
    }
    if (this[0x70] == (ScrollbuttonWidget)0x0) goto LAB_051d15b0;
LAB_051d1578:
    if (this[0x71] == (ScrollbuttonWidget)0x0) goto LAB_051d15b0;
    if (this[0x6e] == (ScrollbuttonWidget)0x0) {
      pIVar5 = *(Image **)(this + 0x100);
      goto LAB_051d15c4;
    }
  }
  if (*(Image **)(this + 0x108) != (Image *)0x0) {
    Graphics::DrawImageCel(param_1,*(Image **)(this + 0x108),0,0,iVar4);
    return;
  }
LAB_051d15c4:
  Graphics::DrawImageCel(param_1,pIVar5,0,0,iVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ScrollbuttonWidget::StaticClassInit() */

void Sexy::ScrollbuttonWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"ScrollbuttonWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_051d1ac0,0x1a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ScrollbuttonWidget::StaticGetClass() */

long * Sexy::ScrollbuttonWidget::StaticGetClass(void)

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
  uVar2 = ButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"ScrollbuttonWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::ScrollbuttonWidget::GetClass() const */

long * Sexy::ScrollbuttonWidget::GetClass(void)

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
  uVar2 = ButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"ScrollbuttonWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::ScrollbuttonWidget::ScrollbuttonWidget(int, Sexy::ButtonListener*, int) */

void __thiscall
Sexy::ScrollbuttonWidget::ScrollbuttonWidget
          (ScrollbuttonWidget *this,int param_1,ButtonListener *param_2,int param_3)

{
  ButtonWidget::ButtonWidget((ButtonWidget *)this,param_1,param_2);
  this[0x198] = (ScrollbuttonWidget)0x0;
  *(int *)(this + 0x19c) = param_3;
  *(undefined ***)this = &PTR_GetClass_06a31030;
  return;
}


/* Sexy::ScrollbuttonWidget::ScrollbuttonWidget() */

void __thiscall Sexy::ScrollbuttonWidget::ScrollbuttonWidget(ScrollbuttonWidget *this)

{
  ScrollbuttonWidget(this,-1,(ButtonListener *)0x0,0);
  return;
}


/* Sexy::ScrollbuttonWidget::StaticNew() */

ScrollbuttonWidget * Sexy::ScrollbuttonWidget::StaticNew(void)

{
  ScrollbuttonWidget *this;
  
  this = ::operator_new(0x1a0);
  ScrollbuttonWidget(this);
  return this;
}

