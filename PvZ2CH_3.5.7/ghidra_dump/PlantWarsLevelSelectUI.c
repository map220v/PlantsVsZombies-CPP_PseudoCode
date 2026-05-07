// Class: PlantWarsLevelSelectUI


/* PlantWarsLevelSelectUI::SetStartLevelCallBack(Sexy::Delegate1<std::string const&>) */

void __thiscall
PlantWarsLevelSelectUI::SetStartLevelCallBack(PlantWarsLevelSelectUI *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0xe8),param_2);
  return;
}


/* PlantWarsLevelSelectUI::GetLevelDefinitionPtr() */

RtWeakPtr<Sexy::SoundResource> * PlantWarsLevelSelectUI::GetLevelDefinitionPtr(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x170));
  return in_x8;
}


/* PlantWarsLevelSelectUI::SelectTeamPanel(PlantWarsTeamPanel*) */

void __thiscall
PlantWarsLevelSelectUI::SelectTeamPanel(PlantWarsLevelSelectUI *this,PlantWarsTeamPanel *param_1)

{
  FUN_04d9e710(*(PlantWarsTeamPanel **)(this + 0x160) + 0xe4,
               *(PlantWarsTeamPanel **)(this + 0x160) == param_1);
  FUN_04d9e710(*(PlantWarsTeamPanel **)(this + 0x168) + 0xe4,
               *(PlantWarsTeamPanel **)(this + 0x168) == param_1);
  return;
}


/* PlantWarsLevelSelectUI::ClearTeamPanel() */

void __thiscall PlantWarsLevelSelectUI::ClearTeamPanel(PlantWarsLevelSelectUI *this)

