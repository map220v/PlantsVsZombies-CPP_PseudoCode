// Class: AdaptorMultiPurchaseItem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorMultiPurchaseItem::StaticClassInit() */

void AdaptorMultiPurchaseItem::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"AdaptorMultiPurchaseItem");
    (*pcVar2)(plVar1,asStack_10,FUN_036691e4,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorMultiPurchaseItem::StaticGetClass() */

long * AdaptorMultiPurchaseItem::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorMultiPurchaseItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorMultiPurchaseItem::GetClass() const */

long * AdaptorMultiPurchaseItem::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorMultiPurchaseItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorMultiPurchaseItem::Configure(Sexy::WidgetContainer*, AdaptorMultiPurchaseItemConfig
   const&) */

void __thiscall
AdaptorMultiPurchaseItem::Configure
          (AdaptorMultiPurchaseItem *this,WidgetContainer *param_1,
          AdaptorMultiPurchaseItemConfig *param_2)

{
  *(WidgetContainer **)(this + 0x138) = param_1;
  AdaptorMultiPurchaseItemConfig::operator=
            ((AdaptorMultiPurchaseItemConfig *)(this + 0x140),param_2);
  this[0x160] = (AdaptorMultiPurchaseItem)0x1;
  return;
}


/* AdaptorMultiPurchaseItem::createMultiplierDescription(int) */

void AdaptorMultiPurchaseItem::createMultiplierDescription(int param_1)

{
  Sexy::StrFormat("x%d");
  return;
}


/* AdaptorMultiPurchaseItem::createAddedAmountDescription(int, int) */

void AdaptorMultiPurchaseItem::createAddedAmountDescription(int param_1,int param_2)

{
  Sexy::StrFormat("x%d +%d",(ulong)(uint)param_2);
  return;
}


/* AdaptorMultiPurchaseItem::createBasicCountDescription(int, int) */

void AdaptorMultiPurchaseItem::createBasicCountDescription(int param_1,int param_2)

{
  int in_w2;
  
  if ((0 < in_w2) && (*(int *)((ulong)(uint)param_1 + 0x15c) == 6)) {
    createAddedAmountDescription(param_1,param_2);
    return;
  }
  createMultiplierDescription(param_1);
  return;
}


/* AdaptorMultiPurchaseItem::createAmountRangeDescription(int, int) */

void AdaptorMultiPurchaseItem::createAmountRangeDescription(int param_1,int param_2)

{
  int in_w2;
  
  if (param_2 != in_w2) {
    Sexy::StrFormat("%d-%d");
    return;
  }
  createBasicCountDescription(param_1,param_2);
  return;
}


/* AdaptorMultiPurchaseItem::AdaptorMultiPurchaseItem() */

void __thiscall AdaptorMultiPurchaseItem::AdaptorMultiPurchaseItem(AdaptorMultiPurchaseItem *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_06675e60;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066761c0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06676208;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x120));
  *(undefined8 *)(this + 0x138) = 0;
  AdaptorMultiPurchaseItemConfig::AdaptorMultiPurchaseItemConfig
            ((AdaptorMultiPurchaseItemConfig *)(this + 0x140));
  MultiPurchaseItemVisibility::MultiPurchaseItemVisibility
            ((MultiPurchaseItemVisibility *)(this + 0x161));
  this[0x160] = (AdaptorMultiPurchaseItem)0x0;
  return;
}


/* AdaptorMultiPurchaseItem::StaticNew() */

AdaptorMultiPurchaseItem * AdaptorMultiPurchaseItem::StaticNew(void)

{
  AdaptorMultiPurchaseItem *this;
  
  this = ::operator_new(0x168);
  AdaptorMultiPurchaseItem(this);
  return this;
}


/* AdaptorMultiPurchaseItem::~AdaptorMultiPurchaseItem() */

void __thiscall AdaptorMultiPurchaseItem::~AdaptorMultiPurchaseItem(AdaptorMultiPurchaseItem *this)

{
  *(undefined ***)this = &PTR_GetClass_06675e60;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066761c0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06676208;
  PakRecord::~PakRecord((PakRecord *)(this + 0x140));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x120));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorMultiPurchaseItem::~AdaptorMultiPurchaseItem() */

void __thiscall AdaptorMultiPurchaseItem::~AdaptorMultiPurchaseItem(AdaptorMultiPurchaseItem *this)

