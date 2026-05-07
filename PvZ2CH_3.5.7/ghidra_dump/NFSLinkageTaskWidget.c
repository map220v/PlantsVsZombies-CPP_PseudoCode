// Class: NFSLinkageTaskWidget


/* NFSLinkageTaskWidget::~NFSLinkageTaskWidget() */

void __thiscall NFSLinkageTaskWidget::~NFSLinkageTaskWidget(NFSLinkageTaskWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069ec670;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069ec9d0;
  TemplateTaskWidget::~TemplateTaskWidget((TemplateTaskWidget *)this);
  return;
}


/* NFSLinkageTaskWidget::~NFSLinkageTaskWidget() */

void __thiscall NFSLinkageTaskWidget::~NFSLinkageTaskWidget(NFSLinkageTaskWidget *this)

{
  ~NFSLinkageTaskWidget(this);
  AK::FreeHook(this);
  return;
}


/* NFSLinkageTaskWidget::NFSLinkageTaskWidget() */

void __thiscall NFSLinkageTaskWidget::NFSLinkageTaskWidget(NFSLinkageTaskWidget *this)

{
  TemplateTaskWidget::TemplateTaskWidget((TemplateTaskWidget *)this);
  *(undefined ***)this = &PTR_GetClass_069ec670;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069ec9d0;
  return;
}


/* NFSLinkageTaskWidget::StaticNew() */

NFSLinkageTaskWidget * NFSLinkageTaskWidget::StaticNew(void)

{
  NFSLinkageTaskWidget *this;
  
  this = ::operator_new(0x168);
  NFSLinkageTaskWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NFSLinkageTaskWidget::StaticClassInit() */

void NFSLinkageTaskWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"NFSLinkageTaskWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_04e8eba8,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NFSLinkageTaskWidget::StaticGetClass() */

long * NFSLinkageTaskWidget::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NFSLinkageTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NFSLinkageTaskWidget::GetClass() const */

long * NFSLinkageTaskWidget::GetClass(void)

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
  (*pcVar3)(plVar1,"NFSLinkageTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NFSLinkageTaskWidget::DrawTaskBackground(Sexy::Graphics*) */

void __thiscall
NFSLinkageTaskWidget::DrawTaskBackground(NFSLinkageTaskWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  SalesProgressBar *this_00;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xe0));
  this_00 = *(SalesProgressBar **)(this + 0xe0);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar1,iVar2);
  Sexy::Graphics::DrawImage(param_1,(Image *)this_00,(TRect *)aIStack_28,(TRect *)aIStack_18);
  iVar2 = FUN_04e8e694(2);
  iVar1 = *(int *)(this + 0x54);
  iVar3 = FUN_04e8e694(10);
  iVar4 = FUN_04e8e694(4);
  Sexy::Insets::Insets(aIStack_18,iVar2,iVar1 / 2 - iVar3,*(int *)(this + 0x50) - iVar4,iVar1 / 2);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba10e0);
  Draw3SliceImage(param_1,aIStack_18,uVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NFSLinkageTaskWidget::RequestReward() */

void __thiscall NFSLinkageTaskWidget::RequestReward(NFSLinkageTaskWidget *this)

{
  undefined8 uVar1;
  long lVar2;
  DNetwork *this_00;
  string asStack_68 [8];
  string asStack_60 [8];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_68,"t");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_68);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
  std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar2 + 8));
  FUN_05474278(uVar1,asStack_60);
  std::string::~string(asStack_60);
  std::string::~string(asStack_68);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  std::string::string(asStack_68,"V406");
  FUN_04e8e580(afStack_58,this);
  std::string::string(asStack_60,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_68,(map *)amStack_38,30.0,(function *)afStack_58,true,true,asStack_60,0
            );
  std::string::~string(asStack_60);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  std::string::~string(asStack_68);
  nop();
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NFSLinkageTaskWidget::InitTask(GeneralTask*) */

void __thiscall NFSLinkageTaskWidget::InitTask(NFSLinkageTaskWidget *this,GeneralTask *param_1)

{
  int iVar1;
  RtObject *this_00;
  NFSLinkageGradeTaskData *pNVar2;
  undefined8 uVar3;
  long lVar4;
  int local_38 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TemplateTaskWidget::InitTask((TemplateTaskWidget *)this,param_1);
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
  pNVar2 = Sexy::RtObject::Cast<NFSLinkageGradeTaskData>(this_00);
  if (pNVar2 != (NFSLinkageGradeTaskData *)0x0) {
    *(undefined4 *)(this + 0x164) = *(undefined4 *)(pNVar2 + 0x50);
  }
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba1130);
  iVar1 = *(int *)(pNVar2 + 8);
  *(undefined8 *)(this + 0xe8) = uVar3;
  if (iVar1 == 0x3f4) {
    GetGameItemInfo(0x63d9,0x7fffffff,0);
    if (local_38[0] != 0) {
      uVar3 = StringHelper::ToImage(asStack_18,false);
      *(undefined8 *)(this + 0xe8) = uVar3;
    }
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
  }
  iVar1 = FUN_04e8e694(5);
  *(int *)(this + 0xfc) = *(int *)(this + 0xfc) + iVar1;
  iVar1 = FUN_04e8e694(10);
  *(int *)(this + 0x124) = *(int *)(this + 0x124) - iVar1;
  iVar1 = FUN_04e8e694(0x3c);
  *(int *)(this + 0x108) = *(int *)(this + 0x108) + iVar1;
  iVar1 = FUN_04e8e694(7);
  *(int *)(this + 0x10c) = *(int *)(this + 0x10c) - iVar1;
  iVar1 = FUN_04e8e694(0x55);
  lVar4 = *(long *)(this + 0x150);
  *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + iVar1;
  iVar1 = FUN_04e8e694(7);
  *(int *)(lVar4 + 0x4c) = *(int *)(lVar4 + 0x4c) - iVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

