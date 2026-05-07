// Class: CreatureType


/* CreatureType::GetAudioGroups() const */

CreatureType * __thiscall CreatureType::GetAudioGroups(CreatureType *this)

{
  return this + 0x58;
}


/* CreatureType::GetPropsPtr() const */

RtWeakPtr<Sexy::SoundResource> * CreatureType::GetPropsPtr(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x70));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CreatureType::StaticClassInit() */

void CreatureType::StaticClassInit(void)

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
    std::string::string(asStack_10,"CreatureType");
    (*pcVar2)(plVar1,asStack_10,FUN_04816ea0,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CreatureType::StaticGetClass() */

long * CreatureType::StaticGetClass(void)

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
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"CreatureType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CreatureType::GetClass() const */

long * CreatureType::GetClass(void)

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
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"CreatureType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CreatureType::GetProps() const */

void __thiscall CreatureType::GetProps(CreatureType *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70));
  return;
}


/* CreatureType::EnsureResourceGroupsLoaded() const */

void __thiscall CreatureType::EnsureResourceGroupsLoaded(CreatureType *this)

{
  LawnApp *this_00;
  char cVar1;
  vector *pvVar2;
  Board *this_01;
  
  this_00 = gLawnApp;
  pvVar2 = (vector *)PlantWarsNetworkMgr::GetPrefixWorld((PlantWarsNetworkMgr *)this);
  cVar1 = LawnApp::IsGroupLoadComplete(this_00,pvVar2);
  if (cVar1 == '\0') {
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    pvVar2 = (vector *)PlantWarsNetworkMgr::GetPrefixWorld((PlantWarsNetworkMgr *)this);
    Board::LoadResourceGroupsForGameplay(this_01,pvVar2);
  }
  cVar1 = LawnApp::IsGroupLoadComplete(gLawnApp,(vector *)(this + 0x58));
  if (cVar1 != '\0') {
    return;
  }
  Board::LoadResourceGroupsForGameplay(*(Board **)(gLawnApp + 0x9f0),(vector *)(this + 0x58));
  return;
}


/* CreatureType::IsCreatureEnabled() const */

undefined8 __thiscall CreatureType::IsCreatureEnabled(CreatureType *this)

