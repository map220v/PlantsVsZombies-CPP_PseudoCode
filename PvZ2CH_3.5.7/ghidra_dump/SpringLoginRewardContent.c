// Class: SpringLoginRewardContent


/* SpringLoginRewardContent::~SpringLoginRewardContent() */

void __thiscall SpringLoginRewardContent::~SpringLoginRewardContent(SpringLoginRewardContent *this)

{
  *(undefined ***)this = &PTR_GetClass_066cee20;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  UIRewardFrame::~UIRewardFrame((UIRewardFrame *)this);
  return;
}


/* SpringLoginRewardContent::~SpringLoginRewardContent() */

void __thiscall SpringLoginRewardContent::~SpringLoginRewardContent(SpringLoginRewardContent *this)

{
  ~SpringLoginRewardContent(this);
  AK::FreeHook(this);
  return;
}


/* SpringLoginRewardContent::SpringLoginRewardContent(UIRewardFrame::RewardType, std::string const&,
   int, bool) */

void __thiscall SpringLoginRewardContent::SpringLoginRewardContent(SpringLoginRewardContent *this)

{
  SpringLoginRewardContent in_w4;
  
  UIRewardFrame::UIRewardFrame();
  this[0x148] = in_w4;
  *(undefined ***)this = &PTR_GetClass_066cee20;
  return;
}


/* SpringLoginRewardContent::Draw(Sexy::Graphics*) */

void __thiscall SpringLoginRewardContent::Draw(SpringLoginRewardContent *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  Image *pIVar5;
  
  UIRewardFrame::Draw((UIRewardFrame *)this,param_1);
  if (this[0x148] == (SpringLoginRewardContent)0x0) {
    return;
  }
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abbfd8);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abbfd8);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_01);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abbfd8);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_03943dd0(0);
  Sexy::Graphics::DrawImage
            (param_1,pIVar5,iVar1 + (iVar2 / 3) * -2,iVar4,(iVar2 / 3) * 2,(iVar3 / 3) * 2);
  return;
}

