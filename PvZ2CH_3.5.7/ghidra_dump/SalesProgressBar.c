// Class: SalesProgressBar


/* SalesProgressBar::GetCurrentPieces() */

undefined4 __thiscall SalesProgressBar::GetCurrentPieces(SalesProgressBar *this)

{
  return *(undefined4 *)(this + 0x1d0);
}


/* SalesProgressBar::GetAdvancePieves() */

undefined4 __thiscall SalesProgressBar::GetAdvancePieves(SalesProgressBar *this)

{
  return *(undefined4 *)(this + 0x1d4);
}


/* SalesProgressBar::SetVisible(bool) */

void __thiscall SalesProgressBar::SetVisible(SalesProgressBar *this,bool param_1)

{
  this[0x2d] = (SalesProgressBar)param_1;
  return;
}


/* SalesProgressBar::IsLevelUp() */

bool __thiscall SalesProgressBar::IsLevelUp(SalesProgressBar *this)

{
  return *(int *)(this + 0x3c) != *(int *)(this + 0x44) + 1;
}


/* SalesProgressBar::GetCurrentLevel() */

undefined4 __thiscall SalesProgressBar::GetCurrentLevel(SalesProgressBar *this)

{
  return *(undefined4 *)(this + 0x3c);
}


/* SalesProgressBar::GetAdvanceLevel() */

int __thiscall SalesProgressBar::GetAdvanceLevel(SalesProgressBar *this)

