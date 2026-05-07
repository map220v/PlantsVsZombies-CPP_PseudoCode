// Class: MiniGameLevelPackSublayoutAdaptor


/* MiniGameLevelPackSublayoutAdaptor::ButtonPress(int) */

int MiniGameLevelPackSublayoutAdaptor::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to MiniGameLevelPackSublayoutAdaptor::ButtonPress(int) */

void __thiscall
MiniGameLevelPackSublayoutAdaptor::ButtonPress(MiniGameLevelPackSublayoutAdaptor *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameLevelPackSublayoutAdaptor::StaticClassInit() */

void MiniGameLevelPackSublayoutAdaptor::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGameLevelPackSublayoutAdaptor");
    (*pcVar2)(plVar1,asStack_10,FUN_03664894,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameLevelPackSublayoutAdaptor::StaticGetClass() */

long * MiniGameLevelPackSublayoutAdaptor::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MiniGameLevelPackSublayoutAdaptor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGameLevelPackSublayoutAdaptor::GetClass() const */

long * MiniGameLevelPackSublayoutAdaptor::GetClass(void)

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
  (*pcVar3)(plVar1,"MiniGameLevelPackSublayoutAdaptor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameLevelPackSublayoutAdaptor::IsPackComplete() const */

void __thiscall
MiniGameLevelPackSublayoutAdaptor::IsPackComplete(MiniGameLevelPackSublayoutAdaptor *this)

{
  hash_node *phVar1;
  hash_node **pphVar2;
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ahStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  phVar1 = (hash_node *)ProfileUtils::Profile();
  pphVar2 = (hash_node **)ArcadePropertySheet::Get();
  eastl::
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ::hashtable_iterator_base(ahStack_18,phVar1,pphVar2);
  ArcadeProgressDatabase::IsPackComplete
            ((ArcadeProgressDatabase *)ahStack_18,(string *)(this + 0x128));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameLevelPackSublayoutAdaptor::ContainsLevel(std::string const&) const */

void __thiscall
MiniGameLevelPackSublayoutAdaptor::ContainsLevel
          (MiniGameLevelPackSublayoutAdaptor *this,string *param_1)

{
  ArcadePropertySheetHelpers::ArcadeLevelPack::ContainsLevelID
            ((ArcadeLevelPack *)(this + 0x128),param_1);
  return;
}


/* MiniGameLevelPackSublayoutAdaptor::IsConfiguredForPack(std::string const&) const */

void __thiscall
MiniGameLevelPackSublayoutAdaptor::IsConfiguredForPack
          (MiniGameLevelPackSublayoutAdaptor *this,string *param_1)

{
  std::operator==((string *)(this + 0x128),param_1);
  return;
}


/* MiniGameLevelPackSublayoutAdaptor::GetPowerUpUIButton() const */

undefined8 __thiscall
MiniGameLevelPackSublayoutAdaptor::GetPowerUpUIButton(MiniGameLevelPackSublayoutAdaptor *this)

{
  bool bVar1;
  HotUIFile *this_00;
  RtClass *pRVar2;
  RtObject *this_01;
  HotUIPowerUpButton *pHVar3;
  undefined8 uVar4;
  
  this_00 = (HotUIFile *)FUN_036645c4(*(undefined8 *)(this + 0xf8));
  pRVar2 = (RtClass *)HotUIPowerUpButton::StaticGetClass();
  this_01 = (RtObject *)HotUIFile::GetWidgetByType(this_00,pRVar2);
  if ((this_01 != (RtObject *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<HotUIPowerUpButton>(this_01), bVar1)) {
    pHVar3 = Sexy::RtObject::Cast<HotUIPowerUpButton>(this_01);
    uVar4 = FUN_036645c0(*(undefined8 *)(pHVar3 + 0x218));
    return uVar4;
  }
  return 0;
}


/* MiniGameLevelPackSublayoutAdaptor::playLevel(int const&) */

void __thiscall
MiniGameLevelPackSublayoutAdaptor::playLevel(MiniGameLevelPackSublayoutAdaptor *this,int *param_1)

{
  int iVar1;
  ulong uVar2;
  SexyURL *pSVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x168);
  iVar1 = *param_1;
  uVar2 = FUN_036645d4(uVar4,*(undefined8 *)(this + 0x170));
  if (uVar2 <= (ulong)(long)iVar1) {
    return;
  }
  pSVar3 = (SexyURL *)FUN_036645e0(uVar4,(long)iVar1);
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 400),pSVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameLevelPackSublayoutAdaptor::ButtonDepress(int) */

void __thiscall
MiniGameLevelPackSublayoutAdaptor::ButtonDepress
          (MiniGameLevelPackSublayoutAdaptor *this,int param_1)

{
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 == 1) || (param_1 == 2)) || (param_1 == 0)) {
    local_c = param_1;
    playLevel(this,&local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to MiniGameLevelPackSublayoutAdaptor::ButtonDepress(int) */

void __thiscall
MiniGameLevelPackSublayoutAdaptor::ButtonDepress
          (MiniGameLevelPackSublayoutAdaptor *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameLevelPackSublayoutAdaptor::GetLevelButtonAnimByLevelID(std::string const&) const */

void __thiscall
MiniGameLevelPackSublayoutAdaptor::GetLevelButtonAnimByLevelID
          (MiniGameLevelPackSublayoutAdaptor *this,string *param_1)

{
  char cVar1;
  int iVar2;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_036645c4(*(undefined8 *)(this + 0xf8));
  iVar2 = ArcadePropertySheetHelpers::ArcadeLevelPack::GetLevelIndexByID
                    ((ArcadeLevelPack *)(this + 0x128),param_1);
  Sexy::StrFormat("ButtonAnimLevel%d",asStack_10,(ulong)(iVar2 + 1));
  cVar1 = HotUIFile::HasWidgetByName(this_00,asStack_10);
  if (cVar1 == '\0') {
    pHVar3 = (HotUISeedPacketList *)0x0;
  }
  else {
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pHVar3);
}


/* MiniGameLevelPackSublayoutAdaptor::MiniGameLevelPackSublayoutAdaptor() */

void __thiscall
MiniGameLevelPackSublayoutAdaptor::MiniGameLevelPackSublayoutAdaptor
          (MiniGameLevelPackSublayoutAdaptor *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined ***)this = &PTR_GetClass_06674ca0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06675000;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06675048;
  ArcadePropertySheetHelpers::ArcadeLevelPack::ArcadeLevelPack((ArcadeLevelPack *)(this + 0x128));
  Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)(this + 400));
  return;
}


/* MiniGameLevelPackSublayoutAdaptor::StaticNew() */

MiniGameLevelPackSublayoutAdaptor * MiniGameLevelPackSublayoutAdaptor::StaticNew(void)

{
  MiniGameLevelPackSublayoutAdaptor *this;
  
  this = ::operator_new(0x1c0);
  MiniGameLevelPackSublayoutAdaptor(this);
  return this;
}


/* MiniGameLevelPackSublayoutAdaptor::~MiniGameLevelPackSublayoutAdaptor() */

void __thiscall
MiniGameLevelPackSublayoutAdaptor::~MiniGameLevelPackSublayoutAdaptor
          (MiniGameLevelPackSublayoutAdaptor *this)

{
  *(undefined ***)this = &PTR_GetClass_06674ca0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06675000;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06675048;
  ArcadePropertySheetHelpers::ArcadeLevelPack::~ArcadeLevelPack((ArcadeLevelPack *)(this + 0x128));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* MiniGameLevelPackSublayoutAdaptor::~MiniGameLevelPackSublayoutAdaptor() */

void __thiscall
MiniGameLevelPackSublayoutAdaptor::~MiniGameLevelPackSublayoutAdaptor
          (MiniGameLevelPackSublayoutAdaptor *this)

{
  ~MiniGameLevelPackSublayoutAdaptor(this);
  AK::FreeHook(this);
  return;
}


/* MiniGameLevelPackSublayoutAdaptor::Configure(Sexy::WidgetContainer*,
   ArcadePropertySheetHelpers::ArcadeLevelPack const&, Sexy::Delegate1<std::string const&>) */

void __thiscall
MiniGameLevelPackSublayoutAdaptor::Configure
          (MiniGameLevelPackSublayoutAdaptor *this,undefined8 param_1,ArcadeLevelPack *param_2,
          Delegate2 *param_4)

{
  *(undefined8 *)(this + 0x120) = param_1;
  ArcadePropertySheetHelpers::ArcadeLevelPack::operator=((ArcadeLevelPack *)(this + 0x128),param_2);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 400),param_4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameLevelPackSublayoutAdaptor::onLoadUIView() */

void __thiscall
MiniGameLevelPackSublayoutAdaptor::onLoadUIView(MiniGameLevelPackSublayoutAdaptor *this)

{
  undefined8 uVar1;
  string *psVar2;
  HotUIFile *pHVar3;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_40,"$PACK_DESCRIPTION");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x148);
  std::string::~string(asStack_40);
  nop();
  psVar2 = (string *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  pHVar3 = (HotUIFile *)
           HotUIManager::LoadUIPrefab(psVar2,(map *)(this + 0x150),(WidgetContainer *)amStack_38);
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar3);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameLevelPackSublayoutAdaptor::RefreshUnlockStatus() */

void __thiscall
MiniGameLevelPackSublayoutAdaptor::RefreshUnlockStatus(MiniGameLevelPackSublayoutAdaptor *this)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  hash_node **pphVar8;
  hash_node *phVar9;
  HotUIFile *this_00;
  long lVar10;
  ulong uVar11;
  string *psVar12;
  undefined8 *puVar13;
  HotUISeedPacketList *pHVar14;
  HotUISeedPacketList *pHVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 *puVar18;
  PowerUpUIButton *this_01;
  char *__s;
  HotUIAnim *pHVar19;
  uint uVar20;
  ulong uVar21;
  HotUIWidget *unaff_x25;
  undefined8 uVar22;
  string asStack_b0 [8];
  undefined8 local_a8;
  HotUISeedPacketList *local_a0;
  HotUISeedPacketList *local_98;
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ahStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68 [3];
  undefined8 local_50;
  undefined8 local_48;
  DummyInit aDStack_38 [48];
  long local_8;
  
  uVar20 = 0;
  local_8 = ___stack_chk_guard;
  uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::FindFirstObjectByClass<ArcadePropertySheet>
            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_50,uVar7,0x98);
  pphVar8 = (hash_node **)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  phVar9 = (hash_node *)ProfileUtils::Profile();
  eastl::
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ::hashtable_iterator_base(ahStack_90,phVar9,pphVar8);
  this_00 = (HotUIFile *)FUN_036645c4(*(undefined8 *)(this + 0xf8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_68);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  do {
    uVar20 = uVar20 + 1;
    Sexy::StrFormat("ButtonLevel%d",asStack_b0,(ulong)uVar20);
    cVar2 = HotUIFile::HasWidgetByName(this_00,asStack_b0);
    if (cVar2 != '\0') {
      local_98 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_b0);
      std::vector<HotUIButton*,std::allocator<HotUIButton*>>::push_back
                ((vector<HotUIButton*,std::allocator<HotUIButton*>> *)&local_80,
                 (HotUIButton **)&local_98);
    }
    Sexy::StrFormat("ButtonAnimLevel%d",(string *)&local_a8,(ulong)uVar20);
    cVar2 = HotUIFile::HasWidgetByName(this_00,(string *)&local_a8);
    if (cVar2 != '\0') {
      local_98 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)&local_a8);
      std::vector<HotUIAnim*,std::allocator<HotUIAnim*>>::push_back
                ((vector<HotUIAnim*,std::allocator<HotUIAnim*>> *)local_68,(HotUIAnim **)&local_98);
    }
    Sexy::StrFormat("PathAnim%d",(string *)&local_a0,(ulong)uVar20);
    cVar2 = HotUIFile::HasWidgetByName(this_00,(string *)&local_a0);
    if (cVar2 != '\0') {
      local_98 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)&local_a0);
      std::vector<HotUIAnimPath*,std::allocator<HotUIAnimPath*>>::push_back
                ((vector<HotUIAnimPath*,std::allocator<HotUIAnimPath*>> *)&local_50,
                 (HotUIAnimPath **)&local_98);
    }
    std::string::~string((string *)&local_a0);
    std::string::~string((string *)&local_a8);
    std::string::~string(asStack_b0);
    uVar7 = local_80;
  } while (uVar20 != 3);
  uVar21 = 0;
  lVar10 = FUN_036645c8(local_80,local_78);
  if (lVar10 != 0) {
    do {
      uVar22 = *(undefined8 *)(this + 0x168);
      uVar11 = FUN_036645d4(uVar22,*(undefined8 *)(this + 0x170));
      if (uVar21 < uVar11) {
        psVar12 = (string *)FUN_036645e0(uVar22,uVar21);
        bVar3 = ArcadeProgressDatabase::IsLevelUnlocked
                          ((ArcadeProgressDatabase *)ahStack_90,psVar12);
        psVar12 = (string *)FUN_036645e0(*(undefined8 *)(this + 0x168),uVar21);
        cVar2 = ArcadeProgressDatabase::IsLevelComplete
                          ((ArcadeProgressDatabase *)ahStack_90,psVar12);
        puVar13 = (undefined8 *)FUN_036645e8(local_80,uVar21);
        (**(code **)(*(long *)*puVar13 + 0x188))((long *)*puVar13,bVar3 ^ 1);
        psVar12 = (string *)&local_a0;
        std::string::string((string *)&local_98,"locked_idle");
        nop();
        if (bVar3 != 0) {
          if (cVar2 == '\0') {
            std::string::append((string *)&local_98,"unlocked",(size_t)psVar12);
          }
          else {
            std::string::append((string *)&local_98,"finished",(size_t)psVar12);
          }
        }
        puVar13 = (undefined8 *)FUN_036645f0(local_68[0],uVar21);
        pHVar19 = (HotUIAnim *)*puVar13;
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
        HotUIAnim::PlayAndContinue(pHVar19,(string *)&local_98,0,aDStack_38);
        std::string::~string((string *)&local_98);
      }
      else {
        puVar13 = (undefined8 *)FUN_036645e8(uVar7,uVar21);
        (**(code **)(*(long *)*puVar13 + 0x158))((long *)*puVar13,0);
        puVar13 = (undefined8 *)FUN_036645f0(local_68[0],uVar21);
        (**(code **)(*(long *)*puVar13 + 0x158))((long *)*puVar13,0);
      }
      uVar7 = local_80;
      uVar21 = uVar21 + 1;
      uVar11 = FUN_036645c8(local_80,local_78);
    } while (uVar21 < uVar11);
  }
  Sexy::Point::Point((Point *)&local_a8);
  Sexy::Point::Point((Point *)&local_a0);
  std::string::string((string *)&local_98,"PowerUpReward");
  pHVar14 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)&local_98);
  std::string::~string((string *)&local_98);
  nop();
  std::string::string((string *)&local_98,"GiftBoxAnim");
  pHVar15 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)&local_98);
  std::string::~string((string *)&local_98);
  nop();
  if (*(int *)(this + 0x180) == 2) {
    iVar5 = FUN_03664744(0xffffffce);
    Sexy::Point::Point((Point *)&local_98,iVar5,iVar5);
    local_a0 = local_98;
    this_01 = (PowerUpUIButton *)GetPowerUpUIButton(this);
    if (this_01 != (PowerUpUIButton *)0x0) {
      PowerUpUIButton::RefreshUnlockState(this_01);
    }
  }
  else {
    pHVar14 = (HotUISeedPacketList *)0x0;
    if (*(int *)(this + 0x180) == 1) {
      iVar5 = FUN_03664744(0xffffffce);
      iVar6 = FUN_03664744(0xffffffc4);
      Sexy::Point::Point((Point *)&local_98,iVar5,iVar6);
      uVar7 = *(undefined8 *)(this + 0x168);
      local_a0 = local_98;
      lVar10 = FUN_036645d4(uVar7,*(undefined8 *)(this + 0x170));
      psVar12 = (string *)FUN_036645e0(uVar7,lVar10 + -1);
      cVar2 = ArcadeProgressDatabase::IsLevelComplete((ArcadeProgressDatabase *)ahStack_90,psVar12);
      if (cVar2 == '\0') {
        __s = "idle";
      }
      else {
        __s = "open_idle";
      }
      std::string::string((string *)&local_98,__s);
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      HotUIAnim::PlayAndContinue((HotUIAnim *)pHVar15,(string *)&local_98,0,aDStack_38);
      std::string::~string((string *)&local_98);
      nop();
      pHVar14 = pHVar15;
    }
  }
  uVar7 = local_50;
  uVar11 = FUN_036645f8(local_50,local_48);
  uVar21 = 0;
  if (uVar11 != 0) {
    do {
      uVar22 = local_80;
      uVar1 = uVar21 + 1;
      uVar16 = FUN_036645c8(local_80,local_78);
      if ((uVar1 < uVar16) &&
         (plVar17 = (long *)FUN_036645e8(uVar22,uVar1), *(char *)(*plVar17 + 0x6c) != '\0')) {
        uVar4 = FUN_03664744(0xffffffe2);
        local_a8 = (HotUISeedPacketList *)CONCAT44(local_a8._4_4_,uVar4);
        uVar4 = FUN_03664744(0xffffffd0);
        uVar22 = local_68[0];
        local_a8 = (HotUISeedPacketList *)CONCAT44(uVar4,(undefined4)local_a8);
        puVar13 = (undefined8 *)FUN_036645f0(local_68[0],uVar1);
        unaff_x25 = (HotUIWidget *)*puVar13;
      }
      else {
        uVar22 = local_68[0];
        if (uVar21 == uVar11 - 1) {
          local_a8 = local_a0;
          unaff_x25 = (HotUIWidget *)pHVar14;
        }
      }
      plVar17 = (long *)FUN_036645f0(uVar22,uVar21);
      if (((unaff_x25 == (HotUIWidget *)0x0) || (*(char *)(*plVar17 + 0x6c) == '\0')) ||
         (unaff_x25[0x6c] == (HotUIWidget)0x0)) {
        puVar13 = (undefined8 *)FUN_03664604(uVar7,uVar21);
        (**(code **)(*(long *)*puVar13 + 0x158))((long *)*puVar13,0);
      }
      else {
        iVar5 = FUN_03664744(0xffffffe2);
        iVar6 = FUN_03664744(0xffffffd0);
        Sexy::Point::Point((Point *)&local_98,iVar5,iVar6);
        puVar13 = (undefined8 *)FUN_03664604(local_50,uVar21);
        puVar18 = (undefined8 *)FUN_036645f0(local_68[0],uVar21);
        HotUIAnimPath::SetStartAndEndPointsAndOffsets
                  ((HotUIAnimPath *)*puVar13,(HotUIWidget *)*puVar18,unaff_x25,(Point *)&local_98,
                   (Point *)&local_a8);
        puVar13 = (undefined8 *)FUN_03664604(local_50,uVar21);
        (**(code **)(*(long *)*puVar13 + 0x158))((long *)*puVar13,1);
      }
      uVar7 = local_50;
      uVar11 = FUN_036645f8(local_50,local_48);
      uVar21 = uVar1;
    } while (uVar1 < uVar11);
  }
  std::vector<HotUIAnimPath*,std::allocator<HotUIAnimPath*>>::~vector
            ((vector<HotUIAnimPath*,std::allocator<HotUIAnimPath*>> *)&local_50);
  std::vector<HotUIAnim*,std::allocator<HotUIAnim*>>::~vector
            ((vector<HotUIAnim*,std::allocator<HotUIAnim*>> *)local_68);
  std::vector<HotUIButton*,std::allocator<HotUIButton*>>::~vector
            ((vector<HotUIButton*,std::allocator<HotUIButton*>> *)&local_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameLevelPackSublayoutAdaptor::onLinkToUIViewCreated() */

void __thiscall
MiniGameLevelPackSublayoutAdaptor::onLinkToUIViewCreated(MiniGameLevelPackSublayoutAdaptor *this)

{
  char cVar1;
  undefined8 uVar2;
  ArcadePropertySheet *this_00;
  HotUIFile *this_01;
  long *plVar3;
  PowerUpUIButton *this_02;
  string *psVar4;
  int iVar5;
  char *__s;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::FindFirstObjectByClass<ArcadePropertySheet>(aRStack_10,uVar2,0x98);
  this_00 = (ArcadePropertySheet *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::string((string *)aRStack_10,"Backdrop");
  HotUIAdaptor::replaceImageWidgetImage
            ((HotUIAdaptor *)this,(string *)aRStack_10,(string *)(this + 0x158));
  std::string::~string((string *)aRStack_10);
  nop();
  this_01 = (HotUIFile *)FUN_036645c4(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)aRStack_10,"ButtonLevel1");
  cVar1 = HotUIFile::HasWidgetByName(this_01,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  if (cVar1 != '\0') {
    std::string::string((string *)aRStack_10,"ButtonLevel1");
    HotUIAdaptor::bindHotUIButtonToTouchID((HotUIAdaptor *)this,(string *)aRStack_10,0);
    std::string::~string((string *)aRStack_10);
    nop();
  }
  std::string::string((string *)aRStack_10,"ButtonLevel2");
  cVar1 = HotUIFile::HasWidgetByName(this_01,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  if (cVar1 != '\0') {
    std::string::string((string *)aRStack_10,"ButtonLevel2");
    HotUIAdaptor::bindHotUIButtonToTouchID((HotUIAdaptor *)this,(string *)aRStack_10,1);
    std::string::~string((string *)aRStack_10);
    nop();
  }
  std::string::string((string *)aRStack_10,"ButtonLevel3");
  cVar1 = HotUIFile::HasWidgetByName(this_01,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  if (cVar1 == '\0') {
    iVar5 = *(int *)(this + 0x180);
    if (iVar5 != 2) goto LAB_03665f58;
LAB_03666084:
    this_02 = (PowerUpUIButton *)GetPowerUpUIButton(this);
    if (this_02 == (PowerUpUIButton *)0x0) goto LAB_03665fe0;
    psVar4 = (string *)
             ArcadePropertySheet::GetPowerUpCollectionByLevelPackID
                       (this_00,(string *)(this + 0x128));
    PowerUpUIButton::SetType(this_02,psVar4,(string *)(this + 0x188));
LAB_03665fa0:
    __s = "GiftBoxAnim";
  }
  else {
    std::string::string((string *)aRStack_10,"ButtonLevel3");
    HotUIAdaptor::bindHotUIButtonToTouchID((HotUIAdaptor *)this,(string *)aRStack_10,2);
    std::string::~string((string *)aRStack_10);
    nop();
    iVar5 = *(int *)(this + 0x180);
    if (iVar5 == 2) goto LAB_03666084;
LAB_03665f58:
    __s = "PowerUpReward";
    if (iVar5 != 1) {
      std::string::string((string *)aRStack_10,"PowerUpReward");
      plVar3 = (long *)HotUIFile::GetWidgetByName(this_01,(string *)aRStack_10);
      (**(code **)(*plVar3 + 0x158))(plVar3,0);
      std::string::~string((string *)aRStack_10);
      nop();
      goto LAB_03665fa0;
    }
  }
  std::string::string((string *)aRStack_10,__s);
  plVar3 = (long *)HotUIFile::GetWidgetByName(this_01,(string *)aRStack_10);
  (**(code **)(*plVar3 + 0x158))(plVar3,0);
  std::string::~string((string *)aRStack_10);
  nop();
LAB_03665fe0:
  RefreshUnlockStatus(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

