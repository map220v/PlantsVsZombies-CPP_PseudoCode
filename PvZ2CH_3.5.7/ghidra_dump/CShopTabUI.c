// Class: CShopTabUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CShopTabUI::SetSelect(bool) */

void __thiscall CShopTabUI::SetSelect(CShopTabUI *this,bool param_1)

{
  long *plVar1;
  PVZ2UIButton *pPVar2;
  Dialog *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FestivalEventTabBase::SetSelect((FestivalEventTabBase *)this,param_1);
  plVar1 = *(long **)(this + 0x28);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,param_1);
  }
  if (param_1) {
    this_00 = *(Dialog **)(this + 0x10);
    std::string::string(asStack_10,"Btn_Goto");
    pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*(long *)pPVar2 + 0x158))(pPVar2,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CShopTabUI::CShopTabUI(int, UI::Dialog*) */

void __thiscall CShopTabUI::CShopTabUI(CShopTabUI *this,int param_1,Dialog *param_2)

{
  FestivalEventTabBase::FestivalEventTabBase((FestivalEventTabBase *)this,param_1,param_2);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__CShopTabUI_0671e750;
  Sexy::Point::Point((Point *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x50] = (CShopTabUI)0x0;
  *(undefined8 *)(this + 0x58) = 0;
  return;
}


/* CShopTabUI::~CShopTabUI() */

void __thiscall CShopTabUI::~CShopTabUI(CShopTabUI *this)

{
  *(undefined ***)this = &PTR__CShopTabUI_0671e750;
  std::vector<NetworkShopContentData,std::allocator<NetworkShopContentData>>::~vector
            ((vector<NetworkShopContentData,std::allocator<NetworkShopContentData>> *)(this + 0x38))
  ;
  nop();
  return;
}


/* CShopTabUI::~CShopTabUI() */

void __thiscall CShopTabUI::~CShopTabUI(CShopTabUI *this)

{
  ~CShopTabUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CShopTabUI::SyncActivityData(NetworkShopInfo const&) */

void __thiscall CShopTabUI::SyncActivityData(CShopTabUI *this,NetworkShopInfo *param_1)

{
  int iVar1;
  NetworkShopContentData *pNVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<NetworkShopContentData,std::allocator<NetworkShopContentData>>::clear
            ((vector<NetworkShopContentData,std::allocator<NetworkShopContentData>> *)(this + 0x38))
  ;
  iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar1);
  if (local_70 != '\0') {
    iVar1 = ActiveItem::GetLeftDays(aAStack_88);
    *(long *)(this + 0x58) = (long)iVar1;
  }
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar3 = FUN_03ac1fec(uVar5,*(undefined8 *)(param_1 + 0x10));
    if (uVar3 <= uVar4) break;
    pNVar2 = (NetworkShopContentData *)FUN_03ac2074(uVar5,uVar4);
    std::vector<NetworkShopContentData,std::allocator<NetworkShopContentData>>::push_back
              ((vector<NetworkShopContentData,std::allocator<NetworkShopContentData>> *)
               (this + 0x38),pNVar2);
    uVar4 = uVar4 + 1;
  }
  if (this[0x50] == (CShopTabUI)0x0) {
    nop();
  }
  else {
    nop();
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

