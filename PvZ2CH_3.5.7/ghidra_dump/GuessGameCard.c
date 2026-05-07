// Class: GuessGameCard


/* GuessGameCard::~GuessGameCard() */

void __thiscall GuessGameCard::~GuessGameCard(GuessGameCard *this)

{
  *(undefined ***)this = &PTR_GetClass_06988e80;
  if (*(long **)(this + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf0) + 0x18))();
    *(undefined8 *)(this + 0xf0) = 0;
  }
  std::string::~string((string *)(this + 0xf8));
  FUN_05476c50(this + 0xe0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* GuessGameCard::~GuessGameCard() */

void __thiscall GuessGameCard::~GuessGameCard(GuessGameCard *this)

{
  ~GuessGameCard(this);
  AK::FreeHook(this);
  return;
}


/* GuessGameCard::Update() */

void __thiscall GuessGameCard::Update(GuessGameCard *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (*(StandaloneEffect **)(this + 0xf0) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0xf0));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuessGameCard::GuessGameCard() */

void __thiscall GuessGameCard::GuessGameCard(GuessGameCard *this)

{
  undefined8 uVar1;
  size_t __n;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06988e80;
  FUN_05476574(this + 0xe0);
  Set8BytesTo0((string *)(this + 0xf8));
  std::string::string(asStack_10,"IMAGE_UI_RICHMAN_GUESS_CARD_BACK");
  uVar1 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0xd8) = uVar1;
  std::string::~string(asStack_10);
  nop();
  *(undefined4 *)(this + 0xd4) = 0;
  __n = 1;
  *(undefined4 *)(this + 0xe8) = 1;
  this[0x100] = (GuessGameCard)0x1;
  this[0x101] = (GuessGameCard)0x1;
  *(undefined8 *)(this + 0xf0) = 0;
  FUN_054772c4(this + 0xe0,&DAT_056f11a8);
  std::string::append((string *)(this + 0xf8),"",__n);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GuessGameCard::SetSide(bool) */

void __thiscall GuessGameCard::SetSide(GuessGameCard *this,bool param_1)

{
  this[0x101] = (GuessGameCard)param_1;
  return;
}


/* GuessGameCard::IsShowResult() */

bool __thiscall GuessGameCard::IsShowResult(GuessGameCard *this)

{
  return *(int *)(this + 0xd4) == 3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuessGameCard::GetCardTypeImageStr(GuessGameType) */

void GuessGameCard::GetCardTypeImageStr(string *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  char *__s;
  
  lVar1 = ___stack_chk_guard;
  if (param_3 != 1) {
    if (param_3 == 2) {
      __s = "IMAGE_UI_RICHMAN_GUESS_ROCK";
      goto LAB_04c4ac44;
    }
    if (param_3 == 3) {
      __s = "IMAGE_UI_RICHMAN_GUESS_PAPER";
      goto LAB_04c4ac44;
    }
  }
  __s = "IMAGE_UI_RICHMAN_GUESS_SCISSOR";
LAB_04c4ac44:
  std::string::string(param_1,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuessGameCard::GetCardTypeDescriptionStr(GuessGameType) */

void GuessGameCard::GetCardTypeDescriptionStr(undefined8 param_1,undefined8 param_2,int param_3)

{
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == 1) {
    __s = "[RICHMAN_GUESS_GAME_SCISSOR]";
  }
  else if (param_3 == 2) {
    __s = "[RICHMAN_GUESS_GAME_ROCK]";
  }
  else {
    __s = "[RICHMAN_GUESS_GAME_PAPER]";
  }
  std::string::string(asStack_10,__s);
  StringHelper::ToStringValue(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuessGameCard::SetCardType(GuessGameType) */

void __thiscall GuessGameCard::SetCardType(GuessGameCard *this,undefined4 param_2)

{
  undefined8 uVar1;
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0xe8) = param_2;
  local_8 = ___stack_chk_guard;
  GetCardTypeImageStr(asStack_18);
  uVar1 = StringHelper::ToImage(asStack_18,false);
  *(undefined8 *)(this + 0xd8) = uVar1;
  GetCardTypeDescriptionStr(auStack_10,this,param_2);
  FUN_054766c8(this + 0xe0,auStack_10);
  FUN_05476c50(auStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuessGameCard::StartTurning() */

void __thiscall GuessGameCard::StartTurning(GuessGameCard *this)

{
  char cVar1;
  PopAnimRig *pPVar2;
  UIWidget *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  this_00 = *(UIWidget **)(this + 0xf0);
  local_8 = ___stack_chk_guard;
  if (this_00 != (UIWidget *)0x0) {
    cVar1 = FUN_04c49ffc(*(StandaloneEffect *)(this_00 + 0x88));
    if (cVar1 == '\0') {
      StandaloneEffect::SetVisibility((StandaloneEffect *)this_00,true);
      this_00 = *(UIWidget **)(this + 0xf0);
    }
    pPVar2 = (PopAnimRig *)UIWidget::GetAtlasImage(this_00);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnEffectStop);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<GuessGameCard,void(GuessGameCard::*)(std::string_const&)>(aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar2,this + 0xf8,0,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuessGameCard::SetState(int) */

void __thiscall GuessGameCard::SetState(GuessGameCard *this,int param_1)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  *(int *)(this + 0xd4) = param_1;
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    std::string::string(asStack_10,"IMAGE_UI_RICHMAN_GUESS_CARD_BACK");
    uVar1 = StringHelper::ToImage(asStack_10,false);
    *(undefined8 *)(this + 0xd8) = uVar1;
    std::string::~string(asStack_10);
    nop();
    this[0x100] = (GuessGameCard)0x1;
  }
  else if (param_1 == 2) {
    StartTurning(this);
    this[0x100] = (GuessGameCard)0x0;
  }
  else if (param_1 == 3) {
    this[0x100] = (GuessGameCard)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GuessGameCard::OnEffectStop(std::string const&) */

void __thiscall GuessGameCard::OnEffectStop(GuessGameCard *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"shitou");
  if (((!bVar1) && (bVar1 = std::operator==(param_1,"jiandao"), !bVar1)) &&
     (bVar1 = std::operator==(param_1,"bu"), !bVar1)) {
    return;
  }
  if (*(StandaloneEffect **)(this + 0xf0) != (StandaloneEffect *)0x0) {
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0xf0),false);
  }
  SetState(this,3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuessGameCard::CreateTurningEffect(GuessGameType) */

void __thiscall GuessGameCard::CreateTurningEffect(GuessGameCard *this,int param_2)

{
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  RtWeakPtr *__n;
  StandaloneEffect *this_01;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = aRStack_18;
  std::string::string(asStack_20,"POPANIM_EFFECTS_RICHMAN_CARD_TURN");
  nop();
  if (param_2 == 1) {
    std::string::append((string *)(this + 0xf8),"jiandao",(size_t)__n);
  }
  else if (param_2 == 2) {
    std::string::append((string *)(this + 0xf8),"shitou",(size_t)__n);
  }
  else if (param_2 == 3) {
    std::string::append((string *)(this + 0xf8),"bu",(size_t)__n);
  }
  this_00 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0xf0) = this_00;
  GetPAMByName(asStack_20);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  this_01 = *(StandaloneEffect **)(this + 0xf0);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_18,(float)(*(int *)(this + 0x50) / 2),
             (float)(*(int *)(this + 0x54) / 2),0.0);
  StandaloneEffect::SetBoardSpaceOrigin(this_01,(SexyVector3 *)aRStack_18,-1);
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0xf0),false);
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0xf0),true);
  (**(code **)(**(long **)(this + 0xf0) + 0x80))(0x3f19999a,*(long **)(this + 0xf0));
  StandaloneEffect::SetKeepAlive(*(StandaloneEffect **)(this + 0xf0),true);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuessGameCard::Draw(Sexy::Graphics*) */

void __thiscall GuessGameCard::Draw(GuessGameCard *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (*(StandaloneEffect **)(this + 0xf0) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0xf0),param_1);
  }
  if (this[0x100] != (GuessGameCard)0x0) {
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xd8));
    iVar2 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xd8));
    Sexy::Insets::Insets(aIStack_28,0,0,iVar1,iVar2);
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    Sexy::Graphics::DrawImageMirror
              (param_1,*(Image **)(this + 0xd8),(TRect *)aIStack_18,(TRect *)aIStack_28,
               (bool)((byte)this[0x101] ^ 1));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

