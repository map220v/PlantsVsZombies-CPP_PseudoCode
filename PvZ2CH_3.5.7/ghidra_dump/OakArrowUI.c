// Class: OakArrowUI


/* OakArrowUI::GetArrowCount() const */

undefined4 __thiscall OakArrowUI::GetArrowCount(OakArrowUI *this)

{
  return *(undefined4 *)(this + 0x168);
}


/* OakArrowUI::onDestroy() */

void OakArrowUI::onDestroy(void)

{
  UIWidget *in_x0;
  
  UIWidget::DestroyChildren(in_x0);
  UIWidget::DetachFromParent(in_x0);
  return;
}


/* OakArrowUI::SetCanCoolDown(bool) */

void __thiscall OakArrowUI::SetCanCoolDown(OakArrowUI *this,bool param_1)

{
  this[0x180] = (OakArrowUI)param_1;
  return;
}


/* OakArrowUI::SetArrowSelect(bool) */

void __thiscall OakArrowUI::SetArrowSelect(OakArrowUI *this,bool param_1)

{
  this[0x16c] = (OakArrowUI)param_1;
  return;
}


/* OakArrowUI::IsArrowSelect() const */

OakArrowUI __thiscall OakArrowUI::IsArrowSelect(OakArrowUI *this)

{
  return this[0x16c];
}


/* OakArrowUI::IsInCoolDown() const */

OakArrowUI __thiscall OakArrowUI::IsInCoolDown(OakArrowUI *this)

{
  return this[0x181];
}


/* OakArrowUI::onOakArrowHitted(int, int) */

void __thiscall OakArrowUI::onOakArrowHitted(OakArrowUI *this,int param_1,int param_2)

