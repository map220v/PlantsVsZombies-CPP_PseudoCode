// Class: WorldTaskWidget


/* WorldTaskWidget::~WorldTaskWidget() */

void __thiscall WorldTaskWidget::~WorldTaskWidget(WorldTaskWidget *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_066f4b00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066f4e60;
  TaskWidget::~TaskWidget((TaskWidget *)this);
  return;
}


/* WorldTaskWidget::~WorldTaskWidget() */

void __thiscall WorldTaskWidget::~WorldTaskWidget(WorldTaskWidget *this)

{
  ~WorldTaskWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldTaskWidget::StaticClassInit() */

void WorldTaskWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldTaskWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_039ddcf0,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldTaskWidget::StaticGetClass() */

long * WorldTaskWidget::StaticGetClass(void)

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
  uVar2 = TaskWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldTaskWidget::WorldTaskWidget() */

void __thiscall WorldTaskWidget::WorldTaskWidget(WorldTaskWidget *this)

{
  TaskWidget::TaskWidget((TaskWidget *)this);
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined ***)this = &PTR_GetWidgetClass_066f4b00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066f4e60;
  return;
}


/* WorldTaskWidget::StaticNew() */

WorldTaskWidget * WorldTaskWidget::StaticNew(void)

{
  WorldTaskWidget *this;
  
  this = ::operator_new(0x1a8);
  WorldTaskWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldTaskWidget::Init() */

void __thiscall WorldTaskWidget::Init(WorldTaskWidget *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  PVZ2UIButton *pPVar6;
  long *plVar7;
  code *pcVar8;
  Insets aIStack_88 [16];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TaskWidget::Init((TaskWidget *)this);
  iVar1 = FUN_039dd168(0x1ea);
  iVar2 = FUN_039dd168(0x50);
  iVar3 = FUN_039dd168(100);
  iVar4 = FUN_039dd168(0x32);
  Sexy::Insets::Insets(aIStack_88,iVar1,iVar2,iVar3,iVar4);
  pPVar6 = *(PVZ2UIButton **)(this + 0x1a0);
  if (pPVar6 == (PVZ2UIButton *)0x0) {
    TodStringTranslate(L"[GEM_OFFER_GOTO]");
    Sexy::Color::Color((Color *)aPStack_40,1);
    pPVar6 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar6,0x5a,(ButtonListener *)(this + 0xd8),(wstring *)aPStack_78,(Color *)aPStack_40
              );
    *(PVZ2UIButton **)(this + 0x1a0) = pPVar6;
    FUN_05476c50(aPStack_78);
    pPVar6 = *(PVZ2UIButton **)(this + 0x1a0);
    if (pPVar6 == (PVZ2UIButton *)0x0) goto LAB_039de824;
  }
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06ac1968,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06ac1ab0,3);
  PVZ2UIButton::SetDialogStates(pPVar6,aPStack_78,aPStack_40);
  (**(code **)(**(long **)(this + 0x1a0) + 0x1a0))(*(long **)(this + 0x1a0),aIStack_88);
  plVar7 = *(long **)(this + 0x1a0);
  pcVar8 = *(code **)(*plVar7 + 800);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar8)(plVar7,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1a0));
LAB_039de824:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldTaskWidget::ButtonDepress(int) */

void __thiscall WorldTaskWidget::ButtonDepress(WorldTaskWidget *this,int param_1)

