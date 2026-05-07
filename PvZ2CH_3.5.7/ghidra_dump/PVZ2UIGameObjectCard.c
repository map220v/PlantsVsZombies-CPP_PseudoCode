// Class: PVZ2UIGameObjectCard


/* PVZ2UIGameObjectCard::SetShowLevelRank(bool) */

void __thiscall PVZ2UIGameObjectCard::SetShowLevelRank(PVZ2UIGameObjectCard *this,bool param_1)

{
  this[0xe9] = (PVZ2UIGameObjectCard)param_1;
  return;
}


/* PVZ2UIGameObjectCard::SetSmallLevelRank() */

void __thiscall PVZ2UIGameObjectCard::SetSmallLevelRank(PVZ2UIGameObjectCard *this)

{
  this[0xea] = (PVZ2UIGameObjectCard)0x1;
  return;
}


/* PVZ2UIGameObjectCard::setIsShowExpLevel(bool) */

void __thiscall PVZ2UIGameObjectCard::setIsShowExpLevel(PVZ2UIGameObjectCard *this,bool param_1)

{
  this[0x148] = (PVZ2UIGameObjectCard)param_1;
  return;
}


/* PVZ2UIGameObjectCard::SetPopAnimScale(float) */

void __thiscall PVZ2UIGameObjectCard::SetPopAnimScale(PVZ2UIGameObjectCard *this,float param_1)

{
  if (*(PopAnimRig **)(this + 0x110) != (PopAnimRig *)0x0) {
    PopAnimRig::SetDrawScale(*(PopAnimRig **)(this + 0x110),param_1);
    (**(code **)(**(long **)(this + 0x110) + 0x90))(*(long **)(this + 0x110),this + 0x118);
  }
  return;
}


/* PVZ2UIGameObjectCard::SetItemOffset(float) */

void __thiscall PVZ2UIGameObjectCard::SetItemOffset(PVZ2UIGameObjectCard *this,float param_1)

{
  *(float *)(this + 0xf4) = param_1;
  return;
}


/* PVZ2UIGameObjectCard::SetShowPlantPrice(bool) */

void __thiscall PVZ2UIGameObjectCard::SetShowPlantPrice(PVZ2UIGameObjectCard *this,bool param_1)

{
  this[0xeb] = (PVZ2UIGameObjectCard)param_1;
  return;
}


/* PVZ2UIGameObjectCard::SetShowLock(bool) */

void __thiscall PVZ2UIGameObjectCard::SetShowLock(PVZ2UIGameObjectCard *this,bool param_1)

{
  this[0xed] = (PVZ2UIGameObjectCard)param_1;
  return;
}


/* PVZ2UIGameObjectCard::SetObjectExtendsOutOfRect(bool) */

void __thiscall
PVZ2UIGameObjectCard::SetObjectExtendsOutOfRect(PVZ2UIGameObjectCard *this,bool param_1)

{
  this[0xef] = (PVZ2UIGameObjectCard)param_1;
  return;
}


/* PVZ2UIGameObjectCard::SetUseSmallLock(bool) */

void __thiscall PVZ2UIGameObjectCard::SetUseSmallLock(PVZ2UIGameObjectCard *this,bool param_1)

{
  this[0xee] = (PVZ2UIGameObjectCard)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIGameObjectCard::SetTutorialBackground() */

void __thiscall PVZ2UIGameObjectCard::SetTutorialBackground(PVZ2UIGameObjectCard *this)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  string *extraout_x1;
  string asStack_20 [8];
  string asStack_18 [8];
  Sexy aSStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"tutorial");
  nop();
  puVar1 = ObjectCardSettings::k_backgroundPfx;
  uVar2 = FUN_0547429c(asStack_20);
  Sexy::StrFormat("%s%s",aSStack_10,puVar1,uVar2);
  Sexy::Upper(aSStack_10,extraout_x1);
  std::string::~string((string *)aSStack_10);
  lVar3 = StringHelper::ToImage(asStack_18,false);
  if (lVar3 != 0) {
    *(long *)(this + 0x130) = lVar3;
  }
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIGameObjectCard::SetSpecificBackground(Sexy::Image*, Sexy::Color) */

