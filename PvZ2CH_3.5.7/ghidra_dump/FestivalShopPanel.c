// Class: FestivalShopPanel


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalShopPanel::RefreshShopData(std::vector<FShopContentData, std::allocator<FShopContentData>
   > const&) */

void __thiscall FestivalShopPanel::RefreshShopData(FestivalShopPanel *this,vector *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar1 = ___stack_chk_guard;
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0xd8);
    uVar3 = FUN_03ac2028(uVar5,*(undefined8 *)(this + 0xe0));
    if (uVar3 <= uVar4) break;
    FUN_03ac2034(*(undefined8 *)param_1,uVar4);
    puVar2 = (undefined8 *)FUN_03ac203c(uVar5,uVar4);
    FestivalShopContent::RefreshContentData((FShopContentData *)*puVar2);
    uVar4 = uVar4 + 1;
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FestivalShopPanel::~FestivalShopPanel() */

void __thiscall FestivalShopPanel::~FestivalShopPanel(FestivalShopPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_0671e020;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<FShopContentData,std::allocator<FShopContentData>>::~vector
            ((vector<FShopContentData,std::allocator<FShopContentData>> *)(this + 0xf8));
  std::vector<FestivalShopContent*,std::allocator<FestivalShopContent*>>::~vector
            ((vector<FestivalShopContent*,std::allocator<FestivalShopContent*>> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* FestivalShopPanel::~FestivalShopPanel() */

void __thiscall FestivalShopPanel::~FestivalShopPanel(FestivalShopPanel *this)

{
  ~FestivalShopPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalShopPanel::InitView() */

void __thiscall FestivalShopPanel::InitView(FestivalShopPanel *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FShopContentData *pFVar5;
  FestivalShopContent *this_00;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  FestivalShopContent *local_10;
  long local_8;
  
  uVar8 = *(undefined8 *)(this + 0xf8);
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_03ac2014(uVar8,*(undefined8 *)(this + 0x100));
  *(int *)(this + 0xd4) = iVar2;
  iVar3 = FUN_03ac4800(10);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_03ac4800(0x5a);
  iVar7 = iVar3;
  if (0 < iVar2) {
    pFVar5 = (FShopContentData *)FUN_03ac2020(uVar8,0);
    lVar6 = 1;
    this_00 = ::operator_new(0x118);
    FestivalShopContent::FestivalShopContent(this_00,pFVar5,this);
    local_10 = this_00;
    while( true ) {
      (**(code **)(*(long *)this_00 + 0x198))(this_00,iVar3,iVar7,iVar1 + iVar3 * -2,iVar4);
      (**(code **)(*(long *)this + 0x60))(this,local_10);
      FestivalShopContent::InitView(local_10);
      std::vector<FestivalShopContent*,std::allocator<FestivalShopContent*>>::push_back
                ((vector<FestivalShopContent*,std::allocator<FestivalShopContent*>> *)(this + 0xd8),
                 &local_10);
      if (*(int *)(this + 0xd4) <= (int)lVar6) break;
      pFVar5 = (FShopContentData *)FUN_03ac2020(*(undefined8 *)(this + 0xf8),lVar6);
      this_00 = ::operator_new(0x118);
      FestivalShopContent::FestivalShopContent(this_00,pFVar5,this);
      local_10 = this_00;
      if (0 < (int)lVar6) {
        iVar2 = FUN_03ac4800(0xf);
        iVar7 = iVar7 + iVar4 + iVar2;
      }
      lVar6 = lVar6 + 1;
    }
  }
  *(int *)(this + 0x54) = iVar7 + iVar4;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* FestivalShopPanel::FestivalShopPanel(Sexy::TRect<int>&, int, UIWidgetImage*,
   std::vector<FShopContentData, std::allocator<FShopContentData> >&) */

void __thiscall
FestivalShopPanel::FestivalShopPanel
          (FestivalShopPanel *this,TRect *param_1,int param_2,UIWidgetImage *param_3,vector *param_4
          )

{
  Sexy::Widget::Widget((Widget *)this);
  *(int *)(this + 0xd4) = param_2;
  *(undefined ***)this = &PTR_GetClass_0671e020;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  *(UIWidgetImage **)(this + 0xf0) = param_3;
  std::vector<FShopContentData,std::allocator<FShopContentData>>::vector
            ((vector<FShopContentData,std::allocator<FShopContentData>> *)(this + 0xf8),param_4);
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  std::vector<FestivalShopContent*,std::allocator<FestivalShopContent*>>::clear
            ((vector<FestivalShopContent*,std::allocator<FestivalShopContent*>> *)(this + 0xd8));
  InitView(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalShopPanel::InitTestData() */

void __thiscall FestivalShopPanel::InitTestData(FestivalShopPanel *this)

{
  vector<FShopContentData,std::allocator<FShopContentData>> *this_00;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  this_00 = (vector<FShopContentData,std::allocator<FShopContentData>> *)(this + 0xf8);
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_48);
  local_48 = 1;
  local_44 = 0x55f9;
  local_40 = 10;
  local_3c = 1;
  std::vector<FShopContentData,std::allocator<FShopContentData>>::push_back
            (this_00,(FShopContentData *)&local_48);
  Sexy::Insets::Insets((Insets *)&local_38);
  local_38 = 1;
  local_34 = 0x51c;
  local_30 = 10;
  local_2c = 1;
  std::vector<FShopContentData,std::allocator<FShopContentData>>::push_back
            (this_00,(FShopContentData *)&local_38);
  Sexy::Insets::Insets((Insets *)&local_28);
  local_28 = 1;
  local_24 = 0x5211;
  local_20 = 10;
  local_1c = 1;
  std::vector<FShopContentData,std::allocator<FShopContentData>>::push_back
            (this_00,(FShopContentData *)&local_28);
  Sexy::Insets::Insets((Insets *)&local_18);
  local_18 = 1;
  local_10 = 10;
  local_14 = 0x476;
  local_c = 1;
  std::vector<FShopContentData,std::allocator<FShopContentData>>::push_back
            (this_00,(FShopContentData *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

