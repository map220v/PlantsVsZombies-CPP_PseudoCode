// Class: WhackAMoleUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleUI::StaticClassInit() */

void WhackAMoleUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"WhackAMoleUI");
    (*pcVar2)(plVar1,asStack_10,FUN_03b5ab94,400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WhackAMoleUI::StaticGetClass() */

long * WhackAMoleUI::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WhackAMoleUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WhackAMoleUI::GetClass() const */

long * WhackAMoleUI::GetClass(void)

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
  (*pcVar3)(plVar1,"WhackAMoleUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WhackAMoleUI::SetDisable(bool) */

void __thiscall WhackAMoleUI::SetDisable(WhackAMoleUI *this,bool param_1)

{
  this[0x188] = (WhackAMoleUI)param_1;
  return;
}


/* WhackAMoleUI::SetArrowCount(int) */

void __thiscall WhackAMoleUI::SetArrowCount(WhackAMoleUI *this,int param_1)

{
  if (param_1 < 0) {
    *(undefined4 *)(this + 0x168) = 0;
    if (this[0x180] != (WhackAMoleUI)0x0) {
      this[0x181] = (WhackAMoleUI)0x1;
      *(undefined4 *)(this + 0x184) = 0x40400000;
    }
  }
  else {
    *(int *)(this + 0x168) = param_1;
    if ((param_1 == 0) && (this[0x180] != (WhackAMoleUI)0x0)) {
      this[0x181] = (WhackAMoleUI)0x1;
      *(undefined4 *)(this + 0x184) = 0x40400000;
    }
  }
  return;
}


/* WhackAMoleUI::~WhackAMoleUI() */

void __thiscall WhackAMoleUI::~WhackAMoleUI(WhackAMoleUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06733800;
  *(undefined ***)(this + 0x10) = &PTR__WhackAMoleUI_067339a0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170));
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WhackAMoleUI::~WhackAMoleUI() */

void __thiscall WhackAMoleUI::~WhackAMoleUI(WhackAMoleUI *this)

{
  ~WhackAMoleUI(this + -0x10);
  return;
}


/* WhackAMoleUI::~WhackAMoleUI() */

void __thiscall WhackAMoleUI::~WhackAMoleUI(WhackAMoleUI *this)

{
  ~WhackAMoleUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WhackAMoleUI::~WhackAMoleUI() */

void __thiscall WhackAMoleUI::~WhackAMoleUI(WhackAMoleUI *this)

{
  ~WhackAMoleUI(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleUI::WhackAMoleUI() */

void __thiscall WhackAMoleUI::WhackAMoleUI(WhackAMoleUI *this)

{
  long lVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06733800;
  *(undefined ***)(this + 0x10) = &PTR__WhackAMoleUI_067339a0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x170));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x178));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x170),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  *(undefined4 *)(this + 0x168) = 0;
  lVar1 = ___stack_chk_guard;
  this[0x181] = (WhackAMoleUI)0x0;
  this[0x180] = (WhackAMoleUI)0x0;
  this[0x16c] = (WhackAMoleUI)0x0;
  this[0x188] = (WhackAMoleUI)0x0;
  *(undefined4 *)(this + 0x184) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WhackAMoleUI::StaticNew() */

WhackAMoleUI * WhackAMoleUI::StaticNew(void)

{
  WhackAMoleUI *this;
  
  this = ::operator_new(400);
  WhackAMoleUI(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleUI::SetWhackAMoleType(prop_type) */

void __thiscall WhackAMoleUI::SetWhackAMoleType(WhackAMoleUI *this,int param_2)

{
  CachedResourcePtr *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x164) = param_2;
  local_8 = ___stack_chk_guard;
  if (param_2 == 1) {
    CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06acbc00);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x170),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    this_00 = (CachedResourcePtr *)&DAT_06acbd68;
  }
  else {
    if (param_2 != 2) goto LAB_03b5ab34;
    CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06acbdd0);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x170),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    this_00 = (CachedResourcePtr *)&DAT_06acbcc8;
  }
  CachedResourcePtr::operator_cast_to_RtWeakPtr(this_00);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
LAB_03b5ab34:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WhackAMoleUI::OnTouch(Sexy::Touch const&) */

undefined8 __thiscall WhackAMoleUI::OnTouch(WhackAMoleUI *this,Touch *param_1)

