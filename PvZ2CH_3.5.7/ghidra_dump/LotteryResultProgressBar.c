// Class: LotteryResultProgressBar


/* LotteryResultProgressBar::GetCurrentLevel() */

undefined4 __thiscall LotteryResultProgressBar::GetCurrentLevel(LotteryResultProgressBar *this)

{
  return *(undefined4 *)(this + 0x38);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryResultProgressBar::OnAnimOn(std::string const&) */

void LotteryResultProgressBar::OnAnimOn(string *param_1)

{
  int iVar1;
  string asStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(param_1 + 0x48);
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"level_off");
  EffectAnim_UIAnim::PlayOnce((EffectAnim_UIAnim *)(param_1 + (long)iVar1 * 0x30 + 0xe0),asStack_10)
  ;
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LotteryResultProgressBar::MoveProgressTo(int) */

void __thiscall LotteryResultProgressBar::MoveProgressTo(LotteryResultProgressBar *this,int param_1)

{
  *(int *)(this + 0x1d0) = param_1;
  *(undefined4 *)(this + 0x1e0) = *(undefined4 *)(this + 0x1d8);
  return;
}


/* LotteryResultProgressBar::RefreshProgress() */

void __thiscall LotteryResultProgressBar::RefreshProgress(LotteryResultProgressBar *this)

{
  MoveProgressTo(this,*(int *)(this + 0x1d0));
  return;
}


/* LotteryResultProgressBar::MoveAdvanceProgressTo(int) */

void __thiscall
LotteryResultProgressBar::MoveAdvanceProgressTo(LotteryResultProgressBar *this,int param_1)

{
  *(int *)(this + 0x1d4) = param_1;
  *(undefined4 *)(this + 0x1e4) = *(undefined4 *)(this + 0x1dc);
  SalesTimer::StartTimer((SalesTimer *)(this + 0x1e8),0.5);
  return;
}


/* LotteryResultProgressBar::RefreshAdvanceProgress() */

void __thiscall LotteryResultProgressBar::RefreshAdvanceProgress(LotteryResultProgressBar *this)

{
  MoveAdvanceProgressTo(this,*(int *)(this + 0x230));
  return;
}


/* LotteryResultProgressBar::IsLevelUp() */

bool __thiscall LotteryResultProgressBar::IsLevelUp(LotteryResultProgressBar *this)

{
  return *(int *)(this + 0x38) != *(int *)(this + 0x40) + 1;
}


/* LotteryResultProgressBar::GetAdvanceLevel() */

int __thiscall LotteryResultProgressBar::GetAdvanceLevel(LotteryResultProgressBar *this)

{
  return *(int *)(this + 0x40) + 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryResultProgressBar::SetProgress(int) */

void __thiscall LotteryResultProgressBar::SetProgress(LotteryResultProgressBar *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  *(int *)(this + 0x1d8) = param_1;
  local_8 = ___stack_chk_guard;
  iVar5 = FUN_0438e6bc(5);
  iVar1 = *(int *)(this + 0x4c);
  iVar2 = *(int *)(this + 0x50);
  iVar6 = FUN_0438e6bc(10);
  iVar3 = 0;
  if (*(int *)(this + 0x34) != 0) {
    iVar3 = ((*(int *)(this + 0x54) - iVar6) * *(int *)(this + 0x1d0)) / *(int *)(this + 0x34);
  }
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar5 + iVar1,iVar5 + iVar2,iVar3,*(int *)(this + 0x58) - iVar6);
  bVar4 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x5c) = local_18;
  *(undefined8 *)(this + 100) = uStack_10;
  if (bVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryResultProgressBar::SetAdvanceProgress(int) */

void __thiscall
LotteryResultProgressBar::SetAdvanceProgress(LotteryResultProgressBar *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  iVar5 = *(int *)(this + 100);
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)(this + 0x5c);
  *(int *)(this + 0x1dc) = param_1;
  iVar3 = FUN_0438e6bc(10);
  iVar4 = FUN_0438e6bc(5);
  iVar2 = 0;
  if (*(int *)(this + 0x34) != 0) {
    iVar2 = (param_1 * (*(int *)(this + 0x54) - iVar3)) / *(int *)(this + 0x34);
  }
  Sexy::Insets::Insets
            ((Insets *)&local_18,(iVar1 + iVar5) - iVar3,iVar4 + *(int *)(this + 0x50),iVar3 + iVar2
             ,*(int *)(this + 0x58) - iVar3);
  *(undefined8 *)(this + 0x6c) = local_18;
  *(undefined8 *)(this + 0x74) = uStack_10;
  iVar5 = FUN_0438e6bc(10);
  if (*(int *)(this + 0x54) - iVar5 < (*(int *)(this + 100) + *(int *)(this + 0x74)) - iVar5) {
    *(int *)(this + 0x74) = iVar5 + ((*(int *)(this + 0x54) - iVar5) - *(int *)(this + 100));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LotteryResultProgressBar::StartToShow() */

void __thiscall LotteryResultProgressBar::StartToShow(LotteryResultProgressBar *this)

{
  SalesProgressBar::SetVisible((SalesProgressBar *)this,true);
  SetProgress(this,*(int *)(this + 0x1d0));
  SetAdvanceProgress(this,0);
  RefreshAdvanceProgress(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryResultProgressBar::OnDraw(Sexy::Graphics*) */

void __thiscall LotteryResultProgressBar::OnDraw(LotteryResultProgressBar *this,Graphics *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ResourceInfo *pRVar5;
  int iVar6;
  int iVar7;
  LotteryResultProgressBar *this_00;
  LotteryResultProgressBar *pLVar8;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x2d] == (LotteryResultProgressBar)0x0) goto LAB_0438f5e8;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb8));
  if (bVar1) {
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x4c));
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xb8));
    Draw9SliceImage(param_1,aIStack_18,pRVar5);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xc0));
    if (bVar1) goto LAB_0438f740;
