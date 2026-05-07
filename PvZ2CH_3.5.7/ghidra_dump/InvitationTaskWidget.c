// Class: InvitationTaskWidget


/* InvitationTaskWidget::~InvitationTaskWidget() */

void __thiscall InvitationTaskWidget::~InvitationTaskWidget(InvitationTaskWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069e48f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069e4c50;
  TemplateTaskWidget::~TemplateTaskWidget((TemplateTaskWidget *)this);
  return;
}


/* InvitationTaskWidget::~InvitationTaskWidget() */

void __thiscall InvitationTaskWidget::~InvitationTaskWidget(InvitationTaskWidget *this)

{
  ~InvitationTaskWidget(this);
  AK::FreeHook(this);
  return;
}


/* InvitationTaskWidget::InvitationTaskWidget() */

void __thiscall InvitationTaskWidget::InvitationTaskWidget(InvitationTaskWidget *this)

{
  TemplateTaskWidget::TemplateTaskWidget((TemplateTaskWidget *)this);
  *(undefined ***)this = &PTR_GetClass_069e48f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069e4c50;
  return;
}


/* InvitationTaskWidget::StaticNew() */

InvitationTaskWidget * InvitationTaskWidget::StaticNew(void)

{
  InvitationTaskWidget *this;
  
  this = ::operator_new(0x168);
  InvitationTaskWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InvitationTaskWidget::StaticClassInit() */

void InvitationTaskWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"InvitationTaskWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_04e6850c,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InvitationTaskWidget::StaticGetClass() */

long * InvitationTaskWidget::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"InvitationTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InvitationTaskWidget::GetClass() const */

long * InvitationTaskWidget::GetClass(void)

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
  (*pcVar3)(plVar1,"InvitationTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InvitationTaskWidget::DrawTaskBackground(Sexy::Graphics*) */

void __thiscall
InvitationTaskWidget::DrawTaskBackground(InvitationTaskWidget *this,Graphics *param_1)

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
  iVar2 = FUN_04e67c24(2);
  iVar1 = *(int *)(this + 0x54);
  iVar3 = FUN_04e67c24(10);
  iVar4 = FUN_04e67c24(4);
  Sexy::Insets::Insets(aIStack_18,iVar2,iVar1 / 2 - iVar3,*(int *)(this + 0x50) - iVar4,iVar1 / 2);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9fd20);
  Draw3SliceImage(param_1,aIStack_18,uVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InvitationTaskWidget::RequestReward() */

void __thiscall InvitationTaskWidget::RequestReward(InvitationTaskWidget *this)

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
  std::string::string(asStack_68,"index");
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
  std::string::string(asStack_68,"V877");
  FUN_04e6799c(afStack_58,this);
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
/* InvitationTaskWidget::InitTask(GeneralTask*) */

void __thiscall InvitationTaskWidget::InitTask(InvitationTaskWidget *this,GeneralTask *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  RtObject *this_00;
  InvitationGradeTaskData *pIVar5;
  long lVar6;
  ActiveItem aAStack_140 [8];
  undefined4 local_138;
  char local_128;
  InvitationData aIStack_c0 [88];
  undefined8 local_68;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TemplateTaskWidget::InitTask((TemplateTaskWidget *)this,param_1);
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9fcb8);
  *(undefined8 *)(this + 0xe8) = uVar4;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x158) + 0x20));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
    pIVar5 = Sexy::RtObject::Cast<InvitationGradeTaskData>(this_00);
    if (pIVar5 != (InvitationGradeTaskData *)0x0) {
      *(undefined4 *)(this + 0x164) = *(undefined4 *)(pIVar5 + 0x50);
    }
  }
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar2 = FUN_04e65e6c(local_138);
  if ((cVar2 != '\0') && (local_128 != '\0')) {
    InvitationData::InvitationData(aIStack_c0);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_140,(RtObject *)aIStack_c0);
    if (cVar2 != '\0') {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x20));
      lVar6 = FUN_04e66034(local_68,(long)*(int *)(lVar6 + 8));
      if (*(char *)(lVar6 + 4) != '\0') {
        (**(code **)(*(long *)param_1 + 0x68))(param_1);
        (**(code **)(*(long *)this + 0x340))(this);
      }
    }
    InvitationData::~InvitationData(aIStack_c0);
  }
  iVar3 = FUN_04e67c24(5);
  *(int *)(this + 0xfc) = *(int *)(this + 0xfc) + iVar3;
  iVar3 = FUN_04e67c24(10);
  *(int *)(this + 0x124) = *(int *)(this + 0x124) - iVar3;
  iVar3 = FUN_04e67c24(0x3c);
  *(int *)(this + 0x108) = *(int *)(this + 0x108) + iVar3;
  iVar3 = FUN_04e67c24(7);
  *(int *)(this + 0x10c) = *(int *)(this + 0x10c) - iVar3;
  iVar3 = FUN_04e67c24(0x55);
  lVar6 = *(long *)(this + 0x150);
  *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + iVar3;
  iVar3 = FUN_04e67c24(7);
  *(int *)(lVar6 + 0x4c) = *(int *)(lVar6 + 0x4c) - iVar3;
  ActiveItem::~ActiveItem(aAStack_140);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

