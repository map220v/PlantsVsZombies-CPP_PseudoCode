// Class: TaskWidget


/* TaskWidget::TouchBegan(Sexy::Touch const&) */

void __thiscall TaskWidget::TouchBegan(TaskWidget *this,Touch *param_1)

{
  *(int *)(this + 0x198) = (int)*(undefined8 *)param_1;
  return;
}


/* TaskWidget::Update() */

void __thiscall TaskWidget::Update(TaskWidget *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  (**(code **)(*(long *)this + 0x340))(this);
  return;
}


/* TaskWidget::~TaskWidget() */

void __thiscall TaskWidget::~TaskWidget(TaskWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066f4020;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066f4378;
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x168));
  FUN_05476c50(this + 0x160);
  FUN_05476c50(this + 0x110);
  FUN_05476c50(this + 0xf8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* TaskWidget::~TaskWidget() */

void __thiscall TaskWidget::~TaskWidget(TaskWidget *this)

{
  ~TaskWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TaskWidget::InitTimer() */

void __thiscall TaskWidget::InitTimer(TaskWidget *this)

{
  EffectAnim_UIAnim *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (EffectAnim_UIAnim *)(this + 0x168);
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_039dd168(0x1e);
  iVar3 = FUN_039dd168(0x12);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_18,(float)(iVar2 + *(int *)(this + 0x140)),
             (float)(iVar3 + *(int *)(this + 0x144)));
  std::string::string(asStack_10,"POPANIM_UI_QUESTS_DAILY_QUEST_CLOCK_ICON");
  EffectAnim_UIAnim::InitUIAnim(0x3f4ccccd,local_18,local_14,this_00,asStack_10,1);
  std::string::~string(asStack_10);
  nop();
  cVar1 = EffectAnim_UIAnim::IsValid(this_00);
  if (cVar1 != '\0') {
    std::string::string(asStack_10,"default");
    EffectAnim_UIAnim::PlayLoop(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TaskWidget::StaticClassInit() */

void TaskWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"TaskWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_039dd680,0x1a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TaskWidget::StaticGetClass() */

long * TaskWidget::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TaskWidget::GetClass() const */

long * TaskWidget::GetClass(void)

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
  (*pcVar3)(plVar1,"TaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TaskWidget::SetTask(TravelLogTask*) */

void __thiscall TaskWidget::SetTask(TaskWidget *this,TravelLogTask *param_1)

{
  *(TravelLogTask **)(this + 0xe0) = param_1;
  (**(code **)(*(long *)this + 0x310))();
  return;
}


/* TaskWidget::GetTaskID() */

undefined4 __thiscall TaskWidget::GetTaskID(TaskWidget *this)

{
  return *(undefined4 *)(*(long *)(this + 0xe0) + 8);
}


/* TaskWidget::TaskWidget() */

void __thiscall TaskWidget::TaskWidget(TaskWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_066f4020;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066f4378;
  Sexy::Insets::Insets((Insets *)(this + 0xe8));
  FUN_05476574(this + 0xf8);
  Sexy::Insets::Insets((Insets *)(this + 0x100));
  FUN_05476574(this + 0x110);
  *(undefined8 *)(this + 0x118) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x120));
  Sexy::Insets::Insets((Insets *)(this + 0x130));
  Sexy::Insets::Insets((Insets *)(this + 0x140));
  Sexy::Insets::Insets((Insets *)(this + 0x150));
  FUN_05476574(this + 0x160);
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x168));
  return;
}


/* TaskWidget::StaticNew() */

TaskWidget * TaskWidget::StaticNew(void)

{
  TaskWidget *this;
  
  this = ::operator_new(0x1a0);
  TaskWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TaskWidget::Init() */

void __thiscall TaskWidget::Init(TaskWidget *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  wstring awStack_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe0) + 0x20));
  lVar5 = StringHelper::ToImage((string *)(lVar5 + 0x20),false);
  *(long *)(this + 0x118) = lVar5;
  if (lVar5 == 0) {
    std::string::string((string *)&local_18,"IMAGE_UI_QUESTS_BACKGROUND_GENERIC");
    uVar6 = StringHelper::ToImage((string *)&local_18,false);
    *(undefined8 *)(this + 0x118) = uVar6;
    std::string::~string((string *)&local_18);
    nop();
  }
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe0) + 0x20));
  Sexy::ToWString((string *)(lVar5 + 0x10));
  TodStringTranslate(awStack_20);
  FUN_054766c8(this + 0xf8,(Insets *)&local_18);
  FUN_05476c50((Insets *)&local_18);
  FUN_05476c50(awStack_20);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe0) + 0x20));
  Sexy::ToWString((string *)(lVar5 + 0x18));
  TodStringTranslate(awStack_20);
  FUN_054766c8(this + 0x110,(Insets *)&local_18);
  FUN_05476c50((Insets *)&local_18);
  FUN_05476c50(awStack_20);
  iVar1 = FUN_039dd168(0x14);
  iVar2 = FUN_039dd168(5);
  iVar3 = FUN_039dd168(500);
  iVar4 = FUN_039dd168(0x32);
  Sexy::Insets::Insets((Insets *)&local_18,iVar1,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0xe8) = local_18;
  *(undefined8 *)(this + 0xf0) = uStack_10;
  iVar1 = FUN_039dd168(0x14);
  iVar2 = FUN_039dd168(0x37);
  iVar3 = FUN_039dd168(500);
  iVar4 = FUN_039dd168(0x28);
  Sexy::Insets::Insets((Insets *)&local_18,iVar1,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0x100) = local_18;
  *(undefined8 *)(this + 0x108) = uStack_10;
  iVar1 = FUN_039dd168(0x14);
  iVar2 = FUN_039dd168(0x5f);
  iVar3 = FUN_039dd168(500);
  iVar4 = FUN_039dd168(0x32);
  Sexy::Insets::Insets((Insets *)&local_18,iVar1,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0x120) = local_18;
  *(undefined8 *)(this + 0x128) = uStack_10;
  iVar1 = FUN_039dd168(0x1ea);
  iVar2 = FUN_039dd168(0x4c);
  iVar3 = FUN_039dd168(100);
  iVar4 = FUN_039dd168(0x14);
  Sexy::Insets::Insets((Insets *)&local_18,iVar1,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0x130) = local_18;
  *(undefined8 *)(this + 0x138) = uStack_10;
  iVar1 = FUN_039dd168(0x1e0);
  iVar2 = FUN_039dd168(10);
  iVar3 = FUN_039dd168(0x8c);
  iVar4 = FUN_039dd168(0x28);
  Sexy::Insets::Insets((Insets *)&local_18,iVar1,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0x140) = local_18;
  *(undefined8 *)(this + 0x148) = uStack_10;
  iVar1 = FUN_039dd168(0x1fe);
  iVar2 = FUN_039dd168(10);
  iVar3 = FUN_039dd168(100);
  iVar4 = FUN_039dd168(0x28);
  Sexy::Insets::Insets((Insets *)&local_18,iVar1,iVar2,iVar3,iVar4);
  pcVar7 = *(code **)(*(long *)this + 0x338);
  *(undefined8 *)(this + 0x150) = local_18;
  *(undefined8 *)(this + 0x158) = uStack_10;
  (*pcVar7)(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TaskWidget::DrawNameAndDescription(Sexy::Graphics*) */

void __thiscall TaskWidget::DrawNameAndDescription(TaskWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  Image *pIVar6;
  Insets local_28 [16];
  Color local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(local_28,(Insets *)(this + 0xe8));
  if ((*(long *)(this + 0xe0) != 0) &&
     (lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe0) + 0x20)),
     *(int *)(lVar4 + 0x44) != 0)) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe0) + 0x20));
    Sexy::StrFormat("IMAGE_UI_QUESTS_TASK_ICON_%d",(string *)local_18,(ulong)*(uint *)(lVar4 + 0x44)
                   );
    pIVar6 = (Image *)StringHelper::ToImage((string *)local_18,false);
    std::string::~string((string *)local_18);
    if (pIVar6 != (Image *)0x0) {
      iVar1 = FUN_039dd168(5);
      iVar3 = *(int *)(this + 0xec);
      iVar2 = FUN_039dd168(0x28);
      Sexy::Graphics::DrawImage(param_1,pIVar6,*(int *)(this + 0xe8),iVar1 + iVar3,iVar2,iVar2);
      iVar3 = FUN_039dd168(0x2d);
      Sexy::Insets::Insets
                ((Insets *)local_18,iVar3 + *(int *)(this + 0xe8),*(int *)(this + 0xec),
                 *(int *)(this + 0xf0) - iVar3,*(int *)(this + 0xf4));
    }
  }
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  Sexy::Color::Color(local_18,4);
  WriteWordInRect(param_1,this + 0xf8,local_28,uVar5,local_18,3,1);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_Outline);
  Sexy::Color::Color(local_18,1);
  WriteWordInRect(param_1,this + 0x110,this + 0x100,uVar5,local_18,3,1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TaskWidget::UpdateTimer() */

void __thiscall TaskWidget::UpdateTimer(TaskWidget *this)

{
  char cVar1;
  long lVar2;
  UITravelLog *this_00;
  int iVar3;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = (**(code **)(**(long **)(this + 0xe0) + 0x78))(*(long **)(this + 0xe0));
  if (lVar2 < 0x93a81) {
    if (lVar2 < 0x15181) {
      if (lVar2 < 0xe11) {
        if (lVar2 < 1) {
          if (lVar2 == 0) {
            this_00 = (UITravelLog *)UISingletonDialog<UITravelLog>::GetSingletonPtr();
            UITravelLog::SetNeedRefresh(this_00,true);
          }
        }
        else {
          FUN_05478178(awStack_10,L"[MIN_SEC]",auStack_20);
          iVar3 = (int)(lVar2 / 0x3c);
          TodReplaceNumberString(awStack_10,L"{NUM1}",iVar3);
          FUN_05476c50(awStack_10);
          nop();
          TodReplaceNumberString(awStack_18,L"{NUM2}",(int)lVar2 + iVar3 * -0x3c);
          FUN_054766c8(this + 0x160,awStack_10);
          FUN_05476c50(awStack_10);
          FUN_05476c50(awStack_18);
        }
        goto LAB_039deff0;
      }
      FUN_05478178(awStack_10,L"[HOUR_MIN]",auStack_20);
      TodReplaceNumberString(awStack_10,L"{NUM1}",(int)(lVar2 / 0xe10));
      FUN_05476c50(awStack_10);
      nop();
      lVar2 = lVar2 % 0xe10;
      iVar3 = (int)(lVar2 / 0x3c) + (int)(lVar2 >> 0x3f);
    }
    else {
      FUN_05478178(awStack_10,L"[DAY_HOUR]",auStack_20);
      TodReplaceNumberString(awStack_10,L"{NUM1}",(int)(lVar2 / 0x15180));
      FUN_05476c50(awStack_10);
      nop();
      lVar2 = lVar2 % 0x15180;
      iVar3 = (int)(lVar2 / 0xe10) + (int)(lVar2 >> 0x3f);
    }
    TodReplaceNumberString(awStack_18,L"{NUM2}",iVar3 - (int)(lVar2 >> 0x3f));
    FUN_054766c8(this + 0x160,awStack_10);
    FUN_05476c50(awStack_10);
    FUN_05476c50(awStack_18);
  }
  else {
    TodStringTranslate(L"[UNLIMITED]");
    FUN_054766c8(this + 0x160,awStack_10);
    FUN_05476c50(awStack_10);
  }
LAB_039deff0:
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x168));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x168));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TaskWidget::DrawReward(Sexy::Graphics*) */

