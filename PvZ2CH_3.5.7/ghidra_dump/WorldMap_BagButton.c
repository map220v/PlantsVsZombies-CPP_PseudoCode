// Class: WorldMap_BagButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_BagButton::onLoadComplete() */

void WorldMap_BagButton::onLoadComplete(void)

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
    iVar2 = FUN_04579d98(0);
    iVar3 = FUN_04579d98(0xffffffec);
    fVar5 = (float)iVar3;
    Sexy::FastCurve::SetOutRange(aFStack_10,(float)iVar2,fVar5);
    uVar4 = Sexy::SexyVector2::operator+(this,(SexyVector2 *)aFStack_10);
    UIWidget::SetPositionOffset(uVar4,fVar5);
    iVar2 = FUN_04579b94(*(undefined4 *)(in_x0 + 0x38));
    iVar3 = FUN_04579ba0(*(undefined4 *)(in_x0 + 0x3c));
    FUN_04579b98(in_x0 + 0x38,(int)((float)iVar2 * 0.8));
    FUN_04579ba4(in_x0 + 0x3c,(int)((float)iVar3 * 0.8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_BagButton::StaticClassInit() */

void WorldMap_BagButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_BagButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0457a02c,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_BagButton::StaticGetClass() */

long * WorldMap_BagButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_BagButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_BagButton::GetClass() const */

long * WorldMap_BagButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_BagButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_BagButton::~WorldMap_BagButton() */

void __thiscall WorldMap_BagButton::~WorldMap_BagButton(WorldMap_BagButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0685fd30;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_BagButton_0685fed8;
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_BagButton::~WorldMap_BagButton() */

void __thiscall WorldMap_BagButton::~WorldMap_BagButton(WorldMap_BagButton *this)

{
  ~WorldMap_BagButton(this + -0x10);
  return;
}


/* WorldMap_BagButton::~WorldMap_BagButton() */

void __thiscall WorldMap_BagButton::~WorldMap_BagButton(WorldMap_BagButton *this)

{
  ~WorldMap_BagButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_BagButton::~WorldMap_BagButton() */

void __thiscall WorldMap_BagButton::~WorldMap_BagButton(WorldMap_BagButton *this)

{
  ~WorldMap_BagButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_BagButton::WorldMap_BagButton() */

void __thiscall WorldMap_BagButton::WorldMap_BagButton(WorldMap_BagButton *this)

{
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0685fd30;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_BagButton_0685fed8;
  std::string::string(asStack_30,"IMAGE_UI_HUD_WORLDMAP_BIG_ICON_BAG");
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
  FUN_04579d3c(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_BagButton::StaticNew() */

WorldMap_BagButton * WorldMap_BagButton::StaticNew(void)

{
  WorldMap_BagButton *this;
  
  this = ::operator_new(0x1d0);
  WorldMap_BagButton(this);
  return this;
}

