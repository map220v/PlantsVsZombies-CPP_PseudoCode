// Class: PVZ2UIRewardObjectDisplayer


/* PVZ2UIRewardObjectDisplayer::SetDescription(std::wstring) */

void PVZ2UIRewardObjectDisplayer::SetDescription(long param_1)

{
  thunk_FUN_05477b9c(param_1 + 0xe0);
  return;
}


/* PVZ2UIRewardObjectDisplayer::~PVZ2UIRewardObjectDisplayer() */

void __thiscall
PVZ2UIRewardObjectDisplayer::~PVZ2UIRewardObjectDisplayer(PVZ2UIRewardObjectDisplayer *this)

{
  *(undefined ***)this = &PTR_GetClass_06838e50;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0xe8);
  FUN_05476c50(this + 0xe0);
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PVZ2UIRewardObjectDisplayer::~PVZ2UIRewardObjectDisplayer() */

void __thiscall
PVZ2UIRewardObjectDisplayer::~PVZ2UIRewardObjectDisplayer(PVZ2UIRewardObjectDisplayer *this)

{
  ~PVZ2UIRewardObjectDisplayer(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIRewardObjectDisplayer::Resize(int, int, int, int) */

void __thiscall
PVZ2UIRewardObjectDisplayer::Resize
          (PVZ2UIRewardObjectDisplayer *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  iVar1 = FUN_043772fc(0x4e);
  iVar2 = FUN_043772fc(0xe);
  iVar3 = FUN_043772fc(0x9a);
  Sexy::Insets::Insets
            (aIStack_18,iVar2,(int)((double)iVar1 * 0.75),iVar3,
             (*(int *)(this + 0x54) - (int)((double)iVar1 * 0.75)) - iVar2);
  (**(code **)(**(long **)(this + 0xf0) + 0x1a0))(*(long **)(this + 0xf0),aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIRewardObjectDisplayer::DrawOverlay(Sexy::Graphics*, int) */

void __thiscall
PVZ2UIRewardObjectDisplayer::DrawOverlay
          (PVZ2UIRewardObjectDisplayer *this,Graphics *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  GraphicsAutoState aGStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  if (param_2 == 1) {
    cVar1 = FUN_054765e8(this + 0xe8);
    if (cVar1 == '\0') {
      iVar2 = FUN_043772fc(0x3c);
      iVar3 = FUN_043772fc(0x19);
      Sexy::Insets::Insets(aIStack_28,0,-iVar3 - iVar2,*(int *)(this + 0x50),iVar2);
      uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_34_HardShadow)
      ;
      Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_New_Plant_Header);
      WriteWordInRect(param_1,this + 0xe8,aIStack_28,uVar4,aIStack_18,5,0);
    }
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIRewardObjectDisplayer::PVZ2UIRewardObjectDisplayer(Sexy::Image*, std::wstring,
   std::wstring, std::wstring, Sexy::Image*, bool) */

void __thiscall
PVZ2UIRewardObjectDisplayer::PVZ2UIRewardObjectDisplayer
          (PVZ2UIRewardObjectDisplayer *this,Image *param_1,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,long param_6,PVZ2UIRewardObjectDisplayer param_7)

{
  PVZ2UIGameObjectCard *pPVar1;
  undefined8 uVar2;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06838e50;
  FUN_05476574(this + 0xd8);
  FUN_05476574(this + 0xe0);
  FUN_05476574(this + 0xe8);
  this[0x100] = (PVZ2UIRewardObjectDisplayer)0x0;
  *(undefined8 *)(this + 0xf0) = 0;
  this[0x109] = param_7;
  if (param_1 != (Image *)0x0) {
    pPVar1 = ::operator_new(0x160);
    PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(pPVar1,param_1);
    *(PVZ2UIGameObjectCard **)(this + 0xf0) = pPVar1;
    PVZ2UIGameObjectCard::SetShowPlantPrice(pPVar1,false);
    if (param_6 != 0) {
      pPVar1 = *(PVZ2UIGameObjectCard **)(this + 0xf0);
      Sexy::Insets::Insets(aIStack_18,0,0x2c,0x4d,0xff);
      PVZ2UIGameObjectCard::SetSpecificBackground(pPVar1,param_6,aIStack_18);
    }
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xf0));
  }
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)
                     StoreItemConfig::IMAGE_UI_CARDS_STORE_STORE_UPGRADE_CARD);
  *(undefined8 *)(this + 0xf8) = uVar2;
  thunk_FUN_05477b9c(this + 0xe8,param_3);
  thunk_FUN_05477b9c(this + 0xd8,param_4);
  thunk_FUN_05477b9c(this + 0xe0,param_5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIRewardObjectDisplayer::Draw(Sexy::Graphics*) */

void __thiscall
PVZ2UIRewardObjectDisplayer::Draw(PVZ2UIRewardObjectDisplayer *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  PrimeTypeface *pPVar7;
  Image *pIVar8;
  LotteryResultProgressBar *this_00;
  undefined1 auStack_80 [8];
  wstring awStack_78 [8];
  wstring awStack_70 [8];
  Insets aIStack_68 [16];
  Insets aIStack_58 [16];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  Insets aIStack_38 [16];
  int local_28;
  int local_24;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x1c8))(this,param_1,1);
  Sexy::Insets::Insets(aIStack_68,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  iVar1 = FUN_043772fc(0xe);
  iVar2 = FUN_043772fc(4);
  iVar3 = FUN_043772fc(0x1c);
  iVar5 = *(int *)(this + 0x50);
  iVar4 = FUN_043772fc(0x40);
  Sexy::Insets::Insets(aIStack_58,iVar1,-iVar2,iVar5 - iVar3,iVar4);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,this + 0xd8,aIStack_58,uVar6,aCStack_18,5,1);
  iVar5 = *(int *)(*(long *)(this + 0xf0) + 0x50);
  iVar1 = *(int *)(*(long *)(this + 0xf0) + 0x48);
  iVar2 = FUN_043772fc(0xe);
  iVar5 = iVar1 + iVar5 + iVar2;
  iVar1 = FUN_043772fc(0x4e);
  Sexy::Insets::Insets
            ((Insets *)&local_48,iVar5,(int)((double)iVar1 * 0.75),
             (*(int *)(this + 0x50) - iVar5) - iVar2,
             (*(int *)(this + 0x54) - (int)((double)iVar1 * 0.75)) - iVar2);
  iVar1 = FUN_043772fc(0x14);
  Sexy::Insets::Insets(aIStack_38,iVar5,iVar1,local_40,*(int *)(this + 0x54));
  if (this[0x100] != (PVZ2UIRewardObjectDisplayer)0x0) {
    iVar5 = FUN_043772fc(0x3c);
    local_44 = local_44 + iVar5;
  }
  if (this[0x109] == (PVZ2UIRewardObjectDisplayer)0x0) {
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    Sexy::Color::Color(aCStack_18,0x42,0x41,0);
    WriteWordInRect(param_1,this + 0xe0,(Insets *)&local_48,uVar6,aCStack_18,0,1);
  }
  else {
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    Sexy::Color::Color(aCStack_18,0x66,0x37,0);
    WriteWordInRect(param_1,this + 0xe0,aIStack_38,uVar6,aCStack_18,3,1);
  }
  iVar5 = local_44;
  if (this[0x100] != (PVZ2UIRewardObjectDisplayer)0x0) {
    iVar1 = FUN_043772fc(0x3c);
    Sexy::Insets::Insets((Insets *)&local_28,local_48,iVar5 - iVar1,local_40,local_3c);
    TodStringTranslate(L"[STAR_PLANT_DESC_1]");
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color(aCStack_18,2);
    WriteWordInRect(param_1,awStack_70,(Insets *)&local_28,uVar6,aCStack_18,0,1);
    FUN_05476c50(awStack_70);
    pPVar7 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    TodStringTranslate(L"[STAR_PLANT_DESC_1]");
    iVar5 = Sexy::PrimeTypeface::SizeString_Line(pPVar7,aCStack_18);
    FUN_05476c50(aCStack_18);
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)
                                 ObjectCardSettings::IMAGE_UI_CARDS_PLANT_STARS);
    Sexy::Graphics::DrawImage(param_1,pIVar8,local_28 + iVar5,local_24);
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)
                         ObjectCardSettings::IMAGE_UI_CARDS_PLANT_STARS);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    local_28 = iVar1 + local_28 + iVar5;
    TodStringTranslate(L"[STAR_PLANT_DESC_2]");
    TodReplaceNumberString((wstring *)aCStack_18,L"{STAR_COUNT}",*(int *)(this + 0x104));
    FUN_05476c50(aCStack_18);
    uVar6 = FUN_054766ec(this + 0xd8);
    FUN_05478178(awStack_70,uVar6,auStack_80);
    TodReplaceString(awStack_78,L"{PLANT_NAME}",awStack_70);
    FUN_054766c8(awStack_78,aCStack_18);
    FUN_05476c50(aCStack_18);
    FUN_05476c50(awStack_70);
    nop();
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color(aCStack_18,2);
    WriteWordInRect(param_1,awStack_78,(Insets *)&local_28,uVar6,aCStack_18,0,1);
    FUN_05476c50(awStack_78);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIRewardObjectDisplayer::PVZ2UIRewardObjectDisplayer(Sexy::RtWeakPtr<ObjectTypeDescriptor
   const>, bool, int, PlantAvatarType, bool, bool) */

