// Class: PlantCultivateTaskWidget


/* PlantCultivateTaskWidget::~PlantCultivateTaskWidget() */

void __thiscall PlantCultivateTaskWidget::~PlantCultivateTaskWidget(PlantCultivateTaskWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0663f4e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0663f840;
  TemplateTaskWidget::~TemplateTaskWidget((TemplateTaskWidget *)this);
  return;
}


/* PlantCultivateTaskWidget::~PlantCultivateTaskWidget() */

void __thiscall PlantCultivateTaskWidget::~PlantCultivateTaskWidget(PlantCultivateTaskWidget *this)

{
  ~PlantCultivateTaskWidget(this);
  AK::FreeHook(this);
  return;
}


/* PlantCultivateTaskWidget::PlantCultivateTaskWidget() */

void __thiscall PlantCultivateTaskWidget::PlantCultivateTaskWidget(PlantCultivateTaskWidget *this)

{
  TemplateTaskWidget::TemplateTaskWidget((TemplateTaskWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0663f4e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0663f840;
  return;
}


/* PlantCultivateTaskWidget::StaticNew() */

PlantCultivateTaskWidget * PlantCultivateTaskWidget::StaticNew(void)

{
  PlantCultivateTaskWidget *this;
  
  this = ::operator_new(0x168);
  PlantCultivateTaskWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCultivateTaskWidget::StaticClassInit() */

void PlantCultivateTaskWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantCultivateTaskWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_03480dd0,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCultivateTaskWidget::StaticGetClass() */

long * PlantCultivateTaskWidget::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantCultivateTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCultivateTaskWidget::GetClass() const */

long * PlantCultivateTaskWidget::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantCultivateTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCultivateTaskWidget::DrawTaskBackground(Sexy::Graphics*) */

void __thiscall
PlantCultivateTaskWidget::DrawTaskBackground(PlantCultivateTaskWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
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
  iVar1 = FUN_03480788(2);
  iVar2 = FUN_03480788(4);
  Sexy::Insets::Insets
            (aIStack_18,iVar1,*(int *)(this + 0x54) / 2,*(int *)(this + 0x50) - iVar2,
             *(int *)(this + 0x54) / 2);
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa1d38);
  Draw3SliceImage(param_1,aIStack_18,uVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCultivateTaskWidget::RequestReward() */

void __thiscall PlantCultivateTaskWidget::RequestReward(PlantCultivateTaskWidget *this)

{
  string *this_00;
  undefined8 uVar1;
  long lVar2;
  DNetwork *this_01;
  string *__n;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2888];
  string asStack_1a0 [408];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  __n = asStack_d40;
  std::string::string(asStack_ce8,"t");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
  std::string::append(this_00,"0",(size_t)__n);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_d40,"task_id");
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
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03480674(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_1a0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCultivateTaskWidget::InitTask(GeneralTask*) */

void __thiscall
PlantCultivateTaskWidget::InitTask(PlantCultivateTaskWidget *this,GeneralTask *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  RtObject *this_00;
  PlantCultivateTaskData *pPVar4;
  long lVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TemplateTaskWidget::InitTask((TemplateTaskWidget *)this,param_1);
  std::string::string(asStack_10,"IMAGE_UI_PLANTCULTIVATE_INTEGRATION");
  uVar3 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0xe8) = uVar3;
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x158) + 0x20));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
    pPVar4 = Sexy::RtObject::Cast<PlantCultivateTaskData>(this_00);
    if (pPVar4 != (PlantCultivateTaskData *)0x0) {
      *(undefined4 *)(this + 0x164) = *(undefined4 *)(pPVar4 + 0x50);
    }
  }
  iVar2 = FUN_03480788(0x1e);
  *(int *)(this + 0x124) = *(int *)(this + 0x124) - iVar2;
  iVar2 = FUN_03480788(0x1e);
  *(int *)(this + 0x10c) = *(int *)(this + 0x10c) - iVar2;
  iVar2 = FUN_03480788(0x1e);
  lVar5 = *(long *)(this + 0x150);
  *(int *)(lVar5 + 0x4c) = *(int *)(lVar5 + 0x4c) - iVar2;
  iVar2 = FUN_03480788(0x1e);
  *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + iVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

