// Class: EpicTaskWidget


/* EpicTaskWidget::~EpicTaskWidget() */

void __thiscall EpicTaskWidget::~EpicTaskWidget(EpicTaskWidget *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_066f4eb0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066f5210;
  TaskWidget::~TaskWidget((TaskWidget *)this);
  return;
}


/* EpicTaskWidget::~EpicTaskWidget() */

void __thiscall EpicTaskWidget::~EpicTaskWidget(EpicTaskWidget *this)

{
  ~EpicTaskWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EpicTaskWidget::StaticClassInit() */

void EpicTaskWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"EpicTaskWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_039ddf04,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EpicTaskWidget::StaticGetClass() */

long * EpicTaskWidget::StaticGetClass(void)

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
  uVar2 = TaskWidget::StaticGetClass();
  (*pcVar3)(plVar1,"EpicTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EpicTaskWidget::EpicTaskWidget() */

void __thiscall EpicTaskWidget::EpicTaskWidget(EpicTaskWidget *this)

{
  TaskWidget::TaskWidget((TaskWidget *)this);
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined ***)this = &PTR_GetWidgetClass_066f4eb0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066f5210;
  return;
}


/* EpicTaskWidget::StaticNew() */

EpicTaskWidget * EpicTaskWidget::StaticNew(void)

{
  EpicTaskWidget *this;
  
  this = ::operator_new(0x1c0);
  EpicTaskWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EpicTaskWidget::Init() */

void __thiscall EpicTaskWidget::Init(EpicTaskWidget *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  PVZ2UIButton *pPVar8;
  code *pcVar9;
  Insets aIStack_88 [16];
  PVZ2UIImage aPStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TaskWidget::Init((TaskWidget *)this);
  iVar1 = FUN_039dd168(0x104);
  iVar2 = FUN_039dd168(0x5f);
  iVar3 = FUN_039dd168(200);
  iVar4 = FUN_039dd168(0x32);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0x130) = local_40;
  *(undefined8 *)(this + 0x138) = uStack_38;
  *(int *)(this + 0x1bc) = *(int *)(this + 0x13c) / 2;
  *(int *)(this + 0x1b8) = *(int *)(this + 0x138) / 5;
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe0) + 0x20));
  if (*(int *)(lVar5 + 0x40) < 6) {
    *(undefined4 *)(this + 0x1b4) = 1;
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe0) + 0x20));
    iVar2 = *(int *)(lVar5 + 0x40);
    iVar3 = *(int *)(this + 0x13c);
    iVar1 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar1 = iVar3;
    }
    *(int *)(this + 0x1b0) = iVar2;
    *(int *)(this + 0x1a8) =
         (*(int *)(this + 0x130) + *(int *)(this + 0x138)) - iVar2 * *(int *)(this + 0x1b8);
    *(int *)(this + 0x1ac) = *(int *)(this + 0x134) + (iVar1 >> 2);
  }
  else {
    *(undefined4 *)(this + 0x1b4) = 2;
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe0) + 0x20));
    if ((*(uint *)(lVar5 + 0x40) & 1) == 0) {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe0) + 0x20));
      iVar1 = *(int *)(lVar5 + 0x40) / 2;
    }
    else {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe0) + 0x20));
      iVar1 = *(int *)(lVar5 + 0x40) / 2 + 1;
    }
    *(int *)(this + 0x1b0) = iVar1;
    *(int *)(this + 0x1a8) =
         (*(int *)(this + 0x130) + *(int *)(this + 0x138)) - iVar1 * *(int *)(this + 0x1b8);
    *(undefined4 *)(this + 0x1ac) = *(undefined4 *)(this + 0x134);
  }
  iVar1 = FUN_039dd168(0x1e0);
  iVar2 = FUN_039dd168(0x50);
  iVar3 = FUN_039dd168(0x7d);
  iVar4 = FUN_039dd168(0x32);
  Sexy::Insets::Insets(aIStack_88,iVar1,iVar2,iVar3,iVar4);
  pPVar8 = *(PVZ2UIButton **)(this + 0x1a0);
  if (pPVar8 == (PVZ2UIButton *)0x0) {
    TodStringTranslate(L"[START_GAME_BUTTON]");
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar8 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar8,100,(ButtonListener *)(this + 0xd8),(wstring *)aPStack_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x1a0) = pPVar8;
    FUN_05476c50(aPStack_78);
    pPVar8 = *(PVZ2UIButton **)(this + 0x1a0);
    if (pPVar8 == (PVZ2UIButton *)0x0) goto LAB_039deb14;
  }
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06ac1968,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ac1ab0,3);
  PVZ2UIButton::SetDialogStates(pPVar8,aPStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x1a0) + 0x1a0))(*(long **)(this + 0x1a0),aIStack_88);
  plVar7 = *(long **)(this + 0x1a0);
  pcVar9 = *(code **)(*plVar7 + 800);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar9)(plVar7,uVar6);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1a0));