void __thiscall
PVZ2UIGameObjectCard::SetSpecificBackground
          (PVZ2UIGameObjectCard *this,undefined8 param_1,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *(undefined8 *)(this + 0x130) = param_1;
  *(undefined8 *)(this + 0x100) = uVar1;
  *(undefined8 *)(this + 0x108) = uVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIGameObjectCard::GetLevelImage(int) */

void PVZ2UIGameObjectCard::GetLevelImage(int param_1)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("IMAGE_UI_PACKETS_LEVEL_%d",asStack_10,(ulong)(uint)param_1);
  uVar1 = StringHelper::ToImage(asStack_10,false);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIGameObjectCard::CreateEliteZombieTips() */

void __thiscall PVZ2UIGameObjectCard::CreateEliteZombieTips(PVZ2UIGameObjectCard *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  Widget *pWVar7;
  string *extraout_x1;
  Sexy aSStack_28 [8];
  string asStack_20 [8];
  undefined1 auStack_18 [8];
  int local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = GameStateMgr::GetState(gGameStateMgr);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  FUN_05475d88(aSStack_28,lVar5 + 8);
  Sexy::Upper(aSStack_28,extraout_x1);
  uVar6 = FUN_0547429c((string *)&local_10);
  Sexy::StrFormat("[ELITE_ZOMBIE_TIPS_TEXT_%s]",asStack_20,uVar6);
  std::string::~string((string *)&local_10);
  TodStringTranslate(L"[ELITE_ZOMBIE_TIPS_TITLE]");
  StringHelper::ToStringValue(asStack_20);
  pWVar7 = ::operator_new(0xe8);
  PVZ2UIEliteZombieTipsWidget::PVZ2UIEliteZombieTipsWidget
            ((PVZ2UIEliteZombieTipsWidget *)pWVar7,auStack_18,(string *)&local_10);
  FUN_05476c50((string *)&local_10);
  FUN_05476c50(auStack_18);
  iVar1 = *(int *)(this + 0x50);
  uVar2 = *(undefined4 *)(this + 0x54);
  if (iVar4 == 5) {
    (**(code **)(**(long **)(this + 0x158) + 0xd0))((string *)&local_10,*(long **)(this + 0x158));
    iVar3 = *(int *)(*(long *)(this + 0x158) + 0x50);
    iVar4 = FUN_043772fc(10);
    iVar4 = local_10 + iVar3 + iVar4;
  }
  else {
    (**(code **)(*(long *)this + 0xd0))((string *)&local_10,this);
    iVar4 = FUN_043772fc(10);
    iVar4 = (local_10 - (int)((float)iVar1 * 1.5)) - iVar4;
  }
  (**(code **)(*(long *)this + 0xd0))((string *)&local_10,this);
  (**(code **)(*(long *)pWVar7 + 0x198))(pWVar7,iVar4,local_c,(int)((float)iVar1 * 1.5),uVar2);
  LevelEditorUtil::ShowDialogWithTouchClose(pWVar7,false);
  std::string::~string(asStack_20);
  std::string::~string((string *)aSStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIGameObjectCard::SetAvatarIndex(int) */

void __thiscall PVZ2UIGameObjectCard::SetAvatarIndex(PVZ2UIGameObjectCard *this,int param_1)

{
  PlantAnimRig *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x14c) = param_1;
  local_8 = ___stack_chk_guard;
  nop();
  if (this_00 != (PlantAnimRig *)0x0) {
    PlantAnimRig::SetAvatarIndex(this_00,param_1);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0xe0));
    PlantAnimRig::ShowAvatarLayers(this_00,aRStack_10,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIGameObjectCard::Update() */

void __thiscall PVZ2UIGameObjectCard::Update(PVZ2UIGameObjectCard *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  if ((this[0xe8] != (PVZ2UIGameObjectCard)0x0) &&
     (this_00 = *(PopAnimRig **)(this + 0x110), this_00 != (PopAnimRig *)0x0)) {
    fVar1 = (float)PVZ_RealT();
    fVar2 = (float)PVZ_RealDt();
    PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(Sexy::Image*) */

void __thiscall
PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(PVZ2UIGameObjectCard *this,Image *param_1)

{
  undefined *puVar1;
  LawnApp *this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  char *__s;
  long lVar4;
  ResourceInfo *pRVar5;
  string *extraout_x1;
  string asStack_20 [8];
  string asStack_18 [8];
  Sexy aSStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06838ae0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06838e08;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe0));
  this[0xe9] = (PVZ2UIGameObjectCard)0x1;
  this[0xf0] = (PVZ2UIGameObjectCard)0x1;
  this[0xe8] = (PVZ2UIGameObjectCard)0x0;
  this[0xea] = (PVZ2UIGameObjectCard)0x0;
  this[0xeb] = (PVZ2UIGameObjectCard)0x0;
  this[0xec] = (PVZ2UIGameObjectCard)0x0;
  this[0xed] = (PVZ2UIGameObjectCard)0x0;
  this[0xee] = (PVZ2UIGameObjectCard)0x0;
  this[0xef] = (PVZ2UIGameObjectCard)0x0;
  *(undefined4 *)(this + 0xf4) = 0x3f1e377a;
  FUN_05476574(this + 0xf8);
  Sexy::Color::Color((Color *)(this + 0x100));
  Sexy::Insets::Insets((Insets *)(this + 0x118));
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  Set8BytesTo0(this + 0x140);
  this[0x149] = (PVZ2UIGameObjectCard)0x1;
  this[0x150] = (PVZ2UIGameObjectCard)0x1;
  this[0x148] = (PVZ2UIGameObjectCard)0x0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  uVar2 = DAT_06afdfc0;
  uVar3 = DAT_06afdfb8;
  *(Image **)(this + 0x128) = param_1;
  *(undefined4 *)(this + 0x14c) = 0xffffffff;
  *(undefined8 *)(this + 0x100) = uVar3;
  *(undefined8 *)(this + 0x108) = uVar2;
  std::string::string(asStack_20,"modern");
  nop();
  puVar1 = ObjectCardSettings::k_backgroundPfx;
  uVar3 = FUN_0547429c(asStack_20);
  Sexy::StrFormat("%s%s",aSStack_10,puVar1,uVar3);
  Sexy::Upper(aSStack_10,extraout_x1);
  std::string::~string((string *)aSStack_10);
  this_00 = gLawnApp;
  __s = (char *)FUN_0547429c(asStack_18);
  std::string::string((string *)aSStack_10,__s);
  lVar4 = LawnApp::GetUIImageInfoFromStringId(this_00,(string *)aSStack_10);
  std::string::~string((string *)aSStack_10);
  nop();
  if (lVar4 != 0) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aSStack_10);
    *(ResourceInfo **)(this + 0x130) = pRVar5;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_10);
  }
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIGameObjectCard::CreateEliteTipButton() */

void __thiscall PVZ2UIGameObjectCard::CreateEliteTipButton(PVZ2UIGameObjectCard *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long extraout_x0;
  long lVar4;
  PVZ2UIButton *this_00;
  LotteryResultProgressBar *pLVar5;
  SalesProgressBar *pSVar6;
  undefined1 auStack_88 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_80 [8];
  wstring awStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  nop();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_80,(RtWeakPtrBase *)(extraout_x0 + 0xa0));
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  if ((*(int *)(lVar4 + 0x1dc) != -1) ||
     (lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80),
     *(char *)(lVar4 + 0x1ea) != '\0')) {
    FUN_05478178(awStack_78,&DAT_056f11a8,auStack_88);
    Sexy::Color::Color((Color *)aIStack_40,1);
    this_00 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (this_00,0,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aIStack_40);
    FUN_05476c50(awStack_78);
    nop();
    PVZ2UIImage::PVZ2UIImage
              ((PVZ2UIImage *)awStack_78,AlmanacStatSettings::IMAGE_UI_GENERIC_ELITE_TIP_BTN,1);
    PVZ2UIImage::PVZ2UIImage
              ((PVZ2UIImage *)aIStack_40,AlmanacStatSettings::IMAGE_UI_GENERIC_ELITE_TIP_BTN,1);
    PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
    pLVar5 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)
                        AlmanacStatSettings::IMAGE_UI_GENERIC_ELITE_TIP_BTN);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
    pSVar6 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)
                        AlmanacStatSettings::IMAGE_UI_GENERIC_ELITE_TIP_BTN);
    iVar2 = SalesProgressBar::GetCurrentLevel(pSVar6);
    Sexy::Insets::Insets(aIStack_40,0,0,iVar1,iVar2);
    PVZ2UIButton::SetContentsRect(this_00,(TRect *)aIStack_40);
    uVar3 = FUN_043772fc(5);
    *(undefined4 *)(this_00 + 0x48) = uVar3;
    uVar3 = FUN_043772fc(5);
    *(undefined4 *)(this_00 + 0x4c) = uVar3;
    pLVar5 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)
                        AlmanacStatSettings::IMAGE_UI_GENERIC_ELITE_TIP_BTN);
    uVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
    *(undefined4 *)(this_00 + 0x50) = uVar3;
    pSVar6 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)
                        AlmanacStatSettings::IMAGE_UI_GENERIC_ELITE_TIP_BTN);
    uVar3 = SalesProgressBar::GetCurrentLevel(pSVar6);
    lVar4 = *(long *)this;
    *(undefined4 *)(this_00 + 0x54) = uVar3;
    *(PVZ2UIButton **)(this + 0x158) = this_00;
    (**(code **)(lVar4 + 0x60))(this,this_00);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PVZ2UIGameObjectCard::Resize(int, int, int, int) */

void __thiscall
PVZ2UIGameObjectCard::Resize
          (PVZ2UIGameObjectCard *this,int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  RtObject *this_00;
  
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xe0));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
    bVar1 = Sexy::RtObject::IsA<ZombieType>(this_00);
    if (bVar1) {
      CreateEliteTipButton(this);
      return;
    }
  }
  return;
}


/* PVZ2UIGameObjectCard::Resize(Sexy::TRect<int> const&) */

void __thiscall PVZ2UIGameObjectCard::Resize(PVZ2UIGameObjectCard *this,TRect *param_1)

{
  bool bVar1;
  RtObject *this_00;
  
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xe0));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
    bVar1 = Sexy::RtObject::IsA<ZombieType>(this_00);
    if (bVar1) {
      CreateEliteTipButton(this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIGameObjectCard::~PVZ2UIGameObjectCard() */

void __thiscall PVZ2UIGameObjectCard::~PVZ2UIGameObjectCard(PVZ2UIGameObjectCard *this)

{
  RtWeakPtr *this_00;
  LawnApp *pLVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long extraout_x0;
  char *__s;
  long lVar5;
  long extraout_x0_00;
  long extraout_x0_01;
  PlantAccessoryMgr *pPVar6;
  NameMapperBase *this_01;
  long extraout_x0_02;
  RtObject *pRVar7;
  RAttribute *this_02;
  vector *pvVar8;
  long extraout_x0_03;
  ResourceManager *this_03;
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06838e08;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06838ae0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  if (*(long **)(this + 0x110) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x110) + 0x18))();
    *(undefined8 *)(this + 0x110) = 0;
  }
  this_00 = (RtWeakPtr *)(this + 0xe0);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar2) {
    pRVar7 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar2 = Sexy::RtObject::IsA<PlantType>(pRVar7);
    if ((bVar2) && (this[0x150] != (PVZ2UIGameObjectCard)0x0)) {
      this_03 = *(ResourceManager **)(gLawnApp + 0x848);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      __s = (char *)FUN_0547429c(extraout_x0 + 0x10);
      std::string::string(asStack_18,__s);
      lVar5 = Sexy::ResourceManager::GetResourceGroupNamed(this_03,asStack_18);
      std::string::~string(asStack_18);
      nop();
      pLVar1 = gLawnApp;
      if (lVar5 != 0) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        nop();
        cVar3 = LawnApp::IsGroupLoadComplete(pLVar1,(string *)(extraout_x0_00 + 0x10));
        pLVar1 = gLawnApp;
        if (cVar3 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          nop();
          LawnApp::DeleteGroup(pLVar1,(string *)(extraout_x0_03 + 0x10));
        }
      }
      pLVar1 = gLawnApp;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      cVar3 = LawnApp::IsGroupLoadComplete(pLVar1,(vector *)(extraout_x0_01 + 0x80));
      pLVar1 = gLawnApp;
      if (cVar3 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        nop();
        LawnApp::DeleteGroups(pLVar1,(vector *)(extraout_x0_02 + 0x80));
      }
      pPVar6 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
      this_01 = (NameMapperBase *)PlantNameMapper::GetInstance();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar4 = NameMapperBase::GetIdForName(this_01,(string *)(lVar5 + 8));
      lVar5 = PlantAccessoryMgr::GetAccessoryForPlant(pPVar6,iVar4);
      if (lVar5 != 0) {
        pPVar6 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
        PlantAccessoryMgr::GetAccessoryAvatarInfo(pPVar6,(string *)(lVar5 + 8));
        cVar3 = FUN_0547419c(asStack_18);
        if ((cVar3 == '\0') && (cVar3 = FUN_0547419c(auStack_10), cVar3 == '\0')) {
          LawnApp::DeleteGroup(gLawnApp,asStack_18);
        }
        Sexy::PACommand::~PACommand((PACommand *)asStack_18);
      }
      goto LAB_0437da2c;
    }
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar2) {
    pRVar7 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar2 = Sexy::RtObject::IsA<ZombieType>(pRVar7);
    pLVar1 = gLawnApp;
    if (bVar2) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      pvVar8 = (vector *)Reflection::RAttribute::GetValue(this_02);
      LawnApp::DeleteGroups(pLVar1,pvVar8);
    }
  }
