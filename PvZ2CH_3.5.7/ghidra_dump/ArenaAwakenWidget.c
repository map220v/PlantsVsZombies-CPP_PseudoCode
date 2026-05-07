// Class: ArenaAwakenWidget


/* ArenaAwakenWidget::ScrollTargetReached(Sexy::ScrollWidget*) */

void ArenaAwakenWidget::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ArenaAwakenWidget::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
ArenaAwakenWidget::ScrollTargetReached(ArenaAwakenWidget *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* ArenaAwakenWidget::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void ArenaAwakenWidget::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ArenaAwakenWidget::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
ArenaAwakenWidget::ScrollTargetInterrupted(ArenaAwakenWidget *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* ArenaAwakenWidget::resetPages() */

void __thiscall ArenaAwakenWidget::resetPages(ArenaAwakenWidget *this)

{
  if (*(long *)(this + 0xe8) != 0) {
    (**(code **)(*(long *)this + 0x68))();
    if (*(long **)(this + 0xe8) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xe8) + 0x18))();
      *(undefined8 *)(this + 0xe8) = 0;
    }
  }
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaAwakenWidget::~ArenaAwakenWidget() */

void __thiscall ArenaAwakenWidget::~ArenaAwakenWidget(ArenaAwakenWidget *this)

{
  LawnApp *pLVar1;
  PrimeText *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06955d60;
  *(undefined **)(this + 0xd8) = &DAT_069560a0;
  *(undefined ***)(this + 0xe0) = &PTR__ArenaAwakenWidget_069560e8;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Almanac");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ZombieAlmanac");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ZombieAlmanac_Dynamic");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x108));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ArenaAwakenWidget::~ArenaAwakenWidget() */

void __thiscall ArenaAwakenWidget::~ArenaAwakenWidget(ArenaAwakenWidget *this)

{
  ~ArenaAwakenWidget(this + -0xe0);
  return;
}


/* ArenaAwakenWidget::~ArenaAwakenWidget() */

void __thiscall ArenaAwakenWidget::~ArenaAwakenWidget(ArenaAwakenWidget *this)

