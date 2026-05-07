// Class: PlantContent


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantContent::Resize(int, int, int, int) */

void __thiscall
PlantContent::Resize(PlantContent *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  iVar1 = FUN_043924ac(0);
  Sexy::Insets::Insets((Insets *)&local_18,iVar1,iVar1,param_3,param_4);
  plVar3 = *(long **)(this + 0xd8);
  *(undefined8 *)(this + 0xe8) = local_18;
  *(undefined8 *)(this + 0xf0) = uStack_10;
  if (plVar3 != (long *)0x0) {
    uVar2 = FUN_043924ac(0);
    (**(code **)(*plVar3 + 0x198))(plVar3,uVar2,uVar2,param_3,param_4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantContent::~PlantContent() */

void __thiscall PlantContent::~PlantContent(PlantContent *this)

{
  *(undefined ***)this = &PTR_GetClass_0683d4c0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantContent::~PlantContent() */

void __thiscall PlantContent::~PlantContent(PlantContent *this)

{
  ~PlantContent(this);
  AK::FreeHook(this);
  return;
}


/* PlantContent::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall PlantContent::DrawAll(PlantContent *this,ModalFlags *param_1,Graphics *param_2)

{
  RtMixedPtrBase *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar7;
  Image *pIVar8;
  
  this_00 = (RtMixedPtrBase *)(this + 0xe0);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  cVar4 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar4 != '\0') {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar5 = std::operator==((string *)(lVar7 + 0x78),"avatar");
    if (bVar5) {
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar4 = PlayerInfo::GetIsPlantUnlocked(this_02,(string *)(lVar7 + 0x80));
      if (cVar4 == '\0') {
        pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affbe0);
        iVar1 = *(int *)(this + 0x50);
        lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affbe0);
        iVar2 = *(int *)(lVar7 + 0x38);
        iVar6 = FUN_043924ac(0);
        lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affbe0);
        iVar3 = *(int *)(lVar7 + 0x38);
        lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affbe0);
        Sexy::Graphics::DrawImage
                  (param_2,pIVar8,iVar1 - iVar2 / 2,iVar6,iVar3 / 2,*(int *)(lVar7 + 0x3c) / 2);
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantContent::RefreshCurrentData() */

void __thiscall PlantContent::RefreshCurrentData(PlantContent *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  PlantContent PVar2;
  int iVar3;
  long lVar4;
  ProfileMgr *pPVar5;
  PlayerInfo *pPVar6;
  string *psVar7;
  MagentoProductProps *this_01;
  PlantType *this_02;
  undefined4 uVar8;
  float fVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  GachaItemInfo aGStack_20 [4];
  int local_1c;
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  if (0 < *(int *)(lVar4 + 0x90)) {
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    iVar3 = *(int *)(lVar4 + 0x90);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    cVar1 = PlayerInfo::GetIsPlantUnlocked(pPVar6,(string *)(lVar4 + 0x80));
    if (cVar1 != '\0') {
      psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      iVar3 = PlayerInfo::GetPlantStarLevel(pPVar6,(string *)(lVar4 + 0x80),false);
      if (iVar3 < 1) {
        this_02 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        lVar4 = PlantType::GetProps(this_02);
        iVar3 = *(int *)(lVar4 + 0x28);
      }
      GachaItemInfo::GachaItemInfo(aGStack_20);
      this_01 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      MagentoProductProps::GetCurrentLevelPriceData(this_01,iVar3,(LevelUpPriceData *)aGStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      iVar3 = local_1c;
    }
    fVar9 = 1.0;
    if (iVar3 != 0) {
      fVar9 = (float)iVar3;
    }
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    iVar3 = PlayerInfo::GetPlantPieceCount(pPVar6,(string *)(lVar4 + 0x80),false);
    uVar8 = NEON_fminnm((float)iVar3 / fVar9,0x3f800000);
    *(undefined4 *)(this + 0xf8) = uVar8;
  }
  pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PVar2 = (PlantContent)PlayerInfo::GetIsPlantUnlocked(pPVar6,(string *)(lVar4 + 0x80));
  this[0xfd] = PVar2;
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar3 = PlayerInfo::GetPlantPieceCount(pPVar6,(string *)(lVar4 + 0x80),false);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  if (iVar3 < *(int *)(lVar4 + 0x90)) {
    if (this[0xfd] == (PlantContent)0x0) goto LAB_043979fc;
  }
  else if (this[0xfd] == (PlantContent)0x0) {
    this[0xff] = (PlantContent)0x1;
    goto LAB_043979fc;
  }
  PVar2 = (PlantContent)canPlantLevelUp((RtWeakPtr *)this_00,false,true);
  this[0xfe] = PVar2;
LAB_043979fc:
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar3 = PlayerInfo::GetPlantPieceCount(pPVar6,(string *)(lVar4 + 0x80),false);
  PVar2 = (PlantContent)0x0;
  if (iVar3 == 0) {
    PVar2 = this[0xfd];
  }
  this[0x100] = PVar2;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantContent::PlantContent(Sexy::RtWeakPtr<MagentoProductProps>, int, Sexy::ButtonListener*) */

void __thiscall
PlantContent::PlantContent
          (PlantContent *this,RtWeakPtr *param_2,int param_3,ButtonListener *param_4)

{
  undefined *puVar1;
  char cVar2;
  PVZ2UIButton *this_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_01;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 auStack_78 [8];
  wstring awStack_70 [8];
  Color aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  this_01 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe0);
  *(undefined ***)this = &PTR_GetClass_0683d4c0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_01)
  ;
  Sexy::Insets::Insets((Insets *)(this + 0xe8));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this_01,param_2);
  this[0xfc] = (PlantContent)0x0;
  this[0xfd] = (PlantContent)0x0;
  this[0xff] = (PlantContent)0x0;
  this[0xfe] = (PlantContent)0x0;
  this[0x100] = (PlantContent)0x0;
  *(undefined4 *)(this + 0xf8) = 0;
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_01);
  if (cVar2 != '\0') {
    RefreshCurrentData(this);
  }
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onChangePlantSuccess);
  local_a0 = local_50;
  uStack_98 = uStack_48;
  local_90 = local_40;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<PlantContent,void(PlantContent::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::ChangePlantSuccess,&local_a0);
  FUN_05478178(awStack_70,&DAT_056f11a8,auStack_78);
  Sexy::Color::Color(aCStack_68,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(this_00,param_3,param_4,awStack_70,aCStack_68);
  *(PVZ2UIButton **)(this + 0xd8) = this_00;
  FUN_05476c50(awStack_70);
  nop();
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xd8));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,RefreshCurrentData);
  Sexy::Delegate0::Delegate0<PlantContent,void(PlantContent::*)()>(aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::RefreshCardData,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantContent::onChangePlantSuccess(std::string const&) */

void PlantContent::onChangePlantSuccess(string *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  LawnApp *pLVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  wchar16 *pwVar6;
  string *in_x1;
  LineBreakCategory *pLVar7;
  LineBreakCategory *pLVar8;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xe0);
  local_8 = ___stack_chk_guard;
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  bVar2 = std::operator!=(in_x1,(string *)(lVar5 + 0x80));
  if (!bVar2) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    pLVar8 = aLStack_18;
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    PlayerInfo::UnlockPlant(this_01,(string *)(lVar5 + 0x80),bVar2);
    pwVar6 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar7 = pLVar8;
    std::string::string(asStack_10,"AutoTestPlantLevelUp");
    cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar6,(wchar16 *)asStack_10,pLVar7,in_x3,in_x4);
    std::string::~string(asStack_10);
    nop();
    pLVar1 = gLawnApp;
    if (cVar3 == '\0') {
      std::string::string(asStack_10,"");
      in_x3 = (LineBreakCategory *)0x1;
      LawnApp::ShowPlantStarLevelUpAnimUI(pLVar1,1,asStack_10);
      std::string::~string(asStack_10);
      nop();
    }
    param_1[0xff] = (string)0x0;
    RefreshCurrentData((PlantContent *)param_1);
    pwVar6 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"AutoTestPlantLevelUp");
    cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar6,(wchar16 *)asStack_10,pLVar8,in_x3,in_x4);
    std::string::~string(asStack_10);
    nop();
    if (cVar3 != '\0') {
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
    iVar4 = FUN_04391b90(*(undefined4 *)(this_01 + 0x40));
    if (iVar4 == 8) {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      bVar2 = std::operator==((string *)(lVar5 + 0x80),"gravebuster");
      if (bVar2) {
        MessageRouter::Post((_func_void *)gMessageRouter);
        MessageRouter::Post<int,TutorialEvent>
                  ((MessageRouter *)gMessageRouter,Message::TutorialFTUE,0x20);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantContent::Draw(Sexy::Graphics*) */

void __thiscall PlantContent::Draw(PlantContent *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  int iVar1;
  PlantContent PVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  SeedPacketUtils *this_01;
  long lVar9;
  ResourceInfo *pRVar10;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  long lVar11;
  Image *pIVar12;
  SalesProgressBar *pSVar13;
  LotteryResultProgressBar *this_04;
  float fVar14;
  float fVar15;
  int local_48;
  int local_44;
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  this_01 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  lVar9 = SeedPacketUtils::GetPlantPacketRenderData(this_01,(string *)(lVar9 + 0x80),-1,-1,-1);
  this_00 = (RtWeakPtr *)(lVar9 + 0x170);
  iVar3 = FUN_043924ac(10);
  if (this[0xfc] == (PlantContent)0x0) {
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Insets::Insets
              ((Insets *)&local_18,iVar3 + *(int *)(lVar9 + 0x30),iVar3 + *(int *)(lVar9 + 0x34),
               *(int *)(lVar9 + 0x28),*(int *)(lVar9 + 0x2c));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar10,(TRect *)&local_18,(TRect *)(lVar9 + 0x20));
  }
  else {
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar10,iVar3 + *(int *)(lVar9 + 0x78),
               iVar3 + *(int *)(lVar9 + 0x7c),(TRect *)(lVar9 + 0x68));
  }
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  iVar4 = PlayerInfo::GetPlantStarLevel(this_03,(string *)(lVar11 + 0x80),false);
  if (0 < iVar4) {
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Insets::Insets
              ((Insets *)&local_18,iVar3 + *(int *)(lVar9 + 0x150),iVar3 + *(int *)(lVar9 + 0x154),
               *(int *)(lVar9 + 0x148),*(int *)(lVar9 + 0x14c));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar10,(TRect *)&local_18,(TRect *)(lVar9 + 0x140));
  }
  pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar10,iVar3 + *(int *)(lVar9 + 0x18),iVar3 + *(int *)(lVar9 + 0x1c),
             (TRect *)(lVar9 + 8));
  iVar4 = *(int *)(lVar9 + 0x34);
  iVar8 = *(int *)(lVar9 + 0x2c);
  iVar5 = FUN_043924ac(4);
  iVar6 = FUN_043924ac(10);
  iVar1 = *(int *)(lVar9 + 0x28);
  lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00660);
  Sexy::Insets::Insets
            ((Insets *)&local_48,iVar3,iVar3 + iVar4 + iVar8 + iVar5,iVar6 + iVar1,
             *(int *)(lVar11 + 0x3c));
  if (this[0xfd] == (PlantContent)0x0) {
    pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affd28);
    Sexy::Graphics::DrawImage
              (param_1,pIVar12,iVar3 + *(int *)(lVar9 + 0x30),iVar3 + *(int *)(lVar9 + 0x34),
               *(int *)(lVar9 + 0x28),*(int *)(lVar9 + 0x2c));
  }
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b004a8);
  iVar5 = local_48;
  lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00660);
  iVar4 = *(int *)(lVar11 + 0x38);
  iVar7 = FUN_043924ac(5);
  iVar6 = local_40;
  iVar1 = local_44 - iVar7;
  lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00660);
  iVar8 = *(int *)(lVar11 + 0x38);
  lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b004a8);
  Sexy::Graphics::DrawImage
            (param_1,pIVar12,(iVar5 + iVar4) - iVar7,iVar1,iVar6 - iVar8,*(int *)(lVar11 + 0x3c));
  iVar1 = local_48;
  lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00660);
  iVar5 = local_44;
  iVar4 = *(int *)(lVar11 + 0x38);
  iVar6 = FUN_043924ac(2);
  lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00660);
  iVar8 = *(int *)(lVar11 + 0x38);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afffe0);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar13);
  Sexy::Insets::Insets((Insets *)&local_38,iVar1 + iVar4,iVar5 - iVar6,local_40 - iVar8,iVar7);
  if (0.0 <= *(float *)(this + 0xf8)) {
    iVar8 = FUN_043924ac(5);
    lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afffe0);
    fVar14 = *(float *)(this + 0xf8);
    iVar4 = *(int *)(lVar11 + 0x3c);
    lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afffe0);
    Sexy::Insets::Insets
              (aIStack_28,local_38 - iVar8,local_34 + (local_2c - iVar4) / 2,
               (int)((float)local_30 * fVar14),*(int *)(lVar11 + 0x3c));
    lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afffe0);
    iVar4 = *(int *)(lVar11 + 0x38);
    fVar14 = *(float *)(this + 0xf8);
    lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afffe0);
    iVar8 = *(int *)(lVar11 + 0x38);
    fVar15 = *(float *)(this + 0xf8);
    lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afffe0);
    Sexy::Insets::Insets
              ((Insets *)&local_18,(int)((1.0 - fVar14) * (float)iVar4),0,
               (int)((float)iVar8 * fVar15),*(int *)(lVar11 + 0x3c));
    pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afffe0);
    Sexy::Graphics::DrawImage(param_1,pIVar12,(TRect *)aIStack_28,(TRect *)&local_18);
  }
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00660);
  iVar4 = FUN_043924ac(10);
  Sexy::Graphics::DrawImage(param_1,pIVar12,local_48,local_44 - iVar4);
  if (this[0xfc] == (PlantContent)0x0) {
    PVar2 = this[0xfd];
  }
  else {
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar10,iVar3 + *(int *)(lVar9 + 0x138),
               iVar3 + *(int *)(lVar9 + 0x13c),(TRect *)(lVar9 + 0x128));
    PVar2 = this[0xfd];
  }
  if (PVar2 == (PlantContent)0x0) {
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_18);
    iVar3 = *(int *)(this + 0x50);
    this_04 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00438);
    iVar8 = LotteryResultProgressBar::GetCurrentLevel(this_04);
    iVar4 = *(int *)(this + 0x54);
    local_18 = (float)((iVar3 - iVar8) / 2);
    pSVar13 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00438);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar13);
    iVar8 = FUN_043924ac(0x1e);
    local_14 = (float)((iVar4 - iVar3) - iVar8);
    pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00438);
    Sexy::Graphics::DrawImage(param_1,pIVar12,(int)local_18,(int)local_14);
  }
  if (this[0xfe] != (PlantContent)0x0) {
    pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b002d0);
    iVar3 = FUN_043924ac(5);
    Sexy::Graphics::DrawImage(param_1,pIVar12,iVar3,iVar3);
  }
  if (this[0xff] != (PlantContent)0x0) {
    pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affdc8);
    iVar3 = FUN_043924ac(5);
    Sexy::Graphics::DrawImage(param_1,pIVar12,iVar3,iVar3);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantContent::SetSelected(bool) */

