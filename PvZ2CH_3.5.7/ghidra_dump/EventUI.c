// Class: EventUI


/* EventUI::onLayoutFinalized() */

void __thiscall EventUI::onLayoutFinalized(EventUI *this)

{
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(this + 0x218),*(undefined4 *)(this + 0x21c),
             *(undefined4 *)(this + 0x220),*(undefined4 *)(this + 0x224));
  return;
}


/* EventUI::SetRect(Sexy::TRect<int>) */

void __thiscall EventUI::SetRect(EventUI *this,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(this + 0x218) = *param_2;
  *(undefined8 *)(this + 0x220) = uVar1;
  return;
}


/* EventUI::SetIconImage(Sexy::RtWeakPtr<Sexy::Image>) */

void __thiscall EventUI::SetIconImage(EventUI *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x228),param_2);
  return;
}


/* EventUI::SetBackgroundImage(Sexy::RtWeakPtr<Sexy::Image>) */

void __thiscall EventUI::SetBackgroundImage(EventUI *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x210),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventUI::StaticClassInit() */

void EventUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"EventUI");
    (*pcVar2)(plVar1,asStack_10,FUN_038dc64c,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EventUI::StaticGetClass() */

long * EventUI::StaticGetClass(void)

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
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"EventUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EventUI::onDraw(Sexy::Graphics*) */

void __thiscall EventUI::onDraw(EventUI *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LotteryResultProgressBar *pLVar8;
  SalesProgressBar *pSVar9;
  ResourceInfo *pRVar10;
  
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x210));
  if (bVar3) {
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x210));
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar10,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  this_00 = (RtWeakPtr *)(this + 0x228);
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (!bVar3) {
    return;
  }
  iVar1 = *(int *)(this + 0x50);
  pLVar8 = (LotteryResultProgressBar *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar2 = *(int *)(this + 0x54);
  pSVar9 = (SalesProgressBar *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar9);
  pLVar8 = (LotteryResultProgressBar *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  pSVar9 = (SalesProgressBar *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar9);
  pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar10,(int)(((float)iVar1 - (float)iVar4) * 0.5),
             (int)(((float)iVar2 - (float)iVar5) * 0.5),(int)(float)iVar6,(int)(float)iVar7);
  return;
}


/* EventUI::EventUI() */

void __thiscall EventUI::EventUI(EventUI *this)

{
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_066bb830;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x210));
  Sexy::Insets::Insets((Insets *)(this + 0x218));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x228));
  return;
}


/* EventUI::StaticNew() */

EventUI * EventUI::StaticNew(void)

{
  EventUI *this;
  
  this = ::operator_new(0x230);
  EventUI(this);
  return this;
}


/* EventUI::~EventUI() */

void __thiscall EventUI::~EventUI(EventUI *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_066bb830;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x228));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x210));
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  return;
}


/* EventUI::~EventUI() */

void __thiscall EventUI::~EventUI(EventUI *this)

{
  ~EventUI(this);
  AK::FreeHook(this);
  return;
}