{
  return *(int *)(this + 0x44) + 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesProgressBar::SetProgress(int) */

void __thiscall SalesProgressBar::SetProgress(SalesProgressBar *this,int param_1)

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
  iVar5 = FUN_04a58180(5);
  iVar1 = *(int *)(this + 0x50);
  iVar2 = *(int *)(this + 0x54);
  iVar6 = FUN_04a58180(10);
  iVar3 = 0;
  if (*(int *)(this + 0x38) != 0) {
    iVar3 = ((*(int *)(this + 0x58) - iVar6) * *(int *)(this + 0x1d0)) / *(int *)(this + 0x38);
  }
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar5 + iVar1,iVar5 + iVar2,iVar3,*(int *)(this + 0x5c) - iVar6);
  bVar4 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x60) = local_18;
  *(undefined8 *)(this + 0x68) = uStack_10;
  if (bVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesProgressBar::SetAdvanceProgress(int) */

void __thiscall SalesProgressBar::SetAdvanceProgress(SalesProgressBar *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  iVar5 = *(int *)(this + 0x68);
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)(this + 0x60);
  *(int *)(this + 0x1dc) = param_1;
  iVar3 = FUN_04a58180(10);
  iVar4 = FUN_04a58180(5);
  iVar2 = 0;
  if (*(int *)(this + 0x38) != 0) {
    iVar2 = (param_1 * (*(int *)(this + 0x58) - iVar3)) / *(int *)(this + 0x38);
  }
  Sexy::Insets::Insets
            ((Insets *)&local_18,(iVar1 + iVar5) - iVar3,iVar4 + *(int *)(this + 0x54),iVar3 + iVar2
             ,*(int *)(this + 0x5c) - iVar3);
  *(undefined8 *)(this + 0x70) = local_18;
  *(undefined8 *)(this + 0x78) = uStack_10;
  iVar5 = FUN_04a58180(10);
  if (*(int *)(this + 0x58) - iVar5 < (*(int *)(this + 0x68) + *(int *)(this + 0x78)) - iVar5) {
    *(int *)(this + 0x78) = iVar5 + ((*(int *)(this + 0x58) - iVar5) - *(int *)(this + 0x68));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SalesProgressBar::MoveProgressTo(int) */

void __thiscall SalesProgressBar::MoveProgressTo(SalesProgressBar *this,int param_1)

{
  *(int *)(this + 0x1d0) = param_1;
  *(undefined4 *)(this + 0x1e0) = *(undefined4 *)(this + 0x1d8);
  SalesTimer::StartTimer((SalesTimer *)(this + 0x1e8),1.0);
  return;
}


/* SalesProgressBar::RefreshProgress() */

void __thiscall SalesProgressBar::RefreshProgress(SalesProgressBar *this)

{
  char cVar1;
  
  cVar1 = LawnApp::IsSalesUIValid(gLawnApp);
  if (cVar1 == '\0') {
    return;
  }
  MoveProgressTo(this,*(int *)(this + 0x1d0));
  return;
}


/* SalesProgressBar::MoveAdvanceProgressTo(int) */

void __thiscall SalesProgressBar::MoveAdvanceProgressTo(SalesProgressBar *this,int param_1)

{
  *(int *)(this + 0x1d4) = param_1;
  *(undefined4 *)(this + 0x1e4) = *(undefined4 *)(this + 0x1dc);
  SalesTimer::StartTimer((SalesTimer *)(this + 0x1f8),0.2);
  return;
}


/* SalesProgressBar::UpdatePieceToShow() */

void __thiscall SalesProgressBar::UpdatePieceToShow(SalesProgressBar *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar4 = *(int *)(this + 0x1e0);
  iVar1 = *(int *)(this + 0x1d0);
  fVar5 = (float)SalesTimer::GetTimerScale((SalesTimer *)(this + 0x1e8));
  cVar2 = SalesTimer::IsTimeUp((SalesTimer *)(this + 0x1e8));
  if (cVar2 == '\0') {
    iVar3 = *(int *)(this + 0x1d0);
    iVar4 = (int)((float)iVar4 + (float)(iVar1 - iVar4) * fVar5);
    if (iVar3 != iVar4) {
      SetProgress(this,iVar4);
      return;
    }
  }
  else {
    iVar3 = *(int *)(this + 0x1d0);
  }
  *(int *)(this + 0x1d8) = iVar3;
  SetProgress(this,iVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesProgressBar::OnDraw(Sexy::Graphics*) */

void __thiscall SalesProgressBar::OnDraw(SalesProgressBar *this,Graphics *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ResourceInfo *pRVar6;
  SalesProgressBar *pSVar7;
  SalesProgressBar *this_00;
  int iVar8;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x2d] != (SalesProgressBar)0x0) {
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb8));
    if (bVar2) {
      Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x50));
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xb8));
      Draw9SliceImage(param_1,aIStack_18,pRVar6);
    }
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xc0));
    if (bVar2) {
      Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x70));
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xc0));
      Draw9SliceImage(param_1,aIStack_18,pRVar6);
    }
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 200));
    if (bVar2) {
      Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x60));
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 200));
      Draw9SliceImage(param_1,aIStack_18,pRVar6);
    }
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xd0));
    if (bVar2) {
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xd0));
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar6,*(int *)(this + 0x80),*(int *)(this + 0x84))
      ;
    }
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xd8));
    if ((bVar2) && (0 < *(int *)(this + 0x34))) {
      pSVar7 = this + 0x90;
      this_00 = this + 0xe0;
      iVar8 = 0;
      do {
        pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xd8));
        iVar4 = FUN_04a58180(2);
        iVar1 = *(int *)pSVar7;
        iVar5 = FUN_04a58180(0x11);
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pRVar6,iVar1 - iVar4,iVar5 + *(int *)(pSVar7 + 4));
        cVar3 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)this_00);
        if (cVar3 != '\0') {
          EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)this_00,param_1);
        }
        iVar8 = iVar8 + 1;
        pSVar7 = pSVar7 + 8;
        this_00 = this_00 + 0x30;
      } while (iVar8 < *(int *)(this + 0x34));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesProgressBar::Resize(Sexy::TRect<int>) */

void __thiscall SalesProgressBar::Resize(SalesProgressBar *this,undefined8 *param_2)

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
  *(undefined8 *)(this + 0x50) = *param_2;
  *(undefined8 *)(this + 0x58) = uVar1;
  local_8 = ___stack_chk_guard;
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c980);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c980);
  iVar4 = GetCurrentLevel(this_01);
  iVar5 = FUN_04a58180(10);
  Sexy::Insets::Insets
            ((Insets *)&local_18,*(int *)(this + 0x50) - iVar5,
             *(int *)(this + 0x54) - (iVar4 - *(int *)(this + 0x5c)) / 2,iVar3,iVar4);
  bVar2 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x80) = local_18;
  *(undefined8 *)(this + 0x88) = uStack_10;
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SalesProgressBar::~SalesProgressBar() */

void __thiscall SalesProgressBar::~SalesProgressBar(SalesProgressBar *this)

{
  SalesProgressBar *this_00;
  
  *(undefined ***)this = &PTR_GetClass_06936aa0;
  *(undefined ***)(this + 0x10) = &PTR__SalesProgressBar_06936bc0;
  this_00 = this + 0x1d0;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x208))
  ;
  nop();
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


/* non-virtual thunk to SalesProgressBar::~SalesProgressBar() */

