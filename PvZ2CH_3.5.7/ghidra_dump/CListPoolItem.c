// Class: CListPoolItem


/* CListPoolItem::Resize(int, int, int, int) */

void __thiscall
CListPoolItem::Resize(CListPoolItem *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  plVar5 = *(long **)(this + 0x108);
  if (plVar5 != (long *)0x0) {
    iVar2 = FUN_048490b0(0x18);
    uVar3 = FUN_048490b0(2);
    iVar1 = *(int *)(this + 0x50);
    iVar4 = FUN_048490b0(4);
    (**(code **)(*plVar5 + 0x198))(plVar5,iVar2,uVar3,iVar1 - iVar2,*(int *)(this + 0x54) - iVar4);
  }
  return;
}


/* CListPoolItem::SetImgHeader(Sexy::RtWeakPtr<Sexy::Image>) */

void __thiscall CListPoolItem::SetImgHeader(CListPoolItem *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xe0),param_2);
  return;
}


/* CListPoolItem::SetButton(PVZ2UIButton*) */

void __thiscall CListPoolItem::SetButton(CListPoolItem *this,PVZ2UIButton *param_1)

{
  if (*(long *)(this + 0x108) != 0) {
    (**(code **)(*(long *)this + 0x68))();
    if (*(long **)(this + 0x108) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x108) + 0x18))();
    }
  }
  *(PVZ2UIButton **)(this + 0x108) = param_1;
  if (param_1 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)this + 0x60))(this,param_1);
  }
  (**(code **)(*(long *)this + 0x310))(this,0);
  return;
}


/* CListPoolItem::SetButtonImgSel(Sexy::RtWeakPtr<Sexy::Image>, Sexy::RtWeakPtr<Sexy::Image>) */

void __thiscall
CListPoolItem::SetButtonImgSel(CListPoolItem *this,RtWeakPtr *param_2,RtWeakPtr *param_3)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xe8),param_2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xf0),param_3);
  return;
}


/* CListPoolItem::SetButtonImg(Sexy::RtWeakPtr<Sexy::Image>, Sexy::RtWeakPtr<Sexy::Image>) */

void __thiscall
CListPoolItem::SetButtonImg(CListPoolItem *this,RtWeakPtr *param_2,RtWeakPtr *param_3)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xf8),param_2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x100),param_3);
  return;
}


/* CListPoolItem::~CListPoolItem() */

void __thiscall CListPoolItem::~CListPoolItem(CListPoolItem *this)

{
  CListPoolItem *this_00;
  CListPoolItem *this_01;
  
  this_00 = this + 0xf8;
  *(undefined ***)this = &PTR_GetClass_0690aad0;
  this_01 = this + 0x108;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  do {
    this_01 = this_01 + -8;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  } while (this_00 != this_01);
  do {
    this_00 = this_00 + -8;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  } while (this + 0xe8 != this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  CListItem::~CListItem((CListItem *)this);
  return;
}


/* CListPoolItem::~CListPoolItem() */

void __thiscall CListPoolItem::~CListPoolItem(CListPoolItem *this)

{
  ~CListPoolItem(this);
  AK::FreeHook(this);
  return;
}


/* CListPoolItem::CListPoolItem(int) */

void __thiscall CListPoolItem::CListPoolItem(CListPoolItem *this,int param_1)

{
  CListItem::CListItem((CListItem *)this);
  *(undefined ***)this = &PTR_GetClass_0690aad0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x100));
  *(undefined8 *)(this + 0x108) = 0;
  *(int *)(this + 0x110) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CListPoolItem::OnSelect(bool) */

void __thiscall CListPoolItem::OnSelect(CListPoolItem *this,bool param_1)

{
  ResourceInfo *pRVar1;
  CListPoolItem *this_00;
  PVZ2UIButton *this_01;
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  this_01 = *(PVZ2UIButton **)(this + 0x108);
  local_8 = ___stack_chk_guard;
  if (this_01 != (PVZ2UIButton *)0x0) {
    if (param_1) {
      pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xe8));
      PVZ2UIImage::PVZ2UIImage(aPStack_78,pRVar1,3);
      this_00 = this + 0xf0;
    }
    else {
      pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xf8));
      PVZ2UIImage::PVZ2UIImage(aPStack_78,pRVar1,3);
      this_00 = this + 0x100;
    }
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,pRVar1,3);
    PVZ2UIButton::SetDialogStates(this_01,aPStack_78,aPStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CListPoolItem::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall CListPoolItem::DrawAll(CListPoolItem *this,ModalFlags *param_1,Graphics *param_2)

{
  RtMixedPtrBase *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ResourceInfo *pRVar7;
  long lVar8;
  int iVar9;
  
  this_00 = (RtMixedPtrBase *)(this + 0xd8);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  cVar4 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar4 != '\0') {
    iVar5 = FUN_048490b0(2);
    iVar5 = iVar5 + *(int *)(this + 0x54);
    iVar9 = *(int *)(*(long *)(this + 0x108) + 0x50);
    iVar1 = *(int *)(*(long *)(this + 0x108) + 0x48);
    iVar6 = FUN_048490b0(4);
    iVar6 = ((iVar9 + iVar1) - iVar5) - iVar6;
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    if (*(int *)(lVar8 + 0x38) < iVar6) {
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar9 = *(int *)(lVar8 + 0x38);
      iVar1 = *(int *)(*(long *)(this + 0x108) + 0x4c);
      iVar2 = *(int *)(*(long *)(this + 0x108) + 0x54);
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar3 = *(int *)(lVar8 + 0x3c);
      pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
      Sexy::Graphics::DrawImage
                (param_2,(Image *)pRVar7,iVar5 + (iVar6 - iVar9 >> 1),iVar1 + (iVar2 - iVar3 >> 1));
    }
    else {
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar9 = *(int *)(lVar8 + 0x3c);
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar1 = *(int *)(*(long *)(this + 0x108) + 0x54);
      iVar2 = *(int *)(*(long *)(this + 0x108) + 0x4c);
      iVar9 = (int)(((float)iVar6 * (float)iVar9) / (float)*(int *)(lVar8 + 0x38));
      pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
      Sexy::Graphics::DrawImage
                (param_2,(Image *)pRVar7,iVar5,iVar2 + (iVar1 - iVar9 >> 1),iVar6,iVar9);
    }
  }
  cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xe0));
  if (cVar4 == '\0') {
    return;
  }
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xe0));
  Sexy::Graphics::DrawImage(param_2,(Image *)pRVar7,0,0,*(int *)(this + 0x54),*(int *)(this + 0x54))
  ;
  return;
}

