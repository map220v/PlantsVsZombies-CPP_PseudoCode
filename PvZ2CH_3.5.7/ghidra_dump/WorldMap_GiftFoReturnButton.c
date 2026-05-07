// Class: WorldMap_GiftFoReturnButton


/* WorldMap_GiftFoReturnButton::~WorldMap_GiftFoReturnButton() */

void __thiscall
WorldMap_GiftFoReturnButton::~WorldMap_GiftFoReturnButton(WorldMap_GiftFoReturnButton *this)

{
  *(undefined ***)this = &PTR_GetClass_066414b0;
  *(undefined ***)(this + 0x198) = &PTR__WorldMap_GiftFoReturnButton_06641808;
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to WorldMap_GiftFoReturnButton::~WorldMap_GiftFoReturnButton() */

void __thiscall
WorldMap_GiftFoReturnButton::~WorldMap_GiftFoReturnButton(WorldMap_GiftFoReturnButton *this)

{
  ~WorldMap_GiftFoReturnButton(this + -0x198);
  return;
}


/* WorldMap_GiftFoReturnButton::~WorldMap_GiftFoReturnButton() */

void __thiscall
WorldMap_GiftFoReturnButton::~WorldMap_GiftFoReturnButton(WorldMap_GiftFoReturnButton *this)

{
  ~WorldMap_GiftFoReturnButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_GiftFoReturnButton::~WorldMap_GiftFoReturnButton() */

void __thiscall
WorldMap_GiftFoReturnButton::~WorldMap_GiftFoReturnButton(WorldMap_GiftFoReturnButton *this)

{
  ~WorldMap_GiftFoReturnButton(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_GiftFoReturnButton::WorldMap_GiftFoReturnButton(int, Sexy::ButtonListener*) */

void __thiscall
WorldMap_GiftFoReturnButton::WorldMap_GiftFoReturnButton
          (WorldMap_GiftFoReturnButton *this,int param_1,ButtonListener *param_2)

{
  bool bVar1;
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
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066414b0;
  *(undefined ***)(this + 0x198) = &PTR__WorldMap_GiftFoReturnButton_06641808;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_GiftFoReturnButton::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_GiftFoReturnButton::Draw(WorldMap_GiftFoReturnButton *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  undefined8 uVar6;
  GraphicsAutoState aGStack_38 [8];
  TimeUtil aTStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::Draw((PVZ2UIButton *)this,param_1);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  iVar2 = FUN_0348b398(10);
  iVar3 = FUN_0348b398(0x16);
  iVar1 = *(int *)(this + 0x54);
  iVar4 = FUN_0348b398(0x14);
  Sexy::Insets::Insets((Insets *)&local_28,iVar2,iVar1 - iVar3,*(int *)(this + 0x50) - iVar4,iVar3);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2120);
  Sexy::Graphics::DrawImage(param_1,pIVar5,local_28,local_24,local_20,local_1c);
  TimeUtil::GetTimeCountdown(3,0x2a76);
  TimeUtil::GetTimeCountdownFormat(aTStack_30,0);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,aTStack_30,(Insets *)&local_28,uVar6,aCStack_18,5,1);
  FUN_05476c50(aTStack_30);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

