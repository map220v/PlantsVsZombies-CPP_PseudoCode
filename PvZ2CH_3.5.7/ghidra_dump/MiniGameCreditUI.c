// Class: MiniGameCreditUI


/* MiniGameCreditUI::startTouch(unsigned long) */

void __thiscall MiniGameCreditUI::startTouch(MiniGameCreditUI *this,ulong param_1)

{
  long lVar1;
  
  *(ulong *)(this + 0x188) = param_1;
  (**(code **)(*(long *)this + 0xe8))(this,4);
  lVar1 = *(long *)(this + 0x180);
  *(undefined1 *)(lVar1 + 0x70) = 1;
  *(undefined1 *)(lVar1 + 0x71) = 1;
  return;
}


/* MiniGameCreditUI::cancelTouch() */

void __thiscall MiniGameCreditUI::cancelTouch(MiniGameCreditUI *this)

{
  long lVar1;
  
  *(undefined8 *)(this + 0x188) = 0;
  (**(code **)(*(long *)this + 0xe8))(this,2);
  lVar1 = *(long *)(this + 0x180);
  *(undefined1 *)(lVar1 + 0x70) = 0;
  *(undefined1 *)(lVar1 + 0x71) = 0;
  return;
}


/* MiniGameCreditUI::~MiniGameCreditUI() */

void __thiscall MiniGameCreditUI::~MiniGameCreditUI(MiniGameCreditUI *this)

{
  *(undefined ***)this = &PTR_GetClass_066b1310;
  *(undefined ***)(this + 0x10) = &PTR__MiniGameCreditUI_066b14b0;
  *(undefined ***)(this + 0x168) = &PTR_ButtonPress_066b14e0;
  if (*(long **)(this + 0x180) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x180) + 0x18))();
  }
  LawnApp::UnregisterBoardTouchGameplayObject(gLawnApp,this);
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to MiniGameCreditUI::~MiniGameCreditUI() */

void __thiscall MiniGameCreditUI::~MiniGameCreditUI(MiniGameCreditUI *this)

{
  ~MiniGameCreditUI(this + -0x10);
  return;
}


/* MiniGameCreditUI::~MiniGameCreditUI() */

void __thiscall MiniGameCreditUI::~MiniGameCreditUI(MiniGameCreditUI *this)

