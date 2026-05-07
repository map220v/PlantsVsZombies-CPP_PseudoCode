// Class: LevelEditorDisablePlant


/* LevelEditorDisablePlant::ScrollTargetReached(Sexy::ScrollWidget*) */

void LevelEditorDisablePlant::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LevelEditorDisablePlant::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
LevelEditorDisablePlant::ScrollTargetReached(LevelEditorDisablePlant *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* LevelEditorDisablePlant::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void LevelEditorDisablePlant::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LevelEditorDisablePlant::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
LevelEditorDisablePlant::ScrollTargetInterrupted
          (LevelEditorDisablePlant *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorDisablePlant::ButtonDepress(int) */

void __thiscall LevelEditorDisablePlant::ButtonDepress(LevelEditorDisablePlant *this,int param_1)

{
  CustomLevelMgr *pCVar1;
  ulong uVar2;
  ulong uVar3;
  PakRecord aPStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x1f) {
    pCVar1 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::ClearSeedBankPlantBlackList(pCVar1);
    for (uVar3 = 0;
        uVar2 = FUN_04b2d8f0(*(undefined8 *)(this + 0x100),*(undefined8 *)(this + 0x108)),
        uVar3 < uVar2; uVar3 = uVar3 + 1) {
      pCVar1 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
      FUN_04b2d8fc(*(undefined8 *)(this + 0x100),uVar3);
      LevelEditorCardItem::GetData();
      CustomLevelMgr::AddSeedBankPlantBlackList(pCVar1,asStack_10);
      PakRecord::~PakRecord(aPStack_18);
    }
  }
  else if (param_1 != 6) goto LAB_04b37230;
  UIUtil::CloseDialog((Widget *)this);
LAB_04b37230:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LevelEditorDisablePlant::ButtonDepress(int) */

void __thiscall LevelEditorDisablePlant::ButtonDepress(LevelEditorDisablePlant *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorDisablePlant::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorDisablePlant::Draw(LevelEditorDisablePlant *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85600);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  iVar1 = FUN_04b334ec(0x14);
  iVar2 = FUN_04b334ec(0x46);
  iVar3 = FUN_04b334ec(100);
  iVar4 = FUN_04b334ec(0x11d);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85798);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  iVar1 = FUN_04b334ec(0x82);
  iVar2 = FUN_04b334ec(0x46);
  iVar3 = FUN_04b334ec(0x136);
  iVar4 = FUN_04b334ec(0xff);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85798);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  TodStringTranslate(L"[LEVEL_EDITOR_BAN_PLANT_SET]");
  iVar1 = FUN_04b334ec(0);
  iVar2 = FUN_04b334ec(0x46);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar1,*(int *)(this + 0x50),iVar2);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_36_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  TodStringTranslate(L"[LEVEL_EDITOR_BAN_PRODUCT_PLANT]");
  iVar1 = FUN_04b334ec(0xa0);
  iVar2 = FUN_04b334ec(0x148);
  iVar3 = FUN_04b334ec(0x96);
  iVar4 = FUN_04b334ec(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar5,aIStack_28,3,1);
  FUN_05476c50(auStack_30);
  TodStringTranslate(L"[LEVEL_EDITOR_BAN_ASH_PLANT]");
  iVar1 = FUN_04b334ec(0x140);
  iVar2 = FUN_04b334ec(0x148);
  iVar3 = FUN_04b334ec(0x96);
  iVar4 = FUN_04b334ec(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar5,aIStack_28,3,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorDisablePlant::LevelEditorDisablePlant() */

void __thiscall LevelEditorDisablePlant::LevelEditorDisablePlant(LevelEditorDisablePlant *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_0695cc70;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695cfa8;
  *(undefined ***)(this + 0xe0) = &PTR__LevelEditorDisablePlant_0695cff0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x100));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x118));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x130));
  return;
}


/* LevelEditorDisablePlant::~LevelEditorDisablePlant() */

