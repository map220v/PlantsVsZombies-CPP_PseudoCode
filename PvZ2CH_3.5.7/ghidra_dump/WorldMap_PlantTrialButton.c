// Class: WorldMap_PlantTrialButton


/* WorldMap_PlantTrialButton::SetButtonData(std::string&) */

void WorldMap_PlantTrialButton::SetButtonData(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x1d0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantTrialButton::StaticClassInit() */

void WorldMap_PlantTrialButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_PlantTrialButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0496af70,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PlantTrialButton::StaticGetClass() */

long * WorldMap_PlantTrialButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_PlantTrialButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PlantTrialButton::GetClass() const */

long * WorldMap_PlantTrialButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_PlantTrialButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PlantTrialButton::~WorldMap_PlantTrialButton() */

void __thiscall
WorldMap_PlantTrialButton::~WorldMap_PlantTrialButton(WorldMap_PlantTrialButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06916460;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PlantTrialButton_06916608;
  std::string::~string((string *)(this + 0x1d0));
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_PlantTrialButton::~WorldMap_PlantTrialButton() */

void __thiscall
WorldMap_PlantTrialButton::~WorldMap_PlantTrialButton(WorldMap_PlantTrialButton *this)

{
  ~WorldMap_PlantTrialButton(this + -0x10);
  return;
}


/* WorldMap_PlantTrialButton::~WorldMap_PlantTrialButton() */

void __thiscall
WorldMap_PlantTrialButton::~WorldMap_PlantTrialButton(WorldMap_PlantTrialButton *this)

{
  ~WorldMap_PlantTrialButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_PlantTrialButton::~WorldMap_PlantTrialButton() */

void __thiscall
WorldMap_PlantTrialButton::~WorldMap_PlantTrialButton(WorldMap_PlantTrialButton *this)

{
  ~WorldMap_PlantTrialButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantTrialButton::WorldMap_PlantTrialButton() */

void __thiscall
WorldMap_PlantTrialButton::WorldMap_PlantTrialButton(WorldMap_PlantTrialButton *this)

{
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06916460;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PlantTrialButton_06916608;
  Set8BytesTo0(this + 0x1d0);
  std::string::string(asStack_30,"IMAGE_UI_HUD_WORLDMAP_BIG_ICON_PLANTTRIAL");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"Play_UI_Map_Select_Universe_Press");
  DEditorNode::setRootName((string *)this);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"Play_UI_Map_Select_Universe_Release");
  UIEasyButtonWidget::SetSoundReleased((string *)this);
  std::string::~string(asStack_30);
  nop();
  FUN_0496adcc(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PlantTrialButton::StaticNew() */

WorldMap_PlantTrialButton * WorldMap_PlantTrialButton::StaticNew(void)

{
  WorldMap_PlantTrialButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_PlantTrialButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantTrialButton::DoPressPlantTrialButton() */

void __thiscall WorldMap_PlantTrialButton::DoPressPlantTrialButton(WorldMap_PlantTrialButton *this)

{
  undefined *puVar1;
  PlantTrialConfig *this_00;
  TrialData *pTVar2;
  GachaConfig *this_01;
  long lVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlantTrialConfig *)LawnApp::GetPlantTrialConfig(gLawnApp);
  FUN_05475d88(asStack_10,this + 0x1d0);
  pTVar2 = (TrialData *)PlantTrialConfig::GetTrialDataByPlantName(this_00,asStack_10);
  PlantTrialConfig::SetTrialDataCache(this_00,pTVar2);
  std::string::~string(asStack_10);
  GameStateMgr::ShowPlantTrial(gGameStateMgr,5,5);
  this_01 = (GachaConfig *)LawnApp::GetPlantTrialConfig(gLawnApp);
  lVar3 = GachaConfig::GetGachaPlantRewardList(this_01);
  FUN_05475d88(asStack_18,lVar3 + 8);
  puVar1 = gMessageRouter;
  FUN_05475d88(asStack_10,asStack_18);
  MessageRouter::Post<int,std::string_const&,int,std::string>
            ((MessageRouter *)puVar1,Message::PlantTrialBuy,3,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantTrialButton::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_PlantTrialButton::Draw(WorldMap_PlantTrialButton *this,Graphics *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar7;
  time_t tVar8;
  wchar_t *pwVar9;
  vector *pvVar10;
  string *psVar11;
  PlantTrialConfig *pPVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  GraphicsAutoState aGStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  Color aCStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::Draw((UIEasyButtonWidget *)this,param_1);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_48,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    lVar7 = PlayerInfo::GetPlantTrialObjInfo(this_01,(string *)(this + 0x1d0));
    if (lVar7 != 0) {
      uVar14 = *(undefined8 *)(lVar7 + 8);
      tVar8 = time((time_t *)0x0);
      iVar3 = (int)uVar14 - (int)tVar8;
      if (iVar3 < 0) {
        lVar16 = 0;
        PlayerInfo::RemovePlantTrialObj(this_01,(string *)(this + 0x1d0));
        lVar7 = 0;
        pvVar10 = (vector *)PlayerInfo::GetPlantTrialRecord(this_01);
        std::vector<PlantTrialCD,std::allocator<PlantTrialCD>>::vector
                  ((vector<PlantTrialCD,std::allocator<PlantTrialCD>> *)aCStack_20,pvVar10);
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)aCStack_20);
        local_38 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aCStack_20);
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
              bVar1) {
          psVar11 = (string *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
          pPVar12 = (PlantTrialConfig *)LawnApp::GetPlantTrialConfig(gLawnApp);
          FUN_05475d88((string *)aIStack_30,psVar11);
          lVar13 = PlantTrialConfig::GetTrialDataByPlantName(pPVar12,(string *)aIStack_30);
          std::string::~string((string *)aIStack_30);
          lVar15 = *(long *)(psVar11 + 8);
          tVar8 = time((time_t *)0x0);
          lVar15 = lVar15 - tVar8;
          if (((lVar15 < 1) || (lVar13 == 0)) ||
             ((cVar2 = PlayerInfo::GetIsPlantUnlocked(this_01,psVar11), cVar2 != '\0' &&
              (iVar3 = PlayerInfo::GetPlantStarLevel(this_01,psVar11,false),
              *(int *)(lVar13 + 0x48) <= iVar3)))) {
            PlayerInfo::RemovePlantTrialObj(this_01,psVar11);
          }
          else if ((lVar15 < lVar16) || (lVar7 == 0)) {
            lVar7 = lVar13;
            lVar16 = lVar15;
          }
          std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                    ((move_iterator<Sexy::CharDataHashEntry*> *)&local_40);
        }
        if (lVar7 == 0) {
          (**(code **)(*(long *)this + 0x48))(this);
        }
        else {
          SetButtonData((string *)this);
        }
        std::vector<PlantTrialCD,std::allocator<PlantTrialCD>>::~vector
                  ((vector<PlantTrialCD,std::allocator<PlantTrialCD>> *)aCStack_20);
      }
      else {
        TodStringTranslate(L"%d:%d:%d");
        pwVar9 = (wchar_t *)FUN_054766ec(aCStack_20);
        Sexy::StrFormat(pwVar9,&local_38,(ulong)(uint)(iVar3 / 0xe10),
                        (ulong)(uint)((iVar3 % 0xe10) / 0x3c),(ulong)(uint)(iVar3 % 0x3c));
        FUN_05476c50(aCStack_20);
        iVar3 = FUN_0496ae28(0);
        iVar4 = FUN_0496ae28(0x41);
        iVar5 = FUN_0496ae28(100);
        iVar6 = FUN_0496ae28(0x50);
        Sexy::Insets::Insets(aIStack_30,iVar3,iVar4,iVar5,iVar6);
        uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
        Sexy::Color::Color(aCStack_20,2);
        WriteWordInRect(param_1,&local_38,aIStack_30,uVar14,aCStack_20,5,1);
        FUN_05476c50(&local_38);
      }
    }
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_48);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to WorldMap_PlantTrialButton::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_PlantTrialButton::Draw(WorldMap_PlantTrialButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

