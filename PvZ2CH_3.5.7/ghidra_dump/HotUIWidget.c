// Class: HotUIWidget


/* HotUIWidget::GetPtr() const */

RtWeakPtr<Sexy::SoundResource> * HotUIWidget::GetPtr(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0xd8));
  return in_x8;
}


/* HotUIWidget::OnTouchBegan(Sexy::Touch const&) */

void HotUIWidget::OnTouchBegan(Touch *param_1)

{
  return;
}


/* HotUIWidget::onDraw(Sexy::Graphics*) */

void HotUIWidget::onDraw(Graphics *param_1)

{
  return;
}


/* HotUIWidget::onInitializeWidget() */

void HotUIWidget::onInitializeWidget(void)

{
  return;
}


/* HotUIWidget::onProcessStringReplaceMap(std::map<std::string, std::string, std::less<std::string
   >, std::allocator<std::pair<std::string const, std::string > > > const&) */

void HotUIWidget::onProcessStringReplaceMap(map *param_1)

{
  return;
}


/* HotUIWidget::onUpdate() */

void HotUIWidget::onUpdate(void)

{
  return;
}


/* HotUIWidget::onLayoutFinalized() */

void HotUIWidget::onLayoutFinalized(void)

{
  return;
}


/* HotUIWidget::getImageWidthForResizeData() */

undefined8 HotUIWidget::getImageWidthForResizeData(void)

{
  return 0;
}


/* HotUIWidget::getImageHeightForResizeData() */

undefined8 HotUIWidget::getImageHeightForResizeData(void)

{
  return 0;
}


/* HotUIWidget::getProps() const */

void __thiscall HotUIWidget::getProps(HotUIWidget *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  return;
}


/* HotUIWidget::GetProps() const */

void HotUIWidget::GetProps(void)

{
  long in_x0;
  
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xe0));
  return;
}


/* HotUIZPSMeterProperties const* HotUIWidget::getProps<HotUIZPSMeterProperties>() const */

HotUIZPSMeterProperties * __thiscall
HotUIWidget::getProps<HotUIZPSMeterProperties>(HotUIWidget *this)

{
  HotUIZPSMeterProperties *extraout_x0;
  
  getProps(this);
  nop();
  return extraout_x0;
}


/* HotUIWidget::HotUIWidget() */

void __thiscall HotUIWidget::HotUIWidget(HotUIWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_06673c30;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe0));
  AnchorDescriptor::AnchorDescriptor((AnchorDescriptor *)(this + 0xf0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x128));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x130));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  DynamicLayoutState::DynamicLayoutState((DynamicLayoutState *)(this + 0x170));
  Sexy::Delegate2<Sexy::Graphics*,HotUIWidget*>::Delegate2((DummyInit *)(this + 0x1e0));
  this[0xd1] = (HotUIWidget)0x0;
  this[0xe8] = (HotUIWidget)0x0;
  this[0x148] = (HotUIWidget)0x0;
  this[0xd2] = (HotUIWidget)0x1;
  *(undefined4 *)(this + 0x168) = 0;
  return;
}


/* HotUIWidget::~HotUIWidget() */

void __thiscall HotUIWidget::~HotUIWidget(HotUIWidget *this)

{
  long lVar1;
  
  *(undefined ***)this = &PTR_GetWidgetClass_06673c30;
  lVar1 = std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::size
                    ((list<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 8));
  if (lVar1 != 0) {
    Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,false,true);
  }
  UnloadResources(this);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x150));
  std::vector<Sexy::RtWeakPtr<HotUIWidget>,std::allocator<Sexy::RtWeakPtr<HotUIWidget>>>::~vector
            ((vector<Sexy::RtWeakPtr<HotUIWidget>,std::allocator<Sexy::RtWeakPtr<HotUIWidget>>> *)
             (this + 0x130));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x128));
  AnchorDescriptor::~AnchorDescriptor((AnchorDescriptor *)(this + 0xf0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* HotUIWidget::~HotUIWidget() */

void __thiscall HotUIWidget::~HotUIWidget(HotUIWidget *this)

{
  ~HotUIWidget(this);
  AK::FreeHook(this);
  return;
}


/* HotUIWidget::TouchBegan(Sexy::Touch const&) */

void __thiscall HotUIWidget::TouchBegan(HotUIWidget *this,Touch *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  if (*(code **)(lVar1 + 0x318) != OnTouchBegan) {
    (**(code **)(lVar1 + 0x318))();
    lVar1 = *(long *)this;
  }
  (**(code **)(lVar1 + 0x210))
            (this,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidget::StaticClassInit() */

void HotUIWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_0365798c,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidget::StaticGetClass() */

long * HotUIWidget::StaticGetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIWidget::SetRenderDelegate(Sexy::Delegate2<Sexy::Graphics*, HotUIWidget*>) */

void __thiscall HotUIWidget::SetRenderDelegate(HotUIWidget *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x1e0),param_2);
  return;
}


/* HotUIWidget::getValueForSizeData(DynamicSizeData const*, int) */

undefined1  [16] __thiscall
HotUIWidget::getValueForSizeData(HotUIWidget *this,DynamicSizeData *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar4 [16];
  
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    FUN_03655184(*(undefined4 *)(param_1 + 0xc));
    auVar4._4_4_ = extraout_var;
    auVar4._0_4_ = extraout_s0;
    auVar4._8_8_ = extraout_var_00;
    return auVar4;
  case 1:
    return ZEXT416((uint)((float)param_2 * *(float *)(param_1 + 0xc)));
  case 2:
    return ZEXT416((uint)(float)param_2);
  case 3:
    pcVar2 = *(code **)(*(long *)this + 0x350);
    if (pcVar2 == getImageWidthForResizeData) {
      iVar1 = getImageWidthForResizeData();
      fVar3 = (float)iVar1;
      goto LAB_03655348;
    }
    break;
  case 4:
    pcVar2 = *(code **)(*(long *)this + 0x358);
    if (pcVar2 == getImageHeightForResizeData) {
      iVar1 = getImageHeightForResizeData();
      fVar3 = (float)iVar1;
      goto LAB_03655348;
    }
    break;
  case 5:
    return ZEXT416(*(uint *)(param_1 + 0xc));
  default:
    return ZEXT816(0);
  }
  iVar1 = (*pcVar2)();
  fVar3 = (float)iVar1;
LAB_03655348:
  return ZEXT416((uint)fVar3);
}


/* HotUIWidget::calculateResizeData(DynamicResizeState&) */

void __thiscall HotUIWidget::calculateResizeData(HotUIWidget *this,DynamicResizeState *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  cVar1 = FUN_03654f1c(param_1,1);
  if ((cVar1 != '\0') && (param_1[0x28] == (DynamicResizeState)0x0)) {
    *(undefined4 *)(param_1 + 0x18) = 1;
    return;
  }
  cVar1 = FUN_03654f1c(param_1,2);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x18) = 2;
    return;
  }
  fVar2 = (float)getValueForSizeData(this,*(DynamicSizeData **)param_1,*(int *)(param_1 + 0x2c));
  fVar3 = (float)getValueForSizeData(this,*(DynamicSizeData **)(param_1 + 8),
                                     *(int *)(param_1 + 0x2c));
  fVar4 = (float)getValueForSizeData(this,*(DynamicSizeData **)(param_1 + 0x10),
                                     *(int *)(param_1 + 0x2c));
  fVar2 = (float)ClampFloat(fVar2,fVar3,fVar4);
  **(int **)(param_1 + 0x20) = (int)fVar2;
  *(undefined4 *)(param_1 + 0x18) = 3;
  return;
}