{
  char cVar1;
  uint uVar2;
  Board *this_00;
  
  if (this[0x188] != (WhackAMoleUI)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    uVar2 = FUN_03b5a2b0(*(undefined4 *)(this_00 + 0x104));
    if (((1 < uVar2 - 9) && ((uVar2 & 0xfffffffb) != 3)) &&
       (cVar1 = Board::IsThereCachedCursor(this_00), cVar1 == '\0')) {
      MessageRouter::Post<int,int>
                ((MessageRouter *)gMessageRouter,Message::PropTouch,*(int *)(this + 0x164));
      return 1;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleUI::Draw(Sexy::Graphics*) */

void __thiscall WhackAMoleUI::Draw(WhackAMoleUI *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  LotteryResultProgressBar *pLVar7;
  SalesProgressBar *pSVar8;
  undefined8 uVar9;
  ResourceInfo *pRVar10;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  undefined4 uVar11;
  RtWeakPtr *this_01;
  GraphicsAutoState aGStack_28 [8];
  undefined1 auStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_28,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  pIVar6 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06acbc28);
  iVar2 = FUN_03b5a238(*(undefined4 *)(this + 0x38));
  pLVar7 = (LotteryResultProgressBar *)
           CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06acbc28);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  iVar4 = FUN_03b5a2c0(2);
  iVar5 = FUN_03b5a2c0(0);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar4 + (iVar2 - iVar3) / 2,iVar5);
  if ((this[0x188] == (WhackAMoleUI)0x0) && (this[0x16c] == (WhackAMoleUI)0x0)) {
    this_01 = (RtWeakPtr *)(this + 0x170);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar1) goto LAB_03b5b3ac;
  }
  else {
    this_01 = (RtWeakPtr *)(this + 0x178);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar1) {
LAB_03b5b3ac:
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
      iVar2 = FUN_03b5a238(*(undefined4 *)(this + 0x38));
      pLVar7 = (LotteryResultProgressBar *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
      iVar4 = FUN_03b5a2c0(7);
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar10,(iVar2 - iVar3) / 2,iVar4);
    }
  }
  pIVar6 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06acbd98);
  iVar2 = FUN_03b5a2c0(0x2d);
  iVar3 = FUN_03b5a238(*(undefined4 *)(this + 0x38));
  pSVar8 = (SalesProgressBar *)
           CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06acbd98);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar8);
  Sexy::Graphics::DrawImage(param_1,pIVar6,0,iVar2,iVar3,iVar4);
  if (*(int *)(this + 0x164) == 1) {
    iVar2 = FUN_03b5a2c0(5);
    iVar3 = FUN_03b5a2c0(0x2d);
    pLVar7 = (LotteryResultProgressBar *)
             CachedResourcePtr<Sexy::Image>::operator->
                       ((CachedResourcePtr<Sexy::Image> *)&DAT_06acbd98);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    pSVar8 = (SalesProgressBar *)
             CachedResourcePtr<Sexy::Image>::operator->
                       ((CachedResourcePtr<Sexy::Image> *)&DAT_06acbd98);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar8);
    Sexy::Insets::Insets((Insets *)aCStack_18,iVar2,iVar3,iVar4 / 3,iVar5);
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06acbca0;
  }
  else {
    if (*(int *)(this + 0x164) != 2) goto LAB_03b5b284;
    iVar2 = FUN_03b5a2c0(5);
    iVar3 = FUN_03b5a2c0(0x2d);
    pLVar7 = (LotteryResultProgressBar *)
             CachedResourcePtr<Sexy::Image>::operator->
                       ((CachedResourcePtr<Sexy::Image> *)&DAT_06acbd98);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    pSVar8 = (SalesProgressBar *)
             CachedResourcePtr<Sexy::Image>::operator->
                       ((CachedResourcePtr<Sexy::Image> *)&DAT_06acbd98);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar8);
    Sexy::Insets::Insets((Insets *)aCStack_18,iVar2,iVar3,iVar4 / 3,iVar5);
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06acbd40;
  }
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  DrawAdaptiveImage(param_1,aCStack_18,uVar9);
LAB_03b5b284:
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
  pLVar7 = (LotteryResultProgressBar *)
           CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06acbd98);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  iVar3 = FUN_03b5a2c0(0x2d);
  pLVar7 = (LotteryResultProgressBar *)
           CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06acbd98);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  pSVar8 = (SalesProgressBar *)
           CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06acbd98);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar8);
  Sexy::StrFormat(L"%d",auStack_20,(ulong)*(uint *)(this + 0x168));
  uVar11 = 2;
  if (0 < *(int *)(this + 0x168)) {
    uVar11 = 1;
  }
  Sexy::Color::Color(aCStack_18,uVar11);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)(iVar2 / 2),(float)iVar3,(float)iVar4,(float)iVar5,uVar9,
             param_1,auStack_20,0,1,aCStack_18,0);
  FUN_05476c50(auStack_20);
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WhackAMoleUI::Draw(Sexy::Graphics*) */

void __thiscall WhackAMoleUI::Draw(WhackAMoleUI *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