void __thiscall SalesProgressBar::~SalesProgressBar(SalesProgressBar *this)

{
  ~SalesProgressBar(this + -0x10);
  return;
}


/* SalesProgressBar::~SalesProgressBar() */

void __thiscall SalesProgressBar::~SalesProgressBar(SalesProgressBar *this)

{
  ~SalesProgressBar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SalesProgressBar::~SalesProgressBar() */

void __thiscall SalesProgressBar::~SalesProgressBar(SalesProgressBar *this)

{
  ~SalesProgressBar(this + -0x10);
  return;
}


/* SalesProgressBar::RefreshAdvanceProgress() */

void __thiscall SalesProgressBar::RefreshAdvanceProgress(SalesProgressBar *this)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  SalesUI *this_01;
  
  this_00 = gLawnApp;
  cVar1 = LawnApp::IsSalesUIValid(gLawnApp);
  if (cVar1 == '\0') {
    return;
  }
  this_01 = (SalesUI *)LawnApp::GetSalesUI(this_00);
  iVar2 = SalesUI::GetRewardQuantity(this_01);
  MoveAdvanceProgressTo(this,iVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesProgressBar::StartToShow() */

void __thiscall SalesProgressBar::StartToShow(SalesProgressBar *this)

{
  int iVar1;
  SalesProgressBar *pSVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SetVisible(this,true);
  if (0 < *(int *)(this + 0x34)) {
    iVar1 = 0;
    pSVar2 = this + 0xe0;
    do {
      iVar1 = iVar1 + 1;
      std::string::string(asStack_18,"start");
      std::string::string(asStack_10,"idle");
      EffectAnim_UIAnim::PlayOnceThenLoop((EffectAnim_UIAnim *)pSVar2,asStack_18,asStack_10);
      std::string::~string(asStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      pSVar2 = (SalesProgressBar *)(pSVar2 + 0x30);
    } while (iVar1 < *(int *)(this + 0x34));
  }
  SetProgress(this,0);
  SetAdvanceProgress(this,0);
  RefreshProgress(this);
  RefreshAdvanceProgress(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesProgressBar::SalesProgressBar() */

void __thiscall SalesProgressBar::SalesProgressBar(SalesProgressBar *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *p_Var1;
  SalesProgressBar *pSVar2;
  SalesProgressBar *pSVar3;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this_00 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb8);
  local_8 = ___stack_chk_guard;
  RealObject::RealObject((RealObject *)this);
  *(undefined ***)this = &PTR_GetClass_06936aa0;
  *(undefined ***)(this + 0x10) = &PTR__SalesProgressBar_06936bc0;
  Sexy::Insets::Insets((Insets *)(this + 0x50));
  Sexy::Insets::Insets((Insets *)(this + 0x60));
  Sexy::Insets::Insets((Insets *)(this + 0x70));
  Sexy::Insets::Insets((Insets *)(this + 0x80));
  pSVar3 = this + 0x90;
  do {
    p_Var1 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(pSVar3 + 8);
    Sexy::Point::Point((Point *)pSVar3);
    pSVar3 = (SalesProgressBar *)p_Var1;
  } while (p_Var1 != this_00);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_00)
  ;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xc0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 200));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  pSVar3 = this + 0xe0;
  do {
    pSVar2 = pSVar3 + 0x30;
    EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)pSVar3);
    pSVar3 = pSVar2;
  } while (pSVar2 != this + 0x1d0);
  SalesTimer::SalesTimer((SalesTimer *)(this + 0x1e8));
  SalesTimer::SalesTimer((SalesTimer *)(this + 0x1f8));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x208));
  this[0x2d] = (SalesProgressBar)0x0;
  *(undefined4 *)(this + 0x44) = 0xffffffff;
  *(undefined4 *)(this + 0x48) = 0xffffffff;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x1d0) = 0;
  *(undefined4 *)(this + 0x1d4) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1e4) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
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
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x208))
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesProgressBar::HandleAdvanceProgress() */