/* HotUIWidget::calculateResizeDataWithParentInsetPadding(DynamicResizeState&, int, int) */

void __thiscall
HotUIWidget::calculateResizeDataWithParentInsetPadding
          (HotUIWidget *this,DynamicResizeState *param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((*(int *)(param_1 + 0x18) == 1) && (cVar2 = FUN_03654f1c(param_1,1), cVar2 != '\0')) {
    iVar1 = param_2 - param_3;
    fVar3 = (float)getValueForSizeData(this,*(DynamicSizeData **)param_1,iVar1);
    fVar4 = (float)getValueForSizeData(this,*(DynamicSizeData **)(param_1 + 8),iVar1);
    fVar5 = (float)getValueForSizeData(this,*(DynamicSizeData **)(param_1 + 0x10),iVar1);
    fVar3 = (float)ClampFloat(fVar3,fVar4,fVar5);
    **(int **)(param_1 + 0x20) = (int)fVar3;
    *(undefined4 *)(param_1 + 0x18) = 3;
    return;
  }
  return;
}


/* HotUIWidget::calculateResizeDataWithContentSize(DynamicResizeState&, int) */

void __thiscall
HotUIWidget::calculateResizeDataWithContentSize
          (HotUIWidget *this,DynamicResizeState *param_1,int param_2)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((*(int *)(param_1 + 0x18) == 2) && (cVar1 = FUN_03654f1c(param_1,2), cVar1 != '\0')) {
    fVar2 = (float)getValueForSizeData(this,*(DynamicSizeData **)param_1,param_2);
    fVar3 = (float)getValueForSizeData(this,*(DynamicSizeData **)(param_1 + 8),param_2);
    fVar4 = (float)getValueForSizeData(this,*(DynamicSizeData **)(param_1 + 0x10),param_2);
    fVar2 = (float)ClampFloat(fVar2,fVar3,fVar4);
    **(int **)(param_1 + 0x20) = (int)fVar2;
    *(undefined4 *)(param_1 + 0x18) = 3;
    return;
  }
  return;
}


/* HotUIWidget::IsDirty() const */

HotUIWidget __thiscall HotUIWidget::IsDirty(HotUIWidget *this)

{
  HotUIWidget HVar1;
  
  HVar1 = this[0xd2];
  if (HVar1 == (HotUIWidget)0x0) {
    HVar1 = this[0xd1];
  }
  return HVar1;
}


/* HotUIWidget::FinalizeLayout() */

void __thiscall HotUIWidget::FinalizeLayout(HotUIWidget *this)