LAB_0437da2c:
  pLVar1 = gLawnApp;
  if (this[0x149] != (PVZ2UIGameObjectCard)0x0) {
    std::string::string(asStack_18,"UI_Card_Plant_BG");
    LawnApp::DeleteGroup(pLVar1,asStack_18);
    std::string::~string(asStack_18);
    nop();
  }
  std::string::~string((string *)(this + 0x140));
  FUN_05476c50(this + 0xf8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIGameObjectCard::~PVZ2UIGameObjectCard() */

void __thiscall PVZ2UIGameObjectCard::~PVZ2UIGameObjectCard(PVZ2UIGameObjectCard *this)

{
  ~PVZ2UIGameObjectCard(this);
  AK::FreeHook(this);
  return;
}


/* PVZ2UIGameObjectCard::isExperiencePlant() */

undefined8 __thiscall PVZ2UIGameObjectCard::isExperiencePlant(PVZ2UIGameObjectCard *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  int iVar2;
  NameMapperBase *this_01;
  long lVar3;
  ProfileMgr *this_02;
  undefined8 uVar4;
  RtObject *this_03;
  
  if (this[0x148] != (PVZ2UIGameObjectCard)0x0) {
    this_00 = (RtWeakPtr *)(this + 0xe0);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      this_03 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      bVar1 = Sexy::RtObject::IsA<PlantType>(this_03);
      if (!bVar1) {
        return 0;
      }
    }
    this_01 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    NameMapperBase::GetIdForName(this_01,(string *)(lVar3 + 8));
    this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar3 = ProfileMgr::GetCurrentProfile(this_02);
    if (lVar3 != 0) {
      iVar2 = Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
      uVar4 = TrialCardManager::IsTrialingPlant(iVar2);
      return uVar4;
    }
  }
  return 0;
}


/* PVZ2UIGameObjectCard::ButtonDepress(int) */

void __thiscall PVZ2UIGameObjectCard::ButtonDepress(PVZ2UIGameObjectCard *this,int param_1)

{
  char *pcVar1;
  
  if (param_1 != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Tab_Scroll");
    return;
  }
  CreateEliteZombieTips(this);
  return;
}


/* non-virtual thunk to PVZ2UIGameObjectCard::ButtonDepress(int) */

