// Class: UISpringFestival2024Boost


/* UISpringFestival2024Boost::~UISpringFestival2024Boost() */

void __thiscall
UISpringFestival2024Boost::~UISpringFestival2024Boost(UISpringFestival2024Boost *this)

{
  *(undefined ***)this = &PTR_GetClass_0685d3c0;
  *(undefined ***)(this + 0x10) = &PTR__UISpringFestival2024Boost_0685d560;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to UISpringFestival2024Boost::~UISpringFestival2024Boost() */

void __thiscall
UISpringFestival2024Boost::~UISpringFestival2024Boost(UISpringFestival2024Boost *this)

{
  ~UISpringFestival2024Boost(this + -0x10);
  return;
}


/* UISpringFestival2024Boost::~UISpringFestival2024Boost() */

void __thiscall
UISpringFestival2024Boost::~UISpringFestival2024Boost(UISpringFestival2024Boost *this)

{
  ~UISpringFestival2024Boost(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UISpringFestival2024Boost::~UISpringFestival2024Boost() */

void __thiscall
UISpringFestival2024Boost::~UISpringFestival2024Boost(UISpringFestival2024Boost *this)

{
  ~UISpringFestival2024Boost(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpringFestival2024Boost::StaticClassInit() */

void UISpringFestival2024Boost::StaticClassInit(void)

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
    std::string::string(asStack_10,"UISpringFestival2024Boost");
    (*pcVar2)(plVar1,asStack_10,FUN_0456e4d0,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISpringFestival2024Boost::StaticGetClass() */

long * UISpringFestival2024Boost::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"UISpringFestival2024Boost",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UISpringFestival2024Boost::GetClass() const */

long * UISpringFestival2024Boost::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"UISpringFestival2024Boost",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UISpringFestival2024Boost::UISpringFestival2024Boost() */

void __thiscall
UISpringFestival2024Boost::UISpringFestival2024Boost(UISpringFestival2024Boost *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined ***)this = &PTR_GetClass_0685d3c0;
  *(undefined ***)(this + 0x10) = &PTR__UISpringFestival2024Boost_0685d560;
  return;
}


/* UISpringFestival2024Boost::StaticNew() */

UISpringFestival2024Boost * UISpringFestival2024Boost::StaticNew(void)

{
  UISpringFestival2024Boost *this;
  
  this = ::operator_new(0x170);
  UISpringFestival2024Boost(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpringFestival2024Boost::onLoadComplete() */

void __thiscall UISpringFestival2024Boost::onLoadComplete(UISpringFestival2024Boost *this)

{
  undefined8 extraout_x0;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UISpringFestival2024BoostButton");
  UIWidget::CreateWidget(aRStack_18,1);
  nop();
  *(undefined8 *)(this + 0x168) = extraout_x0;
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpringFestival2024Boost::Draw(Sexy::Graphics*) */

void __thiscall UISpringFestival2024Boost::Draw(UISpringFestival2024Boost *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  GraphicsAutoState aGStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  std::string::string(asStack_18,"[UNCHARTED_WORLD_CURRENT_BOOST_CARDS]");
  StringHelper::ToStringValue(asStack_18);
  std::string::~string(asStack_18);
  nop();
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
  iVar1 = FUN_0456c8a8(10);
  iVar2 = FUN_0456c8a8(0);
  iVar3 = FUN_0456c16c(*(undefined4 *)(this + 0x38));
  iVar4 = FUN_0456c8a8(0x19);
  iVar5 = FUN_0456c170(*(undefined4 *)(this + 0x3c));
  FUN_05477b24(auStack_20,auStack_28);
  Sexy::Color::Color((Color *)asStack_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)iVar1,(float)iVar2,(float)(iVar3 / 3 + iVar4),(float)iVar5,
             uVar6,param_1,auStack_20,1,1,asStack_18,0);
  FUN_05476c50(auStack_20);
  plVar7 = *(long **)(this + 0x168);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x78))(plVar7,param_1);
  }
  FUN_05476c50(auStack_28);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UISpringFestival2024Boost::Draw(Sexy::Graphics*) */

void __thiscall UISpringFestival2024Boost::Draw(UISpringFestival2024Boost *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