void __thiscall
PVZ2UIRewardObjectDisplayer::PVZ2UIRewardObjectDisplayer
          (PVZ2UIRewardObjectDisplayer *this,RtWeakPtr *param_2,PVZ2UIRewardObjectDisplayer param_3,
          undefined4 param_4,undefined4 param_5,PVZ2UIRewardObjectDisplayer param_6,char param_7)

{
  PVZ2UIRewardObjectDisplayer *pPVar1;
  PVZ2UIRewardObjectDisplayer *pPVar2;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  PVZ2UIGameObjectCard *pPVar8;
  long extraout_x0;
  long extraout_x0_00;
  long lVar9;
  long extraout_x0_01;
  RtObject *pRVar10;
  undefined8 uVar11;
  long extraout_x0_02;
  long extraout_x0_03;
  string *psVar12;
  char *pcVar13;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  string *extraout_x1_04;
  string *extraout_x1_05;
  string *extraout_x1_06;
  string *extraout_x1_07;
  string *extraout_x1_08;
  string *extraout_x1_09;
  string *extraout_x1_10;
  string *extraout_x1_11;
  PVZ2UIRewardObjectDisplayer *pPVar14;
  RtMixedPtrBase aRStack_48 [8];
  wstring awStack_40 [8];
  wstring awStack_38 [8];
  wstring awStack_30 [8];
  wstring awStack_28 [8];
  Sexy aSStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = this + 0xe0;
  pPVar2 = this + 0xe8;
  Sexy::Widget::Widget((Widget *)this);
  pPVar14 = this + 0xd8;
  *(undefined ***)this = &PTR_GetClass_06838e50;
  FUN_05476574(pPVar14);
  FUN_05476574(pPVar1);
  FUN_05476574(pPVar2);
  this[0x108] = param_6;
  *(undefined4 *)(this + 0x104) = param_4;
  this[0x100] = param_3;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)param_2);
  pPVar8 = ::operator_new(0x160);
  PVZ2UIGameObjectCard::PVZ2UIGameObjectCard
            (pPVar8,(RtWeakPtr<Sexy::SoundResource> *)&local_10,1,param_5,0,1);
  *(PVZ2UIGameObjectCard **)(this + 0xf0) = pPVar8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  PVZ2UIGameObjectCard::SetShowPlantPrice(*(PVZ2UIGameObjectCard **)(this + 0xf0),false);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xf0));
  bVar6 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar6) {
    pRVar10 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar6 = Sexy::RtObject::IsA<PlantType>(pRVar10);
    if (bVar6) {
      uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)
                          StoreItemConfig::IMAGE_UI_DIALOG_ASSET_BG_GREEN);
      *(undefined8 *)(this + 0xf8) = uVar11;
      if (param_7 == '\0') {
        TodStringTranslate(L"[AWARD_SCREEN_NEW_PLANT]");
        FUN_054766c8(pPVar2,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
        FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_10);
      }
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)param_2);
      Plant::GetFormattedNameString((Plant *)&local_18,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
      FUN_054766c8(pPVar14,(Plant *)&local_18);
      FUN_05476c50((Plant *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)param_2);
      Plant::GetFormattedToolTip((Plant *)&local_18,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
      FUN_054766c8(pPVar1,(Plant *)&local_18);
      FUN_05476c50((Plant *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      goto LAB_04380fd8;
    }
  }
  bVar6 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar6) {
    pRVar10 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar6 = Sexy::RtObject::IsA<GameFeatureType>(pRVar10);
    if (!bVar6) goto LAB_04380fb8;
    uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)
                        StoreItemConfig::IMAGE_UI_CARDS_STORE_STORE_UPGRADE_CARD);
    *(undefined8 *)(this + 0xf8) = uVar11;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    nop();
    if (*(char *)(extraout_x0_00 + 0x34) == '\0') {
      FUN_054772c4(pPVar2,&DAT_056f11a8);
      psVar12 = extraout_x1_03;
    }
    else {
      TodStringTranslate(L"[AWARD_SCREEN_NEW_UPGRADE]");
      FUN_054766c8(pPVar2,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
      FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_10);
      psVar12 = extraout_x1_01;
    }
    Sexy::StringToUpper((Sexy *)(extraout_x0_00 + 0x10),psVar12);
    Sexy::ToWString((string *)&local_10);
    TodStringTranslate((wstring *)&local_18);
    FUN_054766c8(pPVar14,aSStack_20);
    FUN_05476c50(aSStack_20);
    FUN_05476c50((wstring *)&local_18);
    std::string::~string((string *)&local_10);
    psVar12 = extraout_x1_02;
    lVar9 = extraout_x0_00;
  }
  else {
LAB_04380fb8:
    bVar6 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
    if (bVar6) {
      pRVar10 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      bVar6 = Sexy::RtObject::IsA<CollectableType>(pRVar10);
      if (bVar6) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        nop();
        uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)
                            StoreItemConfig::IMAGE_UI_CARDS_STORE_STORE_UPGRADE_CARD);
        *(undefined8 *)(this + 0xf8) = uVar11;
        TodStringTranslate(L"[AWARD_SCREEN_PRIZE]");
        FUN_054766c8(pPVar2,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
        FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_10);
        bVar6 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
        if (bVar6) {
          pRVar10 = (RtObject *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          bVar6 = Sexy::RtObject::IsA<CollectablePlantPieceType>(pRVar10);
          if (bVar6) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
            nop();
            psVar12 = (string *)
                      Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
            ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar12);
            cVar7 = Sexy::RtMixedPtrBase::IsValid(aRStack_48);
            if (cVar7 != '\0') {
              TodStringTranslate(L"[GET_PLANT_PIECE]");
              FUN_054766c8(pPVar14,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
              FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_10);
              if (*(long *)(gLawnApp + 0x9f0) != 0) {
                pvVar3 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(*(long *)(gLawnApp + 0x9f0) + 0x168);
                local_18 = std::
                           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           ::begin(pvVar3);
                local_10 = std::
                           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           ::end(pvVar3);
                while (bVar6 = __gnu_cxx::operator!=
                                         ((__normal_iterator *)&local_18,
                                          (__normal_iterator *)&local_10), bVar6) {
                  psVar12 = (string *)
                            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
                  cVar7 = std::operator==(psVar12,(string *)(extraout_x0_01 + 0x98));
                  if (cVar7 != '\0') {
                    iVar5 = *(int *)(psVar12 + 0x10);
                    if (2 < iVar5) {
                      TodStringTranslate(L"[PIECE_COUNT]");
                      Sexy::StrFormat(L"%d",(RtWeakPtr<Sexy::SoundResource> *)&local_10,
                                      (ulong)(iVar5 - 1));
                      TodReplaceString((wstring *)&local_18,L"{PIECES}",(wstring *)&local_10);
                      FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_10);
                      FUN_05476c50((exception_ptr *)&local_18);
                      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                                ((RtWeakPtr<Sexy::SoundResource> *)awStack_28,
                                 (RtWeakPtrBase *)aRStack_48);
                      Plant::GetFormattedNameString
                                ((Plant *)awStack_30,(RtWeakPtr<Sexy::SoundResource> *)awStack_28);
                      TodStringTranslate(L"\n\n");
                      std::operator+(awStack_40,(wstring *)&local_10);
                      TodStringTranslate((wstring *)&local_18);
                      std::operator+(awStack_30,(wstring *)aSStack_20);
                      FUN_05476c50((wstring *)aSStack_20);
                      FUN_05476c50((exception_ptr *)&local_18);
                      FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_10);
                      FUN_05476c50((Plant *)awStack_30);
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                ((RtWeakPtr<Sexy::ResourceInfo> *)awStack_28);
                      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                                ((RtWeakPtr<Sexy::SoundResource> *)&local_10,
                                 (RtWeakPtrBase *)aRStack_48);
                      Plant::GetFormattedToolTip
                                ((Plant *)&local_18,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
                      std::operator+(awStack_38,(wstring *)&local_18);
                      FUN_054766c8(pPVar1,(wstring *)aSStack_20);
                      FUN_05476c50((wstring *)aSStack_20);
                      FUN_05476c50((exception_ptr *)&local_18);
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
                      FUN_05476c50(awStack_38);
                      FUN_05476c50(awStack_40);
                      goto LAB_04381368;
                    }
                    break;
                  }
                  std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                            ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
                }
              }
              TodStringTranslate(L"[GET_PLANT_PIECE]");
              FUN_054766c8(pPVar14,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
              FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_10);
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)aRStack_48);
              Plant::GetFormattedToolTip
                        ((Plant *)&local_18,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
              FUN_054766c8(pPVar1,(Plant *)&local_18);
              FUN_05476c50((Plant *)&local_18);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
            }