void __thiscall TaskWidget::DrawReward(TaskWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  Image *pIVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_40 [8];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[QUEST_REWARD_LABEL]");
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  Sexy::Color::Color((Color *)asStack_18,2);
  WriteWordInRect(param_1,aIStack_28,this + 0x120,uVar6,asStack_18,3,1);
  FUN_05476c50(aIStack_28);
  uVar11 = 0;
  while( true ) {
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe0) + 0x20));
    uVar10 = FUN_039dcc0c(*(undefined8 *)(lVar9 + 0x28),*(undefined8 *)(lVar9 + 0x30));
    if (uVar10 <= uVar11) break;
    iVar1 = FUN_039dd168(0x5a);
    iVar2 = FUN_039dd168(0x6e);
    iVar3 = FUN_039dd168(0x62);
    iVar4 = FUN_039dd168(0x28);
    Sexy::Insets::Insets((Insets *)&local_38,iVar1 + iVar2 * (int)uVar11,iVar3,iVar4,iVar4);
    iVar1 = FUN_039dd168(0x87);
    iVar2 = FUN_039dd168(0x6e);
    iVar3 = FUN_039dd168(100);
    iVar4 = FUN_039dd168(0x46);
    iVar5 = FUN_039dd168(0x32);
    Sexy::Insets::Insets(aIStack_28,iVar1 + iVar2 * (int)uVar11,iVar3,iVar4,iVar5);
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe0) + 0x20));
    puVar7 = (undefined4 *)FUN_039dcc18(*(undefined8 *)(lVar9 + 0x28),uVar11);
    pIVar8 = (Image *)FUN_039dfec0(*puVar7);
    Sexy::Graphics::DrawImage(param_1,pIVar8,local_38,local_34,local_30,local_2c);
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe0) + 0x20));
    lVar9 = FUN_039dcc18(*(undefined8 *)(lVar9 + 0x28),uVar11);
    Sexy::StrFormat("X %d",asStack_18,(ulong)*(uint *)(lVar9 + 4));
    Sexy::ToWString(asStack_18);
    std::string::~string(asStack_18);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    Sexy::Color::Color((Color *)asStack_18,4);
    WriteWordInRect(param_1,auStack_40,aIStack_28,uVar6,asStack_18,3,1);
    FUN_05476c50(auStack_40);
    uVar11 = uVar11 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TaskWidget::DrawPrograss(Sexy::Graphics*) */

