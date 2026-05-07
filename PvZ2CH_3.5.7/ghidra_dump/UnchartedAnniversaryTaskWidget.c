// Class: UnchartedAnniversaryTaskWidget


/* UnchartedAnniversaryTaskWidget::~UnchartedAnniversaryTaskWidget() */

void __thiscall
UnchartedAnniversaryTaskWidget::~UnchartedAnniversaryTaskWidget
          (UnchartedAnniversaryTaskWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069d2b10;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069d2e70;
  TemplateTaskWidget::~TemplateTaskWidget((TemplateTaskWidget *)this);
  return;
}


/* UnchartedAnniversaryTaskWidget::~UnchartedAnniversaryTaskWidget() */

void __thiscall
UnchartedAnniversaryTaskWidget::~UnchartedAnniversaryTaskWidget
          (UnchartedAnniversaryTaskWidget *this)

{
  ~UnchartedAnniversaryTaskWidget(this);
  AK::FreeHook(this);
  return;
}


/* UnchartedAnniversaryTaskWidget::UnchartedAnniversaryTaskWidget() */

void __thiscall
UnchartedAnniversaryTaskWidget::UnchartedAnniversaryTaskWidget(UnchartedAnniversaryTaskWidget *this)

{
  TemplateTaskWidget::TemplateTaskWidget((TemplateTaskWidget *)this);
  *(undefined ***)this = &PTR_GetClass_069d2b10;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069d2e70;
  return;
}


/* UnchartedAnniversaryTaskWidget::StaticNew() */

UnchartedAnniversaryTaskWidget * UnchartedAnniversaryTaskWidget::StaticNew(void)

{
  UnchartedAnniversaryTaskWidget *this;
  
  this = ::operator_new(0x170);
  UnchartedAnniversaryTaskWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedAnniversaryTaskWidget::StaticClassInit() */

void UnchartedAnniversaryTaskWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"UnchartedAnniversaryTaskWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_04df9d24,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UnchartedAnniversaryTaskWidget::StaticGetClass() */

long * UnchartedAnniversaryTaskWidget::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UnchartedAnniversaryTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UnchartedAnniversaryTaskWidget::GetClass() const */

long * UnchartedAnniversaryTaskWidget::GetClass(void)

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
  (*pcVar3)(plVar1,"UnchartedAnniversaryTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedAnniversaryTaskWidget::DrawTaskBackground(Sexy::Graphics*) */

void __thiscall
UnchartedAnniversaryTaskWidget::DrawTaskBackground
          (UnchartedAnniversaryTaskWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedAnniversaryTaskWidget::RequestReward() */

void __thiscall UnchartedAnniversaryTaskWidget::RequestReward(UnchartedAnniversaryTaskWidget *this)

{
  PVZ2UnchartedModeUtils *this_00;
  PVZ2UnchartedModeUtils *this_01;
  undefined8 uVar1;
  long lVar2;
  DNetwork *this_02;
  undefined4 local_d54;
  string asStack_d50 [8];
  string asStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2688];
  string asStack_268 [608];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PVZ2UnchartedModeUtils *)
            std::
            map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
            ::map(amStack_d18);
  PVZ2UnchartedModeUtils::GetCurrentLevel(this_00);
  FUN_05475d88(asStack_ce8,asStack_d50);
  local_d54 = PVZ2UnchartedModeUtils::GetWorldIndexOfLevel(asStack_ce8);
  std::string::~string(asStack_ce8);
  PVZ2UnchartedModeUtils::GetPrefixWorld(this_01);
  std::string::string(asStack_ce8,"world");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_ce8);
  thunk_FUN_05475e00(uVar1,asStack_d48);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_d40,"levelid");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_d54);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"index");
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
  this_02 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_04df9960(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_02,asStack_268,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::string::~string(asStack_d48);
  std::string::~string(asStack_d50);
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


/* UnchartedAnniversaryTaskWidget::InitTask(GeneralTask*) */

void __thiscall
UnchartedAnniversaryTaskWidget::InitTask(UnchartedAnniversaryTaskWidget *this,GeneralTask *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  RtObject *this_00;
  UnchartedBirthdayTaskData *pUVar6;
  int *piVar7;
  long *plVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  TemplateTaskWidget::InitTask((TemplateTaskWidget *)this,param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x158) + 0x20));
  if (bVar1) {
    uVar11 = 0;
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
    pUVar6 = Sexy::RtObject::Cast<UnchartedBirthdayTaskData>(this_00);
    if (pUVar6 != (UnchartedBirthdayTaskData *)0x0) {
      while( true ) {
        uVar12 = *(undefined8 *)(pUVar6 + 0x70);
        uVar9 = FUN_04df92d0(uVar12,*(undefined8 *)(pUVar6 + 0x78));
        if (uVar9 <= uVar11) break;
        piVar7 = (int *)FUN_04df92dc(uVar12,uVar11);
        plVar8 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar7,piVar7[1],true);
        iVar2 = FUN_04df99bc(0xfa);
        iVar3 = FUN_04df99bc(0x34);
        uVar4 = FUN_04df99bc(0x4b);
        uVar5 = FUN_04df99bc(0x32);
        iVar10 = (int)uVar11;
        uVar11 = uVar11 + 1;
        (**(code **)(*plVar8 + 0x198))(plVar8,iVar2 + iVar3 * iVar10,uVar4,uVar5,uVar5);
        (**(code **)(*(long *)this + 0x60))(this,plVar8);
      }
    }
  }
  iVar2 = FUN_04df99bc(5);
  *(int *)(this + 0xfc) = *(int *)(this + 0xfc) + iVar2;
  iVar2 = FUN_04df99bc(10);
  *(int *)(this + 0x124) = *(int *)(this + 0x124) - iVar2;
  iVar2 = FUN_04df99bc(0xf);
  *(int *)(*(long *)(this + 0x150) + 0x48) = *(int *)(*(long *)(this + 0x150) + 0x48) - iVar2;
  *(undefined4 *)(this + 0x168) = 0;
  return;
}