{
  ~ArenaAwakenWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArenaAwakenWidget::~ArenaAwakenWidget() */

void __thiscall ArenaAwakenWidget::~ArenaAwakenWidget(ArenaAwakenWidget *this)

{
  ~ArenaAwakenWidget(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaAwakenWidget::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
ArenaAwakenWidget::DrawAll(ArenaAwakenWidget *this,ModalFlags *param_1,Graphics *param_2)

{
  Insets *pIVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  float *pfVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  GraphicsAutoState aGStack_98 [8];
  float local_90;
  float local_88;
  float local_80;
  int local_78;
  int iStack_74;
  int local_70;
  int local_6c;
  Insets local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  float local_38;
  int iStack_34;
  int local_30;
  int local_2c;
  float local_28;
  int iStack_24;
  undefined8 uStack_20;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Color::Color((Color *)local_18,0);
  pIVar1 = (Insets *)(param_2 + 0x28);
  Sexy::Graphics::SetColor(param_2,(Color *)local_18);
  Sexy::Graphics::FillRect(param_2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  iVar3 = FUN_04b22278(0x48);
  Sexy::Insets::Insets
            ((Insets *)&local_78,0,iVar3,*(int *)(this + 0x50),*(int *)(this + 0x54) - iVar3);
  iVar3 = local_78;
  iVar4 = FUN_04b22278(0xc);
  iVar9 = iStack_74;
  iVar5 = FUN_04b22278(9);
  iVar10 = local_70;
  iVar6 = FUN_04b22278(0x18);
  iVar11 = local_6c;
  iVar7 = FUN_04b22278(0x19);
  Sexy::Insets::Insets(local_68,iVar3 + iVar4,iVar9 + iVar5,iVar10 - iVar6,iVar11 - iVar7);
  Sexy::Insets::Insets((Insets *)local_18,local_68);
  uVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b846e8);
  DrawImageTiled(0x3f800000,param_2,(Insets *)local_18,uVar12);
  Sexy::Insets::Insets((Insets *)&local_58,pIVar1);
  Sexy::Insets::Insets((Insets *)&local_48,(Insets *)&local_78);
  uVar8 = FUN_04b22278(0x16);
  uStack_40 = CONCAT44(uVar8,(int)uStack_40);
  *(undefined8 *)pIVar1 = local_48;
  *(undefined8 *)(param_2 + 0x30) = uStack_40;
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)&local_78);
  uVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84568);
  Draw9SliceImage(param_2,(Insets *)local_18,uVar12);
  *(undefined8 *)pIVar1 = local_58;
  *(undefined8 *)(param_2 + 0x30) = uStack_50;
  Sexy::Insets::Insets((Insets *)&local_38);
  if (*(long *)(this + 0xf0) == 0) {
    iStack_34 = SUB84(local_68._0_8_,4);
    local_38 = (float)local_68._0_8_;
    local_2c = SUB84(local_68._8_8_,4);
    local_30 = (int)local_68._8_8_;
  }
  else {
    iVar9 = FUN_04b22278(0x14);
    iVar10 = FUN_04b22278(0x1ab);
    iVar11 = FUN_04b22278(0x28);
    iVar3 = *(int *)(this + 0x50);
    iVar4 = FUN_04b22278(0xaa);
    Sexy::Insets::Insets((Insets *)&local_28,iVar9,iVar10,iVar3 - iVar11,iVar4);
    Sexy::Insets::Insets((Insets *)local_18,(Insets *)&local_28);
    uVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b845c0);
    Draw3SliceImage(param_2,(Insets *)local_18,uVar12);
    iStack_34 = iStack_24;
    local_38 = local_28;
    local_2c = (int)((ulong)uStack_20 >> 0x20);
    local_30 = (int)uStack_20;
  }
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (((*(long *)(this + 0xf8) != 0) || (*(long *)(this + 0x100) != 0)) &&
     (cVar2 = Sexy::ScrollWidget::GetNeedsScroller(*(ScrollWidget **)(this + 0xe8)), cVar2 != '\0'))
  {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_98,param_2);
    Sexy::ScrollWidget::GetScrollOffset();
    Sexy::ScrollWidget::GetScrollMin();
    Sexy::ScrollWidget::GetScrollMax();
    if ((local_90 < local_80) && (*(long *)(this + 0xf8) != 0)) {
      local_28 = (float)FUN_04b2228c();
      local_28 = ABS(local_80 - local_90) / local_28;
      local_18[0] = 0x3f800000;
      pfVar13 = eastl::min_alt<float>(&local_28,(float *)local_18);
      iVar3 = iStack_34;
      fVar15 = local_38;
      fVar16 = *pfVar13;
      iVar9 = FUN_04b22278(0x14);
      Sexy::Insets::Insets((Insets *)&local_28,(int)fVar15,iVar3,iVar9,local_2c);
      Sexy::Insets::Insets((Insets *)local_18,0xff,0xff,0xff,(int)(fVar16 * 255.0));
      Sexy::Graphics::SetColor(param_2,(Color *)local_18);
      Sexy::Graphics::SetColorizeImages(param_2,true);
      Sexy::Insets::Insets((Insets *)local_18,(Insets *)&local_28);
      Draw3SliceImageVertical(param_2,(Insets *)local_18,*(undefined8 *)(this + 0xf8));
      Sexy::Graphics::SetColorizeImages(param_2,false);
    }
    if ((local_88 < local_90) && (lVar14 = *(long *)(this + 0x100), lVar14 != 0)) {
      local_28 = (float)FUN_04b2228c();
      local_28 = ABS(local_90 - local_88) / local_28;
      local_18[0] = 0x3f800000;
      pfVar13 = eastl::min_alt<float>(&local_28,(float *)local_18);
      iVar3 = *(int *)(lVar14 + 0x38);
      fVar15 = *pfVar13;
      Sexy::Insets::Insets
                ((Insets *)&local_28,((int)local_38 + local_30) - iVar3,iStack_34,iVar3,local_2c);
      Sexy::Insets::Insets((Insets *)local_18,0xff,0xff,0xff,(int)(fVar15 * 255.0));
      Sexy::Graphics::SetColor(param_2,(Color *)local_18);
      Sexy::Graphics::SetColorizeImages(param_2,true);
      Sexy::Insets::Insets((Insets *)local_18,(Insets *)&local_28);
      Draw3SliceImageVertical(param_2,(Insets *)local_18,*(undefined8 *)(this + 0x100));
      Sexy::Graphics::SetColorizeImages(param_2,false);
    }
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_98);
  }
  local_48._0_4_ = local_78;
  local_48._4_4_ = iStack_74;
  uStack_40._0_4_ = local_70;
  uStack_40._4_4_ = local_6c;
  iVar3 = FUN_04b22278(0x16);
  local_48 = CONCAT44(local_48._4_4_ + iVar3,(int)local_48);
  iVar3 = FUN_04b22278(0x16);
  uStack_40 = CONCAT44(uStack_40._4_4_ - iVar3,(int)uStack_40);
  *(undefined8 *)pIVar1 = local_48;
  *(undefined8 *)(param_2 + 0x30) = uStack_40;
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)&local_78);
  uVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84568);
  Draw9SliceImage(param_2,(Insets *)local_18,uVar12);
  *(undefined8 *)pIVar1 = local_58;
  *(undefined8 *)(param_2 + 0x30) = uStack_50;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaAwakenWidget::SetupAlmanac(Sexy::RtWeakPtr<ObjectTypeDescriptor const>) */

