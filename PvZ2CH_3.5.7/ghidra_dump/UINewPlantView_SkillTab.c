// Class: UINewPlantView_SkillTab


/* UINewPlantView_SkillTab::UINewPlantView_SkillTab() */

void __thiscall UINewPlantView_SkillTab::UINewPlantView_SkillTab(UINewPlantView_SkillTab *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066a2e80;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066a31a8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  *(undefined8 *)(this + 0x100) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_SkillTab::Draw(Sexy::Graphics*) */

void __thiscall UINewPlantView_SkillTab::Draw(UINewPlantView_SkillTab *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  Image *pIVar8;
  undefined8 uVar9;
  long lVar10;
  tuple *ptVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  char *pcVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab3748);
  uVar17 = 0;
  iVar2 = FUN_03814ff8(5);
  uVar18 = 0;
  iVar3 = FUN_03814ff8(0x1e);
  iVar4 = FUN_03814ff8(0x96);
  iVar5 = FUN_03814ff8(0x2d);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar2,iVar3,iVar4,iVar5);
  TodStringTranslate(L"[PLANT_SKILL]");
  iVar2 = FUN_03814ff8(5);
  iVar3 = FUN_03814ff8(0x1e);
  iVar4 = FUN_03814ff8(0x73);
  iVar5 = FUN_03814ff8(0x28);
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar3,iVar4,iVar5);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_24_HardShadow);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar9,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  uVar9 = *(undefined8 *)(this + 0xe8);
  lVar10 = FUN_03813b5c(uVar9,*(undefined8 *)(this + 0xf0));
  if (lVar10 != 0) {
    do {
      ptVar11 = (tuple *)FUN_03813b70(uVar9,uVar17);
      puVar12 = (undefined8 *)
                std::get<0ul,Sexy::Image*,Sexy::Image*,Sexy::Image*,std::wstring,bool>(ptVar11);
      pIVar8 = (Image *)*puVar12;
      iVar2 = (int)uVar18;
      if (pIVar8 != (Image *)0x0) {
        iVar3 = FUN_03814ff8(0x19);
        iVar4 = FUN_03814ff8(100);
        iVar5 = FUN_03814ff8(0x50);
        iVar6 = FUN_03814ff8(0x1e);
        Sexy::Graphics::DrawImage(param_1,pIVar8,iVar3,iVar4 + iVar5 * iVar2,iVar3,iVar6);
      }
      puVar12 = (undefined8 *)
                std::get<1ul,Sexy::Image*,Sexy::Image*,Sexy::Image*,std::wstring,bool>(ptVar11);
      pIVar8 = (Image *)*puVar12;
      if (pIVar8 != (Image *)0x0) {
        iVar3 = FUN_03814ff8(0x3c);
        iVar4 = FUN_03814ff8(0x55);
        iVar5 = FUN_03814ff8(0x50);
        Sexy::Graphics::DrawImage(param_1,pIVar8,iVar3,iVar4 + iVar5 * iVar2,iVar3,iVar3);
      }
      plVar13 = (long *)std::
                        get<0ul,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>>
                                  (ptVar11);
      if (*plVar13 != 0) {
        iVar3 = FUN_03814ff8(0x41);
        iVar4 = FUN_03814ff8(0x5a);
        iVar5 = FUN_03814ff8(0x50);
        iVar6 = FUN_03814ff8(0x32);
        Sexy::Insets::Insets(aIStack_18,iVar3,iVar4 + iVar5 * iVar2,iVar6,iVar6);
        DrawAdaptiveImage(param_1,aIStack_18,*plVar13);
      }
      iVar3 = FUN_03814ff8(0x55);
      if (uVar17 == 4) {
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
        bVar1 = std::operator==((string *)(lVar10 + 8),"peavine");
        if (bVar1) {
          iVar3 = FUN_03814ff8(0x46);
        }
      }
      uVar9 = std::get<0ul,SeedPacketPlantWidget*,int>(ptVar11);
      iVar4 = FUN_03814ff8(0x82);
      iVar5 = FUN_03814ff8(0x50);
      iVar6 = FUN_03814ff8(0x78);
      iVar7 = FUN_03814ff8(0x3c);
      Sexy::Insets::Insets(aIStack_28,iVar4,iVar3 + iVar5 * iVar2,iVar6,iVar7);
      uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
      Sexy::Color::Color((Color *)aIStack_18,0x66,0x37,0);
      WriteWordInRect(param_1,uVar9,aIStack_28,uVar14,aIStack_18,3,1);
      pcVar15 = (char *)std::
                        get<1ul,Sexy::RtDbTable::IteratorStorage*,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
                                  (ptVar11);
      if (*pcVar15 == '\0') {
        pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab2e58);
        iVar3 = FUN_03814ff8(0x3c);
        iVar4 = FUN_03814ff8(0x55);
        iVar5 = FUN_03814ff8(0x50);
        Sexy::Graphics::DrawImage(param_1,pIVar8,iVar3,iVar4 + iVar5 * iVar2,iVar3,iVar3);
      }
      uVar17 = uVar17 + 1;
      uVar9 = *(undefined8 *)(this + 0xe8);
      uVar18 = uVar17 & 0xffffffff;
      uVar16 = FUN_03813b5c(uVar9,*(undefined8 *)(this + 0xf0));
    } while (uVar17 < uVar16);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_SkillTab::initLv5SkillSwitch(PlayerInfo*, std::string const&, int) */

