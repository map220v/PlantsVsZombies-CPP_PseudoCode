// Class: CListUI


/* CListUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void CListUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to CListUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall CListUI::ScrollTargetReached(CListUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* CListUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void CListUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to CListUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall CListUI::ScrollTargetInterrupted(CListUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* CListUI::ButtonPress(int) */

int CListUI::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to CListUI::ButtonPress(int) */

void __thiscall CListUI::ButtonPress(CListUI *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* CListUI::Resize(int, int, int, int) */

void __thiscall CListUI::Resize(CListUI *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  iVar1 = *(int *)(this + 0x50) + *(int *)(this + 0xfc) * -2;
  (**(code **)(**(long **)(this + 0x118) + 0x198))(*(long **)(this + 0x118),0,0,iVar1,param_4);
  (**(code **)(**(long **)(this + 0x110) + 0x198))
            (*(long **)(this + 0x110),*(undefined4 *)(this + 0xfc),*(int *)(this + 0xf8),iVar1,
             (*(int *)(this + 0x54) - *(int *)(this + 0xf8)) - *(int *)(this + 0x100));
  return;
}


/* CListUI::ButtonDepress(int) */

void __thiscall CListUI::ButtonDepress(CListUI *this,int param_1)

{
  char cVar1;
  Widget *pWVar2;
  
  if (*(int *)(this + 0x120) != param_1) {
    pWVar2 = *(Widget **)(this + 0x108);
    if (pWVar2 != (Widget *)0x0) {
      if ((code *)**(undefined8 **)pWVar2 == CSelectChangedHandler::OnSelectChanged) {
        cVar1 = CSelectChangedHandler::OnSelectChanged(pWVar2,(int)this);
      }
      else {
        cVar1 = (*(code *)**(undefined8 **)pWVar2)(pWVar2,this,param_1);
      }
      if (cVar1 == '\0') {
        return;
      }
    }
    if (*(CListPanel **)(this + 0x118) == (CListPanel *)0x0) {
      *(int *)(this + 0x120) = param_1;
      return;
    }
    CListPanel::Deselect(*(CListPanel **)(this + 0x118),*(int *)(this + 0x120));
    *(int *)(this + 0x120) = param_1;
    if (*(CListPanel **)(this + 0x118) != (CListPanel *)0x0) {
      CListPanel::Select(*(CListPanel **)(this + 0x118),param_1);
      return;
    }
  }
  return;
}


/* non-virtual thunk to CListUI::ButtonDepress(int) */

void __thiscall CListUI::ButtonDepress(CListUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* CListUI::~CListUI() */

void __thiscall CListUI::~CListUI(CListUI *this)

{
  *(undefined ***)this = &PTR_GetClass_0690b120;
  *(undefined **)(this + 0xd8) = &DAT_0690b460;
  *(undefined ***)(this + 0xe0) = &PTR__CListUI_0690b4a8;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to CListUI::~CListUI() */

void __thiscall CListUI::~CListUI(CListUI *this)

{
  ~CListUI(this + -0xe0);
  return;
}


/* CListUI::~CListUI() */

void __thiscall CListUI::~CListUI(CListUI *this)

{
  ~CListUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CListUI::~CListUI() */

void __thiscall CListUI::~CListUI(CListUI *this)

{
  ~CListUI(this + -0xe0);
  return;
}


/* CListUI::Draw(Sexy::Graphics*) */

void __thiscall CListUI::Draw(CListUI *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  int iVar1;
  bool bVar2;
  ResourceInfo *pRVar3;
  long lVar4;
  
  nop();
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xe8));
  if (bVar2) {
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xe8));
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar3,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  this_00 = (RtWeakPtr *)(this + 0xf0);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (!bVar2) {
    return;
  }
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  iVar1 = *(int *)(this + 0x50);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::Graphics::DrawImage(param_1,(Image *)pRVar3,iVar1 - *(int *)(lVar4 + 0x38) >> 1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CListUI::CListUI() */

void __thiscall CListUI::CListUI(CListUI *this)

{
  PVZ2UIScrollingWidget *this_00;
  CListPanel *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_0690b120;
  *(undefined **)(this + 0xd8) = &DAT_0690b460;
  *(undefined ***)(this + 0xe0) = &PTR__CListUI_0690b4a8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf0));
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0xf8) = 10;
  *(undefined4 *)(this + 0xfc) = 4;
  *(undefined4 *)(this + 0x100) = 5;
  *(undefined4 *)(this + 0x120) = 0xffffffff;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xe0));
  *(PVZ2UIScrollingWidget **)(this + 0x110) = this_00;
  this_01 = ::operator_new(0x118);
  CListPanel::CListPanel(this_01,this);
  *(CListPanel **)(this + 0x118) = this_01;
  (**(code **)(**(long **)(this + 0x110) + 0x60))(*(long **)(this + 0x110),this_01);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x110));
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b2b258);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xe8),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

