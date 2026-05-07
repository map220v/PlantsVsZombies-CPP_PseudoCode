// Class: LimitedSummonAddUpItem


/* LimitedSummonAddUpItem::~LimitedSummonAddUpItem() */

void __thiscall LimitedSummonAddUpItem::~LimitedSummonAddUpItem(LimitedSummonAddUpItem *this)

{
  *(undefined ***)this = &PTR_GetClass_066e2a20;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066e2d48;
  FUN_05476c50(this + 0xf0);
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LimitedSummonAddUpItem::~LimitedSummonAddUpItem() */

void __thiscall LimitedSummonAddUpItem::~LimitedSummonAddUpItem(LimitedSummonAddUpItem *this)

{
  ~LimitedSummonAddUpItem(this);
  AK::FreeHook(this);
  return;
}


/* LimitedSummonAddUpItem::LimitedSummonAddUpItem() */

void __thiscall LimitedSummonAddUpItem::LimitedSummonAddUpItem(LimitedSummonAddUpItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined4 *)(this + 0xe0) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_066e2a20;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066e2d48;
  FUN_05476574(this + 0xe8);
  FUN_05476574(this + 0xf0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonAddUpItem::UpdateButton() */

void __thiscall LimitedSummonAddUpItem::UpdateButton(LimitedSummonAddUpItem *this)

{
  long lVar1;
  PVZ2UIButton *this_00;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  lVar1 = FUN_03999544(*(undefined8 *)(lVar1 + 0x68),(long)*(int *)(this + 0xe0));
  if (*(int *)(lVar1 + 0x20) != 0) {
    (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),1);
    this_00 = *(PVZ2UIButton **)(this + 0xf8);
    TodStringTranslate(L"[PLANT_OBTAINED]");
    PVZ2UIButton::SetLabelText(this_00,awStack_10);
    FUN_05476c50(awStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonAddUpItem::InitView(int) */

void __thiscall LimitedSummonAddUpItem::InitView(LimitedSummonAddUpItem *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  PVZ2UIButton *pPVar10;
  undefined8 uVar11;
  int *piVar12;
  uint *puVar13;
  ulong uVar14;
  long *plVar15;
  code *pcVar16;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  uVar14 = 0;
  *(int *)(this + 0xe0) = param_1;
  local_8 = ___stack_chk_guard;
  while( true ) {
    lVar8 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    lVar8 = FUN_03999544(*(undefined8 *)(lVar8 + 0x68),(long)*(int *)(this + 0xe0));
    uVar9 = FUN_03999550(*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
    if (uVar9 <= uVar14) break;
    lVar8 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    lVar8 = FUN_03999544(*(undefined8 *)(lVar8 + 0x68),(long)*(int *)(this + 0xe0));
    piVar12 = (int *)FUN_03999564(*(undefined8 *)(lVar8 + 8),uVar14);
    iVar4 = *piVar12;
    lVar8 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    lVar8 = FUN_03999544(*(undefined8 *)(lVar8 + 0x68),(long)*(int *)(this + 0xe0));
    lVar8 = FUN_03999564(*(undefined8 *)(lVar8 + 8),uVar14);
    plVar15 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(iVar4,*(int *)(lVar8 + 4),true);
    iVar4 = FUN_0399a924(0x10e);
    iVar5 = FUN_0399a924(0x50);
    uVar2 = FUN_0399a924(0xf);
    uVar3 = FUN_0399a924(0x46);
    iVar6 = (int)uVar14;
    uVar14 = uVar14 + 1;
    (**(code **)(*plVar15 + 0x198))(plVar15,iVar4 + iVar5 * iVar6,uVar2,uVar3,uVar3);
    (**(code **)(*(long *)this + 0x60))(this,plVar15);
  }
  TodStringTranslate(L"[PLANT_OBTAIN]");
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar10,0x192,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aIStack_40);
  *(PVZ2UIButton **)(this + 0xf8) = pPVar10;
  FUN_05476c50(awStack_78);
  pPVar10 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06abed60,5);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06abee48,5);
  PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  plVar15 = *(long **)(this + 0xf8);
  pcVar16 = *(code **)(*plVar15 + 0x1a0);
  iVar4 = FUN_0399a924(0x1b3);
  iVar5 = FUN_0399a924(0x19);
  iVar6 = FUN_0399a924(100);
  iVar7 = FUN_0399a924(0x32);
  Sexy::Insets::Insets(aIStack_40,iVar4,iVar5,iVar6,iVar7);
  (*pcVar16)(plVar15,aIStack_40);
  plVar15 = *(long **)(this + 0xf8);
  pcVar16 = *(code **)(*plVar15 + 800);
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline);
  (*pcVar16)(plVar15,uVar11);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
  lVar8 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  iVar4 = *(int *)(lVar8 + 0x20);
  lVar8 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  piVar12 = (int *)FUN_03999544(*(undefined8 *)(lVar8 + 0x68),(long)*(int *)(this + 0xe0));
  if (iVar4 < *piVar12) {
    (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),1);
  }
  FUN_05478178(awStack_78,L"[LIMITED_SUMMON_CUMULATIVE]",auStack_80);
  lVar8 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  piVar12 = (int *)FUN_03999544(*(undefined8 *)(lVar8 + 0x68),(long)*(int *)(this + 0xe0));
  TodReplaceNumberString(awStack_78,L"{NUM}",*piVar12);
  FUN_054766c8(this + 0xe8,aIStack_40);
  FUN_05476c50(aIStack_40);
  FUN_05476c50(awStack_78);
  nop();
  lVar8 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  uVar1 = *(uint *)(lVar8 + 0x20);
  lVar8 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  puVar13 = (uint *)FUN_03999544(*(undefined8 *)(lVar8 + 0x68),(long)*(int *)(this + 0xe0));
  Sexy::StrFormat("%d / %d",awStack_78,(ulong)uVar1,(ulong)*puVar13);
  Sexy::ToWString((string *)awStack_78);
  FUN_054766c8(this + 0xf0,aIStack_40);
  FUN_05476c50(aIStack_40);
  std::string::~string((string *)awStack_78);
  UpdateButton(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonAddUpItem::Draw(Sexy::Graphics*) */

void __thiscall LimitedSummonAddUpItem::Draw(LimitedSummonAddUpItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  float *pfVar10;
  Image *pIVar11;
  float fVar12;
  float local_28 [4];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  iVar5 = *(int *)(lVar7 + 0x20);
  lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  piVar8 = (int *)FUN_03999544(*(undefined8 *)(lVar7 + 0x68),(long)*(int *)(this + 0xe0));
  iVar6 = *piVar8;
  Sexy::Insets::Insets((Insets *)local_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abebf0);
  Draw3SliceImage(param_1,(Insets *)local_18,uVar9);
  iVar1 = FUN_0399a924(0x14);
  iVar2 = FUN_0399a924(10);
  iVar3 = FUN_0399a924(0xfa);
  iVar4 = FUN_0399a924(0x1e);
  Sexy::Insets::Insets((Insets *)local_18,iVar1,iVar2,iVar3,iVar4);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)local_28,0x66,0x37,0);
  WriteWordInRect(param_1,this + 0xe8,(Insets *)local_18,uVar9,(Color *)local_28,3,1);
  iVar1 = FUN_0399a924(0x1e);
  iVar2 = FUN_0399a924(0x37);
  iVar3 = FUN_0399a924(200);
  iVar4 = FUN_0399a924(0x19);
  Sexy::Insets::Insets((Insets *)local_18,iVar1,iVar2,iVar3,iVar4);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abefe8);
  Draw3SliceImage(param_1,(Insets *)local_18,uVar9);
  local_18[0] = 0x3f800000;
  local_28[0] = (float)iVar5 / (float)iVar6;
  pfVar10 = eastl::min_alt<float>(local_28,(float *)local_18);
  fVar12 = *pfVar10;
  if (fVar12 < 0.3) {
    pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abede8);
    iVar5 = FUN_0399a924(0x1e);
    iVar6 = FUN_0399a924(0x37);
    iVar1 = FUN_0399a924(200);
    iVar2 = FUN_0399a924(0x19);
    Sexy::Graphics::DrawImage(param_1,pIVar11,iVar5,iVar6,(int)((float)iVar1 * fVar12),iVar2);
  }
  else {
    iVar5 = FUN_0399a924(0x1e);
    iVar6 = FUN_0399a924(0x37);
    iVar1 = FUN_0399a924(200);
    iVar2 = FUN_0399a924(0x19);
    Sexy::Insets::Insets((Insets *)local_18,iVar5,iVar6,(int)((float)iVar1 * fVar12),iVar2);
    uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abede8);
    Draw3SliceImage(param_1,(Insets *)local_18,uVar9);
  }
  iVar5 = FUN_0399a924(0x1e);
  iVar6 = FUN_0399a924(0x37);
  iVar1 = FUN_0399a924(200);
  iVar2 = FUN_0399a924(0x19);
  Sexy::Insets::Insets((Insets *)local_18,iVar5,iVar6,iVar1,iVar2);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Color::Color((Color *)local_28,0x66,0x37,0);
  WriteWordInRect(param_1,this + 0xf0,(Insets *)local_18,uVar9,(Color *)local_28,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonAddUpItem::ButtonDepress(int) */

void __thiscall LimitedSummonAddUpItem::ButtonDepress(LimitedSummonAddUpItem *this,int param_1)

{
  char cVar1;
  undefined8 uVar2;
  DNetwork *this_00;
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2736];
  string asStack_238 [560];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_039a1f44();
  if (cVar1 == '\0') {
    if (param_1 == 0x192) {
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map(amStack_d18);
      std::string::string(asStack_d40,"ai");
      uVar2 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,asStack_d40);
      local_d48[0] = 0x2a66;
      std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
      FUN_05474278(uVar2,asStack_ce8);
      std::string::~string(asStack_ce8);
      std::string::~string(asStack_d40);
      nop();
      std::string::string(asStack_d40,"t");
      uVar2 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,asStack_d40);
      local_d48[0] = 1;
      std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
      FUN_05474278(uVar2,asStack_ce8);
      std::string::~string(asStack_ce8);
      std::string::~string(asStack_d40);
      nop();
      std::string::string(asStack_d40,"ci");
      uVar2 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,asStack_d40);
      std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
      FUN_05474278(uVar2,asStack_ce8);
      std::string::~string(asStack_ce8);
      std::string::~string(asStack_d40);
      nop();
      this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
      _PacketId::_PacketId((_PacketId *)asStack_ce8);
      FUN_0399a8c8(afStack_d38,this);
      std::string::string(asStack_d40,"[NET_CONNECTING]");
      DNetwork::requestMsg
                (this_00,asStack_238,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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
  }
  else {
    UISingletonDialog<UILimitedSummon>::CloseDialog();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LimitedSummonAddUpItem::ButtonDepress(int) */

void __thiscall LimitedSummonAddUpItem::ButtonDepress(LimitedSummonAddUpItem *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