void __thiscall PVZ2UIGameObjectCard::ButtonDepress(PVZ2UIGameObjectCard *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(Sexy::RtWeakPtr<ObjectTypeDescriptor const>, bool,
   PlantAvatarType, bool, bool) */

void __thiscall
PVZ2UIGameObjectCard::PVZ2UIGameObjectCard
          (PVZ2UIGameObjectCard *this,RtWeakPtrBase *param_2,PVZ2UIGameObjectCard param_3,
          int param_4,char param_5,PVZ2UIGameObjectCard param_6)

{
  RtWeakPtr<Sexy::SoundResource> *this_00;
  Color *this_01;
  undefined *puVar1;
  LawnApp *pLVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  char *__s;
  long lVar8;
  ResourceInfo *pRVar9;
  long *plVar10;
  long *extraout_x0;
  PlantAnimRig *this_02;
  long extraout_x0_00;
  PlayerInfo *this_03;
  PlantAccessoryMgr *pPVar11;
  NameMapperBase *this_04;
  long extraout_x0_01;
  ZombieAnimRig_RomanBasic *this_05;
  string *psVar12;
  ulong uVar13;
  long extraout_x0_02;
  ZombieAnimRig_CamelAlmanac *this_06;
  PopAnimRig *this_07;
  PopAnimRig *this_08;
  long extraout_x0_03;
  long extraout_x0_04;
  ZombieAnimRig_TutorialSummerFlag *this_09;
  RtObject *pRVar14;
  long extraout_x0_05;
  string *psVar15;
  long extraout_x0_06;
  ZombieAnimRig_Camel *this_10;
  string *extraout_x1;
  undefined **__n;
  ulong uVar16;
  code *pcVar17;
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  Sexy aSStack_68 [8];
  undefined1 auStack_60 [16];
  Delegate0 aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<Sexy::SoundResource> *)(this + 0xe0);
  this_01 = (Color *)(this + 0x100);
  Sexy::Widget::Widget((Widget *)this);
  psVar12 = (string *)(this + 0x140);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  __n = &PTR_GetClass_06838ae0;
  *(undefined ***)this = &PTR_GetClass_06838ae0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06838e08;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(this_00,param_2);
  this[0xe8] = param_3;
  this[0xe9] = (PVZ2UIGameObjectCard)0x1;
  this[0xea] = (PVZ2UIGameObjectCard)0x0;
  this[0xeb] = (PVZ2UIGameObjectCard)0x0;
  this[0xec] = (PVZ2UIGameObjectCard)0x0;
  this[0xed] = (PVZ2UIGameObjectCard)0x0;
  this[0xee] = (PVZ2UIGameObjectCard)0x0;
  this[0xef] = (PVZ2UIGameObjectCard)0x0;
  this[0xf0] = (PVZ2UIGameObjectCard)0x1;
  *(undefined4 *)(this + 0xf4) = 0x3f1e377a;
  FUN_05476574(this + 0xf8);
  Sexy::Color::Color(this_01);
  Sexy::Insets::Insets((Insets *)(this + 0x118));
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  Set8BytesTo0(psVar12);
  this[0x148] = (PVZ2UIGameObjectCard)0x0;
  this[0x149] = param_6;
  *(undefined4 *)(this + 0x14c) = 0xffffffff;
  this[0x150] = (PVZ2UIGameObjectCard)0x1;
  *(undefined8 *)(this + 0x158) = 0;
  pLVar2 = gLawnApp;
  if (param_6 != (PVZ2UIGameObjectCard)0x0) {
    __n = (undefined **)asStack_70;
    std::string::string((string *)aSStack_68,"UI_Card_Plant_BG");
    LawnApp::LoadGroup(pLVar2,(string *)aSStack_68);
    std::string::~string((string *)aSStack_68);
    nop();
  }
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  std::string::append(psVar12,"",(size_t)__n);
  Set8BytesTo0(asStack_80);
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
  if (bVar3) {
    pRVar14 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar3 = Sexy::RtObject::IsA<PlantType>(pRVar14);
    if (bVar3) {
      if (param_4 == -2) {
        psVar12 = (string *)ProfileUtils::Profile();
        cVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        param_4 = PlayerInfo::GetPlantAvatar(psVar12,(bool)(cVar4 + '\b'));
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      uVar16 = (**(code **)(*extraout_x0 + 0x70))();
      Sexy::StrFormat(L"%d",aSStack_68,uVar16 & 0xffffffff);
      FUN_054766c8(this + 0xf8,aSStack_68);
      FUN_05476c50(aSStack_68);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aSStack_68,(RtWeakPtrBase *)this_00);
      this_02 = (PlantAnimRig *)CreateStandalonePlantAnimRig(aSStack_68,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_68);
      cVar4 = isExperiencePlant(this);
      if (cVar4 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        nop();
        *(undefined1 *)(extraout_x0_01 + 0x32) = 1;
      }
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar6 = NewAvatar::GetAvatarIndexForPlant((string *)(lVar8 + 8));
      *(int *)(this + 0x14c) = iVar6;
      PlantAnimRig::SetAvatarIndex(this_02,iVar6);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aSStack_68,(RtWeakPtrBase *)this_00);
      PlantAnimRig::ShowAvatarLayers(this_02,aSStack_68,param_4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_68);
      puVar1 = gMessageRouter;
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,ChangeNextAvatar);
      Sexy::Delegate0::Delegate0<PVZ2UIGameObjectCard,void(PVZ2UIGameObjectCard::*)()>
                (aDStack_50,aSStack_68);
      MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NextAvatar,aDStack_50);
      __n = *(undefined ***)(*(long *)this_02 + 0x1a0);
      (*(code *)__n)(this_02,0);
      *(PlantAnimRig **)(this + 0x110) = this_02;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      thunk_FUN_05475e00(asStack_80,extraout_x0_00 + 0x38);
      uVar7 = DAT_06afe898;
      *(undefined8 *)this_01 = DAT_06afe890;
      *(undefined8 *)(this + 0x108) = uVar7;
      this[0xeb] = (PVZ2UIGameObjectCard)0x1;
      this_03 = (PlayerInfo *)ProfileUtils::Profile();
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar4 = PlayerInfo::GetIsPlantUnlocked(this_03,(string *)(lVar8 + 8));
      if (cVar4 == '\0') {
        NewYearGoodsSelectItem::SelectItem((NewYearGoodsSelectItem *)this,true);
        SetShowPlantPrice(this,false);
        SetShowLock(this,true);
      }
      if (param_5 == '\0') {
        *(undefined8 *)(this + 0x138) = 0;
      }
      else {
        pPVar11 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
        this_04 = (NameMapperBase *)PlantNameMapper::GetInstance();
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        iVar6 = NameMapperBase::GetIdForName(this_04,(string *)(lVar8 + 8));
        lVar8 = PlantAccessoryMgr::GetAccessoryForPlant(pPVar11,iVar6);
        if (lVar8 != 0) {
          pPVar11 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
          PlantAccessoryMgr::GetAccessoryAvatarInfo(pPVar11,(string *)(lVar8 + 8));
          cVar4 = FUN_0547419c(aSStack_68);
          if (cVar4 == '\0') {
            bVar5 = FUN_0547419c(auStack_60);
            __n = (undefined **)(ulong)bVar5;
            if (bVar5 == 0) {
              LawnApp::LoadGroup(gLawnApp,(string *)aSStack_68);
              LawnApp::GetImageFromStringId((string *)gLawnApp,(int)auStack_60);
              pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_70);
              *(ResourceInfo **)(this + 0x138) = pRVar9;
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
            }
          }
          Sexy::PACommand::~PACommand((PACommand *)aSStack_68);
        }
      }
      goto LAB_0437ecc4;
    }
  }
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
  if (bVar3) {
    pRVar14 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar3 = Sexy::RtObject::IsA<ZombieType>(pRVar14);
    if (bVar3) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aSStack_68,(RtWeakPtrBase *)this_00);
      pRVar14 = (RtObject *)CreateStandaloneZombieAnimRig(aSStack_68,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_68);
      pcVar17 = *(code **)(*(long *)pRVar14 + 0x110);
      RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
      RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *
                 )aDStack_50);
      (*pcVar17)(pRVar14,(RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>
                          *)aDStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aDStack_50);
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      bVar3 = std::operator==((string *)(lVar8 + 8),"roman_flag");
      if (bVar3) {
        this_05 = Sexy::RtObject::Cast<ZombieAnimRig_RomanBasic>(pRVar14);
        uVar16 = DAT_06afe9d0 & 1;
        if (((DAT_06afe9d0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_06afe9d0), iVar6 != 0)) {
          std::string::string((string *)&DAT_06afea00,"flag_01");
          nop();
          std::string::string((string *)&DAT_06afea08,"flag_stick");
          nop();
          std::string::string((string *)&DAT_06afea10,"zombie_hand_inner_01_flag");
          nop();
          std::string::string((string *)&DAT_06afea18,"zombie_hand_inner_02_flag");
          nop();
          std::string::string((string *)&DAT_06afea20,"zombie_hand_inner_03_flag");
          nop();
          std::string::string((string *)&DAT_06afea28,"zombie_hand_inner3b_flag");
          nop();
          std::string::string((string *)&DAT_06afea30,"zombie_hand_inner4b_flag");
          nop();
          std::string::string((string *)&DAT_06afea38,"zombie_hand_inner_05_flag");
          nop();
          std::string::string((string *)&DAT_06afea40,"zombie_arm_inner_upper_flag");
          nop();
          std::string::string((string *)&DAT_06afea48,"zombie_arm_inner_lower_flag");
          nop();
          std::string::string((string *)&DAT_06afea50,"flag_buckle");
          nop();
          __cxa_guard_release(&DAT_06afe9d0);
          __cxa_atexit(FUN_0437684c,uVar16,&DAT_06a88000);
        }
        if (((DAT_06afe248 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_06afe248), iVar6 != 0)) {
          std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
                    ((string *)&DAT_06afd998,(string *)&DAT_06afea00,(allocator *)&DAT_06afea58);
          __cxa_guard_release(&DAT_06afe248);
          __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06afd998,
                       &DAT_06a88000);
        }
        for (uVar16 = 0; uVar7 = DAT_06afd998, uVar13 = FUN_04376ee8(DAT_06afd998,DAT_06afd9a0),
            uVar16 < uVar13; uVar16 = uVar16 + 1) {
          psVar12 = (string *)FUN_04376ef4(uVar7,uVar16);
          PopAnimRig::SetLayerVisibility((PopAnimRig *)this_05,psVar12,true);
        }
      }
      else {
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        bVar3 = std::operator==((string *)(lVar8 + 8),"summer_flag");
        if (bVar3) {
          this_09 = Sexy::RtObject::Cast<ZombieAnimRig_TutorialSummerFlag>(pRVar14);
          uVar16 = DAT_06afe600 & 1;
          if (((DAT_06afe600 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_06afe600), iVar6 != 0))
          {
            std::string::string((string *)&DAT_06afe590,"flag_01");
            nop();
            std::string::string((string *)&DAT_06afe598,"flag_stick_base");
            nop();
            std::string::string((string *)&DAT_06afe5a0,"sparkler");
            nop();
            __cxa_guard_release(&DAT_06afe600);
            __cxa_atexit(FUN_04376818,uVar16,&DAT_06a88000);
          }
          if (((DAT_06afe5d0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_06afe5d0), iVar6 != 0))
          {
            std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
                      ((string *)&DAT_06afdf38,(string *)&DAT_06afe590,
                       (allocator *)AlmanacStatSettings::IMAGE_UI_ALMANAC_ZOMBIES_FLAME_RESISTENCE);
            __cxa_guard_release(&DAT_06afe5d0);
            __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06afdf38
                         ,&DAT_06a88000);
          }
          for (uVar16 = 0; uVar7 = DAT_06afdf38, uVar13 = FUN_04376ee8(DAT_06afdf38,DAT_06afdf40),
              uVar16 < uVar13; uVar16 = uVar16 + 1) {
            psVar12 = (string *)FUN_04376ef4(uVar7,uVar16);
            PopAnimRig::SetLayerVisibility((PopAnimRig *)this_09,psVar12,true);
          }
        }
        else {
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
          ;
          bVar3 = std::operator==((string *)(lVar8 + 8),"camel_almanac");
          if (bVar3) {
            this_06 = Sexy::RtObject::Cast<ZombieAnimRig_CamelAlmanac>(pRVar14);
            this_07 = (PopAnimRig *)FUN_04376eb8(*(undefined8 *)(this_06 + 0x240));
            this_08 = (PopAnimRig *)FUN_04376ebc(*(undefined8 *)(this_06 + 0x248));
            uVar16 = DAT_06afe710 & 1;
            if (((DAT_06afe710 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_06afe710), iVar6 != 0)) {
              std::string::string((string *)&DAT_06afdf50,"zombie_camel_board_head_etching_norm");
              nop();
              std::string::string((string *)&DAT_06afdf58,
                                  "zombie_camel_board_head_etching_damage_01");
              nop();
              std::string::string((string *)&DAT_06afdf60,
                                  "zombie_camel_board_head_etching_damage_02");
              nop();
              __cxa_guard_release(&DAT_06afe710);
              __cxa_atexit(FUN_043767e4,uVar16,&DAT_06a88000);
            }
            if (((DAT_06afe488 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_06afe488), iVar6 != 0)) {
              std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
                        ((string *)&DAT_06afdb20,(string *)&DAT_06afdf50,
                         (allocator *)ObjectCardSettings::IMAGE_UI_CARDS_LOCK_MEDIUM);
              __cxa_guard_release(&DAT_06afe488);
              __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,
                           &DAT_06afdb20,&DAT_06a88000);
            }
            uVar16 = DAT_06afe888 & 1;
            if (((DAT_06afe888 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_06afe888), iVar6 != 0)) {
              std::string::string((string *)&DAT_06afea58,"zombie_camel_board_hump_etching_norm");
              nop();
              std::string::string((string *)&DAT_06afea60,
                                  "zombie_camel_board_hump_etching_damage_01");
              nop();
              std::string::string((string *)&DAT_06afea68,
                                  "zombie_camel_board_hump_etching_damage_02");
              nop();
              __cxa_guard_release(&DAT_06afe888);
              __cxa_atexit(FUN_043767b0,uVar16,&DAT_06a88000);
            }
            if (((DAT_06afe8a8 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_06afe8a8), iVar6 != 0)) {
              std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
                        ((string *)&DAT_06afe740,(string *)&DAT_06afea58,
                         (allocator *)ObjectCardSettings::IMAGE_UI_CARDS_PLANT_STARS);
              __cxa_guard_release(&DAT_06afe8a8);
              __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,
                           &DAT_06afe740,&DAT_06a88000);
            }
            uVar16 = DAT_06afe9c8 & 1;
            if (((DAT_06afe9c8 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_06afe9c8), iVar6 != 0)) {
              std::string::string((string *)&DAT_06afe398,"zombie_camel_board_tail_etching_norm");
              nop();
              std::string::string((string *)&DAT_06afe3a0,
                                  "zombie_camel_board_tail_etching_damage_01");
              nop();
              std::string::string((string *)&DAT_06afe3a8,
                                  "zombie_camel_board_tail_etching_damage_02");
              nop();
              __cxa_guard_release(&DAT_06afe9c8);
              __cxa_atexit(FUN_0437677c,uVar16,&DAT_06a88000);
            }
            if (((DAT_06afe8a0 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_06afe8a0), iVar6 != 0)) {
              std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
                        ((string *)&DAT_06afdeb0,(string *)&DAT_06afe398,
                         (allocator *)AlmanacStatSettings::IMAGE_UI_ALMANAC_ZOMBIES_MAGIC_RESISTENCE
                        );
              __cxa_guard_release(&DAT_06afe8a0);
              __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,
                           &DAT_06afdeb0,&DAT_06a88000);
            }
            for (uVar16 = 0; uVar7 = DAT_06afdb20, uVar13 = FUN_04376ee8(DAT_06afdb20,DAT_06afdb28),
                uVar16 < uVar13; uVar16 = uVar16 + 1) {
              psVar12 = (string *)FUN_04376ef4(uVar7,uVar16);
              PopAnimRig::SetLayerVisibility((PopAnimRig *)this_06,psVar12,true);
            }
            if (this_07 != (PopAnimRig *)0x0) {
              for (uVar16 = 0; uVar7 = DAT_06afe740,
                  uVar13 = FUN_04376ee8(DAT_06afe740,DAT_06afe748), uVar16 < uVar13;
                  uVar16 = uVar16 + 1) {
                psVar12 = (string *)FUN_04376ef4(uVar7,uVar16);
                PopAnimRig::SetLayerVisibility(this_07,psVar12,true);
              }
            }
            if (this_08 != (PopAnimRig *)0x0) {
              for (uVar16 = 0; uVar7 = DAT_06afdeb0,
                  uVar13 = FUN_04376ee8(DAT_06afdeb0,DAT_06afdeb8), uVar16 < uVar13;
                  uVar16 = uVar16 + 1) {
                psVar12 = (string *)FUN_04376ef4(uVar7,uVar16);
                PopAnimRig::SetLayerVisibility(this_08,psVar12,true);
              }
            }
          }
          else {
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            bVar3 = std::operator==((string *)(lVar8 + 8),"camel_onehump");
            if (bVar3) {
              this_10 = Sexy::RtObject::Cast<ZombieAnimRig_Camel>(pRVar14);
              uVar16 = DAT_06afda68 & 1;
              if (((DAT_06afda68 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_06afda68), iVar6 != 0)) {
                std::string::string((string *)&DAT_06afd908,"zombie_camel_board_head_etching_norm");
                nop();
                std::string::string((string *)&DAT_06afd910,
                                    "zombie_camel_board_head_etching_damage_01");
                nop();
                std::string::string((string *)&DAT_06afd918,
                                    "zombie_camel_board_head_etching_damage_02");
                nop();
                __cxa_guard_release(&DAT_06afda68);
                __cxa_atexit(FUN_04376748,uVar16,&DAT_06a88000);
              }
              if (((DAT_06afdec8 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_06afdec8), iVar6 != 0)) {
                std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
                          ((string *)&DAT_06afe680,(string *)&DAT_06afd908,
                           (allocator *)AlmanacSettings::IMAGE_UI_DIALOG_ASSET_CARD_PURPLE2);
                __cxa_guard_release(&DAT_06afdec8);
                __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,
                             &DAT_06afe680,&DAT_06a88000);
              }
              for (uVar16 = 0; uVar7 = DAT_06afe680,
                  uVar13 = FUN_04376ee8(DAT_06afe680,DAT_06afe688), uVar16 < uVar13;
                  uVar16 = uVar16 + 1) {
                psVar12 = (string *)FUN_04376ef4(uVar7,uVar16);
                PopAnimRig::SetLayerVisibility((PopAnimRig *)this_10,psVar12,true);
              }
            }
          }
        }
      }
      *(RtObject **)(this + 0x110) = pRVar14;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      thunk_FUN_05475e00(asStack_80,extraout_x0_02 + 0x18);
      uVar7 = DAT_06afdd08;
      __n = (undefined **)DAT_06afdd00;
      *(string **)this_01 = DAT_06afdd00;
      *(undefined8 *)(this + 0x108) = uVar7;
      SetItemOffset(this,0.75);
      goto LAB_0437ecc4;
    }
  }
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
  if (bVar3) {
    pRVar14 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar3 = Sexy::RtObject::IsA<GameFeatureType>(pRVar14);
    if (bVar3) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      GetImageByName((string *)(extraout_x0_03 + 0x20));
      pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aSStack_68);
      *(ResourceInfo **)(this + 0x128) = pRVar9;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      thunk_FUN_05475e00(asStack_80,extraout_x0_04 + 0x28);
      uVar7 = DAT_06afdfc0;
      *(undefined8 *)this_01 = DAT_06afdfb8;
      *(undefined8 *)(this + 0x108) = uVar7;
      goto LAB_0437ecc4;
    }
  }
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
  if (bVar3) {
    pRVar14 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar3 = Sexy::RtObject::IsA<BonusType>(pRVar14);
    if (!bVar3) goto LAB_0437ecb0;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    nop();
    GetImageByName((string *)(extraout_x0_06 + 0x20));
LAB_0437f6ac:
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aSStack_68);
    *(ResourceInfo **)(this + 0x128) = pRVar9;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_68);
  }
  else {
LAB_0437ecb0:
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
    if (!bVar3) goto LAB_0437ecc4;
    pRVar14 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar3 = Sexy::RtObject::IsA<CollectableType>(pRVar14);
    if (!bVar3) goto LAB_0437ecc4;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    nop();
    if (extraout_x0_05 == 0) goto LAB_0437ecc4;
    cVar4 = FUN_0547419c();
    if (cVar4 != '\0') {
      LawnApp::GetUIImageFromStringId((string *)gLawnApp);
      goto LAB_0437f6ac;
    }
    FUN_05475d88(asStack_78,extraout_x0_05 + 8);
    __n = (undefined **)&DAT_00000006;
    FUN_05475ffc(aSStack_68,asStack_78,0);
    bVar3 = std::operator==((string *)aSStack_68,"piece_");
    std::string::~string((string *)aSStack_68);
    if (bVar3) {
      __n = (undefined **)0xffffffffffffffff;
      FUN_05475ffc(asStack_70,asStack_78,6);
      psVar15 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar15);
      cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aSStack_68);
      if (cVar4 != '\0') {
        thunk_FUN_05475e00(psVar12,asStack_70);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_68);
      std::string::~string(asStack_70);
    }
    else {
      GetImageByName((string *)(extraout_x0_05 + 0x88));
      pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aSStack_68);
      *(ResourceInfo **)(this + 0x128) = pRVar9;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_68);
      if (*(long *)(this + 0x128) == 0) {
        GetImageByName((string *)(extraout_x0_05 + 0x60));
        pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aSStack_68);
        *(ResourceInfo **)(this + 0x128) = pRVar9;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_68)
        ;
      }
    }
    std::string::~string(asStack_78);
  }
  uVar7 = DAT_06afdfc0;
  *(undefined8 *)this_01 = DAT_06afdfb8;
  *(undefined8 *)(this + 0x108) = uVar7;