{
  bool bVar1;
  char cVar2;
  ProfileMgr *this_00;
  string *psVar3;
  RtObject *this_01;
  TravelLogWorldTaskData *pTVar4;
  long lVar5;
  UIMessageBox *pUVar6;
  Image *pIVar7;
  char *pcVar8;
  TGALogMgr *pTVar9;
  UniverseMap *pUVar10;
  string *__n;
  string asStack_88 [8];
  string asStack_80 [8];
  wstring awStack_78 [8];
  wstring awStack_70 [8];
  TGASecretStore aTStack_68 [8];
  string asStack_60 [24];
  undefined1 auStack_48 [16];
  string asStack_38 [48];
  long local_8;
  
  __n = *(string **)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  if (((__n != (string *)0x0) && (*(int *)(__n + 0x14) != 2)) && (param_1 == 0x5a)) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    psVar3 = (string *)ProfileMgr::GetCurrentProfile(this_00);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0xe0) + 0x20));
    if (bVar1) {
      this_01 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe0) + 0x20));
      pTVar4 = Sexy::RtObject::Cast<TravelLogWorldTaskData>(this_01);
      if (pTVar4 != (TravelLogWorldTaskData *)0x0) {
        cVar2 = WorldMapUtils::UniverseIsOpen();
        if (cVar2 == '\0') {
          pUVar6 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
          if (pUVar6 != (UIMessageBox *)0x0) {
            UIMessageBox::SetShowType(pUVar6,4);
            __n = asStack_80;
            TodStringTranslate(L"[HINT_DEFAULT_TITLE]");
            TodStringTranslate(L"[DO_NOT_NEED_TO_JUMP]");
            TodStringTranslate(L"[BUTTON_OK]");
            UIMessageBox::SetMessage(pUVar6,awStack_70,awStack_78);
            std::string::string(asStack_38,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
            pIVar7 = (Image *)StringHelper::ToImage(asStack_38,false);
            UIMessageBox::SetBackground(pUVar6,pIVar7);
            std::string::~string(asStack_38);
            nop();
            lVar5 = UIMessageBox::GetButtonCancel(pUVar6);
            thunk_FUN_05477b9c(lVar5 + 0xd8,aTStack_68);
            FUN_05476c50(aTStack_68);
            FUN_05476c50(awStack_70);
            FUN_05476c50(awStack_78);
          }
        }
        else {
          __n = asStack_38;
          std::string::string(asStack_80,"");
          nop();
          lVar5 = LawnApp::GetWorldMap(gLawnApp);
          if ((lVar5 != 0) && (lVar5 = FUN_039dcbdc(*(undefined8 *)(lVar5 + 0x2f0)), lVar5 != 0)) {
            thunk_FUN_05475e00(asStack_80,lVar5 + 0x38);
          }
          cVar2 = std::operator==(asStack_80,(string *)(pTVar4 + 0x48));
          if (cVar2 == '\0') {
            PlayerInfo::SetLastWorldName(psVar3);
            lVar5 = LawnApp::GetWorldMap(gLawnApp);
            pUVar10 = (UniverseMap *)FUN_039dcbe0(*(undefined8 *)(lVar5 + 0x2b0));
            UniverseMap::TransitionToUniverse(pUVar10,false);
            lVar5 = LawnApp::GetWorldMap(gLawnApp);
            pUVar10 = (UniverseMap *)FUN_039dcbe0(*(undefined8 *)(lVar5 + 0x2b0));
            FUN_05475d88(asStack_38,(string *)(pTVar4 + 0x48));
            UniverseMap::TransToWorldByName(pUVar10,asStack_38);
            std::string::~string(asStack_38);
            lVar5 = LawnApp::GetWorldMap(gLawnApp);
            pUVar10 = (UniverseMap *)FUN_039dcbe0(*(undefined8 *)(lVar5 + 0x2b0));
            UniverseMap::ShowWorlds(pUVar10);
            UISingletonDialog<UITravelLog>::CloseDialog();
          }
          else {
            pUVar6 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
            if (pUVar6 != (UIMessageBox *)0x0) {
              UIMessageBox::SetShowType(pUVar6,4);
              __n = asStack_88;
              TodStringTranslate(L"[HINT_DEFAULT_TITLE]");
              TodStringTranslate(L"[DO_NOT_NEED_TO_JUMP]");
              TodStringTranslate(L"[BUTTON_OK]");
              UIMessageBox::SetMessage(pUVar6,awStack_70,awStack_78);
              std::string::string(asStack_38,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
              pIVar7 = (Image *)StringHelper::ToImage(asStack_38,false);
              UIMessageBox::SetBackground(pUVar6,pIVar7);
              std::string::~string(asStack_38);
              nop();
              lVar5 = UIMessageBox::GetButtonCancel(pUVar6);
              thunk_FUN_05477b9c(lVar5 + 0xd8,aTStack_68);
              FUN_05476c50(aTStack_68);
              FUN_05476c50(awStack_70);
              FUN_05476c50(awStack_78);
            }
          }
          std::string::~string(asStack_80);
        }
        TGASecretStore::TGASecretStore(aTStack_68);
        DString::DString((DString *)asStack_38,*(int *)(*(long *)(this + 0xe0) + 0xc));
        pcVar8 = (char *)DString::c_str((DString *)asStack_38);
        std::string::append((string *)aTStack_68,pcVar8,(size_t)__n);
        DString::~DString((DString *)asStack_38);
        DString::DString((DString *)asStack_38,*(int *)(*(long *)(this + 0xe0) + 8));
        pcVar8 = (char *)DString::c_str((DString *)asStack_38);
        std::string::append(asStack_60,pcVar8,(size_t)__n);
        DString::~DString((DString *)asStack_38);
        thunk_FUN_05475e00(auStack_48,pTVar4 + 0x48);
        pTVar9 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGASecretStore::TGASecretStore((TGASecretStore *)asStack_38,aTStack_68);
        TGALogMgr::LogTravelLog(pTVar9,4,(DString *)asStack_38);
        DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_38);
        DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_68);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to WorldTaskWidget::ButtonDepress(int) */

void __thiscall WorldTaskWidget::ButtonDepress(WorldTaskWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

