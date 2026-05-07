// Class: LevelEditorPlantSetting


/* LevelEditorPlantSetting::ScrollTargetReached(Sexy::ScrollWidget*) */

void LevelEditorPlantSetting::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LevelEditorPlantSetting::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
LevelEditorPlantSetting::ScrollTargetReached(LevelEditorPlantSetting *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* LevelEditorPlantSetting::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void LevelEditorPlantSetting::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LevelEditorPlantSetting::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
LevelEditorPlantSetting::ScrollTargetInterrupted
          (LevelEditorPlantSetting *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorPlantSetting::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorPlantSetting::Draw(LevelEditorPlantSetting *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets
            (aIStack_18,*(int *)(this + 0x118),*(int *)(this + 0x11c),*(int *)(this + 0x120),
             *(int *)(this + 0x124));
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85600);
  Draw9SliceImage(param_1,aIStack_18,uVar3);
  TodStringTranslate(L"[LEVEL_EDITOR_EVIL_DAVE_SET_PLANT_TITLE]");
  iVar1 = FUN_04b334ec(0);
  iVar2 = FUN_04b334ec(0x46);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar1,*(int *)(this + 0x50),iVar2);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_34_HardShadow);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar3,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  Sexy::Insets::Insets
            (aIStack_18,*(int *)(this + 0x128),*(int *)(this + 300),*(int *)(this + 0x130),
             *(int *)(this + 0x134));
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85798);
  Draw9SliceImage(param_1,aIStack_18,uVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorPlantSetting::LevelEditorPlantSetting() */

void __thiscall LevelEditorPlantSetting::LevelEditorPlantSetting(LevelEditorPlantSetting *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_06960010;
  *(undefined ***)(this + 0xd8) = &PTR__LevelEditorPlantSetting_06960348;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x100));
  Sexy::Insets::Insets((Insets *)(this + 0x118));
  Sexy::Insets::Insets((Insets *)(this + 0x128));
  Sexy::Insets::Insets((Insets *)(this + 0x138));
  Sexy::Insets::Insets((Insets *)(this + 0x148));
  return;
}


/* LevelEditorPlantSetting::~LevelEditorPlantSetting() */

void __thiscall LevelEditorPlantSetting::~LevelEditorPlantSetting(LevelEditorPlantSetting *this)

