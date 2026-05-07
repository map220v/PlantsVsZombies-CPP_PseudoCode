// Class: RiddlesRedPackTip


/* RiddlesRedPackTip::~RiddlesRedPackTip() */

void __thiscall RiddlesRedPackTip::~RiddlesRedPackTip(RiddlesRedPackTip *this)

{
  *(undefined ***)this = &PTR_GetClass_06860970;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* RiddlesRedPackTip::~RiddlesRedPackTip() */

void __thiscall RiddlesRedPackTip::~RiddlesRedPackTip(RiddlesRedPackTip *this)

{
  ~RiddlesRedPackTip(this);
  AK::FreeHook(this);
  return;
}


/* RiddlesRedPackTip::RiddlesRedPackTip() */

void __thiscall RiddlesRedPackTip::RiddlesRedPackTip(RiddlesRedPackTip *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06860970;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiddlesRedPackTip::Draw(Sexy::Graphics*) */

void __thiscall RiddlesRedPackTip::Draw(RiddlesRedPackTip *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  Image *pIVar5;
  wchar_t *pwVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if ((this_01 != (PlayerInfo *)0x0) &&
     (iVar1 = PlayerInfo::GetRedPacketCount(this_01,false), 0 < iVar1)) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b122b8);
    Sexy::Graphics::DrawImage(param_1,pIVar5,0,0);
    TodStringTranslate(L"%d");
    pwVar6 = (wchar_t *)FUN_054766ec(aCStack_18);
    uVar7 = PlayerInfo::GetRedPacketCount(this_01,false);
    Sexy::StrFormat(pwVar6,auStack_30,uVar7 & 0xffffffff);
    FUN_05476c50(aCStack_18);
    iVar1 = FUN_0457b86c(0xffffffe4);
    iVar2 = FUN_0457b86c(0xffffffef);
    iVar3 = FUN_0457b86c(100);
    iVar4 = FUN_0457b86c(0x50);
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
    uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_HardShadow);
    Sexy::Color::Color(aCStack_18,2);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar8,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