LAB_0437ecc4:
  cVar4 = FUN_0547419c(asStack_80);
  if ((cVar4 != '\0') || (bVar3 = std::operator==("gacha",asStack_80), bVar3)) {
    std::string::append(asStack_80,"tutorial",(size_t)__n);
  }
  puVar1 = ObjectCardSettings::k_backgroundPfx;
  uVar7 = FUN_0547429c(asStack_80);
  Sexy::StrFormat("%s%s",aSStack_68,puVar1,uVar7);
  Sexy::Upper(aSStack_68,extraout_x1);
  std::string::~string((string *)aSStack_68);
  __s = (char *)FUN_0547429c(asStack_70);
  pLVar2 = gLawnApp;
  std::string::string((string *)aSStack_68,__s);
  lVar8 = LawnApp::GetUIImageInfoFromStringId(pLVar2,(string *)aSStack_68);
  std::string::~string((string *)aSStack_68);
  nop();
  if (lVar8 != 0) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aSStack_68);
    *(ResourceInfo **)(this + 0x130) = pRVar9;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_68);
  }
  plVar10 = *(long **)(this + 0x110);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x90))(plVar10,(Insets *)(this + 0x118));
  }
  std::string::~string(asStack_70);
  std::string::~string(asStack_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIGameObjectCard::Draw(Sexy::Graphics*) */

void __thiscall PVZ2UIGameObjectCard::Draw(PVZ2UIGameObjectCard *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 *this_00;
  string *psVar14;
  ProfileMgr *pPVar15;
  PlayerInfo *pPVar16;
  long lVar17;
  NameMapperBase *this_01;
  LotteryResultProgressBar *pLVar18;
  PlantType *this_02;
  RtObject *pRVar19;
  ZombieType *this_03;
  SeedPacketUtils *this_04;
  RtWeakPtr *pRVar20;
  ResourceInfo *pRVar21;
  PVPManager *pPVar22;
  Image *pIVar23;
  SalesProgressBar *pSVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  Insets aIStack_b0 [16];
  Color local_a0 [16];
  Insets aIStack_90 [8];
  int local_88;
  int local_84;
  Insets aIStack_80 [16];
  Insets aIStack_70 [16];
  SexyTransform2D aSStack_60 [8];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [20];
  float local_38;
  float fStack_34;
  int local_30;
  int local_2c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_b0,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Sexy::Color::Color(local_a0,1);
  if (this[0xec] != (PVZ2UIGameObjectCard)0x0) {
    Sexy::Insets::Insets((Insets *)&local_38,0x80,0x80,0x80,0xff);
  }
  Sexy::Graphics::SetColor(param_1,local_a0);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  Sexy::Insets::Insets(aIStack_90,aIStack_b0);
  fVar25 = (float)FUN_04377390(0x40000000);
  Sexy::TRect<int>::Inflate((int)aIStack_90,(int)-fVar25);
  if (*(long *)(this + 0x130) != 0) {
    Sexy::Insets::Insets((Insets *)&local_38,0,0,local_88,local_84);
    pIVar23 = *(Image **)(this + 0x130);
    iVar6 = *(int *)(pIVar23 + 0x38) - local_30;
    iVar7 = *(int *)(pIVar23 + 0x38);
    if (-1 < iVar6) {
      local_38 = (float)(iVar6 >> 1);
      iVar7 = local_30;
    }
    local_30 = iVar7;
    iVar6 = *(int *)(pIVar23 + 0x3c) - local_2c;
    iVar7 = *(int *)(pIVar23 + 0x3c);
    if (-1 < iVar6) {
      fStack_34 = (float)(iVar6 >> 1);
      iVar7 = local_2c;
    }
    local_2c = iVar7;
    Sexy::Graphics::DrawImage(param_1,pIVar23,(TRect *)aIStack_90,(TRect *)&local_38);
  }
  Sexy::Graphics::SetColor(param_1,(Color *)(this + 0x100));
  Sexy::Graphics::SetColorizeImages(param_1,true);
  Sexy::Insets::Insets((Insets *)&local_38,aIStack_b0);
  uVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)
                      ObjectCardSettings::IMAGE_UI_CARDS_BACKGROUNDS_BORDER);
  Draw9SliceImage(param_1,(Insets *)&local_38,uVar13);
  if (this[0xeb] == (PVZ2UIGameObjectCard)0x0) {
LAB_04381de4:
    Sexy::Graphics::SetColor(param_1,local_a0);
    if (*(long *)(this + 0x110) != 0) goto LAB_04381df8;
LAB_04382118:
    cVar4 = FUN_0547419c((string *)(this + 0x140));
    if (cVar4 == '\0') {
      pLVar18 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)
                           ObjectCardSettings::IMAGE_UI_FRAGMENT_PIECES_PACKETS_RARE_0);
      iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
      pSVar24 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)
                           ObjectCardSettings::IMAGE_UI_FRAGMENT_PIECES_PACKETS_RARE_0);
      iVar6 = SalesProgressBar::GetCurrentLevel(pSVar24);
      iVar8 = (int)((float)local_88 * 0.75);
      fVar25 = (float)iVar7;
      iVar9 = (int)((float)local_84 * 0.75);
      if (iVar8 < iVar7) {
        fVar25 = (float)iVar8;
        iVar6 = (int)((fVar25 / (float)iVar7) * (float)iVar6);
        iVar7 = iVar8;
      }
      fVar26 = (float)iVar6;
      if (iVar9 < iVar6) {
        fVar26 = (float)iVar9;
        iVar7 = (int)((fVar26 / (float)iVar6) * fVar25);
        fVar25 = (float)iVar7;
        iVar6 = iVar9;
      }
      iVar8 = *(int *)(this + 0x50);
      iVar6 = (*(int *)(this + 0x54) - iVar6) / 2;
      this_04 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      iVar7 = (iVar8 - iVar7) / 2;
      pRVar20 = (RtWeakPtr *)
                SeedPacketUtils::GetPlantPiecePacketRenderData(this_04,(string *)(this + 0x140));
      iVar8 = *(int *)(pRVar20 + 0x28);
      iVar9 = *(int *)(pRVar20 + 0x2c);
      iVar10 = *(int *)(pRVar20 + 0x18);
      iVar11 = *(int *)(pRVar20 + 0x30);
      iVar12 = *(int *)(pRVar20 + 0x34);
      iVar1 = *(int *)(pRVar20 + 0x1c);
      fVar25 = fVar25 / (float)iVar8;
      iVar2 = *(int *)(pRVar20 + 0x10);
      iVar3 = *(int *)(pRVar20 + 0x14);
      fVar26 = fVar26 / (float)iVar9;
      pRVar21 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar20 + 0x170);
      Sexy::Insets::Insets
                ((Insets *)&local_38,iVar7 + (int)(fVar25 * (float)iVar11),
                 iVar6 + (int)(fVar26 * (float)iVar12),(int)(fVar25 * (float)iVar8),
                 (int)(fVar26 * (float)iVar9));
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar21,(TRect *)&local_38,(TRect *)(pRVar20 + 0x20));
      bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar20);
      if (bVar5) {
        lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar20);
        pRVar21 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar17 + 0x48));
        Sexy::Insets::Insets
                  ((Insets *)&local_38,iVar7 + (int)(fVar25 * (float)iVar10),
                   iVar6 + (int)(fVar26 * (float)iVar1),(int)(fVar25 * (float)iVar2),
                   (int)(fVar26 * (float)iVar3));
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pRVar21,(TRect *)&local_38,(TRect *)(pRVar20 + 8));
      }
    }
    else {
      pIVar23 = *(Image **)(this + 0x128);
      if (pIVar23 != (Image *)0x0) {
        iVar6 = *(int *)(pIVar23 + 0x38);
        iVar7 = *(int *)(pIVar23 + 0x3c);
        iVar9 = (int)((float)local_88 * 0.75);
        iVar8 = (int)((float)local_84 * 0.75);
        if (iVar9 < iVar6) {
          iVar7 = (int)(((float)iVar9 / (float)iVar6) * (float)iVar7);
          iVar6 = iVar9;
        }
        if (iVar8 < iVar7) {
          iVar6 = (int)(((float)iVar8 / (float)iVar7) * (float)iVar6);
          iVar7 = iVar8;
        }
        Sexy::Graphics::DrawImage
                  (param_1,pIVar23,(*(int *)(this + 0x50) - iVar6) / 2,
                   (*(int *)(this + 0x54) - iVar7) / 2,iVar6,iVar7);
      }
    }
  }
  else {
    cVar4 = FUN_054765e8(this + 0xf8);
    if (cVar4 != '\0') goto LAB_04381de4;
    Sexy::Color::Color((Color *)&local_38,1);
    Sexy::Graphics::SetColor(param_1,(Color *)&local_38);
    iVar6 = *(int *)(this + 0x50);
    lVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)
                        ObjectCardSettings::IMAGE_UI_CARDS_PLANT_SUN_COST_BKGD);
    fVar25 = (float)FUN_04377390(0x40000000);
    iVar7 = *(int *)(this + 0x54);
    iVar6 = (int)((float)(iVar6 - *(int *)(lVar17 + 0x38)) - fVar25);
    lVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)
                        ObjectCardSettings::IMAGE_UI_CARDS_PLANT_SUN_COST_BKGD);
    fVar25 = (float)FUN_04377390(0x40000000);
    iVar8 = (int)((float)(iVar7 - *(int *)(lVar17 + 0x3c)) - fVar25);
    pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)
                                  ObjectCardSettings::IMAGE_UI_CARDS_PLANT_SUN_COST_BKGD);
    Sexy::Graphics::DrawImage(param_1,pIVar23,iVar6,iVar8);
    fVar25 = (float)FUN_04377390(0x40c00000);
    iVar7 = (int)((float)iVar6 + fVar25);
    fVar25 = (float)FUN_04377390(0x40000000);
    iVar8 = (int)((float)iVar8 + fVar25);
    iVar9 = (int)((float)(*(int *)(this + 0x54) - iVar8) - fVar25);
    Sexy::Insets::Insets(aIStack_80,iVar7,iVar8,iVar9,iVar9);
    pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)
                                  ObjectCardSettings::IMAGE_UI_CARDS_PLANT_SUN_ICON);
    lVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)
                        ObjectCardSettings::IMAGE_UI_CARDS_PLANT_SUN_ICON);
    iVar6 = *(int *)(lVar17 + 0x38);
    lVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)
                        ObjectCardSettings::IMAGE_UI_CARDS_PLANT_SUN_ICON);
    Sexy::Insets::Insets((Insets *)&local_38,0,0,iVar6,*(int *)(lVar17 + 0x3c));
    Sexy::Graphics::DrawImage(param_1,pIVar23,(TRect *)aIStack_80,(TRect *)&local_38);
    fVar25 = (float)FUN_04377390(0x40000000);
    iVar6 = (int)((float)(iVar7 + iVar9) + fVar25);
    Sexy::Insets::Insets(aIStack_70,iVar6,iVar8,*(int *)(this + 0x50) - iVar6,iVar9);
    uVar13 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_CafeteriaBlack_26_Outline);
    Sexy::Color::Color((Color *)&local_38,1);
    WriteWordInRect(param_1,this + 0xf8,aIStack_70,uVar13,(Insets *)&local_38,3,0);
    Sexy::Graphics::SetColor(param_1,local_a0);
    if (*(long *)(this + 0x110) == 0) goto LAB_04382118;