{
  *(undefined ***)this = &PTR_GetClass_06960010;
  *(undefined ***)(this + 0xd8) = &PTR__LevelEditorPlantSetting_06960348;
  std::vector<LevelEditorPlantRare*,std::allocator<LevelEditorPlantRare*>>::~vector
            ((vector<LevelEditorPlantRare*,std::allocator<LevelEditorPlantRare*>> *)(this + 0x100));
  std::vector<LevelEditorCardPlant*,std::allocator<LevelEditorCardPlant*>>::~vector
            ((vector<LevelEditorCardPlant*,std::allocator<LevelEditorCardPlant*>> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to LevelEditorPlantSetting::~LevelEditorPlantSetting() */

void __thiscall LevelEditorPlantSetting::~LevelEditorPlantSetting(LevelEditorPlantSetting *this)

{
  ~LevelEditorPlantSetting(this + -0xd8);
  return;
}


/* LevelEditorPlantSetting::~LevelEditorPlantSetting() */

void __thiscall LevelEditorPlantSetting::~LevelEditorPlantSetting(LevelEditorPlantSetting *this)

{
  ~LevelEditorPlantSetting(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LevelEditorPlantSetting::~LevelEditorPlantSetting() */

void __thiscall LevelEditorPlantSetting::~LevelEditorPlantSetting(LevelEditorPlantSetting *this)

{
  ~LevelEditorPlantSetting(this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorPlantSetting::Init(std::function<void (LevelEditorCardInfo const&)>) */

void __thiscall LevelEditorPlantSetting::Init(LevelEditorPlantSetting *this,function *param_2)

{
  OTFTagStruct *this_00;
  LevelEditorCardItem *pLVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  Widget *pWVar11;
  PVZ2UIScrollingWidget *this_01;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar16;
  ulong uVar17;
  UIWidgetText *this_02;
  LevelEditorPlantRare *pLVar18;
  LevelEditorCardPlant *this_03;
  string *psVar19;
  int extraout_w1;
  uint uVar20;
  ulong uVar21;
  code *pcVar22;
  uint uVar23;
  LevelEditorPlantSetting *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  Widget *local_b0;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_98 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  LevelEditorCardItem *local_88;
  Insets aIStack_80 [8];
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  int local_64;
  LevelEditorPlantRare *local_60 [2];
  function<bool(Sexy::Touch_const&)> afStack_50 [32];
  LevelEditorPlantSetting *local_30;
  int local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  int local_18;
  undefined4 uStack_14;
  Widget *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar8 = *(int *)(this + 0x50);
  iVar9 = *(int *)(this + 0x54);
  *(int *)(this + 0x120) = iVar8;
  *(int *)(this + 0x124) = iVar9;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  iVar4 = FUN_04b334ec(0x14);
  *(int *)(this + 0x128) = iVar4;
  iVar5 = FUN_04b334ec(0x46);
  *(int *)(this + 300) = iVar5;
  iVar6 = FUN_04b334ec(0x28);
  iVar8 = iVar8 - iVar6;
  *(int *)(this + 0x130) = iVar8;
  iVar6 = FUN_04b334ec(100);
  iVar9 = iVar9 - iVar6;
  *(int *)(this + 0x134) = iVar9;
  iVar6 = FUN_04b334ec(0);
  *(int *)(this + 0x138) = iVar4 + iVar6;
  iVar4 = FUN_04b334ec(2);
  *(int *)(this + 0x140) = iVar8;
  *(int *)(this + 0x13c) = iVar5 + iVar4;
  iVar4 = FUN_04b334ec(2);
  iVar9 = iVar9 - iVar4;
  *(int *)(this + 0x144) = iVar9;
  iVar4 = FUN_04b334ec(10);
  *(int *)(this + 0x148) = iVar4;
  uVar7 = FUN_04b334ec(0x28);
  *(int *)(this + 0x150) = iVar8 + iVar4 * -2;
  *(undefined4 *)(this + 0x14c) = uVar7;
  iVar8 = FUN_04b334ec(0x19);
  *(int *)(this + 0x154) = iVar9 - iVar8;
  iVar9 = FUN_04b334ec(5);
  pWVar11 = ::operator_new(0xd8);
  Sexy::Widget::Widget(pWVar11);
  *(Widget **)(this + 0xe0) = pWVar11;
  (**(code **)(*(long *)pWVar11 + 0x198))
            (pWVar11,*(undefined4 *)(this + 0x138),*(undefined4 *)(this + 0x13c),
             *(undefined4 *)(this + 0x140),*(undefined4 *)(this + 0x144));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0xd8));
  pWVar11 = ::operator_new(0xd8);
  Sexy::Widget::Widget(pWVar11);
  Sexy::Insets::Insets
            (aIStack_80,*(int *)(this + 0x148),*(int *)(this + 0x14c),*(int *)(this + 0x150),
             *(int *)(this + 0x154));
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_80);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_01,2);
  (**(code **)(*(long *)pWVar11 + 0x198))(pWVar11,0,0,local_78,local_74);
  local_78 = local_78 + iVar9 * -5;
  iVar8 = local_78 + 3;
  if (-1 < local_78) {
    iVar8 = local_78;
  }
  iVar8 = iVar8 >> 2;
  iVar4 = (int)((double)iVar8 * 0.65);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_98);
  uVar12 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable((Iterator *)&local_30,uVar12,0x9f);
  while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_30), bVar2) {
    Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_30);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_70,(RtWeakPtrBase *)local_60);
    Sexy::RtId::~RtId((RtId *)local_60);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_70);
    if (bVar2) {
      plVar13 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
      pcVar22 = *(code **)(*plVar13 + 0x20);
      uVar12 = LevelEditorConfig::StaticGetClass();
      cVar3 = (*pcVar22)(plVar13,uVar12);
      if (cVar3 != '\0') {
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_98,(RtWeakPtrBase *)&local_70);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
    Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_30,extraout_w1);
  }
  uVar21 = 0;
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_30);
  uVar20 = 0;
  Magento::GetPlantLevelUp((Magento *)(ulong)(uint)(iVar9 + iVar8));
  lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
  lVar14 = FUN_04b2d884(*(undefined8 *)(lVar14 + 0x60),*(undefined8 *)(lVar14 + 0x68));
  uVar23 = uVar20;
  if (lVar14 != 0) {
    do {
      lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_98)
      ;
      uVar12 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar14 + 0x88));
      lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_98)
      ;
      uVar15 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar14 + 0x88));
      lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
      pRVar16 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04b2d890(*(undefined8 *)(lVar14 + 0x60),uVar21)
      ;
      lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
      local_60[0] = (LevelEditorPlantRare *)
                    std::
                    find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                              (uVar12,uVar15,lVar14 + 0x80);
      lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_98)
      ;
      local_30 = (LevelEditorPlantSetting *)
                 std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar14 + 0x88));
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)local_60,(__normal_iterator *)&local_30);
      if (!bVar2) {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_30);
        (**(code **)(*(long *)this + 800))(this,(Iterator *)&local_30);
        uVar12 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_30);
        uVar15 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_30);
        lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
        pRVar16 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  FUN_04b2d890(*(undefined8 *)(lVar14 + 0x60),uVar21);
        lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
        local_70 = std::
                   find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                             (uVar12,uVar15,lVar14 + 0x80);
        local_60[0] = (LevelEditorPlantRare *)
                      std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)&local_30);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)local_60);
        if (bVar2) {
          std::vector<std::string,std::allocator<std::string>>::~vector
                    ((vector<std::string,std::allocator<std::string>> *)&local_30);
        }
        else {
          uVar23 = uVar20 & 3;
          iVar5 = (int)uVar20 >> 2;
          uVar20 = uVar20 + 1;
          Sexy::Insets::Insets
                    ((Insets *)&local_70,iVar9 + (iVar9 + iVar8) * uVar23,(iVar9 + iVar4) * iVar5,
                     iVar8,iVar4);
          this_03 = ::operator_new(0x118);
          LevelEditorCardPlant::LevelEditorCardPlant(this_03);
          local_88 = (LevelEditorCardItem *)this_03;
          (**(code **)(*(long *)this_03 + 0x1a0))(this_03,(__normal_iterator *)&local_70);
          pLVar1 = local_88;
          std::function<void(int,std::string)>::function
                    ((function<void(int,std::string)> *)afStack_50,param_2);
          LevelEditorCardItem::SetClickFunction(pLVar1,afStack_50);
          std::function<bool(Sexy::Touch_const&)>::~function(afStack_50);
          pLVar1 = local_88;
          lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
          pRVar16 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    FUN_04b2d890(*(undefined8 *)(lVar14 + 0x60),uVar21);
          lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
          LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)local_60,1,lVar14 + 0x80);
          LevelEditorCardItem::SetData(pLVar1,(LevelEditorCardInfo *)local_60);
          PakRecord::~PakRecord((PakRecord *)local_60);
          this_00 = (OTFTagStruct *)(local_88 + 0x110);
          psVar19 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
          pRVar16 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    FUN_04b2d890(*(undefined8 *)(lVar14 + 0x60),uVar21);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar19);
          lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
          EA::Text::OTFTagStruct::OTFTagStruct(this_00,*(uint *)(lVar14 + 0xd0));
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_60)
          ;
          (**(code **)(*(long *)pWVar11 + 0x60))(pWVar11,local_88);
          std::vector<LevelEditorCardPlant*,std::allocator<LevelEditorCardPlant*>>::push_back
                    ((vector<LevelEditorCardPlant*,std::allocator<LevelEditorCardPlant*>> *)
                     (this + 0xe8),(LevelEditorCardPlant **)&local_88);
          uVar23 = local_70._4_4_ + local_64;
          std::vector<std::string,std::allocator<std::string>>::~vector
                    ((vector<std::string,std::allocator<std::string>> *)&local_30);
        }
      }
      uVar21 = uVar21 + 1;
      lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
      uVar17 = FUN_04b2d884(*(undefined8 *)(lVar14 + 0x60),*(undefined8 *)(lVar14 + 0x68));
    } while (uVar21 < uVar17);
  }
  plVar13 = *(long **)(this + 0xe0);
  *(uint *)(pWVar11 + 0x54) = uVar23;
  (**(code **)(*plVar13 + 0x60))(plVar13,this_01);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,pWVar11);
  TodStringTranslate(L"[LEVEL_EDITOR_SELECT_RARE]");
  this_02 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(this_02,(wstring *)&local_30);
  FUN_05476c50((Iterator *)&local_30);
  uVar7 = FUN_04b334ec(0x87);
  uVar10 = FUN_04b334ec(0x28);
  (**(code **)(*(long *)this_02 + 0x198))(this_02,0,0,uVar7,uVar10);
  UIWidgetText::SetFontIndex(this_02,5);
  pcVar22 = *(code **)(*(long *)this_02 + 0x170);
  Sexy::Color::Color((Color *)&local_30,0x66,0x37,0);
  (*pcVar22)(this_02,0,(Iterator *)&local_30);
  FUN_04b2dcbc(this_02 + 0xe0);
  (**(code **)(**(long **)(this + 0xe0) + 0x60))(*(long **)(this + 0xe0),this_02);
  iVar5 = 0;
  local_30 = this;
  local_28 = iVar9;
  local_24 = iVar9;
  local_20 = iVar9;
  iStack_1c = iVar8;
  local_18 = iVar4;
  local_10 = pWVar11;
  do {
    pLVar18 = ::operator_new(0x100);
    LevelEditorPlantRare::LevelEditorPlantRare(pLVar18);
    local_60[0] = pLVar18;
    iVar8 = FUN_04b334ec(0x8c);
    iVar9 = FUN_04b334ec(0x1e);
    uVar7 = FUN_04b334ec(2);
    uVar10 = FUN_04b334ec(0x19);
    (**(code **)(*(long *)pLVar18 + 0x198))(pLVar18,iVar8 + iVar9 * iVar5,uVar7,uVar10,iVar9);
    iVar8 = iVar5 + 1;
    FUN_04b2d7f4(local_60[0] + 0xd8,iVar5);
    pLVar18 = local_60[0];
    local_c0 = CONCAT44(iStack_1c,local_20);
    uStack_b8 = CONCAT44(uStack_14,local_18);
    uStack_c8 = CONCAT44(local_24,local_28);
    local_b0 = local_10;
    local_d0 = local_30;
    FUN_04b32b2c(afStack_50,&local_d0);
    LevelEditorPlantRare::SetCallBack(pLVar18,afStack_50);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_50);
    (**(code **)(**(long **)(this + 0xe0) + 0x60))(*(long **)(this + 0xe0),local_60[0]);
    std::vector<LevelEditorPlantRare*,std::allocator<LevelEditorPlantRare*>>::push_back
              ((vector<LevelEditorPlantRare*,std::allocator<LevelEditorPlantRare*>> *)(this + 0x100)
               ,local_60);
    iVar5 = iVar8;
  } while (iVar8 != 5);
  (**(code **)(**(long **)(this + 0xe0) + 0x158))(*(long **)(this + 0xe0),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_98);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

