// Class: ConsumptionScrollPanel


/* ConsumptionScrollPanel::ButtonDepress(int) */

int ConsumptionScrollPanel::ButtonDepress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to ConsumptionScrollPanel::ButtonDepress(int) */

void __thiscall ConsumptionScrollPanel::ButtonDepress(ConsumptionScrollPanel *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* ConsumptionScrollPanel::~ConsumptionScrollPanel() */

void __thiscall ConsumptionScrollPanel::~ConsumptionScrollPanel(ConsumptionScrollPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_06927870;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06927b98;
  TopicItem::~TopicItem((TopicItem *)(this + 0xf8));
  std::vector<ItemButton*,std::allocator<ItemButton*>>::~vector
            ((vector<ItemButton*,std::allocator<ItemButton*>> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ConsumptionScrollPanel::~ConsumptionScrollPanel() */

void __thiscall ConsumptionScrollPanel::~ConsumptionScrollPanel(ConsumptionScrollPanel *this)

{
  ~ConsumptionScrollPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumptionScrollPanel::InitView() */

void __thiscall ConsumptionScrollPanel::InitView(ConsumptionScrollPanel *this)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ProfileMgr *this_00;
  long lVar8;
  ulong uVar9;
  RewardItem *pRVar10;
  ItemButton *this_01;
  code *pcVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 uVar14;
  ItemButton *local_10;
  long local_8;
  
  uVar12 = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar8 = ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = FUN_049cc7c0(*(undefined4 *)(lVar8 + 0x1050));
  do {
    uVar14 = *(undefined8 *)(this + 0x120);
    iVar6 = (int)uVar12;
    uVar9 = FUN_049cc7e4(uVar14,*(undefined8 *)(this + 0x128));
    if (uVar9 <= uVar12) {
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    bVar1 = iVar6 == 4;
    uVar13 = (uint)bVar1;
    if (iVar6 < iVar2) {
      pRVar10 = (RewardItem *)FUN_049cc7c8(uVar14,uVar12);
      this_01 = ::operator_new(0x328);
      ItemButton::ItemButton(this_01,iVar6,(ButtonListener *)(this + 0xd8),pRVar10,true,false,bVar1)
      ;
      uVar3 = uVar13;
      local_10 = this_01;
      if (bVar1) goto LAB_049ce070;
    }
    else {
      iVar7 = FUN_049cc7c4(*(undefined4 *)(lVar8 + 0x1054));
      pRVar10 = (RewardItem *)FUN_049cc7c8(uVar14,uVar12);
      iVar4 = *(int *)(pRVar10 + 0x18);
      this_01 = ::operator_new(0x328);
      ItemButton::ItemButton
                (this_01,iVar6,(ButtonListener *)(this + 0xd8),pRVar10,false,iVar4 <= iVar7,bVar1);
      if (bVar1) {
LAB_049ce070:
        uVar13 = 0;
        local_10 = this_01;
        uVar3 = FUN_049cc8d0(2);
      }
      else {
        local_10 = this_01;
        if (iVar4 <= iVar7) {
          uVar13 = FUN_049cc8d0(0xfffffff1);
          uVar3 = uVar13;
        }
        else {
          uVar13 = 0;
          uVar3 = uVar13;
        }
      }
    }
    uVar12 = uVar12 + 1;
    iVar4 = FUN_049cc8d0(5);
    iVar7 = FUN_049cc8d0(0x8a);
    iVar5 = FUN_049cc8d0(0x32);
    (**(code **)(*(long *)this_01 + 0x1a8))(this_01,iVar4 + iVar7 * iVar6 + uVar13,iVar5 + uVar3);
    iVar6 = FUN_049cc8d0(0x3a);
    pcVar11 = *(code **)(*(long *)this + 0x60);
    *(int *)(this + 0x50) = *(int *)(this + 0x50) + iVar6;
    (*pcVar11)(this,local_10);
    std::vector<ItemButton*,std::allocator<ItemButton*>>::push_back
              ((vector<ItemButton*,std::allocator<ItemButton*>> *)(this + 0xe0),&local_10);
  } while( true );
}


/* ConsumptionScrollPanel::ConsumptionScrollPanel(Sexy::TRect<int>&, TopicItem&) */

void __thiscall
ConsumptionScrollPanel::ConsumptionScrollPanel
          (ConsumptionScrollPanel *this,TRect *param_1,TopicItem *param_2)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06927870;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06927b98;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  TopicItem::TopicItem((TopicItem *)(this + 0xf8),param_2);
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  InitView(this);
  return;
}