{
  if (param_1 != 1) {
    if (param_1 == 2) {
      if (*(int *)(this + 0x164) == 1) goto LAB_0430e0ec;
    }
    else if ((param_1 == 3) && (*(int *)(this + 0x164) == 3)) goto LAB_0430e0ec;
    return;
  }
  if (*(int *)(this + 0x164) != 2) {
    return;
  }
LAB_0430e0ec:
  *(int *)(this + 0x168) = *(int *)(this + 0x168) + param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakArrowUI::StaticClassInit() */

void OakArrowUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"OakArrowUI");
    (*pcVar2)(plVar1,asStack_10,FUN_0430e824,0x188,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OakArrowUI::StaticGetClass() */

long * OakArrowUI::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"OakArrowUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OakArrowUI::GetClass() const */

long * OakArrowUI::GetClass(void)

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
  (*pcVar3)(plVar1,"OakArrowUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OakArrowUI::SetArrowCount(int) */

void __thiscall OakArrowUI::SetArrowCount(OakArrowUI *this,int param_1)

{
  OakArrowUI OVar1;
  
  if (param_1 < 0) {
    OVar1 = this[0x180];
    *(undefined4 *)(this + 0x168) = 0;
  }
  else {
    *(int *)(this + 0x168) = param_1;
    if (param_1 != 0) {
      return;
    }
    OVar1 = this[0x180];
  }
  if (OVar1 == (OakArrowUI)0x0) {
    return;
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  this[0x181] = (OakArrowUI)0x1;
  *(undefined4 *)(this + 0x184) = 0x40400000;
  return;
}


/* OakArrowUI::~OakArrowUI() */

void __thiscall OakArrowUI::~OakArrowUI(OakArrowUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06832620;
  *(undefined ***)(this + 0x10) = &PTR__OakArrowUI_068327c0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170));
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to OakArrowUI::~OakArrowUI() */

void __thiscall OakArrowUI::~OakArrowUI(OakArrowUI *this)

{
  ~OakArrowUI(this + -0x10);
  return;
}


/* OakArrowUI::~OakArrowUI() */

void __thiscall OakArrowUI::~OakArrowUI(OakArrowUI *this)

{
  ~OakArrowUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to OakArrowUI::~OakArrowUI() */

void __thiscall OakArrowUI::~OakArrowUI(OakArrowUI *this)

{
  ~OakArrowUI(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakArrowUI::OakArrowUI() */

void __thiscall OakArrowUI::OakArrowUI(OakArrowUI *this)

{
  long lVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06832620;
  *(undefined ***)(this + 0x10) = &PTR__OakArrowUI_068327c0;
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
  this[0x181] = (OakArrowUI)0x0;
  this[0x180] = (OakArrowUI)0x0;
  this[0x16c] = (OakArrowUI)0x0;
  *(undefined4 *)(this + 0x184) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OakArrowUI::StaticNew() */

OakArrowUI * OakArrowUI::StaticNew(void)

{
  OakArrowUI *this;
  
  this = ::operator_new(0x188);
  OakArrowUI(this);
  return this;
}


/* OakArrowUI::onUpdate() */

void __thiscall OakArrowUI::onUpdate(OakArrowUI *this)

{
  float fVar1;
  float fVar2;
  
  if ((this[0x180] != (OakArrowUI)0x0) && (this[0x181] != (OakArrowUI)0x0)) {
    fVar1 = (float)PVZ_Dt();
    fVar2 = *(float *)(this + 0x184);
    *(float *)(this + 0x184) = fVar2 - fVar1;
    if (fVar2 - fVar1 <= 0.0) {
      this[0x181] = (OakArrowUI)0x0;
      *(undefined4 *)(this + 0x168) = 0xc;
      *(undefined4 *)(this + 0x184) = 0;
    }
  }
  return;
}


/* OakArrowUI::registerForEvents() */

void __thiscall OakArrowUI::registerForEvents(OakArrowUI *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onOakArrowHitted);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<OakArrowUI,void(OakArrowUI::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::OakArrowHitted,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakArrowUI::SetArrowType(oak_arrow_type) */

void __thiscall OakArrowUI::SetArrowType(OakArrowUI *this,uint param_2)

{
  CachedResourcePtr *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  *(uint *)(this + 0x164) = param_2;
  local_8 = ___stack_chk_guard;
  if (param_2 < 4) {
    switch(param_2) {
    case 0:
      CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06af8de0);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x170),(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      this_00 = (CachedResourcePtr *)&DAT_06af8ed8;
      break;
    case 1:
      CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06af8e10);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x170),(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      this_00 = (CachedResourcePtr *)&DAT_06af8f18;
      break;
    case 2:
      CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06af8e88);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x170),(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      this_00 = (CachedResourcePtr *)&DAT_06af8fe0;
      break;
    case 3:
      CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06af8f98);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x170),(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      this_00 = (CachedResourcePtr *)&DAT_06af8e60;
    }
    CachedResourcePtr::operator_cast_to_RtWeakPtr(this_00);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakArrowUI::OnTouch(Sexy::Touch const&) */

void __thiscall OakArrowUI::OnTouch(OakArrowUI *this,Touch *param_1)

{
  OakArrowUI OVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  Collectable *this_00;
  long *plVar5;
  Insets *pIVar6;
  int extraout_w1;
  Board *this_01;
  float fVar7;
  float fVar8;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  RtId aRStack_38 [16];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x2e);
    while( true ) {
      OVar1 = (OakArrowUI)Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
      if (!(bool)OVar1) break;
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_38);
      Sexy::RtId::~RtId(aRStack_38);
      this_00 = (Collectable *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      cVar2 = Collectable::IsCollecting(this_00);
      if (cVar2 == '\0') {
        fVar7 = (float)FUN_0430e218((float)*(int *)(param_1 + 0x10));
        fVar8 = (float)FUN_0430e218((float)*(int *)(param_1 + 0x14));
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        pIVar6 = (Insets *)(**(code **)(*plVar5 + 0x178))();
        Sexy::Insets::Insets((Insets *)aRStack_38,pIVar6);
        cVar2 = Sexy::TRect<int>::Contains((TRect<int> *)aRStack_38,(int)fVar7,(int)fVar8);
        if (cVar2 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
          OVar1 = (OakArrowUI)0x0;
          goto LAB_0430ece0;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    uVar3 = FUN_0430e190(*(undefined4 *)(this_01 + 0x104));
    if (((uVar3 - 9 < 2) || ((uVar3 & 0xfffffffb) == 3)) ||
       (cVar2 = Board::IsThereCachedCursor(this_01), cVar2 != '\0')) goto LAB_0430ece0;
    if (this[0x181] == (OakArrowUI)0x0) {
      if (this[0x16c] == (OakArrowUI)0x0) {
        OVar1 = (OakArrowUI)0x1;
        MessageRouter::Post<int,int>
                  ((MessageRouter *)gMessageRouter,Message::OakArrowTouch,*(int *)(this + 0x164));
        goto LAB_0430ece0;
      }
      OVar1 = this[0x180];
      if ((OVar1 != (OakArrowUI)0x0) && (*(int *)(this + 0x168) < 0xc)) {
        this[0x181] = (OakArrowUI)0x1;
        *(undefined4 *)(this + 0x184) = 0x40400000;
        MessageRouter::Post((_func_void *)gMessageRouter);
        goto LAB_0430ece0;
      }
    }
  }
  OVar1 = (OakArrowUI)0x0;
LAB_0430ece0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(OVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakArrowUI::Draw(Sexy::Graphics*) */

void __thiscall OakArrowUI::Draw(OakArrowUI *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Image *pIVar7;
  LotteryResultProgressBar *pLVar8;
  undefined8 uVar9;
  SalesProgressBar *pSVar10;
  ResourceInfo *pRVar11;
  float *pfVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float local_34;
  GraphicsAutoState aGStack_30 [8];
  undefined4 local_28 [4];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  pIVar7 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06af8e38);
  iVar2 = FUN_0430e118(*(undefined4 *)(this + 0x38));
  pLVar8 = (LotteryResultProgressBar *)
           CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06af8e38);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar4 = FUN_0430e228(2);
  iVar5 = FUN_0430e228(0);
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar4 + (iVar2 - iVar3) / 2,iVar5);
  if (this[0x180] != (OakArrowUI)0x0) {
    iVar2 = FUN_0430e118(*(undefined4 *)(this + 0x38));
    pLVar8 = (LotteryResultProgressBar *)
             CachedResourcePtr<Sexy::Image>::operator->
                       ((CachedResourcePtr<Sexy::Image> *)&DAT_06af8eb0);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
    fVar15 = (float)((iVar2 - iVar3) / 2);
    pIVar7 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                ((CachedResourcePtr<Sexy::Image> *)&DAT_06af8eb0);
    iVar2 = FUN_0430e228(0);
    Sexy::Graphics::DrawImage(param_1,pIVar7,(int)fVar15,iVar2);
    if (this[0x181] != (OakArrowUI)0x0) {
      local_34 = *(float *)(this + 0x184) * 0.33333334;
      local_28[0] = 0;
      local_18[0] = 0x3f800000;
      pfVar12 = eastl::max_alt<float>(&local_34,(float *)local_28);
      pfVar12 = eastl::min_alt<float>((float *)local_18,pfVar12);
      fVar14 = *pfVar12;
      pLVar8 = (LotteryResultProgressBar *)
               CachedResourcePtr<Sexy::Image>::operator->
                         ((CachedResourcePtr<Sexy::Image> *)&DAT_06af8eb0);
      iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
      iVar3 = FUN_0430e228(0);
      pSVar10 = (SalesProgressBar *)
                CachedResourcePtr<Sexy::Image>::operator->
                          ((CachedResourcePtr<Sexy::Image> *)&DAT_06af8eb0);
      iVar4 = SalesProgressBar::GetCurrentLevel(pSVar10);
      pSVar10 = (SalesProgressBar *)
                CachedResourcePtr<Sexy::Image>::operator->
                          ((CachedResourcePtr<Sexy::Image> *)&DAT_06af8eb0);
      iVar5 = SalesProgressBar::GetCurrentLevel(pSVar10);
      iVar6 = FUN_0430e228(1);
      Sexy::Insets::Insets((Insets *)local_28,0x3c,0x3c,0x3c,0xff);
      Sexy::Insets::Insets((Insets *)local_18,0,0,0,0);
      DrawRadialCooldown(fVar14,(float)(iVar2 / 2) + fVar15,(float)(iVar3 + iVar4 / 2),
                         (float)(iVar5 / 2 - iVar6),param_1,(Insets *)local_28,(Insets *)local_18);
    }
  }
  if (this[0x16c] == (OakArrowUI)0x0) {
    this_00 = (RtWeakPtr *)(this + 0x170);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  }
  else {
    this_00 = (RtWeakPtr *)(this + 0x178);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  }
  if (bVar1) {
    pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    iVar2 = FUN_0430e118(*(undefined4 *)(this + 0x38));
    pLVar8 = (LotteryResultProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
    iVar4 = FUN_0430e228(7);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar11,(iVar2 - iVar3) / 2,iVar4);
  }
  pIVar7 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06af9040);
  iVar2 = FUN_0430e118(*(undefined4 *)(this + 0x38));
  pLVar8 = (LotteryResultProgressBar *)
           CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06af9040);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar4 = FUN_0430e228(0x2d);
  Sexy::Graphics::DrawImage(param_1,pIVar7,(iVar2 - iVar3) / 2,iVar4);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
  iVar2 = FUN_0430e118(*(undefined4 *)(this + 0x38));
  pLVar8 = (LotteryResultProgressBar *)
           CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06af9040);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar4 = FUN_0430e228(0x2d);
  pLVar8 = (LotteryResultProgressBar *)
           CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06af9040);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  pSVar10 = (SalesProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06af9040);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
  Sexy::StrFormat(L"%d",local_28,(ulong)*(uint *)(this + 0x168));
  uVar13 = 2;
  if (0 < *(int *)(this + 0x168)) {
    uVar13 = 1;
  }
  Sexy::Color::Color((Color *)local_18,uVar13);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)((iVar2 - iVar3) / 2),(float)iVar4,(float)iVar5,(float)iVar6,
             uVar9,param_1,local_28,1,1,(Color *)local_18,0);
  FUN_05476c50(local_28);
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to OakArrowUI::Draw(Sexy::Graphics*) */

void __thiscall OakArrowUI::Draw(OakArrowUI *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