LAB_039deb14:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* EpicTaskWidget::ButtonDepress(int) */

void __thiscall EpicTaskWidget::ButtonDepress(EpicTaskWidget *this,int param_1)

{
  int iVar1;
  GameStateMgr *pGVar2;
  bool bVar3;
  RtObject *this_00;
  TravelLogEpicTaskData *pTVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)(this + 0xe0);
  if ((((lVar7 != 0) && (*(int *)(lVar7 + 0x14) != 2)) && (param_1 == 100)) &&
     (bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(lVar7 + 0x20)), bVar3)) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe0) + 0x20));
    pTVar4 = Sexy::RtObject::Cast<TravelLogEpicTaskData>(this_00);
    if (pTVar4 != (TravelLogEpicTaskData *)0x0) {
      iVar1 = *(int *)(*(long *)(this + 0xe0) + 0x10);
      uVar5 = FUN_039dcc20(*(undefined8 *)(pTVar4 + 0x50),*(undefined8 *)(pTVar4 + 0x58));
      if ((ulong)(long)iVar1 < uVar5) {
        UISingletonDialog<UITravelLog>::CloseDialog();
        pGVar2 = gGameStateMgr;
        uVar6 = FUN_039dcc2c(*(undefined8 *)(pTVar4 + 0x50),(long)iVar1);
        GameStateMgr::StartLevel(pGVar2,&DAT_06ac19b8,uVar6,0xffffffff,1,1,0);
        return;
      }
    }
  }
  return;
}


/* non-virtual thunk to EpicTaskWidget::ButtonDepress(int) */