LAB_0438f63c:
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 200));
    if (bVar1) {
LAB_0438f77c:
      Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x5c));
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 200));
      Draw9SliceImage(param_1,aIStack_18,pRVar5);
    }
  }
  else {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xc0));
    if (!bVar1) goto LAB_0438f63c;
LAB_0438f740:
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x6c));
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xc0));
    Draw9SliceImage(param_1,aIStack_18,pRVar5);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 200));
    if (bVar1) goto LAB_0438f77c;
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xd8));
  if ((bVar1) && (iVar6 = *(int *)(this + 0x30), 0 < iVar6)) {
    this_00 = this + 0xe0;
    pLVar8 = this + 0x8c;
    iVar7 = 0;
    do {
      if (iVar6 + -1 != iVar7) {
        pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xd8));
        iVar3 = FUN_0438e6bc(2);
        iVar6 = *(int *)pLVar8;
        iVar4 = FUN_0438e6bc(0x14);
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pRVar5,iVar6 - iVar3,iVar4 + *(int *)(pLVar8 + 4));
      }
      cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)this_00);
      if (cVar2 != '\0') {
        EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)this_00,param_1);
      }
      iVar6 = *(int *)(this + 0x30);
      iVar7 = iVar7 + 1;
      this_00 = this_00 + 0x30;
      pLVar8 = pLVar8 + 8;
    } while (iVar7 < iVar6);
  }
LAB_0438f5e8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LotteryResultProgressBar::~LotteryResultProgressBar() */

void __thiscall LotteryResultProgressBar::~LotteryResultProgressBar(LotteryResultProgressBar *this)

{
  LotteryResultProgressBar *this_00;
  
  *(undefined ***)this = &PTR_GetClass_0683d050;
  *(undefined ***)(this + 0x10) = &PTR__LotteryResultProgressBar_0683d170;
  this_00 = this + 0x1d0;
  std::string::~string((string *)(this + 0x228));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1f8))
  ;
  nop();
  do {
    this_00 = this_00 + -0x30;
    EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)this_00);
  } while (this + 0xe0 != this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  RealObject::~RealObject((RealObject *)this);
  return;
}


/* non-virtual thunk to LotteryResultProgressBar::~LotteryResultProgressBar() */

