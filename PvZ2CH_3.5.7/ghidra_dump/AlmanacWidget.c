// Class: AlmanacWidget


/* AlmanacWidget::ScrollTargetReached(Sexy::ScrollWidget*) */

void AlmanacWidget::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to AlmanacWidget::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall AlmanacWidget::ScrollTargetReached(AlmanacWidget *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* AlmanacWidget::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void AlmanacWidget::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to AlmanacWidget::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall AlmanacWidget::ScrollTargetInterrupted(AlmanacWidget *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* AlmanacWidget::resetPages() */

void __thiscall AlmanacWidget::resetPages(AlmanacWidget *this)

{
  if (*(long *)(this + 0xe8) != 0) {
    (**(code **)(*(long *)this + 0x68))();
    if (*(long **)(this + 0xe8) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xe8) + 0x18))();
      *(undefined8 *)(this + 0xe8) = 0;
    }
  }
  if (*(long *)(this + 0xf8) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    if (*(long **)(this + 0xf8) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xf8) + 0x18))();
      *(undefined8 *)(this + 0xf8) = 0;
    }
  }
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  return;
}


/* AlmanacWidget::~AlmanacWidget() */

void __thiscall AlmanacWidget::~AlmanacWidget(AlmanacWidget *this)

{
  PrimeText *this_00;
  
  *(undefined ***)this = &PTR_GetClass_06732110;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06732450;
  *(undefined ***)(this + 0xe0) = &PTR__AlmanacWidget_06732498;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to AlmanacWidget::~AlmanacWidget() */

void __thiscall AlmanacWidget::~AlmanacWidget(AlmanacWidget *this)

{
  ~AlmanacWidget(this + -0xe0);
  return;
}


/* AlmanacWidget::~AlmanacWidget() */

void __thiscall AlmanacWidget::~AlmanacWidget(AlmanacWidget *this)

{
  ~AlmanacWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AlmanacWidget::~AlmanacWidget() */

void __thiscall AlmanacWidget::~AlmanacWidget(AlmanacWidget *this)

{
  ~AlmanacWidget(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlmanacWidget::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall AlmanacWidget::DrawAll(AlmanacWidget *this,ModalFlags *param_1,Graphics *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  float *pfVar9;
  long lVar10;
  float fVar11;
  GraphicsAutoState aGStack_78 [8];
  float local_70;
  float local_68;
  float local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  float local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Color::Color((Color *)local_18,0);
  Sexy::Graphics::SetColor(param_2,(Color *)local_18);
  Sexy::Graphics::FillRect(param_2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Sexy::Insets::Insets((Insets *)local_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb368);
  Draw9SliceImage(param_2,(Insets *)local_18,uVar8);
  iVar2 = FUN_03b4642c(0x19);
  iVar3 = FUN_03b4642c(0x48);
  iVar4 = FUN_03b4642c(0x32);
  iVar6 = *(int *)(this + 0x50);
  iVar7 = *(int *)(this + 0x54);
  iVar5 = FUN_03b4642c(0x14);
  Sexy::Insets::Insets((Insets *)&local_58,iVar2,iVar3,iVar6 - iVar4,(iVar7 - iVar3) - iVar5);
  iVar6 = FUN_03b4642c(0xc);
  iVar7 = FUN_03b4642c(9);
  iVar2 = FUN_03b4642c(0x18);
  iVar3 = FUN_03b4642c(0x19);
  Sexy::Insets::Insets
            ((Insets *)&local_48,local_58 + iVar6,local_54 + iVar7,local_50 - iVar2,local_4c - iVar3
            );
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)&local_58);
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb640);
  Draw9SliceImage(param_2,(Insets *)local_18,uVar8);
  Sexy::Insets::Insets((Insets *)&local_38);
  if (*(long *)(this + 0xf0) == 0) {
    local_30 = uStack_40;
    local_38 = local_48;
  }
  else {
    iVar7 = FUN_03b4642c(0x28);
    iVar2 = FUN_03b4642c(0x18b);
    iVar3 = FUN_03b4642c(0x50);
    iVar6 = *(int *)(this + 0x50);
    iVar4 = FUN_03b4642c(0x87);
    Sexy::Insets::Insets((Insets *)&local_28,iVar7,iVar2,iVar6 - iVar3,iVar4);
    Sexy::Insets::Insets((Insets *)local_18,(Insets *)&local_28);
    uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb3c8);
    Draw9SliceImage(param_2,(Insets *)local_18,uVar8);
    local_38 = CONCAT44(uStack_24,local_28);
    local_30 = uStack_20;
  }
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (((*(long *)(this + 0x100) != 0) || (*(long *)(this + 0x108) != 0)) &&
     (cVar1 = Sexy::ScrollWidget::GetNeedsScroller(*(ScrollWidget **)(this + 0xf8)), cVar1 != '\0'))
  {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_78,param_2);
    Sexy::ScrollWidget::GetScrollOffset();
    Sexy::ScrollWidget::GetScrollMin();
    Sexy::ScrollWidget::GetScrollMax();
    if ((local_70 < local_60) && (*(long *)(this + 0x100) != 0)) {
      local_28 = (float)FUN_03b46440(0x41a00000);
      local_28 = ABS(local_60 - local_70) / local_28;
      local_18[0] = 0x3f800000;
      pfVar9 = eastl::min_alt<float>(&local_28,(float *)local_18);
      uVar8 = local_38;
      fVar11 = *pfVar9;
      iVar6 = local_38._4_4_;
      iVar7 = FUN_03b4642c(0x14);
      Sexy::Insets::Insets((Insets *)&local_28,(int)uVar8,iVar6,iVar7,local_30._4_4_);
      Sexy::Insets::Insets((Insets *)local_18,0xff,0xff,0xff,(int)(fVar11 * 255.0));
      Sexy::Graphics::SetColor(param_2,(Color *)local_18);
      Sexy::Graphics::SetColorizeImages(param_2,true);
      Sexy::Insets::Insets((Insets *)local_18,(Insets *)&local_28);
      Draw3SliceImageVertical(param_2,(Insets *)local_18,*(undefined8 *)(this + 0x100));
      Sexy::Graphics::SetColorizeImages(param_2,false);
    }
    if ((local_68 < local_70) && (lVar10 = *(long *)(this + 0x108), lVar10 != 0)) {
      local_28 = (float)FUN_03b46440(0x41a00000);
      local_28 = ABS(local_70 - local_68) / local_28;
      local_18[0] = 0x3f800000;
      pfVar9 = eastl::min_alt<float>(&local_28,(float *)local_18);
      iVar6 = *(int *)(lVar10 + 0x38);
      fVar11 = *pfVar9;
      Sexy::Insets::Insets
                ((Insets *)&local_28,((int)local_38 + (int)local_30) - iVar6,local_38._4_4_,iVar6,
                 local_30._4_4_);
      Sexy::Insets::Insets((Insets *)local_18,0xff,0xff,0xff,(int)(fVar11 * 255.0));
      Sexy::Graphics::SetColor(param_2,(Color *)local_18);
      Sexy::Graphics::SetColorizeImages(param_2,true);
      Sexy::Insets::Insets((Insets *)local_18,(Insets *)&local_28);
      Draw3SliceImageVertical(param_2,(Insets *)local_18,*(undefined8 *)(this + 0x108));
      Sexy::Graphics::SetColorizeImages(param_2,false);
    }
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_78);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlmanacWidget::SetAlmanacPage(Sexy::RtWeakPtr<ObjectTypeDescriptor const>) */

void __thiscall AlmanacWidget::SetAlmanacPage(AlmanacWidget *this,RtWeakPtrBase *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  AlmanacPage *pAVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x68))(this,*(undefined8 *)(this + 0xe8));
  if (*(long **)(this + 0xe8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe8) + 0x18))();
    *(undefined8 *)(this + 0xe8) = 0;
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,param_2);
  iVar2 = FUN_03b4642c(0xb);
  iVar3 = FUN_03b4642c(0x3f);
  iVar4 = FUN_03b4642c(0x16);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_03b4642c(0x14c);
  Sexy::Insets::Insets(aIStack_18,iVar2,iVar3,iVar1 - iVar4,iVar5);
  pAVar6 = ::operator_new(0x108);
  AlmanacPage::AlmanacPage(pAVar6,this,aRStack_20,aIStack_18,1);
  *(AlmanacPage **)(this + 0xe8) = pAVar6;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  (**(code **)(*(long *)this + 0xb8))(this,*(undefined8 *)(this + 0xe8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AlmanacWidget::ButtonPress(int) */

void __thiscall AlmanacWidget::ButtonPress(AlmanacWidget *this,int param_1)

{
  char *pcVar1;
  
  if (param_1 != -1) {
    return;
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Almanac_Close_Press");
  return;
}


/* non-virtual thunk to AlmanacWidget::ButtonPress(int) */

void __thiscall AlmanacWidget::ButtonPress(AlmanacWidget *this,int param_1)

{
  ButtonPress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlmanacWidget::ButtonDepress(int) */

void __thiscall AlmanacWidget::ButtonDepress(AlmanacWidget *this,int param_1)

{
  uint uVar1;
  char *pcVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var3;
  PurchaseBroker *pPVar4;
  string *psVar5;
  long lVar6;
  long lVar7;
  string asStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == -1) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Almanac_Close_Release");
    GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
    p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar4 = (PurchaseBroker *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_rightmost(p_Var3);
    PurchaseBroker::EndCartInstance(pPVar4);
  }
  else if (param_1 == 0) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Almanac_Tab_Plant");
    uVar1 = Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromIndex(uVar1);
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x110),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar4 = (PurchaseBroker *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_rightmost(p_Var3);
    std::string::string(asStack_20,"Main");
    std::string::string(asStack_18,"Almanac");
    std::string::string((string *)aRStack_10,"Plants");
    PurchaseBroker::StartNewCartInstance(pPVar4,asStack_20,asStack_18,(string *)aRStack_10);
    std::string::~string((string *)aRStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    std::string::~string(asStack_20);
    nop();
  }
  else if (param_1 == 1) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Almanac_Tab_Zombie");
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    lVar6 = FUN_03b49160();
    lVar7 = FUN_03b49160();
    lVar7 = FUN_03b461d0(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x48));
    FUN_03b461dc(*(undefined8 *)(lVar6 + 0x40),lVar7 + -1);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x110),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  else if (param_1 == 2) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Almanac_Tab_Upgrades");
    uVar1 = Sexy::LazySingleton<ObjectTypeDirectory<GameFeatureType>>::GetInstancePtr();
    ObjectTypeDirectory<GameFeatureType>::GetTypeFromIndex(uVar1);
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x110),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar4 = (PurchaseBroker *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_rightmost(p_Var3);
    std::string::string(asStack_20,"Main");
    std::string::string(asStack_18,"Almanac");
    std::string::string((string *)aRStack_10,"Upgrades");
    PurchaseBroker::StartNewCartInstance(pPVar4,asStack_20,asStack_18,(string *)aRStack_10);
    std::string::~string((string *)aRStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    std::string::~string(asStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AlmanacWidget::ButtonDepress(int) */

void __thiscall AlmanacWidget::ButtonDepress(AlmanacWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlmanacWidget::SetupAlmanac(Sexy::RtWeakPtr<ObjectTypeDescriptor const>) */

void __thiscall
AlmanacWidget::SetupAlmanac(AlmanacWidget *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  PrimeText *this_00;
  RtObject *this_01;
  AlmanacPage *pAVar11;
  AlmanacObjectChooser *pAVar12;
  PVZ2UIScrollingWidget *pPVar13;
  long lVar14;
  UpgradesAlmanacPage *this_02;
  long *plVar15;
  AccessoryContent *pAVar16;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  resetPages(this);
  this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  bVar1 = Sexy::RtObject::IsA<GameFeatureType>(this_01);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)param_2);
    iVar2 = FUN_03b4642c(0xb);
    iVar3 = FUN_03b4642c(10);
    iVar4 = FUN_03b4642c(0x3f);
    iVar9 = *(int *)(this + 0x50);
    iVar5 = FUN_03b4642c(0x16);
    iVar10 = FUN_03b4642c(0x1e0);
    Sexy::Insets::Insets(aIStack_18,iVar2 - iVar3,iVar4,(iVar3 + iVar9) - iVar5,iVar10);
    this_02 = ::operator_new(0x120);
    UpgradesAlmanacPage::UpgradesAlmanacPage(this_02,this,aRStack_20,aIStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    pPVar13 = ::operator_new(0x248);
    PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(pPVar13,(ScrollWidgetListener *)(this + 0xe0));
    *(PVZ2UIScrollingWidget **)(this + 0xf8) = pPVar13;
    iVar2 = FUN_03b4642c(0xb);
    iVar3 = FUN_03b4642c(0x19);
    uVar6 = FUN_03b4642c(0x3f);
    iVar4 = FUN_03b4642c(0x16);
    iVar9 = *(int *)(this + 0x50);
    iVar5 = FUN_03b4642c(0x32);
    uVar7 = FUN_03b4642c(0x1e0);
    (**(code **)(*(long *)pPVar13 + 0x198))
              (pPVar13,iVar2 + iVar3,uVar6,(iVar9 - iVar4) - iVar5,uVar7);
    Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0xf8),1);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
    (**(code **)(**(long **)(this + 0xf8) + 0x60))(*(long **)(this + 0xf8),this_02);
    iVar9 = UpgradesAlmanacPage::GetScrollOffset(this_02);
    pAVar16 = *(AccessoryContent **)(this + 0xf8);
    lVar14 = AccessoryContent::GetDisplayImage(pAVar16);
    DVec2::DVec2((DVec2 *)aIStack_18,(float)iVar9,(float)*(int *)(lVar14 + 0x4c));
    Sexy::ScrollWidget::SetScrollOffset((ScrollWidget *)pAVar16,aIStack_18,0);
    *(undefined8 *)(this + 0x100) = 0;
    *(undefined8 *)(this + 0x108) = 0;
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)param_2);
    iVar2 = FUN_03b4642c(0xb);
    iVar3 = FUN_03b4642c(0x3f);
    iVar4 = FUN_03b4642c(0x16);
    iVar9 = *(int *)(this + 0x50);
    iVar5 = FUN_03b4642c(0x14c);
    Sexy::Insets::Insets(aIStack_18,iVar2,iVar3,iVar9 - iVar4,iVar5);
    pAVar11 = ::operator_new(0x108);
    AlmanacPage::AlmanacPage(pAVar11,this,aRStack_20,aIStack_18,1);
    *(AlmanacPage **)(this + 0xe8) = pAVar11;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
    (**(code **)(*(long *)this + 0xb8))(this,*(undefined8 *)(this + 0xe8));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aIStack_18,(RtWeakPtrBase *)param_2);
    pAVar12 = ::operator_new(0x108);
    AlmanacObjectChooser::AlmanacObjectChooser(pAVar12,aIStack_18,this);
    *(AlmanacObjectChooser **)(this + 0xf0) = pAVar12;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_18);
    plVar15 = *(long **)(this + 0xf0);
    uVar6 = FUN_03b4642c(0x28);
    uVar7 = FUN_03b4642c(0x18b);
    iVar2 = FUN_03b4642c(0x50);
    iVar9 = *(int *)(this + 0x50);
    uVar8 = FUN_03b4642c(0x87);
    (**(code **)(*plVar15 + 0x310))(plVar15,uVar6,uVar7,iVar9 - iVar2,uVar8);
    pPVar13 = ::operator_new(0x248);
    PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(pPVar13,(ScrollWidgetListener *)(this + 0xe0));
    *(PVZ2UIScrollingWidget **)(this + 0xf8) = pPVar13;
    iVar2 = FUN_03b4642c(0x28);
    iVar3 = FUN_03b4642c(10);
    uVar6 = FUN_03b4642c(0x18b);
    iVar4 = FUN_03b4642c(0x50);
    iVar9 = *(int *)(this + 0x50);
    iVar5 = FUN_03b4642c(0x14);
    uVar7 = FUN_03b4642c(0x87);
    (**(code **)(*(long *)pPVar13 + 0x198))
              (pPVar13,iVar2 + iVar3,uVar6,(iVar9 - iVar4) - iVar5,uVar7);
    Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0xf8),1);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
    (**(code **)(**(long **)(this + 0xf8) + 0x60))
              (*(long **)(this + 0xf8),*(undefined8 *)(this + 0xf0));
    iVar9 = AlmanacObjectChooser::GetScrollOffset(*(AlmanacObjectChooser **)(this + 0xf0));
    pAVar16 = *(AccessoryContent **)(this + 0xf8);
    lVar14 = AccessoryContent::GetDisplayImage(pAVar16);
    DVec2::DVec2((DVec2 *)aIStack_18,(float)iVar9,(float)*(int *)(lVar14 + 0x4c));
    Sexy::ScrollWidget::SetScrollOffset((ScrollWidget *)pAVar16,aIStack_18,0);
    *(undefined8 *)(this + 0x100) = 0;
    *(undefined8 *)(this + 0x108) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlmanacWidget::Update() */