LAB_04381df8:
    pRVar20 = (RtWeakPtr *)(this + 0xe0);
    if ((*(long *)(this + 0x138) != 0) && (this[0xf0] != (PVZ2UIGameObjectCard)0x0)) {
      lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar20);
      bVar5 = std::operator==((string *)(lVar17 + 8),"sarracenia");
      iVar6 = 0x19;
      if (!bVar5) {
        iVar6 = 0;
      }
      iVar7 = *(int *)(this + 0x50);
      iVar9 = LotteryResultProgressBar::GetCurrentLevel
                        (*(LotteryResultProgressBar **)(this + 0x138));
      iVar10 = FUN_043772fc(7);
      pSVar24 = *(SalesProgressBar **)(this + 0x138);
      iVar8 = *(int *)(this + 0x54);
      iVar11 = SalesProgressBar::GetCurrentLevel(pSVar24);
      iVar12 = FUN_043772fc(0x1e);
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pSVar24,iVar10 + (iVar7 - iVar9) / 2,
                 iVar6 + iVar12 + (iVar8 - iVar11) / 2);
    }
    Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)&local_38,param_1);
    if (this[0xef] != (PVZ2UIGameObjectCard)0x0) {
      Sexy::Graphics::ClearClipRect(param_1);
    }
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_60);
    FUN_04376e8c((float)((*(int *)(this + 0x50) - *(int *)(this + 0x120)) / 2 -
                        *(int *)(this + 0x118)),
                 (float)*(int *)(this + 0x54) * *(float *)(this + 0xf4),auStack_58,auStack_4c);
    bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar20);
    if (bVar5) {
      pRVar19 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar20);
      bVar5 = Sexy::RtObject::IsA<PlantType>(pRVar19);
      if (!bVar5) goto LAB_04381e80;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar20);
      nop();
      lVar17 = PlantType::GetProps(this_02);
      uVar27 = FUN_04377390(*(undefined4 *)(lVar17 + 0x2b0));
      fVar25 = (float)FUN_04377390(*(undefined4 *)(lVar17 + 0x2b4));
      fVar26 = (float)FUN_043772ec(*(undefined4 *)(lVar17 + 0xa0));
      FUN_04376e8c(uVar27,fVar25 - fVar26,auStack_58,auStack_4c);
    }
    else {
LAB_04381e80:
      bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar20);
      if (bVar5) {
        pRVar19 = (RtObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar20)
        ;
        bVar5 = Sexy::RtObject::IsA<ZombieType>(pRVar19);
        if (bVar5) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar20);
          nop();
          lVar17 = ZombieType::GetProps(this_03);
          fVar25 = (float)FUN_043772ec(*(undefined4 *)(lVar17 + 200));
          FUN_04376e8c(0,-fVar25,auStack_58,auStack_4c);
          uVar27 = FUN_043772ec(*(undefined4 *)(lVar17 + 0xcc));
          uVar28 = FUN_043772ec(*(undefined4 *)(lVar17 + 0xd0));
          FUN_04376e8c(uVar27,uVar28,auStack_58,auStack_4c);
          fVar25 = *(float *)(lVar17 + 0xd4);
          if (0.0 < fVar25) {
            Sexy::SexyTransform2D::Scale(aSStack_60,fVar25,fVar25);
          }
        }
      }
    }
    PopAnimRig::SetPAMColor(*(PopAnimRig **)(this + 0x110),local_a0);
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x110),param_1,aSStack_60);
    Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)&local_38);
  }
  pRVar20 = (RtWeakPtr *)(this + 0xe0);
  bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar20);
  if (!bVar5) goto LAB_04381ec4;
  psVar14 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar20);
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar14);
  bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aIStack_70);
  if (bVar5) {
    pPVar15 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar16 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar15);
    lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar20);
    iVar6 = PlayerInfo::GetPlantStarLevel(pPVar16,(string *)(lVar17 + 8),false);
    cVar4 = isExperiencePlant(this);
    if ((cVar4 != '\0') && (*(long *)(gLawnApp + 0x9f0) != 0)) {
      this_01 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
      lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar20);
      NameMapperBase::GetIdForName(this_01,(string *)(lVar17 + 8));
      iVar6 = Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
      TrialCardManager::GetConfigForBestTrialStatus(iVar6);
      iVar6 = local_2c;
      TrialCardConfig::~TrialCardConfig((TrialCardConfig *)&local_38);
    }
    cVar4 = PVZ1ModeUtils::IsPlayingPVZ1Level();
    if (cVar4 != '\0') {
      iVar6 = 1;
    }
    cVar4 = MiniGameCollectionUtils::IsPlayingMiniGameCollectionLevel();
    if ((cVar4 != '\0') &&
       (iVar7 = MiniGameCollectionUtils::GetMiniGameCollectionType(), iVar7 == 0)) {
      iVar6 = 1;
    }
    cVar4 = RiftUtils::IsRiftTimedLevel();
    if (cVar4 != '\0') {
      iVar6 = 1;
    }
    pLVar18 = (LotteryResultProgressBar *)GetLevelImage(iVar6);
    if ((pLVar18 != (LotteryResultProgressBar *)0x0) && (this[0xe9] != (PVZ2UIGameObjectCard)0x0)) {
      fVar25 = 1.5;
      if (this[0xea] == (PVZ2UIGameObjectCard)0x0) {
        fVar25 = 1.8;
      }
      iVar6 = *(int *)(this + 0x50);
      iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
      iVar8 = FUN_043772fc(10);
      fVar26 = (float)FUN_04377390(0x41200000);
      iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
      iVar10 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar18);
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pLVar18,
                 (int)(((float)iVar6 - fVar25 * (float)iVar7) - (float)iVar8),(int)fVar26,
                 (int)((float)iVar9 * fVar25),(int)((float)iVar10 * fVar25));
    }
  }
  else {
    psVar14 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar20);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar14);
    bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_38);
    if (bVar5) {
      pPVar15 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar16 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar15);
      pPVar22 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      cVar4 = PVPManager::IsInPVPMap(pPVar22);
      if (cVar4 == '\0') {
        lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar20);
        iVar6 = PlayerInfo::GetZombieStarLevel(pPVar16,(string *)(lVar17 + 8));
