// Class: LimitGroupBuyGridItemUIButton


/* LimitGroupBuyGridItemUIButton::setText(std::wstring const&) */

void LimitGroupBuyGridItemUIButton::setText(wstring *param_1)

{
  thunk_FUN_05477b9c(param_1 + 0x300);
  return;
}


/* LimitGroupBuyGridItemUIButton::setImage(Sexy::RtWeakPtr<Sexy::Image>) */

void __thiscall
LimitGroupBuyGridItemUIButton::setImage(LimitGroupBuyGridItemUIButton *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x318),param_2);
  return;
}


/* LimitGroupBuyGridItemUIButton::~LimitGroupBuyGridItemUIButton() */

void __thiscall
LimitGroupBuyGridItemUIButton::~LimitGroupBuyGridItemUIButton(LimitGroupBuyGridItemUIButton *this)

{
  *(undefined ***)this = &PTR_GetClass_066ec9a0;
  *(undefined ***)(this + 0x198) = &PTR__LimitGroupBuyGridItemUIButton_066eccf8;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x318));
  FUN_05476c50(this + 0x300);
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to LimitGroupBuyGridItemUIButton::~LimitGroupBuyGridItemUIButton() */

void __thiscall
LimitGroupBuyGridItemUIButton::~LimitGroupBuyGridItemUIButton(LimitGroupBuyGridItemUIButton *this)

{
  ~LimitGroupBuyGridItemUIButton(this + -0x198);
  return;
}


/* LimitGroupBuyGridItemUIButton::~LimitGroupBuyGridItemUIButton() */

void __thiscall
LimitGroupBuyGridItemUIButton::~LimitGroupBuyGridItemUIButton(LimitGroupBuyGridItemUIButton *this)

{
  ~LimitGroupBuyGridItemUIButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LimitGroupBuyGridItemUIButton::~LimitGroupBuyGridItemUIButton() */

void __thiscall
LimitGroupBuyGridItemUIButton::~LimitGroupBuyGridItemUIButton(LimitGroupBuyGridItemUIButton *this)

{
  ~LimitGroupBuyGridItemUIButton(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitGroupBuyGridItemUIButton::LimitGroupBuyGridItemUIButton(int, Sexy::ButtonListener*) */

void __thiscall
LimitGroupBuyGridItemUIButton::LimitGroupBuyGridItemUIButton
          (LimitGroupBuyGridItemUIButton *this,int param_1,ButtonListener *param_2)

{
  undefined8 uVar1;
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
  *(undefined ***)this = &PTR_GetClass_066ec9a0;
  *(undefined ***)(this + 0x198) = &PTR__LimitGroupBuyGridItemUIButton_066eccf8;
  FUN_05478178(this + 0x300,&DAT_056f11a8,aCStack_18);
  nop();
  Sexy::Insets::Insets((Insets *)(this + 0x308));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x318));
  Sexy::Insets::Insets((Insets *)(this + 0x328));
  *(int *)(this + 0x338) = param_1;
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  *(undefined8 *)(this + 800) = uVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitGroupBuyGridItemUIButton::Resize(Sexy::TRect<int> const&) */

void __thiscall
LimitGroupBuyGridItemUIButton::Resize(LimitGroupBuyGridItemUIButton *this,TRect *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  iVar1 = *(int *)(this + 0x54);
  iVar4 = iVar1 / 7;
  iVar3 = FUN_039c2d44(5);
  iVar1 = (iVar1 * 5) / 7;
  Sexy::Insets::Insets((Insets *)&local_18,iVar4 + iVar3,iVar4,iVar1,iVar1);
  iVar1 = *(int *)(this + 0x54);
  *(undefined8 *)(this + 0x328) = local_18;
  *(undefined8 *)(this + 0x330) = uStack_10;
  iVar4 = FUN_039c2d44(5);
  iVar4 = iVar1 - iVar4;
  Sexy::Insets::Insets((Insets *)&local_18,iVar4,0,*(int *)(this + 0x50) - iVar1,iVar4);
  bVar2 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x308) = local_18;
  *(undefined8 *)(this + 0x310) = uStack_10;
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitGroupBuyGridItemUIButton::Draw(Sexy::Graphics*) */

void __thiscall
LimitGroupBuyGridItemUIButton::Draw(LimitGroupBuyGridItemUIButton *this,Graphics *param_1)

{
  bool bVar1;
  ResourceInfo *pRVar2;
  undefined8 uVar3;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::Draw((PVZ2UIButton *)this,param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x318));
  if (bVar1) {
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x318));
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar2,*(int *)(this + 0x328),*(int *)(this + 0x32c),
               *(int *)(this + 0x330),*(int *)(this + 0x334));
  }
  uVar3 = *(undefined8 *)(this + 800);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,this + 0x300,this + 0x308,uVar3,aCStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