{
  ~AdaptorMultiPurchaseItem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorMultiPurchaseItem::prepareDisplayItem(std::map<std::string, std::string,
   std::less<std::string >, std::allocator<std::pair<std::string const, std::string > > >&) */

void __thiscall
AdaptorMultiPurchaseItem::prepareDisplayItem(AdaptorMultiPurchaseItem *this,map *param_1)

{
  char cVar1;
  undefined8 uVar2;
  string *psVar3;
  long lVar4;
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_38);
  Set8BytesTo0(asStack_30);
  Set8BytesTo0(asStack_28);
  Set8BytesTo0(asStack_20);
  Set8BytesTo0(asStack_18);
  if (*(int *)(this + 0x140) == 3) {
    thunk_FUN_05475e00(asStack_20,this + 0x148);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    thunk_FUN_05475e00(asStack_38,lVar4 + 8);
    this[0x163] = (AdaptorMultiPurchaseItem)0x1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  }
  else {
    if (*(int *)(this + 0x15c) == 6) {
      createBasicCountDescription((int)this,*(int *)(this + 0x150));
    }
    else {
      createAmountRangeDescription((int)this,*(int *)(this + 0x150));
    }
    FUN_05474278(asStack_38,asStack_10);
    std::string::~string(asStack_10);
  }
  std::string::string(asStack_10,"$DESCRIPTION");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)param_1,asStack_10);
  thunk_FUN_05475e00(uVar2,asStack_38);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"$ITEMIMAGE");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)param_1,asStack_10);
  thunk_FUN_05475e00(uVar2,asStack_30);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"$ITEMSEEDPACKET");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)param_1,asStack_10);
  thunk_FUN_05475e00(uVar2,asStack_28);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"$ITEMANIMPLANTTYPE");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)param_1,asStack_10);
  thunk_FUN_05475e00(uVar2,asStack_20);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"$ITEMANIMCOSTUMETYPE");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)param_1,asStack_10);
  thunk_FUN_05475e00(uVar2,asStack_18);
  std::string::~string(asStack_10);
  nop();
  cVar1 = FUN_0547419c(asStack_30);
  if (cVar1 == '\0') {
    this[0x161] = (AdaptorMultiPurchaseItem)0x1;
  }
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorMultiPurchaseItem::Update() */

void __thiscall AdaptorMultiPurchaseItem::Update(AdaptorMultiPurchaseItem *this)

{
  bool bVar1;
  long lVar2;
  string *extraout_x1;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_60 [8];
  Sexy aSStack_58 [8];
  wstring awStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x160] != (AdaptorMultiPurchaseItem)0x0) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_38);
    prepareDisplayItem(this,(map *)amStack_38);
    if (*(int *)(this + 0x15c) == 6) {
      std::string::string((string *)&local_48,"$DESCRIPTION");
      local_40 = std::
                 map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                 ::find((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_38,(string *)&local_48);
      eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                (agStack_60,(TextureInfo ***)&local_40);
      std::string::~string((string *)&local_48);
      nop();
      local_48 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)amStack_38);
      eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_40,
                 (TextureInfo ***)&local_48);
      bVar1 = eastl::operator!=((rbtree_iterator *)agStack_60,(rbtree_iterator *)&local_40);
      if (bVar1) {
        lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_60);
        FUN_05475d88(aSStack_58,lVar2 + 8);
        std::string::string((string *)&local_40,"ItemAmountText");
        Sexy::UTF8StringToWString(aSStack_58,extraout_x1);
        TodStringTranslate(awStack_50);
        HotUIAdaptor::setLabelWidgetText
                  ((HotUIAdaptor *)this,(string *)&local_40,(wstring *)&local_48);
        FUN_05476c50((string *)&local_48);
        FUN_05476c50(awStack_50);
        std::string::~string((string *)&local_40);
        nop();
        std::string::~string((string *)aSStack_58);
      }
    }
    this[0x160] = (AdaptorMultiPurchaseItem)0x0;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorMultiPurchaseItem::onLoadUIView() */

void __thiscall AdaptorMultiPurchaseItem::onLoadUIView(AdaptorMultiPurchaseItem *this)