void __thiscall TaskWidget::DrawPrograss(TaskWidget *this,Graphics *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  Image *pIVar6;
  float fVar7;
  undefined1 auStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe0) + 0x20));
  if (1 < *(int *)(lVar4 + 0x40)) {
    uVar1 = *(uint *)(*(long *)(this + 0xe0) + 0x10);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe0) + 0x20));
    Sexy::StrFormat("%d / %d",asStack_18,(ulong)uVar1,(ulong)*(uint *)(lVar4 + 0x40));
    Sexy::ToWString(asStack_18);
    std::string::~string(asStack_18);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    Sexy::Color::Color((Color *)asStack_18,4);
    WriteWordInRect(param_1,auStack_20,this + 0x130,uVar5,asStack_18,2,1);
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1a40);
    Sexy::Graphics::DrawImage
              (param_1,pIVar6,*(int *)(this + 0x130),*(int *)(this + 0x13c) + *(int *)(this + 0x134)
               ,*(int *)(this + 0x138),*(int *)(this + 0x13c));
    iVar2 = *(int *)(*(long *)(this + 0xe0) + 0x10);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe0) + 0x20));
    iVar3 = *(int *)(lVar4 + 0x40);
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1850);
    fVar7 = (float)NEON_fminnm((float)iVar2 / (float)iVar3,0x3f800000);
    Sexy::Graphics::DrawImage
              (param_1,pIVar6,*(int *)(this + 0x130),*(int *)(this + 0x13c) + *(int *)(this + 0x134)
               ,(int)(fVar7 * (float)*(int *)(this + 0x138)),*(int *)(this + 0x13c));
    FUN_05476c50(auStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TaskWidget::DrawTimer(Sexy::Graphics*) */

void __thiscall TaskWidget::DrawTimer(TaskWidget *this,Graphics *param_1)

{
  char cVar1;
  Image *pIVar2;
  undefined8 uVar3;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1990);
  Sexy::Graphics::DrawImage
            (param_1,pIVar2,*(int *)(this + 0x140),*(int *)(this + 0x144),*(int *)(this + 0x148),
             *(int *)(this + 0x14c));
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x168));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x168),param_1);
  }
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color(aCStack_18,4);
  WriteWordInRect(param_1,this + 0x160,this + 0x150,uVar3,aCStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TaskWidget::Draw(Sexy::Graphics*) */

void __thiscall TaskWidget::Draw(TaskWidget *this,Graphics *param_1)

{
  if (*(Image **)(this + 0x118) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x118),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  (**(code **)(*(long *)this + 0x318))(this,param_1);
  (**(code **)(*(long *)this + 800))(this,param_1);
  (**(code **)(*(long *)this + 0x328))(this,param_1);
  (**(code **)(*(long *)this + 0x330))(this,param_1);
  nop();
  return;
}