void __thiscall AlmanacWidget::Update(AlmanacWidget *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x110);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this_00);
    SetupAlmanac(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlmanacWidget::AlmanacWidget(Sexy::RtWeakPtr<ObjectTypeDescriptor const>) */

void __thiscall
AlmanacWidget::AlmanacWidget(AlmanacWidget *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  ButtonListener *this_00;
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  PVZ2UIButton *pPVar13;
  LotteryResultProgressBar *pLVar14;
  SalesProgressBar *pSVar15;
  RtObject *pRVar16;
  undefined8 uVar17;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  PurchaseBroker *this_02;
  code *pcVar18;
  PVZ2UIButton *local_a0;
  string asStack_98 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_90 [24];
  string asStack_78 [56];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ButtonListener *)(this + 0xd8);
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener(this_00);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06732110;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06732450;
  *(undefined ***)(this + 0xe0) = &PTR__AlmanacWidget_06732498;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  this[0x59] = (AlmanacWidget)0x0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  lVar1 = gLawnApp;
  iVar3 = FUN_03b4642c(0x1e);
  iVar8 = *(int *)(lVar1 + 0x71c);
  iVar4 = FUN_03b4642c(0x16);
  iVar12 = *(int *)(lVar1 + 0x720);
  iVar5 = FUN_03b4642c(0x3c);
  iVar7 = *(int *)(lVar1 + 0x724);
  iVar6 = FUN_03b4642c(0x28);
  Sexy::Widget::Resize
            ((Widget *)this,iVar3 + iVar8,iVar4 + iVar12,iVar7 - iVar5,
             *(int *)(lVar1 + 0x728) - iVar6);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)param_2);
  SetupAlmanac(this,aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  iVar7 = FUN_03b4642c(10);
  iVar8 = FUN_03b4642c(0x2a);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_90);
  FUN_05478178(asStack_78,L"[ALMANAC_PLANTS]",asStack_98);
  Sexy::Color::Color((Color *)aRStack_40,1);
  pPVar13 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar13,0,this_00,(wstring *)asStack_78,(Color *)aRStack_40);
  local_a0 = pPVar13;
  FUN_05476c50(asStack_78);
  nop();
  pPVar13 = local_a0;
  pcVar18 = *(code **)(*(long *)local_a0 + 0x198);
  uVar9 = FUN_03b4642c(0x12);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb190);
  uVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb190);
  uVar11 = SalesProgressBar::GetCurrentLevel(pSVar15);
  (*pcVar18)(pPVar13,iVar8,uVar9,uVar10,uVar11);
  pPVar13 = local_a0;
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06acb190,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_40,&DAT_06acb2b0,1);
  pRVar16 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  bVar2 = Sexy::RtObject::IsA<PlantType>(pRVar16);
  PVZ2UIButton::SetRadioStates(pPVar13,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)aRStack_40,bVar2);
  pPVar13 = local_a0;
  pcVar18 = *(code **)(*(long *)local_a0 + 800);
  uVar17 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  (*pcVar18)(pPVar13,uVar17);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90,&local_a0);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)local_a0);
  iVar12 = *(int *)(local_a0 + 0x50);
  FUN_05478178(asStack_78,L"[ALMANAC_ZOMBIES]",asStack_98);
  iVar8 = iVar7 + iVar12 + iVar8;
  Sexy::Color::Color((Color *)aRStack_40,1);
  pPVar13 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar13,1,this_00,(wstring *)asStack_78,(Color *)aRStack_40);
  local_a0 = pPVar13;
  FUN_05476c50(asStack_78);
  nop();
  pPVar13 = local_a0;
  pcVar18 = *(code **)(*(long *)local_a0 + 0x198);
  uVar9 = FUN_03b4642c(0x12);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acaf78);
  uVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acaf78);
  uVar11 = SalesProgressBar::GetCurrentLevel(pSVar15);
  (*pcVar18)(pPVar13,iVar8,uVar9,uVar10,uVar11);
  pPVar13 = local_a0;
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06acaf78,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_40,&DAT_06acb548,1);
  pRVar16 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  bVar2 = Sexy::RtObject::IsA<ZombieType>(pRVar16);
  PVZ2UIButton::SetRadioStates(pPVar13,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)aRStack_40,bVar2);
  pPVar13 = local_a0;
  pcVar18 = *(code **)(*(long *)local_a0 + 800);
  uVar17 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  (*pcVar18)(pPVar13,uVar17);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90,&local_a0);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)local_a0);
  iVar12 = *(int *)(local_a0 + 0x50);
  FUN_05478178(asStack_78,L"[ALMANAC_UPGRADES]",asStack_98);
  Sexy::Color::Color((Color *)aRStack_40,1);
  pPVar13 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar13,2,this_00,(wstring *)asStack_78,(Color *)aRStack_40);
  local_a0 = pPVar13;
  FUN_05476c50(asStack_78);
  nop();
  pPVar13 = local_a0;
  pcVar18 = *(code **)(*(long *)local_a0 + 0x198);
  uVar9 = FUN_03b4642c(0x12);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb668);
  uVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb668);
  uVar11 = SalesProgressBar::GetCurrentLevel(pSVar15);
  (*pcVar18)(pPVar13,iVar7 + iVar12 + iVar8,uVar9,uVar10,uVar11);
  pPVar13 = local_a0;
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06acb668,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_40,&DAT_06acb2e0,1);
  pRVar16 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  bVar2 = Sexy::RtObject::IsA<GameFeatureType>(pRVar16);
  PVZ2UIButton::SetRadioStates(pPVar13,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)aRStack_40,bVar2);
  pPVar13 = local_a0;
  pcVar18 = *(code **)(*(long *)local_a0 + 800);
  uVar17 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  (*pcVar18)(pPVar13,uVar17);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90,&local_a0);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)local_a0);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)aRStack_40,(vector *)avStack_90)
  ;
  PVZ2UI::LinkRadioButtons(aRStack_40);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)aRStack_40);
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PurchaseBroker *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(this_01);
  std::string::string(asStack_98,"Main");
  std::string::string(asStack_78,"Almanac");
  std::string::string((string *)aRStack_40,"Plants");
  PurchaseBroker::StartNewCartInstance(this_02,asStack_98,asStack_78,(string *)aRStack_40);
  std::string::~string((string *)aRStack_40);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::~string(asStack_98);
  nop();
  FUN_05478178(asStack_78,&DAT_056f11a8,asStack_98);
  Sexy::Color::Color((Color *)aRStack_40,1);
  pPVar13 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar13,-1,this_00,(wstring *)asStack_78,(Color *)aRStack_40);
  local_a0 = pPVar13;
  FUN_05476c50(asStack_78);
  nop();
  pPVar13 = local_a0;
  pcVar18 = *(code **)(*(long *)local_a0 + 0x198);
  iVar12 = FUN_03b4642c(0x23);
  iVar8 = *(int *)(this + 0x50);
  iVar7 = FUN_03b4642c(5);
  iVar3 = FUN_03b4642c(0x11);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb418);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb418);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar15);
  (*pcVar18)(pPVar13,(iVar8 - iVar12) - iVar7,-iVar3,(int)((float)iVar4 * 1.2),
             (int)((float)iVar5 * 1.2));
  pPVar13 = local_a0;
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06acb418,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_40,&DAT_06acb520,1);
  PVZ2UIButton::SetDialogStates(pPVar13,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)aRStack_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)local_a0);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

