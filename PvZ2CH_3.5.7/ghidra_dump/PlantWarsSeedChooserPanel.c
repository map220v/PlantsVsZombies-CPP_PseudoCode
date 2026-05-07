// Class: PlantWarsSeedChooserPanel


/* PlantWarsSeedChooserPanel::ScrollTargetReached(Sexy::ScrollWidget*) */

void PlantWarsSeedChooserPanel::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PlantWarsSeedChooserPanel::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
PlantWarsSeedChooserPanel::ScrollTargetReached
          (PlantWarsSeedChooserPanel *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* PlantWarsSeedChooserPanel::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PlantWarsSeedChooserPanel::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PlantWarsSeedChooserPanel::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
PlantWarsSeedChooserPanel::ScrollTargetInterrupted
          (PlantWarsSeedChooserPanel *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* PlantWarsSeedChooserPanel::ButtonDepress(int) */

int PlantWarsSeedChooserPanel::ButtonDepress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to PlantWarsSeedChooserPanel::ButtonDepress(int) */

void __thiscall
PlantWarsSeedChooserPanel::ButtonDepress(PlantWarsSeedChooserPanel *this,int param_1)

{
  ButtonDepress((int)this + -0xe0);
  return;
}


/* PlantWarsSeedChooserPanel::ReleaseAllSeedCard() */

void __thiscall PlantWarsSeedChooserPanel::ReleaseAllSeedCard(PlantWarsSeedChooserPanel *this)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0xe8);
    uVar2 = FUN_04d9e754(uVar4,*(undefined8 *)(this + 0xf0));
    if (uVar2 <= uVar3) break;
    plVar1 = (long *)FUN_04d9e760(uVar4,uVar3);
    FUN_04d9e708(*plVar1 + 0xe0,0);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* PlantWarsSeedChooserPanel::SelectSeedCard(std::string const&) */

void __thiscall
PlantWarsSeedChooserPanel::SelectSeedCard(PlantWarsSeedChooserPanel *this,string *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar5 = 0;
  while( true ) {
    uVar7 = *(undefined8 *)(this + 0xe8);
    uVar4 = FUN_04d9e754(uVar7,*(undefined8 *)(this + 0xf0));
    if (uVar4 <= uVar5) break;
    plVar2 = (long *)FUN_04d9e760(uVar7,uVar5);
    lVar6 = *plVar2;
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0xf0));
    uVar1 = std::operator==((string *)(lVar3 + 8),param_1);
    FUN_04d9e700(lVar6 + 0xd8,uVar1);
    uVar5 = uVar5 + 1;
  }
  return;
}


/* PlantWarsSeedChooserPanel::ChooseSeedCard(std::string const&, int) */

void __thiscall
PlantWarsSeedChooserPanel::ChooseSeedCard
          (PlantWarsSeedChooserPanel *this,string *param_1,int param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(this + 0xe8);
    uVar4 = FUN_04d9e754(uVar6,*(undefined8 *)(this + 0xf0));
    if (uVar4 <= uVar5) {
      return;
    }
    plVar2 = (long *)FUN_04d9e760(uVar6,uVar5);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar2 + 0xf0));
    cVar1 = std::operator==((string *)(lVar3 + 8),param_1);
    if (cVar1 != '\0') break;
    uVar5 = uVar5 + 1;
  }
  plVar2 = (long *)FUN_04d9e760(*(undefined8 *)(this + 0xe8),uVar5);
  FUN_04d9e708(*plVar2 + 0xe0,param_2);
  return;
}


/* PlantWarsSeedChooserPanel::ReleaseSeedCard(std::string const&) */

void __thiscall
PlantWarsSeedChooserPanel::ReleaseSeedCard(PlantWarsSeedChooserPanel *this,string *param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(this + 0xe8);
    uVar4 = FUN_04d9e754(uVar6,*(undefined8 *)(this + 0xf0));
    if (uVar4 <= uVar5) {
      return;
    }
    plVar2 = (long *)FUN_04d9e760(uVar6,uVar5);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar2 + 0xf0));
    cVar1 = std::operator==((string *)(lVar3 + 8),param_1);
    if (cVar1 != '\0') break;
    uVar5 = uVar5 + 1;
  }
  plVar2 = (long *)FUN_04d9e760(*(undefined8 *)(this + 0xe8),uVar5);
  FUN_04d9e708(*plVar2 + 0xe0,0);
  return;
}


/* PlantWarsSeedChooserPanel::PlantWarsSeedChooserPanel() */

void __thiscall
PlantWarsSeedChooserPanel::PlantWarsSeedChooserPanel(PlantWarsSeedChooserPanel *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_069bbc90;
  *(undefined ***)(this + 0xd8) = &PTR__PlantWarsSeedChooserPanel_069bbfc8;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_069bc010;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  return;
}


