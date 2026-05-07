// Class: UINewPVPSkillBank


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSkillBank::StaticClassInit() */

void UINewPVPSkillBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"UINewPVPSkillBank");
    (*pcVar2)(plVar1,asStack_10,FUN_03520148,0x180,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPSkillBank::StaticGetClass() */

long * UINewPVPSkillBank::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UINewPVPSkillBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UINewPVPSkillBank::GetClass() const */

long * UINewPVPSkillBank::GetClass(void)

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
  (*pcVar3)(plVar1,"UINewPVPSkillBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UINewPVPSkillBank::UINewPVPSkillBank() */

void __thiscall UINewPVPSkillBank::UINewPVPSkillBank(UINewPVPSkillBank *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined ***)this = &PTR_GetClass_0664fa00;
  *(undefined ***)(this + 0x10) = &PTR__UINewPVPSkillBank_0664fba0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  return;
}


/* UINewPVPSkillBank::StaticNew() */

UINewPVPSkillBank * UINewPVPSkillBank::StaticNew(void)

{
  UINewPVPSkillBank *this;
  
  this = ::operator_new(0x180);
  UINewPVPSkillBank(this);
  return this;
}


/* UINewPVPSkillBank::~UINewPVPSkillBank() */

void __thiscall UINewPVPSkillBank::~UINewPVPSkillBank(UINewPVPSkillBank *this)

{
  *(undefined ***)this = &PTR_GetClass_0664fa00;
  *(undefined ***)(this + 0x10) = &PTR__UINewPVPSkillBank_0664fba0;
  std::vector<UINewPVPInitialSkill*,std::allocator<UINewPVPInitialSkill*>>::~vector
            ((vector<UINewPVPInitialSkill*,std::allocator<UINewPVPInitialSkill*>> *)(this + 0x168));
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to UINewPVPSkillBank::~UINewPVPSkillBank() */

void __thiscall UINewPVPSkillBank::~UINewPVPSkillBank(UINewPVPSkillBank *this)

{
  ~UINewPVPSkillBank(this + -0x10);
  return;
}


/* UINewPVPSkillBank::~UINewPVPSkillBank() */

void __thiscall UINewPVPSkillBank::~UINewPVPSkillBank(UINewPVPSkillBank *this)

{
  ~UINewPVPSkillBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UINewPVPSkillBank::~UINewPVPSkillBank() */

void __thiscall UINewPVPSkillBank::~UINewPVPSkillBank(UINewPVPSkillBank *this)

{
  ~UINewPVPSkillBank(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSkillBank::setSkillBankType(UINewPVPSkillBank::SkillBankType) */

void __thiscall UINewPVPSkillBank::setSkillBankType(UINewPVPSkillBank *this,undefined4 param_2)

{
  vector<UINewPVPInitialSkill*,std::allocator<UINewPVPInitialSkill*>> *this_00;
  UINewPVPInitialSkill *pUVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UIWidget *pUVar6;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  RtObject *pRVar7;
  UINewPVPInitialSkill *local_28;
  UINewPVPInitialSkill *local_20;
  undefined4 local_18;
  undefined4 local_14;
  long local_8;
  
  this_00 = (vector<UINewPVPInitialSkill*,std::allocator<UINewPVPInitialSkill*>> *)(this + 0x168);
  *(undefined4 *)(this + 0x164) = param_2;
  local_8 = ___stack_chk_guard;
  std::vector<UINewPVPInitialSkill*,std::allocator<UINewPVPInitialSkill*>>::clear(this_00);
  if (*(int *)(this + 0x164) == 1) {
    std::string::string((string *)&local_18,"UIScreen");
    pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_18);
    UIWidget::SetParentWidget((UIWidget *)this,pUVar6);
    std::string::~string((string *)&local_18);
    nop();
    this_01 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4d38);
    uVar2 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    FUN_0351d4ac(this + 0x38,uVar2);
    this_02 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4d38);
    uVar2 = SalesProgressBar::GetCurrentLevel(this_02);
    FUN_0351d4b8(this + 0x3c,uVar2);
    UIWidget::SetAnchorType((UIWidget *)this,7);
    UIWidget::SetParentAnchorType((UIWidget *)this,7);
    iVar3 = FUN_0351e4e8(0x104);
    iVar4 = FUN_0351e4e8(0);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)iVar3,(float)iVar4);
    UIWidget::SetPositionOffset(local_18,local_14,this);
    Sexy::RtName::RtName((RtName *)&local_18,L"UINewPVPInitialSkill");
    pRVar7 = (RtObject *)UIWidget::CreateWidget((string *)&local_18,0);
    local_28 = Sexy::RtObject::Cast<UINewPVPInitialSkill>(pRVar7);
    Sexy::RtName::~RtName((RtName *)&local_18);
    UINewPVPInitialSkill::SetSkillType(local_28,4);
    pUVar1 = local_28;
    iVar3 = FUN_0351e4e8(0xf);
    iVar4 = FUN_0351e4e8(0);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)iVar3,(float)iVar4);
    UIWidget::SetPositionOffset(local_18,local_14,pUVar1);
    UIWidget::SetVisible((UIWidget *)local_28,true);
    FUN_0351d99c((UIWidget *)(local_28 + 400));
    FUN_0351d9a8((UIWidget *)(local_28 + 0x194));
    FUN_0351d9b4((UIWidget *)(local_28 + 0x18c));
    std::vector<UINewPVPInitialSkill*,std::allocator<UINewPVPInitialSkill*>>::push_back
              (this_00,&local_28);
    Sexy::RtName::RtName((RtName *)&local_18,L"UINewPVPInitialSkill");
    pRVar7 = (RtObject *)UIWidget::CreateWidget((string *)&local_18,0);
    local_20 = Sexy::RtObject::Cast<UINewPVPInitialSkill>(pRVar7);
    Sexy::RtName::~RtName((RtName *)&local_18);
    UINewPVPInitialSkill::SetSkillType(local_20,3);
    pUVar1 = local_20;
    iVar3 = FUN_0351e4e8(0xf);
    iVar4 = FUN_0351d4a8(*(undefined4 *)(local_28 + 0x38));
    iVar5 = FUN_0351e4e8(0);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)(iVar3 + iVar4),(float)iVar5);
    UIWidget::SetPositionOffset(local_18,local_14,pUVar1);
    UIWidget::SetVisible((UIWidget *)local_20,true);
    FUN_0351d99c((UIWidget *)(local_20 + 400));
    FUN_0351d9a8((UIWidget *)(local_20 + 0x194));
    FUN_0351d9b4((UIWidget *)(local_20 + 0x18c));
    std::vector<UINewPVPInitialSkill*,std::allocator<UINewPVPInitialSkill*>>::push_back
              (this_00,&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSkillBank::Draw(Sexy::Graphics*) */

void __thiscall UINewPVPSkillBank::Draw(UINewPVPSkillBank *this,Graphics *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Image *pIVar4;
  UIWidget *this_00;
  GraphicsAutoState aGStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  if (*(int *)(this + 0x164) == 1) {
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4d38);
    Sexy::Graphics::DrawImage(param_1,pIVar4,0,0);
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x168));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x168));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (UIWidget *)*puVar3;
    cVar2 = UIWidget::IsVisible(this_00);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)this_00 + 0x78))(this_00,param_1);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINewPVPSkillBank::Draw(Sexy::Graphics*) */

void __thiscall UINewPVPSkillBank::Draw(UINewPVPSkillBank *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