{
  bool bVar1;
  string *psVar2;
  HotUIFile *pHVar3;
  RtObject *pRVar4;
  HotUISeedPacket *pHVar5;
  HotUIAnim *pHVar6;
  HotUIImage *pHVar7;
  size_t in_x2;
  string asStack_48 [8];
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  prepareDisplayItem(this,(map *)amStack_38);
  Set8BytesTo0(asStack_48);
  switch(*(undefined4 *)(this + 0x15c)) {
  case 1:
    std::string::append(asStack_48,"MultiPurchaseItemEntryHorizontal",in_x2);
    break;
  case 2:
    std::string::append(asStack_48,"MultiPurchaseItemEntryHorizontalRight",in_x2);
    break;
  case 3:
    std::string::append(asStack_48,"MultiPurchaseItemEntryNarrowItemOnly",in_x2);
    break;
  case 4:
    std::string::append(asStack_48,"MultiPurchaseItemEntryWorldPreviewUpgrade",in_x2);
    break;
  case 5:
    std::string::append(asStack_48,"MultiPurchaseItemEntryWorldPreviewPinata",in_x2);
    break;
  case 6:
    std::string::append(asStack_48,"MultiPurchaseItemEntryRift",in_x2);
    break;
  default:
    std::string::append(asStack_48,"MultiPurchaseItemEntry",in_x2);
  }
  psVar2 = (string *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  pHVar3 = (HotUIFile *)
           HotUIManager::LoadUIPrefab(psVar2,(map *)asStack_48,(WidgetContainer *)amStack_38);
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar3);
  if (this[0x158] == (AdaptorMultiPurchaseItem)0x0) {
    std::string::string(asStack_40,"GuaranteedBackground");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_40,false);
    std::string::~string(asStack_40);
    nop();
  }
  std::string::string(asStack_40,"LockIcon");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_40,(bool)this[0x15a]);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"ItemImage");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_40,(bool)this[0x161]);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"ItemSeedPacket");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_40,(bool)this[0x162]);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"ItemPlantAnim");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_40,(bool)this[0x163]);
  std::string::~string(asStack_40);
  nop();
  if (this[0x159] != (AdaptorMultiPurchaseItem)0x0) {
    pHVar3 = (HotUIFile *)FUN_03668f68(*(undefined8 *)(this + 0xf8));
    std::string::string(asStack_40,"ItemImage");
    pRVar4 = (RtObject *)HotUIFile::GetWidgetByName(pHVar3,asStack_40);
    std::string::~string(asStack_40);
    nop();
    if ((pRVar4 != (RtObject *)0x0) && (bVar1 = Sexy::RtObject::IsA<HotUIImage>(pRVar4), bVar1)) {
      pHVar7 = Sexy::RtObject::Cast<HotUIImage>(pRVar4);
      FUN_03668f8c(pHVar7 + 0x278);
    }
    pHVar3 = (HotUIFile *)FUN_03668f68(*(undefined8 *)(this + 0xf8));
    std::string::string(asStack_40,"ItemPlantAnim");
    pRVar4 = (RtObject *)HotUIFile::GetWidgetByName(pHVar3,asStack_40);
    std::string::~string(asStack_40);
    nop();
    if ((pRVar4 != (RtObject *)0x0) && (bVar1 = Sexy::RtObject::IsA<HotUIAnim>(pRVar4), bVar1)) {
      pHVar6 = Sexy::RtObject::Cast<HotUIAnim>(pRVar4);
      FUN_03668f80(pHVar6 + 0x244);
    }
    pHVar3 = (HotUIFile *)FUN_03668f68(*(undefined8 *)(this + 0xf8));
    std::string::string(asStack_40,"ItemSeedPacket");
    pRVar4 = (RtObject *)HotUIFile::GetWidgetByName(pHVar3,asStack_40);
    std::string::~string(asStack_40);
    nop();
    if ((pRVar4 != (RtObject *)0x0) && (bVar1 = Sexy::RtObject::IsA<HotUISeedPacket>(pRVar4), bVar1)
       ) {
      pHVar5 = Sexy::RtObject::Cast<HotUISeedPacket>(pRVar4);
      FUN_03668f74(pHVar5 + 0x220);
    }
  }
  std::string::~string(asStack_48);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* AdaptorMultiPurchaseItem::GetConfig() */

AdaptorMultiPurchaseItemConfig * AdaptorMultiPurchaseItem::GetConfig(void)

{
  long in_x0;
  AdaptorMultiPurchaseItemConfig *in_x8;
  
  AdaptorMultiPurchaseItemConfig::AdaptorMultiPurchaseItemConfig
            (in_x8,(AdaptorMultiPurchaseItemConfig *)(in_x0 + 0x140));
  return in_x8;
}