LAB_04382838:
        if (iVar6 == -1) {
          iVar6 = 1;
          cVar4 = '\x01';
        }
        else {
          cVar4 = iVar6 < 6;
        }
      }
      else {
        pPVar22 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar20);
        lVar17 = PVPManager::GetZombieData(pPVar22,(string *)(lVar17 + 8));
        if (lVar17 != 0) {
          iVar6 = *(int *)(lVar17 + 8);
          goto LAB_04382838;
        }
        iVar6 = 1;
      }
      pLVar18 = (LotteryResultProgressBar *)GetLevelImage(iVar6);
      if ((pLVar18 != (LotteryResultProgressBar *)0x0) && (cVar4 != '\0')) {
        iVar6 = *(int *)(this + 0x50);
        iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
        iVar8 = FUN_043772fc(0xc);
        fVar25 = (float)FUN_04377390(0x41400000);
        iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
        iVar10 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar18);
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pLVar18,
                   (int)(((float)iVar6 - (float)iVar7 * 2.5) - (float)iVar8),(int)fVar25,
                   (int)((float)iVar9 * 2.5),(int)((float)iVar10 * 2.5));
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_70);
LAB_04381ec4:
  if (this[0xed] != (PVZ2UIGameObjectCard)0x0) {
    Sexy::Color::Color((Color *)&local_38,1);
    Sexy::Graphics::SetColor(param_1,(Color *)&local_38);
    if (this[0xee] == (PVZ2UIGameObjectCard)0x0) {
      this_00 = ObjectCardSettings::IMAGE_UI_CARDS_LOCK_MEDIUM;
    }
    else {
      this_00 = ObjectCardSettings::IMAGE_UI_LOCK_SMALL;
    }
    pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)this_00);
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_38);
    fVar25 = (float)FUN_04377390(0x41700000);
    local_38 = fVar25;
    fStack_34 = (float)FUN_04377390(0x41700000);
    Sexy::Graphics::DrawImage(param_1,pIVar23,(int)fVar25,(int)fStack_34);
  }
  Sexy::Graphics::SetColorizeImages(param_1,false);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIGameObjectCard::ChangeNextAvatar() */

