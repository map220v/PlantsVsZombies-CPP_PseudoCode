// Class: CornucopiaTaskWidget


/* CornucopiaTaskWidget::~CornucopiaTaskWidget() */

void __thiscall CornucopiaTaskWidget::~CornucopiaTaskWidget(CornucopiaTaskWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069e1f90;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069e22f0;
  TemplateTaskWidget::~TemplateTaskWidget((TemplateTaskWidget *)this);
  return;
}


/* CornucopiaTaskWidget::~CornucopiaTaskWidget() */

void __thiscall CornucopiaTaskWidget::~CornucopiaTaskWidget(CornucopiaTaskWidget *this)

{
  ~CornucopiaTaskWidget(this);
  AK::FreeHook(this);
  return;
}


/* CornucopiaTaskWidget::CornucopiaTaskWidget() */

void __thiscall CornucopiaTaskWidget::CornucopiaTaskWidget(CornucopiaTaskWidget *this)

{
  TemplateTaskWidget::TemplateTaskWidget((TemplateTaskWidget *)this);
  *(undefined ***)this = &PTR_GetClass_069e1f90;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069e22f0;
  return;
}


/* CornucopiaTaskWidget::StaticNew() */

CornucopiaTaskWidget * CornucopiaTaskWidget::StaticNew(void)

{
  CornucopiaTaskWidget *this;
  
  this = ::operator_new(0x168);
  CornucopiaTaskWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaTaskWidget::StaticClassInit() */

void CornucopiaTaskWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"CornucopiaTaskWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_04e56898,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CornucopiaTaskWidget::StaticGetClass() */

long * CornucopiaTaskWidget::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CornucopiaTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CornucopiaTaskWidget::GetClass() const */

long * CornucopiaTaskWidget::GetClass(void)

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
  (*pcVar3)(plVar1,"CornucopiaTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaTaskWidget::DrawTaskBackground(Sexy::Graphics*) */

void __thiscall
CornucopiaTaskWidget::DrawTaskBackground(CornucopiaTaskWidget *this,Graphics *param_1)

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
  iVar2 = FUN_04e56010(2);
  iVar1 = *(int *)(this + 0x54);
  iVar3 = FUN_04e56010(10);
  iVar4 = FUN_04e56010(4);
  Sexy::Insets::Insets(aIStack_18,iVar2,iVar1 / 2 - iVar3,*(int *)(this + 0x50) - iVar4,iVar1 / 2);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9f9c8);
  Draw3SliceImage(param_1,aIStack_18,uVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaTaskWidget::RequestReward() */

void __thiscall CornucopiaTaskWidget::RequestReward(CornucopiaTaskWidget *this)

{
  undefined8 uVar1;
  long lVar2;
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2840];
  string asStack_1d0 [456];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"ti");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
  std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar2 + 8));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_04e55e44(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_1d0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CornucopiaTaskWidget::InitTask(GeneralTask*) */

void __thiscall CornucopiaTaskWidget::InitTask(CornucopiaTaskWidget *this,GeneralTask *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  RtObject *this_00;
  CornucopiaGradeTaskData *pCVar4;
  long lVar5;
  
  TemplateTaskWidget::InitTask((TemplateTaskWidget *)this,param_1);
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9f5c0);
  *(undefined8 *)(this + 0xe8) = uVar3;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x158) + 0x20));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
    pCVar4 = Sexy::RtObject::Cast<CornucopiaGradeTaskData>(this_00);
    if (pCVar4 != (CornucopiaGradeTaskData *)0x0) {
      *(undefined4 *)(this + 0x164) = *(undefined4 *)(pCVar4 + 0x50);
    }
  }
  iVar2 = FUN_04e56010(5);
  *(int *)(this + 0xfc) = *(int *)(this + 0xfc) + iVar2;
  iVar2 = FUN_04e56010(10);
  *(int *)(this + 0x124) = *(int *)(this + 0x124) - iVar2;
  iVar2 = FUN_04e56010(0x3c);
  *(int *)(this + 0x108) = *(int *)(this + 0x108) + iVar2;
  iVar2 = FUN_04e56010(7);
  *(int *)(this + 0x10c) = *(int *)(this + 0x10c) - iVar2;
  iVar2 = FUN_04e56010(0x55);
  lVar5 = *(long *)(this + 0x150);
  *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + iVar2;
  iVar2 = FUN_04e56010(7);
  *(int *)(lVar5 + 0x4c) = *(int *)(lVar5 + 0x4c) - iVar2;
  return;
}