{
  if (*(code **)(*(long *)this + 0x340) != onLayoutFinalized) {
    (**(code **)(*(long *)this + 0x340))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidget::getExtraAnchorOffset(AnchorDescriptor const&, HotUIWidget*, Sexy::Insets const&) */

void __thiscall
HotUIWidget::getExtraAnchorOffset
          (HotUIWidget *this,AnchorDescriptor *param_1,HotUIWidget *param_2,Insets *param_3)

{
  int iVar1;
  float local_10;
  float fStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_10)
  ;
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 1) {
    local_10 = (float)((*(int *)(param_2 + 0x50) - *(int *)param_3) - *(int *)(param_3 + 8)) *
               *(float *)(param_1 + 0x1c);
  }
  else if (iVar1 == 0) {
    local_10 = (float)FUN_03655184(*(undefined4 *)(param_1 + 0x1c));
  }
  else if (iVar1 == 5) {
    local_10 = *(float *)(param_1 + 0x1c);
    iVar1 = *(int *)(param_1 + 0x28);
    goto joined_r0x03655794;
  }
  iVar1 = *(int *)(param_1 + 0x28);
joined_r0x03655794:
  if (iVar1 == 1) {
    fStack_c = (float)((*(int *)(param_2 + 0x54) - *(int *)(param_3 + 4)) - *(int *)(param_3 + 0xc))
               * *(float *)(param_1 + 0x2c);
  }
  else if (iVar1 == 0) {
    fStack_c = (float)FUN_03655184(*(undefined4 *)(param_1 + 0x2c));
  }
  else if (iVar1 == 5) {
    fStack_c = *(float *)(param_1 + 0x2c);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_10,fStack_c);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidget::getAnchorOffset(Sexy::WidgetContainer const*, HotAnchorType, Sexy::Insets const&) */

void __thiscall
HotUIWidget::getAnchorOffset(undefined8 param_1_00,long param_1,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  float local_10;
  float fStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
  iVar1 = *(int *)(gLawnApp + 0x724);
  iVar2 = *(int *)(gLawnApp + 0x728);
  if (param_1 != 0) {
    iVar1 = (*(int *)(param_1 + 0x50) - *param_4) - param_4[2];
    iVar2 = (*(int *)(param_1 + 0x54) - param_4[1]) - param_4[3];
  }
  switch(param_3) {
  case 2:
    local_10 = (float)(iVar1 / 2);
    break;
  case 3:
    local_10 = (float)iVar1;
    break;
  case 4:
    fStack_c = (float)(iVar2 / 2);
    break;
  case 5:
    local_10 = (float)(iVar1 / 2);
    fStack_c = (float)(iVar2 / 2);
    break;
  case 6:
    local_10 = (float)iVar1;
    fStack_c = (float)(iVar2 / 2);
    break;
  case 7:
    fStack_c = (float)iVar2;
    break;
  case 8:
    fStack_c = (float)iVar2;
    local_10 = (float)(iVar1 / 2);
    break;
  case 9:
    local_10 = (float)iVar1;
    fStack_c = (float)iVar2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_10,fStack_c);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidget::layoutAndPositionWidgetIfDirty() */

void __thiscall HotUIWidget::layoutAndPositionWidgetIfDirty(HotUIWidget *this)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0xd2] != (HotUIWidget)0x0) || (this[0xd1] != (HotUIWidget)0x0)) {
    GetPtr();
    HotUIHelpers::LayoutAndPositionWidget(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidget::Update() */

void __thiscall HotUIWidget::Update(HotUIWidget *this)

{
  layoutAndPositionWidgetIfDirty(this);
  if (*(code **)(*(long *)this + 0x338) != onUpdate) {
    (**(code **)(*(long *)this + 0x338))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidget::ClearRenderDelegate() */

void __thiscall HotUIWidget::ClearRenderDelegate(HotUIWidget *this)

{
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate2<Sexy::Graphics*,HotUIWidget*>::Delegate2(aDStack_38);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x1e0),(Delegate2 *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidget::GetAnchorDescriptor() const */

HotUIWidget * __thiscall HotUIWidget::GetAnchorDescriptor(HotUIWidget *this)

{
  long lVar1;
  
  if (this[0xe8] != (HotUIWidget)0x0) {
    return this + 0xf0;
  }
  lVar1 = getProps(this);
  return (HotUIWidget *)(lVar1 + 0xd0);
}


/* HotUIWidget::GetName() const */

void __thiscall HotUIWidget::GetName(HotUIWidget *this)

{
  GetProps();
  FUN_05475d88();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidget::getAnchorParent(bool) */

void HotUIWidget::getAnchorParent(bool param_1)

{
  AnchorDescriptor *pAVar1;
  long lVar2;
  char in_w1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  AnchorDescriptor aAStack_40 [48];
  RtWeakPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_w1 == '\0') {
    pAVar1 = (AnchorDescriptor *)GetAnchorDescriptor((HotUIWidget *)(ulong)param_1);
    AnchorDescriptor::AnchorDescriptor(aAStack_40,pAVar1);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,aRStack_10);
    AnchorDescriptor::~AnchorDescriptor(aAStack_40);
  }
  else {
    lVar2 = GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar2 + 0x100));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidget::Draw(Sexy::Graphics*) */

void __thiscall HotUIWidget::Draw(HotUIWidget *this,Graphics *param_1)

{
  int iVar1;
  long lVar2;
  GraphicsAutoState aGStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = GetProps();
  if (*(char *)(lVar2 + 0x10a) == '\0') {
    if (0.0 < *(float *)(this + 0x168)) {
      Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
      Sexy::Insets::Insets(aIStack_18,0,0,0,(int)(*(float *)(this + 0x168) * 255.0));
      Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
      Sexy::Graphics::FillRect(param_1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
    }
  }
  else {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
    Sexy::Insets::Insets(aIStack_18,0,0,0,0xb4);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    Sexy::Graphics::FillRect(param_1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  }
  if (*(code **)(*(long *)this + 800) != onDraw) {
    (**(code **)(*(long *)this + 800))(this,param_1);
  }
  iVar1 = FUN_03654eb4(*(undefined8 *)(this + 0x1e8),*(undefined8 *)(this + 0x1f8));
  if (iVar1 != 0) {
    Sexy::Delegate2<char_const*,char_const*>::operator()((char *)(this + 0x1e0),(char *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidget::getParentHotUIWidget() */

void __thiscall HotUIWidget::getParentHotUIWidget(HotUIWidget *this)

{
  if (*(RtObject **)(this + 0x20) != (RtObject *)0x0) {
    Sexy::RtObject::Cast<HotUIWidget>(*(RtObject **)(this + 0x20));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidget::constructLayoutState() */

void __thiscall HotUIWidget::constructLayoutState(HotUIWidget *this)

{
  int iVar1;
  bool bVar2;
  HotUIZPSMeterProperties *pHVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = *(long *)(this + 0x20) == *(long *)(gLawnApp + 0x360);
  pHVar3 = getProps<HotUIZPSMeterProperties>(this);
  DynamicResizeState::DynamicResizeState
            ((DynamicResizeState *)&local_38,(DynamicSizeData *)(pHVar3 + 0x18),
             (DynamicSizeData *)(pHVar3 + 0x38),(DynamicSizeData *)(pHVar3 + 0x58),
             (int *)(this + 0x50),bVar2,*(int *)(gLawnApp + 0x724));
  iVar1 = *(int *)(gLawnApp + 0x728);
  *(undefined8 *)(this + 0x178) = local_38;
  *(undefined8 *)(this + 0x180) = uStack_30;
  *(undefined8 *)(this + 0x188) = local_28;
  *(undefined8 *)(this + 400) = uStack_20;
  *(undefined8 *)(this + 0x198) = local_18;
  *(undefined8 *)(this + 0x1a0) = uStack_10;
  DynamicResizeState::DynamicResizeState
            ((DynamicResizeState *)&local_38,(DynamicSizeData *)(pHVar3 + 0x28),
             (DynamicSizeData *)(pHVar3 + 0x48),(DynamicSizeData *)(pHVar3 + 0x68),
             (int *)(this + 0x54),bVar2,iVar1);
  bVar2 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x1a8) = local_38;
  *(undefined8 *)(this + 0x1b0) = uStack_30;
  *(undefined8 *)(this + 0x1b8) = local_28;
  *(undefined8 *)(this + 0x1c0) = uStack_20;
  *(undefined8 *)(this + 0x1c8) = local_18;
  *(undefined8 *)(this + 0x1d0) = uStack_10;
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidget::GetPadding() const */

HotUIZPSMeterProperties * __thiscall HotUIWidget::GetPadding(HotUIWidget *this)

{
  HotUIZPSMeterProperties *pHVar1;
  
  pHVar1 = getProps<HotUIZPSMeterProperties>(this);
  return pHVar1 + 0x78;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidget::MarkLayoutDirty() */

void __thiscall HotUIWidget::MarkLayoutDirty(HotUIWidget *this)

{
  bool bVar1;
  undefined8 *puVar2;
  HotUIWidget *pHVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xd2] == (HotUIWidget)0x0) {
    this[0xd2] = (HotUIWidget)0x1;
    constructLayoutState(this);
    *(undefined4 *)(this + 400) = 0;
    *(undefined4 *)(this + 0x1c0) = 0;
    local_18 = FUN_036566e8(*(undefined8 *)(this + 8));
    while( true ) {
      local_10 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)(this + 8));
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar1) break;
      puVar2 = (undefined8 *)
               std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                         ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      if (((RtObject *)*puVar2 != (RtObject *)0x0) &&
         (pHVar3 = Sexy::RtObject::Cast<HotUIWidget>((RtObject *)*puVar2),
         pHVar3 != (HotUIWidget *)0x0)) {
        MarkLayoutDirty(pHVar3);
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
    pHVar3 = (HotUIWidget *)getParentHotUIWidget(this);
    if (pHVar3 != (HotUIWidget *)0x0) {
      MarkLayoutDirty(pHVar3);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidget::getContentBounds() */

void HotUIWidget::getContentBounds(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  HotUIWidget *in_x0;
  int *piVar5;
  long *plVar6;
  DynamicPadding *pDVar7;
  DynamicPadding *extraout_x1;
  Insets *in_x8;
  long lVar8;
  undefined8 local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(in_x8);
  local_60 = FUN_036566e8(*(undefined8 *)(in_x0 + 8));
  while( true ) {
    local_48 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(in_x0 + 8));
    bVar3 = eastl::operator!=((rbtree_iterator *)&local_60,(rbtree_iterator *)&local_48);
    if (!bVar3) break;
    plVar6 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_60);
    lVar8 = *plVar6;
    if (lVar8 != 0) {
      local_48 = FUN_036566e8(*(undefined8 *)(in_x0 + 8));
      cVar4 = std::__exception_ptr::operator==
                        ((exception_ptr *)&local_60,(exception_ptr *)&local_48);
      if (cVar4 == '\0') {
        piVar5 = eastl::min_alt<int>((int *)in_x8,(int *)(lVar8 + 0x48));
        *(int *)in_x8 = *piVar5;
        piVar5 = eastl::min_alt<int>((int *)(in_x8 + 4),(int *)(lVar8 + 0x4c));
        iVar1 = *(int *)(lVar8 + 0x48);
        iVar2 = *(int *)(lVar8 + 0x50);
        *(int *)(in_x8 + 4) = *piVar5;
        local_48._0_4_ = iVar1 + iVar2;
        piVar5 = eastl::max_alt<int>((int *)(in_x8 + 8),(int *)&local_48);
        iVar1 = *(int *)(lVar8 + 0x4c);
        iVar2 = *(int *)(lVar8 + 0x54);
        *(int *)(in_x8 + 8) = *piVar5;
        local_48 = CONCAT44(local_48._4_4_,iVar1 + iVar2);
        piVar5 = eastl::max_alt<int>((int *)(in_x8 + 0xc),(int *)&local_48);
        *(int *)(in_x8 + 0xc) = *piVar5;
      }
      else {
        Sexy::Insets::Insets
                  ((Insets *)&local_48,*(int *)(lVar8 + 0x48),*(int *)(lVar8 + 0x4c),
                   *(int *)(lVar8 + 0x48) + *(int *)(lVar8 + 0x50),
                   *(int *)(lVar8 + 0x4c) + *(int *)(lVar8 + 0x54));
        *(undefined8 *)in_x8 = local_48;
        *(undefined8 *)(in_x8 + 8) = uStack_40;
      }
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_60);
  }
  pDVar7 = (DynamicPadding *)GetPadding(in_x0);
  DynamicPadding::DynamicPadding((DynamicPadding *)&local_48,pDVar7);
  HotUIHelpers::GetInsetsFromDynamicPadding((HotUIHelpers *)&local_48,extraout_x1);
  *(int *)in_x8 = *(int *)in_x8 - local_58;
  *(int *)(in_x8 + 8) = *(int *)(in_x8 + 8) + local_58 + local_50;
  *(int *)(in_x8 + 0xc) = *(int *)(in_x8 + 0xc) + local_4c;
  *(int *)(in_x8 + 4) = *(int *)(in_x8 + 4) - local_54;
  DynamicPadding::~DynamicPadding((DynamicPadding *)&local_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidget::notifyAnchorListenersOfChange() */

void __thiscall HotUIWidget::notifyAnchorListenersOfChange(HotUIWidget *this)

{
  bool bVar1;
  RtWeakPtrBase *pRVar2;
  HotUIWidget *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x130));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x130));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar2 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar2);
    this_00 = (HotUIWidget *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    MarkAnchorDirty(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidget::MarkAnchorDirty() */

void __thiscall HotUIWidget::MarkAnchorDirty(HotUIWidget *this)

{
  this[0xd1] = (HotUIWidget)0x1;
  notifyAnchorListenersOfChange(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidget::LayoutWidgetViaContent() */

void __thiscall HotUIWidget::LayoutWidgetViaContent(HotUIWidget *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  HotUIZPSMeterProperties *pHVar4;
  undefined8 uVar5;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar4 = getProps<HotUIZPSMeterProperties>(this);
  if ((*(int *)(pHVar4 + 0x20) == 2) || (*(int *)(pHVar4 + 0x30) == 2)) {
    (**(code **)(*(long *)this + 0x348))(&local_18,this);
    iVar1 = *(int *)(this + 0x50);
    iVar2 = *(int *)(this + 0x54);
    if (*(int *)(*(long *)(this + 0x178) + 8) == 2) {
      *(undefined4 *)(this + 400) = 2;
      iVar3 = *(int *)(*(long *)(this + 0x1a8) + 8);
    }
    else {
      iVar3 = *(int *)(*(long *)(this + 0x1a8) + 8);
    }
    if (iVar3 == 2) {
      *(undefined4 *)(this + 0x1c0) = 2;
    }
    calculateResizeDataWithContentSize
              (this,(DynamicResizeState *)(this + 0x178),local_10 - local_18);
    calculateResizeDataWithContentSize(this,(DynamicResizeState *)(this + 0x1a8),local_c - local_14)
    ;
    if ((*(int *)(this + 0x50) != iVar1) || (*(int *)(this + 0x54) != iVar2)) {
      MarkAnchorDirty(this);
      uVar5 = 1;
      goto LAB_03656b84;
    }
  }
  uVar5 = 0;
LAB_03656b84:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidget::LayoutWidget() */

void __thiscall HotUIWidget::LayoutWidget(HotUIWidget *this)

{
  DynamicResizeState *pDVar1;
  DynamicResizeState *pDVar2;
  HotUIWidget HVar3;
  bool bVar4;
  char cVar5;
  HotUIWidget *pHVar6;
  DynamicPadding *pDVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_8;
  
  HVar3 = this[0xd2];
  local_8 = ___stack_chk_guard;
  if (HVar3 != (HotUIWidget)0x0) {
    pDVar1 = (DynamicResizeState *)(this + 0x178);
    this[0xd2] = (HotUIWidget)0x0;
    pDVar2 = (DynamicResizeState *)(this + 0x1a8);
    constructLayoutState(this);
    calculateResizeData(this,pDVar1);
    calculateResizeData(this,pDVar2);
    if ((*(RtObject **)(this + 0x20) != (RtObject *)0x0) &&
       (pHVar6 = Sexy::RtObject::Cast<HotUIWidget>(*(RtObject **)(this + 0x20)),
       pHVar6 != (HotUIWidget *)0x0)) {
      LayoutWidget(pHVar6);
      pDVar7 = (DynamicPadding *)GetPadding(pHVar6);
      DynamicPadding::DynamicPadding((DynamicPadding *)&local_48,pDVar7);
      auVar10 = GetPadding(pHVar6);
      HotUIHelpers::GetInsetsFromDynamicPadding(auVar10._0_8_,auVar10._8_8_);
      calculateResizeDataWithParentInsetPadding
                (this,pDVar1,*(int *)(pHVar6 + 0x50),(int)local_58 + (int)local_50);
      calculateResizeDataWithParentInsetPadding
                (this,pDVar2,*(int *)(pHVar6 + 0x54),local_58._4_4_ + local_50._4_4_);
      DynamicPadding::~DynamicPadding((DynamicPadding *)&local_48);
    }
    Sexy::Insets::Insets((Insets *)&local_58);
    local_60 = FUN_036566e8(*(undefined8 *)(this + 8));
    while( true ) {
      local_48 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)(this + 8));
      bVar4 = eastl::operator!=((rbtree_iterator *)&local_60,(rbtree_iterator *)&local_48);
      if (!bVar4) break;
      puVar9 = (undefined8 *)
               std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                         ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_60);
      if (((RtObject *)*puVar9 != (RtObject *)0x0) &&
         (pHVar6 = Sexy::RtObject::Cast<HotUIWidget>((RtObject *)*puVar9),
         pHVar6 != (HotUIWidget *)0x0)) {
        LayoutWidget(pHVar6);
        local_48 = FUN_036566e8(*(undefined8 *)(this + 8));
        cVar5 = std::__exception_ptr::operator==
                          ((exception_ptr *)&local_60,(exception_ptr *)&local_48);
        if (cVar5 == '\0') {
          piVar8 = eastl::min_alt<int>((int *)&local_58,(int *)(pHVar6 + 0x48));
          local_58 = CONCAT44(local_58._4_4_,*piVar8);
          piVar8 = eastl::min_alt<int>((int *)((long)&local_58 + 4),(int *)(pHVar6 + 0x4c));
          local_58 = CONCAT44(*piVar8,(int)local_58);
          local_48._0_4_ = *(int *)(pHVar6 + 0x48) + *(int *)(pHVar6 + 0x50);
          piVar8 = eastl::max_alt<int>((int *)&local_50,(int *)&local_48);
          local_50 = CONCAT44(local_50._4_4_,*piVar8);
          local_48 = CONCAT44(local_48._4_4_,*(int *)(pHVar6 + 0x4c) + *(int *)(pHVar6 + 0x54));
          piVar8 = eastl::max_alt<int>((int *)((long)&local_50 + 4),(int *)&local_48);
          local_50 = CONCAT44(*piVar8,(int)local_50);
        }
        else {
          Sexy::Insets::Insets
                    ((Insets *)&local_48,*(int *)(pHVar6 + 0x48),*(int *)(pHVar6 + 0x4c),
                     *(int *)(pHVar6 + 0x48) + *(int *)(pHVar6 + 0x50),
                     *(int *)(pHVar6 + 0x4c) + *(int *)(pHVar6 + 0x54));
          local_58 = local_48;
          local_50 = uStack_40;
        }
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_60);
    }
    calculateResizeDataWithContentSize(this,pDVar1,(int)local_50 - (int)local_58);
    calculateResizeDataWithContentSize(this,pDVar2,local_50._4_4_ - local_58._4_4_);
    MarkAnchorDirty(this);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(HVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidget::CalculateAnchorLocation() */

void HotUIWidget::CalculateAnchorLocation(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  HotUIWidget *in_x0;
  HotUIWidget *this;
  DynamicPadding *pDVar6;
  AnchorDescriptor *pAVar7;
  HotUIWidget *pHVar8;
  long *plVar9;
  int iVar10;
  DynamicPadding *extraout_x1;
  float fVar11;
  float fVar12;
  float fVar13;
  float in_s1;
  int local_70;
  int local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar3 = false;
  if (in_x0[0xd1] != (HotUIWidget)0x0) {
    in_x0[0xd1] = (HotUIWidget)0x0;
    bVar3 = SUB81(in_x0,0);
    getAnchorParent(bVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    iVar1 = *(int *)(in_x0 + 0x48);
    iVar2 = *(int *)(in_x0 + 0x4c);
    *(undefined4 *)(in_x0 + 0x48) = 0;
    *(undefined4 *)(in_x0 + 0x4c) = 0;
    this = (HotUIWidget *)getParentHotUIWidget(in_x0);
    Sexy::Insets::Insets((Insets *)&local_68,0,0,0,0);
    if (this != (HotUIWidget *)0x0) {
      pDVar6 = (DynamicPadding *)GetPadding(this);
      DynamicPadding::DynamicPadding((DynamicPadding *)&local_48,pDVar6);
      HotUIHelpers::GetInsetsFromDynamicPadding((HotUIHelpers *)&local_48,extraout_x1);
      *(int *)(in_x0 + 0x48) = *(int *)(in_x0 + 0x48) + (int)local_58;
      *(int *)(in_x0 + 0x4c) = *(int *)(in_x0 + 0x4c) + local_58._4_4_;
      local_68 = local_58;
      uStack_60 = uStack_50;
      DynamicPadding::~DynamicPadding((DynamicPadding *)&local_48);
    }
    getAnchorParent(bVar3);
    bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_58);
    if (bVar4) {
      getAnchorParent(bVar3);
      pHVar8 = (HotUIWidget *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
      if (this != pHVar8) {
        Sexy::Insets::Insets((Insets *)&local_48);
        local_68 = CONCAT44(uStack_44,local_48);
        uStack_60 = uStack_40;
        getAnchorParent(bVar3);
        plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        (**(code **)(*plVar9 + 0xd0))(&local_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        (**(code **)(*(long *)in_x0 + 0xd0))((RtWeakPtr *)&local_58);
        if (*(long **)(in_x0 + 0x20) != (long *)0x0) {
          (**(code **)(**(long **)(in_x0 + 0x20) + 0xd0))
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
          local_58 = CONCAT44(uStack_44,local_48);
        }
        *(int *)(in_x0 + 0x48) = local_70 - (int)local_58;
        *(int *)(in_x0 + 0x4c) = local_6c - local_58._4_4_;
      }
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    }
    pAVar7 = (AnchorDescriptor *)GetAnchorDescriptor(in_x0);
    AnchorDescriptor::AnchorDescriptor((AnchorDescriptor *)&local_48,pAVar7);
    fVar11 = (float)getAnchorOffset();
    fVar13 = in_s1;
    Sexy::Insets::Insets((Insets *)&local_58);
    fVar12 = (float)getAnchorOffset();
    fVar11 = ((float)*(int *)(in_x0 + 0x48) - fVar12) + fVar11;
    *(int *)(in_x0 + 0x48) = (int)fVar11;
    *(int *)(in_x0 + 0x4c) = (int)(((float)*(int *)(in_x0 + 0x4c) - fVar13) + in_s1);
    fVar13 = (float)getExtraAnchorOffset
                              (in_x0,(AnchorDescriptor *)&local_48,this,(Insets *)&local_68);
    iVar10 = (int)((float)*(int *)(in_x0 + 0x48) + fVar13);
    *(int *)(in_x0 + 0x48) = iVar10;
    iVar5 = (int)((float)*(int *)(in_x0 + 0x4c) + fVar11);
    *(int *)(in_x0 + 0x4c) = iVar5;
    bVar3 = iVar1 != iVar10 || iVar2 != iVar5;
    if (iVar1 != iVar10 || iVar2 != iVar5) {
      notifyAnchorListenersOfChange(in_x0);
    }
    AnchorDescriptor::~AnchorDescriptor((AnchorDescriptor *)&local_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidget::getAnchorChildIterator(Sexy::RtWeakPtr<HotUIWidget>) */

void __thiscall HotUIWidget::getAnchorChildIterator(HotUIWidget *this,RtWeakPtrBase *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *pRVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x130);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) break;
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,pRVar3);
    uVar4 = local_18;
    if (cVar1 != '\0') goto LAB_03657314;
    FUN_03656a14((exception_ptr *)&local_18);
  }
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
LAB_03657314:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* HotUIWidget::StaticNew() */

HotUIWidget * HotUIWidget::StaticNew(void)

{
  HotUIWidget *this;
  
  this = ::operator_new(0x210);
  HotUIWidget(this);
  return this;
}


/* HotUIWidget::UnloadResources() */

void __thiscall HotUIWidget::UnloadResources(HotUIWidget *this)

{
  if (this[0x148] == (HotUIWidget)0x0) {
    return;
  }
  this[0x148] = (HotUIWidget)0x0;
  LawnApp::DeleteGroups(gLawnApp,(vector *)(this + 0x150));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x150));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidget::processStringReplaceMapHelper(std::string const&, std::map<std::string, std::string,
   std::less<std::string >, std::allocator<std::pair<std::string const, std::string > > > const&) */

void __thiscall
HotUIWidget::processStringReplaceMapHelper(HotUIWidget *this,string *param_1,map *param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::find((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                     *)param_2,param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    param_1 = (string *)(lVar2 + 8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidget::RemoveAnchorChild(Sexy::RtWeakPtr<HotUIWidget>, bool) */

void HotUIWidget::RemoveAnchorChild(HotUIWidget *param_1,RtWeakPtrBase *param_2)

{
  bool bVar1;
  HotUIWidget *this;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_10,param_2);
  local_18 = getAnchorChildIterator(param_1,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_1 + 0x130));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<Sexy::RtWeakPtr<HotUIWidget>,std::allocator<Sexy::RtWeakPtr<HotUIWidget>>>::erase
              ((vector<Sexy::RtWeakPtr<HotUIWidget>,std::allocator<Sexy::RtWeakPtr<HotUIWidget>>> *)
               (param_1 + 0x130),local_10);
    this = (HotUIWidget *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    ClearAnchorParent(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidget::ClearAnchorParent() */

void __thiscall HotUIWidget::ClearAnchorParent(HotUIWidget *this)

{
  RtMixedPtr<Sexy::Image> *this_00;
  char cVar1;
  undefined8 uVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x128);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)this_00);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    this[0xe8] = (HotUIWidget)0x1;
    uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    GetPtr();
    RemoveAnchorChild(uVar2,a_Stack_10,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    MarkAnchorDirty(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidget::SetAnchorChild(Sexy::RtWeakPtr<HotUIWidget>, bool) */

void __thiscall
HotUIWidget::SetAnchorChild
          (HotUIWidget *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,undefined1 param_3)

{
  bool bVar1;
  HotUIWidget *pHVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar2 = (HotUIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  GetPtr();
  SetAnchorParent(pHVar2,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)param_2);
  local_18 = getAnchorChildIterator(this,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x130));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (!bVar1) {
    std::vector<Sexy::RtWeakPtr<HotUIWidget>,std::allocator<Sexy::RtWeakPtr<HotUIWidget>>>::
    push_back((vector<Sexy::RtWeakPtr<HotUIWidget>,std::allocator<Sexy::RtWeakPtr<HotUIWidget>>> *)
              (this + 0x130),(RtWeakPtr *)param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidget::SetAnchorParent(Sexy::RtWeakPtr<HotUIWidget>, bool) */

void __thiscall HotUIWidget::SetAnchorParent(HotUIWidget *this,RtWeakPtrBase *param_2,char param_3)

{
  RtWeakPtrBase *this_00;
  HotUIWidget HVar1;
  char cVar2;
  bool bVar3;
  HotUIWidget *pHVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtrBase *)(this + 0x128);
  local_8 = ___stack_chk_guard;
  cVar2 = Sexy::RtWeakPtrBase::operator==(this_00,param_2);
  if (cVar2 == '\0') {
    HVar1 = this[0xe8];
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,this_00);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
    if (bVar3) {
      ClearAnchorParent(this);
    }
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)param_2);
    if (HVar1 == (HotUIWidget)0x0) {
      if (param_3 == '\0') {
        this[0xe8] = (HotUIWidget)0x0;
      }
    }
    else {
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x120),(RtWeakPtr *)param_2);
    }
    pHVar4 = (HotUIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    GetPtr();
    SetAnchorChild(pHVar4,aRStack_10,param_3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    MarkAnchorDirty(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidget::OverrideAnchorDescriptor(AnchorDescriptor const&) */

void __thiscall HotUIWidget::OverrideAnchorDescriptor(HotUIWidget *this,AnchorDescriptor *param_1)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ClearAnchorParent(this);
  this[0xe8] = (HotUIWidget)0x1;
  AnchorDescriptor::operator=((AnchorDescriptor *)(this + 0xf0),param_1);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x120),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_10,(RtWeakPtrBase *)(param_1 + 0x30));
  SetAnchorParent(this,a_Stack_10,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  MarkAnchorDirty(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidget::constructOverrideIfParentIsDifferent(Sexy::RtWeakPtr<HotUIWidget>, bool) */

void __thiscall
HotUIWidget::constructOverrideIfParentIsDifferent(HotUIWidget *this,RtWeakPtr *param_2,char param_3)

{
  char cVar1;
  AnchorDescriptor *pAVar2;
  RtWeakPtrBase aRStack_48 [8];
  AnchorDescriptor aAStack_40 [48];
  RtWeakPtr<PowerPropertySheet> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_3 == '\0') && (this[0xe8] == (HotUIWidget)0x0)) {
    getAnchorParent(SUB81(this,0));
    cVar1 = Sexy::RtWeakPtrBase::operator!=(aRStack_48,(RtWeakPtrBase *)(this + 0x128));
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    }
    else {
      pAVar2 = (AnchorDescriptor *)GetAnchorDescriptor(this);
      AnchorDescriptor::AnchorDescriptor(aAStack_40,pAVar2);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_10,param_2);
      OverrideAnchorDescriptor(this,aAStack_40);
      AnchorDescriptor::~AnchorDescriptor(aAStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    }
  }
  else {
    cVar1 = '\0';
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidget::ClearAnchorDescriptorOverride() */

void __thiscall HotUIWidget::ClearAnchorDescriptorOverride(HotUIWidget *this)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xe8] != (HotUIWidget)0x0) {
    ClearAnchorParent(this);
    this[0xe8] = (HotUIWidget)0x0;
    getAnchorParent(SUB81(this,0));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    SetAnchorParent(this,aRStack_10,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    MarkAnchorDirty(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidget::LoadResources() */

void __thiscall HotUIWidget::LoadResources(HotUIWidget *this)

{
  long lVar1;
  string *psVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (this[0x148] != (HotUIWidget)0x0) {
    return;
  }
  this[0x148] = (HotUIWidget)0x1;
  lVar1 = getProps(this);
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(lVar1 + 0x110);
    uVar3 = FUN_0365502c(uVar5,*(undefined8 *)(lVar1 + 0x118));
    if (uVar3 <= uVar4) break;
    psVar2 = (string *)FUN_03655038(uVar5,uVar4);
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)(this + 0x150),psVar2);
    uVar4 = uVar4 + 1;
  }
  LawnApp::LoadGroups(gLawnApp,(vector *)(this + 0x150));
  return;
}


/* HotUIWidget::InitializeWidget(Sexy::RtWeakPtr<HotUIWidget>,
   Sexy::RtWeakPtr<HotUIWidgetProperties>, std::map<std::string, std::string, std::less<std::string
   >, std::allocator<std::pair<std::string const, std::string > > > const&) */

void __thiscall
HotUIWidget::InitializeWidget
          (HotUIWidget *this,RtWeakPtr *param_2,RtWeakPtr<Sexy::ResourceInfo> *param_3,
          undefined8 param_4)

{
  long lVar1;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xd8),param_2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xe0),(RtWeakPtr *)param_3);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  this[0x6d] = (HotUIWidget)(*(byte *)(lVar1 + 0x108) ^ 1);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  this[0x59] = *(HotUIWidget *)(lVar1 + 0x10b);
  LoadResources(this);
  lVar1 = *(long *)this;
  if (*(code **)(lVar1 + 0x330) != onProcessStringReplaceMap) {
    (**(code **)(lVar1 + 0x330))(this,param_4);
    lVar1 = *(long *)this;
  }
  if (*(code **)(lVar1 + 0x328) != onInitializeWidget) {
    (**(code **)(lVar1 + 0x328))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidget::InitializeWidget(Sexy::RtWeakPtr<HotUIWidget>,
   Sexy::RtWeakPtr<HotUIWidgetProperties>) */

void __thiscall
HotUIWidget::InitializeWidget(HotUIWidget *this,RtWeakPtrBase *param_2,RtWeakPtrBase *param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,param_2);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,param_3);
  InitializeWidget(this,aRStack_48,aRStack_40,amStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidget::AddWidget(Sexy::Widget*) */

void __thiscall HotUIWidget::AddWidget(HotUIWidget *this,Widget *param_1)

{
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,param_1);
  MarkLayoutDirty(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidget::RemoveWidget(Sexy::Widget*) */

void __thiscall HotUIWidget::RemoveWidget(HotUIWidget *this,Widget *param_1)

{
  bool bVar1;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::RemoveWidget((WidgetContainer *)this,param_1);
  GetPtr();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (bVar1) {
    MarkLayoutDirty(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidget::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall HotUIWidget::DrawAll(HotUIWidget *this,ModalFlags *param_1,Graphics *param_2)

{
  char cVar1;
  int iVar2;
  wchar16 *pwVar3;
  undefined8 uVar4;
  LineBreakCategory *pLVar5;
  LineBreakCategory *pLVar6;
  LineBreakCategory *pLVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  string asStack_28 [8];
  LineBreakCategory aLStack_20 [8];
  string asStack_18 [16];
  LineBreakCategory *local_8;
  
  pLVar6 = (LineBreakCategory *)(ulong)(byte)this[0xd2];
  local_8 = ___stack_chk_guard;
  if (this[0xd2] == (HotUIWidget)0x0) {
    if (this[0xd1] == (HotUIWidget)0x0) {
      pLVar7 = ___stack_chk_guard;
      Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
      pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
      pLVar5 = aLStack_20;
      std::string::string(asStack_18,"DrawHotUIRects");
      cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                        (pwVar3,(wchar16 *)asStack_18,pLVar5,pLVar6,pLVar7);
      std::string::~string(asStack_18);
      nop();
      if (cVar1 != '\0') {
        Sexy::Insets::Insets((Insets *)asStack_18,0,0,0xff,0x32);
        Sexy::Graphics::SetColor(param_2,(Color *)asStack_18);
        Sexy::Graphics::FillRect(param_2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
        Sexy::Insets::Insets((Insets *)asStack_18,0xff,0xad,0,0xff);
        Sexy::Graphics::SetColor(param_2,(Color *)asStack_18);
        pLVar6 = (LineBreakCategory *)(ulong)(*(int *)(this + 0x50) - 1U);
        pLVar7 = (LineBreakCategory *)(ulong)(*(int *)(this + 0x54) - 1U);
        Sexy::Graphics::DrawRect(param_2,0,0,*(int *)(this + 0x50) - 1U,*(int *)(this + 0x54) - 1U);
      }
      pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
      pLVar5 = aLStack_20;
      std::string::string(asStack_18,"DrawHotUINames");
      cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                        (pwVar3,(wchar16 *)asStack_18,pLVar5,pLVar6,pLVar7);
      std::string::~string(asStack_18);
      nop();
      if (cVar1 != '\0') {
        if (((DAT_06aa9dd0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aa9dd0), iVar2 != 0)) {
          FUN_05478178(&DAT_06aa9e78,&DAT_05703a48,asStack_18);
          __cxa_guard_release(&DAT_06aa9dd0);
          __cxa_atexit(FUN_05476c50,&DAT_06aa9e78,&DAT_06a88000);
          nop();
        }
        GetName(this);
        auVar9 = FUN_05474178(asStack_28);
        if (auVar9._0_8_ == 0) {
          FUN_05477b24(aLStack_20,&DAT_06aa9e78);
        }
        else {
          Sexy::UTF8StringToWString((Sexy *)asStack_28,auVar9._8_8_);
        }
        pcVar8 = *(code **)(*(long *)this + 0x2a0);
        if (PrimeText_Game::Typeface_CafeteriaBlack_16 == (PrimeText_PotentialTypeface *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_16);
        }
        Sexy::Color::Color((Color *)asStack_18,0);
        (*pcVar8)(this,param_2,uVar4,asStack_18,aLStack_20,0,0,0xffffffff,0xffffffff,1,0,0xffffffff)
        ;
        pcVar8 = *(code **)(*(long *)this + 0x2a0);
        if (PrimeText_Game::Typeface_CafeteriaBlack_16 == (PrimeText_PotentialTypeface *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_16);
        }
        Sexy::Color::Color((Color *)asStack_18,1);
        (*pcVar8)(this,param_2,uVar4,asStack_18,aLStack_20,0,0,0xffffffff,0xffffffff,1,0,0xffffffff)
        ;
        FUN_05476c50(aLStack_20);
        std::string::~string(asStack_28);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