{
  long lVar1;
  WorldMapList *this_00;
  undefined8 uVar2;
  
  lVar1 = FUN_05474184((string *)(this + 0x18));
  if (lVar1 == 0) {
    return 1;
  }
  this_00 = (WorldMapList *)WorldMapUtils::GetWorldMapList();
  uVar2 = WorldMapList::IsWorldEnabled(this_00,(string *)(this + 0x18));
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CreatureType::GetAlmanacBackdropName() const */

void CreatureType::GetAlmanacBackdropName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = FUN_0547419c(in_x0 + 0x28);
  if (cVar2 == '\0') {
    FUN_05475d88();
  }
  else {
    cVar2 = FUN_0547419c(in_x0 + 0x18);
    if (cVar2 == '\0') {
      FUN_05475d88();
    }
    else {
      std::string::string(in_x8,"tutorial");
      nop();
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CreatureType::GetFormattedNameString() const */

void CreatureType::GetFormattedNameString(void)

{
  long in_x0;
  undefined8 uVar1;
  string *extraout_x1;
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StringToUpper((Sexy *)(in_x0 + 8),___stack_chk_guard);
  uVar1 = FUN_0547429c(asStack_10);
  Sexy::StrFormat("[CREATURE_%s]",aSStack_18,uVar1);
  std::string::~string(asStack_10);
  Sexy::StringToWString(aSStack_18,extraout_x1);
  TodStringTranslate((wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string((string *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CreatureType::GetFormattedToolTip() const */

void CreatureType::GetFormattedToolTip(void)

{
  long in_x0;
  undefined8 uVar1;
  string *extraout_x1;
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StringToUpper((Sexy *)(in_x0 + 8),___stack_chk_guard);
  uVar1 = FUN_0547429c(asStack_10);
  Sexy::StrFormat("[CREATURE_%s_TOOLTIP]",aSStack_18,uVar1);
  std::string::~string(asStack_10);
  Sexy::StringToWString(aSStack_18,extraout_x1);
  TodStringTranslate((wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string((string *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CreatureType::GetFormattedDescription() const */

void CreatureType::GetFormattedDescription(void)

{
  long in_x0;
  undefined8 uVar1;
  string *extraout_x1;
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StringToUpper((Sexy *)(in_x0 + 8),___stack_chk_guard);
  uVar1 = FUN_0547429c(asStack_10);
  Sexy::StrFormat("[CREATURE_%s_DESCRIPTION]",aSStack_18,uVar1);
  std::string::~string(asStack_10);
  Sexy::StringToWString(aSStack_18,extraout_x1);
  TodStringTranslate((wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string((string *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CreatureType::GetFormattedDescriptionHeader() const */

void CreatureType::GetFormattedDescriptionHeader(void)

{
  long in_x0;
  undefined8 uVar1;
  string *extraout_x1;
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StringToUpper((Sexy *)(in_x0 + 8),___stack_chk_guard);
  uVar1 = FUN_0547429c(asStack_10);
  Sexy::StrFormat("[CREATURE_%s_DESCRIPTION_HEADER]",aSStack_18,uVar1);
  std::string::~string(asStack_10);
  Sexy::StringToWString(aSStack_18,extraout_x1);
  TodStringTranslate((wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string((string *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CreatureType::CreateAnimRig() const */

void __thiscall CreatureType::CreateAnimRig(CreatureType *this)

{
  string *psVar1;
  PopAnim *pPVar2;
  char *pcVar3;
  RtClass *pRVar4;
  undefined8 extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)
           eastl::
           hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           ::get_allocator((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                            *)this);
  GetPAMByName(psVar1);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  GachaConfig::GetGachaPlantRewardList((GachaConfig *)this);
  pcVar3 = (char *)FUN_0547429c();
  pRVar4 = (RtClass *)Sexy::RtClass::StaticGetClassNamed(pcVar3);
  PopAnimRig::CreateRig(pPVar2,pRVar4);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(extraout_x0);
}


/* CreatureType::CreatureType() */

void __thiscall CreatureType::CreatureType(CreatureType *this)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_06903330;
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  Set8BytesTo0(this + 0x30);
  Set8BytesTo0(this + 0x38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x70));
  return;
}


/* CreatureType::StaticNew() */

CreatureType * CreatureType::StaticNew(void)

{
  CreatureType *this;
  
  this = ::operator_new(0x78);
  CreatureType(this);
  return this;
}


/* CreatureType::~CreatureType() */

void __thiscall CreatureType::~CreatureType(CreatureType *this)

{
  *(undefined ***)this = &PTR_GetClass_06903330;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x58));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* CreatureType::~CreatureType() */

void __thiscall CreatureType::~CreatureType(CreatureType *this)

{
  ~CreatureType(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CreatureType::GetDisplayType() const */

void __thiscall CreatureType::GetDisplayType(CreatureType *this)

{
  char cVar1;
  string *psVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(this + 0x20);
  if (cVar1 == '\0') {
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CreatureType>>::GetInstancePtr();
    ObjectTypeDirectory<CreatureType>::GetTypeFromTypeName(psVar2);
    this = (CreatureType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* CreatureType::AddInGameResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) const */

void __thiscall CreatureType::AddInGameResourceRequirements(CreatureType *this,set *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)PlantWarsNetworkMgr::GetPrefixWorld((PlantWarsNetworkMgr *)this);
  uVar2 = FUN_04816d5c(*puVar1);
  lVar3 = PlantWarsNetworkMgr::GetPrefixWorld((PlantWarsNetworkMgr *)this);
  uVar4 = FUN_04816dac(*(undefined8 *)(lVar3 + 8));
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::
  insert<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>>
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,uVar2,
             uVar4);
  puVar1 = (undefined8 *)GetAudioGroups(this);
  uVar2 = FUN_04816d5c(*puVar1);
  lVar3 = GetAudioGroups(this);
  uVar4 = FUN_04816dac(*(undefined8 *)(lVar3 + 8));
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::
  insert<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>>
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,uVar2,
             uVar4);
  return;
}

