// Class: WorldMap_PlantLevelUpButton


/* WorldMap_PlantLevelUpButton::OnKillChooseDialog(UIWidget*) */

void __thiscall
WorldMap_PlantLevelUpButton::OnKillChooseDialog(WorldMap_PlantLevelUpButton *this,UIWidget *param_1)

{
  LawnApp *this_00;
  char cVar1;
  
  this_00 = gLawnApp;
  if (this != (WorldMap_PlantLevelUpButton *)param_1) {
    cVar1 = LawnApp::IsChoosePlantsDialogValid(gLawnApp);
    if (cVar1 != '\0') {
      LawnApp::KillChoosePlantsDialog(this_00);
      MessageRouter::Post((_func_void *)gMessageRouter);
      FUN_04577dbc(this + 0x1a8,0);
      return;
    }
  }
  return;
}


/* WorldMap_PlantLevelUpButton::KillChooseDialog() */

void __thiscall WorldMap_PlantLevelUpButton::KillChooseDialog(WorldMap_PlantLevelUpButton *this)

{
  LawnApp *this_00;
  char cVar1;
  
  this_00 = gLawnApp;
  cVar1 = LawnApp::IsChoosePlantsDialogValid(gLawnApp);
  if (cVar1 == '\0') {
    return;
  }
  LawnApp::KillChoosePlantsDialog(this_00);
  MessageRouter::Post((_func_void *)gMessageRouter);
  FUN_04577dbc(this + 0x1a8,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantLevelUpButton::onLoadComplete() */

void WorldMap_PlantLevelUpButton::onLoadComplete(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  UIWidget *in_x0;
  SexyVector2 *this;
  wchar16 *in_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined4 uVar4;
  float fVar5;
  FastCurve aFStack_10 [8];
  wchar16 *local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (___stack_chk_guard,in_x1,in_x2,in_x3,in_x4);
  if (cVar1 != '\0') {
    this = (SexyVector2 *)UIWidget::GetPositionOffset(in_x0);
    iVar2 = FUN_0457809c(0xf);
    iVar3 = FUN_0457809c(0xffffffec);
    fVar5 = (float)iVar3;
    Sexy::FastCurve::SetOutRange(aFStack_10,(float)iVar2,fVar5);
    uVar4 = Sexy::SexyVector2::operator+(this,(SexyVector2 *)aFStack_10);
    UIWidget::SetPositionOffset(uVar4,fVar5);
    iVar2 = FUN_04577da4(*(undefined4 *)(in_x0 + 0x38));
    iVar3 = FUN_04577db0(*(undefined4 *)(in_x0 + 0x3c));
    FUN_04577da8(in_x0 + 0x38,(int)((float)iVar2 * 0.8));
    FUN_04577db4(in_x0 + 0x3c,(int)((float)iVar3 * 0.8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantLevelUpButton::StaticClassInit() */

void WorldMap_PlantLevelUpButton::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"WorldMap_PlantLevelUpButton");
    (*pcVar2)(plVar1,asStack_10,FUN_045783e8,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PlantLevelUpButton::StaticGetClass() */

long * WorldMap_PlantLevelUpButton::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_PlantLevelUpButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PlantLevelUpButton::GetClass() const */

long * WorldMap_PlantLevelUpButton::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_PlantLevelUpButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PlantLevelUpButton::~WorldMap_PlantLevelUpButton() */

void __thiscall
WorldMap_PlantLevelUpButton::~WorldMap_PlantLevelUpButton(WorldMap_PlantLevelUpButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0685f950;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PlantLevelUpButton_0685faf8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_PlantLevelUpButton::~WorldMap_PlantLevelUpButton() */

void __thiscall
WorldMap_PlantLevelUpButton::~WorldMap_PlantLevelUpButton(WorldMap_PlantLevelUpButton *this)

{
  ~WorldMap_PlantLevelUpButton(this + -0x10);
  return;
}


/* WorldMap_PlantLevelUpButton::~WorldMap_PlantLevelUpButton() */

void __thiscall
WorldMap_PlantLevelUpButton::~WorldMap_PlantLevelUpButton(WorldMap_PlantLevelUpButton *this)

{
  ~WorldMap_PlantLevelUpButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_PlantLevelUpButton::~WorldMap_PlantLevelUpButton() */

void __thiscall
WorldMap_PlantLevelUpButton::~WorldMap_PlantLevelUpButton(WorldMap_PlantLevelUpButton *this)

{
  ~WorldMap_PlantLevelUpButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantLevelUpButton::ShowTheNoticeAboutAvatar() */

void WorldMap_PlantLevelUpButton::ShowTheNoticeAboutAvatar(void)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  ProfileMgr *this;
  PlayerInfo *pPVar4;
  long lVar5;
  ulong uVar6;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  string *extraout_x1;
  ulong uVar7;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  uVar7 = 0;
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  std::string::string(asStack_10,"Avatars");
  Magento::GetStore((Magento *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    while( true ) {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      uVar6 = FUN_04577dcc(*(undefined8 *)(lVar5 + 0x60),*(undefined8 *)(lVar5 + 0x68));
      if (uVar6 <= uVar7) break;
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04577dd8(*(undefined8 *)(lVar5 + 0x60),uVar7);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      FUN_05475d88(asStack_10,lVar5 + 0x80);
      cVar2 = PlayerInfo::IsPlantAvatarPiecesFull(pPVar4,asStack_10,0,0);
      if ((cVar2 != '\0') &&
         (cVar3 = PlayerInfo::IsPlantAvatarUnLocked(pPVar4,asStack_10,0,0), cVar3 == '\0')) {
        std::string::~string(asStack_10);
        goto LAB_045786a0;
      }
      uVar7 = uVar7 + 1;
      std::string::~string(asStack_10);
    }
  }
  cVar2 = '\0';
LAB_045786a0:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WorldMap_PlantLevelUpButton::OnTouch() */

void __thiscall WorldMap_PlantLevelUpButton::OnTouch(WorldMap_PlantLevelUpButton *this)

{
  LawnApp *pLVar1;
  char cVar2;
  GameMaskUI *this_00;
  
  pLVar1 = gLawnApp;
  cVar2 = LawnApp::IsChoosePlantsDialogValid(gLawnApp);
  if (cVar2 != '\0') {
    LawnApp::KillChoosePlantsDialog(pLVar1);
    MessageRouter::Post((_func_void *)gMessageRouter);
    FUN_04577dbc(this + 0x1a8,0);
    return;
  }
  MessageRouter::Post<UIWidget*,WorldMap_PlantLevelUpButton*>
            ((MessageRouter *)gMessageRouter,Message::KillChooseDialog,this);
  LawnApp::ShowChoosePlantsDialog(gLawnApp);
  FUN_04577dbc(this + 0x1a8,1);
  MessageRouter::Post((_func_void *)gMessageRouter);
  pLVar1 = gLawnApp;
  this[0x1d0] = (WorldMap_PlantLevelUpButton)0x1;
  this_00 = (GameMaskUI *)LawnApp::GetGameMaskUI(pLVar1);
  if (this_00 != (GameMaskUI *)0x0) {
    GameMaskUI::SetToFront(this_00);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantLevelUpButton::ShowTheNoticeAboutPlantLevelUp() */

void WorldMap_PlantLevelUpButton::ShowTheNoticeAboutPlantLevelUp(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ProfileMgr *this;
  Magento *this_00;
  string *psVar5;
  MagentoProductProps *this_01;
  long lVar6;
  ulong uVar7;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar8;
  PlantType *pPVar9;
  NameMapperBase *this_02;
  ulong uVar10;
  undefined1 uVar11;
  RtWeakPtr aRStack_40 [8];
  string asStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  GachaItemInfo aGStack_20 [4];
  int local_1c;
  int local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar10 = 0;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (Magento *)ProfileMgr::GetCurrentProfile(this);
  Magento::GetPlantLevelUp(this_00);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_40);
  if (bVar1) {
    while( true ) {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      uVar7 = FUN_04577dcc(*(undefined8 *)(lVar6 + 0x60),*(undefined8 *)(lVar6 + 0x68));
      if (uVar7 <= uVar10) break;
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04577dd8(*(undefined8 *)(lVar6 + 0x60),uVar10);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
      FUN_05475d88(asStack_38,lVar6 + 0x80);
      cVar2 = PlayerInfo::GetIsPlantUnlocked((PlayerInfo *)this_00,asStack_38);
      uVar11 = 1;
      if (cVar2 == '\0') {
        iVar4 = PlayerInfo::GetPlantPieceCount((PlayerInfo *)this_00,asStack_38,false);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04577dd8(*(undefined8 *)(lVar6 + 0x60),uVar10)
        ;
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
        if (*(int *)(lVar6 + 0x90) <= iVar4) {
          std::string::~string(asStack_38);
          goto LAB_04578c88;
        }
      }
      cVar2 = PlayerInfo::GetIsPlantUnlocked((PlayerInfo *)this_00,asStack_38);
      if (cVar2 != '\0') {
        psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
        iVar4 = PlayerInfo::GetPlantStarLevel((PlayerInfo *)this_00,asStack_38,false);
        if (iVar4 < 1) {
          pPVar9 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
          lVar6 = PlantType::GetProps(pPVar9);
          iVar4 = *(int *)(lVar6 + 0x28);
        }
        GachaItemInfo::GachaItemInfo(aGStack_20);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04577dd8(*(undefined8 *)(lVar6 + 0x60),uVar10)
        ;
        this_01 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
        MagentoProductProps::GetCurrentLevelPriceData(this_01,iVar4,(LevelUpPriceData *)aGStack_20);
        iVar3 = PlayerInfo::GetPlantPieceCount((PlayerInfo *)this_00,asStack_38,false);
        if (local_1c <= iVar3) {
          pPVar9 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
          lVar6 = PlantType::GetProps(pPVar9);
          if (iVar4 < *(int *)(lVar6 + 0x2c)) {
            if (0 < local_18) {
              this_02 = (NameMapperBase *)MaterialItemMapper::GetInstance();
              lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
              GetMaterialNameByPlantRare(*(int *)(lVar6 + 0xd0));
              iVar4 = NameMapperBase::GetIdForName(this_02,asStack_28);
              std::string::~string(asStack_28);
              iVar4 = PlayerInfo::GetMaterialNum((PlayerInfo *)this_00,iVar4);
              if (iVar4 < local_18) goto LAB_04578b3c;
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
            std::string::~string(asStack_38);
            goto LAB_04578c88;
          }
        }
LAB_04578b3c:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      }
      uVar10 = uVar10 + 1;
      std::string::~string(asStack_38);
    }
  }
  uVar11 = 0;
LAB_04578c88:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantLevelUpButton::updateNotice() */

void __thiscall WorldMap_PlantLevelUpButton::updateNotice(WorldMap_PlantLevelUpButton *this)

{
  char cVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = ShowTheNoticeAboutAvatar();
  if ((cVar1 == '\0') && (cVar1 = ShowTheNoticeAboutPlantLevelUp(), cVar1 == '\0')) {
    UIEasyButtonWidget::RemoveNotice((UIEasyButtonWidget *)this);
  }
  else {
    std::string::string(asStack_10,"IMAGE_UI_HUD_WORLDMAP_NOTICE_ICON");
    UIEasyButtonWidget::AddNotice((UIEasyButtonWidget *)this,asStack_10,-0.1,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantLevelUpButton::WorldMap_PlantLevelUpButton() */

void __thiscall
WorldMap_PlantLevelUpButton::WorldMap_PlantLevelUpButton(WorldMap_PlantLevelUpButton *this)

{
  undefined *puVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  function<bool(Sexy::Touch_const&)> afStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0685f950;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PlantLevelUpButton_0685faf8;
  std::string::string((string *)&local_50,"IMAGE_UI_HUD_WORLDMAP_BIG_ICON_PLANT");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  std::string::string((string *)&local_50,"Play_UI_Map_Select_Universe_Press");
  DEditorNode::setRootName((string *)this);
  std::string::~string((string *)&local_50);
  nop();
  std::string::string((string *)&local_50,"Play_UI_Map_Select_Universe_Release");
  UIEasyButtonWidget::SetSoundReleased((string *)this);
  std::string::~string((string *)&local_50);
  nop();
  FUN_04578040(afStack_38,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_38);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  this[0x1d0] = (WorldMap_PlantLevelUpButton)0x0;
  updateNotice(this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,KillChooseDialog);
  Sexy::Delegate0::Delegate0<WorldMap_PlantLevelUpButton,void(WorldMap_PlantLevelUpButton::*)()>
            ((Delegate0 *)afStack_38,(string *)&local_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::CheckValidChooseDialog,(Delegate0 *)afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnKillChooseDialog);
  local_80 = local_50;
  uStack_78 = uStack_48;
  local_70 = local_40;
  MessageRouter::
  Subscribe<UIWidget*,Sexy::CBMemberTranslatorX<WorldMap_PlantLevelUpButton,void(WorldMap_PlantLevelUpButton::*)(UIWidget*)>>
            ((MessageRouter *)puVar1,Message::KillChooseDialog,&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PlantLevelUpButton::StaticNew() */

WorldMap_PlantLevelUpButton * WorldMap_PlantLevelUpButton::StaticNew(void)

{
  WorldMap_PlantLevelUpButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_PlantLevelUpButton(this);
  return this;
}

