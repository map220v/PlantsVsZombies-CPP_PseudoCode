// Class: LuckBagSelectItem


/* LuckBagSelectItem::getData() */

undefined1  [16] __thiscall LuckBagSelectItem::getData(LuckBagSelectItem *this)

{
  undefined1 auVar1 [16];
  
  auVar1._12_4_ = 0;
  auVar1._0_12_ = *(undefined1 (*) [12])(this + 0xe0);
  return auVar1;
}


/* LuckBagSelectItem::~LuckBagSelectItem() */

void __thiscall LuckBagSelectItem::~LuckBagSelectItem(LuckBagSelectItem *this)

{
  *(undefined ***)this = &PTR_GetClass_067170c0;
  FUN_05476c50(this + 0xf0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LuckBagSelectItem::~LuckBagSelectItem() */

void __thiscall LuckBagSelectItem::~LuckBagSelectItem(LuckBagSelectItem *this)

{
  ~LuckBagSelectItem(this);
  AK::FreeHook(this);
  return;
}


/* LuckBagSelectItem::LuckBagSelectItem(LuckBagSelectRow*) */

void __thiscall
LuckBagSelectItem::LuckBagSelectItem(LuckBagSelectItem *this,LuckBagSelectRow *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0xd4) = 0xffffffff;
  *(undefined4 *)(this + 0xd8) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_067170c0;
  this[0xdc] = (LuckBagSelectItem)0x0;
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)(this + 0xe0));
  FUN_05476574(this + 0xf0);
  *(LuckBagSelectRow **)(this + 0x100) = param_1;
  return;
}


/* LuckBagSelectItem::setIsSelected(bool) */

void __thiscall LuckBagSelectItem::setIsSelected(LuckBagSelectItem *this,bool param_1)

{
  this[0xdc] = (LuckBagSelectItem)param_1;
  return;
}


/* LuckBagSelectItem::TouchEnded(Sexy::Touch const&) */

void __thiscall LuckBagSelectItem::TouchEnded(LuckBagSelectItem *this,Touch *param_1)

{
  if ((*(int *)(this + 0xd8) == (int)*(undefined8 *)param_1) &&
     (*(LuckBagSelectRow **)(this + 0x100) != (LuckBagSelectRow *)0x0)) {
    LuckBagSelectRow::setSelect(*(LuckBagSelectRow **)(this + 0x100),*(int *)(this + 0xe0));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LuckBagSelectItem::init(LotteryBonus const&) */

void __thiscall LuckBagSelectItem::init(LuckBagSelectItem *this,LotteryBonus *param_1)

{
  char cVar1;
  int iVar2;
  string *psVar3;
  undefined8 uVar4;
  string *extraout_x1;
  undefined1 auVar5 [16];
  Sexy aSStack_58 [8];
  RtMixedPtrBase aRStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  GAME_ITEM_INFO aGStack_38 [40];
  undefined1 auStack_10 [8];
  long local_8;
  
  *(undefined8 *)(this + 0xe0) = *(undefined8 *)param_1;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 8);
  iVar2 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar2);
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  GetGameItemInfo(*(int *)(this + 0xe0),0x7fffffff,0);
  thunk_FUN_05477b9c(this + 0xf0,auStack_10);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_50);
  psVar3 = extraout_x1;
  if (cVar1 != '\0') {
    auVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    psVar3 = auVar5._8_8_;
    *(undefined4 *)(this + 0xd4) = *(undefined4 *)(auVar5._0_8_ + 0xd0);
  }
  Sexy::StringToUpper(aSStack_58,psVar3);
  std::operator+("IMAGE_UI_HEADSHOT_PLANT_",asStack_48);
  uVar4 = StringHelper::ToImage(asStack_40,false);
  *(undefined8 *)(this + 0xf8) = uVar4;
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  std::string::~string((string *)aSStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LuckBagSelectItem::Draw(Sexy::Graphics*) */

void __thiscall LuckBagSelectItem::Draw(LuckBagSelectItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  undefined8 uVar5;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  Image *local_48;
  undefined1 auStack_30 [8];
  Color aCStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  iVar1 = *(int *)(this + 0xd4);
  if (iVar1 == 0) {
    local_48 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7ad0);
    iVar1 = FUN_03abb658(10);
LAB_03abf6f8:
    iVar2 = FUN_03abb658(0);
    iVar3 = FUN_03abb658(0x50);
    Sexy::Graphics::DrawImage(param_1,local_48,iVar1,iVar2,iVar3,iVar3);
    if (*(long *)(this + 0xf8) != 0) goto LAB_03abf540;
    iVar1 = *(int *)(this + 0xd4);
  }
  else {
    if (iVar1 == 1) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7c90;
LAB_03abf79c:
      local_48 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
      iVar1 = FUN_03abb658(10);
      goto LAB_03abf6f8;
    }
    if (iVar1 == 2) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7d40;
      goto LAB_03abf79c;
    }
    if (iVar1 == 3) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7d70;
      goto LAB_03abf79c;
    }
    if (iVar1 == 4) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7cd0;
      goto LAB_03abf79c;
    }
    if (*(long *)(this + 0xf8) == 0) goto LAB_03abf5a0;
LAB_03abf540:
    iVar1 = FUN_03abb658(0xf);
    iVar2 = FUN_03abb658(5);
    iVar3 = FUN_03abb658(0x46);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar3);
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xf8));
    iVar1 = *(int *)(this + 0xd4);
  }
  if (iVar1 == 4) {
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7c68);
    iVar1 = FUN_03abb658(10);
    iVar2 = FUN_03abb658(0);
    iVar3 = FUN_03abb658(0x50);
    Sexy::Graphics::DrawImage(param_1,pIVar4,iVar1,iVar2,iVar3,iVar3);
  }
LAB_03abf5a0:
  if (this[0xdc] != (LuckBagSelectItem)0x0) {
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7dc0);
    iVar1 = FUN_03abb658(10);
    iVar2 = FUN_03abb658(0);
    iVar3 = FUN_03abb658(0x50);
    Sexy::Graphics::DrawImage(param_1,pIVar4,iVar1,iVar2,iVar3,iVar3);
    TodStringTranslate(L"[LUCKBAG_SELECT]");
    iVar1 = FUN_03abb658(10);
    iVar2 = FUN_03abb658(0);
    iVar3 = FUN_03abb658(0x50);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar3);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
    Sexy::Color::Color(aCStack_28,0,0xff,0x66);
    WriteWordInRect(param_1,auStack_30,aIStack_18,uVar5,aCStack_28,5,1);
    FUN_05476c50(auStack_30);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

