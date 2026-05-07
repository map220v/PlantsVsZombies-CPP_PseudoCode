// Class: DaveKitchenTaskWidget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveKitchenTaskWidget::StaticClassInit() */

void DaveKitchenTaskWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveKitchenTaskWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_03494e9c,400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveKitchenTaskWidget::StaticGetClass() */

long * DaveKitchenTaskWidget::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveKitchenTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveKitchenTaskWidget::GetClass() const */

long * DaveKitchenTaskWidget::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveKitchenTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveKitchenTaskWidget::DaveKitchenTaskWidget() */

void __thiscall DaveKitchenTaskWidget::DaveKitchenTaskWidget(DaveKitchenTaskWidget *this)

{
  TemplateTaskWidget::TemplateTaskWidget((TemplateTaskWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06642460;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066427c0;
  PlantWarsStarRewardData::PlantWarsStarRewardData((PlantWarsStarRewardData *)(this + 0x170));
  return;
}


/* DaveKitchenTaskWidget::StaticNew() */

DaveKitchenTaskWidget * DaveKitchenTaskWidget::StaticNew(void)

{
  DaveKitchenTaskWidget *this;
  
  this = ::operator_new(400);
  DaveKitchenTaskWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveKitchenTaskWidget::DrawProgress(Sexy::Graphics*) */

void __thiscall DaveKitchenTaskWidget::DrawProgress(DaveKitchenTaskWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[TRAVEL_LOG_PROGRASS]");
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,(Insets *)&local_28,this + 0x120,uVar9,aIStack_18,0,1);
  FUN_05476c50((Insets *)&local_28);
  iVar1 = *(int *)(this + 300);
  iVar2 = *(int *)(this + 0x120);
  iVar3 = *(int *)(this + 0x128);
  iVar4 = *(int *)(this + 0x124);
  iVar6 = FUN_03494b84(0x14);
  iVar7 = FUN_03494b84(100);
  iVar8 = FUN_03494b84(0x12);
  Sexy::Insets::Insets
            ((Insets *)&local_28,iVar2 + iVar3,((iVar1 << 1) / 3 + iVar4) - iVar6,iVar7,iVar8);
  iVar1 = *(int *)(*(long *)(this + 0x158) + 0x10);
  lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
  iVar2 = *(int *)(lVar10 + 0x28);
  Sexy::Insets::Insets(aIStack_18,local_28,local_24,local_20,local_1c);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2be8);
  Draw9SliceImage(param_1,aIStack_18,uVar9);
  if (*(int *)(*(long *)(this + 0x158) + 0x10) == 0) {
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
    if (*(int *)(lVar10 + 0x28) < 0) {
LAB_03495808:
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
      uVar5 = *(uint *)(lVar10 + 0x28);
      lVar10 = *(long *)(this + 0x158);
      goto LAB_034956e8;
    }
  }
  else {
    fVar11 = (float)NEON_fminnm((float)iVar1 / (float)iVar2,0x3f800000);
    Sexy::Insets::Insets(aIStack_18,local_28,local_24,(int)(fVar11 * (float)local_20),local_1c);
    uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa29e8);
    Draw3SliceImage(param_1,aIStack_18,uVar9);
    iVar1 = *(int *)(*(long *)(this + 0x158) + 0x10);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
    if (*(int *)(lVar10 + 0x28) < iVar1) goto LAB_03495808;
  }
  lVar10 = *(long *)(this + 0x158);
  uVar5 = *(uint *)(lVar10 + 0x10);
LAB_034956e8:
  lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar10 + 0x20));
  Sexy::StrFormat("%d / %d",aIStack_18,(ulong)uVar5,(ulong)*(uint *)(lVar10 + 0x28));
  Sexy::ToWString((string *)aIStack_18);
  std::string::~string((string *)aIStack_18);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,4);
  WriteWordInRect(param_1,auStack_30,(Insets *)&local_28,uVar9,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveKitchenTaskWidget::DrawTaskBackground(Sexy::Graphics*) */

void __thiscall
DaveKitchenTaskWidget::DrawTaskBackground(DaveKitchenTaskWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Draw9SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0xe0));
  iVar1 = FUN_03494b84(2);
  iVar2 = FUN_03494b84(4);
  Sexy::Insets::Insets
            (aIStack_18,iVar1,*(int *)(this + 0x54) / 2,*(int *)(this + 0x50) - iVar2,
             *(int *)(this + 0x54) / 2);
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2b58);
  Draw3SliceImage(param_1,aIStack_18,uVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveKitchenTaskWidget::~DaveKitchenTaskWidget() */

void __thiscall DaveKitchenTaskWidget::~DaveKitchenTaskWidget(DaveKitchenTaskWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06642460;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066427c0;
  PlantWarsStarRewardData::~PlantWarsStarRewardData((PlantWarsStarRewardData *)(this + 0x170));
  TemplateTaskWidget::~TemplateTaskWidget((TemplateTaskWidget *)this);
  return;
}


/* DaveKitchenTaskWidget::~DaveKitchenTaskWidget() */

void __thiscall DaveKitchenTaskWidget::~DaveKitchenTaskWidget(DaveKitchenTaskWidget *this)

{
  ~DaveKitchenTaskWidget(this);
  AK::FreeHook(this);
  return;
}


/* DaveKitchenTaskWidget::SetTaskData(int, DaveKitchenTaskInfo) */

void __thiscall
DaveKitchenTaskWidget::SetTaskData
          (DaveKitchenTaskWidget *this,undefined4 param_1,CarnivalRewardData *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  *(undefined4 *)(this + 0x168) = param_1;
  uVar9 = 0;
  CarnivalRewardData::operator=((CarnivalRewardData *)(this + 0x170),param_3);
  iVar1 = FUN_03494b84(0xf5);
  uVar2 = FUN_03494b84(0x3f);
  iVar3 = FUN_03494b84(0x37);
  while( true ) {
    uVar10 = *(undefined8 *)(this + 0x178);
    uVar7 = FUN_0349435c(uVar10,*(undefined8 *)(this + 0x180));
    if (uVar7 <= uVar9) break;
    piVar5 = (int *)FUN_03494370(uVar10,uVar9);
    plVar6 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar5,piVar5[1],true);
    iVar4 = FUN_03494b84(10);
    iVar8 = (int)uVar9;
    uVar9 = uVar9 + 1;
    (**(code **)(*plVar6 + 0x198))(plVar6,iVar1 + (iVar4 + iVar3) * iVar8,uVar2,iVar3,iVar3);
    (**(code **)(*(long *)this + 0x60))(this,plVar6);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveKitchenTaskWidget::RequestReward() */

void __thiscall DaveKitchenTaskWidget::RequestReward(DaveKitchenTaskWidget *this)

{
  undefined8 uVar1;
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [3072];
  string asStack_e8 [224];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"key");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x168));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03494acc(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_e8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* DaveKitchenTaskWidget::InitTask(GeneralTask*) */

void __thiscall DaveKitchenTaskWidget::InitTask(DaveKitchenTaskWidget *this,GeneralTask *param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  RtObject *this_00;
  long *plVar9;
  
  TemplateTaskWidget::InitTask((TemplateTaskWidget *)this,param_1);
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x158) + 0x20));
  if (bVar3) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
    Sexy::RtObject::Cast<DaveKitchenTaskData>(this_00);
  }
  plVar9 = *(long **)(this + 0x150);
  iVar4 = FUN_03494b84(0x46);
  lVar1 = plVar9[9];
  iVar5 = FUN_03494b84(0xf);
  iVar8 = *(int *)((long)plVar9 + 0x4c);
  iVar6 = FUN_03494b84(0x14);
  lVar2 = plVar9[10];
  iVar7 = FUN_03494b84(10);
  (**(code **)(*plVar9 + 0x198))
            (plVar9,iVar4 + (int)lVar1,iVar8 - iVar5,(int)lVar2 - iVar6,
             *(int *)((long)plVar9 + 0x54) - iVar7);
  iVar8 = FUN_03494b84(0);
  *(int *)(this + 0x124) = *(int *)(this + 0x124) - iVar8;
  iVar8 = FUN_03494b84(0x19);
  *(int *)(this + 0x10c) = *(int *)(this + 0x10c) - iVar8;
  return;
}