LAB_04381368:
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
            goto LAB_04380fd8;
          }
        }
        bVar6 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
        psVar12 = extraout_x1;
        if (bVar6) {
          pRVar10 = (RtObject *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          bVar6 = Sexy::RtObject::IsA<CollectableAccessoryPieceType>(pRVar10);
          psVar12 = extraout_x1_06;
          if (bVar6) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
            nop();
            if (extraout_x0_03 != 0) {
              TodStringTranslate(L"[GET_ACCESSORY_PIECE]");
              FUN_054766c8(pPVar14,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
              FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_10);
              psVar12 = extraout_x1_07;
              if (*(long *)(gLawnApp + 0x9f0) != 0) {
                pvVar3 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(*(long *)(gLawnApp + 0x9f0) + 0x168);
                local_18 = std::
                           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           ::begin(pvVar3);
                local_10 = std::
                           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           ::end(pvVar3);
                while (bVar6 = __gnu_cxx::operator!=
                                         ((__normal_iterator *)&local_18,
                                          (__normal_iterator *)&local_10), psVar12 = extraout_x1_08,
                      bVar6) {
                  psVar12 = (string *)
                            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
                  cVar7 = std::operator==(psVar12,(string *)(extraout_x0_03 + 0x98));
                  if (cVar7 != '\0') {
                    uVar4 = *(uint *)(psVar12 + 0x10);
                    Sexy::StringToUpper((Sexy *)(extraout_x0_03 + 0x98),(string *)(ulong)uVar4);
                    pcVar13 = (char *)FUN_0547429c((RtWeakPtr<Sexy::SoundResource> *)&local_10);
                    std::string::string((string *)aRStack_48,pcVar13);
                    nop();
                    std::string::~string((string *)&local_10);
                    if ((int)uVar4 < 2) goto LAB_04381528;
                    uVar11 = FUN_0547429c((string *)aRStack_48);
                    Sexy::StrFormat("[%s]",(RtWeakPtr<Sexy::SoundResource> *)&local_10,uVar11);
                    pcVar13 = (char *)FUN_0547429c((RtWeakPtr<Sexy::SoundResource> *)&local_10);
                    std::string::string((string *)&local_18,pcVar13);
                    Sexy::StringToWString((Sexy *)&local_18,extraout_x1_10);
                    std::string::~string((string *)&local_18);
                    nop();
                    std::string::~string((string *)&local_10);
                    TodStringTranslate(L"[PIECE_COUNT]");
                    Sexy::StrFormat(L"%d",(RtWeakPtr<Sexy::SoundResource> *)&local_10,(ulong)uVar4);
                    TodReplaceString((wstring *)&local_18,L"{PIECES}",(wstring *)&local_10);
                    FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_10);
                    FUN_05476c50((exception_ptr *)&local_18);
                    TodStringTranslate(awStack_40);
                    TodStringTranslate(L"\n\n");
                    std::operator+(awStack_38,(wstring *)&local_10);
                    TodStringTranslate((wstring *)&local_18);
                    std::operator+(awStack_28,(wstring *)aSStack_20);
                    FUN_05476c50((wstring *)aSStack_20);
                    FUN_05476c50((exception_ptr *)&local_18);
                    FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_10);
                    FUN_05476c50(awStack_28);
                    uVar11 = FUN_0547429c((string *)aRStack_48);
                    Sexy::StrFormat("[%s_BOOST_DES]",awStack_28,uVar11);
                    Sexy::StringToWString((Sexy *)awStack_28,extraout_x1_11);
                    TodStringTranslate((wstring *)&local_10);
                    std::operator+(awStack_30,(wstring *)&local_18);
                    FUN_054766c8(pPVar1,(wstring *)aSStack_20);
                    FUN_05476c50((wstring *)aSStack_20);
                    FUN_05476c50((exception_ptr *)&local_18);
                    FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_10);
                    std::string::~string((string *)awStack_28);
                    FUN_05476c50(awStack_30);
                    FUN_05476c50(awStack_38);
                    FUN_05476c50(awStack_40);
                    goto LAB_04381584;
                  }
                  std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                            ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
                }
              }
              Sexy::StringToUpper((Sexy *)(extraout_x0_03 + 0x98),psVar12);
              pcVar13 = (char *)FUN_0547429c((RtWeakPtr<Sexy::SoundResource> *)&local_10);
              std::string::string((string *)aRStack_48,pcVar13);
              nop();
              std::string::~string((string *)&local_10);
