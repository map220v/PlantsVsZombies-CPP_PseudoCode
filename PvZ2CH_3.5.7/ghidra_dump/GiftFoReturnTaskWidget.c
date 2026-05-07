// Class: GiftFoReturnTaskWidget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiftFoReturnTaskWidget::DrawRewards(Sexy::Graphics*) */

void __thiscall GiftFoReturnTaskWidget::DrawRewards(GiftFoReturnTaskWidget *this,Graphics *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[QUEST_REWARD_LABEL]");
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,auStack_20,this + 0x108,uVar1,aCStack_18,0,1);
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiftFoReturnTaskWidget::StaticClassInit() */

void GiftFoReturnTaskWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"GiftFoReturnTaskWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_0348b7ec,0x1a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GiftFoReturnTaskWidget::StaticGetClass() */

long * GiftFoReturnTaskWidget::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GiftFoReturnTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GiftFoReturnTaskWidget::GetClass() const */

long * GiftFoReturnTaskWidget::GetClass(void)

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
  (*pcVar3)(plVar1,"GiftFoReturnTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GiftFoReturnTaskWidget::GiftFoReturnTaskWidget() */

void __thiscall GiftFoReturnTaskWidget::GiftFoReturnTaskWidget(GiftFoReturnTaskWidget *this)

{
  TemplateTaskWidget::TemplateTaskWidget((TemplateTaskWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06640630;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06640990;
  FUN_05476574(this + 0x168);
  GiftFoReturnTaskInfo::GiftFoReturnTaskInfo((GiftFoReturnTaskInfo *)(this + 0x170));
  return;
}


/* GiftFoReturnTaskWidget::StaticNew() */

GiftFoReturnTaskWidget * GiftFoReturnTaskWidget::StaticNew(void)

{
  GiftFoReturnTaskWidget *this;
  
  this = ::operator_new(0x1a0);
  GiftFoReturnTaskWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiftFoReturnTaskWidget::DrawProgress(Sexy::Graphics*) */

void __thiscall GiftFoReturnTaskWidget::DrawProgress(GiftFoReturnTaskWidget *this,Graphics *param_1)

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
  iVar6 = FUN_0348b398(0x14);
  iVar7 = FUN_0348b398(100);
  iVar8 = FUN_0348b398(0x12);
  Sexy::Insets::Insets
            ((Insets *)&local_28,iVar2 + iVar3,((iVar1 << 1) / 3 + iVar4) - iVar6,iVar7,iVar8);
  iVar1 = *(int *)(*(long *)(this + 0x158) + 0x10);
  lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
  iVar2 = *(int *)(lVar10 + 0x28);
  Sexy::Insets::Insets(aIStack_18,local_28,local_24,local_20,local_1c);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa20d0);
  Draw9SliceImage(param_1,aIStack_18,uVar9);
  if (*(int *)(*(long *)(this + 0x158) + 0x10) == 0) {
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
    if (*(int *)(lVar10 + 0x28) < 0) {
LAB_0348cba4:
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
      uVar5 = *(uint *)(lVar10 + 0x28);
      lVar10 = *(long *)(this + 0x158);
      goto LAB_0348ca84;
    }
  }
  else {
    fVar11 = (float)NEON_fminnm((float)iVar1 / (float)iVar2,0x3f800000);
    Sexy::Insets::Insets(aIStack_18,local_28,local_24,(int)(fVar11 * (float)local_20),local_1c);
    uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa23c0);
    Draw3SliceImage(param_1,aIStack_18,uVar9);
    iVar1 = *(int *)(*(long *)(this + 0x158) + 0x10);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
    if (*(int *)(lVar10 + 0x28) < iVar1) goto LAB_0348cba4;
  }
  lVar10 = *(long *)(this + 0x158);
  uVar5 = *(uint *)(lVar10 + 0x10);
LAB_0348ca84:
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
/* GiftFoReturnTaskWidget::DrawTaskBackground(Sexy::Graphics*) */

void __thiscall
GiftFoReturnTaskWidget::DrawTaskBackground(GiftFoReturnTaskWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Draw9SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0xe0));
  iVar1 = FUN_0348b398(2);
  iVar2 = FUN_0348b398(4);
  Sexy::Insets::Insets
            (aIStack_18,iVar1,*(int *)(this + 0x54) / 2,*(int *)(this + 0x50) - iVar2,
             *(int *)(this + 0x54) / 2);
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2700);
  Draw3SliceImage(param_1,aIStack_18,uVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GiftFoReturnTaskWidget::~GiftFoReturnTaskWidget() */

void __thiscall GiftFoReturnTaskWidget::~GiftFoReturnTaskWidget(GiftFoReturnTaskWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06640630;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06640990;
  PlantWarsStarRewardData::~PlantWarsStarRewardData((PlantWarsStarRewardData *)(this + 0x170));
  FUN_05476c50(this + 0x168);
  TemplateTaskWidget::~TemplateTaskWidget((TemplateTaskWidget *)this);
  return;
}


/* GiftFoReturnTaskWidget::~GiftFoReturnTaskWidget() */

void __thiscall GiftFoReturnTaskWidget::~GiftFoReturnTaskWidget(GiftFoReturnTaskWidget *this)

{
  ~GiftFoReturnTaskWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiftFoReturnTaskWidget::SetTaskData(GiftFoReturnTaskInfo) */

void __thiscall
GiftFoReturnTaskWidget::SetTaskData(GiftFoReturnTaskWidget *this,GiftFoReturnTaskInfo *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  Image *pIVar12;
  UIWidgetImage *pUVar13;
  UIWidgetText *this_00;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  code *pcVar17;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar15 = 0;
  GiftFoReturnTaskInfo::operator=((GiftFoReturnTaskInfo *)(this + 0x170),param_2);
  iVar1 = FUN_0348b398(0xf0);
  uVar2 = FUN_0348b398(0x2d);
  iVar3 = FUN_0348b398(0x37);
  while( true ) {
    uVar16 = *(undefined8 *)(param_2 + 8);
    uVar10 = FUN_03489fe4(uVar16,*(undefined8 *)(param_2 + 0x10));
    if (uVar10 <= uVar15) break;
    piVar8 = (int *)FUN_03489ff8(uVar16,uVar15);
    plVar9 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar8,piVar8[1],false);
    iVar4 = FUN_0348b398(10);
    iVar14 = (int)uVar15;
    uVar15 = uVar15 + 1;
    (**(code **)(*plVar9 + 0x198))(plVar9,iVar1 + (iVar4 + iVar3) * iVar14,uVar2,iVar3,iVar3);
    (**(code **)(*(long *)this + 0x60))(this,plVar9);
  }
  if (*(int *)(param_2 + 0x24) == 0) {
    FUN_05478178(awStack_20,L"[GIFT_RETURN_TASK_TIME_LIMIT]",auStack_28);
    lVar11 = UISingletonDialog<UIGiftFoReturn>::GetSingletonPtr();
    TodReplaceNumberString(awStack_20,L"{NUM}",*(int *)param_2 - *(int *)(lVar11 + 0x160));
    FUN_054766c8((wstring *)(this + 0x168),(Color *)local_18);
    FUN_05476c50((Color *)local_18);
    FUN_05476c50(awStack_20);
    nop();
    pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2258);
    pUVar13 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(pUVar13,pIVar12);
    uVar2 = FUN_0348b398(0);
    (**(code **)(*(long *)pUVar13 + 0x198))
              (pUVar13,uVar2,uVar2,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
    local_18[0] = 5;
    UIWidgetImage::SetImageType(pUVar13,(Color *)local_18,0.0);
    (**(code **)(*(long *)this + 0x60))(this,pUVar13);
    pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2470);
    pUVar13 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(pUVar13,pIVar12);
    uVar2 = FUN_0348b398(200);
    uVar5 = FUN_0348b398(0x14);
    uVar6 = FUN_0348b398(0x3c);
    (**(code **)(*(long *)pUVar13 + 0x198))(pUVar13,uVar2,uVar5,uVar6,uVar6);
    local_18[0] = 5;
    UIWidgetImage::SetImageType(pUVar13,(Color *)local_18,0.0);
    (**(code **)(*(long *)this + 0x60))(this,pUVar13);
    this_00 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(this_00,(wstring *)(this + 0x168));
    uVar2 = FUN_0348b398(0x118);
    uVar5 = FUN_0348b398(0x14);
    uVar6 = FUN_0348b398(300);
    uVar7 = FUN_0348b398(0x3c);
    (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar2,uVar5,uVar6,uVar7);
    uVar16 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20_HardShadow);
    FUN_03489fac(this_00 + 0xe8,uVar16);
    FUN_03489fb4(this_00 + 0xe0,3);
    pcVar17 = *(code **)(*(long *)this_00 + 0x170);
    Sexy::Color::Color((Color *)local_18,1);
    (*pcVar17)(this_00,0,(Color *)local_18);
    (**(code **)(*(long *)this + 0x60))(this,this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiftFoReturnTaskWidget::RequestReward() */

void __thiscall GiftFoReturnTaskWidget::RequestReward(GiftFoReturnTaskWidget *this)

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
  string asStack_ce8 [2920];
  string asStack_180 [376];
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
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_0348b110(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_180,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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
/* GiftFoReturnTaskWidget::InitTask(GeneralTask*) */

void __thiscall GiftFoReturnTaskWidget::InitTask(GiftFoReturnTaskWidget *this,GeneralTask *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  RtObject *this_00;
  GiftFoReturnTaskData *pGVar8;
  long *plVar9;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TemplateTaskWidget::InitTask((TemplateTaskWidget *)this,param_1);
  std::string::string(asStack_10,"IMAGE_UI_PLANTCULTIVATE_INTEGRATION");
  uVar7 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0xe8) = uVar7;
  std::string::~string(asStack_10);
  nop();
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x158) + 0x20));
  if (bVar2) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
    pGVar8 = Sexy::RtObject::Cast<GiftFoReturnTaskData>(this_00);
    if (pGVar8 != (GiftFoReturnTaskData *)0x0) {
      *(undefined4 *)(this + 0x164) = *(undefined4 *)(pGVar8 + 0x50);
    }
  }
  plVar9 = *(long **)(this + 0x150);
  iVar3 = FUN_0348b398(10);
  lVar1 = plVar9[9];
  iVar4 = FUN_0348b398(0x1e);
  iVar6 = *(int *)((long)plVar9 + 0x4c);
  iVar5 = FUN_0348b398(0x14);
  (**(code **)(*plVar9 + 0x198))
            (plVar9,iVar3 + (int)lVar1,iVar6 - iVar4,(int)plVar9[10] - iVar5,
             *(int *)((long)plVar9 + 0x54) - iVar3);
  iVar6 = FUN_0348b398(0x19);
  *(int *)(this + 0x124) = *(int *)(this + 0x124) - iVar6;
  iVar6 = FUN_0348b398(0x19);
  *(int *)(this + 0x10c) = *(int *)(this + 0x10c) - iVar6;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

