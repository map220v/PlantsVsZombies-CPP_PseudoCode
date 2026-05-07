// Class: ConsumeAndReceiveItemWidget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumeAndReceiveItemWidget::LoadData(int, int, int, int, bool) */

void __thiscall
ConsumeAndReceiveItemWidget::LoadData
          (ConsumeAndReceiveItemWidget *this,int param_1,int param_2,int param_3,int param_4,
          bool param_5)

{
  long lVar1;
  RtId aRStack_40 [8];
  GAME_ITEM_INFO aGStack_38 [32];
  string asStack_18 [16];
  long local_8;
  
  *(int *)(this + 0xe0) = param_3;
  *(int *)(this + 0xd8) = param_1;
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xdc) = param_2;
  this[0xe8] = (ConsumeAndReceiveItemWidget)param_5;
  *(int *)(this + 0xe4) = param_4;
  GetGameItemInfo(param_2,0x7fffffff,0);
  lVar1 = StringHelper::ToImage(asStack_18,false);
  if (lVar1 != 0) {
    Sexy::BaseResource::GetRtId();
    Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
              ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0xf0),aRStack_40);
    Sexy::RtId::~RtId(aRStack_40);
  }
  GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ConsumeAndReceiveItemWidget::TouchEnded(Sexy::Touch const&) */

void __thiscall
ConsumeAndReceiveItemWidget::TouchEnded(ConsumeAndReceiveItemWidget *this,Touch *param_1)

{
  NetworkMgr *this_00;
  long *plVar1;
  
  if ((*(int *)(this + 0xd4) == (int)*(undefined8 *)param_1) &&
     (this[0xe8] != (ConsumeAndReceiveItemWidget)0x0)) {
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
    (**(code **)(*plVar1 + 0x228))(plVar1,*(undefined4 *)(this + 0xd8));
    return;
  }
  return;
}


/* ConsumeAndReceiveItemWidget::~ConsumeAndReceiveItemWidget() */

void __thiscall
ConsumeAndReceiveItemWidget::~ConsumeAndReceiveItemWidget(ConsumeAndReceiveItemWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06721e30;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ConsumeAndReceiveItemWidget::~ConsumeAndReceiveItemWidget() */

void __thiscall
ConsumeAndReceiveItemWidget::~ConsumeAndReceiveItemWidget(ConsumeAndReceiveItemWidget *this)

{
  ~ConsumeAndReceiveItemWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumeAndReceiveItemWidget::ConsumeAndReceiveItemWidget() */

void __thiscall
ConsumeAndReceiveItemWidget::ConsumeAndReceiveItemWidget(ConsumeAndReceiveItemWidget *this)

{
  long lVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06721e30;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf0));
  *(undefined8 *)(this + 0xf8) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xf0),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  this[0xe8] = (ConsumeAndReceiveItemWidget)0x0;
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xe4) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumeAndReceiveItemWidget::Draw(Sexy::Graphics*) */

void __thiscall
ConsumeAndReceiveItemWidget::Draw(ConsumeAndReceiveItemWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Image *pIVar7;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  local_8 = ___stack_chk_guard;
  nop();
  Sexy::StrFormat(L"x%d",auStack_30,(ulong)*(uint *)(this + 0xe0));
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_03ac4800(10);
  iVar4 = FUN_03ac4800(0xf);
  iVar2 = *(int *)(this + 0x54);
  iVar5 = FUN_03ac4800(0x1e);
  Sexy::Insets::Insets(aIStack_28,iVar1 / 2 + iVar3,iVar2 / 2 - iVar4,iVar1 / 2,iVar5);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_20_Outline);
  Sexy::Color::Color(aCStack_18,4);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aCStack_18,3,1);
  FUN_05476c50(auStack_30);
  if (this[0xe8] != (ConsumeAndReceiveItemWidget)0x0) {
    if (*(int *)(this + 0xd8) == 0) {
      pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8b30);
      Sexy::Graphics::DrawImage(param_1,pIVar7,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    }
    else {
      if (*(int *)(this + 0xd8) == 4) {
        this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8068;
      }
      else {
        this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7fc8;
      }
      pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
      Sexy::Graphics::DrawImage(param_1,pIVar7,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