void __thiscall
UINewPlantView_SkillTab::initLv5SkillSwitch
          (UINewPlantView_SkillTab *this,PlayerInfo *param_1,string *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  PVZ2UIButton *pPVar7;
  undefined8 uVar8;
  long lVar9;
  tuple *ptVar10;
  undefined8 *puVar11;
  PlantType *this_00;
  long *plVar12;
  undefined8 uVar13;
  undefined1 auStack_58 [8];
  Color aCStack_50 [16];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"peavine");
  if (bVar1) {
    cVar2 = LocalProfileSaveData::GetPlantLv5SkillSwitch(param_1,param_2);
    FUN_05478178(aCStack_50,&DAT_056f11a8,auStack_58);
    Sexy::Color::Color((Color *)aPStack_40,1);
    pPVar7 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar7,0x22b,(ButtonListener *)(this + 0xd8),(wstring *)aCStack_50,
               (Color *)aPStack_40);
    *(PVZ2UIButton **)(this + 0x100) = pPVar7;
    FUN_05476c50(aCStack_50);
    nop();
    if (cVar2 == '\0') {
      uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab3110);
      uVar13 = *(undefined8 *)(this + 0xe8);
      lVar9 = FUN_03813b5c(uVar13,*(undefined8 *)(this + 0xf0));
      ptVar10 = (tuple *)FUN_03813b70(uVar13,lVar9 + -1);
      puVar11 = (undefined8 *)
                std::
                get<0ul,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>>
                          (ptVar10);
      uVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab3670);
      *puVar11 = uVar13;
    }
    else {
      uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab2f20);
      uVar13 = *(undefined8 *)(this + 0xe8);
      lVar9 = FUN_03813b5c(uVar13,*(undefined8 *)(this + 0xf0));
      ptVar10 = (tuple *)FUN_03813b70(uVar13,lVar9 + -1);
      puVar11 = (undefined8 *)
                std::
                get<0ul,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>>
                          (ptVar10);
      uVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab3770);
      *puVar11 = uVar13;
    }
    pPVar7 = *(PVZ2UIButton **)(this + 0x100);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,uVar8,2);
    Sexy::Color::Color(aCStack_50,0x5a,0x5a,0x5a);
    PVZ2UIButton::SetDialogStates(pPVar7,aPStack_40,aCStack_50);
    plVar12 = *(long **)(this + 0x100);
    uVar3 = FUN_03814ff8(0x82);
    uVar4 = FUN_03814ff8(0x1ae);
    uVar5 = FUN_03814ff8(0x50);
    uVar6 = FUN_03814ff8(0x1e);
    (**(code **)(*plVar12 + 0x198))(plVar12,uVar3,uVar4,uVar5,uVar6);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
    this_00 = (PlantType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
    lVar9 = PlantType::GetProps(this_00);
    if (*(int *)(lVar9 + 0x2c) != param_3) {
      (**(code **)(**(long **)(this + 0x100) + 0x188))(*(long **)(this + 0x100),1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_SkillTab::ButtonDepress(int) */

void __thiscall UINewPlantView_SkillTab::ButtonDepress(UINewPlantView_SkillTab *this,int param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  ProfileMgr *this_01;
  PlayerInfo *pPVar2;
  long lVar3;
  tuple *ptVar4;
  undefined8 *puVar5;
  string *psVar6;
  undefined8 uVar7;
  PVZ2UIButton *this_02;
  Color aCStack_50 [16];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x6f) {
    psVar6 = (string *)UISingletonDialog<UINewPlantView_SkillDisplay>::ShowDialog();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
    UINewPlantView_SkillDisplay::InitView(psVar6);
  }
  else if (param_1 == 0x22b) {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0);
    pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    cVar1 = LocalProfileSaveData::GetPlantLv5SkillSwitch(pPVar2,(string *)(lVar3 + 8));
    if (cVar1 == '\0') {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      LocalProfileSaveData::SetPlantLv5SkillSwitch(pPVar2,(string *)(lVar3 + 8),true);
      uVar7 = *(undefined8 *)(this + 0xe8);
      lVar3 = FUN_03813b5c(uVar7,*(undefined8 *)(this + 0xf0));
      ptVar4 = (tuple *)FUN_03813b70(uVar7,lVar3 + -1);
      puVar5 = (undefined8 *)
               std::
               get<0ul,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>>
                         (ptVar4);
      uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab3770);
      *puVar5 = uVar7;
      this_02 = *(PVZ2UIButton **)(this + 0x100);
      PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06ab2f20,2);
    }
    else {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      LocalProfileSaveData::SetPlantLv5SkillSwitch(pPVar2,(string *)(lVar3 + 8),false);
      uVar7 = *(undefined8 *)(this + 0xe8);
      lVar3 = FUN_03813b5c(uVar7,*(undefined8 *)(this + 0xf0));
      ptVar4 = (tuple *)FUN_03813b70(uVar7,lVar3 + -1);
      puVar5 = (undefined8 *)
               std::
               get<0ul,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>>
                         (ptVar4);
      uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab3670);
      *puVar5 = uVar7;
      this_02 = *(PVZ2UIButton **)(this + 0x100);
      PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06ab3110,2);
    }
    Sexy::Color::Color(aCStack_50,0x5a,0x5a,0x5a);
    PVZ2UIButton::SetDialogStates(this_02,aPStack_40,aCStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINewPlantView_SkillTab::ButtonDepress(int) */

void __thiscall UINewPlantView_SkillTab::ButtonDepress(UINewPlantView_SkillTab *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_SkillTab::InitView(std::string const&) */

void __thiscall UINewPlantView_SkillTab::InitView(UINewPlantView_SkillTab *this,string *param_1)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  string *psVar7;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar8;
  PlantType *pPVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  PVZ2UIButton *this_03;
  uint uVar12;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  string asStack_78 [56];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [56];
  long local_8;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)this_00);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0x80))(this,1,1);
    std::
    vector<std::tuple<Sexy::Image*,Sexy::Image*,Sexy::Image*,std::wstring,bool>,std::allocator<std::tuple<Sexy::Image*,Sexy::Image*,Sexy::Image*,std::wstring,bool>>>
    ::clear((vector<std::tuple<Sexy::Image*,Sexy::Image*,Sexy::Image*,std::wstring,bool>,std::allocator<std::tuple<Sexy::Image*,Sexy::Image*,Sexy::Image*,std::wstring,bool>>>
             *)(this + 0xe8));
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar2 = PlayerInfo::GetPlantStarLevel(this_02,(string *)(lVar8 + 8),false);
    pPVar9 = (PlantType *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    lVar8 = PlantType::GetProps(pPVar9);
    uVar12 = *(uint *)(lVar8 + 0x28);
    while( true ) {
      pPVar9 = (PlantType *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      lVar8 = PlantType::GetProps(pPVar9);
      if (*(int *)(lVar8 + 0x2c) < (int)uVar12) break;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      FUN_05476574(asStack_78);
      thunk_FUN_03815308(aRStack_40,&local_90,&local_88,(RtWeakPtr<Sexy::SoundResource> *)&local_80,
                         asStack_78);
      FUN_05476c50(asStack_78);
      puVar10 = (undefined8 *)
                std::get<0ul,Sexy::Image*,Sexy::Image*,Sexy::Image*,std::wstring,bool>
                          ((tuple *)aRStack_40);
      Sexy::StrFormat("IMAGE_UI_PACKETS_LEVEL_%d",asStack_78,(ulong)uVar12);
      uVar11 = StringHelper::ToImage(asStack_78,false);
      *puVar10 = uVar11;
      std::string::~string(asStack_78);
      puVar10 = (undefined8 *)
                std::get<1ul,Sexy::Image*,Sexy::Image*,Sexy::Image*,std::wstring,bool>
                          ((tuple *)aRStack_40);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_78,(RtWeakPtrBase *)this_00);
      uVar11 = FUN_03815fc0(uVar12,asStack_78);
      *puVar10 = uVar11;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
      puVar10 = (undefined8 *)
                std::
                get<0ul,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>>
                          ((tuple *)aRStack_40);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_78,(RtWeakPtrBase *)this_00);
      uVar11 = FUN_038163f4(uVar12,asStack_78);
      *puVar10 = uVar11;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
      uVar11 = std::get<0ul,SeedPacketPlantWidget*,int>((tuple *)aRStack_40);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_80,(RtWeakPtrBase *)this_00);
      FUN_038162e0(asStack_78,uVar12,(RtWeakPtr<Sexy::SoundResource> *)&local_80);
      FUN_054766c8(uVar11,asStack_78);
      FUN_05476c50(asStack_78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
      uVar11 = std::
               get<1ul,Sexy::RtDbTable::IteratorStorage*,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
                         ((tuple *)aRStack_40);
      *(bool *)uVar11 = (int)uVar12 <= iVar2;
      uVar12 = uVar12 + 1;
      std::
      vector<std::tuple<Sexy::Image*,Sexy::Image*,Sexy::Image*,std::wstring,bool>,std::allocator<std::tuple<Sexy::Image*,Sexy::Image*,Sexy::Image*,std::wstring,bool>>>
      ::push_back((vector<std::tuple<Sexy::Image*,Sexy::Image*,Sexy::Image*,std::wstring,bool>,std::allocator<std::tuple<Sexy::Image*,Sexy::Image*,Sexy::Image*,std::wstring,bool>>>
                   *)(this + 0xe8),(tuple *)aRStack_40);
      std::tuple<Sexy::Image*,Sexy::Image*,Sexy::Image*,std::wstring,bool>::~tuple
                ((tuple<Sexy::Image*,Sexy::Image*,Sexy::Image*,std::wstring,bool> *)aRStack_40);
    }
    initLv5SkillSwitch(this,this_02,param_1,iVar2);
    TodStringTranslate(L"[SKILL_PREVIEW]");
    Sexy::Color::Color((Color *)aRStack_40,1);
    this_03 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (this_03,0x6f,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,
               (Color *)aRStack_40);
    FUN_05476c50(asStack_78);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ab3010,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_40,&DAT_06ab33a8,3);
    PVZ2UIButton::SetDialogStates(this_03,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)aRStack_40);
    iVar3 = FUN_03814ff8(0x4b);
    iVar2 = *(int *)(this + 0x50);
    uVar4 = FUN_03814ff8(0x1e0);
    uVar5 = FUN_03814ff8(0x96);
    uVar6 = FUN_03814ff8(0x32);
    (**(code **)(*(long *)this_03 + 0x198))(this_03,iVar2 / 2 - iVar3,uVar4,uVar5,uVar6);
    (**(code **)(*(long *)this + 0x60))(this,this_03);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPlantView_SkillTab::~UINewPlantView_SkillTab() */

void __thiscall UINewPlantView_SkillTab::~UINewPlantView_SkillTab(UINewPlantView_SkillTab *this)

{
  *(undefined ***)this = &PTR_GetClass_066a2e80;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066a31a8;
  std::
  vector<std::tuple<Sexy::Image*,Sexy::Image*,Sexy::Image*,std::wstring,bool>,std::allocator<std::tuple<Sexy::Image*,Sexy::Image*,Sexy::Image*,std::wstring,bool>>>
  ::~vector((vector<std::tuple<Sexy::Image*,Sexy::Image*,Sexy::Image*,std::wstring,bool>,std::allocator<std::tuple<Sexy::Image*,Sexy::Image*,Sexy::Image*,std::wstring,bool>>>
             *)(this + 0xe8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UINewPlantView_SkillTab::~UINewPlantView_SkillTab() */

void __thiscall UINewPlantView_SkillTab::~UINewPlantView_SkillTab(UINewPlantView_SkillTab *this)

{
  ~UINewPlantView_SkillTab(this);
  AK::FreeHook(this);
  return;
}

