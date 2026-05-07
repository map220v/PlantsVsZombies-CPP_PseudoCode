// Class: RiftPlayerInfoBank


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftPlayerInfoBank::initLoadingResourcesGroupList() */

void __thiscall RiftPlayerInfoBank::initLoadingResourcesGroupList(RiftPlayerInfoBank *this)

{
  code *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0xd0);
  std::string::string(asStack_10,"UI_Leagues");
  (*pcVar1)(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftPlayerInfoBank::StaticClassInit() */

void RiftPlayerInfoBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftPlayerInfoBank");
    (*pcVar2)(plVar1,asStack_10,FUN_036887e4,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftPlayerInfoBank::StaticGetClass() */

long * RiftPlayerInfoBank::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"RiftPlayerInfoBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftPlayerInfoBank::GetClass() const */

long * RiftPlayerInfoBank::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"RiftPlayerInfoBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftPlayerInfoBank::~RiftPlayerInfoBank() */

void __thiscall RiftPlayerInfoBank::~RiftPlayerInfoBank(RiftPlayerInfoBank *this)

{
  *(undefined ***)this = &PTR_GetClass_0667bd00;
  *(undefined ***)(this + 0x10) = &PTR__RiftPlayerInfoBank_0667bea0;
  FUN_05476c50(this + 0x180);
  FUN_05476c50(this + 0x178);
  FUN_05476c50(this + 0x170);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to RiftPlayerInfoBank::~RiftPlayerInfoBank() */

void __thiscall RiftPlayerInfoBank::~RiftPlayerInfoBank(RiftPlayerInfoBank *this)

{
  ~RiftPlayerInfoBank(this + -0x10);
  return;
}


/* RiftPlayerInfoBank::~RiftPlayerInfoBank() */

void __thiscall RiftPlayerInfoBank::~RiftPlayerInfoBank(RiftPlayerInfoBank *this)

{
  ~RiftPlayerInfoBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RiftPlayerInfoBank::~RiftPlayerInfoBank() */

void __thiscall RiftPlayerInfoBank::~RiftPlayerInfoBank(RiftPlayerInfoBank *this)

{
  ~RiftPlayerInfoBank(this + -0x10);
  return;
}


/* RiftPlayerInfoBank::RiftPlayerInfoBank() */

void __thiscall RiftPlayerInfoBank::RiftPlayerInfoBank(RiftPlayerInfoBank *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0667bd00;
  *(undefined ***)(this + 0x10) = &PTR__RiftPlayerInfoBank_0667bea0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x168));
  FUN_05476574(this + 0x170);
  FUN_05476574(this + 0x178);
  FUN_05476574(this + 0x180);
  Sexy::Insets::Insets((Insets *)(this + 0x188));
  Sexy::Insets::Insets((Insets *)(this + 0x198));
  Sexy::Insets::Insets((Insets *)(this + 0x1a8));
  Sexy::Insets::Insets((Insets *)(this + 0x1b8));
  return;
}


/* RiftPlayerInfoBank::StaticNew() */

RiftPlayerInfoBank * RiftPlayerInfoBank::StaticNew(void)

{
  RiftPlayerInfoBank *this;
  
  this = ::operator_new(0x1c8);
  RiftPlayerInfoBank(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftPlayerInfoBank::onEnterState_Initializing(WidgetState) */

void RiftPlayerInfoBank::onEnterState_Initializing(long param_1)

{
  RtWeakPtr<PowerPropertySheet> *this;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  string *extraout_x1;
  undefined1 auVar6 [12];
  undefined1 auStack_38 [8];
  wstring awStack_30 [8];
  HotUIHelpers aHStack_28 [8];
  wstring awStack_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[RIFT_PLAYER_BANK_TITLE]");
  FUN_054766c8(param_1 + 0x170,(Insets *)&local_18);
  this = (RtWeakPtr<PowerPropertySheet> *)(param_1 + 0x168);
  FUN_05476c50((Insets *)&local_18);
  iVar1 = FUN_03688224(0xfffffffb);
  iVar2 = FUN_03688140(*(undefined4 *)(param_1 + 0x38));
  iVar3 = FUN_03688224(0x3c);
  Sexy::Insets::Insets((Insets *)&local_18,0,iVar1,iVar2,iVar3);
  *(undefined8 *)(param_1 + 0x188) = local_18;
  *(undefined8 *)(param_1 + 400) = uStack_10;
  FUN_05476574(auStack_38);
  TodStringTranslate(L"[RIFT_PLAYER_BANK_SCORE]");
  uVar5 = RiftUtils::GetCurrentScore();
  Sexy::StrFormat(L"%d",awStack_20,uVar5 & 0xffffffff);
  TodReplaceString(awStack_30,L"{NUMBER}",awStack_20);
  FUN_054766c8(auStack_38,(Insets *)&local_18);
  FUN_05476c50((Insets *)&local_18);
  FUN_05476c50(awStack_20);
  thunk_FUN_05477b9c(param_1 + 0x178,auStack_38);
  iVar1 = FUN_03688224(0x12);
  iVar2 = FUN_03688140(*(undefined4 *)(param_1 + 0x38));
  iVar3 = FUN_03688224(0x3c);
  Sexy::Insets::Insets((Insets *)&local_18,0,iVar1,iVar2,iVar3);
  *(undefined8 *)(param_1 + 0x198) = local_18;
  *(undefined8 *)(param_1 + 0x1a0) = uStack_10;
  auVar6 = RiftUtils::GetCurrentLeague();
  RiftUtils::GetLeagueIcon(auVar6._0_8_,auVar6._8_4_);
  HotUIHelpers::GetImageFromStringId(aHStack_28,extraout_x1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this,(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  this_00 = (LotteryResultProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar3 = FUN_03688140(*(undefined4 *)(param_1 + 0x38));
  iVar4 = FUN_03688224(0x12);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(iVar3 - (int)((float)iVar1 * 0.5)) / 2,
             iVar4 + *(int *)(param_1 + 0x19c),(int)((float)iVar1 * 0.5),(int)((float)iVar2 * 0.5));
  *(undefined8 *)(param_1 + 0x1b8) = local_18;
  *(undefined8 *)(param_1 + 0x1c0) = uStack_10;
  TodStringTranslate(L"[RIFT_PLAYER_BANK_RANK]");
  FUN_054766c8(awStack_30,(Insets *)&local_18);
  FUN_05476c50((Insets *)&local_18);
  uVar5 = RiftUtils::GetCurrentRank();
  Sexy::StrFormat(L"%d",awStack_20,uVar5 & 0xffffffff);
  TodReplaceString(awStack_30,L"{NUMBER}",awStack_20);
  FUN_054766c8(auStack_38,(Insets *)&local_18);
  FUN_05476c50((Insets *)&local_18);
  FUN_05476c50(awStack_20);
  thunk_FUN_05477b9c(param_1 + 0x180,auStack_38);
  iVar1 = FUN_03688144(*(undefined4 *)(param_1 + 0x3c));
  iVar2 = FUN_03688224(0x3f);
  iVar3 = FUN_03688140(*(undefined4 *)(param_1 + 0x38));
  iVar4 = FUN_03688224(0x3c);
  Sexy::Insets::Insets((Insets *)&local_18,0,iVar1 - iVar2,iVar3,iVar4);
  *(undefined8 *)(param_1 + 0x1a8) = local_18;
  *(undefined8 *)(param_1 + 0x1b0) = uStack_10;
  std::string::~string((string *)aHStack_28);
  FUN_05476c50(awStack_30);
  FUN_05476c50(auStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftPlayerInfoBank::Draw(Sexy::Graphics*) */

void __thiscall RiftPlayerInfoBank::Draw(RiftPlayerInfoBank *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  ResourceInfo *pRVar5;
  undefined8 uVar6;
  GraphicsAutoState aGStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aab398);
  iVar2 = FUN_03688140(*(undefined4 *)(this + 0x38));
  iVar3 = FUN_03688144(*(undefined4 *)(this + 0x3c));
  Sexy::Graphics::DrawImage(param_1,pIVar4,0,0,iVar2,iVar3);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x168));
  if (bVar1) {
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x168));
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar5,*(int *)(this + 0x1b8),*(int *)(this + 0x1bc),
               *(int *)(this + 0x1c0),*(int *)(this + 0x1c4));
  }
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x170,this + 0x188,uVar6,aIStack_18,5,1);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  Sexy::Insets::Insets(aIStack_18,0xfc,0xe7,0,0xff);
  WriteWordInRect(param_1,this + 0x178,this + 0x198,uVar6,aIStack_18,5,1);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  Sexy::Insets::Insets(aIStack_18,0xfc,0xe7,0,0xff);
  WriteWordInRect(param_1,this + 0x180,this + 0x1a8,uVar6,aIStack_18,5,1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to RiftPlayerInfoBank::Draw(Sexy::Graphics*) */

void __thiscall RiftPlayerInfoBank::Draw(RiftPlayerInfoBank *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

