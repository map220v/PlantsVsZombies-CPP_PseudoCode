// Class: ChallengeRankItem


/* ChallengeRankItem::~ChallengeRankItem() */

void __thiscall ChallengeRankItem::~ChallengeRankItem(ChallengeRankItem *this)

{
  *(undefined ***)this = &PTR_GetClass_06974990;
  FUN_05476c50(this + 0xe0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ChallengeRankItem::~ChallengeRankItem() */

void __thiscall ChallengeRankItem::~ChallengeRankItem(ChallengeRankItem *this)

{
  ~ChallengeRankItem(this);
  AK::FreeHook(this);
  return;
}


/* ChallengeRankItem::ChallengeRankItem() */

void __thiscall ChallengeRankItem::ChallengeRankItem(ChallengeRankItem *this)

{
  int iVar1;
  int iVar2;
  
  Sexy::Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_06974990;
  FUN_05476574(this + 0xe0);
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  this[0xf0] = (ChallengeRankItem)0x0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  iVar1 = FUN_04ba1e78(0x140);
  iVar2 = FUN_04ba1e78(0x37);
  Sexy::Widget::Resize((Widget *)this,0,0,iVar1,iVar2);
  return;
}


/* ChallengeRankItem::Refresh() */

void __thiscall ChallengeRankItem::Refresh(ChallengeRankItem *this)

{
  UIHeadshotIcon *this_00;
  
  (**(code **)(*(long *)this + 0x80))(this,1,1);
  if (-1 < *(int *)(this + 0xec)) {
    this_00 = (UIHeadshotIcon *)UIHeadshotIcon::create(*(int *)(this + 0xec));
    (**(code **)(*(long *)this + 0x60))(this,this_00);
    UIHeadshotIcon::setScale(this_00,0.4,0.4);
    UIHeadshotIcon::setPostion(this_00,55.0,-4.0);
    UIHeadshotIcon::changeHeadshot(this_00,*(int *)(this + 0xec),(bool)this[0xf0]);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeRankItem::Draw(Sexy::Graphics*) */

void __thiscall ChallengeRankItem::Draw(ChallengeRankItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  SalesProgressBar *this_01;
  MonthlyCardMgr *pMVar9;
  int *piVar10;
  char *pcVar11;
  Image *pIVar12;
  string *extraout_x1;
  string *extraout_x1_00;
  string asStack_60 [8];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  Insets aIStack_48 [16];
  int local_38 [4];
  Sexy aSStack_28 [32];
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(param_1 + 0x30) < 1) || (*(int *)(param_1 + 0x34) < 1)) goto LAB_04ba2c1c;
  iVar3 = FUN_04ba1e78(7);
  iVar4 = FUN_04ba1e78(9);
  Sexy::Insets::Insets
            ((Insets *)&local_58,-iVar3,-iVar4,*(int *)(this + 0x50) + iVar3 * 2,
             *(int *)(this + 0x54) + iVar4 * 2);
  iVar3 = *(int *)(this + 0xd4);
  Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  iVar4 = PVPManager::GetPVPProfileId();
  if (iVar3 == iVar4) {
    GetGameItemInfo(*(int *)(this + 0xf8),0x7fffffff,0);
    if (local_38[0] != 0) {
      Sexy::Upper(aSStack_28,extraout_x1_00);
      pcVar11 = "IMAGE_UI_GENERIC_LOCAL_";
      goto LAB_04ba2c70;
    }
    Sexy::Insets::Insets(aIStack_48,(Insets *)&local_58);
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b89248;
LAB_04ba2a58:
    uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
    Draw9SliceImage(param_1,aIStack_48,uVar8);
  }
  else {
    GetGameItemInfo(*(int *)(this + 0xf8),0x7fffffff,0);
    if (local_38[0] == 0) {
      Sexy::Insets::Insets(aIStack_48,(Insets *)&local_58);
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b891d0;
      goto LAB_04ba2a58;
    }
    Sexy::Upper(aSStack_28,extraout_x1);
    pcVar11 = "IMAGE_UI_GENERIC_";
LAB_04ba2c70:
    std::operator+(pcVar11,(string *)aIStack_48);
    std::string::~string((string *)aIStack_48);
    pIVar12 = (Image *)StringHelper::ToImage(asStack_60,true);
    Sexy::Graphics::DrawImage(param_1,pIVar12,local_58,local_54,local_50,local_4c);
    std::string::~string(asStack_60);
  }
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
  iVar3 = FUN_04ba1e78(10);
  if (*(uint *)(this + 0xd8) < 3) {
    Sexy::StrFormat("IMAGE_UI_DIALOG_ASSET_RANK%d",(GAME_ITEM_INFO *)local_38);
    this_01 = (SalesProgressBar *)StringHelper::ToImage((string *)local_38,true);
    std::string::~string((string *)local_38);
    iVar5 = FUN_04ba1e78(10);
    iVar4 = *(int *)(this + 0x54);
    iVar6 = SalesProgressBar::GetCurrentLevel(this_01);
    Sexy::Graphics::DrawImage(param_1,(Image *)this_01,iVar5,(iVar4 - iVar6) / 2);
    if (-1 < *(int *)(this + 0xec)) goto LAB_04ba2afc;
LAB_04ba2d4c:
    iVar4 = FUN_04ba1e78(0x32);
  }
  else {
    Sexy::StrFormat(L"%d",asStack_60,(ulong)(*(uint *)(this + 0xd8) + 1));
    iVar4 = FUN_04ba1e78(0xf);
    iVar5 = FUN_04ba1e78(10);
    iVar6 = FUN_04ba1e78(0x32);
    Sexy::Insets::Insets(aIStack_48,iVar4,iVar5,iVar6,iVar6);
    uVar8 = PrimeText_Game::Typeface_FZCuYuan_26_Outline;
    Sexy::Color::Color((Color *)local_38,3);
    WriteWordInRect(param_1,asStack_60,aIStack_48,uVar8,(GAME_ITEM_INFO *)local_38,0,1);
    FUN_05476c50(asStack_60);
    if (*(int *)(this + 0xec) < 0) goto LAB_04ba2d4c;
LAB_04ba2afc:
    iVar4 = FUN_04ba1e78(100);
  }
  pMVar9 = (MonthlyCardMgr *)Sexy::LazySingleton<MonthlyCardMgr>::GetInstancePtr();
  piVar10 = (int *)MonthlyCardMgr::GetColor(pMVar9,*(undefined4 *)(this + 0xf4));
  iVar5 = *piVar10;
  iVar6 = piVar10[1];
  iVar1 = piVar10[3];
  iVar2 = piVar10[2];
  iVar7 = FUN_04ba1e78(200);
  Sexy::Insets::Insets(aIStack_48,iVar3 + iVar4,0,iVar7,*(int *)(this + 0x54));
  uVar8 = PrimeText_Game::Typeface_FZCuYuan_20;
  Sexy::Insets::Insets((Insets *)local_38,iVar5,iVar6,iVar2,iVar1);
  WriteWordInRect(param_1,this + 0xe0,aIStack_48,uVar8,(GAME_ITEM_INFO *)local_38,3,1);
  Sexy::StrFormat(L"%d",asStack_60,(ulong)*(uint *)(this + 0xe8));
  iVar4 = FUN_04ba1e78(200);
  iVar3 = *(int *)(this + 0x50);
  iVar5 = FUN_04ba1e78(0xbe);
  Sexy::Insets::Insets(aIStack_48,iVar3 - iVar4,0,iVar5,*(int *)(this + 0x54));
  uVar8 = PrimeText_Game::Typeface_FZCuYuan_20;
  Sexy::Color::Color((Color *)local_38,0x46,0x3d,2);
  WriteWordInRect(param_1,asStack_60,aIStack_48,uVar8,(GAME_ITEM_INFO *)local_38,4,1);
  FUN_05476c50(asStack_60);
LAB_04ba2c1c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

