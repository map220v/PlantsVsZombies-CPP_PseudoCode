// Class: CallofWishTrainItem


/* CallofWishTrainItem::~CallofWishTrainItem() */

void __thiscall CallofWishTrainItem::~CallofWishTrainItem(CallofWishTrainItem *this)

{
  *(undefined ***)this = &PTR_GetClass_066f3140;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066f3468;
  FUN_05476c50(this + 0xf0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* CallofWishTrainItem::~CallofWishTrainItem() */

void __thiscall CallofWishTrainItem::~CallofWishTrainItem(CallofWishTrainItem *this)

{
  ~CallofWishTrainItem(this);
  AK::FreeHook(this);
  return;
}


/* CallofWishTrainItem::CallofWishTrainItem() */

void __thiscall CallofWishTrainItem::CallofWishTrainItem(CallofWishTrainItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  this[0xe0] = (CallofWishTrainItem)0x0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined ***)this = &PTR_GetClass_066f3140;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066f3468;
  FUN_05476574(this + 0xf0);
  *(undefined8 *)(this + 0xf8) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishTrainItem::InitView(CallofWishTab, int, CallofWishReward) */

void __thiscall
CallofWishTrainItem::InitView(CallofWishTrainItem *this,int param_2,int param_3,undefined4 *param_4)

{
  wstring *pwVar1;
  CallofWishTrainItem CVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  CallofWishManager *pCVar12;
  int *piVar13;
  PVZ2UIButton *pPVar14;
  undefined8 uVar15;
  long lVar16;
  string *extraout_x1;
  long *plVar17;
  code *pcVar18;
  undefined1 auStack_98 [8];
  Sexy aSStack_90 [8];
  string asStack_88 [8];
  wstring awStack_80 [8];
  wstring awStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  CVar2 = *(CallofWishTrainItem *)(param_4 + 1);
  uVar5 = *param_4;
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xec) = param_2;
  *(int *)(this + 0xe4) = param_3;
  this[0xe0] = CVar2;
  *(undefined4 *)(this + 0xe8) = uVar5;
  if (param_2 == 5) {
    FUN_05478178(awStack_78,L"[CALL_OF_WISH_ACCUM_TIMES]",awStack_80);
    TodReplaceNumberString(awStack_78,L"{NUM}",*(int *)(this + 0xe8));
    FUN_054766c8(this + 0xf0,aIStack_40);
    FUN_05476c50(aIStack_40);
    FUN_05476c50(awStack_78);
    nop();
  }
  else if (param_2 == 6) {
    *(int *)(this + 0xe8) = param_3 + 1;
    iVar11 = PlantNameMapperServerID::GetInstance();
    Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
    NameMapperBase::GetNameForId(iVar11);
    pwVar1 = (wstring *)(this + 0xf0);
    Sexy::StringToUpper(aSStack_90,extraout_x1);
    std::operator+("[",(string *)awStack_78);
    std::operator+((string *)aIStack_40,"]");
    std::string::~string((string *)aIStack_40);
    std::string::~string((string *)awStack_78);
    Sexy::ToWString(asStack_88);
    TodStringTranslate((wstring *)aIStack_40);
    FUN_05476c50((string *)aIStack_40);
    FUN_05478178((string *)awStack_78,L"[CALL_OF_WISH_TRAIN_TIMES]",auStack_98);
    TodReplaceNumberString(awStack_78,L"{NUM}",*(int *)(this + 0xe8));
    FUN_054766c8(pwVar1,(string *)aIStack_40);
    FUN_05476c50((string *)aIStack_40);
    FUN_05476c50((string *)awStack_78);
    nop();
    TodReplaceString(pwVar1,L"{PLANT}",awStack_80);
    FUN_054766c8(pwVar1,(string *)aIStack_40);
    FUN_05476c50((string *)aIStack_40);
    FUN_05476c50(awStack_80);
    std::string::~string(asStack_88);
    std::string::~string((string *)aSStack_90);
  }
  pCVar12 = (CallofWishManager *)Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
  iVar4 = CallofWishManager::GetPrograssValue(pCVar12,*(undefined4 *)(this + 0xec));
  iVar11 = *(int *)(this + 0xe8);
  cVar3 = std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::empty
                    ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(param_4 + 2));
  if (cVar3 == '\0') {
    piVar13 = (int *)FUN_039d27f0(*(undefined8 *)(param_4 + 2),0);
    plVar17 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar13,piVar13[1],true);
    uVar5 = FUN_039d34f4(300);
    uVar6 = FUN_039d34f4(0x14);
    uVar7 = FUN_039d34f4(0x46);
    (**(code **)(*plVar17 + 0x198))(plVar17,uVar5,uVar6,uVar7,uVar7);
    (**(code **)(*(long *)this + 0x60))(this,plVar17);
    lVar16 = *(long *)(this + 0xf8);
  }
  else {
    lVar16 = *(long *)(this + 0xf8);
  }
  if (lVar16 == 0) {
    TodStringTranslate(L"[PLANT_OBTAIN]");
    Sexy::Color::Color((Color *)aIStack_40,1);
    pPVar14 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar14,0x25d,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aIStack_40);
    *(PVZ2UIButton **)(this + 0xf8) = pPVar14;
    FUN_05476c50(awStack_78);
    pPVar14 = *(PVZ2UIButton **)(this + 0xf8);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ac1450,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06ac14f8,3);
    PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
    plVar17 = *(long **)(this + 0xf8);
    pcVar18 = *(code **)(*plVar17 + 0x1a0);
    iVar8 = FUN_039d34f4(400);
    iVar9 = FUN_039d34f4(0x3a);
    iVar10 = FUN_039d34f4(0x8c);
    Sexy::Insets::Insets(aIStack_40,iVar8,(*(int *)(this + 0x54) - iVar9) / 2,iVar10,iVar9);
    (*pcVar18)(plVar17,aIStack_40);
    plVar17 = *(long **)(this + 0xf8);
    pcVar18 = *(code **)(*plVar17 + 800);
    uVar15 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline);
    (*pcVar18)(plVar17,uVar15);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
    (**(code **)(**(long **)(this + 0xf8) + 0x188))
              (*(long **)(this + 0xf8),iVar4 < iVar11 | (byte)this[0xe0]);
    if (this[0xe0] != (CallofWishTrainItem)0x0) {
      pPVar14 = *(PVZ2UIButton **)(this + 0xf8);
      TodStringTranslate(L"[PLANT_OBTAINED]");
      PVZ2UIButton::SetLabelText(pPVar14,(wstring *)aIStack_40);
      FUN_05476c50(aIStack_40);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishTrainItem::RequestReward() */

void __thiscall CallofWishTrainItem::RequestReward(CallofWishTrainItem *this)

{
  undefined8 uVar1;
  DNetwork *this_00;
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2112];
  string asStack_4a8 [1184];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"ai");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  local_d48[0] = 0x2a4f;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  if (*(int *)(this + 0xec) == 5) {
    std::string::string(asStack_d40,"t");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    local_d48[0] = 2;
  }
  else {
    if (*(int *)(this + 0xec) != 6) goto LAB_039d91dc;
    std::string::string(asStack_d40,"t");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    local_d48[0] = 3;
  }
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
LAB_039d91dc:
  std::string::string(asStack_d40,"i");
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
  FUN_039d343c(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_4a8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CallofWishTrainItem::ButtonDepress(int) */

void __thiscall CallofWishTrainItem::ButtonDepress(CallofWishTrainItem *this,int param_1)

{
  if (param_1 != 0x25d) {
    return;
  }
  RequestReward(this);
  return;
}


/* non-virtual thunk to CallofWishTrainItem::ButtonDepress(int) */

void __thiscall CallofWishTrainItem::ButtonDepress(CallofWishTrainItem *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishTrainItem::Draw(Sexy::Graphics*) */

void __thiscall CallofWishTrainItem::Draw(CallofWishTrainItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  CallofWishManager *pCVar6;
  uint *puVar7;
  float *pfVar8;
  Image *pIVar9;
  float fVar10;
  float local_34;
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  iVar1 = FUN_039d34f4(10);
  iVar2 = FUN_039d34f4(0x14);
  Sexy::Insets::Insets
            ((Insets *)local_18,iVar1,0,*(int *)(this + 0x50) - iVar2,*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac13b0);
  Draw9SliceImage(param_1,(Insets *)local_18,uVar5);
  iVar1 = FUN_039d34f4(0x14);
  iVar2 = FUN_039d34f4(5);
  iVar3 = FUN_039d34f4(0xfa);
  iVar4 = FUN_039d34f4(0x32);
  Sexy::Insets::Insets((Insets *)local_18,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  Sexy::Color::Color((Color *)&local_28,0x66,0x37,0);
  WriteWordInRect(param_1,this + 0xf0,(Insets *)local_18,uVar5,(Color *)&local_28,3,1);
  pCVar6 = (CallofWishManager *)Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
  local_28 = CallofWishManager::GetPrograssValue(pCVar6,*(undefined4 *)(this + 0xec));
  puVar7 = (uint *)eastl::min_alt<int>(&local_28,(int *)(this + 0xe8));
  Sexy::StrFormat("%d / %d",(Insets *)local_18,(ulong)*puVar7,(ulong)*(uint *)(this + 0xe8));
  Sexy::ToWString((string *)local_18);
  std::string::~string((string *)local_18);
  iVar1 = FUN_039d34f4(0x32);
  iVar2 = FUN_039d34f4(0x3c);
  iVar3 = FUN_039d34f4(200);
  iVar4 = FUN_039d34f4(0x19);
  Sexy::Insets::Insets((Insets *)&local_28,iVar1,iVar2,iVar3,iVar4);
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)&local_28);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac10f8);
  Draw3SliceImage(param_1,(Insets *)local_18,uVar5);
  pCVar6 = (CallofWishManager *)Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
  iVar1 = CallofWishManager::GetPrograssValue(pCVar6,*(undefined4 *)(this + 0xec));
  local_34 = 1.0;
  if (*(int *)(this + 0xe8) != 0) {
    local_34 = (float)*(int *)(this + 0xe8);
  }
  local_34 = (float)iVar1 / local_34;
  local_18[0] = 0x3f800000;
  pfVar8 = eastl::min_alt<float>(&local_34,(float *)local_18);
  fVar10 = *pfVar8;
  if (fVar10 < 0.3) {
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1170);
    Sexy::Graphics::DrawImage
              (param_1,pIVar9,local_28,local_24,(int)(fVar10 * (float)local_20),local_1c);
  }
  else {
    Sexy::Insets::Insets
              ((Insets *)local_18,local_28,local_24,(int)(fVar10 * (float)local_20),local_1c);
    uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1170);
    Draw3SliceImage(param_1,(Insets *)local_18,uVar5);
  }
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)local_18,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,(Color *)&local_28,uVar5,(Insets *)local_18,5,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