void __thiscall LotteryResultProgressBar::~LotteryResultProgressBar(LotteryResultProgressBar *this)

{
  ~LotteryResultProgressBar(this + -0x10);
  return;
}


/* LotteryResultProgressBar::~LotteryResultProgressBar() */

void __thiscall LotteryResultProgressBar::~LotteryResultProgressBar(LotteryResultProgressBar *this)

{
  ~LotteryResultProgressBar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LotteryResultProgressBar::~LotteryResultProgressBar() */

void __thiscall LotteryResultProgressBar::~LotteryResultProgressBar(LotteryResultProgressBar *this)

{
  ~LotteryResultProgressBar(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryResultProgressBar::Resize(Sexy::TRect<int>) */

void __thiscall LotteryResultProgressBar::Resize(LotteryResultProgressBar *this,undefined8 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  uVar1 = param_2[1];
  *(undefined8 *)(this + 0x4c) = *param_2;
  *(undefined8 *)(this + 0x54) = uVar1;
  local_8 = ___stack_chk_guard;
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aff920);
  iVar3 = GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aff920);
  iVar4 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar5 = FUN_0438e6bc(10);
  Sexy::Insets::Insets
            ((Insets *)&local_18,*(int *)(this + 0x4c) - iVar5,
             *(int *)(this + 0x50) - (iVar4 - *(int *)(this + 0x58)) / 2,iVar3,iVar4);
  bVar2 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x7c) = local_18;
  *(undefined8 *)(this + 0x84) = uStack_10;
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryResultProgressBar::LotteryResultProgressBar() */

void __thiscall LotteryResultProgressBar::LotteryResultProgressBar(LotteryResultProgressBar *this)

{
  LotteryResultProgressBar *pLVar1;
  size_t __n;
  LotteryResultProgressBar *pLVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RealObject::RealObject((RealObject *)this);
  *(undefined ***)this = &PTR_GetClass_0683d050;
  *(undefined ***)(this + 0x10) = &PTR__LotteryResultProgressBar_0683d170;
  Sexy::Insets::Insets((Insets *)(this + 0x4c));
  Sexy::Insets::Insets((Insets *)(this + 0x5c));
  Sexy::Insets::Insets((Insets *)(this + 0x6c));
  Sexy::Insets::Insets((Insets *)(this + 0x7c));
  pLVar2 = this + 0x8c;
  do {
    pLVar1 = pLVar2 + 8;
    Sexy::Point::Point((Point *)pLVar2);
    pLVar2 = pLVar1;
  } while (pLVar1 != this + 0xb4);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xc0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 200));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  pLVar2 = this + 0xe0;
  do {
    pLVar1 = pLVar2 + 0x30;
    EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)pLVar2);
    pLVar2 = pLVar1;
  } while (pLVar1 != this + 0x1d0);
  SalesTimer::SalesTimer((SalesTimer *)(this + 0x1e8));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x1f8));
  Set8BytesTo0((string *)(this + 0x228));
  this[0x2d] = (LotteryResultProgressBar)0x0;
  __n = 0xffffffff;
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  *(undefined4 *)(this + 0x44) = 0xffffffff;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x1d0) = 0;
  *(undefined4 *)(this + 0x1d4) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1e4) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xb8),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xc0),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 200),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xd0),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xd8),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  *(undefined4 *)(this + 0x1d0) = 0;
  *(undefined4 *)(this + 0x1d4) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1e4) = 0;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1f8))
  ;
  std::string::append((string *)(this + 0x228),"",__n);
  *(undefined4 *)(this + 0x230) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryResultProgressBar::HandleAdvanceProgress() */