void __thiscall PlantContent::SetSelected(PlantContent *this,bool param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  LawnApp *pLVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar6;
  char *__s;
  TGALogMgr *pTVar7;
  NameMapperBase *this_03;
  NetworkMgr *this_04;
  long *plVar8;
  string *__n;
  TGAPlantWarsData aTStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [48];
  string asStack_48 [64];
  long local_8;
  
  this[0xfc] = (PlantContent)param_1;
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  if (this[0xff] != (PlantContent)0x0) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    cVar2 = PlayerInfo::GetIsPlantUnlocked(this_02,(string *)(lVar6 + 0x80));
    if ((cVar2 == '\0') && (this[0xfc] != (PlantContent)0x0)) {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      bVar3 = std::operator==((string *)(lVar6 + 0x80),"gravebuster111");
      if (bVar3) {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        PlayerInfo::UnlockPlant(this_02,(string *)(lVar6 + 0x80),false);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        PlayerInfo::AddPlantStartLevel(this_02,(string *)(lVar6 + 0x80),0);
        pLVar1 = gLawnApp;
        std::string::string(asStack_48,"");
        __n = asStack_48;
        LawnApp::ShowPlantStarLevelUpAnimUI(pLVar1,1,asStack_48,1);
        std::string::~string(asStack_48);
        nop();
        this[0xff] = (PlantContent)0x0;
        RefreshCurrentData(this);
        iVar4 = FUN_04391b90(*(undefined4 *)(this_02 + 0x40));
        if (iVar4 == 8) {
          MessageRouter::Post((_func_void *)gMessageRouter);
          __n = (string *)0x20;
          MessageRouter::Post<int,TutorialEvent>
                    ((MessageRouter *)gMessageRouter,Message::TutorialFTUE);
        }
      }
      else {
        this_03 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        uVar5 = NameMapperBase::GetIdForName(this_03,(string *)(lVar6 + 0x80));
        this_04 = (NetworkMgr *)NetworkMgr::Instance();
        plVar8 = (long *)NetworkMgr::GetNewNetWorkProcess(this_04);
        __n = *(string **)(*plVar8 + 0x458);
        (*(code *)__n)(plVar8,uVar5);
      }
      TGAPlantWarsData::TGAPlantWarsData(aTStack_88);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      thunk_FUN_05475e00(aTStack_88,lVar6 + 0x80);
      std::string::append(asStack_80,"1",(size_t)__n);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      DString::DString((DString *)asStack_48,*(int *)(lVar6 + 0x90));
      __s = (char *)DString::c_str((DString *)asStack_48);
      std::string::append(asStack_78,__s,(size_t)__n);
      DString::~DString((DString *)asStack_48);
      pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogPurchaseData::TGALogPurchaseData
                ((TGALogPurchaseData *)asStack_48,(TGALogPurchaseData *)aTStack_88);
      TGALogMgr::LogPlantLevelup(pTVar7,2,(DString *)asStack_48);
      TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)asStack_48);
      TGAPlantWarsData::~TGAPlantWarsData(aTStack_88);
      iVar4 = FUN_04391b90(*(undefined4 *)(this_02 + 0x40));
      goto joined_r0x0439e990;
    }
  }
  iVar4 = FUN_04391b90(*(undefined4 *)(this_02 + 0x40));
joined_r0x0439e990:
  if (iVar4 == 0x1d) {
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

