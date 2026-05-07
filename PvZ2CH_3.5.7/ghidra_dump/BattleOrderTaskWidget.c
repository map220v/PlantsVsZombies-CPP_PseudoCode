// Class: BattleOrderTaskWidget


/* BattleOrderTaskWidget::~BattleOrderTaskWidget() */

void __thiscall BattleOrderTaskWidget::~BattleOrderTaskWidget(BattleOrderTaskWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_067028e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06702c40;
  TemplateTaskWidget::~TemplateTaskWidget((TemplateTaskWidget *)this);
  return;
}


/* BattleOrderTaskWidget::~BattleOrderTaskWidget() */

void __thiscall BattleOrderTaskWidget::~BattleOrderTaskWidget(BattleOrderTaskWidget *this)

{
  ~BattleOrderTaskWidget(this);
  AK::FreeHook(this);
  return;
}


/* BattleOrderTaskWidget::BattleOrderTaskWidget() */

void __thiscall BattleOrderTaskWidget::BattleOrderTaskWidget(BattleOrderTaskWidget *this)

{
  TemplateTaskWidget::TemplateTaskWidget((TemplateTaskWidget *)this);
  *(undefined ***)this = &PTR_GetClass_067028e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06702c40;
  return;
}


/* BattleOrderTaskWidget::StaticNew() */

BattleOrderTaskWidget * BattleOrderTaskWidget::StaticNew(void)

{
  BattleOrderTaskWidget *this;
  
  this = ::operator_new(0x168);
  BattleOrderTaskWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderTaskWidget::StaticClassInit() */

void BattleOrderTaskWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"BattleOrderTaskWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_03a2df44,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BattleOrderTaskWidget::StaticGetClass() */

long * BattleOrderTaskWidget::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BattleOrderTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BattleOrderTaskWidget::GetClass() const */

long * BattleOrderTaskWidget::GetClass(void)

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
  (*pcVar3)(plVar1,"BattleOrderTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderTaskWidget::RequestReward() */

void __thiscall BattleOrderTaskWidget::RequestReward(BattleOrderTaskWidget *this)

{
  undefined8 uVar1;
  long lVar2;
  DNetwork *this_00;
  int local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1608];
  string asStack_6a0 [1688];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"type");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
  local_d48[0] = *(int *)(lVar2 + 0xc) + -1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
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
  FUN_03a2d634(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_6a0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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
/* BattleOrderTaskWidget::InitTask(GeneralTask*) */

void __thiscall BattleOrderTaskWidget::InitTask(BattleOrderTaskWidget *this,GeneralTask *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  RtObject *this_00;
  BattleOrderTaskData *pBVar4;
  long lVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TemplateTaskWidget::InitTask((TemplateTaskWidget *)this,param_1);
  std::string::string(asStack_10,"IMAGE_UI_BATTLEORDER_EXP");
  uVar3 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0xe8) = uVar3;
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x158) + 0x20));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
    pBVar4 = Sexy::RtObject::Cast<BattleOrderTaskData>(this_00);
    if (pBVar4 != (BattleOrderTaskData *)0x0) {
      *(undefined4 *)(this + 0x164) = *(undefined4 *)(pBVar4 + 0x50);
    }
  }
  iVar2 = FUN_03a2d914(5);
  *(int *)(this + 0xfc) = *(int *)(this + 0xfc) + iVar2;
  iVar2 = FUN_03a2d914(10);
  *(int *)(this + 0x124) = *(int *)(this + 0x124) - iVar2;
  iVar2 = FUN_03a2d914(0x3c);
  *(int *)(this + 0x108) = *(int *)(this + 0x108) - iVar2;
  iVar2 = FUN_03a2d914(10);
  *(int *)(this + 0x10c) = *(int *)(this + 0x10c) - iVar2;
  iVar2 = FUN_03a2d914(0x32);
  lVar5 = *(long *)(this + 0x150);
  *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) - iVar2;
  iVar2 = FUN_03a2d914(10);
  *(int *)(lVar5 + 0x4c) = *(int *)(lVar5 + 0x4c) - iVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