void __thiscall LotteryResultProgressBar::HandleAdvanceProgress(LotteryResultProgressBar *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined8 local_58;
  undefined8 local_50 [3];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar6 = -1;
  local_58 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                       ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                        (this + 0x1f8));
  local_50[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)(this + 0x1f8));
  while (bVar3 = eastl::operator!=((rbtree_iterator *)&local_58,(rbtree_iterator *)local_50), bVar3)
  {
    piVar5 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_58);
    iVar1 = piVar5[1];
    iVar2 = *piVar5;
    if ((iVar1 <= *(int *)(this + 0x1d0)) &&
       (*(int *)(this + 0x3c) = iVar2, *(int *)(this + 0x44) != iVar2)) {
      *(int *)(this + 0x44) = iVar2;
    }
    if (((iVar1 <= *(int *)(this + 0x1d0) + *(int *)(this + 0x1d4)) &&
        (*(int *)(this + 0x40) != iVar2)) &&
       (*(int *)(this + 0x40) = iVar2, *(int *)(this + 0x3c) < iVar2)) {
      iVar6 = iVar2;
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_58);
  }
  if ((*(int *)(this + 0x48) != iVar6) && (iVar6 != -1)) {
    cVar4 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + (long)iVar6 * 0x30 + 0xe0));
    if (cVar4 != '\0') {
      std::string::string((string *)&local_58,"level_on");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnAnimOn);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<LotteryResultProgressBar,void(LotteryResultProgressBar::*)(std::string_const&)>
                (aDStack_38,(rbtree_iterator *)local_50);
      EffectAnim_UIAnim::PlayOnceThen
                ((EffectAnim_UIAnim *)(this + (long)iVar6 * 0x30 + 0xe0),
                 (_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_58,aDStack_38);
      std::string::~string((string *)&local_58);
      nop();
      *(int *)(this + 0x48) = iVar6;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* LotteryResultProgressBar::UpdateAdvancePieceToShow() */

void __thiscall LotteryResultProgressBar::UpdateAdvancePieceToShow(LotteryResultProgressBar *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = *(int *)(this + 0x1e4);
  iVar1 = *(int *)(this + 0x1d4);
  fVar4 = (float)SalesTimer::GetTimerScale((SalesTimer *)(this + 0x1e8));
  cVar2 = SalesTimer::IsTimeUp((SalesTimer *)(this + 0x1e8));
  if ((cVar2 == '\0') &&
     (iVar3 = (int)((float)iVar3 + (float)(iVar1 - iVar3) * fVar4), *(int *)(this + 0x1d4) != iVar3)
     ) {
    SetAdvanceProgress(this,iVar3);
    return;
  }
  HandleAdvanceProgress(this);
  *(int *)(this + 0x1dc) = *(int *)(this + 0x1d4);
  SetAdvanceProgress(this,*(int *)(this + 0x1d4));
  return;
}


/* LotteryResultProgressBar::OnUpdate() */

void __thiscall LotteryResultProgressBar::OnUpdate(LotteryResultProgressBar *this)

{
  char cVar1;
  EffectAnim_UIAnim *this_00;
  int iVar2;
  
  if (this[0x2d] == (LotteryResultProgressBar)0x0) {
    return;
  }
  iVar2 = 0;
  this_00 = (EffectAnim_UIAnim *)(this + 0xe0);
  if (0 < *(int *)(this + 0x30)) {
    do {
      while( true ) {
        iVar2 = iVar2 + 1;
        cVar1 = EffectAnim_UIAnim::IsValid(this_00);
        if (cVar1 == '\0') break;
        EffectAnim_UIAnim::OnUpdate(this_00);
        this_00 = this_00 + 0x30;
        if (*(int *)(this + 0x30) <= iVar2) goto LAB_043903fc;
      }
      this_00 = this_00 + 0x30;
    } while (iVar2 < *(int *)(this + 0x30));
  }
LAB_043903fc:
  if (*(int *)(this + 0x1d4) == *(int *)(this + 0x1dc)) {
    SalesTimer::EndTimer((SalesTimer *)(this + 0x1e8));
    return;
  }
  UpdateAdvancePieceToShow(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryResultProgressBar::InitProgressBar() */

void __thiscall LotteryResultProgressBar::InitProgressBar(LotteryResultProgressBar *this)

{
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *this_00;
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  string *psVar5;
  PlantType *this_03;
  long lVar6;
  int *piVar7;
  MagentoProductProps *this_04;
  int iVar8;
  string *in_x4;
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtMixedPtrBase aRStack_38 [8];
  int local_30 [2];
  undefined8 local_28;
  undefined8 local_20;
  long local_8;
  
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  this_00 = (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1f8);
  *(undefined4 *)(this + 0x3c) = 0xffffffff;
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  *(undefined4 *)(this + 0x44) = 0xffffffff;
  *(undefined4 *)(this + 0x48) = 0xffffffff;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x1d0) = 0;
  *(undefined4 *)(this + 0x1d4) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1e4) = 0;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear(this_00);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  if (this_02 != (PlayerInfo *)0x0) {
    FUN_05475d88(asStack_48,this + 0x228);
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
    this_03 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    lVar6 = PlantType::GetProps(this_03);
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(lVar6 + 0x2c);
    *(undefined4 *)(this + 0x34) = 0;
    uVar4 = PlayerInfo::GetPlantPieceCount(this_02,asStack_48,false);
    *(undefined4 *)(this + 0x1d0) = uVar4;
    cVar2 = PlayerInfo::GetIsPlantUnlocked(this_02,asStack_48);
    if (cVar2 != '\0') {
      uVar4 = PlayerInfo::GetPlantStarLevel(this_02,asStack_48,false);
      *(undefined4 *)(this + 0x38) = uVar4;
    }
    std::string::string((string *)local_30,"iOS PvZ2 Plant Store");
    std::string::string((string *)&local_28,"Plant Pieces");
    std::string::string((string *)&local_20,"plant");
    Magento::FindStoreProduct
              ((Magento *)local_30,(string *)&local_28,(string *)&local_20,asStack_48,in_x4);
    std::string::~string((string *)&local_20);
    nop();
    std::string::~string((string *)&local_28);
    nop();
    std::string::~string((string *)local_30);
    nop();
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
    if (cVar2 != '\0') {
      GachaItemInfo::GachaItemInfo((GachaItemInfo *)&local_20);
      local_30[0] = 0;
      if (0 < *(int *)(this + 0x30)) {
        do {
          if (local_30[0] == 0) {
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            iVar8 = *(int *)(lVar6 + 0x90);
          }
          else {
            this_04 = (MagentoProductProps *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            MagentoProductProps::GetCurrentLevelPriceData
                      (this_04,local_30[0],(LevelUpPriceData *)&local_20);
            iVar8 = local_20._4_4_;
          }
          *(int *)(this + 0x34) = *(int *)(this + 0x34) + iVar8;
          if (local_30[0] < *(int *)(this + 0x38)) {
            *(int *)(this + 0x1d0) = *(int *)(this + 0x1d0) + iVar8;
          }
          local_28 = std::make_pair<FestivalTab,ActivityTypeID>
                               ((FestivalTab *)local_30,(ActivityTypeID *)(this + 0x34));
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
          insert<std::pair<int,int>,void>(this_00,(pair *)&local_28);
          local_30[0] = local_30[0] + 1;
        } while (local_30[0] < *(int *)(this + 0x30));
      }
    }
    if (*(int *)(this + 0x34) < *(int *)(this + 0x1d0)) {
      *(int *)(this + 0x1d0) = *(int *)(this + 0x34);
    }
    local_28 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                         (this_00);
    local_20 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    while (bVar3 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_20),
          bVar3) {
      piVar7 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
      iVar8 = piVar7[1];
      iVar1 = *piVar7;
      if (iVar8 <= *(int *)(this + 0x1d0)) {
        *(int *)(this + 0x3c) = iVar1;
      }
      if ((iVar8 <= *(int *)(this + 0x1d0) + *(int *)(this + 0x1d4)) &&
         (*(int *)(this + 0x40) != iVar1)) {
        *(int *)(this + 0x40) = iVar1;
      }
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    std::string::~string(asStack_48);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryResultProgressBar::InitAnims() */

void __thiscall LotteryResultProgressBar::InitAnims(LotteryResultProgressBar *this)

{
  LotteryResultProgressBar *pLVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined8 uVar10;
  char *pcVar11;
  long lVar12;
  LotteryResultProgressBar *this_00;
  LotteryResultProgressBar *pLVar13;
  int local_24;
  string asStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  long local_8;
  
  *(undefined4 *)(this + 0x48) = 0xffffffff;
  local_8 = ___stack_chk_guard;
  this_00 = this + 0xe0;
  pLVar13 = this + 0x8c;
  do {
    Sexy::Point::Point((Point *)&local_10,0,0);
    *(undefined8 *)pLVar13 = local_10;
    pLVar1 = this_00 + 0x30;
    EffectAnim_UIAnim::SafeRelease((EffectAnim_UIAnim *)this_00);
    this_00 = pLVar1;
    pLVar13 = pLVar13 + 8;
  } while (pLVar1 != this + 0x1d0);
  local_24 = 0;
  if (0 < *(int *)(this + 0x30)) {
    do {
      while( true ) {
        iVar4 = local_24;
        iVar6 = FUN_0438e6bc(7);
        iVar2 = *(int *)(this + 0x4c);
        iVar7 = FUN_0438e6bc(10);
        iVar8 = *(int *)(this + 0x54);
        piVar9 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                        operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                    *)(this + 0x1f8),&local_24);
        iVar3 = 0;
        if (*(int *)(this + 0x34) != 0) {
          iVar3 = ((iVar8 - iVar7) * *piVar9) / *(int *)(this + 0x34);
        }
        iVar8 = FUN_0438e6bc(0x12);
        Sexy::Point::Point((Point *)&local_10,iVar6 + iVar2 + iVar3,*(int *)(this + 0x50) - iVar8);
        uVar10 = DAT_06aff6e0;
        *(undefined8 *)(this + (long)iVar4 * 8 + 0x8c) = local_10;
        uVar10 = FUN_0438e544(uVar10,(long)local_24);
        FUN_05475d88(asStack_20,uVar10);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_18,(float)*(int *)(this + (long)local_24 * 8 + 0x8c),
                   (float)*(int *)(this + (long)local_24 * 8 + 0x90));
        lVar12 = (long)local_24;
        FUN_05475d88((Point *)&local_10,asStack_20);
        pcVar11 = (char *)0x1;
        EffectAnim_UIAnim::InitUIAnim
                  (0x3f70a3d7,local_18,local_14,this + lVar12 * 0x30 + 0xe0,(Point *)&local_10);
        std::string::~string((string *)&local_10);
        EA::Thread::MutexParameters::MutexParameters
                  ((MutexParameters *)(this + (long)local_24 * 0x30 + 0xe0),true,pcVar11);
        cVar5 = EffectAnim_UIAnim::IsValid
                          ((EffectAnim_UIAnim *)(this + (long)local_24 * 0x30 + 0xe0));
        if (cVar5 == '\0') break;
        lVar12 = (long)local_24;
        std::string::string((string *)&local_10,"level_normal");
        EffectAnim_UIAnim::PlayLoop
                  ((EffectAnim_UIAnim *)(this + lVar12 * 0x30 + 0xe0),(Point *)&local_10);
        std::string::~string((string *)&local_10);
        nop();
        std::string::~string(asStack_20);
        local_24 = local_24 + 1;
        if (*(int *)(this + 0x30) <= local_24) goto LAB_04391118;
      }
      std::string::~string(asStack_20);
      local_24 = local_24 + 1;
    } while (local_24 < *(int *)(this + 0x30));
  }
LAB_04391118:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LotteryResultProgressBar::OnRefresh() */

void __thiscall LotteryResultProgressBar::OnRefresh(LotteryResultProgressBar *this)

{
  InitProgressBar(this);
  InitAnims(this);
  StartToShow(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryResultProgressBar::InitView(Sexy::TRect<int>) */

void __thiscall LotteryResultProgressBar::InitView(LotteryResultProgressBar *this,Insets *param_2)

{
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,param_2);
  Resize(this,aIStack_18);
  OnRefresh(this);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aff8a0);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xb8),(RtWeakPtr *)aIStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_18);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aff878);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xc0),(RtWeakPtr *)aIStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_18);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aff878);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 200),(RtWeakPtr *)aIStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_18);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aff920);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xd0),(RtWeakPtr *)aIStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_18);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aff980);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xd8),(RtWeakPtr *)aIStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