/* PlantWarsSeedChooserPanel::~PlantWarsSeedChooserPanel() */

void __thiscall
PlantWarsSeedChooserPanel::~PlantWarsSeedChooserPanel(PlantWarsSeedChooserPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_069bbc90;
  *(undefined ***)(this + 0xd8) = &PTR__PlantWarsSeedChooserPanel_069bbfc8;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_069bc010;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<PlantWarsSeedCard*,std::allocator<PlantWarsSeedCard*>>::~vector
            ((vector<PlantWarsSeedCard*,std::allocator<PlantWarsSeedCard*>> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to PlantWarsSeedChooserPanel::~PlantWarsSeedChooserPanel() */

void __thiscall
PlantWarsSeedChooserPanel::~PlantWarsSeedChooserPanel(PlantWarsSeedChooserPanel *this)

{
  ~PlantWarsSeedChooserPanel(this + -0xd8);
  return;
}


/* PlantWarsSeedChooserPanel::~PlantWarsSeedChooserPanel() */

void __thiscall
PlantWarsSeedChooserPanel::~PlantWarsSeedChooserPanel(PlantWarsSeedChooserPanel *this)

{
  ~PlantWarsSeedChooserPanel(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantWarsSeedChooserPanel::~PlantWarsSeedChooserPanel() */

void __thiscall
PlantWarsSeedChooserPanel::~PlantWarsSeedChooserPanel(PlantWarsSeedChooserPanel *this)

{
  ~PlantWarsSeedChooserPanel(this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsSeedChooserPanel::Init() */

void __thiscall PlantWarsSeedChooserPanel::Init(PlantWarsSeedChooserPanel *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  UIWidgetText *this_00;
  PVZ2UIButton *this_01;
  PVZ2UIScrollingWidget *this_02;
  Widget *this_03;
  ProfileMgr *this_04;
  PlayerInfo *this_05;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_06;
  PlantWarsNetworkMgr *this_07;
  long lVar13;
  long lVar14;
  NameMapperBase *this_08;
  undefined8 uVar15;
  undefined8 uVar16;
  RtWeakPtr *pRVar17;
  ulong uVar18;
  RtWeakPtrBase *pRVar19;
  PlantWarsSeedCard *pPVar20;
  int iVar21;
  ulong uVar22;
  int iVar23;
  code *pcVar24;
  LevelEditorCardPlantInterface aLStack_98 [4];
  undefined4 local_94;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  PlantWarsSeedCard *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_40;
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[CHOOSE_YOUR_PLANTS]");
  this_00 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(this_00,(wstring *)&local_40);
  FUN_05476c50((wstring *)&local_40);
  uVar4 = FUN_04d9f494(0x56);
  uVar5 = FUN_04d9f494(4);
  uVar6 = FUN_04d9f494(0xd2);
  uVar7 = FUN_04d9f494(0x1e);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar4,uVar5,uVar6,uVar7);
  UIWidgetText::SetFontIndex(this_00,0x7d);
  pcVar24 = *(code **)(*(long *)this_00 + 0x170);
  Sexy::Color::Color((Color *)&local_40,1);
  (*pcVar24)(this_00,0,(wstring *)&local_40);
  FUN_04d9e724(this_00 + 0xe0,5);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  FUN_05478178((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_78,
               &DAT_056f11a8,(RtWeakPtr<Sexy::SoundResource> *)&local_80);
  Sexy::Color::Color((Color *)&local_40,1);
  this_01 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_01,3,(ButtonListener *)(this + 0xe0),(wstring *)&local_78,(Color *)&local_40);
  FUN_05476c50((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b98bb8,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b98bb8,2);
  PVZ2UIButton::SetDialogStates(this_01,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)&local_40);
  uVar4 = FUN_04d9f494(0x140);
  uVar5 = FUN_04d9f494(5);
  uVar6 = FUN_04d9f494(0x2d);
  uVar7 = FUN_04d9f494(0x1a);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,uVar4,uVar5,uVar6,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,this_01);
  (**(code **)(*(long *)this_01 + 0x158))(this_01,0);
  this_02 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0xd8));
  uVar4 = FUN_04d9f494(0);
  uVar5 = FUN_04d9f494(0x23);
  uVar6 = FUN_04d9f494(0xb9);
  (**(code **)(*(long *)this_02 + 0x198))(this_02,uVar4,uVar5,*(undefined4 *)(this + 0x50),uVar6);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_02,2);
  this_03 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_03);
  (**(code **)(*(long *)this_03 + 0x198))
            (this_03,0,0,*(undefined4 *)(this_02 + 0x50),*(undefined4 *)(this_02 + 0x54));
  iVar8 = FUN_04d9f494(10);
  iVar9 = FUN_04d9f494(0);
  iVar10 = FUN_04d9f494(5);
  iVar11 = FUN_04d9f494(0x46);
  iVar12 = FUN_04d9f494(0x32);
  this_04 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_05 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_04);
  std::vector<PlantWarsSeedCard*,std::allocator<PlantWarsSeedCard*>>::clear
            ((vector<PlantWarsSeedCard*,std::allocator<PlantWarsSeedCard*>> *)(this + 0xe8));
  this_06 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)LocalProfileSaveData::GetSeedChooserFavorites(this_05);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_78);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_40);
  this_07 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  lVar13 = PlantWarsNetworkMgr::GetCurrentWorldData(this_07);
  LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_98);
  while (bVar2 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                           ((ObjectTypeDirectoryIterator *)aLStack_98), bVar2) {
    ObjectTypeDirectoryIterator<PlantType>::operator*
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_98);
    cVar3 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aRStack_90);
    if ((cVar3 == '\0') &&
       (lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90),
       *(char *)(lVar14 + 0x30) != '\0')) {
      this_08 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
      lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
      local_94 = NameMapperBase::GetIdForName(this_08,(string *)(lVar14 + 8));
      uVar15 = FUN_04da317c(*(undefined8 *)(lVar13 + 0x88));
      uVar16 = FUN_04da31cc(*(undefined8 *)(lVar13 + 0x90));
      local_88 = (PlantWarsSeedCard *)
                 std::
                 find<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,int>
                           (uVar15,uVar16,&local_94);
      local_80 = FUN_04da31cc(*(undefined8 *)(lVar13 + 0x90));
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_88,(__normal_iterator *)&local_80);
      if (!bVar2) {
        uVar15 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_06);
        uVar16 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_06);
        lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
        local_88 = (PlantWarsSeedCard *)
                   std::
                   find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                             (uVar15,uVar16,lVar14 + 8);
        local_80 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_06);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_88,(__normal_iterator *)&local_80)
        ;
        if (bVar2) {
          std::
          vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
          ::push_back((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                       *)&local_78,(RtWeakPtr *)aRStack_90);
        }
        else {
          std::
          vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
          ::push_back((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                       *)&local_40,(RtWeakPtr *)aRStack_90);
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
    ObjectTypeDirectoryIterator<PlantType>::operator++
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_98);
  }
  for (uVar22 = 0; uVar15 = local_40, uVar18 = FUN_04d9e740(local_40,local_38), uVar22 < uVar18;
      uVar22 = uVar22 + 1) {
    pRVar17 = (RtWeakPtr *)FUN_04d9e74c(uVar15,uVar22);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    push_back((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
               *)&local_78,pRVar17);
  }
  iVar21 = 0;
  iVar23 = iVar21;
  for (uVar22 = 0; uVar15 = local_78, uVar18 = FUN_04d9e740(local_78,local_70), uVar22 < uVar18;
      uVar22 = uVar22 + 1) {
    pRVar19 = (RtWeakPtrBase *)FUN_04d9e74c(uVar15,uVar22);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_90,pRVar19);
    lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
    cVar3 = PlayerInfo::GetIsPlantUnlocked(this_05,(string *)(lVar13 + 8));
    if (cVar3 != '\0') {
      pPVar20 = ::operator_new(0x108);
      PlantWarsSeedCard::PlantWarsSeedCard(pPVar20);
      iVar21 = iVar23 / 5;
      iVar1 = iVar23 % 5;
      iVar23 = iVar23 + 1;
      local_88 = pPVar20;
      (**(code **)(*(long *)pPVar20 + 0x198))
                (pPVar20,iVar8 + (iVar11 + iVar10) * iVar1,iVar9 + (iVar10 + iVar12) * iVar21,iVar11
                 ,iVar12);
      pPVar20 = local_88;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_80,(RtWeakPtrBase *)aRStack_90);
      PlantWarsSeedCard::InitPlant(pPVar20,(RtWeakPtr<Sexy::SoundResource> *)&local_80,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
      (**(code **)(*(long *)this_03 + 0x60))(this_03,local_88);
      std::vector<PlantWarsSeedCard*,std::allocator<PlantWarsSeedCard*>>::push_back
                ((vector<PlantWarsSeedCard*,std::allocator<PlantWarsSeedCard*>> *)(this + 0xe8),
                 &local_88);
      iVar21 = *(int *)(local_88 + 0x4c) + *(int *)(local_88 + 0x54);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
  }
  pcVar24 = *(code **)(*(long *)this_02 + 0x60);
  *(int *)(this_03 + 0x54) = iVar9 + iVar21;
  (*pcVar24)(this_02,this_03);
  (**(code **)(*(long *)this + 0x60))(this,this_02);
  std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
           *)&local_40);
  std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
           *)&local_78);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