void __thiscall ArenaAwakenWidget::SetupAlmanac(ArenaAwakenWidget *this,RtWeakPtrBase *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  PrimeText *this_00;
  AwakenObjectChooser *pAVar6;
  PVZ2UIScrollingWidget *this_01;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  AccessoryContent *this_02;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  pAVar6 = ::operator_new(0x108);
  AwakenObjectChooser::AwakenObjectChooser(pAVar6,aRStack_10,this);
  *(AwakenObjectChooser **)(this + 0xf0) = pAVar6;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  plVar9 = *(long **)(this + 0xf0);
  uVar1 = FUN_04b22278(0x14);
  uVar2 = FUN_04b22278(0x1ab);
  iVar3 = FUN_04b22278(0x28);
  iVar5 = *(int *)(this + 0x50);
  uVar4 = FUN_04b22278(0xaa);
  (**(code **)(*plVar9 + 0x310))(plVar9,uVar1,uVar2,iVar5 - iVar3,uVar4);
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0xe0));
  *(PVZ2UIScrollingWidget **)(this + 0xe8) = this_01;
  uVar1 = FUN_04b22278(0x14);
  uVar2 = FUN_04b22278(0x1ab);
  iVar3 = FUN_04b22278(0x28);
  iVar5 = *(int *)(this + 0x50);
  uVar4 = FUN_04b22278(0xaa);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,uVar1,uVar2,iVar5 - iVar3,uVar4);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0xe8),1);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  (**(code **)(**(long **)(this + 0xe8) + 0x60))
            (*(long **)(this + 0xe8),*(undefined8 *)(this + 0xf0));
  iVar5 = AwakenObjectChooser::GetScrollOffset(*(AwakenObjectChooser **)(this + 0xf0));
  this_02 = *(AccessoryContent **)(this + 0xe8);
  lVar7 = AccessoryContent::GetDisplayImage(this_02);
  DVec2::DVec2((DVec2 *)aRStack_10,(float)iVar5,(float)*(int *)(lVar7 + 0x4c));
  Sexy::ScrollWidget::SetScrollOffset((ScrollWidget *)this_02,aRStack_10,0);
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84740);
  *(undefined8 *)(this + 0xf8) = uVar8;
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84290);
  *(undefined8 *)(this + 0x100) = uVar8;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaAwakenWidget::ButtonPress(int) */

void __thiscall ArenaAwakenWidget::ButtonPress(ArenaAwakenWidget *this,int param_1)

