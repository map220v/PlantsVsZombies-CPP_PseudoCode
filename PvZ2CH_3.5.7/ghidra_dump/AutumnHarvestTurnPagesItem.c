// Class: AutumnHarvestTurnPagesItem


/* AutumnHarvestTurnPagesItem::~AutumnHarvestTurnPagesItem() */

void __thiscall
AutumnHarvestTurnPagesItem::~AutumnHarvestTurnPagesItem(AutumnHarvestTurnPagesItem *this)

{
  *(undefined ***)this = &PTR_GetClass_069f6b00;
  FUN_05476c50(this + 0xf8);
  FUN_05476c50(this + 0xf0);
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* AutumnHarvestTurnPagesItem::~AutumnHarvestTurnPagesItem() */

void __thiscall
AutumnHarvestTurnPagesItem::~AutumnHarvestTurnPagesItem(AutumnHarvestTurnPagesItem *this)

{
  ~AutumnHarvestTurnPagesItem(this);
  AK::FreeHook(this);
  return;
}


/* AutumnHarvestTurnPagesItem::AutumnHarvestTurnPagesItem() */

void __thiscall
AutumnHarvestTurnPagesItem::AutumnHarvestTurnPagesItem(AutumnHarvestTurnPagesItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_069f6b00;
  FUN_05476574(this + 0xd8);
  Sexy::Color::Color((Color *)(this + 0xe0));
  FUN_05476574(this + 0xf0);
  FUN_05476574(this + 0xf8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestTurnPagesItem::Draw(Sexy::Graphics*) */

void __thiscall AutumnHarvestTurnPagesItem::Draw(AutumnHarvestTurnPagesItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba2498);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  iVar1 = FUN_04ebda84(0x1e);
  iVar2 = FUN_04ebda84(0x11);
  iVar3 = FUN_04ebda84(0x3c);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,*(int *)(this + 0x50) - iVar3,iVar1);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xe0));
  WriteWordInRect(param_1,this + 0xd8,aIStack_28,uVar5,aIStack_18,3,1);
  iVar1 = FUN_04ebda84(0xb4);
  iVar2 = FUN_04ebda84(0x11);
  iVar3 = FUN_04ebda84(0x78);
  iVar4 = FUN_04ebda84(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,this + 0xf0,aIStack_18,uVar5,aIStack_28,3,1);
  iVar1 = FUN_04ebda84(0x1e);
  iVar2 = FUN_04ebda84(0x11);
  iVar3 = FUN_04ebda84(0x3c);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,*(int *)(this + 0x50) - iVar3,iVar1);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,this + 0xf8,aIStack_18,uVar5,aIStack_28,4,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestTurnPagesItem::InitView(AutumnHarvestLotteryHistory const&) */

void __thiscall
AutumnHarvestTurnPagesItem::InitView
          (AutumnHarvestTurnPagesItem *this,AutumnHarvestLotteryHistory *param_1)

{
  bool bVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  AutumnHarvestNetworkData *pAVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  GAME_ITEM_INFO aGStack_158 [40];
  undefined1 auStack_130 [8];
  AutumnHarvestNetworkData aAStack_128 [24];
  undefined8 local_110;
  undefined8 local_108;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetGameItemInfo(*(int *)param_1,0x7fffffff,0);
  thunk_FUN_05477b9c(this + 0xd8,auStack_130);
  Sexy::StrFormat(" x%d",(string *)&local_168,(ulong)*(uint *)(param_1 + 4));
  Sexy::ToWString((string *)&local_168);
  FUN_054766c8(this + 0xf0,aAStack_128);
  FUN_05476c50(aAStack_128);
  std::string::~string((string *)&local_168);
  Sexy::ToWString((string *)(param_1 + 8));
  FUN_054766c8(this + 0xf8,aAStack_128);
  FUN_05476c50(aAStack_128);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<AutumnHarvestMgr>::GetInstancePtr();
  pAVar3 = (AutumnHarvestNetworkData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  AutumnHarvestNetworkData::AutumnHarvestNetworkData(aAStack_128,pAVar3);
  iVar2 = MaterialItemMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar2);
  bVar1 = std::operator==((string *)&local_168,"mat_autumn_harvest_supercorn");
  std::string::~string((string *)&local_168);
  if (bVar1) {
    Sexy::Color::Color((Color *)&local_168,0xff,0xd7,0);
    *(undefined8 *)(this + 0xe0) = local_168;
    *(undefined8 *)(this + 0xe8) = uStack_160;
  }
  else if (*(int *)param_1 == 0xbc0) {
    Sexy::Color::Color((Color *)&local_168,2);
    *(undefined8 *)(this + 0xe0) = local_168;
    *(undefined8 *)(this + 0xe8) = uStack_160;
  }
  else {
    uVar4 = FUN_04ec02b8(local_110);
    uVar5 = FUN_04ec0308(local_108);
    local_170 = FUN_04ec3d50(uVar4,uVar5,param_1);
    local_168 = FUN_04ec0308(local_108);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_170,(__normal_iterator *)&local_168);
    if (bVar1) {
      Sexy::Color::Color((Color *)&local_168,7);
      *(undefined8 *)(this + 0xe0) = local_168;
      *(undefined8 *)(this + 0xe8) = uStack_160;
    }
    else {
      Sexy::Color::Color((Color *)&local_168,0x80,0x80,0x80);
      *(undefined8 *)(this + 0xe0) = local_168;
      *(undefined8 *)(this + 0xe8) = uStack_160;
    }
  }
  AutumnHarvestNetworkData::~AutumnHarvestNetworkData(aAStack_128);
  GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_158);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