void __thiscall SalesProgressBar::HandleAdvanceProgress(SalesProgressBar *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar8 = -1;
  iVar7 = -1;
  local_8 = ___stack_chk_guard;
  iVar6 = -1;
  local_18 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                       ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                        (this + 0x208));
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x208));
  while (bVar3 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10), bVar3
        ) {
    piVar5 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    iVar2 = piVar5[1];
    iVar1 = *piVar5;
    if ((iVar2 <= *(int *)(this + 0x1d0)) &&
       (*(int *)(this + 0x40) = iVar1, *(int *)(this + 0x48) != iVar1)) {
      *(int *)(this + 0x48) = iVar1;
    }
    if ((iVar2 <= *(int *)(this + 0x1d0) + *(int *)(this + 0x1d4)) &&
       (*(int *)(this + 0x44) != iVar1)) {
      *(int *)(this + 0x44) = iVar1;
      if (*(int *)(this + 0x40) < iVar1) {
        iVar7 = iVar1;
      }
      iVar8 = iVar1;
      if (*(int *)(this + 0x4c) != -1) {
        iVar6 = *(int *)(this + 0x4c);
      }
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  iVar2 = *(int *)(this + 0x4c);
  if (-1 < iVar8) {
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::DisplayLevelSelect,iVar8 + 1);
  }
  if ((iVar7 != iVar6) && (iVar6 != -1)) {
    cVar4 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + (long)iVar6 * 0x30 + 0xe0));
    if (cVar4 != '\0') {
      std::string::string((string *)&local_18,"back");
      std::string::string((string *)&local_10,"idle");
      EffectAnim_UIAnim::PlayOnceThenLoop
                ((EffectAnim_UIAnim *)(this + (long)iVar6 * 0x30 + 0xe0),
                 (_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18,
                 (string *)&local_10);
      std::string::~string((string *)&local_10);
      nop();
      std::string::~string((string *)&local_18);
      nop();
      *(undefined4 *)(this + 0x4c) = 0xffffffff;
    }
  }
  if ((iVar2 != iVar7) && (iVar7 != -1)) {
    cVar4 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + (long)iVar7 * 0x30 + 0xe0));
    if (cVar4 != '\0') {
      std::string::string((string *)&local_18,"jump");
      std::string::string((string *)&local_10,"shake");
      EffectAnim_UIAnim::PlayOnceThenLoop
                ((EffectAnim_UIAnim *)(this + (long)iVar7 * 0x30 + 0xe0),
                 (_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18,
                 (string *)&local_10);
      std::string::~string((string *)&local_10);
      nop();
      std::string::~string((string *)&local_18);
      nop();
      *(int *)(this + 0x4c) = iVar7;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* SalesProgressBar::UpdateAdvancePieceToShow() */

void __thiscall SalesProgressBar::UpdateAdvancePieceToShow(SalesProgressBar *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = *(int *)(this + 0x1e4);
  iVar1 = *(int *)(this + 0x1d4);
  fVar4 = (float)SalesTimer::GetTimerScale((SalesTimer *)(this + 0x1f8));
  cVar2 = SalesTimer::IsTimeUp((SalesTimer *)(this + 0x1f8));
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


/* SalesProgressBar::OnUpdate() */

void __thiscall SalesProgressBar::OnUpdate(SalesProgressBar *this)

{
  char cVar1;
  EffectAnim_UIAnim *this_00;
  int iVar2;
  
  if (this[0x2d] == (SalesProgressBar)0x0) {
    return;
  }
  iVar2 = 0;
  this_00 = (EffectAnim_UIAnim *)(this + 0xe0);
  if (0 < *(int *)(this + 0x34)) {
    do {
      while( true ) {
        iVar2 = iVar2 + 1;
        cVar1 = EffectAnim_UIAnim::IsValid(this_00);
        if (cVar1 == '\0') break;
        EffectAnim_UIAnim::OnUpdate(this_00);
        this_00 = this_00 + 0x30;
        if (*(int *)(this + 0x34) <= iVar2) goto LAB_04a5d33c;
      }
      this_00 = this_00 + 0x30;
    } while (iVar2 < *(int *)(this + 0x34));
  }
LAB_04a5d33c:
  if (*(int *)(this + 0x1d0) == *(int *)(this + 0x1d8)) {
    SalesTimer::EndTimer((SalesTimer *)(this + 0x1e8));
    if (*(int *)(this + 0x1d4) == *(int *)(this + 0x1dc)) goto LAB_04a5d3a0;
  }
  else {
    UpdatePieceToShow(this);
    if (*(int *)(this + 0x1d4) == *(int *)(this + 0x1dc)) {
LAB_04a5d3a0:
      SalesTimer::EndTimer((SalesTimer *)(this + 0x1f8));
      return;
    }
  }
  UpdateAdvancePieceToShow(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesProgressBar::InitProgressBar() */

void __thiscall SalesProgressBar::InitProgressBar(SalesProgressBar *this)

{
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *this_00;
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  string *psVar6;
  PlantType *this_03;
  long lVar7;
  int *piVar8;
  MagentoProductProps *this_04;
  string *in_x4;
  string asStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtMixedPtrBase aRStack_50 [8];
  int local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  long local_8;
  
  *(undefined4 *)(this + 0x3c) = 0xffffffff;
  this_00 = (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x208);
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  *(undefined4 *)(this + 0x44) = 0xffffffff;
  *(undefined4 *)(this + 0x48) = 0xffffffff;
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
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
    PlayerInfo::GetCurrentSalesInfo();
    *(int *)(this + 0x30) = local_38._4_4_;
    CurrentSalesInfo::~CurrentSalesInfo((CurrentSalesInfo *)&local_38);
    iVar4 = PlantChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar4);
    psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
    this_03 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    lVar7 = PlantType::GetProps(this_03);
    *(undefined4 *)(this + 0x34) = *(undefined4 *)(lVar7 + 0x2c);
    *(undefined4 *)(this + 0x38) = 0;
    uVar5 = PlayerInfo::GetPlantPieceCount(this_02,asStack_60,false);
    *(undefined4 *)(this + 0x1d0) = uVar5;
    cVar2 = PlayerInfo::GetIsPlantUnlocked(this_02,asStack_60);
    if (cVar2 != '\0') {
      uVar5 = PlayerInfo::GetPlantStarLevel(this_02,asStack_60,false);
      *(undefined4 *)(this + 0x3c) = uVar5;
    }
    std::string::string((string *)local_48,"iOS PvZ2 Plant Store");
    std::string::string((string *)&local_40,"Plant Pieces");
    std::string::string((string *)&local_38,"plant");
    Magento::FindStoreProduct
              ((Magento *)local_48,(string *)&local_40,(string *)&local_38,asStack_60,in_x4);
    std::string::~string((string *)&local_38);
    nop();
    std::string::~string((string *)&local_40);
    nop();
    std::string::~string((string *)local_48);
    nop();
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_50);
    if (cVar2 != '\0') {
      GachaItemInfo::GachaItemInfo((GachaItemInfo *)&local_38);
      local_48[0] = 0;
      if (0 < *(int *)(this + 0x34)) {
        do {
          if (local_48[0] == 0) {
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
            iVar4 = *(int *)(lVar7 + 0x90);
          }
          else {
            this_04 = (MagentoProductProps *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
            MagentoProductProps::GetCurrentLevelPriceData
                      (this_04,local_48[0],(LevelUpPriceData *)&local_38);
            iVar4 = local_38._4_4_;
          }
          *(int *)(this + 0x38) = *(int *)(this + 0x38) + iVar4;
          if (local_48[0] < *(int *)(this + 0x3c)) {
            *(int *)(this + 0x1d0) = *(int *)(this + 0x1d0) + iVar4;
          }
          local_40 = std::make_pair<FestivalTab,ActivityTypeID>
                               ((FestivalTab *)local_48,(ActivityTypeID *)(this + 0x38));
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
          insert<std::pair<int,int>,void>(this_00,(pair *)&local_40);
          local_48[0] = local_48[0] + 1;
        } while (local_48[0] < *(int *)(this + 0x34));
      }
    }
    if (*(int *)(this + 0x38) < *(int *)(this + 0x1d0)) {
      *(int *)(this + 0x1d0) = *(int *)(this + 0x38);
    }
    local_40 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                         (this_00);
    local_38 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    while (bVar3 = eastl::operator!=((rbtree_iterator *)&local_40,(rbtree_iterator *)&local_38),
          bVar3) {
      piVar8 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_40);
      iVar4 = piVar8[1];
      iVar1 = *piVar8;
      if (iVar4 <= *(int *)(this + 0x1d0)) {
        *(int *)(this + 0x40) = iVar1;
      }
      if (((iVar4 <= *(int *)(this + 0x1d0) + *(int *)(this + 0x1d4)) &&
          (*(int *)(this + 0x44) != iVar1)) && (*(int *)(this + 0x44) = iVar1, 0 < iVar1)) {
        MessageRouter::Post<int,int>
                  ((MessageRouter *)gMessageRouter,Message::DisplayLevelSelect,iVar1);
      }
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_40);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    std::string::~string(asStack_60);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesProgressBar::InitAnims(bool) */

void SalesProgressBar::InitAnims(bool param_1)

{
  EffectAnim_UIAnim *pEVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  char in_w1;
  FastCurve *in_x2;
  long lVar11;
  EffectAnim_UIAnim *this;
  undefined8 *puVar12;
  int local_24;
  string asStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  long local_8;
  
  uVar8 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  if (in_w1 != '\0') {
    *(undefined4 *)(uVar8 + 0x4c) = 0xffffffff;
    this = (EffectAnim_UIAnim *)(uVar8 + 0xe0);
    puVar12 = (undefined8 *)(uVar8 + 0x90);
    do {
      in_x2 = (FastCurve *)0x0;
      Sexy::Point::Point((Point *)&local_10,0,0);
      *puVar12 = local_10;
      pEVar1 = this + 0x30;
      EffectAnim_UIAnim::SafeRelease(this);
      this = pEVar1;
      puVar12 = puVar12 + 1;
    } while (pEVar1 != (EffectAnim_UIAnim *)(uVar8 + 0x1d0));
  }
  local_24 = 0;
  if (0 < *(int *)(uVar8 + 0x34)) {
    do {
      if (in_w1 != '\0') {
        lVar11 = (long)local_24;
        iVar5 = FUN_04a58180(5);
        iVar2 = *(int *)(uVar8 + 0x50);
        iVar6 = FUN_04a58180(10);
        iVar7 = *(int *)(uVar8 + 0x58);
        piVar9 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                        operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                    *)(uVar8 + 0x208),&local_24);
        iVar3 = 0;
        if (*(int *)(uVar8 + 0x38) != 0) {
          iVar3 = ((iVar7 - iVar6) * *piVar9) / *(int *)(uVar8 + 0x38);
        }
        iVar7 = FUN_04a58180(0xf);
        Sexy::Point::Point((Point *)&local_10,iVar5 + iVar2 + iVar3,*(int *)(uVar8 + 0x54) - iVar7);
        *(undefined8 *)(uVar8 + lVar11 * 8 + 0x90) = local_10;
        uVar10 = FUN_04a57b0c(DAT_06b7cd20,(long)local_24);
        FUN_05475d88(asStack_20,uVar10);
        lVar11 = uVar8 + (long)local_24 * 8;
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_18,(float)*(int *)(lVar11 + 0x90),
                   (float)*(int *)(lVar11 + 0x94));
        lVar11 = (long)local_24;
        FUN_05475d88((string *)&local_10,asStack_20);
        in_x2 = (FastCurve *)0x1;
        EffectAnim_UIAnim::InitUIAnim
                  (0x3f966666,local_18,local_14,uVar8 + lVar11 * 0x30 + 0xe0,(string *)&local_10);
        std::string::~string((string *)&local_10);
        std::string::~string(asStack_20);
      }
      EA::Thread::MutexParameters::MutexParameters
                ((MutexParameters *)(uVar8 + (long)local_24 * 0x30 + 0xe0),true,(char *)in_x2);
      cVar4 = EffectAnim_UIAnim::IsValid
                        ((EffectAnim_UIAnim *)(uVar8 + (long)local_24 * 0x30 + 0xe0));
      if (cVar4 != '\0') {
        lVar11 = (long)local_24;
        in_x2 = (FastCurve *)&local_18;
        std::string::string((string *)&local_10,"idle");
        EffectAnim_UIAnim::PlayLoop
                  ((EffectAnim_UIAnim *)(uVar8 + lVar11 * 0x30 + 0xe0),(string *)&local_10);
        std::string::~string((string *)&local_10);
        nop();
      }
      local_24 = local_24 + 1;
    } while (local_24 < *(int *)(uVar8 + 0x34));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SalesProgressBar::OnRefresh(bool) */

void SalesProgressBar::OnRefresh(bool param_1)

{
  InitProgressBar((SalesProgressBar *)(ulong)param_1);
  InitAnims(param_1);
  StartToShow((SalesProgressBar *)(ulong)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesProgressBar::InitView(Sexy::TRect<int>) */

void __thiscall SalesProgressBar::InitView(SalesProgressBar *this,Insets *param_2)

{
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,param_2);
  Resize(this,aIStack_18);
  OnRefresh(SUB81(this,0));
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7caf8);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xb8),(RtWeakPtr *)aIStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_18);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7ce78);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xc0),(RtWeakPtr *)aIStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_18);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7cdd0);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 200),(RtWeakPtr *)aIStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_18);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7c980);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xd0),(RtWeakPtr *)aIStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_18);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7cb70);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xd8),(RtWeakPtr *)aIStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

