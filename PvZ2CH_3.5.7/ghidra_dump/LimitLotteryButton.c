// Class: LimitLotteryButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryButton::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
LimitLotteryButton::DrawAll(LimitLotteryButton *this,ModalFlags *param_1,Graphics *param_2)

{
  bool bVar1;
  RenderEffectDefinition *pRVar2;
  RenderEffect *pRVar3;
  code *pcVar4;
  GraphicsAutoState aGStack_28 [8];
  string asStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_28,param_2);
  if ((this[0x6e] == (LimitLotteryButton)0x0) && (this[0x2c8] == (LimitLotteryButton)0x0)) {
    Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  }
  else {
    pRVar2 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(param_2);
    CachedResourcePtr::operator_cast_to_RenderEffectDefinition_((CachedResourcePtr *)&DAT_06afd1e0);
    pRVar3 = (RenderEffect *)Sexy::Graphics3D::GetEffect(pRVar2);
    pcVar4 = *(code **)(*(long *)pRVar3 + 0x38);
    std::string::string(asStack_20,"Default");
    (*pcVar4)(pRVar3,asStack_20,1);
    std::string::~string(asStack_20);
    nop();
    Sexy::RenderEffectAutoState::RenderEffectAutoState
              ((RenderEffectAutoState *)asStack_20,param_2,pRVar3,1);
    while (bVar1 = Sexy::RenderEffectAutoState::operator_cast_to_bool
                             ((RenderEffectAutoState *)asStack_20), bVar1) {
      Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
      Sexy::RenderEffectAutoState::operator++((RenderEffectAutoState *)asStack_20);
    }
    Sexy::RenderEffectAutoState::~RenderEffectAutoState((RenderEffectAutoState *)asStack_20);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_28);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryButton::InitView() */

void __thiscall LimitLotteryButton::InitView(LimitLotteryButton *this)

{
  string *extraout_x1;
  char *__s;
  string *extraout_x1_00;
  string *extraout_x1_01;
  wstring awStack_28 [8];
  string asStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[LOTTERY_TIMES]");
  if (*(int *)(this + 0x2fc) == 0x68) {
    std::string::string(asStack_20,"60");
    Sexy::ToSexyString((Sexy *)asStack_20,extraout_x1_01);
    TodStringTranslate(awStack_18);
    FUN_054766c8(this + 0x300,auStack_10);
    FUN_05476c50(auStack_10);
    FUN_05476c50(awStack_18);
    std::string::~string(asStack_20);
    nop();
    __s = "1";
  }
  else {
    if (*(int *)(this + 0x2fc) != 0x69) goto LAB_0398a954;
    std::string::string(asStack_20,"270");
    Sexy::ToSexyString((Sexy *)asStack_20,extraout_x1);
    TodStringTranslate(awStack_18);
    FUN_054766c8(this + 0x300,auStack_10);
    FUN_05476c50(auStack_10);
    FUN_05476c50(awStack_18);
    std::string::~string(asStack_20);
    nop();
    __s = "5";
  }
  std::string::string(asStack_20,__s);
  Sexy::ToSexyString((Sexy *)asStack_20,extraout_x1_00);
  TodReplaceString(awStack_28,L"{NUMBER}",awStack_18);
  FUN_054766c8(this + 0x308,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  std::string::~string(asStack_20);
  nop();
LAB_0398a954:
  FUN_05476c50(awStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryButton::Resize(Sexy::TRect<int> const&) */

void __thiscall LimitLotteryButton::Resize(LimitLotteryButton *this,TRect *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  iVar3 = FUN_0398a1f8(5);
  iVar6 = *(int *)(this + 0x50);
  iVar1 = *(int *)(this + 0x54);
  iVar4 = FUN_0398a1f8(0xc);
  iVar5 = FUN_0398a1f8(10);
  Sexy::Insets::Insets((Insets *)&local_18,iVar6 / 3 - iVar3,iVar3,iVar1 - iVar4,iVar1 - iVar5);
  *(undefined8 *)(this + 0x330) = local_18;
  *(undefined8 *)(this + 0x338) = uStack_10;
  iVar6 = FUN_0398a1f8(0xf);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar6,0,*(int *)(this + 0x50) - iVar6,*(int *)(this + 0x54));
  *(undefined8 *)(this + 0x310) = local_18;
  *(undefined8 *)(this + 0x318) = uStack_10;
  iVar6 = FUN_0398a1f8(0xf);
  Sexy::Insets::Insets((Insets *)&local_18,0,0,*(int *)(this + 0x50) - iVar6,*(int *)(this + 0x54));
  bVar2 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 800) = local_18;
  *(undefined8 *)(this + 0x328) = uStack_10;
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LimitLotteryButton::~LimitLotteryButton() */

void __thiscall LimitLotteryButton::~LimitLotteryButton(LimitLotteryButton *this)

{
  *(undefined ***)this = &PTR_GetClass_066deda0;
  *(undefined ***)(this + 0x198) = &PTR__LimitLotteryButton_066df0f8;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x340));
  FUN_05476c50(this + 0x308);
  FUN_05476c50(this + 0x300);
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to LimitLotteryButton::~LimitLotteryButton() */

void __thiscall LimitLotteryButton::~LimitLotteryButton(LimitLotteryButton *this)

{
  ~LimitLotteryButton(this + -0x198);
  return;
}


/* LimitLotteryButton::~LimitLotteryButton() */

void __thiscall LimitLotteryButton::~LimitLotteryButton(LimitLotteryButton *this)

{
  ~LimitLotteryButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LimitLotteryButton::~LimitLotteryButton() */

void __thiscall LimitLotteryButton::~LimitLotteryButton(LimitLotteryButton *this)

{
  ~LimitLotteryButton(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryButton::LimitLotteryButton(int, Sexy::ButtonListener*) */

void __thiscall
LimitLotteryButton::LimitLotteryButton(LimitLotteryButton *this,int param_1,ButtonListener *param_2)

{
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  PVZ2UIButton::PVZ2UIButton((PVZ2UIButton *)this,param_1,param_2,awStack_20,aCStack_18);
  FUN_05476c50(awStack_20);
  nop();
  *(undefined ***)this = &PTR_GetClass_066deda0;
  *(undefined ***)(this + 0x198) = &PTR__LimitLotteryButton_066df0f8;
  FUN_05478178(this + 0x300,&DAT_056f11a8,aCStack_18);
  nop();
  FUN_05478178(this + 0x308,&DAT_056f11a8,aCStack_18);
  nop();
  Sexy::Insets::Insets((Insets *)(this + 0x310));
  Sexy::Insets::Insets((Insets *)(this + 800));
  Sexy::Insets::Insets((Insets *)(this + 0x330));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x340));
  *(int *)(this + 0x2fc) = param_1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryButton::Draw(Sexy::Graphics*) */

void __thiscall LimitLotteryButton::Draw(LimitLotteryButton *this,Graphics *param_1)

{
  undefined8 uVar1;
  Image *pIVar2;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::Draw((PVZ2UIButton *)this,param_1);
  if (*(int *)(this + 0x2fc) - 0x68U < 2) {
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe668);
    Sexy::Graphics::DrawImage
              (param_1,pIVar2,*(int *)(this + 0x330),*(int *)(this + 0x334),*(int *)(this + 0x338),
               *(int *)(this + 0x33c));
  }
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  Sexy::Color::Color(aCStack_18,3,0xa9,0xf4);
  WriteWordInRect(param_1,this + 0x300,this + 0x310,uVar1,aCStack_18,3,1);
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,this + 0x308,this + 800,uVar1,aCStack_18,4,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

