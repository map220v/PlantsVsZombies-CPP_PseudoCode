// Class: PlantWarsBoardZombieDetails


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsBoardZombieDetails::Draw(Sexy::Graphics*) */

void __thiscall
PlantWarsBoardZombieDetails::Draw(PlantWarsBoardZombieDetails *this,Graphics *param_1)

{
  char cVar1;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::Draw((UIEasyButtonWidget *)this,param_1);
  cVar1 = UIWidget::IsVisible((UIWidget *)this);
  if (cVar1 != '\0') {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
    UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PlantWarsBoardZombieDetails::Draw(Sexy::Graphics*) */

void __thiscall
PlantWarsBoardZombieDetails::Draw(PlantWarsBoardZombieDetails *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsBoardZombieDetails::StaticClassInit() */

void PlantWarsBoardZombieDetails::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWarsBoardZombieDetails");
    (*pcVar2)(plVar1,asStack_10,FUN_04da04bc,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsBoardZombieDetails::StaticGetClass() */

long * PlantWarsBoardZombieDetails::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantWarsBoardZombieDetails",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsBoardZombieDetails::GetClass() const */

long * PlantWarsBoardZombieDetails::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantWarsBoardZombieDetails",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsBoardZombieDetails::~PlantWarsBoardZombieDetails() */

void __thiscall
PlantWarsBoardZombieDetails::~PlantWarsBoardZombieDetails(PlantWarsBoardZombieDetails *this)

{
  *(undefined ***)this = &PTR_GetClass_069bd8d0;
  *(undefined ***)(this + 0x10) = &PTR__PlantWarsBoardZombieDetails_069bda78;
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to PlantWarsBoardZombieDetails::~PlantWarsBoardZombieDetails() */

void __thiscall
PlantWarsBoardZombieDetails::~PlantWarsBoardZombieDetails(PlantWarsBoardZombieDetails *this)

{
  ~PlantWarsBoardZombieDetails(this + -0x10);
  return;
}


/* PlantWarsBoardZombieDetails::~PlantWarsBoardZombieDetails() */

void __thiscall
PlantWarsBoardZombieDetails::~PlantWarsBoardZombieDetails(PlantWarsBoardZombieDetails *this)

{
  ~PlantWarsBoardZombieDetails(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantWarsBoardZombieDetails::~PlantWarsBoardZombieDetails() */

void __thiscall
PlantWarsBoardZombieDetails::~PlantWarsBoardZombieDetails(PlantWarsBoardZombieDetails *this)

{
  ~PlantWarsBoardZombieDetails(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsBoardZombieDetails::PlantWarsBoardZombieDetails() */

void __thiscall
PlantWarsBoardZombieDetails::PlantWarsBoardZombieDetails(PlantWarsBoardZombieDetails *this)

{
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_069bd8d0;
  *(undefined ***)(this + 0x10) = &PTR__PlantWarsBoardZombieDetails_069bda78;
  std::string::string(asStack_30,"Play_UI_Menu_Button_Continue_Press");
  DEditorNode::setRootName((string *)this);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"Play_UI_Rift_Perks_Panel_Open");
  UIEasyButtonWidget::SetSoundReleased((string *)this);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"IMAGE_UI_HUD_INGAME_PLANTWARS_LEVELDETAILS");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"IMAGE_UI_HUD_INGAME_PLANTWARS_LEVELDETAILS");
  UIEasyButtonWidget::SetImagePressed((UIEasyButtonWidget *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  FUN_04d9f3a8(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsBoardZombieDetails::StaticNew() */

PlantWarsBoardZombieDetails * PlantWarsBoardZombieDetails::StaticNew(void)

{
  PlantWarsBoardZombieDetails *this;
  
  this = ::operator_new(0x1d0);
  PlantWarsBoardZombieDetails(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsBoardZombieDetails::onButtonClicked() */

void PlantWarsBoardZombieDetails::onButtonClicked(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  string *psVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  PlantWarsLevelSelectManager *pPVar8;
  ShowZombieTitles *pSVar9;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  FUN_05475d88(asStack_18,uVar3);
  cVar1 = FUN_0547419c(asStack_18);
  if (cVar1 == '\0') {
    lVar6 = FUN_05474184(asStack_18);
    puVar5 = (undefined1 *)FUN_05474ee8(asStack_18,lVar6 + -1);
    *puVar5 = 0x61;
  }
  Board::GetLevelDefinitionPtr();
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar2) {
    psVar4 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    cVar1 = std::operator==(asStack_18,psVar4);
    if (cVar1 != '\0') {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      lVar6 = FUN_04d9e79c(*(undefined8 *)(lVar6 + 0x50),*(undefined8 *)(lVar6 + 0x58));
      if (lVar6 != 0) {
        pPVar8 = (PlantWarsLevelSelectManager *)
                 Sexy::LazySingleton<PlantWarsLevelSelectManager>::GetInstancePtr();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        pSVar9 = (ShowZombieTitles *)FUN_04d9e7b0(*(undefined8 *)(lVar6 + 0x50),0);
        PlantWarsLevelSelectManager::ShowZombieDetails(pPVar8,pSVar9);
        goto LAB_04daba90;
      }
      psVar4 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    }
    bVar2 = std::operator!=(asStack_18,psVar4);
    if (bVar2) {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      uVar7 = FUN_04d9e79c(*(undefined8 *)(lVar6 + 0x50),*(undefined8 *)(lVar6 + 0x58));
      if (1 < uVar7) {
        pPVar8 = (PlantWarsLevelSelectManager *)
                 Sexy::LazySingleton<PlantWarsLevelSelectManager>::GetInstancePtr();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        pSVar9 = (ShowZombieTitles *)FUN_04d9e7b0(*(undefined8 *)(lVar6 + 0x50),1);
        PlantWarsLevelSelectManager::ShowZombieDetails(pPVar8,pSVar9);
      }
    }
  }
LAB_04daba90:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