{
  ~MiniGameCreditUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MiniGameCreditUI::~MiniGameCreditUI() */

void __thiscall MiniGameCreditUI::~MiniGameCreditUI(MiniGameCreditUI *this)

{
  ~MiniGameCreditUI(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCreditUI::StaticClassInit() */

void MiniGameCreditUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGameCreditUI");
    (*pcVar2)(plVar1,asStack_10,FUN_038999fc,0x198,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameCreditUI::StaticGetClass() */

long * MiniGameCreditUI::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MiniGameCreditUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGameCreditUI::GetClass() const */

long * MiniGameCreditUI::GetClass(void)

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
  (*pcVar3)(plVar1,"MiniGameCreditUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCreditUI::handleTouch(Sexy::Touch const&) */

void __thiscall MiniGameCreditUI::handleTouch(MiniGameCreditUI *this,Touch *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  Touch aTStack_40 [16];
  int local_30;
  int local_2c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Touch::Touch(aTStack_40,param_1);
  Board::TranslateBoardPositionToScreenPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
  cVar1 = (**(code **)(*(long *)this + 0xa8))
                    (this,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48) + local_30,
                     *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c) + local_2c);
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 0:
    if ((cVar1 != '\0') && (*(long *)(this + 0x188) == 0)) {
      uVar4 = 1;
      startTouch(this,*(ulong *)param_1);
      goto LAB_03899e80;
    }
    break;
  case 1:
    if (cVar1 == '\0') {
      uVar4 = 0;
      if (*(long *)(this + 0x188) == *(long *)param_1) goto LAB_03899f4c;
    }
    else if (*(long *)(this + 0x188) == 0) {
      uVar4 = 0;
      startTouch(this,*(ulong *)param_1);
      goto LAB_03899e80;
    }
    break;
  case 3:
    lVar2 = *(long *)param_1;
    lVar3 = *(long *)(this + 0x188);
    if ((cVar1 == '\0') || (lVar2 != lVar3)) goto LAB_03899ecc;
    uVar4 = 1;
    this[0x178] = (MiniGameCreditUI)((byte)this[0x178] ^ 1);
    goto LAB_03899f4c;
  case 4:
    lVar3 = *(long *)(this + 0x188);
    lVar2 = *(long *)param_1;
LAB_03899ecc:
    uVar4 = 0;
    if (lVar3 != lVar2) goto LAB_03899e80;
LAB_03899f4c:
    cancelTouch(this);
    goto LAB_03899e80;
  }
  uVar4 = 0;
LAB_03899e80:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCreditUI::SetCurrentCredit(int, bool) */

void __thiscall MiniGameCreditUI::SetCurrentCredit(MiniGameCreditUI *this,int param_1,bool param_2)

{
  int *piVar1;
  int local_10;
  int local_c;
  long local_8;
  
  *(int *)(this + 0x174) = param_1;
  local_8 = ___stack_chk_guard;
  if (9999 < param_1) {
    local_c = *(int *)(this + 0x170) + 1;
    local_10 = 2;
    piVar1 = eastl::min_alt<int>(&local_10,&local_c);
    *(int *)(this + 0x170) = *piVar1;
  }
  this[400] = (MiniGameCreditUI)param_2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCreditUI::MiniGameCreditUI() */

void __thiscall MiniGameCreditUI::MiniGameCreditUI(MiniGameCreditUI *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  PrimeTypeface *pPVar5;
  Image *pIVar6;
  Image *pIVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  Board *pBVar13;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  undefined8 local_80;
  undefined8 uStack_78;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x168));
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined ***)this = &PTR_GetClass_066b1310;
  *(undefined ***)(this + 0x10) = &PTR__MiniGameCreditUI_066b14b0;
  *(undefined ***)(this + 0x168) = &PTR_ButtonPress_066b14e0;
  this[0x178] = (MiniGameCreditUI)0x0;
  *(undefined4 *)(this + 0x170) = 0xffffffff;
  this[400] = (MiniGameCreditUI)0x0;
  FUN_05478178((Insets *)&local_80,&DAT_056f11a8,aCStack_98);
  pPVar5 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab69e8);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab69e8);
  uVar8 = MakeStretchableNewLawnButton
                    (0,(ButtonListener *)(this + 0x168),(wstring *)&local_80,pPVar5,pIVar6,
                     (Image *)0x0,pIVar7,0,0);
  *(undefined8 *)(this + 0x180) = uVar8;
  FUN_05476c50((Insets *)&local_80);
  nop();
  plVar9 = *(long **)(this + 0x180);
  pcVar11 = *(code **)(*plVar9 + 0x170);
  uVar8 = (**(code **)(*plVar9 + 0x178))(plVar9,0);
  (*pcVar11)(plVar9,1,uVar8);
  plVar9 = *(long **)(this + 0x180);
  if (plVar9 != (long *)0x0) {
    uVar3 = FUN_03896010(*(undefined4 *)(this + 0x38));
    uVar4 = FUN_03896014(*(undefined4 *)(this + 0x3c));
    (**(code **)(*plVar9 + 0x198))(plVar9,0,0,uVar3,uVar4);
    lVar12 = *(long *)(this + 0x180);
    Sexy::Insets::Insets((Insets *)&local_80,0,0,*(int *)(lVar12 + 0x50),*(int *)(lVar12 + 0x54));
    lVar10 = *(long *)(this + 0x180);
    iVar1 = *(int *)(lVar10 + 0x50);
    iVar2 = *(int *)(lVar10 + 0x54);
    *(undefined8 *)(lVar12 + 0x110) = local_80;
    *(undefined8 *)(lVar12 + 0x118) = uStack_78;
    Sexy::Insets::Insets((Insets *)&local_80,0,0,iVar1,iVar2);
    lVar12 = *(long *)(this + 0x180);
    iVar1 = *(int *)(lVar12 + 0x50);
    iVar2 = *(int *)(lVar12 + 0x54);
    *(undefined8 *)(lVar10 + 0x120) = local_80;
    *(undefined8 *)(lVar10 + 0x128) = uStack_78;
    Sexy::Insets::Insets((Insets *)&local_80,0,0,iVar1,iVar2);
    lVar10 = *(long *)(this + 0x180);
    iVar1 = *(int *)(lVar10 + 0x50);
    iVar2 = *(int *)(lVar10 + 0x54);
    *(undefined8 *)(lVar12 + 0x140) = local_80;
    *(undefined8 *)(lVar12 + 0x148) = uStack_78;
    Sexy::Insets::Insets((Insets *)&local_80,0,0,iVar1,iVar2);
    *(undefined8 *)(lVar10 + 0x130) = local_80;
    *(undefined8 *)(lVar10 + 0x138) = uStack_78;
  }
  *(undefined8 *)(this + 0x188) = 0;
  pBVar13 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<MiniGameCreditUI,bool(MiniGameCreditUI::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<MiniGameCreditUI,void(MiniGameCreditUI::*)()>
            (aDStack_38,(Insets *)&local_80);
  Board::RegisterTouchGameplayObject(pBVar13,aDStack_68,9,a_Stack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameCreditUI::StaticNew() */

MiniGameCreditUI * MiniGameCreditUI::StaticNew(void)

{
  MiniGameCreditUI *this;
  
  this = ::operator_new(0x198);
  MiniGameCreditUI(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCreditUI::Draw(Sexy::Graphics*) */

void __thiscall MiniGameCreditUI::Draw(MiniGameCreditUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  long lVar6;
  undefined8 uVar7;
  GraphicsAutoState aGStack_78 [8];
  FastCurve aFStack_70 [8];
  string asStack_68 [8];
  undefined1 auStack_60 [8];
  Insets aIStack_58 [12];
  int local_4c;
  float local_48 [2];
  float local_40;
  Insets aIStack_38 [16];
  int local_28 [4];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_78,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  iVar1 = FUN_03896010(*(undefined4 *)(this + 0x38));
  iVar2 = FUN_03896014(*(undefined4 *)(this + 0x3c));
  Sexy::Insets::Insets(aIStack_58,0,0,iVar1,iVar2);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab69e8);
  Sexy::Graphics::DrawImageBox(param_1,(TRect *)aIStack_58,pIVar5);
  CachedResourcePtr<Sexy::Image>::operator->((CachedResourcePtr<Sexy::Image> *)&DAT_06ab63b8);
  lVar6 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06ab63b8);
  iVar1 = FUN_03896dd4(5);
  Sexy::FastCurve::SetOutRange
            (aFStack_70,(float)iVar1,
             (float)((local_4c - (int)((float)*(int *)(lVar6 + 0x3c) * 1.3)) / 2));
  Sexy::SexyVector4::SexyVector4((SexyVector4 *)local_48);
  iVar1 = FUN_03896dd4(0xffffffe2);
  iVar2 = FUN_03896dd4(0);
  iVar3 = FUN_03896010(*(undefined4 *)(this + 0x38));
  iVar4 = FUN_03896014(*(undefined4 *)(this + 0x3c));
  Sexy::Insets::Insets(aIStack_38,iVar1 + (int)local_48[0] + (int)local_40,iVar2,iVar3,iVar4);
  Sexy::Insets::Insets((Insets *)local_28,aIStack_38);
  iVar1 = FUN_03896dd4(0x37);
  local_28[0] = local_28[0] + iVar1;
  TodStringTranslate(L"[PLANT_WARS_CREDIT_TEXT_LABEL]");
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,auStack_60,aIStack_38,uVar7,aCStack_18,5,1);
  FUN_05476c50(auStack_60);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x174));
  Sexy::ToWString(asStack_68);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  Sexy::Color::Color(aCStack_18,4);
  WriteWordInRect(param_1,auStack_60,(Insets *)local_28,uVar7,aCStack_18,5,1);
  FUN_05476c50(auStack_60);
  std::string::~string(asStack_68);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to MiniGameCreditUI::Draw(Sexy::Graphics*) */

void __thiscall MiniGameCreditUI::Draw(MiniGameCreditUI *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