{
  char *pcVar1;
  
  if (param_1 != -1) {
    return;
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Almanac_Close_Press");
  return;
}


/* non-virtual thunk to ArenaAwakenWidget::ButtonPress(int) */

void __thiscall ArenaAwakenWidget::ButtonPress(ArenaAwakenWidget *this,int param_1)

{
  ButtonPress(this + -0xd8,param_1);
  return;
}


/* ArenaAwakenWidget::ButtonDepress(int) */

void __thiscall ArenaAwakenWidget::ButtonDepress(ArenaAwakenWidget *this,int param_1)

{
  char *pcVar1;
  
  if (param_1 == -1) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Almanac_Close_Release");
    LawnApp::KillAwakenWidget(gLawnApp);
    return;
  }
  if (param_1 != 0) {
    if (param_1 != 1) {
      return;
    }
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Almanac_Tab_Zombie");
    return;
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Almanac_Tab_Plant");
  return;
}


/* non-virtual thunk to ArenaAwakenWidget::ButtonDepress(int) */

void __thiscall ArenaAwakenWidget::ButtonDepress(ArenaAwakenWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaAwakenWidget::ArenaAwakenWidget(Sexy::RtWeakPtr<ObjectTypeDescriptor const>) */

void __thiscall
ArenaAwakenWidget::ArenaAwakenWidget(ArenaAwakenWidget *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  ButtonListener *this_00;
  int iVar1;
  int iVar2;
  LawnApp *pLVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  PVZ2UIButton *pPVar10;
  LotteryResultProgressBar *pLVar11;
  SalesProgressBar *pSVar12;
  RtObject *pRVar13;
  undefined8 uVar14;
  code *pcVar15;
  undefined1 auStack_a0 [8];
  PVZ2UIButton *local_98;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_90 [24];
  wstring awStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  this_00 = (ButtonListener *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener(this_00);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06955d60;
  *(undefined **)(this + 0xd8) = &DAT_069560a0;
  *(undefined ***)(this + 0xe0) = &PTR__ArenaAwakenWidget_069560e8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x108));
  pLVar3 = gLawnApp;
  std::string::string(asStack_40,"UI_Almanac");
  LawnApp::LoadGroup(pLVar3,asStack_40);
  std::string::~string(asStack_40);
  nop();
  pLVar3 = gLawnApp;
  std::string::string(asStack_40,"UI_ZombieAlmanac");
  LawnApp::LoadGroup(pLVar3,asStack_40);
  std::string::~string(asStack_40);
  nop();
  pLVar3 = gLawnApp;
  std::string::string(asStack_40,"UI_ZombieAlmanac_Dynamic");
  LawnApp::LoadGroup(pLVar3,asStack_40);
  std::string::~string(asStack_40);
  nop();
  *(undefined8 *)(this + 0xe8) = 0;
  pLVar3 = gLawnApp;
  *(undefined8 *)(this + 0x100) = 0;
  iVar1 = *(int *)(pLVar3 + 0x724);
  iVar5 = *(int *)(pLVar3 + 0x728);
  iVar6 = *(int *)(pLVar3 + 0x720);
  iVar2 = *(int *)(pLVar3 + 0x71c);
  *(undefined8 *)(this + 0xf8) = 0;
  Sexy::Widget::Resize((Widget *)this,iVar2,iVar6,iVar1,iVar5);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_40,(RtWeakPtrBase *)param_2);
  SetupAlmanac(this,asStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
  iVar5 = FUN_04b22278(10);
  iVar6 = FUN_04b22278(0x1b);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_90);
  FUN_05478178(awStack_78,L"[ALMANAC_PLANTS]",auStack_a0);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar10,0,this_00,awStack_78,(Color *)asStack_40);
  local_98 = pPVar10;
  FUN_05476c50(awStack_78);
  nop();
  pPVar10 = local_98;
  pcVar15 = *(code **)(*(long *)local_98 + 0x198);
  uVar7 = FUN_04b22278(10);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b843a8);
  uVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b843a8);
  uVar9 = SalesProgressBar::GetCurrentLevel(pSVar12);
  (*pcVar15)(pPVar10,iVar6,uVar7,uVar8,uVar9);
  pPVar10 = local_98;
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b843a8,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b84478,1);
  pRVar13 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  bVar4 = Sexy::RtObject::IsA<PlantType>(pRVar13);
  PVZ2UIButton::SetRadioStates(pPVar10,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40,bVar4);
  pPVar10 = local_98;
  pcVar15 = *(code **)(*(long *)local_98 + 800);
  uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  (*pcVar15)(pPVar10,uVar14);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90,&local_98);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)local_98);
  iVar1 = *(int *)(local_98 + 0x50);
  FUN_05478178(awStack_78,L"[ALMANAC_ZOMBIES]",auStack_a0);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar10,1,this_00,awStack_78,(Color *)asStack_40);
  local_98 = pPVar10;
  FUN_05476c50(awStack_78);
  nop();
  pPVar10 = local_98;
  pcVar15 = *(code **)(*(long *)local_98 + 0x198);
  uVar7 = FUN_04b22278(10);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84230);
  uVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84230);
  uVar9 = SalesProgressBar::GetCurrentLevel(pSVar12);
  (*pcVar15)(pPVar10,iVar5 + iVar1 + iVar6,uVar7,uVar8,uVar9);
  pPVar10 = local_98;
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b84230,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b84698,1);
  pRVar13 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  bVar4 = Sexy::RtObject::IsA<ZombieType>(pRVar13);
  PVZ2UIButton::SetRadioStates(pPVar10,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40,bVar4);
  pPVar10 = local_98;
  pcVar15 = *(code **)(*(long *)local_98 + 800);
  uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  (*pcVar15)(pPVar10,uVar14);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90,&local_98);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)local_98);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)asStack_40,(vector *)avStack_90)
  ;
  PVZ2UI::LinkRadioButtons(asStack_40);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)asStack_40);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_a0);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar10,-1,this_00,awStack_78,(Color *)asStack_40);
  local_98 = pPVar10;
  FUN_05476c50(awStack_78);
  nop();
  pPVar10 = local_98;
  iVar1 = *(int *)(this + 0x50);
  pcVar15 = *(code **)(*(long *)local_98 + 0x198);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84400);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar6 = FUN_04b22278(0x1b);
  uVar7 = FUN_04b22278(0x11);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84400);
  uVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84400);
  uVar9 = SalesProgressBar::GetCurrentLevel(pSVar12);
  (*pcVar15)(pPVar10,(iVar1 - iVar5) - iVar6,uVar7,uVar8,uVar9);
  pPVar10 = local_98;
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b84400,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b84400,1);
  PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)local_98);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