void __thiscall PVZ2UIGameObjectCard::ChangeNextAvatar(PVZ2UIGameObjectCard *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  long extraout_x0;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar4;
  NameMapperBase *pNVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  PlantAnimRig *this_03;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (extraout_x0 != 0) {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_58);
    local_28[0] = 0xffffffff;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)&local_58,(int *)local_28);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    cVar1 = PlayerInfo::IsPlantAvatarUnLocked(this_02,lVar4 + 8,0,0);
    if (cVar1 != '\0') {
      local_28[0] = 0;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)&local_58,(int *)local_28);
    }
    pNVar5 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    NameMapperBase::GetIdForName(pNVar5,(string *)(lVar4 + 8));
    PlayerInfo::GetUnlockedPlantNewAvatar((int)this_02);
    uVar13 = 0;
    while( true ) {
      uVar9 = local_20;
      uVar6 = FUN_04376ec0(local_20,local_18);
      if (uVar6 <= uVar13) break;
      piVar8 = (int *)FUN_04376ecc(uVar9,uVar13);
      NewAvatar::GetAvatarInfoByAvatarId(*piVar8);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)&local_58,(int *)(lVar4 + 0x10));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      uVar13 = uVar13 + 1;
    }
    iVar2 = -1;
    uVar7 = FUN_04376ec0(local_58,local_50);
    uVar13 = 0;
    uVar6 = 1;
    iVar3 = -1;
    if (uVar7 + 1 != 1) {
      do {
        iVar2 = iVar3;
        piVar8 = (int *)FUN_04376ecc(local_58,uVar13);
        if ((*piVar8 == *(int *)(this + 0x14c)) && (uVar6 < uVar7)) {
          piVar8 = (int *)FUN_04376ecc(local_58,uVar6);
          iVar2 = *piVar8;
        }
        uVar12 = uVar6 + 1;
        uVar13 = uVar6;
        uVar6 = uVar12;
        iVar3 = iVar2;
      } while (uVar12 != uVar7 + 1);
    }
    *(int *)(this + 0x14c) = iVar2;
    if (iVar2 == -1) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      iVar2 = PlayerInfo::GetEquipAvatarID(this_02,(string *)(lVar4 + 8));
      PlayerInfo::UnEquipAvatar(this_02,iVar2);
    }
    else if (iVar2 == 0) {
      pNVar5 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      iVar2 = NameMapperBase::GetIdForName(pNVar5,(string *)(lVar4 + 8));
      PlayerInfo::EquipAvatar(this_02,iVar2);
    }
    else {
      uVar13 = 0;
      iVar3 = -1;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_40);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      NewAvatar::GetListByPlantName((string *)(lVar4 + 8),(vector *)&local_40);
      uVar9 = local_40;
      lVar4 = FUN_04376ed4(local_40,local_38);
      iVar2 = -1;
      if (lVar4 != 0) {
        do {
          iVar3 = iVar2;
          iVar2 = *(int *)(this + 0x14c);
          pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04376ee0(uVar9,uVar13);
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
          if (iVar2 == *(int *)(lVar4 + 0x10)) {
            pNVar5 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
            pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04376ee0(local_40,uVar13);
            lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
            iVar3 = NameMapperBase::GetIdForName(pNVar5,(string *)(lVar4 + 0x20));
          }
          uVar9 = local_40;
          uVar13 = uVar13 + 1;
          uVar6 = FUN_04376ed4(local_40,local_38);
          iVar2 = iVar3;
        } while (uVar13 < uVar6);
      }
      if (iVar3 != -1) {
        PlayerInfo::EquipAvatar(this_02,iVar3);
      }
      std::vector<Sexy::RtWeakPtr<PlantNewAvatar>,std::allocator<Sexy::RtWeakPtr<PlantNewAvatar>>>::
      ~vector((vector<Sexy::RtWeakPtr<PlantNewAvatar>,std::allocator<Sexy::RtWeakPtr<PlantNewAvatar>>>
               *)&local_40);
    }
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    if (cVar1 != '\0') {
      ToolPacketData::GetProps();
      plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      (**(code **)(*plVar11 + 0x48))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)this_00);
    uVar9 = CreateStandalonePlantAnimRig((RtWeakPtr<Sexy::ResourceInfo> *)&local_40,0);
    *(undefined8 *)(this + 0x110) = uVar9;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    nop();
    (**(code **)(*(long *)this_03 + 0x1a0))();
    PlantAnimRig::SetAvatarIndex(this_03,*(int *)(this + 0x14c));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)this_00);
    PlantAnimRig::ShowAvatarLayers(this_03,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    std::pair<void*const,std::vector<int,std::allocator<int>>>::~pair
              ((pair<void*const,std::vector<int,std::allocator<int>>> *)local_28);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_58);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