LAB_04381528:
              uVar11 = FUN_0547429c(aRStack_48);
              Sexy::StrFormat("[%s_BOOST_DES]",aSStack_20,uVar11);
              Sexy::StringToWString(aSStack_20,extraout_x1_09);
              TodStringTranslate((wstring *)&local_10);
              FUN_054766c8(pPVar1,&local_18);
              FUN_05476c50(&local_18);
              FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_10);
              std::string::~string((string *)aSStack_20);
LAB_04381584:
              std::string::~string((string *)aRStack_48);
            }
            goto LAB_04380fd8;
          }
        }
        Sexy::UTF8StringToWString((Sexy *)(extraout_x0 + 0x78),psVar12);
        TodStringTranslate((wstring *)&local_10);
        FUN_054766c8(pPVar14,&local_18);
        FUN_05476c50(&local_18);
        FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_10);
        Sexy::UTF8StringToWString((Sexy *)(extraout_x0 + 0x80),extraout_x1_00);
        TodStringTranslate((wstring *)&local_10);
        FUN_054766c8(pPVar1,&local_18);
        FUN_05476c50(&local_18);
        FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_10);
        goto LAB_04380fd8;
      }
    }
    bVar6 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
    if (!bVar6) goto LAB_04380fd8;
    pRVar10 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar6 = Sexy::RtObject::IsA<BonusType>(pRVar10);
    if (!bVar6) goto LAB_04380fd8;
    uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)
                        StoreItemConfig::IMAGE_UI_CARDS_STORE_STORE_UPGRADE_CARD);
    *(undefined8 *)(this + 0xf8) = uVar11;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    nop();
    TodStringTranslate(L"[AWARD_SCREEN_NEW_BONUS]");
    FUN_054766c8(pPVar2,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
    FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_10);
    Sexy::StringToUpper((Sexy *)(extraout_x0_02 + 0x10),extraout_x1_04);
    Sexy::ToWString((string *)&local_10);
    TodStringTranslate((wstring *)&local_18);
    FUN_054766c8(pPVar14,aSStack_20);
    FUN_05476c50(aSStack_20);
    FUN_05476c50((wstring *)&local_18);
    std::string::~string((string *)&local_10);
    psVar12 = extraout_x1_05;
    lVar9 = extraout_x0_02;
  }
  Sexy::StringToUpper((Sexy *)(lVar9 + 0x18),psVar12);
  Sexy::ToWString((string *)&local_10);
  TodStringTranslate((wstring *)&local_18);
  FUN_054766c8(pPVar1,aSStack_20);
  FUN_05476c50(aSStack_20);
  FUN_05476c50((wstring *)&local_18);
  std::string::~string((string *)&local_10);
LAB_04380fd8:
  if (this[0x100] != (PVZ2UIRewardObjectDisplayer)0x0) {
    TodStringTranslate(L"[STAR_PLANT_TITLE]");
    FUN_054766c8(pPVar2,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
    FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_10);
    if (this[0x108] != (PVZ2UIRewardObjectDisplayer)0x0) {
      TodStringTranslate(L"[STAR_PLANT_TO_PIECES_TITLE]");
      FUN_054766c8(pPVar2,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
      FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_10);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

