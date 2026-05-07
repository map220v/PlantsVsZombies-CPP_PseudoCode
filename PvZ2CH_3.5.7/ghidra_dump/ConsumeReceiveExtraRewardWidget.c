// Class: ConsumeReceiveExtraRewardWidget


/* ConsumeReceiveExtraRewardWidget::~ConsumeReceiveExtraRewardWidget() */

void __thiscall
ConsumeReceiveExtraRewardWidget::~ConsumeReceiveExtraRewardWidget
          (ConsumeReceiveExtraRewardWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066ea460;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ConsumeReceiveExtraRewardWidget::~ConsumeReceiveExtraRewardWidget() */

void __thiscall
ConsumeReceiveExtraRewardWidget::~ConsumeReceiveExtraRewardWidget
          (ConsumeReceiveExtraRewardWidget *this)

{
  ~ConsumeReceiveExtraRewardWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumeReceiveExtraRewardWidget::ConsumeReceiveExtraRewardWidget() */

void __thiscall
ConsumeReceiveExtraRewardWidget::ConsumeReceiveExtraRewardWidget
          (ConsumeReceiveExtraRewardWidget *this)

{
  long lVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_066ea460;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf0));
  *(undefined8 *)(this + 0xf8) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xf0),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  this[0xe8] = (ConsumeReceiveExtraRewardWidget)0x0;
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xe4) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumeReceiveExtraRewardWidget::TouchEnded(Sexy::Touch const&) */

void __thiscall
ConsumeReceiveExtraRewardWidget::TouchEnded(ConsumeReceiveExtraRewardWidget *this,Touch *param_1)

{
  undefined8 uVar1;
  DNetwork *this_00;
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1768];
  string asStack_600 [1528];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0xd4) == (int)*(undefined8 *)param_1) &&
     (this[0xe8] != (ConsumeReceiveExtraRewardWidget)0x0)) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    std::string::string(asStack_d40,"ai");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    local_d48[0] = 0x2a11;
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
    FUN_05474278(uVar1,asStack_ce8);
    std::string::~string(asStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    std::string::string(asStack_d40,"g");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe4));
    FUN_05474278(uVar1,asStack_ce8);
    std::string::~string(asStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)asStack_ce8);
    FUN_039bc358(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_00,asStack_600,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)asStack_ce8);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumeReceiveExtraRewardWidget::Draw(Sexy::Graphics*) */

void __thiscall
ConsumeReceiveExtraRewardWidget::Draw(ConsumeReceiveExtraRewardWidget *this,Graphics *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Image *pIVar7;
  ResourceInfo *pRVar8;
  int iVar9;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  local_8 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xf0));
  if (bVar2) {
    iVar9 = (int)((float)*(int *)(this + 0x54) * 0.95);
    Sexy::Insets::Insets
              ((Insets *)aCStack_18,(int)((float)*(int *)(this + 0x50) * 0.13),
               (int)((float)*(int *)(this + 0x54) * 0.025),iVar9,iVar9);
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xf0));
    DrawAdaptiveImage(param_1,(Insets *)aCStack_18,pRVar8);
  }
  nop();
  Sexy::StrFormat(L"x%d",auStack_30,(ulong)*(uint *)(this + 0xe0));
  iVar9 = *(int *)(this + 0x50);
  iVar3 = FUN_039bc3b4(10);
  iVar4 = FUN_039bc3b4(0xf);
  iVar1 = *(int *)(this + 0x54);
  iVar5 = FUN_039bc3b4(0x1e);
  Sexy::Insets::Insets(aIStack_28,iVar9 / 2 + iVar3,iVar1 / 2 - iVar4,iVar9 / 2,iVar5);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_20_Outline);
  Sexy::Color::Color(aCStack_18,4);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aCStack_18,3,1);
  FUN_05476c50(auStack_30);
  if (this[0xe8] != (ConsumeReceiveExtraRewardWidget)0x0) {
    if (*(int *)(this + 0xd8) == 0) {
      pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac03f8);
      Sexy::Graphics::DrawImage(param_1,pIVar7,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    }
    else {
      if (*(int *)(this + 0xd8) == 4) {
        this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac03d0;
      }
      else {
        this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac0398;
      }
      pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
      Sexy::Graphics::DrawImage(param_1,pIVar7,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