void __thiscall LevelEditorDisablePlant::~LevelEditorDisablePlant(LevelEditorDisablePlant *this)

{
  *(undefined ***)this = &PTR_GetClass_0695cc70;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695cfa8;
  *(undefined ***)(this + 0xe0) = &PTR__LevelEditorDisablePlant_0695cff0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<LevelEditorPlantRare*,std::allocator<LevelEditorPlantRare*>>::~vector
            ((vector<LevelEditorPlantRare*,std::allocator<LevelEditorPlantRare*>> *)(this + 0x130));
  std::vector<LevelEditorDiableCardItem*,std::allocator<LevelEditorDiableCardItem*>>::~vector
            ((vector<LevelEditorDiableCardItem*,std::allocator<LevelEditorDiableCardItem*>> *)
             (this + 0x118));
  std::vector<LevelEditorDiableCardItem*,std::allocator<LevelEditorDiableCardItem*>>::~vector
            ((vector<LevelEditorDiableCardItem*,std::allocator<LevelEditorDiableCardItem*>> *)
             (this + 0x100));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to LevelEditorDisablePlant::~LevelEditorDisablePlant() */

void __thiscall LevelEditorDisablePlant::~LevelEditorDisablePlant(LevelEditorDisablePlant *this)

{
  ~LevelEditorDisablePlant(this + -0xe0);
  return;
}


/* LevelEditorDisablePlant::~LevelEditorDisablePlant() */

void __thiscall LevelEditorDisablePlant::~LevelEditorDisablePlant(LevelEditorDisablePlant *this)

{
  ~LevelEditorDisablePlant(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LevelEditorDisablePlant::~LevelEditorDisablePlant() */

void __thiscall LevelEditorDisablePlant::~LevelEditorDisablePlant(LevelEditorDisablePlant *this)

{
  ~LevelEditorDisablePlant(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorDisablePlant::EnablePlant(std::string const&) */

void __thiscall LevelEditorDisablePlant::EnablePlant(LevelEditorDisablePlant *this,string *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  int iVar11;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = false;
  uVar8 = 0;
  while( true ) {
    uVar9 = *(undefined8 *)(this + 0x100);
    uVar4 = FUN_04b2d8f0(uVar9,*(undefined8 *)(this + 0x108));
    if (uVar4 <= uVar8) break;
    uVar4 = uVar8 + 1;
    FUN_04b2d8fc(uVar9,uVar8);
    LevelEditorCardItem::GetData();
    cVar2 = std::operator==(asStack_10,param_1);
    PakRecord::~PakRecord((PakRecord *)&local_18);
    uVar8 = uVar4;
    if (cVar2 != '\0') {
      bVar1 = true;
    }
  }
  if (!bVar1) {
LAB_04b4209c:
    if (local_8 == ___stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x100);
  iVar11 = 0;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
    while( true ) {
      if (!bVar1) goto LAB_04b4209c;
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      LevelEditorCardItem::GetData();
      cVar2 = std::operator==(asStack_10,param_1);
      PakRecord::~PakRecord((PakRecord *)&local_18);
      if (cVar2 == '\0') break;
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20)
      ;
      plVar10 = (long *)*puVar5;
      lVar6 = FUN_04b2d84c(plVar10[0x23]);
      if (lVar6 != 0) {
        FUN_04b2d838(lVar6 + 0x114,0);
        plVar7 = (long *)FUN_04b2d84c(plVar10[0x23]);
        (**(code **)(*plVar7 + 0x188))(plVar7,0);
      }
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_18,(__normal_iterator *)&local_20);
      local_20 = std::vector<LevelEditorDiableCardItem*,std::allocator<LevelEditorDiableCardItem*>>
                 ::erase((vector<LevelEditorDiableCardItem*,std::allocator<LevelEditorDiableCardItem*>>
                          *)this_00,local_18);
      (**(code **)(**(long **)(this + 0xe8) + 0x68))(*(long **)(this + 0xe8),plVar10);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
    }
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    plVar10 = (long *)*puVar5;
    iVar3 = FUN_04b334ec(0x37);
    iVar3 = iVar3 * iVar11;
    iVar11 = iVar11 + 1;
    (**(code **)(*plVar10 + 0x1a8))(plVar10,0,iVar3);
    FUN_04b39b3c((__normal_iterator *)&local_20);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorDisablePlant::DisablePlant(std::string const&) */

void __thiscall LevelEditorDisablePlant::DisablePlant(LevelEditorDisablePlant *this,string *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  LevelEditorDiableCardItem *pLVar9;
  undefined8 *puVar10;
  ScrollWidget *this_00;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  LevelEditorDiableCardItem *local_40;
  PakRecord aPStack_38 [8];
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  uVar11 = 0;
  local_8 = ___stack_chk_guard;
  while( true ) {
    uVar12 = *(undefined8 *)(this + 0x100);
    uVar8 = FUN_04b2d8f0(uVar12,*(undefined8 *)(this + 0x108));
    if (uVar8 <= uVar11) break;
    FUN_04b2d8fc(uVar12,uVar11);
    LevelEditorCardItem::GetData();
    cVar2 = std::operator==(asStack_30,param_1);
    PakRecord::~PakRecord(aPStack_38);
    if (cVar2 != '\0') goto LAB_04b4842c;
    uVar11 = uVar11 + 1;
  }
  uVar11 = 0;
  while( true ) {
    uVar12 = *(undefined8 *)(this + 0x118);
    uVar8 = FUN_04b2d8f0(uVar12,*(undefined8 *)(this + 0x120));
    if (uVar8 <= uVar11) {
      pLVar9 = ::operator_new(0x120);
      LevelEditorDiableCardItem::LevelEditorDiableCardItem(pLVar9);
      local_40 = pLVar9;
      uVar3 = FUN_04b334ec(0x55);
      uVar4 = FUN_04b334ec(0x37);
      (**(code **)(*(long *)pLVar9 + 0x198))(pLVar9,0,0,uVar3,uVar4);
      pLVar9 = local_40;
      LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)aPStack_38,1,param_1);
      LevelEditorCardItem::SetData((LevelEditorCardItem *)pLVar9,(LevelEditorCardInfo *)aPStack_38);
      PakRecord::~PakRecord(aPStack_38);
      FUN_04b2d844((LevelEditorCardItem *)(local_40 + 0x118),0);
      pLVar9 = local_40;
      FUN_04b32e10(afStack_28,this);
      LevelEditorCardItem::SetClickFunction((LevelEditorCardItem *)pLVar9,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      FUN_04b2d838(0x114,1);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1000,0x4b48294);
      (*pcVar1)();
    }
    FUN_04b2d8fc(uVar12,uVar11);
    LevelEditorCardItem::GetData();
    cVar2 = std::operator==(asStack_30,param_1);
    PakRecord::~PakRecord(aPStack_38);
    if (cVar2 != '\0') break;
    uVar11 = uVar11 + 1;
  }
  puVar10 = (undefined8 *)FUN_04b2d8fc(*(undefined8 *)(this + 0x118),uVar11);
  plVar13 = (long *)*puVar10;
  pLVar9 = ::operator_new(0x120);
  LevelEditorDiableCardItem::LevelEditorDiableCardItem(pLVar9);
  local_40 = pLVar9;
  uVar3 = FUN_04b334ec(0x55);
  uVar4 = FUN_04b334ec(0x37);
  (**(code **)(*(long *)pLVar9 + 0x198))(pLVar9,0,0,uVar3,uVar4);
  pLVar9 = local_40;
  LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)aPStack_38,1,param_1);
  LevelEditorCardItem::SetData((LevelEditorCardItem *)pLVar9,(LevelEditorCardInfo *)aPStack_38);
  PakRecord::~PakRecord(aPStack_38);
  FUN_04b2d844((LevelEditorCardItem *)(local_40 + 0x118),plVar13);
  pLVar9 = local_40;
  FUN_04b32e10(afStack_28,this);
  LevelEditorCardItem::SetClickFunction((LevelEditorCardItem *)pLVar9,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  FUN_04b2d838((long)plVar13 + 0x114,1);
  (**(code **)(*plVar13 + 0x188))(plVar13,1);
  (**(code **)(**(long **)(this + 0xe8) + 0x60))(*(long **)(this + 0xe8),local_40);
  std::vector<LevelEditorDiableCardItem*,std::allocator<LevelEditorDiableCardItem*>>::push_back
            ((vector<LevelEditorDiableCardItem*,std::allocator<LevelEditorDiableCardItem*>> *)
             (this + 0x100),&local_40);
  iVar5 = FUN_04b2d8f0(*(undefined8 *)(this + 0x100),*(undefined8 *)(this + 0x108));
  iVar6 = FUN_04b334ec(0x37);
  iVar7 = FUN_04b334ec(5);
  this_00 = *(ScrollWidget **)(this + 0xf0);
  *(int *)(*(long *)(this + 0xe8) + 0x54) = iVar6 * iVar5 + iVar7;
  Sexy::ScrollWidget::ClientSizeChanged(this_00);
  uVar11 = 0;
  while( true ) {
    uVar12 = *(undefined8 *)(this + 0x100);
    uVar8 = FUN_04b2d8f0(uVar12,*(undefined8 *)(this + 0x108));
    if (uVar8 <= uVar11) break;
    puVar10 = (undefined8 *)FUN_04b2d8fc(uVar12,uVar11);
    plVar13 = (long *)*puVar10;
    iVar5 = FUN_04b334ec(0x37);
    (**(code **)(*plVar13 + 0x1a8))(plVar13,0,iVar5 * (int)uVar11);
    uVar11 = uVar11 + 1;
  }
LAB_04b4842c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorDisablePlant::Reload() */

void __thiscall LevelEditorDisablePlant::Reload(LevelEditorDisablePlant *this)

{
  undefined8 uVar1;
  PlayerInfo *this_00;
  vector *pvVar2;
  string *psVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlayerInfo *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  pvVar2 = (vector *)PlayerInfo::GetPlantAvatarInfo(this_00);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20,pvVar2);
  uVar5 = 0;
  while( true ) {
    uVar1 = local_20;
    uVar4 = FUN_04b2d904(local_20,local_18);
    if (uVar4 <= uVar5) break;
    psVar3 = (string *)FUN_04b2d910(uVar1,uVar5);
    DisablePlant(this,psVar3);
    uVar5 = uVar5 + 1;
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorDisablePlant::Init() */

void __thiscall LevelEditorDisablePlant::Init(LevelEditorDisablePlant *this)

{
  OTFTagStruct *this_00;
  LevelEditorCardItem *pLVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  PVZ2UIScrollingWidget *pPVar12;
  Widget *pWVar13;
  Widget *this_01;
  LevelEditorDiableCardItem *this_02;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar14;
  string *psVar15;
  long lVar16;
  ulong uVar17;
  UIWidgetText *this_03;
  LevelEditorPlantRare *pLVar18;
  LevelEditorRadioButton *pLVar19;
  PVZ2UIButton *pPVar20;
  undefined8 uVar21;
  code *pcVar22;
  int iVar23;
  ulong uVar24;
  LevelEditorDisablePlant *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  Widget *local_100;
  PVZ2UIScrollingWidget *pPStack_f8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_f0 [8];
  Insets aIStack_e8 [8];
  undefined4 local_e0;
  int local_dc;
  Insets aIStack_d8 [8];
  int local_d0;
  undefined4 local_cc;
  function<bool(Sexy::Touch_const&)> afStack_c8 [32];
  LevelEditorCardItem *local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  int iStack_94;
  uint local_90;
  undefined4 uStack_8c;
  Widget *local_88;
  PVZ2UIScrollingWidget *local_80;
  Insets aIStack_78 [4];
  int local_74;
  int local_6c;
  LevelEditorPlantRare *local_40 [7];
  long local_8;
  
  iVar23 = 0;
  local_8 = ___stack_chk_guard;
  pPVar12 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(pPVar12,(ScrollWidgetListener *)(this + 0xe0));
  *(PVZ2UIScrollingWidget **)(this + 0xf0) = pPVar12;
  pWVar13 = ::operator_new(0xd8);
  Sexy::Widget::Widget(pWVar13);
  *(Widget **)(this + 0xe8) = pWVar13;
  iVar2 = FUN_04b334ec(0x19);
  iVar3 = FUN_04b334ec(0x4b);
  iVar4 = FUN_04b334ec(0x5a);
  iVar5 = FUN_04b334ec(0x10e);
  Sexy::Insets::Insets(aIStack_e8,iVar2,iVar3,iVar4,iVar5);
  (**(code **)(**(long **)(this + 0xf0) + 0x1a0))(*(long **)(this + 0xf0),aIStack_e8);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0xf0),2);
  (**(code **)(**(long **)(this + 0xe8) + 0x198))(*(long **)(this + 0xe8),0,0,local_e0,local_dc);
  iVar2 = FUN_04b334ec(0x14);
  uVar21 = *(undefined8 *)(this + 0xf0);
  pcVar22 = *(code **)(*(long *)this + 0x60);
  *(int *)(*(long *)(this + 0xe8) + 0x54) = local_dc + iVar2;
  (*pcVar22)(this,uVar21);
  (**(code **)(**(long **)(this + 0xf0) + 0x60))
            (*(long **)(this + 0xf0),*(undefined8 *)(this + 0xe8));
  iVar3 = FUN_04b334ec(5);
  pWVar13 = ::operator_new(0xd8);
  Sexy::Widget::Widget(pWVar13);
  uVar6 = FUN_04b334ec(0x87);
  uVar7 = FUN_04b334ec(0x4b);
  uVar8 = FUN_04b334ec(300);
  uVar9 = FUN_04b334ec(0xf0);
  (**(code **)(*(long *)pWVar13 + 0x198))(pWVar13,uVar6,uVar7,uVar8,uVar9);
  (**(code **)(*(long *)this + 0x60))(this,pWVar13);
  pPVar12 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(pPVar12,(ScrollWidgetListener *)(this + 0xe0));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  iVar2 = FUN_04b334ec(0);
  iVar4 = FUN_04b334ec(0x28);
  iVar5 = FUN_04b334ec(300);
  iVar10 = FUN_04b334ec(200);
  Sexy::Insets::Insets(aIStack_d8,iVar2,iVar4,iVar5,iVar10);
  (**(code **)(*(long *)pPVar12 + 0x1a0))(pPVar12,aIStack_d8);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)pPVar12,2);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,0,0,local_d0,local_cc);
  local_d0 = local_d0 + iVar3 * -5;
  iVar2 = local_d0 + 3;
  if (-1 < local_d0) {
    iVar2 = local_d0;
  }
  iVar2 = iVar2 >> 2;
  uVar11 = (uint)((double)iVar2 * 0.65);
  Magento::GetPlantLevelUp((Magento *)(ulong)uVar11);
  uVar24 = 0;
  while( true ) {
    lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_f0);
    uVar17 = FUN_04b2d884(*(undefined8 *)(lVar16 + 0x60),*(undefined8 *)(lVar16 + 0x68));
    if (uVar17 <= uVar24) break;
    Sexy::Insets::Insets
              (aIStack_78,iVar3 + (iVar3 + iVar2) * ((uint)uVar24 & 3),
               (iVar3 + uVar11) * ((int)(uint)uVar24 >> 2),iVar2,uVar11);
    this_02 = ::operator_new(0x120);
    LevelEditorDiableCardItem::LevelEditorDiableCardItem(this_02);
    local_a8 = (LevelEditorCardItem *)this_02;
    (**(code **)(*(long *)this_02 + 0x1a0))(this_02,aIStack_78);
    pLVar1 = local_a8;
    FUN_04b32db4(afStack_c8,this,local_a8);
    LevelEditorCardItem::SetClickFunction(pLVar1,afStack_c8);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_c8);
    pLVar1 = local_a8;
    lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_f0);
    pRVar14 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04b2d890(*(undefined8 *)(lVar16 + 0x60),uVar24);
    lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar14);
    LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)local_40,1,lVar16 + 0x80);
    LevelEditorCardItem::SetData(pLVar1,(LevelEditorCardInfo *)local_40);
    PakRecord::~PakRecord((PakRecord *)local_40);
    this_00 = (OTFTagStruct *)(local_a8 + 0x110);
    psVar15 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_f0);
    pRVar14 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04b2d890(*(undefined8 *)(lVar16 + 0x60),uVar24);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar14);
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar15);
    lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
    EA::Text::OTFTagStruct::OTFTagStruct(this_00,*(uint *)(lVar16 + 0xd0));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,local_a8);
    std::vector<LevelEditorDiableCardItem*,std::allocator<LevelEditorDiableCardItem*>>::push_back
              ((vector<LevelEditorDiableCardItem*,std::allocator<LevelEditorDiableCardItem*>> *)
               (this + 0x118),(LevelEditorDiableCardItem **)&local_a8);
    iVar23 = local_74 + local_6c;
    uVar24 = uVar24 + 1;
  }
  lVar16 = *(long *)pWVar13;
  *(int *)(this_01 + 0x54) = iVar23;
  (**(code **)(lVar16 + 0x60))(pWVar13,pPVar12);
  (**(code **)(*(long *)pPVar12 + 0x60))(pPVar12,this_01);
  TodStringTranslate(L"[LEVEL_EDITOR_SELECT_RARE]");
  this_03 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(this_03,(wstring *)local_40);
  FUN_05476c50((PakRecord *)local_40);
  uVar6 = FUN_04b334ec(0x87);
  uVar7 = FUN_04b334ec(0x28);
  (**(code **)(*(long *)this_03 + 0x198))(this_03,0,0,uVar6,uVar7);
  UIWidgetText::SetFontIndex(this_03,5);
  pcVar22 = *(code **)(*(long *)this_03 + 0x170);
  Sexy::Color::Color((Color *)local_40,0x66,0x37,0);
  (*pcVar22)(this_03,0,(PakRecord *)local_40);
  FUN_04b2dcbc(this_03 + 0xe0);
  (**(code **)(*(long *)pWVar13 + 0x60))(pWVar13,this_03);
  iVar23 = 0;
  local_a8 = (LevelEditorCardItem *)this;
  local_a0 = iVar3;
  local_9c = iVar3;
  local_98 = iVar3;
  iStack_94 = iVar2;
  local_90 = uVar11;
  local_88 = this_01;
  local_80 = pPVar12;
  do {
    pLVar18 = ::operator_new(0x100);
    LevelEditorPlantRare::LevelEditorPlantRare(pLVar18);
    local_40[0] = pLVar18;
    iVar2 = FUN_04b334ec(0x8c);
    iVar3 = FUN_04b334ec(0x1e);
    uVar6 = FUN_04b334ec(2);
    uVar7 = FUN_04b334ec(0x19);
    (**(code **)(*(long *)pLVar18 + 0x198))(pLVar18,iVar2 + iVar3 * iVar23,uVar6,uVar7,iVar3);
    iVar2 = iVar23 + 1;
    FUN_04b2d7f4(local_40[0] + 0xd8,iVar23);
    pLVar18 = local_40[0];
    uStack_118 = CONCAT44(local_9c,local_a0);
    local_110 = CONCAT44(iStack_94,local_98);
    uStack_108 = CONCAT44(uStack_8c,local_90);
    local_100 = local_88;
    pPStack_f8 = local_80;
    local_120 = (LevelEditorDisablePlant *)local_a8;
    FUN_04b32678(afStack_c8,&local_120);
    LevelEditorPlantRare::SetCallBack(pLVar18,afStack_c8);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_c8);
    (**(code **)(*(long *)pWVar13 + 0x60))(pWVar13,local_40[0]);
    std::vector<LevelEditorPlantRare*,std::allocator<LevelEditorPlantRare*>>::push_back
              ((vector<LevelEditorPlantRare*,std::allocator<LevelEditorPlantRare*>> *)(this + 0x130)
               ,local_40);
    iVar23 = iVar2;
  } while (iVar2 != 5);
  pLVar19 = ::operator_new(0x100);
  LevelEditorRadioButton::LevelEditorRadioButton(pLVar19);
  uVar6 = FUN_04b334ec(0x87);
  uVar7 = FUN_04b334ec(0x14a);
  uVar8 = FUN_04b334ec(0x14);
  (**(code **)(*(long *)pLVar19 + 0x198))(pLVar19,uVar6,uVar7,uVar8,uVar8);
  FUN_04b324a8(afStack_c8,this);
  LevelEditorRadioButton::SetSwitchRadioFunc(pLVar19,afStack_c8);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_c8);
  (**(code **)(*(long *)this + 0x60))(this,pLVar19);
  pLVar19 = ::operator_new(0x100);
  LevelEditorRadioButton::LevelEditorRadioButton(pLVar19);
  uVar6 = FUN_04b334ec(0x127);
  uVar7 = FUN_04b334ec(0x14a);
  uVar8 = FUN_04b334ec(0x14);
  (**(code **)(*(long *)pLVar19 + 0x198))(pLVar19,uVar6,uVar7,uVar8,uVar8);
  FUN_04b32504(afStack_c8,this);
  LevelEditorRadioButton::SetSwitchRadioFunc(pLVar19,afStack_c8);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_c8);
  (**(code **)(*(long *)this + 0x60))(this,pLVar19);
  TodStringTranslate(L"[BUTTON_OK]");
  Sexy::Color::Color((Color *)local_40,1);
  pPVar20 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar20,0x1f,(ButtonListener *)(this + 0xd8),(wstring *)aIStack_78,(Color *)local_40);
  FUN_05476c50(aIStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_78,&DAT_06b859c0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b85318,3);
  PVZ2UIButton::SetDialogStates(pPVar20,(PVZ2UIImage *)aIStack_78,(PVZ2UIImage *)local_40);
  uVar6 = FUN_04b334ec(0x3c);
  uVar7 = FUN_04b334ec(0x172);
  uVar8 = FUN_04b334ec(100);
  uVar9 = FUN_04b334ec(0x32);
  (**(code **)(*(long *)pPVar20 + 0x198))(pPVar20,uVar6,uVar7,uVar8,uVar9);
  pcVar22 = *(code **)(*(long *)pPVar20 + 800);
  uVar21 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar22)(pPVar20,uVar21);
  (**(code **)(*(long *)this + 0x60))(this,pPVar20);
  TodStringTranslate(L"[BUTTON_CANCEL]");
  Sexy::Color::Color((Color *)local_40,1);
  pPVar20 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar20,6,(ButtonListener *)(this + 0xd8),(wstring *)aIStack_78,(Color *)local_40);
  FUN_05476c50(aIStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_78,&DAT_06b859c0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b85318,3);
  PVZ2UIButton::SetDialogStates(pPVar20,(PVZ2UIImage *)aIStack_78,(PVZ2UIImage *)local_40);
  uVar6 = FUN_04b334ec(300);
  uVar7 = FUN_04b334ec(0x172);
  uVar8 = FUN_04b334ec(100);
  uVar9 = FUN_04b334ec(0x32);
  (**(code **)(*(long *)pPVar20 + 0x198))(pPVar20,uVar6,uVar7,uVar8,uVar9);
  pcVar22 = *(code **)(*(long *)pPVar20 + 800);
  uVar21 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar22)(pPVar20,uVar21);
  (**(code **)(*(long *)this + 0x60))(this,pPVar20);
  Reload(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_f0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