{
  PlantWarsTeamPanel::ClearSeedCard(*(PlantWarsTeamPanel **)(this + 0x160));
  PlantWarsTeamPanel::ClearSeedCard(*(PlantWarsTeamPanel **)(this + 0x168));
  PlantWarsSeedChooserPanel::ReleaseAllSeedCard(*(PlantWarsSeedChooserPanel **)(this + 0x150));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsLevelSelectUI::~PlantWarsLevelSelectUI() */

void __thiscall PlantWarsLevelSelectUI::~PlantWarsLevelSelectUI(PlantWarsLevelSelectUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069bc6f8;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_069bc3d0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlantWars");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Material");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170));
  FUN_05476c50(this + 0x118);
  std::string::~string((string *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsLevelSelectUI::~PlantWarsLevelSelectUI() */

void __thiscall PlantWarsLevelSelectUI::~PlantWarsLevelSelectUI(PlantWarsLevelSelectUI *this)

{
  ~PlantWarsLevelSelectUI(this);
  AK::FreeHook(this);
  return;
}


/* PlantWarsLevelSelectUI::OnSelectSeedCard(std::string const&) */

void __thiscall
PlantWarsLevelSelectUI::OnSelectSeedCard(PlantWarsLevelSelectUI *this,string *param_1)

{
  PlantWarsSeedChooserPanel::SelectSeedCard(*(PlantWarsSeedChooserPanel **)(this + 0x150),param_1);
  return;
}


/* PlantWarsLevelSelectUI::OnRemoveSeedCardForTeamPanel(std::string const&) */

void __thiscall
PlantWarsLevelSelectUI::OnRemoveSeedCardForTeamPanel(PlantWarsLevelSelectUI *this,string *param_1)

{
  char cVar1;
  
  cVar1 = PlantWarsTeamPanel::TryRemoveSeedCard(*(PlantWarsTeamPanel **)(this + 0x160),param_1);
  if (cVar1 != '\0') {
    SelectTeamPanel(this,*(PlantWarsTeamPanel **)(this + 0x160));
  }
  cVar1 = PlantWarsTeamPanel::TryRemoveSeedCard(*(PlantWarsTeamPanel **)(this + 0x168),param_1);
  if (cVar1 != '\0') {
    SelectTeamPanel(this,*(PlantWarsTeamPanel **)(this + 0x168));
  }
  PlantWarsSeedChooserPanel::ReleaseSeedCard(*(PlantWarsSeedChooserPanel **)(this + 0x150),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsLevelSelectUI::CheckTeamPanel() */

void __thiscall PlantWarsLevelSelectUI::CheckTeamPanel(PlantWarsLevelSelectUI *this)

{
  char cVar1;
  UIMessageBox *pUVar2;
  Image *pIVar3;
  long lVar4;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = PlantWarsTeamPanel::IsFull(*(PlantWarsTeamPanel **)(this + 0x160));
  if ((cVar1 == '\0') ||
     (cVar1 = PlantWarsTeamPanel::IsFull(*(PlantWarsTeamPanel **)(this + 0x168)), cVar1 == '\0')) {
    pUVar2 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar2 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(pUVar2,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[BUTTON_OK]");
      TodStringTranslate(L"[PLANT_TEAM_NOT_ENOUGH]");
      UIMessageBox::SetMessage(pUVar2,awStack_58,awStack_68);
      std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar3 = (Image *)StringHelper::ToImage(asStack_50,false);
      UIMessageBox::SetBackground(pUVar2,pIVar3);
      std::string::~string(asStack_50);
      nop();
      lVar4 = UIMessageBox::GetButtonCancel(pUVar2);
      thunk_FUN_05477b9c(lVar4 + 0xd8,awStack_60);
      FUN_05476c50(awStack_58);
      FUN_05476c50(awStack_60);
      FUN_05476c50(awStack_68);
      cVar1 = '\0';
      goto LAB_04da33f8;
    }
  }
  else {
    cVar1 = PlantWarsTeamPanel::HasSunProducer(*(PlantWarsTeamPanel **)(this + 0x160));
    if ((cVar1 != '\0') &&
       (cVar1 = PlantWarsTeamPanel::HasSunProducer(*(PlantWarsTeamPanel **)(this + 0x168)),
       cVar1 != '\0')) goto LAB_04da33f8;
    pUVar2 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar2 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(pUVar2,6);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[SEED_CHOOSER_SUN_WARNING]");
      UIMessageBox::SetMessage(pUVar2,awStack_58,awStack_60);
      std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar3 = (Image *)StringHelper::ToImage(asStack_50,false);
      UIMessageBox::SetBackground(pUVar2,pIVar3);
      std::string::~string(asStack_50);
      nop();
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,ConfirmStartLevel);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<PlantWarsLevelSelectUI,void(PlantWarsLevelSelectUI::*)(UIMessageBox*,int)>
                (aDStack_38,asStack_50);
      UIMessageBox::SetCallback(pUVar2,aDStack_38);
      FUN_05476c50(awStack_58);
      FUN_05476c50(awStack_60);
    }
  }
  cVar1 = '\0';
LAB_04da33f8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsLevelSelectUI::Draw(Sexy::Graphics*) */

void __thiscall PlantWarsLevelSelectUI::Draw(PlantWarsLevelSelectUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b98f70);
  Draw9SliceImage(param_1,aIStack_18,uVar3);
  iVar1 = FUN_04d9f494(0);
  iVar2 = FUN_04d9f494(0x46);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar1,*(int *)(this + 0x50),iVar2);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_HardShadow);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x118,aIStack_28,uVar3,aIStack_18,5,1);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x120));
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99558);
  Draw9SliceImage(param_1,aIStack_18,uVar3);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x130));
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99558);
  Draw9SliceImage(param_1,aIStack_18,uVar3);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x140));
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99558);
  Draw9SliceImage(param_1,aIStack_18,uVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsLevelSelectUI::PlantWarsLevelSelectUI() */

void __thiscall PlantWarsLevelSelectUI::PlantWarsLevelSelectUI(PlantWarsLevelSelectUI *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_069bc3d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069bc6f8;
  Set8BytesTo0(this + 0xe0);
  Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)(this + 0xe8));
  FUN_05476574(this + 0x118);
  Sexy::Insets::Insets((Insets *)(this + 0x120));
  Sexy::Insets::Insets((Insets *)(this + 0x130));
  Sexy::Insets::Insets((Insets *)(this + 0x140));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x170));
  this[0x59] = (PlantWarsLevelSelectUI)0x0;
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_PlantWars");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Fragment_Material");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnSelectSeedCard);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<PlantWarsLevelSelectUI,void(PlantWarsLevelSelectUI::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::SelectSeedCard,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnAddSeedCardToTeamPanel);
  local_60 = local_28;
  local_70 = local_38;
  uStack_68 = uStack_30;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<PlantWarsLevelSelectUI,void(PlantWarsLevelSelectUI::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::AddSeedCardToTeamPanel,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRemoveSeedCardForTeamPanel);
  local_70 = local_20;
  uStack_68 = uStack_18;
  local_60 = local_10;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<PlantWarsLevelSelectUI,void(PlantWarsLevelSelectUI::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::RemoveSeedCardForTeamPanel,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsLevelSelectUI::InitZombieInfo() */

void __thiscall PlantWarsLevelSelectUI::InitZombieInfo(PlantWarsLevelSelectUI *this)

{
  RtMixedPtr<Sexy::Image> *this_00;
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  vector<std::string,std::allocator<std::string>> *pvVar5;
  RtWeakPtrBase *pRVar6;
  RtObject *this_01;
  long extraout_x0;
  vector *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x170);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if (cVar1 == '\0') {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    lVar3 = FUN_04d9e79c(*(undefined8 *)(lVar3 + 0x50),*(undefined8 *)(lVar3 + 0x58));
    if (lVar3 != 0) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pvVar5 = (vector<std::string,std::allocator<std::string>> *)
               FUN_04d9e7b0(*(undefined8 *)(lVar3 + 0x50),0);
      cVar1 = std::vector<std::string,std::allocator<std::string>>::empty(pvVar5);
      if (cVar1 == '\0') {
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        puVar8 = (undefined8 *)FUN_04d9e7b0(*(undefined8 *)(lVar3 + 0x50),0);
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        puVar9 = (undefined8 *)FUN_04d9e7b0(*(undefined8 *)(lVar3 + 0x50),0);
        lVar3 = FUN_04d9e7d0(*puVar9,puVar9[1]);
        uVar10 = FUN_04d9e7e4(*puVar8,lVar3 + -1);
        FUN_05475d88((string *)aRStack_10,uVar10);
        PlantWarsTeamPanel::ReplaceDisplayZombie
                  (*(PlantWarsTeamPanel **)(this + 0x160),(string *)aRStack_10);
        std::string::~string((string *)aRStack_10);
      }
    }
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    uVar4 = FUN_04d9e79c(*(undefined8 *)(lVar3 + 0x50),*(undefined8 *)(lVar3 + 0x58));
    if (1 < uVar4) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pvVar5 = (vector<std::string,std::allocator<std::string>> *)
               FUN_04d9e7b0(*(undefined8 *)(lVar3 + 0x50),1);
      cVar1 = std::vector<std::string,std::allocator<std::string>>::empty(pvVar5);
      if (cVar1 == '\0') {
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        puVar8 = (undefined8 *)FUN_04d9e7b0(*(undefined8 *)(lVar3 + 0x50),1);
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        puVar9 = (undefined8 *)FUN_04d9e7b0(*(undefined8 *)(lVar3 + 0x50),1);
        lVar3 = FUN_04d9e7d0(*puVar9,puVar9[1]);
        uVar10 = FUN_04d9e7e4(*puVar8,lVar3 + -1);
        FUN_05475d88((string *)aRStack_10,uVar10);
        PlantWarsTeamPanel::ReplaceDisplayZombie
                  (*(PlantWarsTeamPanel **)(this + 0x168),(string *)aRStack_10);
        std::string::~string((string *)aRStack_10);
      }
    }
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar3 + 0x88));
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar3 + 0x88));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar2)
    {
      pRVar6 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,pRVar6);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
      if (bVar2) {
        this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        bVar2 = Sexy::RtObject::IsA<PlantSuggestedTagsModuleProps>(this_01);
        if (bVar2) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          nop();
          uVar10 = *(undefined8 *)(extraout_x0 + 0x40);
          lVar3 = FUN_04d9e7ec(uVar10,*(undefined8 *)(extraout_x0 + 0x48));
          if (lVar3 != 0) {
            pvVar7 = (vector *)FUN_04d9e81c(uVar10,0);
            PlantWarsTeamPanel::CreateSuggestedTags(*(PlantWarsTeamPanel **)(this + 0x160),pvVar7);
            uVar10 = *(undefined8 *)(extraout_x0 + 0x40);
            uVar4 = FUN_04d9e7ec(uVar10,*(undefined8 *)(extraout_x0 + 0x48));
            if (1 < uVar4) {
              pvVar7 = (vector *)FUN_04d9e81c(uVar10,1);
              PlantWarsTeamPanel::CreateSuggestedTags(*(PlantWarsTeamPanel **)(this + 0x168),pvVar7)
              ;
            }
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsLevelSelectUI::LoadCards() */

void PlantWarsLevelSelectUI::LoadCards(void)

{
  undefined *puVar1;
  int iVar2;
  PlantWarsLevelSelectUI *in_x0;
  long lVar3;
  PlantWarsNetworkMgr *this;
  LocalProfileSaveData *this_00;
  ulong uVar4;
  undefined8 uVar5;
  int in_w2;
  ulong uVar6;
  string asStack_80 [8];
  int local_78 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  int local_40 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  iVar2 = FUN_04d9e730(*(undefined4 *)(lVar3 + 0xf8));
  this = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  this_00 = (LocalProfileSaveData *)PlantWarsNetworkMgr::GetCurrentWorldId(this);
  LocalProfileSaveData::GetPlantWarsLevelTeamData(this_00,iVar2,in_w2);
  if (local_78[0] == -1) {
    LocalProfileSaveData::GetPlantWarsLevelTeamData
              ((LocalProfileSaveData *)((ulong)this_00 & 0xffffffff),iVar2 + -1,in_w2);
    if (local_40[0] != -1) {
      SelectTeamPanel(in_x0,*(PlantWarsTeamPanel **)(in_x0 + 0x160));
      uVar6 = 0;
      while( true ) {
        uVar5 = local_38;
        uVar4 = FUN_04d9e7d0(local_38,local_30);
        if (uVar4 <= uVar6) break;
        uVar5 = FUN_04d9e7dc(uVar5,uVar6);
        puVar1 = gMessageRouter;
        FUN_05475d88(asStack_80,uVar5);
        MessageRouter::Post<std::string_const&,std::string>
                  ((MessageRouter *)puVar1,Message::SelectSeedCard,asStack_80);
        std::string::~string(asStack_80);
        puVar1 = gMessageRouter;
        uVar5 = FUN_04d9e7dc(local_38,uVar6);
        FUN_05475d88(asStack_80,uVar5);
        MessageRouter::Post<std::string_const&,std::string>
                  ((MessageRouter *)puVar1,Message::AddSeedCardToTeamPanel,asStack_80);
        std::string::~string(asStack_80);
        uVar6 = uVar6 + 1;
      }
      SelectTeamPanel(in_x0,*(PlantWarsTeamPanel **)(in_x0 + 0x168));
      uVar6 = 0;
      while( true ) {
        uVar5 = local_20;
        uVar4 = FUN_04d9e7d0(local_20,local_18);
        if (uVar4 <= uVar6) break;
        uVar5 = FUN_04d9e7dc(uVar5,uVar6);
        puVar1 = gMessageRouter;
        FUN_05475d88(asStack_80,uVar5);
        MessageRouter::Post<std::string_const&,std::string>
                  ((MessageRouter *)puVar1,Message::SelectSeedCard,asStack_80);
        std::string::~string(asStack_80);
        puVar1 = gMessageRouter;
        uVar5 = FUN_04d9e7dc(local_20,uVar6);
        FUN_05475d88(asStack_80,uVar5);
        MessageRouter::Post<std::string_const&,std::string>
                  ((MessageRouter *)puVar1,Message::AddSeedCardToTeamPanel,asStack_80);
        std::string::~string(asStack_80);
        uVar6 = uVar6 + 1;
      }
    }
    PlantWarsLevelTeamData::~PlantWarsLevelTeamData((PlantWarsLevelTeamData *)local_40);
  }
  else {
    SelectTeamPanel(in_x0,*(PlantWarsTeamPanel **)(in_x0 + 0x160));
    uVar6 = 0;
    while( true ) {
      uVar5 = local_70;
      uVar4 = FUN_04d9e7d0(local_70,local_68);
      if (uVar4 <= uVar6) break;
      uVar5 = FUN_04d9e7dc(uVar5,uVar6);
      puVar1 = gMessageRouter;
      FUN_05475d88((string *)local_40,uVar5);
      MessageRouter::Post<std::string_const&,std::string>
                ((MessageRouter *)puVar1,Message::SelectSeedCard,(string *)local_40);
      std::string::~string((string *)local_40);
      puVar1 = gMessageRouter;
      uVar5 = FUN_04d9e7dc(local_70,uVar6);
      FUN_05475d88((string *)local_40,uVar5);
      MessageRouter::Post<std::string_const&,std::string>
                ((MessageRouter *)puVar1,Message::AddSeedCardToTeamPanel,(string *)local_40);
      std::string::~string((string *)local_40);
      uVar6 = uVar6 + 1;
    }
    SelectTeamPanel(in_x0,*(PlantWarsTeamPanel **)(in_x0 + 0x168));
    uVar6 = 0;
    while( true ) {
      uVar5 = local_58;
      uVar4 = FUN_04d9e7d0(local_58,local_50);
      if (uVar4 <= uVar6) break;
      uVar5 = FUN_04d9e7dc(uVar5,uVar6);
      puVar1 = gMessageRouter;
      FUN_05475d88((string *)local_40,uVar5);
      MessageRouter::Post<std::string_const&,std::string>
                ((MessageRouter *)puVar1,Message::SelectSeedCard,(string *)local_40);
      std::string::~string((string *)local_40);
      puVar1 = gMessageRouter;
      uVar5 = FUN_04d9e7dc(local_58,uVar6);
      FUN_05475d88((string *)local_40,uVar5);
      MessageRouter::Post<std::string_const&,std::string>
                ((MessageRouter *)puVar1,Message::AddSeedCardToTeamPanel,(string *)local_40);
      std::string::~string((string *)local_40);
      uVar6 = uVar6 + 1;
    }
  }
  PlantWarsLevelTeamData::~PlantWarsLevelTeamData((PlantWarsLevelTeamData *)local_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsLevelSelectUI::InitLevelInfo() */

void __thiscall PlantWarsLevelSelectUI::InitLevelInfo(PlantWarsLevelSelectUI *this)

{
  PlantWarsLevelInfo *this_00;
  
  this_00 = ::operator_new(0xe0);
  PlantWarsLevelInfo::PlantWarsLevelInfo(this_00);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,this + 0x130);
  PlantWarsLevelInfo::Init(this_00);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  *(PlantWarsLevelInfo **)(this + 0x158) = this_00;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsLevelSelectUI::OnAddSeedCardToTeamPanel(std::string const&) */

void __thiscall
PlantWarsLevelSelectUI::OnAddSeedCardToTeamPanel(PlantWarsLevelSelectUI *this,string *param_1)

{
  char cVar1;
  long lVar2;
  UIMessageBox *this_00;
  Image *pIVar3;
  int iVar4;
  PlantWarsTeamPanel *this_01;
  wstring awStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this_01 = *(PlantWarsTeamPanel **)(this + 0x168);
  local_8 = ___stack_chk_guard;
  if (this_01[0xe4] == (PlantWarsTeamPanel)0x0) {
    this_01 = *(PlantWarsTeamPanel **)(this + 0x160);
  }
  cVar1 = PlantWarsTeamPanel::TryAddSeedCard(this_01,param_1);
  if (cVar1 == '\0') {
    lVar2 = UISingletonDialog<UIMessageBox>::GetSingletonPtr();
    if ((lVar2 == 0) &&
       (this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog(),
       this_00 != (UIMessageBox *)0x0)) {
      UIMessageBox::SetShowType(this_00,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[BUTTON_OK]");
      TodStringTranslate(L"[PLANT_TEAM_FULL]");
      UIMessageBox::SetMessage(this_00,awStack_18,awStack_28);
      std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar3 = (Image *)StringHelper::ToImage(asStack_10,false);
      UIMessageBox::SetBackground(this_00,pIVar3);
      std::string::~string(asStack_10);
      nop();
      lVar2 = UIMessageBox::GetButtonCancel(this_00);
      thunk_FUN_05477b9c(lVar2 + 0xd8,auStack_20);
      FUN_05476c50(awStack_18);
      FUN_05476c50(auStack_20);
      FUN_05476c50(awStack_28);
    }
  }
  else {
    iVar4 = 2;
    if (this_01 == *(PlantWarsTeamPanel **)(this + 0x160)) {
      iVar4 = 1;
    }
    PlantWarsSeedChooserPanel::ChooseSeedCard
              (*(PlantWarsSeedChooserPanel **)(this + 0x150),param_1,iVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsLevelSelectUI::SaveCards() */

void __thiscall PlantWarsLevelSelectUI::SaveCards(PlantWarsLevelSelectUI *this)

{
  int iVar1;
  int iVar2;
  ProfileMgr *this_00;
  long lVar3;
  PlantWarsNetworkMgr *pPVar4;
  ulong uVar5;
  ulong uVar6;
  string asStack_40 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  lVar3 = Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  iVar1 = FUN_04d9e730(*(undefined4 *)(lVar3 + 0xf8));
  pPVar4 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  iVar2 = PlantWarsNetworkMgr::GetCurrentWorldId(pPVar4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  pPVar4 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  PlantWarsNetworkMgr::ClearNode(pPVar4,iVar1,0);
  uVar6 = 0;
  while( true ) {
    uVar5 = FUN_04d9e754(*(undefined8 *)(*(long *)(this + 0x160) + 0x108),
                         *(undefined8 *)(*(long *)(this + 0x160) + 0x110));
    if (uVar5 <= uVar6) break;
    pPVar4 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
    FUN_04d9e760(*(undefined8 *)(*(long *)(this + 0x160) + 0x108),uVar6);
    PlantWarsSeedCard::GetPlantTypeName();
    PlantWarsNetworkMgr::AddNodePlant(pPVar4,iVar1,0,asStack_40);
    std::string::~string(asStack_40);
    FUN_04d9e760(*(undefined8 *)(*(long *)(this + 0x160) + 0x108),uVar6);
    PlantWarsSeedCard::GetPlantTypeName();
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)avStack_38,asStack_40);
    std::string::~string(asStack_40);
    uVar6 = uVar6 + 1;
  }
  pPVar4 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  PlantWarsNetworkMgr::ClearNode(pPVar4,iVar1,1);
  uVar6 = 0;
  while( true ) {
    uVar5 = FUN_04d9e754(*(undefined8 *)(*(long *)(this + 0x168) + 0x108),
                         *(undefined8 *)(*(long *)(this + 0x168) + 0x110));
    if (uVar5 <= uVar6) break;
    pPVar4 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
    FUN_04d9e760(*(undefined8 *)(*(long *)(this + 0x168) + 0x108),uVar6);
    PlantWarsSeedCard::GetPlantTypeName();
    PlantWarsNetworkMgr::AddNodePlant(pPVar4,iVar1,1,asStack_40);
    std::string::~string(asStack_40);
    FUN_04d9e760(*(undefined8 *)(*(long *)(this + 0x168) + 0x108),uVar6);
    PlantWarsSeedCard::GetPlantTypeName();
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_40);
    std::string::~string(asStack_40);
    uVar6 = uVar6 + 1;
  }
  LocalProfileSaveData::UpdatePlantWarsTeamData
            (iVar2,iVar1,(vector *)avStack_38,(vector *)avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsLevelSelectUI::LevelStart() */

void __thiscall PlantWarsLevelSelectUI::LevelStart(PlantWarsLevelSelectUI *this)

{
  int iVar1;
  PlantWarsLevelSelectManager *this_00;
  
  SaveCards(this);
  iVar1 = FUN_04d9e6c8(*(undefined8 *)(this + 0xf0),*(undefined8 *)(this + 0x100));
  if (iVar1 == 0) {
    return;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0xe8),(SexyURL *)(this + 0xe0));
  this_00 = (PlantWarsLevelSelectManager *)
            Sexy::LazySingleton<PlantWarsLevelSelectManager>::GetInstancePtr();
  PlantWarsLevelSelectManager::CloseLevelSelectUI(this_00);
  return;
}


/* PlantWarsLevelSelectUI::ButtonDepress(int) */

void __thiscall PlantWarsLevelSelectUI::ButtonDepress(PlantWarsLevelSelectUI *this,int param_1)

{
  char cVar1;
  PlantWarsLevelSelectManager *this_00;
  
  if (param_1 == 2) {
    ClearTeamPanel(this);
    return;
  }
  if (param_1 != 0x58) {
    if ((param_1 == 1) && (cVar1 = CheckTeamPanel(this), cVar1 != '\0')) {
      LevelStart(this);
      return;
    }
    return;
  }
  this_00 = (PlantWarsLevelSelectManager *)
            Sexy::LazySingleton<PlantWarsLevelSelectManager>::GetInstancePtr();
  PlantWarsLevelSelectManager::CloseLevelSelectUI(this_00);
  return;
}


/* non-virtual thunk to PlantWarsLevelSelectUI::ButtonDepress(int) */

void __thiscall PlantWarsLevelSelectUI::ButtonDepress(PlantWarsLevelSelectUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* PlantWarsLevelSelectUI::ConfirmStartLevel(UIMessageBox*, int) */

void __thiscall
PlantWarsLevelSelectUI::ConfirmStartLevel
          (PlantWarsLevelSelectUI *this,UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  LevelStart(this);
  return;
}


/* PlantWarsLevelSelectUI::InitSeedChooser() */

void __thiscall PlantWarsLevelSelectUI::InitSeedChooser(PlantWarsLevelSelectUI *this)

{
  PlantWarsSeedChooserPanel *this_00;
  
  if (*(long *)(this + 0x150) != 0) {
    return;
  }
  this_00 = ::operator_new(0x100);
  PlantWarsSeedChooserPanel::PlantWarsSeedChooserPanel(this_00);
  *(PlantWarsSeedChooserPanel **)(this + 0x150) = this_00;
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,this + 0x120);
  PlantWarsSeedChooserPanel::Init(*(PlantWarsSeedChooserPanel **)(this + 0x150));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x150));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsLevelSelectUI::InitTeamPanel() */

void __thiscall PlantWarsLevelSelectUI::InitTeamPanel(PlantWarsLevelSelectUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  UIWidgetImage *this_00;
  PVZ2UIButton *this_01;
  PlantWarsTeamPanel *pPVar8;
  undefined1 auStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  undefined4 local_40 [14];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)local_40,"IMAGE_UI_PLANTWARS_PLANTTEAM");
  this_00 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_00,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  iVar3 = FUN_04d9f494(0x14);
  iVar1 = *(int *)(this + 0x140);
  iVar4 = FUN_04d9f494(5);
  iVar2 = *(int *)(this + 0x144);
  uVar5 = FUN_04d9f494(0x50);
  uVar6 = FUN_04d9f494(0x19);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,iVar3 + iVar1,iVar4 + iVar2,uVar5,uVar6);
  local_40[0] = 2;
  UIWidgetImage::SetImageType(this_00,(string *)local_40,0.0);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)local_40,1);
  this_01 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_01,2,(ButtonListener *)(this + 0xd8),(wstring *)aPStack_78,(Color *)local_40);
  FUN_05476c50(aPStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b98cc0,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b98cc0,2);
  PVZ2UIButton::SetDialogStates(this_01,aPStack_78,(PVZ2UIImage *)local_40);
  iVar1 = *(int *)(this + 0x140);
  iVar2 = *(int *)(this + 0x148);
  iVar4 = FUN_04d9f494(0x32);
  iVar7 = FUN_04d9f494(7);
  iVar3 = *(int *)(this + 0x144);
  uVar5 = FUN_04d9f494(0x19);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,(iVar1 + iVar2) - iVar4,iVar7 + iVar3,uVar5,uVar5)
  ;
  (**(code **)(*(long *)this + 0x60))(this,this_01);
  pPVar8 = ::operator_new(0x120);
  PlantWarsTeamPanel::PlantWarsTeamPanel(pPVar8);
  iVar3 = FUN_04d9f494(8);
  iVar1 = *(int *)(this + 0x140);
  iVar4 = FUN_04d9f494(0x23);
  iVar2 = *(int *)(this + 0x144);
  uVar5 = FUN_04d9f494(700);
  uVar6 = FUN_04d9f494(0x4b);
  (**(code **)(*(long *)pPVar8 + 0x198))(pPVar8,iVar3 + iVar1,iVar4 + iVar2,uVar5,uVar6);
  PlantWarsTeamPanel::Init(pPVar8,this,1);
  (**(code **)(*(long *)this + 0x60))(this,pPVar8);
  *(PlantWarsTeamPanel **)(this + 0x160) = pPVar8;
  pPVar8 = ::operator_new(0x120);
  PlantWarsTeamPanel::PlantWarsTeamPanel(pPVar8);
  iVar3 = FUN_04d9f494(8);
  iVar1 = *(int *)(this + 0x140);
  iVar4 = FUN_04d9f494(0x73);
  iVar2 = *(int *)(this + 0x144);
  uVar5 = FUN_04d9f494(700);
  uVar6 = FUN_04d9f494(0x4b);
  (**(code **)(*(long *)pPVar8 + 0x198))(pPVar8,iVar3 + iVar1,iVar4 + iVar2,uVar5,uVar6);
  PlantWarsTeamPanel::Init(pPVar8,this,2);
  (**(code **)(*(long *)this + 0x60))(this,pPVar8);
  *(PlantWarsTeamPanel **)(this + 0x168) = pPVar8;
  SelectTeamPanel(this,*(PlantWarsTeamPanel **)(this + 0x160));
  InitZombieInfo(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsLevelSelectUI::Init(std::string const&) */

void __thiscall PlantWarsLevelSelectUI::Init(PlantWarsLevelSelectUI *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  string *psVar10;
  PVZ2UIButton *pPVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  RtWeakPtr aRStack_88 [8];
  string asStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(this + 0xe0);
  iVar2 = FUN_04d9f494(0x2ee);
  iVar3 = FUN_04d9f494(0x226);
  (**(code **)(*(long *)this + 0x198))
            (this,*(int *)(gLawnApp + 0xd4) / 2 - iVar2 / 2,
             *(int *)(gLawnApp + 0xd8) / 2 - iVar3 / 2);
  psVar10 = (string *)Sexy::LazySingleton<LevelUtils>::GetInstance();
  LevelUtils::SimpleLoadLevelDefinition(psVar10,SUB81(param_1,0));
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_88);
  if (bVar1) {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x170),aRStack_88);
    lVar13 = Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
    iVar2 = FUN_04d9e730(*(undefined4 *)(lVar13 + 0xf8));
    lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
    lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
    lVar14 = FUN_05474184(lVar14 + 0x10);
    FUN_05475ffc(asStack_80,lVar13 + 0x10,0,lVar14 + -3);
    FUN_05475aa4(asStack_80,&DAT_05593350);
    Sexy::ToWString(asStack_80);
    TodReplaceNumberString(awStack_78,L"{NUMS}",iVar2);
    FUN_054766c8(this + 0x118,&local_40);
    FUN_05476c50(&local_40);
    FUN_05476c50(awStack_78);
    std::string::~string(asStack_80);
  }
  iVar2 = FUN_04d9f494(0x12);
  iVar3 = FUN_04d9f494(0x41);
  iVar4 = FUN_04d9f494(0x188);
  iVar5 = FUN_04d9f494(0xe6);
  Sexy::Insets::Insets((Insets *)&local_40,iVar2,iVar3,iVar4,iVar5);
  *(undefined8 *)(this + 0x120) = local_40;
  *(undefined8 *)(this + 0x128) = uStack_38;
  iVar2 = FUN_04d9f494(0x19f);
  iVar3 = FUN_04d9f494(0x41);
  iVar4 = FUN_04d9f494(0x13e);
  iVar5 = FUN_04d9f494(0xe6);
  Sexy::Insets::Insets((Insets *)&local_40,iVar2,iVar3,iVar4,iVar5);
  *(undefined8 *)(this + 0x130) = local_40;
  *(undefined8 *)(this + 0x138) = uStack_38;
  iVar2 = FUN_04d9f494(0x11);
  iVar3 = FUN_04d9f494(300);
  iVar4 = FUN_04d9f494(0x2ce);
  iVar5 = FUN_04d9f494(200);
  Sexy::Insets::Insets((Insets *)&local_40,iVar2,iVar3,iVar4,iVar5);
  *(undefined8 *)(this + 0x140) = local_40;
  *(undefined8 *)(this + 0x148) = uStack_38;
  InitSeedChooser(this);
  InitLevelInfo(this);
  InitTeamPanel(this);
  LoadCards();
  TodStringTranslate(L"[LETS_ROCK_BUTTON]");
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar11,1,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
  FUN_05476c50(awStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b995d0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b98c70,3);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  uVar6 = FUN_04d9f494(0x140);
  uVar7 = FUN_04d9f494(500);
  uVar8 = FUN_04d9f494(100);
  uVar9 = FUN_04d9f494(0x25);
  (**(code **)(*(long *)pPVar11 + 0x198))(pPVar11,uVar6,uVar7,uVar8,uVar9);
  pcVar15 = *(code **)(*(long *)pPVar11 + 800);
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_20_Outline);
  (*pcVar15)(pPVar11,uVar12);
  (**(code **)(*(long *)this + 0x60))(this,pPVar11);
  FUN_05478178(awStack_78,&DAT_056f11a8,asStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar11,0x58,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b98da0,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b992f0,2);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  uVar6 = FUN_04d9f494(0x2cb);
  iVar2 = FUN_04d9f494(9);
  uVar7 = FUN_04d9f494(0x35);
  uVar8 = FUN_04d9f494(0x37);
  (**(code **)(*(long *)pPVar11 + 0x198))(pPVar11,uVar6,-iVar2,uVar7,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,pPVar11);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