void __thiscall EpicTaskWidget::ButtonDepress(EpicTaskWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EpicTaskWidget::DrawPrograss(Sexy::Graphics*) */

void __thiscall EpicTaskWidget::DrawPrograss(EpicTaskWidget *this,Graphics *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  Image *pIVar12;
  int iVar13;
  ulong uVar14;
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets
            (aIStack_18,*(int *)(this + 0x1a8),*(int *)(this + 0x134),
             *(int *)(this + 0x1b0) * *(int *)(this + 0x1b8),*(int *)(this + 0x13c));
  uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1a18);
  Draw9SliceImage(param_1,aIStack_18,uVar10);
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe0) + 0x20));
  if (*(int *)(lVar11 + 0x40) < 6) {
    iVar13 = 1;
    if (1 < *(int *)(this + 0x1b0)) {
      do {
        pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1a88);
        iVar6 = *(int *)(this + 0x1a8);
        iVar9 = iVar13 * *(int *)(this + 0x1b8);
        iVar3 = FUN_039dd168(1);
        iVar7 = *(int *)(this + 0x13c);
        iVar8 = *(int *)(this + 0x134);
        iVar5 = iVar7 + 3;
        if (-1 < iVar7) {
          iVar5 = iVar7;
        }
        iVar13 = iVar13 + 1;
        iVar4 = FUN_039dd168(2);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar12,(iVar6 + iVar9) - iVar3,iVar8 + (iVar5 >> 2),iVar4,iVar7 / 2);
      } while (iVar13 < *(int *)(this + 0x1b0));
    }
  }
  else {
    pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1a88);
    iVar13 = *(int *)(this + 0x134);
    iVar5 = *(int *)(this + 0x1bc);
    iVar8 = FUN_039dd168(1);
    iVar6 = *(int *)(this + 0x1b0);
    iVar7 = *(int *)(this + 0x1b8);
    iVar9 = FUN_039dd168(2);
    Sexy::Graphics::DrawImage
              (param_1,pIVar12,*(int *)(this + 0x1a8),(iVar13 + iVar5) - iVar8,iVar6 * iVar7,iVar9);
    if (1 < *(int *)(this + 0x1b0)) {
      iVar13 = 1;
      do {
        pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1a88);
        iVar5 = *(int *)(this + 0x1a8);
        iVar6 = iVar13 * *(int *)(this + 0x1b8);
        iVar7 = FUN_039dd168(1);
        iVar13 = iVar13 + 1;
        iVar8 = FUN_039dd168(2);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar12,(iVar5 + iVar6) - iVar7,*(int *)(this + 0x134),iVar8,
                   *(int *)(this + 0x13c));
      } while (iVar13 < *(int *)(this + 0x1b0));
    }
  }
  uVar14 = 1;
  iVar13 = 0;
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe0) + 0x20));
  if (0 < *(int *)(lVar11 + 0x40)) {
    do {
      iVar5 = *(int *)(this + 0x1b0);
      iVar6 = 0;
      if (iVar5 != 0) {
        iVar6 = iVar13 / iVar5;
      }
      Sexy::Insets::Insets
                ((Insets *)&local_28,
                 *(int *)(this + 0x1a8) + *(int *)(this + 0x1b8) * (iVar13 - iVar6 * iVar5),
                 *(int *)(this + 0x1ac) + *(int *)(this + 0x1bc) * iVar6,*(int *)(this + 0x1b8),
                 *(int *)(this + 0x1bc));
      iVar5 = *(int *)(*(long *)(this + 0xe0) + 0x10);
      bVar2 = iVar5 == iVar13;
      bVar1 = iVar5 < iVar13;
      iVar13 = (int)uVar14;
      if (bVar2 || bVar1) {
        if (bVar2) {
          pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac17c0);
          Sexy::Graphics::DrawImage(param_1,pIVar12,local_28,local_24,local_20,local_1c);
        }
        Sexy::StrFormat("%d",asStack_38,uVar14);
        Sexy::ToWString(asStack_38);
        uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_Outline)
        ;
        Sexy::Color::Color((Color *)aIStack_18,1);
        WriteWordInRect(param_1,auStack_30,(Insets *)&local_28,uVar10,aIStack_18,5,1);
        FUN_05476c50(auStack_30);
        std::string::~string(asStack_38);
      }
      else {
        pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1790);
        Sexy::Graphics::DrawImage(param_1,pIVar12,local_28,local_24,local_20,local_1c);
      }
      uVar14 = (ulong)(iVar13 + 1);
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe0) + 0x20));
    } while (iVar13 < *(int *)(lVar11 + 0x40));
  }
  TodStringTranslate(L"[TRAVEL_LOG_PROGRASS]");
  iVar5 = FUN_039dd168(100);
  iVar13 = *(int *)(this + 0x1a8);
  iVar6 = FUN_039dd168(0x5a);
  iVar7 = FUN_039dd168(0x32);
  Sexy::Insets::Insets((Insets *)&local_28,iVar13 - iVar5,*(int *)(this + 0x134),iVar6,iVar7);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,4);
  WriteWordInRect(param_1,auStack_30,(Insets *)&local_28,uVar10,aIStack_18,4,1);
  FUN_05476c50(auStack_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* EpicTaskWidget::Draw(Sexy::Graphics*) */

void __thiscall EpicTaskWidget::Draw(EpicTaskWidget *this,Graphics *param_1)

{
  if (*(Image **)(this + 0x118) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x118),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  (**(code **)(*(long *)this + 0x318))(this,param_1);
  (**(code **)(*(long *)this + 800))(this,param_1);
  (**(code **)(*(long *)this + 0x328))(this,param_1);
  (**(code **)(*(long *)this + 0x330))(this,param_1);
  nop();
  return;
}

