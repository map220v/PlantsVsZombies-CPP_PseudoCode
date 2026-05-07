// Class: CListPanel


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CListPanel::Resize(int, int, int, int) */

void CListPanel::Resize(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  Widget *this;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  this = (Widget *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  iVar2 = *(int *)(this + 0xf4);
  local_c = 0;
  CaculateListMetrics(*(int *)(this + 0xe0),*(int *)(this + 0xf0),(int *)(this + 0xe8),param_4,
                      &local_14,&local_10,&local_c);
  uVar10 = 0;
  while( true ) {
    uVar11 = *(undefined8 *)(this + 0xf8);
    uVar9 = FUN_0484902c(uVar11,*(undefined8 *)(this + 0x100));
    if (uVar9 <= uVar10) break;
    iVar3 = *(int *)(this + 0xe4);
    iVar4 = *(int *)(this + 0xe0);
    iVar7 = 0;
    if (local_14 != 0) {
      iVar7 = (int)uVar10 / local_14;
    }
    iVar5 = *(int *)(this + 0xec);
    iVar1 = iVar4 + local_c;
    iVar6 = iVar7 * local_14;
    puVar8 = (undefined8 *)FUN_04849038(uVar11,uVar10);
    (**(code **)(*(long *)*puVar8 + 0x198))
              ((long *)*puVar8,((int)uVar10 - iVar6) * iVar1 + local_10,
               iVar2 + iVar7 * (iVar3 + iVar5),iVar4,iVar3);
    uVar10 = uVar10 + 1;
  }
  iVar2 = 0;
  if (local_14 != 0) {
    iVar2 = (int)uVar9 / local_14;
  }
  Sexy::Widget::Resize
            (this,param_2,param_3,param_4,
             *(int *)(this + 0xe4) + (*(int *)(this + 0xec) + *(int *)(this + 0xe4)) * iVar2 +
             *(int *)(this + 0xf4) * 2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CListPanel::Select(int) */

void __thiscall CListPanel::Select(CListPanel *this,int param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (-1 < param_1) {
    uVar3 = *(undefined8 *)(this + 0xf8);
    uVar1 = FUN_0484902c(uVar3,*(undefined8 *)(this + 0x100));
    if ((ulong)(long)param_1 < uVar1) {
      puVar2 = (undefined8 *)FUN_04849038(uVar3,(long)param_1);
      (**(code **)(*(long *)*puVar2 + 0x310))((long *)*puVar2,1);
      if (-1 < *(int *)(gLawnApp + 0x2a04)) {
        *(undefined4 *)(gLawnApp + 0x2a04) = 0;
      }
    }
  }
  return;
}


/* CListPanel::Deselect(int) */

void __thiscall CListPanel::Deselect(CListPanel *this,int param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (-1 < param_1) {
    uVar3 = *(undefined8 *)(this + 0xf8);
    uVar1 = FUN_0484902c(uVar3,*(undefined8 *)(this + 0x100));
    if ((ulong)(long)param_1 < uVar1) {
      puVar2 = (undefined8 *)FUN_04849038(uVar3,(long)param_1);
      (**(code **)(*(long *)*puVar2 + 0x310))((long *)*puVar2,0);
    }
  }
  return;
}


/* CListPanel::ClearItem() */

void __thiscall CListPanel::ClearItem(CListPanel *this)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(this + 0xf8);
  uVar5 = 0;
  lVar1 = FUN_0484902c(uVar6,*(undefined8 *)(this + 0x100));
  if (lVar1 != 0) {
    do {
      puVar2 = (undefined8 *)FUN_04849038(uVar6,uVar5);
      (**(code **)(*(long *)this + 0x68))(this,*puVar2);
      uVar6 = *(undefined8 *)(this + 0xf8);
      plVar3 = (long *)FUN_04849038(uVar6,uVar5);
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
        puVar2 = (undefined8 *)FUN_04849038(*(undefined8 *)(this + 0xf8),uVar5);
        *puVar2 = 0;
        uVar6 = *(undefined8 *)(this + 0xf8);
      }
      uVar5 = uVar5 + 1;
      uVar4 = FUN_0484902c(uVar6,*(undefined8 *)(this + 0x100));
    } while (uVar5 < uVar4);
  }
  std::vector<CListItem*,std::allocator<CListItem*>>::clear
            ((vector<CListItem*,std::allocator<CListItem*>> *)(this + 0xf8));
  return;
}


/* CListPanel::Draw(Sexy::Graphics*) */

void __thiscall CListPanel::Draw(CListPanel *this,Graphics *param_1)

{
  bool bVar1;
  ResourceInfo *pRVar2;
  
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xd8));
  if (!bVar1) {
    return;
  }
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xd8));
  Sexy::Graphics::DrawImage(param_1,(Image *)pRVar2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54))
  ;
  return;
}


/* CListPanel::CListPanel(CListUI*) */

void __thiscall CListPanel::CListPanel(CListPanel *this,CListUI *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0690ae00;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  *(undefined4 *)(this + 0xe0) = 0x40;
  *(undefined4 *)(this + 0xe4) = 0x40;
  *(undefined4 *)(this + 0xe8) = 4;
  *(undefined4 *)(this + 0xec) = 4;
  *(undefined4 *)(this + 0xf0) = 8;
  *(undefined4 *)(this + 0xf4) = 8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  *(CListUI **)(this + 0x110) = param_1;
  return;
}


/* CListPanel::~CListPanel() */

void __thiscall CListPanel::~CListPanel(CListPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_0690ae00;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<CListItem*,std::allocator<CListItem*>>::~vector
            ((vector<CListItem*,std::allocator<CListItem*>> *)(this + 0xf8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* CListPanel::~CListPanel() */

void __thiscall CListPanel::~CListPanel(CListPanel *this)

{
  ~CListPanel(this);
  AK::FreeHook(this);
  return;
}


/* CListPanel::AddItem(CListItem*) */

void __thiscall CListPanel::AddItem(CListPanel *this,CListItem *param_1)

{
  CListItem *local_8;
  
  if (param_1 != (CListItem *)0x0) {
    local_8 = param_1;
    std::vector<CListItem*,std::allocator<CListItem*>>::push_back
              ((vector<CListItem*,std::allocator<CListItem*>> *)(this + 0xf8),&local_8);
    (**(code **)(*(long *)this + 0x60))(this,local_8);
  }
  return;
}

