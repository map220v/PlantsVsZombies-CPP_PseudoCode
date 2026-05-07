// Class: WorldMap_PlantWarsLeaderBoardButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantWarsLeaderBoardButton::StaticClassInit() */

void WorldMap_PlantWarsLeaderBoardButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_PlantWarsLeaderBoardButton");
    (*pcVar2)(plVar1,asStack_10,FUN_04d8f45c,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PlantWarsLeaderBoardButton::StaticGetClass() */

long * WorldMap_PlantWarsLeaderBoardButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_PlantWarsLeaderBoardButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PlantWarsLeaderBoardButton::GetClass() const */

long * WorldMap_PlantWarsLeaderBoardButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_PlantWarsLeaderBoardButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PlantWarsLeaderBoardButton::~WorldMap_PlantWarsLeaderBoardButton() */

void __thiscall
WorldMap_PlantWarsLeaderBoardButton::~WorldMap_PlantWarsLeaderBoardButton
          (WorldMap_PlantWarsLeaderBoardButton *this)

{
  *(undefined ***)this = &PTR_GetClass_069ba920;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PlantWarsLeaderBoardButton_069baad0;
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_PlantWarsLeaderBoardButton::~WorldMap_PlantWarsLeaderBoardButton()
    */

void __thiscall
WorldMap_PlantWarsLeaderBoardButton::~WorldMap_PlantWarsLeaderBoardButton
          (WorldMap_PlantWarsLeaderBoardButton *this)

{
  ~WorldMap_PlantWarsLeaderBoardButton(this + -0x10);
  return;
}


/* WorldMap_PlantWarsLeaderBoardButton::~WorldMap_PlantWarsLeaderBoardButton() */

void __thiscall
WorldMap_PlantWarsLeaderBoardButton::~WorldMap_PlantWarsLeaderBoardButton
          (WorldMap_PlantWarsLeaderBoardButton *this)

{
  ~WorldMap_PlantWarsLeaderBoardButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_PlantWarsLeaderBoardButton::~WorldMap_PlantWarsLeaderBoardButton()
    */

void __thiscall
WorldMap_PlantWarsLeaderBoardButton::~WorldMap_PlantWarsLeaderBoardButton
          (WorldMap_PlantWarsLeaderBoardButton *this)

{
  ~WorldMap_PlantWarsLeaderBoardButton(this + -0x10);
  return;
}


/* WorldMap_PlantWarsLeaderBoardButton::OnClick() */

UIPlantWarsActivityReward * WorldMap_PlantWarsLeaderBoardButton::OnClick(void)

{
  UIPlantWarsActivityReward *pUVar1;
  char cVar2;
  UIPlantWarsActivityReward *pUVar3;
  
  pUVar1 = UISingletonDialog<UIPlantWarsActivityReward>::m_pInstance;
  pUVar3 = pUVar1;
  if (UISingletonDialog<UIPlantWarsActivityReward>::m_pInstance == (UIPlantWarsActivityReward *)0x0)
  {
    pUVar3 = ::operator_new(0x170);
    UIPlantWarsActivityReward::UIPlantWarsActivityReward(pUVar3);
    UISingletonDialog<UIPlantWarsActivityReward>::m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = UISingletonDialog<UIPlantWarsActivityReward>::m_pInstance;
    if (cVar2 == '\0') {
      if (UISingletonDialog<UIPlantWarsActivityReward>::m_pInstance !=
          (UIPlantWarsActivityReward *)0x0) {
        (**(code **)(*(long *)UISingletonDialog<UIPlantWarsActivityReward>::m_pInstance + 0x18))();
      }
      UISingletonDialog<UIPlantWarsActivityReward>::m_pInstance = (UIPlantWarsActivityReward *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantWarsLeaderBoardButton::WorldMap_PlantWarsLeaderBoardButton() */

void __thiscall
WorldMap_PlantWarsLeaderBoardButton::WorldMap_PlantWarsLeaderBoardButton
          (WorldMap_PlantWarsLeaderBoardButton *this)

{
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_069ba920;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PlantWarsLeaderBoardButton_069baad0;
  std::string::string(asStack_30,"IMAGE_UI_GENERIC_REWARD");
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
  FUN_04d8d9b8(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PlantWarsLeaderBoardButton::StaticNew() */

WorldMap_PlantWarsLeaderBoardButton * WorldMap_PlantWarsLeaderBoardButton::StaticNew(void)

{
  WorldMap_PlantWarsLeaderBoardButton *this;
  
  this = ::operator_new(0x1d0);
  WorldMap_PlantWarsLeaderBoardButton(this);
  return this;
}

